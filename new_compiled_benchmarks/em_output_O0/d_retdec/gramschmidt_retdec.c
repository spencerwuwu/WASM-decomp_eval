//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdbool.h>
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
void init_array(uint32_t m, uint32_t n, float64_t (*A)[1], float64_t (*R)[1], float64_t (*Q)[1]);
int64_t kernel_gramschmidt(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t polybench_alloc_data(int64_t a1, int64_t a2);
void print_array(uint32_t m, uint32_t n, float64_t (*A)[1], float64_t (*R)[1], float64_t (*Q)[1]);
int64_t sqrt(int128_t a1);
int64_t strcmp(int64_t a1, int64_t * a2, float64_t (*a3)[1], float64_t (*a4)[1], int64_t a5);
int32_t submain(int32_t argc, char ** argv);

// --------------------- Global Variables ---------------------

int32_t g1 = 119; // 0x3e8
int64_t g2 = 0x4e494745423d3d00; // 0x718
int64_t g3 = 0x322e3025000a0052; // 0x73f
int64_t g4 = 0x20444e453d3d0051; // 0x75c

// ------------------------ Functions -------------------------

// Address range: 0x0 - 0x2bf
int64_t kernel_gramschmidt(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a2; // 0x24
    if (v1 <= 0) {
        // 0x2b9
        return 0;
    }
    int64_t v2 = a1 & 0xffffffff;
    int64_t result = a2 & 0xffffffff;
    int64_t v3 = 0;
    int64_t v4 = 1; // 0x0
    int64_t v5; // 0x0
    int64_t v6; // 0x0
    int64_t v7; // 0x0
    int64_t * v8; // 0x163
    int64_t v9; // 0x0
    int128_t v10; // 0x0
    int128_t v11; // 0x0
    int128_t v12; // 0x0
    while (true) {
        // 0x2d
        int128_t v13; // 0x0
        int128_t v14 = v13;
        int64_t v15 = v4;
        int64_t v16 = __asm_movsd_1(__asm_xorps(v14, v14)); // 0x30
        int64_t v17 = 8 * v3;
        int64_t v18 = v16; // 0x42
        if ((int32_t)a1 > 0) {
            int64_t v19 = 0;
            int64_t v20 = v16; // 0x8b
            int64_t * v21 = (int64_t *)(v17 + a3 + 0x2580 * v19); // 0x5e
            v20 = __asm_movsd_1(__asm_addsd(__asm_mulsd(__asm_movsd(*v21), __asm_movsd(*v21)), __asm_movsd(v20)));
            v19++;
            v18 = v20;
            while (v19 != v2) {
                // 0x48
                v21 = (int64_t *)(v17 + a3 + 0x2580 * v19);
                v20 = __asm_movsd_1(__asm_addsd(__asm_mulsd(__asm_movsd(*v21), __asm_movsd(*v21)), __asm_movsd(v20)));
                v19++;
                v18 = v20;
            }
        }
        int128_t v22 = __asm_movsd(v18); // 0x9e
        sqrt(v22);
        int64_t v23 = 0x2580 * v3 + a4; // 0xb7
        int64_t v24 = __asm_movsd_1(v22); // 0xbe
        int64_t * v25 = (int64_t *)(v23 + v17); // 0xbe
        *v25 = v24;
        int128_t v26 = v22; // 0xd0
        if ((int32_t)a1 > 0) {
            int64_t v27 = 0;
            int64_t v28 = 0x2580 * v27; // 0xde
            int128_t v29 = __asm_divsd_2(__asm_movsd(*(int64_t *)(v17 + a3 + v28)), *v25); // 0x107
            *(int64_t *)(v17 + a5 + v28) = __asm_movsd_1(v29);
            v27++;
            v26 = v29;
            while (v27 != v2) {
                // 0xd6
                v28 = 0x2580 * v27;
                v29 = __asm_divsd_2(__asm_movsd(*(int64_t *)(v17 + a3 + v28)), *v25);
                *(int64_t *)(v17 + a5 + v28) = __asm_movsd_1(v29);
                v27++;
                v26 = v29;
            }
        }
        int128_t v30 = v26;
        v3++;
        v11 = v30;
        if (v3 < 0x100000000 * a2 >> 32) {
            // 0x14a
            v7 = v17 + a5;
            v6 = v15;
            v10 = v30;
            while (true) {
              lab_0x14a:;
                int128_t v31 = v10;
                int128_t v32 = __asm_xorps(v31, v31); // 0x160
                int64_t v33 = __asm_movsd_1(v32); // 0x163
                int64_t v34 = 8 * v6; // 0x163
                v8 = (int64_t *)(v34 + v23);
                *v8 = v33;
                v12 = v32;
                if ((int32_t)a1 > 0) {
                    // 0x17b
                    v9 = v34 + a3;
                    int64_t v35 = 0;
                    while (true) {
                        int64_t v36 = 0x2580 * v35; // 0x183
                        int128_t v37 = __asm_movsd(*(int64_t *)(v36 + v7)); // 0x191
                        int128_t v38 = __asm_movsd(*(int64_t *)(v36 + v9)); // 0x1ac
                        *v8 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v37, v38), __asm_movsd(*v8)));
                        v35++;
                        v5 = 0;
                        if (v35 == v2) {
                            goto lab_0x1fa;
                        }
                    }
                }
                goto lab_0x13e;
            }
        }
      lab_0x2ab:
        // 0x2ab
        v4 = v15 + 1;
        v13 = v11;
        if (v3 == result) {
            // break -> 0x2b9
            break;
        }
    }
    // 0x2b9
    return result;
  lab_0x1fa:;
    int64_t v39 = 0x2580 * v5; // 0x202
    int64_t * v40 = (int64_t *)(v39 + v9); // 0x210
    int128_t v41 = __asm_movsd(*v40); // 0x210
    int128_t v42 = __asm_movsd(*(int64_t *)(v39 + v7)); // 0x22b
    int128_t v43 = __asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v42) ^ -0x8000000000000000), __asm_movsd(*v8)), v41); // 0x266
    *v40 = __asm_movsd_1(v43);
    int64_t v44 = v5 + 1;
    v12 = v43;
    v5 = v44;
    if (v44 == v2) {
        goto lab_0x13e;
    } else {
        goto lab_0x1fa;
    }
  lab_0x13e:;
    int64_t v45 = v6 + 1;
    v6 = v45;
    v10 = v12;
    v11 = v12;
    if ((int32_t)v45 == v1) {
        // break -> 0x2ab
        goto lab_0x2ab;
    }
    goto lab_0x14a;
}

