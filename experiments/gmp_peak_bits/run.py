#!/usr/bin/env python3
# SPDX-License-Identifier: Apache-2.0

import argparse
from pathlib import Path
import subprocess
import sys


def main():
    parser = argparse.ArgumentParser(description="Measure maximum GMP bit length during SQIsign Sign.")
    parser.add_argument("--trials", type=int, default=1 << 16, help="signing trials per level (default: 65536)")
    parser.add_argument("--build", type=Path, default=Path("build/peak"), help="CMake binary directory")
    parser.add_argument("--output", type=Path, default=Path("results"), help="CSV output directory")
    args = parser.parse_args()
    if not 0 < args.trials < (1 << 64) - 1:
        parser.error("--trials must be between 1 and 2^64 - 2")

    levels = (1, 3, 5)
    binary_dir = args.build.resolve() / "experiments" / "gmp_peak_bits"
    executables = {level: binary_dir / f"peak_bits_lvl{level}" for level in levels}
    for executable in executables.values():
        if not executable.is_file():
            parser.error(f"missing experiment executable: {executable}")

    try:
        args.output.mkdir(parents=True, exist_ok=True)
        for level, executable in executables.items():
            csv = args.output / f"peak_bits_lvl{level}.csv"
            subprocess.run([str(executable), str(csv), str(args.trials)], check=True)
    except (OSError, subprocess.CalledProcessError) as error:
        print(f"Experiment stopped: {error}", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
