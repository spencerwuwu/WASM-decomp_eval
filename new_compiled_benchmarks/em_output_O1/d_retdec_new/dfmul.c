
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "dfmul.h"
int64_t shift64RightJamming(uint64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a2; // 0x0
    if (v1 == 0) {
        // 0x33
        *(int64_t *)a3 = a1;
        int64_t result; // 0x0
        return result;
    }
    if (v1 <= 63) {
        int64_t result2 = a1 >> (a2 & 63);
        *(int64_t *)a3 = result2 | (int64_t)(a1 << (-a2 & 63) != 0);
        return result2;
    }
    int64_t result3 = a1 != 0; // 0x2d
    // 0x33
    *(int64_t *)a3 = result3;
    return result3;
}
int64_t mul64To128(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a1 / 0x100000000; // 0x43
    uint64_t v2 = a2 / 0x100000000; // 0x4a
    uint64_t v3 = (a2 & 0xffffffff) * v1;
    uint64_t v4 = v3 + v2 * (a1 & 0xffffffff); // 0x62
    int64_t result = 0x100000000 * (int64_t)(v4 < v3); // 0x68
    uint64_t v5 = a2 * a1; // 0x7a
    *(int64_t *)a4 = v5;
    *(int64_t *)a3 = v4 / 0x100000000 + v2 * v1 + result + (int64_t)(v5 < 0x100000000 * v4);
    return result;
}
int64_t float_raise(int64_t a1) {
    int64_t result = *(int64_t *)151; // 0x90
    int32_t * v1 = (int32_t *)result; // 0x97
    *v1 = *v1 | (int32_t)a1;
    return result;
}
int64_t float64_is_nan(int64_t a1) {
    // 0xa0
    return (bool)((uint64_t)(2 * a1) >= 0xffe0000000000001);
}
int64_t float64_is_signaling_nan(int64_t a1) {
    // 0xc0
    return (bool)((a1 & 0x7ff8000000000000) == 0x7ff0000000000000 == ((a1 & 0x7ffffffffffff) != 0));
}
int64_t extractFloat64Frac(int64_t a1) {
    // 0xf0
    return a1 & 0xfffffffffffff;
}
int64_t extractFloat64Exp(uint64_t a1) {
    // 0x100
    return a1 / 0x10000000000000 & (int64_t)(uint32_t)(int32_t)&g2;
}
int32_t extractFloat64Sign(uint64_t a) {
    // 0x110
    return a / 0x8000000000000000;
}
int64_t normalizeFloat64Subnormal(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 < 0x100000000 ? a1 : a1 / 0x100000000;
    int64_t v2 = (int32_t)v1 >= 0x10000 ? v1 : 0x10000 * v1; // 0x142
    int32_t v3 = 16 * (int32_t)((int32_t)v1 < 0x10000); // 0x14a
    uint64_t v4 = (int32_t)v2 >= 0x1000000 ? v2 : 256 * v2; // 0x15f
    int32_t v5 = (int32_t)v2 >= 0x1000000 ? v3 : v3 | 8; // 0x163
    int32_t v6 = *(int32_t *)((v4 / 0x400000 & 1020) + (int64_t)&g3); // 0x174
    int32_t v7 = v6 + (v5 | 32 * (int32_t)(a1 < 0x100000000)); // 0x174
    *(int64_t *)a3 = a1 << (int64_t)(v7 + 53 & 63);
    uint32_t result = 12 - v7; // 0x187
    *(int32_t *)a2 = result;
    return result;
}
int64_t packFloat64(int64_t a1, int64_t a2, int64_t a3) {
    // 0x190
    return 0x8000000000000000 * a1 + a3 + 0x10000000000000 * a2;
}
int64_t roundAndPackFloat64(uint32_t zSign, int32_t zExp, uint64_t zSig) {
    int64_t result = zSign; // 0x1a0
    if (*(int32_t *)*(int64_t *)425 != 0) {
        // 0x1af
        return result;
    }
    char * v1; // 0x28c
    if ((zExp & 0xffff) >= (int32_t)&g1) {
        char * v2; // 0x21b
        if (zExp > (int32_t)&g1) {
            // 0x214
            v2 = (char *)*(int64_t *)539;
            *v2 = *v2 | 9;
            return 0x8000000000000000 * result | 0x7ff0000000000000;
        }
        if (zExp == (int32_t)&g1) {
            if (zSig < -512) {
                // 0x214
                v2 = (char *)*(int64_t *)539;
                *v2 = *v2 | 9;
                return 0x8000000000000000 * result | 0x7ff0000000000000;
            }
        }
        if (zExp < 0) {
            int64_t v3; // 0x1a0
            if (zExp < -63) {
                // 0x258
                v3 = zSig != 0;
            } else {
                int64_t v4 = zExp;
                v3 = zSig >> (-v4 & 63) | (int64_t)(zSig << (v4 & 63) != 0);
            }
            // 0x260
            if ((v3 & 1023) == 0) {
                // 0x1af
                return result;
            }
            char * v5 = (char *)*(int64_t *)632; // 0x278
            *v5 = *v5 | 4;
            // 0x285
            v1 = (char *)*(int64_t *)652;
            *v1 = *v1 | 1;
            // 0x1af
            return result;
        }
    }
    if ((zSig & 1023) == 0) {
        // 0x1af
        return result;
    }
    // 0x285
    v1 = (char *)*(int64_t *)652;
    *v1 = *v1 | 1;
    // 0x1af
    return result;
}
int64_t float64_mul(uint64_t a, uint64_t b) {
    uint64_t v1 = a & 0xfffffffffffff; // 0x2e1
    int64_t v2 = a / 0x10000000000000 & (int64_t)(int32_t)&g2; // 0x2ee
    uint64_t v3 = b & 0xfffffffffffff; // 0x2f5
    int64_t v4 = b / 0x10000000000000 & (int64_t)(int32_t)&g2; // 0x302
    uint64_t v5 = b ^ a; // 0x30a
    char * v6; // 0x348
    if ((int32_t)v2 != (int32_t)&g2) {
        int32_t v7 = v4;
        if (v7 != (int32_t)&g2) {
            int64_t v8 = v1; // 0x3fd
            int64_t v9 = v2; // 0x3fd
            if (v2 == 0) {
                if (v1 == 0) {
                    // 0x5b3
                    return v5 & -0x8000000000000000;
                }
                int64_t v10 = v1 < 0x100000000 ? a : v1 / 0x100000000;
                int64_t v11 = (int32_t)v10 >= 0x10000 ? v10 : 0x10000 * v10; // 0x42e
                int32_t v12 = 16 * (int32_t)((int32_t)v10 < 0x10000); // 0x436
                uint64_t v13 = (int32_t)v11 >= 0x1000000 ? v11 : 256 * v11; // 0x44b
                int32_t v14 = (int32_t)v11 >= 0x1000000 ? v12 : v12 | 8; // 0x44f
                int32_t v15 = *(int32_t *)((v13 / 0x400000 & 1020) + (int64_t)&g3); // 0x461
                int32_t v16 = v15 + (v14 | 32 * (int32_t)(v1 < 0x100000000)); // 0x461
                v8 = v1 << (int64_t)(v16 + 53 & 63);
                v9 = 12 - v16;
            }
            int32_t v17 = v7; // 0x480
            int64_t v18 = v3; // 0x480
            if (v4 == 0) {
                if (v3 == 0) {
                    // 0x5b3
                    return v5 & -0x8000000000000000;
                }
                int64_t v19 = v3 < 0x100000000 ? b : v3 / 0x100000000;
                int64_t v20 = (int32_t)v19 >= 0x10000 ? v19 : 0x10000 * v19; // 0x4ab
                int32_t v21 = 16 * (int32_t)((int32_t)v19 < 0x10000); // 0x4b2
                uint64_t v22 = (int32_t)v20 >= 0x1000000 ? v20 : 256 * v20; // 0x4c5
                int32_t v23 = (int32_t)v20 >= 0x1000000 ? v21 : v21 | 8; // 0x4c8
                int32_t v24 = *(int32_t *)((v22 / 0x400000 & 1020) + (int64_t)&g3); // 0x4d8
                int32_t v25 = v24 + (v23 | 32 * (int32_t)(v3 < 0x100000000)); // 0x4d8
                v17 = 12 - v25;
                v18 = v3 << (int64_t)(v25 + 53 & 63);
            }
            int64_t v26 = 1024 * v8; // 0x4ef
            uint64_t v27 = v26 | 0x4000000000000000; // 0x4fd
            int64_t v28 = 2048 * v18; // 0x500
            uint64_t v29 = v28 | -0x8000000000000000; // 0x504
            uint64_t v30 = v27 / 0x100000000; // 0x50a
            uint64_t v31 = v29 / 0x100000000; // 0x511
            uint64_t v32 = (v28 & 0xfffff800) * v30;
            uint64_t v33 = v31 * (v26 & 0xfffffc00) + v32; // 0x528
            uint64_t v34 = v29 * v27; // 0x541
            int64_t v35 = v33 / 0x100000000 + v31 * v30 + 0x100000000 * (int64_t)(v33 < v32) + (int64_t)(v34 < 0x100000000 * v33) | (int64_t)(v34 != 0); // 0x553
            int64_t v36 = 2 * v35; // 0x55b
            int64_t v37 = v36 < 0 ? v35 : v36; // 0x562
            return roundAndPackFloat64((int32_t)(v5 / 0x8000000000000000), (int32_t)v9 - 1023 + v17 + (int32_t)(v36 >= 0), v37);
        }
        if (v3 == 0) {
            if ((v2 || v1) != 0) {
                // 0x58f
                return v5 & -0x8000000000000000 | 0x7ff0000000000000;
            }
            // 0x341
            v6 = (char *)*(int64_t *)840;
            *v6 = *v6 | 16;
            return 0x7fffffffffffffff;
        }
    } else {
        if (v1 == 0) {
            if (v3 != 0 != ((int32_t)v4 == (int32_t)&g2)) {
                if ((v4 || v3) != 0) {
                    // 0x58f
                    return v5 & -0x8000000000000000 | 0x7ff0000000000000;
                }
                // 0x341
                v6 = (char *)*(int64_t *)840;
                *v6 = *v6 | 16;
                return 0x7fffffffffffffff;
            }
        }
    }
    if ((a & 0x7ff8000000000000) == 0x7ff0000000000000 != (a & 0x7ffffffffffff) != 0) {
        if ((b & 0x7ff8000000000000) == 0x7ff0000000000000 != (b & 0x7ffffffffffff) != 0) {
            // 0x3c8
            return 0x7ffffffffffff;
        }
    }
    char * v38 = (char *)*(int64_t *)964; // 0x3c4
    *v38 = *v38 | 16;
    // 0x3c8
    return 0x7ffffffffffff;
}
float64_t ullong_to_double(int64_t x) {
    // 0x5c0
    int128_t v1; // 0x5c0
    return (int64_t)v1;
}
