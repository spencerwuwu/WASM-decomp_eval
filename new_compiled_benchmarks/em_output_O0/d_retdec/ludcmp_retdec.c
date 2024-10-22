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
void init_array(uint32_t n, float64_t (*A)[1], float64_t * b, float64_t * x, float64_t * y);
int64_t kernel_ludcmp(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t polybench_alloc_data(int64_t a1, int64_t a2);
void print_array(uint32_t n, float64_t * x);
int64_t strcmp(int64_t a1, int64_t * a2, float64_t * a3, float64_t * a4, float64_t * a5);
int32_t submain(int32_t argc, char ** argv);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x4e494745423d3d00; // 0x900
int64_t g2 = 0x322e3025000a0078; // 0x927

// ------------------------ Functions -------------------------

// Address range: 0x0 - 0x3a6
int64_t kernel_ludcmp(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x100000000 * a1 >> 32; // 0x4
    int32_t v2 = v1; // 0x21
    if (v2 > 0) {
        int64_t v3 = v1 & 0xffffffff;
        int64_t v4 = 0;
        int64_t v5 = 0x3e80 * v4 + a2;
        int64_t v6; // 0x0
        int64_t v7; // 0x0
        int64_t v8; // 0x0
        int64_t v9; // 0x0
        int64_t v10; // 0x0
        int64_t v11; // 0x0
        int64_t v12; // 0x0
        int64_t v13; // 0x58
        int128_t v14; // 0xdd
        int128_t v15; // 0x86
        int128_t v16; // 0xa1
        int128_t v17; // 0xa6
        int64_t v18; // 0xca
        int64_t v19; // 0x53
        int64_t * v20; // 0x53
        if (v4 != 0) {
            v8 = 0;
            v19 = 8 * v8;
            v20 = (int64_t *)(v19 + v5);
            v13 = __asm_movsd(__asm_movsd_1(*v20));
            v6 = v19 + a2;
            v7 = 0;
            v11 = v13;
            v12 = v13;
            if (v8 != 0) {
                v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                v17 = __asm_movsd_1(v11);
                v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                v9 = v7 + 1;
                v7 = v9;
                v11 = v18;
                v12 = v18;
                while (v9 != v8) {
                    // 0x70
                    v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                    v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                    v17 = __asm_movsd_1(v11);
                    v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                    v9 = v7 + 1;
                    v7 = v9;
                    v11 = v18;
                    v12 = v18;
                }
            }
            // 0xdd
            v14 = __asm_movsd_1(v12);
            *v20 = __asm_movsd(__asm_divsd(v14, *(int64_t *)(v6 + 0x3e80 * v8)));
            v10 = v8 + 1;
            while (v10 != v4) {
                // 0x3d
                v8 = v10;
                v19 = 8 * v8;
                v20 = (int64_t *)(v19 + v5);
                v13 = __asm_movsd(__asm_movsd_1(*v20));
                v6 = v19 + a2;
                v7 = 0;
                v11 = v13;
                v12 = v13;
                if (v8 != 0) {
                    v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                    v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                    v17 = __asm_movsd_1(v11);
                    v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                    v9 = v7 + 1;
                    v7 = v9;
                    v11 = v18;
                    v12 = v18;
                    while (v9 != v8) {
                        // 0x70
                        v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                        v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                        v17 = __asm_movsd_1(v11);
                        v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                        v9 = v7 + 1;
                        v7 = v9;
                        v11 = v18;
                        v12 = v18;
                    }
                }
                // 0xdd
                v14 = __asm_movsd_1(v12);
                *v20 = __asm_movsd(__asm_divsd(v14, *(int64_t *)(v6 + 0x3e80 * v8)));
                v10 = v8 + 1;
            }
        }
        int64_t v21 = v4;
        int64_t v22 = 8 * v21; // 0x14e
        int64_t * v23 = (int64_t *)(v22 + v5); // 0x14e
        int64_t v24 = __asm_movsd(__asm_movsd_1(*v23)); // 0x153
        int64_t v25 = v24; // 0x165
        int64_t v26; // 0x0
        int128_t v27; // 0x181
        int128_t v28; // 0x19c
        int128_t v29; // 0x1a1
        int64_t v30; // 0x1c5
        if (v4 != 0) {
            // 0x16b
            v26 = 0;
            v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
            v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
            v29 = __asm_movsd_1(v24);
            v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
            v26++;
            v25 = v30;
            while (v26 != v4) {
                // 0x16b
                v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
                v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
                v29 = __asm_movsd_1(v30);
                v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
                v26++;
                v25 = v30;
            }
        }
        // 0x1d8
        *v23 = __asm_movsd(__asm_movsd_1(v25));
        v21++;
        while (v21 != v3) {
            // 0x138
            v22 = 8 * v21;
            v23 = (int64_t *)(v22 + v5);
            v24 = __asm_movsd(__asm_movsd_1(*v23));
            v25 = v24;
            if (v4 != 0) {
                // 0x16b
                v26 = 0;
                v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
                v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
                v29 = __asm_movsd_1(v24);
                v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
                v26++;
                v25 = v30;
                while (v26 != v4) {
                    // 0x16b
                    v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
                    v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
                    v29 = __asm_movsd_1(v30);
                    v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
                    v26++;
                    v25 = v30;
                }
            }
            // 0x1d8
            *v23 = __asm_movsd(__asm_movsd_1(v25));
            v21++;
        }
        int64_t v31 = v4 + 1;
        while (v31 != v3) {
            // 0x31
            v4 = v31;
            v5 = 0x3e80 * v4 + a2;
            if (v4 != 0) {
                v8 = 0;
                v19 = 8 * v8;
                v20 = (int64_t *)(v19 + v5);
                v13 = __asm_movsd(__asm_movsd_1(*v20));
                v6 = v19 + a2;
                v7 = 0;
                v11 = v13;
                v12 = v13;
                if (v8 != 0) {
                    v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                    v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                    v17 = __asm_movsd_1(v11);
                    v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                    v9 = v7 + 1;
                    v7 = v9;
                    v11 = v18;
                    v12 = v18;
                    while (v9 != v8) {
                        // 0x70
                        v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                        v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                        v17 = __asm_movsd_1(v11);
                        v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                        v9 = v7 + 1;
                        v7 = v9;
                        v11 = v18;
                        v12 = v18;
                    }
                }
                // 0xdd
                v14 = __asm_movsd_1(v12);
                *v20 = __asm_movsd(__asm_divsd(v14, *(int64_t *)(v6 + 0x3e80 * v8)));
                v10 = v8 + 1;
                while (v10 != v4) {
                    // 0x3d
                    v8 = v10;
                    v19 = 8 * v8;
                    v20 = (int64_t *)(v19 + v5);
                    v13 = __asm_movsd(__asm_movsd_1(*v20));
                    v6 = v19 + a2;
                    v7 = 0;
                    v11 = v13;
                    v12 = v13;
                    if (v8 != 0) {
                        v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                        v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                        v17 = __asm_movsd_1(v11);
                        v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                        v9 = v7 + 1;
                        v7 = v9;
                        v11 = v18;
                        v12 = v18;
                        while (v9 != v8) {
                            // 0x70
                            v15 = __asm_movsd_1(*(int64_t *)(8 * v7 + v5));
                            v16 = __asm_movsd_1(*(int64_t *)(0x3e80 * v7 + v6));
                            v17 = __asm_movsd_1(v11);
                            v18 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v15) ^ -0x8000000000000000), v16), v17));
                            v9 = v7 + 1;
                            v7 = v9;
                            v11 = v18;
                            v12 = v18;
                        }
                    }
                    // 0xdd
                    v14 = __asm_movsd_1(v12);
                    *v20 = __asm_movsd(__asm_divsd(v14, *(int64_t *)(v6 + 0x3e80 * v8)));
                    v10 = v8 + 1;
                }
            }
            // 0x138
            v21 = v4;
            v22 = 8 * v21;
            v23 = (int64_t *)(v22 + v5);
            v24 = __asm_movsd(__asm_movsd_1(*v23));
            v25 = v24;
            if (v4 != 0) {
                // 0x16b
                v26 = 0;
                v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
                v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
                v29 = __asm_movsd_1(v24);
                v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
                v26++;
                v25 = v30;
                while (v26 != v4) {
                    // 0x16b
                    v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
                    v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
                    v29 = __asm_movsd_1(v30);
                    v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
                    v26++;
                    v25 = v30;
                }
            }
            // 0x1d8
            *v23 = __asm_movsd(__asm_movsd_1(v25));
            v21++;
            while (v21 != v3) {
                // 0x138
                v22 = 8 * v21;
                v23 = (int64_t *)(v22 + v5);
                v24 = __asm_movsd(__asm_movsd_1(*v23));
                v25 = v24;
                if (v4 != 0) {
                    // 0x16b
                    v26 = 0;
                    v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
                    v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
                    v29 = __asm_movsd_1(v24);
                    v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
                    v26++;
                    v25 = v30;
                    while (v26 != v4) {
                        // 0x16b
                        v27 = __asm_movsd_1(*(int64_t *)(8 * v26 + v5));
                        v28 = __asm_movsd_1(*(int64_t *)(v22 + a2 + 0x3e80 * v26));
                        v29 = __asm_movsd_1(v30);
                        v30 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v27) ^ -0x8000000000000000), v28), v29));
                        v26++;
                        v25 = v30;
                    }
                }
                // 0x1d8
                *v23 = __asm_movsd(__asm_movsd_1(v25));
                v21++;
            }
            // 0x20b
            v31 = v4 + 1;
        }
        int64_t v32 = 0;
        int64_t v33 = 8 * v32; // 0x234
        int64_t v34 = __asm_movsd(__asm_movsd_1(*(int64_t *)(v33 + a3))); // 0x239
        int64_t v35 = v34; // 0x24b
        int64_t v36; // 0x0
        int64_t v37; // 0x267
        int128_t v38; // 0x267
        int128_t v39; // 0x274
        int128_t v40; // 0x279
        int64_t v41; // 0x29d
        if (v32 != 0) {
            // 0x251
            v36 = 0;
            v37 = 8 * v36;
            v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v32 + a2 + v37));
            v39 = __asm_movsd_1(*(int64_t *)(v37 + a5));
            v40 = __asm_movsd_1(v34);
            v41 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v38) ^ -0x8000000000000000), v39), v40));
            v36++;
            v35 = v41;
            while (v36 != v32) {
                // 0x251
                v37 = 8 * v36;
                v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v32 + a2 + v37));
                v39 = __asm_movsd_1(*(int64_t *)(v37 + a5));
                v40 = __asm_movsd_1(v41);
                v41 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v38) ^ -0x8000000000000000), v39), v40));
                v36++;
                v35 = v41;
            }
        }
        // 0x2b0
        *(int64_t *)(v33 + a5) = __asm_movsd(__asm_movsd_1(v35));
        int64_t v42 = v32 + 1;
        while (v42 != v3) {
            // 0x22c
            v32 = v42;
            v33 = 8 * v32;
            v34 = __asm_movsd(__asm_movsd_1(*(int64_t *)(v33 + a3)));
            v35 = v34;
            if (v32 != 0) {
                // 0x251
                v36 = 0;
                v37 = 8 * v36;
                v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v32 + a2 + v37));
                v39 = __asm_movsd_1(*(int64_t *)(v37 + a5));
                v40 = __asm_movsd_1(v34);
                v41 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v38) ^ -0x8000000000000000), v39), v40));
                v36++;
                v35 = v41;
                while (v36 != v32) {
                    // 0x251
                    v37 = 8 * v36;
                    v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v32 + a2 + v37));
                    v39 = __asm_movsd_1(*(int64_t *)(v37 + a5));
                    v40 = __asm_movsd_1(v41);
                    v41 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v38) ^ -0x8000000000000000), v39), v40));
                    v36++;
                    v35 = v41;
                }
            }
            // 0x2b0
            *(int64_t *)(v33 + a5) = __asm_movsd(__asm_movsd_1(v35));
            v42 = v32 + 1;
        }
    }
    int64_t v43 = v1 + 0xffffffff;
    int32_t v44 = v43;
    if (v44 < 0) {
        // 0x3a4
        return v43 & 0xffffffff;
    }
    int64_t v45 = 0x100000000 * v43;
    int64_t v46 = v45 >> 29; // 0x2eb
    int64_t v47 = __asm_movsd(__asm_movsd_1(*(int64_t *)(v46 + a5))); // 0x2f0
    int32_t v48 = v44 + 1;
    int64_t v49 = v47; // 0x304
    int32_t v50; // 0x0
    uint32_t v51; // 0x0
    int64_t v52; // 0x320
    int128_t v53; // 0x320
    int128_t v54; // 0x32d
    int128_t v55; // 0x332
    int64_t v56; // 0x356
    if (v48 < v2) {
        // 0x30a
        v51 = v48;
        v52 = 0x100000000 * (int64_t)v51 >> 29;
        v53 = __asm_movsd_1(*(int64_t *)(v52 + a2));
        v54 = __asm_movsd_1(*(int64_t *)(v52 + a4));
        v55 = __asm_movsd_1(v47);
        v56 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v53) ^ -0x8000000000000000), v54), v55));
        v50 = v51 + 1;
        v49 = v56;
        while (v51 != v44) {
            // 0x30a
            v51 = v50;
            v52 = 0x100000000 * (int64_t)v51 >> 29;
            v53 = __asm_movsd_1(*(int64_t *)(v52 + a2));
            v54 = __asm_movsd_1(*(int64_t *)(v52 + a4));
            v55 = __asm_movsd_1(v56);
            v56 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v53) ^ -0x8000000000000000), v54), v55));
            v50 = v51 + 1;
            v49 = v56;
        }
    }
    int128_t v57 = __asm_movsd_1(v49); // 0x369
    int64_t v58 = v45 >> 32;
    int64_t v59 = __asm_movsd(__asm_divsd(v57, *(int64_t *)(v46 + a2 + 0x3e80 * v58))); // 0x391
    *(int64_t *)(v46 + a4) = v59;
    int64_t v60 = v58 + 0xffffffff;
    int32_t v61 = v60;
    while (v61 >= 0) {
        // 0x2e3
        v45 = 0x100000000 * v60;
        v46 = v45 >> 29;
        v47 = __asm_movsd(__asm_movsd_1(*(int64_t *)(v46 + a5)));
        v48 = v61 + 1;
        v49 = v47;
        if (v48 < v2) {
            // 0x30a
            v51 = v48;
            v52 = 0x100000000 * (int64_t)v51 >> 29;
            v53 = __asm_movsd_1(*(int64_t *)(v52 + a2));
            v54 = __asm_movsd_1(*(int64_t *)(v52 + a4));
            v55 = __asm_movsd_1(v47);
            v56 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v53) ^ -0x8000000000000000), v54), v55));
            v50 = v51 + 1;
            v49 = v56;
            while (v51 != v44) {
                // 0x30a
                v51 = v50;
                v52 = 0x100000000 * (int64_t)v51 >> 29;
                v53 = __asm_movsd_1(*(int64_t *)(v52 + a2));
                v54 = __asm_movsd_1(*(int64_t *)(v52 + a4));
                v55 = __asm_movsd_1(v56);
                v56 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v53) ^ -0x8000000000000000), v54), v55));
                v50 = v51 + 1;
                v49 = v56;
            }
        }
        // 0x369
        v57 = __asm_movsd_1(v49);
        v58 = v45 >> 32;
        v59 = __asm_movsd(__asm_divsd(v57, *(int64_t *)(v46 + a2 + 0x3e80 * v58)));
        *(int64_t *)(v46 + a4) = v59;
        v60 = v58 + 0xffffffff;
        v61 = v60;
    }
    // 0x3a4
    return v60 & 0xffffffff;
}

