
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "gsm.h"
int64_t gsm_add(int64_t a1, int64_t a2) {
    int16_t v1 = a1; // 0xc
    int16_t v2 = a2; // 0xc
    uint16_t v3 = v2 + v1; // 0xc
    uint32_t result = ((v3 ^ v1) & (v3 ^ v2)) >= 0 ? (int32_t)(a1 & 0xffff0000 | (int64_t)v3) : 0x10000 * (int32_t)(a2 + a1) >> 31 ^ -0x8000; // 0xf
    return result;
}
int64_t gsm_mult(int64_t a1, int64_t a2) {
    int64_t result = (int16_t)a1 == -0x8000 != ((int16_t)a2 == -0x8000) ? (0x100000000 * a2 >> 32) * (0x100000000 * a1 >> 32) / 0x8000 & 0x1ffff : 0x7fff; // 0x3b
    return result;
}
int64_t gsm_mult_r(int64_t a1, int64_t a2) {
    // 0x40
    if ((int32_t)a1 != -0x8000) {
        // 0x58
        return ((0x1000000000000 * a2 >> 48) * (0x1000000000000 * a1 >> 48) + 0x4000) / 0x8000 & 0x1ffff;
    }
    if ((a2 & 0xffff) != 0x8000) {
        // 0x58
        return ((0x1000000000000 * a2 >> 48) * (0x1000000000000 * a1 >> 48) + 0x4000) / 0x8000 & 0x1ffff;
    }
    // 0x57
    int64_t v1; // 0x40
    return v1 & -0x10000 | 0x7fff;
}
int64_t gsm_norm(int64_t a1) {
    int64_t v1 = a1; // 0x93
    if (a1 < 0) {
        if (a1 <= 0xffffffffc0000000) {
            // 0x9e
            return 0;
        }
        // 0xa1
        v1 = -1 - a1;
    }
    uint64_t v2 = v1;
    uint64_t v3 = v2 / 0x10000; // 0xa7
    int32_t v4; // 0x90
    int64_t v5; // 0x90
    if ((int16_t)v3 == 0) {
        // 0xbf
        v4 = 8 * (int32_t)((v2 & 0xff00) == 0) + 15;
        v5 = (v2 & 0xff00) != 0 ? v2 / 256 : v2;
    } else {
        uint64_t v6 = v2 / 0x1000000; // 0xb0
        v4 = (char)v6 == 0 ? (int32_t)&g2 : 0xffff;
        v5 = (char)v6 == 0 ? v3 : v6;
    }
    unsigned char v7 = *(char *)(*(int64_t *)240 + (v5 & 255)); // 0xf0
    return (0x10000 * v4 >> 16) + (int32_t)v7;
}
int64_t gsm_div(int64_t a1, int64_t a2) {
    // 0x100
    if ((int16_t)a1 == 0) {
        // 0x140
        return 0;
    }
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x105
    int64_t result = 0; // 0x113
    int32_t v2 = 15; // 0x113
    int64_t v3 = 2 * (0x1000000000000 * a1 >> 48); // 0x120
    int64_t v4 = v3 - v1; // 0x125
    result = 2 * result & 0xfffffffe | (int64_t)(v4 < 0 == ((v4 ^ v3) & (v3 ^ v1)) < 0);
    v2--;
    int64_t v5 = v3 - (v4 < 0 == ((v4 ^ v3) & (v3 ^ v1)) < 0 ? v1 : 0); // 0x13e
    while (v2 != 0) {
        // 0x120
        v3 = 2 * v5;
        v4 = v3 - v1;
        result = 2 * result & 0xfffffffe | (int64_t)(v4 < 0 == ((v4 ^ v3) & (v3 ^ v1)) < 0);
        v2--;
        v5 = v3 - (v4 < 0 == ((v4 ^ v3) & (v3 ^ v1)) < 0 ? v1 : 0);
    }
    // 0x140
    return result;
}
void Autocorrelation(int16_t * s, int64_t * L_ACF) {
    // 0x150
    int128_t v1; // 0x150
    int128_t v2 = v1;
    int64_t v3 = (int64_t)L_ACF;
    int64_t v4 = (int64_t)s;
    int64_t v5 = v4;
    int64_t v6 = 0;
    int64_t v7 = 0;
    uint16_t v8 = *(int16_t *)(2 * v7 + v4); // 0x170
    int64_t v9 = v8; // 0x175
    int64_t v10 = v8 >= 0 ? v9 : v8 == -0x8000 ? 0x7fff : -v9; // 0x18a
    int16_t v11 = v10; // 0x18e
    int16_t v12 = v11 - (int16_t)v6; // 0x18e
    int64_t v13 = v12 == 0 | v12 < 0 != ((v12 ^ v11) & (int16_t)(v10 ^ v6)) < 0 ? v6 : v10;
    int64_t v14 = v7 + 1; // 0x1a2
    while (v7 != 159) {
        // 0x170
        v6 = v13 & 0xffffffff;
        v7 = v14;
        v8 = *(int16_t *)(2 * v7 + v4);
        v9 = v8;
        v10 = v8 >= 0 ? v9 : v8 == -0x8000 ? 0x7fff : -v9;
        v11 = v10;
        v12 = v11 - (int16_t)v6;
        v13 = v12 == 0 | v12 < 0 != ((v12 ^ v11) & (int16_t)(v10 ^ v6)) < 0 ? v6 : v10;
        v14 = v7 + 1;
    }
    int16_t v15 = v4;
    int32_t v16 = 0; // 0x1a7
    int16_t v17 = v15; // 0x1a7
    if ((int16_t)v13 != 0) {
        uint64_t v18 = v13 & 0xffff; // 0x1a9
        int64_t v19 = (int32_t)v18 >= 256 ? v18 / 256 : v13 & 255; // 0x1bd
        int64_t v20 = (int32_t)v18 < 256 ? (int64_t)(int16_t)&g2 : 0xffff; // 0x1c4
        unsigned char v21 = *(char *)(*(int64_t *)462 + v19); // 0x1ce
        int32_t v22 = 0x4000000000000 - 0x1000000000000 * (v20 + (int64_t)v21) >> 48;
        uint32_t v23 = v22 - 1; // 0x1ea
        v16 = v22;
        v17 = v15;
        if (v23 < 4) {
            int32_t v24 = 0x4000 >> (v23 & 31);
            *s = (int16_t)((v24 * (int32_t)*s + 0x4000) / 0x8000);
            int64_t v25 = 0; // 0x214
            v25++;
            int16_t * v26 = (int16_t *)(2 * v25 + v4); // 0x200
            *v26 = (int16_t)((v24 * (int32_t)*v26 + 0x4000) / 0x8000);
            while (v25 != 159) {
                // 0x200
                v25++;
                v26 = (int16_t *)(2 * v25 + v5);
                *v26 = (int16_t)((v24 * (int32_t)*v26 + 0x4000) / 0x8000);
            }
            // 0x220
            v16 = v22;
            v17 = *(int16_t *)&v5;
        }
    }
    int128_t v27 = __asm_xorps(v2, v2); // 0x224
    __asm_movups(*(int128_t *)&v3, v27);
    __asm_movups(*(int128_t *)(v3 + 48), v27);
    __asm_movups(*(int128_t *)(v3 + 32), v27);
    __asm_movups(*(int128_t *)(v3 + 16), v27);
    *(int64_t *)(v3 + 64) = 0;
    int64_t v28 = v17; // 0x241
    int64_t v29 = v28 * v28; // 0x241
    *(int64_t *)v3 = v29;
    int64_t v30 = (int64_t)*(int16_t *)(v5 + 2); // 0x250
    int64_t v31 = v30 * v30 + v29; // 0x254
    *(int64_t *)v3 = v31;
    int64_t * v32 = (int64_t *)(v3 + 8); // 0x261
    int64_t v33 = *v32 + v30 * v28; // 0x261
    *v32 = v33;
    int64_t v34 = (int64_t)*(int16_t *)(v5 + 4); // 0x271
    int64_t v35 = v34 * v34 + v31; // 0x275
    *(int64_t *)v3 = v35;
    int64_t v36 = v34 * v30 + v33; // 0x282
    *(int64_t *)(v3 + 8) = v36;
    int64_t * v37 = (int64_t *)(v3 + 16); // 0x296
    int64_t v38 = *v37 + v34 * v28; // 0x296
    *v37 = v38;
    int64_t v39 = (int64_t)*(int16_t *)(v5 + 6); // 0x2a6
    int64_t v40 = v39 * v39 + v35; // 0x2aa
    *(int64_t *)v3 = v40;
    int64_t v41 = v39 * v34 + v36; // 0x2bf
    *(int64_t *)(v3 + 8) = v41;
    int64_t v42 = v39 * v30 + v38; // 0x2cd
    *(int64_t *)(v3 + 16) = v42;
    int64_t * v43 = (int64_t *)(v3 + 24); // 0x2de
    int64_t v44 = *v43 + v39 * v28; // 0x2de
    *v43 = v44;
    int64_t v45 = (int64_t)*(int16_t *)(v5 + 8); // 0x2ee
    int64_t v46 = v45 * v45 + v40; // 0x2f2
    *(int64_t *)v3 = v46;
    int64_t v47 = v45 * v39 + v41; // 0x2ff
    *(int64_t *)(v3 + 8) = v47;
    int64_t v48 = v45 * v34 + v42; // 0x30d
    *(int64_t *)(v3 + 16) = v48;
    int64_t v49 = v45 * v30 + v44; // 0x31b
    *(int64_t *)(v3 + 24) = v49;
    int64_t * v50 = (int64_t *)(v3 + 32); // 0x32e
    int64_t v51 = *v50 + v45 * v28; // 0x32e
    *v50 = v51;
    int64_t v52 = (int64_t)*(int16_t *)(v5 + 10); // 0x33e
    int64_t v53 = v52 * v52 + v46; // 0x342
    *(int64_t *)v3 = v53;
    int64_t v54 = v52 * v45 + v47; // 0x34f
    *(int64_t *)(v3 + 8) = v54;
    int64_t v55 = v52 * v39 + v48; // 0x35d
    *(int64_t *)(v3 + 16) = v55;
    int64_t v56 = v52 * v34 + v49; // 0x36d
    *(int64_t *)(v3 + 24) = v56;
    int64_t v57 = v52 * v30 + v51; // 0x37b
    *(int64_t *)(v3 + 32) = v57;
    int64_t * v58 = (int64_t *)(v3 + 40); // 0x389
    int64_t v59 = *v58 + v52 * v28; // 0x389
    *v58 = v59;
    int64_t v60 = (int64_t)*(int16_t *)(v5 + 12); // 0x399
    int64_t v61 = v60 * v60 + v53; // 0x39d
    *(int64_t *)v3 = v61;
    int64_t v62 = v60 * v52 + v54; // 0x3af
    *(int64_t *)(v3 + 8) = v62;
    int64_t v63 = v60 * v45 + v55; // 0x3bd
    *(int64_t *)(v3 + 16) = v63;
    int64_t v64 = v60 * v39 + v56; // 0x3cb
    *(int64_t *)(v3 + 24) = v64;
    int64_t v65 = v60 * v34 + v57; // 0x3de
    *(int64_t *)(v3 + 32) = v65;
    int64_t v66 = v60 * v30 + v59; // 0x3ec
    *(int64_t *)(v3 + 40) = v66;
    int64_t * v67 = (int64_t *)(v3 + 48); // 0x404
    int64_t v68 = *v67 + v60 * v28; // 0x404
    *v67 = v68;
    int64_t v69 = (int64_t)*(int16_t *)(v5 + 14); // 0x419
    int64_t v70 = v69 * v69 + v61; // 0x41d
    int64_t v71 = v69 * v60 + v62; // 0x426
    int64_t v72 = v69 * v52 + v63; // 0x430
    int64_t v73 = v69 * v45 + v64; // 0x437
    int64_t v74 = v69 * v39 + v65; // 0x441
    *(int64_t *)v3 = v70;
    *(int64_t *)(v3 + 8) = v71;
    *(int64_t *)(v3 + 16) = v72;
    *(int64_t *)(v3 + 24) = v73;
    *(int64_t *)(v3 + 32) = v74;
    int64_t v75 = v69 * v34 + v66; // 0x469
    *(int64_t *)(v3 + 40) = v75;
    int64_t v76 = v69 * v30 + v68; // 0x476
    *(int64_t *)(v3 + 48) = v76;
    int64_t * v77 = (int64_t *)(v3 + 56);
    int64_t v78 = *v77 + v69 * v28; // 0x483
    int64_t v79 = v5;
    v5 = v78;
    *v77 = v78;
    int64_t * v80 = (int64_t *)(v3 + 64); // 0x49c
    int64_t v81 = v5; // 0x4a5
    int64_t v82 = v73; // 0x4a5
    int64_t v83 = v75; // 0x4a5
    int64_t v84 = v76; // 0x4a5
    int64_t v85 = v71; // 0x4a5
    int64_t v86 = 8; // 0x4a5
    int64_t v87 = *v80; // 0x4a5
    int64_t v88 = v74; // 0x4a5
    int64_t v89 = v70; // 0x4a5
    int64_t v90 = v72; // 0x4a5
    int64_t v91 = v79 + 14;
    int64_t v92 = v91 + 2; // 0x4c4
    int64_t v93 = (int64_t)*(int16_t *)v92; // 0x4cf
    v89 += v93 * v93;
    v85 += (int64_t)*(int16_t *)v91 * v93;
    v90 += (int64_t)*(int16_t *)(v91 - 2) * v93;
    v82 += (int64_t)*(int16_t *)(v91 - 4) * v93;
    v88 += (int64_t)*(int16_t *)(v91 - 6) * v93;
    v83 += (int64_t)*(int16_t *)(v91 - 8) * v93;
    v84 += (int64_t)*(int16_t *)(v91 - 10) * v93;
    v81 += (int64_t)*(int16_t *)(v91 - 12) * v93;
    v5 = v81;
    v87 += (int64_t)*(int16_t *)(v91 - 14) * v93;
    while ((int32_t)v86 != 160) {
        // 0x4b0
        v86 &= 0xffffffff;
        v91 = v92;
        v92 = v91 + 2;
        v93 = (int64_t)*(int16_t *)v92;
        v89 += v93 * v93;
        v85 += (int64_t)*(int16_t *)v91 * v93;
        v90 += (int64_t)*(int16_t *)(v91 - 2) * v93;
        v82 += (int64_t)*(int16_t *)(v91 - 4) * v93;
        v88 += (int64_t)*(int16_t *)(v91 - 6) * v93;
        v83 += (int64_t)*(int16_t *)(v91 - 8) * v93;
        v84 += (int64_t)*(int16_t *)(v91 - 10) * v93;
        v81 += (int64_t)*(int16_t *)(v91 - 12) * v93;
        v5 = v81;
        v87 += (int64_t)*(int16_t *)(v91 - 14) * v93;
    }
    // 0x560
    *(int64_t *)v3 = v89;
    *(int64_t *)(v3 + 8) = v85;
    *(int64_t *)(v3 + 16) = v90;
    *(int64_t *)(v3 + 24) = v82;
    *(int64_t *)(v3 + 32) = v88;
    *(int64_t *)(v3 + 40) = v83;
    *(int64_t *)(v3 + 48) = v84;
    *(int64_t *)(v3 + 56) = v5;
    *v80 = v87;
    for (int64_t i = 8; i > -1; i--) {
        int64_t * v94 = (int64_t *)(8 * i + v3); // 0x5a0
        *v94 = 2 * *v94;
    }
    // 0x5aa
    v3 = v79;
    if (v16 < 1) {
        // 0x5d1
        return;
    }
    uint32_t v95 = v16 & 31; // 0x5c3
    int64_t v96 = 159;
    int16_t * v97 = (int16_t *)v79; // 0x5c0
    uint16_t v98 = *v97; // 0x5c0
    *v97 = v95 == 0 ? v98 : (int16_t)((int32_t)v98 << v95);
    int64_t v99 = v3 + 2; // 0x5c8
    v3 = v99;
    while (v96 != 0) {
        // 0x5c0
        v96 = v96 + 0xffffffff & 0xffffffff;
        v97 = (int16_t *)v99;
        v98 = *v97;
        *v97 = v95 == 0 ? v98 : (int16_t)((int32_t)v98 << v95);
        v99 = v3 + 2;
        v3 = v99;
    }
}
void Reflection_coefficients(int64_t * L_ACF, int16_t * r) {
    // 0x5e0
    int128_t v1; // 0x5e0
    int128_t v2 = v1;
    if (L_ACF != NULL) {
        // 0x5f2
        return;
    }
    // 0x600
    int64_t v3; // 0x5e0
    __asm_movups(*(int128_t *)&v3, __asm_xorps(v2, v2));
}
int64_t Transformation_to_Log_Area_Ratios(void) {
    // 0x900
    int64_t v1; // 0x900
    int16_t * v2 = (int16_t *)v1; // 0x92d
    int16_t v3 = *v2; // 0x92d
    int64_t v4 = v3; // 0x92d
    int64_t v5 = v3 >= 0 ? v4 : v3 == -0x8000 ? 0x7fff : -v4; // 0x940
    uint64_t v6 = 0x1000000000000 * v5 >> 48; // 0x943
    int32_t v7 = v6; // 0x94e
    int64_t v8; // 0x900
    if (v7 < 0x5666) {
        // 0x910
        v8 = v6 / 2 & 0x7fffffff;
    } else {
        if (v7 > 0x7999) {
            // 0x970
            v8 = 4 * v5 + 0x6800 & 0xfffffffc;
        } else {
            // 0x959
            v8 = v5 + 0xffffd4cd & 0xffffffff;
        }
    }
    int16_t v9 = v8; // 0x913
    *v2 = v3 >= 0 ? v9 : -v9;
    int64_t v10 = 2; // 0x922
    int64_t v11 = v10 & 0xffffffff; // 0x92b
    v1 += 2;
    while ((int32_t)v10 != 9) {
        // 0x92d
        v2 = (int16_t *)v1;
        v3 = *v2;
        v4 = v3;
        v5 = v3 >= 0 ? v4 : v3 == -0x8000 ? 0x7fff : -v4;
        v6 = 0x1000000000000 * v5 >> 48;
        v7 = v6;
        if (v7 < 0x5666) {
            // 0x910
            v8 = v6 / 2 & 0x7fffffff;
        } else {
            if (v7 > 0x7999) {
                // 0x970
                v8 = 4 * v5 + 0x6800 & 0xfffffffc;
            } else {
                // 0x959
                v8 = v5 + 0xffffd4cd & 0xffffffff;
            }
        }
        // 0x913
        v9 = v8;
        *v2 = v3 >= 0 ? v9 : -v9;
        v10 = v11 + 1;
        v11 = v10 & 0xffffffff;
        v1 += 2;
    }
    // 0x97a
    return 9;
}
void Quantization_and_coding(int16_t * LAR) {
    int64_t v1 = (int64_t)LAR;
    int16_t * v2 = (int16_t *)(v1 + 14); // 0x982
    uint64_t v3 = 0x234c * (int64_t)*v2 / 0x8000; // 0x98c
    int16_t v4 = v3; // 0x9a1
    uint16_t v5 = v4 - 1144; // 0x9a1
    int16_t * v6 = (int16_t *)(v1 + 12); // 0x9a5
    int32_t v7 = ((v5 ^ v4) & v4 + 0x7b88) < 0 ? 0x10000 * (int32_t)v3 - 0x4780000 >> 31 ^ 0x8000 : (int32_t)v5; // 0x9a9
    uint64_t v8 = 0x2156 * (int64_t)*v6 / 0x8000; // 0x9b2
    int16_t v9 = v8; // 0x9c7
    uint16_t v10 = v9 - 341; // 0x9c7
    int16_t * v11 = (int16_t *)(v1 + 10); // 0x9cc
    uint32_t v12 = ((v10 ^ v9) & v9 + 0x7eab) < 0 ? 0x10000 * (int32_t)v8 - 0x1550000 >> 31 ^ -0x8000 : (int32_t)v10; // 0x9d0
    uint64_t v13 = 0x3c00 * (int64_t)*v11 / 0x8000; // 0x9d9
    int16_t v14 = v13; // 0x9ee
    uint16_t v15 = v14 - 1792; // 0x9ee
    int16_t * v16 = (int16_t *)(v1 + 8); // 0x9f3
    uint32_t v17 = ((v15 ^ v14) & v14 + 0x7900) < 0 ? 0x10000 * (int32_t)v13 - 0x7000000 >> 31 ^ -0x8000 : (int32_t)v15; // 0x9f8
    uint64_t v18 = 0x368c * (int64_t)*v16 / 0x8000; // 0xa02
    int16_t v19 = v18; // 0xa1b
    uint16_t v20 = v19 + 350; // 0xa1b
    int16_t * v21 = (int16_t *)(v1 + 6); // 0xa20
    uint32_t v22 = (v20 & (v19 ^ -0x8000)) < 0 ? 0x10000 * (int32_t)v18 + 0x15e0000 >> 31 ^ 0x8000 : (int32_t)v20; // 0xa25
    uint64_t v23 = 0x5000 * (int64_t)*v21 / 0x8000; // 0xa31
    int16_t v24 = v23; // 0xa4b
    uint16_t v25 = v24 - 2560; // 0xa4b
    int16_t * v26 = (int16_t *)(v1 + 4); // 0xa51
    uint32_t v27 = ((v25 ^ v24) & v24 + 0x7600) < 0 ? 0x10000 * (int32_t)v23 - 0xa000000 >> 31 ^ -0x8000 : (int32_t)v25; // 0xa56
    uint64_t v28 = 0x5000 * (int64_t)*v26 / 0x8000; // 0xa62
    int16_t v29 = v28; // 0xa7c
    uint16_t v30 = v29 + 2304; // 0xa7c
    int16_t * v31 = (int16_t *)(v1 + 2); // 0xa82
    uint32_t v32 = (v30 & (v29 ^ -0x8000)) < 0 ? 0x10000 * (int32_t)v28 + 0x9000000 >> 31 ^ 0x8000 : (int32_t)v30; // 0xa87
    uint64_t v33 = 0x5000 * (int64_t)*v31 / 0x8000; // 0xa93
    int16_t v34 = v33; // 0xaad
    uint16_t v35 = v34 + 256; // 0xaad
    uint32_t v36 = (v35 & (v34 ^ -0x8000)) < 0 ? 0x10000 * (int32_t)v33 + 0x1000000 >> 31 ^ 0x8000 : (int32_t)v35; // 0xab3
    int64_t v37; // 0x980
    uint64_t v38 = 0x5000 * (int64_t)*(int16_t *)&v37 / 0x8000; // 0xac3
    int16_t v39 = v38; // 0xada
    uint16_t v40 = v39 + 256; // 0xada
    uint32_t v41 = (v40 & (v39 ^ -0x8000)) < 0 ? 0x10000 * (int32_t)v38 + 0x1000000 >> 31 ^ 0x8000 : (int32_t)v40; // 0xae0
    uint64_t v42 = 0x1000000000000 * (int64_t)v41 >> 48; // 0xae4
    int32_t v43 = v42; // 0xaf3
    int32_t v44 = v43 + 0x4000; // 0xaf3
    int16_t v45 = v44 < 0 == ((v44 ^ v43) & (v43 ^ -0x80000000)) < 0 ? (int16_t)(v42 / 512) + 32 : 0; // 0xaf9
    *LAR = v43 < 0x4000 == (0x3fff - v43 & v43) < 0 ? 63 : v45;
    uint64_t v46 = 0x1000000000000 * (int64_t)v36 >> 48; // 0xb0e
    int32_t v47 = v46; // 0xb1b
    int32_t v48 = v47 + 0x4000; // 0xb1b
    int16_t v49 = v48 < 0 == ((v48 ^ v47) & (v47 ^ -0x80000000)) < 0 ? (int16_t)(v46 / 512) + 32 : 0; // 0xb22
    *v31 = v47 < 0x4000 == (0x3fff - v47 & v47) < 0 ? 63 : v49;
    uint64_t v50 = 0x1000000000000 * (int64_t)v32 >> 48; // 0xb34
    int32_t v51 = v50; // 0xb43
    int32_t v52 = v51 + 0x2000; // 0xb43
    int16_t v53 = v52 < 0 == ((v52 ^ v51) & (v51 ^ -0x80000000)) < 0 ? (int16_t)(v50 / 512) + 16 : 0; // 0xb4a
    *v26 = v51 < 0x2000 == (0x1fff - v51 & v51) < 0 ? 31 : v53;
    int32_t v54 = 0x1000000000000 * (int64_t)v27 >> 48; // 0xb7b
    int32_t v55 = v54 + 0x2100; // 0xb7b
    int16_t v56 = v55 < 0 == ((v55 ^ v54) & (v54 ^ -0x80000000)) < 0 ? (int16_t)((0x10000 * v27 + 0x1000000) / 0x2000000) + 16 : 0; // 0xb82
    *v21 = v54 < 0x1f00 == (0x1eff - v54 & v54) < 0 ? 31 : v56;
    uint64_t v57 = 0x1000000000000 * (int64_t)v22 >> 48; // 0xb96
    int32_t v58 = v57; // 0xba4
    int32_t v59 = v58 + 0x1000; // 0xba4
    int32_t v60 = v58 - (int32_t)&g1; // 0xbae
    int16_t v61 = v59 < 0 == ((v59 ^ v58) & (v58 ^ -0x80000000)) < 0 ? (int16_t)(v57 / 512) + 8 : 0; // 0xbaa
    int16_t v62 = v60 < 0 == ((v60 ^ v58) & (v58 ^ (int32_t)&g1)) < 0 ? 15 : v61; // 0xbbd
    *v16 = v62;
    int32_t v63 = 0x1000000000000 * (int64_t)v17 >> 48; // 0xbd8
    int32_t v64 = v63 + 0x1100; // 0xbd8
    int32_t v65 = v63 - (int32_t)&g3; // 0xbe2
    int16_t v66 = v64 < 0 == ((v64 ^ v63) & (v63 ^ -0x80000000)) < 0 ? (int16_t)((0x10000 * v17 + 0x1000000) / 0x2000000) + 8 : 0; // 0xbde
    int16_t v67 = v65 < 0 == ((v65 ^ v63) & (v63 ^ (int32_t)&g3)) < 0 ? 15 : v66; // 0xbec
    *v11 = v67;
    int32_t v68 = 0x1000000000000 * (int64_t)v12 >> 48; // 0xc03
    int32_t v69 = v68 + 2304; // 0xc03
    int16_t v70 = v69 < 0 == ((v69 ^ v68) & (v68 ^ -0x80000000)) < 0 ? (int16_t)((0x10000 * v12 + 0x1000000) / 0x2000000) + 4 : 0; // 0xc09
    *v6 = v68 < 1792 == (1791 - v68 & v68) < 0 ? (int16_t)&g2 : v70;
    int32_t v71 = 0x10000 * v7;
    int32_t v72 = v71 >> 16; // 0xc28
    int32_t v73 = v72 + 2304; // 0xc2f
    int16_t v74 = v73 < 0 == ((v73 ^ v72) & (v72 ^ -0x80000000)) < 0 ? (int16_t)(v71 + 0x1000000 >> 25) + 4 : 0; // 0xc34
    int16_t v75 = v71 < 0x7000000 == (1791 - v72 & v72) < 0 ? (int16_t)&g2 : v74; // 0xc40
    *v2 = v75;
}
int64_t Gsm_LPC_Analysis(int64_t a1, int64_t a2) {
    // 0xc50
    int64_t v1; // bp-88, 0xc50
    Autocorrelation((int16_t *)a1, &v1);
    int16_t * v2 = (int16_t *)a2; // 0xc6b
    Reflection_coefficients(&v1, v2);
    int64_t v3 = a2; // 0xc7d
    int16_t * v4 = (int16_t *)v3; // 0xc9d
    int16_t v5 = *v4; // 0xc9d
    int64_t v6 = v5; // 0xc9d
    int64_t v7 = v5 >= 0 ? v6 : v5 == -0x8000 ? 0x7fff : -v6; // 0xcb0
    uint64_t v8 = 0x1000000000000 * v7 >> 48; // 0xcb3
    int32_t v9 = v8; // 0xcbe
    int64_t v10; // 0xc50
    if (v9 < 0x5666) {
        // 0xc80
        v10 = v8 / 2 & 0x7fffffff;
    } else {
        if (v9 > 0x7999) {
            // 0xce0
            v10 = 4 * v7 + 0x6800 & 0xfffffffc;
        } else {
            // 0xcc9
            v10 = v7 + 0xffffd4cd & 0xffffffff;
        }
    }
    int16_t v11 = v10; // 0xc83
    *v4 = v5 >= 0 ? v11 : -v11;
    int64_t v12 = 2; // 0xc92
    int64_t v13 = v12 & 0xffffffff; // 0xc9b
    v3 += 2;
    while ((int32_t)v12 != 9) {
        // 0xc9d
        v4 = (int16_t *)v3;
        v5 = *v4;
        v6 = v5;
        v7 = v5 >= 0 ? v6 : v5 == -0x8000 ? 0x7fff : -v6;
        v8 = 0x1000000000000 * v7 >> 48;
        v9 = v8;
        if (v9 < 0x5666) {
            // 0xc80
            v10 = v8 / 2 & 0x7fffffff;
        } else {
            if (v9 > 0x7999) {
                // 0xce0
                v10 = 4 * v7 + 0x6800 & 0xfffffffc;
            } else {
                // 0xcc9
                v10 = v7 + 0xffffd4cd & 0xffffffff;
            }
        }
        // 0xc83
        v11 = v10;
        *v4 = v5 >= 0 ? v11 : -v11;
        v12 = v13 + 1;
        v13 = v12 & 0xffffffff;
        v3 += 2;
    }
    // 0xcea
    Quantization_and_coding(v2);
    return &g4;
}
