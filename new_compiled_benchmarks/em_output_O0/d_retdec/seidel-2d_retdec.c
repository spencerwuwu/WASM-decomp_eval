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
int64_t free(int64_t a1);
void init_array(uint32_t n, float64_t (*A)[1]);
int64_t kernel_seidel_2d(int64_t a1, int64_t a2, int64_t a3);
int64_t polybench_alloc_data(int64_t a1, int64_t a2);
void print_array(uint32_t n, float64_t (*A)[1]);
int64_t strcmp(int64_t a1, int64_t * a2, int64_t a3);
int32_t submain(int32_t argc, char ** argv);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x4e494745423d3d00; // 0x460
int64_t g2 = 0x322e3025000a0041; // 0x487

// ------------------------ Functions -------------------------

// Address range: 0x0 - 0x1e2
int64_t kernel_seidel_2d(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a2 + 0xfffffffe & 0xffffffff; // 0x33
    int32_t v2 = 0; // 0x1d5
    int64_t v3 = 1; // 0x38
    int64_t v4; // 0x0
    int32_t v5; // 0x0
    int128_t v6; // 0x76
    int64_t v7; // 0x96
    int128_t v8; // 0x96
    int32_t v9; // 0xb5
    int64_t v10; // 0xbb
    int128_t v11; // 0xbb
    int128_t v12; // 0xdb
    int64_t * v13; // 0xf6
    int128_t v14; // 0x116
    int128_t v15; // 0x13b
    int128_t v16; // 0x15b
    int128_t v17; // 0x180
    int32_t v18; // 0x1c2
    int64_t v19; // 0x5d
    int64_t v20; // 0x6a
    int64_t v21; // 0x0
    int64_t v22; // 0x0
    int64_t v23; // 0x76
    if (v1 != 0) {
        v19 = 0x100000000 * v3;
        v20 = 0x3e80 * (v19 - 0x100000000 >> 32) + a3;
        v21 = 0x3e80 * v3 + a3;
        v22 = 0x3e80 * (v19 + 0x100000000 >> 32) + a3;
        v9 = 1;
        v23 = 8 * (int64_t)(v9 - 1);
        v6 = __asm_movsd(*(int64_t *)(v23 + v20));
        v7 = 8 * (int64_t)v9;
        v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
        v9++;
        v10 = 8 * (int64_t)v9;
        v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
        v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
        v13 = (int64_t *)(v7 + v21);
        v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
        v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
        v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
        v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
        *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
        while (v1 >= (int64_t)v9) {
            // 0x56
            v23 = 8 * (int64_t)(v9 - 1);
            v6 = __asm_movsd(*(int64_t *)(v23 + v20));
            v7 = 8 * (int64_t)v9;
            v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
            v9++;
            v10 = 8 * (int64_t)v9;
            v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
            v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
            v13 = (int64_t *)(v7 + v21);
            v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
            v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
            v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
            v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
            *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
        }
        // 0x1bf
        v18 = 2;
        v4 = v18;
        v3 = v4;
        v5 = v18;
        while ((v4 & 0xffffffff) <= v1) {
            // 0x56
            v19 = 0x100000000 * v3;
            v20 = 0x3e80 * (v19 - 0x100000000 >> 32) + a3;
            v21 = 0x3e80 * v3 + a3;
            v22 = 0x3e80 * (v19 + 0x100000000 >> 32) + a3;
            v9 = 1;
            v23 = 8 * (int64_t)(v9 - 1);
            v6 = __asm_movsd(*(int64_t *)(v23 + v20));
            v7 = 8 * (int64_t)v9;
            v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
            v9++;
            v10 = 8 * (int64_t)v9;
            v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
            v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
            v13 = (int64_t *)(v7 + v21);
            v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
            v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
            v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
            v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
            *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
            while (v1 >= (int64_t)v9) {
                // 0x56
                v23 = 8 * (int64_t)(v9 - 1);
                v6 = __asm_movsd(*(int64_t *)(v23 + v20));
                v7 = 8 * (int64_t)v9;
                v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
                v9++;
                v10 = 8 * (int64_t)v9;
                v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
                v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
                v13 = (int64_t *)(v7 + v21);
                v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
                v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
                v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
                v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
                *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
            }
            // 0x1bf
            v18 = v5 + 1;
            v4 = v18;
            v3 = v4;
            v5 = v18;
        }
    }
    // 0x1d2
    v2++;
    uint64_t result = (int64_t)v2; // 0x15
    while ((uint64_t)(a1 + 0xffffffff & 0xffffffff) >= result) {
        // 0x2d
        v3 = 1;
        if (v1 != 0) {
            v19 = 0x100000000 * v3;
            v20 = 0x3e80 * (v19 - 0x100000000 >> 32) + a3;
            v21 = 0x3e80 * v3 + a3;
            v22 = 0x3e80 * (v19 + 0x100000000 >> 32) + a3;
            v9 = 1;
            v23 = 8 * (int64_t)(v9 - 1);
            v6 = __asm_movsd(*(int64_t *)(v23 + v20));
            v7 = 8 * (int64_t)v9;
            v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
            v9++;
            v10 = 8 * (int64_t)v9;
            v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
            v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
            v13 = (int64_t *)(v7 + v21);
            v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
            v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
            v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
            v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
            *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
            while (v1 >= (int64_t)v9) {
                // 0x56
                v23 = 8 * (int64_t)(v9 - 1);
                v6 = __asm_movsd(*(int64_t *)(v23 + v20));
                v7 = 8 * (int64_t)v9;
                v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
                v9++;
                v10 = 8 * (int64_t)v9;
                v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
                v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
                v13 = (int64_t *)(v7 + v21);
                v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
                v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
                v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
                v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
                *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
            }
            // 0x1bf
            v18 = 2;
            v4 = v18;
            v3 = v4;
            v5 = v18;
            while ((v4 & 0xffffffff) <= v1) {
                // 0x56
                v19 = 0x100000000 * v3;
                v20 = 0x3e80 * (v19 - 0x100000000 >> 32) + a3;
                v21 = 0x3e80 * v3 + a3;
                v22 = 0x3e80 * (v19 + 0x100000000 >> 32) + a3;
                v9 = 1;
                v23 = 8 * (int64_t)(v9 - 1);
                v6 = __asm_movsd(*(int64_t *)(v23 + v20));
                v7 = 8 * (int64_t)v9;
                v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
                v9++;
                v10 = 8 * (int64_t)v9;
                v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
                v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
                v13 = (int64_t *)(v7 + v21);
                v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
                v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
                v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
                v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
                *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
                while (v1 >= (int64_t)v9) {
                    // 0x56
                    v23 = 8 * (int64_t)(v9 - 1);
                    v6 = __asm_movsd(*(int64_t *)(v23 + v20));
                    v7 = 8 * (int64_t)v9;
                    v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
                    v9++;
                    v10 = 8 * (int64_t)v9;
                    v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
                    v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
                    v13 = (int64_t *)(v7 + v21);
                    v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
                    v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
                    v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
                    v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
                    *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
                }
                // 0x1bf
                v18 = v5 + 1;
                v4 = v18;
                v3 = v4;
                v5 = v18;
            }
        }
        // 0x1d2
        v2++;
        result = (int64_t)v2;
    }
    // 0x1e0
    return result;
}

