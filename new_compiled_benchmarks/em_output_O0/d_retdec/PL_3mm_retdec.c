//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

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
int64_t free(float64_t (*a1)[1]);
int64_t init_array(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
void kernel_3mm(uint32_t ni, uint32_t nj, uint32_t nk, uint32_t nl, uint32_t nm, float64_t (*E)[1], float64_t (*A)[1], float64_t (*B)[1], float64_t (*F)[1], float64_t (*C)[1], float64_t (*D)[1], float64_t (*G)[1]);
int64_t polybench_alloc_data(int64_t a1, int64_t a2);
void print_array(uint32_t ni, uint32_t nl, float64_t (*G)[1]);
int64_t strcmp(int64_t a1, int64_t a2);
int32_t submain(uint32_t argc, char ** argv);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x322e3025000a0047; // 0x85a

// ------------------------ Functions -------------------------

// Address range: 0x0 - 0x232
int64_t init_array(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = 0x100000000 * a1 >> 32; // 0x10
    int64_t v2 = 0x100000000 * a3 >> 32; // 0x16
    int32_t v3 = v1; // 0x2e
    int32_t v4 = v2;
    if (v3 > 0) {
        int64_t v5 = v1 & 0xffffffff;
        int64_t v6 = 0;
        int64_t v7; // 0x0
        int32_t v8; // 0x51
        int128_t v9; // 0x58
        int64_t v10; // 0x7e
        if (v4 > 0) {
            // 0x4a
            v7 = 0;
            v8 = (int32_t)v7 * (int32_t)v6 + 1;
            v9 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v8 >> 31) | (int64_t)v8) % v5));
            v10 = __asm_movsd_1(__asm_divsd(v9, __asm_cvtsi2sd(5 * v3)));
            *(int64_t *)(0x1f40 * v6 + a6 + 8 * v7) = v10;
            v7++;
            while (v7 != (v2 & 0xffffffff)) {
                // 0x4a
                v8 = (int32_t)v7 * (int32_t)v6 + 1;
                v9 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v8 >> 31) | (int64_t)v8) % v5));
                v10 = __asm_movsd_1(__asm_divsd(v9, __asm_cvtsi2sd(5 * v3)));
                *(int64_t *)(0x1f40 * v6 + a6 + 8 * v7) = v10;
                v7++;
            }
        }
        int64_t v11 = v6 + 1;
        while (v11 != v5) {
            // 0x3e
            v6 = v11;
            if (v4 > 0) {
                // 0x4a
                v7 = 0;
                v8 = (int32_t)v7 * (int32_t)v6 + 1;
                v9 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v8 >> 31) | (int64_t)v8) % v5));
                v10 = __asm_movsd_1(__asm_divsd(v9, __asm_cvtsi2sd(5 * v3)));
                *(int64_t *)(0x1f40 * v6 + a6 + 8 * v7) = v10;
                v7++;
                while (v7 != (v2 & 0xffffffff)) {
                    // 0x4a
                    v8 = (int32_t)v7 * (int32_t)v6 + 1;
                    v9 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v8 >> 31) | (int64_t)v8) % v5));
                    v10 = __asm_movsd_1(__asm_divsd(v9, __asm_cvtsi2sd(5 * v3)));
                    *(int64_t *)(0x1f40 * v6 + a6 + 8 * v7) = v10;
                    v7++;
                }
            }
            // 0x96
            v11 = v6 + 1;
        }
    }
    int64_t v12 = 0x100000000 * a2 >> 32; // 0x13
    int32_t v13 = v12;
    if (v4 > 0) {
        int64_t v14 = v12 & 0xffffffff;
        int64_t v15 = 0;
        int64_t v16; // 0x0
        int64_t v17; // 0x0
        int32_t v18; // 0xd6
        int128_t v19; // 0xdd
        int64_t v20; // 0x103
        if (v13 > 0) {
            // 0xca
            v16 = 0;
            v17 = v16 + 1;
            v18 = (int32_t)v17 * (int32_t)v15 + 2;
            v19 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v18 >> 31) | (int64_t)v18) % v14));
            v20 = __asm_movsd_1(__asm_divsd(v19, __asm_cvtsi2sd(5 * v13)));
            *(int64_t *)(0x1c20 * v15 + a7 + 8 * v16) = v20;
            while (v17 != v14) {
                // 0xca
                v16 = v17;
                v17 = v16 + 1;
                v18 = (int32_t)v17 * (int32_t)v15 + 2;
                v19 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v18 >> 31) | (int64_t)v18) % v14));
                v20 = __asm_movsd_1(__asm_divsd(v19, __asm_cvtsi2sd(5 * v13)));
                *(int64_t *)(0x1c20 * v15 + a7 + 8 * v16) = v20;
            }
        }
        int64_t v21 = v15 + 1;
        while (v21 != (v2 & 0xffffffff)) {
            // 0xbe
            v15 = v21;
            if (v13 > 0) {
                // 0xca
                v16 = 0;
                v17 = v16 + 1;
                v18 = (int32_t)v17 * (int32_t)v15 + 2;
                v19 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v18 >> 31) | (int64_t)v18) % v14));
                v20 = __asm_movsd_1(__asm_divsd(v19, __asm_cvtsi2sd(5 * v13)));
                *(int64_t *)(0x1c20 * v15 + a7 + 8 * v16) = v20;
                while (v17 != v14) {
                    // 0xca
                    v16 = v17;
                    v17 = v16 + 1;
                    v18 = (int32_t)v17 * (int32_t)v15 + 2;
                    v19 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v18 >> 31) | (int64_t)v18) % v14));
                    v20 = __asm_movsd_1(__asm_divsd(v19, __asm_cvtsi2sd(5 * v13)));
                    *(int64_t *)(0x1c20 * v15 + a7 + 8 * v16) = v20;
                }
            }
            // 0x11b
            v21 = v15 + 1;
        }
    }
    int64_t v22 = 0x100000000 * a4 >> 32; // 0x19
    int64_t v23 = 0x100000000 * a5 >> 32; // 0x1c
    int32_t v24 = v23;
    if (v13 > 0) {
        int64_t v25 = v22 & 0xffffffff;
        int64_t v26 = 0;
        int64_t v27; // 0x0
        int32_t v28; // 0x158
        int128_t v29; // 0x15f
        int64_t v30; // 0x185
        if (v24 > 0) {
            // 0x14f
            v27 = 0;
            v28 = ((int32_t)v27 + 3) * (int32_t)v26;
            v29 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v28 >> 31) | (int64_t)v28) % v25));
            v30 = __asm_movsd_1(__asm_divsd(v29, __asm_cvtsi2sd(5 * (int32_t)v22)));
            *(int64_t *)(0x2580 * v26 + a8 + 8 * v27) = v30;
            v27++;
            while (v27 != (v23 & 0xffffffff)) {
                // 0x14f
                v28 = ((int32_t)v27 + 3) * (int32_t)v26;
                v29 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v28 >> 31) | (int64_t)v28) % v25));
                v30 = __asm_movsd_1(__asm_divsd(v29, __asm_cvtsi2sd(5 * (int32_t)v22)));
                *(int64_t *)(0x2580 * v26 + a8 + 8 * v27) = v30;
                v27++;
            }
        }
        int64_t v31 = v26 + 1;
        while (v31 != (v12 & 0xffffffff)) {
            // 0x143
            v26 = v31;
            if (v24 > 0) {
                // 0x14f
                v27 = 0;
                v28 = ((int32_t)v27 + 3) * (int32_t)v26;
                v29 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v28 >> 31) | (int64_t)v28) % v25));
                v30 = __asm_movsd_1(__asm_divsd(v29, __asm_cvtsi2sd(5 * (int32_t)v22)));
                *(int64_t *)(0x2580 * v26 + a8 + 8 * v27) = v30;
                v27++;
                while (v27 != (v23 & 0xffffffff)) {
                    // 0x14f
                    v28 = ((int32_t)v27 + 3) * (int32_t)v26;
                    v29 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v28 >> 31) | (int64_t)v28) % v25));
                    v30 = __asm_movsd_1(__asm_divsd(v29, __asm_cvtsi2sd(5 * (int32_t)v22)));
                    *(int64_t *)(0x2580 * v26 + a8 + 8 * v27) = v30;
                    v27++;
                }
            }
            // 0x19d
            v31 = v26 + 1;
        }
    }
    // 0x1b2
    if (v24 <= 0) {
        // 0x230
        return 0;
    }
    int64_t v32 = v2 & 0xffffffff;
    int64_t result = v23 & 0xffffffff;
    int64_t v33 = 0;
    int64_t v34; // 0x0
    int32_t v35; // 0x1dd
    int128_t v36; // 0x1e4
    int64_t v37; // 0x20a
    if ((int32_t)v22 > 0) {
        // 0x1d1
        v34 = 0;
        v35 = ((int32_t)v34 + 2) * (int32_t)v33 + 2;
        v36 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v35 >> 31) | (int64_t)v35) % v32));
        v37 = __asm_movsd_1(__asm_divsd(v36, __asm_cvtsi2sd(5 * v4)));
        *(int64_t *)(0x2260 * v33 + a9 + 8 * v34) = v37;
        v34++;
        while (v34 != (v22 & 0xffffffff)) {
            // 0x1d1
            v35 = ((int32_t)v34 + 2) * (int32_t)v33 + 2;
            v36 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v35 >> 31) | (int64_t)v35) % v32));
            v37 = __asm_movsd_1(__asm_divsd(v36, __asm_cvtsi2sd(5 * v4)));
            *(int64_t *)(0x2260 * v33 + a9 + 8 * v34) = v37;
            v34++;
        }
    }
    int64_t v38 = v33 + 1;
    while (v38 != result) {
        // 0x1c5
        v33 = v38;
        if ((int32_t)v22 > 0) {
            // 0x1d1
            v34 = 0;
            v35 = ((int32_t)v34 + 2) * (int32_t)v33 + 2;
            v36 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v35 >> 31) | (int64_t)v35) % v32));
            v37 = __asm_movsd_1(__asm_divsd(v36, __asm_cvtsi2sd(5 * v4)));
            *(int64_t *)(0x2260 * v33 + a9 + 8 * v34) = v37;
            v34++;
            while (v34 != (v22 & 0xffffffff)) {
                // 0x1d1
                v35 = ((int32_t)v34 + 2) * (int32_t)v33 + 2;
                v36 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v35 >> 31) | (int64_t)v35) % v32));
                v37 = __asm_movsd_1(__asm_divsd(v36, __asm_cvtsi2sd(5 * v4)));
                *(int64_t *)(0x2260 * v33 + a9 + 8 * v34) = v37;
                v34++;
            }
        }
        // 0x222
        v38 = v33 + 1;
    }
    // 0x230
    return result;
}

