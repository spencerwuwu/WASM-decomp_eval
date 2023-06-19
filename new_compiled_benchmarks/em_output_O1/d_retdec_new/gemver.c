
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "gemver.h"
int64_t kernel_gemver(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t result = a1 & 0xffffffff; // 0x1
    if ((int32_t)a1 < 1) {
        // 0x143
        return result;
    }
    int64_t v1 = 0; // 0x5
    int64_t v2 = 8 * v1; // 0x2a
    int64_t v3 = 0; // 0x13
    int128_t v4 = __asm_movsd(*(int64_t *)(v2 + a3)); // 0x2a
    int64_t v5 = 8 * v3; // 0x30
    int128_t v6 = __asm_mulsd_2(v4, *(int64_t *)(v5 + a4)); // 0x30
    int64_t * v7 = (int64_t *)(0x3e80 * v1 + a2 + v5); // 0x36
    int128_t v8 = __asm_addsd(v6, *v7); // 0x36
    int128_t v9 = __asm_mulsd_2(__asm_movsd(*(int64_t *)(v2 + a5)), *(int64_t *)(v5 + a6)); // 0x42
    *v7 = __asm_movsd_1(__asm_addsd_3(v9, v8));
    v3++;
    while (v3 != result) {
        // 0x20
        v4 = __asm_movsd(*(int64_t *)(v2 + a3));
        v5 = 8 * v3;
        v6 = __asm_mulsd_2(v4, *(int64_t *)(v5 + a4));
        v7 = (int64_t *)(0x3e80 * v1 + a2 + v5);
        v8 = __asm_addsd(v6, *v7);
        v9 = __asm_mulsd_2(__asm_movsd(*(int64_t *)(v2 + a5)), *(int64_t *)(v5 + a6));
        *v7 = __asm_movsd_1(__asm_addsd_3(v9, v8));
        v3++;
    }
    // 0x5a
    v1++;
    int64_t v10 = 0; // 0x60
    while (v1 != result) {
        // 0x10
        v2 = 8 * v1;
        v3 = 0;
        v4 = __asm_movsd(*(int64_t *)(v2 + a3));
        v5 = 8 * v3;
        v6 = __asm_mulsd_2(v4, *(int64_t *)(v5 + a4));
        v7 = (int64_t *)(0x3e80 * v1 + a2 + v5);
        v8 = __asm_addsd(v6, *v7);
        v9 = __asm_mulsd_2(__asm_movsd(*(int64_t *)(v2 + a5)), *(int64_t *)(v5 + a6));
        *v7 = __asm_movsd_1(__asm_addsd_3(v9, v8));
        v3++;
        while (v3 != result) {
            // 0x20
            v4 = __asm_movsd(*(int64_t *)(v2 + a3));
            v5 = 8 * v3;
            v6 = __asm_mulsd_2(v4, *(int64_t *)(v5 + a4));
            v7 = (int64_t *)(0x3e80 * v1 + a2 + v5);
            v8 = __asm_addsd(v6, *v7);
            v9 = __asm_mulsd_2(__asm_movsd(*(int64_t *)(v2 + a5)), *(int64_t *)(v5 + a6));
            *v7 = __asm_movsd_1(__asm_addsd_3(v9, v8));
            v3++;
        }
        // 0x5a
        v1++;
        v10 = 0;
    }
    int64_t v11 = 8 * v10; // 0x80
    int64_t * v12 = (int64_t *)(v11 + a8); // 0x80
    int128_t v13 = __asm_movsd(*v12); // 0x89
    int64_t v14 = 0; // 0x89
    int128_t v15; // 0x0
    int128_t v16 = __asm_mulsd(__asm_movsd(*(int64_t *)(v11 + a2 + 0x3e80 * v14)), v15); // 0xa0
    v13 = __asm_addsd_3(v13, __asm_mulsd_2(v16, *(int64_t *)(8 * v14 + a9)));
    *v12 = __asm_movsd_1(v13);
    v14++;
    while (v14 != result) {
        // 0x90
        v16 = __asm_mulsd(__asm_movsd(*(int64_t *)(v11 + a2 + 0x3e80 * v14)), v15);
        v13 = __asm_addsd_3(v13, __asm_mulsd_2(v16, *(int64_t *)(8 * v14 + a9)));
        *v12 = __asm_movsd_1(v13);
        v14++;
    }
    int64_t v17 = v10 + 1; // 0xbc
    v10 = v17;
    int64_t v18 = 0; // 0xc2
    while (v17 != result) {
        // 0x80
        v11 = 8 * v10;
        v12 = (int64_t *)(v11 + a8);
        v13 = __asm_movsd(*v12);
        v14 = 0;
        v16 = __asm_mulsd(__asm_movsd(*(int64_t *)(v11 + a2 + 0x3e80 * v14)), v15);
        v13 = __asm_addsd_3(v13, __asm_mulsd_2(v16, *(int64_t *)(8 * v14 + a9)));
        *v12 = __asm_movsd_1(v13);
        v14++;
        while (v14 != result) {
            // 0x90
            v16 = __asm_mulsd(__asm_movsd(*(int64_t *)(v11 + a2 + 0x3e80 * v14)), v15);
            v13 = __asm_addsd_3(v13, __asm_mulsd_2(v16, *(int64_t *)(8 * v14 + a9)));
            *v12 = __asm_movsd_1(v13);
            v14++;
        }
        // 0xbc
        v17 = v10 + 1;
        v10 = v17;
        v18 = 0;
    }
    int64_t v19 = 8 * v18; // 0xd0
    int64_t * v20 = (int64_t *)(v19 + a8); // 0xd0
    *v20 = __asm_movsd_1(__asm_addsd(__asm_movsd(*v20), *(int64_t *)(v19 + a10)));
    int64_t v21 = v18 + 1; // 0xe2
    v18 = v21;
    int64_t v22 = 0; // 0xe8
    while (v21 != result) {
        // 0xd0
        v19 = 8 * v18;
        v20 = (int64_t *)(v19 + a8);
        *v20 = __asm_movsd_1(__asm_addsd(__asm_movsd(*v20), *(int64_t *)(v19 + a10)));
        v21 = v18 + 1;
        v18 = v21;
        v22 = 0;
    }
    int64_t * v23 = (int64_t *)(8 * v22 + a7); // 0x100
    int128_t v24 = __asm_movsd(*v23); // 0x108
    int64_t v25 = 0; // 0x108
    int64_t v26 = 8 * v25; // 0x11a
    int128_t v27 = __asm_mulsd(__asm_movsd(*(int64_t *)(0x3e80 * v22 + a2 + v26)), v15); // 0x120
    v24 = __asm_addsd_3(v24, __asm_mulsd_2(v27, *(int64_t *)(v26 + a8)));
    *v23 = __asm_movsd_1(v24);
    v25++;
    while (v25 != result) {
        // 0x110
        v26 = 8 * v25;
        v27 = __asm_mulsd(__asm_movsd(*(int64_t *)(0x3e80 * v22 + a2 + v26)), v15);
        v24 = __asm_addsd_3(v24, __asm_mulsd_2(v27, *(int64_t *)(v26 + a8)));
        *v23 = __asm_movsd_1(v24);
        v25++;
    }
    int64_t v28 = v22 + 1; // 0x13b
    v22 = v28;
    while (v28 != result) {
        // 0x100
        v23 = (int64_t *)(8 * v22 + a7);
        v24 = __asm_movsd(*v23);
        v25 = 0;
        v26 = 8 * v25;
        v27 = __asm_mulsd(__asm_movsd(*(int64_t *)(0x3e80 * v22 + a2 + v26)), v15);
        v24 = __asm_addsd_3(v24, __asm_mulsd_2(v27, *(int64_t *)(v26 + a8)));
        *v23 = __asm_movsd_1(v24);
        v25++;
        while (v25 != result) {
            // 0x110
            v26 = 8 * v25;
            v27 = __asm_mulsd(__asm_movsd(*(int64_t *)(0x3e80 * v22 + a2 + v26)), v15);
            v24 = __asm_addsd_3(v24, __asm_mulsd_2(v27, *(int64_t *)(v26 + a8)));
            *v23 = __asm_movsd_1(v24);
            v25++;
        }
        // 0x13b
        v28 = v22 + 1;
        v22 = v28;
    }
    // 0x143
    return result;
}
