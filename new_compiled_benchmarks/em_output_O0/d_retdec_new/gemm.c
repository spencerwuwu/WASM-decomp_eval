
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "gemm.h"
int64_t kernel_gemm(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x0
    int128_t v1; // 0x0
    int64_t v2 = __asm_movsd_1(v1); // 0xd
    int64_t v3 = __asm_movsd_1(v1); // 0x12
    if ((int32_t)a1 <= 0) {
        // 0x139
        return 0;
    }
    int64_t v4 = a2 & 0xffffffff;
    int64_t result = a1 & 0xffffffff;
    int64_t v5 = 0;
    int64_t v6; // 0x0
    int128_t v7; // 0x49
    int64_t * v8; // 0x64
    if ((int32_t)a2 > 0) {
        // 0x49
        v6 = 0;
        v7 = __asm_movsd(v3);
        v8 = (int64_t *)(0x2260 * v5 + a4 + 8 * v6);
        *v8 = __asm_movsd_1(__asm_mulsd(v7, *v8));
        v6++;
        while (v6 != v4) {
            // 0x49
            v7 = __asm_movsd(v3);
            v8 = (int64_t *)(0x2260 * v5 + a4 + 8 * v6);
            *v8 = __asm_movsd_1(__asm_mulsd(v7, *v8));
            v6++;
        }
    }
    int64_t v9; // 0x0
    int64_t v10; // 0x0
    int64_t v11; // 0x0
    int64_t v12; // 0x0
    int64_t v13; // 0x0
    int128_t v14; // 0xbd
    int64_t v15; // 0xd8
    int128_t v16; // 0xd8
    int64_t * v17; // 0xf3
    if ((int32_t)a3 > 0) {
        // 0x96
        v12 = 0x2580 * v5 + a5;
        v13 = 0x2260 * v5 + a4;
        v9 = 0;
        if ((int32_t)a2 > 0) {
            // 0xa2
            v10 = 0;
            v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 8 * v9));
            v15 = 8 * v10;
            v16 = __asm_movsd(*(int64_t *)(0x2260 * v9 + a6 + v15));
            v17 = (int64_t *)(v13 + v15);
            *v17 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v14, v16), __asm_movsd(*v17)));
            v10++;
            while (v10 != v4) {
                // 0xa2
                v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 8 * v9));
                v15 = 8 * v10;
                v16 = __asm_movsd(*(int64_t *)(0x2260 * v9 + a6 + v15));
                v17 = (int64_t *)(v13 + v15);
                *v17 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v14, v16), __asm_movsd(*v17)));
                v10++;
            }
        }
        // 0x118
        v11 = v9 + 1;
        while (v11 != (a3 & 0xffffffff)) {
            // 0x96
            v9 = v11;
            if ((int32_t)a2 > 0) {
                // 0xa2
                v10 = 0;
                v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 8 * v9));
                v15 = 8 * v10;
                v16 = __asm_movsd(*(int64_t *)(0x2260 * v9 + a6 + v15));
                v17 = (int64_t *)(v13 + v15);
                *v17 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v14, v16), __asm_movsd(*v17)));
                v10++;
                while (v10 != v4) {
                    // 0xa2
                    v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 8 * v9));
                    v15 = 8 * v10;
                    v16 = __asm_movsd(*(int64_t *)(0x2260 * v9 + a6 + v15));
                    v17 = (int64_t *)(v13 + v15);
                    *v17 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v14, v16), __asm_movsd(*v17)));
                    v10++;
                }
            }
            // 0x118
            v11 = v9 + 1;
        }
    }
    int64_t v18 = v5 + 1;
    while (v18 != result) {
        // 0x3d
        v5 = v18;
        if ((int32_t)a2 > 0) {
            // 0x49
            v6 = 0;
            v7 = __asm_movsd(v3);
            v8 = (int64_t *)(0x2260 * v5 + a4 + 8 * v6);
            *v8 = __asm_movsd_1(__asm_mulsd(v7, *v8));
            v6++;
            while (v6 != v4) {
                // 0x49
                v7 = __asm_movsd(v3);
                v8 = (int64_t *)(0x2260 * v5 + a4 + 8 * v6);
                *v8 = __asm_movsd_1(__asm_mulsd(v7, *v8));
                v6++;
            }
        }
        if ((int32_t)a3 > 0) {
            // 0x96
            v12 = 0x2580 * v5 + a5;
            v13 = 0x2260 * v5 + a4;
            v9 = 0;
            if ((int32_t)a2 > 0) {
                // 0xa2
                v10 = 0;
                v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 8 * v9));
                v15 = 8 * v10;
                v16 = __asm_movsd(*(int64_t *)(0x2260 * v9 + a6 + v15));
                v17 = (int64_t *)(v13 + v15);
                *v17 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v14, v16), __asm_movsd(*v17)));
                v10++;
                while (v10 != v4) {
                    // 0xa2
                    v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 8 * v9));
                    v15 = 8 * v10;
                    v16 = __asm_movsd(*(int64_t *)(0x2260 * v9 + a6 + v15));
                    v17 = (int64_t *)(v13 + v15);
                    *v17 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v14, v16), __asm_movsd(*v17)));
                    v10++;
                }
            }
            // 0x118
            v11 = v9 + 1;
            while (v11 != (a3 & 0xffffffff)) {
                // 0x96
                v9 = v11;
                if ((int32_t)a2 > 0) {
                    // 0xa2
                    v10 = 0;
                    v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 8 * v9));
                    v15 = 8 * v10;
                    v16 = __asm_movsd(*(int64_t *)(0x2260 * v9 + a6 + v15));
                    v17 = (int64_t *)(v13 + v15);
                    *v17 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v14, v16), __asm_movsd(*v17)));
                    v10++;
                    while (v10 != v4) {
                        // 0xa2
                        v14 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 8 * v9));
                        v15 = 8 * v10;
                        v16 = __asm_movsd(*(int64_t *)(0x2260 * v9 + a6 + v15));
                        v17 = (int64_t *)(v13 + v15);
                        *v17 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v14, v16), __asm_movsd(*v17)));
                        v10++;
                    }
                }
                // 0x118
                v11 = v9 + 1;
            }
        }
        // 0x12b
        v18 = v5 + 1;
    }
    // 0x139
    return result;
}
