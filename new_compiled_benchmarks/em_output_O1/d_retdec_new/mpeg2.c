
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "mpeg2.h"
int64_t read(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = a3 & 0xffffffff; // 0x0
    int64_t v1 = a2; // 0x4
    if ((int32_t)a3 < 1) {
        // 0x27
        return result;
    }
    int64_t v2 = a1; // 0x4
    int64_t v3 = result;
    *(char *)v2 = *(char *)v1;
    int64_t v4 = v3 + 0xffffffff & 0xffffffff; // 0x25
    v1++;
    v2++;
    while ((int32_t)v3 > 1) {
        // 0x10
        v3 = v4;
        *(char *)v2 = *(char *)v1;
        v4 = v3 + 0xffffffff & 0xffffffff;
        v1++;
        v2++;
    }
    // 0x27
    return result;
}
int64_t Fill_Buffer(void) {
    int64_t v1 = *(int64_t *)56; // 0x31
    int64_t v2; // 0x30
    memcpy(v1, *(int64_t *)63, 2048, v2);
    *(int64_t *)*(int64_t *)83 = v1;
    return *(int64_t *)93;
}
int64_t Show_Bits(int64_t a1) {
    uint32_t v1 = *(int32_t *)*(int64_t *)137; // 0x89
    return v1 >> (-(int32_t)a1 & 31);
}
int64_t Get_Bits1(void) {
    // 0x90
    int64_t result; // 0x90
    return result;
}
int64_t Get_Bits(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int32_t a6) {
    int32_t * v1 = (int32_t *)*(int64_t *)503; // 0x1f7
    uint32_t v2 = *v1; // 0x1f7
    int32_t v3 = a1; // 0x1fd
    *v1 = v2 << (v3 & 31);
    int32_t * v4 = (int32_t *)*(int64_t *)522; // 0x20a
    int32_t v5 = *v4 - v3; // 0x20d
    *v4 = v5;
    if (v5 > 24) {
        // 0x279
        return v2 >> (-v3 & 31);
    }
    int64_t * v6 = (int64_t *)*(int64_t *)552; // 0x228
    uint64_t result = *v6; // 0x228
    if (result < *(int64_t *)568 + 2044 || result < *(int64_t *)692 + 2048) {
        // 0x23d
        return result;
    }
    int64_t v7 = *(int64_t *)702; // 0x2b7
    int64_t dest_mem = memcpy(v7, *(int64_t *)771, 2048, 2048); // 0x303
    *v6 = v7;
    int64_t result2 = dest_mem; // 0x311
    if (*(int32_t *)*(int64_t *)674 != 0) {
        // 0x313
        result2 = *(int64_t *)806;
        *(int64_t *)result2 = *(int64_t *)*(int64_t *)659 - 2048;
    }
    // 0x23d
    return result2;
}
int64_t Flush_Buffer(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)839; // 0x340
    int32_t v2 = a1; // 0x347
    uint32_t v3 = v2 & 31; // 0x347
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)v1; // 0x347
        *v4 = *v4 << v3;
    }
    int64_t result = *(int64_t *)848; // 0x349
    int32_t * v5 = (int32_t *)result; // 0x350
    int32_t v6 = *v5 - v2; // 0x353
    *v5 = v6;
    if (v6 > 24) {
        // 0x37b
        return result;
    }
    int64_t * v7 = (int64_t *)*(int64_t *)870; // 0x366
    int64_t result2 = *v7; // 0x366
    if (result2 < *(int64_t *)886 + 2044) {
        // 0x37b
        return result2;
    }
    int32_t * v8 = (int32_t *)v1; // 0x3cd
    int64_t v9 = *(int64_t *)1011; // 0x3ec
    int64_t v10 = v6; // 0x3f3
    int64_t v11 = (int64_t)*v8; // 0x3f3
    int64_t v12 = *(int64_t *)*(int64_t *)965;
    int64_t v13 = v12; // 0x432
    int64_t v14 = result2; // 0x432
    int64_t v15; // 0x458
    if (result2 >= *(int64_t *)1001 + 2048) {
        // 0x434
        memcpy(v9, *(int64_t *)1091, 2048, 2048);
        *v7 = v9;
        v13 = v12;
        v14 = v9;
        if (*(int32_t *)*(int64_t *)983 != 0) {
            // 0x453
            v15 = v12 - 2048;
            *(int64_t *)*(int64_t *)1126 = v15;
            v13 = v15;
            v14 = v9;
        }
    }
    int64_t v16 = v14 + 1; // 0x403
    *v7 = v16;
    unsigned char v17 = *(char *)v14; // 0x40b
    int32_t v18 = v10;
    uint32_t v19 = 24 - v18 & 31; // 0x413
    int64_t v20 = v17; // 0x413
    if (v19 != 0) {
        v20 = (int32_t)v17 << v19;
    }
    v11 |= v20;
    *v8 = (int32_t)v11;
    int64_t v21 = v10 + 8; // 0x41b
    v10 = v21 & 0xffffffff;
    int64_t v22 = v10; // 0x429
    while (v18 <= 16) {
        // 0x42f
        v12 = v13;
        v13 = v12;
        v14 = v16;
        if (v16 >= *(int64_t *)1001 + 2048) {
            // 0x434
            memcpy(v9, *(int64_t *)1091, 2048, v22);
            *v7 = v9;
            v13 = v12;
            v14 = v9;
            if (*(int32_t *)*(int64_t *)983 != 0) {
                // 0x453
                v15 = v12 - 2048;
                *(int64_t *)*(int64_t *)1126 = v15;
                v13 = v15;
                v14 = v9;
            }
        }
        // 0x403
        v16 = v14 + 1;
        *v7 = v16;
        v17 = *(char *)v14;
        v18 = v10;
        v19 = 24 - v18 & 31;
        v20 = v17;
        if (v19 != 0) {
            v20 = (int32_t)v17 << v19;
        }
        v11 |= v20;
        *v8 = (int32_t)v11;
        v21 = v10 + 8;
        v10 = v21 & 0xffffffff;
        v22 = v10;
    }
    int64_t result3 = *(int64_t *)941; // 0x3a6
    *(int32_t *)result3 = (int32_t)v21;
    // 0x37b
    return result3;
}
int32_t Get_motion_code(void) {
    int32_t * v1 = (int32_t *)*(int64_t *)1157; // 0x485
    uint32_t v2 = 2 * *v1; // 0x487
    *v1 = v2;
    int32_t * v3 = (int32_t *)*(int64_t *)1171; // 0x493
    uint32_t result = *v3; // 0x493
    uint32_t v4 = result - 1; // 0x495
    *v3 = v4;
    if (result > 25) {
        // 0x504
        return result;
    }
    int64_t v5 = v2; // 0x487
    int64_t v6 = v4; // 0x495
    int64_t * v7 = (int64_t *)*(int64_t *)1197; // 0x4ad
    uint64_t v8 = *v7; // 0x4ad
    int64_t v9 = v5; // 0x4c0
    int64_t v10 = v6; // 0x4c0
    int64_t result3; // 0x470
    int64_t v11; // 0x470
    if (v8 >= *(int64_t *)1213 + 2044) {
        uint64_t v12 = *(int64_t *)1921 + 2048; // 0x781
        int64_t v13 = *(int64_t *)1931; // 0x784
        int64_t v14 = v6; // 0x7c7
        int64_t v15 = v5; // 0x7c7
        int64_t v16 = 2048; // 0x7c7
        if (v8 >= v12) {
          lab_0x7c9:;
            int64_t dest_mem = memcpy(v13, *(int64_t *)2008, 2048, v16); // 0x7d8
            *v7 = v13;
            int64_t result2 = dest_mem; // 0x7e5
            if (*(int32_t *)*(int64_t *)1904 != 0) {
                // 0x7e7
                result2 = *(int64_t *)2037;
                *(int64_t *)result2 = *(int64_t *)*(int64_t *)1894 - 2048;
            }
            // 0x790
            return result2;
        }
        int64_t v17 = v8 + 1; // 0x79a
        *v7 = v17;
        unsigned char v18 = *(char *)v8; // 0x7a2
        int32_t v19 = v14;
        uint32_t v20 = 24 - v19 & 31; // 0x7aa
        int64_t v21 = v18; // 0x7aa
        if (v20 != 0) {
            v21 = (int32_t)v18 << v20;
        }
        v15 |= v21;
        *v1 = (int32_t)v15;
        v14 = v14 + 8 & 0xffffffff;
        result3 = v17;
        v11 = v14;
        while (v19 <= 16) {
            // 0x7c4
            v16 = v14;
            if (v17 >= v12) {
                goto lab_0x7c9;
            }
            int64_t v22 = v17;
            v17 = v22 + 1;
            *v7 = v17;
            v18 = *(char *)v22;
            v19 = v14;
            v20 = 24 - v19 & 31;
            v21 = v18;
            if (v20 != 0) {
                v21 = (int32_t)v18 << v20;
            }
            v15 |= v21;
            *v1 = (int32_t)v15;
            v14 = v14 + 8 & 0xffffffff;
            result3 = v17;
            v11 = v14;
        }
    } else {
        int64_t v23 = v8 + 1; // 0x4d0
        *v7 = v23;
        unsigned char v24 = *(char *)v8; // 0x4d8
        uint32_t v25 = (int32_t)v10;
        uint32_t v26 = 24 - v25 & 31; // 0x4e0
        int64_t v27 = v24; // 0x4e0
        if (v26 != 0) {
            v27 = (int32_t)v24 << v26;
        }
        v9 |= v27;
        *v1 = (int32_t)v9;
        v10 = v10 + 8 & 0xffffffff;
        result3 = v23;
        v11 = v10;
        while (v25 < 17) {
            int64_t v28 = v23;
            v23 = v28 + 1;
            *v7 = v23;
            v24 = *(char *)v28;
            v25 = (int32_t)v10;
            v26 = 24 - v25 & 31;
            v27 = v24;
            if (v26 != 0) {
                v27 = (int32_t)v24 << v26;
            }
            v9 |= v27;
            *v1 = (int32_t)v9;
            v10 = v10 + 8 & 0xffffffff;
            result3 = v23;
            v11 = v10;
        }
    }
    // 0x4f6
    *(int32_t *)*(int64_t *)1277 = (int32_t)v11;
    // 0x504
    return result3;
}
int32_t Get_dmvector(void) {
    int32_t * v1 = (int32_t *)*(int64_t *)3381; // 0xd35
    int32_t v2 = *v1; // 0xd35
    uint32_t v3 = 2 * v2; // 0xd37
    *v1 = v3;
    int64_t v4 = *(int64_t *)3395; // 0xd3c
    int32_t * v5 = (int32_t *)v4; // 0xd43
    uint32_t v6 = *v5; // 0xd43
    uint32_t v7 = v6 - 1; // 0xd45
    *v5 = v7;
    int64_t v8 = v4; // 0xd4f
    if (v6 <= 25) {
        int64_t * v9 = (int64_t *)*(int64_t *)3421; // 0xd5d
        uint64_t result = *v9; // 0xd5d
        if (result >= *(int64_t *)3436 + 2044) {
            int64_t v10 = *(int64_t *)*(int64_t *)3663; // 0xe4f
            if (result < *(int64_t *)3691 + 2048) {
                // 0xe8a
                return result;
            }
            int64_t result2 = *(int64_t *)3701; // 0xe6e
            memcpy(result2, *(int64_t *)3783, 2048, 2048);
            *v9 = result2;
            if (*(int32_t *)*(int64_t *)3673 != 0) {
                // 0xed6
                *(int64_t *)*(int64_t *)3812 = v10 - 2048;
            }
            // 0xe8a
            return result2;
        }
        int64_t v11 = v3;
        int64_t v12 = v7; // 0xd20
        int64_t v13 = result + 1; // 0xd80
        *v9 = v13;
        unsigned char v14 = *(char *)result; // 0xd87
        uint32_t v15 = (int32_t)v12;
        uint32_t v16 = 24 - v15 & 31; // 0xd8f
        int64_t v17 = v14; // 0xd8f
        if (v16 != 0) {
            v17 = (int32_t)v14 << v16;
        }
        v11 |= v17;
        *v1 = (int32_t)v11;
        int64_t v18 = v12 + 8; // 0xd95
        v12 = v18 & 0xffffffff;
        while (v15 < 17) {
            int64_t v19 = v13;
            v13 = v19 + 1;
            *v9 = v13;
            v14 = *(char *)v19;
            v15 = (int32_t)v12;
            v16 = 24 - v15 & 31;
            v17 = v14;
            if (v16 != 0) {
                v17 = (int32_t)v14 << v16;
            }
            v11 |= v17;
            *v1 = (int32_t)v11;
            v18 = v12 + 8;
            v12 = v18 & 0xffffffff;
        }
        // 0xda5
        v8 = *(int64_t *)3500;
        *(int32_t *)v8 = (int32_t)v18;
    }
    // 0xdb6
    if (v2 >= 0) {
        // 0xe33
        return 0;
    }
    int32_t result3 = *v1; // 0xdbc
    uint32_t v20 = 2 * result3; // 0xdbe
    *v1 = v20;
    int32_t * v21 = (int32_t *)v8; // 0xdc3
    int32_t v22 = *v21; // 0xdc3
    uint32_t v23 = v22 - 1; // 0xdc5
    *v21 = v23;
    if (v22 > 25) {
        // 0xe33
        return result3;
    }
    int64_t * v24 = (int64_t *)*(int64_t *)3549; // 0xddd
    uint64_t result4 = *v24; // 0xddd
    if (result4 >= *(int64_t *)3564 + 2044) {
        // 0xee9
        return result4;
    }
    int64_t v25 = v20;
    int64_t v26 = v23; // 0xd20
    int64_t v27 = result4 + 1; // 0xe00
    *v24 = v27;
    unsigned char v28 = *(char *)result4; // 0xe07
    uint32_t v29 = (int32_t)v26;
    uint32_t v30 = 24 - v29 & 31; // 0xe0f
    int64_t v31 = v28; // 0xe0f
    if (v30 != 0) {
        v31 = (int32_t)v28 << v30;
    }
    v25 |= v31;
    *v1 = (int32_t)v25;
    int64_t v32 = v26 + 8; // 0xe15
    v26 = v32 & 0xffffffff;
    while (v29 < 17) {
        int64_t v33 = v27;
        v27 = v33 + 1;
        *v24 = v27;
        v28 = *(char *)v33;
        v29 = (int32_t)v26;
        v30 = 24 - v29 & 31;
        v31 = v28;
        if (v30 != 0) {
            v31 = (int32_t)v28 << v30;
        }
        v25 |= v31;
        *v1 = (int32_t)v25;
        v32 = v26 + 8;
        v26 = v32 & 0xffffffff;
    }
    // 0xe25
    *(int32_t *)*(int64_t *)3628 = (int32_t)v32;
    // 0xe33
    return result3;
}
int64_t motion_vectors(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    if ((int32_t)a5 == 1) {
        if (((int32_t)a6 || a9) == 0) {
            int32_t * v1 = (int32_t *)*(int64_t *)4062; // 0xfde
            uint32_t v2 = *v1; // 0xfde
            uint32_t v3 = 2 * v2; // 0xfe1
            *v1 = v3;
            int32_t * v4 = (int32_t *)*(int64_t *)4078; // 0xfee
            uint32_t v5 = *v4; // 0xfee
            uint32_t v6 = v5 - 1; // 0xff1
            *v4 = v6;
            if (v5 <= 25) {
                int64_t v7 = v3; // 0xfe1
                int64_t v8 = v6; // 0xff1
                int64_t * v9 = (int64_t *)*(int64_t *)0x1008; // 0x1008
                int64_t v10 = *v9; // 0x1008
                int64_t v11; // 0xf90
                if (v10 >= *(int64_t *)0x1017 + 2044) {
                    int64_t v12 = *(int64_t *)0x145f; // 0x1458
                    int64_t v13 = v7; // 0x145f
                    int64_t v14 = v8; // 0x145f
                    int32_t v15 = (int32_t)*(int64_t *)*(int64_t *)0x1434;
                    int32_t v16 = v15; // 0x14a3
                    int64_t v17 = v10; // 0x14a3
                    int64_t v18; // 0x14cb
                    if (v10 >= *(int64_t *)0x1455 + 2048) {
                        // 0x14a5
                        memcpy(v12, *(int64_t *)0x14b7, 2048, 2048);
                        *v9 = v12;
                        v16 = v15;
                        v17 = v12;
                        if (*(int32_t *)*(int64_t *)0x1443 != 0) {
                            // 0x14c6
                            v18 = (int64_t)v15 - 2048;
                            *(int64_t *)*(int64_t *)0x14d9 = v18;
                            v16 = v18;
                            v17 = v12;
                        }
                    }
                    int64_t v19 = v17 + 1; // 0x1476
                    *v9 = v19;
                    unsigned char v20 = *(char *)v17; // 0x147d
                    int32_t v21 = v14;
                    uint32_t v22 = 24 - v21 & 31; // 0x1485
                    int64_t v23 = v20; // 0x1485
                    if (v22 != 0) {
                        v23 = (int32_t)v20 << v22;
                    }
                    v13 |= v23;
                    *v1 = (int32_t)v13;
                    v14 = v14 + 8 & 0xffffffff;
                    v11 = v14;
                    int64_t v24 = v14; // 0x149a
                    while (v21 <= 16) {
                        // 0x14a0
                        v15 = v16;
                        v16 = v15;
                        v17 = v19;
                        if (v19 >= *(int64_t *)0x1455 + 2048) {
                            // 0x14a5
                            memcpy(v12, *(int64_t *)0x14b7, 2048, v24);
                            *v9 = v12;
                            v16 = v15;
                            v17 = v12;
                            if (*(int32_t *)*(int64_t *)0x1443 != 0) {
                                // 0x14c6
                                v18 = (int64_t)v15 - 2048;
                                *(int64_t *)*(int64_t *)0x14d9 = v18;
                                v16 = v18;
                                v17 = v12;
                            }
                        }
                        // 0x1476
                        v19 = v17 + 1;
                        *v9 = v19;
                        v20 = *(char *)v17;
                        v21 = v14;
                        v22 = 24 - v21 & 31;
                        v23 = v20;
                        if (v22 != 0) {
                            v23 = (int32_t)v20 << v22;
                        }
                        v13 |= v23;
                        *v1 = (int32_t)v13;
                        v14 = v14 + 8 & 0xffffffff;
                        v11 = v14;
                        v24 = v14;
                    }
                } else {
                    int64_t v25 = v10 + 1; // 0x1040
                    *v9 = v25;
                    unsigned char v26 = *(char *)v10; // 0x1047
                    uint32_t v27 = (int32_t)v8;
                    uint32_t v28 = 24 - v27 & 31; // 0x104f
                    int64_t v29 = v26; // 0x104f
                    if (v28 != 0) {
                        v29 = (int32_t)v26 << v28;
                    }
                    int64_t v30 = v29 | v7;
                    *v1 = (int32_t)v30;
                    int64_t v31 = v8 + 8 & 0xffffffff; // 0x1056
                    int64_t v32 = v25; // 0x1064
                    int64_t v33 = v30; // 0x1064
                    int64_t v34 = v31; // 0x1064
                    v11 = v31;
                    while (v27 < 17) {
                        // 0x1040
                        v25 = v32 + 1;
                        *v9 = v25;
                        v26 = *(char *)v32;
                        v27 = (int32_t)v34;
                        v28 = 24 - v27 & 31;
                        v29 = v26;
                        if (v28 != 0) {
                            v29 = (int32_t)v26 << v28;
                        }
                        v30 = v29 | v33;
                        *v1 = (int32_t)v30;
                        v31 = v34 + 8 & 0xffffffff;
                        v32 = v25;
                        v33 = v30;
                        v34 = v31;
                        v11 = v31;
                    }
                }
                // 0x1066
                *(int32_t *)*(int64_t *)0x106d = (int32_t)v11;
            }
            int32_t v35 = (int64_t)v2 < 0;
            int64_t v36 = 0x100000000 * a4 >> 30; // 0x10a4
            *(int32_t *)(v36 + a3) = v35;
            *(int32_t *)(a3 + 8 + v36) = v35;
        }
        int64_t v37 = (0x100000000 * a4 >> 29) + a1;
        motion_vector((int32_t *)v37, (int32_t *)a2, a7, a8, a9, a10, 0);
        int64_t result = *(int64_t *)v37; // 0x10d4
        *(int64_t *)(v37 + 16) = result;
        // 0x12da
        return result;
    }
    int32_t * v38 = (int32_t *)*(int64_t *)0x10ea; // 0x10ea
    int32_t v39 = *v38; // 0x10ea
    uint32_t v40 = 2 * v39; // 0x10ed
    *v38 = v40;
    int32_t * v41 = (int32_t *)*(int64_t *)0x10fb;
    uint32_t v42 = *v41; // 0x10fb
    uint32_t v43 = v42 - 1; // 0x10fd
    *v41 = v43;
    int32_t * v44 = v41; // 0x1116
    if (v42 <= 25) {
        int64_t * v45 = (int64_t *)*(int64_t *)0x112d; // 0x112d
        uint64_t result2 = *v45; // 0x112d
        if (result2 >= *(int64_t *)0x113d + 2044) {
            int64_t v46 = *(int64_t *)*(int64_t *)0x12f0; // 0x12f0
            if (result2 < *(int64_t *)0x130c + 2048) {
                // 0x12da
                return result2;
            }
            int64_t result3 = *(int64_t *)0x1316; // 0x130f
            memcpy(result3, *(int64_t *)0x136a, 2048, 2048);
            *v45 = result3;
            if (*(int32_t *)*(int64_t *)0x12fa != 0) {
                // 0x137a
                *(int64_t *)*(int64_t *)0x1388 = v46 - 2048;
            }
            // 0x12da
            return result3;
        }
        int64_t v47 = v40;
        int64_t v48 = v43; // 0xf90
        int64_t v49 = result2 + 1; // 0x1150
        *v45 = v49;
        unsigned char v50 = *(char *)result2; // 0x1158
        uint32_t v51 = (int32_t)v48;
        uint32_t v52 = 24 - v51 & 31; // 0x1160
        int64_t v53 = v50; // 0x1160
        if (v52 != 0) {
            v53 = (int32_t)v50 << v52;
        }
        v47 |= v53;
        *v38 = (int32_t)v47;
        int64_t v54 = v48 + 8; // 0x1168
        v48 = v54 & 0xffffffff;
        while (v51 < 17) {
            int64_t v55 = v49;
            v49 = v55 + 1;
            *v45 = v49;
            v50 = *(char *)v55;
            v51 = (int32_t)v48;
            v52 = 24 - v51 & 31;
            v53 = v50;
            if (v52 != 0) {
                v53 = (int32_t)v50 << v52;
            }
            v47 |= v53;
            *v38 = (int32_t)v47;
            v54 = v48 + 8;
            v48 = v54 & 0xffffffff;
        }
        // 0x1178
        v44 = (int32_t *)*(int64_t *)0x117f;
        *v44 = (int32_t)v54;
    }
    int64_t v56 = 0x100000000 * a4;
    int64_t v57 = v56 >> 30; // 0x11be
    *(int32_t *)(v57 + a3) = (int32_t)(v39 < 0);
    int64_t v58 = (v56 >> 29) + a1; // 0x11ca
    int32_t * v59 = (int32_t *)a2; // 0x11e0
    motion_vector((int32_t *)v58, v59, a7, a8, a9, a10, 0);
    int32_t * v60 = (int32_t *)*(int64_t *)0x11f4; // 0x11f4
    uint32_t v61 = *v60; // 0x11f4
    uint32_t v62 = 2 * v61; // 0x11f6
    *v60 = v62;
    int32_t v63 = *v44; // 0x11fd
    uint32_t v64 = v63 - 1; // 0x1202
    *v44 = v64;
    if (v63 > 25) {
        // 0x12b8
        *(int32_t *)(a3 + 8 + v57) = (int32_t)(v61 < 0);
        motion_vector((int32_t *)(v58 + 16), v59, a7, a8, a9, a10, 0);
        // 0x12da
        return &g1;
    }
    int64_t * v65 = (int64_t *)*(int64_t *)0x122f; // 0x122f
    int64_t result4 = *v65; // 0x122f
    if (result4 >= *(int64_t *)0x123f + 2044) {
        // 0x12da
        return result4;
    }
    int64_t v66 = v64; // 0xf90
    int64_t v67 = v62;
    int64_t v68 = result4 + 1; // 0x1250
    *v65 = v68;
    unsigned char v69 = *(char *)result4; // 0x1258
    uint32_t v70 = (int32_t)v66;
    uint32_t v71 = 24 - v70 & 31; // 0x1260
    int64_t v72 = v69; // 0x1260
    if (v71 != 0) {
        v72 = (int32_t)v69 << v71;
    }
    v67 |= v72;
    *v60 = (int32_t)v67;
    int64_t v73 = v66 + 8; // 0x1268
    v66 = v73 & 0xffffffff;
    while (v70 < 17) {
        int64_t v74 = v68;
        v68 = v74 + 1;
        *v65 = v68;
        v69 = *(char *)v74;
        v70 = (int32_t)v66;
        v71 = 24 - v70 & 31;
        v72 = v69;
        if (v71 != 0) {
            v72 = (int32_t)v69 << v71;
        }
        v67 |= v72;
        *v60 = (int32_t)v67;
        v73 = v66 + 8;
        v66 = v73 & 0xffffffff;
    }
    // 0x1278
    *(int32_t *)*(int64_t *)0x127f = (int32_t)v73;
    // 0x12b8
    *(int32_t *)(a3 + 8 + v57) = (int32_t)(v61 < 0);
    motion_vector((int32_t *)(v58 + 16), v59, a7, a8, a9, a10, 0);
    // 0x12da
    return &g1;
}
void motion_vector(int32_t * PMV, int32_t * dmvector, int32_t h_r_size, int32_t v_r_size, int32_t dmv, int32_t mvscale, int32_t full_pel_vector) {
    int32_t v1 = Get_motion_code(); // 0x1510
    int64_t v2 = 0; // 0x1515
    int32_t v3; // 0x14f0
    int32_t v4; // 0x14f0
    if (h_r_size == 0 || v1 == 0) {
        // 0x14f0
        v3 = h_r_size & 31;
        v4 = 0;
    } else {
        int32_t * v5 = (int32_t *)*(int64_t *)0x153e; // 0x153e
        uint32_t v6 = *v5; // 0x153e
        int64_t v7 = v6; // 0x153e
        v2 = v7;
        int32_t v8 = h_r_size & 31;
        int64_t v9 = v8 == 0 ? v7 : (int64_t)(v6 << v8);
        *v5 = (int32_t)v9;
        int32_t * v10 = (int32_t *)*(int64_t *)0x1553; // 0x1553
        uint32_t v11 = *v10 - h_r_size; // 0x1556
        *v10 = v11;
        if (v11 <= 24) {
            int64_t v12 = v11; // 0x1556
            int64_t v13 = v2; // 0x1566
            int64_t * v14 = (int64_t *)*(int64_t *)0x157f; // 0x157f
            int64_t v15 = *v14; // 0x157f
            int64_t v16; // 0x14f0
            if (v15 >= *(int64_t *)0x158f + 2044) {
                int64_t v17 = *(int64_t *)0x184c + 2048; // 0x184c
                v2 = *(int64_t *)0x1856;
                int64_t v18 = v12; // 0x185b
                int64_t v19 = *(int64_t *)*(int64_t *)0x182b;
                int64_t v20 = v19; // 0x189e
                int64_t v21 = v15; // 0x189e
                int64_t v22 = v17; // 0x189e
                int64_t v23; // 0x14f0
                int64_t v24; // 0x18cd
                if (v15 >= v17) {
                    // 0x18a0
                    v23 = v2;
                    memcpy(v23, *(int64_t *)0x18b2, 2048, 2048);
                    v2 = v23;
                    *v14 = v23;
                    v24 = v19;
                    if (*(int32_t *)*(int64_t *)0x183a != 0) {
                        // 0x18c8
                        v24 = v19 - 2048;
                        *(int64_t *)*(int64_t *)0x18db = v24;
                    }
                    // 0x1860
                    v20 = v24;
                    v21 = v2;
                    v22 = 0x100000000 * v17 >> 32;
                }
                int64_t v25 = v21 + 1; // 0x186e
                *v14 = v25;
                unsigned char v26 = *(char *)v21; // 0x1876
                int32_t v27 = v18;
                uint32_t v28 = 24 - v27 & 31; // 0x187e
                int64_t v29 = v26; // 0x187e
                if (v28 != 0) {
                    v29 = (int32_t)v26 << v28;
                }
                int64_t v30 = v29 | v9;
                *v5 = (int32_t)v30;
                v18 = v18 + 8 & 0xffffffff;
                v16 = v18;
                int64_t v31 = v18; // 0x1895
                int64_t v32 = v22; // 0x1895
                int64_t v33 = v30 & 0xffffffff; // 0x1895
                while (v27 <= 16) {
                    // 0x189b
                    v19 = v20;
                    v20 = v19;
                    v21 = v25;
                    v22 = v32;
                    if (v25 >= v32) {
                        // 0x18a0
                        v23 = v2;
                        memcpy(v23, *(int64_t *)0x18b2, 2048, v31);
                        v2 = v23;
                        *v14 = v23;
                        v24 = v19;
                        if (*(int32_t *)*(int64_t *)0x183a != 0) {
                            // 0x18c8
                            v24 = v19 - 2048;
                            *(int64_t *)*(int64_t *)0x18db = v24;
                        }
                        // 0x1860
                        v20 = v24;
                        v21 = v2;
                        v22 = 0x100000000 * v17 >> 32;
                    }
                    // 0x186e
                    v25 = v21 + 1;
                    *v14 = v25;
                    v26 = *(char *)v21;
                    v27 = v18;
                    v28 = 24 - v27 & 31;
                    v29 = v26;
                    if (v28 != 0) {
                        v29 = (int32_t)v26 << v28;
                    }
                    v30 = v29 | v33;
                    *v5 = (int32_t)v30;
                    v18 = v18 + 8 & 0xffffffff;
                    v16 = v18;
                    v31 = v18;
                    v32 = v22;
                    v33 = v30 & 0xffffffff;
                }
            } else {
                int64_t v34 = v15 + 1; // 0x15a0
                *v14 = v34;
                unsigned char v35 = *(char *)v15; // 0x15a8
                uint32_t v36 = (int32_t)v12;
                uint32_t v37 = 24 - v36 & 31; // 0x15b0
                int64_t v38 = v35; // 0x15b0
                if (v37 != 0) {
                    v38 = (int32_t)v35 << v37;
                }
                int64_t v39 = v38 | v9;
                *v5 = (int32_t)v39;
                int64_t v40 = v12 + 8 & 0xffffffff; // 0x15b8
                int64_t v41 = v34; // 0x15c7
                int64_t v42 = v40; // 0x15c7
                int64_t v43 = v39 & 0xffffffff; // 0x15c7
                v16 = v40;
                while (v36 < 17) {
                    // 0x15a0
                    v34 = v41 + 1;
                    *v14 = v34;
                    v35 = *(char *)v41;
                    v36 = (int32_t)v42;
                    v37 = 24 - v36 & 31;
                    v38 = v35;
                    if (v37 != 0) {
                        v38 = (int32_t)v35 << v37;
                    }
                    v39 = v38 | v43;
                    *v5 = (int32_t)v39;
                    v40 = v42 + 8 & 0xffffffff;
                    v41 = v34;
                    v42 = v40;
                    v43 = v39 & 0xffffffff;
                    v16 = v40;
                }
            }
            // 0x15c9
            *(int32_t *)*(int64_t *)0x15d0 = (int32_t)v16;
            v2 = v13 & 0xffffffff;
        }
        uint32_t v44 = -h_r_size & 31; // 0x15e9
        int32_t v45; // 0x14f0
        if (v44 == 0) {
            // 0x15e4
            v45 = *(int32_t *)&v2;
        } else {
            int32_t v46 = (int32_t)v2 >> v44; // 0x15e9
            v2 = v46;
            v45 = v46;
        }
        v3 = v8;
        v4 = v45;
    }
    int64_t v47 = v_r_size;
    uint32_t v48 = v3;
    uint32_t v49 = 16 << v48;
    uint32_t v50 = (int32_t)(full_pel_vector != 0);
    int64_t v51 = v4 >> v50;
    int64_t v52 = v1; // 0x1620
    int64_t v53; // 0x14f0
    int64_t v54; // 0x14f0
    int64_t v55; // 0x165b
    if (v1 < 1) {
        // 0x164b
        v53 = v51;
        if (v1 == 0) {
            goto lab_0x166a;
        } else {
            int64_t v56 = v52 & 0xffffffff ^ 0xffffffff; // 0x164d
            int64_t v57 = v48 == 0 ? v56 : (int64_t)((int32_t)v56 << v48);
            int64_t v58 = v2 + v57 & 0xffffffff ^ 0xffffffff; // 0x1659
            v2 = v58;
            v55 = v58 + v51 & 0xffffffff;
            v54 = 32;
            v53 = v55;
            if (v55 < (int64_t)-v49) {
                goto lab_0x1642;
            } else {
                goto lab_0x166a;
            }
        }
    } else {
        int64_t v59 = v52 + 0xffffffff; // 0x1629
        int64_t v60 = v48 == 0 ? v59 : (int64_t)((int32_t)v59 << v48);
        int64_t v61 = v60 + 1 + v51 + v2 & 0xffffffff; // 0x1637
        v55 = v61;
        v54 = 0xffffffe0;
        v53 = v61;
        if (v61 < (int64_t)v49) {
            goto lab_0x166a;
        } else {
            goto lab_0x1642;
        }
    }
  lab_0x166a:;
    int64_t v62 = v53;
    int64_t v63 = full_pel_vector == 0 ? v62 : (int64_t)((int32_t)v62 << v50);
    *PMV = (int32_t)v63;
    if (dmv != 0) {
        // 0x1682
        *dmvector = Get_dmvector();
    }
    int32_t v64 = Get_motion_code(); // 0x1689
    v2 = 0;
    int32_t v65 = v47; // 0x1690
    int64_t v66 = v47; // 0x1698
    if (v65 != 0 && v64 != 0) {
        int32_t * v67 = (int32_t *)*(int64_t *)0x16b2; // 0x16b2
        uint32_t v68 = *v67; // 0x16b2
        int64_t v69 = v68; // 0x16b2
        v2 = v69;
        uint32_t v70 = v65 & 31; // 0x16ba
        int64_t v71 = v70 == 0 ? v69 : (int64_t)(v68 << v70);
        *v67 = (int32_t)v71;
        int32_t * v72 = (int32_t *)*(int64_t *)0x16c7; // 0x16ca
        uint32_t v73 = *v72 - v65; // 0x16cd
        *v72 = v73;
        if (v73 <= 24) {
            int64_t v74 = v73; // 0x16cd
            int64_t * v75 = (int64_t *)*(int64_t *)0x16fb; // 0x16fb
            uint64_t v76 = *v75; // 0x16fb
            int64_t v77; // 0x14f0
            if (v76 >= *(int64_t *)0x170a + 2044) {
                int64_t v78 = *(int64_t *)*(int64_t *)0x18ef; // 0x18ef
                uint64_t v79 = *(int64_t *)0x1910 + 2048; // 0x1910
                int64_t v80 = *(int64_t *)0x191a; // 0x1913
                int64_t v81 = v74; // 0x1955
                int64_t v82 = 2048; // 0x1955
                if (v76 >= v79) {
                  lab_0x1957:
                    // 0x1957
                    memcpy(v80, *(int64_t *)0x1969, 2048, v82);
                    *v75 = v80;
                    if (*(int32_t *)*(int64_t *)0x18fe != 0) {
                        // 0x1978
                        *(int64_t *)*(int64_t *)0x198b = v78 - 2048;
                    }
                    // 0x1815
                    return;
                }
                int64_t v83 = v76 + 1; // 0x1926
                *v75 = v83;
                unsigned char v84 = *(char *)v76; // 0x192d
                int32_t v85 = v81;
                uint32_t v86 = 24 - v85 & 31; // 0x1935
                int64_t v87 = v84; // 0x1935
                if (v86 != 0) {
                    v87 = (int32_t)v84 << v86;
                }
                int64_t v88 = v87 | v71;
                *v67 = (int32_t)v88;
                v81 = v81 + 8 & 0xffffffff;
                v77 = v81;
                while (v85 <= 16) {
                    // 0x1952
                    v82 = v81;
                    if (v83 >= v79) {
                        goto lab_0x1957;
                    }
                    int64_t v89 = v83;
                    v83 = v89 + 1;
                    *v75 = v83;
                    v84 = *(char *)v89;
                    v85 = v81;
                    v86 = 24 - v85 & 31;
                    v87 = v84;
                    if (v86 != 0) {
                        v87 = (int32_t)v84 << v86;
                    }
                    v88 = v87 | v88 & 0xffffffff;
                    *v67 = (int32_t)v88;
                    v81 = v81 + 8 & 0xffffffff;
                    v77 = v81;
                }
            } else {
                int64_t v90 = v76 + 1; // 0x1720
                *v75 = v90;
                unsigned char v91 = *(char *)v76; // 0x1727
                uint32_t v92 = (int32_t)v74;
                uint32_t v93 = 24 - v92 & 31; // 0x172f
                int64_t v94 = v91; // 0x172f
                if (v93 != 0) {
                    v94 = (int32_t)v91 << v93;
                }
                int64_t v95 = v94 | v71;
                *v67 = (int32_t)v95;
                int64_t v96 = v74 + 8 & 0xffffffff; // 0x1737
                int64_t v97 = v90; // 0x1746
                int64_t v98 = v96; // 0x1746
                int64_t v99 = v95 & 0xffffffff; // 0x1746
                v77 = v96;
                while (v92 < 17) {
                    // 0x1720
                    v90 = v97 + 1;
                    *v75 = v90;
                    v91 = *(char *)v97;
                    v92 = (int32_t)v98;
                    v93 = 24 - v92 & 31;
                    v94 = v91;
                    if (v93 != 0) {
                        v94 = (int32_t)v91 << v93;
                    }
                    v95 = v94 | v99;
                    *v67 = (int32_t)v95;
                    v96 = v98 + 8 & 0xffffffff;
                    v97 = v90;
                    v98 = v96;
                    v99 = v95 & 0xffffffff;
                    v77 = v96;
                }
            }
            // 0x1748
            *(int32_t *)*(int64_t *)0x174f = (int32_t)v77;
            v2 &= 0xffffffff;
        }
        int64_t v100 = v_r_size; // 0x1768
        uint32_t v101 = -v_r_size & 31; // 0x1772
        v66 = v100;
        if (v101 != 0) {
            v2 = (int32_t)v2 >> v101;
            v66 = v100;
        }
    }
    int32_t * v102 = (int32_t *)((int64_t)PMV + 4);
    int32_t v103 = *v102;
    int32_t v104 = v103; // 0x177d
    if (mvscale != 0) {
        int32_t v105 = v103 >> 1; // 0x177f
        *v102 = v105;
        v104 = v105;
    }
    uint32_t v106 = (int32_t)v66 & 31; // 0x17a8
    uint32_t v107 = 16 << v106;
    int64_t v108 = v104 >> v50;
    int64_t v109 = v64; // 0x17b2
    int64_t v110; // 0x14f0
    int64_t v111; // 0x14f0
    int64_t v112; // 0x17e7
    if (v64 < 1) {
        // 0x17da
        v110 = v108;
        if (v64 == 0) {
            goto lab_0x17f6;
        } else {
            int64_t v113 = v109 & 0xffffffff ^ 0xffffffff; // 0x17dc
            int64_t v114 = v106 == 0 ? v113 : (int64_t)((int32_t)v113 << v106);
            v112 = (v2 + v114 ^ 0xffffffff) + v108 & 0xffffffff;
            v111 = 32;
            v110 = v112;
            if (v112 < (int64_t)-v107) {
                goto lab_0x17d1;
            } else {
                goto lab_0x17f6;
            }
        }
    } else {
        int64_t v115 = v109 + 0xffffffff; // 0x17bb
        int64_t v116 = v106 == 0 ? v115 : (int64_t)((int32_t)v115 << v106);
        int64_t v117 = v116 + 1 + v108 + v2 & 0xffffffff; // 0x17c6
        v112 = v117;
        v111 = 0xffffffe0;
        v110 = v117;
        if (v117 < (int64_t)v107) {
            goto lab_0x17f6;
        } else {
            goto lab_0x17d1;
        }
    }
  lab_0x1642:;
    int64_t v118 = v54;
    int64_t v119 = v48 == 0 ? v118 : (int64_t)((int32_t)v118 << v48);
    v53 = v119 + v55 & 0xffffffff;
    goto lab_0x166a;
  lab_0x17f6:;
    int64_t v120 = v110;
    int64_t v121 = full_pel_vector == 0 ? v120 : (int64_t)((int32_t)v120 << v50);
    int64_t v122 = mvscale == 0 ? v121 : (int64_t)((int32_t)v121 << (int32_t)(mvscale != 0));
    *v102 = (int32_t)v122;
    if (dmv != 0) {
        // 0x180d
        *(int32_t *)((int64_t)dmvector + 4) = Get_dmvector();
    }
  lab_0x17d1:;
    int64_t v123 = v111;
    int64_t v124 = v106 == 0 ? v123 : (int64_t)((int32_t)v123 << v106);
    v110 = v124 + v112 & 0xffffffff;
    goto lab_0x17f6;
}
