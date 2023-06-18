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
void init_array(int32_t m, int32_t n, float64_t * float_n, float64_t (*data)[1]);
int64_t kernel_covariance(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t polybench_alloc_data(int64_t a1, int64_t a2);
void print_array(uint32_t m, float64_t (*cov)[1]);
int64_t strcmp(int64_t a1, int64_t * a2, float64_t (*a3)[1], float64_t (*a4)[1], float64_t * a5, int128_t a6);
int32_t submain(int32_t argc, char ** argv);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x4e494745423d3d00; // 0x540
int32_t g2 = 0x20202064; // 0x578

// ------------------------ Functions -------------------------

// Address range: 0x0 - 0x27d
int64_t kernel_covariance(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x7
    int128_t v2; // 0x0
    int64_t v3 = __asm_movsd_1(v2); // 0xa
    int32_t v4 = v1;
    int128_t v5; // 0x0
    if ((int32_t)a1 > 0) {
        int64_t v6 = 0;
        int128_t v7; // 0x0
        int128_t v8 = v7;
        int64_t v9 = __asm_movsd_1(__asm_xorps(v8, v8)); // 0x39
        int64_t v10 = 8 * v6; // 0x39
        int64_t * v11 = (int64_t *)(v10 + a5); // 0x39
        *v11 = v9;
        int64_t v12; // 0x0
        int128_t v13; // 0x67
        if (v4 > 0) {
            // 0x51
            v12 = 0;
            v13 = __asm_movsd(*(int64_t *)(v10 + a3 + 0x2580 * v12));
            *v11 = __asm_movsd_1(__asm_addsd(v13, *v11));
            v12++;
            while (v12 != (v1 & 0xffffffff)) {
                // 0x51
                v13 = __asm_movsd(*(int64_t *)(v10 + a3 + 0x2580 * v12));
                *v11 = __asm_movsd_1(__asm_addsd(v13, *v11));
                v12++;
            }
        }
        int128_t v14 = __asm_divsd(__asm_movsd(*v11), __asm_movsd(v3)); // 0x9e
        *v11 = __asm_movsd_1(v14);
        v6++;
        v5 = v14;
        while (v6 != (a1 & 0xffffffff)) {
            // 0x2e
            v8 = v14;
            v9 = __asm_movsd_1(__asm_xorps(v8, v8));
            v10 = 8 * v6;
            v11 = (int64_t *)(v10 + a5);
            *v11 = v9;
            if (v4 > 0) {
                // 0x51
                v12 = 0;
                v13 = __asm_movsd(*(int64_t *)(v10 + a3 + 0x2580 * v12));
                *v11 = __asm_movsd_1(__asm_addsd(v13, *v11));
                v12++;
                while (v12 != (v1 & 0xffffffff)) {
                    // 0x51
                    v13 = __asm_movsd(*(int64_t *)(v10 + a3 + 0x2580 * v12));
                    *v11 = __asm_movsd_1(__asm_addsd(v13, *v11));
                    v12++;
                }
            }
            // 0x8c
            v14 = __asm_divsd(__asm_movsd(*v11), __asm_movsd(v3));
            *v11 = __asm_movsd_1(v14);
            v6++;
            v5 = v14;
        }
    }
    int128_t v15 = v5; // 0xc2
    if (v4 > 0) {
        int64_t v16 = 0;
        int128_t v17 = v5; // 0xd5
        int64_t v18; // 0x0
        int64_t v19; // 0xe3
        int128_t v20; // 0xe3
        int64_t * v21; // 0xfe
        int128_t v22; // 0x103
        if ((int32_t)a1 > 0) {
            // 0xdb
            v18 = 0;
            v19 = 8 * v18;
            v20 = __asm_movsd(*(int64_t *)(v19 + a5));
            v21 = (int64_t *)(0x2580 * v16 + a3 + v19);
            v22 = __asm_subsd(__asm_movsd(*v21), v20);
            *v21 = __asm_movsd_1(v22);
            v18++;
            v17 = v22;
            while (v18 != (a1 & 0xffffffff)) {
                // 0xdb
                v19 = 8 * v18;
                v20 = __asm_movsd(*(int64_t *)(v19 + a5));
                v21 = (int64_t *)(0x2580 * v16 + a3 + v19);
                v22 = __asm_subsd(__asm_movsd(*v21), v20);
                *v21 = __asm_movsd_1(v22);
                v18++;
                v17 = v22;
            }
        }
        int128_t v23 = v17;
        int64_t v24 = v16 + 1;
        v15 = v23;
        while (v24 != (v1 & 0xffffffff)) {
            // 0xcf
            v16 = v24;
            v17 = v23;
            if ((int32_t)a1 > 0) {
                // 0xdb
                v18 = 0;
                v19 = 8 * v18;
                v20 = __asm_movsd(*(int64_t *)(v19 + a5));
                v21 = (int64_t *)(0x2580 * v16 + a3 + v19);
                v22 = __asm_subsd(__asm_movsd(*v21), v20);
                *v21 = __asm_movsd_1(v22);
                v18++;
                v17 = v22;
                while (v18 != (a1 & 0xffffffff)) {
                    // 0xdb
                    v19 = 8 * v18;
                    v20 = __asm_movsd(*(int64_t *)(v19 + a5));
                    v21 = (int64_t *)(0x2580 * v16 + a3 + v19);
                    v22 = __asm_subsd(__asm_movsd(*v21), v20);
                    *v21 = __asm_movsd_1(v22);
                    v18++;
                    v17 = v22;
                }
            }
            // 0x11f
            v23 = v17;
            v24 = v16 + 1;
            v15 = v23;
        }
    }
    // 0x134
    if ((int32_t)a1 <= 0) {
        // 0x27b
        return 0;
    }
    int64_t result = a1 & 0xffffffff;
    int64_t v25 = 0;
    int64_t v26 = 8 * v25;
    int64_t v27 = v25;
    int128_t v28 = v15;
    int64_t v29 = __asm_movsd_1(__asm_xorps(v28, v28)); // 0x16b
    int64_t v30 = 8 * v27; // 0x16b
    int64_t * v31 = (int64_t *)(0x2580 * v25 + a4 + v30); // 0x16b
    *v31 = v29;
    int64_t v32 = 0; // 0x17d
    int64_t v33; // 0x0
    int64_t v34; // 0x192
    int128_t v35; // 0x199
    int128_t v36; // 0x1b4
    if (v4 > 0) {
        v34 = 0x2580 * v32 + a3;
        v35 = __asm_movsd(*(int64_t *)(v34 + v26));
        v36 = __asm_movsd(*(int64_t *)(v34 + v30));
        *v31 = __asm_movsd_1(__asm_addsd_2(__asm_mulsd(v35, v36), __asm_movsd(*v31)));
        v33 = v32 + 1;
        v32 = v33;
        while (v33 != (v1 & 0xffffffff)) {
            // 0x183
            v34 = 0x2580 * v32 + a3;
            v35 = __asm_movsd(*(int64_t *)(v34 + v26));
            v36 = __asm_movsd(*(int64_t *)(v34 + v30));
            *v31 = __asm_movsd_1(__asm_addsd_2(__asm_mulsd(v35, v36), __asm_movsd(*v31)));
            v33 = v32 + 1;
            v32 = v33;
        }
    }
    int128_t v37 = __asm_subsd(__asm_movsd(v3), __asm_movsd(0x3ff0000000000000)); // 0x1fc
    int64_t v38 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v31), v37)); // 0x21f
    *v31 = v38;
    int128_t v39 = __asm_movsd(v38); // 0x23a
    *(int64_t *)(v26 + a4 + 0x2580 * v27) = __asm_movsd_1(v39);
    v27++;
    while (v27 != result) {
        // 0x152
        v28 = v39;
        v29 = __asm_movsd_1(__asm_xorps(v28, v28));
        v30 = 8 * v27;
        v31 = (int64_t *)(0x2580 * v25 + a4 + v30);
        *v31 = v29;
        v32 = 0;
        if (v4 > 0) {
            v34 = 0x2580 * v32 + a3;
            v35 = __asm_movsd(*(int64_t *)(v34 + v26));
            v36 = __asm_movsd(*(int64_t *)(v34 + v30));
            *v31 = __asm_movsd_1(__asm_addsd_2(__asm_mulsd(v35, v36), __asm_movsd(*v31)));
            v33 = v32 + 1;
            v32 = v33;
            while (v33 != (v1 & 0xffffffff)) {
                // 0x183
                v34 = 0x2580 * v32 + a3;
                v35 = __asm_movsd(*(int64_t *)(v34 + v26));
                v36 = __asm_movsd(*(int64_t *)(v34 + v30));
                *v31 = __asm_movsd_1(__asm_addsd_2(__asm_mulsd(v35, v36), __asm_movsd(*v31)));
                v33 = v32 + 1;
                v32 = v33;
            }
        }
        // 0x1ef
        v37 = __asm_subsd(__asm_movsd(v3), __asm_movsd(0x3ff0000000000000));
        v38 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v31), v37));
        *v31 = v38;
        v39 = __asm_movsd(v38);
        *(int64_t *)(v26 + a4 + 0x2580 * v27) = __asm_movsd_1(v39);
        v27++;
    }
    // 0x26d
    v25++;
    while (v25 != result) {
        // 0x152
        v26 = 8 * v25;
        v27 = v25;
        v28 = v39;
        v29 = __asm_movsd_1(__asm_xorps(v28, v28));
        v30 = 8 * v27;
        v31 = (int64_t *)(0x2580 * v25 + a4 + v30);
        *v31 = v29;
        v32 = 0;
        if (v4 > 0) {
            v34 = 0x2580 * v32 + a3;
            v35 = __asm_movsd(*(int64_t *)(v34 + v26));
            v36 = __asm_movsd(*(int64_t *)(v34 + v30));
            *v31 = __asm_movsd_1(__asm_addsd_2(__asm_mulsd(v35, v36), __asm_movsd(*v31)));
            v33 = v32 + 1;
            v32 = v33;
            while (v33 != (v1 & 0xffffffff)) {
                // 0x183
                v34 = 0x2580 * v32 + a3;
                v35 = __asm_movsd(*(int64_t *)(v34 + v26));
                v36 = __asm_movsd(*(int64_t *)(v34 + v30));
                *v31 = __asm_movsd_1(__asm_addsd_2(__asm_mulsd(v35, v36), __asm_movsd(*v31)));
                v33 = v32 + 1;
                v32 = v33;
            }
        }
        // 0x1ef
        v37 = __asm_subsd(__asm_movsd(v3), __asm_movsd(0x3ff0000000000000));
        v38 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v31), v37));
        *v31 = v38;
        v39 = __asm_movsd(v38);
        *(int64_t *)(v26 + a4 + 0x2580 * v27) = __asm_movsd_1(v39);
        v27++;
        while (v27 != result) {
            // 0x152
            v28 = v39;
            v29 = __asm_movsd_1(__asm_xorps(v28, v28));
            v30 = 8 * v27;
            v31 = (int64_t *)(0x2580 * v25 + a4 + v30);
            *v31 = v29;
            v32 = 0;
            if (v4 > 0) {
                v34 = 0x2580 * v32 + a3;
                v35 = __asm_movsd(*(int64_t *)(v34 + v26));
                v36 = __asm_movsd(*(int64_t *)(v34 + v30));
                *v31 = __asm_movsd_1(__asm_addsd_2(__asm_mulsd(v35, v36), __asm_movsd(*v31)));
                v33 = v32 + 1;
                v32 = v33;
                while (v33 != (v1 & 0xffffffff)) {
                    // 0x183
                    v34 = 0x2580 * v32 + a3;
                    v35 = __asm_movsd(*(int64_t *)(v34 + v26));
                    v36 = __asm_movsd(*(int64_t *)(v34 + v30));
                    *v31 = __asm_movsd_1(__asm_addsd_2(__asm_mulsd(v35, v36), __asm_movsd(*v31)));
                    v33 = v32 + 1;
                    v32 = v33;
                }
            }
            // 0x1ef
            v37 = __asm_subsd(__asm_movsd(v3), __asm_movsd(0x3ff0000000000000));
            v38 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v31), v37));
            *v31 = v38;
            v39 = __asm_movsd(v38);
            *(int64_t *)(v26 + a4 + 0x2580 * v27) = __asm_movsd_1(v39);
            v27++;
        }
        // 0x26d
        v25++;
    }
    // 0x27b
    return result;
}