// Address range: 0x2c0 - 0x3a4
// Line range:    111 - 150
int32_t submain(int32_t argc, char ** argv) {
    int64_t v1 = polybench_alloc_data(0x124f80, 8); // 0x2e7
    int64_t v2 = polybench_alloc_data(0x15f900, 8); // 0x2fa
    int64_t v3 = polybench_alloc_data(0x124f80, 8); // 0x30d
    float64_t (*v4)[1] = (float64_t (*)[1])v3; // 0x312
    init_array((int32_t)&g1, 1200, &((float64_t (*)[1][1])v1)[0], &((float64_t (*)[1][1])v2)[0], v4);
    if (argc < 43) {
        // 0x381
        free(&((float64_t (*)[1][1])v1)[0]);
        free(&((float64_t (*)[1][1])v2)[0]);
        free(v4);
        return 0;
    }
    int64_t strcmp_rc = strcmp(1200, &g2, (float64_t (*)[1])v1, (float64_t (*)[1])v2, v3); // 0x35c
    if ((int32_t)strcmp_rc == 0) {
        // 0x36a
        print_array((int32_t)&g1, 1200, &((float64_t (*)[1][1])v1)[0], &((float64_t (*)[1][1])v2)[0], v4);
    }
    // 0x381
    free(&((float64_t (*)[1][1])v1)[0]);
    free(&((float64_t (*)[1][1])v2)[0]);
    free(v4);
    return 0;
}