// Address range: 0x1f0 - 0x27e
// Line range:    78 - 108
int32_t submain(int32_t argc, char ** argv) {
    int64_t v1 = polybench_alloc_data(0x3d0900, 8); // 0x217
    float64_t (*v2)[1] = (float64_t (*)[1])v1; // 0x21c
    init_array(2000, v2);
    if (argc < 43) {
        // 0x26d
        free(v1);
        return 0;
    }
    // 0x245
    if ((int32_t)strcmp(2000, &g1, v1) == 0) {
        // 0x261
        print_array(2000, v2);
    }
    // 0x26d
    free(v1);
    return 0;
}

// Address range: 0x280 - 0x317
// Line range:    26 - 34
void init_array(uint32_t n, float64_t (*A)[1]) {
    if (n <= 0) {
        // 0x315
        return;
    }
    int64_t v1 = n;
    int64_t v2 = 0;
    int64_t v3 = 0x3e80 * v2 + (int64_t)(0x100000000 * (int64_t)A >> 32);
    int64_t v4 = 0;
    int128_t v5 = __asm_cvtsi2sd((int32_t)v2); // 0x2b1
    int128_t v6 = __asm_mulsd(v5, __asm_cvtsi2sd((int32_t)v4 + 2)); // 0x2c0
    int128_t v7 = __asm_addsd(v6, __asm_movsd(0x4000000000000000)); // 0x2cc
    *(int64_t *)(v3 + 8 * v4) = __asm_movsd_1(__asm_divsd(v7, __asm_cvtsi2sd(n)));
    v4++;
    while (v4 != v1) {
        // 0x2b1
        v5 = __asm_cvtsi2sd((int32_t)v2);
        v6 = __asm_mulsd(v5, __asm_cvtsi2sd((int32_t)v4 + 2));
        v7 = __asm_addsd(v6, __asm_movsd(0x4000000000000000));
        *(int64_t *)(v3 + 8 * v4) = __asm_movsd_1(__asm_divsd(v7, __asm_cvtsi2sd(n)));
        v4++;
    }
    // 0x307
    v2++;
    while (v2 != v1) {
        // 0x2b1
        v3 = 0x3e80 * v2 + (int64_t)(0x100000000 * (int64_t)A >> 32);
        v4 = 0;
        v5 = __asm_cvtsi2sd((int32_t)v2);
        v6 = __asm_mulsd(v5, __asm_cvtsi2sd((int32_t)v4 + 2));
        v7 = __asm_addsd(v6, __asm_movsd(0x4000000000000000));
        *(int64_t *)(v3 + 8 * v4) = __asm_movsd_1(__asm_divsd(v7, __asm_cvtsi2sd(n)));
        v4++;
        while (v4 != v1) {
            // 0x2b1
            v5 = __asm_cvtsi2sd((int32_t)v2);
            v6 = __asm_mulsd(v5, __asm_cvtsi2sd((int32_t)v4 + 2));
            v7 = __asm_addsd(v6, __asm_movsd(0x4000000000000000));
            *(int64_t *)(v3 + 8 * v4) = __asm_movsd_1(__asm_divsd(v7, __asm_cvtsi2sd(n)));
            v4++;
        }
        // 0x307
        v2++;
    }
}

