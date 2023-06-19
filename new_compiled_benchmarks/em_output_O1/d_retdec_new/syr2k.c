
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "syr2k.h"
int64_t kernel_syr2k(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x0
    if ((int32_t)a1 < 1) {
        // 0xf2
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0x12
    int64_t v1 = 0;
    int64_t v2 = 1;
    int64_t v3 = 0x2580 * v1 + a3; // 0x57
    int64_t v4 = 0; // 0x41
    int64_t * v5 = (int64_t *)(8 * v4 + v3); // 0x5a
    int128_t v6; // 0x0
    *v5 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v5), v6));
    v4++;
    while (v4 != v2) {
        // 0x50
        v5 = (int64_t *)(8 * v4 + v3);
        *v5 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v5), v6));
        v4++;
    }
    int64_t v7; // 0x8b
    int64_t v8; // 0x0
    int64_t v9; // 0x0
    int128_t v10; // 0xb1
    int128_t v11; // 0xbf
    int128_t v12; // 0xc3
    int128_t v13; // 0xcd
    int64_t * v14; // 0xd1
    int64_t v15; // 0xdd
    int64_t v16; // 0xe5
    if ((int32_t)a2 >= 1) {
        // 0x80
        v16 = 0;
        v7 = 8 * v16;
        v8 = v7 + 0x1f40 * v1;
        v15 = 0;
        v9 = 0x1f40 * v15 + v7;
        v10 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a4)), v6);
        v11 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a5)), v6);
        v12 = __asm_mulsd_2(v11, *(int64_t *)(v8 + a4));
        v13 = __asm_addsd(__asm_mulsd_2(v10, *(int64_t *)(v8 + a5)), v12);
        v14 = (int64_t *)(8 * v15 + v3);
        *v14 = __asm_movsd_1(__asm_addsd_3(v13, *v14));
        v15++;
        while (v15 != v2) {
            // 0xa0
            v9 = 0x1f40 * v15 + v7;
            v10 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a4)), v6);
            v11 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a5)), v6);
            v12 = __asm_mulsd_2(v11, *(int64_t *)(v8 + a4));
            v13 = __asm_addsd(__asm_mulsd_2(v10, *(int64_t *)(v8 + a5)), v12);
            v14 = (int64_t *)(8 * v15 + v3);
            *v14 = __asm_movsd_1(__asm_addsd_3(v13, *v14));
            v15++;
        }
        // 0xe5
        v16++;
        while (v16 != (a2 & 0xffffffff)) {
            // 0x80
            v7 = 8 * v16;
            v8 = v7 + 0x1f40 * v1;
            v15 = 0;
            v9 = 0x1f40 * v15 + v7;
            v10 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a4)), v6);
            v11 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a5)), v6);
            v12 = __asm_mulsd_2(v11, *(int64_t *)(v8 + a4));
            v13 = __asm_addsd(__asm_mulsd_2(v10, *(int64_t *)(v8 + a5)), v12);
            v14 = (int64_t *)(8 * v15 + v3);
            *v14 = __asm_movsd_1(__asm_addsd_3(v13, *v14));
            v15++;
            while (v15 != v2) {
                // 0xa0
                v9 = 0x1f40 * v15 + v7;
                v10 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a4)), v6);
                v11 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a5)), v6);
                v12 = __asm_mulsd_2(v11, *(int64_t *)(v8 + a4));
                v13 = __asm_addsd(__asm_mulsd_2(v10, *(int64_t *)(v8 + a5)), v12);
                v14 = (int64_t *)(8 * v15 + v3);
                *v14 = __asm_movsd_1(__asm_addsd_3(v13, *v14));
                v15++;
            }
            // 0xe5
            v16++;
        }
    }
    int64_t v17 = v1 + 1; // 0x30
    int64_t v18 = v2 + 1; // 0x39
    while (v17 != result2) {
        // 0x3f
        v1 = v17;
        v2 = v18;
        v3 = 0x2580 * v1 + a3;
        v4 = 0;
        v5 = (int64_t *)(8 * v4 + v3);
        *v5 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v5), v6));
        v4++;
        while (v4 != v2) {
            // 0x50
            v5 = (int64_t *)(8 * v4 + v3);
            *v5 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v5), v6));
            v4++;
        }
        if ((int32_t)a2 >= 1) {
            // 0x80
            v16 = 0;
            v7 = 8 * v16;
            v8 = v7 + 0x1f40 * v1;
            v15 = 0;
            v9 = 0x1f40 * v15 + v7;
            v10 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a4)), v6);
            v11 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a5)), v6);
            v12 = __asm_mulsd_2(v11, *(int64_t *)(v8 + a4));
            v13 = __asm_addsd(__asm_mulsd_2(v10, *(int64_t *)(v8 + a5)), v12);
            v14 = (int64_t *)(8 * v15 + v3);
            *v14 = __asm_movsd_1(__asm_addsd_3(v13, *v14));
            v15++;
            while (v15 != v2) {
                // 0xa0
                v9 = 0x1f40 * v15 + v7;
                v10 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a4)), v6);
                v11 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a5)), v6);
                v12 = __asm_mulsd_2(v11, *(int64_t *)(v8 + a4));
                v13 = __asm_addsd(__asm_mulsd_2(v10, *(int64_t *)(v8 + a5)), v12);
                v14 = (int64_t *)(8 * v15 + v3);
                *v14 = __asm_movsd_1(__asm_addsd_3(v13, *v14));
                v15++;
            }
            // 0xe5
            v16++;
            while (v16 != (a2 & 0xffffffff)) {
                // 0x80
                v7 = 8 * v16;
                v8 = v7 + 0x1f40 * v1;
                v15 = 0;
                v9 = 0x1f40 * v15 + v7;
                v10 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a4)), v6);
                v11 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a5)), v6);
                v12 = __asm_mulsd_2(v11, *(int64_t *)(v8 + a4));
                v13 = __asm_addsd(__asm_mulsd_2(v10, *(int64_t *)(v8 + a5)), v12);
                v14 = (int64_t *)(8 * v15 + v3);
                *v14 = __asm_movsd_1(__asm_addsd_3(v13, *v14));
                v15++;
                while (v15 != v2) {
                    // 0xa0
                    v9 = 0x1f40 * v15 + v7;
                    v10 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a4)), v6);
                    v11 = __asm_mulsd(__asm_movsd(*(int64_t *)(v9 + a5)), v6);
                    v12 = __asm_mulsd_2(v11, *(int64_t *)(v8 + a4));
                    v13 = __asm_addsd(__asm_mulsd_2(v10, *(int64_t *)(v8 + a5)), v12);
                    v14 = (int64_t *)(8 * v15 + v3);
                    *v14 = __asm_movsd_1(__asm_addsd_3(v13, *v14));
                    v15++;
                }
                // 0xe5
                v16++;
            }
        }
        // 0x30
        v17 = v1 + 1;
        v18 = v2 + 1;
    }
    // 0xf2
    return result2;
}
