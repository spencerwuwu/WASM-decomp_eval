
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "PL_3mm.h"
int64_t kernel_3mm(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t v1 = a1 & 0xffffffff; // 0x2be
    int64_t v2 = a2 & 0xffffffff; // 0x2c5
    int32_t v3; // 0x2b0
    int64_t v4; // 0x2b0
    if ((int32_t)a1 < 1) {
        // 0x2b0
        v3 = a2;
        v4 = v1;
    } else {
        int32_t v5 = a2;
        int64_t v6 = 0;
        int64_t v7 = v1; // 0x2fc
        int64_t v8; // 0x2b0
        int64_t v9; // 0x2b0
        int64_t v10; // 0x322
        int64_t * v11; // 0x322
        int64_t v12; // 0x310
        int128_t v13; // 0x34a
        int64_t v14; // 0x356
        int128_t v15; // 0x35f
        int64_t v16; // 0x369
        int64_t v17; // 0x31f
        if (v5 >= 1) {
            // 0x318
            v17 = 0x1c20 * v6 + a6;
            v9 = 0x1f40 * v6 + a7;
            v12 = 0;
            v10 = 8 * v12;
            v11 = (int64_t *)(v10 + v17);
            *v11 = 0;
            v8 = v17;
            if ((int32_t)a3 >= 1) {
                // 0x32e
                v15 = __asm_movsd(0);
                v16 = 0;
                v13 = __asm_movsd(*(int64_t *)(v9 + 8 * v16));
                v14 = 0x1c20 * v16 + a8;
                v15 = __asm_addsd(v15, __asm_mulsd(v13, *(int64_t *)(v14 + v10)));
                *v11 = __asm_movsd_1(v15);
                v16++;
                v8 = v14;
                while (v16 != (a3 & 0xffffffff)) {
                    // 0x340
                    v13 = __asm_movsd(*(int64_t *)(v9 + 8 * v16));
                    v14 = 0x1c20 * v16 + a8;
                    v15 = __asm_addsd(v15, __asm_mulsd(v13, *(int64_t *)(v14 + v10)));
                    *v11 = __asm_movsd_1(v15);
                    v16++;
                    v8 = v14;
                }
            }
            // 0x310
            v12++;
            v7 = v8;
            while (v12 != v2) {
                // 0x318
                v10 = 8 * v12;
                v11 = (int64_t *)(v10 + v17);
                *v11 = 0;
                v8 = v17;
                if ((int32_t)a3 >= 1) {
                    // 0x32e
                    v15 = __asm_movsd(0);
                    v16 = 0;
                    v13 = __asm_movsd(*(int64_t *)(v9 + 8 * v16));
                    v14 = 0x1c20 * v16 + a8;
                    v15 = __asm_addsd(v15, __asm_mulsd(v13, *(int64_t *)(v14 + v10)));
                    *v11 = __asm_movsd_1(v15);
                    v16++;
                    v8 = v14;
                    while (v16 != (a3 & 0xffffffff)) {
                        // 0x340
                        v13 = __asm_movsd(*(int64_t *)(v9 + 8 * v16));
                        v14 = 0x1c20 * v16 + a8;
                        v15 = __asm_addsd(v15, __asm_mulsd(v13, *(int64_t *)(v14 + v10)));
                        *v11 = __asm_movsd_1(v15);
                        v16++;
                        v8 = v14;
                    }
                }
                // 0x310
                v12++;
                v7 = v8;
            }
        }
        int64_t v18 = v7;
        int64_t v19 = v6 + 1; // 0x2f0
        v3 = v5;
        v4 = v18;
        while (v19 != v1) {
            // 0x2fa
            v6 = v19;
            v7 = v18;
            if (v5 >= 1) {
                // 0x318
                v17 = 0x1c20 * v6 + a6;
                v9 = 0x1f40 * v6 + a7;
                v12 = 0;
                v10 = 8 * v12;
                v11 = (int64_t *)(v10 + v17);
                *v11 = 0;
                v8 = v17;
                if ((int32_t)a3 >= 1) {
                    // 0x32e
                    v15 = __asm_movsd(0);
                    v16 = 0;
                    v13 = __asm_movsd(*(int64_t *)(v9 + 8 * v16));
                    v14 = 0x1c20 * v16 + a8;
                    v15 = __asm_addsd(v15, __asm_mulsd(v13, *(int64_t *)(v14 + v10)));
                    *v11 = __asm_movsd_1(v15);
                    v16++;
                    v8 = v14;
                    while (v16 != (a3 & 0xffffffff)) {
                        // 0x340
                        v13 = __asm_movsd(*(int64_t *)(v9 + 8 * v16));
                        v14 = 0x1c20 * v16 + a8;
                        v15 = __asm_addsd(v15, __asm_mulsd(v13, *(int64_t *)(v14 + v10)));
                        *v11 = __asm_movsd_1(v15);
                        v16++;
                        v8 = v14;
                    }
                }
                // 0x310
                v12++;
                v7 = v8;
                while (v12 != v2) {
                    // 0x318
                    v10 = 8 * v12;
                    v11 = (int64_t *)(v10 + v17);
                    *v11 = 0;
                    v8 = v17;
                    if ((int32_t)a3 >= 1) {
                        // 0x32e
                        v15 = __asm_movsd(0);
                        v16 = 0;
                        v13 = __asm_movsd(*(int64_t *)(v9 + 8 * v16));
                        v14 = 0x1c20 * v16 + a8;
                        v15 = __asm_addsd(v15, __asm_mulsd(v13, *(int64_t *)(v14 + v10)));
                        *v11 = __asm_movsd_1(v15);
                        v16++;
                        v8 = v14;
                        while (v16 != (a3 & 0xffffffff)) {
                            // 0x340
                            v13 = __asm_movsd(*(int64_t *)(v9 + 8 * v16));
                            v14 = 0x1c20 * v16 + a8;
                            v15 = __asm_addsd(v15, __asm_mulsd(v13, *(int64_t *)(v14 + v10)));
                            *v11 = __asm_movsd_1(v15);
                            v16++;
                            v8 = v14;
                        }
                    }
                    // 0x310
                    v12++;
                    v7 = v8;
                }
            }
            // 0x2f0
            v18 = v7;
            v19 = v6 + 1;
            v3 = v5;
            v4 = v18;
        }
    }
    int64_t v20 = 0x100000000 * a4 >> 32; // 0x2ba
    int64_t v21 = v20 & 0xffffffff; // 0x378
    int64_t result = v4; // 0x37e
    if (v3 >= 1) {
        int64_t v22 = 0;
        int64_t v23 = v4; // 0x3ad
        int64_t v24; // 0x2b0
        int64_t v25; // 0x3cf
        int64_t v26; // 0x2b0
        int64_t v27; // 0x3d2
        int64_t * v28; // 0x3d2
        int64_t v29; // 0x3c0
        int128_t v30; // 0x3fa
        int128_t v31; // 0x410
        int64_t v32; // 0x419
        if ((int32_t)v20 >= 1) {
            // 0x3c8
            v25 = 0x2260 * v22 + a9;
            v26 = 0x2580 * v22 + a10;
            v29 = 0;
            v27 = 8 * v29;
            v28 = (int64_t *)(v27 + v25);
            *v28 = 0;
            v24 = v25;
            if ((int32_t)a5 >= 1) {
                // 0x3df
                v31 = __asm_movsd(0);
                v32 = 0;
                v30 = __asm_movsd(*(int64_t *)(v26 + 8 * v32));
                v31 = __asm_addsd(v31, __asm_mulsd(v30, *(int64_t *)(v27 + a11 + 0x2260 * v32)));
                *v28 = __asm_movsd_1(v31);
                v32++;
                v24 = v32;
                while (v32 != (a5 & 0xffffffff)) {
                    // 0x3f0
                    v30 = __asm_movsd(*(int64_t *)(v26 + 8 * v32));
                    v31 = __asm_addsd(v31, __asm_mulsd(v30, *(int64_t *)(v27 + a11 + 0x2260 * v32)));
                    *v28 = __asm_movsd_1(v31);
                    v32++;
                    v24 = v32;
                }
            }
            // 0x3c0
            v29++;
            v23 = v24;
            while (v29 != v21) {
                // 0x3c8
                v27 = 8 * v29;
                v28 = (int64_t *)(v27 + v25);
                *v28 = 0;
                v24 = v25;
                if ((int32_t)a5 >= 1) {
                    // 0x3df
                    v31 = __asm_movsd(0);
                    v32 = 0;
                    v30 = __asm_movsd(*(int64_t *)(v26 + 8 * v32));
                    v31 = __asm_addsd(v31, __asm_mulsd(v30, *(int64_t *)(v27 + a11 + 0x2260 * v32)));
                    *v28 = __asm_movsd_1(v31);
                    v32++;
                    v24 = v32;
                    while (v32 != (a5 & 0xffffffff)) {
                        // 0x3f0
                        v30 = __asm_movsd(*(int64_t *)(v26 + 8 * v32));
                        v31 = __asm_addsd(v31, __asm_mulsd(v30, *(int64_t *)(v27 + a11 + 0x2260 * v32)));
                        *v28 = __asm_movsd_1(v31);
                        v32++;
                        v24 = v32;
                    }
                }
                // 0x3c0
                v29++;
                v23 = v24;
            }
        }
        int64_t v33 = v23;
        int64_t v34 = v22 + 1; // 0x3a0
        result = v33;
        while (v34 != v2) {
            // 0x3a8
            v22 = v34;
            v23 = v33;
            if ((int32_t)v20 >= 1) {
                // 0x3c8
                v25 = 0x2260 * v22 + a9;
                v26 = 0x2580 * v22 + a10;
                v29 = 0;
                v27 = 8 * v29;
                v28 = (int64_t *)(v27 + v25);
                *v28 = 0;
                v24 = v25;
                if ((int32_t)a5 >= 1) {
                    // 0x3df
                    v31 = __asm_movsd(0);
                    v32 = 0;
                    v30 = __asm_movsd(*(int64_t *)(v26 + 8 * v32));
                    v31 = __asm_addsd(v31, __asm_mulsd(v30, *(int64_t *)(v27 + a11 + 0x2260 * v32)));
                    *v28 = __asm_movsd_1(v31);
                    v32++;
                    v24 = v32;
                    while (v32 != (a5 & 0xffffffff)) {
                        // 0x3f0
                        v30 = __asm_movsd(*(int64_t *)(v26 + 8 * v32));
                        v31 = __asm_addsd(v31, __asm_mulsd(v30, *(int64_t *)(v27 + a11 + 0x2260 * v32)));
                        *v28 = __asm_movsd_1(v31);
                        v32++;
                        v24 = v32;
                    }
                }
                // 0x3c0
                v29++;
                v23 = v24;
                while (v29 != v21) {
                    // 0x3c8
                    v27 = 8 * v29;
                    v28 = (int64_t *)(v27 + v25);
                    *v28 = 0;
                    v24 = v25;
                    if ((int32_t)a5 >= 1) {
                        // 0x3df
                        v31 = __asm_movsd(0);
                        v32 = 0;
                        v30 = __asm_movsd(*(int64_t *)(v26 + 8 * v32));
                        v31 = __asm_addsd(v31, __asm_mulsd(v30, *(int64_t *)(v27 + a11 + 0x2260 * v32)));
                        *v28 = __asm_movsd_1(v31);
                        v32++;
                        v24 = v32;
                        while (v32 != (a5 & 0xffffffff)) {
                            // 0x3f0
                            v30 = __asm_movsd(*(int64_t *)(v26 + 8 * v32));
                            v31 = __asm_addsd(v31, __asm_mulsd(v30, *(int64_t *)(v27 + a11 + 0x2260 * v32)));
                            *v28 = __asm_movsd_1(v31);
                            v32++;
                            v24 = v32;
                        }
                    }
                    // 0x3c0
                    v29++;
                    v23 = v24;
                }
            }
            // 0x3a0
            v33 = v23;
            v34 = v22 + 1;
            result = v33;
        }
    }
    // 0x423
    if ((int32_t)a1 < 1) {
        // 0x4c3
        return result;
    }
    int64_t v35 = 0;
    int64_t v36 = result; // 0x44f
    int64_t v37; // 0x2b0
    int64_t v38; // 0x46f
    int64_t v39; // 0x2b0
    int64_t v40; // 0x472
    int64_t * v41; // 0x472
    int64_t v42; // 0x460
    int128_t v43; // 0x49a
    int128_t v44; // 0x4b0
    int64_t v45; // 0x4b9
    if ((int32_t)v20 >= 1) {
        // 0x468
        v38 = 0x2260 * v35 + a12;
        v39 = 0x1c20 * v35 + a6;
        v42 = 0;
        v40 = 8 * v42;
        v41 = (int64_t *)(v40 + v38);
        *v41 = 0;
        v37 = v38;
        if (v3 >= 1) {
            // 0x47e
            v44 = __asm_movsd(0);
            v45 = 0;
            v43 = __asm_movsd(*(int64_t *)(v39 + 8 * v45));
            v44 = __asm_addsd(v44, __asm_mulsd(v43, *(int64_t *)(v40 + a9 + 0x2260 * v45)));
            *v41 = __asm_movsd_1(v44);
            v45++;
            v37 = v45;
            while (v45 != v2) {
                // 0x490
                v43 = __asm_movsd(*(int64_t *)(v39 + 8 * v45));
                v44 = __asm_addsd(v44, __asm_mulsd(v43, *(int64_t *)(v40 + a9 + 0x2260 * v45)));
                *v41 = __asm_movsd_1(v44);
                v45++;
                v37 = v45;
            }
        }
        // 0x460
        v42++;
        v36 = v37;
        while (v42 != v21) {
            // 0x468
            v40 = 8 * v42;
            v41 = (int64_t *)(v40 + v38);
            *v41 = 0;
            v37 = v38;
            if (v3 >= 1) {
                // 0x47e
                v44 = __asm_movsd(0);
                v45 = 0;
                v43 = __asm_movsd(*(int64_t *)(v39 + 8 * v45));
                v44 = __asm_addsd(v44, __asm_mulsd(v43, *(int64_t *)(v40 + a9 + 0x2260 * v45)));
                *v41 = __asm_movsd_1(v44);
                v45++;
                v37 = v45;
                while (v45 != v2) {
                    // 0x490
                    v43 = __asm_movsd(*(int64_t *)(v39 + 8 * v45));
                    v44 = __asm_addsd(v44, __asm_mulsd(v43, *(int64_t *)(v40 + a9 + 0x2260 * v45)));
                    *v41 = __asm_movsd_1(v44);
                    v45++;
                    v37 = v45;
                }
            }
            // 0x460
            v42++;
            v36 = v37;
        }
    }
    int64_t result2 = v36;
    int64_t v46 = v35 + 1; // 0x440
    while (v46 != v1) {
        // 0x44a
        v35 = v46;
        v36 = result2;
        if ((int32_t)v20 >= 1) {
            // 0x468
            v38 = 0x2260 * v35 + a12;
            v39 = 0x1c20 * v35 + a6;
            v42 = 0;
            v40 = 8 * v42;
            v41 = (int64_t *)(v40 + v38);
            *v41 = 0;
            v37 = v38;
            if (v3 >= 1) {
                // 0x47e
                v44 = __asm_movsd(0);
                v45 = 0;
                v43 = __asm_movsd(*(int64_t *)(v39 + 8 * v45));
                v44 = __asm_addsd(v44, __asm_mulsd(v43, *(int64_t *)(v40 + a9 + 0x2260 * v45)));
                *v41 = __asm_movsd_1(v44);
                v45++;
                v37 = v45;
                while (v45 != v2) {
                    // 0x490
                    v43 = __asm_movsd(*(int64_t *)(v39 + 8 * v45));
                    v44 = __asm_addsd(v44, __asm_mulsd(v43, *(int64_t *)(v40 + a9 + 0x2260 * v45)));
                    *v41 = __asm_movsd_1(v44);
                    v45++;
                    v37 = v45;
                }
            }
            // 0x460
            v42++;
            v36 = v37;
            while (v42 != v21) {
                // 0x468
                v40 = 8 * v42;
                v41 = (int64_t *)(v40 + v38);
                *v41 = 0;
                v37 = v38;
                if (v3 >= 1) {
                    // 0x47e
                    v44 = __asm_movsd(0);
                    v45 = 0;
                    v43 = __asm_movsd(*(int64_t *)(v39 + 8 * v45));
                    v44 = __asm_addsd(v44, __asm_mulsd(v43, *(int64_t *)(v40 + a9 + 0x2260 * v45)));
                    *v41 = __asm_movsd_1(v44);
                    v45++;
                    v37 = v45;
                    while (v45 != v2) {
                        // 0x490
                        v43 = __asm_movsd(*(int64_t *)(v39 + 8 * v45));
                        v44 = __asm_addsd(v44, __asm_mulsd(v43, *(int64_t *)(v40 + a9 + 0x2260 * v45)));
                        *v41 = __asm_movsd_1(v44);
                        v45++;
                        v37 = v45;
                    }
                }
                // 0x460
                v42++;
                v36 = v37;
            }
        }
        // 0x440
        result2 = v36;
        v46 = v35 + 1;
    }
    // 0x4c3
    return result2;
}
