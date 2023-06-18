
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
    int128_t v1; // 0x0
    int64_t v2 = __asm_movsd_1(v1); // 0xa
    uint32_t v3 = (int32_t)a1; // 0x21
    if (v3 <= 0) {
        // 0x11a
        return 0;
    }
    int64_t result = a1 & 0xffffffff;
    int64_t v4 = 1;
    int64_t v5 = 0;
    int64_t v6 = v5 + 1;
    int64_t v7; // 0x0
    int64_t v8; // 0x0
    int64_t v9; // 0x0
    int64_t * v10; // 0x0
    int128_t v11; // 0x68
    int128_t v12; // 0x83
    int64_t v13; // 0x0
    int64_t v14; // 0x0
    if ((int32_t)a2 > 0) {
        // 0x46
        v13 = 8 * v5 + a3;
        v9 = 0;
        v14 = 8 * v9 + a4;
        v10 = (int64_t *)(v14 + 0x2580 * v5);
        v7 = v4;
        if (v6 < 0x100000000 * a1 >> 32) {
            v11 = __asm_movsd(*(int64_t *)(v13 + 0x1f40 * v7));
            v12 = __asm_movsd(*(int64_t *)(0x2580 * v7 + v14));
            *v10 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v11, v12), __asm_movsd(*v10)));
            v8 = v7 + 1;
            v7 = v8;
            while ((int32_t)v8 != v3) {
                // 0x52
                v11 = __asm_movsd(*(int64_t *)(v13 + 0x1f40 * v7));
                v12 = __asm_movsd(*(int64_t *)(0x2580 * v7 + v14));
                *v10 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v11, v12), __asm_movsd(*v10)));
                v8 = v7 + 1;
                v7 = v8;
            }
        }
        // 0xbe
        *v10 = __asm_movsd_1(__asm_mulsd_2(__asm_movsd(v2), *v10));
        v9++;
        while (v9 != (a2 & 0xffffffff)) {
            // 0x46
            v14 = 8 * v9 + a4;
            v10 = (int64_t *)(v14 + 0x2580 * v5);
            v7 = v4;
            if (v6 < 0x100000000 * a1 >> 32) {
                v11 = __asm_movsd(*(int64_t *)(v13 + 0x1f40 * v7));
                v12 = __asm_movsd(*(int64_t *)(0x2580 * v7 + v14));
                *v10 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v11, v12), __asm_movsd(*v10)));
                v8 = v7 + 1;
                v7 = v8;
                while ((int32_t)v8 != v3) {
                    // 0x52
                    v11 = __asm_movsd(*(int64_t *)(v13 + 0x1f40 * v7));
                    v12 = __asm_movsd(*(int64_t *)(0x2580 * v7 + v14));
                    *v10 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v11, v12), __asm_movsd(*v10)));
                    v8 = v7 + 1;
                    v7 = v8;
                }
            }
            // 0xbe
            *v10 = __asm_movsd_1(__asm_mulsd_2(__asm_movsd(v2), *v10));
            v9++;
        }
    }
    int64_t v15 = v4 + 1; // 0x24
    while (v6 != result) {
        // 0x31
        v4 = v15;
        v5 = v6;
        v6 = v5 + 1;
        if ((int32_t)a2 > 0) {
            // 0x46
            v13 = 8 * v5 + a3;
            v9 = 0;
            v14 = 8 * v9 + a4;
            v10 = (int64_t *)(v14 + 0x2580 * v5);
            v7 = v4;
            if (v6 < 0x100000000 * a1 >> 32) {
                v11 = __asm_movsd(*(int64_t *)(v13 + 0x1f40 * v7));
                v12 = __asm_movsd(*(int64_t *)(0x2580 * v7 + v14));
                *v10 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v11, v12), __asm_movsd(*v10)));
                v8 = v7 + 1;
                v7 = v8;
                while ((int32_t)v8 != v3) {
                    // 0x52
                    v11 = __asm_movsd(*(int64_t *)(v13 + 0x1f40 * v7));
                    v12 = __asm_movsd(*(int64_t *)(0x2580 * v7 + v14));
                    *v10 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v11, v12), __asm_movsd(*v10)));
                    v8 = v7 + 1;
                    v7 = v8;
                }
            }
            // 0xbe
            *v10 = __asm_movsd_1(__asm_mulsd_2(__asm_movsd(v2), *v10));
            v9++;
            while (v9 != (a2 & 0xffffffff)) {
                // 0x46
                v14 = 8 * v9 + a4;
                v10 = (int64_t *)(v14 + 0x2580 * v5);
                v7 = v4;
                if (v6 < 0x100000000 * a1 >> 32) {
                    v11 = __asm_movsd(*(int64_t *)(v13 + 0x1f40 * v7));
                    v12 = __asm_movsd(*(int64_t *)(0x2580 * v7 + v14));
                    *v10 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v11, v12), __asm_movsd(*v10)));
                    v8 = v7 + 1;
                    v7 = v8;
                    while ((int32_t)v8 != v3) {
                        // 0x52
                        v11 = __asm_movsd(*(int64_t *)(v13 + 0x1f40 * v7));
                        v12 = __asm_movsd(*(int64_t *)(0x2580 * v7 + v14));
                        *v10 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v11, v12), __asm_movsd(*v10)));
                        v8 = v7 + 1;
                        v7 = v8;
                    }
                }
                // 0xbe
                *v10 = __asm_movsd_1(__asm_mulsd_2(__asm_movsd(v2), *v10));
                v9++;
            }
        }
        // 0x10c
        v15 = v4 + 1;
    }
    // 0x11a
    return result;
}
