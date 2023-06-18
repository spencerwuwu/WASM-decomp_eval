
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "PL_2mm.h"
void kernel_2mm(uint32_t ni, int32_t nj, uint32_t nk, uint32_t nl, float64_t alpha, float64_t beta, float64_t (*tmp)[1], float64_t (*A)[1], float64_t (*B)[1], float64_t (*C)[1], float64_t (*D)[1]) {
    int128_t v1 = (float32_t)alpha;
    int64_t v2 = __asm_movsd_1(v1); // 0x3ac
    int64_t v3 = __asm_movsd_1((int128_t)(int32_t)(float32_t)beta); // 0x3b1
    if (ni <= 0) {
        // 0x59c
        return;
    }
    int64_t v4 = (int64_t)tmp;
    int64_t v5 = nj;
    int64_t v6 = ni;
    int64_t v7 = 0;
    int128_t v8 = v1; // 0x3de
    int64_t v9; // 0x390
    int64_t v10; // 0x390
    int64_t v11; // 0x3fd
    int64_t v12; // 0x3fd
    int64_t * v13; // 0x3fd
    int128_t v14; // 0x430
    int128_t v15; // 0x44b
    int128_t v16; // 0x46f
    int64_t v17; // 0x390
    int128_t v18; // 0x3fa
    int128_t v19; // 0x390
    int128_t v20; // 0x390
    int128_t v21; // 0x390
    if (nj > 0) {
        // 0x3e4
        v17 = 0x2260 * v7 + (0x100000000 * (int64_t)A >> 32);
        v10 = 0;
        v19 = v1;
        v18 = __asm_xorps(v19, v19);
        v11 = __asm_movsd_1(v18);
        v12 = 8 * v10;
        v13 = (int64_t *)(0x1c20 * v7 + v4 + v12);
        *v13 = v11;
        v20 = v18;
        if (nk > 0) {
            // 0x415
            v9 = 0;
            v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v17 + 8 * v9));
            v15 = __asm_movsd(*(int64_t *)(v12 + (int64_t)B + 0x1c20 * v9));
            v16 = __asm_addsd(__asm_mulsd_2(v14, v15), __asm_movsd(*v13));
            *v13 = __asm_movsd_1(v16);
            v9++;
            v20 = v16;
            while (v9 != (int64_t)nk) {
                // 0x415
                v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v17 + 8 * v9));
                v15 = __asm_movsd(*(int64_t *)(v12 + (int64_t)B + 0x1c20 * v9));
                v16 = __asm_addsd(__asm_mulsd_2(v14, v15), __asm_movsd(*v13));
                *v13 = __asm_movsd_1(v16);
                v9++;
                v20 = v16;
            }
        }
        // 0x48b
        v21 = v20;
        v10++;
        v8 = v21;
        while (v10 != v5) {
            // 0x3e4
            v19 = v21;
            v18 = __asm_xorps(v19, v19);
            v11 = __asm_movsd_1(v18);
            v12 = 8 * v10;
            v13 = (int64_t *)(0x1c20 * v7 + v4 + v12);
            *v13 = v11;
            v20 = v18;
            if (nk > 0) {
                // 0x415
                v9 = 0;
                v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v17 + 8 * v9));
                v15 = __asm_movsd(*(int64_t *)(v12 + (int64_t)B + 0x1c20 * v9));
                v16 = __asm_addsd(__asm_mulsd_2(v14, v15), __asm_movsd(*v13));
                *v13 = __asm_movsd_1(v16);
                v9++;
                v20 = v16;
                while (v9 != (int64_t)nk) {
                    // 0x415
                    v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v17 + 8 * v9));
                    v15 = __asm_movsd(*(int64_t *)(v12 + (int64_t)B + 0x1c20 * v9));
                    v16 = __asm_addsd(__asm_mulsd_2(v14, v15), __asm_movsd(*v13));
                    *v13 = __asm_movsd_1(v16);
                    v9++;
                    v20 = v16;
                }
            }
            // 0x48b
            v21 = v20;
            v10++;
            v8 = v21;
        }
    }
    int64_t v22 = v7 + 1;
    while (v22 != v6) {
        int128_t v23 = v8;
        v7 = v22;
        v8 = v23;
        if (nj > 0) {
            // 0x3e4
            v17 = 0x2260 * v7 + (0x100000000 * (int64_t)A >> 32);
            v10 = 0;
            v19 = v23;
            v18 = __asm_xorps(v19, v19);
            v11 = __asm_movsd_1(v18);
            v12 = 8 * v10;
            v13 = (int64_t *)(0x1c20 * v7 + v4 + v12);
            *v13 = v11;
            v20 = v18;
            if (nk > 0) {
                // 0x415
                v9 = 0;
                v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v17 + 8 * v9));
                v15 = __asm_movsd(*(int64_t *)(v12 + (int64_t)B + 0x1c20 * v9));
                v16 = __asm_addsd(__asm_mulsd_2(v14, v15), __asm_movsd(*v13));
                *v13 = __asm_movsd_1(v16);
                v9++;
                v20 = v16;
                while (v9 != (int64_t)nk) {
                    // 0x415
                    v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v17 + 8 * v9));
                    v15 = __asm_movsd(*(int64_t *)(v12 + (int64_t)B + 0x1c20 * v9));
                    v16 = __asm_addsd(__asm_mulsd_2(v14, v15), __asm_movsd(*v13));
                    *v13 = __asm_movsd_1(v16);
                    v9++;
                    v20 = v16;
                }
            }
            // 0x48b
            v21 = v20;
            v10++;
            v8 = v21;
            while (v10 != v5) {
                // 0x3e4
                v19 = v21;
                v18 = __asm_xorps(v19, v19);
                v11 = __asm_movsd_1(v18);
                v12 = 8 * v10;
                v13 = (int64_t *)(0x1c20 * v7 + v4 + v12);
                *v13 = v11;
                v20 = v18;
                if (nk > 0) {
                    // 0x415
                    v9 = 0;
                    v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v17 + 8 * v9));
                    v15 = __asm_movsd(*(int64_t *)(v12 + (int64_t)B + 0x1c20 * v9));
                    v16 = __asm_addsd(__asm_mulsd_2(v14, v15), __asm_movsd(*v13));
                    *v13 = __asm_movsd_1(v16);
                    v9++;
                    v20 = v16;
                    while (v9 != (int64_t)nk) {
                        // 0x415
                        v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v17 + 8 * v9));
                        v15 = __asm_movsd(*(int64_t *)(v12 + (int64_t)B + 0x1c20 * v9));
                        v16 = __asm_addsd(__asm_mulsd_2(v14, v15), __asm_movsd(*v13));
                        *v13 = __asm_movsd_1(v16);
                        v9++;
                        v20 = v16;
                    }
                }
                // 0x48b
                v21 = v20;
                v10++;
                v8 = v21;
            }
        }
        // 0x49e
        v22 = v7 + 1;
    }
    int64_t v24 = 0;
    int64_t v25; // 0x390
    int64_t v26; // 0x390
    int64_t v27; // 0x390
    int128_t v28; // 0x4d2
    int64_t v29; // 0x4ed
    int64_t * v30; // 0x4ed
    int128_t v31; // 0x520
    int128_t v32; // 0x53b
    if (nl > 0) {
        // 0x4d2
        v27 = 0x1c20 * v24 + v4;
        v26 = 0;
        v28 = __asm_movsd(v3);
        v29 = 8 * v26;
        v30 = (int64_t *)(0x2580 * v24 + (int64_t)D + v29);
        *v30 = __asm_movsd_1(__asm_mulsd(v28, *v30));
        if (nj > 0) {
            // 0x50a
            v25 = 0;
            v31 = __asm_movsd(*(int64_t *)(v27 + 8 * v25));
            v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)C + 0x2580 * v25));
            *v30 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v31, v32), __asm_movsd(*v30)));
            v25++;
            while (v25 != v5) {
                // 0x50a
                v31 = __asm_movsd(*(int64_t *)(v27 + 8 * v25));
                v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)C + 0x2580 * v25));
                *v30 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v31, v32), __asm_movsd(*v30)));
                v25++;
            }
        }
        // 0x57b
        v26++;
        while (v26 != (int64_t)nl) {
            // 0x4d2
            v28 = __asm_movsd(v3);
            v29 = 8 * v26;
            v30 = (int64_t *)(0x2580 * v24 + (int64_t)D + v29);
            *v30 = __asm_movsd_1(__asm_mulsd(v28, *v30));
            if (nj > 0) {
                // 0x50a
                v25 = 0;
                v31 = __asm_movsd(*(int64_t *)(v27 + 8 * v25));
                v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)C + 0x2580 * v25));
                *v30 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v31, v32), __asm_movsd(*v30)));
                v25++;
                while (v25 != v5) {
                    // 0x50a
                    v31 = __asm_movsd(*(int64_t *)(v27 + 8 * v25));
                    v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)C + 0x2580 * v25));
                    *v30 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v31, v32), __asm_movsd(*v30)));
                    v25++;
                }
            }
            // 0x57b
            v26++;
        }
    }
    int64_t v33 = v24 + 1;
    while (v33 != v6) {
        // 0x4c6
        v24 = v33;
        if (nl > 0) {
            // 0x4d2
            v27 = 0x1c20 * v24 + v4;
            v26 = 0;
            v28 = __asm_movsd(v3);
            v29 = 8 * v26;
            v30 = (int64_t *)(0x2580 * v24 + (int64_t)D + v29);
            *v30 = __asm_movsd_1(__asm_mulsd(v28, *v30));
            if (nj > 0) {
                // 0x50a
                v25 = 0;
                v31 = __asm_movsd(*(int64_t *)(v27 + 8 * v25));
                v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)C + 0x2580 * v25));
                *v30 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v31, v32), __asm_movsd(*v30)));
                v25++;
                while (v25 != v5) {
                    // 0x50a
                    v31 = __asm_movsd(*(int64_t *)(v27 + 8 * v25));
                    v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)C + 0x2580 * v25));
                    *v30 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v31, v32), __asm_movsd(*v30)));
                    v25++;
                }
            }
            // 0x57b
            v26++;
            while (v26 != (int64_t)nl) {
                // 0x4d2
                v28 = __asm_movsd(v3);
                v29 = 8 * v26;
                v30 = (int64_t *)(0x2580 * v24 + (int64_t)D + v29);
                *v30 = __asm_movsd_1(__asm_mulsd(v28, *v30));
                if (nj > 0) {
                    // 0x50a
                    v25 = 0;
                    v31 = __asm_movsd(*(int64_t *)(v27 + 8 * v25));
                    v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)C + 0x2580 * v25));
                    *v30 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v31, v32), __asm_movsd(*v30)));
                    v25++;
                    while (v25 != v5) {
                        // 0x50a
                        v31 = __asm_movsd(*(int64_t *)(v27 + 8 * v25));
                        v32 = __asm_movsd(*(int64_t *)(v29 + (int64_t)C + 0x2580 * v25));
                        *v30 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v31, v32), __asm_movsd(*v30)));
                        v25++;
                    }
                }
                // 0x57b
                v26++;
            }
        }
        // 0x58e
        v33 = v24 + 1;
    }
}
