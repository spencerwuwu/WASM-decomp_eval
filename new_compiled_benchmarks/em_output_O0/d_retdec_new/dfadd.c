
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "dfadd.h"
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
void float_raise(int32_t flags) {
    int32_t v1 = *(int32_t *)*(int64_t *)161; // 0xa1
    *(int32_t *)*(int64_t *)170 = v1 | flags;
}
int32_t float64_is_nan(int64_t a) {
    // 0xb0
    int64_t result; // 0xb0
    return result;
}
int32_t float64_is_signaling_nan(uint64_t a) {
    int32_t result = 0; // 0x103
    if ((a / 0x8000000000000 & (int64_t)&g2) == (int64_t)"\f@") {
        // 0x109
        result = (a & 0x7ffffffffffff) != 0;
    }
    // 0x121
    return result;
}
int64_t extractFloat64Frac(int64_t a) {
    // 0x130
    return a & 0xfffffffffffff;
}
int32_t extractFloat64Exp(uint64_t a) {
    // 0x150
    return (int32_t)(a / 0x10000000000000) & 2047;
}
int32_t extractFloat64Sign(uint64_t a) {
    // 0x170
    return a / 0x8000000000000000;
}
int64_t packFloat64(uint32_t zSign, uint32_t zExp, int64_t zSig) {
    // 0x190
    return 0x8000000000000000 * (int64_t)zSign + zSig + 0x10000000000000 * (int64_t)zExp;
}
int64_t roundAndPackFloat64(int32_t zSign, int32_t zExp, int64_t zSig) {
    int32_t v1 = *(int32_t *)*(int64_t *)473; // 0x1d9
    int32_t v2 = 512; // 0x1f8
    if (v1 != 0) {
        // 0x1fe
        v2 = 0;
        if (v1 != 1) {
            if (zSign == 0) {
                // 0x23b
                v2 = v1 != 3 ? 1023 : 0;
            } else {
                // 0x225
                v2 = v1 != 2 ? 1023 : 0;
            }
        }
    }
    int32_t v3 = (int32_t)zSig & 1023;
    int64_t result = 2045; // 0x275
    if ((zExp & 0xffff) < 2045) {
        goto lab_0x341;
    } else {
        // 0x27b
        int64_t v4; // 0x2c1
        if (zExp > 2045) {
            // 0x2ab
            float_raise(9);
            v4 = packFloat64(zSign, 2047, (int64_t)((int32_t)&g3 ^ (int32_t)&g3));
            return v4 - (int64_t)(v2 == 0);
        }
        // 0x289
        result = 2045;
        if (zExp == 2045) {
            // 0x296
            result = (0x100000000 * zSig >> 32) + (int64_t)v2;
            if (result < 0) {
                // 0x2ab
                float_raise(9);
                v4 = packFloat64(zSign, 2047, (int64_t)((int32_t)&g3 ^ (int32_t)&g3));
                return v4 - (int64_t)(v2 == 0);
            }
        }
        // 0x2e2
        if (zExp >= 0) {
            goto lab_0x341;
        } else {
            // 0x2ec
            if (v3 == 0) {
                // 0x360
                return 0;
            }
            // 0x341
            float_raise(4);
            goto lab_0x34b;
        }
    }
  lab_0x341:
    // 0x341
    if (v3 == 0) {
        // 0x360
        return result;
    }
    goto lab_0x34b;
  lab_0x34b:;
    int64_t result2 = *(int64_t *)862; // 0x357
    *(int32_t *)result2 = *(int32_t *)*(int64_t *)850 | 1;
    // 0x360
    return result2;
}
int64_t normalizeRoundAndPackFloat64(int32_t zSign, int32_t zExp, int64_t zSig) {
    int32_t v1 = countLeadingZeros64(zSig) - 1; // 0x3eb
    return roundAndPackFloat64(zSign, zExp - v1, zSig << (int64_t)(v1 & 63));
}
int32_t countLeadingZeros64(uint64_t a) {
    int64_t v1 = a >= 0x100000000 ? a / 0x100000000 : a;
    return countLeadingZeros32((int32_t)v1) + (a >= 0x100000000 ? 0 : 32);
}
int32_t countLeadingZeros32(uint32_t a) {
    uint32_t v1 = a >= 0x10000 ? a : 0x10000 * a;
    int32_t v2 = a >= 0x10000 ? 0 : 16;
    uint32_t v3 = v1 >= 0x1000000 ? v1 : 256 * v1;
    int32_t v4 = *(int32_t *)((int64_t)(4 * v3 / 0x1000000) + (int64_t)&g1); // 0xc8d
    return v4 + (v1 >= 0x1000000 ? v2 : v2 | 8);
}
int64_t addFloat64Sigs(int64_t a, int64_t b, int32_t zSign) {
    int64_t v1 = extractFloat64Frac(a); // 0x497
    int32_t v2 = extractFloat64Exp(a); // 0x4a4
    int64_t v3 = 0x100000000 * b >> 32; // 0x4ac
    int64_t v4 = extractFloat64Frac(v3); // 0x4b0
    int32_t v5 = extractFloat64Exp(v3); // 0x4bd
    int32_t v6 = v2 - v5; // 0x4c8
    int64_t v7 = 512 * v1; // 0x4d2
    int64_t v8 = 512 * v4; // 0x4de
    int64_t v9; // 0x480
    int64_t v10; // 0x480
    int64_t result; // 0x480
    int32_t v11; // 0x480
    int32_t v12; // 0x480
    int64_t v13; // 0x480
    if (v6 < 1) {
        if (v6 == 0) {
            if (v2 == 2047) {
                // 0x617
                result = a;
                if ((v8 || v7) != 0) {
                    // 0x629
                    result = propagateFloat64NaN(a, v3);
                }
                // 0x6fe
                return result;
            }
            uint64_t v14 = v8 + v7;
            if (v2 == 0) {
                // 0x6fe
                return packFloat64(zSign, 0, v14 / 512);
            }
            // 0x675
            v12 = v2;
            v13 = v14 + 0x4000000000000000;
            return roundAndPackFloat64(zSign, v12, v13);
        } else {
            if (v5 == 2047) {
                if (v8 == 0) {
                    // 0x5a9
                    result = packFloat64(zSign, 2047, 0);
                } else {
                    // 0x593
                    result = propagateFloat64NaN(a, v3);
                }
                // 0x6fe
                return result;
            }
            // 0x5c3
            v9 = v2 != 0 ? v7 | 0x2000000000000000 : v7;
            v10 = v8;
            v11 = v5;
            goto lab_0x69b;
        }
    } else {
        if (v2 == 2047) {
            // 0x4fe
            result = a;
            if (v7 != 0) {
                // 0x509
                result = propagateFloat64NaN(a, v3);
            }
            // 0x6fe
            return result;
        }
        // 0x52c
        v9 = v7;
        v10 = v5 != 0 ? v8 | 0x2000000000000000 : v8;
        v11 = v2;
        goto lab_0x69b;
    }
  lab_0x69b:;
    int64_t v15 = (v9 | 0x2000000000000000) + v10; // 0x6b1
    int64_t v16 = 2 * v15; // 0x6b5
    v12 = v11 + (int32_t)(v16 >= 0);
    v13 = v16 >= 0 ? v16 : v15;
    return roundAndPackFloat64(zSign, v12, v13);
    // 0x6fe
    return roundAndPackFloat64(zSign, v12, v13);
}
int64_t propagateFloat64NaN(int64_t a, int64_t b) {
    // 0x710
    float64_is_nan(a);
    int32_t v1 = float64_is_signaling_nan(a); // 0x730
    int64_t result = 0x100000000 * b >> 32; // 0x738
    int32_t v2 = float64_is_nan(result); // 0x73c
    int32_t v3 = float64_is_signaling_nan(result); // 0x748
    if ((v3 || v1) != 0) {
        // 0x783
        float_raise(16);
    }
    // 0x78d
    if (v3 != 0) {
        // 0x7ea
        return result;
    }
    int64_t v4 = a | 0x8000000000000; // 0x75a
    int64_t result2 = v4; // 0x7a8
    if (v1 == 0) {
        // 0x7bb
        result2 = v2 == 0 ? v4 : result;
    }
    // 0x7ea
    return result2;
}
int64_t subFloat64Sigs(int64_t a, int64_t b, int32_t zSign) {
    int64_t v1 = extractFloat64Frac(a); // 0x817
    int32_t v2 = extractFloat64Exp(a); // 0x824
    int64_t v3 = 0x100000000 * b >> 32; // 0x82c
    int64_t v4 = extractFloat64Frac(v3); // 0x830
    int32_t v5 = extractFloat64Exp(v3); // 0x83d
    int32_t v6 = v2 - v5; // 0x848
    int64_t v7 = 1024 * v1; // 0x852
    int64_t v8 = 1024 * v4; // 0x85e
    int64_t v9; // 0x800
    int64_t v10; // 0x800
    int64_t v11; // 0x800
    int64_t v12; // 0x800
    int32_t v13; // 0x800
    int32_t v14; // 0x800
    if (v6 < 1) {
        int64_t result; // 0x800
        if (v6 == 0) {
            if (v2 == 2047) {
                if ((v8 || v7) == 0) {
                    // 0x8ba
                    float_raise(16);
                    result = 0x7fffffffffffffff;
                } else {
                    // 0x8a4
                    result = propagateFloat64NaN(a, v3);
                }
                // 0xaa9
                return result;
            }
            // 0x8d7
            v13 = v2 != 0 ? v2 : 1;
            v10 = v7;
            v12 = v8;
            if (v8 >= v7) {
                // 0x902
                v14 = v2 != 0 ? v5 : 1;
                v9 = v7;
                v11 = v8;
                if (v7 >= v8) {
                    // 0xaa9
                    return packFloat64((int32_t)(*(int32_t *)*(int64_t *)2332 == 3), 0, 0);
                }
                goto lab_0x9d4;
            } else {
                goto lab_0xa7b;
            }
        } else {
            if (v5 == 2047) {
                if (v8 == 0) {
                    // 0x969
                    result = packFloat64(zSign ^ 1, 2047, 0);
                } else {
                    // 0x953
                    result = propagateFloat64NaN(a, v3);
                }
                // 0xaa9
                return result;
            }
            // 0x986
            v9 = v2 != 0 ? v7 | 0x4000000000000000 : v7;
            v11 = v8 | 0x4000000000000000;
            v14 = v5;
            goto lab_0x9d4;
        }
    } else {
        if (v2 == 2047) {
            // 0xa01
            if (v7 != 0) {
                // branch -> 0xaa9
            }
            // 0xaa9
            return a;
        }
        // 0xa2f
        v10 = v7 | 0x4000000000000000;
        v13 = v2;
        v12 = v5 != 0 ? v8 | 0x4000000000000000 : v8;
        goto lab_0xa7b;
    }
  lab_0xa7b:;
    int32_t v15 = zSign; // 0xa8a
    int64_t v16 = v10 - v12; // 0xa8a
    int32_t v17 = v13; // 0xa8a
    return normalizeRoundAndPackFloat64(v15, v17 - 1, v16);
  lab_0x9d4:
    // 0x9d4
    v15 = zSign ^ 1;
    v16 = v11 - v9;
    v17 = v14;
    goto lab_0xa8d;
  lab_0xa8d:
    // 0xaa9
    return normalizeRoundAndPackFloat64(v15, v17 - 1, v16);
}
int64_t float64_add(int64_t a, int64_t b) {
    int32_t v1 = extractFloat64Sign(a); // 0xad4
    int64_t v2 = 0x100000000 * b >> 32; // 0xadc
    int64_t result; // 0xac0
    if (v1 != extractFloat64Sign(v2)) {
        // 0xb0d
        result = subFloat64Sigs(a, v2, v1);
    } else {
        // 0xaf4
        result = addFloat64Sigs(a, v2, v1);
    }
    // 0xb21
    return result;
}
float64_t ullong_to_double(int64_t x) {
    // 0xb30
    int64_t v1; // 0xb30
    return (int64_t)__asm_movsd(v1);
}
