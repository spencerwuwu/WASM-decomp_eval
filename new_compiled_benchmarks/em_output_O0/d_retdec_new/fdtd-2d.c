
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "fdtd-2d.h"
int64_t kernel_fdtd_2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x0
    if ((int32_t)a1 <= 0) {
        // 0x31b
        return 0;
    }
    int64_t v1 = 0x100000000 * a2 >> 32; // 0xb
    int64_t v2 = 0x100000000 * a3 >> 32; // 0xe
    int32_t v3 = v2; // 0x3a
    int32_t v4 = v1;
    uint64_t v5 = v1 + 0xffffffff & 0xffffffff;
    uint64_t v6 = v2 + 0xffffffff & 0xffffffff;
    int64_t v7 = v2 & 0xffffffff;
    int64_t v8 = v1 & 0xffffffff;
    int64_t result = a1 & 0xffffffff;
    int64_t v9 = 0;
    int64_t v10; // 0x0
    int64_t v11; // 0x4b
    if (v3 > 0) {
        // 0x43
        v10 = 0;
        v11 = *(int64_t *)(8 * v9 + a7);
        *(int64_t *)(8 * v10 + a5) = __asm_movsd(__asm_movsd_1(v11));
        v10++;
        while (v10 != v7) {
            // 0x43
            v11 = *(int64_t *)(8 * v9 + a7);
            *(int64_t *)(8 * v10 + a5) = __asm_movsd(__asm_movsd_1(v11));
            v10++;
        }
    }
    // 0x72
    int64_t v12; // 0x0
    int64_t v13; // 0x0
    int64_t v14; // 0x0
    int64_t v15; // 0xa7
    int64_t v16; // 0x0
    int64_t * v17; // 0xa7
    int128_t v18; // 0xa7
    int128_t v19; // 0xc2
    int64_t v20; // 0xe2
    if (v4 > 1) {
        v12 = 1;
        if (v3 > 0) {
            // 0x91
            v13 = 0;
            v15 = 8 * v13;
            v16 = v15 + 0x2580 * v12;
            v17 = (int64_t *)(v16 + a5);
            v18 = __asm_movsd_1(*v17);
            v19 = __asm_movsd_1(*(int64_t *)(v16 + a6));
            v20 = *(int64_t *)(0x2580 * (0x100000000 * v12 - 0x100000000 >> 32) + a6 + v15);
            *v17 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_subsd(v19, v20), __asm_movsd_1(-0x4020000000000000)), v18));
            v13++;
            while (v13 != v7) {
                // 0x91
                v15 = 8 * v13;
                v16 = v15 + 0x2580 * v12;
                v17 = (int64_t *)(v16 + a5);
                v18 = __asm_movsd_1(*v17);
                v19 = __asm_movsd_1(*(int64_t *)(v16 + a6));
                v20 = *(int64_t *)(0x2580 * (0x100000000 * v12 - 0x100000000 >> 32) + a6 + v15);
                *v17 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_subsd(v19, v20), __asm_movsd_1(-0x4020000000000000)), v18));
                v13++;
            }
        }
        // 0x125
        v14 = v12 + 1;
        while (v14 != v8) {
            // 0x85
            v12 = v14;
            if (v3 > 0) {
                // 0x91
                v13 = 0;
                v15 = 8 * v13;
                v16 = v15 + 0x2580 * v12;
                v17 = (int64_t *)(v16 + a5);
                v18 = __asm_movsd_1(*v17);
                v19 = __asm_movsd_1(*(int64_t *)(v16 + a6));
                v20 = *(int64_t *)(0x2580 * (0x100000000 * v12 - 0x100000000 >> 32) + a6 + v15);
                *v17 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_subsd(v19, v20), __asm_movsd_1(-0x4020000000000000)), v18));
                v13++;
                while (v13 != v7) {
                    // 0x91
                    v15 = 8 * v13;
                    v16 = v15 + 0x2580 * v12;
                    v17 = (int64_t *)(v16 + a5);
                    v18 = __asm_movsd_1(*v17);
                    v19 = __asm_movsd_1(*(int64_t *)(v16 + a6));
                    v20 = *(int64_t *)(0x2580 * (0x100000000 * v12 - 0x100000000 >> 32) + a6 + v15);
                    *v17 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_subsd(v19, v20), __asm_movsd_1(-0x4020000000000000)), v18));
                    v13++;
                }
            }
            // 0x125
            v14 = v12 + 1;
        }
    }
    // 0x13a
    int64_t v21; // 0x0
    int64_t v22; // 0x0
    int64_t v23; // 0x0
    int64_t v24; // 0x161
    int64_t v25; // 0x16f
    int64_t * v26; // 0x16f
    int128_t v27; // 0x16f
    int64_t v28; // 0x0
    int128_t v29; // 0x1aa
    if (v4 > 0) {
        v21 = 0;
        if (v3 > 1) {
            // 0x159
            v24 = 0x2580 * v21;
            v22 = 1;
            v25 = 8 * v22;
            v26 = (int64_t *)(v24 + a4 + v25);
            v27 = __asm_movsd_1(*v26);
            v28 = v25 + v24 + a6;
            v29 = __asm_subsd(__asm_movsd_1(*(int64_t *)v28), *(int64_t *)(v28 - 8));
            *v26 = __asm_movsd(__asm_addsd(__asm_mulsd(v29, __asm_movsd_1(-0x4020000000000000)), v27));
            v22++;
            while (v22 != v7) {
                // 0x159
                v25 = 8 * v22;
                v26 = (int64_t *)(v24 + a4 + v25);
                v27 = __asm_movsd_1(*v26);
                v28 = v25 + v24 + a6;
                v29 = __asm_subsd(__asm_movsd_1(*(int64_t *)v28), *(int64_t *)(v28 - 8));
                *v26 = __asm_movsd(__asm_addsd(__asm_mulsd(v29, __asm_movsd_1(-0x4020000000000000)), v27));
                v22++;
            }
        }
        // 0x1ed
        v23 = v21 + 1;
        while (v23 != v8) {
            // 0x14d
            v21 = v23;
            if (v3 > 1) {
                // 0x159
                v24 = 0x2580 * v21;
                v22 = 1;
                v25 = 8 * v22;
                v26 = (int64_t *)(v24 + a4 + v25);
                v27 = __asm_movsd_1(*v26);
                v28 = v25 + v24 + a6;
                v29 = __asm_subsd(__asm_movsd_1(*(int64_t *)v28), *(int64_t *)(v28 - 8));
                *v26 = __asm_movsd(__asm_addsd(__asm_mulsd(v29, __asm_movsd_1(-0x4020000000000000)), v27));
                v22++;
                while (v22 != v7) {
                    // 0x159
                    v25 = 8 * v22;
                    v26 = (int64_t *)(v24 + a4 + v25);
                    v27 = __asm_movsd_1(*v26);
                    v28 = v25 + v24 + a6;
                    v29 = __asm_subsd(__asm_movsd_1(*(int64_t *)v28), *(int64_t *)(v28 - 8));
                    *v26 = __asm_movsd(__asm_addsd(__asm_mulsd(v29, __asm_movsd_1(-0x4020000000000000)), v27));
                    v22++;
                }
            }
            // 0x1ed
            v23 = v21 + 1;
        }
    }
    int64_t v30 = 0; // 0x20d
    int64_t v31; // 0x0
    int32_t v32; // 0x0
    int32_t v33; // 0x2fd
    int64_t v34; // 0x233
    int64_t v35; // 0x0
    int64_t v36; // 0x0
    int64_t v37; // 0x241
    int64_t v38; // 0x0
    int64_t * v39; // 0x241
    int128_t v40; // 0x241
    int32_t v41; // 0x25b
    int128_t v42; // 0x261
    int128_t v43; // 0x27c
    int128_t v44; // 0x29c
    int128_t v45; // 0x2b7
    if (v5 != 0) {
        if (v6 != 0) {
            // 0x22b
            v34 = 0x2580 * v30;
            v35 = v34 + a4;
            v36 = 0x2580 * (0x100000000 * v30 + 0x100000000 >> 32) + a5;
            v41 = 0;
            v37 = 8 * (int64_t)v41;
            v38 = v37 + v34;
            v39 = (int64_t *)(v38 + a6);
            v40 = __asm_movsd_1(*v39);
            v41++;
            v42 = __asm_movsd_1(*(int64_t *)(8 * (int64_t)v41 + v35));
            v43 = __asm_subsd(v42, *(int64_t *)(v37 + v35));
            v44 = __asm_addsd_2(v43, *(int64_t *)(v36 + v37));
            v45 = __asm_subsd(v44, *(int64_t *)(v38 + a5));
            *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v45, __asm_movsd_1(-0x401999999999999a)), v40));
            while (v6 > (int64_t)v41) {
                // 0x22b
                v37 = 8 * (int64_t)v41;
                v38 = v37 + v34;
                v39 = (int64_t *)(v38 + a6);
                v40 = __asm_movsd_1(*v39);
                v41++;
                v42 = __asm_movsd_1(*(int64_t *)(8 * (int64_t)v41 + v35));
                v43 = __asm_subsd(v42, *(int64_t *)(v37 + v35));
                v44 = __asm_addsd_2(v43, *(int64_t *)(v36 + v37));
                v45 = __asm_subsd(v44, *(int64_t *)(v38 + a5));
                *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v45, __asm_movsd_1(-0x401999999999999a)), v40));
            }
        }
        // 0x2fa
        v33 = 1;
        v31 = v33;
        v30 = v31;
        v32 = v33;
        while ((v31 & 0xffffffff) < v5) {
            // 0x21a
            if (v6 != 0) {
                // 0x22b
                v34 = 0x2580 * v30;
                v35 = v34 + a4;
                v36 = 0x2580 * (0x100000000 * v30 + 0x100000000 >> 32) + a5;
                v41 = 0;
                v37 = 8 * (int64_t)v41;
                v38 = v37 + v34;
                v39 = (int64_t *)(v38 + a6);
                v40 = __asm_movsd_1(*v39);
                v41++;
                v42 = __asm_movsd_1(*(int64_t *)(8 * (int64_t)v41 + v35));
                v43 = __asm_subsd(v42, *(int64_t *)(v37 + v35));
                v44 = __asm_addsd_2(v43, *(int64_t *)(v36 + v37));
                v45 = __asm_subsd(v44, *(int64_t *)(v38 + a5));
                *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v45, __asm_movsd_1(-0x401999999999999a)), v40));
                while (v6 > (int64_t)v41) {
                    // 0x22b
                    v37 = 8 * (int64_t)v41;
                    v38 = v37 + v34;
                    v39 = (int64_t *)(v38 + a6);
                    v40 = __asm_movsd_1(*v39);
                    v41++;
                    v42 = __asm_movsd_1(*(int64_t *)(8 * (int64_t)v41 + v35));
                    v43 = __asm_subsd(v42, *(int64_t *)(v37 + v35));
                    v44 = __asm_addsd_2(v43, *(int64_t *)(v36 + v37));
                    v45 = __asm_subsd(v44, *(int64_t *)(v38 + a5));
                    *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v45, __asm_movsd_1(-0x401999999999999a)), v40));
                }
            }
            // 0x2fa
            v33 = v32 + 1;
            v31 = v33;
            v30 = v31;
            v32 = v33;
        }
    }
    int64_t v46 = v9 + 1;
    while (v46 != result) {
        // 0x37
        v9 = v46;
        if (v3 > 0) {
            // 0x43
            v10 = 0;
            v11 = *(int64_t *)(8 * v9 + a7);
            *(int64_t *)(8 * v10 + a5) = __asm_movsd(__asm_movsd_1(v11));
            v10++;
            while (v10 != v7) {
                // 0x43
                v11 = *(int64_t *)(8 * v9 + a7);
                *(int64_t *)(8 * v10 + a5) = __asm_movsd(__asm_movsd_1(v11));
                v10++;
            }
        }
        // 0x72
        if (v4 > 1) {
            v12 = 1;
            if (v3 > 0) {
                // 0x91
                v13 = 0;
                v15 = 8 * v13;
                v16 = v15 + 0x2580 * v12;
                v17 = (int64_t *)(v16 + a5);
                v18 = __asm_movsd_1(*v17);
                v19 = __asm_movsd_1(*(int64_t *)(v16 + a6));
                v20 = *(int64_t *)(0x2580 * (0x100000000 * v12 - 0x100000000 >> 32) + a6 + v15);
                *v17 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_subsd(v19, v20), __asm_movsd_1(-0x4020000000000000)), v18));
                v13++;
                while (v13 != v7) {
                    // 0x91
                    v15 = 8 * v13;
                    v16 = v15 + 0x2580 * v12;
                    v17 = (int64_t *)(v16 + a5);
                    v18 = __asm_movsd_1(*v17);
                    v19 = __asm_movsd_1(*(int64_t *)(v16 + a6));
                    v20 = *(int64_t *)(0x2580 * (0x100000000 * v12 - 0x100000000 >> 32) + a6 + v15);
                    *v17 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_subsd(v19, v20), __asm_movsd_1(-0x4020000000000000)), v18));
                    v13++;
                }
            }
            // 0x125
            v14 = v12 + 1;
            while (v14 != v8) {
                // 0x85
                v12 = v14;
                if (v3 > 0) {
                    // 0x91
                    v13 = 0;
                    v15 = 8 * v13;
                    v16 = v15 + 0x2580 * v12;
                    v17 = (int64_t *)(v16 + a5);
                    v18 = __asm_movsd_1(*v17);
                    v19 = __asm_movsd_1(*(int64_t *)(v16 + a6));
                    v20 = *(int64_t *)(0x2580 * (0x100000000 * v12 - 0x100000000 >> 32) + a6 + v15);
                    *v17 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_subsd(v19, v20), __asm_movsd_1(-0x4020000000000000)), v18));
                    v13++;
                    while (v13 != v7) {
                        // 0x91
                        v15 = 8 * v13;
                        v16 = v15 + 0x2580 * v12;
                        v17 = (int64_t *)(v16 + a5);
                        v18 = __asm_movsd_1(*v17);
                        v19 = __asm_movsd_1(*(int64_t *)(v16 + a6));
                        v20 = *(int64_t *)(0x2580 * (0x100000000 * v12 - 0x100000000 >> 32) + a6 + v15);
                        *v17 = __asm_movsd(__asm_addsd(__asm_mulsd(__asm_subsd(v19, v20), __asm_movsd_1(-0x4020000000000000)), v18));
                        v13++;
                    }
                }
                // 0x125
                v14 = v12 + 1;
            }
        }
        // 0x13a
        if (v4 > 0) {
            v21 = 0;
            if (v3 > 1) {
                // 0x159
                v24 = 0x2580 * v21;
                v22 = 1;
                v25 = 8 * v22;
                v26 = (int64_t *)(v24 + a4 + v25);
                v27 = __asm_movsd_1(*v26);
                v28 = v25 + v24 + a6;
                v29 = __asm_subsd(__asm_movsd_1(*(int64_t *)v28), *(int64_t *)(v28 - 8));
                *v26 = __asm_movsd(__asm_addsd(__asm_mulsd(v29, __asm_movsd_1(-0x4020000000000000)), v27));
                v22++;
                while (v22 != v7) {
                    // 0x159
                    v25 = 8 * v22;
                    v26 = (int64_t *)(v24 + a4 + v25);
                    v27 = __asm_movsd_1(*v26);
                    v28 = v25 + v24 + a6;
                    v29 = __asm_subsd(__asm_movsd_1(*(int64_t *)v28), *(int64_t *)(v28 - 8));
                    *v26 = __asm_movsd(__asm_addsd(__asm_mulsd(v29, __asm_movsd_1(-0x4020000000000000)), v27));
                    v22++;
                }
            }
            // 0x1ed
            v23 = v21 + 1;
            while (v23 != v8) {
                // 0x14d
                v21 = v23;
                if (v3 > 1) {
                    // 0x159
                    v24 = 0x2580 * v21;
                    v22 = 1;
                    v25 = 8 * v22;
                    v26 = (int64_t *)(v24 + a4 + v25);
                    v27 = __asm_movsd_1(*v26);
                    v28 = v25 + v24 + a6;
                    v29 = __asm_subsd(__asm_movsd_1(*(int64_t *)v28), *(int64_t *)(v28 - 8));
                    *v26 = __asm_movsd(__asm_addsd(__asm_mulsd(v29, __asm_movsd_1(-0x4020000000000000)), v27));
                    v22++;
                    while (v22 != v7) {
                        // 0x159
                        v25 = 8 * v22;
                        v26 = (int64_t *)(v24 + a4 + v25);
                        v27 = __asm_movsd_1(*v26);
                        v28 = v25 + v24 + a6;
                        v29 = __asm_subsd(__asm_movsd_1(*(int64_t *)v28), *(int64_t *)(v28 - 8));
                        *v26 = __asm_movsd(__asm_addsd(__asm_mulsd(v29, __asm_movsd_1(-0x4020000000000000)), v27));
                        v22++;
                    }
                }
                // 0x1ed
                v23 = v21 + 1;
            }
        }
        // 0x202
        v30 = 0;
        if (v5 != 0) {
            if (v6 != 0) {
                // 0x22b
                v34 = 0x2580 * v30;
                v35 = v34 + a4;
                v36 = 0x2580 * (0x100000000 * v30 + 0x100000000 >> 32) + a5;
                v41 = 0;
                v37 = 8 * (int64_t)v41;
                v38 = v37 + v34;
                v39 = (int64_t *)(v38 + a6);
                v40 = __asm_movsd_1(*v39);
                v41++;
                v42 = __asm_movsd_1(*(int64_t *)(8 * (int64_t)v41 + v35));
                v43 = __asm_subsd(v42, *(int64_t *)(v37 + v35));
                v44 = __asm_addsd_2(v43, *(int64_t *)(v36 + v37));
                v45 = __asm_subsd(v44, *(int64_t *)(v38 + a5));
                *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v45, __asm_movsd_1(-0x401999999999999a)), v40));
                while (v6 > (int64_t)v41) {
                    // 0x22b
                    v37 = 8 * (int64_t)v41;
                    v38 = v37 + v34;
                    v39 = (int64_t *)(v38 + a6);
                    v40 = __asm_movsd_1(*v39);
                    v41++;
                    v42 = __asm_movsd_1(*(int64_t *)(8 * (int64_t)v41 + v35));
                    v43 = __asm_subsd(v42, *(int64_t *)(v37 + v35));
                    v44 = __asm_addsd_2(v43, *(int64_t *)(v36 + v37));
                    v45 = __asm_subsd(v44, *(int64_t *)(v38 + a5));
                    *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v45, __asm_movsd_1(-0x401999999999999a)), v40));
                }
            }
            // 0x2fa
            v33 = 1;
            v31 = v33;
            v30 = v31;
            v32 = v33;
            while ((v31 & 0xffffffff) < v5) {
                // 0x21a
                if (v6 != 0) {
                    // 0x22b
                    v34 = 0x2580 * v30;
                    v35 = v34 + a4;
                    v36 = 0x2580 * (0x100000000 * v30 + 0x100000000 >> 32) + a5;
                    v41 = 0;
                    v37 = 8 * (int64_t)v41;
                    v38 = v37 + v34;
                    v39 = (int64_t *)(v38 + a6);
                    v40 = __asm_movsd_1(*v39);
                    v41++;
                    v42 = __asm_movsd_1(*(int64_t *)(8 * (int64_t)v41 + v35));
                    v43 = __asm_subsd(v42, *(int64_t *)(v37 + v35));
                    v44 = __asm_addsd_2(v43, *(int64_t *)(v36 + v37));
                    v45 = __asm_subsd(v44, *(int64_t *)(v38 + a5));
                    *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v45, __asm_movsd_1(-0x401999999999999a)), v40));
                    while (v6 > (int64_t)v41) {
                        // 0x22b
                        v37 = 8 * (int64_t)v41;
                        v38 = v37 + v34;
                        v39 = (int64_t *)(v38 + a6);
                        v40 = __asm_movsd_1(*v39);
                        v41++;
                        v42 = __asm_movsd_1(*(int64_t *)(8 * (int64_t)v41 + v35));
                        v43 = __asm_subsd(v42, *(int64_t *)(v37 + v35));
                        v44 = __asm_addsd_2(v43, *(int64_t *)(v36 + v37));
                        v45 = __asm_subsd(v44, *(int64_t *)(v38 + a5));
                        *v39 = __asm_movsd(__asm_addsd(__asm_mulsd(v45, __asm_movsd_1(-0x401999999999999a)), v40));
                    }
                }
                // 0x2fa
                v33 = v32 + 1;
                v31 = v33;
                v30 = v31;
                v32 = v33;
            }
        }
        // 0x30d
        v46 = v9 + 1;
    }
    // 0x31b
    return result;
}
