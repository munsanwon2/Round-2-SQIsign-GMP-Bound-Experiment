# SQIsign signing GMP bit-length experiment

This hybrid uses the Round-2 signing, sampling, quaternion, lattice and determinant-based modular HNF algorithms with system GMP. The baseline is the official SQIsign Round-2 C implementation at commit `91e9e464fe5400192d13e1f9240cbf180200a103`. The primes and mixing-degree rule come from the Round-3 specification. [Round-2 source](https://github.com/SQISign/the-sqisign/tree/91e9e464fe5400192d13e1f9240cbf180200a103) · [Round-3 §4.7 and §5.2](https://sqisign.org/spec/sqisign-20260901.pdf)

| Level | λ | p | Bits of p | f | Legacy e_rsp | f − e_rsp | D_mix bits | D_mix − p·2^(2λ) | GMP cofactor − 2^bits(p) |
| --- | ---: | --- | ---: | ---: | ---: | ---: | ---: | ---: | ---: |
| NIST-I | 128 | 3·2^324 − 1 | 326 | 324 | 163 | 161 | 582 | 155 | 249 |
| NIST-III | 192 | 27·2^500 − 1 | 505 | 500 | 253 | 247 | 889 | 1295 | 51 |
| NIST-V | 256 | 17·2^664 − 1 | 669 | 664 | 335 | 329 | 1181 | 81 | 1067 |

`SEC_DEGREE` and `COM_DEGREE` are both the first prime strictly above `p * 2^(2*λ)`.
The legacy response uses `D_rsp = 2^e_rsp` with `e_rsp = ceil(log2(sqrt(p)))`.
KeyGen and commitment use the legacy prime-norm sampling branch. Sign's auxiliary ideal uses the legacy composite-norm branch with `QUAT_prime_cofactor = next_prime(2^bits(p))`.

## Compatibility changes

- The portable fields for NIST-I and V use the generated modulus-specific C arithmetic from Round-3 commit `6d017708db403bf83977fa70770fc4f7f9e9ff21` with Round-2 arrays and padded field encodings. NIST-III uses the Round-2 reference field for the identical prime, with λ explicitly set to 192. [Modulus-specific field sources](https://github.com/SQISign/the-sqisign/tree/6d017708db403bf83977fa70770fc4f7f9e9ff21/src/gf/ref)
- The Round-2 SageMath generators produced the torsion, initial bases, alternate orders, connecting ideals, endomorphism actions and HD splitting data for each level. The legacy counts are 7, 8 and 7 orders, including the starting order. The generators read the field radix from the C backend and retain GMP-format constants.
- The shared Sign/Verify hash uses one SHAKE256 squeeze of λ bits over the original transcript `encode(j(pk)) || encode(j(commitment)) || message`. The little-endian result is zero-extended into the legacy challenge space. Its exponent exceeds λ at each level, so the port uses the specified single-hash convention. The original padded-field-size grinding expression would require `2^31`, `2^9` and `2^23` iterations and exceed the original signed loop counter at NIST-I.
- Response exponent and valuation storage is 16 bits. The serialized backtracking and two-response exponents are each little-endian and occupy one byte at NIST-I/III and two at NIST-V. The existing HD and EC chain length types can hold the new exponents.

## Build

From the top of this source tree, with CMake, a C compiler and GMP development files installed:

```sh
cmake -S . -B build/peak -DSQISIGN_BUILD_TYPE=ref -DGMP_LIBRARY=SYSTEM \
  -DENABLE_SIGN=ON -DENABLE_GMP_PEAK_BITS=ON -DENABLE_TESTS=OFF -DCMAKE_BUILD_TYPE=Release
cmake --build build/peak --target peak_bits_lvl1 peak_bits_lvl3 peak_bits_lvl5 --parallel
```

On the build host, the configure command used
`-DCMAKE_PREFIX_PATH=/opt/homebrew/Caskroom/miniforge/base/envs/sage -DCMAKE_C_COMPILER=/usr/bin/clang`
to select the existing GMP installation and Apple Clang.
The generated tables are included for offline builds with CMake and GMP. The build integration also drops an unused Round-2 macro that conflicts with Apple Clang.

## Run later

```sh
python3 experiments/gmp_peak_bits/run.py --trials 65536 --output results
```

Each trial draws a fresh key pair using the Round-2 system RNG and signs one fixed public message.
The serial driver starts the observer immediately before `protocols_sign` and stops it on return.
The GMP observer checks initialized operands before mutation and defined results after operations. It records the maximum exact magnitude bit length, with zero contributing zero. [GMP bit-length semantics](https://gmplib.org/manual/Miscellaneous-Integer-Functions)

The driver writes `results/peak_bits_lvl1.csv`, `results/peak_bits_lvl3.csv` and `results/peak_bits_lvl5.csv`, each with header `trial,max_bits` and 65,536 rows by default. Each executable prints the maximum of its CSV rows after closing the file. An incomplete level returns a failure status.

## Detached parallel run on a Unix server

From the source root:

```sh
sh experiments/gmp_peak_bits/launch_parallel.sh --trials 65536
```

The launcher prints the background supervisor PID and temporary log path. The runner sets aside one
logical CPU and uses the others for independent signing processes. On Linux it excludes the reserved
CPU from the CPU affinity mask inherited by the build and workers. Each worker uses the system RNG.
The runner validates and joins the CSV chunks in trial order. A successful run keeps the three
completed CSVs in `results/` and removes the temporary build, chunks and log. If a worker fails, the
temporary log records the error. The signing code and measured trial definition are shared with the
serial run.

## Regenerate parameter data

The checked-in data was produced with SageMath 10.7 and the following optional dependencies for the legacy endomorphism-action generator.

```sh
mkdir -p precomp-deps
git clone https://github.com/Jonathke/deuring-2D.git precomp-deps/deuring-2D
git -C precomp-deps/deuring-2D checkout 4f13120e6f4e2cfdbd81e94671fbf7ebeaf8be28
git clone https://github.com/ThetaIsogenies/two-isogenies.git precomp-deps/two-isogenies
git -C precomp-deps/two-isogenies checkout 0ea5020effabde4bdc5e6f425ba5b94209f0e58b
export PYTHONPATH="$PWD/precomp-deps/deuring-2D:$PWD/precomp-deps/two-isogenies/Theta-SageMath${PYTHONPATH:+:$PYTHONPATH}"
cmake -S . -B build/peak -DSAGEMATH="$(command -v sage)"
cmake --build build/peak --target precomp_lvl1 precomp_lvl3 precomp_lvl5
```

The legacy inputs and formulas fix the parameter sets. The Sage generators may choose different valid representatives on regeneration. The shipped tables fix the experiment's precomputed inputs.

## Changed files

- Build and driver changes are in `CMakeLists.txt`, `.cmake/target.cmake` and `experiments/gmp_peak_bits/{CMakeLists.txt,README.md,run.py,sign_peak.c}`.
- Observer changes are in `src/quaternion/ref/generic/{CMakeLists.txt,peak_bits.c,include/intbig.h,include/peak_gmp.h}`.
- Parameter generation and data changes are in `scripts/precomp/{cformat.py,parameters.py,precompute_quaternion_data.sage,precompute_sizes.sage,precompute_torsion_constants.sage}`, `src/precomp/ref/lvl{1,3,5}/` and `src/nistapi/lvl{1,3,5}/api.h`.
- Field backend changes are in `src/gf/ref/lvl{1,3,5}/CMakeLists.txt` and the `fp_*_{32,64}.c` sources for each level. The backend names move from `p5248` to `p324_3`, from `p65376` to `p27500`, and from `p27500` to `p664_17`, respectively.
- Signing and verification compatibility changes are in `src/signature/ref/lvlx/sign.c`, `src/verification/ref/include/verification.h` and `src/verification/ref/lvlx/{common.c,encode_verification.c}`.
