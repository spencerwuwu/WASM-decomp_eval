
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
    if ((int32_t)a1 < 1) {
        // 0xcb
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0x11
    int64_t v1 = a2 & 0xffffffff; // 0x13
    int64_t v2 = 0;
    int64_t * v3; // 0x4a
    int64_t v4; // 0x5a
    int128_t v5; // 0x0
    if ((int32_t)a2 >= 1) {
        // 0x40
        v4 = 0;
        v3 = (int64_t *)(0x2260 * v2 + a4 + 8 * v4);
        *v3 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v3), v5));
        v4++;
        while (v4 != v1) {
            // 0x40
            v3 = (int64_t *)(0x2260 * v2 + a4 + 8 * v4);
            *v3 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v3), v5));
            v4++;
        }
    }
    int64_t v6; // 0x0
    int64_t v7; // 0x0
    int64_t v8; // 0x70
    int128_t v9; // 0x95
    int64_t v10; // 0xad
    int128_t v11; // 0xad
    int64_t * v12; // 0xb3
    int64_t v13; // 0xc1
    int64_t v14; // 0x0
    if ((int32_t)a3 >= 1) {
        // 0x78
        v14 = 0x2580 * v2 + a5;
        v7 = 0x2260 * v2 + a4;
        v6 = 0;
        if ((int32_t)a2 >= 1) {
            // 0x7c
            v13 = 0;
            v9 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + 8 * v6)), v5);
            v10 = 8 * v13;
            v11 = __asm_mulsd_2(v9, *(int64_t *)(0x2260 * v6 + a6 + v10));
            v12 = (int64_t *)(v7 + v10);
            *v12 = __asm_movsd_1(__asm_addsd(v11, *v12));
            v13++;
            while (v13 != v1) {
                // 0x90
                v9 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + 8 * v6)), v5);
                v10 = 8 * v13;
                v11 = __asm_mulsd_2(v9, *(int64_t *)(0x2260 * v6 + a6 + v10));
                v12 = (int64_t *)(v7 + v10);
                *v12 = __asm_movsd_1(__asm_addsd(v11, *v12));
                v13++;
            }
        }
        // 0x70
        v8 = v6 + 1;
        while (v8 != (a3 & 0xffffffff)) {
            // 0x78
            v6 = v8;
            if ((int32_t)a2 >= 1) {
                // 0x7c
                v13 = 0;
                v9 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + 8 * v6)), v5);
                v10 = 8 * v13;
                v11 = __asm_mulsd_2(v9, *(int64_t *)(0x2260 * v6 + a6 + v10));
                v12 = (int64_t *)(v7 + v10);
                *v12 = __asm_movsd_1(__asm_addsd(v11, *v12));
                v13++;
                while (v13 != v1) {
                    // 0x90
                    v9 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + 8 * v6)), v5);
                    v10 = 8 * v13;
                    v11 = __asm_mulsd_2(v9, *(int64_t *)(0x2260 * v6 + a6 + v10));
                    v12 = (int64_t *)(v7 + v10);
                    *v12 = __asm_movsd_1(__asm_addsd(v11, *v12));
                    v13++;
                }
            }
            // 0x70
            v8 = v6 + 1;
        }
    }
    int64_t v15 = v2 + 1; // 0x20
    while (v15 != result2) {
        // 0x2c
        v2 = v15;
        if ((int32_t)a2 >= 1) {
            // 0x40
            v4 = 0;
            v3 = (int64_t *)(0x2260 * v2 + a4 + 8 * v4);
            *v3 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v3), v5));
            v4++;
            while (v4 != v1) {
                // 0x40
                v3 = (int64_t *)(0x2260 * v2 + a4 + 8 * v4);
                *v3 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v3), v5));
                v4++;
            }
        }
        if ((int32_t)a3 >= 1) {
            // 0x78
            v14 = 0x2580 * v2 + a5;
            v7 = 0x2260 * v2 + a4;
            v6 = 0;
            if ((int32_t)a2 >= 1) {
                // 0x7c
                v13 = 0;
                v9 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + 8 * v6)), v5);
                v10 = 8 * v13;
                v11 = __asm_mulsd_2(v9, *(int64_t *)(0x2260 * v6 + a6 + v10));
                v12 = (int64_t *)(v7 + v10);
                *v12 = __asm_movsd_1(__asm_addsd(v11, *v12));
                v13++;
                while (v13 != v1) {
                    // 0x90
                    v9 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + 8 * v6)), v5);
                    v10 = 8 * v13;
                    v11 = __asm_mulsd_2(v9, *(int64_t *)(0x2260 * v6 + a6 + v10));
                    v12 = (int64_t *)(v7 + v10);
                    *v12 = __asm_movsd_1(__asm_addsd(v11, *v12));
                    v13++;
                }
            }
            // 0x70
            v8 = v6 + 1;
            while (v8 != (a3 & 0xffffffff)) {
                // 0x78
                v6 = v8;
                if ((int32_t)a2 >= 1) {
                    // 0x7c
                    v13 = 0;
                    v9 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + 8 * v6)), v5);
                    v10 = 8 * v13;
                    v11 = __asm_mulsd_2(v9, *(int64_t *)(0x2260 * v6 + a6 + v10));
                    v12 = (int64_t *)(v7 + v10);
                    *v12 = __asm_movsd_1(__asm_addsd(v11, *v12));
                    v13++;
                    while (v13 != v1) {
                        // 0x90
                        v9 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + 8 * v6)), v5);
                        v10 = 8 * v13;
                        v11 = __asm_mulsd_2(v9, *(int64_t *)(0x2260 * v6 + a6 + v10));
                        v12 = (int64_t *)(v7 + v10);
                        *v12 = __asm_movsd_1(__asm_addsd(v11, *v12));
                        v13++;
                    }
                }
                // 0x70
                v8 = v6 + 1;
            }
        }
        // 0x20
        v15 = v2 + 1;
    }
    // 0xcb
    return result2;
}