// Address range: 0x3b0 - 0x4a0
// Line range:    140 - 183
int32_t submain(int32_t argc, char ** argv) {
    int64_t str = polybench_alloc_data(0x3d0900, 8); // 0x3d0
    int64_t v1 = polybench_alloc_data(2000, 8); // 0x3e3
    float64_t (*v2)[1] = (float64_t (*)[1])v1; // 0x3e8
    int64_t v3 = polybench_alloc_data(2000, 8); // 0x3f6
    float64_t (*v4)[1] = (float64_t (*)[1])v3; // 0x3fb
    int64_t v5 = polybench_alloc_data(2000, 8); // 0x409
    float64_t (*v6)[1] = (float64_t (*)[1])v5; // 0x40e
    init_array(2000, &((float64_t (*)[1][1])str)[0], v2, v4, v6);
    if (argc < 43) {
        // 0x474
        free(&((float64_t (*)[1][1])str)[0]);
        free(v2);
        free(v4);
        free(v6);
        return 0;
    }
    int64_t strcmp_rc = strcmp(str, &g1, (float64_t *)v1, (float64_t *)v3, (float64_t *)v5); // 0x45a
    if ((int32_t)strcmp_rc == 0) {
        // 0x468
        print_array(2000, v4);
    }
    // 0x474
    free(&((float64_t (*)[1][1])str)[0]);
    free(v2);
    free(v4);
    free(v6);
    return 0;
}

