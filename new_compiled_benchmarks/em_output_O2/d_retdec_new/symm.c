
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "symm.h"
int64_t kernel_symm(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x0
    if ((int32_t)a1 < 1) {
        // 0xf8
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0x11
    int64_t v1 = 0;
    int128_t v2; // 0x0
    int128_t v3 = v2; // 0x2e
    int64_t v4; // 0x0
    int64_t v5; // 0x0
    int64_t v6; // 0x0
    int64_t v7; // 0x0
    int64_t v8; // 0x0
    int128_t v9; // 0x0
    int128_t v10; // 0x6c
    int64_t * v11; // 0x71
    int128_t v12; // 0x83
    int64_t v13; // 0x8d
    int128_t v14; // 0xb5
    int64_t v15; // 0xb9
    int64_t * v16; // 0xc0
    int128_t v17; // 0xc0
    int64_t * v18; // 0xca
    int128_t v19; // 0xe7
    int64_t v20; // 0xeb
    int64_t v21; // 0x37
    int64_t v22; // 0x0
    int64_t * v23; // 0x0
    int128_t v24; // 0x0
    int128_t v25; // 0x0
    if ((int32_t)a2 >= 1) {
        // 0x30
        v21 = 0x1f40 * v1 + a4;
        v22 = 0x2580 * v1;
        v23 = (int64_t *)(v21 + 8 * v1);
        v5 = 0;
        v25 = v2;
        if (v1 == 0) {
            // 0x50
            v4 = 8 * v5;
            v24 = __asm_xorpd(v25, v25);
        } else {
            // 0x9a
            v6 = 8 * v5;
            v7 = v6 + a5;
            v19 = __asm_xorpd(v25, v25);
            v20 = 0;
            v14 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + v22)), v9);
            v15 = 0x2580 * v20;
            v16 = (int64_t *)(8 * v20 + v21);
            v17 = __asm_mulsd_2(v14, *v16);
            v18 = (int64_t *)(v6 + a3 + v15);
            *v18 = __asm_movsd_1(__asm_addsd(v17, *v18));
            v19 = __asm_addsd_3(v19, __asm_mulsd_2(__asm_movsd(*(int64_t *)(v15 + v7)), *v16));
            v20++;
            v4 = v6;
            v24 = v19;
            while (v20 != v1) {
                // 0xb0
                v14 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + v22)), v9);
                v15 = 0x2580 * v20;
                v16 = (int64_t *)(8 * v20 + v21);
                v17 = __asm_mulsd_2(v14, *v16);
                v18 = (int64_t *)(v6 + a3 + v15);
                *v18 = __asm_movsd_1(__asm_addsd(v17, *v18));
                v19 = __asm_addsd_3(v19, __asm_mulsd_2(__asm_movsd(*(int64_t *)(v15 + v7)), *v16));
                v20++;
                v4 = v6;
                v24 = v19;
            }
        }
        // 0x54
        v8 = v4 + v22;
        v10 = __asm_mulsd_2(__asm_mulsd(__asm_movsd(*(int64_t *)(v8 + a5)), v9), *v23);
        v11 = (int64_t *)(v8 + a3);
        v12 = __asm_addsd_3(__asm_mulsd(v24, v9), __asm_addsd_3(__asm_mulsd(__asm_movsd(*v11), v9), v10));
        *v11 = __asm_movsd_1(v12);
        v13 = v5 + 1;
        v3 = v12;
        while (v13 != (a2 & 0xffffffff)) {
            // 0x95
            v5 = v13;
            v25 = v12;
            if (v1 == 0) {
                // 0x50
                v4 = 8 * v5;
                v24 = __asm_xorpd(v25, v25);
            } else {
                // 0x9a
                v6 = 8 * v5;
                v7 = v6 + a5;
                v19 = __asm_xorpd(v25, v25);
                v20 = 0;
                v14 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + v22)), v9);
                v15 = 0x2580 * v20;
                v16 = (int64_t *)(8 * v20 + v21);
                v17 = __asm_mulsd_2(v14, *v16);
                v18 = (int64_t *)(v6 + a3 + v15);
                *v18 = __asm_movsd_1(__asm_addsd(v17, *v18));
                v19 = __asm_addsd_3(v19, __asm_mulsd_2(__asm_movsd(*(int64_t *)(v15 + v7)), *v16));
                v20++;
                v4 = v6;
                v24 = v19;
                while (v20 != v1) {
                    // 0xb0
                    v14 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + v22)), v9);
                    v15 = 0x2580 * v20;
                    v16 = (int64_t *)(8 * v20 + v21);
                    v17 = __asm_mulsd_2(v14, *v16);
                    v18 = (int64_t *)(v6 + a3 + v15);
                    *v18 = __asm_movsd_1(__asm_addsd(v17, *v18));
                    v19 = __asm_addsd_3(v19, __asm_mulsd_2(__asm_movsd(*(int64_t *)(v15 + v7)), *v16));
                    v20++;
                    v4 = v6;
                    v24 = v19;
                }
            }
            // 0x54
            v8 = v4 + v22;
            v10 = __asm_mulsd_2(__asm_mulsd(__asm_movsd(*(int64_t *)(v8 + a5)), v9), *v23);
            v11 = (int64_t *)(v8 + a3);
            v12 = __asm_addsd_3(__asm_mulsd(v24, v9), __asm_addsd_3(__asm_mulsd(__asm_movsd(*v11), v9), v10));
            *v11 = __asm_movsd_1(v12);
            v13 = v5 + 1;
            v3 = v12;
        }
    }
    int64_t v26 = v1 + 1; // 0x20
    while (v26 != result2) {
        // 0x2c
        v1 = v26;
        int128_t v27 = v3;
        v3 = v27;
        if ((int32_t)a2 >= 1) {
            // 0x30
            v21 = 0x1f40 * v1 + a4;
            v22 = 0x2580 * v1;
            v23 = (int64_t *)(v21 + 8 * v1);
            v5 = 0;
            v25 = v27;
            if (v1 == 0) {
                // 0x50
                v4 = 8 * v5;
                v24 = __asm_xorpd(v25, v25);
            } else {
                // 0x9a
                v6 = 8 * v5;
                v7 = v6 + a5;
                v19 = __asm_xorpd(v25, v25);
                v20 = 0;
                v14 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + v22)), v9);
                v15 = 0x2580 * v20;
                v16 = (int64_t *)(8 * v20 + v21);
                v17 = __asm_mulsd_2(v14, *v16);
                v18 = (int64_t *)(v6 + a3 + v15);
                *v18 = __asm_movsd_1(__asm_addsd(v17, *v18));
                v19 = __asm_addsd_3(v19, __asm_mulsd_2(__asm_movsd(*(int64_t *)(v15 + v7)), *v16));
                v20++;
                v4 = v6;
                v24 = v19;
                while (v20 != v1) {
                    // 0xb0
                    v14 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + v22)), v9);
                    v15 = 0x2580 * v20;
                    v16 = (int64_t *)(8 * v20 + v21);
                    v17 = __asm_mulsd_2(v14, *v16);
                    v18 = (int64_t *)(v6 + a3 + v15);
                    *v18 = __asm_movsd_1(__asm_addsd(v17, *v18));
                    v19 = __asm_addsd_3(v19, __asm_mulsd_2(__asm_movsd(*(int64_t *)(v15 + v7)), *v16));
                    v20++;
                    v4 = v6;
                    v24 = v19;
                }
            }
            // 0x54
            v8 = v4 + v22;
            v10 = __asm_mulsd_2(__asm_mulsd(__asm_movsd(*(int64_t *)(v8 + a5)), v9), *v23);
            v11 = (int64_t *)(v8 + a3);
            v12 = __asm_addsd_3(__asm_mulsd(v24, v9), __asm_addsd_3(__asm_mulsd(__asm_movsd(*v11), v9), v10));
            *v11 = __asm_movsd_1(v12);
            v13 = v5 + 1;
            v3 = v12;
            while (v13 != (a2 & 0xffffffff)) {
                // 0x95
                v5 = v13;
                v25 = v12;
                if (v1 == 0) {
                    // 0x50
                    v4 = 8 * v5;
                    v24 = __asm_xorpd(v25, v25);
                } else {
                    // 0x9a
                    v6 = 8 * v5;
                    v7 = v6 + a5;
                    v19 = __asm_xorpd(v25, v25);
                    v20 = 0;
                    v14 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + v22)), v9);
                    v15 = 0x2580 * v20;
                    v16 = (int64_t *)(8 * v20 + v21);
                    v17 = __asm_mulsd_2(v14, *v16);
                    v18 = (int64_t *)(v6 + a3 + v15);
                    *v18 = __asm_movsd_1(__asm_addsd(v17, *v18));
                    v19 = __asm_addsd_3(v19, __asm_mulsd_2(__asm_movsd(*(int64_t *)(v15 + v7)), *v16));
                    v20++;
                    v4 = v6;
                    v24 = v19;
                    while (v20 != v1) {
                        // 0xb0
                        v14 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + v22)), v9);
                        v15 = 0x2580 * v20;
                        v16 = (int64_t *)(8 * v20 + v21);
                        v17 = __asm_mulsd_2(v14, *v16);
                        v18 = (int64_t *)(v6 + a3 + v15);
                        *v18 = __asm_movsd_1(__asm_addsd(v17, *v18));
                        v19 = __asm_addsd_3(v19, __asm_mulsd_2(__asm_movsd(*(int64_t *)(v15 + v7)), *v16));
                        v20++;
                        v4 = v6;
                        v24 = v19;
                    }
                }
                // 0x54
                v8 = v4 + v22;
                v10 = __asm_mulsd_2(__asm_mulsd(__asm_movsd(*(int64_t *)(v8 + a5)), v9), *v23);
                v11 = (int64_t *)(v8 + a3);
                v12 = __asm_addsd_3(__asm_mulsd(v24, v9), __asm_addsd_3(__asm_mulsd(__asm_movsd(*v11), v9), v10));
                *v11 = __asm_movsd_1(v12);
                v13 = v5 + 1;
                v3 = v12;
            }
        }
        // 0x20
        v26 = v1 + 1;
    }
    // 0xf8
    return result2;
}
