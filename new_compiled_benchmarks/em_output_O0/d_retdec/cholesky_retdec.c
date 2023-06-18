//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t fprintf(int64_t a1, char * a2, int64_t a3, int64_t a4, int128_t a5);
int64_t free(int64_t a1);
void init_array(uint32_t n, float64_t (*A)[1]);
int64_t kernel_cholesky(int64_t a1, int64_t a2);
int64_t polybench_alloc_data(int64_t a1, int64_t a2);
void print_array(uint32_t n, float64_t (*A)[1]);
int64_t sqrt(int128_t a1);
int64_t strcmp(int64_t a1, int64_t * a2);
int32_t submain(int32_t argc, char ** argv);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x4e494745423d3d00; // 0x698
int64_t g2 = 0x322e3025000a0041; // 0x6bf

// ------------------------ Functions -------------------------

// Address range: 0x0 - 0x1fd
int64_t kernel_cholesky(int64_t a1, int64_t a2) {
    // 0x0
    if ((int32_t)a1 <= 0) {
        // 0x1f7
        return 0;
    }
    int64_t result = a1 & 0xffffffff;
    int64_t v1 = 0;
    int64_t v2 = 0x3e80 * v1;
    int64_t v3 = v2 + a2;
    int64_t * v4; // 0x1c4
    int64_t v5; // 0x0
    int64_t * v6; // 0x0
    int64_t v7; // 0x0
    int64_t v8; // 0x0
    int64_t v9; // 0x0
    int64_t v10; // 0x0
    int64_t v11; // 0x0
    int64_t v12; // 0x0
    int64_t v13; // 0x0
    int64_t v14; // 0x0
    int64_t * v15; // 0x0
    int64_t * v16; // 0x0
    int64_t v17; // 0x5e
    int128_t v18; // 0x5e
    int128_t v19; // 0x79
    int128_t v20; // 0x94
    int128_t v21; // 0xb0
    int64_t * v22; // 0x141
    int128_t v23; // 0x141
    int128_t v24; // 0x15c
    int128_t v25; // 0x177
    int64_t v26; // 0x19b
    int64_t v27; // 0x0
    int128_t v28; // 0xe1
    int64_t * v29; // 0xfc
    if (v1 == 0) {
        // 0x11f
        v4 = (int64_t *)(v3 + 8 * v1);
        v8 = *v4;
        v6 = v4;
    } else {
        v9 = 0;
        v5 = 0;
        v7 = 0;
        if (v9 != 0) {
            // 0x48
            v13 = 0x3e80 * v9;
            v14 = 8 * v9;
            v15 = (int64_t *)(v14 + v3);
            v10 = 0;
            v17 = 8 * v10;
            v18 = __asm_movsd(*(int64_t *)(v17 + v3));
            v19 = __asm_movsd(*(int64_t *)(v13 + a2 + v17));
            v20 = __asm_movsd(*v15);
            v21 = __asm_mulsd(__asm_movq_2(__asm_movq(v18) ^ -0x8000000000000000), v19);
            *v15 = __asm_movsd_1(__asm_addsd(v21, v20));
            v10++;
            v5 = v14;
            v7 = v13;
            while (v10 != v9) {
                // 0x48
                v17 = 8 * v10;
                v18 = __asm_movsd(*(int64_t *)(v17 + v3));
                v19 = __asm_movsd(*(int64_t *)(v13 + a2 + v17));
                v20 = __asm_movsd(*v15);
                v21 = __asm_mulsd(__asm_movq_2(__asm_movq(v18) ^ -0x8000000000000000), v19);
                *v15 = __asm_movsd_1(__asm_addsd(v21, v20));
                v10++;
                v5 = v14;
                v7 = v13;
            }
        }
        // 0xcb
        v27 = v5 + a2;
        v28 = __asm_movsd(*(int64_t *)(v27 + v7));
        v29 = (int64_t *)(v27 + v2);
        *v29 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v29), v28));
        v11 = v9 + 1;
        while (v11 != v1) {
            // 0x3c
            v9 = v11;
            v5 = 0;
            v7 = 0;
            if (v9 != 0) {
                // 0x48
                v13 = 0x3e80 * v9;
                v14 = 8 * v9;
                v15 = (int64_t *)(v14 + v3);
                v10 = 0;
                v17 = 8 * v10;
                v18 = __asm_movsd(*(int64_t *)(v17 + v3));
                v19 = __asm_movsd(*(int64_t *)(v13 + a2 + v17));
                v20 = __asm_movsd(*v15);
                v21 = __asm_mulsd(__asm_movq_2(__asm_movq(v18) ^ -0x8000000000000000), v19);
                *v15 = __asm_movsd_1(__asm_addsd(v21, v20));
                v10++;
                v5 = v14;
                v7 = v13;
                while (v10 != v9) {
                    // 0x48
                    v17 = 8 * v10;
                    v18 = __asm_movsd(*(int64_t *)(v17 + v3));
                    v19 = __asm_movsd(*(int64_t *)(v13 + a2 + v17));
                    v20 = __asm_movsd(*v15);
                    v21 = __asm_mulsd(__asm_movq_2(__asm_movq(v18) ^ -0x8000000000000000), v19);
                    *v15 = __asm_movsd_1(__asm_addsd(v21, v20));
                    v10++;
                    v5 = v14;
                    v7 = v13;
                }
            }
            // 0xcb
            v27 = v5 + a2;
            v28 = __asm_movsd(*(int64_t *)(v27 + v7));
            v29 = (int64_t *)(v27 + v2);
            *v29 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v29), v28));
            v11 = v9 + 1;
        }
        // 0x12b
        v16 = (int64_t *)(v3 + 8 * v1);
        v12 = 0;
        v22 = (int64_t *)(8 * v12 + v3);
        v23 = __asm_movsd(*v22);
        v24 = __asm_movsd(*v22);
        v25 = __asm_movsd(*v16);
        v26 = __asm_movsd_1(__asm_addsd(__asm_mulsd(__asm_movq_2(__asm_movq(v23) ^ -0x8000000000000000), v24), v25));
        *v16 = v26;
        v12++;
        v8 = v26;
        v6 = v16;
        while (v12 != v1) {
            // 0x12b
            v22 = (int64_t *)(8 * v12 + v3);
            v23 = __asm_movsd(*v22);
            v24 = __asm_movsd(*v22);
            v25 = __asm_movsd(*v16);
            v26 = __asm_movsd_1(__asm_addsd(__asm_mulsd(__asm_movq_2(__asm_movq(v23) ^ -0x8000000000000000), v24), v25));
            *v16 = v26;
            v12++;
            v8 = v26;
            v6 = v16;
        }
    }
    int128_t v30 = __asm_movsd(v8); // 0x1c4
    sqrt(v30);
    *v6 = __asm_movsd_1(v30);
    int64_t v31 = v1 + 1;
    while (v31 != result) {
        // 0x29
        v1 = v31;
        v2 = 0x3e80 * v1;
        v3 = v2 + a2;
        if (v1 == 0) {
            // 0x11f
            v4 = (int64_t *)(v3 + 8 * v1);
            v8 = *v4;
            v6 = v4;
        } else {
            v9 = 0;
            v5 = 0;
            v7 = 0;
            if (v9 != 0) {
                // 0x48
                v13 = 0x3e80 * v9;
                v14 = 8 * v9;
                v15 = (int64_t *)(v14 + v3);
                v10 = 0;
                v17 = 8 * v10;
                v18 = __asm_movsd(*(int64_t *)(v17 + v3));
                v19 = __asm_movsd(*(int64_t *)(v13 + a2 + v17));
                v20 = __asm_movsd(*v15);
                v21 = __asm_mulsd(__asm_movq_2(__asm_movq(v18) ^ -0x8000000000000000), v19);
                *v15 = __asm_movsd_1(__asm_addsd(v21, v20));
                v10++;
                v5 = v14;
                v7 = v13;
                while (v10 != v9) {
                    // 0x48
                    v17 = 8 * v10;
                    v18 = __asm_movsd(*(int64_t *)(v17 + v3));
                    v19 = __asm_movsd(*(int64_t *)(v13 + a2 + v17));
                    v20 = __asm_movsd(*v15);
                    v21 = __asm_mulsd(__asm_movq_2(__asm_movq(v18) ^ -0x8000000000000000), v19);
                    *v15 = __asm_movsd_1(__asm_addsd(v21, v20));
                    v10++;
                    v5 = v14;
                    v7 = v13;
                }
            }
            // 0xcb
            v27 = v5 + a2;
            v28 = __asm_movsd(*(int64_t *)(v27 + v7));
            v29 = (int64_t *)(v27 + v2);
            *v29 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v29), v28));
            v11 = v9 + 1;
            while (v11 != v1) {
                // 0x3c
                v9 = v11;
                v5 = 0;
                v7 = 0;
                if (v9 != 0) {
                    // 0x48
                    v13 = 0x3e80 * v9;
                    v14 = 8 * v9;
                    v15 = (int64_t *)(v14 + v3);
                    v10 = 0;
                    v17 = 8 * v10;
                    v18 = __asm_movsd(*(int64_t *)(v17 + v3));
                    v19 = __asm_movsd(*(int64_t *)(v13 + a2 + v17));
                    v20 = __asm_movsd(*v15);
                    v21 = __asm_mulsd(__asm_movq_2(__asm_movq(v18) ^ -0x8000000000000000), v19);
                    *v15 = __asm_movsd_1(__asm_addsd(v21, v20));
                    v10++;
                    v5 = v14;
                    v7 = v13;
                    while (v10 != v9) {
                        // 0x48
                        v17 = 8 * v10;
                        v18 = __asm_movsd(*(int64_t *)(v17 + v3));
                        v19 = __asm_movsd(*(int64_t *)(v13 + a2 + v17));
                        v20 = __asm_movsd(*v15);
                        v21 = __asm_mulsd(__asm_movq_2(__asm_movq(v18) ^ -0x8000000000000000), v19);
                        *v15 = __asm_movsd_1(__asm_addsd(v21, v20));
                        v10++;
                        v5 = v14;
                        v7 = v13;
                    }
                }
                // 0xcb
                v27 = v5 + a2;
                v28 = __asm_movsd(*(int64_t *)(v27 + v7));
                v29 = (int64_t *)(v27 + v2);
                *v29 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v29), v28));
                v11 = v9 + 1;
            }
            // 0x12b
            v16 = (int64_t *)(v3 + 8 * v1);
            v12 = 0;
            v22 = (int64_t *)(8 * v12 + v3);
            v23 = __asm_movsd(*v22);
            v24 = __asm_movsd(*v22);
            v25 = __asm_movsd(*v16);
            v26 = __asm_movsd_1(__asm_addsd(__asm_mulsd(__asm_movq_2(__asm_movq(v23) ^ -0x8000000000000000), v24), v25));
            *v16 = v26;
            v12++;
            v8 = v26;
            v6 = v16;
            while (v12 != v1) {
                // 0x12b
                v22 = (int64_t *)(8 * v12 + v3);
                v23 = __asm_movsd(*v22);
                v24 = __asm_movsd(*v22);
                v25 = __asm_movsd(*v16);
                v26 = __asm_movsd_1(__asm_addsd(__asm_mulsd(__asm_movq_2(__asm_movq(v23) ^ -0x8000000000000000), v24), v25));
                *v16 = v26;
                v12++;
                v8 = v26;
                v6 = v16;
            }
        }
        // 0x1ae
        v30 = __asm_movsd(v8);
        sqrt(v30);
        *v6 = __asm_movsd_1(v30);
        v31 = v1 + 1;
    }
    // 0x1f7
    return result;
}

