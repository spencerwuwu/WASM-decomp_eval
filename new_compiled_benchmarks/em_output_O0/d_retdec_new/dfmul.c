
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "dfmul.h"
int64_t shift64RightJamming(uint64_t a1, int64_t a2, int64_t result) {
    // 0x0
    if ((int32_t)a2 == 0) {
        // 0x82
        *(int64_t *)result = (int64_t)a1;
        return result;
    }
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x8
    int64_t v2; // 0x0
    if ((int32_t)v1 > 63) {
        // 0x6a
        v2 = a1 != 0;
    } else {
        // 0x30
        v2 = a1 >> (v1 & 63) | (int64_t)(a1 << (-v1 & 63) != 0);
    }
    // 0x82
    *(int64_t *)result = v2;
    return result;
}
void mul64To128(uint64_t a, uint64_t b, int64_t * z0Ptr, int64_t * z1Ptr) {
    uint64_t v1 = a / 0x100000000; // 0xaf
    uint64_t v2 = b / 0x100000000; // 0xc1
    int64_t v3 = a & 0xffffffff; // 0xc8
    int64_t v4 = b & 0xffffffff; // 0xcb
    uint64_t v5 = v4 * v1;
    uint64_t v6 = v5 + v2 * v3; // 0x104
    uint64_t v7 = 0x100000000 * v6; // 0x139
    uint64_t v8 = v7 + v4 * v3; // 0x145
    *z1Ptr = v8;
    *z0Ptr = (0x100000000 * (int64_t)(v6 < v5) | v6 / 0x100000000) + v2 * v1 + (int64_t)(v8 < v7);
}
void float_raise(int32_t flags) {
    int32_t v1 = *(int32_t *)*(int64_t *)401; // 0x191
    *(int32_t *)*(int64_t *)410 = v1 | flags;
}
int32_t float64_is_nan(int64_t a) {
    // 0x1a0
    int64_t result; // 0x1a0
    return result;
}
int32_t float64_is_signaling_nan(uint64_t a) {
    int32_t result = 0; // 0x1f3
    if ((a / 0x8000000000000 & (int64_t)&g3) == (int64_t)&g2) {
        // 0x1f9
        result = (a & 0x7ffffffffffff) != 0;
    }
    // 0x211
    return result;
}
int64_t extractFloat64Frac(int64_t a) {
    // 0x220
    return a & 0xfffffffffffff;
}
int32_t extractFloat64Exp(uint64_t a) {
    // 0x240
    return (int32_t)(a / 0x10000000000000) & 2047;
}
int32_t extractFloat64Sign(uint64_t a) {
    // 0x260
    return a / 0x8000000000000000;
}
void normalizeFloat64Subnormal(int64_t aSig, int32_t * zExpPtr, int64_t * zSigPtr) {
    int32_t v1 = countLeadingZeros64(aSig); // 0x298
    *zSigPtr = aSig << (int64_t)(v1 + 53 & 63);
    *zExpPtr = 12 - v1;
}
int32_t countLeadingZeros64(uint64_t a) {
    int64_t v1 = a >= 0x100000000 ? a / 0x100000000 : a;
    return countLeadingZeros32((int32_t)v1) + (a >= 0x100000000 ? 0 : 32);
}
int32_t countLeadingZeros32(uint32_t a) {
    uint32_t v1 = a >= 0x10000 ? a : 0x10000 * a;
    int32_t v2 = a >= 0x10000 ? 0 : 16;
    uint32_t v3 = v1 >= 0x1000000 ? v1 : 256 * v1;
    int32_t v4 = *(int32_t *)((int64_t)(4 * v3 / 0x1000000) + (int64_t)&g1); // 0xa4d
    return v4 + (v1 >= 0x1000000 ? v2 : v2 | 8);
}
int64_t packFloat64(uint32_t zSign, uint32_t zExp, int64_t zSig) {
    // 0x330
    return 0x8000000000000000 * (int64_t)zSign + zSig + 0x10000000000000 * (int64_t)zExp;
}
int64_t roundAndPackFloat64(int32_t zSign, int32_t zExp, int64_t zSig) {
    int32_t v1 = *(int32_t *)*(int64_t *)889; // 0x379
    int32_t v2 = 512; // 0x398
    if (v1 != 0) {
        // 0x39e
        v2 = 0;
        if (v1 != 1) {
            if (zSign == 0) {
                // 0x3db
                v2 = v1 != 3 ? 1023 : 0;
            } else {
                // 0x3c5
                v2 = v1 != 2 ? 1023 : 0;
            }
        }
    }
    int32_t v3 = (int32_t)zSig & 1023;
    int64_t result = 2045; // 0x415
    if ((zExp & 0xffff) < 2045) {
        goto lab_0x4e1;
    } else {
        // 0x41b
        int64_t v4; // 0x461
        if (zExp > 2045) {
            // 0x44b
            float_raise(9);
            v4 = packFloat64(zSign, 2047, (int64_t)((int32_t)&g4 ^ (int32_t)&g4));
            return v4 - (int64_t)(v2 == 0);
        }
        // 0x429
        result = 2045;
        if (zExp == 2045) {
            // 0x436
            result = (0x100000000 * zSig >> 32) + (int64_t)v2;
            if (result < 0) {
                // 0x44b
                float_raise(9);
                v4 = packFloat64(zSign, 2047, (int64_t)((int32_t)&g4 ^ (int32_t)&g4));
                return v4 - (int64_t)(v2 == 0);
            }
        }
        // 0x482
        if (zExp >= 0) {
            goto lab_0x4e1;
        } else {
            // 0x48c
            if (v3 == 0) {
                // 0x500
                return 0;
            }
            // 0x4e1
            float_raise(4);
            goto lab_0x4eb;
        }
    }
  lab_0x4e1:
    // 0x4e1
    if (v3 == 0) {
        // 0x500
        return result;
    }
    goto lab_0x4eb;
  lab_0x4eb:;
    int64_t result2 = *(int64_t *)1278; // 0x4f7
    *(int32_t *)result2 = *(int32_t *)*(int64_t *)1266 | 1;
    // 0x500
    return result2;
}
int64_t float64_mul(int64_t a, int64_t b) {
    int64_t v1 = extractFloat64Frac(a); // 0x584
    int64_t aSig = v1; // bp-64, 0x589
    int32_t v2 = extractFloat64Exp(a);
    int32_t aExp = v2; // bp-48, 0x596
    int32_t v3 = extractFloat64Sign(a); // 0x59d
    int64_t v4 = 0x100000000 * b >> 32; // 0x5a5
    int64_t v5 = extractFloat64Frac(v4); // 0x5a9
    int64_t bSig = v5; // bp-72, 0x5ae
    int32_t v6 = extractFloat64Exp(v4); // 0x5b6
    int32_t bExp = v6; // bp-52, 0x5bb
    int32_t v7 = extractFloat64Sign(v4) ^ v3; // 0x5cd
    int64_t result; // 0x570
    if (v2 == 2047) {
        if (v1 != 0) {
            // 0x7f4
            return propagateFloat64NaN(a, v4);
        }
        if (v5 != 0 && v6 == 2047) {
            // 0x7f4
            return propagateFloat64NaN(a, v4);
        }
        if ((v5 || (int64_t)v6) != 0) {
            // 0x648
            result = packFloat64(v7, 2047, 0);
        } else {
            // 0x62b
            float_raise(16);
            result = 0x7fffffffffffffff;
        }
        // 0x7f4
        return result;
    }
    if (v6 == 2047) {
        if (v5 != 0) {
            // 0x7f4
            return propagateFloat64NaN(a, v4);
        }
        if ((v1 || (int64_t)v2) != 0) {
            // 0x6bf
            result = packFloat64(v7, 2047, 0);
        } else {
            // 0x6a2
            float_raise(16);
            result = 0x7fffffffffffffff;
        }
        // 0x7f4
        return result;
    }
    int32_t v8 = v6; // 0x6dd
    if (v2 == 0) {
        if (v1 == 0) {
            // 0x7f4
            return packFloat64(v7, 0, 0);
        }
        // 0x705
        normalizeFloat64Subnormal(v1, &aExp, &aSig);
        v8 = bExp;
    }
    // 0x716
    bExp = v8;
    if (v8 == 0) {
        // 0x720
        if (bSig == 0) {
            // 0x7f4
            return packFloat64(v7, 0, 0);
        }
        // 0x742
        normalizeFloat64Subnormal(bSig, &bExp, &bSig);
    }
    int32_t v9 = aExp + bExp; // 0x756
    int64_t v10 = 1024 * aSig | 0x4000000000000000; // 0x76f
    aSig = v10;
    int64_t v11 = 2048 * bSig | -0x8000000000000000; // 0x785
    bSig = v11;
    int64_t v12; // bp-88, 0x570
    int64_t zSig0; // bp-80, 0x570
    mul64To128(v10, v11, &zSig0, &v12);
    int64_t v13 = zSig0; // 0x7b1
    int64_t v14 = v13 | (int64_t)(v12 != 0); // 0x7b1
    zSig0 = v14;
    int64_t v15 = v14; // 0x7c6
    int32_t v16 = v9 - 1023; // 0x7c6
    if ((v13 & 0x4000000000000000) == 0) {
        // 0x7cc
        v15 = 2 * v14;
        zSig0 = v15;
        v16 = v9 - 1024;
    }
    // 0x7f4
    return roundAndPackFloat64(v7, v16, v15);
}
int64_t propagateFloat64NaN(int64_t a, int64_t b) {
    // 0x800
    float64_is_nan(a);
    int32_t v1 = float64_is_signaling_nan(a); // 0x820
    int64_t result = 0x100000000 * b >> 32; // 0x828
    int32_t v2 = float64_is_nan(result); // 0x82c
    int32_t v3 = float64_is_signaling_nan(result); // 0x838
    if ((v3 || v1) != 0) {
        // 0x873
        float_raise(16);
    }
    // 0x87d
    if (v3 != 0) {
        // 0x8da
        return result;
    }
    int64_t v4 = a | 0x8000000000000; // 0x84a
    int64_t result2 = v4; // 0x898
    if (v1 == 0) {
        // 0x8ab
        result2 = v2 == 0 ? v4 : result;
    }
    // 0x8da
    return result2;
}
float64_t ullong_to_double(int64_t x) {
    // 0x8f0
    int64_t v1; // 0x8f0
    return (int64_t)__asm_movsd(v1);
}
