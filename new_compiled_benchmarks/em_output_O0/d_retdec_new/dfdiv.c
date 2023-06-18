
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "dfdiv.h"
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
void add128(int64_t a0, uint64_t a1, int64_t b0, int64_t b1, int64_t * z0Ptr, int64_t * z1Ptr) {
    uint64_t v1 = b1 + a1; // 0xb0
    *z1Ptr = v1;
    *z0Ptr = b0 + a0 + (int64_t)(v1 < a1);
}
void sub128(int64_t a0, uint64_t a1, int64_t b0, uint64_t b1, int64_t * z0Ptr, int64_t * z1Ptr) {
    // 0xf0
    *z1Ptr = a1 - b1;
    *z0Ptr = a0 - b0 + (int64_t)(a1 < b1);
}
void mul64To128(uint64_t a, uint64_t b, int64_t * z0Ptr, int64_t * z1Ptr) {
    uint64_t v1 = a / 0x100000000; // 0x16f
    uint64_t v2 = b / 0x100000000; // 0x181
    int64_t v3 = a & 0xffffffff; // 0x188
    int64_t v4 = b & 0xffffffff; // 0x18b
    uint64_t v5 = v4 * v1;
    uint64_t v6 = v5 + v2 * v3; // 0x1c4
    uint64_t v7 = 0x100000000 * v6; // 0x1f9
    uint64_t v8 = v7 + v4 * v3; // 0x205
    *z1Ptr = v8;
    *z0Ptr = (0x100000000 * (int64_t)(v6 < v5) | v6 / 0x100000000) + v2 * v1 + (int64_t)(v8 < v7);
}
void float_raise(int32_t flags) {
    int32_t v1 = *(int32_t *)*(int64_t *)593; // 0x251
    *(int32_t *)*(int64_t *)602 = v1 | flags;
}
int32_t float64_is_nan(int64_t a) {
    // 0x260
    int64_t result; // 0x260
    return result;
}
int32_t float64_is_signaling_nan(uint64_t a) {
    int32_t result = 0; // 0x2b3
    if ((a / 0x8000000000000 & (int64_t)&g3) == (int64_t)&g2) {
        // 0x2b9
        result = (a & 0x7ffffffffffff) != 0;
    }
    // 0x2d1
    return result;
}
int64_t extractFloat64Frac(int64_t a) {
    // 0x2e0
    return a & 0xfffffffffffff;
}
int32_t extractFloat64Exp(uint64_t a) {
    // 0x300
    return (int32_t)(a / 0x10000000000000) & 2047;
}
int32_t extractFloat64Sign(uint64_t a) {
    // 0x320
    return a / 0x8000000000000000;
}
void normalizeFloat64Subnormal(int64_t aSig, int32_t * zExpPtr, int64_t * zSigPtr) {
    int32_t v1 = countLeadingZeros64(aSig); // 0x358
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
    int32_t v4 = *(int32_t *)((int64_t)(4 * v3 / 0x1000000) + (int64_t)&g1); // 0xd0d
    return v4 + (v1 >= 0x1000000 ? v2 : v2 | 8);
}
int64_t packFloat64(uint32_t zSign, uint32_t zExp, int64_t zSig) {
    // 0x3f0
    return 0x8000000000000000 * (int64_t)zSign + zSig + 0x10000000000000 * (int64_t)zExp;
}
int64_t roundAndPackFloat64(int32_t zSign, int32_t zExp, int64_t zSig) {
    int32_t v1 = *(int32_t *)*(int64_t *)1081; // 0x439
    int32_t v2 = 512; // 0x458
    if (v1 != 0) {
        // 0x45e
        v2 = 0;
        if (v1 != 1) {
            if (zSign == 0) {
                // 0x49b
                v2 = v1 != 3 ? 1023 : 0;
            } else {
                // 0x485
                v2 = v1 != 2 ? 1023 : 0;
            }
        }
    }
    int32_t v3 = (int32_t)zSig & 1023;
    int64_t result = 2045; // 0x4d5
    if ((zExp & 0xffff) < 2045) {
        goto lab_0x5a1;
    } else {
        // 0x4db
        int64_t v4; // 0x521
        if (zExp > 2045) {
            // 0x50b
            float_raise(9);
            v4 = packFloat64(zSign, 2047, (int64_t)((int32_t)&g4 ^ (int32_t)&g4));
            return v4 - (int64_t)(v2 == 0);
        }
        // 0x4e9
        result = 2045;
        if (zExp == 2045) {
            // 0x4f6
            result = (0x100000000 * zSig >> 32) + (int64_t)v2;
            if (result < 0) {
                // 0x50b
                float_raise(9);
                v4 = packFloat64(zSign, 2047, (int64_t)((int32_t)&g4 ^ (int32_t)&g4));
                return v4 - (int64_t)(v2 == 0);
            }
        }
        // 0x542
        if (zExp >= 0) {
            goto lab_0x5a1;
        } else {
            // 0x54c
            if (v3 == 0) {
                // 0x5c0
                return 0;
            }
            // 0x5a1
            float_raise(4);
            goto lab_0x5ab;
        }
    }
  lab_0x5a1:
    // 0x5a1
    if (v3 == 0) {
        // 0x5c0
        return result;
    }
    goto lab_0x5ab;
  lab_0x5ab:;
    int64_t result2 = *(int64_t *)1470; // 0x5b7
    *(int32_t *)result2 = *(int32_t *)*(int64_t *)1458 | 1;
    // 0x5c0
    return result2;
}
int64_t float64_div(int64_t a, int64_t b) {
    int64_t v1 = extractFloat64Frac(a); // 0x644
    int64_t aSig = v1; // bp-64, 0x649
    int32_t v2 = extractFloat64Exp(a);
    int32_t aExp = v2; // bp-48, 0x656
    int32_t v3 = extractFloat64Sign(a); // 0x65d
    int64_t v4 = 0x100000000 * b >> 32; // 0x665
    int64_t v5 = extractFloat64Frac(v4); // 0x669
    int64_t bSig = v5; // bp-72, 0x66e
    int32_t v6 = extractFloat64Exp(v4); // 0x676
    int32_t bExp = v6; // bp-52, 0x67b
    int32_t v7 = extractFloat64Sign(v4) ^ v3; // 0x68d
    int64_t result; // 0x630
    if (v2 == 2047) {
        if (v1 != 0) {
            // 0x943
            return propagateFloat64NaN(a, v4);
        }
        if (v6 != 2047) {
            // 0x943
            return packFloat64(v7, 2047, 0);
        }
        if (v5 == 0) {
            // 0x6ef
            float_raise(16);
            result = 0x7fffffffffffffff;
        } else {
            // 0x6d9
            result = propagateFloat64NaN(a, v4);
        }
        // 0x943
        return result;
    }
    if (v6 == 2047) {
        if (v5 == 0) {
            // 0x754
            result = packFloat64(v7, 0, 0);
        } else {
            // 0x73e
            result = propagateFloat64NaN(a, v4);
        }
        // 0x943
        return result;
    }
    int32_t v8 = v2; // 0x76f
    if (v6 == 0) {
        if (v5 == 0) {
            if ((v1 || (int64_t)v2) != 0) {
                // 0x7af
                float_raise(2);
                int64_t v9 = packFloat64(v7, 2047, (int64_t)((int32_t)&g4 ^ (int32_t)&g4)); // 0x7c5
                result = v9;
            } else {
                // 0x792
                float_raise(16);
                result = 0x7fffffffffffffff;
            }
            // 0x943
            return result;
        }
        // 0x7d3
        normalizeFloat64Subnormal(v5, &bExp, &bSig);
        v8 = aExp;
    }
    // 0x7e4
    aExp = v8;
    if (v8 == 0) {
        // 0x7ee
        if (aSig == 0) {
            // 0x943
            return packFloat64(v7, 0, 0);
        }
        // 0x810
        normalizeFloat64Subnormal(aSig, &aExp, &aSig);
    }
    int32_t v10 = aExp - bExp; // 0x824
    int64_t v11 = 1024 * aSig | 0x4000000000000000; // 0x83d
    aSig = v11;
    int64_t v12 = 2048 * bSig | -0x8000000000000000; // 0x853
    bSig = v12;
    int64_t v13 = v11; // 0x86a
    int32_t v14 = v10 + 1021; // 0x86a
    if (v12 <= 2 * v11) {
        // 0x870
        v13 = v11 / 2;
        aSig = v13;
        v14 = v10 + 1022;
    }
    int64_t v15 = estimateDiv128To64(v13, 0, v12); // 0x891
    if ((v15 & 511) >= 3) {
        // 0x943
        return roundAndPackFloat64(v7, v14, v15);
    }
    // 0x8ae
    int64_t term0; // bp-104, 0x630
    int64_t term1; // bp-112, 0x630
    mul64To128(bSig, v15, &term0, &term1);
    int64_t rem0; // bp-88, 0x630
    int64_t rem1; // bp-96, 0x630
    sub128(aSig, (int64_t)((int32_t)&g4 ^ (int32_t)&g4), term0, term1, &rem0, &rem1);
    int64_t v16 = v15; // 0x8e5
    int64_t v17 = v15; // 0x8e5
    if (rem0 < 0) {
        v16--;
        add128(rem0, rem1, 0, bSig, &rem0, &rem1);
        int64_t v18 = rem0; // 0x8e0
        v17 = v16;
        while (v18 < 0) {
            // 0x8eb
            v16--;
            add128(v18, rem1, 0, bSig, &rem0, &rem1);
            v18 = rem0;
            v17 = v16;
        }
    }
    int64_t v19 = v17 | (int64_t)(rem1 != 0); // 0x92c
    // 0x943
    return roundAndPackFloat64(v7, v14, v19);
}
int64_t propagateFloat64NaN(int64_t a, int64_t b) {
    // 0x950
    float64_is_nan(a);
    int32_t v1 = float64_is_signaling_nan(a); // 0x970
    int64_t result = 0x100000000 * b >> 32; // 0x978
    int32_t v2 = float64_is_nan(result); // 0x97c
    int32_t v3 = float64_is_signaling_nan(result); // 0x988
    if ((v3 || v1) != 0) {
        // 0x9c3
        float_raise(16);
    }
    // 0x9cd
    if (v3 != 0) {
        // 0xa2a
        return result;
    }
    int64_t v4 = a | 0x8000000000000; // 0x99a
    int64_t result2 = v4; // 0x9e8
    if (v1 == 0) {
        // 0x9fb
        result2 = v2 == 0 ? v4 : result;
    }
    // 0xa2a
    return result2;
}
int64_t estimateDiv128To64(uint64_t a0, int64_t a1, uint64_t b) {
    // 0xa40
    if (b <= a0) {
        // 0xb97
        return -1;
    }
    uint64_t v1 = b / 0x100000000; // 0xa73
    uint64_t v2 = b & -0x100000000; // 0xa7f
    int64_t v3 = -0x100000000; // 0xa87
    if (v2 > a0) {
        // 0xaa0
        v3 = 0x100000000 * a0 / v1;
    }
    // 0xab4
    int64_t term0; // bp-80, 0xa40
    int64_t term1; // bp-88, 0xa40
    mul64To128(b, v3, &term0, &term1);
    int64_t rem0; // bp-64, 0xa40
    int64_t rem1; // bp-72, 0xa40
    sub128(a0, a1, term0, term1, &rem0, &rem1);
    int64_t v4 = rem0; // 0xaee
    int64_t v5 = v3; // 0xaf3
    int64_t v6 = v4; // 0xaf3
    if (v4 < 0) {
        int64_t v7 = v3; // 0xb07
        v7 -= 0x100000000;
        add128(v4, rem1, v1, 0x100000000 * b, &rem0, &rem1);
        int64_t v8 = rem0; // 0xaee
        v5 = v7;
        v6 = v8;
        while (v8 < 0) {
            // 0xaf9
            v7 -= 0x100000000;
            add128(v8, rem1, v1, 0x100000000 * b, &rem0, &rem1);
            v8 = rem0;
            v5 = v7;
            v6 = v8;
        }
    }
    uint64_t v9 = rem1 / 0x100000000 | 0x100000000 * v6; // 0xb4c
    rem0 = v9;
    int64_t v10 = 0xffffffff; // 0xb5f
    if (v2 > v9) {
        // 0xb73
        v10 = v9 / v1;
    }
    // 0xb97
    return v10 | v5;
}
float64_t ullong_to_double(int64_t x) {
    // 0xbb0
    int64_t v1; // 0xbb0
    return (int64_t)__asm_movsd(v1);
}
