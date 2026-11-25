// SPDX-License-Identifier: Apache-2.0
#ifndef SQISIGN_PEAK_GMP_H
#define SQISIGN_PEAK_GMP_H

#include <gmp.h>
#include <stddef.h>

void gmp_peak_begin(void);
size_t gmp_peak_end(void);
void gmp_peak_observe(mpz_srcptr value);

// Define wrappers while GMP names still resolve to the underlying GMP calls.
// Only GMP operands are observed. Destinations are read after successful writes.

#define PEAK_UNARY(name)                                                             \
    static inline void peak_##name(mpz_ptr result, mpz_srcptr a)                     \
    {                                                                                \
        gmp_peak_observe(a);                                                         \
        name(result, a);                                                             \
        gmp_peak_observe(result);                                                    \
    }

#define PEAK_BINARY(name)                                                            \
    static inline void peak_##name(mpz_ptr result, mpz_srcptr a, mpz_srcptr b)       \
    {                                                                                \
        gmp_peak_observe(a);                                                         \
        gmp_peak_observe(b);                                                         \
        name(result, a, b);                                                          \
        gmp_peak_observe(result);                                                    \
    }

#define PEAK_BINARY_SCALAR(name, type)                                               \
    static inline void peak_##name(mpz_ptr result, mpz_srcptr a, type b)             \
    {                                                                                \
        gmp_peak_observe(a);                                                         \
        name(result, a, b);                                                          \
        gmp_peak_observe(result);                                                    \
    }

#define PEAK_SET_SCALAR(name, type)                                                  \
    static inline void peak_##name(mpz_ptr result, type a)                           \
    {                                                                                \
        name(result, a);                                                             \
        gmp_peak_observe(result);                                                    \
    }

#define PEAK_DIV_QR(name)                                                            \
    static inline void peak_##name(mpz_ptr q, mpz_ptr r, mpz_srcptr a, mpz_srcptr b) \
    {                                                                                \
        gmp_peak_observe(a);                                                         \
        gmp_peak_observe(b);                                                         \
        name(q, r, a, b);                                                            \
        gmp_peak_observe(q);                                                         \
        gmp_peak_observe(r);                                                         \
    }

#define PEAK_READ_UNARY(name, type)                                                  \
    static inline type peak_##name(mpz_srcptr a)                                     \
    {                                                                                \
        gmp_peak_observe(a);                                                         \
        return name(a);                                                              \
    }

#define PEAK_READ_BINARY(name, result_type, arg_type)                                \
    static inline result_type peak_##name(mpz_srcptr a, arg_type b)                  \
    {                                                                                \
        gmp_peak_observe(a);                                                         \
        return name(a, b);                                                           \
    }

#define PEAK_COMPARE(name)                                                           \
    static inline int peak_##name(mpz_srcptr a, mpz_srcptr b)                        \
    {                                                                                \
        gmp_peak_observe(a);                                                         \
        gmp_peak_observe(b);                                                         \
        return name(a, b);                                                           \
    }

PEAK_UNARY(mpz_abs)
PEAK_UNARY(mpz_neg)
PEAK_UNARY(mpz_set)
PEAK_UNARY(mpz_sqrt)
PEAK_BINARY(mpz_add)
PEAK_BINARY(mpz_gcd)
PEAK_BINARY(mpz_mod)
PEAK_BINARY(mpz_mul)
PEAK_BINARY(mpz_sub)
PEAK_BINARY_SCALAR(mpz_add_ui, unsigned long)
PEAK_BINARY_SCALAR(mpz_fdiv_q_2exp, mp_bitcnt_t)
PEAK_BINARY_SCALAR(mpz_mul_2exp, mp_bitcnt_t)
PEAK_BINARY_SCALAR(mpz_pow_ui, unsigned long)
PEAK_BINARY_SCALAR(mpz_sub_ui, unsigned long)
PEAK_BINARY_SCALAR(mpz_tdiv_q_2exp, mp_bitcnt_t)
PEAK_SET_SCALAR(mpz_init_set_si, long)
PEAK_SET_SCALAR(mpz_init_set_ui, unsigned long)
PEAK_SET_SCALAR(mpz_set_d, double)
PEAK_SET_SCALAR(mpz_set_si, long)
PEAK_SET_SCALAR(mpz_set_ui, unsigned long)
PEAK_DIV_QR(mpz_fdiv_qr)
PEAK_DIV_QR(mpz_tdiv_qr)
PEAK_READ_UNARY(mpz_get_si, long)
PEAK_READ_UNARY(mpz_perfect_square_p, int)
PEAK_READ_UNARY(mpz_sgn, int)
PEAK_READ_BINARY(mpz_cmp_si, int, long)
PEAK_READ_BINARY(mpz_cmp_ui, int, unsigned long)
PEAK_READ_BINARY(mpz_fdiv_ui, unsigned long, unsigned long)
PEAK_READ_BINARY(mpz_probab_prime_p, int, int)
PEAK_READ_BINARY(mpz_scan1, mp_bitcnt_t, mp_bitcnt_t)
PEAK_READ_BINARY(mpz_sizeinbase, size_t, int)
PEAK_READ_BINARY(mpz_tstbit, int, mp_bitcnt_t)
PEAK_COMPARE(mpz_cmp)
PEAK_COMPARE(mpz_divisible_p)
PEAK_COMPARE(mpz_legendre)

