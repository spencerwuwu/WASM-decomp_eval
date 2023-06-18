
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "seidel-2d.h"
int64_t kernel_seidel_2d(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a2 + 0xfffffffe & 0xffffffff; // 0x33
    int32_t v2 = 0; // 0x1d5
    int64_t v3 = 1; // 0x38
    int64_t v4; // 0x0
    int32_t v5; // 0x0
    int128_t v6; // 0x76
    int64_t v7; // 0x96
    int128_t v8; // 0x96
    int32_t v9; // 0xb5
    int64_t v10; // 0xbb
    int128_t v11; // 0xbb
    int128_t v12; // 0xdb
    int64_t * v13; // 0xf6
    int128_t v14; // 0x116
    int128_t v15; // 0x13b
    int128_t v16; // 0x15b
    int128_t v17; // 0x180
    int32_t v18; // 0x1c2
    int64_t v19; // 0x5d
    int64_t v20; // 0x6a
    int64_t v21; // 0x0
    int64_t v22; // 0x0
    int64_t v23; // 0x76
    if (v1 != 0) {
        v19 = 0x100000000 * v3;
        v20 = 0x3e80 * (v19 - 0x100000000 >> 32) + a3;
        v21 = 0x3e80 * v3 + a3;
        v22 = 0x3e80 * (v19 + 0x100000000 >> 32) + a3;
        v9 = 1;
        v23 = 8 * (int64_t)(v9 - 1);
        v6 = __asm_movsd(*(int64_t *)(v23 + v20));
        v7 = 8 * (int64_t)v9;
        v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
        v9++;
        v10 = 8 * (int64_t)v9;
        v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
        v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
        v13 = (int64_t *)(v7 + v21);
        v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
        v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
        v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
        v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
        *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
        while (v1 >= (int64_t)v9) {
            // 0x56
            v23 = 8 * (int64_t)(v9 - 1);
            v6 = __asm_movsd(*(int64_t *)(v23 + v20));
            v7 = 8 * (int64_t)v9;
            v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
            v9++;
            v10 = 8 * (int64_t)v9;
            v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
            v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
            v13 = (int64_t *)(v7 + v21);
            v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
            v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
            v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
            v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
            *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
        }
        // 0x1bf
        v18 = 2;
        v4 = v18;
        v3 = v4;
        v5 = v18;
        while ((v4 & 0xffffffff) <= v1) {
            // 0x56
            v19 = 0x100000000 * v3;
            v20 = 0x3e80 * (v19 - 0x100000000 >> 32) + a3;
            v21 = 0x3e80 * v3 + a3;
            v22 = 0x3e80 * (v19 + 0x100000000 >> 32) + a3;
            v9 = 1;
            v23 = 8 * (int64_t)(v9 - 1);
            v6 = __asm_movsd(*(int64_t *)(v23 + v20));
            v7 = 8 * (int64_t)v9;
            v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
            v9++;
            v10 = 8 * (int64_t)v9;
            v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
            v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
            v13 = (int64_t *)(v7 + v21);
            v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
            v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
            v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
            v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
            *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
            while (v1 >= (int64_t)v9) {
                // 0x56
                v23 = 8 * (int64_t)(v9 - 1);
                v6 = __asm_movsd(*(int64_t *)(v23 + v20));
                v7 = 8 * (int64_t)v9;
                v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
                v9++;
                v10 = 8 * (int64_t)v9;
                v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
                v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
                v13 = (int64_t *)(v7 + v21);
                v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
                v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
                v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
                v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
                *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
            }
            // 0x1bf
            v18 = v5 + 1;
            v4 = v18;
            v3 = v4;
            v5 = v18;
        }
    }
    // 0x1d2
    v2++;
    uint64_t result = (int64_t)v2; // 0x15
    while ((uint64_t)(a1 + 0xffffffff & 0xffffffff) >= result) {
        // 0x2d
        v3 = 1;
        if (v1 != 0) {
            v19 = 0x100000000 * v3;
            v20 = 0x3e80 * (v19 - 0x100000000 >> 32) + a3;
            v21 = 0x3e80 * v3 + a3;
            v22 = 0x3e80 * (v19 + 0x100000000 >> 32) + a3;
            v9 = 1;
            v23 = 8 * (int64_t)(v9 - 1);
            v6 = __asm_movsd(*(int64_t *)(v23 + v20));
            v7 = 8 * (int64_t)v9;
            v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
            v9++;
            v10 = 8 * (int64_t)v9;
            v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
            v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
            v13 = (int64_t *)(v7 + v21);
            v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
            v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
            v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
            v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
            *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
            while (v1 >= (int64_t)v9) {
                // 0x56
                v23 = 8 * (int64_t)(v9 - 1);
                v6 = __asm_movsd(*(int64_t *)(v23 + v20));
                v7 = 8 * (int64_t)v9;
                v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
                v9++;
                v10 = 8 * (int64_t)v9;
                v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
                v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
                v13 = (int64_t *)(v7 + v21);
                v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
                v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
                v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
                v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
                *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
            }
            // 0x1bf
            v18 = 2;
            v4 = v18;
            v3 = v4;
            v5 = v18;
            while ((v4 & 0xffffffff) <= v1) {
                // 0x56
                v19 = 0x100000000 * v3;
                v20 = 0x3e80 * (v19 - 0x100000000 >> 32) + a3;
                v21 = 0x3e80 * v3 + a3;
                v22 = 0x3e80 * (v19 + 0x100000000 >> 32) + a3;
                v9 = 1;
                v23 = 8 * (int64_t)(v9 - 1);
                v6 = __asm_movsd(*(int64_t *)(v23 + v20));
                v7 = 8 * (int64_t)v9;
                v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
                v9++;
                v10 = 8 * (int64_t)v9;
                v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
                v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
                v13 = (int64_t *)(v7 + v21);
                v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
                v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
                v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
                v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
                *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
                while (v1 >= (int64_t)v9) {
                    // 0x56
                    v23 = 8 * (int64_t)(v9 - 1);
                    v6 = __asm_movsd(*(int64_t *)(v23 + v20));
                    v7 = 8 * (int64_t)v9;
                    v8 = __asm_addsd_2(v6, *(int64_t *)(v7 + v20));
                    v9++;
                    v10 = 8 * (int64_t)v9;
                    v11 = __asm_addsd_2(v8, *(int64_t *)(v10 + v20));
                    v12 = __asm_addsd_2(v11, *(int64_t *)(v23 + v21));
                    v13 = (int64_t *)(v7 + v21);
                    v14 = __asm_addsd_2(__asm_addsd_2(v12, *v13), *(int64_t *)(v10 + v21));
                    v15 = __asm_addsd_2(v14, *(int64_t *)(v23 + v22));
                    v16 = __asm_addsd_2(v15, *(int64_t *)(v7 + v22));
                    v17 = __asm_addsd_2(v16, *(int64_t *)(v10 + v22));
                    *v13 = __asm_movsd_1(__asm_divsd(v17, __asm_movsd(0x4022000000000000)));
                }
                // 0x1bf
                v18 = v5 + 1;
                v4 = v18;
                v3 = v4;
                v5 = v18;
            }
        }
        // 0x1d2
        v2++;
        result = (int64_t)v2;
    }
    // 0x1e0
    return result;
}