// Address range: 0x240 - 0x373
// Line range:    52 - 66
void print_array(uint32_t ni, uint32_t nl, float64_t (*G)[1]) {
    int64_t v1 = (int64_t)G;
    int64_t v2; // 0x240
    int128_t v3; // 0x240
    fprintf(*(int64_t *)*(int64_t *)601, "==BEGIN DUMP_ARRAYS==\n", v1, v2, v3);
    int64_t stream = *(int64_t *)*(int64_t *)625; // 0x271
    fprintf(stream, "begin dump: %s", (int64_t)&g1, v2, v3);
    int64_t v4; // 0x240
    int128_t v5; // 0x240
    if (ni > 0) {
        int64_t v6 = 0;
        int128_t v7; // 0x240
        int128_t v8 = v7; // 0x2a9
        int64_t v9; // 0x240
        int64_t v10 = v9; // 0x2a9
        int64_t v11; // 0x240
        int64_t v12; // 0x240
        int64_t v13; // 0x240
        int32_t v14; // 0x2b6
        int64_t v15; // 0x2bf
        int64_t v16; // 0x2bf
        int128_t v17; // 0x302
        int128_t v18; // 0x240
        if (nl > 0) {
            // 0x2af
            v13 = 0x2260 * v6 + (0x100000000 * v1 >> 32);
            v12 = 0;
            v14 = (int32_t)v6 * ni + (int32_t)v12;
            v15 = (0x100000000 * (int64_t)(v14 >> 31) | (int64_t)v14) % 20;
            v16 = v15 & 0xffffffff;
            if ((int32_t)v15 == 0) {
                // 0x2ca
                fprintf(*(int64_t *)*(int64_t *)721, "\n", v16, 20, v7);
            }
            // 0x2e2
            v17 = __asm_movsd(*(int64_t *)(v13 + 8 * v12));
            fprintf(*(int64_t *)*(int64_t *)745, "%0.2lf ", v16, v12, v17);
            v11 = v12 + 1;
            v18 = v17;
            v8 = v17;
            v10 = v12;
            while (v11 != (int64_t)nl) {
                // 0x2af
                v12 = v11;
                v14 = (int32_t)v6 * ni + (int32_t)v12;
                v15 = (0x100000000 * (int64_t)(v14 >> 31) | (int64_t)v14) % 20;
                v16 = v15 & 0xffffffff;
                if ((int32_t)v15 == 0) {
                    // 0x2ca
                    fprintf(*(int64_t *)*(int64_t *)721, "\n", v16, 20, v18);
                }
                // 0x2e2
                v17 = __asm_movsd(*(int64_t *)(v13 + 8 * v12));
                fprintf(*(int64_t *)*(int64_t *)745, "%0.2lf ", v16, v12, v17);
                v11 = v12 + 1;
                v18 = v17;
                v8 = v17;
                v10 = v12;
            }
        }
        int64_t v19 = v6 + 1;
        v9 = v10;
        v5 = v8;
        v4 = v10;
        while (v19 != (int64_t)ni) {
            int128_t v20 = v8;
            v6 = v19;
            v8 = v20;
            v10 = v9;
            if (nl > 0) {
                // 0x2af
                v13 = 0x2260 * v6 + (0x100000000 * v1 >> 32);
                v18 = v20;
                v12 = 0;
                v14 = (int32_t)v6 * ni + (int32_t)v12;
                v15 = (0x100000000 * (int64_t)(v14 >> 31) | (int64_t)v14) % 20;
                v16 = v15 & 0xffffffff;
                if ((int32_t)v15 == 0) {
                    // 0x2ca
                    fprintf(*(int64_t *)*(int64_t *)721, "\n", v16, 20, v18);
                }
                // 0x2e2
                v17 = __asm_movsd(*(int64_t *)(v13 + 8 * v12));
                fprintf(*(int64_t *)*(int64_t *)745, "%0.2lf ", v16, v12, v17);
                v11 = v12 + 1;
                v18 = v17;
                v8 = v17;
                v10 = v12;
                while (v11 != (int64_t)nl) {
                    // 0x2af
                    v12 = v11;
                    v14 = (int32_t)v6 * ni + (int32_t)v12;
                    v15 = (0x100000000 * (int64_t)(v14 >> 31) | (int64_t)v14) % 20;
                    v16 = v15 & 0xffffffff;
                    if ((int32_t)v15 == 0) {
                        // 0x2ca
                        fprintf(*(int64_t *)*(int64_t *)721, "\n", v16, 20, v18);
                    }
                    // 0x2e2
                    v17 = __asm_movsd(*(int64_t *)(v13 + 8 * v12));
                    fprintf(*(int64_t *)*(int64_t *)745, "%0.2lf ", v16, v12, v17);
                    v11 = v12 + 1;
                    v18 = v17;
                    v8 = v17;
                    v10 = v12;
                }
            }
            // 0x328
            v19 = v6 + 1;
            v9 = v10;
            v5 = v8;
            v4 = v10;
        }
    }
    int64_t stream2 = *(int64_t *)*(int64_t *)829; // 0x33d
    fprintf(stream2, "\nend   dump: %s\n", (int64_t)&g1, v4, v5);
    int64_t stream3 = *(int64_t *)*(int64_t *)860; // 0x35c
    fprintf(stream3, "==END   DUMP_ARRAYS==\n", (int64_t)&g1, v4, v5);
}

