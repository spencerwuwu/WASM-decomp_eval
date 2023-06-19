
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "fdtd-2d.h"
int64_t kernel_fdtd_2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    if ((int32_t)a1 < 1) {
        // 0x1ed
        int64_t result; // 0x0
        return result;
    }
    int64_t v1 = a3 & 0xffffffff; // 0x30
    int64_t v2 = a2 & 0xffffffff; // 0x32
    int128_t v3 = __asm_movsd_1(-0x4020000000000000); // 0x38
    int128_t v4 = __asm_movsd_1(-0x401999999999999a); // 0x40
    uint32_t v5 = (int32_t)a3; // 0x5e
    uint32_t v6 = (int32_t)a2;
    int64_t v7 = 0;
    int64_t v8; // 0x70
    int64_t v9; // 0x7c
    if (v5 >= 1) {
        // 0x70
        v9 = 0;
        v8 = *(int64_t *)(8 * v7 + a7);
        *(int64_t *)(8 * v9 + a5) = __asm_movsd(__asm_movsd_1(v8));
        v9++;
        while (v9 != v1) {
            // 0x70
            v8 = *(int64_t *)(8 * v7 + a7);
            *(int64_t *)(8 * v9 + a5) = __asm_movsd(__asm_movsd_1(v8));
            v9++;
        }
    }
    int64_t v10 = a2; // 0x8f
    int64_t v11; // 0x0
    int64_t v12; // 0x0
    int64_t v13; // 0x0
    int64_t v14; // 0x110
    int64_t v15; // 0x130
    int64_t v16; // 0x137
    int64_t v17; // 0x13e
    int64_t v18; // 0x0
    int128_t v19; // 0x13e
    int128_t v20; // 0x152
    int64_t * v21; // 0x156
    int64_t v22; // 0x160
    if (v6 > 1) {
        v11 = 1;
        v12 = a2;
        if (v5 >= 1) {
            // 0x130
            v15 = 0x2580 * v11;
            v16 = v15 + a5;
            v22 = 0;
            v17 = 8 * v22;
            v18 = v17 + v15 + a6;
            v19 = __asm_movsd_1(*(int64_t *)v18);
            v20 = __asm_mulsd(__asm_subsd(v19, *(int64_t *)(v18 - 0x2580)), v3);
            v21 = (int64_t *)(v17 + v16);
            *v21 = __asm_movsd(__asm_addsd(v20, *v21));
            v22++;
            v12 = v16;
            while (v22 != v1) {
                // 0x130
                v17 = 8 * v22;
                v18 = v17 + v15 + a6;
                v19 = __asm_movsd_1(*(int64_t *)v18);
                v20 = __asm_mulsd(__asm_subsd(v19, *(int64_t *)(v18 - 0x2580)), v3);
                v21 = (int64_t *)(v17 + v16);
                *v21 = __asm_movsd(__asm_addsd(v20, *v21));
                v22++;
                v12 = v16;
            }
        }
        // 0x110
        v14 = v11 + 1;
        v10 = v12;
        v13 = v12;
        while (v14 != v2) {
            // 0x11c
            v11 = v14;
            v12 = v13;
            if (v5 >= 1) {
                // 0x130
                v15 = 0x2580 * v11;
                v16 = v15 + a5;
                v22 = 0;
                v17 = 8 * v22;
                v18 = v17 + v15 + a6;
                v19 = __asm_movsd_1(*(int64_t *)v18);
                v20 = __asm_mulsd(__asm_subsd(v19, *(int64_t *)(v18 - 0x2580)), v3);
                v21 = (int64_t *)(v17 + v16);
                *v21 = __asm_movsd(__asm_addsd(v20, *v21));
                v22++;
                v12 = v16;
                while (v22 != v1) {
                    // 0x130
                    v17 = 8 * v22;
                    v18 = v17 + v15 + a6;
                    v19 = __asm_movsd_1(*(int64_t *)v18);
                    v20 = __asm_mulsd(__asm_subsd(v19, *(int64_t *)(v18 - 0x2580)), v3);
                    v21 = (int64_t *)(v17 + v16);
                    *v21 = __asm_movsd(__asm_addsd(v20, *v21));
                    v22++;
                    v12 = v16;
                }
            }
            // 0x110
            v14 = v11 + 1;
            v10 = v12;
            v13 = v12;
        }
    }
    int64_t v23 = v10; // 0x9a
    int64_t v24 = v10; // 0x9a
    int64_t v25; // 0x0
    int64_t v26; // 0x0
    int64_t v27; // 0x0
    int64_t v28; // 0x0
    int64_t v29; // 0x0
    int64_t v30; // 0x0
    int64_t v31; // 0xb0
    int64_t v32; // 0xd0
    int64_t v33; // 0xdb
    int64_t v34; // 0xde
    int64_t v35; // 0x0
    int128_t v36; // 0xde
    int128_t v37; // 0xeb
    int64_t * v38; // 0xef
    int64_t v39; // 0xfb
    int64_t v40; // 0x180
    int64_t v41; // 0x0
    int64_t v42; // 0x0
    int128_t v43; // 0x1b1
    int64_t v44; // 0x0
    int128_t v45; // 0x1c0
    int128_t v46; // 0x1d1
    int64_t * v47; // 0x1d5
    int64_t v48; // 0x1df
    if (v6 >= 1) {
        v25 = 0;
        v27 = v24;
        if (v5 >= 2) {
            // 0xd0
            v32 = 0x2580 * v25;
            v33 = v32 + a6;
            v39 = 1;
            v34 = 8 * v39;
            v35 = v34 + v33;
            v36 = __asm_movsd_1(*(int64_t *)v35);
            v37 = __asm_mulsd(__asm_subsd(v36, *(int64_t *)(v35 - 8)), v3);
            v38 = (int64_t *)(v32 + a4 + v34);
            *v38 = __asm_movsd(__asm_addsd(v37, *v38));
            v39++;
            v27 = v33;
            while (v39 != v1) {
                // 0xd0
                v34 = 8 * v39;
                v35 = v34 + v33;
                v36 = __asm_movsd_1(*(int64_t *)v35);
                v37 = __asm_mulsd(__asm_subsd(v36, *(int64_t *)(v35 - 8)), v3);
                v38 = (int64_t *)(v32 + a4 + v34);
                *v38 = __asm_movsd(__asm_addsd(v37, *v38));
                v39++;
                v27 = v33;
            }
        }
        // 0xb0
        v28 = v27;
        v31 = v25 + 1;
        while (v31 != v2) {
            // 0xbc
            v25 = v31;
            v27 = v28;
            if (v5 >= 2) {
                // 0xd0
                v32 = 0x2580 * v25;
                v33 = v32 + a6;
                v39 = 1;
                v34 = 8 * v39;
                v35 = v34 + v33;
                v36 = __asm_movsd_1(*(int64_t *)v35);
                v37 = __asm_mulsd(__asm_subsd(v36, *(int64_t *)(v35 - 8)), v3);
                v38 = (int64_t *)(v32 + a4 + v34);
                *v38 = __asm_movsd(__asm_addsd(v37, *v38));
                v39++;
                v27 = v33;
                while (v39 != v1) {
                    // 0xd0
                    v34 = 8 * v39;
                    v35 = v34 + v33;
                    v36 = __asm_movsd_1(*(int64_t *)v35);
                    v37 = __asm_mulsd(__asm_subsd(v36, *(int64_t *)(v35 - 8)), v3);
                    v38 = (int64_t *)(v32 + a4 + v34);
                    *v38 = __asm_movsd(__asm_addsd(v37, *v38));
                    v39++;
                    v27 = v33;
                }
            }
            // 0xb0
            v28 = v27;
            v31 = v25 + 1;
        }
        // 0x170
        v23 = v28;
        v30 = v28;
        if (v6 >= 2) {
            v26 = 0;
            v29 = v30;
            if (v5 >= 2) {
                // 0x1a0
                v48 = 0;
                v41 = 8 * v48 + 0x2580 * v26;
                v42 = v41 + a4;
                v43 = __asm_subsd(__asm_movsd_1(*(int64_t *)(v42 + 8)), *(int64_t *)v42);
                v44 = v41 + a5;
                v45 = __asm_addsd(v43, *(int64_t *)(v44 + 0x2580));
                v46 = __asm_mulsd(__asm_subsd(v45, *(int64_t *)v44), v4);
                v47 = (int64_t *)(v41 + a6);
                *v47 = __asm_movsd(__asm_addsd(v46, *v47));
                v48++;
                v29 = v48;
                while (v48 != (a3 + 0xffffffff & 0xffffffff)) {
                    // 0x1a0
                    v41 = 8 * v48 + 0x2580 * v26;
                    v42 = v41 + a4;
                    v43 = __asm_subsd(__asm_movsd_1(*(int64_t *)(v42 + 8)), *(int64_t *)v42);
                    v44 = v41 + a5;
                    v45 = __asm_addsd(v43, *(int64_t *)(v44 + 0x2580));
                    v46 = __asm_mulsd(__asm_subsd(v45, *(int64_t *)v44), v4);
                    v47 = (int64_t *)(v41 + a6);
                    *v47 = __asm_movsd(__asm_addsd(v46, *v47));
                    v48++;
                    v29 = v48;
                }
            }
            // 0x180
            v40 = v26 + 1;
            v23 = v29;
            v30 = v29;
            while (v40 != (a2 + 0xffffffff & 0xffffffff)) {
                // 0x18c
                v26 = v40;
                v29 = v30;
                if (v5 >= 2) {
                    // 0x1a0
                    v48 = 0;
                    v41 = 8 * v48 + 0x2580 * v26;
                    v42 = v41 + a4;
                    v43 = __asm_subsd(__asm_movsd_1(*(int64_t *)(v42 + 8)), *(int64_t *)v42);
                    v44 = v41 + a5;
                    v45 = __asm_addsd(v43, *(int64_t *)(v44 + 0x2580));
                    v46 = __asm_mulsd(__asm_subsd(v45, *(int64_t *)v44), v4);
                    v47 = (int64_t *)(v41 + a6);
                    *v47 = __asm_movsd(__asm_addsd(v46, *v47));
                    v48++;
                    v29 = v48;
                    while (v48 != (a3 + 0xffffffff & 0xffffffff)) {
                        // 0x1a0
                        v41 = 8 * v48 + 0x2580 * v26;
                        v42 = v41 + a4;
                        v43 = __asm_subsd(__asm_movsd_1(*(int64_t *)(v42 + 8)), *(int64_t *)v42);
                        v44 = v41 + a5;
                        v45 = __asm_addsd(v43, *(int64_t *)(v44 + 0x2580));
                        v46 = __asm_mulsd(__asm_subsd(v45, *(int64_t *)v44), v4);
                        v47 = (int64_t *)(v41 + a6);
                        *v47 = __asm_movsd(__asm_addsd(v46, *v47));
                        v48++;
                        v29 = v48;
                    }
                }
                // 0x180
                v40 = v26 + 1;
                v23 = v29;
                v30 = v29;
            }
        }
    }
    int64_t result2 = v23;
    int64_t v49 = v7 + 1; // 0x50
    while (v49 != (a1 & 0xffffffff)) {
        // 0x5e
        v7 = v49;
        if (v5 >= 1) {
            // 0x70
            v9 = 0;
            v8 = *(int64_t *)(8 * v7 + a7);
            *(int64_t *)(8 * v9 + a5) = __asm_movsd(__asm_movsd_1(v8));
            v9++;
            while (v9 != v1) {
                // 0x70
                v8 = *(int64_t *)(8 * v7 + a7);
                *(int64_t *)(8 * v9 + a5) = __asm_movsd(__asm_movsd_1(v8));
                v9++;
            }
        }
        // 0x84
        v10 = result2;
        v13 = result2;
        if (v6 > 1) {
            v11 = 1;
            v12 = v13;
            if (v5 >= 1) {
                // 0x130
                v15 = 0x2580 * v11;
                v16 = v15 + a5;
                v22 = 0;
                v17 = 8 * v22;
                v18 = v17 + v15 + a6;
                v19 = __asm_movsd_1(*(int64_t *)v18);
                v20 = __asm_mulsd(__asm_subsd(v19, *(int64_t *)(v18 - 0x2580)), v3);
                v21 = (int64_t *)(v17 + v16);
                *v21 = __asm_movsd(__asm_addsd(v20, *v21));
                v22++;
                v12 = v16;
                while (v22 != v1) {
                    // 0x130
                    v17 = 8 * v22;
                    v18 = v17 + v15 + a6;
                    v19 = __asm_movsd_1(*(int64_t *)v18);
                    v20 = __asm_mulsd(__asm_subsd(v19, *(int64_t *)(v18 - 0x2580)), v3);
                    v21 = (int64_t *)(v17 + v16);
                    *v21 = __asm_movsd(__asm_addsd(v20, *v21));
                    v22++;
                    v12 = v16;
                }
            }
            // 0x110
            v14 = v11 + 1;
            v10 = v12;
            v13 = v12;
            while (v14 != v2) {
                // 0x11c
                v11 = v14;
                v12 = v13;
                if (v5 >= 1) {
                    // 0x130
                    v15 = 0x2580 * v11;
                    v16 = v15 + a5;
                    v22 = 0;
                    v17 = 8 * v22;
                    v18 = v17 + v15 + a6;
                    v19 = __asm_movsd_1(*(int64_t *)v18);
                    v20 = __asm_mulsd(__asm_subsd(v19, *(int64_t *)(v18 - 0x2580)), v3);
                    v21 = (int64_t *)(v17 + v16);
                    *v21 = __asm_movsd(__asm_addsd(v20, *v21));
                    v22++;
                    v12 = v16;
                    while (v22 != v1) {
                        // 0x130
                        v17 = 8 * v22;
                        v18 = v17 + v15 + a6;
                        v19 = __asm_movsd_1(*(int64_t *)v18);
                        v20 = __asm_mulsd(__asm_subsd(v19, *(int64_t *)(v18 - 0x2580)), v3);
                        v21 = (int64_t *)(v17 + v16);
                        *v21 = __asm_movsd(__asm_addsd(v20, *v21));
                        v22++;
                        v12 = v16;
                    }
                }
                // 0x110
                v14 = v11 + 1;
                v10 = v12;
                v13 = v12;
            }
        }
        // 0x95
        v23 = v10;
        v24 = v10;
        if (v6 >= 1) {
            v25 = 0;
            v27 = v24;
            if (v5 >= 2) {
                // 0xd0
                v32 = 0x2580 * v25;
                v33 = v32 + a6;
                v39 = 1;
                v34 = 8 * v39;
                v35 = v34 + v33;
                v36 = __asm_movsd_1(*(int64_t *)v35);
                v37 = __asm_mulsd(__asm_subsd(v36, *(int64_t *)(v35 - 8)), v3);
                v38 = (int64_t *)(v32 + a4 + v34);
                *v38 = __asm_movsd(__asm_addsd(v37, *v38));
                v39++;
                v27 = v33;
                while (v39 != v1) {
                    // 0xd0
                    v34 = 8 * v39;
                    v35 = v34 + v33;
                    v36 = __asm_movsd_1(*(int64_t *)v35);
                    v37 = __asm_mulsd(__asm_subsd(v36, *(int64_t *)(v35 - 8)), v3);
                    v38 = (int64_t *)(v32 + a4 + v34);
                    *v38 = __asm_movsd(__asm_addsd(v37, *v38));
                    v39++;
                    v27 = v33;
                }
            }
            // 0xb0
            v28 = v27;
            v31 = v25 + 1;
            while (v31 != v2) {
                // 0xbc
                v25 = v31;
                v27 = v28;
                if (v5 >= 2) {
                    // 0xd0
                    v32 = 0x2580 * v25;
                    v33 = v32 + a6;
                    v39 = 1;
                    v34 = 8 * v39;
                    v35 = v34 + v33;
                    v36 = __asm_movsd_1(*(int64_t *)v35);
                    v37 = __asm_mulsd(__asm_subsd(v36, *(int64_t *)(v35 - 8)), v3);
                    v38 = (int64_t *)(v32 + a4 + v34);
                    *v38 = __asm_movsd(__asm_addsd(v37, *v38));
                    v39++;
                    v27 = v33;
                    while (v39 != v1) {
                        // 0xd0
                        v34 = 8 * v39;
                        v35 = v34 + v33;
                        v36 = __asm_movsd_1(*(int64_t *)v35);
                        v37 = __asm_mulsd(__asm_subsd(v36, *(int64_t *)(v35 - 8)), v3);
                        v38 = (int64_t *)(v32 + a4 + v34);
                        *v38 = __asm_movsd(__asm_addsd(v37, *v38));
                        v39++;
                        v27 = v33;
                    }
                }
                // 0xb0
                v28 = v27;
                v31 = v25 + 1;
            }
            // 0x170
            v23 = v28;
            v30 = v28;
            if (v6 >= 2) {
                v26 = 0;
                v29 = v30;
                if (v5 >= 2) {
                    // 0x1a0
                    v48 = 0;
                    v41 = 8 * v48 + 0x2580 * v26;
                    v42 = v41 + a4;
                    v43 = __asm_subsd(__asm_movsd_1(*(int64_t *)(v42 + 8)), *(int64_t *)v42);
                    v44 = v41 + a5;
                    v45 = __asm_addsd(v43, *(int64_t *)(v44 + 0x2580));
                    v46 = __asm_mulsd(__asm_subsd(v45, *(int64_t *)v44), v4);
                    v47 = (int64_t *)(v41 + a6);
                    *v47 = __asm_movsd(__asm_addsd(v46, *v47));
                    v48++;
                    v29 = v48;
                    while (v48 != (a3 + 0xffffffff & 0xffffffff)) {
                        // 0x1a0
                        v41 = 8 * v48 + 0x2580 * v26;
                        v42 = v41 + a4;
                        v43 = __asm_subsd(__asm_movsd_1(*(int64_t *)(v42 + 8)), *(int64_t *)v42);
                        v44 = v41 + a5;
                        v45 = __asm_addsd(v43, *(int64_t *)(v44 + 0x2580));
                        v46 = __asm_mulsd(__asm_subsd(v45, *(int64_t *)v44), v4);
                        v47 = (int64_t *)(v41 + a6);
                        *v47 = __asm_movsd(__asm_addsd(v46, *v47));
                        v48++;
                        v29 = v48;
                    }
                }
                // 0x180
                v40 = v26 + 1;
                v23 = v29;
                v30 = v29;
                while (v40 != (a2 + 0xffffffff & 0xffffffff)) {
                    // 0x18c
                    v26 = v40;
                    v29 = v30;
                    if (v5 >= 2) {
                        // 0x1a0
                        v48 = 0;
                        v41 = 8 * v48 + 0x2580 * v26;
                        v42 = v41 + a4;
                        v43 = __asm_subsd(__asm_movsd_1(*(int64_t *)(v42 + 8)), *(int64_t *)v42);
                        v44 = v41 + a5;
                        v45 = __asm_addsd(v43, *(int64_t *)(v44 + 0x2580));
                        v46 = __asm_mulsd(__asm_subsd(v45, *(int64_t *)v44), v4);
                        v47 = (int64_t *)(v41 + a6);
                        *v47 = __asm_movsd(__asm_addsd(v46, *v47));
                        v48++;
                        v29 = v48;
                        while (v48 != (a3 + 0xffffffff & 0xffffffff)) {
                            // 0x1a0
                            v41 = 8 * v48 + 0x2580 * v26;
                            v42 = v41 + a4;
                            v43 = __asm_subsd(__asm_movsd_1(*(int64_t *)(v42 + 8)), *(int64_t *)v42);
                            v44 = v41 + a5;
                            v45 = __asm_addsd(v43, *(int64_t *)(v44 + 0x2580));
                            v46 = __asm_mulsd(__asm_subsd(v45, *(int64_t *)v44), v4);
                            v47 = (int64_t *)(v41 + a6);
                            *v47 = __asm_movsd(__asm_addsd(v46, *v47));
                            v48++;
                            v29 = v48;
                        }
                    }
                    // 0x180
                    v40 = v26 + 1;
                    v23 = v29;
                    v30 = v29;
                }
            }
        }
        // 0x50
        result2 = v23;
        v49 = v7 + 1;
    }
    // 0x1ed
    return result2;
}
