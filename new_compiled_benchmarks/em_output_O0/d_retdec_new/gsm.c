
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "gsm.h"
int64_t gsm_add(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (0x1000000000000 * a2 >> 48) + (0x1000000000000 * a1 >> 48); // 0x1c
    if (v1 <= 0xffffffffffff7fff) {
        // 0x6d
        return 0xffff8000;
    }
    int64_t result = 0x7fff; // 0x49
    if (v1 < 0x8000) {
        // 0x5d
        result = 0x10000 * (int32_t)v1 >> 16;
    }
    // 0x6d
    return result;
}
int16_t gsm_mult(int16_t a, int16_t b) {
    int128_t v1 = b; // 0x8e
    if (a == -0x8000) {
        // 0xa1
        if ((v1 & 0xffff) == 0x8000) {
            // 0xd1
            return 0x7fff;
        }
    }
    // 0xd1
    return (int64_t)(v1 * (int128_t)a) / 0x8000;
}
int16_t gsm_mult_r(int16_t a, int16_t b) {
    uint32_t v1 = (int32_t)a; // 0xea
    if (b == -0x8000) {
        // 0x101
        if ((v1 & 0xffff) == 0x8000) {
            // 0x14d
            return 0x7fff;
        }
    }
    int16_t result = ((0x1000000000000 * (int64_t)v1 >> 48) * (int64_t)b + 0x4000) / 0x8000; // 0x149
    // 0x14d
    return result;
}
int16_t gsm_norm(int64_t a) {
    int64_t v1 = a; // 0x1cd
    if (a < 0) {
        // 0x1d3
        if (a <= 0xffffffffc0000000) {
            // 0x2dc
            return 0;
        }
        // 0x1ec
        v1 = -1 - a;
    }
    // 0x1f8
    int16_t result; // 0x1c0
    if ((v1 & 0xffff0000) == 0) {
        if ((v1 & 0xff00) == 0) {
            unsigned char v2 = *(char *)(*(int64_t *)709 + (v1 & 255)); // 0x2c5
            result = (int16_t)v2 + 23;
        } else {
            unsigned char v3 = *(char *)(*(int64_t *)676 + (v1 / 256 & 255)); // 0x2a4
            result = (int16_t)v3 + 15;
        }
    } else {
        if ((v1 & 0xff000000) == 0) {
            unsigned char v4 = *(char *)(*(int64_t *)613 + (v1 / 0x10000 & 255)); // 0x265
            result = (int16_t)v4 + 7;
        } else {
            unsigned char v5 = *(char *)(*(int64_t *)574 + (v1 / 0x1000000 & 255)); // 0x23e
            result = (int16_t)v5 - 1;
        }
    }
    // 0x2dc
    return result;
}
int16_t gsm_div(int16_t num, int16_t denum) {
    // 0x2f0
    if (num == 0) {
        // 0x39f
        return 0;
    }
    int64_t v1 = denum; // 0x30b
    int32_t v2 = 15; // 0x343
    int16_t result = 0;
    v2--;
    int64_t v3 = 2 * (int64_t)num; // 0x361
    result = 2 * result | (int16_t)(v3 >= v1);
    int64_t v4 = v3 - (v3 < v1 ? 0 : v1); // 0x34c
    while (v2 != 0) {
        // 0x352
        v2--;
        v3 = 2 * v4;
        result = 2 * result | (int16_t)(v3 >= v1);
        v4 = v3 - (v3 < v1 ? 0 : v1);
    }
    // 0x39f
    return result;
}
void Autocorrelation(int16_t * s, int64_t * L_ACF) {
    int64_t v1 = (int64_t)s;
    int16_t v2 = 0;
    for (int64_t i = 0; i < 160; i++) {
        int16_t v3 = v2;
        int16_t v4 = gsm__abs(*(int16_t *)(2 * i + v1)); // 0x3e6
        v2 = v4 > v3 ? v4 : v3;
    }
    // 0x41a
    int64_t v5; // 0x3b0
    int16_t v6 = v5;
    int64_t v7 = (int64_t)L_ACF;
    int16_t v8 = v6; // 0x421
    int64_t v9 = v1; // 0x421
    bool v10 = true; // 0x421
    int16_t v11 = 0; // 0x421
    int64_t v12 = v7; // 0x421
    int64_t v13; // 0x3b0
    if (v2 != 0) {
        int16_t v14 = 4 - gsm_norm(0x10000 * (int64_t)v2); // 0x448
        v8 = v6;
        v9 = v1;
        v10 = v14 < 1;
        v11 = v14;
        v12 = v7;
        if (v14 <= 4) {
            uint16_t v15 = v14 + 31 & 31;
            int64_t v16 = v15 == 0 ? 0x4000 : 0x1000000000000 * (int64_t)(0x4000 >> (int32_t)v15) >> 48; // 0x4a9
            int16_t v17 = v16; // 0x4ac
            *s = gsm_mult_r(*s, v17);
            for (int64_t i = 1; i < 160; i++) {
                int16_t * v18 = (int16_t *)(2 * i + (int64_t)s);
                *v18 = gsm_mult_r(*v18, v17);
            }
            // 0x4d3
            v8 = *(int16_t *)&v13;
            v9 = (int64_t)s;
            v10 = v14 < 1;
            v11 = v14;
            v12 = v16;
        }
    }
    // 0x4d3
    int16_t * sp; // bp-48, 0x3b0
    *(int64_t *)&sp = v9;
    int64_t v19 = 0x100000000 * v7 >> 32;
    for (int64_t i = 8; i > -1; i--) {
        // 0x4f7
        *(int64_t *)(8 * i + v19) = 0;
    }
    int64_t * v20 = (int64_t *)v19; // 0x52d
    *v20 = (int64_t)*(int16_t *)&v13 * (int64_t)v8 + v12;
    int16_t * v21 = sp; // 0x530
    int64_t v22 = (int64_t)v21; // 0x530
    int16_t * v23 = (int16_t *)(v22 + 2); // 0x53b
    int64_t v24 = (int64_t)*v23; // 0x554
    *v20 = v24 * v24 + v12;
    int64_t * v25 = (int64_t *)(v19 + 8); // 0x578
    *v25 = (int64_t)*v21 * v24 + *v25;
    int16_t * v26 = (int16_t *)(v22 + 4); // 0x58b
    int64_t v27 = (int64_t)*v26; // 0x5a4
    *v20 = v27 * v27 + v12;
    *v25 = (int64_t)*v23 * v27 + *v25;
    int64_t * v28 = (int64_t *)(v19 + 16); // 0x5e6
    *v28 = (int64_t)*v21 * v27 + *v28;
    int16_t * v29 = (int16_t *)(v22 + 6); // 0x5f9
    int64_t v30 = (int64_t)*v29; // 0x612
    *v20 = v30 * v30 + v12;
    *v25 = (int64_t)*v26 * v30 + *v25;
    *v28 = (int64_t)*v23 * v30 + *v28;
    int64_t * v31 = (int64_t *)(v19 + 24); // 0x672
    *v31 = (int64_t)*v21 * v30 + *v31;
    int16_t * v32 = (int16_t *)(v22 + 8); // 0x685
    int64_t v33 = (int64_t)*v32; // 0x69e
    *v20 = v33 * v33 + v12;
    *v25 = (int64_t)*v29 * v33 + *v25;
    *v28 = (int64_t)*v26 * v33 + *v28;
    *v31 = (int64_t)*v23 * v33 + *v31;
    int64_t * v34 = (int64_t *)(v19 + 32); // 0x71c
    *v34 = (int64_t)*v21 * v33 + *v34;
    int16_t * v35 = (int16_t *)(v22 + 10); // 0x72f
    int64_t v36 = (int64_t)*v35; // 0x748
    *v20 = v36 * v36 + v12;
    *v25 = (int64_t)*v32 * v36 + *v25;
    *v28 = (int64_t)*v29 * v36 + *v28;
    *v31 = (int64_t)*v26 * v36 + *v31;
    *v34 = (int64_t)*v23 * v36 + *v34;
    int64_t * v37 = (int64_t *)(v19 + 40); // 0x7e4
    *v37 = (int64_t)*v21 * v36 + *v37;
    int16_t * v38 = (int16_t *)(v22 + 12); // 0x7f7
    int64_t v39 = (int64_t)*v38; // 0x810
    *v20 = v39 * v39 + v12;
    *v25 = (int64_t)*v35 * v39 + *v25;
    *v28 = (int64_t)*v32 * v39 + *v28;
    *v31 = (int64_t)*v29 * v39 + *v31;
    *v34 = (int64_t)*v26 * v39 + *v34;
    *v37 = (int64_t)*v23 * v39 + *v37;
    int64_t * v40 = (int64_t *)(v19 + 48); // 0x8ca
    *v40 = (int64_t)*v21 * v39 + *v40;
    int16_t * v41 = (int16_t *)(v22 + 14); // 0x8dd
    sp = v41;
    int64_t v42 = (int64_t)*v41; // 0x8f6
    *v20 = v42 * v42 + v12;
    *v25 = (int64_t)*v38 * v42 + *v25;
    *v28 = (int64_t)*v35 * v42 + *v28;
    *v31 = (int64_t)*v32 * v42 + *v31;
    *v34 = (int64_t)*v29 * v42 + *v34;
    *v37 = (int64_t)*v26 * v42 + *v37;
    *v40 = (int64_t)*v23 * v42 + *v40;
    int64_t * v43 = (int64_t *)(v19 + 56); // 0x9ce
    *v43 = (int64_t)*v21 * v42 + *v43;
    int64_t * v44 = (int64_t *)(v19 + 64); // 0xb04
    int32_t v45 = 8; // 0xb0f
    int16_t * v46 = sp; // 0x9ea
    int64_t v47 = (int64_t)v46; // 0x9ea
    int16_t * v48 = (int16_t *)(v47 + 2); // 0x9f5
    sp = v48;
    int64_t v49 = (int64_t)*v48; // 0xa0e
    *v20 = v49 * v49 + v12;
    *v25 = (int64_t)*v46 * v49 + *v25;
    *v28 = (int64_t)*(int16_t *)(v47 - 2) * v49 + *v28;
    *v31 = (int64_t)*(int16_t *)(v47 - 4) * v49 + *v31;
    *v34 = (int64_t)*(int16_t *)(v47 - 6) * v49 + *v34;
    *v37 = (int64_t)*(int16_t *)(v47 - 8) * v49 + *v37;
    *v40 = (int64_t)*(int16_t *)(v47 - 10) * v49 + *v40;
    *v43 = (int64_t)*(int16_t *)(v47 - 12) * v49 + *v43;
    *v44 = (int64_t)*(int16_t *)(v47 - 14) * v49 + *v44;
    v45++;
    while (v45 != 160) {
        // 0x9ea
        v46 = sp;
        v47 = (int64_t)v46;
        v48 = (int16_t *)(v47 + 2);
        sp = v48;
        v49 = (int64_t)*v48;
        *v20 = v49 * v49 + v12;
        *v25 = (int64_t)*v46 * v49 + *v25;
        *v28 = (int64_t)*(int16_t *)(v47 - 2) * v49 + *v28;
        *v31 = (int64_t)*(int16_t *)(v47 - 4) * v49 + *v31;
        *v34 = (int64_t)*(int16_t *)(v47 - 6) * v49 + *v34;
        *v37 = (int64_t)*(int16_t *)(v47 - 8) * v49 + *v37;
        *v40 = (int64_t)*(int16_t *)(v47 - 10) * v49 + *v40;
        *v43 = (int64_t)*(int16_t *)(v47 - 12) * v49 + *v43;
        *v44 = (int64_t)*(int16_t *)(v47 - 14) * v49 + *v44;
        v45++;
    }
    int64_t v50 = 8;
    int64_t * v51 = (int64_t *)(8 * v50 + v19); // 0xb33
    *v51 = 2 * *v51;
    int64_t v52 = v50 - 1; // 0xb25
    while (v50 != 0) {
        // 0xb2b
        v50 = v52;
        v51 = (int64_t *)(8 * v50 + v19);
        *v51 = 2 * *v51;
        v52 = v50 - 1;
    }
    if (v10) {
        // 0xb9b
        return;
    }
    uint16_t v53 = v11 & 31;
    int16_t * v54 = s;
    for (int32_t i = 159; i > -1; i--) {
        int16_t * v55 = v54;
        v54 = (int16_t *)((int64_t)v55 + 2);
        int16_t v56 = *v55; // 0xb7e
        *v55 = v53 == 0 ? v56 : (int16_t)((int32_t)v56 << (int32_t)v53);
    }
}
void Reflection_coefficients(int64_t * L_ACF, int16_t * r) {
    int16_t P[1]; // bp-88, 0xbb0
    int16_t v1[1]; // 0xd9b
    // 0xbb0
    int32_t v2; // 0xbb0
    uint32_t v3 = v2;
    int32_t v4 = (int64_t)r; // 0xbbc
    int32_t v5 = 8; // 0xbc8
    int32_t v6 = v4; // 0xbc8
    if (L_ACF == NULL) {
        *(int16_t *)(int64_t)v6 = 0;
        v5--;
        v6 += 2;
        while (v5 != 0) {
            // 0xbdf
            *(int16_t *)(int64_t)v6 = 0;
            v5--;
            v6 += 2;
        }
        // 0xe68
        return;
    }
    int64_t v7 = (int64_t)L_ACF;
    int64_t v8; // bp-8, 0xbb0
    int64_t v9 = &v8; // 0xbb1
    uint64_t v10 = (int64_t)(gsm_norm(v7) & 63);
    int64_t v11 = v9 - 48;
    for (int64_t i = 0; i < 9; i++) {
        int64_t v12 = *(int64_t *)(8 * i + v7); // 0xc2f
        *(int16_t *)(2 * i + v11) = (int16_t)((v12 << v10) / 0x10000);
    }
    int64_t v13 = v9 - 112;
    for (int64_t i = 1; i < 8; i++) {
        int64_t v14 = 2 * i; // 0xc6f
        *(int16_t *)(v14 + v13) = *(int16_t *)(v14 + v11);
    }
    int64_t v15 = v9 - 80;
    for (int64_t i = 0; i < 9; i++) {
        int64_t v16 = 2 * i; // 0xca0
        *(int16_t *)(v16 + v15) = *(int16_t *)(v16 + v11);
    }
    int16_t v17 = v3; // 0xccd
    int64_t v18 = 8; // 0xbb0
    int32_t v19 = v4;
    uint32_t v20 = 1;
    int16_t v21 = gsm__abs(v17); // 0xcd9
    int16_t v22 = P[0]; // 0xce2
    while (v22 >= v21) {
        int16_t v23 = gsm_div(v21, v22); // 0xd34
        int16_t * v24 = (int16_t *)(int64_t)v19; // 0xd40
        int16_t v25 = (int32_t)(0x1000000000000 * (int64_t)v3 >> 48) < 1 ? v23 : -v23;
        *v24 = v25;
        if (v20 == 8) {
            // 0xe68
            return;
        }
        // 0xd74
        gsm_mult_r(v17, v25);
        v1[0] = P[0];
        P = v1;
        int64_t v26 = 1;
        int64_t v27 = 2 * v26; // 0xdbd
        gsm_mult_r(*(int16_t *)(v27 + v13), *v24);
        v26++;
        int16_t * v28 = (int16_t *)(2 * v26 + v15); // 0xddd
        *(int16_t *)(v27 + v15) = *v28;
        gsm_mult_r(*v28, *v24);
        while (v26 != v18) {
            // 0xdb9
            v27 = 2 * v26;
            gsm_mult_r(*(int16_t *)(v27 + v13), *v24);
            v26++;
            v28 = (int16_t *)(2 * v26 + v15);
            *(int16_t *)(v27 + v15) = *v28;
            gsm_mult_r(*v28, *v24);
        }
        // 0xe4e
        v18--;
        if (v20 > 7) {
            // 0xe68
            return;
        }
        v19 += 2;
        v20++;
        v21 = gsm__abs(v17);
        v22 = P[0];
    }
    int32_t v29 = v20; // 0xcfc
    if (v20 > 8) {
        // 0xe68
        return;
    }
    int32_t v30 = v19; // 0xcfc
    *(int16_t *)(int64_t)v30 = 0;
    v29++;
    v30 += 2;
    while (v29 != 9) {
        // 0xd02
        *(int16_t *)(int64_t)v30 = 0;
        v29++;
        v30 += 2;
    }
}
void Transformation_to_Log_Area_Ratios(int16_t * r) {
    int32_t v1 = 1; // 0xf39
    int32_t v2 = (int64_t)r; // 0xe70
    int16_t * v3 = (int16_t *)(int64_t)v2; // 0xe91
    int16_t v4 = gsm__abs(*v3); // 0xe9c
    int16_t v5; // 0xe70
    if (v4 > 0x5665) {
        // 0xec4
        v5 = v4 > 0x7999 ? 4 * v4 + 0x6800 : v4 - 0x2b33;
    } else {
        // 0xeb4
        v5 = v4 >> 1;
    }
    int16_t v6 = v5;
    *v3 = *v3 >= 0 ? v6 : -v6;
    v1++;
    v2 += 2;
    while (v1 != 9) {
        // 0xe8d
        v3 = (int16_t *)(int64_t)v2;
        v4 = gsm__abs(*v3);
        if (v4 > 0x5665) {
            // 0xec4
            v5 = v4 > 0x7999 ? 4 * v4 + 0x6800 : v4 - 0x2b33;
        } else {
            // 0xeb4
            v5 = v4 >> 1;
        }
        // 0xf02
        v6 = v5;
        *v3 = *v3 >= 0 ? v6 : -v6;
        v1++;
        v2 += 2;
    }
}
void Quantization_and_coding(int16_t * LAR) {
    // 0xf60
    int64_t v1; // 0xf60
    int16_t v2 = gsm_mult(0x5000, (int16_t)v1); // 0xf78
    int16_t v3 = 63; // 0xfb4
    if (v2 < 0x4000) {
        // 0xfc7
        v3 = v2 > -0x4001 ? (v2 >> 9) + 32 : 0;
    }
    // 0xfee
    *LAR = v3;
    int64_t v4 = (int64_t)LAR; // 0xffb
    int16_t * v5 = (int16_t *)(v4 + 2); // 0x1003
    int16_t v6 = gsm_mult(0x5000, *v5); // 0x1013
    int16_t v7 = 63; // 0x104f
    if (v6 < 0x4000) {
        // 0x1062
        v7 = v6 > -0x4001 ? (v6 >> 9) + 32 : 0;
    }
    // 0x1089
    *v5 = v7;
    int16_t * v8 = (int16_t *)(v4 + 4); // 0x109e
    int16_t v9 = gsm_mult(0x5000, *v8); // 0x10ae
    int16_t v10 = 31; // 0x10ed
    if (v9 < 0x2000) {
        // 0x1100
        v10 = v9 > -0x2001 ? (v9 >> 9) + 16 : 0;
    }
    // 0x1127
    *v8 = v10;
    int16_t * v11 = (int16_t *)(v4 + 6); // 0x113c
    int16_t v12 = gsm_mult(0x5000, *v11); // 0x114c
    int16_t v13 = 31; // 0x118b
    if (v12 < 0x2000) {
        // 0x119e
        v13 = v12 > -0x2001 ? (v12 >> 9) + 16 : 0;
    }
    // 0x11c5
    *v11 = v13;
    int16_t * v14 = (int16_t *)(v4 + 8); // 0x11da
    int16_t v15 = gsm_mult(0x368c, *v14); // 0x11ea
    int16_t v16 = 15; // 0x1229
    if (v15 < 0x1000) {
        // 0x123c
        v16 = v15 > -0x1001 ? (v15 >> 9) + 8 : 0;
    }
    // 0x1263
    *v14 = v16;
    int16_t * v17 = (int16_t *)(v4 + 10); // 0x1278
    int16_t v18 = gsm_mult(0x3c00, *v17); // 0x1288
    int16_t v19 = 15; // 0x12c7
    if (v18 < 0x1000) {
        // 0x12da
        v19 = v18 > -0x1001 ? (v18 >> 9) + 8 : 0;
    }
    // 0x1301
    *v17 = v19;
    int16_t * v20 = (int16_t *)(v4 + 12); // 0x1316
    int16_t v21 = gsm_mult(0x2156, *v20); // 0x1326
    int16_t v22 = 7; // 0x1365
    if (v21 < 2048) {
        // 0x1378
        v22 = v21 > -2049 ? (v21 >> 9) + 4 : 0;
    }
    // 0x139f
    *v20 = v22;
    int16_t * v23 = (int16_t *)(v4 + 14); // 0x13b4
    int16_t v24 = gsm_mult(0x234c, *v23); // 0x13c4
    int16_t v25 = 7; // 0x1403
    if (v24 < 2048) {
        // 0x1416
        v25 = v24 > -2049 ? (v24 >> 9) + 4 : 0;
    }
    // 0x143d
    *v23 = v25;
}
void Gsm_LPC_Analysis(int16_t * s, int16_t * LARc) {
    // 0x1460
    int64_t v1; // bp-104, 0x1460
    Autocorrelation(s, &v1);
    Reflection_coefficients(&v1, LARc);
    Transformation_to_Log_Area_Ratios(LARc);
    Quantization_and_coding(LARc);
}
