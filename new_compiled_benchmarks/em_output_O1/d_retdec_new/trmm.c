
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "trmm.h"
int64_t kernel_trmm(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x0
    if ((int32_t)a1 < 1) {
        // 0xc3
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = 0x100000000 * a1 >> 32; // 0xf
    int64_t v1 = a1 & 0xffffffff; // 0x12
    int64_t v2 = 0;
    int64_t v3 = 1;
    int64_t v4 = v2 + 1;
    int64_t v5; // 0x6a
    int128_t v6; // 0x9a
    int128_t v7; // 0x0
    int128_t v8; // 0xb0
    int64_t v9; // 0xb9
    int64_t v10; // 0x0
    int64_t v11; // 0x0
    int64_t * v12; // 0x0
    if ((int32_t)a2 >= 1) {
        // 0x43
        v10 = 8 * v2 + a3;
        v5 = 0;
        v11 = 8 * v5 + a4;
        v12 = (int64_t *)(v11 + 0x2580 * v2);
        if (v4 < result2) {
            // 0x77
            v8 = __asm_movsd(*v12);
            v9 = v3;
            v6 = __asm_movsd(*(int64_t *)(v10 + 0x1f40 * v9));
            v8 = __asm_addsd(v8, __asm_mulsd(v6, *(int64_t *)(0x2580 * v9 + v11)));
            *v12 = __asm_movsd_1(v8);
            v9++;
            while (v9 != v1) {
                // 0x90
                v6 = __asm_movsd(*(int64_t *)(v10 + 0x1f40 * v9));
                v8 = __asm_addsd(v8, __asm_mulsd(v6, *(int64_t *)(0x2580 * v9 + v11)));
                *v12 = __asm_movsd_1(v8);
                v9++;
            }
        }
        // 0x50
        *v12 = __asm_movsd_1(__asm_mulsd_2(__asm_movsd(*v12), v7));
        v5++;
        while (v5 != (a2 & 0xffffffff)) {
            // 0x72
            v11 = 8 * v5 + a4;
            v12 = (int64_t *)(v11 + 0x2580 * v2);
            if (v4 < result2) {
                // 0x77
                v8 = __asm_movsd(*v12);
                v9 = v3;
                v6 = __asm_movsd(*(int64_t *)(v10 + 0x1f40 * v9));
                v8 = __asm_addsd(v8, __asm_mulsd(v6, *(int64_t *)(0x2580 * v9 + v11)));
                *v12 = __asm_movsd_1(v8);
                v9++;
                while (v9 != v1) {
                    // 0x90
                    v6 = __asm_movsd(*(int64_t *)(v10 + 0x1f40 * v9));
                    v8 = __asm_addsd(v8, __asm_mulsd(v6, *(int64_t *)(0x2580 * v9 + v11)));
                    *v12 = __asm_movsd_1(v8);
                    v9++;
                }
            }
            // 0x50
            *v12 = __asm_movsd_1(__asm_mulsd_2(__asm_movsd(*v12), v7));
            v5++;
        }
    }
    int64_t v13 = v3 + 1; // 0x39
    while (v4 != v1) {
        // 0x3f
        v2 = v4;
        v3 = v13;
        v4 = v2 + 1;
        if ((int32_t)a2 >= 1) {
            // 0x43
            v10 = 8 * v2 + a3;
            v5 = 0;
            v11 = 8 * v5 + a4;
            v12 = (int64_t *)(v11 + 0x2580 * v2);
            if (v4 < result2) {
                // 0x77
                v8 = __asm_movsd(*v12);
                v9 = v3;
                v6 = __asm_movsd(*(int64_t *)(v10 + 0x1f40 * v9));
                v8 = __asm_addsd(v8, __asm_mulsd(v6, *(int64_t *)(0x2580 * v9 + v11)));
                *v12 = __asm_movsd_1(v8);
                v9++;
                while (v9 != v1) {
                    // 0x90
                    v6 = __asm_movsd(*(int64_t *)(v10 + 0x1f40 * v9));
                    v8 = __asm_addsd(v8, __asm_mulsd(v6, *(int64_t *)(0x2580 * v9 + v11)));
                    *v12 = __asm_movsd_1(v8);
                    v9++;
                }
            }
            // 0x50
            *v12 = __asm_movsd_1(__asm_mulsd_2(__asm_movsd(*v12), v7));
            v5++;
            while (v5 != (a2 & 0xffffffff)) {
                // 0x72
                v11 = 8 * v5 + a4;
                v12 = (int64_t *)(v11 + 0x2580 * v2);
                if (v4 < result2) {
                    // 0x77
                    v8 = __asm_movsd(*v12);
                    v9 = v3;
                    v6 = __asm_movsd(*(int64_t *)(v10 + 0x1f40 * v9));
                    v8 = __asm_addsd(v8, __asm_mulsd(v6, *(int64_t *)(0x2580 * v9 + v11)));
                    *v12 = __asm_movsd_1(v8);
                    v9++;
                    while (v9 != v1) {
                        // 0x90
                        v6 = __asm_movsd(*(int64_t *)(v10 + 0x1f40 * v9));
                        v8 = __asm_addsd(v8, __asm_mulsd(v6, *(int64_t *)(0x2580 * v9 + v11)));
                        *v12 = __asm_movsd_1(v8);
                        v9++;
                    }
                }
                // 0x50
                *v12 = __asm_movsd_1(__asm_mulsd_2(__asm_movsd(*v12), v7));
                v5++;
            }
        }
        // 0x30
        v13 = v3 + 1;
    }
    // 0xc3
    return result2;
}
