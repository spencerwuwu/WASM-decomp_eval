
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "atax.h"
void kernel_atax(uint32_t m, uint32_t n, float64_t (*A)[1], float64_t * x, float64_t * y, float64_t * tmp) {
    int128_t v1; // 0x1e0
    if ((int32_t)n > 0) {
        int64_t v2 = 0;
        int128_t v3; // 0x1e0
        int128_t v4 = v3;
        int128_t v5 = __asm_xorps(v4, v4); // 0x215
        *(int64_t *)(8 * v2 + (int64_t)y) = __asm_movsd_1(v5);
        v2++;
        v1 = v5;
        while (v2 != (int64_t)n) {
            // 0x20d
            v4 = v5;
            v5 = __asm_xorps(v4, v4);
            *(int64_t *)(8 * v2 + (int64_t)y) = __asm_movsd_1(v5);
            v2++;
            v1 = v5;
        }
    }
    if (m <= 0) {
        // 0x337
        return;
    }
    int64_t v6 = n;
    int64_t v7 = 0;
    int128_t v8 = v1; // 0x1e0
    int64_t v9; // 0x1e0
    int64_t v10; // 0x1e0
    int64_t * v11; // 0x249
    int64_t v12; // 0x1e0
    while (true) {
      lab_0x23e:;
        int128_t v13 = v8;
        v10 = v7;
        int128_t v14 = __asm_xorps(v13, v13); // 0x246
        int64_t v15 = __asm_movsd_1(v14); // 0x249
        v11 = (int64_t *)(8 * v10 + (0x100000000 * (int64_t)tmp >> 32));
        *v11 = v15;
        v8 = v14;
        if (n > 0) {
            // 0x261
            v12 = 0x41a0 * v10 + (int64_t)A;
            int64_t v16 = v15; // 0x2a6
            int64_t v17 = 0;
            while (true) {
                int128_t v18 = __asm_movsd(v16); // 0x269
                int64_t v19 = 8 * v17; // 0x284
                int128_t v20 = __asm_movsd(*(int64_t *)(v19 + v12)); // 0x284
                v16 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v20, __asm_movsd(*(int64_t *)(v19 + (int64_t)x))), v18));
                *v11 = v16;
                v17++;
                v9 = 0;
                if (v17 == v6) {
                    goto lab_0x2cc;
                }
            }
        }
        goto lab_0x329;
    }
  lab_0x2cc:;
    int64_t v21 = 8 * v9; // 0x2d4
    int64_t * v22 = (int64_t *)(v21 + (int64_t)y); // 0x2d4
    int128_t v23 = __asm_movsd(*v22); // 0x2d4
    int128_t v24 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v21 + v12)), __asm_movsd(*v11)), v23); // 0x305
    *v22 = __asm_movsd_1(v24);
    int64_t v25 = v9 + 1;
    v9 = v25;
    v8 = v24;
    if (v25 == v6) {
        goto lab_0x329;
    } else {
        goto lab_0x2cc;
    }
  lab_0x329:
    // 0x329
    v7 = v10 + 1;
    if (v7 == (int64_t)m) {
        return;
    }
    goto lab_0x23e;
}