// Address range: 0x380 - 0x66d
// Line range:    72 - 110
void kernel_3mm(uint32_t ni, uint32_t nj, uint32_t nk, uint32_t nl, uint32_t nm, float64_t (*E)[1], float64_t (*A)[1], float64_t (*B)[1], float64_t (*F)[1], float64_t (*C)[1], float64_t (*D)[1], float64_t (*G)[1]) {
    int64_t v1 = (int64_t)E;
    int128_t v2; // 0x380
    if (ni > 0) {
        int64_t v3 = 0;
        int128_t v4; // 0x380
        int128_t v5 = v4; // 0x3d0
        int64_t v6; // 0x380
        int64_t v7; // 0x380
        int128_t v8; // 0x3ec
        int64_t v9; // 0x3ef
        int64_t v10; // 0x3ef
        int64_t * v11; // 0x3ef
        int128_t v12; // 0x41d
        int128_t v13; // 0x438
        int128_t v14; // 0x45c
        int64_t v15; // 0x380
        int128_t v16; // 0x380
        int128_t v17; // 0x380
        int128_t v18; // 0x380
        if (nj > 0) {
            // 0x3d6
            v15 = 0x1f40 * v3 + (int64_t)A;
            v7 = 0;
            v16 = v4;
            v8 = __asm_xorps(v16, v16);
            v9 = __asm_movsd_1(v8);
            v10 = 8 * v7;
            v11 = (int64_t *)(0x1c20 * v3 + (0x100000000 * v1 >> 32) + v10);
            *v11 = v9;
            v17 = v8;
            if (nk > 0) {
                // 0x407
                v6 = 0;
                v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                *v11 = __asm_movsd_1(v14);
                v6++;
                v17 = v14;
                while (v6 != (int64_t)nk) {
                    // 0x407
                    v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                    v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                    v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                    *v11 = __asm_movsd_1(v14);
                    v6++;
                    v17 = v14;
                }
            }
            // 0x478
            v18 = v17;
            v7++;
            v5 = v18;
            while (v7 != (int64_t)nj) {
                // 0x3d6
                v16 = v18;
                v8 = __asm_xorps(v16, v16);
                v9 = __asm_movsd_1(v8);
                v10 = 8 * v7;
                v11 = (int64_t *)(0x1c20 * v3 + (0x100000000 * v1 >> 32) + v10);
                *v11 = v9;
                v17 = v8;
                if (nk > 0) {
                    // 0x407
                    v6 = 0;
                    v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                    v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                    v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                    *v11 = __asm_movsd_1(v14);
                    v6++;
                    v17 = v14;
                    while (v6 != (int64_t)nk) {
                        // 0x407
                        v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                        v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                        v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                        *v11 = __asm_movsd_1(v14);
                        v6++;
                        v17 = v14;
                    }
                }
                // 0x478
                v18 = v17;
                v7++;
                v5 = v18;
            }
        }
        int64_t v19 = v3 + 1;
        v2 = v5;
        while (v19 != (int64_t)ni) {
            int128_t v20 = v5;
            v3 = v19;
            v5 = v20;
            if (nj > 0) {
                // 0x3d6
                v15 = 0x1f40 * v3 + (int64_t)A;
                v7 = 0;
                v16 = v20;
                v8 = __asm_xorps(v16, v16);
                v9 = __asm_movsd_1(v8);
                v10 = 8 * v7;
                v11 = (int64_t *)(0x1c20 * v3 + (0x100000000 * v1 >> 32) + v10);
                *v11 = v9;
                v17 = v8;
                if (nk > 0) {
                    // 0x407
                    v6 = 0;
                    v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                    v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                    v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                    *v11 = __asm_movsd_1(v14);
                    v6++;
                    v17 = v14;
                    while (v6 != (int64_t)nk) {
                        // 0x407
                        v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                        v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                        v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                        *v11 = __asm_movsd_1(v14);
                        v6++;
                        v17 = v14;
                    }
                }
                // 0x478
                v18 = v17;
                v7++;
                v5 = v18;
                while (v7 != (int64_t)nj) {
                    // 0x3d6
                    v16 = v18;
                    v8 = __asm_xorps(v16, v16);
                    v9 = __asm_movsd_1(v8);
                    v10 = 8 * v7;
                    v11 = (int64_t *)(0x1c20 * v3 + (0x100000000 * v1 >> 32) + v10);
                    *v11 = v9;
                    v17 = v8;
                    if (nk > 0) {
                        // 0x407
                        v6 = 0;
                        v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                        v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                        v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                        *v11 = __asm_movsd_1(v14);
                        v6++;
                        v17 = v14;
                        while (v6 != (int64_t)nk) {
                            // 0x407
                            v12 = __asm_movsd(*(int64_t *)(v15 + 8 * v6));
                            v13 = __asm_movsd(*(int64_t *)(v10 + (int64_t)B + 0x1c20 * v6));
                            v14 = __asm_addsd(__asm_mulsd(v12, v13), __asm_movsd(*v11));
                            *v11 = __asm_movsd_1(v14);
                            v6++;
                            v17 = v14;
                        }
                    }
                    // 0x478
                    v18 = v17;
                    v7++;
                    v5 = v18;
                }
            }
            // 0x48b
            v19 = v3 + 1;
            v2 = v5;
        }
    }
    int128_t v21 = v2; // 0x4a6
    if (nj > 0) {
        int64_t v22 = 0;
        int128_t v23 = v2; // 0x4b9
        int64_t v24; // 0x380
        int64_t v25; // 0x380
        int64_t v26; // 0x380
        int128_t v27; // 0x4d5
        int64_t v28; // 0x4d8
        int64_t v29; // 0x4d8
        int64_t * v30; // 0x4d8
        int128_t v31; // 0x506
        int128_t v32; // 0x521
        int128_t v33; // 0x545
        int128_t v34; // 0x380
        int128_t v35; // 0x380
        int128_t v36; // 0x380
        if (nl > 0) {
            // 0x4bf
            v26 = 0x2580 * v22 + (int64_t)C;
            v25 = 0;
            v34 = v2;
            v27 = __asm_xorps(v34, v34);
            v28 = __asm_movsd_1(v27);
            v29 = 8 * v25;
            v30 = (int64_t *)(0x2260 * v22 + (int64_t)F + v29);
            *v30 = v28;
            v35 = v27;
            if (nm > 0) {
                // 0x4f0
                v24 = 0;
                v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                *v30 = __asm_movsd_1(v33);
                v24++;
                v35 = v33;
                while (v24 != (int64_t)nm) {
                    // 0x4f0
                    v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                    v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                    v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                    *v30 = __asm_movsd_1(v33);
                    v24++;
                    v35 = v33;
                }
            }
            // 0x561
            v36 = v35;
            v25++;
            v23 = v36;
            while (v25 != (int64_t)nl) {
                // 0x4bf
                v34 = v36;
                v27 = __asm_xorps(v34, v34);
                v28 = __asm_movsd_1(v27);
                v29 = 8 * v25;
                v30 = (int64_t *)(0x2260 * v22 + (int64_t)F + v29);
                *v30 = v28;
                v35 = v27;
                if (nm > 0) {
                    // 0x4f0
                    v24 = 0;
                    v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                    v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                    v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                    *v30 = __asm_movsd_1(v33);
                    v24++;
                    v35 = v33;
                    while (v24 != (int64_t)nm) {
                        // 0x4f0
                        v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                        v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                        v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                        *v30 = __asm_movsd_1(v33);
                        v24++;
                        v35 = v33;
                    }
                }
                // 0x561
                v36 = v35;
                v25++;
                v23 = v36;
            }
        }
        int128_t v37 = v23;
        int64_t v38 = v22 + 1;
        v21 = v37;
        while (v38 != (int64_t)nj) {
            int128_t v39 = v37;
            v22 = v38;
            v23 = v39;
            if (nl > 0) {
                // 0x4bf
                v26 = 0x2580 * v22 + (int64_t)C;
                v25 = 0;
                v34 = v39;
                v27 = __asm_xorps(v34, v34);
                v28 = __asm_movsd_1(v27);
                v29 = 8 * v25;
                v30 = (int64_t *)(0x2260 * v22 + (int64_t)F + v29);
                *v30 = v28;
                v35 = v27;
                if (nm > 0) {
                    // 0x4f0
                    v24 = 0;
                    v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                    v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                    v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                    *v30 = __asm_movsd_1(v33);
                    v24++;
                    v35 = v33;
                    while (v24 != (int64_t)nm) {
                        // 0x4f0
                        v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                        v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                        v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                        *v30 = __asm_movsd_1(v33);
                        v24++;
                        v35 = v33;
                    }
                }
                // 0x561
                v36 = v35;
                v25++;
                v23 = v36;
                while (v25 != (int64_t)nl) {
                    // 0x4bf
                    v34 = v36;
                    v27 = __asm_xorps(v34, v34);
                    v28 = __asm_movsd_1(v27);
                    v29 = 8 * v25;
                    v30 = (int64_t *)(0x2260 * v22 + (int64_t)F + v29);
                    *v30 = v28;
                    v35 = v27;
                    if (nm > 0) {
                        // 0x4f0
                        v24 = 0;
                        v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                        v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                        v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                        *v30 = __asm_movsd_1(v33);
                        v24++;
                        v35 = v33;
                        while (v24 != (int64_t)nm) {
                            // 0x4f0
                            v31 = __asm_movsd(*(int64_t *)(v26 + 8 * v24));
                            v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)D + 0x2260 * v24));
                            v33 = __asm_addsd(__asm_mulsd(v31, v32), __asm_movsd(*v30));
                            *v30 = __asm_movsd_1(v33);
                            v24++;
                            v35 = v33;
                        }
                    }
                    // 0x561
                    v36 = v35;
                    v25++;
                    v23 = v36;
                }
            }
            // 0x574
            v37 = v23;
            v38 = v22 + 1;
            v21 = v37;
        }
    }
    if (ni <= 0) {
        // 0x66b
        return;
    }
    int64_t v40 = 0;
    int128_t v41 = v21; // 0x5a2
    int64_t v42; // 0x380
    int64_t v43; // 0x380
    int64_t v44; // 0x380
    int128_t v45; // 0x5be
    int64_t v46; // 0x5c1
    int64_t v47; // 0x5c1
    int64_t * v48; // 0x5c1
    int128_t v49; // 0x5ef
    int128_t v50; // 0x60a
    int128_t v51; // 0x62e
    int128_t v52; // 0x380
    int128_t v53; // 0x380
    int128_t v54; // 0x380
    if (nl > 0) {
        // 0x5a8
        v44 = 0x1c20 * v40 + (0x100000000 * v1 >> 32);
        v43 = 0;
        v52 = v21;
        v45 = __asm_xorps(v52, v52);
        v46 = __asm_movsd_1(v45);
        v47 = 8 * v43;
        v48 = (int64_t *)(0x2260 * v40 + (int64_t)G + v47);
        *v48 = v46;
        v53 = v45;
        if (nj > 0) {
            // 0x5d9
            v42 = 0;
            v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
            v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
            v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
            *v48 = __asm_movsd_1(v51);
            v42++;
            v53 = v51;
            while (v42 != (int64_t)nj) {
                // 0x5d9
                v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
                v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
                v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
                *v48 = __asm_movsd_1(v51);
                v42++;
                v53 = v51;
            }
        }
        // 0x64a
        v54 = v53;
        v43++;
        v41 = v54;
        while (v43 != (int64_t)nl) {
            // 0x5a8
            v52 = v54;
            v45 = __asm_xorps(v52, v52);
            v46 = __asm_movsd_1(v45);
            v47 = 8 * v43;
            v48 = (int64_t *)(0x2260 * v40 + (int64_t)G + v47);
            *v48 = v46;
            v53 = v45;
            if (nj > 0) {
                // 0x5d9
                v42 = 0;
                v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
                v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
                v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
                *v48 = __asm_movsd_1(v51);
                v42++;
                v53 = v51;
                while (v42 != (int64_t)nj) {
                    // 0x5d9
                    v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
                    v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
                    v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
                    *v48 = __asm_movsd_1(v51);
                    v42++;
                    v53 = v51;
                }
            }
            // 0x64a
            v54 = v53;
            v43++;
            v41 = v54;
        }
    }
    int64_t v55 = v40 + 1;
    while (v55 != (int64_t)ni) {
        int128_t v56 = v41;
        v40 = v55;
        v41 = v56;
        if (nl > 0) {
            // 0x5a8
            v44 = 0x1c20 * v40 + (0x100000000 * v1 >> 32);
            v43 = 0;
            v52 = v56;
            v45 = __asm_xorps(v52, v52);
            v46 = __asm_movsd_1(v45);
            v47 = 8 * v43;
            v48 = (int64_t *)(0x2260 * v40 + (int64_t)G + v47);
            *v48 = v46;
            v53 = v45;
            if (nj > 0) {
                // 0x5d9
                v42 = 0;
                v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
                v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
                v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
                *v48 = __asm_movsd_1(v51);
                v42++;
                v53 = v51;
                while (v42 != (int64_t)nj) {
                    // 0x5d9
                    v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
                    v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
                    v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
                    *v48 = __asm_movsd_1(v51);
                    v42++;
                    v53 = v51;
                }
            }
            // 0x64a
            v54 = v53;
            v43++;
            v41 = v54;
            while (v43 != (int64_t)nl) {
                // 0x5a8
                v52 = v54;
                v45 = __asm_xorps(v52, v52);
                v46 = __asm_movsd_1(v45);
                v47 = 8 * v43;
                v48 = (int64_t *)(0x2260 * v40 + (int64_t)G + v47);
                *v48 = v46;
                v53 = v45;
                if (nj > 0) {
                    // 0x5d9
                    v42 = 0;
                    v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
                    v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
                    v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
                    *v48 = __asm_movsd_1(v51);
                    v42++;
                    v53 = v51;
                    while (v42 != (int64_t)nj) {
                        // 0x5d9
                        v49 = __asm_movsd(*(int64_t *)(v44 + 8 * v42));
                        v50 = __asm_movsd(*(int64_t *)(v47 + (int64_t)F + 0x2260 * v42));
                        v51 = __asm_addsd(__asm_mulsd(v49, v50), __asm_movsd(*v48));
                        *v48 = __asm_movsd_1(v51);
                        v42++;
                        v53 = v51;
                    }
                }
                // 0x64a
                v54 = v53;
                v43++;
                v41 = v54;
            }
        }
        // 0x65d
        v55 = v40 + 1;
    }
}

