
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "bicg.h"
int64_t kernel_bicg(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int128_t v1; // 0x0
    if ((int32_t)a1 > 0) {
        int64_t v2 = 0;
        int128_t v3; // 0x0
        int128_t v4 = v3;
        int128_t v5 = __asm_xorps(v4, v4); // 0x39
        *(int64_t *)(8 * v2 + a4) = __asm_movsd(v5);
        v2++;
        v1 = v5;
        while (v2 != (a1 & 0xffffffff)) {
            // 0x31
            v4 = v5;
            v5 = __asm_xorps(v4, v4);
            *(int64_t *)(8 * v2 + a4) = __asm_movsd(v5);
            v2++;
            v1 = v5;
        }
    }
    // 0x56
    if ((int32_t)a2 <= 0) {
        // 0x13a
        return 0;
    }
    int64_t result = a2 & 0xffffffff;
    int128_t v6 = v1;
    int64_t v7 = 0;
    int128_t v8 = __asm_xorps(v6, v6); // 0x6a
    int64_t v9 = __asm_movsd(v8); // 0x6d
    int64_t v10 = 8 * v7; // 0x6d
    int64_t * v11 = (int64_t *)(v10 + a5); // 0x6d
    *v11 = v9;
    int128_t v12 = v8; // 0x7f
    int64_t v13; // 0x0
    int64_t * v14; // 0x8d
    int128_t v15; // 0x8d
    int128_t v16; // 0x9a
    int64_t * v17; // 0xb5
    int128_t v18; // 0xd7
    int128_t v19; // 0x108
    int64_t v20; // 0x8d
    if ((int32_t)a1 > 0) {
        // 0x85
        v13 = 0;
        v20 = 8 * v13;
        v14 = (int64_t *)(v20 + a4);
        v15 = __asm_movsd_1(*v14);
        v16 = __asm_movsd_1(*(int64_t *)(v10 + a7));
        v17 = (int64_t *)(0x3b60 * v7 + a3 + v20);
        *v14 = __asm_movsd(__asm_addsd(__asm_mulsd(v16, __asm_movsd_1(*v17)), v15));
        v18 = __asm_movsd_1(*v11);
        v19 = __asm_addsd(__asm_mulsd(__asm_movsd_1(*v17), __asm_movsd_1(*(int64_t *)(v20 + a6))), v18);
        *v11 = __asm_movsd(v19);
        v13++;
        v12 = v19;
        while (v13 != (a1 & 0xffffffff)) {
            // 0x85
            v20 = 8 * v13;
            v14 = (int64_t *)(v20 + a4);
            v15 = __asm_movsd_1(*v14);
            v16 = __asm_movsd_1(*(int64_t *)(v10 + a7));
            v17 = (int64_t *)(0x3b60 * v7 + a3 + v20);
            *v14 = __asm_movsd(__asm_addsd(__asm_mulsd(v16, __asm_movsd_1(*v17)), v15));
            v18 = __asm_movsd_1(*v11);
            v19 = __asm_addsd(__asm_mulsd(__asm_movsd_1(*v17), __asm_movsd_1(*(int64_t *)(v20 + a6))), v18);
            *v11 = __asm_movsd(v19);
            v13++;
            v12 = v19;
        }
    }
    int64_t v21 = v7 + 1;
    while (v21 != result) {
        // 0x62
        v6 = v12;
        v7 = v21;
        v8 = __asm_xorps(v6, v6);
        v9 = __asm_movsd(v8);
        v10 = 8 * v7;
        v11 = (int64_t *)(v10 + a5);
        *v11 = v9;
        v12 = v8;
        if ((int32_t)a1 > 0) {
            // 0x85
            v13 = 0;
            v20 = 8 * v13;
            v14 = (int64_t *)(v20 + a4);
            v15 = __asm_movsd_1(*v14);
            v16 = __asm_movsd_1(*(int64_t *)(v10 + a7));
            v17 = (int64_t *)(0x3b60 * v7 + a3 + v20);
            *v14 = __asm_movsd(__asm_addsd(__asm_mulsd(v16, __asm_movsd_1(*v17)), v15));
            v18 = __asm_movsd_1(*v11);
            v19 = __asm_addsd(__asm_mulsd(__asm_movsd_1(*v17), __asm_movsd_1(*(int64_t *)(v20 + a6))), v18);
            *v11 = __asm_movsd(v19);
            v13++;
            v12 = v19;
            while (v13 != (a1 & 0xffffffff)) {
                // 0x85
                v20 = 8 * v13;
                v14 = (int64_t *)(v20 + a4);
                v15 = __asm_movsd_1(*v14);
                v16 = __asm_movsd_1(*(int64_t *)(v10 + a7));
                v17 = (int64_t *)(0x3b60 * v7 + a3 + v20);
                *v14 = __asm_movsd(__asm_addsd(__asm_mulsd(v16, __asm_movsd_1(*v17)), v15));
                v18 = __asm_movsd_1(*v11);
                v19 = __asm_addsd(__asm_mulsd(__asm_movsd_1(*v17), __asm_movsd_1(*(int64_t *)(v20 + a6))), v18);
                *v11 = __asm_movsd(v19);
                v13++;
                v12 = v19;
            }
        }
        // 0x12c
        v21 = v7 + 1;
    }
    // 0x13a
    return result;
}
