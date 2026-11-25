#!/usr/bin/env python3
# SPDX-License-Identifier: Apache-2.0

import argparse
import csv
import fcntl
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import time
from typing import NamedTuple


ROOT = Path(__file__).resolve().parents[2]
LEVELS = (1, 3, 5)
LABELS = {1: "NIST-I:   ", 3: "NIST-III: ", 5: "NIST-V:   "}
HEADER = ("trial", "max_bits")
CHUNK_SIZE = 256


class Chunk(NamedTuple):
    level: int
    first: int
    count: int
    path: Path


def reserve_cpu():
    if hasattr(os, "sched_getaffinity"):
        cpus = sorted(os.sched_getaffinity(0))
        if len(cpus) < 2:
            raise RuntimeError("At least two available CPUs are needed to reserve one.")
        os.sched_setaffinity(0, cpus[:-1])
        print(f"Using {len(cpus) - 1} workers. Reserved logical CPU {cpus[-1]}.", flush=True)
        return len(cpus) - 1

    workers = (os.cpu_count() or 1) - 1
    if workers < 1:
        raise RuntimeError("At least two available CPUs are needed to reserve one.")
    print(f"Using {workers} workers, one fewer than the logical CPU count.", flush=True)
    return workers


def build_executables(build, workers):
    subprocess.run([
        "cmake", "-S", str(ROOT), "-B", str(build), "-DSQISIGN_BUILD_TYPE=ref",
        "-DGMP_LIBRARY=SYSTEM", "-DENABLE_SIGN=ON", "-DENABLE_GMP_PEAK_BITS=ON",
        "-DENABLE_TESTS=OFF", "-DCMAKE_BUILD_TYPE=Release",
    ], check=True)
    targets = [f"peak_bits_lvl{level}" for level in LEVELS]
    subprocess.run([
        "cmake", "--build", str(build), "--parallel", str(workers), "--target", *targets,
    ], check=True)
    binaries = build / "experiments" / "gmp_peak_bits"
    return {level: binaries / target for level, target in zip(LEVELS, targets)}


def run_chunks(chunks, executables, workers):
    queue = iter(chunks)
    remaining = next(queue, None)
    active = {}
    try:
        while True:
            for process, chunk in tuple(active.items()):
                status = process.poll()
                if status is not None:
                    del active[process]
                    if status != 0:
                        raise RuntimeError(
                            f"NIST level {chunk.level}, trials {chunk.first}–"
                            f"{chunk.first + chunk.count - 1}, exited with status {status}."
                        )
            while remaining is not None and len(active) < workers:
                chunk = remaining
                process = subprocess.Popen([
                    str(executables[chunk.level]), str(chunk.path), str(chunk.count),
                ], stdout=subprocess.DEVNULL)
                active[process] = chunk
                remaining = next(queue, None)
            if not active:
                return
            time.sleep(0.25)
    finally:
        for process in active:
            process.terminate()
        for process in active:
            try:
                process.wait(timeout=5)
            except subprocess.TimeoutExpired:
                process.kill()
                process.wait()


def merge_level(chunks, result):
    maximum = 0
    with tempfile.NamedTemporaryFile(mode="w", encoding="ascii", newline="",
                                     dir=result.parent, delete=False) as output:
        staged = Path(output.name)
        try:
            writer = csv.writer(output, lineterminator="\n")
            writer.writerow(HEADER)
            for chunk in chunks:
                with chunk.path.open(encoding="ascii", newline="") as file:
                    reader = csv.reader(file)
                    if tuple(next(reader, ())) != HEADER:
                        raise ValueError(f"Invalid CSV header in {chunk.path}")
                    count = 0
                    for count, row in enumerate(reader, start=1):
                        if len(row) != 2 or int(row[0]) != count or int(row[1]) < 0 or count > chunk.count:
                            raise ValueError(f"Invalid trial row in {chunk.path}")
                        bits = int(row[1])
                        writer.writerow((chunk.first + count - 1, bits))
                        maximum = max(maximum, bits)
                    if count != chunk.count:
                        raise ValueError(f"Missing trial rows in {chunk.path}")
            output.flush()
            staged.replace(result)
        finally:
            staged.unlink(missing_ok=True)
    return maximum


def main():
    parser = argparse.ArgumentParser(description="Run SQIsign trials in parallel, leaving one CPU available.")
    parser.add_argument("--trials", type=int, default=1 << 16)
    parser.add_argument("--scratch", type=Path, help="Parent directory for temporary build files and CSV chunks.")
    args = parser.parse_args()
    if not 0 < args.trials < (1 << 64) - 1:
        parser.error("--trials must be between 1 and 2^64 - 2")

    output = ROOT / "results"
    output.mkdir(exist_ok=True)
    results = {level: output / f"peak_bits_lvl{level}.csv" for level in LEVELS}
    lock = os.open(output, os.O_RDONLY)
    try:
        fcntl.flock(lock, fcntl.LOCK_EX | fcntl.LOCK_NB)
        if any(result.exists() for result in results.values()):
            raise FileExistsError(f"Experiment CSVs already exist in {output}.")
        workers = reserve_cpu()
        with tempfile.TemporaryDirectory(prefix="sqisign-peak-", dir=args.scratch) as directory:
            scratch = Path(directory)
            executables = build_executables(scratch / "build", workers)
            chunks = [
                Chunk(level, first, min(CHUNK_SIZE, args.trials - first + 1),
                      scratch / f"lvl{level}-{first}.csv")
                for first in range(1, args.trials + 1, CHUNK_SIZE)
                for level in reversed(LEVELS)
            ]
            print(f"Starting {args.trials} signing trials per level.", flush=True)
            run_chunks(chunks, executables, workers)
            for level in LEVELS:
                peak = merge_level((chunk for chunk in chunks if chunk.level == level), results[level])
                print(f"{LABELS[level]}maximum bit size = {peak}", flush=True)
    except (OSError, ValueError, RuntimeError, subprocess.CalledProcessError) as error:
        print(f"Experiment stopped: {error}", file=sys.stderr, flush=True)
        return 1
    finally:
        os.close(lock)
    return 0


if __name__ == "__main__":
    sys.exit(main())
