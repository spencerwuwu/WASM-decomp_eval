
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "PL_3mm.h"
int64_t kernel_3mm(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t v1 = a1 & 0xffffffff; // 0x4fe
    int64_t v2 = a2 & 0xffffffff; // 0x505
    int64_t v3 = 0x100000000 * a2 >> 32; // 0x512
    int64_t v4 = v2; // 0x516
    int64_t v5 = a2; // 0x516
    int128_t v6; // 0x4f0
    if ((int32_t)a1 >= 1) {
        uint32_t v7 = (int32_t)a3;
        v5 = v3 & 0xffffffff;
        int64_t v8 = 0;
        int128_t v9; // 0x4f0
        int128_t v10 = v9; // 0x554
        int64_t v11 = v2; // 0x554
        int64_t v12; // 0x4f0
        int64_t v13; // 0x4f0
        int64_t v14; // 0x4f0
        int64_t v15; // 0x571
        int64_t v16; // 0x4f0
        int64_t v17; // 0x574
        int64_t * v18; // 0x574
        int64_t v19; // 0x560
        int128_t v20; // 0x584
        int64_t v21; // 0x4f0
        int128_t v22; // 0x60e
        int64_t v23; // 0x61a
        int128_t v24; // 0x5aa
        int128_t v25; // 0x5bf
        int64_t v26; // 0x5cb
        int128_t v27; // 0x5cf
        int128_t v28; // 0x5e4
        int64_t v29; // 0x5ed
        int128_t v30; // 0x4f0
        int128_t v31; // 0x4f0
        int128_t v32; // 0x4f0
        int128_t v33; // 0x4f0
        int128_t v34; // 0x4f0
        if ((int32_t)a2 >= 1) {
            // 0x56a
            v15 = 0x1c20 * v8 + a6;
            v16 = 0x1f40 * v8 + a7;
            v19 = 0;
            v32 = v9;
            v17 = 8 * v19;
            v18 = (int64_t *)(v17 + v15);
            *v18 = 0;
            v30 = v32;
            v12 = v15;
            if (v7 >= 1) {
                // 0x580
                v20 = __asm_xorpd(v32, v32);
                v33 = v20;
                v13 = 0;
                if (v7 != 1) {
                    // 0x5a0
                    v21 = v17 + a8;
                    v29 = 0;
                    v24 = __asm_movsd(*(int64_t *)(8 * v29 + v16));
                    v25 = __asm_addsd(__asm_mulsd(v24, *(int64_t *)(0x1c20 * v29 + v21)), v20);
                    *v18 = __asm_movsd_1(v25);
                    v26 = v29 | 1;
                    v27 = __asm_movsd(*(int64_t *)(8 * v26 + v16));
                    v28 = __asm_addsd(__asm_mulsd(v27, *(int64_t *)(0x1c20 * v26 + v21)), v25);
                    *v18 = __asm_movsd_1(v28);
                    v29 += 2;
                    v33 = v28;
                    v13 = v29;
                    while (v29 != (a3 & 0xfffffffe)) {
                        // 0x5a0
                        v24 = __asm_movsd(*(int64_t *)(8 * v29 + v16));
                        v25 = __asm_addsd(__asm_mulsd(v24, *(int64_t *)(0x1c20 * v29 + v21)), v28);
                        *v18 = __asm_movsd_1(v25);
                        v26 = v29 | 1;
                        v27 = __asm_movsd(*(int64_t *)(8 * v26 + v16));
                        v28 = __asm_addsd(__asm_mulsd(v27, *(int64_t *)(0x1c20 * v26 + v21)), v25);
                        *v18 = __asm_movsd_1(v28);
                        v29 += 2;
                        v33 = v28;
                        v13 = v29;
                    }
                }
                // 0x5fa
                v14 = v13;
                v34 = v33;
                v30 = v34;
                v12 = v14;
                if ((a3 & 1) != 0) {
                    // 0x604
                    v22 = __asm_movsd(*(int64_t *)(8 * v14 + v16));
                    v23 = 0x1c20 * v14 + a8;
                    *v18 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v22, *(int64_t *)(v23 + v17)), v34));
                    v30 = v34;
                    v12 = v23;
                }
            }
            // 0x560
            v31 = v30;
            v19++;
            v10 = v31;
            v11 = v12;
            while (v19 != v2) {
                // 0x56a
                v32 = v31;
                v17 = 8 * v19;
                v18 = (int64_t *)(v17 + v15);
                *v18 = 0;
                v30 = v32;
                v12 = v15;
                if (v7 >= 1) {
                    // 0x580
                    v20 = __asm_xorpd(v32, v32);
                    v33 = v20;
                    v13 = 0;
                    if (v7 != 1) {
                        // 0x5a0
                        v21 = v17 + a8;
                        v29 = 0;
                        v24 = __asm_movsd(*(int64_t *)(8 * v29 + v16));
                        v25 = __asm_addsd(__asm_mulsd(v24, *(int64_t *)(0x1c20 * v29 + v21)), v20);
                        *v18 = __asm_movsd_1(v25);
                        v26 = v29 | 1;
                        v27 = __asm_movsd(*(int64_t *)(8 * v26 + v16));
                        v28 = __asm_addsd(__asm_mulsd(v27, *(int64_t *)(0x1c20 * v26 + v21)), v25);
                        *v18 = __asm_movsd_1(v28);
                        v29 += 2;
                        v33 = v28;
                        v13 = v29;
                        while (v29 != (a3 & 0xfffffffe)) {
                            // 0x5a0
                            v24 = __asm_movsd(*(int64_t *)(8 * v29 + v16));
                            v25 = __asm_addsd(__asm_mulsd(v24, *(int64_t *)(0x1c20 * v29 + v21)), v28);
                            *v18 = __asm_movsd_1(v25);
                            v26 = v29 | 1;
                            v27 = __asm_movsd(*(int64_t *)(8 * v26 + v16));
                            v28 = __asm_addsd(__asm_mulsd(v27, *(int64_t *)(0x1c20 * v26 + v21)), v25);
                            *v18 = __asm_movsd_1(v28);
                            v29 += 2;
                            v33 = v28;
                            v13 = v29;
                        }
                    }
                    // 0x5fa
                    v14 = v13;
                    v34 = v33;
                    v30 = v34;
                    v12 = v14;
                    if ((a3 & 1) != 0) {
                        // 0x604
                        v22 = __asm_movsd(*(int64_t *)(8 * v14 + v16));
                        v23 = 0x1c20 * v14 + a8;
                        *v18 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v22, *(int64_t *)(v23 + v17)), v34));
                        v30 = v34;
                        v12 = v23;
                    }
                }
                // 0x560
                v31 = v30;
                v19++;
                v10 = v31;
                v11 = v12;
            }
        }
        int64_t v35 = v11;
        int64_t v36 = v8 + 1; // 0x540
        v6 = v10;
        v4 = v35;
        while (v36 != v1) {
            // 0x552
            v8 = v36;
            int128_t v37 = v10;
            v10 = v37;
            v11 = v35;
            if ((int32_t)v5 >= 1) {
                // 0x56a
                v15 = 0x1c20 * v8 + a6;
                v16 = 0x1f40 * v8 + a7;
                v19 = 0;
                v32 = v37;
                v17 = 8 * v19;
                v18 = (int64_t *)(v17 + v15);
                *v18 = 0;
                v30 = v32;
                v12 = v15;
                if (v7 >= 1) {
                    // 0x580
                    v20 = __asm_xorpd(v32, v32);
                    v33 = v20;
                    v13 = 0;
                    if (v7 != 1) {
                        // 0x5a0
                        v21 = v17 + a8;
                        v29 = 0;
                        v24 = __asm_movsd(*(int64_t *)(8 * v29 + v16));
                        v25 = __asm_addsd(__asm_mulsd(v24, *(int64_t *)(0x1c20 * v29 + v21)), v20);
                        *v18 = __asm_movsd_1(v25);
                        v26 = v29 | 1;
                        v27 = __asm_movsd(*(int64_t *)(8 * v26 + v16));
                        v28 = __asm_addsd(__asm_mulsd(v27, *(int64_t *)(0x1c20 * v26 + v21)), v25);
                        *v18 = __asm_movsd_1(v28);
                        v29 += 2;
                        v33 = v28;
                        v13 = v29;
                        while (v29 != (a3 & 0xfffffffe)) {
                            // 0x5a0
                            v24 = __asm_movsd(*(int64_t *)(8 * v29 + v16));
                            v25 = __asm_addsd(__asm_mulsd(v24, *(int64_t *)(0x1c20 * v29 + v21)), v28);
                            *v18 = __asm_movsd_1(v25);
                            v26 = v29 | 1;
                            v27 = __asm_movsd(*(int64_t *)(8 * v26 + v16));
                            v28 = __asm_addsd(__asm_mulsd(v27, *(int64_t *)(0x1c20 * v26 + v21)), v25);
                            *v18 = __asm_movsd_1(v28);
                            v29 += 2;
                            v33 = v28;
                            v13 = v29;
                        }
                    }
                    // 0x5fa
                    v14 = v13;
                    v34 = v33;
                    v30 = v34;
                    v12 = v14;
                    if ((a3 & 1) != 0) {
                        // 0x604
                        v22 = __asm_movsd(*(int64_t *)(8 * v14 + v16));
                        v23 = 0x1c20 * v14 + a8;
                        *v18 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v22, *(int64_t *)(v23 + v17)), v34));
                        v30 = v34;
                        v12 = v23;
                    }
                }
                // 0x560
                v31 = v30;
                v19++;
                v10 = v31;
                v11 = v12;
                while (v19 != v2) {
                    // 0x56a
                    v32 = v31;
                    v17 = 8 * v19;
                    v18 = (int64_t *)(v17 + v15);
                    *v18 = 0;
                    v30 = v32;
                    v12 = v15;
                    if (v7 >= 1) {
                        // 0x580
                        v20 = __asm_xorpd(v32, v32);
                        v33 = v20;
                        v13 = 0;
                        if (v7 != 1) {
                            // 0x5a0
                            v21 = v17 + a8;
                            v29 = 0;
                            v24 = __asm_movsd(*(int64_t *)(8 * v29 + v16));
                            v25 = __asm_addsd(__asm_mulsd(v24, *(int64_t *)(0x1c20 * v29 + v21)), v20);
                            *v18 = __asm_movsd_1(v25);
                            v26 = v29 | 1;
                            v27 = __asm_movsd(*(int64_t *)(8 * v26 + v16));
                            v28 = __asm_addsd(__asm_mulsd(v27, *(int64_t *)(0x1c20 * v26 + v21)), v25);
                            *v18 = __asm_movsd_1(v28);
                            v29 += 2;
                            v33 = v28;
                            v13 = v29;
                            while (v29 != (a3 & 0xfffffffe)) {
                                // 0x5a0
                                v24 = __asm_movsd(*(int64_t *)(8 * v29 + v16));
                                v25 = __asm_addsd(__asm_mulsd(v24, *(int64_t *)(0x1c20 * v29 + v21)), v28);
                                *v18 = __asm_movsd_1(v25);
                                v26 = v29 | 1;
                                v27 = __asm_movsd(*(int64_t *)(8 * v26 + v16));
                                v28 = __asm_addsd(__asm_mulsd(v27, *(int64_t *)(0x1c20 * v26 + v21)), v25);
                                *v18 = __asm_movsd_1(v28);
                                v29 += 2;
                                v33 = v28;
                                v13 = v29;
                            }
                        }
                        // 0x5fa
                        v14 = v13;
                        v34 = v33;
                        v30 = v34;
                        v12 = v14;
                        if ((a3 & 1) != 0) {
                            // 0x604
                            v22 = __asm_movsd(*(int64_t *)(8 * v14 + v16));
                            v23 = 0x1c20 * v14 + a8;
                            *v18 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v22, *(int64_t *)(v23 + v17)), v34));
                            v30 = v34;
                            v12 = v23;
                        }
                    }
                    // 0x560
                    v31 = v30;
                    v19++;
                    v10 = v31;
                    v11 = v12;
                }
            }
            // 0x540
            v35 = v11;
            v36 = v8 + 1;
            v6 = v10;
            v4 = v35;
        }
    }
    int64_t v38 = 0x100000000 * a4 >> 32; // 0x4fa
    int64_t v39 = v38 & 0xffffffff; // 0x636
    int128_t v40 = v6; // 0x63d
    int64_t result = v4; // 0x63d
    if ((int32_t)v5 >= 1) {
        uint32_t v41 = (int32_t)a5;
        int64_t v42 = 0;
        int128_t v43 = v6; // 0x673
        int64_t v44 = v4; // 0x673
        int64_t v45; // 0x4f0
        int64_t v46; // 0x4f0
        int64_t v47; // 0x68f
        int64_t v48; // 0x4f0
        int64_t v49; // 0x692
        int64_t v50; // 0x692
        int64_t * v51; // 0x692
        int64_t v52; // 0x680
        int128_t v53; // 0x6a3
        int64_t v54; // 0x4f0
        int128_t v55; // 0x72b
        int64_t v56; // 0x73b
        int128_t v57; // 0x6ca
        int64_t v58; // 0x6da
        int128_t v59; // 0x6df
        int64_t v60; // 0x6ea
        int128_t v61; // 0x6ee
        int64_t v62; // 0x6fd
        int128_t v63; // 0x702
        int64_t v64; // 0x70e
        int128_t v65; // 0x4f0
        int128_t v66; // 0x4f0
        int128_t v67; // 0x4f0
        int128_t v68; // 0x4f0
        int128_t v69; // 0x4f0
        if ((int32_t)v38 >= 1) {
            // 0x688
            v47 = v42 * (int64_t)&g19 + a9;
            v48 = 0x2580 * v42 + a10;
            v52 = 0;
            v65 = v6;
            v49 = 8 * v52;
            v50 = v49 + v47;
            v51 = (int64_t *)v50;
            *v51 = 0;
            v68 = v65;
            v46 = v47;
            if (v41 >= 1) {
                // 0x69f
                v53 = __asm_xorpd(v65, v65);
                v66 = v53;
                v45 = 0;
                if (v41 != 1) {
                    // 0x6c0
                    v54 = v49 + a11;
                    v64 = 0;
                    v57 = __asm_movsd(*(int64_t *)(8 * v64 + v48));
                    v58 = *(int64_t *)(v64 * (int64_t)&g19 + v54);
                    v59 = __asm_addsd(__asm_mulsd(v57, v58), v53);
                    *v51 = __asm_movsd_1(v59);
                    v60 = v64 | 1;
                    v61 = __asm_movsd(*(int64_t *)(8 * v60 + v48));
                    v62 = *(int64_t *)(v60 * (int64_t)&g19 + v54);
                    v63 = __asm_addsd(__asm_mulsd(v61, v62), v59);
                    *v51 = __asm_movsd_1(v63);
                    v64 += 2;
                    v66 = v63;
                    v45 = v64;
                    while (v64 != (a5 & 0xfffffffe)) {
                        // 0x6c0
                        v57 = __asm_movsd(*(int64_t *)(8 * v64 + v48));
                        v58 = *(int64_t *)(v64 * (int64_t)&g19 + v54);
                        v59 = __asm_addsd(__asm_mulsd(v57, v58), v63);
                        *v51 = __asm_movsd_1(v59);
                        v60 = v64 | 1;
                        v61 = __asm_movsd(*(int64_t *)(8 * v60 + v48));
                        v62 = *(int64_t *)(v60 * (int64_t)&g19 + v54);
                        v63 = __asm_addsd(__asm_mulsd(v61, v62), v59);
                        *v51 = __asm_movsd_1(v63);
                        v64 += 2;
                        v66 = v63;
                        v45 = v64;
                    }
                }
                // 0x717
                v67 = v66;
                v68 = v67;
                v46 = v50;
                if ((a5 & 1) != 0) {
                    // 0x721
                    v55 = __asm_movsd(*(int64_t *)(8 * v45 + v48));
                    v56 = *(int64_t *)(v49 + a11 + v45 * (int64_t)&g19);
                    *v51 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v55, v56), v67));
                    v68 = v67;
                    v46 = v50;
                }
            }
            // 0x680
            v69 = v68;
            v52++;
            v43 = v69;
            v44 = v46;
            while (v52 != v39) {
                // 0x688
                v65 = v69;
                v49 = 8 * v52;
                v50 = v49 + v47;
                v51 = (int64_t *)v50;
                *v51 = 0;
                v68 = v65;
                v46 = v47;
                if (v41 >= 1) {
                    // 0x69f
                    v53 = __asm_xorpd(v65, v65);
                    v66 = v53;
                    v45 = 0;
                    if (v41 != 1) {
                        // 0x6c0
                        v54 = v49 + a11;
                        v64 = 0;
                        v57 = __asm_movsd(*(int64_t *)(8 * v64 + v48));
                        v58 = *(int64_t *)(v64 * (int64_t)&g19 + v54);
                        v59 = __asm_addsd(__asm_mulsd(v57, v58), v53);
                        *v51 = __asm_movsd_1(v59);
                        v60 = v64 | 1;
                        v61 = __asm_movsd(*(int64_t *)(8 * v60 + v48));
                        v62 = *(int64_t *)(v60 * (int64_t)&g19 + v54);
                        v63 = __asm_addsd(__asm_mulsd(v61, v62), v59);
                        *v51 = __asm_movsd_1(v63);
                        v64 += 2;
                        v66 = v63;
                        v45 = v64;
                        while (v64 != (a5 & 0xfffffffe)) {
                            // 0x6c0
                            v57 = __asm_movsd(*(int64_t *)(8 * v64 + v48));
                            v58 = *(int64_t *)(v64 * (int64_t)&g19 + v54);
                            v59 = __asm_addsd(__asm_mulsd(v57, v58), v63);
                            *v51 = __asm_movsd_1(v59);
                            v60 = v64 | 1;
                            v61 = __asm_movsd(*(int64_t *)(8 * v60 + v48));
                            v62 = *(int64_t *)(v60 * (int64_t)&g19 + v54);
                            v63 = __asm_addsd(__asm_mulsd(v61, v62), v59);
                            *v51 = __asm_movsd_1(v63);
                            v64 += 2;
                            v66 = v63;
                            v45 = v64;
                        }
                    }
                    // 0x717
                    v67 = v66;
                    v68 = v67;
                    v46 = v50;
                    if ((a5 & 1) != 0) {
                        // 0x721
                        v55 = __asm_movsd(*(int64_t *)(8 * v45 + v48));
                        v56 = *(int64_t *)(v49 + a11 + v45 * (int64_t)&g19);
                        *v51 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v55, v56), v67));
                        v68 = v67;
                        v46 = v50;
                    }
                }
                // 0x680
                v69 = v68;
                v52++;
                v43 = v69;
                v44 = v46;
            }
        }
        int64_t v70 = v44;
        int128_t v71 = v43;
        int64_t v72 = v42 + 1; // 0x660
        v40 = v71;
        result = v70;
        while (v72 != v2) {
            // 0x66e
            v42 = v72;
            int128_t v73 = v71;
            v43 = v73;
            v44 = v70;
            if ((int32_t)v38 >= 1) {
                // 0x688
                v47 = v42 * (int64_t)&g19 + a9;
                v48 = 0x2580 * v42 + a10;
                v52 = 0;
                v65 = v73;
                v49 = 8 * v52;
                v50 = v49 + v47;
                v51 = (int64_t *)v50;
                *v51 = 0;
                v68 = v65;
                v46 = v47;
                if (v41 >= 1) {
                    // 0x69f
                    v53 = __asm_xorpd(v65, v65);
                    v66 = v53;
                    v45 = 0;
                    if (v41 != 1) {
                        // 0x6c0
                        v54 = v49 + a11;
                        v64 = 0;
                        v57 = __asm_movsd(*(int64_t *)(8 * v64 + v48));
                        v58 = *(int64_t *)(v64 * (int64_t)&g19 + v54);
                        v59 = __asm_addsd(__asm_mulsd(v57, v58), v53);
                        *v51 = __asm_movsd_1(v59);
                        v60 = v64 | 1;
                        v61 = __asm_movsd(*(int64_t *)(8 * v60 + v48));
                        v62 = *(int64_t *)(v60 * (int64_t)&g19 + v54);
                        v63 = __asm_addsd(__asm_mulsd(v61, v62), v59);
                        *v51 = __asm_movsd_1(v63);
                        v64 += 2;
                        v66 = v63;
                        v45 = v64;
                        while (v64 != (a5 & 0xfffffffe)) {
                            // 0x6c0
                            v57 = __asm_movsd(*(int64_t *)(8 * v64 + v48));
                            v58 = *(int64_t *)(v64 * (int64_t)&g19 + v54);
                            v59 = __asm_addsd(__asm_mulsd(v57, v58), v63);
                            *v51 = __asm_movsd_1(v59);
                            v60 = v64 | 1;
                            v61 = __asm_movsd(*(int64_t *)(8 * v60 + v48));
                            v62 = *(int64_t *)(v60 * (int64_t)&g19 + v54);
                            v63 = __asm_addsd(__asm_mulsd(v61, v62), v59);
                            *v51 = __asm_movsd_1(v63);
                            v64 += 2;
                            v66 = v63;
                            v45 = v64;
                        }
                    }
                    // 0x717
                    v67 = v66;
                    v68 = v67;
                    v46 = v50;
                    if ((a5 & 1) != 0) {
                        // 0x721
                        v55 = __asm_movsd(*(int64_t *)(8 * v45 + v48));
                        v56 = *(int64_t *)(v49 + a11 + v45 * (int64_t)&g19);
                        *v51 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v55, v56), v67));
                        v68 = v67;
                        v46 = v50;
                    }
                }
                // 0x680
                v69 = v68;
                v52++;
                v43 = v69;
                v44 = v46;
                while (v52 != v39) {
                    // 0x688
                    v65 = v69;
                    v49 = 8 * v52;
                    v50 = v49 + v47;
                    v51 = (int64_t *)v50;
                    *v51 = 0;
                    v68 = v65;
                    v46 = v47;
                    if (v41 >= 1) {
                        // 0x69f
                        v53 = __asm_xorpd(v65, v65);
                        v66 = v53;
                        v45 = 0;
                        if (v41 != 1) {
                            // 0x6c0
                            v54 = v49 + a11;
                            v64 = 0;
                            v57 = __asm_movsd(*(int64_t *)(8 * v64 + v48));
                            v58 = *(int64_t *)(v64 * (int64_t)&g19 + v54);
                            v59 = __asm_addsd(__asm_mulsd(v57, v58), v53);
                            *v51 = __asm_movsd_1(v59);
                            v60 = v64 | 1;
                            v61 = __asm_movsd(*(int64_t *)(8 * v60 + v48));
                            v62 = *(int64_t *)(v60 * (int64_t)&g19 + v54);
                            v63 = __asm_addsd(__asm_mulsd(v61, v62), v59);
                            *v51 = __asm_movsd_1(v63);
                            v64 += 2;
                            v66 = v63;
                            v45 = v64;
                            while (v64 != (a5 & 0xfffffffe)) {
                                // 0x6c0
                                v57 = __asm_movsd(*(int64_t *)(8 * v64 + v48));
                                v58 = *(int64_t *)(v64 * (int64_t)&g19 + v54);
                                v59 = __asm_addsd(__asm_mulsd(v57, v58), v63);
                                *v51 = __asm_movsd_1(v59);
                                v60 = v64 | 1;
                                v61 = __asm_movsd(*(int64_t *)(8 * v60 + v48));
                                v62 = *(int64_t *)(v60 * (int64_t)&g19 + v54);
                                v63 = __asm_addsd(__asm_mulsd(v61, v62), v59);
                                *v51 = __asm_movsd_1(v63);
                                v64 += 2;
                                v66 = v63;
                                v45 = v64;
                            }
                        }
                        // 0x717
                        v67 = v66;
                        v68 = v67;
                        v46 = v50;
                        if ((a5 & 1) != 0) {
                            // 0x721
                            v55 = __asm_movsd(*(int64_t *)(8 * v45 + v48));
                            v56 = *(int64_t *)(v49 + a11 + v45 * (int64_t)&g19);
                            *v51 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v55, v56), v67));
                            v68 = v67;
                            v46 = v50;
                        }
                    }
                    // 0x680
                    v69 = v68;
                    v52++;
                    v43 = v69;
                    v44 = v46;
                }
            }
            // 0x660
            v70 = v44;
            v71 = v43;
            v72 = v42 + 1;
            v40 = v71;
            result = v70;
        }
    }
    // 0x74d
    if ((int32_t)a1 < 1) {
        // 0x861
        return result;
    }
    uint32_t v74 = (int32_t)v3;
    int64_t v75 = 0;
    int128_t v76 = v40; // 0x783
    int64_t v77 = result; // 0x783
    int64_t v78; // 0x4f0
    int64_t v79; // 0x4f0
    int64_t v80; // 0x79f
    int64_t v81; // 0x4f0
    int64_t v82; // 0x7a2
    int64_t v83; // 0x7a2
    int64_t * v84; // 0x7a2
    int64_t v85; // 0x790
    int128_t v86; // 0x7b2
    int64_t v87; // 0x4f0
    int128_t v88; // 0x83e
    int64_t v89; // 0x84e
    int128_t v90; // 0x7da
    int64_t v91; // 0x7ea
    int128_t v92; // 0x7f0
    int64_t v93; // 0x7fb
    int128_t v94; // 0x7ff
    int64_t v95; // 0x80e
    int128_t v96; // 0x814
    int64_t v97; // 0x81c
    int128_t v98; // 0x4f0
    int128_t v99; // 0x4f0
    int128_t v100; // 0x4f0
    int128_t v101; // 0x4f0
    int128_t v102; // 0x4f0
    if ((int32_t)v38 >= 1) {
        // 0x798
        v80 = v75 * (int64_t)&g19 + a12;
        v81 = 0x1c20 * v75 + a6;
        v85 = 0;
        v100 = v40;
        v82 = 8 * v85;
        v83 = v82 + v80;
        v84 = (int64_t *)v83;
        *v84 = 0;
        v98 = v100;
        v79 = v80;
        if (v74 >= 1) {
            // 0x7ae
            v86 = __asm_xorpd(v100, v100);
            v101 = v86;
            v78 = 0;
            if (v74 != 1) {
                // 0x7d0
                v87 = v82 + a9;
                v97 = 0;
                v90 = __asm_movsd(*(int64_t *)(8 * v97 + v81));
                v91 = *(int64_t *)(v97 * (int64_t)&g19 + v87);
                v92 = __asm_addsd(__asm_mulsd(v90, v91), v86);
                *v84 = __asm_movsd_1(v92);
                v93 = v97 | 1;
                v94 = __asm_movsd(*(int64_t *)(8 * v93 + v81));
                v95 = *(int64_t *)(v93 * (int64_t)&g19 + v87);
                v96 = __asm_addsd(__asm_mulsd(v94, v95), v92);
                *v84 = __asm_movsd_1(v96);
                v97 += 2;
                v101 = v96;
                v78 = v97;
                while (v97 != (a2 & 0xfffffffe)) {
                    // 0x7d0
                    v90 = __asm_movsd(*(int64_t *)(8 * v97 + v81));
                    v91 = *(int64_t *)(v97 * (int64_t)&g19 + v87);
                    v92 = __asm_addsd(__asm_mulsd(v90, v91), v96);
                    *v84 = __asm_movsd_1(v92);
                    v93 = v97 | 1;
                    v94 = __asm_movsd(*(int64_t *)(8 * v93 + v81));
                    v95 = *(int64_t *)(v93 * (int64_t)&g19 + v87);
                    v96 = __asm_addsd(__asm_mulsd(v94, v95), v92);
                    *v84 = __asm_movsd_1(v96);
                    v97 += 2;
                    v101 = v96;
                    v78 = v97;
                }
            }
            // 0x829
            v102 = v101;
            v98 = v102;
            v79 = v83;
            if ((a2 & 1) != 0) {
                // 0x834
                v88 = __asm_movsd(*(int64_t *)(8 * v78 + v81));
                v89 = *(int64_t *)(v82 + a9 + v78 * (int64_t)&g19);
                *v84 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v88, v89), v102));
                v98 = v102;
                v79 = v83;
            }
        }
        // 0x790
        v99 = v98;
        v85++;
        v76 = v99;
        v77 = v79;
        while (v85 != v39) {
            // 0x798
            v100 = v99;
            v82 = 8 * v85;
            v83 = v82 + v80;
            v84 = (int64_t *)v83;
            *v84 = 0;
            v98 = v100;
            v79 = v80;
            if (v74 >= 1) {
                // 0x7ae
                v86 = __asm_xorpd(v100, v100);
                v101 = v86;
                v78 = 0;
                if (v74 != 1) {
                    // 0x7d0
                    v87 = v82 + a9;
                    v97 = 0;
                    v90 = __asm_movsd(*(int64_t *)(8 * v97 + v81));
                    v91 = *(int64_t *)(v97 * (int64_t)&g19 + v87);
                    v92 = __asm_addsd(__asm_mulsd(v90, v91), v86);
                    *v84 = __asm_movsd_1(v92);
                    v93 = v97 | 1;
                    v94 = __asm_movsd(*(int64_t *)(8 * v93 + v81));
                    v95 = *(int64_t *)(v93 * (int64_t)&g19 + v87);
                    v96 = __asm_addsd(__asm_mulsd(v94, v95), v92);
                    *v84 = __asm_movsd_1(v96);
                    v97 += 2;
                    v101 = v96;
                    v78 = v97;
                    while (v97 != (a2 & 0xfffffffe)) {
                        // 0x7d0
                        v90 = __asm_movsd(*(int64_t *)(8 * v97 + v81));
                        v91 = *(int64_t *)(v97 * (int64_t)&g19 + v87);
                        v92 = __asm_addsd(__asm_mulsd(v90, v91), v96);
                        *v84 = __asm_movsd_1(v92);
                        v93 = v97 | 1;
                        v94 = __asm_movsd(*(int64_t *)(8 * v93 + v81));
                        v95 = *(int64_t *)(v93 * (int64_t)&g19 + v87);
                        v96 = __asm_addsd(__asm_mulsd(v94, v95), v92);
                        *v84 = __asm_movsd_1(v96);
                        v97 += 2;
                        v101 = v96;
                        v78 = v97;
                    }
                }
                // 0x829
                v102 = v101;
                v98 = v102;
                v79 = v83;
                if ((a2 & 1) != 0) {
                    // 0x834
                    v88 = __asm_movsd(*(int64_t *)(8 * v78 + v81));
                    v89 = *(int64_t *)(v82 + a9 + v78 * (int64_t)&g19);
                    *v84 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v88, v89), v102));
                    v98 = v102;
                    v79 = v83;
                }
            }
            // 0x790
            v99 = v98;
            v85++;
            v76 = v99;
            v77 = v79;
        }
    }
    int64_t result2 = v77;
    int64_t v103 = v75 + 1; // 0x770
    while (v103 != v1) {
        // 0x77e
        v75 = v103;
        int128_t v104 = v76;
        v76 = v104;
        v77 = result2;
        if ((int32_t)v38 >= 1) {
            // 0x798
            v80 = v75 * (int64_t)&g19 + a12;
            v81 = 0x1c20 * v75 + a6;
            v85 = 0;
            v100 = v104;
            v82 = 8 * v85;
            v83 = v82 + v80;
            v84 = (int64_t *)v83;
            *v84 = 0;
            v98 = v100;
            v79 = v80;
            if (v74 >= 1) {
                // 0x7ae
                v86 = __asm_xorpd(v100, v100);
                v101 = v86;
                v78 = 0;
                if (v74 != 1) {
                    // 0x7d0
                    v87 = v82 + a9;
                    v97 = 0;
                    v90 = __asm_movsd(*(int64_t *)(8 * v97 + v81));
                    v91 = *(int64_t *)(v97 * (int64_t)&g19 + v87);
                    v92 = __asm_addsd(__asm_mulsd(v90, v91), v86);
                    *v84 = __asm_movsd_1(v92);
                    v93 = v97 | 1;
                    v94 = __asm_movsd(*(int64_t *)(8 * v93 + v81));
                    v95 = *(int64_t *)(v93 * (int64_t)&g19 + v87);
                    v96 = __asm_addsd(__asm_mulsd(v94, v95), v92);
                    *v84 = __asm_movsd_1(v96);
                    v97 += 2;
                    v101 = v96;
                    v78 = v97;
                    while (v97 != (a2 & 0xfffffffe)) {
                        // 0x7d0
                        v90 = __asm_movsd(*(int64_t *)(8 * v97 + v81));
                        v91 = *(int64_t *)(v97 * (int64_t)&g19 + v87);
                        v92 = __asm_addsd(__asm_mulsd(v90, v91), v96);
                        *v84 = __asm_movsd_1(v92);
                        v93 = v97 | 1;
                        v94 = __asm_movsd(*(int64_t *)(8 * v93 + v81));
                        v95 = *(int64_t *)(v93 * (int64_t)&g19 + v87);
                        v96 = __asm_addsd(__asm_mulsd(v94, v95), v92);
                        *v84 = __asm_movsd_1(v96);
                        v97 += 2;
                        v101 = v96;
                        v78 = v97;
                    }
                }
                // 0x829
                v102 = v101;
                v98 = v102;
                v79 = v83;
                if ((a2 & 1) != 0) {
                    // 0x834
                    v88 = __asm_movsd(*(int64_t *)(8 * v78 + v81));
                    v89 = *(int64_t *)(v82 + a9 + v78 * (int64_t)&g19);
                    *v84 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v88, v89), v102));
                    v98 = v102;
                    v79 = v83;
                }
            }
            // 0x790
            v99 = v98;
            v85++;
            v76 = v99;
            v77 = v79;
            while (v85 != v39) {
                // 0x798
                v100 = v99;
                v82 = 8 * v85;
                v83 = v82 + v80;
                v84 = (int64_t *)v83;
                *v84 = 0;
                v98 = v100;
                v79 = v80;
                if (v74 >= 1) {
                    // 0x7ae
                    v86 = __asm_xorpd(v100, v100);
                    v101 = v86;
                    v78 = 0;
                    if (v74 != 1) {
                        // 0x7d0
                        v87 = v82 + a9;
                        v97 = 0;
                        v90 = __asm_movsd(*(int64_t *)(8 * v97 + v81));
                        v91 = *(int64_t *)(v97 * (int64_t)&g19 + v87);
                        v92 = __asm_addsd(__asm_mulsd(v90, v91), v86);
                        *v84 = __asm_movsd_1(v92);
                        v93 = v97 | 1;
                        v94 = __asm_movsd(*(int64_t *)(8 * v93 + v81));
                        v95 = *(int64_t *)(v93 * (int64_t)&g19 + v87);
                        v96 = __asm_addsd(__asm_mulsd(v94, v95), v92);
                        *v84 = __asm_movsd_1(v96);
                        v97 += 2;
                        v101 = v96;
                        v78 = v97;
                        while (v97 != (a2 & 0xfffffffe)) {
                            // 0x7d0
                            v90 = __asm_movsd(*(int64_t *)(8 * v97 + v81));
                            v91 = *(int64_t *)(v97 * (int64_t)&g19 + v87);
                            v92 = __asm_addsd(__asm_mulsd(v90, v91), v96);
                            *v84 = __asm_movsd_1(v92);
                            v93 = v97 | 1;
                            v94 = __asm_movsd(*(int64_t *)(8 * v93 + v81));
                            v95 = *(int64_t *)(v93 * (int64_t)&g19 + v87);
                            v96 = __asm_addsd(__asm_mulsd(v94, v95), v92);
                            *v84 = __asm_movsd_1(v96);
                            v97 += 2;
                            v101 = v96;
                            v78 = v97;
                        }
                    }
                    // 0x829
                    v102 = v101;
                    v98 = v102;
                    v79 = v83;
                    if ((a2 & 1) != 0) {
                        // 0x834
                        v88 = __asm_movsd(*(int64_t *)(8 * v78 + v81));
                        v89 = *(int64_t *)(v82 + a9 + v78 * (int64_t)&g19);
                        *v84 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v88, v89), v102));
                        v98 = v102;
                        v79 = v83;
                    }
                }
                // 0x790
                v99 = v98;
                v85++;
                v76 = v99;
                v77 = v79;
            }
        }
        // 0x770
        result2 = v77;
        v103 = v75 + 1;
    }
    // 0x861
    return result2;
}