#undef PEAK_COMPARE
#undef PEAK_READ_BINARY
#undef PEAK_READ_UNARY
#undef PEAK_DIV_QR
#undef PEAK_SET_SCALAR
#undef PEAK_BINARY_SCALAR
#undef PEAK_BINARY
#undef PEAK_UNARY

static inline void
peak_mpz_powm(mpz_ptr result, mpz_srcptr a, mpz_srcptr exp, mpz_srcptr mod)
{
    gmp_peak_observe(a);
    gmp_peak_observe(exp);
    gmp_peak_observe(mod);
    mpz_powm(result, a, exp, mod);
    gmp_peak_observe(result);
}

static inline void
peak_mpz_powm_ui(mpz_ptr result, mpz_srcptr a, unsigned long exp, mpz_srcptr mod)
{
    gmp_peak_observe(a);
    gmp_peak_observe(mod);
    mpz_powm_ui(result, a, exp, mod);
    gmp_peak_observe(result);
}

static inline int
peak_mpz_invert(mpz_ptr result, mpz_srcptr a, mpz_srcptr mod)
{
    gmp_peak_observe(a);
    gmp_peak_observe(mod);
    int success = mpz_invert(result, a, mod);
    if (success) {
        gmp_peak_observe(result);
    }
    return success;
}

static inline void
peak_mpz_gcdext(mpz_ptr gcd, mpz_ptr s, mpz_ptr t, mpz_srcptr a, mpz_srcptr b)
{
    gmp_peak_observe(a);
    gmp_peak_observe(b);
    mpz_gcdext(gcd, s, t, a, b);
    gmp_peak_observe(gcd);
    if (s) {
        gmp_peak_observe(s);
    }
    if (t) {
        gmp_peak_observe(t);
    }
}

static inline unsigned long
peak_mpz_mod_ui(mpz_ptr result, mpz_srcptr a, unsigned long mod)
{
    gmp_peak_observe(a);
    unsigned long remainder = mpz_mod_ui(result, a, mod);
    gmp_peak_observe(result);
    return remainder;
}

static inline void
peak_mpz_swap(mpz_ptr a, mpz_ptr b)
{
    // Swapping only moves the two values already observed here.
    gmp_peak_observe(a);
    gmp_peak_observe(b);
    mpz_swap(a, b);
}

static inline int
peak_mpz_set_str(mpz_ptr result, const char *text, int base)
{
    int status = mpz_set_str(result, text, base);
    if (status == 0) {
        gmp_peak_observe(result);
    }
    return status;
}

static inline char *
peak_mpz_get_str(char *text, int base, mpz_srcptr a)
{
    gmp_peak_observe(a);
    return mpz_get_str(text, base, a);
}

static inline double
peak_mpz_get_d_2exp(long *exp, mpz_srcptr a)
{
    gmp_peak_observe(a);
    return mpz_get_d_2exp(exp, a);
}

static inline void
peak_mpz_import(mpz_ptr result, size_t count, int order, size_t size, int endian, size_t nails, const void *source)
{
    mpz_import(result, count, order, size, endian, nails, source);
    gmp_peak_observe(result);
}

static inline void *
peak_mpz_export(void *result, size_t *count, int order, size_t size, int endian, size_t nails, mpz_srcptr a)
{
    gmp_peak_observe(a);
    return mpz_export(result, count, order, size, endian, nails, a);
}