// Address range: 0x280 - 0x35a
// Line range:    99 - 137
int32_t submain(int32_t argc, char ** argv) {
    int64_t v1 = polybench_alloc_data(0x19a280, 8); // 0x2a7
    int64_t v2 = polybench_alloc_data(0x15f900, 8); // 0x2ba
    float64_t (*v3)[1][1] = (float64_t (*)[1][1])v2; // 0x2bf
    int64_t v4 = polybench_alloc_data(1200, 8); // 0x2cd
    float64_t float_n; // bp-40, 0x280
    init_array(1200, (int32_t)&g2, &float_n, &((float64_t (*)[1][1])v1)[0]);
    int128_t v5 = __asm_movsd((int64_t)float_n); // 0x2ef
    if (argc < 43) {
        // 0x337
        free(&((float64_t (*)[1][1])v1)[0]);
        free(v3);
        free((float64_t (*)[1])v4);
        return 0;
    }
    int64_t strcmp_rc = strcmp((int64_t)(int32_t)&g2, &g1, (float64_t (*)[1])v1, (float64_t (*)[1])v2, (float64_t *)v4, v5); // 0x31d
    if ((int32_t)strcmp_rc == 0) {
        // 0x32b
        print_array(1200, v3);
    }
    // 0x337
    free(&((float64_t (*)[1][1])v1)[0]);
    free(v3);
    free((float64_t (*)[1])v4);
    return 0;
}