// Address range: 0x4a0 - 0x7ec
// Line range:    26 - 68
void init_array(uint32_t n, float64_t (*A)[1], float64_t * b, float64_t * x, float64_t * y) {
    int128_t v1 = __asm_cvtsi2sd(n); // 0x4bb
    int64_t v2 = __asm_movsd(v1); // 0x4c0
    if (n <= 0) {
        // 0x7dd
        free((float64_t (*)[1])polybench_alloc_data(0x3d0900, 8));
        return;
    }
    int64_t v3 = 0x100000000 * (int64_t)y >> 32;
    int64_t v4 = n;
    int64_t v5 = 0;
    int128_t v6 = v1;
    int128_t v7 = __asm_xorps(v6, v6); // 0x4e0
    int64_t v8 = __asm_movsd(v7); // 0x4e3
    int64_t v9 = 8 * v5; // 0x4e3
    *(int64_t *)(v9 + (int64_t)x) = v8;
    *(int64_t *)(v9 + v3) = __asm_movsd(__asm_xorps(v7, v7));
    v5++;
    int128_t v10 = __asm_divsd(__asm_cvtsi2sd((int32_t)v5), v2); // 0x502
    int128_t v11 = __asm_addsd(__asm_divsd_2(v10, __asm_movsd_1(0x4000000000000000)), __asm_movsd_1(0x4010000000000000)); // 0x51b
    *(int64_t *)(v9 + (int64_t)b) = __asm_movsd(v11);
    while (v5 != v4) {
        // 0x4d8
        v6 = v11;
        v7 = __asm_xorps(v6, v6);
        v8 = __asm_movsd(v7);
        v9 = 8 * v5;
        *(int64_t *)(v9 + (int64_t)x) = v8;
        *(int64_t *)(v9 + v3) = __asm_movsd(__asm_xorps(v7, v7));
        v5++;
        v10 = __asm_divsd(__asm_cvtsi2sd((int32_t)v5), v2);
        v11 = __asm_addsd(__asm_divsd_2(v10, __asm_movsd_1(0x4000000000000000)), __asm_movsd_1(0x4010000000000000));
        *(int64_t *)(v9 + (int64_t)b) = __asm_movsd(v11);
    }
    int64_t v12 = (int64_t)A;
    int64_t v13 = 1; // 0x4a0
    int64_t v14 = 0;
    int64_t v15 = 0x3e80 * v14 + v12;
    int64_t v16 = 0;
    int32_t v17 = -(int32_t)v16;
    int128_t v18 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v17 >> 31) | (int64_t)v17) % v4)); // 0x569
    int128_t v19 = __asm_addsd(__asm_divsd_2(v18, __asm_cvtsi2sd(n)), __asm_movsd_1(0x3ff0000000000000)); // 0x57e
    *(int64_t *)(8 * v16 + v15) = __asm_movsd(v19);
    v16++;
    while (v16 != v13) {
        // 0x560
        v17 = -(int32_t)v16;
        v18 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v17 >> 31) | (int64_t)v17) % v4));
        v19 = __asm_addsd(__asm_divsd_2(v18, __asm_cvtsi2sd(n)), __asm_movsd_1(0x3ff0000000000000));
        *(int64_t *)(8 * v16 + v15) = __asm_movsd(v19);
        v16++;
    }
    int64_t v20 = v14 + 1;
    int64_t v21 = v13; // 0x5ba
    int128_t v22 = v19; // 0x5ba
    int64_t v23; // 0x4a0
    int128_t v24; // 0x5d6
    int128_t v25; // 0x4a0
    if (v20 < (int64_t)n) {
        v25 = v22;
        v24 = __asm_xorps(v25, v25);
        *(int64_t *)(8 * v21 + v15) = __asm_movsd(v24);
        v23 = v21 + 1;
        v21 = v23;
        while ((int32_t)v23 != n) {
            // 0x5c0
            v25 = v24;
            v24 = __asm_xorps(v25, v25);
            *(int64_t *)(8 * v21 + v15) = __asm_movsd(v24);
            v23 = v21 + 1;
            v21 = v23;
        }
    }
    int128_t v26 = __asm_movsd_1(0x3ff0000000000000); // 0x602
    *(int64_t *)(v15 + 8 * v14) = __asm_movsd(v26);
    v13++;
    while (v20 != v4) {
        // 0x560
        v14 = v20;
        v15 = 0x3e80 * v14 + v12;
        v16 = 0;
        v17 = -(int32_t)v16;
        v18 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v17 >> 31) | (int64_t)v17) % v4));
        v19 = __asm_addsd(__asm_divsd_2(v18, __asm_cvtsi2sd(n)), __asm_movsd_1(0x3ff0000000000000));
        *(int64_t *)(8 * v16 + v15) = __asm_movsd(v19);
        v16++;
        while (v16 != v13) {
            // 0x560
            v17 = -(int32_t)v16;
            v18 = __asm_cvtsi2sd((int32_t)((0x100000000 * (int64_t)(v17 >> 31) | (int64_t)v17) % v4));
            v19 = __asm_addsd(__asm_divsd_2(v18, __asm_cvtsi2sd(n)), __asm_movsd_1(0x3ff0000000000000));
            *(int64_t *)(8 * v16 + v15) = __asm_movsd(v19);
            v16++;
        }
        // 0x5b4
        v20 = v14 + 1;
        v21 = v13;
        v22 = v19;
        if (v20 < (int64_t)n) {
            v25 = v22;
            v24 = __asm_xorps(v25, v25);
            *(int64_t *)(8 * v21 + v15) = __asm_movsd(v24);
            v23 = v21 + 1;
            v21 = v23;
            while ((int32_t)v23 != n) {
                // 0x5c0
                v25 = v24;
                v24 = __asm_xorps(v25, v25);
                *(int64_t *)(8 * v21 + v15) = __asm_movsd(v24);
                v23 = v21 + 1;
                v21 = v23;
            }
        }
        // 0x5ec
        v26 = __asm_movsd_1(0x3ff0000000000000);
        *(int64_t *)(v15 + 8 * v14) = __asm_movsd(v26);
        v13++;
    }
    int64_t v27 = polybench_alloc_data(0x3d0900, 8); // 0x627
    int64_t v28 = 0;
    int64_t v29 = 0;
    int128_t v30 = v26;
    int128_t v31 = __asm_xorps(v30, v30); // 0x66c
    *(int64_t *)(0x3e80 * v28 + v27 + 8 * v29) = __asm_movsd(v31);
    v29++;
    while (v29 != v4) {
        // 0x656
        v30 = v31;
        v31 = __asm_xorps(v30, v30);
        *(int64_t *)(0x3e80 * v28 + v27 + 8 * v29) = __asm_movsd(v31);
        v29++;
    }
    // 0x687
    v28++;
    int64_t v32 = 0; // 0x63d
    while (v28 != v4) {
        // 0x656
        v29 = 0;
        v30 = v31;
        v31 = __asm_xorps(v30, v30);
        *(int64_t *)(0x3e80 * v28 + v27 + 8 * v29) = __asm_movsd(v31);
        v29++;
        while (v29 != v4) {
            // 0x656
            v30 = v31;
            v31 = __asm_xorps(v30, v30);
            *(int64_t *)(0x3e80 * v28 + v27 + 8 * v29) = __asm_movsd(v31);
            v29++;
        }
        // 0x687
        v28++;
        v32 = 0;
    }
    int64_t v33 = 8 * v32 + v12;
    int64_t v34 = 0;
    int64_t v35 = 0x3e80 * v34; // 0x6d6
    int64_t v36 = 0;
    int128_t v37 = __asm_movsd_1(*(int64_t *)(v35 + v33)); // 0x6e4
    int128_t v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v36 + v33)); // 0x6ff
    int64_t * v39 = (int64_t *)(v35 + v27 + 8 * v36); // 0x71a
    *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v37, v38), __asm_movsd_1(*v39)));
    v36++;
    while (v36 != v4) {
        // 0x6ce
        v37 = __asm_movsd_1(*(int64_t *)(v35 + v33));
        v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v36 + v33));
        v39 = (int64_t *)(v35 + v27 + 8 * v36);
        *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v37, v38), __asm_movsd_1(*v39)));
        v36++;
    }
    // 0x73f
    v34++;
    while (v34 != v4) {
        // 0x6ce
        v35 = 0x3e80 * v34;
        v36 = 0;
        v37 = __asm_movsd_1(*(int64_t *)(v35 + v33));
        v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v36 + v33));
        v39 = (int64_t *)(v35 + v27 + 8 * v36);
        *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v37, v38), __asm_movsd_1(*v39)));
        v36++;
        while (v36 != v4) {
            // 0x6ce
            v37 = __asm_movsd_1(*(int64_t *)(v35 + v33));
            v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v36 + v33));
            v39 = (int64_t *)(v35 + v27 + 8 * v36);
            *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v37, v38), __asm_movsd_1(*v39)));
            v36++;
        }
        // 0x73f
        v34++;
    }
    int64_t v40 = v32 + 1;
    v32 = v40;
    int64_t v41 = 0; // 0x6a2
    while (v40 != v4) {
        // 0x6c2
        v33 = 8 * v32 + v12;
        v34 = 0;
        v35 = 0x3e80 * v34;
        v36 = 0;
        v37 = __asm_movsd_1(*(int64_t *)(v35 + v33));
        v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v36 + v33));
        v39 = (int64_t *)(v35 + v27 + 8 * v36);
        *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v37, v38), __asm_movsd_1(*v39)));
        v36++;
        while (v36 != v4) {
            // 0x6ce
            v37 = __asm_movsd_1(*(int64_t *)(v35 + v33));
            v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v36 + v33));
            v39 = (int64_t *)(v35 + v27 + 8 * v36);
            *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v37, v38), __asm_movsd_1(*v39)));
            v36++;
        }
        // 0x73f
        v34++;
        while (v34 != v4) {
            // 0x6ce
            v35 = 0x3e80 * v34;
            v36 = 0;
            v37 = __asm_movsd_1(*(int64_t *)(v35 + v33));
            v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v36 + v33));
            v39 = (int64_t *)(v35 + v27 + 8 * v36);
            *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v37, v38), __asm_movsd_1(*v39)));
            v36++;
            while (v36 != v4) {
                // 0x6ce
                v37 = __asm_movsd_1(*(int64_t *)(v35 + v33));
                v38 = __asm_movsd_1(*(int64_t *)(0x3e80 * v36 + v33));
                v39 = (int64_t *)(v35 + v27 + 8 * v36);
                *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v37, v38), __asm_movsd_1(*v39)));
                v36++;
            }
            // 0x73f
            v34++;
        }
        // 0x752
        v40 = v32 + 1;
        v32 = v40;
        v41 = 0;
    }
    int64_t v42 = 0;
    int64_t v43 = 8 * v42 + 0x3e80 * v41;
    *(int64_t *)(v43 + v12) = __asm_movsd(__asm_movsd_1(*(int64_t *)(v43 + v27)));
    v42++;
    while (v42 != v4) {
        // 0x786
        v43 = 8 * v42 + 0x3e80 * v41;
        *(int64_t *)(v43 + v12) = __asm_movsd(__asm_movsd_1(*(int64_t *)(v43 + v27)));
        v42++;
    }
    int64_t v44 = v41 + 1;
    v41 = v44;
    while (v44 != v4) {
        // 0x786
        v42 = 0;
        v43 = 8 * v42 + 0x3e80 * v41;
        *(int64_t *)(v43 + v12) = __asm_movsd(__asm_movsd_1(*(int64_t *)(v43 + v27)));
        v42++;
        while (v42 != v4) {
            // 0x786
            v43 = 8 * v42 + 0x3e80 * v41;
            *(int64_t *)(v43 + v12) = __asm_movsd(__asm_movsd_1(*(int64_t *)(v43 + v27)));
            v42++;
        }
        // 0x7cf
        v44 = v41 + 1;
        v41 = v44;
    }
    // 0x7dd
    free((float64_t (*)[1])v27);
}

