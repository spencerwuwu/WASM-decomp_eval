//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

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
int64_t free(float64_t (*a1)[1][1]);
void init_array(uint32_t n, float64_t (*A)[1][1], float64_t (*B)[1][1]);
int64_t kernel_heat_3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t polybench_alloc_data(int64_t a1, int64_t a2);
void print_array(uint32_t n, float64_t (*A)[1][1]);
int64_t strcmp(int64_t a1, int64_t * a2, float64_t (*a3)[1][1], float64_t (*a4)[1][1]);
int32_t submain(int32_t argc, char ** argv);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x4e494745423d3d00; // 0x8b8
int64_t g2 = 0x322e3025000a0041; // 0x8df

// ------------------------ Functions -------------------------

// Address range: 0x0 - 0x57d
int64_t kernel_heat_3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a2 + 0xffffffff & 0xffffffff; // 0x33
    int32_t v2 = 1; // 0x570
    while (true) {
      lab_0x2d:
        // 0x2d
        if (v1 > 1) {
            while (true) {
                int64_t v3 = 1;
                int64_t v4 = 0x100000000 * v3;
                int64_t v5 = 0x1c200 * v3;
                int64_t v6 = v5 + a3;
                int64_t v7 = 1;
                int64_t v8 = 960 * v7; // 0x89
                int64_t v9 = v8 + v6;
                int64_t v10 = 0x100000000 * v7;
                int32_t v11 = 1;
                int64_t v12 = 8 * (int64_t)v11; // 0x97
                int64_t v13 = v12 + v8;
                int64_t v14 = v13 + a3;
                int128_t v15 = __asm_movsd(*(int64_t *)(v14 + 0x1c200 * (v4 + 0x100000000 >> 32))); // 0x97
                int64_t * v16 = (int64_t *)(v12 + v9); // 0xc0
                int128_t v17 = __asm_movsd(*v16); // 0xc0
                int128_t v18 = __asm_subsd(v15, __asm_addsd(v17, v17)); // 0xc9
                int128_t v19 = __asm_addsd_2(v18, *(int64_t *)(v14 + 0x1c200 * (v4 - 0x100000000 >> 32))); // 0xf6
                int64_t v20 = v12 + v6;
                int128_t v21 = __asm_movsd(*(int64_t *)(v20 + 960 * (v10 + 0x100000000 >> 32))); // 0x124
                int128_t v22 = __asm_movsd(*v16); // 0x14d
                int128_t v23 = __asm_subsd(v21, __asm_addsd(v22, v22)); // 0x156
                int64_t v24 = *(int64_t *)(v20 + 960 * (v10 - 0x100000000 >> 32)); // 0x183
                int128_t v25 = __asm_mulsd(__asm_movsd(0x3fc0000000000000), __asm_addsd_2(v23, v24)); // 0x190
                int128_t v26 = __asm_addsd(__asm_mulsd(v19, __asm_movsd(0x3fc0000000000000)), v25); // 0x1a0
                int32_t v27 = v11 + 1; // 0x1c7
                int128_t v28 = __asm_movsd(*(int64_t *)(8 * (int64_t)v27 + v9)); // 0x1cd
                int128_t v29 = __asm_movsd(*v16); // 0x1f6
                int128_t v30 = __asm_subsd(v28, __asm_addsd(v29, v29)); // 0x1ff
                int128_t v31 = __asm_addsd_2(v30, *(int64_t *)(8 * (int64_t)(v11 - 1) + v9)); // 0x22c
                int64_t v32 = __asm_movsd_1(__asm_addsd_2(__asm_addsd(__asm_mulsd(v31, __asm_movsd(0x3fc0000000000000)), v26), *v16)); // 0x28e
                *(int64_t *)(v5 + a4 + v13) = v32;
                while (v1 > (int64_t)v27) {
                    // 0x6e
                    v11 = v27;
                    v12 = 8 * (int64_t)v11;
                    v13 = v12 + v8;
                    v14 = v13 + a3;
                    v15 = __asm_movsd(*(int64_t *)(v14 + 0x1c200 * (v4 + 0x100000000 >> 32)));
                    v16 = (int64_t *)(v12 + v9);
                    v17 = __asm_movsd(*v16);
                    v18 = __asm_subsd(v15, __asm_addsd(v17, v17));
                    v19 = __asm_addsd_2(v18, *(int64_t *)(v14 + 0x1c200 * (v4 - 0x100000000 >> 32)));
                    v20 = v12 + v6;
                    v21 = __asm_movsd(*(int64_t *)(v20 + 960 * (v10 + 0x100000000 >> 32)));
                    v22 = __asm_movsd(*v16);
                    v23 = __asm_subsd(v21, __asm_addsd(v22, v22));
                    v24 = *(int64_t *)(v20 + 960 * (v10 - 0x100000000 >> 32));
                    v25 = __asm_mulsd(__asm_movsd(0x3fc0000000000000), __asm_addsd_2(v23, v24));
                    v26 = __asm_addsd(__asm_mulsd(v19, __asm_movsd(0x3fc0000000000000)), v25);
                    v27 = v11 + 1;
                    v28 = __asm_movsd(*(int64_t *)(8 * (int64_t)v27 + v9));
                    v29 = __asm_movsd(*v16);
                    v30 = __asm_subsd(v28, __asm_addsd(v29, v29));
                    v31 = __asm_addsd_2(v30, *(int64_t *)(8 * (int64_t)(v11 - 1) + v9));
                    v32 = __asm_movsd_1(__asm_addsd_2(__asm_addsd(__asm_mulsd(v31, __asm_movsd(0x3fc0000000000000)), v26), *v16));
                    *(int64_t *)(v5 + a4 + v13) = v32;
                }
                // 0x2a6
                int32_t v33; // 0x2a9
                while (((int64_t)v33 & 0xffffffff) < v1) {
                    // 0x6e
                    v7 = 1;
                    v8 = 960 * v7;
                    v9 = v8 + v6;
                    v10 = 0x100000000 * v7;
                    v11 = 1;
                    v12 = 8 * (int64_t)v11;
                    v13 = v12 + v8;
                    v14 = v13 + a3;
                    v15 = __asm_movsd(*(int64_t *)(v14 + 0x1c200 * (v4 + 0x100000000 >> 32)));
                    v16 = (int64_t *)(v12 + v9);
                    v17 = __asm_movsd(*v16);
                    v18 = __asm_subsd(v15, __asm_addsd(v17, v17));
                    v19 = __asm_addsd_2(v18, *(int64_t *)(v14 + 0x1c200 * (v4 - 0x100000000 >> 32)));
                    v20 = v12 + v6;
                    v21 = __asm_movsd(*(int64_t *)(v20 + 960 * (v10 + 0x100000000 >> 32)));
                    v22 = __asm_movsd(*v16);
                    v23 = __asm_subsd(v21, __asm_addsd(v22, v22));
                    v24 = *(int64_t *)(v20 + 960 * (v10 - 0x100000000 >> 32));
                    v25 = __asm_mulsd(__asm_movsd(0x3fc0000000000000), __asm_addsd_2(v23, v24));
                    v26 = __asm_addsd(__asm_mulsd(v19, __asm_movsd(0x3fc0000000000000)), v25);
                    v27 = v11 + 1;
                    v28 = __asm_movsd(*(int64_t *)(8 * (int64_t)v27 + v9));
                    v29 = __asm_movsd(*v16);
                    v30 = __asm_subsd(v28, __asm_addsd(v29, v29));
                    v31 = __asm_addsd_2(v30, *(int64_t *)(8 * (int64_t)(v11 - 1) + v9));
                    v32 = __asm_movsd_1(__asm_addsd_2(__asm_addsd(__asm_mulsd(v31, __asm_movsd(0x3fc0000000000000)), v26), *v16));
                    *(int64_t *)(v5 + a4 + v13) = v32;
                    while (v1 > (int64_t)v27) {
                        // 0x6e
                        v11 = v27;
                        v12 = 8 * (int64_t)v11;
                        v13 = v12 + v8;
                        v14 = v13 + a3;
                        v15 = __asm_movsd(*(int64_t *)(v14 + 0x1c200 * (v4 + 0x100000000 >> 32)));
                        v16 = (int64_t *)(v12 + v9);
                        v17 = __asm_movsd(*v16);
                        v18 = __asm_subsd(v15, __asm_addsd(v17, v17));
                        v19 = __asm_addsd_2(v18, *(int64_t *)(v14 + 0x1c200 * (v4 - 0x100000000 >> 32)));
                        v20 = v12 + v6;
                        v21 = __asm_movsd(*(int64_t *)(v20 + 960 * (v10 + 0x100000000 >> 32)));
                        v22 = __asm_movsd(*v16);
                        v23 = __asm_subsd(v21, __asm_addsd(v22, v22));
                        v24 = *(int64_t *)(v20 + 960 * (v10 - 0x100000000 >> 32));
                        v25 = __asm_mulsd(__asm_movsd(0x3fc0000000000000), __asm_addsd_2(v23, v24));
                        v26 = __asm_addsd(__asm_mulsd(v19, __asm_movsd(0x3fc0000000000000)), v25);
                        v27 = v11 + 1;
                        v28 = __asm_movsd(*(int64_t *)(8 * (int64_t)v27 + v9));
                        v29 = __asm_movsd(*v16);
                        v30 = __asm_subsd(v28, __asm_addsd(v29, v29));
                        v31 = __asm_addsd_2(v30, *(int64_t *)(8 * (int64_t)(v11 - 1) + v9));
                        v32 = __asm_movsd_1(__asm_addsd_2(__asm_addsd(__asm_mulsd(v31, __asm_movsd(0x3fc0000000000000)), v26), *v16));
                        *(int64_t *)(v5 + a4 + v13) = v32;
                    }
                    // 0x2a6
                    int32_t v34; // 0x0
                    v33 = v34 + 1;
                }
                // 0x2b9
                int32_t v35; // 0x0
                if (((int64_t)(v35 + 1) & 0xffffffff) >= v1) {
                    goto lab_0x30f;
                }
            }
        }
        goto lab_0x56d;
    }
  lab_0x57b:
    // 0x57b
    return 501;
  lab_0x2fe:
    // 0x2fe
    goto lab_0x30f;
  lab_0x56d:
    // 0x56d
    v2++;
    if (v2 == 501) {
        // break -> 0x57b
        goto lab_0x57b;
    }
    goto lab_0x2d;
  lab_0x30f:;
    // 0x30f
    int32_t v36; // 0x0
    int32_t v37 = v36;
    int64_t v38; // 0x0
    int64_t v39 = v38;
    int64_t v40 = 960 * v39; // 0x32a
    int64_t v41; // 0x0
    int64_t v42 = v40 + v41;
    int64_t v43 = 0x100000000 * v39;
    int64_t v44 = 960 * (v43 + 0x100000000 >> 32);
    int64_t v45 = 960 * (v43 - 0x100000000 >> 32);
    int32_t v46 = 1; // 0x0
    goto lab_0x30f_2;
  lab_0x30f_2:;
    int32_t v47 = v46;
    int64_t v48 = 8 * (int64_t)v47; // 0x338
    int64_t v49 = v48 + v40;
    int64_t v50 = v49 + a4;
    int64_t v51; // 0x0
    int64_t v52 = *(int64_t *)(v50 + v51); // 0x338
    int128_t v53 = __asm_movsd(v52); // 0x338
    int64_t * v54 = (int64_t *)(v48 + v42); // 0x361
    int64_t v55 = *v54; // 0x361
    int128_t v56 = __asm_movsd(v55); // 0x361
    int128_t v57 = __asm_subsd(v53, __asm_addsd(v56, v56)); // 0x36a
    int64_t v58; // 0x0
    int64_t v59 = *(int64_t *)(v50 + v58); // 0x397
    int128_t v60 = __asm_addsd_2(v57, v59); // 0x397
    int64_t v61 = v48 + v41;
    int64_t v62 = *(int64_t *)(v61 + v44); // 0x3c5
    int128_t v63 = __asm_movsd(v62); // 0x3c5
    int64_t v64 = *v54; // 0x3ee
    int128_t v65 = __asm_movsd(v64); // 0x3ee
    int128_t v66 = __asm_subsd(v63, __asm_addsd(v65, v65)); // 0x3f7
    int64_t v67 = *(int64_t *)(v61 + v45); // 0x424
    int128_t v68 = __asm_addsd_2(v66, v67); // 0x424
    int128_t v69 = __asm_mulsd(__asm_movsd(0x3fc0000000000000), v68); // 0x431
    int128_t v70 = __asm_movsd(0x3fc0000000000000); // 0x435
    int128_t v71 = __asm_addsd(__asm_mulsd(v60, v70), v69); // 0x441
    int32_t v72 = v47 + 1; // 0x468
    int64_t v73 = *(int64_t *)(8 * (int64_t)v72 + v42); // 0x46e
    int128_t v74 = __asm_movsd(v73); // 0x46e
    int64_t v75 = *v54; // 0x497
    int128_t v76 = __asm_movsd(v75); // 0x497
    int128_t v77 = __asm_subsd(v74, __asm_addsd(v76, v76)); // 0x4a0
    int64_t v78 = *(int64_t *)(8 * (int64_t)(v47 - 1) + v42); // 0x4cd
    int128_t v79 = __asm_addsd_2(v77, v78); // 0x4cd
    int128_t v80 = __asm_movsd(0x3fc0000000000000); // 0x4d2
    int128_t v81 = __asm_addsd(__asm_mulsd(v79, v80), v71); // 0x4de
    int64_t v82 = *v54; // 0x506
    int64_t v83 = __asm_movsd_1(__asm_addsd_2(v81, v82)); // 0x52f
    int64_t v84; // 0x0
    *(int64_t *)(v84 + v49) = v83;
    v46 = v72;
    if (v1 > (int64_t)v72) {
        goto lab_0x30f_2;
    } else {
        int32_t v85 = v37 + 1; // 0x54a
        int64_t v86 = v85;
        v38 = v86;
        v36 = v85;
        if ((v86 & 0xffffffff) < v1) {
            goto lab_0x30f;
        } else {
            // 0x55a
            int32_t v87; // 0x0
            int32_t v88 = v87 + 1; // 0x55d
            int64_t v89 = v88;
            int64_t v90 = v89; // 0x2d9
            int32_t v91 = v88; // 0x2d9
            if ((v89 & 0xffffffff) < v1) {
                goto lab_0x2fe;
            } else {
                goto lab_0x56d;
            }
        }
    }
}

