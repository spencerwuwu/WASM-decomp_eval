
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "doitgen.h"
int64_t kernel_doitgen(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x0
    if ((int32_t)a1 <= 0) {
        // 0x171
        return 0;
    }
    int64_t v1 = a3 & 0xffffffff;
    int64_t result = a1 & 0xffffffff;
    int64_t v2 = 0;
    int64_t v3; // 0x0
    int64_t v4; // 0x0
    int64_t v5; // 0x0
    int64_t v6; // 0x0
    int128_t v7; // 0x0
    int128_t v8; // 0x0
    int128_t v9; // 0x0
    while (true) {
        // 0x33
        int128_t v10; // 0x0
        int128_t v11 = v10;
        int64_t v12 = v2;
        v8 = v11;
        if ((int32_t)a2 > 0) {
            int64_t v13 = 0x2bc00 * v12 + a4;
            v4 = 0;
            v7 = v11;
            while (true) {
              lab_0x46:;
                int128_t v14 = v7;
                v5 = v4;
                v9 = v14;
                if ((int32_t)a3 > 0) {
                    // 0x52
                    v6 = v13 + 1280 * v5;
                    int64_t v15 = 0;
                    int128_t v16 = v14; // 0x0
                    while (true) {
                        int128_t v17 = v16;
                        int64_t v18 = __asm_movsd(__asm_xorps(v17, v17)); // 0x5d
                        int64_t v19 = 8 * v15; // 0x5d
                        int64_t * v20 = (int64_t *)(v19 + a6); // 0x5d
                        *v20 = v18;
                        int64_t v21 = 0;
                        int128_t v22 = __asm_movsd_1(*(int64_t *)(8 * v21 + v6)); // 0x99
                        int128_t v23 = __asm_movsd_1(*(int64_t *)(v19 + a5 + 1280 * v21)); // 0xb4
                        int128_t v24 = __asm_addsd(__asm_mulsd(v22, v23), __asm_movsd_1(*v20)); // 0xca
                        *v20 = __asm_movsd(v24);
                        v21++;
                        while (v21 != v1) {
                            // 0x75
                            v22 = __asm_movsd_1(*(int64_t *)(8 * v21 + v6));
                            v23 = __asm_movsd_1(*(int64_t *)(v19 + a5 + 1280 * v21));
                            v24 = __asm_addsd(__asm_mulsd(v22, v23), __asm_movsd_1(*v20));
                            *v20 = __asm_movsd(v24);
                            v21++;
                        }
                        // 0xe6
                        v15++;
                        v16 = v24;
                        v3 = 0;
                        if (v15 == v1) {
                            goto lab_0x107;
                        }
                    }
                }
                goto lab_0x150;
            }
        }
      lab_0x163:
        // 0x163
        v2 = v12 + 1;
        v10 = v8;
        if (v2 == result) {
            // break -> 0x171
            break;
        }
    }
    // 0x171
    return result;
  lab_0x107:;
    int64_t v25 = 8 * v3; // 0x10f
    int128_t v26 = __asm_movsd_1(*(int64_t *)(v25 + a6)); // 0x10f
    *(int64_t *)(v25 + v6) = __asm_movsd(v26);
    int64_t v27 = v3 + 1;
    v3 = v27;
    v9 = v26;
    if (v27 == v1) {
        goto lab_0x150;
    } else {
        goto lab_0x107;
    }
  lab_0x150:;
    int64_t v28 = v5 + 1;
    v4 = v28;
    v7 = v9;
    v8 = v9;
    if (v28 == (a2 & 0xffffffff)) {
        // break -> 0x163
        goto lab_0x163;
    }
    goto lab_0x46;
}
