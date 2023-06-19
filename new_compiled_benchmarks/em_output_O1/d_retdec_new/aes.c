
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "aes.h"
int64_t encrypt(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a3;
    KeySchedule(v1, (int32_t *)a2);
    int64_t v2; // 0x0
    int32_t v3; // 0x0
    int32_t v4; // 0x0
    int32_t v5; // 0x0
    if (v1 < 0x2eec0) {
        if (v1 > 0x1f4ff) {
            // 0x8a
            v5 = 8;
            if (v1 == 0x1f500) {
                goto lab_0xc9;
            } else {
                // 0x92
                v3 = 4;
                v4 = 2;
                v2 = 4;
                if (v1 != 0x2ee80) {
                    goto lab_0x126;
                } else {
                    goto lab_0xce;
                }
            }
        } else {
            // 0x5e
            v3 = 4;
            v4 = 0;
            v2 = 4;
            switch (v1) {
                case 0x1f480: {
                    goto lab_0xce;
                }
                case 0x1f4c0: {
                    // 0xac
                    v3 = 6;
                    v4 = 2;
                    goto lab_0xce;
                }
                default: {
                    goto lab_0x126;
                }
            }
        }
    } else {
        if (v1 < 0x3e880) {
            // 0x75
            v5 = 8;
            v2 = 4;
            switch (v1) {
                case 0x2eec0: {
                    // 0xac
                    v3 = 6;
                    v4 = 2;
                    goto lab_0xce;
                }
                case 0x2ef00: {
                    goto lab_0xc9;
                }
                default: {
                    goto lab_0x126;
                }
            }
        } else {
            // 0x2c
            v5 = 6;
            v3 = 4;
            v4 = 4;
            v2 = 4;
            switch (v1) {
                case 0x3e880: {
                    goto lab_0xce;
                }
                case 0x3e8c0: {
                    goto lab_0xc9;
                }
                case 0x3e900: {
                    // 0xc9
                    v5 = 8;
                    goto lab_0xc9;
                }
                default: {
                    goto lab_0x126;
                }
            }
        }
    }
  lab_0xc9:
    // 0xc9
    v3 = v5;
    v4 = 4;
    goto lab_0xce;
  lab_0xce:
    // 0xce
    *(int32_t *)*(int64_t *)213 = v4;
    *(int32_t *)*(int64_t *)222 = v3;
    if (v1 > 0x2eeff) {
        switch (v1) {
            case 0x2ef00: {
                // 0x121
                v2 = 8;
                goto lab_0x126;
            }
            case 0x3e900: {
                // 0x121
                v2 = 8;
                goto lab_0x126;
            }
            default: {
                // 0x112
                v2 = 4;
                if (v1 != 0x3e8c0) {
                    goto lab_0x126;
                } else {
                    // 0x11a
                    v2 = 6;
                    goto lab_0x126;
                }
            }
        }
    } else {
        // 0xe8
        v2 = 4;
        switch (v1) {
            case 0x1f4c0: {
                // 0x11a
                v2 = 6;
                goto lab_0x126;
            }
            case 0x1f500: {
                // 0x121
                v2 = 8;
                goto lab_0x126;
            }
            case 0x2eec0: {
                // 0x11a
                v2 = 6;
                goto lab_0x126;
            }
            default: {
                goto lab_0x126;
            }
        }
    }
  lab_0x126:;
    int64_t v6 = *(int64_t *)303; // 0x128
    int64_t v7 = v6 + 480; // 0x13e
    int64_t v8 = a1 + 4; // 0x146
    int64_t v9 = v6 + 960; // 0x14a
    int64_t v10 = a1 + 8; // 0x152
    int64_t v11 = v6 + 1440; // 0x156
    int64_t v12 = a1 + 12; // 0x15e
    int64_t v13 = 0; // 0x12f
    int64_t v14 = 4 * v13; // 0x130
    int64_t v15 = 16 * v13; // 0x137
    int32_t * v16 = (int32_t *)(v15 + a1); // 0x13b
    *v16 = *v16 ^ *(int32_t *)(v14 + v6);
    int32_t * v17 = (int32_t *)(v15 + v8); // 0x146
    *v17 = *v17 ^ *(int32_t *)(v14 + v7);
    int32_t * v18 = (int32_t *)(v15 + v10); // 0x152
    *v18 = *v18 ^ *(int32_t *)(v14 + v9);
    int32_t * v19 = (int32_t *)(v15 + v12); // 0x15e
    *v19 = *v19 ^ *(int32_t *)(v14 + v11);
    int64_t v20 = v13 + 1; // 0x162
    v13 = v20;
    while (v20 != v2) {
        // 0x130
        v14 = 4 * v13;
        v15 = 16 * v13;
        v16 = (int32_t *)(v15 + a1);
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
    int32_t * v21 = (int32_t *)*(int64_t *)373; // 0x17b
    int32_t * v22; // 0x0
    int64_t v23; // 0x0
    if (*v21 > -9) {
        int32_t * v24 = (int32_t *)*(int64_t *)401; // 0x1a0
        int32_t * v25 = (int32_t *)a1;
        uint64_t v26 = 1;
        ByteSub_ShiftRow(v25, *v24);
        MixColumn_AddRoundKey(v25, *v24, (int32_t)v26);
        int64_t v27 = v26 + 1; // 0x1b9
        while (v26 < (int64_t)(*v21 + 9)) {
            // 0x1a0
            v26 = v27 & 0xffffffff;
            ByteSub_ShiftRow(v25, *v24);
            MixColumn_AddRoundKey(v25, *v24, (int32_t)v26);
            v27 = v26 + 1;
        }
        // 0x1cc
        v22 = v25;
        v23 = 0x100000000 * v27 >> 32;
    } else {
        // 0x16a
        v22 = (int32_t *)a1;
        v23 = 1;
    }
    // 0x1cc
    ByteSub_ShiftRow(v22, *(int32_t *)*(int64_t *)467);
    int64_t v28; // 0x0
    if (v1 > 0x2eeff) {
        switch (v1) {
            case 0x2ef00: {
                // 0x227
                v28 = 8;
                goto lab_0x22c;
            }
            case 0x3e900: {
                // 0x227
                v28 = 8;
                goto lab_0x22c;
            }
            default: {
                // 0x218
                v28 = 4;
                if (v1 != 0x3e8c0) {
                    goto lab_0x22c;
                } else {
                    // 0x220
                    v28 = 6;
                    goto lab_0x22c;
                }
            }
        }
    } else {
        // 0x1ee
        v28 = 4;
        switch (v1) {
            case 0x1f4c0: {
                // 0x220
                v28 = 6;
                goto lab_0x22c;
            }
            case 0x1f500: {
                // 0x227
                v28 = 8;
                goto lab_0x22c;
            }
            case 0x2eec0: {
                // 0x220
                v28 = 6;
                goto lab_0x22c;
            }
            default: {
                goto lab_0x22c;
            }
        }
    }
  lab_0x22c:;
    int64_t v29 = 0; // 0x234
    int64_t v30 = 4 * (v29 + (v28 * v23 & 0xfffffffe)); // 0x244
    int64_t v31 = 16 * v29; // 0x24b
    int32_t * v32 = (int32_t *)(v31 + a1); // 0x24f
    *v32 = *v32 ^ *(int32_t *)(v30 + v6);
    int32_t * v33 = (int32_t *)(v31 + v8); // 0x25a
    *v33 = *v33 ^ *(int32_t *)(v30 + v7);
    int32_t * v34 = (int32_t *)(v31 + v10); // 0x266
    *v34 = *v34 ^ *(int32_t *)(v30 + v9);
    int32_t * v35 = (int32_t *)(v31 + v12); // 0x272
    *v35 = *v35 ^ *(int32_t *)(v30 + v11);
    int64_t v36 = v29 + 1; // 0x276
    v29 = v36;
    while (v36 != v28) {
        // 0x240
        v30 = 4 * (v29 + (v28 * v23 & 0xfffffffe));
        v31 = 16 * v29;
        v32 = (int32_t *)(v31 + a1);
        *v32 = *v32 ^ *(int32_t *)(v30 + v6);
        v33 = (int32_t *)(v31 + v8);
        *v33 = *v33 ^ *(int32_t *)(v30 + v7);
        v34 = (int32_t *)(v31 + v10);
        *v34 = *v34 ^ *(int32_t *)(v30 + v9);
        v35 = (int32_t *)(v31 + v12);
        *v35 = *v35 ^ *(int32_t *)(v30 + v11);
        v36 = v29 + 1;
        v29 = v36;
    }
    int32_t * v37 = (int32_t *)*(int64_t *)645; // 0x285
    int64_t v38 = 0; // 0x289
    int64_t v39 = 4 * v38; // 0x290
    int32_t v40 = *(int32_t *)(v39 + (int64_t)&g17); // 0x296
    int64_t v41 = (int64_t)*v37 + (int64_t)(*(int32_t *)(v39 + a1) != v40); // 0x29d
    *v37 = (int32_t)v41;
    int64_t v42 = v38 + 1; // 0x2a2
    int64_t v43 = v41 & 0xffffffff; // 0x2a9
    v38 = v42;
    while (v42 != 16) {
        // 0x290
        v39 = 4 * v38;
        v40 = *(int32_t *)(v39 + (int64_t)&g17);
        v41 = v43 + (int64_t)(*(int32_t *)(v39 + a1) != v40);
        *v37 = (int32_t)v41;
        v42 = v38 + 1;
        v43 = v41 & 0xffffffff;
        v38 = v42;
    }
    // 0x2ab
    return 0;
}
int32_t KeySchedule(int32_t type, int32_t * key) {
    int64_t v1; // 0x2c0
    int64_t v2; // 0x2c0
    int64_t v3; // 0x2c0
    char v4; // 0x2c0
    if (type < 0x2eec0) {
        if (type > 0x1f4ff) {
            // 0x357
            v1 = 8;
            v3 = 4;
            v2 = 15;
            v4 = 1;
            if (type != 0x1f500) {
                // 0x35f
                v1 = 4;
                v3 = 6;
                v2 = 13;
                v4 = 1;
                if (type != 0x2ee80) {
                    // 0x5c1
                    return -1;
                }
            }
        } else {
            // 0x317
            v1 = 4;
            v3 = 4;
            v2 = 11;
            v4 = 1;
            if (type != 0x1f480) {
                // 0x31f
                v1 = 6;
                v3 = 4;
                v2 = 13;
                v4 = 1;
                if (type != 0x1f4c0) {
                    // 0x5c1
                    return -1;
                }
            }
        }
        goto lab_0x3b2;
    } else {
        if (type < 0x3e880) {
            // 0x337
            v1 = 6;
            v3 = 6;
            v2 = 13;
            v4 = 1;
            if (type != 0x2eec0) {
                // 0x33f
                v1 = 8;
                v3 = 6;
                v2 = 15;
                v4 = 1;
                if (type != 0x2ef00) {
                    // 0x5c1
                    return -1;
                }
            }
            goto lab_0x3b2;
        } else {
            // 0x2da
            v1 = 4;
            v3 = 8;
            v2 = 15;
            v4 = 0;
            switch (type) {
                case 0x3e880: {
                    goto lab_0x3b2;
                }
                case 0x3e8c0: {
                    // 0x379
                    v1 = 6;
                    v3 = 8;
                    v2 = 15;
                    v4 = 0;
                    goto lab_0x3b2;
                }
                default: {
                    // 0x2f2
                    v1 = 8;
                    v3 = 8;
                    v2 = 15;
                    v4 = 0;
                    if (type != 0x3e900) {
                        // 0x5c1
                        return -1;
                    }
                    goto lab_0x3b2;
                }
            }
        }
    }
  lab_0x3b2:;
    int64_t v5 = *(int64_t *)964; // 0x3bd
    int64_t v6 = 0; // 0x3c4
    int64_t v7 = 4 * v6; // 0x3d0
    int32_t v8; // 0x3e4
    for (int64_t i = 0; i < 4; i++) {
        // 0x3e0
        v8 = *(int32_t *)(4 * (i + v7) + (int64_t)key);
        *(int32_t *)(v7 + v5 + 480 * i) = v8;
    }
    int64_t v9 = v6 + 1; // 0x3fe
    v6 = v9;
    while (v9 != v3) {
        // 0x3d0
        v7 = 4 * v6;
        for (int64_t i = 0; i < 4; i++) {
            // 0x3e0
            v8 = *(int32_t *)(4 * (i + v7) + (int64_t)key);
            *(int32_t *)(v7 + v5 + 480 * i) = v8;
        }
        // 0x3fe
        v9 = v6 + 1;
        v6 = v9;
    }
    int64_t v10 = *(int64_t *)1041; // 0x40a
    int64_t v11; // bp-32, 0x2c0
    int64_t v12 = (int64_t)&v11 - 24;
    int64_t v13 = 0; // 0x53d
    int32_t * v14; // 0x550
    int32_t v15; // 0x550
    int32_t v16; // 0x559
    int32_t v17; // 0x573
    int64_t v18; // 0x57b
    if ((v4 | (char)((v3 & 0xffffffff) % v3 != 4)) == 0) {
        v14 = (int32_t *)(4 * v13 + v12);
        v15 = *v14;
        v16 = v15 >= 0 ? v15 : v15 + 15;
        v17 = *(int32_t *)(64 * (int64_t)(v16 >> 4) + v10 + 4 * (int64_t)(v15 - (v16 & -16)));
        *v14 = v17;
        v18 = v13 + 1;
        v13 = v18;
        while (v18 != 4) {
            // 0x550
            v14 = (int32_t *)(4 * v13 + v12);
            v15 = *v14;
            v16 = v15 >= 0 ? v15 : v15 + 15;
            v17 = *(int32_t *)(64 * (int64_t)(v16 >> 4) + v10 + 4 * (int64_t)(v15 - (v16 & -16)));
            *v14 = v17;
            v18 = v13 + 1;
            v13 = v18;
        }
    }
    int64_t v19; // 0x597
    int32_t v20; // 0x59e
    for (int64_t i = 0; i < 4; i++) {
        // 0x590
        v19 = 480 * i + v5;
        v20 = *(int32_t *)v19;
        *(int32_t *)(v19 + 4 * v3) = v20 ^ *(int32_t *)(4 * i + v12);
    }
    int64_t v21 = v3 + 1; // 0x5ad
    int64_t v22 = v21; // 0x5b3
    while (v21 != v2 * v1) {
        // 0x420
        v13 = 0;
        if ((v4 | (char)((v22 & 0xffffffff) % v3 != 4)) == 0) {
            v14 = (int32_t *)(4 * v13 + v12);
            v15 = *v14;
            v16 = v15 >= 0 ? v15 : v15 + 15;
            v17 = *(int32_t *)(64 * (int64_t)(v16 >> 4) + v10 + 4 * (int64_t)(v15 - (v16 & -16)));
            *v14 = v17;
            v18 = v13 + 1;
            v13 = v18;
            while (v18 != 4) {
                // 0x550
                v14 = (int32_t *)(4 * v13 + v12);
                v15 = *v14;
                v16 = v15 >= 0 ? v15 : v15 + 15;
                v17 = *(int32_t *)(64 * (int64_t)(v16 >> 4) + v10 + 4 * (int64_t)(v15 - (v16 & -16)));
                *v14 = v17;
                v18 = v13 + 1;
                v13 = v18;
            }
        }
        for (int64_t i = 0; i < 4; i++) {
            // 0x590
            v19 = 480 * i + v5;
            v20 = *(int32_t *)(v19 + 4 * (v22 - v3));
            *(int32_t *)(v19 + 4 * v22) = v20 ^ *(int32_t *)(4 * i + v12);
        }
        // 0x5ad
        v21 = v22 + 1;
        v22 = v21;
    }
    // 0x5c1
    return 0;
}
void ByteSub_ShiftRow(int32_t * statemt, int32_t nb) {
    int64_t v1 = (int64_t)statemt;
    int64_t v2 = v1;
    int64_t v3; // 0x680
    switch (nb) {
        case 8: {
            int32_t * v4 = (int32_t *)(v1 + 4); // 0x847
            int32_t v5 = *v4; // 0x847
            int32_t v6 = *(int32_t *)(v1 + 8); // 0x84a
            int64_t v7 = *(int64_t *)2147; // 0x85c
            int32_t v8 = *(int32_t *)(64 * (int64_t)(v5 >> 4) + v7 + (int64_t)(4 * v5 & 60)); // 0x866
            int32_t v9 = *(int32_t *)(v1 + 20); // 0x869
            int32_t v10 = *(int32_t *)(64 * (int64_t)(v9 >> 4) + v7 + (int64_t)(4 * v9 & 60)); // 0x880
            *v4 = v10;
            int32_t v11 = *(int32_t *)(v2 + 36); // 0x887
            int32_t v12 = *(int32_t *)(64 * (int64_t)(v11 >> 4) + v7 + (int64_t)(4 * v11 & 60)); // 0x89e
            *(int32_t *)(v2 + 20) = v12;
            int32_t v13 = *(int32_t *)(v2 + 52); // 0x8a5
            int32_t v14 = *(int32_t *)(64 * (int64_t)(v13 >> 4) + v7 + (int64_t)(4 * v13 & 60)); // 0x8bc
            *(int32_t *)(v2 + 36) = v14;
            int32_t v15 = *(int32_t *)(v2 + 68); // 0x8c3
            int32_t v16 = *(int32_t *)(64 * (int64_t)(v15 >> 4) + v7 + (int64_t)(4 * v15 & 60)); // 0x8da
            *(int32_t *)(v2 + 52) = v16;
            int32_t v17 = *(int32_t *)(v2 + 84); // 0x8e1
            int32_t v18 = *(int32_t *)(64 * (int64_t)(v17 >> 4) + v7 + (int64_t)(4 * v17 & 60)); // 0x8f8
            *(int32_t *)(v2 + 68) = v18;
            int32_t v19 = *(int32_t *)(v2 + 100); // 0x8ff
            int32_t v20 = *(int32_t *)(64 * (int64_t)(v19 >> 4) + v7 + (int64_t)(4 * v19 & 60)); // 0x916
            *(int32_t *)(v2 + 84) = v20;
            int32_t v21 = *(int32_t *)(v2 + 116); // 0x91d
            int32_t v22 = *(int32_t *)(64 * (int64_t)(v21 >> 4) + v7 + (int64_t)(4 * v21 & 60)); // 0x934
            *(int32_t *)(v2 + 100) = v22;
            *(int32_t *)(v2 + 116) = v8;
            int32_t v23 = *(int32_t *)(64 * (int64_t)(v6 >> 4) + v7 + (int64_t)(4 * v6 & 60)); // 0x950
            int32_t v24 = *(int32_t *)(v2 + 56); // 0x953
            int32_t v25 = *(int32_t *)(64 * (int64_t)(v24 >> 4) + v7 + (int64_t)(4 * v24 & 60)); // 0x968
            *(int32_t *)(v2 + 8) = v25;
            int32_t v26 = *(int32_t *)(v2 + 104); // 0x96e
            int32_t v27 = *(int32_t *)(64 * (int64_t)(v26 >> 4) + v7 + (int64_t)(4 * v26 & 60)); // 0x983
            *(int32_t *)(v2 + 56) = v27;
            int32_t v28 = *(int32_t *)(v2 + 24); // 0x989
            int32_t v29 = *(int32_t *)(64 * (int64_t)(v28 >> 4) + v7 + (int64_t)(4 * v28 & 60)); // 0x99e
            *(int32_t *)(v2 + 104) = v29;
            int32_t v30 = *(int32_t *)(v2 + 72); // 0x9a4
            int32_t v31 = *(int32_t *)(64 * (int64_t)(v30 >> 4) + v7 + (int64_t)(4 * v30 & 60)); // 0x9b9
            *(int32_t *)(v2 + 24) = v31;
            int32_t v32 = *(int32_t *)(v2 + 120); // 0x9bf
            int32_t v33 = *(int32_t *)(64 * (int64_t)(v32 >> 4) + v7 + (int64_t)(4 * v32 & 60)); // 0x9d4
            *(int32_t *)(v2 + 72) = v33;
            int32_t v34 = *(int32_t *)(v2 + 40); // 0x9da
            int32_t v35 = *(int32_t *)(64 * (int64_t)(v34 >> 4) + v7 + (int64_t)(4 * v34 & 60)); // 0x9ef
            *(int32_t *)(v2 + 120) = v35;
            int32_t v36 = *(int32_t *)(v2 + 88); // 0x9f5
            int32_t v37 = *(int32_t *)(64 * (int64_t)(v36 >> 4) + v7 + (int64_t)(4 * v36 & 60)); // 0xa0a
            *(int32_t *)(v2 + 40) = v37;
            *(int32_t *)(v2 + 88) = v23;
            int32_t * v38 = (int32_t *)(v2 + 12); // 0xa13
            int32_t v39 = *v38; // 0xa13
            int32_t v40 = *(int32_t *)(v2 + 76); // 0xa16
            int32_t v41 = *(int32_t *)(64 * (int64_t)(v39 >> 4) + v7 + (int64_t)(4 * v39 & 60)); // 0xa2b
            int32_t v42 = *(int32_t *)(64 * (int64_t)(v40 >> 4) + v7 + (int64_t)(4 * v40 & 60)); // 0xa40
            *v38 = v42;
            *(int32_t *)(v2 + 76) = v41;
            int32_t * v43 = (int32_t *)(v2 + 28); // 0xa49
            int32_t v44 = *v43; // 0xa49
            int32_t v45 = *(int32_t *)(v2 + 92); // 0xa4c
            int32_t v46 = *(int32_t *)(64 * (int64_t)(v44 >> 4) + v7 + (int64_t)(4 * v44 & 60)); // 0xa61
            int32_t v47 = *(int32_t *)(64 * (int64_t)(v45 >> 4) + v7 + (int64_t)(4 * v45 & 60)); // 0xa76
            *v43 = v47;
            *(int32_t *)(v2 + 92) = v46;
            int32_t * v48 = (int32_t *)(v2 + 44); // 0xa7f
            int32_t v49 = *v48; // 0xa7f
            int32_t v50 = *(int32_t *)(v2 + 108); // 0xa82
            int32_t v51 = *(int32_t *)(64 * (int64_t)(v49 >> 4) + v7 + (int64_t)(4 * v49 & 60)); // 0xa97
            int32_t v52 = *(int32_t *)(64 * (int64_t)(v50 >> 4) + v7 + (int64_t)(4 * v50 & 60)); // 0xaac
            *v48 = v52;
            *(int32_t *)(v2 + 108) = v51;
            int32_t * v53 = (int32_t *)(v2 + 60); // 0xab5
            int32_t v54 = *v53; // 0xab5
            int32_t v55 = *(int32_t *)(v2 + 124); // 0xab8
            int32_t v56 = *(int32_t *)(64 * (int64_t)(v54 >> 4) + v7 + (int64_t)(4 * v54 & 60)); // 0xacd
            int32_t v57 = *(int32_t *)(64 * (int64_t)(v55 >> 4) + v7 + (int64_t)(4 * v55 & 60)); // 0xae2
            *v53 = v57;
            *(int32_t *)(v2 + 124) = v56;
            int32_t v58 = *(int32_t *)&v2; // 0xaeb
            int32_t v59 = *(int32_t *)(64 * (int64_t)(v58 >> 4) + v7 + (int64_t)(4 * v58 & 60)); // 0xaff
            *(int32_t *)v2 = v59;
            int32_t * v60 = (int32_t *)(v2 + 16); // 0xb04
            int32_t v61 = *v60; // 0xb04
            int32_t v62 = *(int32_t *)(64 * (int64_t)(v61 >> 4) + v7 + (int64_t)(4 * v61 & 60)); // 0xb19
            *v60 = v62;
            int32_t * v63 = (int32_t *)(v2 + 32); // 0xb1f
            int32_t v64 = *v63; // 0xb1f
            int32_t v65 = *(int32_t *)(64 * (int64_t)(v64 >> 4) + v7 + (int64_t)(4 * v64 & 60)); // 0xb34
            *v63 = v65;
            int32_t * v66 = (int32_t *)(v2 + 48); // 0xb3a
            int32_t v67 = *v66; // 0xb3a
            int32_t v68 = *(int32_t *)(64 * (int64_t)(v67 >> 4) + v7 + (int64_t)(4 * v67 & 60)); // 0xb4f
            *v66 = v68;
            int32_t * v69 = (int32_t *)(v2 + 64); // 0xb55
            int32_t v70 = *v69; // 0xb55
            int32_t v71 = *(int32_t *)(64 * (int64_t)(v70 >> 4) + v7 + (int64_t)(4 * v70 & 60)); // 0xb6a
            *v69 = v71;
            int32_t * v72 = (int32_t *)(v2 + 80); // 0xb70
            int32_t v73 = *v72; // 0xb70
            int32_t v74 = *(int32_t *)(64 * (int64_t)(v73 >> 4) + v7 + (int64_t)(4 * v73 & 60)); // 0xb85
            *v72 = v74;
            int32_t * v75 = (int32_t *)(v2 + 96); // 0xb8b
            int32_t v76 = *v75; // 0xb8b
            int32_t v77 = *(int32_t *)(64 * (int64_t)(v76 >> 4) + v7 + (int64_t)(4 * v76 & 60)); // 0xba0
            *v75 = v77;
            int64_t v78 = v2 + 112; // 0xba6
            v2 = v78;
            v3 = v78;
            // break -> 0xe34
            break;
        }
        case 6: {
            int32_t * v79 = (int32_t *)(v1 + 4); // 0xbaf
            int32_t v80 = *v79; // 0xbaf
            int32_t v81 = *(int32_t *)(v1 + 8); // 0xbb2
            int64_t v82 = *(int64_t *)3019; // 0xbc4
            int32_t v83 = *(int32_t *)(64 * (int64_t)(v80 >> 4) + v82 + (int64_t)(4 * v80 & 60)); // 0xbce
            int32_t v84 = *(int32_t *)(v1 + 20); // 0xbd1
            int32_t v85 = *(int32_t *)(64 * (int64_t)(v84 >> 4) + v82 + (int64_t)(4 * v84 & 60)); // 0xbe8
            *v79 = v85;
            int32_t v86 = *(int32_t *)(v2 + 36); // 0xbef
            int32_t v87 = *(int32_t *)(64 * (int64_t)(v86 >> 4) + v82 + (int64_t)(4 * v86 & 60)); // 0xc06
            *(int32_t *)(v2 + 20) = v87;
            int32_t v88 = *(int32_t *)(v2 + 52); // 0xc0d
            int32_t v89 = *(int32_t *)(64 * (int64_t)(v88 >> 4) + v82 + (int64_t)(4 * v88 & 60)); // 0xc24
            *(int32_t *)(v2 + 36) = v89;
            int32_t v90 = *(int32_t *)(v2 + 68); // 0xc2b
            int32_t v91 = *(int32_t *)(64 * (int64_t)(v90 >> 4) + v82 + (int64_t)(4 * v90 & 60)); // 0xc42
            *(int32_t *)(v2 + 52) = v91;
            int32_t v92 = *(int32_t *)(v2 + 84); // 0xc49
            int32_t v93 = *(int32_t *)(64 * (int64_t)(v92 >> 4) + v82 + (int64_t)(4 * v92 & 60)); // 0xc60
            *(int32_t *)(v2 + 68) = v93;
            *(int32_t *)(v2 + 84) = v83;
            int32_t v94 = *(int32_t *)(64 * (int64_t)(v81 >> 4) + v82 + (int64_t)(4 * v81 & 60)); // 0xc7c
            int32_t v95 = *(int32_t *)(v2 + 40); // 0xc7f
            int32_t v96 = *(int32_t *)(64 * (int64_t)(v95 >> 4) + v82 + (int64_t)(4 * v95 & 60)); // 0xc94
            *(int32_t *)(v2 + 8) = v96;
            int32_t v97 = *(int32_t *)(v2 + 72); // 0xc9a
            int32_t v98 = *(int32_t *)(64 * (int64_t)(v97 >> 4) + v82 + (int64_t)(4 * v97 & 60)); // 0xcaf
            *(int32_t *)(v2 + 40) = v98;
            *(int32_t *)(v2 + 72) = v94;
            int32_t * v99 = (int32_t *)(v2 + 24); // 0xcb8
            int32_t v100 = *v99; // 0xcb8
            int32_t v101 = *(int32_t *)(v2 + 56); // 0xcbb
            int32_t v102 = *(int32_t *)(64 * (int64_t)(v100 >> 4) + v82 + (int64_t)(4 * v100 & 60)); // 0xcd0
            int32_t v103 = *(int32_t *)(64 * (int64_t)(v101 >> 4) + v82 + (int64_t)(4 * v101 & 60)); // 0xce5
            *v99 = v103;
            int32_t v104 = *(int32_t *)(v2 + 88); // 0xceb
            int32_t v105 = *(int32_t *)(64 * (int64_t)(v104 >> 4) + v82 + (int64_t)(4 * v104 & 60)); // 0xd00
            *(int32_t *)(v2 + 56) = v105;
            *(int32_t *)(v2 + 88) = v102;
            int32_t * v106 = (int32_t *)(v2 + 12); // 0xd09
            int32_t v107 = *v106; // 0xd09
            int32_t v108 = *(int32_t *)(v2 + 60); // 0xd0c
            int32_t v109 = *(int32_t *)(64 * (int64_t)(v107 >> 4) + v82 + (int64_t)(4 * v107 & 60)); // 0xd21
            int32_t v110 = *(int32_t *)(64 * (int64_t)(v108 >> 4) + v82 + (int64_t)(4 * v108 & 60)); // 0xd36
            *v106 = v110;
            *(int32_t *)(v2 + 60) = v109;
            int32_t * v111 = (int32_t *)(v2 + 28); // 0xd3f
            int32_t v112 = *v111; // 0xd3f
            int32_t v113 = *(int32_t *)(v2 + 76); // 0xd42
            int32_t v114 = *(int32_t *)(64 * (int64_t)(v112 >> 4) + v82 + (int64_t)(4 * v112 & 60)); // 0xd57
            int32_t v115 = *(int32_t *)(64 * (int64_t)(v113 >> 4) + v82 + (int64_t)(4 * v113 & 60)); // 0xd6c
            *v111 = v115;
            *(int32_t *)(v2 + 76) = v114;
            int32_t * v116 = (int32_t *)(v2 + 44); // 0xd75
            int32_t v117 = *v116; // 0xd75
            int32_t v118 = *(int32_t *)(v2 + 92); // 0xd78
            int32_t v119 = *(int32_t *)(64 * (int64_t)(v117 >> 4) + v82 + (int64_t)(4 * v117 & 60)); // 0xd8d
            int32_t v120 = *(int32_t *)(64 * (int64_t)(v118 >> 4) + v82 + (int64_t)(4 * v118 & 60)); // 0xda2
            *v116 = v120;
            *(int32_t *)(v2 + 92) = v119;
            int32_t v121 = *(int32_t *)&v2; // 0xdab
            int32_t v122 = *(int32_t *)(64 * (int64_t)(v121 >> 4) + v82 + (int64_t)(4 * v121 & 60)); // 0xdbf
            *(int32_t *)v2 = v122;
            int32_t * v123 = (int32_t *)(v2 + 16); // 0xdc4
            int32_t v124 = *v123; // 0xdc4
            int32_t v125 = *(int32_t *)(64 * (int64_t)(v124 >> 4) + v82 + (int64_t)(4 * v124 & 60)); // 0xdd9
            *v123 = v125;
            int32_t * v126 = (int32_t *)(v2 + 32); // 0xddf
            int32_t v127 = *v126; // 0xddf
            int32_t v128 = *(int32_t *)(64 * (int64_t)(v127 >> 4) + v82 + (int64_t)(4 * v127 & 60)); // 0xdf4
            *v126 = v128;
            int32_t * v129 = (int32_t *)(v2 + 48); // 0xdfa
            int32_t v130 = *v129; // 0xdfa
            int32_t v131 = *(int32_t *)(64 * (int64_t)(v130 >> 4) + v82 + (int64_t)(4 * v130 & 60)); // 0xe0f
            *v129 = v131;
            int32_t * v132 = (int32_t *)(v2 + 64); // 0xe15
            int32_t v133 = *v132; // 0xe15
            int32_t v134 = *(int32_t *)(64 * (int64_t)(v133 >> 4) + v82 + (int64_t)(4 * v133 & 60)); // 0xe2a
            *v132 = v134;
            int64_t v135 = v2 + 80; // 0xe30
            v2 = v135;
            v3 = v135;
            // break -> 0xe34
            break;
        }
        default: {
            if (nb != 4) {
                // 0xe51
                return;
            }
            int32_t * v136 = (int32_t *)(v1 + 4); // 0x69b
            int32_t v137 = *v136; // 0x69b
            int32_t v138 = *(int32_t *)(v1 + 8); // 0x69e
            int64_t v139 = *(int64_t *)1719; // 0x6b0
            int32_t v140 = *(int32_t *)(64 * (int64_t)(v137 >> 4) + v139 + (int64_t)(4 * v137 & 60)); // 0x6ba
            int32_t v141 = *(int32_t *)(v1 + 20); // 0x6bd
            int32_t v142 = *(int32_t *)(64 * (int64_t)(v141 >> 4) + v139 + (int64_t)(4 * v141 & 60)); // 0x6d4
            *v136 = v142;
            int32_t v143 = *(int32_t *)(v2 + 36); // 0x6db
            int32_t v144 = *(int32_t *)(64 * (int64_t)(v143 >> 4) + v139 + (int64_t)(4 * v143 & 60)); // 0x6f2
            *(int32_t *)(v2 + 20) = v144;
            int32_t v145 = *(int32_t *)(v2 + 52); // 0x6f9
            int32_t v146 = *(int32_t *)(64 * (int64_t)(v145 >> 4) + v139 + (int64_t)(4 * v145 & 60)); // 0x710
            *(int32_t *)(v2 + 36) = v146;
            *(int32_t *)(v2 + 52) = v140;
            int32_t v147 = *(int32_t *)(64 * (int64_t)(v138 >> 4) + v139 + (int64_t)(4 * v138 & 60)); // 0x72c
            int32_t v148 = *(int32_t *)(v2 + 40); // 0x72f
            int32_t v149 = *(int32_t *)(64 * (int64_t)(v148 >> 4) + v139 + (int64_t)(4 * v148 & 60)); // 0x744
            *(int32_t *)(v2 + 8) = v149;
            *(int32_t *)(v2 + 40) = v147;
            int32_t * v150 = (int32_t *)(v2 + 24); // 0x74d
            int32_t v151 = *v150; // 0x74d
            int32_t v152 = *(int32_t *)(64 * (int64_t)(v151 >> 4) + v139 + (int64_t)(4 * v151 & 60)); // 0x762
            int32_t v153 = *(int32_t *)(v2 + 56); // 0x765
            int32_t v154 = *(int32_t *)(64 * (int64_t)(v153 >> 4) + v139 + (int64_t)(4 * v153 & 60)); // 0x77a
            *v150 = v154;
            *(int32_t *)(v2 + 56) = v152;
            int32_t * v155 = (int32_t *)(v2 + 12); // 0x783
            int32_t v156 = *v155; // 0x783
            int32_t v157 = *(int32_t *)(64 * (int64_t)(v156 >> 4) + v139 + (int64_t)(4 * v156 & 60)); // 0x798
            int32_t v158 = *(int32_t *)(v2 + 60); // 0x79b
            int32_t v159 = *(int32_t *)(64 * (int64_t)(v158 >> 4) + v139 + (int64_t)(4 * v158 & 60)); // 0x7b0
            *v155 = v159;
            int32_t v160 = *(int32_t *)(v2 + 44); // 0x7b6
            int32_t v161 = *(int32_t *)(64 * (int64_t)(v160 >> 4) + v139 + (int64_t)(4 * v160 & 60)); // 0x7cb
            *(int32_t *)(v2 + 60) = v161;
            int32_t v162 = *(int32_t *)(v2 + 28); // 0x7d1
            int32_t v163 = *(int32_t *)(64 * (int64_t)(v162 >> 4) + v139 + (int64_t)(4 * v162 & 60)); // 0x7e6
            *(int32_t *)(v2 + 44) = v163;
            *(int32_t *)(v2 + 28) = v157;
            int32_t v164 = *(int32_t *)&v2; // 0x7ef
            int32_t v165 = *(int32_t *)(64 * (int64_t)(v164 >> 4) + v139 + (int64_t)(4 * v164 & 60)); // 0x803
            *(int32_t *)v2 = v165;
            int32_t * v166 = (int32_t *)(v2 + 16); // 0x808
            int32_t v167 = *v166; // 0x808
            int32_t v168 = *(int32_t *)(64 * (int64_t)(v167 >> 4) + v139 + (int64_t)(4 * v167 & 60)); // 0x81d
            *v166 = v168;
            int32_t * v169 = (int32_t *)(v2 + 32); // 0x823
            int32_t v170 = *v169; // 0x823
            int32_t v171 = *(int32_t *)(64 * (int64_t)(v170 >> 4) + v139 + (int64_t)(4 * v170 & 60)); // 0x838
            *v169 = v171;
            int64_t v172 = v2 + 48; // 0x83e
            v2 = v172;
            v3 = v172;
            // break -> 0xe34
            break;
        }
    }
    int32_t * v173 = (int32_t *)v3; // 0xe34
    int32_t v174 = *v173; // 0xe34
    int64_t v175 = *(int64_t *)3660; // 0xe45
    int32_t v176 = *(int32_t *)(64 * (int64_t)(v174 >> 4) + v175 + (int64_t)(4 * v174 & 60)); // 0xe4c
    *v173 = v176;
}
int32_t MixColumn_AddRoundKey(int32_t * statemt, int32_t nb, int32_t n) {
    if (nb < 1) {
        // 0x107e
        return 0;
    }
    int64_t v1 = (int64_t)statemt;
    int64_t v2; // bp-88, 0xe60
    int64_t v3 = &v2; // 0xe6a
    int64_t v4 = nb; // 0xfe0
    int64_t v5 = 0; // 0xe91
    int64_t v6 = 16 * v5; // 0xea3
    int64_t v7 = v6 + v1;
    int32_t v8 = *(int32_t *)v7; // 0xea7
    int32_t v9 = 2 * v8; // 0xeab
    int32_t v10 = (v8 & 0x7fffff80) != 128 ? v9 : v9 ^ 283; // 0xec7
    int64_t v11 = v6 + v3;
    int32_t * v12 = (int32_t *)(v11 - 96); // 0xecb
    *v12 = v10;
    int32_t v13 = *(int32_t *)(v7 + 4); // 0xed0
    int32_t v14 = 2 * v13; // 0xed5
    int32_t v15 = v14 ^ v13; // 0xedb
    int32_t v16 = v15 ^ v10; // 0xee8
    int32_t v17 = (v15 & -256) != 256 ? v16 : v16 ^ 283; // 0xefb
    *v12 = v17;
    int32_t v18 = *(int32_t *)(v7 + 8); // 0xf04
    int32_t v19 = *(int32_t *)(v7 + 12); // 0xf09
    int64_t v20 = 4 * (v5 + (int64_t)(n * nb)); // 0xf1e
    int32_t v21 = 2 * v18; // 0xf46
    int32_t v22 = v21 ^ v18; // 0xf4c
    int32_t v23 = v22 ^ ((v13 & 0x7fffff80) != 128 ? v14 : v14 ^ 283); // 0xf56
    int32_t v24 = (v22 & -256) != 256 ? v23 : v23 ^ 283; // 0xf68
    int32_t v25 = *(int32_t *)(v20 + 480 + *(int64_t *)3955); // 0xf73
    int32_t v26 = 2 * v19; // 0xf9c
    int32_t v27 = v26 ^ v19; // 0xfa2
    int32_t v28 = ((v18 & 0x7fffff80) != 128 ? v21 : v21 ^ 283) ^ v27; // 0xfaf
    int32_t v29 = (v27 & -256) != 256 ? v28 : v28 ^ 283; // 0xfc0
    *v12 = v19 ^ v18 ^ *(int32_t *)(*(int64_t *)3870 + v20) ^ v17;
    int32_t v30 = v9 ^ v8; // 0xfc8
    int64_t v31 = *(int64_t *)4050 + v20;
    *(int32_t *)(v11 - 92) = v19 ^ v8 ^ v25 ^ v24;
    int32_t v32 = ((v19 & 0x7fffff80) != 128 ? v26 : v26 ^ 283) ^ v30; // 0x1003
    int32_t v33 = (v30 & -256) != 256 ? v32 : v32 ^ 283; // 0x101b
    *(int32_t *)(v11 - 88) = v13 ^ v8 ^ v29 ^ *(int32_t *)(v31 + 960);
    *(int32_t *)(v11 - 84) = v18 ^ v13 ^ v33 ^ *(int32_t *)(v31 + 1440);
    v5++;
    int64_t v34 = 0; // 0x103b
    while (v5 != v4) {
        // 0xea0
        v6 = 16 * v5;
        v7 = v6 + v1;
        v8 = *(int32_t *)v7;
        v9 = 2 * v8;
        v10 = (v8 & 0x7fffff80) != 128 ? v9 : v9 ^ 283;
        v11 = v6 + v3;
        v12 = (int32_t *)(v11 - 96);
        *v12 = v10;
        v13 = *(int32_t *)(v7 + 4);
        v14 = 2 * v13;
        v15 = v14 ^ v13;
        v16 = v15 ^ v10;
        v17 = (v15 & -256) != 256 ? v16 : v16 ^ 283;
        *v12 = v17;
        v18 = *(int32_t *)(v7 + 8);
        v19 = *(int32_t *)(v7 + 12);
        v20 = 4 * (v5 + (int64_t)(n * nb));
        v21 = 2 * v18;
        v22 = v21 ^ v18;
        v23 = v22 ^ ((v13 & 0x7fffff80) != 128 ? v14 : v14 ^ 283);
        v24 = (v22 & -256) != 256 ? v23 : v23 ^ 283;
        v25 = *(int32_t *)(v20 + 480 + *(int64_t *)3955);
        v26 = 2 * v19;
        v27 = v26 ^ v19;
        v28 = ((v18 & 0x7fffff80) != 128 ? v21 : v21 ^ 283) ^ v27;
        v29 = (v27 & -256) != 256 ? v28 : v28 ^ 283;
        *v12 = v19 ^ v18 ^ *(int32_t *)(*(int64_t *)3870 + v20) ^ v17;
        v30 = v9 ^ v8;
        v31 = *(int64_t *)4050 + v20;
        *(int32_t *)(v11 - 92) = v19 ^ v8 ^ v25 ^ v24;
        v32 = ((v19 & 0x7fffff80) != 128 ? v26 : v26 ^ 283) ^ v30;
        v33 = (v30 & -256) != 256 ? v32 : v32 ^ 283;
        *(int32_t *)(v11 - 88) = v13 ^ v8 ^ v29 ^ *(int32_t *)(v31 + 960);
        *(int32_t *)(v11 - 84) = v18 ^ v13 ^ v33 ^ *(int32_t *)(v31 + 1440);
        v5++;
        v34 = 0;
    }
    int64_t v35 = 16 * v34; // 0x1053
    int64_t v36 = v35 + v3;
    int64_t v37 = v35 + v1;
    *(int32_t *)v37 = *(int32_t *)(v36 - 96);
    *(int32_t *)(v37 + 4) = *(int32_t *)(v36 - 92);
    *(int32_t *)(v37 + 8) = *(int32_t *)(v36 - 88);
    *(int32_t *)(v37 + 12) = *(int32_t *)(v36 - 84);
    int64_t v38 = v34 + 1; // 0x1076
    v34 = v38;
    while (v38 != v4) {
        // 0x1050
        v35 = 16 * v34;
        v36 = v35 + v3;
        v37 = v35 + v1;
        *(int32_t *)v37 = *(int32_t *)(v36 - 96);
        *(int32_t *)(v37 + 4) = *(int32_t *)(v36 - 92);
        *(int32_t *)(v37 + 8) = *(int32_t *)(v36 - 88);
        *(int32_t *)(v37 + 12) = *(int32_t *)(v36 - 84);
        v38 = v34 + 1;
        v34 = v38;
    }
    // 0x107e
    return 0;
}
int64_t AddRoundKey(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a2; // 0x5db
    int64_t v2; // 0x5d0
    if (v1 > 0x2eeff) {
        switch (v1) {
            case 0x2ef00: {
                // 0x616
                v2 = 8;
                goto lab_0x61b;
            }
            case 0x3e900: {
                // 0x616
                v2 = 8;
                goto lab_0x61b;
            }
            default: {
                // 0x607
                v2 = 4;
                if (v1 != 0x3e8c0) {
                    goto lab_0x61b;
                } else {
                    // 0x60f
                    v2 = 6;
                    goto lab_0x61b;
                }
            }
        }
    } else {
        // 0x5dd
        v2 = 4;
        switch (v1) {
            case 0x1f4c0: {
                // 0x60f
                v2 = 6;
                goto lab_0x61b;
            }
            case 0x1f500: {
                // 0x616
                v2 = 8;
                goto lab_0x61b;
            }
            case 0x2eec0: {
                // 0x60f
                v2 = 6;
                goto lab_0x61b;
            }
            default: {
                goto lab_0x61b;
            }
        }
    }
  lab_0x61b:;
    int64_t v3 = 0; // 0x62c
    int64_t v4 = 4 * (v3 + (0x100000000 * a3 * v2 >> 32)) + *(int64_t *)1580;
    int64_t v5 = 16 * v3 + a1;
    int32_t * v6 = (int32_t *)v5; // 0x63f
    *v6 = *v6 ^ *(int32_t *)v4;
    int32_t * v7 = (int32_t *)(v5 + 4); // 0x64b
    *v7 = *v7 ^ *(int32_t *)(v4 + 480);
    int32_t * v8 = (int32_t *)(v5 + 8); // 0x658
    *v8 = *v8 ^ *(int32_t *)(v4 + 960);
    int32_t * v9 = (int32_t *)(v5 + 12); // 0x665
    *v9 = *v9 ^ *(int32_t *)(v4 + 1440);
    int64_t v10 = v3 + 1; // 0x66a
    v3 = v10;
    while (v10 != v2) {
        // 0x630
        v4 = 4 * (v3 + (0x100000000 * a3 * v2 >> 32)) + *(int64_t *)1580;
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
    // 0x672
    return 0;
}
int32_t decrypt(int32_t * statemt, int32_t * key, int32_t type) {
    // 0x1090
    KeySchedule(type, key);
    int64_t v1; // 0x1090
    int64_t result; // 0x1090
    int32_t v2; // 0x1090
    if (type < 0x2eec0) {
        if (type > 0x1f4ff) {
            if (type == 0x1f500) {
                // 0x111e
                v1 = 8;
                v2 = 14;
                goto lab_0x113b;
            } else {
                // 0x110f
                v1 = 4;
                v2 = 12;
                if (type != 0x2ee80) {
                    // 0x114d
                    return 4;
                }
                goto lab_0x113b;
            }
        } else {
            // 0x10de
            v1 = 4;
            v2 = 10;
            result = 4;
            switch (type) {
                case 0x1f480: {
                    goto lab_0x113b;
                }
                case 0x1f4c0: {
                    // 0x1125
                    v1 = 6;
                    v2 = 12;
                    goto lab_0x113b;
                }
                default: {
                    return result;
                }
            }
        }
    } else {
        if (type < 0x3e880) {
            // 0x10f5
            result = 4;
            switch (type) {
                case 0x2eec0: {
                    // 0x1125
                    v1 = 6;
                    v2 = 12;
                    goto lab_0x113b;
                }
                case 0x2ef00: {
                    // 0x111e
                    v1 = 8;
                    v2 = 14;
                    goto lab_0x113b;
                }
                default: {
                    return result;
                }
            }
        } else {
            // 0x10bc
            v1 = 4;
            v2 = 14;
            result = 4;
            switch (type) {
                case 0x3e880: {
                    goto lab_0x113b;
                }
                case 0x3e8c0: {
                    // 0x1131
                    v1 = 6;
                    v2 = 14;
                    goto lab_0x113b;
                }
                case 0x3e900: {
                    // 0x111e
                    v1 = 8;
                    v2 = 14;
                    goto lab_0x113b;
                }
                default: {
                    return result;
                }
            }
        }
    }
  lab_0x113b:
    // 0x113b
    *(int32_t *)*(int64_t *)0x1142 = v2;
    *(int32_t *)*(int64_t *)0x114b = (int32_t)v1;
    result = v1;
    // 0x114d
    return result;
}
void InversShiftRow_ByteSub(int32_t * statemt, int32_t nb) {
    int64_t v1 = (int64_t)statemt;
    int64_t v2 = v1;
    int64_t v3; // 0x1320
    switch (nb) {
        case 8: {
            int32_t * v4 = (int32_t *)(v1 + 116); // 0x14e4
            int32_t v5 = *v4; // 0x14e4
            int64_t v6 = *(int64_t *)0x14fd; // 0x14f6
            int32_t v7 = *(int32_t *)(64 * (int64_t)(v5 >> 4) + v6 + (int64_t)(4 * v5 & 60)); // 0x1500
            int32_t v8 = *(int32_t *)(v1 + 100); // 0x1503
            int32_t v9 = *(int32_t *)(64 * (int64_t)(v8 >> 4) + v6 + (int64_t)(4 * v8 & 60)); // 0x1518
            *v4 = v9;
            int32_t v10 = *(int32_t *)(v2 + 84); // 0x151e
            int32_t v11 = *(int32_t *)(64 * (int64_t)(v10 >> 4) + v6 + (int64_t)(4 * v10 & 60)); // 0x1533
            *(int32_t *)(v2 + 100) = v11;
            int32_t v12 = *(int32_t *)(v2 + 68); // 0x1539
            int32_t v13 = *(int32_t *)(64 * (int64_t)(v12 >> 4) + v6 + (int64_t)(4 * v12 & 60)); // 0x154e
            *(int32_t *)(v2 + 84) = v13;
            int32_t v14 = *(int32_t *)(v2 + 52); // 0x1554
            int32_t v15 = *(int32_t *)(64 * (int64_t)(v14 >> 4) + v6 + (int64_t)(4 * v14 & 60)); // 0x1569
            *(int32_t *)(v2 + 68) = v15;
            int32_t v16 = *(int32_t *)(v2 + 36); // 0x156f
            int32_t v17 = *(int32_t *)(64 * (int64_t)(v16 >> 4) + v6 + (int64_t)(4 * v16 & 60)); // 0x1584
            *(int32_t *)(v2 + 52) = v17;
            int32_t v18 = *(int32_t *)(v2 + 4); // 0x158a
            int32_t v19 = *(int32_t *)(v2 + 20); // 0x158d
            int32_t v20 = *(int32_t *)(64 * (int64_t)(v19 >> 4) + v6 + (int64_t)(4 * v19 & 60)); // 0x15a4
            *(int32_t *)(v2 + 36) = v20;
            int32_t v21 = *(int32_t *)(64 * (int64_t)(v18 >> 4) + v6 + (int64_t)(4 * v18 & 60)); // 0x15bd
            *(int32_t *)(v2 + 20) = v21;
            *(int32_t *)(v2 + 4) = v7;
            int32_t * v22 = (int32_t *)(v2 + 120); // 0x15c6
            int32_t v23 = *v22; // 0x15c6
            int32_t v24 = *(int32_t *)(64 * (int64_t)(v23 >> 4) + v6 + (int64_t)(4 * v23 & 60)); // 0x15db
            int32_t v25 = *(int32_t *)(v2 + 72); // 0x15de
            int32_t v26 = *(int32_t *)(64 * (int64_t)(v25 >> 4) + v6 + (int64_t)(4 * v25 & 60)); // 0x15f3
            *v22 = v26;
            int32_t v27 = *(int32_t *)(v2 + 24); // 0x15f9
            int32_t v28 = *(int32_t *)(64 * (int64_t)(v27 >> 4) + v6 + (int64_t)(4 * v27 & 60)); // 0x160e
            *(int32_t *)(v2 + 72) = v28;
            int32_t v29 = *(int32_t *)(v2 + 104); // 0x1614
            int32_t v30 = *(int32_t *)(64 * (int64_t)(v29 >> 4) + v6 + (int64_t)(4 * v29 & 60)); // 0x1629
            *(int32_t *)(v2 + 24) = v30;
            int32_t v31 = *(int32_t *)(v2 + 56); // 0x162f
            int32_t v32 = *(int32_t *)(64 * (int64_t)(v31 >> 4) + v6 + (int64_t)(4 * v31 & 60)); // 0x1644
            *(int32_t *)(v2 + 104) = v32;
            int32_t v33 = *(int32_t *)(v2 + 8); // 0x164a
            int32_t v34 = *(int32_t *)(64 * (int64_t)(v33 >> 4) + v6 + (int64_t)(4 * v33 & 60)); // 0x165f
            *(int32_t *)(v2 + 56) = v34;
            int32_t v35 = *(int32_t *)(v2 + 88); // 0x1665
            int32_t v36 = *(int32_t *)(64 * (int64_t)(v35 >> 4) + v6 + (int64_t)(4 * v35 & 60)); // 0x167a
            *(int32_t *)(v2 + 8) = v36;
            int32_t v37 = *(int32_t *)(v2 + 40); // 0x1680
            int32_t v38 = *(int32_t *)(64 * (int64_t)(v37 >> 4) + v6 + (int64_t)(4 * v37 & 60)); // 0x1695
            *(int32_t *)(v2 + 88) = v38;
            *(int32_t *)(v2 + 40) = v24;
            int32_t v39 = *(int32_t *)(v2 + 60); // 0x169e
            int32_t * v40 = (int32_t *)(v2 + 124); // 0x16a1
            int32_t v41 = *v40; // 0x16a1
            int32_t v42 = *(int32_t *)(64 * (int64_t)(v41 >> 4) + v6 + (int64_t)(4 * v41 & 60)); // 0x16b6
            int32_t v43 = *(int32_t *)(64 * (int64_t)(v39 >> 4) + v6 + (int64_t)(4 * v39 & 60)); // 0x16cb
            *v40 = v43;
            *(int32_t *)(v2 + 60) = v42;
            int32_t v44 = *(int32_t *)(v2 + 44); // 0x16d4
            int32_t * v45 = (int32_t *)(v2 + 108); // 0x16d7
            int32_t v46 = *v45; // 0x16d7
            int32_t v47 = *(int32_t *)(64 * (int64_t)(v46 >> 4) + v6 + (int64_t)(4 * v46 & 60)); // 0x16ec
            int32_t v48 = *(int32_t *)(64 * (int64_t)(v44 >> 4) + v6 + (int64_t)(4 * v44 & 60)); // 0x1701
            *v45 = v48;
            *(int32_t *)(v2 + 44) = v47;
            int32_t v49 = *(int32_t *)(v2 + 28); // 0x170a
            int32_t * v50 = (int32_t *)(v2 + 92); // 0x170d
            int32_t v51 = *v50; // 0x170d
            int32_t v52 = *(int32_t *)(64 * (int64_t)(v51 >> 4) + v6 + (int64_t)(4 * v51 & 60)); // 0x1722
            int32_t v53 = *(int32_t *)(64 * (int64_t)(v49 >> 4) + v6 + (int64_t)(4 * v49 & 60)); // 0x1737
            *v50 = v53;
            *(int32_t *)(v2 + 28) = v52;
            int32_t v54 = *(int32_t *)(v2 + 12); // 0x1740
            int32_t * v55 = (int32_t *)(v2 + 76); // 0x1743
            int32_t v56 = *v55; // 0x1743
            int32_t v57 = *(int32_t *)(64 * (int64_t)(v56 >> 4) + v6 + (int64_t)(4 * v56 & 60)); // 0x1758
            int32_t v58 = *(int32_t *)(64 * (int64_t)(v54 >> 4) + v6 + (int64_t)(4 * v54 & 60)); // 0x176d
            *v55 = v58;
            *(int32_t *)(v2 + 12) = v57;
            int32_t v59 = *(int32_t *)&v2; // 0x1776
            int32_t v60 = *(int32_t *)(64 * (int64_t)(v59 >> 4) + v6 + (int64_t)(4 * v59 & 60)); // 0x178a
            *(int32_t *)v2 = v60;
            int32_t * v61 = (int32_t *)(v2 + 16); // 0x178f
            int32_t v62 = *v61; // 0x178f
            int32_t v63 = *(int32_t *)(64 * (int64_t)(v62 >> 4) + v6 + (int64_t)(4 * v62 & 60)); // 0x17a4
            *v61 = v63;
            int32_t * v64 = (int32_t *)(v2 + 32); // 0x17aa
            int32_t v65 = *v64; // 0x17aa
            int32_t v66 = *(int32_t *)(64 * (int64_t)(v65 >> 4) + v6 + (int64_t)(4 * v65 & 60)); // 0x17bf
            *v64 = v66;
            int32_t * v67 = (int32_t *)(v2 + 48); // 0x17c5
            int32_t v68 = *v67; // 0x17c5
            int32_t v69 = *(int32_t *)(64 * (int64_t)(v68 >> 4) + v6 + (int64_t)(4 * v68 & 60)); // 0x17da
            *v67 = v69;
            int32_t * v70 = (int32_t *)(v2 + 64); // 0x17e0
            int32_t v71 = *v70; // 0x17e0
            int32_t v72 = *(int32_t *)(64 * (int64_t)(v71 >> 4) + v6 + (int64_t)(4 * v71 & 60)); // 0x17f5
            *v70 = v72;
            int32_t * v73 = (int32_t *)(v2 + 80); // 0x17fb
            int32_t v74 = *v73; // 0x17fb
            int32_t v75 = *(int32_t *)(64 * (int64_t)(v74 >> 4) + v6 + (int64_t)(4 * v74 & 60)); // 0x1810
            *v73 = v75;
            int32_t * v76 = (int32_t *)(v2 + 96); // 0x1816
            int32_t v77 = *v76; // 0x1816
            int32_t v78 = *(int32_t *)(64 * (int64_t)(v77 >> 4) + v6 + (int64_t)(4 * v77 & 60)); // 0x182b
            *v76 = v78;
            int64_t v79 = v2 + 112; // 0x1831
            v2 = v79;
            v3 = v79;
            // break -> 0x1ab3
            break;
        }
        case 6: {
            int32_t * v80 = (int32_t *)(v1 + 84); // 0x183a
            int32_t v81 = *v80; // 0x183a
            int64_t v82 = *(int64_t *)0x1853; // 0x184c
            int32_t v83 = *(int32_t *)(64 * (int64_t)(v81 >> 4) + v82 + (int64_t)(4 * v81 & 60)); // 0x1856
            int32_t v84 = *(int32_t *)(v1 + 68); // 0x1859
            int32_t v85 = *(int32_t *)(64 * (int64_t)(v84 >> 4) + v82 + (int64_t)(4 * v84 & 60)); // 0x186e
            *v80 = v85;
            int32_t v86 = *(int32_t *)(v2 + 52); // 0x1874
            int32_t v87 = *(int32_t *)(64 * (int64_t)(v86 >> 4) + v82 + (int64_t)(4 * v86 & 60)); // 0x1889
            *(int32_t *)(v2 + 68) = v87;
            int32_t v88 = *(int32_t *)(v2 + 36); // 0x188f
            int32_t v89 = *(int32_t *)(64 * (int64_t)(v88 >> 4) + v82 + (int64_t)(4 * v88 & 60)); // 0x18a4
            *(int32_t *)(v2 + 52) = v89;
            int32_t v90 = *(int32_t *)(v2 + 4); // 0x18aa
            int32_t v91 = *(int32_t *)(v2 + 20); // 0x18ad
            int32_t v92 = *(int32_t *)(64 * (int64_t)(v91 >> 4) + v82 + (int64_t)(4 * v91 & 60)); // 0x18c4
            *(int32_t *)(v2 + 36) = v92;
            int32_t v93 = *(int32_t *)(64 * (int64_t)(v90 >> 4) + v82 + (int64_t)(4 * v90 & 60)); // 0x18dd
            *(int32_t *)(v2 + 20) = v93;
            *(int32_t *)(v2 + 4) = v83;
            int32_t * v94 = (int32_t *)(v2 + 88); // 0x18e6
            int32_t v95 = *v94; // 0x18e6
            int32_t v96 = *(int32_t *)(64 * (int64_t)(v95 >> 4) + v82 + (int64_t)(4 * v95 & 60)); // 0x18fb
            int32_t v97 = *(int32_t *)(v2 + 56); // 0x18fe
            int32_t v98 = *(int32_t *)(64 * (int64_t)(v97 >> 4) + v82 + (int64_t)(4 * v97 & 60)); // 0x1913
            *v94 = v98;
            int32_t v99 = *(int32_t *)(v2 + 24); // 0x1919
            int32_t v100 = *(int32_t *)(64 * (int64_t)(v99 >> 4) + v82 + (int64_t)(4 * v99 & 60)); // 0x192e
            *(int32_t *)(v2 + 56) = v100;
            *(int32_t *)(v2 + 24) = v96;
            int32_t v101 = *(int32_t *)(v2 + 40); // 0x1937
            int32_t * v102 = (int32_t *)(v2 + 72); // 0x193a
            int32_t v103 = *v102; // 0x193a
            int32_t v104 = *(int32_t *)(64 * (int64_t)(v103 >> 4) + v82 + (int64_t)(4 * v103 & 60)); // 0x194f
            int32_t v105 = *(int32_t *)(64 * (int64_t)(v101 >> 4) + v82 + (int64_t)(4 * v101 & 60)); // 0x1964
            *v102 = v105;
            int32_t v106 = *(int32_t *)(v2 + 8); // 0x196a
            int32_t v107 = *(int32_t *)(64 * (int64_t)(v106 >> 4) + v82 + (int64_t)(4 * v106 & 60)); // 0x197f
            *(int32_t *)(v2 + 40) = v107;
            *(int32_t *)(v2 + 8) = v104;
            int32_t v108 = *(int32_t *)(v2 + 12); // 0x1988
            int32_t * v109 = (int32_t *)(v2 + 60); // 0x198b
            int32_t v110 = *v109; // 0x198b
            int32_t v111 = *(int32_t *)(64 * (int64_t)(v110 >> 4) + v82 + (int64_t)(4 * v110 & 60)); // 0x19a0
            int32_t v112 = *(int32_t *)(64 * (int64_t)(v108 >> 4) + v82 + (int64_t)(4 * v108 & 60)); // 0x19b5
            *v109 = v112;
            *(int32_t *)(v2 + 12) = v111;
            int32_t v113 = *(int32_t *)(v2 + 28); // 0x19be
            int32_t * v114 = (int32_t *)(v2 + 76); // 0x19c1
            int32_t v115 = *v114; // 0x19c1
            int32_t v116 = *(int32_t *)(64 * (int64_t)(v115 >> 4) + v82 + (int64_t)(4 * v115 & 60)); // 0x19d6
            int32_t v117 = *(int32_t *)(64 * (int64_t)(v113 >> 4) + v82 + (int64_t)(4 * v113 & 60)); // 0x19eb
            *v114 = v117;
            *(int32_t *)(v2 + 28) = v116;
            int32_t v118 = *(int32_t *)(v2 + 44); // 0x19f4
            int32_t * v119 = (int32_t *)(v2 + 92); // 0x19f7
            int32_t v120 = *v119; // 0x19f7
            int32_t v121 = *(int32_t *)(64 * (int64_t)(v120 >> 4) + v82 + (int64_t)(4 * v120 & 60)); // 0x1a0c
            int32_t v122 = *(int32_t *)(64 * (int64_t)(v118 >> 4) + v82 + (int64_t)(4 * v118 & 60)); // 0x1a21
            *v119 = v122;
            *(int32_t *)(v2 + 44) = v121;
            int32_t v123 = *(int32_t *)&v2; // 0x1a2a
            int32_t v124 = *(int32_t *)(64 * (int64_t)(v123 >> 4) + v82 + (int64_t)(4 * v123 & 60)); // 0x1a3e
            *(int32_t *)v2 = v124;
            int32_t * v125 = (int32_t *)(v2 + 16); // 0x1a43
            int32_t v126 = *v125; // 0x1a43
            int32_t v127 = *(int32_t *)(64 * (int64_t)(v126 >> 4) + v82 + (int64_t)(4 * v126 & 60)); // 0x1a58
            *v125 = v127;
            int32_t * v128 = (int32_t *)(v2 + 32); // 0x1a5e
            int32_t v129 = *v128; // 0x1a5e
            int32_t v130 = *(int32_t *)(64 * (int64_t)(v129 >> 4) + v82 + (int64_t)(4 * v129 & 60)); // 0x1a73
            *v128 = v130;
            int32_t * v131 = (int32_t *)(v2 + 48); // 0x1a79
            int32_t v132 = *v131; // 0x1a79
            int32_t v133 = *(int32_t *)(64 * (int64_t)(v132 >> 4) + v82 + (int64_t)(4 * v132 & 60)); // 0x1a8e
            *v131 = v133;
            int32_t * v134 = (int32_t *)(v2 + 64); // 0x1a94
            int32_t v135 = *v134; // 0x1a94
            int32_t v136 = *(int32_t *)(64 * (int64_t)(v135 >> 4) + v82 + (int64_t)(4 * v135 & 60)); // 0x1aa9
            *v134 = v136;
            int64_t v137 = v2 + 80; // 0x1aaf
            v2 = v137;
            v3 = v137;
            // break -> 0x1ab3
            break;
        }
        default: {
            if (nb != 4) {
                // 0x1ad0
                return;
            }
            int32_t * v138 = (int32_t *)(v1 + 52); // 0x133b
            int32_t v139 = *v138; // 0x133b
            int64_t v140 = *(int64_t *)0x1354; // 0x134d
            int32_t v141 = *(int32_t *)(64 * (int64_t)(v139 >> 4) + v140 + (int64_t)(4 * v139 & 60)); // 0x1357
            int32_t v142 = *(int32_t *)(v1 + 36); // 0x135a
            int32_t v143 = *(int32_t *)(64 * (int64_t)(v142 >> 4) + v140 + (int64_t)(4 * v142 & 60)); // 0x136f
            *v138 = v143;
            int32_t v144 = *(int32_t *)(v2 + 20); // 0x1375
            int32_t v145 = *(int32_t *)(64 * (int64_t)(v144 >> 4) + v140 + (int64_t)(4 * v144 & 60)); // 0x138a
            *(int32_t *)(v2 + 36) = v145;
            int32_t v146 = *(int32_t *)(v2 + 4); // 0x1390
            int32_t v147 = *(int32_t *)(v2 + 8); // 0x1393
            int32_t v148 = *(int32_t *)(64 * (int64_t)(v146 >> 4) + v140 + (int64_t)(4 * v146 & 60)); // 0x13aa
            *(int32_t *)(v2 + 20) = v148;
            *(int32_t *)(v2 + 4) = v141;
            int32_t * v149 = (int32_t *)(v2 + 56); // 0x13b4
            int32_t v150 = *v149; // 0x13b4
            int32_t v151 = *(int32_t *)(64 * (int64_t)(v150 >> 4) + v140 + (int64_t)(4 * v150 & 60)); // 0x13c9
            int32_t v152 = *(int32_t *)(v2 + 24); // 0x13cc
            int32_t v153 = *(int32_t *)(64 * (int64_t)(v152 >> 4) + v140 + (int64_t)(4 * v152 & 60)); // 0x13e3
            *v149 = v153;
            *(int32_t *)(v2 + 24) = v151;
            int32_t v154 = *(int32_t *)(64 * (int64_t)(v147 >> 4) + v140 + (int64_t)(4 * v147 & 60)); // 0x13ff
            int32_t v155 = *(int32_t *)(v2 + 40); // 0x1402
            int32_t v156 = *(int32_t *)(64 * (int64_t)(v155 >> 4) + v140 + (int64_t)(4 * v155 & 60)); // 0x1417
            *(int32_t *)(v2 + 8) = v156;
            *(int32_t *)(v2 + 40) = v154;
            int32_t * v157 = (int32_t *)(v2 + 60); // 0x1420
            int32_t v158 = *v157; // 0x1420
            int32_t v159 = *(int32_t *)(64 * (int64_t)(v158 >> 4) + v140 + (int64_t)(4 * v158 & 60)); // 0x1435
            int32_t v160 = *(int32_t *)(v2 + 12); // 0x1438
            int32_t v161 = *(int32_t *)(64 * (int64_t)(v160 >> 4) + v140 + (int64_t)(4 * v160 & 60)); // 0x144d
            *v157 = v161;
            int32_t v162 = *(int32_t *)(v2 + 28); // 0x1453
            int32_t v163 = *(int32_t *)(64 * (int64_t)(v162 >> 4) + v140 + (int64_t)(4 * v162 & 60)); // 0x1468
            *(int32_t *)(v2 + 12) = v163;
            int32_t v164 = *(int32_t *)(v2 + 44); // 0x146e
            int32_t v165 = *(int32_t *)(64 * (int64_t)(v164 >> 4) + v140 + (int64_t)(4 * v164 & 60)); // 0x1483
            *(int32_t *)(v2 + 28) = v165;
            *(int32_t *)(v2 + 44) = v159;
            int32_t v166 = *(int32_t *)&v2; // 0x148c
            int32_t v167 = *(int32_t *)(64 * (int64_t)(v166 >> 4) + v140 + (int64_t)(4 * v166 & 60)); // 0x14a0
            *(int32_t *)v2 = v167;
            int32_t * v168 = (int32_t *)(v2 + 16); // 0x14a5
            int32_t v169 = *v168; // 0x14a5
            int32_t v170 = *(int32_t *)(64 * (int64_t)(v169 >> 4) + v140 + (int64_t)(4 * v169 & 60)); // 0x14ba
            *v168 = v170;
            int32_t * v171 = (int32_t *)(v2 + 32); // 0x14c0
            int32_t v172 = *v171; // 0x14c0
            int32_t v173 = *(int32_t *)(64 * (int64_t)(v172 >> 4) + v140 + (int64_t)(4 * v172 & 60)); // 0x14d5
            *v171 = v173;
            int64_t v174 = v2 + 48; // 0x14db
            v2 = v174;
            v3 = v174;
            // break -> 0x1ab3
            break;
        }
    }
    int32_t * v175 = (int32_t *)v3; // 0x1ab3
    int32_t v176 = *v175; // 0x1ab3
    int64_t v177 = *(int64_t *)0x1acb; // 0x1ac4
    int32_t v178 = *(int32_t *)(64 * (int64_t)(v176 >> 4) + v177 + (int64_t)(4 * v176 & 60)); // 0x1acb
    *v175 = v178;
}
int32_t AddRoundKey_InversMixColumn(int32_t * statemt, uint32_t nb, int32_t n) {
    if ((int32_t)nb < 1) {
        // 0x1d9e
        return 0;
    }
    int64_t v1 = (int64_t)statemt;
    int64_t v2; // bp-40, 0x1ae0
    int64_t v3 = &v2; // 0x1ae7
    int64_t v4 = nb;
    int64_t v5 = 0; // 0x1afd
    int64_t v6 = 4 * (v5 + (0x100000000 * v4 * (int64_t)n >> 32)) + *(int64_t *)0x1afd;
    int64_t v7 = 16 * v5 + v1;
    int32_t * v8 = (int32_t *)v7; // 0x1b0f
    *v8 = *v8 ^ *(int32_t *)v6;
    int32_t * v9 = (int32_t *)(v7 + 4); // 0x1b1b
    *v9 = *v9 ^ *(int32_t *)(v6 + 480);
    int32_t * v10 = (int32_t *)(v7 + 8); // 0x1b28
    *v10 = *v10 ^ *(int32_t *)(v6 + 960);
    int32_t * v11 = (int32_t *)(v7 + 12); // 0x1b35
    *v11 = *v11 ^ *(int32_t *)(v6 + 1440);
    v5++;
    while (v5 != v4) {
        // 0x1b00
        v6 = 4 * (v5 + (0x100000000 * v4 * (int64_t)n >> 32)) + *(int64_t *)0x1afd;
        v7 = 16 * v5 + v1;
        v8 = (int32_t *)v7;
        *v8 = *v8 ^ *(int32_t *)v6;
        v9 = (int32_t *)(v7 + 4);
        *v9 = *v9 ^ *(int32_t *)(v6 + 480);
        v10 = (int32_t *)(v7 + 8);
        *v10 = *v10 ^ *(int32_t *)(v6 + 960);
        v11 = (int32_t *)(v7 + 12);
        *v11 = *v11 ^ *(int32_t *)(v6 + 1440);
        v5++;
    }
    int64_t v12 = 0; // 0x1d5d
    int64_t v13 = 4 * v12; // 0x1b50
    int64_t v14 = v13 & 0xfffffffc; // 0x1b58
    int64_t v15 = 0;
    int64_t v16 = 4 * (v15 + v13); // 0x1b64
    int32_t v17 = *(int32_t *)(v16 + v1); // 0x1b64
    int32_t v18 = 2 * v17; // 0x1b68
    int32_t v19 = ((v17 & 0x7fffff80) != 128 ? v18 : v18 ^ 283) ^ v17; // 0x1b89
    int32_t v20 = 2 * v19; // 0x1b8c
    int32_t v21 = ((v19 & 0x7fffff80) != 128 ? v20 : v20 ^ 283) ^ v17; // 0x1bac
    int32_t v22 = 2 * v21; // 0x1baf
    int32_t v23 = (v21 & 0x7fffff80) != 128 ? v22 : v22 ^ 283; // 0x1bca
    int32_t * v24 = (int32_t *)(v3 - 128 + v16); // 0x1bce
    *v24 = v23;
    int64_t v25 = v15 + 1; // 0x1bd3
    int32_t v26 = *(int32_t *)(4 * (v25 & 3 | v14) + v1); // 0x1be1
    int32_t v27 = 2 * v26; // 0x1be5
    int32_t v28 = (v26 & 0x7fffff80) != 128 ? v27 : v27 ^ 283; // 0x1c04
    int32_t v29 = 2 * v28; // 0x1c08
    int32_t v30 = ((v28 & 0x7fffff80) != 128 ? v29 : v29 ^ 283) ^ v26; // 0x1c28
    int32_t v31 = 2 * v30; // 0x1c2b
    int32_t v32 = v23 ^ v26 ^ ((v30 & 0x7fffff80) != 128 ? v31 : v31 ^ 283); // 0x1c4e
    *v24 = v32;
    int32_t v33 = *(int32_t *)(4 * (v15 + 2 & 3 | v14) + v1); // 0x1c61
    int32_t v34 = 2 * v33; // 0x1c65
    int32_t v35 = ((v33 & 0x7fffff80) != 128 ? v34 : v34 ^ 283) ^ v33; // 0x1c88
    int32_t v36 = 2 * v35; // 0x1c8b
    int32_t v37 = (v35 & 0x7fffff80) != 128 ? v36 : v36 ^ 283; // 0x1ca7
    int32_t v38 = 2 * v37; // 0x1cab
    int32_t v39 = v32 ^ v33 ^ ((v37 & 0x7fffff80) != 128 ? v38 : v38 ^ 283); // 0x1ccd
    *v24 = v39;
    int32_t v40 = *(int32_t *)(4 * (v15 + 3 & 3 | v14) + v1); // 0x1cde
    int32_t v41 = 2 * v40; // 0x1ce2
    int32_t v42 = (v40 & 0x7fffff80) != 128 ? v41 : v41 ^ 283; // 0x1d01
    int32_t v43 = 2 * v42; // 0x1d05
    int32_t v44 = (v42 & 0x7fffff80) != 128 ? v43 : v43 ^ 283; // 0x1d21
    int32_t v45 = 2 * v44; // 0x1d25
    *v24 = ((v44 & 0x7fffff80) != 128 ? v45 : v45 ^ 283) ^ v40 ^ v39;
    while (v25 != 4) {
        // 0x1b60
        v15 = v25;
        v16 = 4 * (v15 + v13);
        v17 = *(int32_t *)(v16 + v1);
        v18 = 2 * v17;
        v19 = ((v17 & 0x7fffff80) != 128 ? v18 : v18 ^ 283) ^ v17;
        v20 = 2 * v19;
        v21 = ((v19 & 0x7fffff80) != 128 ? v20 : v20 ^ 283) ^ v17;
        v22 = 2 * v21;
        v23 = (v21 & 0x7fffff80) != 128 ? v22 : v22 ^ 283;
        v24 = (int32_t *)(v3 - 128 + v16);
        *v24 = v23;
        v25 = v15 + 1;
        v26 = *(int32_t *)(4 * (v25 & 3 | v14) + v1);
        v27 = 2 * v26;
        v28 = (v26 & 0x7fffff80) != 128 ? v27 : v27 ^ 283;
        v29 = 2 * v28;
        v30 = ((v28 & 0x7fffff80) != 128 ? v29 : v29 ^ 283) ^ v26;
        v31 = 2 * v30;
        v32 = v23 ^ v26 ^ ((v30 & 0x7fffff80) != 128 ? v31 : v31 ^ 283);
        *v24 = v32;
        v33 = *(int32_t *)(4 * (v15 + 2 & 3 | v14) + v1);
        v34 = 2 * v33;
        v35 = ((v33 & 0x7fffff80) != 128 ? v34 : v34 ^ 283) ^ v33;
        v36 = 2 * v35;
        v37 = (v35 & 0x7fffff80) != 128 ? v36 : v36 ^ 283;
        v38 = 2 * v37;
        v39 = v32 ^ v33 ^ ((v37 & 0x7fffff80) != 128 ? v38 : v38 ^ 283);
        *v24 = v39;
        v40 = *(int32_t *)(4 * (v15 + 3 & 3 | v14) + v1);
        v41 = 2 * v40;
        v42 = (v40 & 0x7fffff80) != 128 ? v41 : v41 ^ 283;
        v43 = 2 * v42;
        v44 = (v42 & 0x7fffff80) != 128 ? v43 : v43 ^ 283;
        v45 = 2 * v44;
        *v24 = ((v44 & 0x7fffff80) != 128 ? v45 : v45 ^ 283) ^ v40 ^ v39;
    }
    // 0x1d5d
    v12++;
    int64_t v46 = 0; // 0x1d63
    while (v12 != v4) {
        // 0x1b50
        v13 = 4 * v12;
        v14 = v13 & 0xfffffffc;
        v15 = 0;
        v16 = 4 * (v15 + v13);
        v17 = *(int32_t *)(v16 + v1);
        v18 = 2 * v17;
        v19 = ((v17 & 0x7fffff80) != 128 ? v18 : v18 ^ 283) ^ v17;
        v20 = 2 * v19;
        v21 = ((v19 & 0x7fffff80) != 128 ? v20 : v20 ^ 283) ^ v17;
        v22 = 2 * v21;
        v23 = (v21 & 0x7fffff80) != 128 ? v22 : v22 ^ 283;
        v24 = (int32_t *)(v3 - 128 + v16);
        *v24 = v23;
        v25 = v15 + 1;
        v26 = *(int32_t *)(4 * (v25 & 3 | v14) + v1);
        v27 = 2 * v26;
        v28 = (v26 & 0x7fffff80) != 128 ? v27 : v27 ^ 283;
        v29 = 2 * v28;
        v30 = ((v28 & 0x7fffff80) != 128 ? v29 : v29 ^ 283) ^ v26;
        v31 = 2 * v30;
        v32 = v23 ^ v26 ^ ((v30 & 0x7fffff80) != 128 ? v31 : v31 ^ 283);
        *v24 = v32;
        v33 = *(int32_t *)(4 * (v15 + 2 & 3 | v14) + v1);
        v34 = 2 * v33;
        v35 = ((v33 & 0x7fffff80) != 128 ? v34 : v34 ^ 283) ^ v33;
        v36 = 2 * v35;
        v37 = (v35 & 0x7fffff80) != 128 ? v36 : v36 ^ 283;
        v38 = 2 * v37;
        v39 = v32 ^ v33 ^ ((v37 & 0x7fffff80) != 128 ? v38 : v38 ^ 283);
        *v24 = v39;
        v40 = *(int32_t *)(4 * (v15 + 3 & 3 | v14) + v1);
        v41 = 2 * v40;
        v42 = (v40 & 0x7fffff80) != 128 ? v41 : v41 ^ 283;
        v43 = 2 * v42;
        v44 = (v42 & 0x7fffff80) != 128 ? v43 : v43 ^ 283;
        v45 = 2 * v44;
        *v24 = ((v44 & 0x7fffff80) != 128 ? v45 : v45 ^ 283) ^ v40 ^ v39;
        while (v25 != 4) {
            // 0x1b60
            v15 = v25;
            v16 = 4 * (v15 + v13);
            v17 = *(int32_t *)(v16 + v1);
            v18 = 2 * v17;
            v19 = ((v17 & 0x7fffff80) != 128 ? v18 : v18 ^ 283) ^ v17;
            v20 = 2 * v19;
            v21 = ((v19 & 0x7fffff80) != 128 ? v20 : v20 ^ 283) ^ v17;
            v22 = 2 * v21;
            v23 = (v21 & 0x7fffff80) != 128 ? v22 : v22 ^ 283;
            v24 = (int32_t *)(v3 - 128 + v16);
            *v24 = v23;
            v25 = v15 + 1;
            v26 = *(int32_t *)(4 * (v25 & 3 | v14) + v1);
            v27 = 2 * v26;
            v28 = (v26 & 0x7fffff80) != 128 ? v27 : v27 ^ 283;
            v29 = 2 * v28;
            v30 = ((v28 & 0x7fffff80) != 128 ? v29 : v29 ^ 283) ^ v26;
            v31 = 2 * v30;
            v32 = v23 ^ v26 ^ ((v30 & 0x7fffff80) != 128 ? v31 : v31 ^ 283);
            *v24 = v32;
            v33 = *(int32_t *)(4 * (v15 + 2 & 3 | v14) + v1);
            v34 = 2 * v33;
            v35 = ((v33 & 0x7fffff80) != 128 ? v34 : v34 ^ 283) ^ v33;
            v36 = 2 * v35;
            v37 = (v35 & 0x7fffff80) != 128 ? v36 : v36 ^ 283;
            v38 = 2 * v37;
            v39 = v32 ^ v33 ^ ((v37 & 0x7fffff80) != 128 ? v38 : v38 ^ 283);
            *v24 = v39;
            v40 = *(int32_t *)(4 * (v15 + 3 & 3 | v14) + v1);
            v41 = 2 * v40;
            v42 = (v40 & 0x7fffff80) != 128 ? v41 : v41 ^ 283;
            v43 = 2 * v42;
            v44 = (v42 & 0x7fffff80) != 128 ? v43 : v43 ^ 283;
            v45 = 2 * v44;
            *v24 = ((v44 & 0x7fffff80) != 128 ? v45 : v45 ^ 283) ^ v40 ^ v39;
        }
        // 0x1d5d
        v12++;
        v46 = 0;
    }
    int64_t v47 = 16 * v46; // 0x1d73
    int64_t v48 = v47 + v3;
    int64_t v49 = v47 + v1;
    *(int32_t *)v49 = *(int32_t *)(v48 - 128);
    *(int32_t *)(v49 + 4) = *(int32_t *)(v48 - 124);
    *(int32_t *)(v49 + 8) = *(int32_t *)(v48 - 120);
    *(int32_t *)(v49 + 12) = *(int32_t *)(v48 - 116);
    int64_t v50 = v46 + 1; // 0x1d96
    v46 = v50;
    while (v50 != v4) {
        // 0x1d70
        v47 = 16 * v46;
        v48 = v47 + v3;
        v49 = v47 + v1;
        *(int32_t *)v49 = *(int32_t *)(v48 - 128);
        *(int32_t *)(v49 + 4) = *(int32_t *)(v48 - 124);
        *(int32_t *)(v49 + 8) = *(int32_t *)(v48 - 120);
        *(int32_t *)(v49 + 12) = *(int32_t *)(v48 - 116);
        v50 = v46 + 1;
        v46 = v50;
    }
    // 0x1d9e
    return 0;
}
int64_t SubByte(int64_t a1) {
    int64_t v1 = (int32_t)a1 >= 0 ? a1 : a1 + 15; // 0x1db5
    int64_t v2 = *(int64_t *)0x1dd3; // 0x1dcc
    uint32_t result = *(int32_t *)((0x100000000 * (a1 - (v1 & 0xfffffff0)) >> 30) + 64 * (int64_t)((int32_t)v1 >> 4) + v2); // 0x1dd3
    return result;
}
int64_t aes_main(void) {
    int128_t v1 = __asm_movaps(g1); // 0x1de4
    int64_t v2 = *(int64_t *)0x1df2; // 0x1deb
    *(int128_t *)v2 = (int128_t)__asm_movaps_2(v1);
    *(int128_t *)(v2 + 16) = (int128_t)__asm_movaps_2(__asm_movaps(g2));
    *(int128_t *)(v2 + 32) = (int128_t)__asm_movaps_2(__asm_movaps(g3));
    *(int128_t *)(v2 + 48) = (int128_t)__asm_movaps_2(__asm_movaps(g4));
    int128_t v3 = __asm_movaps(g5); // 0x1e16
    int64_t v4 = *(int64_t *)0x1e24; // 0x1e1d
    *(int128_t *)v4 = (int128_t)__asm_movaps_2(v3);
    *(int128_t *)(v4 + 16) = (int128_t)__asm_movaps_2(__asm_movaps(g6));
    *(int128_t *)(v4 + 32) = (int128_t)__asm_movaps_2(__asm_movaps(g7));
    *(int128_t *)(v4 + 48) = (int128_t)__asm_movaps_2(__asm_movaps(g8));
    encrypt(v2, v4, 0x1f480);
    decrypt((int32_t *)v2, (int32_t *)v4, 0x1f480);
    return 0;
}