// Address range: 0x580 - 0x629
// Line range:    99 - 130
int32_t submain(int32_t argc, char ** argv) {
    int64_t v1 = polybench_alloc_data(0x1a5e00, 8); // 0x5a7
    int64_t v2 = polybench_alloc_data(0x1a5e00, 8); // 0x5ba
    init_array(120, &((float64_t (*)[1][1][1])v1)[0], &((float64_t (*)[1][1][1])v2)[0]);
    if (argc < 43) {
        // 0x618
        free(&((float64_t (*)[1][1][1])v1)[0]);
        return 0;
    }
    int64_t strcmp_rc = strcmp(120, &g1, (float64_t (*)[1][1])v1, (float64_t (*)[1][1])v2); // 0x5fe
    if ((int32_t)strcmp_rc == 0) {
        // 0x60c
        print_array(120, &((float64_t (*)[1][1][1])v1)[0]);
    }
    // 0x618
    free(&((float64_t (*)[1][1][1])v1)[0]);
    return 0;
}

// Address range: 0x630 - 0x727
// Line range:    26 - 36
void init_array(uint32_t n, float64_t (*A)[1][1], float64_t (*B)[1][1]) {
    if (n <= 0) {
        // 0x725
        return;
    }
    int64_t v1 = n;
    int64_t v2 = 0;
    int64_t v3 = 0;
    int32_t v4 = (int32_t)v2 + n + (int32_t)v3; // 0x67b
    int64_t v5 = 0;
    int128_t v6 = __asm_mulsd(__asm_cvtsi2sd(v4 - (int32_t)v5), __asm_movsd(0x4024000000000000)); // 0x692
    int128_t v7 = __asm_divsd(v6, __asm_cvtsi2sd(n)); // 0x69b
    int64_t v8 = __asm_movsd_1(v7); // 0x6c3
    int64_t v9 = 8 * v5 + 960 * v3 + 0x1c200 * v2;
    *(int64_t *)(v9 + (int64_t)(0x100000000 * (int64_t)B >> 32)) = v8;
    *(int64_t *)(v9 + (int64_t)A) = __asm_movsd_1(v7);
    v5++;
    while (v5 != v1) {
        // 0x678
        v6 = __asm_mulsd(__asm_cvtsi2sd(v4 - (int32_t)v5), __asm_movsd(0x4024000000000000));
        v7 = __asm_divsd(v6, __asm_cvtsi2sd(n));
        v8 = __asm_movsd_1(v7);
        v9 = 8 * v5 + 960 * v3 + 0x1c200 * v2;
        *(int64_t *)(v9 + (int64_t)(0x100000000 * (int64_t)B >> 32)) = v8;
        *(int64_t *)(v9 + (int64_t)A) = __asm_movsd_1(v7);
        v5++;
    }
    // 0x704
    v3++;
    while (v3 != v1) {
        // 0x678
        v4 = (int32_t)v2 + n + (int32_t)v3;
        v5 = 0;
        v6 = __asm_mulsd(__asm_cvtsi2sd(v4 - (int32_t)v5), __asm_movsd(0x4024000000000000));
        v7 = __asm_divsd(v6, __asm_cvtsi2sd(n));
        v8 = __asm_movsd_1(v7);
        v9 = 8 * v5 + 960 * v3 + 0x1c200 * v2;
        *(int64_t *)(v9 + (int64_t)(0x100000000 * (int64_t)B >> 32)) = v8;
        *(int64_t *)(v9 + (int64_t)A) = __asm_movsd_1(v7);
        v5++;
        while (v5 != v1) {
            // 0x678
            v6 = __asm_mulsd(__asm_cvtsi2sd(v4 - (int32_t)v5), __asm_movsd(0x4024000000000000));
            v7 = __asm_divsd(v6, __asm_cvtsi2sd(n));
            v8 = __asm_movsd_1(v7);
            v9 = 8 * v5 + 960 * v3 + 0x1c200 * v2;
            *(int64_t *)(v9 + (int64_t)(0x100000000 * (int64_t)B >> 32)) = v8;
            *(int64_t *)(v9 + (int64_t)A) = __asm_movsd_1(v7);
            v5++;
        }
        // 0x704
        v3++;
    }
    // 0x717
    v2++;
    while (v2 != v1) {
        // 0x66c
        v3 = 0;
        v4 = (int32_t)v2 + n + (int32_t)v3;
        v5 = 0;
        v6 = __asm_mulsd(__asm_cvtsi2sd(v4 - (int32_t)v5), __asm_movsd(0x4024000000000000));
        v7 = __asm_divsd(v6, __asm_cvtsi2sd(n));
        v8 = __asm_movsd_1(v7);
        v9 = 8 * v5 + 960 * v3 + 0x1c200 * v2;
        *(int64_t *)(v9 + (int64_t)(0x100000000 * (int64_t)B >> 32)) = v8;
        *(int64_t *)(v9 + (int64_t)A) = __asm_movsd_1(v7);
        v5++;
        while (v5 != v1) {
            // 0x678
            v6 = __asm_mulsd(__asm_cvtsi2sd(v4 - (int32_t)v5), __asm_movsd(0x4024000000000000));
            v7 = __asm_divsd(v6, __asm_cvtsi2sd(n));
            v8 = __asm_movsd_1(v7);
            v9 = 8 * v5 + 960 * v3 + 0x1c200 * v2;
            *(int64_t *)(v9 + (int64_t)(0x100000000 * (int64_t)B >> 32)) = v8;
            *(int64_t *)(v9 + (int64_t)A) = __asm_movsd_1(v7);
            v5++;
        }
        // 0x704
        v3++;
        while (v3 != v1) {
            // 0x678
            v4 = (int32_t)v2 + n + (int32_t)v3;
            v5 = 0;
            v6 = __asm_mulsd(__asm_cvtsi2sd(v4 - (int32_t)v5), __asm_movsd(0x4024000000000000));
            v7 = __asm_divsd(v6, __asm_cvtsi2sd(n));
            v8 = __asm_movsd_1(v7);
            v9 = 8 * v5 + 960 * v3 + 0x1c200 * v2;
            *(int64_t *)(v9 + (int64_t)(0x100000000 * (int64_t)B >> 32)) = v8;
            *(int64_t *)(v9 + (int64_t)A) = __asm_movsd_1(v7);
            v5++;
            while (v5 != v1) {
                // 0x678
                v6 = __asm_mulsd(__asm_cvtsi2sd(v4 - (int32_t)v5), __asm_movsd(0x4024000000000000));
                v7 = __asm_divsd(v6, __asm_cvtsi2sd(n));
                v8 = __asm_movsd_1(v7);
                v9 = 8 * v5 + 960 * v3 + 0x1c200 * v2;
                *(int64_t *)(v9 + (int64_t)(0x100000000 * (int64_t)B >> 32)) = v8;
                *(int64_t *)(v9 + (int64_t)A) = __asm_movsd_1(v7);
                v5++;
            }
            // 0x704
            v3++;
        }
        // 0x717
        v2++;
    }
}

