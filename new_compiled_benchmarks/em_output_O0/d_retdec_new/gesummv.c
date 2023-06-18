
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
    int128_t v1; // 0x0
    int64_t v2 = __asm_movsd_1(v1); // 0x7
    int64_t v3 = __asm_movsd_1(v1); // 0xc
    if ((int32_t)a1 <= 0) {
        // 0x154
        return 0;
    }
    int64_t result = a1 & 0xffffffff;
    int64_t v4 = 0;
    int128_t v5; // 0x0
    int128_t v6 = v5;
    int128_t v7 = __asm_xorps(v6, v6); // 0x40
    int64_t v8 = __asm_movsd_1(v7); // 0x43
    int64_t v9 = 8 * v4; // 0x43
    int64_t * v10 = (int64_t *)(v9 + a4); // 0x43
    *v10 = v8;
    int64_t v11 = __asm_movsd_1(__asm_xorps(v7, v7)); // 0x53
    int64_t * v12 = (int64_t *)(v9 + a6); // 0x53
    *v12 = v11;
    int64_t v13 = 0;
    int64_t v14 = 8 * v13; // 0x81
    int64_t v15 = v14 + 0x28a0 * v4;
    int128_t v16 = __asm_movsd(*(int64_t *)(v15 + a2)); // 0x81
    int64_t * v17 = (int64_t *)(v14 + a5); // 0x8e
    *v10 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v16, __asm_movsd(*v17)), __asm_movsd(*v10)));
    int128_t v18 = __asm_movsd(*(int64_t *)(v15 + a3)); // 0xcb
    *v12 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v18, __asm_movsd(*v17)), __asm_movsd(*v12)));
    v13++;
    while (v13 != result) {
        // 0x6b
        v14 = 8 * v13;
        v15 = v14 + 0x28a0 * v4;
        v16 = __asm_movsd(*(int64_t *)(v15 + a2));
        v17 = (int64_t *)(v14 + a5);
        *v10 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v16, __asm_movsd(*v17)), __asm_movsd(*v10)));
        v18 = __asm_movsd(*(int64_t *)(v15 + a3));
        *v12 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v18, __asm_movsd(*v17)), __asm_movsd(*v12)));
        v13++;
    }
    int128_t v19 = __asm_addsd(__asm_mulsd(__asm_movsd(v2), __asm_movsd(*v10)), __asm_mulsd_2(__asm_movsd(v3), *v12)); // 0x135
    *v12 = __asm_movsd_1(v19);
    v4++;
    while (v4 != result) {
        // 0x6b
        v6 = v19;
        v7 = __asm_xorps(v6, v6);
        v8 = __asm_movsd_1(v7);
        v9 = 8 * v4;
        v10 = (int64_t *)(v9 + a4);
        *v10 = v8;
        v11 = __asm_movsd_1(__asm_xorps(v7, v7));
        v12 = (int64_t *)(v9 + a6);
        *v12 = v11;
        v13 = 0;
        v14 = 8 * v13;
        v15 = v14 + 0x28a0 * v4;
        v16 = __asm_movsd(*(int64_t *)(v15 + a2));
        v17 = (int64_t *)(v14 + a5);
        *v10 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v16, __asm_movsd(*v17)), __asm_movsd(*v10)));
        v18 = __asm_movsd(*(int64_t *)(v15 + a3));
        *v12 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v18, __asm_movsd(*v17)), __asm_movsd(*v12)));
        v13++;
        while (v13 != result) {
            // 0x6b
            v14 = 8 * v13;
            v15 = v14 + 0x28a0 * v4;
            v16 = __asm_movsd(*(int64_t *)(v15 + a2));
            v17 = (int64_t *)(v14 + a5);
            *v10 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v16, __asm_movsd(*v17)), __asm_movsd(*v10)));
            v18 = __asm_movsd(*(int64_t *)(v15 + a3));
            *v12 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v18, __asm_movsd(*v17)), __asm_movsd(*v12)));
            v13++;
        }
        // 0x10d
        v19 = __asm_addsd(__asm_mulsd(__asm_movsd(v2), __asm_movsd(*v10)), __asm_mulsd_2(__asm_movsd(v3), *v12));
        *v12 = __asm_movsd_1(v19);
        v4++;
    }
    // 0x154
    return result;
}
