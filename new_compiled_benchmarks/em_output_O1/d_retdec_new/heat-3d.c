
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "heat-3d.h"
int64_t kernel_heat_3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = a2 + 0xffffffff & 0xffffffff; // 0x12
    int128_t v1 = __asm_movsd(-0x4000000000000000); // 0x1a
    int128_t v2 = __asm_movsd(0x3fc0000000000000); // 0x22
    int32_t v3 = 1; // 0x2a
    int32_t v4; // 0x0
    while (true) {
      lab_0x42:
        // 0x42
        v4 = v3;
        if ((int32_t)a2 >= 3) {
            while (true) {
                int64_t v5 = 1;
                int64_t v6 = 0x1c200 * v5; // 0x94
                int64_t v7 = v6 + a3;
                int64_t v8 = 1;
                int64_t v9 = 1; // 0x7e
                int64_t v10 = 8 * v9; // 0xa3
                int64_t v11 = v10 + 960 * v8;
                int64_t v12 = v11 + v7;
                int128_t v13 = __asm_movsd(*(int64_t *)v12); // 0xa3
                int128_t v14 = __asm_mulsd(__asm_movapd(v13), v1); // 0xae
                int128_t v15 = __asm_addsd(__asm_movsd(*(int64_t *)(v11 + a3 + 0x1c200 * (v5 + 1))), v14); // 0xb8
                int128_t v16 = __asm_addsd_2(v15, *(int64_t *)(v7 - 0x1c200 + v11)); // 0xc9
                int128_t v17 = __asm_addsd(__asm_movsd(*(int64_t *)(v10 + v7 + 960 * (v8 + 1))), v14); // 0xdf
                int128_t v18 = __asm_mulsd(__asm_addsd_2(v17, *(int64_t *)(v7 - 960 + v11)), v2); // 0xf3
                int128_t v19 = __asm_mulsd(v16, v2); // 0xf7
                int128_t v20 = __asm_addsd_2(v14, *(int64_t *)(v12 + 8)); // 0xfb
                int128_t v21 = __asm_addsd(v19, v18); // 0x102
                int128_t v22 = __asm_addsd_2(v20, *(int64_t *)(v12 - 8)); // 0x106
                int64_t v23 = __asm_movsd_1(__asm_addsd(__asm_addsd(__asm_mulsd(v22, v2), v21), v13)); // 0x11f
                *(int64_t *)(v11 + v6 + a4) = v23;
                v9++;
                while (v9 != result) {
                    // 0x80
                    v10 = 8 * v9;
                    v11 = v10 + 960 * v8;
                    v12 = v11 + v7;
                    v13 = __asm_movsd(*(int64_t *)v12);
                    v14 = __asm_mulsd(__asm_movapd(v13), v1);
                    v15 = __asm_addsd(__asm_movsd(*(int64_t *)(v11 + a3 + 0x1c200 * (v5 + 1))), v14);
                    v16 = __asm_addsd_2(v15, *(int64_t *)(v7 - 0x1c200 + v11));
                    v17 = __asm_addsd(__asm_movsd(*(int64_t *)(v10 + v7 + 960 * (v8 + 1))), v14);
                    v18 = __asm_mulsd(__asm_addsd_2(v17, *(int64_t *)(v7 - 960 + v11)), v2);
                    v19 = __asm_mulsd(v16, v2);
                    v20 = __asm_addsd_2(v14, *(int64_t *)(v12 + 8));
                    v21 = __asm_addsd(v19, v18);
                    v22 = __asm_addsd_2(v20, *(int64_t *)(v12 - 8));
                    v23 = __asm_movsd_1(__asm_addsd(__asm_addsd(__asm_mulsd(v22, v2), v21), v13));
                    *(int64_t *)(v11 + v6 + a4) = v23;
                    v9++;
                }
                int64_t v24; // 0x70
                while (v24 != result) {
                    // 0x136
                    v8 = 1;
                    v9 = 1;
                    v10 = 8 * v9;
                    v11 = v10 + 960 * v8;
                    v12 = v11 + v7;
                    v13 = __asm_movsd(*(int64_t *)v12);
                    v14 = __asm_mulsd(__asm_movapd(v13), v1);
                    v15 = __asm_addsd(__asm_movsd(*(int64_t *)(v11 + a3 + 0x1c200 * (v5 + 1))), v14);
                    v16 = __asm_addsd_2(v15, *(int64_t *)(v7 - 0x1c200 + v11));
                    v17 = __asm_addsd(__asm_movsd(*(int64_t *)(v10 + v7 + 960 * (v8 + 1))), v14);
                    v18 = __asm_mulsd(__asm_addsd_2(v17, *(int64_t *)(v7 - 960 + v11)), v2);
                    v19 = __asm_mulsd(v16, v2);
                    v20 = __asm_addsd_2(v14, *(int64_t *)(v12 + 8));
                    v21 = __asm_addsd(v19, v18);
                    v22 = __asm_addsd_2(v20, *(int64_t *)(v12 - 8));
                    v23 = __asm_movsd_1(__asm_addsd(__asm_addsd(__asm_mulsd(v22, v2), v21), v13));
                    *(int64_t *)(v11 + v6 + a4) = v23;
                    v9++;
                    while (v9 != result) {
                        // 0x80
                        v10 = 8 * v9;
                        v11 = v10 + 960 * v8;
                        v12 = v11 + v7;
                        v13 = __asm_movsd(*(int64_t *)v12);
                        v14 = __asm_mulsd(__asm_movapd(v13), v1);
                        v15 = __asm_addsd(__asm_movsd(*(int64_t *)(v11 + a3 + 0x1c200 * (v5 + 1))), v14);
                        v16 = __asm_addsd_2(v15, *(int64_t *)(v7 - 0x1c200 + v11));
                        v17 = __asm_addsd(__asm_movsd(*(int64_t *)(v10 + v7 + 960 * (v8 + 1))), v14);
                        v18 = __asm_mulsd(__asm_addsd_2(v17, *(int64_t *)(v7 - 960 + v11)), v2);
                        v19 = __asm_mulsd(v16, v2);
                        v20 = __asm_addsd_2(v14, *(int64_t *)(v12 + 8));
                        v21 = __asm_addsd(v19, v18);
                        v22 = __asm_addsd_2(v20, *(int64_t *)(v12 - 8));
                        v23 = __asm_movsd_1(__asm_addsd(__asm_addsd(__asm_mulsd(v22, v2), v21), v13));
                        *(int64_t *)(v11 + v6 + a4) = v23;
                        v9++;
                    }
                }
                // 0x142
                int64_t v25; // 0x60
                if (v25 == result) {
                    goto lab_0x170;
                }
            }
        }
        goto lab_0x30;
    }
  lab_0x253:
    // 0x253
    return result;
  lab_0x160:
    // 0x160
    goto lab_0x170;
  lab_0x30:
    // 0x30
    v3 = v4 + 1;
    if (v4 == 500) {
        // break -> 0x253
        goto lab_0x253;
    }
    goto lab_0x42;
  lab_0x170:;
    // 0x170
    int64_t v26; // 0x0
    int64_t v27 = v26;
    int64_t v28 = v27 + 1; // 0x170
    int64_t v29 = 960 * v27; // 0x18a
    int64_t v30 = 960 * v28;
    int64_t v31 = 1; // 0x17e
    goto lab_0x180;
  lab_0x180:;
    int64_t v32 = v31;
    int64_t v33 = 8 * v32; // 0x1a3
    int64_t v34 = v33 + v29;
    int64_t v35; // 0x0
    int64_t v36 = v34 + v35;
    int64_t v37 = *(int64_t *)v36; // 0x1a3
    int128_t v38 = __asm_movsd(v37); // 0x1a3
    int128_t v39 = __asm_mulsd(__asm_movapd(v38), v1); // 0x1ae
    int64_t v40; // 0x180
    int64_t v41 = *(int64_t *)(v34 + a4 + v40); // 0x1b2
    int128_t v42 = __asm_addsd(__asm_movsd(v41), v39); // 0x1b8
    int64_t v43; // 0x0
    int64_t v44 = *(int64_t *)(v43 + v34); // 0x1c9
    int128_t v45 = __asm_addsd_2(v42, v44); // 0x1c9
    int64_t v46 = *(int64_t *)(v33 + v35 + v30); // 0x1d9
    int128_t v47 = __asm_addsd(__asm_movsd(v46), v39); // 0x1df
    int64_t v48; // 0x0
    int64_t v49 = *(int64_t *)(v48 + v34); // 0x1ed
    int128_t v50 = __asm_mulsd(__asm_addsd_2(v47, v49), v2); // 0x1f3
    int128_t v51 = __asm_mulsd(v45, v2); // 0x1f7
    int64_t v52 = *(int64_t *)(v36 + 8); // 0x1fb
    int128_t v53 = __asm_addsd_2(v39, v52); // 0x1fb
    int128_t v54 = __asm_addsd(v51, v50); // 0x202
    int64_t v55 = *(int64_t *)(v36 - 8); // 0x206
    int128_t v56 = __asm_addsd_2(v53, v55); // 0x206
    int128_t v57 = __asm_addsd(__asm_mulsd(v56, v2), v54); // 0x211
    int64_t v58 = __asm_movsd_1(__asm_addsd(v57, v38)); // 0x21f
    int64_t v59; // 0x194
    *(int64_t *)(v34 + v59 + a3) = v58;
    int64_t v60 = v32 + 1; // 0x226
    v31 = v60;
    if (v60 != result) {
        goto lab_0x180;
    } else {
        // 0x236
        v26 = v28;
        if (v28 != result) {
            goto lab_0x170;
        } else {
            // 0x242
            int64_t v61; // 0x160
            int64_t v62 = v61; // 0x248
            if (v61 != result) {
                goto lab_0x160;
            } else {
                goto lab_0x30;
            }
        }
    }
}
