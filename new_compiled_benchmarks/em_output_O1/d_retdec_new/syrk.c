
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "syrk.h"
int64_t kernel_syrk(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x0
    if ((int32_t)a1 < 1) {
        // 0xc9
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0xd
    int64_t v1 = 0;
    int64_t v2 = 1;
    int64_t v3 = 0x2580 * v1 + a3; // 0x47
    int64_t v4 = 0; // 0x32
    int64_t * v5 = (int64_t *)(8 * v4 + v3); // 0x4a
    int128_t v6; // 0x0
    *v5 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v5), v6));
    v4++;
    while (v4 != v2) {
        // 0x40
        v5 = (int64_t *)(8 * v4 + v3);
        *v5 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v5), v6));
        v4++;
    }
    int64_t v7; // 0x0
    int128_t v8; // 0x94
    int128_t v9; // 0xa2
    int64_t * v10; // 0xa8
    int64_t v11; // 0xb4
    int64_t v12; // 0xbc
    if ((int32_t)a2 >= 1) {
        // 0x70
        v12 = 0;
        v7 = 8 * v12 + a4;
        v11 = 0;
        v8 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + 0x1f40 * v1)), v6);
        v9 = __asm_mulsd_2(v8, *(int64_t *)(0x1f40 * v11 + v7));
        v10 = (int64_t *)(8 * v11 + v3);
        *v10 = __asm_movsd_1(__asm_addsd(v9, *v10));
        v11++;
        while (v11 != v2) {
            // 0x90
            v8 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + 0x1f40 * v1)), v6);
            v9 = __asm_mulsd_2(v8, *(int64_t *)(0x1f40 * v11 + v7));
            v10 = (int64_t *)(8 * v11 + v3);
            *v10 = __asm_movsd_1(__asm_addsd(v9, *v10));
            v11++;
        }
        // 0xbc
        v12++;
        while (v12 != (a2 & 0xffffffff)) {
            // 0x70
            v7 = 8 * v12 + a4;
            v11 = 0;
            v8 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + 0x1f40 * v1)), v6);
            v9 = __asm_mulsd_2(v8, *(int64_t *)(0x1f40 * v11 + v7));
            v10 = (int64_t *)(8 * v11 + v3);
            *v10 = __asm_movsd_1(__asm_addsd(v9, *v10));
            v11++;
            while (v11 != v2) {
                // 0x90
                v8 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + 0x1f40 * v1)), v6);
                v9 = __asm_mulsd_2(v8, *(int64_t *)(0x1f40 * v11 + v7));
                v10 = (int64_t *)(8 * v11 + v3);
                *v10 = __asm_movsd_1(__asm_addsd(v9, *v10));
                v11++;
            }
            // 0xbc
            v12++;
        }
    }
    int64_t v13 = v1 + 1; // 0x20
    int64_t v14 = v2 + 1; // 0x29
    while (v13 != result2) {
        // 0x2f
        v1 = v13;
        v2 = v14;
        v3 = 0x2580 * v1 + a3;
        v4 = 0;
        v5 = (int64_t *)(8 * v4 + v3);
        *v5 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v5), v6));
        v4++;
        while (v4 != v2) {
            // 0x40
            v5 = (int64_t *)(8 * v4 + v3);
            *v5 = __asm_movsd_1(__asm_mulsd(__asm_movsd(*v5), v6));
            v4++;
        }
        if ((int32_t)a2 >= 1) {
            // 0x70
            v12 = 0;
            v7 = 8 * v12 + a4;
            v11 = 0;
            v8 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + 0x1f40 * v1)), v6);
            v9 = __asm_mulsd_2(v8, *(int64_t *)(0x1f40 * v11 + v7));
            v10 = (int64_t *)(8 * v11 + v3);
            *v10 = __asm_movsd_1(__asm_addsd(v9, *v10));
            v11++;
            while (v11 != v2) {
                // 0x90
                v8 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + 0x1f40 * v1)), v6);
                v9 = __asm_mulsd_2(v8, *(int64_t *)(0x1f40 * v11 + v7));
                v10 = (int64_t *)(8 * v11 + v3);
                *v10 = __asm_movsd_1(__asm_addsd(v9, *v10));
                v11++;
            }
            // 0xbc
            v12++;
            while (v12 != (a2 & 0xffffffff)) {
                // 0x70
                v7 = 8 * v12 + a4;
                v11 = 0;
                v8 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + 0x1f40 * v1)), v6);
                v9 = __asm_mulsd_2(v8, *(int64_t *)(0x1f40 * v11 + v7));
                v10 = (int64_t *)(8 * v11 + v3);
                *v10 = __asm_movsd_1(__asm_addsd(v9, *v10));
                v11++;
                while (v11 != v2) {
                    // 0x90
                    v8 = __asm_mulsd(__asm_movsd(*(int64_t *)(v7 + 0x1f40 * v1)), v6);
                    v9 = __asm_mulsd_2(v8, *(int64_t *)(0x1f40 * v11 + v7));
                    v10 = (int64_t *)(8 * v11 + v3);
                    *v10 = __asm_movsd_1(__asm_addsd(v9, *v10));
                    v11++;
                }
                // 0xbc
                v12++;
            }
        }
        // 0x20
        v13 = v1 + 1;
        v14 = v2 + 1;
    }
    // 0xc9
    return result2;
}