// Address range: 0x320 - 0x450
// Line range:    40 - 55
void print_array(uint32_t n, float64_t (*A)[1]) {
    // 0x320
    int64_t v1; // 0x320
    int128_t v2; // 0x320
    fprintf(*(int64_t *)*(int64_t *)822, "==BEGIN DUMP_ARRAYS==\n", v1, v1, v2);
    int64_t stream = *(int64_t *)*(int64_t *)846; // 0x34e
    fprintf(stream, "begin dump: %s", (int64_t)&g2, v1, v2);
    int64_t v3; // 0x320
    int128_t v4; // 0x320
    if (n > 0) {
        int64_t v5 = n;
        int64_t v6 = 0;
        int64_t v7 = 0x3e80 * v6 + (0x100000000 * (int64_t)A >> 32);
        int64_t v8 = 0;
        int32_t v9 = (int32_t)v6 * n + (int32_t)v8; // 0x393
        int64_t v10 = (0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9) % 20; // 0x39c
        int64_t v11 = v10 & 0xffffffff; // 0x39c
        if ((int32_t)v10 == 0) {
            // 0x3a7
            int128_t v12; // 0x320
            fprintf(*(int64_t *)*(int64_t *)942, "\n", v11, 20, v12);
        }
        int128_t v13 = __asm_movsd(*(int64_t *)(v7 + 8 * v8)); // 0x3df
        fprintf(*(int64_t *)*(int64_t *)966, "%0.2lf ", v11, v8, v13);
        int64_t v14 = v8 + 1;
        int128_t v15 = v13; // 0x386
        while (v14 != v5) {
            // 0x38c
            v8 = v14;
            v9 = (int32_t)v6 * n + (int32_t)v8;
            v10 = (0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9) % 20;
            v11 = v10 & 0xffffffff;
            if ((int32_t)v10 == 0) {
                // 0x3a7
                fprintf(*(int64_t *)*(int64_t *)942, "\n", v11, 20, v15);
            }
            // 0x3bf
            v13 = __asm_movsd(*(int64_t *)(v7 + 8 * v8));
            fprintf(*(int64_t *)*(int64_t *)966, "%0.2lf ", v11, v8, v13);
            v14 = v8 + 1;
            v15 = v13;
        }
        // 0x405
        v6++;
        v4 = v13;
        v3 = v8;
        while (v6 != v5) {
            // 0x38c
            v7 = 0x3e80 * v6 + (0x100000000 * (int64_t)A >> 32);
            v15 = v13;
            v8 = 0;
            v9 = (int32_t)v6 * n + (int32_t)v8;
            v10 = (0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9) % 20;
            v11 = v10 & 0xffffffff;
            if ((int32_t)v10 == 0) {
                // 0x3a7
                fprintf(*(int64_t *)*(int64_t *)942, "\n", v11, 20, v15);
            }
            // 0x3bf
            v13 = __asm_movsd(*(int64_t *)(v7 + 8 * v8));
            fprintf(*(int64_t *)*(int64_t *)966, "%0.2lf ", v11, v8, v13);
            v14 = v8 + 1;
            v15 = v13;
            while (v14 != v5) {
                // 0x38c
                v8 = v14;
                v9 = (int32_t)v6 * n + (int32_t)v8;
                v10 = (0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9) % 20;
                v11 = v10 & 0xffffffff;
                if ((int32_t)v10 == 0) {
                    // 0x3a7
                    fprintf(*(int64_t *)*(int64_t *)942, "\n", v11, 20, v15);
                }
                // 0x3bf
                v13 = __asm_movsd(*(int64_t *)(v7 + 8 * v8));
                fprintf(*(int64_t *)*(int64_t *)966, "%0.2lf ", v11, v8, v13);
                v14 = v8 + 1;
                v15 = v13;
            }
            // 0x405
            v6++;
            v4 = v13;
            v3 = v8;
        }
    }
    int64_t stream2 = *(int64_t *)*(int64_t *)1050; // 0x41a
    fprintf(stream2, "\nend   dump: %s\n", (int64_t)&g2, v3, v4);
    int64_t stream3 = *(int64_t *)*(int64_t *)1081; // 0x439
    fprintf(stream3, "==END   DUMP_ARRAYS==\n", (int64_t)&g2, v3, v4);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (17.0.0)
// Detected functions: 4

