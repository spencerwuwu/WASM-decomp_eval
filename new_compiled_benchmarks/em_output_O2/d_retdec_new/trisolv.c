
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
        // 0xeb
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0xb
    int64_t v1 = 0;
    int64_t v2 = 8 * v1; // 0x41
    int128_t v3 = __asm_movsd(*(int64_t *)(v2 + a4)); // 0x41
    int64_t v4 = __asm_movsd_1(v3); // 0x46
    int64_t * v5 = (int64_t *)(v2 + a3); // 0x46
    *v5 = v4;
    int128_t v6 = v3; // 0x4e
    int64_t v7; // 0x0
    int64_t v8; // 0x77
    int64_t v9; // 0x7a
    int128_t v10; // 0x7a
    int128_t v11; // 0x8e
    int64_t v12; // 0x97
    int128_t v13; // 0x9b
    int128_t v14; // 0xa7
    int64_t v15; // 0xb0
    int64_t v16; // 0xd1
    int128_t v17; // 0xd1
    int128_t v18; // 0xdd
    int128_t v19; // 0x0
    int128_t v20; // 0x0
    if (v1 != 0) {
        // 0x50
        v19 = v3;
        v7 = 0;
        if (v1 != 1) {
            // 0x60
            v8 = 0x3e80 * v1 + a2;
            v15 = 0;
            v9 = 8 * v15;
            v10 = __asm_movsd(*(int64_t *)(v9 + v8));
            v11 = __asm_subsd(v3, __asm_mulsd(v10, *(int64_t *)(v9 + a3)));
            *v5 = __asm_movsd_1(v11);
            v12 = v9 | 8;
            v13 = __asm_movsd(*(int64_t *)(v12 + v8));
            v14 = __asm_subsd(v11, __asm_mulsd(v13, *(int64_t *)(v12 + a3)));
            *v5 = __asm_movsd_1(v14);
            v15 += 2;
            v19 = v14;
            v7 = v15;
            while (v15 != (v1 & 0x7ffffffffffffffe)) {
                // 0x70
                v9 = 8 * v15;
                v10 = __asm_movsd(*(int64_t *)(v9 + v8));
                v11 = __asm_subsd(v14, __asm_mulsd(v10, *(int64_t *)(v9 + a3)));
                *v5 = __asm_movsd_1(v11);
                v12 = v9 | 8;
                v13 = __asm_movsd(*(int64_t *)(v12 + v8));
                v14 = __asm_subsd(v11, __asm_mulsd(v13, *(int64_t *)(v12 + a3)));
                *v5 = __asm_movsd_1(v14);
                v15 += 2;
                v19 = v14;
                v7 = v15;
            }
        }
        // 0xbd
        v20 = v19;
        v6 = v20;
        if ((v1 & 1) != 0) {
            // 0xc7
            v16 = 8 * v7;
            v17 = __asm_movsd(*(int64_t *)(0x3e80 * v1 + a2 + v16));
            v18 = __asm_subsd(v20, __asm_mulsd(v17, *(int64_t *)(v16 + a3)));
            *v5 = __asm_movsd_1(v18);
            v6 = v18;
        }
    }
    int64_t v21 = __asm_movsd_1(__asm_divsd_2(v6, *(int64_t *)(0x3e80 * v1 + a2 + v2))); // 0x30
    *v5 = v21;
    int64_t v22 = v1 + 1; // 0x35
    while (v22 != result2) {
        // 0x41
        v1 = v22;
        v2 = 8 * v1;
        v3 = __asm_movsd(*(int64_t *)(v2 + a4));
        v4 = __asm_movsd_1(v3);
        v5 = (int64_t *)(v2 + a3);
        *v5 = v4;
        v6 = v3;
        if (v1 != 0) {
            // 0x50
            v19 = v3;
            v7 = 0;
            if (v1 != 1) {
                // 0x60
                v8 = 0x3e80 * v1 + a2;
                v15 = 0;
                v9 = 8 * v15;
                v10 = __asm_movsd(*(int64_t *)(v9 + v8));
                v11 = __asm_subsd(v3, __asm_mulsd(v10, *(int64_t *)(v9 + a3)));
                *v5 = __asm_movsd_1(v11);
                v12 = v9 | 8;
                v13 = __asm_movsd(*(int64_t *)(v12 + v8));
                v14 = __asm_subsd(v11, __asm_mulsd(v13, *(int64_t *)(v12 + a3)));
                *v5 = __asm_movsd_1(v14);
                v15 += 2;
                v19 = v14;
                v7 = v15;
                while (v15 != (v1 & 0x7ffffffffffffffe)) {
                    // 0x70
                    v9 = 8 * v15;
                    v10 = __asm_movsd(*(int64_t *)(v9 + v8));
                    v11 = __asm_subsd(v14, __asm_mulsd(v10, *(int64_t *)(v9 + a3)));
                    *v5 = __asm_movsd_1(v11);
                    v12 = v9 | 8;
                    v13 = __asm_movsd(*(int64_t *)(v12 + v8));
                    v14 = __asm_subsd(v11, __asm_mulsd(v13, *(int64_t *)(v12 + a3)));
                    *v5 = __asm_movsd_1(v14);
                    v15 += 2;
                    v19 = v14;
                    v7 = v15;
                }
            }
            // 0xbd
            v20 = v19;
            v6 = v20;
            if ((v1 & 1) != 0) {
                // 0xc7
                v16 = 8 * v7;
                v17 = __asm_movsd(*(int64_t *)(0x3e80 * v1 + a2 + v16));
                v18 = __asm_subsd(v20, __asm_mulsd(v17, *(int64_t *)(v16 + a3)));
                *v5 = __asm_movsd_1(v18);
                v6 = v18;
            }
        }
        // 0x20
        v21 = __asm_movsd_1(__asm_divsd_2(v6, *(int64_t *)(0x3e80 * v1 + a2 + v2)));
        *v5 = v21;
        v22 = v1 + 1;
    }
    // 0xeb
    return result2;
}
