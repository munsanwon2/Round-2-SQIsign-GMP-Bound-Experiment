// SPDX-License-Identifier: Apache-2.0
#include <gmp.h>
#include <stdbool.h>
#include <stddef.h>

// One measurement window in the serial experiment process.
static bool measuring;
static size_t max_bits;

void
gmp_peak_begin(void)
{
    max_bits = 0;
    measuring = true;
}

size_t
gmp_peak_end(void)
{
    measuring = false;
    return max_bits;
}

void
gmp_peak_observe(mpz_srcptr value)
{
    if (measuring && mpz_sgn(value) != 0) {
        size_t bits = mpz_sizeinbase(value, 2);
        if (bits > max_bits) {
            max_bits = bits;
        }
    }
}
