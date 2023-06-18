
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "dfsin.h"
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
void shift64ExtraRightJamming(uint64_t a0, int64_t a1, int32_t count, int64_t * z0Ptr, int64_t * z1Ptr) {
    // 0x90
    if (count == 0) {
        // 0x162
        *z1Ptr = a1;
        *z0Ptr = a0;
        return;
    }
    if (count <= 63) {
        // 0x162
        *z1Ptr = a0 << (int64_t)(-count & 63) | (int64_t)(a1 != 0);
        *z0Ptr = a0 >> (int64_t)(count & 63);
        return;
    }
    int64_t v1; // 0x90
    if (count != 64) {
        // 0x13b
        v1 = (a1 | a0) != 0;
    } else {
        // 0x11a
        v1 = (int64_t)(a1 != 0) | a0;
    }
    // 0x162
    *z1Ptr = v1;
    *z0Ptr = 0;
}
void add128(int64_t a0, uint64_t a1, int64_t b0, int64_t b1, int64_t * z0Ptr, int64_t * z1Ptr) {
    uint64_t v1 = b1 + a1; // 0x1a0
    *z1Ptr = v1;
    *z0Ptr = b0 + a0 + (int64_t)(v1 < a1);
}
void sub128(int64_t a0, uint64_t a1, int64_t b0, uint64_t b1, int64_t * z0Ptr, int64_t * z1Ptr) {
    // 0x1e0
    *z1Ptr = a1 - b1;
    *z0Ptr = a0 - b0 + (int64_t)(a1 < b1);
}
void mul64To128(uint64_t a, uint64_t b, int64_t * z0Ptr, int64_t * z1Ptr) {
    uint64_t v1 = a / 0x100000000; // 0x25f
    uint64_t v2 = b / 0x100000000; // 0x271
    int64_t v3 = a & 0xffffffff; // 0x278
    int64_t v4 = b & 0xffffffff; // 0x27b
    uint64_t v5 = v4 * v1;
    uint64_t v6 = v5 + v2 * v3; // 0x2b4
    uint64_t v7 = 0x100000000 * v6; // 0x2e9
    uint64_t v8 = v7 + v4 * v3; // 0x2f5
    *z1Ptr = v8;
    *z0Ptr = (0x100000000 * (int64_t)(v6 < v5) | v6 / 0x100000000) + v2 * v1 + (int64_t)(v8 < v7);
}
void float_raise(int32_t flags) {
    int32_t v1 = *(int32_t *)*(int64_t *)833; // 0x341
    *(int32_t *)*(int64_t *)842 = v1 | flags;
}
int32_t float64_is_nan(int64_t a) {
    // 0x350
    int64_t result; // 0x350
    return result;
}
int32_t float64_is_signaling_nan(int64_t a) {
    int32_t result = 0; // 0x3a3
    if ((a & 0x7ff8000000000000) == 0x7ff0000000000000) {
        // 0x3a9
        result = (a & 0x7ffffffffffff) != 0;
    }
    // 0x3c1
    return result;
}
int64_t extractFloat64Frac(int64_t a) {
    // 0x3d0
    return a & 0xfffffffffffff;
}
int32_t extractFloat64Exp(uint64_t a) {
    // 0x3f0
    return (int32_t)(a / 0x10000000000000) & 2047;
}
int32_t extractFloat64Sign(uint64_t a) {
    // 0x410
    return a / 0x8000000000000000;
}
void normalizeFloat64Subnormal(int64_t aSig, int32_t * zExpPtr, int64_t * zSigPtr) {
    int32_t v1 = countLeadingZeros64(aSig); // 0x448
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
    int32_t v4 = *(int32_t *)((int64_t)(4 * v3 / 0x1000000) + (int64_t)&g2); // 0x86d
    return v4 + (v1 >= 0x1000000 ? v2 : v2 | 8);
}
int64_t packFloat64(uint32_t zSign, uint32_t zExp, int64_t zSig) {
    // 0x4e0
    return 0x8000000000000000 * (int64_t)zSign + zSig + 0x10000000000000 * (int64_t)zExp;
}
int64_t roundAndPackFloat64(int32_t zSign, int32_t zExp, int64_t zSig) {
    int32_t v1 = *(int32_t *)*(int64_t *)1321; // 0x529
    int32_t v2 = 512; // 0x548
    if (v1 != 0) {
        // 0x54e
        v2 = 0;
        if (v1 != 1) {
            if (zSign == 0) {
                // 0x58b
                v2 = v1 != 3 ? 1023 : 0;
            } else {
                // 0x575
                v2 = v1 != 2 ? 1023 : 0;
            }
        }
    }
    int32_t v3 = (int32_t)zSig & 1023;
    int64_t result = 2045; // 0x5c5
    if ((zExp & 0xffff) < 2045) {
        goto lab_0x691;
    } else {
        // 0x5cb
        int64_t v4; // 0x611
        if (zExp > 2045) {
            // 0x5fb
            float_raise(9);
            v4 = packFloat64(zSign, 2047, (int64_t)((int32_t)&g3 ^ (int32_t)&g3));
            return v4 - (int64_t)(v2 == 0);
        }
        // 0x5d9
        result = 2045;
        if (zExp == 2045) {
            // 0x5e6
            result = (0x100000000 * zSig >> 32) + (int64_t)v2;
            if (result < 0) {
                // 0x5fb
                float_raise(9);
                v4 = packFloat64(zSign, 2047, (int64_t)((int32_t)&g3 ^ (int32_t)&g3));
                return v4 - (int64_t)(v2 == 0);
            }
        }
        // 0x632
        if (zExp >= 0) {
            goto lab_0x691;
        } else {
            // 0x63c
            if (v3 == 0) {
                // 0x6b0
                return 0;
            }
            // 0x691
            float_raise(4);
            goto lab_0x69b;
        }
    }
  lab_0x691:
    // 0x691
    if (v3 == 0) {
        // 0x6b0
        return result;
    }
    goto lab_0x69b;
  lab_0x69b:;
    int64_t result2 = *(int64_t *)1710; // 0x6a7
    *(int32_t *)result2 = *(int32_t *)*(int64_t *)1698 | 1;
    // 0x6b0
    return result2;
}
int64_t normalizeRoundAndPackFloat64(int32_t zSign, int32_t zExp, int64_t zSig) {
    int32_t v1 = countLeadingZeros64(zSig) - 1; // 0x73b
    return roundAndPackFloat64(zSign, zExp - v1, zSig << (int64_t)(v1 & 63));
}
int64_t int32_to_float64(int32_t a) {
    int64_t result = 0; // 0x77f
    if (a != 0) {
        uint32_t v1 = a >= 0 ? a : -a;
        uint32_t v2 = countLeadingZeros32(v1); // 0x7c7
        int64_t v3 = packFloat64((int32_t)(a < 0), 1074 - (int32_t)&g1 - v2, (int64_t)v1 << ((int64_t)v2 + (int64_t)(char)&g1 & 63)); // 0x7f0
        result = 0x100000000 * v3 >> 32;
    }
    // 0x7f9
    return result;
}
int64_t addFloat64Sigs(int64_t a, int64_t b, int32_t zSign) {
    int64_t v1 = extractFloat64Frac(a); // 0x897
    int32_t v2 = extractFloat64Exp(a); // 0x8a4
    int64_t v3 = 0x100000000 * b >> 32; // 0x8ac
    int64_t v4 = extractFloat64Frac(v3); // 0x8b0
    int32_t v5 = extractFloat64Exp(v3); // 0x8bd
    int32_t v6 = v2 - v5; // 0x8c8
    int64_t v7 = 512 * v1; // 0x8d2
    int64_t v8 = 512 * v4; // 0x8de
    int64_t v9; // 0x880
    int64_t v10; // 0x880
    int64_t result; // 0x880
    int32_t v11; // 0x880
    int32_t v12; // 0x880
    int64_t v13; // 0x880
    if (v6 < 1) {
        if (v6 == 0) {
            if (v2 == 2047) {
                // 0xa17
                result = a;
                if ((v8 || v7) != 0) {
                    // 0xa29
                    result = propagateFloat64NaN(a, v3);
                }
                // 0xafe
                return result;
            }
            uint64_t v14 = v8 + v7;
            if (v2 == 0) {
                // 0xafe
                return packFloat64(zSign, 0, v14 / 512);
            }
            // 0xa75
            v12 = v2;
            v13 = v14 + 0x4000000000000000;
            return roundAndPackFloat64(zSign, v12, v13);
        } else {
            if (v5 == 2047) {
                if (v8 == 0) {
                    // 0x9a9
                    result = packFloat64(zSign, 2047, 0);
                } else {
                    // 0x993
                    result = propagateFloat64NaN(a, v3);
                }
                // 0xafe
                return result;
            }
            // 0x9c3
            v9 = v2 != 0 ? v7 | 0x2000000000000000 : v7;
            v10 = v8;
            v11 = v5;
            goto lab_0xa9b;
        }
    } else {
        if (v2 == 2047) {
            // 0x8fe
            result = a;
            if (v7 != 0) {
                // 0x909
                result = propagateFloat64NaN(a, v3);
            }
            // 0xafe
            return result;
        }
        // 0x92c
        v9 = v7;
        v10 = v5 != 0 ? v8 | 0x2000000000000000 : v8;
        v11 = v2;
        goto lab_0xa9b;
    }
  lab_0xa9b:;
    int64_t v15 = (v9 | 0x2000000000000000) + v10; // 0xab1
    int64_t v16 = 2 * v15; // 0xab5
    v12 = v11 + (int32_t)(v16 >= 0);
    v13 = v16 >= 0 ? v16 : v15;
    return roundAndPackFloat64(zSign, v12, v13);
    // 0xafe
    return roundAndPackFloat64(zSign, v12, v13);
}
int64_t propagateFloat64NaN(int64_t a, int64_t b) {
    // 0xb10
    float64_is_nan(a);
    int32_t v1 = float64_is_signaling_nan(a); // 0xb30
    int64_t result = 0x100000000 * b >> 32; // 0xb38
    int32_t v2 = float64_is_nan(result); // 0xb3c
    int32_t v3 = float64_is_signaling_nan(result); // 0xb48
    if ((v3 || v1) != 0) {
        // 0xb83
        float_raise(16);
    }
    // 0xb8d
    if (v3 != 0) {
        // 0xbea
        return result;
    }
    int64_t v4 = a | 0x8000000000000; // 0xb5a
    int64_t result2 = v4; // 0xba8
    if (v1 == 0) {
        // 0xbbb
        result2 = v2 == 0 ? v4 : result;
    }
    // 0xbea
    return result2;
}
int64_t subFloat64Sigs(int64_t a, int64_t b, int32_t zSign) {
    int64_t v1 = extractFloat64Frac(a); // 0xc17
    int32_t v2 = extractFloat64Exp(a); // 0xc24
    int64_t v3 = 0x100000000 * b >> 32; // 0xc2c
    int64_t v4 = extractFloat64Frac(v3); // 0xc30
    int32_t v5 = extractFloat64Exp(v3); // 0xc3d
    int32_t v6 = v2 - v5; // 0xc48
    int64_t v7 = 1024 * v1; // 0xc52
    int64_t v8 = 1024 * v4; // 0xc5e
    int64_t v9; // 0xc00
    int64_t v10; // 0xc00
    int64_t v11; // 0xc00
    int64_t v12; // 0xc00
    int32_t v13; // 0xc00
    int32_t v14; // 0xc00
    if (v6 < 1) {
        int64_t result; // 0xc00
        if (v6 == 0) {
            if (v2 == 2047) {
                if ((v8 || v7) == 0) {
                    // 0xcba
                    float_raise(16);
                    result = 0x7fffffffffffffff;
                } else {
                    // 0xca4
                    result = propagateFloat64NaN(a, v3);
                }
                // 0xea9
                return result;
            }
            // 0xcd7
            v13 = v2 != 0 ? v2 : 1;
            v10 = v7;
            v12 = v8;
            if (v8 >= v7) {
                // 0xd02
                v14 = v2 != 0 ? v5 : 1;
                v9 = v7;
                v11 = v8;
                if (v7 >= v8) {
                    // 0xea9
                    return packFloat64((int32_t)(*(int32_t *)*(int64_t *)3356 == 3), 0, 0);
                }
                goto lab_0xdd4;
            } else {
                goto lab_0xe7b;
            }
        } else {
            if (v5 == 2047) {
                if (v8 == 0) {
                    // 0xd69
                    result = packFloat64(zSign ^ 1, 2047, 0);
                } else {
                    // 0xd53
                    result = propagateFloat64NaN(a, v3);
                }
                // 0xea9
                return result;
            }
            // 0xd86
            v9 = v2 != 0 ? v7 | 0x4000000000000000 : v7;
            v11 = v8 | 0x4000000000000000;
            v14 = v5;
            goto lab_0xdd4;
        }
    } else {
        if (v2 == 2047) {
            // 0xe01
            if (v7 != 0) {
                // branch -> 0xea9
            }
            // 0xea9
            return a;
        }
        // 0xe2f
        v10 = v7 | 0x4000000000000000;
        v13 = v2;
        v12 = v5 != 0 ? v8 | 0x4000000000000000 : v8;
        goto lab_0xe7b;
    }
  lab_0xe7b:;
    int32_t v15 = zSign; // 0xe8a
    int64_t v16 = v10 - v12; // 0xe8a
    int32_t v17 = v13; // 0xe8a
    return normalizeRoundAndPackFloat64(v15, v17 - 1, v16);
  lab_0xdd4:
    // 0xdd4
    v15 = zSign ^ 1;
    v16 = v11 - v9;
    v17 = v14;
    goto lab_0xe8d;
  lab_0xe8d:
    // 0xea9
    return normalizeRoundAndPackFloat64(v15, v17 - 1, v16);
}
int64_t float64_add(int64_t a, int64_t b) {
    int32_t v1 = extractFloat64Sign(a); // 0xed4
    int64_t v2 = 0x100000000 * b >> 32; // 0xedc
    int64_t result; // 0xec0
    if (v1 != extractFloat64Sign(v2)) {
        // 0xf0d
        result = subFloat64Sigs(a, v2, v1);
    } else {
        // 0xef4
        result = addFloat64Sigs(a, v2, v1);
    }
    // 0xf21
    return result;
}
int64_t float64_mul(int64_t a, int64_t b) {
    int64_t v1 = extractFloat64Frac(a); // 0xf44
    int64_t aSig = v1; // bp-64, 0xf49
    int32_t v2 = extractFloat64Exp(a);
    int32_t aExp = v2; // bp-48, 0xf56
    int32_t v3 = extractFloat64Sign(a); // 0xf5d
    int64_t v4 = 0x100000000 * b >> 32; // 0xf65
    int64_t v5 = extractFloat64Frac(v4); // 0xf69
    int64_t bSig = v5; // bp-72, 0xf6e
    int32_t v6 = extractFloat64Exp(v4); // 0xf76
    int32_t bExp = v6; // bp-52, 0xf7b
    int32_t v7 = extractFloat64Sign(v4) ^ v3; // 0xf8d
    int64_t result; // 0xf30
    if (v2 == 2047) {
        if (v1 != 0) {
            // 0x11b4
            return propagateFloat64NaN(a, v4);
        }
        if (v5 != 0 && v6 == 2047) {
            // 0x11b4
            return propagateFloat64NaN(a, v4);
        }
        if ((v5 || (int64_t)v6) != 0) {
            // 0x1008
            result = packFloat64(v7, 2047, 0);
        } else {
            // 0xfeb
            float_raise(16);
            result = 0x7fffffffffffffff;
        }
        // 0x11b4
        return result;
    }
    if (v6 == 2047) {
        if (v5 != 0) {
            // 0x11b4
            return propagateFloat64NaN(a, v4);
        }
        if ((v1 || (int64_t)v2) != 0) {
            // 0x107f
            result = packFloat64(v7, 2047, 0);
        } else {
            // 0x1062
            float_raise(16);
            result = 0x7fffffffffffffff;
        }
        // 0x11b4
        return result;
    }
    int32_t v8 = v6; // 0x109d
    if (v2 == 0) {
        if (v1 == 0) {
            // 0x11b4
            return packFloat64(v7, 0, 0);
        }
        // 0x10c5
        normalizeFloat64Subnormal(v1, &aExp, &aSig);
        v8 = bExp;
    }
    // 0x10d6
    bExp = v8;
    if (v8 == 0) {
        // 0x10e0
        if (bSig == 0) {
            // 0x11b4
            return packFloat64(v7, 0, 0);
        }
        // 0x1102
        normalizeFloat64Subnormal(bSig, &bExp, &bSig);
    }
    int32_t v9 = aExp + bExp; // 0x1116
    int64_t v10 = 1024 * aSig | 0x4000000000000000; // 0x112f
    aSig = v10;
    int64_t v11 = 2048 * bSig | -0x8000000000000000; // 0x1145
    bSig = v11;
    int64_t v12; // bp-88, 0xf30
    int64_t zSig0; // bp-80, 0xf30
    mul64To128(v10, v11, &zSig0, &v12);
    int64_t v13 = zSig0; // 0x1171
    int64_t v14 = v13 | (int64_t)(v12 != 0); // 0x1171
    zSig0 = v14;
    int64_t v15 = v14; // 0x1186
    int32_t v16 = v9 - 1023; // 0x1186
    if ((v13 & 0x4000000000000000) == 0) {
        // 0x118c
        v15 = 2 * v14;
        zSig0 = v15;
        v16 = v9 - 1024;
    }
    // 0x11b4
    return roundAndPackFloat64(v7, v16, v15);
}
int64_t float64_div(int64_t a, int64_t b) {
    int64_t v1 = extractFloat64Frac(a); // 0x11d4
    int64_t aSig = v1; // bp-64, 0x11d9
    int32_t v2 = extractFloat64Exp(a);
    int32_t aExp = v2; // bp-48, 0x11e6
    int32_t v3 = extractFloat64Sign(a); // 0x11ed
    int64_t v4 = 0x100000000 * b >> 32; // 0x11f5
    int64_t v5 = extractFloat64Frac(v4); // 0x11f9
    int64_t bSig = v5; // bp-72, 0x11fe
    int32_t v6 = extractFloat64Exp(v4); // 0x1206
    int32_t bExp = v6; // bp-52, 0x120b
    int32_t v7 = extractFloat64Sign(v4) ^ v3; // 0x121d
    int64_t result; // 0x11c0
    if (v2 == 2047) {
        if (v1 != 0) {
            // 0x14d3
            return propagateFloat64NaN(a, v4);
        }
        if (v6 != 2047) {
            // 0x14d3
            return packFloat64(v7, 2047, 0);
        }
        if (v5 == 0) {
            // 0x127f
            float_raise(16);
            result = 0x7fffffffffffffff;
        } else {
            // 0x1269
            result = propagateFloat64NaN(a, v4);
        }
        // 0x14d3
        return result;
    }
    if (v6 == 2047) {
        if (v5 == 0) {
            // 0x12e4
            result = packFloat64(v7, 0, 0);
        } else {
            // 0x12ce
            result = propagateFloat64NaN(a, v4);
        }
        // 0x14d3
        return result;
    }
    int32_t v8 = v2; // 0x12ff
    if (v6 == 0) {
        if (v5 == 0) {
            if ((v1 || (int64_t)v2) != 0) {
                // 0x133f
                float_raise(2);
                int64_t v9 = packFloat64(v7, 2047, (int64_t)((int32_t)&g3 ^ (int32_t)&g3)); // 0x1355
                result = v9;
            } else {
                // 0x1322
                float_raise(16);
                result = 0x7fffffffffffffff;
            }
            // 0x14d3
            return result;
        }
        // 0x1363
        normalizeFloat64Subnormal(v5, &bExp, &bSig);
        v8 = aExp;
    }
    // 0x1374
    aExp = v8;
    if (v8 == 0) {
        // 0x137e
        if (aSig == 0) {
            // 0x14d3
            return packFloat64(v7, 0, 0);
        }
        // 0x13a0
        normalizeFloat64Subnormal(aSig, &aExp, &aSig);
    }
    int32_t v10 = aExp - bExp; // 0x13b4
    int64_t v11 = 1024 * aSig | 0x4000000000000000; // 0x13cd
    aSig = v11;
    int64_t v12 = 2048 * bSig | -0x8000000000000000; // 0x13e3
    bSig = v12;
    int64_t v13 = v11; // 0x13fa
    int32_t v14 = v10 + 1021; // 0x13fa
    if (v12 <= 2 * v11) {
        // 0x1400
        v13 = v11 / 2;
        aSig = v13;
        v14 = v10 + 1022;
    }
    int64_t v15 = estimateDiv128To64(v13, 0, v12); // 0x1421
    if ((v15 & 511) >= 3) {
        // 0x14d3
        return roundAndPackFloat64(v7, v14, v15);
    }
    // 0x143e
    int64_t term0; // bp-104, 0x11c0
    int64_t term1; // bp-112, 0x11c0
    mul64To128(bSig, v15, &term0, &term1);
    int64_t rem0; // bp-88, 0x11c0
    int64_t rem1; // bp-96, 0x11c0
    sub128(aSig, (int64_t)((int32_t)&g3 ^ (int32_t)&g3), term0, term1, &rem0, &rem1);
    int64_t v16 = v15; // 0x1475
    int64_t v17 = v15; // 0x1475
    if (rem0 < 0) {
        v16--;
        add128(rem0, rem1, 0, bSig, &rem0, &rem1);
        int64_t v18 = rem0; // 0x1470
        v17 = v16;
        while (v18 < 0) {
            // 0x147b
            v16--;
            add128(v18, rem1, 0, bSig, &rem0, &rem1);
            v18 = rem0;
            v17 = v16;
        }
    }
    int64_t v19 = v17 | (int64_t)(rem1 != 0); // 0x14bc
    // 0x14d3
    return roundAndPackFloat64(v7, v14, v19);
}
int64_t estimateDiv128To64(uint64_t a0, int64_t a1, uint64_t b) {
    // 0x14e0
    if (b <= a0) {
        // 0x1637
        return -1;
    }
    uint64_t v1 = b / 0x100000000; // 0x1513
    uint64_t v2 = b & -0x100000000; // 0x151f
    int64_t v3 = -0x100000000; // 0x1527
    if (v2 > a0) {
        // 0x1540
        v3 = 0x100000000 * a0 / v1;
    }
    // 0x1554
    int64_t term0; // bp-80, 0x14e0
    int64_t term1; // bp-88, 0x14e0
    mul64To128(b, v3, &term0, &term1);
    int64_t rem0; // bp-64, 0x14e0
    int64_t rem1; // bp-72, 0x14e0
    sub128(a0, a1, term0, term1, &rem0, &rem1);
    int64_t v4 = rem0; // 0x158e
    int64_t v5 = v3; // 0x1593
    int64_t v6 = v4; // 0x1593
    if (v4 < 0) {
        int64_t v7 = v3; // 0x15a7
        v7 -= 0x100000000;
        add128(v4, rem1, v1, 0x100000000 * b, &rem0, &rem1);
        int64_t v8 = rem0; // 0x158e
        v5 = v7;
        v6 = v8;
        while (v8 < 0) {
            // 0x1599
            v7 -= 0x100000000;
            add128(v8, rem1, v1, 0x100000000 * b, &rem0, &rem1);
            v8 = rem0;
            v5 = v7;
            v6 = v8;
        }
    }
    uint64_t v9 = rem1 / 0x100000000 | 0x100000000 * v6; // 0x15ec
    rem0 = v9;
    int64_t v10 = 0xffffffff; // 0x15ff
    if (v2 > v9) {
        // 0x1613
        v10 = v9 / v1;
    }
    // 0x1637
    return v10 | v5;
}
int32_t float64_le(uint64_t a, int64_t b) {
    // 0x1650
    if (extractFloat64Exp(a) == 2047) {
        // 0x1674
        if (extractFloat64Frac(a) != 0) {
            // 0x16ae
            float_raise(16);
            // 0x175a
            return false;
        }
    }
    uint64_t v1 = 0x100000000 * b >> 32; // 0x1687
    if (extractFloat64Exp(v1) == 2047) {
        // 0x169b
        if (extractFloat64Frac(v1) != 0) {
            // 0x16ae
            float_raise(16);
            // 0x175a
            return false;
        }
    }
    int32_t v2 = extractFloat64Sign(a); // 0x16c8
    bool result; // 0x1650
    if (v2 == extractFloat64Sign(v1)) {
        // 0x171d
        result = true;
        if (v1 != a) {
            // 0x1730
            result = v2 != (int32_t)(v1 > a);
        }
    } else {
        // 0x16e8
        result = true;
        if (v2 == 0) {
            // 0x16f7
            result = ((v1 | a) & 0x7fffffffffffffff) == 0;
        }
    }
    // 0x175a
    return result;
}
int32_t float64_ge(int64_t a, int64_t b) {
    // 0x1770
    return float64_le(b, a);
}
int64_t float64_neg(int64_t x) {
    // 0x17a0
    return x ^ -0x8000000000000000;
}
int64_t float64_abs(int64_t x) {
    // 0x17d0
    return x & 0x7fffffffffffffff;
}
int64_t local_sin(int64_t rad) {
    int64_t v1 = float64_neg(float64_mul(rad, rad)); // 0x181f
    int64_t result = rad; // 0x1824
    int32_t v2 = 1; // 0x1824
    int64_t v3 = float64_mul(rad, v1); // 0x1830
    int32_t v4 = 2 * v2; // 0x183c
    int64_t v5 = float64_div(v3, int32_to_float64((v4 | 1) * v4)); // 0x1857
    result = float64_add(result, v5);
    int64_t v6 = float64_abs(v5); // 0x187e
    v2++;
    while (float64_ge(v6, 0x3ee4f8b588e368f1) != 0) {
        // 0x1828
        v3 = float64_mul(v5, v1);
        v4 = 2 * v2;
        v5 = float64_div(v3, int32_to_float64((v4 | 1) * v4));
        result = float64_add(result, v5);
        v6 = float64_abs(v5);
        v2++;
    }
    // 0x189e
    return result;
}
float64_t ullong_to_double(int64_t x) {
    // 0x18b0
    int64_t v1; // 0x18b0
    return (int64_t)__asm_movsd(v1);
}
