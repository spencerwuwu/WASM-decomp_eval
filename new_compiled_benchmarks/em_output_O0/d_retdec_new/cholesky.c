
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "cholesky.h"
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
