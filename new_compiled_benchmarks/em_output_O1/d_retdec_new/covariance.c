
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "covariance.h"
int64_t kernel_covariance(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = a1 & 0xffffffff; // 0x3
    int64_t v1 = a2 & 0xffffffff; // 0x5
    uint32_t v2 = (int32_t)a2;
    int128_t v3; // 0x0
    if ((int32_t)a1 >= 1) {
        int64_t v4 = 0; // 0x30
        int64_t v5 = 8 * v4; // 0x38
        int64_t * v6 = (int64_t *)(v5 + a5); // 0x38
        *v6 = 0;
        int64_t v7 = 0; // 0x42
        int128_t v8; // 0x5a
        int64_t v9; // 0x60
        int64_t v10; // 0x66
        if (v2 >= 1) {
            // 0x44
            v8 = __asm_movsd(0);
            v10 = 0;
            v8 = __asm_addsd(v8, *(int64_t *)(v5 + a3 + 0x2580 * v10));
            v9 = __asm_movsd_1(v8);
            *v6 = v9;
            v10++;
            v7 = v9;
            while (v10 != v1) {
                // 0x50
                v8 = __asm_addsd(v8, *(int64_t *)(v5 + a3 + 0x2580 * v10));
                v9 = __asm_movsd_1(v8);
                *v6 = v9;
                v10++;
                v7 = v9;
            }
        }
        // 0x20
        *v6 = __asm_movsd_1(__asm_divsd(__asm_movsd(v7), v3));
        v4++;
        while (v4 != result) {
            // 0x38
            v5 = 8 * v4;
            v6 = (int64_t *)(v5 + a5);
            *v6 = 0;
            v7 = 0;
            if (v2 >= 1) {
                // 0x44
                v8 = __asm_movsd(0);
                v10 = 0;
                v8 = __asm_addsd(v8, *(int64_t *)(v5 + a3 + 0x2580 * v10));
                v9 = __asm_movsd_1(v8);
                *v6 = v9;
                v10++;
                v7 = v9;
                while (v10 != v1) {
                    // 0x50
                    v8 = __asm_addsd(v8, *(int64_t *)(v5 + a3 + 0x2580 * v10));
                    v9 = __asm_movsd_1(v8);
                    *v6 = v9;
                    v10++;
                    v7 = v9;
                }
            }
            // 0x20
            *v6 = __asm_movsd_1(__asm_divsd(__asm_movsd(v7), v3));
            v4++;
        }
    }
    // 0x70
    if (v2 >= 1) {
        int64_t v11 = 0;
        int64_t v12; // 0x9a
        int64_t * v13; // 0x9a
        int64_t v14; // 0xac
        if ((int32_t)a1 >= 1) {
            // 0x90
            v14 = 0;
            v12 = 8 * v14;
            v13 = (int64_t *)(0x2580 * v11 + a3 + v12);
            *v13 = __asm_movsd_1(__asm_subsd(__asm_movsd(*v13), *(int64_t *)(v12 + a5)));
            v14++;
            while (v14 != result) {
                // 0x90
                v12 = 8 * v14;
                v13 = (int64_t *)(0x2580 * v11 + a3 + v12);
                *v13 = __asm_movsd_1(__asm_subsd(__asm_movsd(*v13), *(int64_t *)(v12 + a5)));
                v14++;
            }
        }
        int64_t v15 = v11 + 1; // 0x80
        while (v15 != v1) {
            // 0x88
            v11 = v15;
            if ((int32_t)a1 >= 1) {
                // 0x90
                v14 = 0;
                v12 = 8 * v14;
                v13 = (int64_t *)(0x2580 * v11 + a3 + v12);
                *v13 = __asm_movsd_1(__asm_subsd(__asm_movsd(*v13), *(int64_t *)(v12 + a5)));
                v14++;
                while (v14 != result) {
                    // 0x90
                    v12 = 8 * v14;
                    v13 = (int64_t *)(0x2580 * v11 + a3 + v12);
                    *v13 = __asm_movsd_1(__asm_subsd(__asm_movsd(*v13), *(int64_t *)(v12 + a5)));
                    v14++;
                }
            }
            // 0x80
            v15 = v11 + 1;
        }
    }
    if ((int32_t)a1 < 1) {
        // 0x169
        return result;
    }
    int128_t v16 = __asm_addsd(v3, -0x4010000000000000); // 0xbe
    int64_t v17 = 0; // 0xcc
    int64_t v18 = 8 * v17;
    int64_t v19; // 0x0
    int64_t v20; // 0x120
    int64_t * v21; // 0x124
    int128_t v22; // 0xf5
    int64_t v23; // 0x147
    int128_t v24; // 0x14a
    int128_t v25; // 0x156
    int64_t v26; // 0x15a
    int64_t v27; // 0x15f
    for (int64_t i = v17; i < 0x100000000 * a1 >> 32; i++) {
        // 0x116
        v20 = 8 * i;
        v21 = (int64_t *)(0x2580 * v17 + a4 + v20);
        *v21 = 0;
        v19 = 0;
        if (v2 >= 1) {
            // 0x130
            v25 = __asm_movsd(0);
            v27 = 0;
            v23 = 0x2580 * v27 + a3;
            v24 = __asm_movsd(*(int64_t *)(v23 + v18));
            v25 = __asm_addsd_3(v25, __asm_mulsd_2(v24, *(int64_t *)(v23 + v20)));
            v26 = __asm_movsd_1(v25);
            *v21 = v26;
            v27++;
            v19 = v26;
            while (v27 != v1) {
                // 0x140
                v23 = 0x2580 * v27 + a3;
                v24 = __asm_movsd(*(int64_t *)(v23 + v18));
                v25 = __asm_addsd_3(v25, __asm_mulsd_2(v24, *(int64_t *)(v23 + v20)));
                v26 = __asm_movsd_1(v25);
                *v21 = v26;
                v27++;
                v19 = v26;
            }
        }
        // 0xf0
        v22 = __asm_divsd(__asm_movsd(v19), v16);
        *v21 = __asm_movsd_1(v22);
        *(int64_t *)(v18 + a4 + 0x2580 * i) = __asm_movsd_1(v22);
    }
    // 0xd0
    v17++;
    while (v17 != result) {
        // 0xdc
        v18 = 8 * v17;
        for (int64_t i = v17; i < 0x100000000 * a1 >> 32; i++) {
            // 0x116
            v20 = 8 * i;
            v21 = (int64_t *)(0x2580 * v17 + a4 + v20);
            *v21 = 0;
            v19 = 0;
            if (v2 >= 1) {
                // 0x130
                v25 = __asm_movsd(0);
                v27 = 0;
                v23 = 0x2580 * v27 + a3;
                v24 = __asm_movsd(*(int64_t *)(v23 + v18));
                v25 = __asm_addsd_3(v25, __asm_mulsd_2(v24, *(int64_t *)(v23 + v20)));
                v26 = __asm_movsd_1(v25);
                *v21 = v26;
                v27++;
                v19 = v26;
                while (v27 != v1) {
                    // 0x140
                    v23 = 0x2580 * v27 + a3;
                    v24 = __asm_movsd(*(int64_t *)(v23 + v18));
                    v25 = __asm_addsd_3(v25, __asm_mulsd_2(v24, *(int64_t *)(v23 + v20)));
                    v26 = __asm_movsd_1(v25);
                    *v21 = v26;
                    v27++;
                    v19 = v26;
                }
            }
            // 0xf0
            v22 = __asm_divsd(__asm_movsd(v19), v16);
            *v21 = __asm_movsd_1(v22);
            *(int64_t *)(v18 + a4 + 0x2580 * i) = __asm_movsd_1(v22);
        }
        // 0xd0
        v17++;
    }
    // 0x169
    return result;
}