// Address range: 0x360 - 0x3ff
// Line range:    26 - 37
void init_array(int32_t m, int32_t n, float64_t * float_n, float64_t (*data)[1]) {
    // 0x360
    *float_n = (float64_t)__asm_movsd_1(__asm_cvtsi2sd(n));
    for (int64_t i = 0; i < (int64_t)(int32_t)&g2; i++) {
        int64_t v1 = 0x2580 * i + (0x100000000 * (int64_t)data >> 32);
        for (int64_t j = 0; j < 1200; j++) {
            int128_t v2 = __asm_cvtsi2sd((int32_t)i); // 0x3a7
            int128_t v3 = __asm_mulsd(v2, __asm_cvtsi2sd((int32_t)j)); // 0x3b1
            int128_t v4 = __asm_movsd(0x4092c00000000000); // 0x3b5
            *(int64_t *)(v1 + 8 * j) = __asm_movsd_1(__asm_divsd(v3, v4));
        }
    }
}

// Address range: 0x400 - 0x530
// Line range:    43 - 58
void print_array(uint32_t m, float64_t (*cov)[1]) {
    // 0x400
    int64_t v1; // 0x400
    int128_t v2; // 0x400
    fprintf(*(int64_t *)*(int64_t *)1046, "==BEGIN DUMP_ARRAYS==\n", v1, v1, v2);
    int64_t stream = *(int64_t *)*(int64_t *)1070; // 0x42e
    fprintf(stream, "begin dump: %s", (int64_t)"cov", v1, v2);
    int64_t v3; // 0x400
    int128_t v4; // 0x400
    if (m > 0) {
        int64_t v5 = m;
        int64_t v6 = 0;
        int64_t v7 = 0x2580 * v6 + (0x100000000 * (int64_t)cov >> 32);
        int64_t v8 = 0;
        int32_t v9 = (int32_t)v6 * m + (int32_t)v8; // 0x473
        int64_t v10 = (0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9) % 20; // 0x47c
        int64_t v11 = v10 & 0xffffffff; // 0x47c
        if ((int32_t)v10 == 0) {
            // 0x487
            int128_t v12; // 0x400
            fprintf(*(int64_t *)*(int64_t *)1166, "\n", v11, 20, v12);
        }
        int128_t v13 = __asm_movsd(*(int64_t *)(v7 + 8 * v8)); // 0x4bf
        fprintf(*(int64_t *)*(int64_t *)1190, "%0.2lf ", v11, v8, v13);
        int64_t v14 = v8 + 1;
        int128_t v15 = v13; // 0x466
        while (v14 != v5) {
            // 0x46c
            v8 = v14;
            v9 = (int32_t)v6 * m + (int32_t)v8;
            v10 = (0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9) % 20;
            v11 = v10 & 0xffffffff;
            if ((int32_t)v10 == 0) {
                // 0x487
                fprintf(*(int64_t *)*(int64_t *)1166, "\n", v11, 20, v15);
            }
            // 0x49f
            v13 = __asm_movsd(*(int64_t *)(v7 + 8 * v8));
            fprintf(*(int64_t *)*(int64_t *)1190, "%0.2lf ", v11, v8, v13);
            v14 = v8 + 1;
            v15 = v13;
        }
        // 0x4e5
        v6++;
        v4 = v13;
        v3 = v8;
        while (v6 != v5) {
            // 0x46c
            v7 = 0x2580 * v6 + (0x100000000 * (int64_t)cov >> 32);
            v15 = v13;
            v8 = 0;
            v9 = (int32_t)v6 * m + (int32_t)v8;
            v10 = (0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9) % 20;
            v11 = v10 & 0xffffffff;
            if ((int32_t)v10 == 0) {
                // 0x487
                fprintf(*(int64_t *)*(int64_t *)1166, "\n", v11, 20, v15);
            }
            // 0x49f
            v13 = __asm_movsd(*(int64_t *)(v7 + 8 * v8));
            fprintf(*(int64_t *)*(int64_t *)1190, "%0.2lf ", v11, v8, v13);
            v14 = v8 + 1;
            v15 = v13;
            while (v14 != v5) {
                // 0x46c
                v8 = v14;
                v9 = (int32_t)v6 * m + (int32_t)v8;
                v10 = (0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9) % 20;
                v11 = v10 & 0xffffffff;
                if ((int32_t)v10 == 0) {
                    // 0x487
                    fprintf(*(int64_t *)*(int64_t *)1166, "\n", v11, 20, v15);
                }
                // 0x49f
                v13 = __asm_movsd(*(int64_t *)(v7 + 8 * v8));
                fprintf(*(int64_t *)*(int64_t *)1190, "%0.2lf ", v11, v8, v13);
                v14 = v8 + 1;
                v15 = v13;
            }
            // 0x4e5
            v6++;
            v4 = v13;
            v3 = v8;
        }
    }
    int64_t stream2 = *(int64_t *)*(int64_t *)1274; // 0x4fa
    fprintf(stream2, "\nend   dump: %s\n", (int64_t)"cov", v3, v4);
    int64_t stream3 = *(int64_t *)*(int64_t *)1305; // 0x519
    fprintf(stream3, "==END   DUMP_ARRAYS==\n", (int64_t)"cov", v3, v4);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (17.0.0)
// Detected functions: 4

