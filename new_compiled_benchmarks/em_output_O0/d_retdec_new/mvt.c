
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "mvt.h"
int64_t kernel_mvt(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x0
    if ((int32_t)a1 <= 0) {
        // 0x13d
        return 0;
    }
    int64_t result = a1 & 0xffffffff;
    int64_t v1 = 0;
    int64_t * v2 = (int64_t *)(8 * v1 + a2); // 0x49
    int64_t v3 = 0;
    int128_t v4 = __asm_movsd_1(*v2); // 0x49
    int64_t v5 = 8 * v3; // 0x64
    int128_t v6 = __asm_movsd_1(*(int64_t *)(0x3e80 * v1 + a6 + v5)); // 0x64
    int64_t v7 = __asm_movsd(__asm_addsd(__asm_mulsd(v6, __asm_movsd_1(*(int64_t *)(v5 + a4))), v4)); // 0x86
    *v2 = v7;
    v3++;
    while (v3 != result) {
        // 0x41
        v4 = __asm_movsd_1(v7);
        v5 = 8 * v3;
        v6 = __asm_movsd_1(*(int64_t *)(0x3e80 * v1 + a6 + v5));
        v7 = __asm_movsd(__asm_addsd(__asm_mulsd(v6, __asm_movsd_1(*(int64_t *)(v5 + a4))), v4));
        *v2 = v7;
        v3++;
    }
    // 0x9e
    v1++;
    int64_t v8 = 0; // 0x28
    while (v1 != result) {
        // 0x41
        v2 = (int64_t *)(8 * v1 + a2);
        v3 = 0;
        v4 = __asm_movsd_1(*v2);
        v5 = 8 * v3;
        v6 = __asm_movsd_1(*(int64_t *)(0x3e80 * v1 + a6 + v5));
        v7 = __asm_movsd(__asm_addsd(__asm_mulsd(v6, __asm_movsd_1(*(int64_t *)(v5 + a4))), v4));
        *v2 = v7;
        v3++;
        while (v3 != result) {
            // 0x41
            v4 = __asm_movsd_1(v7);
            v5 = 8 * v3;
            v6 = __asm_movsd_1(*(int64_t *)(0x3e80 * v1 + a6 + v5));
            v7 = __asm_movsd(__asm_addsd(__asm_mulsd(v6, __asm_movsd_1(*(int64_t *)(v5 + a4))), v4));
            *v2 = v7;
            v3++;
        }
        // 0x9e
        v1++;
        v8 = 0;
    }
    int64_t v9 = 8 * v8; // 0xda
    int64_t * v10 = (int64_t *)(v9 + a3); // 0xda
    int64_t v11 = 0;
    int128_t v12 = __asm_movsd_1(*v10); // 0xda
    int128_t v13 = __asm_movsd_1(*(int64_t *)(v9 + a6 + 0x3e80 * v11)); // 0xf5
    int128_t v14 = __asm_mulsd(v13, __asm_movsd_1(*(int64_t *)(8 * v11 + a5))); // 0x107
    int64_t v15 = __asm_movsd(__asm_addsd(v14, v12)); // 0x117
    *v10 = v15;
    v11++;
    while (v11 != result) {
        // 0xd2
        v12 = __asm_movsd_1(v15);
        v13 = __asm_movsd_1(*(int64_t *)(v9 + a6 + 0x3e80 * v11));
        v14 = __asm_mulsd(v13, __asm_movsd_1(*(int64_t *)(8 * v11 + a5)));
        v15 = __asm_movsd(__asm_addsd(v14, v12));
        *v10 = v15;
        v11++;
    }
    int64_t v16 = v8 + 1;
    v8 = v16;
    while (v16 != result) {
        // 0xd2
        v9 = 8 * v8;
        v10 = (int64_t *)(v9 + a3);
        v11 = 0;
        v12 = __asm_movsd_1(*v10);
        v13 = __asm_movsd_1(*(int64_t *)(v9 + a6 + 0x3e80 * v11));
        v14 = __asm_mulsd(v13, __asm_movsd_1(*(int64_t *)(8 * v11 + a5)));
        v15 = __asm_movsd(__asm_addsd(v14, v12));
        *v10 = v15;
        v11++;
        while (v11 != result) {
            // 0xd2
            v12 = __asm_movsd_1(v15);
            v13 = __asm_movsd_1(*(int64_t *)(v9 + a6 + 0x3e80 * v11));
            v14 = __asm_mulsd(v13, __asm_movsd_1(*(int64_t *)(8 * v11 + a5)));
            v15 = __asm_movsd(__asm_addsd(v14, v12));
            *v10 = v15;
            v11++;
        }
        // 0x12f
        v16 = v8 + 1;
        v8 = v16;
    }
    // 0x13d
    return result;
}
