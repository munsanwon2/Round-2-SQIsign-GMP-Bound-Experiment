#include <string.h>

#include <fips202.h>
#include <tutil.h>
#include <encoded_sizes.h>
#include <ec_params.h>
#include <verification.h>

void
public_key_init(public_key_t *pk)
{
    ec_curve_init(&pk->curve);
}

void
public_key_finalize(public_key_t *pk)
{
}

// compute the challenge as the hash of the message and the commitment curve and public key
void
hash_to_challenge(scalar_t *scalar,
                  const public_key_t *pk,
                  const ec_curve_t *com_curve,
                  const unsigned char *message,
                  size_t length)
{
    unsigned char buf[2 * FP2_ENCODED_BYTES];
    {
        fp2_t j1, j2;
        ec_j_inv(&j1, &pk->curve);
        ec_j_inv(&j2, com_curve);
        fp2_encode(buf, &j1);
        fp2_encode(buf + FP2_ENCODED_BYTES, &j2);
    }

    _Static_assert(SECURITY_BITS <= TORSION_EVEN_POWER - SQIsign_response_length,
                   "Challenge must fit in the legacy challenge space");
    _Static_assert(SECURITY_BITS % 8 == 0 && SECURITY_BITS <= sizeof(scalar_t) * 8,
                   "Challenge must fit in a whole number of scalar bytes");

    // Preserve the legacy transcript. Interpret one lambda-bit SHAKE256 output
    // as a little-endian coefficient in the larger challenge space.
    shake256incctx ctx;
    shake256_inc_init(&ctx);
    shake256_inc_absorb(&ctx, buf, sizeof(buf));
    shake256_inc_absorb(&ctx, message, length);
    shake256_inc_finalize(&ctx);

    memset(*scalar, 0, sizeof(*scalar));
    shake256_inc_squeeze((unsigned char *)*scalar, SECURITY_BITS / 8, &ctx);
#ifdef TARGET_BIG_ENDIAN
    for (int i = 0; i < NWORDS_ORDER; i++) {
        (*scalar)[i] = BSWAP_DIGIT((*scalar)[i]);
    }
#endif
}
