
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "dfdiv.h"
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
int64_t add128(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a4 + a2; // 0x40
    *(int64_t *)a6 = v1;
    *(int64_t *)a5 = a3 + a1 + (int64_t)(v1 < a2);
    int64_t result; // 0x40
    return result;
}
int64_t sub128(int64_t a1, uint64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x50
    *(int64_t *)a6 = a2 - a4;
    *(int64_t *)a5 = a1 - a3 + (int64_t)(a2 < a4);
    int64_t result; // 0x50
    return result;
}
int64_t mul64To128(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a1 / 0x100000000; // 0x63
    uint64_t v2 = a2 / 0x100000000; // 0x6a
    uint64_t v3 = (a2 & 0xffffffff) * v1;
    uint64_t v4 = v3 + v2 * (a1 & 0xffffffff); // 0x82
    int64_t result = 0x100000000 * (int64_t)(v4 < v3); // 0x88
    uint64_t v5 = a2 * a1; // 0x9a
    *(int64_t *)a4 = v5;
    *(int64_t *)a3 = v4 / 0x100000000 + v2 * v1 + result + (int64_t)(v5 < 0x100000000 * v4);
    return result;
}
int64_t float_raise(int64_t a1) {
    int64_t result = *(int64_t *)183; // 0xb0
    int32_t * v1 = (int32_t *)result; // 0xb7
    *v1 = *v1 | (int32_t)a1;
    return result;
}
int64_t float64_is_nan(int64_t a1) {
    // 0xc0
    return (bool)((uint64_t)(2 * a1) >= 0xffe0000000000001);
}
int64_t float64_is_signaling_nan(int64_t a1) {
    // 0xe0
    return (bool)((a1 & 0x7ff8000000000000) == 0x7ff0000000000000 == ((a1 & 0x7ffffffffffff) != 0));
}
int64_t extractFloat64Frac(int64_t a1) {
    // 0x110
    return a1 & 0xfffffffffffff;
}
int64_t extractFloat64Exp(uint64_t a1) {
    // 0x120
    return a1 / 0x10000000000000 & 2047;
}
int32_t extractFloat64Sign(uint64_t a) {
    // 0x130
    return a / 0x8000000000000000;
}
int64_t normalizeFloat64Subnormal(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 < 0x100000000 ? a1 : a1 / 0x100000000;
    int64_t v2 = (int32_t)v1 >= 0x10000 ? v1 : 0x10000 * v1; // 0x162
    int32_t v3 = 16 * (int32_t)((int32_t)v1 < 0x10000); // 0x16a
    uint64_t v4 = (int32_t)v2 >= 0x1000000 ? v2 : 256 * v2; // 0x17f
    int32_t v5 = (int32_t)v2 >= 0x1000000 ? v3 : v3 | 8; // 0x183
    int32_t v6 = *(int32_t *)((v4 / 0x400000 & 1020) + (int64_t)&g1); // 0x194
    int32_t v7 = v6 + (v5 | 32 * (int32_t)(a1 < 0x100000000)); // 0x194
    *(int64_t *)a3 = a1 << (int64_t)(v7 + 53 & 63);
    uint32_t result = 12 - v7; // 0x1a7
    *(int32_t *)a2 = result;
    return result;
}
int64_t packFloat64(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1b0
    return 0x8000000000000000 * a1 + a3 + 0x10000000000000 * a2;
}
int64_t roundAndPackFloat64(uint32_t zSign, int32_t zExp, uint64_t zSig) {
    int64_t result = zSign; // 0x1c0
    if (*(int32_t *)*(int64_t *)457 != 0) {
        // 0x1cf
        return result;
    }
    int64_t v1 = zExp;
    if ((v1 & 0xffff) >= 2045) {
        char * v2; // 0x231
        if (zExp > 2045) {
            // 0x22a
            v2 = (char *)*(int64_t *)561;
            *v2 = *v2 | 9;
            return 0x8000000000000000 * result | 0x7ff0000000000000;
        }
        if (zExp == 2045) {
            if (zSig < -512) {
                // 0x22a
                v2 = (char *)*(int64_t *)561;
                *v2 = *v2 | 9;
                return 0x8000000000000000 * result | 0x7ff0000000000000;
            }
        }
        if (zExp < 0) {
            int64_t v3 = -v1; // 0x2a7
            int64_t v4; // 0x1c0
            if ((int32_t)v3 < 64) {
                // 0x2ae
                v4 = zSig >> (v3 & 63) | (int64_t)(zSig << (v1 & 63) != 0);
            } else {
                // 0x2c6
                v4 = zSig != 0;
            }
            // 0x2ce
            if ((v4 & 1023) == 0) {
                // 0x1cf
                return result;
            }
            int32_t v5 = *(int32_t *)*(int64_t *)736; // 0x2e0
            // 0x261
            *(int32_t *)*(int64_t *)620 = v5 | 4 | 1;
            // 0x1cf
            return result;
        }
    }
    if ((zSig & 1023) == 0) {
        // 0x1cf
        return result;
    }
    // 0x261
    *(int32_t *)*(int64_t *)620 = *(int32_t *)*(int64_t *)606 | 1;
    // 0x1cf
    return result;
}
int64_t float64_div(uint64_t a, uint64_t b) {
    uint64_t v1 = a & 0xfffffffffffff; // 0x31a
    int64_t v2 = a / 0x10000000000000 & 2047; // 0x326
    uint64_t v3 = b & 0xfffffffffffff; // 0x32b
    int64_t v4 = b / 0x10000000000000 & 2047; // 0x335
    uint64_t v5 = b ^ a; // 0x33f
    int64_t v6; // 0x300
    int64_t v7; // 0x300
    if (v2 != 2047) {
        int32_t v8 = v4; // 0x37c
        if (v8 == 0) {
            if (v3 == 0) {
                int32_t * v9 = (int32_t *)*(int64_t *)1494; // 0x5d6
                int32_t v10 = *v9; // 0x5d6
                if ((v2 || v1) == 0) {
                    // 0x68d
                    *v9 = v10 | 16;
                    // 0x3ff
                    return 0x7fffffffffffffff;
                }
                // 0x5de
                *v9 = v10 | 2;
                // 0x3ff
                return v5 & -0x8000000000000000 | 0x7ff0000000000000;
            }
            int64_t v11 = v3 < 0x100000000 ? b : v3 / 0x100000000;
            int64_t v12 = (int32_t)v11 >= 0x10000 ? v11 : 0x10000 * v11; // 0x460
            int32_t v13 = 16 * (int32_t)((int32_t)v11 < 0x10000); // 0x468
            uint64_t v14 = (int32_t)v12 >= 0x1000000 ? v12 : 256 * v12; // 0x47d
            int32_t v15 = (int32_t)v12 >= 0x1000000 ? v13 : v13 | 8; // 0x481
            int32_t v16 = *(int32_t *)((v14 / 0x400000 & 1020) + (int64_t)&g1); // 0x492
            int32_t v17 = v16 + (v15 | 32 * (int32_t)(v3 < 0x100000000)); // 0x492
            v6 = 12 - v17;
            v7 = v3 << (int64_t)(v17 + 53 & 63);
            goto lab_0x4a5;
        } else {
            // 0x385
            v6 = v4;
            v7 = v3;
            if (v8 != 2047) {
                goto lab_0x4a5;
            } else {
                if (v3 == 0) {
                    // 0x3ff
                    return v5 & -0x8000000000000000;
                }
                goto lab_0x39b;
            }
        }
    } else {
        if (v1 == 0) {
            if (v4 != 2047) {
                // 0x3ff
                return v5 & -0x8000000000000000 | 0x7ff0000000000000;
            }
            if (v3 == 0) {
                char * v18 = (char *)*(int64_t *)871; // 0x367
                *v18 = *v18 | 16;
                // 0x3ff
                return 0x7fffffffffffffff;
            }
        }
        goto lab_0x39b;
    }
  lab_0x39b:
    if ((a & 0x7ff8000000000000) == 0x7ff0000000000000 != (a & 0x7ffffffffffff) != 0) {
        // 0x3ef
        if ((b & 0x7ff8000000000000) == 0x7ff0000000000000 != (b & 0x7ffffffffffff) != 0) {
            // 0x3ff
            return 0x7ffffffffffff;
        }
    }
    char * v19 = (char *)*(int64_t *)1019; // 0x3fb
    *v19 = *v19 | 16;
    // 0x3ff
    return 0x7ffffffffffff;
  lab_0x4a5:;
    int64_t v20 = v2; // 0x4a7
    int64_t v21 = v1; // 0x4a7
    if (v2 == 0) {
        if (v1 == 0) {
            // 0x3ff
            return v5 & -0x8000000000000000;
        }
        int64_t v22 = v1 < 0x100000000 ? a : v1 / 0x100000000;
        int64_t v23 = (int32_t)v22 >= 0x10000 ? v22 : 0x10000 * v22; // 0x4d1
        int32_t v24 = 16 * (int32_t)((int32_t)v22 < 0x10000); // 0x4d8
        uint64_t v25 = (int32_t)v23 >= 0x1000000 ? v23 : 256 * v23; // 0x4ea
        int32_t v26 = (int32_t)v23 >= 0x1000000 ? v24 : v24 | 8; // 0x4ed
        int32_t v27 = *(int32_t *)((v25 / 0x400000 & 1020) + (int64_t)&g1); // 0x4fe
        int32_t v28 = v27 + (v26 | 32 * (int32_t)(v1 < 0x100000000)); // 0x4fe
        v20 = 12 - v28;
        v21 = v1 << (int64_t)(v28 + 53 & 63);
    }
    uint64_t v29 = 1024 * v21 | 0x4000000000000000; // 0x526
    int64_t v30 = 2048 * v7; // 0x52c
    uint64_t v31 = v30 | -0x8000000000000000; // 0x53a
    uint64_t v32 = (int64_t)(v31 <= 2 * v29); // 0x546
    uint64_t v33 = v29 >> v32;
    int64_t result; // 0x721
    if (v31 <= v33) {
        // 0x717
        result = roundAndPackFloat64((int32_t)(v5 / 0x8000000000000000), (int32_t)(v20 - v6 + v32) + 1021, -1);
        return result;
    }
    uint64_t v34 = v31 / 0x100000000; // 0x572
    uint64_t v35 = v31 & -0x100000000; // 0x579
    int64_t v36 = -0x100000000; // 0x582
    if (v35 > v33) {
        // 0x588
        v36 = 0x100000000 * v33 / v34;
    }
    uint64_t v37 = v36 / 0x100000000; // 0x60f
    int64_t v38 = v30 & 0xfffff800; // 0x613
    uint64_t v39 = v37 * v38;
    uint64_t v40 = v36 * v31; // 0x636
    int64_t v41 = -v40; // 0x63d
    int64_t v42 = -1 * v34;
    int64_t v43 = v42 * v37 + v33 - v39 / 0x100000000 + (int64_t)(v40 != 0) + (int64_t)(v40 < 0x100000000 * v39); // 0x649
    int64_t v44 = v41; // 0x64d
    int64_t v45 = v36; // 0x64d
    int64_t v46 = v43; // 0x64d
    if (v43 < 0) {
        int64_t v47 = v36; // 0x653
        int64_t v48 = v43; // 0x653
        v47 -= 0x100000000;
        int64_t v49 = v41 + 0x80000000000 * v7; // 0x663
        v48 = v48 + v34 + (int64_t)(v49 < v41);
        v44 = v49;
        v45 = v47;
        v46 = v48;
        while (v48 < 0) {
            uint64_t v50 = v49;
            v47 -= 0x100000000;
            v49 = v50 + 0x80000000000 * v7;
            v48 = v48 + v34 + (int64_t)(v49 < v50);
            v44 = v49;
            v45 = v47;
            v46 = v48;
        }
    }
    uint64_t v51 = v44 / 0x100000000; // 0x66b
    uint64_t v52 = 0x100000000 * v46 | v51; // 0x66b
    int64_t v53 = 0xffffffff; // 0x678
    if (v35 > v52) {
        if ((v46 & 0xffffffff) == 0) {
            // 0x69a
            v53 = v51 / v34;
        } else {
            // 0x683
            v53 = v52 / v34;
        }
    }
    int64_t v54 = v53 | v45; // 0x6a1
    if ((v54 & 511) >= 3) {
        // 0x717
        result = roundAndPackFloat64((int32_t)(v5 / 0x8000000000000000), (int32_t)(v20 - v6 + v32) + 1021, v54);
        return result;
    }
    uint64_t v55 = v54 / 0x100000000; // 0x6b3
    uint64_t v56 = (v54 & 0xffffffff) * v34; // 0x6be
    uint64_t v57 = v56 + v55 * v38; // 0x6c9
    int64_t v58 = v57 < v56 ? -0x100000000 : 0; // 0x6cc
    uint64_t v59 = v54 * v31; // 0x6de
    int64_t v60 = -v59; // 0x6e5
    int64_t v61 = v42 * v55 + v33 + (int64_t)(v59 != 0) - v57 / 0x100000000 + v58 + (int64_t)(v59 < 0x100000000 * v57); // 0x6f8
    int64_t v62 = v60; // 0x6fc
    int64_t v63 = v54; // 0x6fc
    if (v61 < 0) {
        int64_t v64 = v54 - 1; // 0x700
        int64_t v65 = v60 + v31; // 0x703
        int64_t v66 = v61 + (int64_t)(v65 < v60); // 0x706
        int64_t v67 = v65; // 0x70a
        int64_t v68 = v64; // 0x70a
        int64_t v69 = v66; // 0x70a
        v62 = v65;
        v63 = v64;
        while (v66 < 0) {
            // 0x700
            v64 = v68 - 1;
            v65 = v67 + v31;
            v66 = v69 + (int64_t)(v65 < v67);
            v67 = v65;
            v68 = v64;
            v69 = v66;
            v62 = v65;
            v63 = v64;
        }
    }
    int64_t v70 = v63 | (int64_t)(v62 != 0); // 0x714
    // 0x717
    result = roundAndPackFloat64((int32_t)(v5 / 0x8000000000000000), (int32_t)(v20 - v6 + v32) + 1021, v70);
    return result;
}
float64_t ullong_to_double(int64_t x) {
    // 0x730
    int128_t v1; // 0x730
    return (int64_t)v1;
}