// Address range: 0x3b0 - 0x4dd
// Line range:    26 - 41
void init_array(uint32_t m, uint32_t n, float64_t (*A)[1], float64_t (*R)[1], float64_t (*Q)[1]) {
    int128_t v1; // 0x3b0
    if ((int32_t)m > 0) {
        int64_t v2 = m;
        int64_t v3 = 0;
        int128_t v4; // 0x3b0
        int128_t v5 = v4; // 0x3e6
        int64_t v6; // 0x3b0
        int128_t v7; // 0x40c
        int128_t v8; // 0x418
        int64_t v9; // 0x432
        int64_t v10; // 0x3b0
        int128_t v11; // 0x44d
        int32_t v12; // 0x3ef
        int128_t v13; // 0x3f7
        if (n > 0) {
            // 0x3ec
            v6 = 0;
            v12 = (int32_t)v6 * (int32_t)v3;
            v13 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v12 >> 31) | (int64_t)v12) % v2));
            v7 = __asm_mulsd(__asm_divsd(v13, __asm_cvtsi2sd(m)), __asm_movsd(0x4059000000000000));
            v8 = __asm_addsd(v7, __asm_movsd(0x4024000000000000));
            v9 = __asm_movsd_1(v8);
            v10 = 8 * v6 + 0x2580 * v3;
            *(int64_t *)(v10 + (int64_t)A) = v9;
            v11 = __asm_xorps(v8, v8);
            *(int64_t *)(v10 + (0x100000000 * (int64_t)Q >> 32)) = __asm_movsd_1(v11);
            v6++;
            v5 = v11;
            while (v6 != (int64_t)n) {
                // 0x3ec
                v12 = (int32_t)v6 * (int32_t)v3;
                v13 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v12 >> 31) | (int64_t)v12) % v2));
                v7 = __asm_mulsd(__asm_divsd(v13, __asm_cvtsi2sd(m)), __asm_movsd(0x4059000000000000));
                v8 = __asm_addsd(v7, __asm_movsd(0x4024000000000000));
                v9 = __asm_movsd_1(v8);
                v10 = 8 * v6 + 0x2580 * v3;
                *(int64_t *)(v10 + (int64_t)A) = v9;
                v11 = __asm_xorps(v8, v8);
                *(int64_t *)(v10 + (0x100000000 * (int64_t)Q >> 32)) = __asm_movsd_1(v11);
                v6++;
                v5 = v11;
            }
        }
        int64_t v14 = v3 + 1;
        v4 = v5;
        v1 = v5;
        while (v14 != v2) {
            // 0x3e0
            v3 = v14;
            v5 = v4;
            if (n > 0) {
                // 0x3ec
                v6 = 0;
                v12 = (int32_t)v6 * (int32_t)v3;
                v13 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v12 >> 31) | (int64_t)v12) % v2));
                v7 = __asm_mulsd(__asm_divsd(v13, __asm_cvtsi2sd(m)), __asm_movsd(0x4059000000000000));
                v8 = __asm_addsd(v7, __asm_movsd(0x4024000000000000));
                v9 = __asm_movsd_1(v8);
                v10 = 8 * v6 + 0x2580 * v3;
                *(int64_t *)(v10 + (int64_t)A) = v9;
                v11 = __asm_xorps(v8, v8);
                *(int64_t *)(v10 + (0x100000000 * (int64_t)Q >> 32)) = __asm_movsd_1(v11);
                v6++;
                v5 = v11;
                while (v6 != (int64_t)n) {
                    // 0x3ec
                    v12 = (int32_t)v6 * (int32_t)v3;
                    v13 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v12 >> 31) | (int64_t)v12) % v2));
                    v7 = __asm_mulsd(__asm_divsd(v13, __asm_cvtsi2sd(m)), __asm_movsd(0x4059000000000000));
                    v8 = __asm_addsd(v7, __asm_movsd(0x4024000000000000));
                    v9 = __asm_movsd_1(v8);
                    v10 = 8 * v6 + 0x2580 * v3;
                    *(int64_t *)(v10 + (int64_t)A) = v9;
                    v11 = __asm_xorps(v8, v8);
                    *(int64_t *)(v10 + (0x100000000 * (int64_t)Q >> 32)) = __asm_movsd_1(v11);
                    v6++;
                    v5 = v11;
                }
            }
            // 0x468
            v14 = v3 + 1;
            v4 = v5;
            v1 = v5;
        }
    }
    if (n <= 0) {
        // 0x4db
        return;
    }
    int64_t v15 = n;
    int64_t v16 = 0;
    int64_t v17 = 0x2580 * v16 + (int64_t)R; // 0x4ab
    int64_t v18 = 0;
    int128_t v19 = v1;
    int128_t v20 = __asm_xorps(v19, v19); // 0x4b2
    *(int64_t *)(v17 + 8 * v18) = __asm_movsd_1(v20);
    v18++;
    while (v18 != v15) {
        // 0x49c
        v19 = v20;
        v20 = __asm_xorps(v19, v19);
        *(int64_t *)(v17 + 8 * v18) = __asm_movsd_1(v20);
        v18++;
    }
    // 0x4cd
    v16++;
    while (v16 != v15) {
        // 0x49c
        v17 = 0x2580 * v16 + (int64_t)R;
        v18 = 0;
        v19 = v20;
        v20 = __asm_xorps(v19, v19);
        *(int64_t *)(v17 + 8 * v18) = __asm_movsd_1(v20);
        v18++;
        while (v18 != v15) {
            // 0x49c
            v19 = v20;
            v20 = __asm_xorps(v19, v19);
            *(int64_t *)(v17 + 8 * v18) = __asm_movsd_1(v20);
            v18++;
        }
        // 0x4cd
        v16++;
    }
}

