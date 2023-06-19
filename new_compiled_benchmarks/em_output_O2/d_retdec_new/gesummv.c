
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "gesummv.h"
int64_t kernel_gesummv(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x0
    if ((int32_t)a1 < 1) {
        // 0x97
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0x9
    int64_t v1 = 0; // 0xd
    int64_t v2 = 8 * v1; // 0x10
    int64_t * v3 = (int64_t *)(v2 + a4); // 0x10
    *v3 = 0;
    int64_t * v4 = (int64_t *)(v2 + a6); // 0x18
    *v4 = 0;
    int64_t v5 = 0; // 0x23
    int64_t v6 = 8 * v5; // 0x3b
    int64_t v7 = v6 + 0x28a0 * v1;
    int128_t v8 = __asm_movsd(*(int64_t *)(v7 + a2)); // 0x3b
    int64_t * v9 = (int64_t *)(v6 + a5); // 0x41
    *v3 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v8, *v9), *v3));
    int128_t v10 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v7 + a3)), *v9), *v4); // 0x60
    *v4 = __asm_movsd_1(v10);
    v5++;
    while (v5 != result2) {
        // 0x30
        v6 = 8 * v5;
        v7 = v6 + 0x28a0 * v1;
        v8 = __asm_movsd(*(int64_t *)(v7 + a2));
        v9 = (int64_t *)(v6 + a5);
        *v3 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v8, *v9), *v3));
        v10 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v7 + a3)), *v9), *v4);
        *v4 = __asm_movsd_1(v10);
        v5++;
    }
    // 0x74
    int128_t v11; // 0x0
    *v4 = __asm_movsd_1(__asm_addsd_3(__asm_mulsd_2(__asm_movsd(*v3), v11), __asm_mulsd_2(v10, v11)));
    v1++;
    while (v1 != result2) {
        // 0x10
        v2 = 8 * v1;
        v3 = (int64_t *)(v2 + a4);
        *v3 = 0;
        v4 = (int64_t *)(v2 + a6);
        *v4 = 0;
        v5 = 0;
        v6 = 8 * v5;
        v7 = v6 + 0x28a0 * v1;
        v8 = __asm_movsd(*(int64_t *)(v7 + a2));
        v9 = (int64_t *)(v6 + a5);
        *v3 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v8, *v9), *v3));
        v10 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v7 + a3)), *v9), *v4);
        *v4 = __asm_movsd_1(v10);
        v5++;
        while (v5 != result2) {
            // 0x30
            v6 = 8 * v5;
            v7 = v6 + 0x28a0 * v1;
            v8 = __asm_movsd(*(int64_t *)(v7 + a2));
            v9 = (int64_t *)(v6 + a5);
            *v3 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v8, *v9), *v3));
            v10 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v7 + a3)), *v9), *v4);
            *v4 = __asm_movsd_1(v10);
            v5++;
        }
        // 0x74
        *v4 = __asm_movsd_1(__asm_addsd_3(__asm_mulsd_2(__asm_movsd(*v3), v11), __asm_mulsd_2(v10, v11)));
        v1++;
    }
    // 0x97
    return result2;
}