// Address range: 0x200 - 0x284
// Line range:    109 - 137
int32_t submain(int32_t argc, char ** argv) {
    int64_t str = polybench_alloc_data(0x3d0900, 8); // 0x220
    float64_t (*v1)[1] = (float64_t (*)[1])str; // 0x225
    init_array(2000, v1);
    if (argc < 43) {
        // 0x273
        free(str);
        return 0;
    }
    // 0x24b
    if ((int32_t)strcmp(str, &g1) == 0) {
        // 0x267
        print_array(2000, v1);
    }
    // 0x273
    free(str);
    return 0;
}

// Address range: 0x290 - 0x551
// Line range:    26 - 56
void init_array(uint32_t n, float64_t (*A)[1]) {
    if (n <= 0) {
        // 0x542
        free(polybench_alloc_data(0x3d0900, 8));
        return;
    }
    int64_t v1 = n;
    int64_t v2 = 0x100000000 * (int64_t)A >> 32;
    int64_t v3 = 1; // 0x290
    int64_t v4 = 0;
    int64_t v5 = 0x3e80 * v4 + v2;
    int64_t v6 = 0;
    int32_t v7 = -(int32_t)v6;
    int128_t v8 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v7 >> 31) | (int64_t)v7) % v1)); // 0x2ce
    int128_t v9 = __asm_addsd(__asm_divsd(v8, __asm_cvtsi2sd(n)), __asm_movsd(0x3ff0000000000000)); // 0x2e3
    *(int64_t *)(8 * v6 + v5) = __asm_movsd_1(v9);
    v6++;
    while (v6 != v3) {
        // 0x2c5
        v7 = -(int32_t)v6;
        v8 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v7 >> 31) | (int64_t)v7) % v1));
        v9 = __asm_addsd(__asm_divsd(v8, __asm_cvtsi2sd(n)), __asm_movsd(0x3ff0000000000000));
        *(int64_t *)(8 * v6 + v5) = __asm_movsd_1(v9);
        v6++;
    }
    int64_t v10 = v4 + 1;
    int64_t v11 = v3; // 0x31f
    int128_t v12 = v9; // 0x31f
    int64_t v13; // 0x290
    int128_t v14; // 0x33b
    int128_t v15; // 0x290
    if (v10 < (int64_t)n) {
        v15 = v12;
        v14 = __asm_xorps(v15, v15);
        *(int64_t *)(8 * v11 + v5) = __asm_movsd_1(v14);
        v13 = v11 + 1;
        v11 = v13;
        while ((int32_t)v13 != n) {
            // 0x325
            v15 = v14;
            v14 = __asm_xorps(v15, v15);
            *(int64_t *)(8 * v11 + v5) = __asm_movsd_1(v14);
            v13 = v11 + 1;
            v11 = v13;
        }
    }
    int128_t v16 = __asm_movsd(0x3ff0000000000000); // 0x367
    *(int64_t *)(v5 + 8 * v4) = __asm_movsd_1(v16);
    v3++;
    while (v10 != v1) {
        // 0x2c5
        v4 = v10;
        v5 = 0x3e80 * v4 + v2;
        v6 = 0;
        v7 = -(int32_t)v6;
        v8 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v7 >> 31) | (int64_t)v7) % v1));
        v9 = __asm_addsd(__asm_divsd(v8, __asm_cvtsi2sd(n)), __asm_movsd(0x3ff0000000000000));
        *(int64_t *)(8 * v6 + v5) = __asm_movsd_1(v9);
        v6++;
        while (v6 != v3) {
            // 0x2c5
            v7 = -(int32_t)v6;
            v8 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v7 >> 31) | (int64_t)v7) % v1));
            v9 = __asm_addsd(__asm_divsd(v8, __asm_cvtsi2sd(n)), __asm_movsd(0x3ff0000000000000));
            *(int64_t *)(8 * v6 + v5) = __asm_movsd_1(v9);
            v6++;
        }
        // 0x319
        v10 = v4 + 1;
        v11 = v3;
        v12 = v9;
        if (v10 < (int64_t)n) {
            v15 = v12;
            v14 = __asm_xorps(v15, v15);
            *(int64_t *)(8 * v11 + v5) = __asm_movsd_1(v14);
            v13 = v11 + 1;
            v11 = v13;
            while ((int32_t)v13 != n) {
                // 0x325
                v15 = v14;
                v14 = __asm_xorps(v15, v15);
                *(int64_t *)(8 * v11 + v5) = __asm_movsd_1(v14);
                v13 = v11 + 1;
                v11 = v13;
            }
        }
        // 0x351
        v16 = __asm_movsd(0x3ff0000000000000);
        *(int64_t *)(v5 + 8 * v4) = __asm_movsd_1(v16);
        v3++;
    }
    int64_t v17 = polybench_alloc_data(0x3d0900, 8); // 0x38c
    int64_t v18 = 0;
    int64_t v19 = 0;
    int128_t v20 = v16;
    int128_t v21 = __asm_xorps(v20, v20); // 0x3d1
    *(int64_t *)(0x3e80 * v18 + v17 + 8 * v19) = __asm_movsd_1(v21);
    v19++;
    while (v19 != v1) {
        // 0x3bb
        v20 = v21;
        v21 = __asm_xorps(v20, v20);
        *(int64_t *)(0x3e80 * v18 + v17 + 8 * v19) = __asm_movsd_1(v21);
        v19++;
    }
    // 0x3ec
    v18++;
    int64_t v22 = 0; // 0x3a2
    while (v18 != v1) {
        // 0x3bb
        v19 = 0;
        v20 = v21;
        v21 = __asm_xorps(v20, v20);
        *(int64_t *)(0x3e80 * v18 + v17 + 8 * v19) = __asm_movsd_1(v21);
        v19++;
        while (v19 != v1) {
            // 0x3bb
            v20 = v21;
            v21 = __asm_xorps(v20, v20);
            *(int64_t *)(0x3e80 * v18 + v17 + 8 * v19) = __asm_movsd_1(v21);
            v19++;
        }
        // 0x3ec
        v18++;
        v22 = 0;
    }
    int64_t v23 = 8 * v22 + v2;
    int64_t v24 = 0;
    int64_t v25 = 0x3e80 * v24; // 0x43b
    int64_t v26 = 0;
    int128_t v27 = __asm_movsd(*(int64_t *)(v25 + v23)); // 0x449
    int128_t v28 = __asm_movsd(*(int64_t *)(0x3e80 * v26 + v23)); // 0x464
    int64_t * v29 = (int64_t *)(v25 + v17 + 8 * v26); // 0x47f
    *v29 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v27, v28), __asm_movsd(*v29)));
    v26++;
    while (v26 != v1) {
        // 0x433
        v27 = __asm_movsd(*(int64_t *)(v25 + v23));
        v28 = __asm_movsd(*(int64_t *)(0x3e80 * v26 + v23));
        v29 = (int64_t *)(v25 + v17 + 8 * v26);
        *v29 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v27, v28), __asm_movsd(*v29)));
        v26++;
    }
    // 0x4a4
    v24++;
    while (v24 != v1) {
        // 0x433
        v25 = 0x3e80 * v24;
        v26 = 0;
        v27 = __asm_movsd(*(int64_t *)(v25 + v23));
        v28 = __asm_movsd(*(int64_t *)(0x3e80 * v26 + v23));
        v29 = (int64_t *)(v25 + v17 + 8 * v26);
        *v29 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v27, v28), __asm_movsd(*v29)));
        v26++;
        while (v26 != v1) {
            // 0x433
            v27 = __asm_movsd(*(int64_t *)(v25 + v23));
            v28 = __asm_movsd(*(int64_t *)(0x3e80 * v26 + v23));
            v29 = (int64_t *)(v25 + v17 + 8 * v26);
            *v29 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v27, v28), __asm_movsd(*v29)));
            v26++;
        }
        // 0x4a4
        v24++;
    }
    int64_t v30 = v22 + 1;
    v22 = v30;
    int64_t v31 = 0; // 0x407
    while (v30 != v1) {
        // 0x427
        v23 = 8 * v22 + v2;
        v24 = 0;
        v25 = 0x3e80 * v24;
        v26 = 0;
        v27 = __asm_movsd(*(int64_t *)(v25 + v23));
        v28 = __asm_movsd(*(int64_t *)(0x3e80 * v26 + v23));
        v29 = (int64_t *)(v25 + v17 + 8 * v26);
        *v29 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v27, v28), __asm_movsd(*v29)));
        v26++;
        while (v26 != v1) {
            // 0x433
            v27 = __asm_movsd(*(int64_t *)(v25 + v23));
            v28 = __asm_movsd(*(int64_t *)(0x3e80 * v26 + v23));
            v29 = (int64_t *)(v25 + v17 + 8 * v26);
            *v29 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v27, v28), __asm_movsd(*v29)));
            v26++;
        }
        // 0x4a4
        v24++;
        while (v24 != v1) {
            // 0x433
            v25 = 0x3e80 * v24;
            v26 = 0;
            v27 = __asm_movsd(*(int64_t *)(v25 + v23));
            v28 = __asm_movsd(*(int64_t *)(0x3e80 * v26 + v23));
            v29 = (int64_t *)(v25 + v17 + 8 * v26);
            *v29 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v27, v28), __asm_movsd(*v29)));
            v26++;
            while (v26 != v1) {
                // 0x433
                v27 = __asm_movsd(*(int64_t *)(v25 + v23));
                v28 = __asm_movsd(*(int64_t *)(0x3e80 * v26 + v23));
                v29 = (int64_t *)(v25 + v17 + 8 * v26);
                *v29 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v27, v28), __asm_movsd(*v29)));
                v26++;
            }
            // 0x4a4
            v24++;
        }
        // 0x4b7
        v30 = v22 + 1;
        v22 = v30;
        v31 = 0;
    }
    int64_t v32 = 0;
    int64_t v33 = 8 * v32 + 0x3e80 * v31;
    *(int64_t *)(v33 + v2) = __asm_movsd_1(__asm_movsd(*(int64_t *)(v33 + v17)));
    v32++;
    while (v32 != v1) {
        // 0x4eb
        v33 = 8 * v32 + 0x3e80 * v31;
        *(int64_t *)(v33 + v2) = __asm_movsd_1(__asm_movsd(*(int64_t *)(v33 + v17)));
        v32++;
    }
    int64_t v34 = v31 + 1;
    v31 = v34;
    while (v34 != v1) {
        // 0x4eb
        v32 = 0;
        v33 = 8 * v32 + 0x3e80 * v31;
        *(int64_t *)(v33 + v2) = __asm_movsd_1(__asm_movsd(*(int64_t *)(v33 + v17)));
        v32++;
        while (v32 != v1) {
            // 0x4eb
            v33 = 8 * v32 + 0x3e80 * v31;
            *(int64_t *)(v33 + v2) = __asm_movsd_1(__asm_movsd(*(int64_t *)(v33 + v17)));
            v32++;
        }
        // 0x534
        v34 = v31 + 1;
        v31 = v34;
    }
    // 0x542
    free(v17);
}

