
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "atax.h"
int64_t kernel_atax(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2 & 0xffffffff; // 0x187
    int64_t v2 = a1; // 0x18e
    int64_t set_mem; // 0x170
    if ((int32_t)a2 >= 1) {
        // 0x190
        set_mem = memset(a5, 0, 8 * v1, a4);
        v2 = a1 & 0xffffffff;
    }
    // 0x1aa
    if ((int32_t)v2 < 1) {
        // 0x23a
        return set_mem;
    }
    int64_t result = v2 & 0xffffffff; // 0x1b2
    int64_t v3 = 0; // 0x1b6
    int64_t v4; // 0x170
    int64_t v5; // 0x170
    int64_t * v6; // 0x1c8
    int64_t v7; // 0x170
    while (true) {
      lab_0x1c8:
        // 0x1c8
        v4 = v3;
        v6 = (int64_t *)(8 * v4 + a6);
        *v6 = 0;
        if ((int32_t)a2 >= 1) {
            // 0x1d4
            v7 = 0x41a0 * v4 + a3;
            int128_t v8 = __asm_movsd(0); // 0x1db
            int64_t v9 = 0; // 0x1db
            while (true) {
                int64_t v10 = 8 * v9; // 0x1ea
                int128_t v11 = __asm_movsd(*(int64_t *)(v10 + v7)); // 0x1ea
                v8 = __asm_addsd(v8, __asm_mulsd(v11, *(int64_t *)(v10 + a4)));
                *v6 = __asm_movsd_1(v8);
                v9++;
                v5 = 0;
                if (v9 == v1) {
                    goto lab_0x210;
                }
            }
        }
        goto lab_0x1c0;
    }
    // 0x23a
    return result;
  lab_0x210:;
    int64_t v12 = 8 * v5; // 0x21a
    int128_t v13 = __asm_mulsd(__asm_movsd(*(int64_t *)(v12 + v7)), *v6); // 0x21f
    int64_t * v14 = (int64_t *)(v12 + a5); // 0x224
    *v14 = __asm_movsd_1(__asm_addsd_2(v13, *v14));
    int64_t v15 = v5 + 1; // 0x230
    v5 = v15;
    if (v15 != v1) {
        goto lab_0x210;
    } else {
        goto lab_0x1c0;
    }
  lab_0x1c0:
    // 0x1c0
    v3 = v4 + 1;
    if (v3 == result) {
        return result;
    }
    goto lab_0x1c8;
}
