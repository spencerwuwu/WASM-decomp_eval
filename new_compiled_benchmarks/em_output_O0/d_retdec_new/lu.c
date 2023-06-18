
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "lu.h"
int64_t kernel_lu(int64_t a1, int64_t a2) {
    // 0x0
    if ((int32_t)a1 <= 0) {
        // 0x1e2
        return 0;
    }
    int64_t result = a1 & 0xffffffff;
    int64_t v1 = 0;
    int64_t v2 = 0x3e80 * v1;
    int64_t v3 = v2 + a2;
    int64_t v4; // 0x0
    int64_t v5; // 0x0
    int64_t v6; // 0x0
    int64_t v7; // 0x0
    int64_t v8; // 0x0
    int64_t * v9; // 0x0
    int128_t v10; // 0x5a
    int128_t v11; // 0x75
    int128_t v12; // 0x90
    int128_t v13; // 0xac
    int128_t v14; // 0xdd
    int64_t * v15; // 0xf8
    if (v1 != 0) {
        v6 = 0;
        v4 = 8 * v6;
        v5 = v4 + a2;
        if (v6 != 0) {
            // 0x44
            v9 = (int64_t *)(v4 + v3);
            v7 = 0;
            v10 = __asm_movsd(*(int64_t *)(8 * v7 + v3));
            v11 = __asm_movsd(*(int64_t *)(0x3e80 * v7 + v5));
            v12 = __asm_movsd(*v9);
            v13 = __asm_mulsd(__asm_movq_2(__asm_movq(v10) ^ -0x8000000000000000), v11);
            *v9 = __asm_movsd_1(__asm_addsd(v13, v12));
            v7++;
            while (v7 != v6) {
                // 0x44
                v10 = __asm_movsd(*(int64_t *)(8 * v7 + v3));
                v11 = __asm_movsd(*(int64_t *)(0x3e80 * v7 + v5));
                v12 = __asm_movsd(*v9);
                v13 = __asm_mulsd(__asm_movq_2(__asm_movq(v10) ^ -0x8000000000000000), v11);
                *v9 = __asm_movsd_1(__asm_addsd(v13, v12));
                v7++;
            }
        }
        // 0xc7
        v14 = __asm_movsd(*(int64_t *)(v5 + 0x3e80 * v6));
        v15 = (int64_t *)(v5 + v2);
        *v15 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v15), v14));
        v8 = v6 + 1;
        while (v8 != v1) {
            // 0x38
            v6 = v8;
            v4 = 8 * v6;
            v5 = v4 + a2;
            if (v6 != 0) {
                // 0x44
                v9 = (int64_t *)(v4 + v3);
                v7 = 0;
                v10 = __asm_movsd(*(int64_t *)(8 * v7 + v3));
                v11 = __asm_movsd(*(int64_t *)(0x3e80 * v7 + v5));
                v12 = __asm_movsd(*v9);
                v13 = __asm_mulsd(__asm_movq_2(__asm_movq(v10) ^ -0x8000000000000000), v11);
                *v9 = __asm_movsd_1(__asm_addsd(v13, v12));
                v7++;
                while (v7 != v6) {
                    // 0x44
                    v10 = __asm_movsd(*(int64_t *)(8 * v7 + v3));
                    v11 = __asm_movsd(*(int64_t *)(0x3e80 * v7 + v5));
                    v12 = __asm_movsd(*v9);
                    v13 = __asm_mulsd(__asm_movq_2(__asm_movq(v10) ^ -0x8000000000000000), v11);
                    *v9 = __asm_movsd_1(__asm_addsd(v13, v12));
                    v7++;
                }
            }
            // 0xc7
            v14 = __asm_movsd(*(int64_t *)(v5 + 0x3e80 * v6));
            v15 = (int64_t *)(v5 + v2);
            *v15 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v15), v14));
            v8 = v6 + 1;
        }
    }
    int64_t v16 = v1;
    int64_t v17; // 0x0
    int64_t v18; // 0x0
    int64_t * v19; // 0x0
    int128_t v20; // 0x14f
    int128_t v21; // 0x16a
    int128_t v22; // 0x185
    int128_t v23; // 0x1a1
    if (v1 != 0) {
        // 0x139
        v18 = 8 * v16;
        v19 = (int64_t *)(v18 + v3);
        v17 = 0;
        v20 = __asm_movsd(*(int64_t *)(8 * v17 + v3));
        v21 = __asm_movsd(*(int64_t *)(v18 + a2 + 0x3e80 * v17));
        v22 = __asm_movsd(*v19);
        v23 = __asm_mulsd(__asm_movq_2(__asm_movq(v20) ^ -0x8000000000000000), v21);
        *v19 = __asm_movsd_1(__asm_addsd(v23, v22));
        v17++;
        while (v17 != v1) {
            // 0x139
            v20 = __asm_movsd(*(int64_t *)(8 * v17 + v3));
            v21 = __asm_movsd(*(int64_t *)(v18 + a2 + 0x3e80 * v17));
            v22 = __asm_movsd(*v19);
            v23 = __asm_mulsd(__asm_movq_2(__asm_movq(v20) ^ -0x8000000000000000), v21);
            *v19 = __asm_movsd_1(__asm_addsd(v23, v22));
            v17++;
        }
    }
    int64_t v24 = v16 + 1;
    while (v24 != result) {
        // 0x12d
        v16 = v24;
        if (v1 != 0) {
            // 0x139
            v18 = 8 * v16;
            v19 = (int64_t *)(v18 + v3);
            v17 = 0;
            v20 = __asm_movsd(*(int64_t *)(8 * v17 + v3));
            v21 = __asm_movsd(*(int64_t *)(v18 + a2 + 0x3e80 * v17));
            v22 = __asm_movsd(*v19);
            v23 = __asm_mulsd(__asm_movq_2(__asm_movq(v20) ^ -0x8000000000000000), v21);
            *v19 = __asm_movsd_1(__asm_addsd(v23, v22));
            v17++;
            while (v17 != v1) {
                // 0x139
                v20 = __asm_movsd(*(int64_t *)(8 * v17 + v3));
                v21 = __asm_movsd(*(int64_t *)(v18 + a2 + 0x3e80 * v17));
                v22 = __asm_movsd(*v19);
                v23 = __asm_mulsd(__asm_movq_2(__asm_movq(v20) ^ -0x8000000000000000), v21);
                *v19 = __asm_movsd_1(__asm_addsd(v23, v22));
                v17++;
            }
        }
        // 0x1c1
        v24 = v16 + 1;
    }
    int64_t v25 = v1 + 1;
    while (v25 != result) {
        // 0x25
        v1 = v25;
        v2 = 0x3e80 * v1;
        v3 = v2 + a2;
        if (v1 != 0) {
            v6 = 0;
            v4 = 8 * v6;
            v5 = v4 + a2;
            if (v6 != 0) {
                // 0x44
                v9 = (int64_t *)(v4 + v3);
                v7 = 0;
                v10 = __asm_movsd(*(int64_t *)(8 * v7 + v3));
                v11 = __asm_movsd(*(int64_t *)(0x3e80 * v7 + v5));
                v12 = __asm_movsd(*v9);
                v13 = __asm_mulsd(__asm_movq_2(__asm_movq(v10) ^ -0x8000000000000000), v11);
                *v9 = __asm_movsd_1(__asm_addsd(v13, v12));
                v7++;
                while (v7 != v6) {
                    // 0x44
                    v10 = __asm_movsd(*(int64_t *)(8 * v7 + v3));
                    v11 = __asm_movsd(*(int64_t *)(0x3e80 * v7 + v5));
                    v12 = __asm_movsd(*v9);
                    v13 = __asm_mulsd(__asm_movq_2(__asm_movq(v10) ^ -0x8000000000000000), v11);
                    *v9 = __asm_movsd_1(__asm_addsd(v13, v12));
                    v7++;
                }
            }
            // 0xc7
            v14 = __asm_movsd(*(int64_t *)(v5 + 0x3e80 * v6));
            v15 = (int64_t *)(v5 + v2);
            *v15 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v15), v14));
            v8 = v6 + 1;
            while (v8 != v1) {
                // 0x38
                v6 = v8;
                v4 = 8 * v6;
                v5 = v4 + a2;
                if (v6 != 0) {
                    // 0x44
                    v9 = (int64_t *)(v4 + v3);
                    v7 = 0;
                    v10 = __asm_movsd(*(int64_t *)(8 * v7 + v3));
                    v11 = __asm_movsd(*(int64_t *)(0x3e80 * v7 + v5));
                    v12 = __asm_movsd(*v9);
                    v13 = __asm_mulsd(__asm_movq_2(__asm_movq(v10) ^ -0x8000000000000000), v11);
                    *v9 = __asm_movsd_1(__asm_addsd(v13, v12));
                    v7++;
                    while (v7 != v6) {
                        // 0x44
                        v10 = __asm_movsd(*(int64_t *)(8 * v7 + v3));
                        v11 = __asm_movsd(*(int64_t *)(0x3e80 * v7 + v5));
                        v12 = __asm_movsd(*v9);
                        v13 = __asm_mulsd(__asm_movq_2(__asm_movq(v10) ^ -0x8000000000000000), v11);
                        *v9 = __asm_movsd_1(__asm_addsd(v13, v12));
                        v7++;
                    }
                }
                // 0xc7
                v14 = __asm_movsd(*(int64_t *)(v5 + 0x3e80 * v6));
                v15 = (int64_t *)(v5 + v2);
                *v15 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v15), v14));
                v8 = v6 + 1;
            }
        }
        // 0x12d
        v16 = v1;
        if (v1 != 0) {
            // 0x139
            v18 = 8 * v16;
            v19 = (int64_t *)(v18 + v3);
            v17 = 0;
            v20 = __asm_movsd(*(int64_t *)(8 * v17 + v3));
            v21 = __asm_movsd(*(int64_t *)(v18 + a2 + 0x3e80 * v17));
            v22 = __asm_movsd(*v19);
            v23 = __asm_mulsd(__asm_movq_2(__asm_movq(v20) ^ -0x8000000000000000), v21);
            *v19 = __asm_movsd_1(__asm_addsd(v23, v22));
            v17++;
            while (v17 != v1) {
                // 0x139
                v20 = __asm_movsd(*(int64_t *)(8 * v17 + v3));
                v21 = __asm_movsd(*(int64_t *)(v18 + a2 + 0x3e80 * v17));
                v22 = __asm_movsd(*v19);
                v23 = __asm_mulsd(__asm_movq_2(__asm_movq(v20) ^ -0x8000000000000000), v21);
                *v19 = __asm_movsd_1(__asm_addsd(v23, v22));
                v17++;
            }
        }
        // 0x1c1
        v24 = v16 + 1;
        while (v24 != result) {
            // 0x12d
            v16 = v24;
            if (v1 != 0) {
                // 0x139
                v18 = 8 * v16;
                v19 = (int64_t *)(v18 + v3);
                v17 = 0;
                v20 = __asm_movsd(*(int64_t *)(8 * v17 + v3));
                v21 = __asm_movsd(*(int64_t *)(v18 + a2 + 0x3e80 * v17));
                v22 = __asm_movsd(*v19);
                v23 = __asm_mulsd(__asm_movq_2(__asm_movq(v20) ^ -0x8000000000000000), v21);
                *v19 = __asm_movsd_1(__asm_addsd(v23, v22));
                v17++;
                while (v17 != v1) {
                    // 0x139
                    v20 = __asm_movsd(*(int64_t *)(8 * v17 + v3));
                    v21 = __asm_movsd(*(int64_t *)(v18 + a2 + 0x3e80 * v17));
                    v22 = __asm_movsd(*v19);
                    v23 = __asm_mulsd(__asm_movq_2(__asm_movq(v20) ^ -0x8000000000000000), v21);
                    *v19 = __asm_movsd_1(__asm_addsd(v23, v22));
                    v17++;
                }
            }
            // 0x1c1
            v24 = v16 + 1;
        }
        // 0x1d4
        v25 = v1 + 1;
    }
    // 0x1e2
    return result;
}
