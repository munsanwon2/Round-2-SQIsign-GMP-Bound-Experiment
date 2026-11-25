// SPDX-License-Identifier: Apache-2.0
#include <errno.h>
#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <signature.h>

#define DEFAULT_TRIALS (UINT64_C(1) << 16)

#if PEAK_NIST_LEVEL == 1
#define LEVEL_LABEL "NIST-I:   "
#elif PEAK_NIST_LEVEL == 3
#define LEVEL_LABEL "NIST-III: "
#elif PEAK_NIST_LEVEL == 5
#define LEVEL_LABEL "NIST-V:   "
#else
#error "Unsupported NIST level"
#endif

int
main(int argc, char **argv)
{
    static const unsigned char message[] = "SQIsign GMP signing experiment";
    uint64_t trials = DEFAULT_TRIALS;

    if (argc < 2 || argc > 3) {
        fprintf(stderr, "Usage: %s CSV_PATH [TRIALS]\n", argv[0]);
        return EXIT_FAILURE;
    }
    if (argc == 3) {
        char *end;
        errno = 0;
        uintmax_t count = strtoumax(argv[2], &end, 10);
        if (argv[2][0] < '0' || argv[2][0] > '9' || *end || errno ||
            count == 0 || count >= UINT64_MAX) {
            fprintf(stderr, LEVEL_LABEL "invalid trial count: %s\n", argv[2]);
            return EXIT_FAILURE;
        }
        trials = (uint64_t)count;
    }

    FILE *csv = fopen(argv[1], "w");
    if (!csv) {
        perror(argv[1]);
        return EXIT_FAILURE;
    }
    if (fputs("trial,max_bits\n", csv) == EOF) {
        perror(argv[1]);
        fclose(csv);
        return EXIT_FAILURE;
    }

    size_t level_max = 0;
    for (uint64_t trial = 1; trial <= trials; ++trial) {
        public_key_t pk;
        secret_key_t sk;
        signature_t sig = { 0 };
        public_key_init(&pk);
        secret_key_init(&sk);

        if (!protocols_keygen(&pk, &sk)) {
            fprintf(stderr, LEVEL_LABEL "KeyGen failed on trial %" PRIu64 "\n", trial);
            secret_key_finalize(&sk);
            public_key_finalize(&pk);
            fclose(csv);
            return EXIT_FAILURE;
        }

        gmp_peak_begin();
        int signed_ok = protocols_sign(&sig, &pk, &sk, message, sizeof(message) - 1);
        size_t max_bits = gmp_peak_end();

        secret_key_finalize(&sk);
        public_key_finalize(&pk);
        if (!signed_ok) {
            fprintf(stderr, LEVEL_LABEL "Sign failed on trial %" PRIu64 "\n", trial);
            fclose(csv);
            return EXIT_FAILURE;
        }
        if (fprintf(csv, "%" PRIu64 ",%zu\n", trial, max_bits) < 0) {
            perror(argv[1]);
            fclose(csv);
            return EXIT_FAILURE;
        }
        if (max_bits > level_max) {
            level_max = max_bits;
        }
    }

    if (fclose(csv) == EOF) {
        perror(argv[1]);
        return EXIT_FAILURE;
    }
    if (printf(LEVEL_LABEL "maximum bit size = %zu\n", level_max) < 0 || fflush(stdout) == EOF) {
        perror("stdout");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
