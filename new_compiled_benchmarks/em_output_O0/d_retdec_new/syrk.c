
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "syrk.h"
int64_t kernel_syrk(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x0
    int128_t v1; // 0x0
    int64_t v2 = __asm_movsd_1(v1); // 0xa
    int64_t v3 = __asm_movsd_1(v1); // 0xf
    if ((int32_t)a1 <= 0) {
        // 0x132
        return 0;
    }
    int64_t result = a1 & 0xffffffff;
    int64_t v4 = 1;
    int64_t v5 = 0;
    int64_t v6 = 0x2580 * v5 + a3;
    int64_t v7 = 0;
    int128_t v8 = __asm_movsd(v3); // 0x42
    int64_t * v9 = (int64_t *)(8 * v7 + v6); // 0x5d
    *v9 = __asm_movsd_1(__asm_mulsd(v8, *v9));
    v7++;
    while (v7 != v4) {
        // 0x42
        v8 = __asm_movsd(v3);
        v9 = (int64_t *)(8 * v7 + v6);
        *v9 = __asm_movsd_1(__asm_mulsd(v8, *v9));
        v7++;
    }
    int64_t v10; // 0x0
    int64_t v11; // 0x0
    int64_t v12; // 0x0
    int128_t v13; // 0xb6
    int128_t v14; // 0xd1
    int64_t * v15; // 0xec
    if ((int32_t)a2 > 0) {
        // 0x8f
        v11 = 0;
        v12 = 8 * v11 + a4;
        v10 = 0;
        v13 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 0x1f40 * v5));
        v14 = __asm_movsd(*(int64_t *)(0x1f40 * v10 + v12));
        v15 = (int64_t *)(8 * v10 + v6);
        *v15 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v13, v14), __asm_movsd(*v15)));
        v10++;
        while (v10 != v4) {
            // 0x9b
            v13 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 0x1f40 * v5));
            v14 = __asm_movsd(*(int64_t *)(0x1f40 * v10 + v12));
            v15 = (int64_t *)(8 * v10 + v6);
            *v15 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v13, v14), __asm_movsd(*v15)));
            v10++;
        }
        // 0x111
        v11++;
        while (v11 != (a2 & 0xffffffff)) {
            // 0x9b
            v12 = 8 * v11 + a4;
            v10 = 0;
            v13 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 0x1f40 * v5));
            v14 = __asm_movsd(*(int64_t *)(0x1f40 * v10 + v12));
            v15 = (int64_t *)(8 * v10 + v6);
            *v15 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v13, v14), __asm_movsd(*v15)));
            v10++;
            while (v10 != v4) {
                // 0x9b
                v13 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 0x1f40 * v5));
                v14 = __asm_movsd(*(int64_t *)(0x1f40 * v10 + v12));
                v15 = (int64_t *)(8 * v10 + v6);
                *v15 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v13, v14), __asm_movsd(*v15)));
                v10++;
            }
            // 0x111
            v11++;
        }
    }
    int64_t v16 = v5 + 1;
    int64_t v17 = v4 + 1; // 0x29
    while (v16 != result) {
        // 0x42
        v4 = v17;
        v5 = v16;
        v6 = 0x2580 * v5 + a3;
        v7 = 0;
        v8 = __asm_movsd(v3);
        v9 = (int64_t *)(8 * v7 + v6);
        *v9 = __asm_movsd_1(__asm_mulsd(v8, *v9));
        v7++;
        while (v7 != v4) {
            // 0x42
            v8 = __asm_movsd(v3);
            v9 = (int64_t *)(8 * v7 + v6);
            *v9 = __asm_movsd_1(__asm_mulsd(v8, *v9));
            v7++;
        }
        if ((int32_t)a2 > 0) {
            // 0x8f
            v11 = 0;
            v12 = 8 * v11 + a4;
            v10 = 0;
            v13 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 0x1f40 * v5));
            v14 = __asm_movsd(*(int64_t *)(0x1f40 * v10 + v12));
            v15 = (int64_t *)(8 * v10 + v6);
            *v15 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v13, v14), __asm_movsd(*v15)));
            v10++;
            while (v10 != v4) {
                // 0x9b
                v13 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 0x1f40 * v5));
                v14 = __asm_movsd(*(int64_t *)(0x1f40 * v10 + v12));
                v15 = (int64_t *)(8 * v10 + v6);
                *v15 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v13, v14), __asm_movsd(*v15)));
                v10++;
            }
            // 0x111
            v11++;
            while (v11 != (a2 & 0xffffffff)) {
                // 0x9b
                v12 = 8 * v11 + a4;
                v10 = 0;
                v13 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 0x1f40 * v5));
                v14 = __asm_movsd(*(int64_t *)(0x1f40 * v10 + v12));
                v15 = (int64_t *)(8 * v10 + v6);
                *v15 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v13, v14), __asm_movsd(*v15)));
                v10++;
                while (v10 != v4) {
                    // 0x9b
                    v13 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v12 + 0x1f40 * v5));
                    v14 = __asm_movsd(*(int64_t *)(0x1f40 * v10 + v12));
                    v15 = (int64_t *)(8 * v10 + v6);
                    *v15 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v13, v14), __asm_movsd(*v15)));
                    v10++;
                }
                // 0x111
                v11++;
            }
        }
        // 0x124
        v16 = v5 + 1;
        v17 = v4 + 1;
    }
    // 0x132
    return result;
}
