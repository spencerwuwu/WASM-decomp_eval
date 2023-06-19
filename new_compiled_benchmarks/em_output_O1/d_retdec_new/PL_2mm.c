
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "PL_2mm.h"
int64_t kernel_2mm(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t result = a1 & 0xffffffff; // 0x2da
    if ((int32_t)a1 < 1) {
        // 0x433
        return result;
    }
    int64_t v1 = a2 & 0xffffffff; // 0x2dc
    int64_t v2 = 0;
    int64_t v3; // 0x332
    int64_t * v4; // 0x332
    int64_t v5; // 0x320
    int128_t v6; // 0x2d0
    int128_t v7; // 0x361
    int128_t v8; // 0x376
    int64_t v9; // 0x380
    int64_t v10; // 0x2d0
    if ((int32_t)a2 >= 1) {
        // 0x328
        v10 = 0x2260 * v2 + a6;
        v5 = 0;
        v3 = 8 * v5;
        v4 = (int64_t *)(0x1c20 * v2 + a5 + v3);
        *v4 = 0;
        if ((int32_t)a3 >= 1) {
            // 0x33e
            v8 = __asm_movsd(0);
            v9 = 0;
            v7 = __asm_mulsd(__asm_movsd(*(int64_t *)(v10 + 8 * v9)), v6);
            v8 = __asm_addsd(v8, __asm_mulsd_2(v7, *(int64_t *)(v3 + a7 + 0x1c20 * v9)));
            *v4 = __asm_movsd_1(v8);
            v9++;
            while (v9 != (a3 & 0xffffffff)) {
                // 0x350
                v7 = __asm_mulsd(__asm_movsd(*(int64_t *)(v10 + 8 * v9)), v6);
                v8 = __asm_addsd(v8, __asm_mulsd_2(v7, *(int64_t *)(v3 + a7 + 0x1c20 * v9)));
                *v4 = __asm_movsd_1(v8);
                v9++;
            }
        }
        // 0x320
        v5++;
        while (v5 != v1) {
            // 0x328
            v3 = 8 * v5;
            v4 = (int64_t *)(0x1c20 * v2 + a5 + v3);
            *v4 = 0;
            if ((int32_t)a3 >= 1) {
                // 0x33e
                v8 = __asm_movsd(0);
                v9 = 0;
                v7 = __asm_mulsd(__asm_movsd(*(int64_t *)(v10 + 8 * v9)), v6);
                v8 = __asm_addsd(v8, __asm_mulsd_2(v7, *(int64_t *)(v3 + a7 + 0x1c20 * v9)));
                *v4 = __asm_movsd_1(v8);
                v9++;
                while (v9 != (a3 & 0xffffffff)) {
                    // 0x350
                    v7 = __asm_mulsd(__asm_movsd(*(int64_t *)(v10 + 8 * v9)), v6);
                    v8 = __asm_addsd(v8, __asm_mulsd_2(v7, *(int64_t *)(v3 + a7 + 0x1c20 * v9)));
                    *v4 = __asm_movsd_1(v8);
                    v9++;
                }
            }
            // 0x320
            v5++;
        }
    }
    int64_t v11 = v2 + 1; // 0x300
    while (v11 != result) {
        // 0x30c
        v2 = v11;
        if ((int32_t)a2 >= 1) {
            // 0x328
            v10 = 0x2260 * v2 + a6;
            v5 = 0;
            v3 = 8 * v5;
            v4 = (int64_t *)(0x1c20 * v2 + a5 + v3);
            *v4 = 0;
            if ((int32_t)a3 >= 1) {
                // 0x33e
                v8 = __asm_movsd(0);
                v9 = 0;
                v7 = __asm_mulsd(__asm_movsd(*(int64_t *)(v10 + 8 * v9)), v6);
                v8 = __asm_addsd(v8, __asm_mulsd_2(v7, *(int64_t *)(v3 + a7 + 0x1c20 * v9)));
                *v4 = __asm_movsd_1(v8);
                v9++;
                while (v9 != (a3 & 0xffffffff)) {
                    // 0x350
                    v7 = __asm_mulsd(__asm_movsd(*(int64_t *)(v10 + 8 * v9)), v6);
                    v8 = __asm_addsd(v8, __asm_mulsd_2(v7, *(int64_t *)(v3 + a7 + 0x1c20 * v9)));
                    *v4 = __asm_movsd_1(v8);
                    v9++;
                }
            }
            // 0x320
            v5++;
            while (v5 != v1) {
                // 0x328
                v3 = 8 * v5;
                v4 = (int64_t *)(0x1c20 * v2 + a5 + v3);
                *v4 = 0;
                if ((int32_t)a3 >= 1) {
                    // 0x33e
                    v8 = __asm_movsd(0);
                    v9 = 0;
                    v7 = __asm_mulsd(__asm_movsd(*(int64_t *)(v10 + 8 * v9)), v6);
                    v8 = __asm_addsd(v8, __asm_mulsd_2(v7, *(int64_t *)(v3 + a7 + 0x1c20 * v9)));
                    *v4 = __asm_movsd_1(v8);
                    v9++;
                    while (v9 != (a3 & 0xffffffff)) {
                        // 0x350
                        v7 = __asm_mulsd(__asm_movsd(*(int64_t *)(v10 + 8 * v9)), v6);
                        v8 = __asm_addsd(v8, __asm_mulsd_2(v7, *(int64_t *)(v3 + a7 + 0x1c20 * v9)));
                        *v4 = __asm_movsd_1(v8);
                        v9++;
                    }
                }
                // 0x320
                v5++;
            }
        }
        // 0x300
        v11 = v2 + 1;
    }
    int64_t v12 = 0;
    int64_t v13; // 0x2d0
    int64_t v14; // 0x3d2
    int64_t * v15; // 0x3d2
    int64_t v16; // 0x3dc
    int64_t v17; // 0x3c0
    int128_t v18; // 0x40a
    int128_t v19; // 0x420
    int64_t v20; // 0x429
    if ((int32_t)a4 >= 1) {
        // 0x3c8
        v13 = 0x1c20 * v12 + a5;
        v17 = 0;
        v14 = 8 * v17;
        v15 = (int64_t *)(0x2580 * v12 + a9 + v14);
        v16 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v15), v6));
        *v15 = v16;
        if ((int32_t)a2 >= 1) {
            // 0x3e6
            v19 = __asm_movsd(v16);
            v20 = 0;
            v18 = __asm_movsd(*(int64_t *)(v13 + 8 * v20));
            v19 = __asm_addsd(v19, __asm_mulsd_2(v18, *(int64_t *)(v14 + a8 + 0x2580 * v20)));
            *v15 = __asm_movsd_1(v19);
            v20++;
            while (v20 != v1) {
                // 0x400
                v18 = __asm_movsd(*(int64_t *)(v13 + 8 * v20));
                v19 = __asm_addsd(v19, __asm_mulsd_2(v18, *(int64_t *)(v14 + a8 + 0x2580 * v20)));
                *v15 = __asm_movsd_1(v19);
                v20++;
            }
        }
        // 0x3c0
        v17++;
        while (v17 != (a4 & 0xffffffff)) {
            // 0x3c8
            v14 = 8 * v17;
            v15 = (int64_t *)(0x2580 * v12 + a9 + v14);
            v16 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v15), v6));
            *v15 = v16;
            if ((int32_t)a2 >= 1) {
                // 0x3e6
                v19 = __asm_movsd(v16);
                v20 = 0;
                v18 = __asm_movsd(*(int64_t *)(v13 + 8 * v20));
                v19 = __asm_addsd(v19, __asm_mulsd_2(v18, *(int64_t *)(v14 + a8 + 0x2580 * v20)));
                *v15 = __asm_movsd_1(v19);
                v20++;
                while (v20 != v1) {
                    // 0x400
                    v18 = __asm_movsd(*(int64_t *)(v13 + 8 * v20));
                    v19 = __asm_addsd(v19, __asm_mulsd_2(v18, *(int64_t *)(v14 + a8 + 0x2580 * v20)));
                    *v15 = __asm_movsd_1(v19);
                    v20++;
                }
            }
            // 0x3c0
            v17++;
        }
    }
    int64_t v21 = v12 + 1; // 0x3b0
    while (v21 != result) {
        // 0x3b8
        v12 = v21;
        if ((int32_t)a4 >= 1) {
            // 0x3c8
            v13 = 0x1c20 * v12 + a5;
            v17 = 0;
            v14 = 8 * v17;
            v15 = (int64_t *)(0x2580 * v12 + a9 + v14);
            v16 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v15), v6));
            *v15 = v16;
            if ((int32_t)a2 >= 1) {
                // 0x3e6
                v19 = __asm_movsd(v16);
                v20 = 0;
                v18 = __asm_movsd(*(int64_t *)(v13 + 8 * v20));
                v19 = __asm_addsd(v19, __asm_mulsd_2(v18, *(int64_t *)(v14 + a8 + 0x2580 * v20)));
                *v15 = __asm_movsd_1(v19);
                v20++;
                while (v20 != v1) {
                    // 0x400
                    v18 = __asm_movsd(*(int64_t *)(v13 + 8 * v20));
                    v19 = __asm_addsd(v19, __asm_mulsd_2(v18, *(int64_t *)(v14 + a8 + 0x2580 * v20)));
                    *v15 = __asm_movsd_1(v19);
                    v20++;
                }
            }
            // 0x3c0
            v17++;
            while (v17 != (a4 & 0xffffffff)) {
                // 0x3c8
                v14 = 8 * v17;
                v15 = (int64_t *)(0x2580 * v12 + a9 + v14);
                v16 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v15), v6));
                *v15 = v16;
                if ((int32_t)a2 >= 1) {
                    // 0x3e6
                    v19 = __asm_movsd(v16);
                    v20 = 0;
                    v18 = __asm_movsd(*(int64_t *)(v13 + 8 * v20));
                    v19 = __asm_addsd(v19, __asm_mulsd_2(v18, *(int64_t *)(v14 + a8 + 0x2580 * v20)));
                    *v15 = __asm_movsd_1(v19);
                    v20++;
                    while (v20 != v1) {
                        // 0x400
                        v18 = __asm_movsd(*(int64_t *)(v13 + 8 * v20));
                        v19 = __asm_addsd(v19, __asm_mulsd_2(v18, *(int64_t *)(v14 + a8 + 0x2580 * v20)));
                        *v15 = __asm_movsd_1(v19);
                        v20++;
                    }
                }
                // 0x3c0
                v17++;
            }
        }
        // 0x3b0
        v21 = v12 + 1;
    }
    // 0x433
    return result;
}