// Address range: 0x4e0 - 0x706
// Line range:    47 - 71
void print_array(uint32_t m, uint32_t n, float64_t (*A)[1], float64_t (*R)[1], float64_t (*Q)[1]) {
    int64_t v1 = (int64_t)R;
    int64_t stream = *(int64_t *)*(int64_t *)1281; // 0x501
    int128_t v2; // 0x4e0
    fprintf(stream, "==BEGIN DUMP_ARRAYS==\n", (int64_t)A, v1, v2);
    int64_t stream2 = *(int64_t *)*(int64_t *)1305; // 0x519
    fprintf(stream2, "begin dump: %s", (int64_t)&g3, v1, v2);
    int64_t v3 = v1; // 0x53e
    int128_t v4; // 0x4e0
    if (n > 0) {
        int64_t v5 = n;
        int64_t v6 = 0;
        int64_t v7 = 0;
        int32_t v8 = (int32_t)v6 * n + (int32_t)v7; // 0x55e
        int64_t v9 = (0x100000000 * (int64_t)(v8 >> 31) | (int64_t)v8) % 20; // 0x567
        int64_t v10 = v9 & 0xffffffff; // 0x567
        if ((int32_t)v9 == 0) {
            // 0x572
            int128_t v11; // 0x4e0
            fprintf(*(int64_t *)*(int64_t *)1401, "\n", v10, 20, v11);
        }
        int128_t v12 = __asm_movsd(*(int64_t *)(0x2580 * v6 + v1 + 8 * v7)); // 0x5aa
        fprintf(*(int64_t *)*(int64_t *)1425, "%0.2lf ", v10, v7, v12);
        int64_t v13 = v7 + 1;
        int128_t v14 = v12; // 0x551
        while (v13 != v5) {
            // 0x557
            v7 = v13;
            v8 = (int32_t)v6 * n + (int32_t)v7;
            v9 = (0x100000000 * (int64_t)(v8 >> 31) | (int64_t)v8) % 20;
            v10 = v9 & 0xffffffff;
            if ((int32_t)v9 == 0) {
                // 0x572
                fprintf(*(int64_t *)*(int64_t *)1401, "\n", v10, 20, v14);
            }
            // 0x58a
            v12 = __asm_movsd(*(int64_t *)(0x2580 * v6 + v1 + 8 * v7));
            fprintf(*(int64_t *)*(int64_t *)1425, "%0.2lf ", v10, v7, v12);
            v13 = v7 + 1;
            v14 = v12;
        }
        // 0x5d0
        v6++;
        v4 = v12;
        v3 = v7;
        while (v6 != v5) {
            // 0x557
            v14 = v12;
            v7 = 0;
            v8 = (int32_t)v6 * n + (int32_t)v7;
            v9 = (0x100000000 * (int64_t)(v8 >> 31) | (int64_t)v8) % 20;
            v10 = v9 & 0xffffffff;
            if ((int32_t)v9 == 0) {
                // 0x572
                fprintf(*(int64_t *)*(int64_t *)1401, "\n", v10, 20, v14);
            }
            // 0x58a
            v12 = __asm_movsd(*(int64_t *)(0x2580 * v6 + v1 + 8 * v7));
            fprintf(*(int64_t *)*(int64_t *)1425, "%0.2lf ", v10, v7, v12);
            v13 = v7 + 1;
            v14 = v12;
            while (v13 != v5) {
                // 0x557
                v7 = v13;
                v8 = (int32_t)v6 * n + (int32_t)v7;
                v9 = (0x100000000 * (int64_t)(v8 >> 31) | (int64_t)v8) % 20;
                v10 = v9 & 0xffffffff;
                if ((int32_t)v9 == 0) {
                    // 0x572
                    fprintf(*(int64_t *)*(int64_t *)1401, "\n", v10, 20, v14);
                }
                // 0x58a
                v12 = __asm_movsd(*(int64_t *)(0x2580 * v6 + v1 + 8 * v7));
                fprintf(*(int64_t *)*(int64_t *)1425, "%0.2lf ", v10, v7, v12);
                v13 = v7 + 1;
                v14 = v12;
            }
            // 0x5d0
            v6++;
            v4 = v12;
            v3 = v7;
        }
    }
    int64_t stream3 = *(int64_t *)*(int64_t *)1509; // 0x5e5
    fprintf(stream3, "\nend   dump: %s\n", (int64_t)&g3, v3, v4);
    int64_t stream4 = *(int64_t *)*(int64_t *)1540; // 0x604
    fprintf(stream4, "begin dump: %s", (int64_t)&g4, v3, v4);
    int128_t v15 = v4; // 0x629
    int64_t v16 = v3; // 0x629
    if (m > 0) {
        int64_t v17 = 0;
        int128_t v18 = v4; // 0x63c
        int64_t v19 = v3; // 0x63c
        int64_t v20; // 0x4e0
        int64_t v21; // 0x4e0
        int64_t v22; // 0x4e0
        int32_t v23; // 0x649
        int64_t v24; // 0x652
        int64_t v25; // 0x652
        int128_t v26; // 0x695
        int128_t v27; // 0x4e0
        if (n > 0) {
            // 0x642
            v22 = 0x2580 * v17 + (0x100000000 * (int64_t)Q >> 32);
            v21 = 0;
            v23 = (int32_t)v17 * n + (int32_t)v21;
            v24 = (0x100000000 * (int64_t)(v23 >> 31) | (int64_t)v23) % 20;
            v25 = v24 & 0xffffffff;
            if ((int32_t)v24 == 0) {
                // 0x65d
                fprintf(*(int64_t *)*(int64_t *)1636, "\n", v25, 20, v4);
            }
            // 0x675
            v26 = __asm_movsd(*(int64_t *)(v22 + 8 * v21));
            fprintf(*(int64_t *)*(int64_t *)1660, "%0.2lf ", v25, v21, v26);
            v20 = v21 + 1;
            v27 = v26;
            v18 = v26;
            v19 = v21;
            while (v20 != (int64_t)n) {
                // 0x642
                v21 = v20;
                v23 = (int32_t)v17 * n + (int32_t)v21;
                v24 = (0x100000000 * (int64_t)(v23 >> 31) | (int64_t)v23) % 20;
                v25 = v24 & 0xffffffff;
                if ((int32_t)v24 == 0) {
                    // 0x65d
                    fprintf(*(int64_t *)*(int64_t *)1636, "\n", v25, 20, v27);
                }
                // 0x675
                v26 = __asm_movsd(*(int64_t *)(v22 + 8 * v21));
                fprintf(*(int64_t *)*(int64_t *)1660, "%0.2lf ", v25, v21, v26);
                v20 = v21 + 1;
                v27 = v26;
                v18 = v26;
                v19 = v21;
            }
        }
        int64_t v28 = v19;
        int128_t v29 = v18;
        int64_t v30 = v17 + 1;
        v15 = v29;
        v16 = v28;
        while (v30 != (int64_t)m) {
            int128_t v31 = v29;
            v17 = v30;
            v18 = v31;
            v19 = v28;
            if (n > 0) {
                // 0x642
                v22 = 0x2580 * v17 + (0x100000000 * (int64_t)Q >> 32);
                v27 = v31;
                v21 = 0;
                v23 = (int32_t)v17 * n + (int32_t)v21;
                v24 = (0x100000000 * (int64_t)(v23 >> 31) | (int64_t)v23) % 20;
                v25 = v24 & 0xffffffff;
                if ((int32_t)v24 == 0) {
                    // 0x65d
                    fprintf(*(int64_t *)*(int64_t *)1636, "\n", v25, 20, v27);
                }
                // 0x675
                v26 = __asm_movsd(*(int64_t *)(v22 + 8 * v21));
                fprintf(*(int64_t *)*(int64_t *)1660, "%0.2lf ", v25, v21, v26);
                v20 = v21 + 1;
                v27 = v26;
                v18 = v26;
                v19 = v21;
                while (v20 != (int64_t)n) {
                    // 0x642
                    v21 = v20;
                    v23 = (int32_t)v17 * n + (int32_t)v21;
                    v24 = (0x100000000 * (int64_t)(v23 >> 31) | (int64_t)v23) % 20;
                    v25 = v24 & 0xffffffff;
                    if ((int32_t)v24 == 0) {
                        // 0x65d
                        fprintf(*(int64_t *)*(int64_t *)1636, "\n", v25, 20, v27);
                    }
                    // 0x675
                    v26 = __asm_movsd(*(int64_t *)(v22 + 8 * v21));
                    fprintf(*(int64_t *)*(int64_t *)1660, "%0.2lf ", v25, v21, v26);
                    v20 = v21 + 1;
                    v27 = v26;
                    v18 = v26;
                    v19 = v21;
                }
            }
            // 0x6bb
            v28 = v19;
            v29 = v18;
            v30 = v17 + 1;
            v15 = v29;
            v16 = v28;
        }
    }
    int64_t stream5 = *(int64_t *)*(int64_t *)1744; // 0x6d0
    fprintf(stream5, "\nend   dump: %s\n", (int64_t)&g4, v16, v15);
    int64_t stream6 = *(int64_t *)*(int64_t *)1775; // 0x6ef
    fprintf(stream6, "==END   DUMP_ARRAYS==\n", (int64_t)&g4, v16, v15);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (17.0.0)
// Detected functions: 4