static inline mpz_srcptr
peak_mpz_roinit_n(mpz_ptr result, mp_srcptr limbs, mp_size_t count)
{
    mpz_srcptr initialized = mpz_roinit_n(result, limbs, count);
    gmp_peak_observe(initialized);
    return initialized;
}

// Intercept the APIs at their call boundaries, including calls outside intbig.c.
#undef mpz_abs
#define mpz_abs peak_mpz_abs
#undef mpz_add
#define mpz_add peak_mpz_add
#undef mpz_add_ui
#define mpz_add_ui peak_mpz_add_ui
#undef mpz_cmp
#define mpz_cmp peak_mpz_cmp
#undef mpz_cmp_si
#define mpz_cmp_si peak_mpz_cmp_si
#undef mpz_cmp_ui
#define mpz_cmp_ui peak_mpz_cmp_ui
#undef mpz_divisible_p
#define mpz_divisible_p peak_mpz_divisible_p
#undef mpz_export
#define mpz_export peak_mpz_export
#undef mpz_fdiv_q_2exp
#define mpz_fdiv_q_2exp peak_mpz_fdiv_q_2exp
#undef mpz_fdiv_qr
#define mpz_fdiv_qr peak_mpz_fdiv_qr
#undef mpz_fdiv_ui
#define mpz_fdiv_ui peak_mpz_fdiv_ui
#undef mpz_gcd
#define mpz_gcd peak_mpz_gcd
#undef mpz_gcdext
#define mpz_gcdext peak_mpz_gcdext
#undef mpz_get_d_2exp
#define mpz_get_d_2exp peak_mpz_get_d_2exp
#undef mpz_get_si
#define mpz_get_si peak_mpz_get_si
#undef mpz_get_str
#define mpz_get_str peak_mpz_get_str
#undef mpz_import
#define mpz_import peak_mpz_import
#undef mpz_init_set_si
#define mpz_init_set_si peak_mpz_init_set_si
#undef mpz_init_set_ui
#define mpz_init_set_ui peak_mpz_init_set_ui
#undef mpz_invert
#define mpz_invert peak_mpz_invert
#undef mpz_legendre
#define mpz_legendre peak_mpz_legendre
#undef mpz_mod
#define mpz_mod peak_mpz_mod
#undef mpz_mod_ui
#define mpz_mod_ui peak_mpz_mod_ui
#undef mpz_mul
#define mpz_mul peak_mpz_mul
#undef mpz_mul_2exp
#define mpz_mul_2exp peak_mpz_mul_2exp
#undef mpz_neg
#define mpz_neg peak_mpz_neg
#undef mpz_perfect_square_p
#define mpz_perfect_square_p peak_mpz_perfect_square_p
#undef mpz_pow_ui
#define mpz_pow_ui peak_mpz_pow_ui
#undef mpz_powm
#define mpz_powm peak_mpz_powm
#undef mpz_powm_ui
#define mpz_powm_ui peak_mpz_powm_ui
#undef mpz_probab_prime_p
#define mpz_probab_prime_p peak_mpz_probab_prime_p
#undef mpz_roinit_n
#define mpz_roinit_n peak_mpz_roinit_n
#undef mpz_scan1
#define mpz_scan1 peak_mpz_scan1
#undef mpz_set
#define mpz_set peak_mpz_set
#undef mpz_set_d
#define mpz_set_d peak_mpz_set_d
#undef mpz_set_si
#define mpz_set_si peak_mpz_set_si
#undef mpz_set_str
#define mpz_set_str peak_mpz_set_str
#undef mpz_set_ui
#define mpz_set_ui peak_mpz_set_ui
#undef mpz_sgn
#define mpz_sgn peak_mpz_sgn
#undef mpz_sizeinbase
#define mpz_sizeinbase peak_mpz_sizeinbase
#undef mpz_sqrt
#define mpz_sqrt peak_mpz_sqrt
#undef mpz_sub
#define mpz_sub peak_mpz_sub
#undef mpz_sub_ui
#define mpz_sub_ui peak_mpz_sub_ui
#undef mpz_swap
#define mpz_swap peak_mpz_swap
#undef mpz_tdiv_q_2exp
#define mpz_tdiv_q_2exp peak_mpz_tdiv_q_2exp
#undef mpz_tdiv_qr
#define mpz_tdiv_qr peak_mpz_tdiv_qr
#undef mpz_tstbit
#define mpz_tstbit peak_mpz_tstbit

#endif
