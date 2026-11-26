# Round-2 SQIsign GMP Maximum Bit-Length Experiment

This experiment uses the original Round-2 SQIsign signing implementation and GMP-based integer arithmetic to measure the maximum integer bit length observed during signing with the Round-3 prime and key and commitment mixing degrees. Each trial generates a fresh key pair and signs a fixed public message. Measurements cover the absolute values of integers passed to or returned by GMP integer operations during the `Sign` call.

| Security level | Trials | Maximum observed bit length |
|---|---:|---:|
| NIST-I | 65,536 | 14,901 |
| NIST-III | 65,536 | 22,833 |
| NIST-V | 65,536 | 30,293 |

Each value in the table is the observed maximum of the `max_bits` column in the corresponding CSV file. [Round-2 reference source](https://github.com/SQISign/the-sqisign/tree/91e9e464fe5400192d13e1f9240cbf180200a103) · [Round-3 specification](https://sqisign.org/spec/sqisign-20260901.pdf)

## Repository layout

- [`results/`](results/) contains the final CSV files for [NIST-I](results/peak_bits_lvl1.csv), [NIST-III](results/peak_bits_lvl3.csv), and [NIST-V](results/peak_bits_lvl5.csv). Each file has a `trial,max_bits` header followed by 65,536 rows of per-trial data.
- [`experiments/gmp_peak_bits/`](experiments/gmp_peak_bits/) contains the C experiment driver, sequential and parallel runners, and build and run instructions.
- [`src/`](src/) contains the Round-2 implementation, GMP instrumentation, and tables generated for the new parameters. [`scripts/precomp/`](scripts/precomp/) contains the table generation code.
- `CMakeLists.txt`, `.cmake/`, and `include/` contain the build configuration and public headers.

The [experiment README](experiments/gmp_peak_bits/README.md) documents the parameter choices, compatibility changes, and build commands for system GMP.
