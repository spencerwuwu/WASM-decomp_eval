
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "trisolv.h"
int64_t kernel_trisolv(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if ((int32_t)a1 < 1) {
        // 0x79
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0x4
    int64_t v1 = 0;
    int64_t v2 = 8 * v1; // 0x32
    int64_t v3 = __asm_movsd_1(__asm_movsd(*(int64_t *)(v2 + a4))); // 0x37
    int64_t * v4 = (int64_t *)(v2 + a3); // 0x37
    *v4 = v3;
    int64_t v5 = a2; // 0x3f
    int64_t v6 = v3; // 0x3f
    int64_t v7; // 0x0
    int64_t v8; // 0x5a
    int128_t v9; // 0x5a
    int128_t v10; // 0x66
    int64_t v11; // 0x6a
    int64_t v12; // 0x6f
    if (v1 != 0) {
        // 0x41
        v7 = 0x3e80 * v1 + a2;
        v10 = __asm_movsd(v3);
        v12 = 0;
        v8 = 8 * v12;
        v9 = __asm_movsd(*(int64_t *)(v8 + v7));
        v10 = __asm_subsd(v10, __asm_mulsd(v9, *(int64_t *)(v8 + a3)));
        v11 = __asm_movsd_1(v10);
        *v4 = v11;
        v12++;
        v5 = v7;
        v6 = v11;
        while (v12 != v1) {
            // 0x50
            v8 = 8 * v12;
            v9 = __asm_movsd(*(int64_t *)(v8 + v7));
            v10 = __asm_subsd(v10, __asm_mulsd(v9, *(int64_t *)(v8 + a3)));
            v11 = __asm_movsd_1(v10);
            *v4 = v11;
            v12++;
            v5 = v7;
            v6 = v11;
        }
    }
    // 0x10
    *v4 = __asm_movsd_1(__asm_divsd_2(__asm_movsd(v6), *(int64_t *)(v5 + v2)));
    int64_t v13 = v1 + 1; // 0x2a
    while (v13 != result2) {
        // 0x32
        v1 = v13;
        v2 = 8 * v1;
        v3 = __asm_movsd_1(__asm_movsd(*(int64_t *)(v2 + a4)));
        v4 = (int64_t *)(v2 + a3);
        *v4 = v3;
        v5 = a2;
        v6 = v3;
        if (v1 != 0) {
            // 0x41
            v7 = 0x3e80 * v1 + a2;
            v10 = __asm_movsd(v3);
            v12 = 0;
            v8 = 8 * v12;
            v9 = __asm_movsd(*(int64_t *)(v8 + v7));
            v10 = __asm_subsd(v10, __asm_mulsd(v9, *(int64_t *)(v8 + a3)));
            v11 = __asm_movsd_1(v10);
            *v4 = v11;
            v12++;
            v5 = v7;
            v6 = v11;
            while (v12 != v1) {
                // 0x50
                v8 = 8 * v12;
                v9 = __asm_movsd(*(int64_t *)(v8 + v7));
                v10 = __asm_subsd(v10, __asm_mulsd(v9, *(int64_t *)(v8 + a3)));
                v11 = __asm_movsd_1(v10);
                *v4 = v11;
                v12++;
                v5 = v7;
                v6 = v11;
            }
        }
        // 0x10
        *v4 = __asm_movsd_1(__asm_divsd_2(__asm_movsd(v6), *(int64_t *)(v5 + v2)));
        v13 = v1 + 1;
    }
    // 0x79
    return result2;
}
