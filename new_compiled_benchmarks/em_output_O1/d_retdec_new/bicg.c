
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "bicg.h"
int64_t kernel_bicg(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t result) {
    int64_t v1 = a1 & 0xffffffff; // 0x17
    int64_t v2 = a2; // 0x1e
    int64_t set_mem; // 0x0
    if ((int32_t)a1 >= 1) {
        // 0x20
        set_mem = memset(a4, 0, 8 * v1);
        v2 = a2 & 0xffffffff;
    }
    // 0x3a
    if ((int32_t)v2 < 1) {
        // 0xb0
        return set_mem;
    }
    int64_t v3 = 0;
    int64_t v4 = 8 * v3; // 0x58
    int64_t * v5 = (int64_t *)(v4 + a5); // 0x58
    *v5 = 0;
    int128_t v6; // 0x70
    int64_t v7; // 0x7f
    int64_t * v8; // 0x7f
    int128_t v9; // 0x7f
    int64_t * v10; // 0x84
    int128_t v11; // 0x95
    int64_t v12; // 0xa6
    if ((int32_t)a1 >= 1) {
        // 0x70
        v12 = 0;
        v6 = __asm_movsd(*(int64_t *)(v4 + result));
        v7 = 8 * v12;
        v8 = (int64_t *)(0x3b60 * v3 + a3 + v7);
        v9 = __asm_mulsd(v6, *v8);
        v10 = (int64_t *)(v7 + a4);
        *v10 = __asm_movsd_1(__asm_addsd(v9, *v10));
        v11 = __asm_mulsd(__asm_movsd(*v8), *(int64_t *)(v7 + a6));
        *v5 = __asm_movsd_1(__asm_addsd(v11, *v5));
        v12++;
        while (v12 != v1) {
            // 0x70
            v6 = __asm_movsd(*(int64_t *)(v4 + result));
            v7 = 8 * v12;
            v8 = (int64_t *)(0x3b60 * v3 + a3 + v7);
            v9 = __asm_mulsd(v6, *v8);
            v10 = (int64_t *)(v7 + a4);
            *v10 = __asm_movsd_1(__asm_addsd(v9, *v10));
            v11 = __asm_mulsd(__asm_movsd(*v8), *(int64_t *)(v7 + a6));
            *v5 = __asm_movsd_1(__asm_addsd(v11, *v5));
            v12++;
        }
    }
    int64_t v13 = v3 + 1; // 0x50
    while (v13 != (v2 & 0xffffffff)) {
        // 0x58
        v3 = v13;
        v4 = 8 * v3;
        v5 = (int64_t *)(v4 + a5);
        *v5 = 0;
        if ((int32_t)a1 >= 1) {
            // 0x70
            v12 = 0;
            v6 = __asm_movsd(*(int64_t *)(v4 + result));
            v7 = 8 * v12;
            v8 = (int64_t *)(0x3b60 * v3 + a3 + v7);
            v9 = __asm_mulsd(v6, *v8);
            v10 = (int64_t *)(v7 + a4);
            *v10 = __asm_movsd_1(__asm_addsd(v9, *v10));
            v11 = __asm_mulsd(__asm_movsd(*v8), *(int64_t *)(v7 + a6));
            *v5 = __asm_movsd_1(__asm_addsd(v11, *v5));
            v12++;
            while (v12 != v1) {
                // 0x70
                v6 = __asm_movsd(*(int64_t *)(v4 + result));
                v7 = 8 * v12;
                v8 = (int64_t *)(0x3b60 * v3 + a3 + v7);
                v9 = __asm_mulsd(v6, *v8);
                v10 = (int64_t *)(v7 + a4);
                *v10 = __asm_movsd_1(__asm_addsd(v9, *v10));
                v11 = __asm_mulsd(__asm_movsd(*v8), *(int64_t *)(v7 + a6));
                *v5 = __asm_movsd_1(__asm_addsd(v11, *v5));
                v12++;
            }
        }
        // 0x50
        v13 = v3 + 1;
    }
    // 0xb0
    return result;
}