// Address range: 0x670 - 0x834
// Line range:    113 - 168
int32_t submain(uint32_t argc, char ** argv) {
    int64_t v1 = polybench_alloc_data(0xafc80, 8); // 0x6b4
    int64_t v2 = polybench_alloc_data(0xc3500, 8); // 0x6c7
    int64_t v3 = polybench_alloc_data(0xdbba0, 8); // 0x6da
    int64_t v4 = polybench_alloc_data(0xf1b30, 8); // 0x6ed
    int64_t v5 = polybench_alloc_data(0x107ac0, 8); // 0x700
    int64_t v6 = polybench_alloc_data(0x142440, 8); // 0x713
    int64_t v7 = polybench_alloc_data(0xd6d80, 8); // 0x726
    kernel_3mm(800, 900, 1000, 1100, 1200, &((float64_t (*)[1][1])v1)[0], &((float64_t (*)[1][1])v2)[0], &((float64_t (*)[1][1])v3)[0], &((float64_t (*)[1][1])v4)[0], &((float64_t (*)[1][1])v5)[0], &((float64_t (*)[1][1])v6)[0], &((float64_t (*)[1][1])v7)[0]);
    if (argc >= 43) {
        // 0x7ba
        if ((int32_t)strcmp(900, 2190) == 0) {
            // 0x7d6
            print_array(800, 1100, &((float64_t (*)[1][1])v7)[0]);
        }
    }
    // 0x7e5
    free(&((float64_t (*)[1][1])v1)[0]);
    free(&((float64_t (*)[1][1])v2)[0]);
    free(&((float64_t (*)[1][1])v3)[0]);
    free(&((float64_t (*)[1][1])v4)[0]);
    free(&((float64_t (*)[1][1])v5)[0]);
    free(&((float64_t (*)[1][1])v6)[0]);
    free(&((float64_t (*)[1][1])v7)[0]);
    return 0;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (17.0.0)
// Detected functions: 4

