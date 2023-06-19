
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "aes.h"
int64_t encrypt(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x0
    int128_t v1; // 0x0
    int128_t v2 = v1;
    int32_t v3 = a3;
    KeySchedule(v3, (int32_t *)a2);
    int64_t v4; // 0x0
    int32_t v5; // 0x0
    int32_t v6; // 0x0
    if (v3 < 0x2eec0) {
        if (v3 > 0x1f4ff) {
            if (v3 == 0x1f500) {
                // 0xb7
                v5 = 8;
                v6 = 4;
                goto lab_0xc1;
            } else {
                // 0x99
                v4 = 4;
                if (v3 == 0x2ee80) {
                    // 0xa5
                    *(int32_t *)*(int64_t *)172 = 2;
                    // 0x158
                    return 4;
                }
                goto lab_0x165;
            }
        } else {
            // 0x63
            v5 = 6;
            v6 = 2;
            v4 = 4;
            switch (v3) {
                case 0x1f480: {
                    // 0x14b
                    *(int32_t *)*(int64_t *)338 = 0;
                    // 0x158
                    return 4;
                }
                case 0x1f4c0: {
                    goto lab_0xc1;
                }
                default: {
                    goto lab_0x165;
                }
            }
        }
    } else {
        if (v3 < 0x3e880) {
            // 0x7c
            v5 = 6;
            v6 = 2;
            v4 = 4;
            switch (v3) {
                case 0x2eec0: {
                    goto lab_0xc1;
                }
                case 0x2ef00: {
                    // 0xb7
                    v5 = 8;
                    v6 = 4;
                    goto lab_0xc1;
                }
                default: {
                    goto lab_0x165;
                }
            }
        } else {
            // 0x36
            v4 = 4;
            switch (v3) {
                case 0x3e880: {
                    // 0x11b
                    *(int32_t *)*(int64_t *)290 = 4;
                    // 0x158
                    return 4;
                }
                case 0x3e8c0: {
                    // 0x12a
                    *(int32_t *)*(int64_t *)305 = 4;
                    *(int32_t *)*(int64_t *)318 = 6;
                    v4 = 6;
                    goto lab_0x165;
                }
                case 0x3e900: {
                    // 0xb7
                    v5 = 8;
                    v6 = 4;
                    goto lab_0xc1;
                }
                default: {
                    goto lab_0x165;
                }
            }
        }
    }
  lab_0xc1:
    // 0xc1
    *(int32_t *)*(int64_t *)200 = v6;
    *(int32_t *)*(int64_t *)209 = v5;
    if (v3 > 0x2eeff) {
        switch (v3) {
            case 0x2ef00: {
                // 0x114
                v4 = 8;
                goto lab_0x165;
            }
            case 0x3e900: {
                // 0x114
                v4 = 8;
                goto lab_0x165;
            }
            default: {
                // 0x105
                v4 = 4;
                if (v3 != 0x3e8c0) {
                    goto lab_0x165;
                } else {
                    // 0x10d
                    v4 = 6;
                    goto lab_0x165;
                }
            }
        }
    } else {
        // 0xdb
        v4 = 4;
        switch (v3) {
            case 0x1f4c0: {
                // 0x10d
                v4 = 6;
                goto lab_0x165;
            }
            case 0x1f500: {
                // 0x114
                v4 = 8;
                goto lab_0x165;
            }
            case 0x2eec0: {
                // 0x10d
                v4 = 6;
                goto lab_0x165;
            }
            default: {
                goto lab_0x165;
            }
        }
    }
  lab_0x165:;
    int64_t v7 = *(int64_t *)366; // 0x167
    int64_t v8 = v7 + 480; // 0x17e
    int64_t v9 = a1 + 4; // 0x186
    int64_t v10 = v7 + 960; // 0x18a
    int64_t v11 = a1 + 8; // 0x192
    int64_t v12 = v7 + 1440; // 0x196
    int64_t v13 = a1 + 12; // 0x19e
    int64_t v14 = 0; // 0x16e
    int64_t v15 = 4 * v14; // 0x170
    int64_t v16 = 16 * v14; // 0x177
    int32_t * v17 = (int32_t *)(v16 + a1); // 0x17b
    *v17 = *v17 ^ *(int32_t *)(v15 + v7);
    int32_t * v18 = (int32_t *)(v16 + v9); // 0x186
    *v18 = *v18 ^ *(int32_t *)(v15 + v8);
    int32_t * v19 = (int32_t *)(v16 + v11); // 0x192
    *v19 = *v19 ^ *(int32_t *)(v15 + v10);
    int32_t * v20 = (int32_t *)(v16 + v13); // 0x19e
    *v20 = *v20 ^ *(int32_t *)(v15 + v12);
    int64_t v21 = v14 + 1; // 0x1a2
    v14 = v21;
    while (v21 != v4) {
        // 0x170
        v15 = 4 * v14;
        v16 = 16 * v14;
        v17 = (int32_t *)(v16 + a1);
        *v17 = *v17 ^ *(int32_t *)(v15 + v7);
        v18 = (int32_t *)(v16 + v9);
        *v18 = *v18 ^ *(int32_t *)(v15 + v8);
        v19 = (int32_t *)(v16 + v11);
        *v19 = *v19 ^ *(int32_t *)(v15 + v10);
        v20 = (int32_t *)(v16 + v13);
        *v20 = *v20 ^ *(int32_t *)(v15 + v12);
        v21 = v14 + 1;
        v14 = v21;
    }
    int32_t * v22 = (int32_t *)*(int64_t *)437; // 0x1bb
    int32_t * v23; // 0x0
    int64_t v24; // 0x0
    if (*v22 > -9) {
        int32_t * v25 = (int32_t *)*(int64_t *)465; // 0x1e0
        int32_t * v26 = (int32_t *)a1;
        uint64_t v27 = 1;
        ByteSub_ShiftRow(v26, *v25);
        MixColumn_AddRoundKey(v26, *v25, (int32_t)v27);
        int64_t v28 = v27 + 1; // 0x1f9
        while (v27 < (int64_t)(*v22 + 9)) {
            // 0x1e0
            v27 = v28 & 0xffffffff;
            ByteSub_ShiftRow(v26, *v25);
            MixColumn_AddRoundKey(v26, *v25, (int32_t)v27);
            v28 = v27 + 1;
        }
        // 0x20c
        v23 = v26;
        v24 = 0x100000000 * v28 >> 32;
    } else {
        // 0x1aa
        v23 = (int32_t *)a1;
        v24 = 1;
    }
    // 0x20c
    ByteSub_ShiftRow(v23, *(int32_t *)*(int64_t *)531);
    int64_t v29; // 0x0
    if (v3 > 0x2eeff) {
        switch (v3) {
            case 0x2ef00: {
                // 0x267
                v29 = 8;
                goto lab_0x26c;
            }
            case 0x3e900: {
                // 0x267
                v29 = 8;
                goto lab_0x26c;
            }
            default: {
                // 0x258
                v29 = 4;
                if (v3 != 0x3e8c0) {
                    goto lab_0x26c;
                } else {
                    // 0x260
                    v29 = 6;
                    goto lab_0x26c;
                }
            }
        }
    } else {
        // 0x22e
        v29 = 4;
        switch (v3) {
            case 0x1f4c0: {
                // 0x260
                v29 = 6;
                goto lab_0x26c;
            }
            case 0x1f500: {
                // 0x267
                v29 = 8;
                goto lab_0x26c;
            }
            case 0x2eec0: {
                // 0x260
                v29 = 6;
                goto lab_0x26c;
            }
            default: {
                goto lab_0x26c;
            }
        }
    }
  lab_0x26c:;
    int64_t v30 = 0; // 0x274
    int64_t v31 = 4 * (v30 + (v29 * v24 & 0xfffffffe)); // 0x284
    int64_t v32 = 16 * v30; // 0x28b
    int32_t * v33 = (int32_t *)(v32 + a1); // 0x28f
    *v33 = *v33 ^ *(int32_t *)(v31 + v7);
    int32_t * v34 = (int32_t *)(v32 + v9); // 0x29a
    *v34 = *v34 ^ *(int32_t *)(v31 + v8);
    int32_t * v35 = (int32_t *)(v32 + v11); // 0x2a6
    *v35 = *v35 ^ *(int32_t *)(v31 + v10);
    int32_t * v36 = (int32_t *)(v32 + v13); // 0x2b2
    *v36 = *v36 ^ *(int32_t *)(v31 + v12);
    int64_t v37 = v30 + 1; // 0x2b6
    v30 = v37;
    while (v37 != v29) {
        // 0x280
        v31 = 4 * (v30 + (v29 * v24 & 0xfffffffe));
        v32 = 16 * v30;
        v33 = (int32_t *)(v32 + a1);
        *v33 = *v33 ^ *(int32_t *)(v31 + v7);
        v34 = (int32_t *)(v32 + v9);
        *v34 = *v34 ^ *(int32_t *)(v31 + v8);
        v35 = (int32_t *)(v32 + v11);
        *v35 = *v35 ^ *(int32_t *)(v31 + v10);
        v36 = (int32_t *)(v32 + v13);
        *v36 = *v36 ^ *(int32_t *)(v31 + v12);
        v37 = v30 + 1;
        v30 = v37;
    }
    // 0x2be
    int64_t v38; // 0x0
    int128_t v39 = __asm_movdqu(*(int128_t *)&v38); // 0x2c5
    int128_t v40 = __asm_movdqu(*(int128_t *)(a1 + 16)); // 0x2c9
    int128_t v41 = __asm_movdqu(*(int128_t *)(a1 + 32)); // 0x2ce
    int128_t v42 = __asm_pcmpeqd(__asm_movdqu(*(int128_t *)(a1 + 48)), g1); // 0x2d8
    int128_t v43 = __asm_pcmpeqd(v2, v2); // 0x2e0
    int128_t v44 = __asm_packssdw(__asm_pxor(__asm_pcmpeqd(v41, g2), v43), __asm_pxor(v42, v43)); // 0x2f4
    int128_t v45 = __asm_pxor(__asm_pcmpeqd(v40, g3), v43); // 0x300
    int128_t v46 = __asm_pcmpeqd(v39, g4); // 0x304
    uint32_t v47 = __asm_pmovmskb(__asm_packsswb(__asm_packssdw(__asm_pxor(v46, v43), v45), v44)); // 0x318
    uint32_t v48 = v47 - (v47 / 2 & 0x5555); // 0x326
    uint32_t v49 = (v48 / 4 & 0x3333) + (v48 & 0x3333); // 0x339
    uint32_t v50 = v49 / 16 + v49 & 3855; // 0x342
    int32_t * v51 = (int32_t *)*(int64_t *)709; // 0x352
    *v51 = (v50 / 256 + v50 & 31) + *v51;
    return 0;
}
int32_t KeySchedule(int32_t type, int32_t * key) {
    int64_t v1 = (int64_t)key;
    char v2; // 0x370
    int64_t v3; // 0x370
    char v4; // 0x370
    int64_t v5; // 0x370
    int64_t v6; // 0x370
    bool v7; // 0x370
    if (type < 0x2eec0) {
        if (type > 0x1f4ff) {
            // 0x40d
            v4 = 0;
            v5 = 8;
            v7 = true;
            v6 = 15;
            v2 = 1;
            v3 = 4;
            if (type != 0x1f500) {
                // 0x415
                v4 = 1;
                v5 = 4;
                v7 = false;
                v6 = 13;
                v2 = 1;
                v3 = 6;
                if (type != 0x2ee80) {
                    // 0x78b
                    return -1;
                }
            }
        } else {
            // 0x3ca
            v4 = 0;
            v5 = 4;
            v7 = true;
            v6 = 11;
            v2 = 1;
            v3 = 4;
            if (type != 0x1f480) {
                // 0x3d2
                v4 = 0;
                v5 = 6;
                v7 = true;
                v6 = 13;
                v2 = 1;
                v3 = 4;
                if (type != 0x1f4c0) {
                    // 0x78b
                    return -1;
                }
            }
        }
        goto lab_0x475;
    } else {
        if (type < 0x3e880) {
            // 0x3ed
            v4 = 1;
            v5 = 6;
            v7 = false;
            v6 = 13;
            v2 = 1;
            v3 = 6;
            if (type != 0x2eec0) {
                // 0x3f5
                v4 = 1;
                v5 = 8;
                v7 = false;
                v6 = 15;
                v2 = 1;
                v3 = 6;
                if (type != 0x2ef00) {
                    // 0x78b
                    return -1;
                }
            }
            goto lab_0x475;
        } else {
            // 0x38a
            v4 = 0;
            v5 = 4;
            v7 = false;
            v6 = 15;
            v2 = 0;
            v3 = 8;
            switch (type) {
                case 0x3e880: {
                    goto lab_0x475;
                }
                case 0x3e8c0: {
                    // 0x42f
                    v4 = 0;
                    v5 = 6;
                    v7 = false;
                    v6 = 15;
                    v2 = 0;
                    v3 = 8;
                    goto lab_0x475;
                }
                default: {
                    // 0x3a2
                    v4 = 0;
                    v5 = 8;
                    v7 = false;
                    v6 = 15;
                    v2 = 0;
                    v3 = 8;
                    if (type != 0x3e900) {
                        // 0x78b
                        return -1;
                    }
                    goto lab_0x475;
                }
            }
        }
    }
  lab_0x65c:;
    // 0x65c
    int32_t v8; // 0x370
    int64_t v9 = v8;
    int32_t v10; // 0x370
    int64_t v11 = v10;
    int64_t v12 = v8 >= 0 ? v9 : v9 + 15; // 0x663
    int64_t v13; // 0x74e
    int32_t v14 = *(int32_t *)(64 * (int64_t)((int32_t)v12 >> 4) + v13 + (0x100000000 * (v9 - (v12 & 0xfffffff0)) >> 30)); // 0x688
    int64_t v15 = v10 >= 0 ? v11 : v11 + 15; // 0x690
    int32_t v16 = *(int32_t *)(64 * (int64_t)((int32_t)v15 >> 4) + v13 + (0x100000000 * (v11 - (v15 & 0xfffffff0)) >> 30)); // 0x6aa
    int64_t v17; // 0x370
    int64_t v18 = v17; // 0x6aa
    int32_t v19; // 0x751
    int32_t v20 = v19; // 0x6aa
    int32_t v21 = v16; // 0x6aa
    int32_t v22 = v14; // 0x6aa
    int64_t v23; // 0x370
    int32_t v24 = *(int32_t *)v23; // 0x6aa
    goto lab_0x6ae;
  lab_0x6ae:;
    // 0x6ae
    uint64_t v25; // 0x370
    int64_t v26 = 4 * (v25 - v3); // 0x6b4
    int64_t v27; // 0x483
    *(int32_t *)v18 = *(int32_t *)(v26 + v27) ^ v20;
    int64_t v28; // 0x491
    int64_t v29; // 0x370
    *(int32_t *)(v29 + v28) = *(int32_t *)(v26 + v28) ^ v24;
    int64_t v30; // 0x49c
    *(int32_t *)(v29 + v30) = *(int32_t *)(v26 + v30) ^ v22;
    int64_t v31; // 0x4a7
    *(int32_t *)(v29 + v31) = *(int32_t *)(v26 + v31) ^ v21;
    int64_t v32 = v25 + 1; // 0x6ec
    int64_t v33 = v32; // 0x6f2
    if (v32 == v6 * v5) {
        // break -> 0x78b
        goto lab_0x78b;
    }
    goto lab_0x6f8;
  lab_0x475:
    // 0x475
    v27 = *(int64_t *)1162;
    *(int32_t *)v27 = *(int32_t *)&v1;
    v28 = v27 + 480;
    *(int32_t *)v28 = *(int32_t *)(v1 + 4);
    v30 = v27 + 960;
    *(int32_t *)v30 = *(int32_t *)(v1 + 8);
    v31 = v27 + 1440;
    *(int32_t *)v31 = *(int32_t *)(v1 + 12);
    *(int32_t *)(v27 + 4) = *(int32_t *)(v1 + 16);
    *(int32_t *)(v27 + 484) = *(int32_t *)(v1 + 20);
    *(int32_t *)(v27 + 964) = *(int32_t *)(v1 + 24);
    *(int32_t *)(v27 + 1444) = *(int32_t *)(v1 + 28);
    *(int32_t *)(v27 + 8) = *(int32_t *)(v1 + 32);
    *(int32_t *)(v27 + 488) = *(int32_t *)(v1 + 36);
    *(int32_t *)(v27 + 968) = *(int32_t *)(v1 + 40);
    *(int32_t *)(v27 + 1448) = *(int32_t *)(v1 + 44);
    *(int32_t *)(v27 + 12) = *(int32_t *)(v1 + 48);
    *(int32_t *)(v27 + 492) = *(int32_t *)(v1 + 52);
    *(int32_t *)(v27 + 972) = *(int32_t *)(v1 + 56);
    *(int32_t *)(v27 + 1452) = *(int32_t *)(v1 + 60);
    if (!v7) {
        // 0x531
        *(int32_t *)(v27 + 16) = *(int32_t *)(v1 + 64);
        *(int32_t *)(v27 + 496) = *(int32_t *)(v1 + 68);
        *(int32_t *)(v27 + 976) = *(int32_t *)(v1 + 72);
        *(int32_t *)(v27 + 1456) = *(int32_t *)(v1 + 76);
        *(int32_t *)(v27 + 20) = *(int32_t *)(v1 + 80);
        *(int32_t *)(v27 + 500) = *(int32_t *)(v1 + 84);
        *(int32_t *)(v27 + 980) = *(int32_t *)(v1 + 88);
        *(int32_t *)(v27 + 1460) = *(int32_t *)(v1 + 92);
        if (v4 == 0) {
            // 0x57f
            *(int32_t *)(v27 + 24) = *(int32_t *)(v1 + 96);
            *(int32_t *)(v27 + 504) = *(int32_t *)(v1 + 100);
            *(int32_t *)(v27 + 984) = *(int32_t *)(v1 + 104);
            *(int32_t *)(v27 + 1464) = *(int32_t *)(v1 + 108);
            *(int32_t *)(v27 + 28) = *(int32_t *)(v1 + 112);
            *(int32_t *)(v27 + 508) = *(int32_t *)(v1 + 116);
            *(int32_t *)(v27 + 988) = *(int32_t *)(v1 + 120);
            *(int32_t *)(v27 + 1468) = *(int32_t *)(v1 + 124);
        }
    }
    // 0x5c9
    v1 = *(int64_t *)1492;
    int64_t v41 = *(int64_t *)1499 - 4;
    v33 = v3;
    while (true) {
      lab_0x6f8:
        // 0x6f8
        v25 = v33;
        uint64_t v34 = v25 % v3; // 0x6fc
        v29 = 4 * v25;
        if (v34 == 0) {
            int64_t v35 = v29 + v27;
            int32_t v36 = *(int32_t *)(v35 + 476); // 0x5f0
            int32_t v37 = v36 >= 0 ? v36 : v36 + 15; // 0x5fd
            int32_t v38 = *(int32_t *)(64 * (int64_t)(v37 >> 4) + v1 + 4 * (int64_t)(v36 - (v37 & -16))); // 0x61e
            int32_t v39 = *(int32_t *)(v35 + 956); // 0x622
            int32_t v40 = v39 >= 0 ? v39 : v39 + 15; // 0x62f
            v17 = v35;
            v13 = v1;
            v19 = v38 ^ *(int32_t *)(v41 + 0x100000000 * v25 / v3 / 0x40000000);
            v23 = 64 * (int64_t)(v40 >> 4) + v1 + 4 * (int64_t)(v39 - (v40 & -16));
            v10 = *(int32_t *)(v35 - 4);
            v8 = *(int32_t *)(v35 + 1436);
            goto lab_0x65c;
        } else {
            int64_t v42 = v29 + v27;
            int32_t v43 = *(int32_t *)(v42 - 4); // 0x707
            int32_t v44 = *(int32_t *)(v42 + 476); // 0x70c
            int32_t v45 = *(int32_t *)(v42 + 956); // 0x714
            int32_t v46 = *(int32_t *)(v42 + 1436); // 0x71c
            v18 = v42;
            v20 = v43;
            v21 = v46;
            v22 = v45;
            v24 = v44;
            if ((v2 || (char)(v34 != 4)) != 0) {
                goto lab_0x6ae;
            } else {
                int64_t v47 = v43; // 0x707
                int64_t v48 = v44; // 0x70c
                int64_t v49 = v43 >= 0 ? v47 : v47 + 15; // 0x738
                v13 = v1;
                v19 = *(int32_t *)((0x100000000 * (v47 - (v49 & 0xfffffff0)) >> 30) + 64 * (int64_t)((int32_t)v49 >> 4) + v13);
                int64_t v50 = v44 >= 0 ? v48 : v48 + 15; // 0x75c
                v17 = v42;
                v23 = (0x100000000 * (v48 - (v50 & 0xfffffff0)) >> 30) + 64 * (int64_t)((int32_t)v50 >> 4) + v13;
                v10 = v46;
                v8 = v45;
                goto lab_0x65c;
            }
        }
    }
  lab_0x78b:
    // 0x78b
    return 0;
}
void ByteSub_ShiftRow(int32_t * statemt, int32_t nb) {
    int64_t v1 = (int64_t)statemt;
    int64_t v2 = v1;
    int64_t v3; // 0x840
    int64_t v4; // 0x840
    int64_t v5; // 0x840
    int64_t v6; // 0x840
    switch (nb) {
        case 8: {
            int32_t * v7 = (int32_t *)(v1 + 4); // 0x9c6
            int32_t v8 = *v7; // 0x9c6
            int32_t v9 = *(int32_t *)(v1 + 8); // 0x9c9
            int64_t v10 = *(int64_t *)2530; // 0x9db
            int32_t v11 = *(int32_t *)(64 * (int64_t)(v8 >> 4) + v10 + (int64_t)(4 * v8 & 60)); // 0x9e5
            int32_t v12 = *(int32_t *)(v1 + 20); // 0x9e8
            int32_t v13 = *(int32_t *)(64 * (int64_t)(v12 >> 4) + v10 + (int64_t)(4 * v12 & 60)); // 0x9ff
            *v7 = v13;
            int32_t v14 = *(int32_t *)(v2 + 36); // 0xa06
            int32_t v15 = *(int32_t *)(64 * (int64_t)(v14 >> 4) + v10 + (int64_t)(4 * v14 & 60)); // 0xa1d
            *(int32_t *)(v2 + 20) = v15;
            int32_t v16 = *(int32_t *)(v2 + 52); // 0xa24
            int32_t v17 = *(int32_t *)(64 * (int64_t)(v16 >> 4) + v10 + (int64_t)(4 * v16 & 60)); // 0xa3b
            *(int32_t *)(v2 + 36) = v17;
            int32_t v18 = *(int32_t *)(v2 + 68); // 0xa42
            int32_t v19 = *(int32_t *)(64 * (int64_t)(v18 >> 4) + v10 + (int64_t)(4 * v18 & 60)); // 0xa59
            *(int32_t *)(v2 + 52) = v19;
            int32_t v20 = *(int32_t *)(v2 + 84); // 0xa60
            int32_t v21 = *(int32_t *)(64 * (int64_t)(v20 >> 4) + v10 + (int64_t)(4 * v20 & 60)); // 0xa77
            *(int32_t *)(v2 + 68) = v21;
            int32_t v22 = *(int32_t *)(v2 + 100); // 0xa7e
            int32_t v23 = *(int32_t *)(64 * (int64_t)(v22 >> 4) + v10 + (int64_t)(4 * v22 & 60)); // 0xa95
            *(int32_t *)(v2 + 84) = v23;
            int32_t v24 = *(int32_t *)(v2 + 116); // 0xa9c
            int32_t v25 = *(int32_t *)(64 * (int64_t)(v24 >> 4) + v10 + (int64_t)(4 * v24 & 60)); // 0xab3
            *(int32_t *)(v2 + 100) = v25;
            *(int32_t *)(v2 + 116) = v11;
            int32_t v26 = *(int32_t *)(64 * (int64_t)(v9 >> 4) + v10 + (int64_t)(4 * v9 & 60)); // 0xacf
            int32_t v27 = *(int32_t *)(v2 + 56); // 0xad2
            int32_t v28 = *(int32_t *)(64 * (int64_t)(v27 >> 4) + v10 + (int64_t)(4 * v27 & 60)); // 0xae7
            *(int32_t *)(v2 + 8) = v28;
            int32_t v29 = *(int32_t *)(v2 + 104); // 0xaed
            int32_t v30 = *(int32_t *)(64 * (int64_t)(v29 >> 4) + v10 + (int64_t)(4 * v29 & 60)); // 0xb02
            *(int32_t *)(v2 + 56) = v30;
            int32_t v31 = *(int32_t *)(v2 + 24); // 0xb08
            int32_t v32 = *(int32_t *)(64 * (int64_t)(v31 >> 4) + v10 + (int64_t)(4 * v31 & 60)); // 0xb1d
            *(int32_t *)(v2 + 104) = v32;
            int32_t v33 = *(int32_t *)(v2 + 72); // 0xb23
            int32_t v34 = *(int32_t *)(64 * (int64_t)(v33 >> 4) + v10 + (int64_t)(4 * v33 & 60)); // 0xb38
            *(int32_t *)(v2 + 24) = v34;
            int32_t v35 = *(int32_t *)(v2 + 120); // 0xb3e
            int32_t v36 = *(int32_t *)(64 * (int64_t)(v35 >> 4) + v10 + (int64_t)(4 * v35 & 60)); // 0xb53
            *(int32_t *)(v2 + 72) = v36;
            int32_t v37 = *(int32_t *)(v2 + 40); // 0xb59
            int32_t v38 = *(int32_t *)(64 * (int64_t)(v37 >> 4) + v10 + (int64_t)(4 * v37 & 60)); // 0xb6e
            *(int32_t *)(v2 + 120) = v38;
            int32_t v39 = *(int32_t *)(v2 + 88); // 0xb74
            int32_t v40 = *(int32_t *)(64 * (int64_t)(v39 >> 4) + v10 + (int64_t)(4 * v39 & 60)); // 0xb89
            *(int32_t *)(v2 + 40) = v40;
            *(int32_t *)(v2 + 88) = v26;
            int32_t * v41 = (int32_t *)(v2 + 12); // 0xb92
            int32_t v42 = *v41; // 0xb92
            int32_t v43 = *(int32_t *)(v2 + 76); // 0xb95
            int32_t v44 = *(int32_t *)(64 * (int64_t)(v42 >> 4) + v10 + (int64_t)(4 * v42 & 60)); // 0xbaa
            int32_t v45 = *(int32_t *)(64 * (int64_t)(v43 >> 4) + v10 + (int64_t)(4 * v43 & 60)); // 0xbbf
            *v41 = v45;
            *(int32_t *)(v2 + 76) = v44;
            int32_t * v46 = (int32_t *)(v2 + 28); // 0xbc8
            int32_t v47 = *v46; // 0xbc8
            int32_t v48 = *(int32_t *)(v2 + 92); // 0xbcb
            int32_t v49 = *(int32_t *)(64 * (int64_t)(v47 >> 4) + v10 + (int64_t)(4 * v47 & 60)); // 0xbe0
            int32_t v50 = *(int32_t *)(64 * (int64_t)(v48 >> 4) + v10 + (int64_t)(4 * v48 & 60)); // 0xbf5
            *v46 = v50;
            *(int32_t *)(v2 + 92) = v49;
            int32_t * v51 = (int32_t *)(v2 + 44); // 0xbfe
            int32_t v52 = *v51; // 0xbfe
            int32_t v53 = *(int32_t *)(v2 + 108); // 0xc01
            int32_t v54 = *(int32_t *)(64 * (int64_t)(v52 >> 4) + v10 + (int64_t)(4 * v52 & 60)); // 0xc16
            int32_t v55 = *(int32_t *)(64 * (int64_t)(v53 >> 4) + v10 + (int64_t)(4 * v53 & 60)); // 0xc2b
            *v51 = v55;
            *(int32_t *)(v2 + 108) = v54;
            int32_t * v56 = (int32_t *)(v2 + 60); // 0xc34
            int32_t v57 = *v56; // 0xc34
            int32_t v58 = *(int32_t *)(v2 + 124); // 0xc37
            int32_t v59 = *(int32_t *)(64 * (int64_t)(v57 >> 4) + v10 + (int64_t)(4 * v57 & 60)); // 0xc4c
            int32_t v60 = *(int32_t *)(64 * (int64_t)(v58 >> 4) + v10 + (int64_t)(4 * v58 & 60)); // 0xc61
            *v56 = v60;
            *(int32_t *)(v2 + 124) = v59;
            int32_t v61 = *(int32_t *)&v2; // 0xc6a
            int32_t v62 = *(int32_t *)(64 * (int64_t)(v61 >> 4) + v10 + (int64_t)(4 * v61 & 60)); // 0xc7e
            *(int32_t *)v2 = v62;
            int32_t * v63 = (int32_t *)(v2 + 16); // 0xc83
            int32_t v64 = *v63; // 0xc83
            int32_t v65 = *(int32_t *)(64 * (int64_t)(v64 >> 4) + v10 + (int64_t)(4 * v64 & 60)); // 0xc98
            *v63 = v65;
            int32_t * v66 = (int32_t *)(v2 + 32); // 0xc9e
            int32_t v67 = *v66; // 0xc9e
            int32_t v68 = *(int32_t *)(64 * (int64_t)(v67 >> 4) + v10 + (int64_t)(4 * v67 & 60)); // 0xcb3
            *v66 = v68;
            int32_t * v69 = (int32_t *)(v2 + 48); // 0xcb9
            int32_t v70 = *v69; // 0xcb9
            int32_t v71 = *(int32_t *)(64 * (int64_t)(v70 >> 4) + v10 + (int64_t)(4 * v70 & 60)); // 0xcce
            *v69 = v71;
            v4 = 112;
            v5 = 96;
            v6 = 80;
            v3 = v2 + 64;
            // break -> 0xf2f
            break;
        }
        case 6: {
            int32_t * v72 = (int32_t *)(v1 + 4); // 0xcec
            int32_t v73 = *v72; // 0xcec
            int32_t v74 = *(int32_t *)(v1 + 8); // 0xcef
            int64_t v75 = *(int64_t *)3336; // 0xd01
            int32_t v76 = *(int32_t *)(64 * (int64_t)(v73 >> 4) + v75 + (int64_t)(4 * v73 & 60)); // 0xd0b
            int32_t v77 = *(int32_t *)(v1 + 20); // 0xd0e
            int32_t v78 = *(int32_t *)(64 * (int64_t)(v77 >> 4) + v75 + (int64_t)(4 * v77 & 60)); // 0xd25
            *v72 = v78;
            int32_t v79 = *(int32_t *)(v2 + 36); // 0xd2c
            int32_t v80 = *(int32_t *)(64 * (int64_t)(v79 >> 4) + v75 + (int64_t)(4 * v79 & 60)); // 0xd43
            *(int32_t *)(v2 + 20) = v80;
            int32_t v81 = *(int32_t *)(v2 + 52); // 0xd4a
            int32_t v82 = *(int32_t *)(64 * (int64_t)(v81 >> 4) + v75 + (int64_t)(4 * v81 & 60)); // 0xd61
            *(int32_t *)(v2 + 36) = v82;
            int32_t v83 = *(int32_t *)(v2 + 68); // 0xd68
            int32_t v84 = *(int32_t *)(64 * (int64_t)(v83 >> 4) + v75 + (int64_t)(4 * v83 & 60)); // 0xd7f
            *(int32_t *)(v2 + 52) = v84;
            int32_t v85 = *(int32_t *)(v2 + 84); // 0xd86
            int32_t v86 = *(int32_t *)(64 * (int64_t)(v85 >> 4) + v75 + (int64_t)(4 * v85 & 60)); // 0xd9d
            *(int32_t *)(v2 + 68) = v86;
            *(int32_t *)(v2 + 84) = v76;
            int32_t v87 = *(int32_t *)(64 * (int64_t)(v74 >> 4) + v75 + (int64_t)(4 * v74 & 60)); // 0xdb9
            int32_t v88 = *(int32_t *)(v2 + 40); // 0xdbc
            int32_t v89 = *(int32_t *)(64 * (int64_t)(v88 >> 4) + v75 + (int64_t)(4 * v88 & 60)); // 0xdd1
            *(int32_t *)(v2 + 8) = v89;
            int32_t v90 = *(int32_t *)(v2 + 72); // 0xdd7
            int32_t v91 = *(int32_t *)(64 * (int64_t)(v90 >> 4) + v75 + (int64_t)(4 * v90 & 60)); // 0xdec
            *(int32_t *)(v2 + 40) = v91;
            *(int32_t *)(v2 + 72) = v87;
            int32_t * v92 = (int32_t *)(v2 + 24); // 0xdf5
            int32_t v93 = *v92; // 0xdf5
            int32_t v94 = *(int32_t *)(v2 + 56); // 0xdf8
            int32_t v95 = *(int32_t *)(64 * (int64_t)(v93 >> 4) + v75 + (int64_t)(4 * v93 & 60)); // 0xe0d
            int32_t v96 = *(int32_t *)(64 * (int64_t)(v94 >> 4) + v75 + (int64_t)(4 * v94 & 60)); // 0xe22
            *v92 = v96;
            int32_t v97 = *(int32_t *)(v2 + 88); // 0xe28
            int32_t v98 = *(int32_t *)(64 * (int64_t)(v97 >> 4) + v75 + (int64_t)(4 * v97 & 60)); // 0xe3d
            *(int32_t *)(v2 + 56) = v98;
            *(int32_t *)(v2 + 88) = v95;
            int32_t * v99 = (int32_t *)(v2 + 12); // 0xe46
            int32_t v100 = *v99; // 0xe46
            int32_t v101 = *(int32_t *)(v2 + 60); // 0xe49
            int32_t v102 = *(int32_t *)(64 * (int64_t)(v100 >> 4) + v75 + (int64_t)(4 * v100 & 60)); // 0xe5e
            int32_t v103 = *(int32_t *)(64 * (int64_t)(v101 >> 4) + v75 + (int64_t)(4 * v101 & 60)); // 0xe73
            *v99 = v103;
            *(int32_t *)(v2 + 60) = v102;
            int32_t * v104 = (int32_t *)(v2 + 28); // 0xe7c
            int32_t v105 = *v104; // 0xe7c
            int32_t v106 = *(int32_t *)(v2 + 76); // 0xe7f
            int32_t v107 = *(int32_t *)(64 * (int64_t)(v105 >> 4) + v75 + (int64_t)(4 * v105 & 60)); // 0xe94
            int32_t v108 = *(int32_t *)(64 * (int64_t)(v106 >> 4) + v75 + (int64_t)(4 * v106 & 60)); // 0xea9
            *v104 = v108;
            *(int32_t *)(v2 + 76) = v107;
            int32_t * v109 = (int32_t *)(v2 + 44); // 0xeb2
            int32_t v110 = *v109; // 0xeb2
            int32_t v111 = *(int32_t *)(v2 + 92); // 0xeb5
            int32_t v112 = *(int32_t *)(64 * (int64_t)(v110 >> 4) + v75 + (int64_t)(4 * v110 & 60)); // 0xeca
            int32_t v113 = *(int32_t *)(64 * (int64_t)(v111 >> 4) + v75 + (int64_t)(4 * v111 & 60)); // 0xedf
            *v109 = v113;
            *(int32_t *)(v2 + 92) = v112;
            int32_t v114 = *(int32_t *)&v2; // 0xee8
            int32_t v115 = *(int32_t *)(64 * (int64_t)(v114 >> 4) + v75 + (int64_t)(4 * v114 & 60)); // 0xefc
            *(int32_t *)v2 = v115;
            int32_t * v116 = (int32_t *)(v2 + 16); // 0xf01
            int32_t v117 = *v116; // 0xf01
            int32_t v118 = *(int32_t *)(64 * (int64_t)(v117 >> 4) + v75 + (int64_t)(4 * v117 & 60)); // 0xf16
            *v116 = v118;
            v4 = 80;
            v5 = 64;
            v6 = 48;
            v3 = v2 + 32;
            // break -> 0xf2f
            break;
        }
        default: {
            if (nb != 4) {
                // 0xfae
                return;
            }
            int32_t * v119 = (int32_t *)(v1 + 4); // 0x85b
            int32_t v120 = *v119; // 0x85b
            int32_t v121 = *(int32_t *)(v1 + 8); // 0x85e
            int64_t v122 = *(int64_t *)2167; // 0x870
            int32_t v123 = *(int32_t *)(64 * (int64_t)(v120 >> 4) + v122 + (int64_t)(4 * v120 & 60)); // 0x87a
            int32_t v124 = *(int32_t *)(v1 + 20); // 0x87d
            int32_t v125 = *(int32_t *)(64 * (int64_t)(v124 >> 4) + v122 + (int64_t)(4 * v124 & 60)); // 0x894
            *v119 = v125;
            int32_t v126 = *(int32_t *)(v2 + 36); // 0x89b
            int32_t v127 = *(int32_t *)(64 * (int64_t)(v126 >> 4) + v122 + (int64_t)(4 * v126 & 60)); // 0x8b2
            *(int32_t *)(v2 + 20) = v127;
            int32_t v128 = *(int32_t *)(v2 + 52); // 0x8b9
            int32_t v129 = *(int32_t *)(64 * (int64_t)(v128 >> 4) + v122 + (int64_t)(4 * v128 & 60)); // 0x8d0
            *(int32_t *)(v2 + 36) = v129;
            *(int32_t *)(v2 + 52) = v123;
            int32_t v130 = *(int32_t *)(64 * (int64_t)(v121 >> 4) + v122 + (int64_t)(4 * v121 & 60)); // 0x8ec
            int32_t v131 = *(int32_t *)(v2 + 40); // 0x8ef
            int32_t v132 = *(int32_t *)(64 * (int64_t)(v131 >> 4) + v122 + (int64_t)(4 * v131 & 60)); // 0x904
            *(int32_t *)(v2 + 8) = v132;
            *(int32_t *)(v2 + 40) = v130;
            int32_t * v133 = (int32_t *)(v2 + 24); // 0x90d
            int32_t v134 = *v133; // 0x90d
            int32_t v135 = *(int32_t *)(64 * (int64_t)(v134 >> 4) + v122 + (int64_t)(4 * v134 & 60)); // 0x922
            int32_t v136 = *(int32_t *)(v2 + 56); // 0x925
            int32_t v137 = *(int32_t *)(64 * (int64_t)(v136 >> 4) + v122 + (int64_t)(4 * v136 & 60)); // 0x93a
            *v133 = v137;
            *(int32_t *)(v2 + 56) = v135;
            int32_t * v138 = (int32_t *)(v2 + 12); // 0x943
            int32_t v139 = *v138; // 0x943
            int32_t v140 = *(int32_t *)(64 * (int64_t)(v139 >> 4) + v122 + (int64_t)(4 * v139 & 60)); // 0x958
            int32_t v141 = *(int32_t *)(v2 + 60); // 0x95b
            int32_t v142 = *(int32_t *)(64 * (int64_t)(v141 >> 4) + v122 + (int64_t)(4 * v141 & 60)); // 0x970
            *v138 = v142;
            int32_t v143 = *(int32_t *)(v2 + 44); // 0x976
            int32_t v144 = *(int32_t *)(64 * (int64_t)(v143 >> 4) + v122 + (int64_t)(4 * v143 & 60)); // 0x98b
            *(int32_t *)(v2 + 60) = v144;
            int32_t v145 = *(int32_t *)(v2 + 28); // 0x991
            int32_t v146 = *(int32_t *)(64 * (int64_t)(v145 >> 4) + v122 + (int64_t)(4 * v145 & 60)); // 0x9a6
            *(int32_t *)(v2 + 44) = v146;
            *(int32_t *)(v2 + 28) = v140;
            v4 = 48;
            v5 = 32;
            v6 = 16;
            v3 = v2;
            // break -> 0xf2f
            break;
        }
    }
    int32_t * v147 = (int32_t *)v3; // 0xf2f
    int32_t v148 = *v147; // 0xf2f
    int64_t v149 = *(int64_t *)3914; // 0xf43
    int32_t v150 = *(int32_t *)(64 * (int64_t)(v148 >> 4) + v149 + (int64_t)(4 * v148 & 60)); // 0xf4d
    *v147 = v150;
    int32_t * v151 = (int32_t *)(v2 + v6); // 0xf54
    int32_t v152 = *v151; // 0xf54
    int32_t v153 = *(int32_t *)(64 * (int64_t)(v152 >> 4) + v149 + (int64_t)(4 * v152 & 60)); // 0xf6d
    *v151 = v153;
    int32_t * v154 = (int32_t *)(v2 + v5); // 0xf75
    int32_t v155 = *v154; // 0xf75
    int32_t v156 = *(int32_t *)(64 * (int64_t)(v155 >> 4) + v149 + (int64_t)(4 * v155 & 60)); // 0xf8c
    *v154 = v156;
    int32_t * v157 = (int32_t *)(v2 + v4); // 0xf93
    int32_t v158 = *v157; // 0xf93
    int32_t v159 = *(int32_t *)(64 * (int64_t)(v158 >> 4) + v149 + (int64_t)(4 * v158 & 60)); // 0xfa8
    *v157 = v159;
}
int32_t MixColumn_AddRoundKey(int32_t * statemt, uint32_t nb, int32_t n) {
    if ((int32_t)nb < 1) {
        // 0x145d
        return 0;
    }
    int64_t v1 = nb;
    int64_t v2 = (int64_t)statemt;
    int64_t v3; // bp-8, 0xfb0
    int64_t v4 = &v3; // 0xfb0
    int64_t v5 = 0x100000000 * v1 * (int64_t)n >> 32; // 0xfbc
    int64_t v6 = v1 & 0xffffffff; // 0xfbf
    int64_t v7; // 0xfb0
    int64_t v8; // 0xfb0
    if (nb >= 4) {
        int64_t v9 = v1 & 0xfffffffc; // 0xfcf
        int128_t v10 = __asm_movdqa(g5); // 0xfd5
        int128_t v11 = __asm_movdqa(g6); // 0xfdd
        int128_t v12 = __asm_movdqa(g7); // 0xfe5
        int128_t v13 = __asm_movdqa(g8); // 0xfed
        int128_t v14 = __asm_movdqa(g9); // 0xff5
        int64_t v15 = v4 - 128;
        int64_t v16 = 0; // 0x1004
        int64_t v17 = 16 * v16; // 0x1013
        int64_t v18 = v17 + v2;
        int128_t v19 = __asm_movdqu(*(int128_t *)v18); // 0x1017
        int128_t v20 = __asm_movdqu(*(int128_t *)(v18 + 16)); // 0x101d
        int128_t v21 = __asm_movdqu(*(int128_t *)(v18 + 32)); // 0x1024
        int128_t v22 = __asm_movdqu(*(int128_t *)(v18 + 48)); // 0x102b
        int128_t v23 = __asm_punpckldq(__asm_movdqa(v21), v22); // 0x1037
        int128_t v24 = __asm_punpckldq(__asm_movdqa(v19), v20); // 0x1041
        int128_t v25 = __asm_punpcklqdq(__asm_movdqa(v24), v23); // 0x104b
        int128_t v26 = __asm_punpckhqdq(v24, v23); // 0x1050
        int128_t v27 = __asm_punpckhdq(v21, v22); // 0x1055
        int128_t v28 = __asm_punpckhdq(v19, v20); // 0x105a
        int128_t v29 = __asm_punpcklqdq(__asm_movdqa(v28), v27); // 0x1063
        int128_t v30 = __asm_punpckhqdq(v28, v27); // 0x1068
        int128_t v31 = __asm_paddd(__asm_movdqa(v25), v25); // 0x1071
        int128_t v32 = __asm_pcmpeqd(__asm_pand(__asm_movdqa(v25), v10), v11); // 0x107f
        int128_t v33 = __asm_por(__asm_pandn(v32, v31), __asm_pand(__asm_pxor(__asm_movdqa(v31), v12), v32)); // 0x1098
        int128_t v34 = __asm_paddd(__asm_movdqa(v26), v26); // 0x10a2
        int128_t v35 = __asm_pxor(__asm_movdqa(v34), v26); // 0x10ac
        int128_t v36 = __asm_pcmpeqd(__asm_pand(__asm_movdqa(v35), v13), v14); // 0x10bb
        int128_t v37 = __asm_pxor(v35, v33); // 0x10c0
        int128_t v38 = __asm_por(__asm_pand(__asm_pxor(v37, v12), v36), __asm_pandn(__asm_movdqa(v36), v37)); // 0x10d9
        int64_t v39 = 4 * (v16 + v5) + *(int64_t *)0x1004;
        int128_t v40 = __asm_pxor(__asm_pxor(__asm_pxor(__asm_movdqu(*(int128_t *)v39), v29), v30), v38); // 0x10f2
        int128_t v41 = __asm_pxor(__asm_pxor(__asm_movdqu(*(int128_t *)(v39 + 960)), v25), v26); // 0x1106
        int128_t v42 = __asm_pxor(__asm_movdqu(*(int128_t *)(v39 + 1440)), v26); // 0x1115
        int128_t v43 = __asm_pcmpeqd(__asm_pand(v26, v10), v11); // 0x111f
        int128_t v44 = __asm_por(__asm_pand(__asm_pxor(v34, v12), v43), __asm_pandn(__asm_movdqa(v43), v34)); // 0x1138
        int128_t v45 = __asm_paddd(__asm_movdqa(v29), v29); // 0x1142
        int128_t v46 = __asm_pxor(__asm_movdqa(v45), v29); // 0x114c
        int128_t v47 = __asm_pcmpeqd(__asm_pand(__asm_movdqa(v46), v13), v14); // 0x115b
        int128_t v48 = __asm_pxor(v46, v44); // 0x1160
        int128_t v49 = __asm_pandn(__asm_movdqa(v47), v48); // 0x116a
        int128_t v50 = __asm_pand(__asm_pxor(v48, v12), v47); // 0x1174
        int128_t v51 = __asm_movdqu(*(int128_t *)(v39 + 480)); // 0x1179
        int128_t v52 = __asm_pxor(__asm_pxor(__asm_pxor(v51, v25), v30), __asm_por(v50, v49)); // 0x1192
        int128_t v53 = __asm_pxor(v42, v29); // 0x1197
        int128_t v54 = __asm_pcmpeqd(__asm_pand(v29, v10), v11); // 0x11a1
        int128_t v55 = __asm_por(__asm_pand(__asm_pxor(v45, v12), v54), __asm_pandn(__asm_movdqa(v54), v45)); // 0x11ba
        int128_t v56 = __asm_paddd(__asm_movdqa(v30), v30); // 0x11c4
        int128_t v57 = __asm_pxor(__asm_movdqa(v56), v30); // 0x11ce
        int128_t v58 = __asm_pcmpeqd(__asm_pand(__asm_movdqa(v57), v13), v14); // 0x11dd
        int128_t v59 = __asm_pxor(v57, v55); // 0x11e2
        int128_t v60 = __asm_pandn(__asm_movdqa(v58), v59); // 0x11ec
        int128_t v61 = __asm_pxor(v41, __asm_por(__asm_pand(__asm_pxor(v59, v12), v58), v60)); // 0x1200
        int128_t v62 = __asm_pcmpeqd(__asm_pand(v30, v10), v11); // 0x1209
        int128_t v63 = __asm_por(__asm_pand(__asm_pxor(v56, v12), v62), __asm_pandn(__asm_movdqa(v62), v56)); // 0x1221
        int128_t v64 = __asm_pxor(v31, v25); // 0x1226
        int128_t v65 = __asm_pxor(v63, v64); // 0x122a
        int128_t v66 = __asm_pcmpeqd(__asm_pand(v64, v13), v14); // 0x1233
        int128_t v67 = __asm_pandn(__asm_movdqa(v66), v65); // 0x123b
        int128_t v68 = __asm_pxor(v53, __asm_por(__asm_pand(__asm_pxor(v65, v12), v66), v67)); // 0x124f
        int128_t v69 = __asm_punpckldq(__asm_movdqa(v61), v68); // 0x1259
        int128_t v70 = __asm_punpckldq(__asm_movdqa(v40), v52); // 0x1263
        int128_t v71 = __asm_punpckhqdq(__asm_movdqa(v70), v69); // 0x126c
        int128_t v72 = __asm_punpcklqdq(v70, v69); // 0x1270
        int128_t v73 = __asm_punpckhdq(v61, v68); // 0x1274
        int128_t v74 = __asm_punpckhdq(v40, v52); // 0x1279
        int128_t v75 = __asm_punpckhqdq(__asm_movdqa(v74), v73); // 0x1283
        int64_t v76 = __asm_movdqa_1(__asm_punpcklqdq(v74, v73)); // 0x128d
        int64_t v77 = v17 + v4;
        *(int128_t *)(v77 - 96) = (int128_t)v76;
        *(int128_t *)(v77 - 80) = (int128_t)__asm_movdqa_1(v75);
        *(int128_t *)(v17 + v15) = (int128_t)__asm_movdqa_1(v72);
        *(int128_t *)(v77 - 112) = (int128_t)__asm_movdqa_1(v71);
        v16 += 4;
        while (v16 != v9) {
            // 0x1010
            v17 = 16 * v16;
            v18 = v17 + v2;
            v19 = __asm_movdqu(*(int128_t *)v18);
            v20 = __asm_movdqu(*(int128_t *)(v18 + 16));
            v21 = __asm_movdqu(*(int128_t *)(v18 + 32));
            v22 = __asm_movdqu(*(int128_t *)(v18 + 48));
            v23 = __asm_punpckldq(__asm_movdqa(v21), v22);
            v24 = __asm_punpckldq(__asm_movdqa(v19), v20);
            v25 = __asm_punpcklqdq(__asm_movdqa(v24), v23);
            v26 = __asm_punpckhqdq(v24, v23);
            v27 = __asm_punpckhdq(v21, v22);
            v28 = __asm_punpckhdq(v19, v20);
            v29 = __asm_punpcklqdq(__asm_movdqa(v28), v27);
            v30 = __asm_punpckhqdq(v28, v27);
            v31 = __asm_paddd(__asm_movdqa(v25), v25);
            v32 = __asm_pcmpeqd(__asm_pand(__asm_movdqa(v25), v10), v11);
            v33 = __asm_por(__asm_pandn(v32, v31), __asm_pand(__asm_pxor(__asm_movdqa(v31), v12), v32));
            v34 = __asm_paddd(__asm_movdqa(v26), v26);
            v35 = __asm_pxor(__asm_movdqa(v34), v26);
            v36 = __asm_pcmpeqd(__asm_pand(__asm_movdqa(v35), v13), v14);
            v37 = __asm_pxor(v35, v33);
            v38 = __asm_por(__asm_pand(__asm_pxor(v37, v12), v36), __asm_pandn(__asm_movdqa(v36), v37));
            v39 = 4 * (v16 + v5) + *(int64_t *)0x1004;
            v40 = __asm_pxor(__asm_pxor(__asm_pxor(__asm_movdqu(*(int128_t *)v39), v29), v30), v38);
            v41 = __asm_pxor(__asm_pxor(__asm_movdqu(*(int128_t *)(v39 + 960)), v25), v26);
            v42 = __asm_pxor(__asm_movdqu(*(int128_t *)(v39 + 1440)), v26);
            v43 = __asm_pcmpeqd(__asm_pand(v26, v10), v11);
            v44 = __asm_por(__asm_pand(__asm_pxor(v34, v12), v43), __asm_pandn(__asm_movdqa(v43), v34));
            v45 = __asm_paddd(__asm_movdqa(v29), v29);
            v46 = __asm_pxor(__asm_movdqa(v45), v29);
            v47 = __asm_pcmpeqd(__asm_pand(__asm_movdqa(v46), v13), v14);
            v48 = __asm_pxor(v46, v44);
            v49 = __asm_pandn(__asm_movdqa(v47), v48);
            v50 = __asm_pand(__asm_pxor(v48, v12), v47);
            v51 = __asm_movdqu(*(int128_t *)(v39 + 480));
            v52 = __asm_pxor(__asm_pxor(__asm_pxor(v51, v25), v30), __asm_por(v50, v49));
            v53 = __asm_pxor(v42, v29);
            v54 = __asm_pcmpeqd(__asm_pand(v29, v10), v11);
            v55 = __asm_por(__asm_pand(__asm_pxor(v45, v12), v54), __asm_pandn(__asm_movdqa(v54), v45));
            v56 = __asm_paddd(__asm_movdqa(v30), v30);
            v57 = __asm_pxor(__asm_movdqa(v56), v30);
            v58 = __asm_pcmpeqd(__asm_pand(__asm_movdqa(v57), v13), v14);
            v59 = __asm_pxor(v57, v55);
            v60 = __asm_pandn(__asm_movdqa(v58), v59);
            v61 = __asm_pxor(v41, __asm_por(__asm_pand(__asm_pxor(v59, v12), v58), v60));
            v62 = __asm_pcmpeqd(__asm_pand(v30, v10), v11);
            v63 = __asm_por(__asm_pand(__asm_pxor(v56, v12), v62), __asm_pandn(__asm_movdqa(v62), v56));
            v64 = __asm_pxor(v31, v25);
            v65 = __asm_pxor(v63, v64);
            v66 = __asm_pcmpeqd(__asm_pand(v64, v13), v14);
            v67 = __asm_pandn(__asm_movdqa(v66), v65);
            v68 = __asm_pxor(v53, __asm_por(__asm_pand(__asm_pxor(v65, v12), v66), v67));
            v69 = __asm_punpckldq(__asm_movdqa(v61), v68);
            v70 = __asm_punpckldq(__asm_movdqa(v40), v52);
            v71 = __asm_punpckhqdq(__asm_movdqa(v70), v69);
            v72 = __asm_punpcklqdq(v70, v69);
            v73 = __asm_punpckhdq(v61, v68);
            v74 = __asm_punpckhdq(v40, v52);
            v75 = __asm_punpckhqdq(__asm_movdqa(v74), v73);
            v76 = __asm_movdqa_1(__asm_punpcklqdq(v74, v73));
            v77 = v17 + v4;
            *(int128_t *)(v77 - 96) = (int128_t)v76;
            *(int128_t *)(v77 - 80) = (int128_t)__asm_movdqa_1(v75);
            *(int128_t *)(v17 + v15) = (int128_t)__asm_movdqa_1(v72);
            *(int128_t *)(v77 - 112) = (int128_t)__asm_movdqa_1(v71);
            v16 += 4;
        }
        // 0x12b6
        v7 = v15;
        v8 = v9;
        if (v9 == v6) {
            goto lab_0x13c4;
        } else {
            goto lab_0x12bf;
        }
    } else {
        // 0xfb9
        v7 = v4 - 128;
        v8 = 0;
        goto lab_0x12bf;
    }
  lab_0x13c4:;
    int64_t v78 = 0; // 0x13cc
    if (nb >= 4) {
        int64_t v79 = v4 - 128; // 0x13e7
        int64_t v80 = 0; // 0x13d9
        int64_t v81 = 16 * v80; // 0x13e3
        __asm_movups(*(int128_t *)(v81 + v2), __asm_movaps(*(int128_t *)(v81 + v79)));
        int64_t v82 = v81 | 16; // 0x13f5
        __asm_movups(*(int128_t *)(v82 + v2), __asm_movaps(*(int128_t *)(v82 + v79)));
        int64_t v83 = v81 | 32; // 0x1407
        __asm_movups(*(int128_t *)(v83 + v2), __asm_movaps(*(int128_t *)(v83 + v79)));
        int64_t v84 = v81 | 48; // 0x1416
        int64_t v85 = __asm_movdqu_2(__asm_movdqa(*(int128_t *)(v84 + v79))); // 0x1421
        *(int128_t *)(v84 + v2) = (int128_t)v85;
        v80 += 4;
        v78 = v80;
        while (v80 != (v1 & 0xfffffffc)) {
            // 0x13e0
            v81 = 16 * v80;
            __asm_movups(*(int128_t *)(v81 + v2), __asm_movaps(*(int128_t *)(v81 + v79)));
            v82 = v81 | 16;
            __asm_movups(*(int128_t *)(v82 + v2), __asm_movaps(*(int128_t *)(v82 + v79)));
            v83 = v81 | 32;
            __asm_movups(*(int128_t *)(v83 + v2), __asm_movaps(*(int128_t *)(v83 + v79)));
            v84 = v81 | 48;
            v85 = __asm_movdqu_2(__asm_movdqa(*(int128_t *)(v84 + v79)));
            *(int128_t *)(v84 + v2) = (int128_t)v85;
            v80 += 4;
            v78 = v80;
        }
    }
    int64_t v86 = v1 & 3; // 0x13c6
    if (v86 == 0) {
        // 0x145d
        return 0;
    }
    int64_t v87 = v78; // 0xfb0
    int64_t v88 = 16 * v87; // 0x1443
    int128_t v89 = *(int128_t *)(v4 - 128 + v88); // 0x1447
    *(int128_t *)(v88 + v2) = (int128_t)__asm_movdqu_2(__asm_movdqa(v89));
    int64_t v90 = 1; // 0x1455
    int64_t v91 = v90; // 0x145b
    v87++;
    while (v90 != v86) {
        // 0x1440
        v88 = 16 * v87;
        v89 = *(int128_t *)(v4 - 128 + v88);
        *(int128_t *)(v88 + v2) = (int128_t)__asm_movdqu_2(__asm_movdqa(v89));
        v90 = v91 + 1;
        v91 = v90;
        v87++;
    }
    // 0x145d
    return 0;
  lab_0x12bf:;
    int128_t v92 = __asm_movdqa(g5); // 0x12c6
    int128_t v93 = __asm_movdqa(g6); // 0x12ce
    int128_t v94 = __asm_movdqa(g7); // 0x12d6
    int128_t v95 = __asm_movdqa(g8); // 0x12de
    int128_t v96 = __asm_movdqa(g9); // 0x12e6
    int64_t v97 = 16 * v8; // 0x12f3
    int128_t v98 = __asm_movdqu(*(int128_t *)(v97 + v2)); // 0x12f7
    int128_t v99 = __asm_pshufd(v98, 57); // 0x12fd
    int128_t v100 = __asm_paddd(__asm_movdqa(v99), v99); // 0x1306
    int128_t v101 = __asm_pshufd(v98, 66); // 0x130a
    int128_t v102 = __asm_pshufd(v98, -97); // 0x1310
    int128_t v103 = __asm_pcmpeqd(__asm_pand(v98, v92), v93); // 0x131a
    int128_t v104 = __asm_pshufd(v100, -109); // 0x131e
    int128_t v105 = __asm_por(__asm_pand(__asm_pxor(v104, v94), v103), __asm_pandn(__asm_movdqa(v103), v104)); // 0x133c
    int128_t v106 = __asm_pxor(v100, v99); // 0x1341
    int128_t v107 = __asm_pxor(v105, v106); // 0x1345
    int128_t v108 = __asm_pcmpeqd(__asm_pand(v106, v95), v96); // 0x134e
    int128_t v109 = __asm_por(__asm_pand(__asm_pxor(v107, v94), v108), __asm_pandn(__asm_movdqa(v108), v107)); // 0x1365
    int64_t v110 = 4 * (v8 + v5) + *(int64_t *)0x12c6;
    int128_t v111 = __asm_movd(*(int32_t *)(v110 + 1440)); // 0x136a
    int128_t v112 = __asm_punpckldq(__asm_movd(*(int32_t *)(v110 + 960)), v111); // 0x137e
    int128_t v113 = __asm_movd(*(int32_t *)(v110 + 480)); // 0x1382
    int128_t v114 = __asm_movd(*(int32_t *)v110); // 0x138c
    int128_t v115 = __asm_pxor(v102, __asm_pxor(v101, __asm_punpcklqdq(__asm_punpckldq(v114, v113), v112))); // 0x139f
    int64_t v116 = __asm_movdqa_1(__asm_pxor(v115, v109)); // 0x13a9
    *(int128_t *)(v97 + v7) = (int128_t)v116;
    int64_t v117 = v8 + 1; // 0x13b0
    int64_t v118 = v117; // 0x13b6
    while (v117 != v6) {
        // 0x12f0
        v97 = 16 * v118;
        v98 = __asm_movdqu(*(int128_t *)(v97 + v2));
        v99 = __asm_pshufd(v98, 57);
        v100 = __asm_paddd(__asm_movdqa(v99), v99);
        v101 = __asm_pshufd(v98, 66);
        v102 = __asm_pshufd(v98, -97);
        v103 = __asm_pcmpeqd(__asm_pand(v98, v92), v93);
        v104 = __asm_pshufd(v100, -109);
        v105 = __asm_por(__asm_pand(__asm_pxor(v104, v94), v103), __asm_pandn(__asm_movdqa(v103), v104));
        v106 = __asm_pxor(v100, v99);
        v107 = __asm_pxor(v105, v106);
        v108 = __asm_pcmpeqd(__asm_pand(v106, v95), v96);
        v109 = __asm_por(__asm_pand(__asm_pxor(v107, v94), v108), __asm_pandn(__asm_movdqa(v108), v107));
        v110 = 4 * (v118 + v5) + *(int64_t *)0x12c6;
        v111 = __asm_movd(*(int32_t *)(v110 + 1440));
        v112 = __asm_punpckldq(__asm_movd(*(int32_t *)(v110 + 960)), v111);
        v113 = __asm_movd(*(int32_t *)(v110 + 480));
        v114 = __asm_movd(*(int32_t *)v110);
        v115 = __asm_pxor(v102, __asm_pxor(v101, __asm_punpcklqdq(__asm_punpckldq(v114, v113), v112)));
        v116 = __asm_movdqa_1(__asm_pxor(v115, v109));
        *(int128_t *)(v97 + v7) = (int128_t)v116;
        v117 = v118 + 1;
        v118 = v117;
    }
    goto lab_0x13c4;
}
int64_t AddRoundKey(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a2; // 0x79b
    int64_t v2; // 0x790
    if (v1 > 0x2eeff) {
        switch (v1) {
            case 0x2ef00: {
                // 0x7d6
                v2 = 8;
                goto lab_0x7db;
            }
            case 0x3e900: {
                // 0x7d6
                v2 = 8;
                goto lab_0x7db;
            }
            default: {
                // 0x7c7
                v2 = 4;
                if (v1 != 0x3e8c0) {
                    goto lab_0x7db;
                } else {
                    // 0x7cf
                    v2 = 6;
                    goto lab_0x7db;
                }
            }
        }
    } else {
        // 0x79d
        v2 = 4;
        switch (v1) {
            case 0x1f4c0: {
                // 0x7cf
                v2 = 6;
                goto lab_0x7db;
            }
            case 0x1f500: {
                // 0x7d6
                v2 = 8;
                goto lab_0x7db;
            }
            case 0x2eec0: {
                // 0x7cf
                v2 = 6;
                goto lab_0x7db;
            }
            default: {
                goto lab_0x7db;
            }
        }
    }
  lab_0x7db:;
    int64_t v3 = 0; // 0x7ec
    int64_t v4 = 4 * (v3 + (0x100000000 * a3 * v2 >> 32)) + *(int64_t *)2028;
    int64_t v5 = 16 * v3 + a1;
    int32_t * v6 = (int32_t *)v5; // 0x7ff
    *v6 = *v6 ^ *(int32_t *)v4;
    int32_t * v7 = (int32_t *)(v5 + 4); // 0x80b
    *v7 = *v7 ^ *(int32_t *)(v4 + 480);
    int32_t * v8 = (int32_t *)(v5 + 8); // 0x818
    *v8 = *v8 ^ *(int32_t *)(v4 + 960);
    int32_t * v9 = (int32_t *)(v5 + 12); // 0x825
    *v9 = *v9 ^ *(int32_t *)(v4 + 1440);
    int64_t v10 = v3 + 1; // 0x82a
    v3 = v10;
    while (v10 != v2) {
        // 0x7f0
        v4 = 4 * (v3 + (0x100000000 * a3 * v2 >> 32)) + *(int64_t *)2028;
        v5 = 16 * v3 + a1;
        v6 = (int32_t *)v5;
        *v6 = *v6 ^ *(int32_t *)v4;
        v7 = (int32_t *)(v5 + 4);
        *v7 = *v7 ^ *(int32_t *)(v4 + 480);
        v8 = (int32_t *)(v5 + 8);
        *v8 = *v8 ^ *(int32_t *)(v4 + 960);
        v9 = (int32_t *)(v5 + 12);
        *v9 = *v9 ^ *(int32_t *)(v4 + 1440);
        v10 = v3 + 1;
        v3 = v10;
    }
    // 0x832
    return 0;
}
int32_t decrypt(int32_t * statemt, int32_t * key, int32_t type) {
    // 0x1470
    int128_t v1; // 0x1470
    int128_t v2 = v1;
    KeySchedule(type, key);
    int64_t v3; // 0x1470
    int64_t v4; // 0x1470
    if (type < 0x2eec0) {
        if (type > 0x1f4ff) {
            if (type == 0x1f500) {
                goto lab_0x1576;
            } else {
                if (type != 0x2ee80) {
                    // 0x1610
                    return *(int32_t *)*(int64_t *)0x160e;
                }
                // 0x1529
                *(int32_t *)*(int64_t *)0x1530 = 12;
                *(int32_t *)*(int64_t *)0x153d = 4;
                v3 = 12;
                v4 = 4;
                goto lab_0x1653;
            }
        } else {
            switch (type) {
                case 0x1f480: {
                    // 0x15e1
                    *(int32_t *)*(int64_t *)0x15e8 = 10;
                    *(int32_t *)*(int64_t *)0x15f5 = 4;
                    v3 = 10;
                    v4 = 4;
                    goto lab_0x1653;
                }
                case 0x1f4c0: {
                    goto lab_0x1552;
                }
                default: {
                    return *(int32_t *)*(int64_t *)0x160e;
                }
            }
        }
    } else {
        if (type < 0x3e880) {
            switch (type) {
                case 0x2eec0: {
                    goto lab_0x1552;
                }
                case 0x2ef00: {
                    goto lab_0x1576;
                }
                default: {
                    return *(int32_t *)*(int64_t *)0x160e;
                }
            }
        } else {
            switch (type) {
                case 0x3e880: {
                    // 0x1597
                    *(int32_t *)*(int64_t *)0x159e = 14;
                    *(int32_t *)*(int64_t *)0x15ab = 4;
                    v3 = 14;
                    v4 = 4;
                    // break -> 0x1653
                    break;
                }
                case 0x3e8c0: {
                    // 0x15c0
                    *(int32_t *)*(int64_t *)0x15c7 = 14;
                    *(int32_t *)*(int64_t *)0x15d4 = 6;
                    v3 = 14;
                    v4 = 6;
                    // break -> 0x1653
                    break;
                }
                default: {
                    if (type != 0x3e900) {
                        // 0x1607
                    }
                    // 0x14bb
                    *(int32_t *)*(int64_t *)0x14c2 = 14;
                    *(int32_t *)*(int64_t *)0x14cf = 8;
                    v3 = 14;
                    v4 = 8;
                    // break -> 0x1653
                    break;
                }
            }
            goto lab_0x1653;
        }
    }
  lab_0x1576:
    // 0x1576
    *(int32_t *)*(int64_t *)0x157d = 14;
    *(int32_t *)*(int64_t *)0x158a = 8;
    // 0x1610
    return 14;
  lab_0x1552:
    // 0x1552
    *(int32_t *)*(int64_t *)0x1559 = 12;
    *(int32_t *)*(int64_t *)0x1566 = 6;
    // 0x1610
    return 12;
  lab_0x1653:;
    int64_t v5 = (int64_t)statemt;
    int64_t v6 = *(int64_t *)0x1663; // 0x165c
    int64_t v7 = v6 + 480; // 0x1683
    int64_t v8 = v5 + 4; // 0x168b
    int64_t v9 = v6 + 960; // 0x1690
    int64_t v10 = v5 + 8; // 0x1698
    int64_t v11 = v6 + 1440; // 0x169d
    int64_t v12 = v5 + 12; // 0x16a5
    int64_t v13 = 0; // 0x1663
    int64_t v14 = 4 * (v13 + v4 * v3); // 0x1674
    int64_t v15 = 16 * v13; // 0x167b
    int32_t * v16 = (int32_t *)(v15 + v5); // 0x167f
    *v16 = *v16 ^ *(int32_t *)(v14 + v6);
    int32_t * v17 = (int32_t *)(v15 + v8); // 0x168b
    *v17 = *v17 ^ *(int32_t *)(v14 + v7);
    int32_t * v18 = (int32_t *)(v15 + v10); // 0x1698
    *v18 = *v18 ^ *(int32_t *)(v14 + v9);
    int32_t * v19 = (int32_t *)(v15 + v12); // 0x16a5
    *v19 = *v19 ^ *(int32_t *)(v14 + v11);
    int64_t v20 = v13 + 1; // 0x16aa
    v13 = v20;
    while (v20 != v4) {
        // 0x1670
        v14 = 4 * (v13 + v4 * v3);
        v15 = 16 * v13;
        v16 = (int32_t *)(v15 + v5);
        *v16 = *v16 ^ *(int32_t *)(v14 + v6);
        v17 = (int32_t *)(v15 + v8);
        *v17 = *v17 ^ *(int32_t *)(v14 + v7);
        v18 = (int32_t *)(v15 + v10);
        *v18 = *v18 ^ *(int32_t *)(v14 + v9);
        v19 = (int32_t *)(v15 + v12);
        *v19 = *v19 ^ *(int32_t *)(v14 + v11);
        v20 = v13 + 1;
        v13 = v20;
    }
    int32_t * v21 = (int32_t *)*(int64_t *)0x16b9; // 0x16b9
    InversShiftRow_ByteSub(statemt, *v21);
    uint32_t v22 = *(int32_t *)*(int64_t *)0x16cc; // 0x16cc
    if (v22 >= 2) {
        uint64_t v23 = (int64_t)v22;
        int64_t v24 = v23 + 0xffffffff; // 0x16e0
        AddRoundKey_InversMixColumn(statemt, *v21, (int32_t)v24);
        InversShiftRow_ByteSub(statemt, *v21);
        while (v23 >= 3) {
            // 0x16e0
            v23 = v24 & 0xffffffff;
            v24 = v23 + 0xffffffff;
            AddRoundKey_InversMixColumn(statemt, *v21, (int32_t)v24);
            InversShiftRow_ByteSub(statemt, *v21);
        }
    }
    int64_t v25; // 0x1470
    if (type > 0x2eeff) {
        switch (type) {
            case 0x2ef00: {
                // 0x174e
                v25 = 8;
                goto lab_0x1753;
            }
            case 0x3e900: {
                // 0x174e
                v25 = 8;
                goto lab_0x1753;
            }
            default: {
                // 0x173f
                v25 = 4;
                if (type != 0x3e8c0) {
                    goto lab_0x1753;
                } else {
                    // 0x1747
                    v25 = 6;
                    goto lab_0x1753;
                }
            }
        }
    } else {
        // 0x1715
        v25 = 4;
        switch (type) {
            case 0x1f4c0: {
                // 0x1747
                v25 = 6;
                goto lab_0x1753;
            }
            case 0x1f500: {
                // 0x174e
                v25 = 8;
                goto lab_0x1753;
            }
            case 0x2eec0: {
                // 0x1747
                v25 = 6;
                goto lab_0x1753;
            }
            default: {
                goto lab_0x1753;
            }
        }
    }
  lab_0x1753:;
    int64_t v26 = 0; // 0x1755
    int64_t v27 = 4 * v26; // 0x1760
    int64_t v28 = 16 * v26; // 0x1767
    int32_t * v29 = (int32_t *)(v28 + v5); // 0x176b
    *v29 = *v29 ^ *(int32_t *)(v27 + v6);
    int32_t * v30 = (int32_t *)(v28 + v8); // 0x1776
    *v30 = *v30 ^ *(int32_t *)(v27 + v7);
    int32_t * v31 = (int32_t *)(v28 + v10); // 0x1782
    *v31 = *v31 ^ *(int32_t *)(v27 + v9);
    int32_t * v32 = (int32_t *)(v28 + v12); // 0x178e
    *v32 = *v32 ^ *(int32_t *)(v27 + v11);
    int64_t v33 = v26 + 1; // 0x1792
    v26 = v33;
    while (v33 != v25) {
        // 0x1760
        v27 = 4 * v26;
        v28 = 16 * v26;
        v29 = (int32_t *)(v28 + v5);
        *v29 = *v29 ^ *(int32_t *)(v27 + v6);
        v30 = (int32_t *)(v28 + v8);
        *v30 = *v30 ^ *(int32_t *)(v27 + v7);
        v31 = (int32_t *)(v28 + v10);
        *v31 = *v31 ^ *(int32_t *)(v27 + v9);
        v32 = (int32_t *)(v28 + v12);
        *v32 = *v32 ^ *(int32_t *)(v27 + v11);
        v33 = v26 + 1;
        v26 = v33;
    }
    // 0x179a
    int64_t v34; // 0x1470
    int128_t v35 = __asm_movdqu(*(int128_t *)&v34); // 0x17a1
    int128_t v36 = __asm_movdqu(*(int128_t *)(v5 + 16)); // 0x17a5
    int128_t v37 = __asm_movdqu(*(int128_t *)(v5 + 32)); // 0x17aa
    int128_t v38 = __asm_pcmpeqd(__asm_movdqu(*(int128_t *)(v5 + 48)), g10); // 0x17b4
    int128_t v39 = __asm_pcmpeqd(v2, v2); // 0x17bc
    int128_t v40 = __asm_packssdw(__asm_pxor(__asm_pcmpeqd(v37, g11), v39), __asm_pxor(v38, v39)); // 0x17d0
    int128_t v41 = __asm_pxor(__asm_pcmpeqd(v36, g12), v39); // 0x17dc
    int128_t v42 = __asm_pcmpeqd(v35, g13); // 0x17e0
    uint32_t v43 = __asm_pmovmskb(__asm_packsswb(__asm_packssdw(__asm_pxor(v42, v39), v41), v40)); // 0x17f4
    uint32_t v44 = v43 - (v43 / 2 & 0x5555); // 0x1802
    uint32_t v45 = (v44 / 4 & 0x3333) + (v44 & 0x3333); // 0x1815
    uint32_t v46 = v45 / 16 + v45 & 3855; // 0x181e
    int32_t * v47 = (int32_t *)*(int64_t *)0x17a1; // 0x182e
    *v47 = (v46 / 256 + v46 & 31) + *v47;
    return 0;
}
void InversShiftRow_ByteSub(int32_t * statemt, int32_t nb) {
    int64_t v1 = (int64_t)statemt;
    int64_t v2 = v1;
    int64_t v3; // 0x1850
    int64_t v4; // 0x1850
    int64_t v5; // 0x1850
    int64_t v6; // 0x1850
    switch (nb) {
        case 8: {
            int32_t * v7 = (int32_t *)(v1 + 116); // 0x19d3
            int32_t v8 = *v7; // 0x19d3
            int64_t v9 = *(int64_t *)0x19ec; // 0x19e5
            int32_t v10 = *(int32_t *)(64 * (int64_t)(v8 >> 4) + v9 + (int64_t)(4 * v8 & 60)); // 0x19ef
            int32_t v11 = *(int32_t *)(v1 + 100); // 0x19f2
            int32_t v12 = *(int32_t *)(64 * (int64_t)(v11 >> 4) + v9 + (int64_t)(4 * v11 & 60)); // 0x1a07
            *v7 = v12;
            int32_t v13 = *(int32_t *)(v2 + 84); // 0x1a0d
            int32_t v14 = *(int32_t *)(64 * (int64_t)(v13 >> 4) + v9 + (int64_t)(4 * v13 & 60)); // 0x1a22
            *(int32_t *)(v2 + 100) = v14;
            int32_t v15 = *(int32_t *)(v2 + 68); // 0x1a28
            int32_t v16 = *(int32_t *)(64 * (int64_t)(v15 >> 4) + v9 + (int64_t)(4 * v15 & 60)); // 0x1a3d
            *(int32_t *)(v2 + 84) = v16;
            int32_t v17 = *(int32_t *)(v2 + 52); // 0x1a43
            int32_t v18 = *(int32_t *)(64 * (int64_t)(v17 >> 4) + v9 + (int64_t)(4 * v17 & 60)); // 0x1a58
            *(int32_t *)(v2 + 68) = v18;
            int32_t v19 = *(int32_t *)(v2 + 36); // 0x1a5e
            int32_t v20 = *(int32_t *)(64 * (int64_t)(v19 >> 4) + v9 + (int64_t)(4 * v19 & 60)); // 0x1a73
            *(int32_t *)(v2 + 52) = v20;
            int32_t v21 = *(int32_t *)(v2 + 4); // 0x1a79
            int32_t v22 = *(int32_t *)(v2 + 20); // 0x1a7c
            int32_t v23 = *(int32_t *)(64 * (int64_t)(v22 >> 4) + v9 + (int64_t)(4 * v22 & 60)); // 0x1a93
            *(int32_t *)(v2 + 36) = v23;
            int32_t v24 = *(int32_t *)(64 * (int64_t)(v21 >> 4) + v9 + (int64_t)(4 * v21 & 60)); // 0x1aac
            *(int32_t *)(v2 + 20) = v24;
            *(int32_t *)(v2 + 4) = v10;
            int32_t * v25 = (int32_t *)(v2 + 120); // 0x1ab5
            int32_t v26 = *v25; // 0x1ab5
            int32_t v27 = *(int32_t *)(64 * (int64_t)(v26 >> 4) + v9 + (int64_t)(4 * v26 & 60)); // 0x1aca
            int32_t v28 = *(int32_t *)(v2 + 72); // 0x1acd
            int32_t v29 = *(int32_t *)(64 * (int64_t)(v28 >> 4) + v9 + (int64_t)(4 * v28 & 60)); // 0x1ae2
            *v25 = v29;
            int32_t v30 = *(int32_t *)(v2 + 24); // 0x1ae8
            int32_t v31 = *(int32_t *)(64 * (int64_t)(v30 >> 4) + v9 + (int64_t)(4 * v30 & 60)); // 0x1afd
            *(int32_t *)(v2 + 72) = v31;
            int32_t v32 = *(int32_t *)(v2 + 104); // 0x1b03
            int32_t v33 = *(int32_t *)(64 * (int64_t)(v32 >> 4) + v9 + (int64_t)(4 * v32 & 60)); // 0x1b18
            *(int32_t *)(v2 + 24) = v33;
            int32_t v34 = *(int32_t *)(v2 + 56); // 0x1b1e
            int32_t v35 = *(int32_t *)(64 * (int64_t)(v34 >> 4) + v9 + (int64_t)(4 * v34 & 60)); // 0x1b33
            *(int32_t *)(v2 + 104) = v35;
            int32_t v36 = *(int32_t *)(v2 + 8); // 0x1b39
            int32_t v37 = *(int32_t *)(64 * (int64_t)(v36 >> 4) + v9 + (int64_t)(4 * v36 & 60)); // 0x1b4e
            *(int32_t *)(v2 + 56) = v37;
            int32_t v38 = *(int32_t *)(v2 + 88); // 0x1b54
            int32_t v39 = *(int32_t *)(64 * (int64_t)(v38 >> 4) + v9 + (int64_t)(4 * v38 & 60)); // 0x1b69
            *(int32_t *)(v2 + 8) = v39;
            int32_t v40 = *(int32_t *)(v2 + 40); // 0x1b6f
            int32_t v41 = *(int32_t *)(64 * (int64_t)(v40 >> 4) + v9 + (int64_t)(4 * v40 & 60)); // 0x1b84
            *(int32_t *)(v2 + 88) = v41;
            *(int32_t *)(v2 + 40) = v27;
            int32_t v42 = *(int32_t *)(v2 + 60); // 0x1b8d
            int32_t * v43 = (int32_t *)(v2 + 124); // 0x1b90
            int32_t v44 = *v43; // 0x1b90
            int32_t v45 = *(int32_t *)(64 * (int64_t)(v44 >> 4) + v9 + (int64_t)(4 * v44 & 60)); // 0x1ba5
            int32_t v46 = *(int32_t *)(64 * (int64_t)(v42 >> 4) + v9 + (int64_t)(4 * v42 & 60)); // 0x1bba
            *v43 = v46;
            *(int32_t *)(v2 + 60) = v45;
            int32_t v47 = *(int32_t *)(v2 + 44); // 0x1bc3
            int32_t * v48 = (int32_t *)(v2 + 108); // 0x1bc6
            int32_t v49 = *v48; // 0x1bc6
            int32_t v50 = *(int32_t *)(64 * (int64_t)(v49 >> 4) + v9 + (int64_t)(4 * v49 & 60)); // 0x1bdb
            int32_t v51 = *(int32_t *)(64 * (int64_t)(v47 >> 4) + v9 + (int64_t)(4 * v47 & 60)); // 0x1bf0
            *v48 = v51;
            *(int32_t *)(v2 + 44) = v50;
            int32_t v52 = *(int32_t *)(v2 + 28); // 0x1bf9
            int32_t * v53 = (int32_t *)(v2 + 92); // 0x1bfc
            int32_t v54 = *v53; // 0x1bfc
            int32_t v55 = *(int32_t *)(64 * (int64_t)(v54 >> 4) + v9 + (int64_t)(4 * v54 & 60)); // 0x1c11
            int32_t v56 = *(int32_t *)(64 * (int64_t)(v52 >> 4) + v9 + (int64_t)(4 * v52 & 60)); // 0x1c26
            *v53 = v56;
            *(int32_t *)(v2 + 28) = v55;
            int32_t v57 = *(int32_t *)(v2 + 12); // 0x1c2f
            int32_t * v58 = (int32_t *)(v2 + 76); // 0x1c32
            int32_t v59 = *v58; // 0x1c32
            int32_t v60 = *(int32_t *)(64 * (int64_t)(v59 >> 4) + v9 + (int64_t)(4 * v59 & 60)); // 0x1c47
            int32_t v61 = *(int32_t *)(64 * (int64_t)(v57 >> 4) + v9 + (int64_t)(4 * v57 & 60)); // 0x1c5c
            *v58 = v61;
            *(int32_t *)(v2 + 12) = v60;
            int32_t v62 = *(int32_t *)&v2; // 0x1c65
            int32_t v63 = *(int32_t *)(64 * (int64_t)(v62 >> 4) + v9 + (int64_t)(4 * v62 & 60)); // 0x1c79
            *(int32_t *)v2 = v63;
            int32_t * v64 = (int32_t *)(v2 + 16); // 0x1c7e
            int32_t v65 = *v64; // 0x1c7e
            int32_t v66 = *(int32_t *)(64 * (int64_t)(v65 >> 4) + v9 + (int64_t)(4 * v65 & 60)); // 0x1c93
            *v64 = v66;
            int32_t * v67 = (int32_t *)(v2 + 32); // 0x1c99
            int32_t v68 = *v67; // 0x1c99
            int32_t v69 = *(int32_t *)(64 * (int64_t)(v68 >> 4) + v9 + (int64_t)(4 * v68 & 60)); // 0x1cae
            *v67 = v69;
            int32_t * v70 = (int32_t *)(v2 + 48); // 0x1cb4
            int32_t v71 = *v70; // 0x1cb4
            int32_t v72 = *(int32_t *)(64 * (int64_t)(v71 >> 4) + v9 + (int64_t)(4 * v71 & 60)); // 0x1cc9
            *v70 = v72;
            v4 = 112;
            v5 = 96;
            v6 = 80;
            v3 = v2 + 64;
            // break -> 0x1f1e
            break;
        }
        case 6: {
            int32_t * v73 = (int32_t *)(v1 + 84); // 0x1ce7
            int32_t v74 = *v73; // 0x1ce7
            int64_t v75 = *(int64_t *)0x1d00; // 0x1cf9
            int32_t v76 = *(int32_t *)(64 * (int64_t)(v74 >> 4) + v75 + (int64_t)(4 * v74 & 60)); // 0x1d03
            int32_t v77 = *(int32_t *)(v1 + 68); // 0x1d06
            int32_t v78 = *(int32_t *)(64 * (int64_t)(v77 >> 4) + v75 + (int64_t)(4 * v77 & 60)); // 0x1d1b
            *v73 = v78;
            int32_t v79 = *(int32_t *)(v2 + 52); // 0x1d21
            int32_t v80 = *(int32_t *)(64 * (int64_t)(v79 >> 4) + v75 + (int64_t)(4 * v79 & 60)); // 0x1d36
            *(int32_t *)(v2 + 68) = v80;
            int32_t v81 = *(int32_t *)(v2 + 36); // 0x1d3c
            int32_t v82 = *(int32_t *)(64 * (int64_t)(v81 >> 4) + v75 + (int64_t)(4 * v81 & 60)); // 0x1d51
            *(int32_t *)(v2 + 52) = v82;
            int32_t v83 = *(int32_t *)(v2 + 4); // 0x1d57
            int32_t v84 = *(int32_t *)(v2 + 20); // 0x1d5a
            int32_t v85 = *(int32_t *)(64 * (int64_t)(v84 >> 4) + v75 + (int64_t)(4 * v84 & 60)); // 0x1d71
            *(int32_t *)(v2 + 36) = v85;
            int32_t v86 = *(int32_t *)(64 * (int64_t)(v83 >> 4) + v75 + (int64_t)(4 * v83 & 60)); // 0x1d8a
            *(int32_t *)(v2 + 20) = v86;
            *(int32_t *)(v2 + 4) = v76;
            int32_t * v87 = (int32_t *)(v2 + 88); // 0x1d93
            int32_t v88 = *v87; // 0x1d93
            int32_t v89 = *(int32_t *)(64 * (int64_t)(v88 >> 4) + v75 + (int64_t)(4 * v88 & 60)); // 0x1da8
            int32_t v90 = *(int32_t *)(v2 + 56); // 0x1dab
            int32_t v91 = *(int32_t *)(64 * (int64_t)(v90 >> 4) + v75 + (int64_t)(4 * v90 & 60)); // 0x1dc0
            *v87 = v91;
            int32_t v92 = *(int32_t *)(v2 + 24); // 0x1dc6
            int32_t v93 = *(int32_t *)(64 * (int64_t)(v92 >> 4) + v75 + (int64_t)(4 * v92 & 60)); // 0x1ddb
            *(int32_t *)(v2 + 56) = v93;
            *(int32_t *)(v2 + 24) = v89;
            int32_t v94 = *(int32_t *)(v2 + 40); // 0x1de4
            int32_t * v95 = (int32_t *)(v2 + 72); // 0x1de7
            int32_t v96 = *v95; // 0x1de7
            int32_t v97 = *(int32_t *)(64 * (int64_t)(v96 >> 4) + v75 + (int64_t)(4 * v96 & 60)); // 0x1dfc
            int32_t v98 = *(int32_t *)(64 * (int64_t)(v94 >> 4) + v75 + (int64_t)(4 * v94 & 60)); // 0x1e11
            *v95 = v98;
            int32_t v99 = *(int32_t *)(v2 + 8); // 0x1e17
            int32_t v100 = *(int32_t *)(64 * (int64_t)(v99 >> 4) + v75 + (int64_t)(4 * v99 & 60)); // 0x1e2c
            *(int32_t *)(v2 + 40) = v100;
            *(int32_t *)(v2 + 8) = v97;
            int32_t v101 = *(int32_t *)(v2 + 12); // 0x1e35
            int32_t * v102 = (int32_t *)(v2 + 60); // 0x1e38
            int32_t v103 = *v102; // 0x1e38
            int32_t v104 = *(int32_t *)(64 * (int64_t)(v103 >> 4) + v75 + (int64_t)(4 * v103 & 60)); // 0x1e4d
            int32_t v105 = *(int32_t *)(64 * (int64_t)(v101 >> 4) + v75 + (int64_t)(4 * v101 & 60)); // 0x1e62
            *v102 = v105;
            *(int32_t *)(v2 + 12) = v104;
            int32_t v106 = *(int32_t *)(v2 + 28); // 0x1e6b
            int32_t * v107 = (int32_t *)(v2 + 76); // 0x1e6e
            int32_t v108 = *v107; // 0x1e6e
            int32_t v109 = *(int32_t *)(64 * (int64_t)(v108 >> 4) + v75 + (int64_t)(4 * v108 & 60)); // 0x1e83
            int32_t v110 = *(int32_t *)(64 * (int64_t)(v106 >> 4) + v75 + (int64_t)(4 * v106 & 60)); // 0x1e98
            *v107 = v110;
            *(int32_t *)(v2 + 28) = v109;
            int32_t v111 = *(int32_t *)(v2 + 44); // 0x1ea1
            int32_t * v112 = (int32_t *)(v2 + 92); // 0x1ea4
            int32_t v113 = *v112; // 0x1ea4
            int32_t v114 = *(int32_t *)(64 * (int64_t)(v113 >> 4) + v75 + (int64_t)(4 * v113 & 60)); // 0x1eb9
            int32_t v115 = *(int32_t *)(64 * (int64_t)(v111 >> 4) + v75 + (int64_t)(4 * v111 & 60)); // 0x1ece
            *v112 = v115;
            *(int32_t *)(v2 + 44) = v114;
            int32_t v116 = *(int32_t *)&v2; // 0x1ed7
            int32_t v117 = *(int32_t *)(64 * (int64_t)(v116 >> 4) + v75 + (int64_t)(4 * v116 & 60)); // 0x1eeb
            *(int32_t *)v2 = v117;
            int32_t * v118 = (int32_t *)(v2 + 16); // 0x1ef0
            int32_t v119 = *v118; // 0x1ef0
            int32_t v120 = *(int32_t *)(64 * (int64_t)(v119 >> 4) + v75 + (int64_t)(4 * v119 & 60)); // 0x1f05
            *v118 = v120;
            v4 = 80;
            v5 = 64;
            v6 = 48;
            v3 = v2 + 32;
            // break -> 0x1f1e
            break;
        }
        default: {
            if (nb != 4) {
                // 0x1f9d
                return;
            }
            int32_t * v121 = (int32_t *)(v1 + 52); // 0x186b
            int32_t v122 = *v121; // 0x186b
            int64_t v123 = *(int64_t *)0x1884; // 0x187d
            int32_t v124 = *(int32_t *)(64 * (int64_t)(v122 >> 4) + v123 + (int64_t)(4 * v122 & 60)); // 0x1887
            int32_t v125 = *(int32_t *)(v1 + 36); // 0x188a
            int32_t v126 = *(int32_t *)(64 * (int64_t)(v125 >> 4) + v123 + (int64_t)(4 * v125 & 60)); // 0x189f
            *v121 = v126;
            int32_t v127 = *(int32_t *)(v2 + 20); // 0x18a5
            int32_t v128 = *(int32_t *)(64 * (int64_t)(v127 >> 4) + v123 + (int64_t)(4 * v127 & 60)); // 0x18ba
            *(int32_t *)(v2 + 36) = v128;
            int32_t v129 = *(int32_t *)(v2 + 4); // 0x18c0
            int32_t v130 = *(int32_t *)(v2 + 8); // 0x18c3
            int32_t v131 = *(int32_t *)(64 * (int64_t)(v129 >> 4) + v123 + (int64_t)(4 * v129 & 60)); // 0x18da
            *(int32_t *)(v2 + 20) = v131;
            *(int32_t *)(v2 + 4) = v124;
            int32_t * v132 = (int32_t *)(v2 + 56); // 0x18e4
            int32_t v133 = *v132; // 0x18e4
            int32_t v134 = *(int32_t *)(64 * (int64_t)(v133 >> 4) + v123 + (int64_t)(4 * v133 & 60)); // 0x18f9
            int32_t v135 = *(int32_t *)(v2 + 24); // 0x18fc
            int32_t v136 = *(int32_t *)(64 * (int64_t)(v135 >> 4) + v123 + (int64_t)(4 * v135 & 60)); // 0x1913
            *v132 = v136;
            *(int32_t *)(v2 + 24) = v134;
            int32_t v137 = *(int32_t *)(64 * (int64_t)(v130 >> 4) + v123 + (int64_t)(4 * v130 & 60)); // 0x192f
            int32_t v138 = *(int32_t *)(v2 + 40); // 0x1932
            int32_t v139 = *(int32_t *)(64 * (int64_t)(v138 >> 4) + v123 + (int64_t)(4 * v138 & 60)); // 0x1947
            *(int32_t *)(v2 + 8) = v139;
            *(int32_t *)(v2 + 40) = v137;
            int32_t * v140 = (int32_t *)(v2 + 60); // 0x1950
            int32_t v141 = *v140; // 0x1950
            int32_t v142 = *(int32_t *)(64 * (int64_t)(v141 >> 4) + v123 + (int64_t)(4 * v141 & 60)); // 0x1965
            int32_t v143 = *(int32_t *)(v2 + 12); // 0x1968
            int32_t v144 = *(int32_t *)(64 * (int64_t)(v143 >> 4) + v123 + (int64_t)(4 * v143 & 60)); // 0x197d
            *v140 = v144;
            int32_t v145 = *(int32_t *)(v2 + 28); // 0x1983
            int32_t v146 = *(int32_t *)(64 * (int64_t)(v145 >> 4) + v123 + (int64_t)(4 * v145 & 60)); // 0x1998
            *(int32_t *)(v2 + 12) = v146;
            int32_t v147 = *(int32_t *)(v2 + 44); // 0x199e
            int32_t v148 = *(int32_t *)(64 * (int64_t)(v147 >> 4) + v123 + (int64_t)(4 * v147 & 60)); // 0x19b3
            *(int32_t *)(v2 + 28) = v148;
            *(int32_t *)(v2 + 44) = v142;
            v4 = 48;
            v5 = 32;
            v6 = 16;
            v3 = v2;
            // break -> 0x1f1e
            break;
        }
    }
    int32_t * v149 = (int32_t *)v3; // 0x1f1e
    int32_t v150 = *v149; // 0x1f1e
    int64_t v151 = *(int64_t *)0x1f39; // 0x1f32
    int32_t v152 = *(int32_t *)(64 * (int64_t)(v150 >> 4) + v151 + (int64_t)(4 * v150 & 60)); // 0x1f3c
    *v149 = v152;
    int32_t * v153 = (int32_t *)(v2 + v6); // 0x1f43
    int32_t v154 = *v153; // 0x1f43
    int32_t v155 = *(int32_t *)(64 * (int64_t)(v154 >> 4) + v151 + (int64_t)(4 * v154 & 60)); // 0x1f5c
    *v153 = v155;
    int32_t * v156 = (int32_t *)(v2 + v5); // 0x1f64
    int32_t v157 = *v156; // 0x1f64
    int32_t v158 = *(int32_t *)(64 * (int64_t)(v157 >> 4) + v151 + (int64_t)(4 * v157 & 60)); // 0x1f7b
    *v156 = v158;
    int32_t * v159 = (int32_t *)(v2 + v4); // 0x1f82
    int32_t v160 = *v159; // 0x1f82
    int32_t v161 = *(int32_t *)(64 * (int64_t)(v160 >> 4) + v151 + (int64_t)(4 * v160 & 60)); // 0x1f97
    *v159 = v161;
}
int32_t AddRoundKey_InversMixColumn(int32_t * statemt, int32_t nb, int32_t n) {
    if (nb < 1) {
        // 0x22bd
        return 0;
    }
    int64_t v1 = nb;
    int64_t v2 = (int64_t)statemt;
    int64_t v3 = v1 & 0xffffffff; // 0x1fb9
    int64_t v4 = 0; // 0x1fc4
    int64_t v5 = 4 * (v4 + (0x100000000 * v1 * (int64_t)n >> 32)) + *(int64_t *)0x1fc4;
    int64_t v6 = 16 * v4 + v2;
    int32_t * v7 = (int32_t *)v6; // 0x1fdf
    *v7 = *v7 ^ *(int32_t *)v5;
    int32_t * v8 = (int32_t *)(v6 + 4); // 0x1feb
    *v8 = *v8 ^ *(int32_t *)(v5 + 480);
    int32_t * v9 = (int32_t *)(v6 + 8); // 0x1ff8
    *v9 = *v9 ^ *(int32_t *)(v5 + 960);
    int32_t * v10 = (int32_t *)(v6 + 12); // 0x2005
    *v10 = *v10 ^ *(int32_t *)(v5 + 1440);
    v4++;
    while (v4 != v3) {
        // 0x1fd0
        v5 = 4 * (v4 + (0x100000000 * v1 * (int64_t)n >> 32)) + *(int64_t *)0x1fc4;
        v6 = 16 * v4 + v2;
        v7 = (int32_t *)v6;
        *v7 = *v7 ^ *(int32_t *)v5;
        v8 = (int32_t *)(v6 + 4);
        *v8 = *v8 ^ *(int32_t *)(v5 + 480);
        v9 = (int32_t *)(v6 + 8);
        *v9 = *v9 ^ *(int32_t *)(v5 + 960);
        v10 = (int32_t *)(v6 + 12);
        *v10 = *v10 ^ *(int32_t *)(v5 + 1440);
        v4++;
    }
    int128_t v11 = __asm_movdqa(g14); // 0x201c
    int128_t v12 = __asm_movdqa(g15); // 0x2024
    int128_t v13 = __asm_movdqa(g16); // 0x202c
    int128_t v14 = __asm_movdqa(g17); // 0x2034
    int128_t v15 = __asm_movdqa(g18); // 0x203c
    int128_t v16 = __asm_movdqa(g19); // 0x2044
    int64_t v17; // bp-56, 0x1fa0
    int64_t v18 = (int64_t)&v17 - 128;
    int64_t v19 = 0; // 0x204c
    int64_t v20 = 4 * v19; // 0x2050
    int64_t v21 = v20 & 0xfffffffc; // 0x2058
    int64_t v22 = 0;
    int64_t v23 = v22 + 1; // 0x2064
    int64_t v24 = 4 * (v22 + v20); // 0x206f
    int32_t v25 = *(int32_t *)(v24 + v2); // 0x206f
    int32_t v26 = 2 * v25; // 0x2076
    int32_t v27 = *(int32_t *)(4 * (v23 & 3 | v21) + v2); // 0x2099
    int32_t v28 = 2 * v27; // 0x209d
    int128_t v29 = __asm_movd(((v25 & 0x7fffff80) != 128 ? v26 : v26 ^ 283) ^ v25); // 0x20c3
    int128_t v30 = __asm_punpckldq(v29, __asm_movd((v27 & 0x7fffff80) != 128 ? v28 : v28 ^ 283)); // 0x20cd
    int128_t v31 = __asm_movdqa(v30); // 0x20d2
    int128_t v32 = __asm_pand(v30, v11); // 0x20d7
    int128_t v33 = __asm_paddd(v31, v31); // 0x20dc
    int128_t v34 = __asm_punpckldq(__asm_movd(v25), __asm_movd(v27)); // 0x20ea
    int128_t v35 = __asm_pcmpeqd(v32, v12); // 0x20ef
    int128_t v36 = __asm_pandn(__asm_movdqa(v35), v33); // 0x20f9
    int128_t v37 = __asm_pxor(v33, v13); // 0x2102
    int32_t v38 = *(int32_t *)(4 * (v22 + 2 & 3 | v21) + v2); // 0x210d
    int128_t v39 = __asm_pand(v37, v35); // 0x2111
    int32_t v40 = 2 * v38; // 0x2116
    int128_t v41 = __asm_pxor(v34, __asm_por(v39, v36)); // 0x213a
    int32_t v42 = *(int32_t *)(4 * (v22 + 3 & 3 | v21) + v2); // 0x214d
    int32_t v43 = 2 * v42; // 0x2150
    int128_t v44 = __asm_movd((v42 & 0x7fffff80) != 128 ? v43 : v43 ^ 283); // 0x2172
    int128_t v45 = __asm_punpckldq(__asm_movd(((v38 & 0x7fffff80) != 128 ? v40 : v40 ^ 283) ^ v38), v44); // 0x217c
    int128_t v46 = __asm_paddd(__asm_movdqa(v45), v45); // 0x2186
    int128_t v47 = __asm_pcmpeqd(__asm_pand(v45, v11), v12); // 0x2190
    int128_t v48 = __asm_pandn(__asm_movdqa(v47), v46); // 0x219a
    int128_t v49 = __asm_punpcklqdq(v41, __asm_por(__asm_pand(__asm_pxor(v46, v13), v47), v48)); // 0x21ad
    int128_t v50 = __asm_movdqa(v49); // 0x21b1
    int128_t v51 = __asm_pcmpeqd(__asm_pand(v49, v14), v15); // 0x21b9
    int128_t v52 = __asm_paddd(v50, v50); // 0x21bd
    int128_t v53 = __asm_por(__asm_pand(__asm_pxor(v52, v16), v51), __asm_pandn(__asm_movdqa(v51), v52)); // 0x21d3
    int128_t v54 = __asm_pxor(__asm_pshufd(v53, -18), v53); // 0x21dd
    int32_t v55 = __asm_movd_3(__asm_pxor(__asm_pshufd(v54, 85), v54)); // 0x21ea
    *(int32_t *)(v24 + v18) = v38 ^ v27 ^ v42 ^ v55;
    while (v23 != 4) {
        // 0x2060
        v22 = v23;
        v23 = v22 + 1;
        v24 = 4 * (v22 + v20);
        v25 = *(int32_t *)(v24 + v2);
        v26 = 2 * v25;
        v27 = *(int32_t *)(4 * (v23 & 3 | v21) + v2);
        v28 = 2 * v27;
        v29 = __asm_movd(((v25 & 0x7fffff80) != 128 ? v26 : v26 ^ 283) ^ v25);
        v30 = __asm_punpckldq(v29, __asm_movd((v27 & 0x7fffff80) != 128 ? v28 : v28 ^ 283));
        v31 = __asm_movdqa(v30);
        v32 = __asm_pand(v30, v11);
        v33 = __asm_paddd(v31, v31);
        v34 = __asm_punpckldq(__asm_movd(v25), __asm_movd(v27));
        v35 = __asm_pcmpeqd(v32, v12);
        v36 = __asm_pandn(__asm_movdqa(v35), v33);
        v37 = __asm_pxor(v33, v13);
        v38 = *(int32_t *)(4 * (v22 + 2 & 3 | v21) + v2);
        v39 = __asm_pand(v37, v35);
        v40 = 2 * v38;
        v41 = __asm_pxor(v34, __asm_por(v39, v36));
        v42 = *(int32_t *)(4 * (v22 + 3 & 3 | v21) + v2);
        v43 = 2 * v42;
        v44 = __asm_movd((v42 & 0x7fffff80) != 128 ? v43 : v43 ^ 283);
        v45 = __asm_punpckldq(__asm_movd(((v38 & 0x7fffff80) != 128 ? v40 : v40 ^ 283) ^ v38), v44);
        v46 = __asm_paddd(__asm_movdqa(v45), v45);
        v47 = __asm_pcmpeqd(__asm_pand(v45, v11), v12);
        v48 = __asm_pandn(__asm_movdqa(v47), v46);
        v49 = __asm_punpcklqdq(v41, __asm_por(__asm_pand(__asm_pxor(v46, v13), v47), v48));
        v50 = __asm_movdqa(v49);
        v51 = __asm_pcmpeqd(__asm_pand(v49, v14), v15);
        v52 = __asm_paddd(v50, v50);
        v53 = __asm_por(__asm_pand(__asm_pxor(v52, v16), v51), __asm_pandn(__asm_movdqa(v51), v52));
        v54 = __asm_pxor(__asm_pshufd(v53, -18), v53);
        v55 = __asm_movd_3(__asm_pxor(__asm_pshufd(v54, 85), v54));
        *(int32_t *)(v24 + v18) = v38 ^ v27 ^ v42 ^ v55;
    }
    // 0x2209
    v19++;
    while (v19 != v3) {
        // 0x2050
        v20 = 4 * v19;
        v21 = v20 & 0xfffffffc;
        v22 = 0;
        v23 = v22 + 1;
        v24 = 4 * (v22 + v20);
        v25 = *(int32_t *)(v24 + v2);
        v26 = 2 * v25;
        v27 = *(int32_t *)(4 * (v23 & 3 | v21) + v2);
        v28 = 2 * v27;
        v29 = __asm_movd(((v25 & 0x7fffff80) != 128 ? v26 : v26 ^ 283) ^ v25);
        v30 = __asm_punpckldq(v29, __asm_movd((v27 & 0x7fffff80) != 128 ? v28 : v28 ^ 283));
        v31 = __asm_movdqa(v30);
        v32 = __asm_pand(v30, v11);
        v33 = __asm_paddd(v31, v31);
        v34 = __asm_punpckldq(__asm_movd(v25), __asm_movd(v27));
        v35 = __asm_pcmpeqd(v32, v12);
        v36 = __asm_pandn(__asm_movdqa(v35), v33);
        v37 = __asm_pxor(v33, v13);
        v38 = *(int32_t *)(4 * (v22 + 2 & 3 | v21) + v2);
        v39 = __asm_pand(v37, v35);
        v40 = 2 * v38;
        v41 = __asm_pxor(v34, __asm_por(v39, v36));
        v42 = *(int32_t *)(4 * (v22 + 3 & 3 | v21) + v2);
        v43 = 2 * v42;
        v44 = __asm_movd((v42 & 0x7fffff80) != 128 ? v43 : v43 ^ 283);
        v45 = __asm_punpckldq(__asm_movd(((v38 & 0x7fffff80) != 128 ? v40 : v40 ^ 283) ^ v38), v44);
        v46 = __asm_paddd(__asm_movdqa(v45), v45);
        v47 = __asm_pcmpeqd(__asm_pand(v45, v11), v12);
        v48 = __asm_pandn(__asm_movdqa(v47), v46);
        v49 = __asm_punpcklqdq(v41, __asm_por(__asm_pand(__asm_pxor(v46, v13), v47), v48));
        v50 = __asm_movdqa(v49);
        v51 = __asm_pcmpeqd(__asm_pand(v49, v14), v15);
        v52 = __asm_paddd(v50, v50);
        v53 = __asm_por(__asm_pand(__asm_pxor(v52, v16), v51), __asm_pandn(__asm_movdqa(v51), v52));
        v54 = __asm_pxor(__asm_pshufd(v53, -18), v53);
        v55 = __asm_movd_3(__asm_pxor(__asm_pshufd(v54, 85), v54));
        *(int32_t *)(v24 + v18) = v38 ^ v27 ^ v42 ^ v55;
        while (v23 != 4) {
            // 0x2060
            v22 = v23;
            v23 = v22 + 1;
            v24 = 4 * (v22 + v20);
            v25 = *(int32_t *)(v24 + v2);
            v26 = 2 * v25;
            v27 = *(int32_t *)(4 * (v23 & 3 | v21) + v2);
            v28 = 2 * v27;
            v29 = __asm_movd(((v25 & 0x7fffff80) != 128 ? v26 : v26 ^ 283) ^ v25);
            v30 = __asm_punpckldq(v29, __asm_movd((v27 & 0x7fffff80) != 128 ? v28 : v28 ^ 283));
            v31 = __asm_movdqa(v30);
            v32 = __asm_pand(v30, v11);
            v33 = __asm_paddd(v31, v31);
            v34 = __asm_punpckldq(__asm_movd(v25), __asm_movd(v27));
            v35 = __asm_pcmpeqd(v32, v12);
            v36 = __asm_pandn(__asm_movdqa(v35), v33);
            v37 = __asm_pxor(v33, v13);
            v38 = *(int32_t *)(4 * (v22 + 2 & 3 | v21) + v2);
            v39 = __asm_pand(v37, v35);
            v40 = 2 * v38;
            v41 = __asm_pxor(v34, __asm_por(v39, v36));
            v42 = *(int32_t *)(4 * (v22 + 3 & 3 | v21) + v2);
            v43 = 2 * v42;
            v44 = __asm_movd((v42 & 0x7fffff80) != 128 ? v43 : v43 ^ 283);
            v45 = __asm_punpckldq(__asm_movd(((v38 & 0x7fffff80) != 128 ? v40 : v40 ^ 283) ^ v38), v44);
            v46 = __asm_paddd(__asm_movdqa(v45), v45);
            v47 = __asm_pcmpeqd(__asm_pand(v45, v11), v12);
            v48 = __asm_pandn(__asm_movdqa(v47), v46);
            v49 = __asm_punpcklqdq(v41, __asm_por(__asm_pand(__asm_pxor(v46, v13), v47), v48));
            v50 = __asm_movdqa(v49);
            v51 = __asm_pcmpeqd(__asm_pand(v49, v14), v15);
            v52 = __asm_paddd(v50, v50);
            v53 = __asm_por(__asm_pand(__asm_pxor(v52, v16), v51), __asm_pandn(__asm_movdqa(v51), v52));
            v54 = __asm_pxor(__asm_pshufd(v53, -18), v53);
            v55 = __asm_movd_3(__asm_pxor(__asm_pshufd(v54, 85), v54));
            *(int32_t *)(v24 + v18) = v38 ^ v27 ^ v42 ^ v55;
        }
        // 0x2209
        v19++;
    }
    int64_t v56 = 0; // 0x2225
    if (nb >= 4) {
        int64_t v57 = 0; // 0x2232
        int64_t v58 = 16 * v57; // 0x2243
        __asm_movups(*(int128_t *)(v58 + v2), __asm_movaps(*(int128_t *)(v58 + v18)));
        int64_t v59 = v58 | 16; // 0x2255
        __asm_movups(*(int128_t *)(v59 + v2), __asm_movaps(*(int128_t *)(v59 + v18)));
        int64_t v60 = v58 | 32; // 0x2267
        __asm_movups(*(int128_t *)(v60 + v2), __asm_movaps(*(int128_t *)(v60 + v18)));
        int64_t v61 = v58 | 48; // 0x2276
        int64_t v62 = __asm_movdqu_2(__asm_movdqa(*(int128_t *)(v61 + v18))); // 0x2281
        *(int128_t *)(v61 + v2) = (int128_t)v62;
        v57 += 4;
        v56 = v57;
        while (v57 != (v1 & 0xfffffffc)) {
            // 0x2240
            v58 = 16 * v57;
            __asm_movups(*(int128_t *)(v58 + v2), __asm_movaps(*(int128_t *)(v58 + v18)));
            v59 = v58 | 16;
            __asm_movups(*(int128_t *)(v59 + v2), __asm_movaps(*(int128_t *)(v59 + v18)));
            v60 = v58 | 32;
            __asm_movups(*(int128_t *)(v60 + v2), __asm_movaps(*(int128_t *)(v60 + v18)));
            v61 = v58 | 48;
            v62 = __asm_movdqu_2(__asm_movdqa(*(int128_t *)(v61 + v18)));
            *(int128_t *)(v61 + v2) = (int128_t)v62;
            v57 += 4;
            v56 = v57;
        }
    }
    int64_t v63 = v1 & 3; // 0x221f
    int64_t v64 = 0; // 0x2297
    if (v63 == 0) {
        // 0x22bd
        return 0;
    }
    int64_t v65 = v56; // 0x2297
    int64_t v66 = 16 * v65; // 0x22a3
    int64_t v67 = __asm_movdqu_2(__asm_movdqa(*(int128_t *)(v66 + v18))); // 0x22ad
    *(int128_t *)(v66 + v2) = (int128_t)v67;
    v64++;
    v65++;
    while (v64 != v63) {
        // 0x22a0
        v66 = 16 * v65;
        v67 = __asm_movdqu_2(__asm_movdqa(*(int128_t *)(v66 + v18)));
        *(int128_t *)(v66 + v2) = (int128_t)v67;
        v64++;
        v65++;
    }
    // 0x22bd
    return 0;
}
int64_t SubByte(int64_t a1) {
    int64_t v1 = (int32_t)a1 >= 0 ? a1 : a1 + 15; // 0x22d5
    int64_t v2 = *(int64_t *)0x22f3; // 0x22ec
    uint32_t result = *(int32_t *)((0x100000000 * (a1 - (v1 & 0xfffffff0)) >> 30) + 64 * (int64_t)((int32_t)v1 >> 4) + v2); // 0x22f3
    return result;
}
int64_t aes_main(void) {
    int128_t v1 = __asm_movaps(g20); // 0x2304
    int64_t v2 = *(int64_t *)0x2312; // 0x230b
    *(int128_t *)v2 = (int128_t)__asm_movaps_5(v1);
    *(int128_t *)(v2 + 16) = (int128_t)__asm_movaps_5(__asm_movaps(g21));
    *(int128_t *)(v2 + 32) = (int128_t)__asm_movaps_5(__asm_movaps(g22));
    *(int128_t *)(v2 + 48) = (int128_t)__asm_movaps_5(__asm_movaps(g23));
    int128_t v3 = __asm_movaps(g24); // 0x2336
    int64_t v4 = *(int64_t *)0x2344; // 0x233d
    *(int128_t *)v4 = (int128_t)__asm_movaps_5(v3);
    *(int128_t *)(v4 + 16) = (int128_t)__asm_movaps_5(__asm_movaps(g25));
    *(int128_t *)(v4 + 32) = (int128_t)__asm_movaps_5(__asm_movaps(g26));
    *(int128_t *)(v4 + 48) = (int128_t)__asm_movaps_5(__asm_movaps(g27));
    int64_t v5; // 0x2300
    encrypt(v2, v4, 0x1f480, v5);
    decrypt((int32_t *)v2, (int32_t *)v4, 0x1f480);
    return 0;
}