// Address range: 0x7f0 - 0x8e5
// Line range:    74 - 88
void print_array(uint32_t n, float64_t * x) {
    // 0x7f0
    int64_t v1; // 0x7f0
    int128_t v2; // 0x7f0
    fprintf(*(int64_t *)*(int64_t *)2054, "==BEGIN DUMP_ARRAYS==\n", v1, v1, v2);
    int64_t stream = *(int64_t *)*(int64_t *)2078; // 0x81e
    fprintf(stream, "begin dump: %s", (int64_t)&g2, v1, v2);
    int64_t v3; // 0x7f0
    int128_t v4; // 0x7f0
    if (n > 0) {
        int64_t v5 = 0;
        int64_t v6 = (0x100000000 * (int64_t)((int32_t)v5 >> 31) | v5) % 20; // 0x852
        int64_t v7 = v6 & 0xffffffff; // 0x852
        int128_t v8; // 0x7f0
        if ((int32_t)v6 == 0) {
            // 0x85d
            fprintf(*(int64_t *)*(int64_t *)2148, "\n", v7, 20, v8);
        }
        int128_t v9 = __asm_movsd_1(*(int64_t *)(8 * v5 + (int64_t)x)); // 0x887
        fprintf(*(int64_t *)*(int64_t *)2172, "%0.2lf ", v7, v5, v9);
        int64_t v10 = v5 + 1;
        v8 = v9;
        v4 = v9;
        v3 = v5;
        while (v10 != (int64_t)n) {
            // 0x849
            v5 = v10;
            v6 = (0x100000000 * (int64_t)((int32_t)v5 >> 31) | v5) % 20;
            v7 = v6 & 0xffffffff;
            if ((int32_t)v6 == 0) {
                // 0x85d
                fprintf(*(int64_t *)*(int64_t *)2148, "\n", v7, 20, v8);
            }
            // 0x875
            v9 = __asm_movsd_1(*(int64_t *)(8 * v5 + (int64_t)x));
            fprintf(*(int64_t *)*(int64_t *)2172, "%0.2lf ", v7, v5, v9);
            v10 = v5 + 1;
            v8 = v9;
            v4 = v9;
            v3 = v5;
        }
    }
    int64_t stream2 = *(int64_t *)*(int64_t *)2223; // 0x8af
    fprintf(stream2, "\nend   dump: %s\n", (int64_t)&g2, v3, v4);
    int64_t stream3 = *(int64_t *)*(int64_t *)2254; // 0x8ce
    fprintf(stream3, "==END   DUMP_ARRAYS==\n", (int64_t)&g2, v3, v4);
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (17.0.0)
// Detected functions: 4

