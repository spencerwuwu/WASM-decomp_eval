
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "trisolv.h"
int64_t kernel_trisolv(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x0
    if ((int32_t)a1 <= 0) {
        // 0xfd
        return 0;
    }
    int64_t result = a1 & 0xffffffff;
    int64_t v1 = 0;
    int64_t v2 = 8 * v1; // 0x2e
    int64_t v3 = __asm_movsd_1(__asm_movsd(*(int64_t *)(v2 + a4))); // 0x3b
    int64_t * v4 = (int64_t *)(v2 + a3); // 0x3b
    *v4 = v3;
    int64_t v5 = 0x3e80 * v1 + a2;
    int64_t v6 = 0; // 0x4d
    int64_t v7 = v3; // 0x4d
    int64_t v8; // 0x0
    int64_t v9; // 0x69
    int128_t v10; // 0x69
    int128_t v11; // 0x76
    int128_t v12; // 0x83
    int64_t v13; // 0xa7
    if (v1 != 0) {
        v9 = 8 * v6;
        v10 = __asm_movsd(*(int64_t *)(v9 + v5));
        v11 = __asm_movsd(*(int64_t *)(v9 + a3));
        v12 = __asm_movsd(*v4);
        v13 = __asm_movsd_1(__asm_addsd(__asm_mulsd(__asm_movq_2(__asm_movq(v10) ^ -0x8000000000000000), v11), v12));
        *v4 = v13;
        v8 = v6 + 1;
        v6 = v8;
        v7 = v13;
        while (v8 != v1) {
            // 0x53
            v9 = 8 * v6;
            v10 = __asm_movsd(*(int64_t *)(v9 + v5));
            v11 = __asm_movsd(*(int64_t *)(v9 + a3));
            v12 = __asm_movsd(*v4);
            v13 = __asm_movsd_1(__asm_addsd(__asm_mulsd(__asm_movq_2(__asm_movq(v10) ^ -0x8000000000000000), v11), v12));
            *v4 = v13;
            v8 = v6 + 1;
            v6 = v8;
            v7 = v13;
        }
    }
    // 0xba
    *v4 = __asm_movsd_1(__asm_divsd_3(__asm_movsd(v7), *(int64_t *)(v5 + v2)));
    int64_t v14 = v1 + 1;
    while (v14 != result) {
        // 0x26
        v1 = v14;
        v2 = 8 * v1;
        v3 = __asm_movsd_1(__asm_movsd(*(int64_t *)(v2 + a4)));
        v4 = (int64_t *)(v2 + a3);
        *v4 = v3;
        v5 = 0x3e80 * v1 + a2;
        v6 = 0;
        v7 = v3;
        if (v1 != 0) {
            v9 = 8 * v6;
            v10 = __asm_movsd(*(int64_t *)(v9 + v5));
            v11 = __asm_movsd(*(int64_t *)(v9 + a3));
            v12 = __asm_movsd(*v4);
            v13 = __asm_movsd_1(__asm_addsd(__asm_mulsd(__asm_movq_2(__asm_movq(v10) ^ -0x8000000000000000), v11), v12));
            *v4 = v13;
            v8 = v6 + 1;
            v6 = v8;
            v7 = v13;
            while (v8 != v1) {
                // 0x53
                v9 = 8 * v6;
                v10 = __asm_movsd(*(int64_t *)(v9 + v5));
                v11 = __asm_movsd(*(int64_t *)(v9 + a3));
                v12 = __asm_movsd(*v4);
                v13 = __asm_movsd_1(__asm_addsd(__asm_mulsd(__asm_movq_2(__asm_movq(v10) ^ -0x8000000000000000), v11), v12));
                *v4 = v13;
                v8 = v6 + 1;
                v6 = v8;
                v7 = v13;
            }
        }
        // 0xba
        *v4 = __asm_movsd_1(__asm_divsd_3(__asm_movsd(v7), *(int64_t *)(v5 + v2)));
        v14 = v1 + 1;
    }
    // 0xfd
    return result;
}
