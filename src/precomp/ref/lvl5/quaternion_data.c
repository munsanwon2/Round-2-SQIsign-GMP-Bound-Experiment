#include <stddef.h>
#include <stdint.h>
#include <quaternion_data.h>
const ibz_t QUAT_prime_cofactor = 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 42, ._mp_d = (mp_limb_t[]) {0x42b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2000}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x42b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20000000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x42b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20000000}}}
#endif
;
const quat_alg_t QUATALG_PINFTY = {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 42, ._mp_d = (mp_limb_t[]) {0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x10ff}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x10ffffff}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xffffffffffffffff,0xffffffffffffffff,0xffffffffffffffff,0xffffffffffffffff,0xffffffffffffffff,0xffffffffffffffff,0xffffffffffffffff,0xffffffffffffffff,0xffffffffffffffff,0xffffffffffffffff,0x10ffffff}}}
#endif
};
const quat_p_extremal_maximal_order_t EXTREMAL_ORDERS[7] = {{{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
}}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}}, 1}, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xd43c,0xb4ce,0xe199,0xab49,0x656b,0x3b53,0xa425,0x94ed,0x95a1,0x37bc,0xe647,0xf8a,0x5ac2,0xd3e2,0x6912,0xe566,0x9c7d,0xe16,0x8783,0x1b97,0x97aa}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xb4ced43c,0xab49e199,0x3b53656b,0x94eda425,0x37bc95a1,0xf8ae647,0xd3e25ac2,0xe5666912,0xe169c7d,0x1b978783,0x97aa}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xab49e199b4ced43c,0x94eda4253b53656b,0xf8ae64737bc95a1,0xe5666912d3e25ac2,0x1b9787830e169c7d,0x97aa}}}
#endif
, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xd43c,0xb4ce,0xe199,0xab49,0x656b,0x3b53,0xa425,0x94ed,0x95a1,0x37bc,0xe647,0xf8a,0x5ac2,0xd3e2,0x6912,0xe566,0x9c7d,0xe16,0x8783,0x1b97,0x97aa}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xb4ced43c,0xab49e199,0x3b53656b,0x94eda425,0x37bc95a1,0xf8ae647,0xd3e25ac2,0xe5666912,0xe169c7d,0x1b978783,0x97aa}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xab49e199b4ced43c,0x94eda4253b53656b,0xf8ae64737bc95a1,0xe5666912d3e25ac2,0x1b9787830e169c7d,0x97aa}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x6a1e,0xda67,0xf0cc,0xd5a4,0xb2b5,0x9da9,0xd212,0xca76,0x4ad0,0x9bde,0x7323,0x7c5,0x2d61,0x69f1,0x3489,0xf2b3,0x4e3e,0x870b,0xc3c1,0xdcb,0x4bd5}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xda676a1e,0xd5a4f0cc,0x9da9b2b5,0xca76d212,0x9bde4ad0,0x7c57323,0x69f12d61,0xf2b33489,0x870b4e3e,0xdcbc3c1,0x4bd5}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xd5a4f0ccda676a1e,0xca76d2129da9b2b5,0x7c573239bde4ad0,0xf2b3348969f12d61,0xdcbc3c1870b4e3e,0x4bd5}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -21, ._mp_d = (mp_limb_t[]) {0x1393,0x14f3,0x5df6,0x7c94,0x151b,0xb7a6,0xc788,0x481a,0xb648,0xd852,0x8967,0x847d,0x93e0,0x264c,0x5de1,0x9972,0x9212,0x5744,0xb089,0xa5eb,0x4ece}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0x14f31393,0x7c945df6,0xb7a6151b,0x481ac788,0xd852b648,0x847d8967,0x264c93e0,0x99725de1,0x57449212,0xa5ebb089,0x4ece}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0x7c945df614f31393,0x481ac788b7a6151b,0x847d8967d852b648,0x99725de1264c93e0,0xa5ebb08957449212,0x4ece}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -42, ._mp_d = (mp_limb_t[]) {0xb912,0xd315,0xb5c9,0xa55f,0x9fee,0x9d7e,0xa242,0x15a1,0x37c,0x274c,0xf9f,0xf48c,0x2c5c,0x584a,0x8290,0xfad5,0xc56b,0x33c7,0xe829,0x64f9,0x17a4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x880}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -21, ._mp_d = (mp_limb_t[]) {0xd315b912,0xa55fb5c9,0x9d7e9fee,0x15a1a242,0x274c037c,0xf48c0f9f,0x584a2c5c,0xfad58290,0x33c7c56b,0x64f9e829,0x17a4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8800000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0xa55fb5c9d315b912,0x15a1a2429d7e9fee,0xf48c0f9f274c037c,0xfad58290584a2c5c,0x64f9e82933c7c56b,0x17a4,0x0,0x0,0x0,0x0,0x8800000}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x6a1e,0xda67,0xf0cc,0xd5a4,0xb2b5,0x9da9,0xd212,0xca76,0x4ad0,0x9bde,0x7323,0x7c5,0x2d61,0x69f1,0x3489,0xf2b3,0x4e3e,0x870b,0xc3c1,0xdcb,0x4bd5}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xda676a1e,0xd5a4f0cc,0x9da9b2b5,0xca76d212,0x9bde4ad0,0x7c57323,0x69f12d61,0xf2b33489,0x870b4e3e,0xdcbc3c1,0x4bd5}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xd5a4f0ccda676a1e,0xca76d2129da9b2b5,0x7c573239bde4ad0,0xf2b3348969f12d61,0xdcbc3c1870b4e3e,0x4bd5}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x5}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x5}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x5}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xe85a,0x9bb1,0x3c98,0x8c75,0x354f,0xdf2a,0xe0c0,0x735,0xabd4,0x626e,0x5a8a,0xa6d9,0xec9,0x1d6e,0xd630,0xa8f1,0x41ce,0xbbed,0xf80d,0x76fd,0x7e1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x9bb1e85a,0x8c753c98,0xdf2a354f,0x735e0c0,0x626eabd4,0xa6d95a8a,0x1d6e0ec9,0xa8f1d630,0xbbed41ce,0x76fdf80d,0x7e1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x8c753c989bb1e85a,0x735e0c0df2a354f,0xa6d95a8a626eabd4,0xa8f1d6301d6e0ec9,0x76fdf80dbbed41ce,0x7e1}}}
#endif
}}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xd43c,0xb4ce,0xe199,0xab49,0x656b,0x3b53,0xa425,0x94ed,0x95a1,0x37bc,0xe647,0xf8a,0x5ac2,0xd3e2,0x6912,0xe566,0x9c7d,0xe16,0x8783,0x1b97,0x97aa}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xb4ced43c,0xab49e199,0x3b53656b,0x94eda425,0x37bc95a1,0xf8ae647,0xd3e25ac2,0xe5666912,0xe169c7d,0x1b978783,0x97aa}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xab49e199b4ced43c,0x94eda4253b53656b,0xf8ae64737bc95a1,0xe5666912d3e25ac2,0x1b9787830e169c7d,0x97aa}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -21, ._mp_d = (mp_limb_t[]) {0x1393,0x14f3,0x5df6,0x7c94,0x151b,0xb7a6,0xc788,0x481a,0xb648,0xd852,0x8967,0x847d,0x93e0,0x264c,0x5de1,0x9972,0x9212,0x5744,0xb089,0xa5eb,0x4ece}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0x14f31393,0x7c945df6,0xb7a6151b,0x481ac788,0xd852b648,0x847d8967,0x264c93e0,0x99725de1,0x57449212,0xa5ebb089,0x4ece}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0x7c945df614f31393,0x481ac788b7a6151b,0x847d8967d852b648,0x99725de1264c93e0,0xa5ebb08957449212,0x4ece}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x5}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x5}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x5}}}
#endif
}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}}, 5}, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1000}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x1000}}}
#endif
, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1000}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x1000}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x800}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x800}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x800}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -42, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -21, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x800000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x800000}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x800}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x800}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x800}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1000}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x0,0x0,0x0,0x0,0x0,0x1000}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}}, 17}, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0xc62,0x1102,0x858,0x5382,0x31bc,0xb878,0xc695,0x8e44,0x96ea,0x629c,0xb848,0x1f3f,0x4e63,0xc36c,0x1f9a,0xcf20,0x487b,0x7d13,0xb176,0xaf47,0x7369,0xa}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x11020c62,0x53820858,0xb87831bc,0x8e44c695,0x629c96ea,0x1f3fb848,0xc36c4e63,0xcf201f9a,0x7d13487b,0xaf47b176,0xa7369}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x5382085811020c62,0x8e44c695b87831bc,0x1f3fb848629c96ea,0xcf201f9ac36c4e63,0xaf47b1767d13487b,0xa7369}}}
#endif
, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0xc62,0x1102,0x858,0x5382,0x31bc,0xb878,0xc695,0x8e44,0x96ea,0x629c,0xb848,0x1f3f,0x4e63,0xc36c,0x1f9a,0xcf20,0x487b,0x7d13,0xb176,0xaf47,0x7369,0xa}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x11020c62,0x53820858,0xb87831bc,0x8e44c695,0x629c96ea,0x1f3fb848,0xc36c4e63,0xcf201f9a,0x7d13487b,0xaf47b176,0xa7369}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x5382085811020c62,0x8e44c695b87831bc,0x1f3fb848629c96ea,0xcf201f9ac36c4e63,0xaf47b1767d13487b,0xa7369}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x631,0x881,0x42c,0x29c1,0x18de,0xdc3c,0x634a,0x4722,0x4b75,0x314e,0xdc24,0x8f9f,0x2731,0x61b6,0xfcd,0xe790,0xa43d,0x3e89,0xd8bb,0xd7a3,0x39b4,0x5}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x8810631,0x29c1042c,0xdc3c18de,0x4722634a,0x314e4b75,0x8f9fdc24,0x61b62731,0xe7900fcd,0x3e89a43d,0xd7a3d8bb,0x539b4}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x29c1042c08810631,0x4722634adc3c18de,0x8f9fdc24314e4b75,0xe7900fcd61b62731,0xd7a3d8bb3e89a43d,0x539b4}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -22, ._mp_d = (mp_limb_t[]) {0x3822,0xa57e,0xf00d,0xcc3a,0xab66,0xd3e2,0xaf38,0x2ce0,0x6d6d,0x3786,0x7a3d,0x3d83,0x3aee,0xcc1b,0xc73c,0x238,0xa6cf,0xb25d,0x4a46,0x5df,0xaf3d,0x2f}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0xa57e3822,0xcc3af00d,0xd3e2ab66,0x2ce0af38,0x37866d6d,0x3d837a3d,0xcc1b3aee,0x238c73c,0xb25da6cf,0x5df4a46,0x2faf3d}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0xcc3af00da57e3822,0x2ce0af38d3e2ab66,0x3d837a3d37866d6d,0x238c73ccc1b3aee,0x5df4a46b25da6cf,0x2faf3d}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 42, ._mp_d = (mp_limb_t[]) {0xaa01,0xfadf,0xf0cd,0x7bd4,0x591,0x5c6,0xbd4d,0xbc1a,0x788e,0xfca,0xea35,0x3dc2,0xeb03,0xa805,0xb39,0xf1cd,0x1d9d,0xbbf2,0x71a3,0x62fc,0x7242,0xffeb,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x21ff}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xfadfaa01,0x7bd4f0cd,0x5c60591,0xbc1abd4d,0xfca788e,0x3dc2ea35,0xa805eb03,0xf1cd0b39,0xbbf21d9d,0x62fc71a3,0xffeb7242,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x21ffffff}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x7bd4f0cdfadfaa01,0xbc1abd4d05c60591,0x3dc2ea350fca788e,0xf1cd0b39a805eb03,0x62fc71a3bbf21d9d,0xffffffffffeb7242,0xffffffffffffffff,0xffffffffffffffff,0xffffffffffffffff,0xffffffffffffffff,0x21ffffff}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x631,0x881,0x42c,0x29c1,0x18de,0xdc3c,0x634a,0x4722,0x4b75,0x314e,0xdc24,0x8f9f,0x2731,0x61b6,0xfcd,0xe790,0xa43d,0x3e89,0xd8bb,0xd7a3,0x39b4,0x5}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x8810631,0x29c1042c,0xdc3c18de,0x4722634a,0x314e4b75,0x8f9fdc24,0x61b62731,0xe7900fcd,0x3e89a43d,0xd7a3d8bb,0x539b4}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x29c1042c08810631,0x4722634adc3c18de,0x8f9fdc24314e4b75,0xe7900fcd61b62731,0xd7a3d8bb3e89a43d,0x539b4}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x74}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x74}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x74}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xb1b7,0x3367,0x9a35,0x387c,0xd6d1,0x5bed,0xc53a,0x54a2,0x6bd1,0xeae3,0x29d4,0x9721,0xe21e,0x384,0x5bb6,0x5cba,0x3c41,0xc548,0x5b1,0x397b,0xd278}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x3367b1b7,0x387c9a35,0x5bedd6d1,0x54a2c53a,0xeae36bd1,0x972129d4,0x384e21e,0x5cba5bb6,0xc5483c41,0x397b05b1,0xd278}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x387c9a353367b1b7,0x54a2c53a5bedd6d1,0x972129d4eae36bd1,0x5cba5bb60384e21e,0x397b05b1c5483c41,0xd278}}}
#endif
}}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0xc62,0x1102,0x858,0x5382,0x31bc,0xb878,0xc695,0x8e44,0x96ea,0x629c,0xb848,0x1f3f,0x4e63,0xc36c,0x1f9a,0xcf20,0x487b,0x7d13,0xb176,0xaf47,0x7369,0xa}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x11020c62,0x53820858,0xb87831bc,0x8e44c695,0x629c96ea,0x1f3fb848,0xc36c4e63,0xcf201f9a,0x7d13487b,0xaf47b176,0xa7369}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x5382085811020c62,0x8e44c695b87831bc,0x1f3fb848629c96ea,0xcf201f9ac36c4e63,0xaf47b1767d13487b,0xa7369}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -22, ._mp_d = (mp_limb_t[]) {0x3822,0xa57e,0xf00d,0xcc3a,0xab66,0xd3e2,0xaf38,0x2ce0,0x6d6d,0x3786,0x7a3d,0x3d83,0x3aee,0xcc1b,0xc73c,0x238,0xa6cf,0xb25d,0x4a46,0x5df,0xaf3d,0x2f}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0xa57e3822,0xcc3af00d,0xd3e2ab66,0x2ce0af38,0x37866d6d,0x3d837a3d,0xcc1b3aee,0x238c73c,0xb25da6cf,0x5df4a46,0x2faf3d}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0xcc3af00da57e3822,0x2ce0af38d3e2ab66,0x3d837a3d37866d6d,0x238c73ccc1b3aee,0x5df4a46b25da6cf,0x2faf3d}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x74}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x74}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x74}}}
#endif
}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}}, 29}, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x664a,0xef3c,0xfa87,0x8f9,0x9164,0xc032,0xb441,0x3c6f,0xf8f7,0x251,0xc1da,0x817b,0xe330,0x17da,0x9411,0xd0f3,0x5fcb,0x471d,0x2a89,0x97d2,0xd0f4,0x12}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xef3c664a,0x8f9fa87,0xc0329164,0x3c6fb441,0x251f8f7,0x817bc1da,0x17dae330,0xd0f39411,0x471d5fcb,0x97d22a89,0x12d0f4}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x8f9fa87ef3c664a,0x3c6fb441c0329164,0x817bc1da0251f8f7,0xd0f3941117dae330,0x97d22a89471d5fcb,0x12d0f4}}}
#endif
, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x664a,0xef3c,0xfa87,0x8f9,0x9164,0xc032,0xb441,0x3c6f,0xf8f7,0x251,0xc1da,0x817b,0xe330,0x17da,0x9411,0xd0f3,0x5fcb,0x471d,0x2a89,0x97d2,0xd0f4,0x12}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xef3c664a,0x8f9fa87,0xc0329164,0x3c6fb441,0x251f8f7,0x817bc1da,0x17dae330,0xd0f39411,0x471d5fcb,0x97d22a89,0x12d0f4}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x8f9fa87ef3c664a,0x3c6fb441c0329164,0x817bc1da0251f8f7,0xd0f3941117dae330,0x97d22a89471d5fcb,0x12d0f4}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x3325,0xf79e,0xfd43,0x47c,0x48b2,0xe019,0xda20,0x9e37,0xfc7b,0x128,0xe0ed,0x40bd,0x7198,0x8bed,0xca08,0xe879,0xafe5,0xa38e,0x1544,0x4be9,0x687a,0x9}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xf79e3325,0x47cfd43,0xe01948b2,0x9e37da20,0x128fc7b,0x40bde0ed,0x8bed7198,0xe879ca08,0xa38eafe5,0x4be91544,0x9687a}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x47cfd43f79e3325,0x9e37da20e01948b2,0x40bde0ed0128fc7b,0xe879ca088bed7198,0x4be91544a38eafe5,0x9687a}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0xdc9e,0x1e5c,0xaf0a,0xcea,0x36cc,0xf476,0xf1c2,0xc892,0xc2f8,0xa130,0x94cc,0x7482,0xa9f5,0x64d4,0x4a7a,0xc8e6,0xd816,0xb801,0xf38,0xd911,0xf7d3,0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x1e5cdc9e,0xceaaf0a,0xf47636cc,0xc892f1c2,0xa130c2f8,0x748294cc,0x64d4a9f5,0xc8e64a7a,0xb801d816,0xd9110f38,0x2f7d3}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xceaaf0a1e5cdc9e,0xc892f1c2f47636cc,0x748294cca130c2f8,0xc8e64a7a64d4a9f5,0xd9110f38b801d816,0x2f7d3}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 42, ._mp_d = (mp_limb_t[]) {0xe9a5,0x419b,0x6b91,0xd3ee,0x95f8,0x89f0,0x96dd,0xab8b,0x48c9,0x444b,0xa7e4,0x38a8,0xe664,0x82ed,0x731b,0xdc16,0x75f9,0xf20e,0x92fa,0xd040,0xb2,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x6600}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x419be9a5,0xd3ee6b91,0x89f095f8,0xab8b96dd,0x444b48c9,0x38a8a7e4,0x82ede664,0xdc16731b,0xf20e75f9,0xd04092fa,0x100b2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x66000000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xd3ee6b91419be9a5,0xab8b96dd89f095f8,0x38a8a7e4444b48c9,0xdc16731b82ede664,0xd04092faf20e75f9,0x100b2,0x0,0x0,0x0,0x0,0x66000000}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x3325,0xf79e,0xfd43,0x47c,0x48b2,0xe019,0xda20,0x9e37,0xfc7b,0x128,0xe0ed,0x40bd,0x7198,0x8bed,0xca08,0xe879,0xafe5,0xa38e,0x1544,0x4be9,0x687a,0x9}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xf79e3325,0x47cfd43,0xe01948b2,0x9e37da20,0x128fc7b,0x40bde0ed,0x8bed7198,0xe879ca08,0xa38eafe5,0x4be91544,0x9687a}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x47cfd43f79e3325,0x9e37da20e01948b2,0x40bde0ed0128fc7b,0xe879ca088bed7198,0x4be91544a38eafe5,0x9687a}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1bc}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1bc}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1bc}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -21, ._mp_d = (mp_limb_t[]) {0xdfcd,0xa676,0x93a9,0x6ee0,0x8b1e,0xa95b,0xd2d5,0x3a0f,0x1764,0x2bb1,0x62e0,0x3577,0x937,0x23f5,0xed8,0xcb5d,0x89d6,0x1e29,0xa9b8,0x97b0,0xa44}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0xa676dfcd,0x6ee093a9,0xa95b8b1e,0x3a0fd2d5,0x2bb11764,0x357762e0,0x23f50937,0xcb5d0ed8,0x1e2989d6,0x97b0a9b8,0xa44}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0x6ee093a9a676dfcd,0x3a0fd2d5a95b8b1e,0x357762e02bb11764,0xcb5d0ed823f50937,0x97b0a9b81e2989d6,0xa44}}}
#endif
}}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x664a,0xef3c,0xfa87,0x8f9,0x9164,0xc032,0xb441,0x3c6f,0xf8f7,0x251,0xc1da,0x817b,0xe330,0x17da,0x9411,0xd0f3,0x5fcb,0x471d,0x2a89,0x97d2,0xd0f4,0x12}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xef3c664a,0x8f9fa87,0xc0329164,0x3c6fb441,0x251f8f7,0x817bc1da,0x17dae330,0xd0f39411,0x471d5fcb,0x97d22a89,0x12d0f4}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x8f9fa87ef3c664a,0x3c6fb441c0329164,0x817bc1da0251f8f7,0xd0f3941117dae330,0x97d22a89471d5fcb,0x12d0f4}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0xdc9e,0x1e5c,0xaf0a,0xcea,0x36cc,0xf476,0xf1c2,0xc892,0xc2f8,0xa130,0x94cc,0x7482,0xa9f5,0x64d4,0x4a7a,0xc8e6,0xd816,0xb801,0xf38,0xd911,0xf7d3,0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x1e5cdc9e,0xceaaf0a,0xf47636cc,0xc892f1c2,0xa130c2f8,0x748294cc,0x64d4a9f5,0xc8e64a7a,0xb801d816,0xd9110f38,0x2f7d3}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xceaaf0a1e5cdc9e,0xc892f1c2f47636cc,0x748294cca130c2f8,0xc8e64a7a64d4a9f5,0xd9110f38b801d816,0x2f7d3}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1bc}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1bc}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1bc}}}
#endif
}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}}, 37}, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x89c4,0xe0fb,0x8926,0xe06d,0x2597,0x8bf6,0xadfe,0xd43d,0xfbf3,0x8239,0x7821,0x90ee,0x1144,0xab25,0x958b,0xad12,0x8102,0x9988,0x6fb9,0x63d7,0xa88,0x6}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xe0fb89c4,0xe06d8926,0x8bf62597,0xd43dadfe,0x8239fbf3,0x90ee7821,0xab251144,0xad12958b,0x99888102,0x63d76fb9,0x60a88}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xe06d8926e0fb89c4,0xd43dadfe8bf62597,0x90ee78218239fbf3,0xad12958bab251144,0x63d76fb999888102,0x60a88}}}
#endif
, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x89c4,0xe0fb,0x8926,0xe06d,0x2597,0x8bf6,0xadfe,0xd43d,0xfbf3,0x8239,0x7821,0x90ee,0x1144,0xab25,0x958b,0xad12,0x8102,0x9988,0x6fb9,0x63d7,0xa88,0x6}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xe0fb89c4,0xe06d8926,0x8bf62597,0xd43dadfe,0x8239fbf3,0x90ee7821,0xab251144,0xad12958b,0x99888102,0x63d76fb9,0x60a88}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xe06d8926e0fb89c4,0xd43dadfe8bf62597,0x90ee78218239fbf3,0xad12958bab251144,0x63d76fb999888102,0x60a88}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0xc4e2,0x707d,0xc493,0xf036,0x12cb,0x45fb,0xd6ff,0xea1e,0xfdf9,0xc11c,0x3c10,0x4877,0x88a2,0xd592,0x4ac5,0x5689,0x4081,0xccc4,0xb7dc,0x31eb,0x544,0x3}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x707dc4e2,0xf036c493,0x45fb12cb,0xea1ed6ff,0xc11cfdf9,0x48773c10,0xd59288a2,0x56894ac5,0xccc44081,0x31ebb7dc,0x30544}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xf036c493707dc4e2,0xea1ed6ff45fb12cb,0x48773c10c11cfdf9,0x56894ac5d59288a2,0x31ebb7dcccc44081,0x30544}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -22, ._mp_d = (mp_limb_t[]) {0x24ef,0x1a39,0x49b9,0xe546,0x2ac6,0xb46b,0xdb2e,0x8f2,0xe8f2,0x1ecc,0x2d1e,0x11a4,0x33aa,0xa7ca,0x5d30,0x3af6,0x49f9,0x4c0e,0x5bbb,0xcdd5,0x3619,0x25}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0x1a3924ef,0xe54649b9,0xb46b2ac6,0x8f2db2e,0x1ecce8f2,0x11a42d1e,0xa7ca33aa,0x3af65d30,0x4c0e49f9,0xcdd55bbb,0x253619}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0xe54649b91a3924ef,0x8f2db2eb46b2ac6,0x11a42d1e1ecce8f2,0x3af65d30a7ca33aa,0xcdd55bbb4c0e49f9,0x253619}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 42, ._mp_d = (mp_limb_t[]) {0xec36,0xd811,0xf7b5,0x34a4,0xd6d8,0xed07,0x586a,0x5fdd,0x393b,0xb9e8,0xc62d,0xf1cb,0xc977,0xae0b,0x20e0,0x6565,0xc5a5,0xb518,0x9b4a,0x2f9c,0x35a3,0xffef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x87f}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xd811ec36,0x34a4f7b5,0xed07d6d8,0x5fdd586a,0xb9e8393b,0xf1cbc62d,0xae0bc977,0x656520e0,0xb518c5a5,0x2f9c9b4a,0xffef35a3,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x87fffff}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x34a4f7b5d811ec36,0x5fdd586aed07d6d8,0xf1cbc62db9e8393b,0x656520e0ae0bc977,0x2f9c9b4ab518c5a5,0xffffffffffef35a3,0xffffffffffffffff,0xffffffffffffffff,0xffffffffffffffff,0xffffffffffffffff,0x87fffff}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0xc4e2,0x707d,0xc493,0xf036,0x12cb,0x45fb,0xd6ff,0xea1e,0xfdf9,0xc11c,0x3c10,0x4877,0x88a2,0xd592,0x4ac5,0x5689,0x4081,0xccc4,0xb7dc,0x31eb,0x544,0x3}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x707dc4e2,0xf036c493,0x45fb12cb,0xea1ed6ff,0xc11cfdf9,0x48773c10,0xd59288a2,0x56894ac5,0xccc44081,0x31ebb7dc,0x30544}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xf036c493707dc4e2,0xea1ed6ff45fb12cb,0x48773c10c11cfdf9,0x56894ac5d59288a2,0x31ebb7dcccc44081,0x30544}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x29}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x29}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x29}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x9fbe,0x994b,0x724,0xe9d2,0x5b0e,0x91cf,0xb180,0x1915,0xab6d,0x3253,0x772f,0x3ea7,0x38d3,0x407c,0x13de,0x80b8,0xfaa8,0x16c7,0xd24a,0x5a1,0x742c}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x994b9fbe,0xe9d20724,0x91cf5b0e,0x1915b180,0x3253ab6d,0x3ea7772f,0x407c38d3,0x80b813de,0x16c7faa8,0x5a1d24a,0x742c}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xe9d20724994b9fbe,0x1915b18091cf5b0e,0x3ea7772f3253ab6d,0x80b813de407c38d3,0x5a1d24a16c7faa8,0x742c}}}
#endif
}}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x89c4,0xe0fb,0x8926,0xe06d,0x2597,0x8bf6,0xadfe,0xd43d,0xfbf3,0x8239,0x7821,0x90ee,0x1144,0xab25,0x958b,0xad12,0x8102,0x9988,0x6fb9,0x63d7,0xa88,0x6}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xe0fb89c4,0xe06d8926,0x8bf62597,0xd43dadfe,0x8239fbf3,0x90ee7821,0xab251144,0xad12958b,0x99888102,0x63d76fb9,0x60a88}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xe06d8926e0fb89c4,0xd43dadfe8bf62597,0x90ee78218239fbf3,0xad12958bab251144,0x63d76fb999888102,0x60a88}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -22, ._mp_d = (mp_limb_t[]) {0x24ef,0x1a39,0x49b9,0xe546,0x2ac6,0xb46b,0xdb2e,0x8f2,0xe8f2,0x1ecc,0x2d1e,0x11a4,0x33aa,0xa7ca,0x5d30,0x3af6,0x49f9,0x4c0e,0x5bbb,0xcdd5,0x3619,0x25}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0x1a3924ef,0xe54649b9,0xb46b2ac6,0x8f2db2e,0x1ecce8f2,0x11a42d1e,0xa7ca33aa,0x3af65d30,0x4c0e49f9,0xcdd55bbb,0x253619}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0xe54649b91a3924ef,0x8f2db2eb46b2ac6,0x11a42d1e1ecce8f2,0x3af65d30a7ca33aa,0xcdd55bbb4c0e49f9,0x253619}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x29}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x29}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x29}}}
#endif
}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}}, 41}, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x75fc,0xbc89,0xb394,0x94a7,0xda4,0x9a55,0xcc62,0xb5e4,0x23e7,0x9a24,0x7139,0xa015,0xaff2,0x4acf,0x53c4,0x2c22,0xf1b9,0x856,0x1991,0x7336,0x4a96,0xc}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xbc8975fc,0x94a7b394,0x9a550da4,0xb5e4cc62,0x9a2423e7,0xa0157139,0x4acfaff2,0x2c2253c4,0x856f1b9,0x73361991,0xc4a96}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x94a7b394bc8975fc,0xb5e4cc629a550da4,0xa01571399a2423e7,0x2c2253c44acfaff2,0x733619910856f1b9,0xc4a96}}}
#endif
, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x75fc,0xbc89,0xb394,0x94a7,0xda4,0x9a55,0xcc62,0xb5e4,0x23e7,0x9a24,0x7139,0xa015,0xaff2,0x4acf,0x53c4,0x2c22,0xf1b9,0x856,0x1991,0x7336,0x4a96,0xc}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xbc8975fc,0x94a7b394,0x9a550da4,0xb5e4cc62,0x9a2423e7,0xa0157139,0x4acfaff2,0x2c2253c4,0x856f1b9,0x73361991,0xc4a96}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x94a7b394bc8975fc,0xb5e4cc629a550da4,0xa01571399a2423e7,0x2c2253c44acfaff2,0x733619910856f1b9,0xc4a96}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0xbafe,0x5e44,0xd9ca,0x4a53,0x86d2,0x4d2a,0x6631,0xdaf2,0x11f3,0xcd12,0xb89c,0x500a,0xd7f9,0x2567,0x29e2,0x9611,0x78dc,0x842b,0xcc8,0x399b,0x254b,0x6}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x5e44bafe,0x4a53d9ca,0x4d2a86d2,0xdaf26631,0xcd1211f3,0x500ab89c,0x2567d7f9,0x961129e2,0x842b78dc,0x399b0cc8,0x6254b}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x4a53d9ca5e44bafe,0xdaf266314d2a86d2,0x500ab89ccd1211f3,0x961129e22567d7f9,0x399b0cc8842b78dc,0x6254b}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -22, ._mp_d = (mp_limb_t[]) {0x692f,0x1dd6,0xd087,0xd21e,0x73e,0xc620,0xe345,0x2792,0x9be2,0x3aa1,0x397e,0x32b7,0xa961,0x5a6e,0xe10,0x482f,0x9042,0x8e88,0x3a52,0x5e1b,0x9e05,0x53}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0x1dd6692f,0xd21ed087,0xc620073e,0x2792e345,0x3aa19be2,0x32b7397e,0x5a6ea961,0x482f0e10,0x8e889042,0x5e1b3a52,0x539e05}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0xd21ed0871dd6692f,0x2792e345c620073e,0x32b7397e3aa19be2,0x482f0e105a6ea961,0x5e1b3a528e889042,0x539e05}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -42, ._mp_d = (mp_limb_t[]) {0xb208,0xc095,0x6374,0xf6e0,0x9551,0xf4f1,0xf00c,0x6dd2,0x4faa,0x8936,0xb917,0x4580,0xdc98,0x26c8,0x6fbe,0xa6f2,0x9533,0x1bc,0x97cc,0xa3d2,0x19d3,0x1c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1980}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -21, ._mp_d = (mp_limb_t[]) {0xc095b208,0xf6e06374,0xf4f19551,0x6dd2f00c,0x89364faa,0x4580b917,0x26c8dc98,0xa6f26fbe,0x1bc9533,0xa3d297cc,0x1c19d3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x19800000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0xf6e06374c095b208,0x6dd2f00cf4f19551,0x4580b91789364faa,0xa6f26fbe26c8dc98,0xa3d297cc01bc9533,0x1c19d3,0x0,0x0,0x0,0x0,0x19800000}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0xbafe,0x5e44,0xd9ca,0x4a53,0x86d2,0x4d2a,0x6631,0xdaf2,0x11f3,0xcd12,0xb89c,0x500a,0xd7f9,0x2567,0x29e2,0x9611,0x78dc,0x842b,0xcc8,0x399b,0x254b,0x6}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x5e44bafe,0x4a53d9ca,0x4d2a86d2,0xdaf26631,0xcd1211f3,0x500ab89c,0x2567d7f9,0x961129e2,0x842b78dc,0x399b0cc8,0x6254b}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x4a53d9ca5e44bafe,0xdaf266314d2a86d2,0x500ab89ccd1211f3,0x961129e22567d7f9,0x399b0cc8842b78dc,0x6254b}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0xb7}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0xb7}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0xb7}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xacb0,0x23ea,0x59d7,0x1282,0xb8b7,0x18b4,0xece1,0x21e5,0x531d,0x6101,0xf1c8,0x9dca,0xec67,0x19eb,0x412a,0xaca8,0x2f58,0x76ad,0x8d11,0x8d5c,0xaf75}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x23eaacb0,0x128259d7,0x18b4b8b7,0x21e5ece1,0x6101531d,0x9dcaf1c8,0x19ebec67,0xaca8412a,0x76ad2f58,0x8d5c8d11,0xaf75}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x128259d723eaacb0,0x21e5ece118b4b8b7,0x9dcaf1c86101531d,0xaca8412a19ebec67,0x8d5c8d1176ad2f58,0xaf75}}}
#endif
}}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x75fc,0xbc89,0xb394,0x94a7,0xda4,0x9a55,0xcc62,0xb5e4,0x23e7,0x9a24,0x7139,0xa015,0xaff2,0x4acf,0x53c4,0x2c22,0xf1b9,0x856,0x1991,0x7336,0x4a96,0xc}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xbc8975fc,0x94a7b394,0x9a550da4,0xb5e4cc62,0x9a2423e7,0xa0157139,0x4acfaff2,0x2c2253c4,0x856f1b9,0x73361991,0xc4a96}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x94a7b394bc8975fc,0xb5e4cc629a550da4,0xa01571399a2423e7,0x2c2253c44acfaff2,0x733619910856f1b9,0xc4a96}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -22, ._mp_d = (mp_limb_t[]) {0x692f,0x1dd6,0xd087,0xd21e,0x73e,0xc620,0xe345,0x2792,0x9be2,0x3aa1,0x397e,0x32b7,0xa961,0x5a6e,0xe10,0x482f,0x9042,0x8e88,0x3a52,0x5e1b,0x9e05,0x53}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0x1dd6692f,0xd21ed087,0xc620073e,0x2792e345,0x3aa19be2,0x32b7397e,0x5a6ea961,0x482f0e10,0x8e889042,0x5e1b3a52,0x539e05}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0xd21ed0871dd6692f,0x2792e345c620073e,0x32b7397e3aa19be2,0x482f0e105a6ea961,0x5e1b3a528e889042,0x539e05}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0xb7}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0xb7}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0xb7}}}
#endif
}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}}, 61}};
const quat_left_ideal_t CONNECTING_IDEALS[7] = {{{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
}}}, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, &MAXORD_O0}, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xf6da,0xd096,0xe922,0x9bb6,0xadc,0xca88,0xec2,0x62ac,0xd10b,0xec5a,0xaa2b,0xdda7,0xcb5b,0xbbbd,0xbeef,0xd5e6,0xe7c2,0x2132,0x8f33,0x7857,0x9679}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xd096f6da,0x9bb6e922,0xca880adc,0x62ac0ec2,0xec5ad10b,0xdda7aa2b,0xbbbdcb5b,0xd5e6beef,0x2132e7c2,0x78578f33,0x9679}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x9bb6e922d096f6da,0x62ac0ec2ca880adc,0xdda7aa2bec5ad10b,0xd5e6beefbbbdcb5b,0x78578f332132e7c2,0x9679}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xf355,0x532b,0x80ba,0x957,0x1010,0x4d89,0x2c1f,0xdc2a,0x9311,0x797b,0x78f9,0x1bcf,0x8e2d,0x22b7,0x23d,0x4264,0xcee2,0x8af6,0xf7cb,0x4abb,0xe92}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x532bf355,0x95780ba,0x4d891010,0xdc2a2c1f,0x797b9311,0x1bcf78f9,0x22b78e2d,0x4264023d,0x8af6cee2,0x4abbf7cb,0xe92}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x95780ba532bf355,0xdc2a2c1f4d891010,0x1bcf78f9797b9311,0x4264023d22b78e2d,0x4abbf7cb8af6cee2,0xe92}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xf6da,0xd096,0xe922,0x9bb6,0xadc,0xca88,0xec2,0x62ac,0xd10b,0xec5a,0xaa2b,0xdda7,0xcb5b,0xbbbd,0xbeef,0xd5e6,0xe7c2,0x2132,0x8f33,0x7857,0x9679}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xd096f6da,0x9bb6e922,0xca880adc,0x62ac0ec2,0xec5ad10b,0xdda7aa2b,0xbbbdcb5b,0xd5e6beef,0x2132e7c2,0x78578f33,0x9679}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x9bb6e922d096f6da,0x62ac0ec2ca880adc,0xdda7aa2bec5ad10b,0xd5e6beefbbbdcb5b,0x78578f332132e7c2,0x9679}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x385,0x7d6b,0x6868,0x925f,0xfacc,0x7cfe,0xe2a3,0x8681,0x3df9,0x72df,0x3132,0xc1d8,0x3d2e,0x9906,0xbcb2,0x9382,0x18e0,0x963c,0x9767,0x2d9b,0x87e7}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x7d6b0385,0x925f6868,0x7cfefacc,0x8681e2a3,0x72df3df9,0xc1d83132,0x99063d2e,0x9382bcb2,0x963c18e0,0x2d9b9767,0x87e7}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x925f68687d6b0385,0x8681e2a37cfefacc,0xc1d8313272df3df9,0x9382bcb299063d2e,0x2d9b9767963c18e0,0x87e7}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
}}}, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x7b6d,0x684b,0x7491,0x4ddb,0x56e,0x6544,0x761,0xb156,0x6885,0xf62d,0xd515,0xeed3,0xe5ad,0xddde,0x5f77,0x6af3,0x73e1,0x9099,0xc799,0xbc2b,0x4b3c}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x684b7b6d,0x4ddb7491,0x6544056e,0xb1560761,0xf62d6885,0xeed3d515,0xdddee5ad,0x6af35f77,0x909973e1,0xbc2bc799,0x4b3c}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x4ddb7491684b7b6d,0xb15607616544056e,0xeed3d515f62d6885,0x6af35f77dddee5ad,0xbc2bc799909973e1,0x4b3c}}}
#endif
, &MAXORD_O0}, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2000,0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x12000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x2,0x0,0x0,0x0,0x0,0x12000}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1000}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x1000}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2000,0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x12000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x2,0x0,0x0,0x0,0x0,0x12000}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1000,0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x11000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x11000}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
}}}, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x9000}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x9000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x9000}}}
#endif
, &MAXORD_O0}, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xd44a,0xd472,0x3540,0x40ac,0x7479,0x4427,0xb766,0xcff0,0x1faf,0x5bad,0x20d6,0xef6c,0xc4e8,0x9cce,0x595d,0x8b8e,0xd65c,0x15f7,0xa504,0x6ff9,0x5c41}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xd472d44a,0x40ac3540,0x44277479,0xcff0b766,0x5bad1faf,0xef6c20d6,0x9ccec4e8,0x8b8e595d,0x15f7d65c,0x6ff9a504,0x5c41}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x40ac3540d472d44a,0xcff0b76644277479,0xef6c20d65bad1faf,0x8b8e595d9ccec4e8,0x6ff9a50415f7d65c,0x5c41}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xb98b,0xfa5d,0x2529,0xabbd,0x540d,0x7ad9,0xd910,0xce5c,0xde24,0xb0af,0x7c49,0x97ff,0x5d60,0xcc27,0x6ad4,0x45b2,0x3d5b,0xd22a,0x4715,0x8c2,0x240b}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xfa5db98b,0xabbd2529,0x7ad9540d,0xce5cd910,0xb0afde24,0x97ff7c49,0xcc275d60,0x45b26ad4,0xd22a3d5b,0x8c24715,0x240b}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xabbd2529fa5db98b,0xce5cd9107ad9540d,0x97ff7c49b0afde24,0x45b26ad4cc275d60,0x8c24715d22a3d5b,0x240b}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xd44a,0xd472,0x3540,0x40ac,0x7479,0x4427,0xb766,0xcff0,0x1faf,0x5bad,0x20d6,0xef6c,0xc4e8,0x9cce,0x595d,0x8b8e,0xd65c,0x15f7,0xa504,0x6ff9,0x5c41}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xd472d44a,0x40ac3540,0x44277479,0xcff0b766,0x5bad1faf,0xef6c20d6,0x9ccec4e8,0x8b8e595d,0x15f7d65c,0x6ff9a504,0x5c41}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x40ac3540d472d44a,0xcff0b76644277479,0xef6c20d65bad1faf,0x8b8e595d9ccec4e8,0x6ff9a50415f7d65c,0x5c41}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x1abf,0xda15,0x1016,0x94ef,0x206b,0xc94e,0xde55,0x193,0x418b,0xaafd,0xa48c,0x576c,0x6788,0xd0a7,0xee88,0x45db,0x9901,0x43cd,0x5dee,0x6737,0x3836}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xda151abf,0x94ef1016,0xc94e206b,0x193de55,0xaafd418b,0x576ca48c,0xd0a76788,0x45dbee88,0x43cd9901,0x67375dee,0x3836}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x94ef1016da151abf,0x193de55c94e206b,0x576ca48caafd418b,0x45dbee88d0a76788,0x67375dee43cd9901,0x3836}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
}}}, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x6a25,0x6a39,0x1aa0,0xa056,0xba3c,0x2213,0x5bb3,0xe7f8,0x8fd7,0x2dd6,0x106b,0x77b6,0x6274,0xce67,0x2cae,0x45c7,0xeb2e,0xafb,0xd282,0xb7fc,0x2e20}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x6a396a25,0xa0561aa0,0x2213ba3c,0xe7f85bb3,0x2dd68fd7,0x77b6106b,0xce676274,0x45c72cae,0xafbeb2e,0xb7fcd282,0x2e20}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xa0561aa06a396a25,0xe7f85bb32213ba3c,0x77b6106b2dd68fd7,0x45c72caece676274,0xb7fcd2820afbeb2e,0x2e20}}}
#endif
, &MAXORD_O0}, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xee02,0x5292,0x59cc,0x729,0xb0e7,0x73e5,0xf01d,0xdf09,0xd64b,0xdd77,0x88b2,0x6b48,0xf84d,0x53ab,0x8e61,0xabb3,0x8cf7,0xf415,0x68ee,0x1fc7,0x8230}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x5292ee02,0x72959cc,0x73e5b0e7,0xdf09f01d,0xdd77d64b,0x6b4888b2,0x53abf84d,0xabb38e61,0xf4158cf7,0x1fc768ee,0x8230}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x72959cc5292ee02,0xdf09f01d73e5b0e7,0x6b4888b2dd77d64b,0xabb38e6153abf84d,0x1fc768eef4158cf7,0x8230}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xdae7,0x213e,0x8cfe,0x2bfd,0x3e61,0x1fd5,0xc48a,0xa11d,0xc0e7,0x878,0x8ae3,0x5cd3,0x27b6,0x76cd,0x9587,0x460d,0x2934,0x68be,0x197f,0x8127,0x4da7}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x213edae7,0x2bfd8cfe,0x1fd53e61,0xa11dc48a,0x878c0e7,0x5cd38ae3,0x76cd27b6,0x460d9587,0x68be2934,0x8127197f,0x4da7}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x2bfd8cfe213edae7,0xa11dc48a1fd53e61,0x5cd38ae30878c0e7,0x460d958776cd27b6,0x8127197f68be2934,0x4da7}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xee02,0x5292,0x59cc,0x729,0xb0e7,0x73e5,0xf01d,0xdf09,0xd64b,0xdd77,0x88b2,0x6b48,0xf84d,0x53ab,0x8e61,0xabb3,0x8cf7,0xf415,0x68ee,0x1fc7,0x8230}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x5292ee02,0x72959cc,0x73e5b0e7,0xdf09f01d,0xdd77d64b,0x6b4888b2,0x53abf84d,0xabb38e61,0xf4158cf7,0x1fc768ee,0x8230}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x72959cc5292ee02,0xdf09f01d73e5b0e7,0x6b4888b2dd77d64b,0xabb38e6153abf84d,0x1fc768eef4158cf7,0x8230}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x131b,0x3154,0xccce,0xdb2b,0x7285,0x5410,0x2b93,0x3dec,0x1564,0xd4ff,0xfdcf,0xe74,0xd097,0xdcde,0xf8d9,0x65a5,0x63c3,0x8b57,0x4f6f,0x9ea0,0x3488}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x3154131b,0xdb2bccce,0x54107285,0x3dec2b93,0xd4ff1564,0xe74fdcf,0xdcded097,0x65a5f8d9,0x8b5763c3,0x9ea04f6f,0x3488}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xdb2bccce3154131b,0x3dec2b9354107285,0xe74fdcfd4ff1564,0x65a5f8d9dcded097,0x9ea04f6f8b5763c3,0x3488}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
}}}, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x7701,0x2949,0xace6,0x8394,0xd873,0xb9f2,0xf80e,0xef84,0xeb25,0x6ebb,0x4459,0xb5a4,0xfc26,0xa9d5,0xc730,0xd5d9,0xc67b,0x7a0a,0xb477,0xfe3,0x4118}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x29497701,0x8394ace6,0xb9f2d873,0xef84f80e,0x6ebbeb25,0xb5a44459,0xa9d5fc26,0xd5d9c730,0x7a0ac67b,0xfe3b477,0x4118}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x8394ace629497701,0xef84f80eb9f2d873,0xb5a444596ebbeb25,0xd5d9c730a9d5fc26,0xfe3b4777a0ac67b,0x4118}}}
#endif
, &MAXORD_O0}, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xbde6,0xc5b0,0x718c,0xaad8,0xe641,0x5348,0x4c12,0x9ce3,0x43ab,0xc86b,0x5c32,0x9c05,0x6bad,0x2ba8,0x8c5a,0x4251,0xc9bd,0x370d,0x4651,0x5caf,0x8e03}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xc5b0bde6,0xaad8718c,0x5348e641,0x9ce34c12,0xc86b43ab,0x9c055c32,0x2ba86bad,0x42518c5a,0x370dc9bd,0x5caf4651,0x8e03}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xaad8718cc5b0bde6,0x9ce34c125348e641,0x9c055c32c86b43ab,0x42518c5a2ba86bad,0x5caf4651370dc9bd,0x8e03}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xc041,0x2948,0x1d7e,0x7125,0x5dc2,0xee9e,0x4032,0x72a0,0x5049,0x1098,0x41b,0xaf6a,0xed1c,0x60a,0xf837,0x6fc,0x132d,0xf2fd,0xf0cb,0x9b95,0x6e50}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x2948c041,0x71251d7e,0xee9e5dc2,0x72a04032,0x10985049,0xaf6a041b,0x60aed1c,0x6fcf837,0xf2fd132d,0x9b95f0cb,0x6e50}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x71251d7e2948c041,0x72a04032ee9e5dc2,0xaf6a041b10985049,0x6fcf837060aed1c,0x9b95f0cbf2fd132d,0x6e50}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xbde6,0xc5b0,0x718c,0xaad8,0xe641,0x5348,0x4c12,0x9ce3,0x43ab,0xc86b,0x5c32,0x9c05,0x6bad,0x2ba8,0x8c5a,0x4251,0xc9bd,0x370d,0x4651,0x5caf,0x8e03}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xc5b0bde6,0xaad8718c,0x5348e641,0x9ce34c12,0xc86b43ab,0x9c055c32,0x2ba86bad,0x42518c5a,0x370dc9bd,0x5caf4651,0x8e03}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xaad8718cc5b0bde6,0x9ce34c125348e641,0x9c055c32c86b43ab,0x42518c5a2ba86bad,0x5caf4651370dc9bd,0x8e03}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xfda5,0x9c67,0x540e,0x39b3,0x887f,0x64aa,0xbdf,0x2a43,0xf362,0xb7d2,0x5817,0xec9b,0x7e90,0x259d,0x9423,0x3b54,0xb690,0x4410,0x5585,0xc119,0x1fb2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x9c67fda5,0x39b3540e,0x64aa887f,0x2a430bdf,0xb7d2f362,0xec9b5817,0x259d7e90,0x3b549423,0x4410b690,0xc1195585,0x1fb2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x39b3540e9c67fda5,0x2a430bdf64aa887f,0xec9b5817b7d2f362,0x3b549423259d7e90,0xc11955854410b690,0x1fb2}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
}}}, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x5ef3,0x62d8,0x38c6,0xd56c,0x7320,0x29a4,0xa609,0xce71,0xa1d5,0x6435,0xae19,0xce02,0x35d6,0x15d4,0xc62d,0xa128,0xe4de,0x9b86,0xa328,0xae57,0x4701}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x62d85ef3,0xd56c38c6,0x29a47320,0xce71a609,0x6435a1d5,0xce02ae19,0x15d435d6,0xa128c62d,0x9b86e4de,0xae57a328,0x4701}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xd56c38c662d85ef3,0xce71a60929a47320,0xce02ae196435a1d5,0xa128c62d15d435d6,0xae57a3289b86e4de,0x4701}}}
#endif
, &MAXORD_O0}, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xfdea,0x7ee9,0x7520,0xeb5b,0x9c59,0x6f07,0x418,0x418b,0x4411,0x779a,0xa04f,0x4fa4,0xa36f,0x7984,0x6055,0x5467,0x5e75,0xea31,0x7695,0xb046,0x66ff}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x7ee9fdea,0xeb5b7520,0x6f079c59,0x418b0418,0x779a4411,0x4fa4a04f,0x7984a36f,0x54676055,0xea315e75,0xb0467695,0x66ff}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xeb5b75207ee9fdea,0x418b04186f079c59,0x4fa4a04f779a4411,0x546760557984a36f,0xb0467695ea315e75,0x66ff}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x95d5,0x5324,0x78bc,0xa38e,0x3905,0xa622,0x5c2e,0x89ef,0x4ccf,0xa3fa,0x395f,0xb5f5,0xe9ee,0xef0f,0x39f0,0xa176,0x2f57,0x24ec,0x8fb5,0x1d8a,0x1f00}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x532495d5,0xa38e78bc,0xa6223905,0x89ef5c2e,0xa3fa4ccf,0xb5f5395f,0xef0fe9ee,0xa17639f0,0x24ec2f57,0x1d8a8fb5,0x1f00}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xa38e78bc532495d5,0x89ef5c2ea6223905,0xb5f5395fa3fa4ccf,0xa17639f0ef0fe9ee,0x1d8a8fb524ec2f57,0x1f00}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xfdea,0x7ee9,0x7520,0xeb5b,0x9c59,0x6f07,0x418,0x418b,0x4411,0x779a,0xa04f,0x4fa4,0xa36f,0x7984,0x6055,0x5467,0x5e75,0xea31,0x7695,0xb046,0x66ff}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x7ee9fdea,0xeb5b7520,0x6f079c59,0x418b0418,0x779a4411,0x4fa4a04f,0x7984a36f,0x54676055,0xea315e75,0xb0467695,0x66ff}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xeb5b75207ee9fdea,0x418b04186f079c59,0x4fa4a04f779a4411,0x546760557984a36f,0xb0467695ea315e75,0x66ff}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x6815,0x2bc5,0xfc64,0x47cc,0x6354,0xc8e5,0xa7e9,0xb79b,0xf741,0xd39f,0x66ef,0x99af,0xb980,0x8a74,0x2664,0xb2f1,0x2f1d,0xc545,0xe6e0,0x92bb,0x47ff}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x2bc56815,0x47ccfc64,0xc8e56354,0xb79ba7e9,0xd39ff741,0x99af66ef,0x8a74b980,0xb2f12664,0xc5452f1d,0x92bbe6e0,0x47ff}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x47ccfc642bc56815,0xb79ba7e9c8e56354,0x99af66efd39ff741,0xb2f126648a74b980,0x92bbe6e0c5452f1d,0x47ff}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
}}}, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xfef5,0x3f74,0xba90,0xf5ad,0xce2c,0x3783,0x820c,0xa0c5,0x2208,0xbbcd,0x5027,0xa7d2,0x51b7,0xbcc2,0xb02a,0xaa33,0xaf3a,0xf518,0x3b4a,0xd823,0x337f}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x3f74fef5,0xf5adba90,0x3783ce2c,0xa0c5820c,0xbbcd2208,0xa7d25027,0xbcc251b7,0xaa33b02a,0xf518af3a,0xd8233b4a,0x337f}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xf5adba903f74fef5,0xa0c5820c3783ce2c,0xa7d25027bbcd2208,0xaa33b02abcc251b7,0xd8233b4af518af3a,0x337f}}}
#endif
, &MAXORD_O0}};
const quat_alg_elem_t CONJUGATING_ELEMENTS[7] = {{
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 0, ._mp_d = (mp_limb_t[]) {0x0}}}
#endif
}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x385,0x7d6b,0x6868,0x925f,0xfacc,0x7cfe,0xe2a3,0x8681,0x3df9,0x72df,0x3132,0xc1d8,0x3d2e,0x9906,0xbcb2,0x9382,0x18e0,0x963c,0x9767,0x2d9b,0x87e7}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x7d6b0385,0x925f6868,0x7cfefacc,0x8681e2a3,0x72df3df9,0xc1d83132,0x99063d2e,0x9382bcb2,0x963c18e0,0x2d9b9767,0x87e7}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x925f68687d6b0385,0x8681e2a37cfefacc,0xc1d8313272df3df9,0x9382bcb299063d2e,0x2d9b9767963c18e0,0x87e7}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -21, ._mp_d = (mp_limb_t[]) {0x385,0x7d6b,0x6868,0x925f,0xfacc,0x7cfe,0xe2a3,0x8681,0x3df9,0x72df,0x3132,0xc1d8,0x3d2e,0x9906,0xbcb2,0x9382,0x18e0,0x963c,0x9767,0x2d9b,0x87e7}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0x7d6b0385,0x925f6868,0x7cfefacc,0x8681e2a3,0x72df3df9,0xc1d83132,0x99063d2e,0x9382bcb2,0x963c18e0,0x2d9b9767,0x87e7}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0x925f68687d6b0385,0x8681e2a37cfefacc,0xc1d8313272df3df9,0x9382bcb299063d2e,0x2d9b9767963c18e0,0x87e7}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1000}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x1000}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -21, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1000}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1000}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0x1,0x0,0x0,0x0,0x0,0x1000}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -21, ._mp_d = (mp_limb_t[]) {0xb185,0x3367,0x9a35,0x387c,0xd6d1,0x5bed,0xc53a,0x54a2,0x6bd1,0xeae3,0x29d4,0x9721,0xe21e,0x384,0x5bb6,0x5cba,0x3c41,0xc548,0x5b1,0x397b,0xd278}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0x3367b185,0x387c9a35,0x5bedd6d1,0x54a2c53a,0xeae36bd1,0x972129d4,0x384e21e,0x5cba5bb6,0xc5483c41,0x397b05b1,0xd278}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0x387c9a353367b185,0x54a2c53a5bedd6d1,0x972129d4eae36bd1,0x5cba5bb60384e21e,0x397b05b1c5483c41,0xd278}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -21, ._mp_d = (mp_limb_t[]) {0xb185,0x3367,0x9a35,0x387c,0xd6d1,0x5bed,0xc53a,0x54a2,0x6bd1,0xeae3,0x29d4,0x9721,0xe21e,0x384,0x5bb6,0x5cba,0x3c41,0xc548,0x5b1,0x397b,0xd278}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0x3367b185,0x387c9a35,0x5bedd6d1,0x54a2c53a,0xeae36bd1,0x972129d4,0x384e21e,0x5cba5bb6,0xc5483c41,0x397b05b1,0xd278}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0x387c9a353367b185,0x54a2c53a5bedd6d1,0x972129d4eae36bd1,0x5cba5bb60384e21e,0x397b05b1c5483c41,0xd278}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x1}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0xe063,0xa676,0x93a9,0x6ee0,0x8b1e,0xa95b,0xd2d5,0x3a0f,0x1764,0x2bb1,0x62e0,0x3577,0x937,0x23f5,0xed8,0xcb5d,0x89d6,0x1e29,0xa9b8,0x97b0,0xa44}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0xa676e063,0x6ee093a9,0xa95b8b1e,0x3a0fd2d5,0x2bb11764,0x357762e0,0x23f50937,0xcb5d0ed8,0x1e2989d6,0x97b0a9b8,0xa44}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0x6ee093a9a676e063,0x3a0fd2d5a95b8b1e,0x357762e02bb11764,0xcb5d0ed823f50937,0x97b0a9b81e2989d6,0xa44}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -21, ._mp_d = (mp_limb_t[]) {0xe063,0xa676,0x93a9,0x6ee0,0x8b1e,0xa95b,0xd2d5,0x3a0f,0x1764,0x2bb1,0x62e0,0x3577,0x937,0x23f5,0xed8,0xcb5d,0x89d6,0x1e29,0xa9b8,0x97b0,0xa44}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0xa676e063,0x6ee093a9,0xa95b8b1e,0x3a0fd2d5,0x2bb11764,0x357762e0,0x23f50937,0xcb5d0ed8,0x1e2989d6,0x97b0a9b8,0xa44}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0x6ee093a9a676e063,0x3a0fd2d5a95b8b1e,0x357762e02bb11764,0xcb5d0ed823f50937,0x97b0a9b81e2989d6,0xa44}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x6}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x6}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x6}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x6}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x6}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x6}}}
#endif
}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -21, ._mp_d = (mp_limb_t[]) {0x319d,0x8127,0xdad9,0xe90e,0xd538,0x6d60,0x709,0x8af2,0x6403,0x3e59,0xc73,0xdc3a,0xa48,0xdba6,0x809b,0x5cfe,0x3434,0xa567,0x1053,0xeb02,0x4fdf}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -11, ._mp_d = (mp_limb_t[]) {0x8127319d,0xe90edad9,0x6d60d538,0x8af20709,0x3e596403,0xdc3a0c73,0xdba60a48,0x5cfe809b,0xa5673434,0xeb021053,0x4fdf}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -6, ._mp_d = (mp_limb_t[]) {0xe90edad98127319d,0x8af207096d60d538,0xdc3a0c733e596403,0x5cfe809bdba60a48,0xeb021053a5673434,0x4fdf}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 21, ._mp_d = (mp_limb_t[]) {0x319d,0x8127,0xdad9,0xe90e,0xd538,0x6d60,0x709,0x8af2,0x6403,0x3e59,0xc73,0xdc3a,0xa48,0xdba6,0x809b,0x5cfe,0x3434,0xa567,0x1053,0xeb02,0x4fdf}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x8127319d,0xe90edad9,0x6d60d538,0x8af20709,0x3e596403,0xdc3a0c73,0xdba60a48,0x5cfe809b,0xa5673434,0xeb021053,0x4fdf}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xe90edad98127319d,0x8af207096d60d538,0xdc3a0c733e596403,0x5cfe809bdba60a48,0xeb021053a5673434,0x4fdf}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x7}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x7}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x7}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x7}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x7}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x7}}}
#endif
}}, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 1, ._mp_d = (mp_limb_t[]) {0x2}}}
#endif
, {
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0xe6e7,0x1c74,0xbb0f,0xf3da,0xf229,0x8bc1,0xd932,0x764d,0x4c41,0x9ab2,0xffcc,0x7cb7,0x7bf7,0x17dd,0x42b5,0x2485,0x816,0x7731,0x324b,0xa488,0xcfff,0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x1c74e6e7,0xf3dabb0f,0x8bc1f229,0x764dd932,0x9ab24c41,0x7cb7ffcc,0x17dd7bf7,0x248542b5,0x77310816,0xa488324b,0x1cfff}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xf3dabb0f1c74e6e7,0x764dd9328bc1f229,0x7cb7ffcc9ab24c41,0x248542b517dd7bf7,0xa488324b77310816,0x1cfff}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = 22, ._mp_d = (mp_limb_t[]) {0xe6e7,0x1c74,0xbb0f,0xf3da,0xf229,0x8bc1,0xd932,0x764d,0x4c41,0x9ab2,0xffcc,0x7cb7,0x7bf7,0x17dd,0x42b5,0x2485,0x816,0x7731,0x324b,0xa488,0xcfff,0x1}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = 11, ._mp_d = (mp_limb_t[]) {0x1c74e6e7,0xf3dabb0f,0x8bc1f229,0x764dd932,0x9ab24c41,0x7cb7ffcc,0x17dd7bf7,0x248542b5,0x77310816,0xa488324b,0x1cfff}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = 6, ._mp_d = (mp_limb_t[]) {0xf3dabb0f1c74e6e7,0x764dd9328bc1f229,0x7cb7ffcc9ab24c41,0x248542b517dd7bf7,0xa488324b77310816,0x1cfff}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x5}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x5}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x5}}}
#endif
, 
#if 0
#elif GMP_LIMB_BITS == 16
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x5}}}
#elif GMP_LIMB_BITS == 32
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x5}}}
#elif GMP_LIMB_BITS == 64
{{._mp_alloc = 0, ._mp_size = -1, ._mp_d = (mp_limb_t[]) {0x5}}}
#endif
}}};
