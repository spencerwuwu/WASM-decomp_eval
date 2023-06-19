
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "mvt.h"
int64_t kernel_mvt(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = a1 & 0xffffffff; // 0x1
    if ((int32_t)a1 < 1) {
        // 0x9e
        return result;
    }
    int64_t v1 = 0; // 0x5
    int64_t * v2 = (int64_t *)(8 * v1 + a2); // 0x10
    int128_t v3 = __asm_movsd(*v2); // 0x19
    int64_t v4 = 0; // 0x19
    int64_t v5 = 8 * v4; // 0x2a
    int128_t v6 = __asm_movsd(*(int64_t *)(0x3e80 * v1 + a6 + v5)); // 0x2a
    v3 = __asm_addsd(v3, __asm_mulsd(v6, *(int64_t *)(v5 + a4)));
    *v2 = __asm_movsd_1(v3);
    v4++;
    while (v4 != result) {
        // 0x20
        v5 = 8 * v4;
        v6 = __asm_movsd(*(int64_t *)(0x3e80 * v1 + a6 + v5));
        v3 = __asm_addsd(v3, __asm_mulsd(v6, *(int64_t *)(v5 + a4)));
        *v2 = __asm_movsd_1(v3);
        v4++;
    }
    // 0x48
    v1++;
    int64_t v7 = 0; // 0x4e
    while (v1 != result) {
        // 0x10
        v2 = (int64_t *)(8 * v1 + a2);
        v3 = __asm_movsd(*v2);
        v4 = 0;
        v5 = 8 * v4;
        v6 = __asm_movsd(*(int64_t *)(0x3e80 * v1 + a6 + v5));
        v3 = __asm_addsd(v3, __asm_mulsd(v6, *(int64_t *)(v5 + a4)));
        *v2 = __asm_movsd_1(v3);
        v4++;
        while (v4 != result) {
            // 0x20
            v5 = 8 * v4;
            v6 = __asm_movsd(*(int64_t *)(0x3e80 * v1 + a6 + v5));
            v3 = __asm_addsd(v3, __asm_mulsd(v6, *(int64_t *)(v5 + a4)));
            *v2 = __asm_movsd_1(v3);
            v4++;
        }
        // 0x48
        v1++;
        v7 = 0;
    }
    int64_t v8 = 8 * v7; // 0x60
    int64_t * v9 = (int64_t *)(v8 + a3); // 0x60
    int128_t v10 = __asm_movsd(*v9); // 0x67
    int64_t v11 = 0; // 0x67
    int128_t v12 = __asm_movsd(*(int64_t *)(v8 + a6 + 0x3e80 * v11)); // 0x7a
    v10 = __asm_addsd(v10, __asm_mulsd(v12, *(int64_t *)(8 * v11 + a5)));
    *v9 = __asm_movsd_1(v10);
    v11++;
    while (v11 != result) {
        // 0x70
        v12 = __asm_movsd(*(int64_t *)(v8 + a6 + 0x3e80 * v11));
        v10 = __asm_addsd(v10, __asm_mulsd(v12, *(int64_t *)(8 * v11 + a5)));
        *v9 = __asm_movsd_1(v10);
        v11++;
    }
    int64_t v13 = v7 + 1; // 0x96
    v7 = v13;
    while (v13 != result) {
        // 0x60
        v8 = 8 * v7;
        v9 = (int64_t *)(v8 + a3);
        v10 = __asm_movsd(*v9);
        v11 = 0;
        v12 = __asm_movsd(*(int64_t *)(v8 + a6 + 0x3e80 * v11));
        v10 = __asm_addsd(v10, __asm_mulsd(v12, *(int64_t *)(8 * v11 + a5)));
        *v9 = __asm_movsd_1(v10);
        v11++;
        while (v11 != result) {
            // 0x70
            v12 = __asm_movsd(*(int64_t *)(v8 + a6 + 0x3e80 * v11));
            v10 = __asm_addsd(v10, __asm_mulsd(v12, *(int64_t *)(8 * v11 + a5)));
            *v9 = __asm_movsd_1(v10);
            v11++;
        }
        // 0x96
        v13 = v7 + 1;
        v7 = v13;
    }
    // 0x9e
    return result;
}