// Address range: 0x730 - 0x8a1
// Line range:    42 - 58
void print_array(uint32_t n, float64_t (*A)[1][1]) {
    // 0x730
    int64_t v1; // 0x730
    int128_t v2; // 0x730
    fprintf(*(int64_t *)*(int64_t *)1862, "==BEGIN DUMP_ARRAYS==\n", v1, v1, v2);
    int64_t stream = *(int64_t *)*(int64_t *)1886; // 0x75e
    fprintf(stream, "begin dump: %s", (int64_t)&g2, v1, v2);
    int64_t v3; // 0x730
    int128_t v4; // 0x730
    if (n > 0) {
        int64_t v5 = n;
        int64_t v6 = 0;
        int64_t v7 = 0x1c200 * v6 + (0x100000000 * (int64_t)A >> 32);
        int64_t v8 = 0;
        int32_t v9 = ((int32_t)v6 * n + (int32_t)v8) * n; // 0x7c1
        int64_t v10 = 0;
        int32_t v11 = v9 + (int32_t)v10; // 0x7c3
        int64_t v12 = (0x100000000 * (int64_t)(v11 >> 31) | (int64_t)v11) % 20; // 0x7cc
        int64_t v13 = v12 & 0xffffffff; // 0x7cc
        if ((int32_t)v12 == 0) {
            // 0x7d7
            int128_t v14; // 0x730
            fprintf(*(int64_t *)*(int64_t *)2014, "\n", v13, 20, v14);
        }
        int128_t v15 = __asm_movsd(*(int64_t *)(v7 + 960 * v8 + 8 * v10)); // 0x81d
        fprintf(*(int64_t *)*(int64_t *)2038, "%0.2lf ", v13, v10, v15);
        int64_t v16 = v10 + 1;
        int128_t v17 = v15; // 0x7a9
        while (v16 != v5) {
            // 0x7af
            v10 = v16;
            v11 = v9 + (int32_t)v10;
            v12 = (0x100000000 * (int64_t)(v11 >> 31) | (int64_t)v11) % 20;
            v13 = v12 & 0xffffffff;
            if ((int32_t)v12 == 0) {
                // 0x7d7
                fprintf(*(int64_t *)*(int64_t *)2014, "\n", v13, 20, v17);
            }
            // 0x7ef
            v15 = __asm_movsd(*(int64_t *)(v7 + 960 * v8 + 8 * v10));
            fprintf(*(int64_t *)*(int64_t *)2038, "%0.2lf ", v13, v10, v15);
            v16 = v10 + 1;
            v17 = v15;
        }
        // 0x843
        v8++;
        while (v8 != v5) {
            // 0x7af
            v9 = ((int32_t)v6 * n + (int32_t)v8) * n;
            v17 = v15;
            v10 = 0;
            v11 = v9 + (int32_t)v10;
            v12 = (0x100000000 * (int64_t)(v11 >> 31) | (int64_t)v11) % 20;
            v13 = v12 & 0xffffffff;
            if ((int32_t)v12 == 0) {
                // 0x7d7
                fprintf(*(int64_t *)*(int64_t *)2014, "\n", v13, 20, v17);
            }
            // 0x7ef
            v15 = __asm_movsd(*(int64_t *)(v7 + 960 * v8 + 8 * v10));
            fprintf(*(int64_t *)*(int64_t *)2038, "%0.2lf ", v13, v10, v15);
            v16 = v10 + 1;
            v17 = v15;
            while (v16 != v5) {
                // 0x7af
                v10 = v16;
                v11 = v9 + (int32_t)v10;
                v12 = (0x100000000 * (int64_t)(v11 >> 31) | (int64_t)v11) % 20;
                v13 = v12 & 0xffffffff;
                if ((int32_t)v12 == 0) {
                    // 0x7d7
                    fprintf(*(int64_t *)*(int64_t *)2014, "\n", v13, 20, v17);
                }
                // 0x7ef
                v15 = __asm_movsd(*(int64_t *)(v7 + 960 * v8 + 8 * v10));
                fprintf(*(int64_t *)*(int64_t *)2038, "%0.2lf ", v13, v10, v15);
                v16 = v10 + 1;
                v17 = v15;
            }
            // 0x843
            v8++;
        }
        // 0x856
        v6++;
        v4 = v15;
        v3 = v10;
        while (v6 != v5) {
            // 0x7a3
            v7 = 0x1c200 * v6 + (0x100000000 * (int64_t)A >> 32);
            v8 = 0;
            v9 = ((int32_t)v6 * n + (int32_t)v8) * n;
            v17 = v15;
            v10 = 0;
            v11 = v9 + (int32_t)v10;
            v12 = (0x100000000 * (int64_t)(v11 >> 31) | (int64_t)v11) % 20;
            v13 = v12 & 0xffffffff;
            if ((int32_t)v12 == 0) {
                // 0x7d7
                fprintf(*(int64_t *)*(int64_t *)2014, "\n", v13, 20, v17);
            }
            // 0x7ef
            v15 = __asm_movsd(*(int64_t *)(v7 + 960 * v8 + 8 * v10));
            fprintf(*(int64_t *)*(int64_t *)2038, "%0.2lf ", v13, v10, v15);
            v16 = v10 + 1;
            v17 = v15;
            while (v16 != v5) {
                // 0x7af
                v10 = v16;
                v11 = v9 + (int32_t)v10;
                v12 = (0x100000000 * (int64_t)(v11 >> 31) | (int64_t)v11) % 20;
                v13 = v12 & 0xffffffff;
                if ((int32_t)v12 == 0) {
                    // 0x7d7
                    fprintf(*(int64_t *)*(int64_t *)2014, "\n", v13, 20, v17);
                }
                // 0x7ef
                v15 = __asm_movsd(*(int64_t *)(v7 + 960 * v8 + 8 * v10));
                fprintf(*(int64_t *)*(int64_t *)2038, "%0.2lf ", v13, v10, v15);
                v16 = v10 + 1;
                v17 = v15;
            }
            // 0x843
            v8++;
            while (v8 != v5) {
                // 0x7af
                v9 = ((int32_t)v6 * n + (int32_t)v8) * n;
                v17 = v15;
                v10 = 0;
                v11 = v9 + (int32_t)v10;
                v12 = (0x100000000 * (int64_t)(v11 >> 31) | (int64_t)v11) % 20;
                v13 = v12 & 0xffffffff;
                if ((int32_t)v12 == 0) {
                    // 0x7d7
                    fprintf(*(int64_t *)*(int64_t *)2014, "\n", v13, 20, v17);
                }
                // 0x7ef
                v15 = __asm_movsd(*(int64_t *)(v7 + 960 * v8 + 8 * v10));
                fprintf(*(int64_t *)*(int64_t *)2038, "%0.2lf ", v13, v10, v15);
                v16 = v10 + 1;
                v17 = v15;
                while (v16 != v5) {
                    // 0x7af
                    v10 = v16;
                    v11 = v9 + (int32_t)v10;
                    v12 = (0x100000000 * (int64_t)(v11 >> 31) | (int64_t)v11) % 20;
                    v13 = v12 & 0xffffffff;
                    if ((int32_t)v12 == 0) {
                        // 0x7d7
                        fprintf(*(int64_t *)*(int64_t *)2014, "\n", v13, 20, v17);
                    }
                    // 0x7ef
                    v15 = __asm_movsd(*(int64_t *)(v7 + 960 * v8 + 8 * v10));
                    fprintf(*(int64_t *)*(int64_t *)2038, "%0.2lf ", v13, v10, v15);
                    v16 = v10 + 1;
                    v17 = v15;
                }
                // 0x843
                v8++;
            }
            // 0x856
            v6++;
            v4 = v15;
            v3 = v10;
        }
    }
    int64_t stream2 = *(int64_t *)*(int64_t *)2155; // 0x86b
    fprintf(stream2, "\nend   dump: %s\n", (int64_t)&g2, v3, v4);
    int64_t stream3 = *(int64_t *)*(int64_t *)2186; // 0x88a
    fprintf(stream3, "==END   DUMP_ARRAYS==\n", (int64_t)&g2, v3, v4);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (17.0.0)
// Detected functions: 4