// Address range: 0x560 - 0x690
// Line range:    62 - 77
void print_array(uint32_t n, float64_t (*A)[1]) {
    // 0x560
    int64_t v1; // 0x560
    int128_t v2; // 0x560
    fprintf(*(int64_t *)*(int64_t *)1398, "==BEGIN DUMP_ARRAYS==\n", v1, v1, v2);
    int64_t stream = *(int64_t *)*(int64_t *)1422; // 0x58e
    fprintf(stream, "begin dump: %s", (int64_t)&g2, v1, v2);
    int64_t v3; // 0x560
    int128_t v4; // 0x560
    if (n > 0) {
        int64_t v5 = 0;
        int64_t v6 = 1; // 0x560
        int64_t v7 = 0x3e80 * v5 + (0x100000000 * (int64_t)A >> 32);
        int64_t v8 = 0;
        int32_t v9 = (int32_t)v5 * n + (int32_t)v8; // 0x5d3
        int64_t v10 = (0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9) % 20; // 0x5dc
        int64_t v11 = v10 & 0xffffffff; // 0x5dc
        if ((int32_t)v10 == 0) {
            // 0x5e7
            int128_t v12; // 0x560
            fprintf(*(int64_t *)*(int64_t *)1518, "\n", v11, 20, v12);
        }
        int128_t v13 = __asm_movsd(*(int64_t *)(v7 + 8 * v8)); // 0x61f
        fprintf(*(int64_t *)*(int64_t *)1542, "%0.2lf ", v11, v8, v13);
        int64_t v14 = v8 + 1;
        int128_t v15 = v13; // 0x5c6
        while (v14 != v6) {
            // 0x5cc
            v8 = v14;
            v9 = (int32_t)v5 * n + (int32_t)v8;
            v10 = (0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9) % 20;
            v11 = v10 & 0xffffffff;
            if ((int32_t)v10 == 0) {
                // 0x5e7
                fprintf(*(int64_t *)*(int64_t *)1518, "\n", v11, 20, v15);
            }
            // 0x5ff
            v13 = __asm_movsd(*(int64_t *)(v7 + 8 * v8));
            fprintf(*(int64_t *)*(int64_t *)1542, "%0.2lf ", v11, v8, v13);
            v14 = v8 + 1;
            v15 = v13;
        }
        // 0x645
        v5++;
        v6++;
        v4 = v13;
        v3 = v8;
        while (v5 != (int64_t)n) {
            // 0x5cc
            v7 = 0x3e80 * v5 + (0x100000000 * (int64_t)A >> 32);
            v15 = v13;
            v8 = 0;
            v9 = (int32_t)v5 * n + (int32_t)v8;
            v10 = (0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9) % 20;
            v11 = v10 & 0xffffffff;
            if ((int32_t)v10 == 0) {
                // 0x5e7
                fprintf(*(int64_t *)*(int64_t *)1518, "\n", v11, 20, v15);
            }
            // 0x5ff
            v13 = __asm_movsd(*(int64_t *)(v7 + 8 * v8));
            fprintf(*(int64_t *)*(int64_t *)1542, "%0.2lf ", v11, v8, v13);
            v14 = v8 + 1;
            v15 = v13;
            while (v14 != v6) {
                // 0x5cc
                v8 = v14;
                v9 = (int32_t)v5 * n + (int32_t)v8;
                v10 = (0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9) % 20;
                v11 = v10 & 0xffffffff;
                if ((int32_t)v10 == 0) {
                    // 0x5e7
                    fprintf(*(int64_t *)*(int64_t *)1518, "\n", v11, 20, v15);
                }
                // 0x5ff
                v13 = __asm_movsd(*(int64_t *)(v7 + 8 * v8));
                fprintf(*(int64_t *)*(int64_t *)1542, "%0.2lf ", v11, v8, v13);
                v14 = v8 + 1;
                v15 = v13;
            }
            // 0x645
            v5++;
            v6++;
            v4 = v13;
            v3 = v8;
        }
    }
    int64_t stream2 = *(int64_t *)*(int64_t *)1626; // 0x65a
    fprintf(stream2, "\nend   dump: %s\n", (int64_t)&g2, v3, v4);
    int64_t stream3 = *(int64_t *)*(int64_t *)1657; // 0x679
    fprintf(stream3, "==END   DUMP_ARRAYS==\n", (int64_t)&g2, v3, v4);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (17.0.0)
// Detected functions: 4

