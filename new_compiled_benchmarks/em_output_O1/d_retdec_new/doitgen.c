
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "doitgen.h"
int64_t kernel_doitgen(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if ((int32_t)a1 < 1) {
        // 0xde
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0x11
    int64_t v1 = a3 & 0xffffffff; // 0x15
    int64_t v2 = 0; // 0x1b
    int64_t v3; // 0x0
    int64_t v4; // 0x0
    int64_t v5; // 0x0
    int64_t v6; // 0x0
    int128_t v7; // 0x0
    int128_t v8; // 0x0
    int128_t v9; // 0x0
    while (true) {
        int64_t v10 = v2;
        int128_t v11; // 0x0
        int128_t v12 = v11;
        v7 = v12;
        if ((int32_t)a2 >= 1) {
            int64_t v13 = 0x2bc00 * v10 + a4;
            v9 = v12;
            v4 = 0;
            while (true) {
              lab_0x48:
                // 0x48
                v5 = v4;
                int128_t v14 = v9;
                v8 = v14;
                if ((int32_t)a3 >= 1) {
                    // 0x50
                    v6 = v13 + 1280 * v5;
                    int128_t v15 = v14; // 0x0
                    int64_t v16 = 0; // 0x9f
                    while (true) {
                        int128_t v17 = v15;
                        int64_t v18 = 8 * v16; // 0x50
                        int64_t * v19 = (int64_t *)(v18 + a6); // 0x50
                        *v19 = 0;
                        int128_t v20 = __asm_xorpd(v17, v17); // 0x5f
                        int64_t v21 = 0; // 0x5f
                        int128_t v22 = __asm_movsd(*(int64_t *)(8 * v21 + v6)); // 0x75
                        int128_t v23 = __asm_addsd(v20, __asm_mulsd(v22, *(int64_t *)(v18 + a5 + 1280 * v21))); // 0x8d
                        *v19 = __asm_movsd_1(v23);
                        v21++;
                        v20 = v23;
                        while (v21 != v1) {
                            // 0x60
                            v22 = __asm_movsd(*(int64_t *)(8 * v21 + v6));
                            v23 = __asm_addsd(v20, __asm_mulsd(v22, *(int64_t *)(v18 + a5 + 1280 * v21)));
                            *v19 = __asm_movsd_1(v23);
                            v21++;
                            v20 = v23;
                        }
                        // 0x9f
                        v16++;
                        v15 = v23;
                        v3 = 0;
                        if (v16 == v1) {
                            goto lab_0xb0;
                        }
                    }
                }
                goto lab_0x40;
            }
        }
      lab_0x20:
        // 0x20
        v2 = v10 + 1;
        v11 = v7;
        if (v2 == result2) {
            // break -> 0xde
            break;
        }
    }
    // 0xde
    return result2;
  lab_0xb0:;
    int64_t v24 = 8 * v3; // 0xb0
    int128_t v25 = __asm_movsd(*(int64_t *)(v24 + a6)); // 0xb0
    *(int64_t *)(v24 + v6) = __asm_movsd_1(v25);
    int64_t v26 = v3 + 1; // 0xd1
    v8 = v25;
    v3 = v26;
    if (v26 != v1) {
        goto lab_0xb0;
    } else {
        goto lab_0x40;
    }
  lab_0x40:;
    int64_t v27 = v5 + 1; // 0x40
    v7 = v8;
    v9 = v8;
    v4 = v27;
    if (v27 == (a2 & 0xffffffff)) {
        // break -> 0x20
        goto lab_0x20;
    }
    goto lab_0x48;
}
