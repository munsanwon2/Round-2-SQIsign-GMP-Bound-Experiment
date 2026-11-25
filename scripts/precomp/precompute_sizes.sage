#!/usr/bin/env sage
proof.all(False)  # faster

from sage.misc.banner import require_version
if not require_version(9, 8, print_message=True):
    exit('')

################################################################

from parameters import lvl, f, field_bits, lambda_security, response_length

################################################################

defs = dict()

TORSION_2POWER_BYTES = (f + 8) // 8
RESPONSE_BYTES = (response_length + 9) // 8
RESPONSE_EXPONENT_BYTES = (response_length.bit_length() + 7) // 8

fpsz = (field_bits + 63) // 64 * 8
fp2sz = 2 * fpsz
assert f - response_length >= lambda_security
defs['SECURITY_BITS'] = lambda_security
defs['SQIsign_response_length'] = response_length
defs['RESPONSE_EXPONENT_BYTES'] = RESPONSE_EXPONENT_BYTES
defs['FP_ENCODED_BYTES'] = fpsz
defs['FP2_ENCODED_BYTES'] = fp2sz
defs['EC_CURVE_ENCODED_BYTES'] = fp2sz  # just the A
defs['EC_POINT_ENCODED_BYTES'] = fp2sz  # just the x
defs['EC_BASIS_ENCODED_BYTES'] = 3 * defs['EC_POINT_ENCODED_BYTES']

defs['PUBLICKEY_BYTES'] = defs['EC_CURVE_ENCODED_BYTES'] + 1  # extra byte for hint
defs['SECRETKEY_BYTES'] = defs['PUBLICKEY_BYTES'] + 5*defs['FP_ENCODED_BYTES'] + 4*TORSION_2POWER_BYTES
defs['SIGNATURE_BYTES'] = (
    defs['EC_CURVE_ENCODED_BYTES'] + 2 * RESPONSE_EXPONENT_BYTES
    + 4 * RESPONSE_BYTES + lambda_security // 8 + 2
)

size_privkey = defs['SECRETKEY_BYTES']
size_pubkey = defs['PUBLICKEY_BYTES']
size_signature = defs['SIGNATURE_BYTES']

algname = f'SQIsign_lvl{lvl}'

################################################################

with open('include/encoded_sizes.h','w') as hfile:
    for k,v in defs.items():
        v = ZZ(v)
        print(f'#define {k} {v}', file=hfile)

################################################################

api = f'''
// SPDX-License-Identifier: Apache-2.0

#ifndef api_h
#define api_h

#include <sqisign_namespace.h>

#define CRYPTO_SECRETKEYBYTES {size_privkey}
#define CRYPTO_PUBLICKEYBYTES {size_pubkey}
#define CRYPTO_BYTES {size_signature}

#define CRYPTO_ALGNAME "{algname}"

#if defined(ENABLE_SIGN)
SQISIGN_API
int
crypto_sign_keypair(unsigned char *pk, unsigned char *sk);

SQISIGN_API
int
crypto_sign(unsigned char *sm, unsigned long long *smlen,
            const unsigned char *m, unsigned long long mlen,
            const unsigned char *sk);
#endif

SQISIGN_API
int
crypto_sign_open(unsigned char *m, unsigned long long *mlen,
                 const unsigned char *sm, unsigned long long smlen,
                 const unsigned char *pk);

#endif /* api_h */
'''.strip()

with open(f'../../../nistapi/lvl{lvl}/api.h', 'w') as f:
    print(api, file=f)

