
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "mvt.h"
int64_t kernel_mvt(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if ((int32_t)a1 < 1) {
        // 0x19d
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0x11
    int64_t v1 = a1 & 0xfffffffe; // 0x1a
    int64_t v2 = 0;
    int64_t * v3 = (int64_t *)(8 * v2 + a2); // 0x3c
    int128_t v4 = __asm_movsd(*v3); // 0x3c
    int128_t v5 = v4; // 0x50
    int64_t v6 = 0; // 0x50
    int64_t v7; // 0x6a
    int128_t v8; // 0x6a
    int128_t v9; // 0x7e
    int64_t v10; // 0x87
    int128_t v11; // 0x8b
    int128_t v12; // 0x98
    int64_t v13; // 0xa1
    int64_t v14; // 0x67
    if (result2 != 1) {
        // 0x60
        v14 = 0x3e80 * v2 + a6;
        v13 = 0;
        v7 = 8 * v13;
        v8 = __asm_movsd(*(int64_t *)(v7 + v14));
        v9 = __asm_addsd(__asm_mulsd(v8, *(int64_t *)(v7 + a4)), v4);
        *v3 = __asm_movsd_1(v9);
        v10 = v7 | 8;
        v11 = __asm_movsd(*(int64_t *)(v10 + v14));
        v12 = __asm_addsd(__asm_mulsd(v11, *(int64_t *)(v10 + a4)), v9);
        *v3 = __asm_movsd_1(v12);
        v13 += 2;
        v5 = v12;
        v6 = v13;
        while (v13 != v1) {
            // 0x60
            v7 = 8 * v13;
            v8 = __asm_movsd(*(int64_t *)(v7 + v14));
            v9 = __asm_addsd(__asm_mulsd(v8, *(int64_t *)(v7 + a4)), v12);
            *v3 = __asm_movsd_1(v9);
            v10 = v7 | 8;
            v11 = __asm_movsd(*(int64_t *)(v10 + v14));
            v12 = __asm_addsd(__asm_mulsd(v11, *(int64_t *)(v10 + a4)), v9);
            *v3 = __asm_movsd_1(v12);
            v13 += 2;
            v5 = v12;
            v6 = v13;
        }
    }
    int128_t v15; // 0xc0
    int64_t v16; // 0xc0
    if ((a1 & 1) != 0) {
        // 0xb6
        v16 = 8 * v6;
        v15 = __asm_movsd(*(int64_t *)(0x3e80 * v2 + a6 + v16));
        *v3 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v15, *(int64_t *)(v16 + a4)), v5));
    }
    int64_t v17 = v2 + 1; // 0x30
    int64_t v18 = 0; // 0x36
    while (v17 != result2) {
        // 0x3c
        v2 = v17;
        v3 = (int64_t *)(8 * v2 + a2);
        v4 = __asm_movsd(*v3);
        v5 = v4;
        v6 = 0;
        if (result2 != 1) {
            // 0x60
            v14 = 0x3e80 * v2 + a6;
            v13 = 0;
            v7 = 8 * v13;
            v8 = __asm_movsd(*(int64_t *)(v7 + v14));
            v9 = __asm_addsd(__asm_mulsd(v8, *(int64_t *)(v7 + a4)), v4);
            *v3 = __asm_movsd_1(v9);
            v10 = v7 | 8;
            v11 = __asm_movsd(*(int64_t *)(v10 + v14));
            v12 = __asm_addsd(__asm_mulsd(v11, *(int64_t *)(v10 + a4)), v9);
            *v3 = __asm_movsd_1(v12);
            v13 += 2;
            v5 = v12;
            v6 = v13;
            while (v13 != v1) {
                // 0x60
                v7 = 8 * v13;
                v8 = __asm_movsd(*(int64_t *)(v7 + v14));
                v9 = __asm_addsd(__asm_mulsd(v8, *(int64_t *)(v7 + a4)), v12);
                *v3 = __asm_movsd_1(v9);
                v10 = v7 | 8;
                v11 = __asm_movsd(*(int64_t *)(v10 + v14));
                v12 = __asm_addsd(__asm_mulsd(v11, *(int64_t *)(v10 + a4)), v9);
                *v3 = __asm_movsd_1(v12);
                v13 += 2;
                v5 = v12;
                v6 = v13;
            }
        }
        if ((a1 & 1) != 0) {
            // 0xb6
            v16 = 8 * v6;
            v15 = __asm_movsd(*(int64_t *)(0x3e80 * v2 + a6 + v16));
            *v3 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v15, *(int64_t *)(v16 + a4)), v5));
        }
        // 0x30
        v17 = v2 + 1;
        v18 = 0;
    }
    int64_t v19 = 8 * v18; // 0xfc
    int64_t * v20 = (int64_t *)(v19 + a3); // 0xfc
    int128_t v21 = __asm_movsd(*v20); // 0xfc
    int128_t v22 = v21; // 0x10f
    int64_t v23 = 0; // 0x10f
    if (result2 != 1) {
        int64_t v24 = v19 + a6;
        int64_t v25 = 0; // 0x164
        int128_t v26 = __asm_movsd(*(int64_t *)(0x3e80 * v25 + v24)); // 0x12a
        int128_t v27 = __asm_addsd(__asm_mulsd(v26, *(int64_t *)(8 * v25 + a5)), v21); // 0x135
        *v20 = __asm_movsd_1(v27);
        int64_t v28 = v25 | 1; // 0x141
        int128_t v29 = __asm_movsd(*(int64_t *)(0x3e80 * v28 + v24)); // 0x14f
        int128_t v30 = __asm_addsd(__asm_mulsd(v29, *(int64_t *)(8 * v28 + a5)), v27); // 0x15b
        *v20 = __asm_movsd_1(v30);
        v25 += 2;
        v22 = v30;
        v23 = v25;
        while (v25 != v1) {
            // 0x120
            v26 = __asm_movsd(*(int64_t *)(0x3e80 * v25 + v24));
            v27 = __asm_addsd(__asm_mulsd(v26, *(int64_t *)(8 * v25 + a5)), v30);
            *v20 = __asm_movsd_1(v27);
            v28 = v25 | 1;
            v29 = __asm_movsd(*(int64_t *)(0x3e80 * v28 + v24));
            v30 = __asm_addsd(__asm_mulsd(v29, *(int64_t *)(8 * v28 + a5)), v27);
            *v20 = __asm_movsd_1(v30);
            v25 += 2;
            v22 = v30;
            v23 = v25;
        }
    }
    if ((a1 & 1) != 0) {
        int128_t v31 = __asm_movsd(*(int64_t *)(v19 + a6 + 0x3e80 * v23)); // 0x183
        int128_t v32 = __asm_mulsd(v31, *(int64_t *)(8 * v23 + a5)); // 0x189
        *v20 = __asm_movsd_1(__asm_addsd(v32, v22));
    }
    // 0xf0
    while (v18 + 1 != result2) {
        // continue -> 0xfc
        continue;
    }
    // 0x19d
    return result2;
}
