
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "trmm.h"
int64_t kernel_trmm(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x0
    if ((int32_t)a1 < 1) {
        // 0xa3
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0xf
    int64_t v1 = 0;
    int64_t v2 = 1;
    int64_t v3 = v1 + 1; // 0x2b
    int64_t v4; // 0x0
    int128_t v5; // 0x5c
    int64_t v6; // 0x4a
    int128_t v7; // 0x7a
    int128_t v8; // 0x90
    int128_t v9; // 0x0
    int64_t v10; // 0x99
    int64_t v11; // 0x0
    int64_t v12; // 0x0
    int64_t * v13; // 0x5c
    int128_t v14; // 0x0
    int128_t v15; // 0x0
    if ((int32_t)a2 >= 1) {
        // 0x52
        v11 = 8 * v1 + a3;
        v6 = 0;
        v12 = 8 * v6 + a4;
        v13 = (int64_t *)(v12 + 0x2580 * v1);
        v5 = __asm_movsd(*v13);
        v14 = v5;
        v15 = v5;
        v4 = v2;
        if (v3 < result2) {
            v7 = __asm_movsd(*(int64_t *)(v11 + 0x1f40 * v4));
            v8 = __asm_addsd(v15, __asm_mulsd(v7, *(int64_t *)(0x2580 * v4 + v12)));
            *v13 = __asm_movsd_1(v8);
            v10 = v4 + 1;
            v14 = v8;
            v15 = v8;
            v4 = v10;
            while (v10 != result2) {
                // 0x70
                v7 = __asm_movsd(*(int64_t *)(v11 + 0x1f40 * v4));
                v8 = __asm_addsd(v15, __asm_mulsd(v7, *(int64_t *)(0x2580 * v4 + v12)));
                *v13 = __asm_movsd_1(v8);
                v10 = v4 + 1;
                v14 = v8;
                v15 = v8;
                v4 = v10;
            }
        }
        // 0x40
        *v13 = __asm_movsd_1(__asm_mulsd_2(v14, v9));
        v6++;
        while (v6 != (a2 & 0xffffffff)) {
            // 0x52
            v12 = 8 * v6 + a4;
            v13 = (int64_t *)(v12 + 0x2580 * v1);
            v5 = __asm_movsd(*v13);
            v14 = v5;
            v15 = v5;
            v4 = v2;
            if (v3 < result2) {
                v7 = __asm_movsd(*(int64_t *)(v11 + 0x1f40 * v4));
                v8 = __asm_addsd(v15, __asm_mulsd(v7, *(int64_t *)(0x2580 * v4 + v12)));
                *v13 = __asm_movsd_1(v8);
                v10 = v4 + 1;
                v14 = v8;
                v15 = v8;
                v4 = v10;
                while (v10 != result2) {
                    // 0x70
                    v7 = __asm_movsd(*(int64_t *)(v11 + 0x1f40 * v4));
                    v8 = __asm_addsd(v15, __asm_mulsd(v7, *(int64_t *)(0x2580 * v4 + v12)));
                    *v13 = __asm_movsd_1(v8);
                    v10 = v4 + 1;
                    v14 = v8;
                    v15 = v8;
                    v4 = v10;
                }
            }
            // 0x40
            *v13 = __asm_movsd_1(__asm_mulsd_2(v14, v9));
            v6++;
        }
    }
    int64_t v16 = v2 + 1; // 0x29
    while (v3 != result2) {
        // 0x2b
        v1 = v3;
        v2 = v16;
        v3 = v1 + 1;
        if ((int32_t)a2 >= 1) {
            // 0x52
            v11 = 8 * v1 + a3;
            v6 = 0;
            v12 = 8 * v6 + a4;
            v13 = (int64_t *)(v12 + 0x2580 * v1);
            v5 = __asm_movsd(*v13);
            v14 = v5;
            v15 = v5;
            v4 = v2;
            if (v3 < result2) {
                v7 = __asm_movsd(*(int64_t *)(v11 + 0x1f40 * v4));
                v8 = __asm_addsd(v15, __asm_mulsd(v7, *(int64_t *)(0x2580 * v4 + v12)));
                *v13 = __asm_movsd_1(v8);
                v10 = v4 + 1;
                v14 = v8;
                v15 = v8;
                v4 = v10;
                while (v10 != result2) {
                    // 0x70
                    v7 = __asm_movsd(*(int64_t *)(v11 + 0x1f40 * v4));
                    v8 = __asm_addsd(v15, __asm_mulsd(v7, *(int64_t *)(0x2580 * v4 + v12)));
                    *v13 = __asm_movsd_1(v8);
                    v10 = v4 + 1;
                    v14 = v8;
                    v15 = v8;
                    v4 = v10;
                }
            }
            // 0x40
            *v13 = __asm_movsd_1(__asm_mulsd_2(v14, v9));
            v6++;
            while (v6 != (a2 & 0xffffffff)) {
                // 0x52
                v12 = 8 * v6 + a4;
                v13 = (int64_t *)(v12 + 0x2580 * v1);
                v5 = __asm_movsd(*v13);
                v14 = v5;
                v15 = v5;
                v4 = v2;
                if (v3 < result2) {
                    v7 = __asm_movsd(*(int64_t *)(v11 + 0x1f40 * v4));
                    v8 = __asm_addsd(v15, __asm_mulsd(v7, *(int64_t *)(0x2580 * v4 + v12)));
                    *v13 = __asm_movsd_1(v8);
                    v10 = v4 + 1;
                    v14 = v8;
                    v15 = v8;
                    v4 = v10;
                    while (v10 != result2) {
                        // 0x70
                        v7 = __asm_movsd(*(int64_t *)(v11 + 0x1f40 * v4));
                        v8 = __asm_addsd(v15, __asm_mulsd(v7, *(int64_t *)(0x2580 * v4 + v12)));
                        *v13 = __asm_movsd_1(v8);
                        v10 = v4 + 1;
                        v14 = v8;
                        v15 = v8;
                        v4 = v10;
                    }
                }
                // 0x40
                *v13 = __asm_movsd_1(__asm_mulsd_2(v14, v9));
                v6++;
            }
        }
        // 0x20
        v16 = v2 + 1;
    }
    // 0xa3
    return result2;
}
