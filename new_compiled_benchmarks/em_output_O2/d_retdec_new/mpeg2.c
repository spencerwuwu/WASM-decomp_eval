
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "mpeg2.h"
int64_t read(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = a3 & 0xffffffff; // 0x1
    uint32_t v1 = (int32_t)a3; // 0x3
    if (v1 < 1) {
        // 0xba
        return result;
    }
    int64_t v2 = result; // 0xe
    int64_t v3 = a2; // 0xe
    int64_t v4 = a1; // 0xe
    int64_t v5; // 0x0
    if (a1 - a2 < 32 || v1 < 8) {
        goto lab_0xa0;
    } else {
        // 0x1c
        v5 = 0;
        if (v1 >= 32) {
            int64_t v6 = a3 & 0xffffffe0; // 0x34
            int64_t v7 = 0; // 0x3a
            int64_t v8 = v7 + a2;
            int128_t v9 = __asm_movups(*(int128_t *)v8); // 0x40
            int128_t v10 = __asm_movups(*(int128_t *)(v8 + 16)); // 0x45
            int64_t v11 = v7 + a1;
            __asm_movups_3(*(int128_t *)v11, v9);
            __asm_movups_3(*(int128_t *)(v11 + 16), v10);
            v7 += 32;
            while (v7 != v6) {
                // 0x40
                v8 = v7 + a2;
                v9 = __asm_movups(*(int128_t *)v8);
                v10 = __asm_movups(*(int128_t *)(v8 + 16));
                v11 = v7 + a1;
                __asm_movups_3(*(int128_t *)v11, v9);
                __asm_movups_3(*(int128_t *)(v11 + 16), v10);
                v7 += 32;
            }
            if (result == v6) {
                // 0xba
                return result;
            }
            // 0x64
            v5 = v6;
            if ((a3 & 24) == 0) {
                // 0xbc
                v2 = result - v6;
                v3 = v6 + a2;
                v4 = v6 + a1;
                goto lab_0xa0;
            } else {
                goto lab_0x69;
            }
        } else {
            goto lab_0x69;
        }
    }
  lab_0xa0:;
    int64_t v12 = v3; // 0x0
    int64_t v13 = v4; // 0x0
    int64_t v14 = v2;
    *(char *)v13 = *(char *)v12;
    int64_t v15 = (v14 & 0xffffffff) + 0xffffffff; // 0xb8
    v12++;
    v13++;
    while ((int32_t)v14 >= 2) {
        // 0xa0
        v14 = v15;
        *(char *)v13 = *(char *)v12;
        v15 = (v14 & 0xffffffff) + 0xffffffff;
        v12++;
        v13++;
    }
    // 0xba
    return result;
  lab_0x69:;
    int64_t v16 = a3 & 0xfffffff8; // 0x6c
    int64_t v17 = v5;
    *(int64_t *)(v17 + a1) = *(int64_t *)(v17 + a2);
    int64_t v18 = v17 + 8; // 0x88
    while (v18 != v16) {
        // 0x80
        v17 = v18;
        *(int64_t *)(v17 + a1) = *(int64_t *)(v17 + a2);
        v18 = v17 + 8;
    }
    // 0x91
    v2 = a3 - v16;
    v3 = v16 + a2;
    v4 = v16 + a1;
    if (v16 == result) {
        // 0xba
        return result;
    }
    goto lab_0xa0;
}
int64_t Fill_Buffer(void) {
    int64_t v1 = *(int64_t *)216; // 0xd1
    int64_t v2; // 0xd0
    memcpy(v1, *(int64_t *)223, 2048, v2);
    *(int64_t *)*(int64_t *)243 = v1;
    return *(int64_t *)253;
}
int64_t Show_Bits(int64_t a1) {
    uint32_t v1 = *(int32_t *)*(int64_t *)297; // 0x129
    return v1 >> (-(int32_t)a1 & 31);
}
int64_t Get_Bits1(void) {
    // 0x130
    int64_t result; // 0x130
    return result;
}
int64_t Get_Bits(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int32_t a6) {
    int32_t * v1 = (int32_t *)*(int64_t *)663; // 0x297
    uint32_t v2 = *v1; // 0x297
    int32_t v3 = a1; // 0x29c
    *v1 = v2 << (v3 & 31);
    int32_t * v4 = (int32_t *)*(int64_t *)681; // 0x2a9
    int32_t v5 = *v4 - v3; // 0x2ac
    *v4 = v5;
    if (v5 > 24) {
        // 0x319
        return v2 >> (-v3 & 31);
    }
    uint64_t result = *(int64_t *)*(int64_t *)711; // 0x2c7
    if (result < *(int64_t *)727 + 2044 || result < *(int64_t *)852 + 2048) {
        // 0x2dc
        return result;
    }
    int64_t dest_mem = memcpy(*(int64_t *)862, *(int64_t *)931, 2048, 2048); // 0x3ad
    if (*(int32_t *)*(int64_t *)834 != 0) {
        // 0x3af
        dest_mem = *(int64_t *)962;
        *(int64_t *)dest_mem = *(int64_t *)*(int64_t *)819 - 2048;
    }
    // 0x2dc
    return dest_mem;
}
int64_t Flush_Buffer(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)*(int64_t *)999; // 0x3e7
    int32_t v2 = a1; // 0x3eb
    uint32_t v3 = *v1 << (v2 & 31);
    *v1 = v3;
    int64_t result = *(int64_t *)1016; // 0x3f1
    int32_t * v4 = (int32_t *)result; // 0x3f8
    int32_t v5 = *v4 - v2; // 0x3fb
    *v4 = v5;
    if (v5 > 24) {
        // 0x422
        return result;
    }
    int64_t * v6 = (int64_t *)*(int64_t *)1038; // 0x40e
    int64_t result2 = *v6; // 0x40e
    if (result2 < *(int64_t *)1053 + 2044) {
        // 0x422
        return result2;
    }
    int64_t v7 = *(int64_t *)1185; // 0x49a
    int64_t v8 = v3; // 0x4a1
    int64_t v9 = v5; // 0x4a1
    int64_t v10 = *(int64_t *)*(int64_t *)1142;
    int64_t v11 = result2; // 0x4e1
    int64_t v12 = v10; // 0x4e1
    int64_t v13; // 0x503
    if (result2 >= *(int64_t *)1175 + 2048) {
        // 0x4e3
        memcpy(v7, *(int64_t *)1266, 2048, 2048);
        v11 = v7;
        v12 = v10;
        if (*(int32_t *)*(int64_t *)1157 != 0) {
            // 0x4fe
            v13 = v10 - 2048;
            *(int64_t *)*(int64_t *)1297 = v13;
            v11 = v7;
            v12 = v13;
        }
    }
    int64_t v14 = v11 + 1; // 0x4b3
    *v6 = v14;
    unsigned char v15 = *(char *)v11; // 0x4ba
    int32_t v16 = v9;
    uint32_t v17 = 24 - v16 & 31; // 0x4c2
    int64_t v18 = v15; // 0x4c2
    if (v17 != 0) {
        v18 = (int32_t)v15 << v17;
    }
    v8 |= v18;
    *v1 = (int32_t)v8;
    int64_t v19 = v9 + 8; // 0x4ca
    v9 = v19 & 0xffffffff;
    int64_t v20 = v9; // 0x4d8
    while (v16 <= 16) {
        // 0x4de
        v10 = v12;
        v11 = v14;
        v12 = v10;
        if (v14 >= *(int64_t *)1175 + 2048) {
            // 0x4e3
            memcpy(v7, *(int64_t *)1266, 2048, v20);
            v11 = v7;
            v12 = v10;
            if (*(int32_t *)*(int64_t *)1157 != 0) {
                // 0x4fe
                v13 = v10 - 2048;
                *(int64_t *)*(int64_t *)1297 = v13;
                v11 = v7;
                v12 = v13;
            }
        }
        // 0x4b3
        v14 = v11 + 1;
        *v6 = v14;
        v15 = *(char *)v11;
        v16 = v9;
        v17 = 24 - v16 & 31;
        v18 = v15;
        if (v17 != 0) {
            v18 = (int32_t)v15 << v17;
        }
        v8 |= v18;
        *v1 = (int32_t)v8;
        v19 = v9 + 8;
        v9 = v19 & 0xffffffff;
        v20 = v9;
    }
    int64_t result3 = *(int64_t *)1118; // 0x457
    *(int32_t *)result3 = (int32_t)v19;
    // 0x422
    return result3;
}
int32_t Get_motion_code(void) {
    int32_t * v1 = (int32_t *)*(int64_t *)1333; // 0x535
    int32_t v2 = *v1; // 0x535
    uint32_t v3 = 2 * v2; // 0x537
    int64_t v4 = v3; // 0x537
    *v1 = v3;
    int64_t v5 = *(int64_t *)1349; // 0x53e
    int32_t * v6 = (int32_t *)v5; // 0x545
    uint32_t v7 = *v6; // 0x545
    uint32_t v8 = v7 - 1; // 0x547
    int64_t v9 = v8; // 0x547
    *v6 = v8;
    int64_t v10 = v5; // 0x54f
    int64_t v11 = v9; // 0x54f
    int64_t v12 = v4; // 0x54f
    if (v7 <= 25) {
        int64_t * v13 = (int64_t *)*(int64_t *)1373; // 0x55d
        uint64_t result = *v13; // 0x55d
        if (result >= *(int64_t *)1389 + 2044) {
            int64_t v14 = *(int64_t *)*(int64_t *)1761; // 0x6e1
            if (result < *(int64_t *)1789 + 2048) {
                // 0x71a
                return result;
            }
            int64_t result2 = *(int64_t *)1799; // 0x700
            memcpy(result2, *(int64_t *)1879, 2048, 2048);
            if (*(int32_t *)*(int64_t *)1771 != 0) {
                // 0x763
                *(int64_t *)*(int64_t *)1905 = v14 - 2048;
            }
            // 0x71a
            return result2;
        }
        int64_t v15 = result + 1; // 0x580
        *v13 = v15;
        unsigned char v16 = *(char *)result; // 0x588
        uint32_t v17 = (int32_t)v9;
        uint32_t v18 = 24 - v17 & 31; // 0x590
        int64_t v19 = v16; // 0x590
        if (v18 != 0) {
            v19 = (int32_t)v16 << v18;
        }
        v12 = v19 | v4;
        *v1 = (int32_t)v12;
        int64_t v20 = v9 + 8; // 0x598
        v11 = v20 & 0xffffffff;
        int64_t v21 = v11; // 0x5a3
        int64_t v22 = v12; // 0x5a3
        while (v17 < 17) {
            int64_t v23 = v15;
            v15 = v23 + 1;
            *v13 = v15;
            v16 = *(char *)v23;
            v17 = (int32_t)v21;
            v18 = 24 - v17 & 31;
            v19 = v16;
            if (v18 != 0) {
                v19 = (int32_t)v16 << v18;
            }
            v12 = v19 | v22;
            *v1 = (int32_t)v12;
            v20 = v21 + 8;
            v11 = v20 & 0xffffffff;
            v21 = v11;
            v22 = v12;
        }
        // 0x5a5
        v10 = *(int64_t *)1452;
        *(int32_t *)v10 = (int32_t)v20;
    }
    if (v2 < 0) {
        // 0xb90
        return 0;
    }
    uint32_t v24 = (int32_t)v12;
    if (v24 >= 0x20000000) {
        int64_t result3 = *(int64_t *)1497; // 0x5d2
        char v25 = *(char *)(result3 + (v12 / 0x10000000 & 14 | 1)); // 0x5d9
        unsigned char v26 = v25 & 31;
        int32_t v27 = v24; // 0x5de
        int64_t v28 = v12; // 0x5de
        if (v26 != 0) {
            v27 = v24 << (int32_t)v26;
            v28 = v27;
        }
        *v1 = v27;
        int64_t v29 = v11 - (int64_t)v25; // 0x5e4
        int32_t v30 = v29; // 0x5e6
        *(int32_t *)v10 = v30;
        if (v30 > 24) {
            // 0x776
            return result3;
        }
        int64_t * v31 = (int64_t *)*(int64_t *)1533; // 0x5fd
        uint64_t result4 = *v31; // 0x5fd
        int64_t v32 = v29; // 0x610
        if (result4 >= *(int64_t *)1549 + 2044) {
            int64_t v33 = *(int64_t *)*(int64_t *)2257; // 0x8d1
            if (result4 < *(int64_t *)2285 + 2048) {
                // 0x90a
                return result4;
            }
            int64_t result5 = *(int64_t *)2295; // 0x8f0
            memcpy(result5, *(int64_t *)2375, 2048, 2048);
            if (*(int32_t *)*(int64_t *)2267 != 0) {
                // 0x953
                *(int64_t *)*(int64_t *)2401 = v33 - 2048;
            }
            // 0x90a
            return result5;
        }
        int64_t result6 = result4 + 1; // 0x620
        *v31 = result6;
        unsigned char v34 = *(char *)result4; // 0x628
        uint32_t v35 = (int32_t)v32;
        uint32_t v36 = 24 - v35 & 31; // 0x630
        int64_t v37 = v34; // 0x630
        if (v36 != 0) {
            v37 = (int32_t)v34 << v36;
        }
        int64_t v38 = v37 | v28;
        *v1 = (int32_t)v38;
        int64_t v39 = result6; // 0x643
        v32 = (v32 & 0xffffffff) + 8;
        int64_t v40 = v38 & 0xffffffff; // 0x643
        while (v35 < 17) {
            // 0x620
            result6 = v39 + 1;
            *v31 = result6;
            v34 = *(char *)v39;
            v35 = (int32_t)v32;
            v36 = 24 - v35 & 31;
            v37 = v34;
            if (v36 != 0) {
                v37 = (int32_t)v34 << v36;
            }
            v38 = v37 | v40;
            *v1 = (int32_t)v38;
            v39 = result6;
            v32 = (v32 & 0xffffffff) + 8;
            v40 = v38 & 0xffffffff;
        }
        // 0x778
        return result6;
    }
    if (v24 >= 0xc000000) {
        int64_t result7 = v12 / 0x4000000 & 63; // 0x65a
        char v41 = *(char *)(*(int64_t *)1636 + (2 * result7 | 1)); // 0x664
        unsigned char v42 = v41 & 31;
        int32_t v43 = v24; // 0x669
        int64_t v44 = v12; // 0x669
        if (v42 != 0) {
            v43 = v24 << (int32_t)v42;
            v44 = v43;
        }
        *v1 = v43;
        int64_t v45 = v11 - (int64_t)v41; // 0x66f
        int32_t v46 = v45; // 0x671
        *(int32_t *)v10 = v46;
        if (v46 > 24) {
            // 0x966
            return result7;
        }
        int64_t * v47 = (int64_t *)*(int64_t *)1672; // 0x688
        uint64_t result8 = *v47; // 0x688
        int64_t v48 = v45; // 0x69b
        if (result8 >= *(int64_t *)1688 + 2044) {
            int64_t v49 = *(int64_t *)*(int64_t *)2606; // 0xa2e
            if (result8 < *(int64_t *)2634 + 2048) {
                // 0xa6a
                return result8;
            }
            int64_t result9 = *(int64_t *)2644; // 0xa4d
            memcpy(result9, *(int64_t *)2727, 2048, 2048);
            if (*(int32_t *)*(int64_t *)2616 != 0) {
                // 0xab3
                *(int64_t *)*(int64_t *)2753 = v49 - 2048;
            }
            // 0xa6a
            return result9;
        }
        int64_t result10 = result8 + 1; // 0x6b0
        *v47 = result10;
        unsigned char v50 = *(char *)result8; // 0x6b8
        uint32_t v51 = (int32_t)v48;
        uint32_t v52 = 24 - v51 & 31; // 0x6c0
        int64_t v53 = v50; // 0x6c0
        if (v52 != 0) {
            v53 = (int32_t)v50 << v52;
        }
        int64_t v54 = v53 | v44;
        *v1 = (int32_t)v54;
        v48 = (v48 & 0xffffffff) + 8;
        int64_t v55 = v54 & 0xffffffff; // 0x6d3
        while (v51 < 17) {
            int64_t v56 = result10;
            result10 = v56 + 1;
            *v47 = result10;
            v50 = *(char *)v56;
            v51 = (int32_t)v48;
            v52 = 24 - v51 & 31;
            v53 = v50;
            if (v52 != 0) {
                v53 = (int32_t)v50 << v52;
            }
            v54 = v53 | v55;
            *v1 = (int32_t)v54;
            v48 = (v48 & 0xffffffff) + 8;
            v55 = v54 & 0xffffffff;
        }
        // 0x968
        return result10;
    }
    if (v24 < 0x6000000) {
        // 0xb90
        return 0;
    }
    int64_t result11 = *(int64_t *)2132; // 0x84d
    char v57 = *(char *)(result11 + (2 * (int64_t)(v24 / 0x800000 - 12) | 1)); // 0x854
    unsigned char v58 = v57 & 31;
    int32_t v59 = v24; // 0x859
    int64_t v60 = v12; // 0x859
    if (v58 != 0) {
        v59 = v24 << (int32_t)v58;
        v60 = v59;
    }
    *v1 = v59;
    int64_t v61 = v11 - (int64_t)v57; // 0x85f
    int32_t v62 = v61; // 0x861
    *(int32_t *)v10 = v62;
    if (v62 > 24) {
        // 0xac6
        return result11;
    }
    int64_t v63 = v61 & 0xffffffff; // 0x85f
    int64_t * v64 = (int64_t *)*(int64_t *)2168; // 0x878
    uint64_t v65 = *v64; // 0x878
    int64_t v66 = v63; // 0x88b
    if (v65 < *(int64_t *)2184 + 2044) {
        int64_t result12 = v65 + 1; // 0x8a0
        *v64 = result12;
        unsigned char v67 = *(char *)v65; // 0x8a8
        uint32_t v68 = (int32_t)v66;
        uint32_t v69 = 24 - v68 & 31; // 0x8b0
        int64_t v70 = v67; // 0x8b0
        if (v69 != 0) {
            v70 = (int32_t)v67 << v69;
        }
        int64_t v71 = v70 | v60;
        *v1 = (int32_t)v71;
        int64_t v72 = result12; // 0x8c3
        v66 = v66 + 8 & 0xffffffff;
        int64_t v73 = v71 & 0xffffffff; // 0x8c3
        while (v68 < 17) {
            // 0x8a0
            result12 = v72 + 1;
            *v64 = result12;
            v67 = *(char *)v72;
            v68 = (int32_t)v66;
            v69 = 24 - v68 & 31;
            v70 = v67;
            if (v69 != 0) {
                v70 = (int32_t)v67 << v69;
            }
            v71 = v70 | v73;
            *v1 = (int32_t)v71;
            v72 = result12;
            v66 = v66 + 8 & 0xffffffff;
            v73 = v71 & 0xffffffff;
        }
        // 0xac8
        return result12;
    }
    uint64_t v74 = *(int64_t *)3010 + 2048; // 0xbc2
    int64_t v75 = v63; // 0xc06
    int64_t v76 = 2048; // 0xc06
    if (v65 >= v74) {
      lab_0xc08:;
        int64_t dest_mem = memcpy(*(int64_t *)3020, *(int64_t *)3095, 2048, v76); // 0xc21
        if (*(int32_t *)*(int64_t *)2992 != 0) {
            // 0xc23
            dest_mem = *(int64_t *)3121;
            *(int64_t *)dest_mem = *(int64_t *)*(int64_t *)2982 - 2048;
        }
        // 0xbd0
        return dest_mem;
    }
    int64_t result13 = v65 + 1; // 0xbda
    *v64 = result13;
    unsigned char v77 = *(char *)v65; // 0xbe2
    int32_t v78 = v75;
    uint32_t v79 = 24 - v78 & 31; // 0xbea
    int64_t v80 = v77; // 0xbea
    if (v79 != 0) {
        v80 = (int32_t)v77 << v79;
    }
    int64_t v81 = v80 | v60;
    *v1 = (int32_t)v81;
    while (v78 <= 16) {
        int64_t v82 = v75 + 8 & 0xffffffff; // 0xbf2
        v75 = v82;
        int64_t v83 = result13; // 0xc06
        v76 = v82;
        if (result13 >= v74) {
            goto lab_0xc08;
        }
        result13 = v83 + 1;
        *v64 = result13;
        v77 = *(char *)v83;
        v78 = v75;
        v79 = 24 - v78 & 31;
        v80 = v77;
        if (v79 != 0) {
            v80 = (int32_t)v77 << v79;
        }
        v81 = v80 | v81 & 0xffffffff;
        *v1 = (int32_t)v81;
    }
    // 0xac8
    return result13;
}
int32_t Get_dmvector(void) {
    int32_t * v1 = (int32_t *)*(int64_t *)3157; // 0xc55
    int32_t v2 = *v1; // 0xc55
    uint32_t v3 = 2 * v2; // 0xc57
    int64_t v4 = v3; // 0xc57
    *v1 = v3;
    int64_t v5 = *(int64_t *)3173; // 0xc5e
    int32_t * v6 = (int32_t *)v5; // 0xc65
    uint32_t v7 = *v6; // 0xc65
    uint32_t v8 = v7 - 1; // 0xc67
    int64_t v9 = v8; // 0xc67
    *v6 = v8;
    int64_t v10 = v5; // 0xc71
    int64_t v11 = v9; // 0xc71
    int64_t v12 = v4; // 0xc71
    if (v7 <= 25) {
        int64_t * v13 = (int64_t *)*(int64_t *)3194; // 0xc7a
        uint64_t result = *v13; // 0xc7a
        if (result >= *(int64_t *)3210 + 2044) {
            int64_t v14 = *(int64_t *)*(int64_t *)3501; // 0xdad
            if (result < *(int64_t *)3529 + 2048) {
                // 0xdea
                return result;
            }
            int64_t result2 = *(int64_t *)3539; // 0xdcc
            memcpy(result2, *(int64_t *)3626, 2048, 2048);
            if (*(int32_t *)*(int64_t *)3511 != 0) {
                // 0xe36
                *(int64_t *)*(int64_t *)3652 = v14 - 2048;
            }
            // 0xdea
            return result2;
        }
        int64_t v15 = result + 1; // 0xca0
        *v13 = v15;
        unsigned char v16 = *(char *)result; // 0xca8
        uint32_t v17 = (int32_t)v9;
        uint32_t v18 = 24 - v17 & 31; // 0xcb0
        int64_t v19 = v16; // 0xcb0
        if (v18 != 0) {
            v19 = (int32_t)v16 << v18;
        }
        v12 = v19 | v4;
        *v1 = (int32_t)v12;
        int64_t v20 = v9 + 8; // 0xcb8
        v11 = v20 & 0xffffffff;
        int64_t v21 = v11; // 0xcc6
        int64_t v22 = v12; // 0xcc6
        while (v17 < 17) {
            int64_t v23 = v15;
            v15 = v23 + 1;
            *v13 = v15;
            v16 = *(char *)v23;
            v17 = (int32_t)v21;
            v18 = 24 - v17 & 31;
            v19 = v16;
            if (v18 != 0) {
                v19 = (int32_t)v16 << v18;
            }
            v12 = v19 | v22;
            *v1 = (int32_t)v12;
            v20 = v21 + 8;
            v11 = v20 & 0xffffffff;
            v21 = v11;
            v22 = v12;
        }
        // 0xcc8
        v10 = *(int64_t *)3279;
        *(int32_t *)v10 = (int32_t)v20;
    }
    // 0xcd9
    if (v2 >= 0) {
        // 0xd97
        return 0;
    }
    int32_t v24 = v12;
    int32_t v25 = 2 * v24; // 0xce7
    *v1 = v25;
    uint32_t v26 = (int32_t)v11;
    int32_t * v27 = (int32_t *)v10; // 0xced
    *v27 = v26 - 1;
    if (v26 >= 26) {
        // 0xd97
        return v24 >> 31 | 1;
    }
    int64_t * v28 = (int64_t *)*(int64_t *)3328; // 0xd00
    uint64_t v29 = *v28; // 0xd00
    uint64_t result3 = *(int64_t *)3343 + 2044; // 0xd08
    if (v29 >= result3) {
        // 0xd14
        return result3;
    }
    // 0xd78
    *v28 = v29 + 1;
    *v1 = v25 | (int32_t)*(char *)v29;
    *v27 = 32;
    // 0xd97
    return v24 >> 31 | 1;
}
int64_t motion_vectors(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    if ((int32_t)a5 == 1) {
        int64_t v1; // 0xe50
        if (((int32_t)a6 || a9) == 0) {
            int32_t * v2 = (int32_t *)*(int64_t *)0x10a9; // 0x10a9
            uint32_t v3 = *v2; // 0x10a9
            uint32_t v4 = 2 * v3; // 0x10ab
            *v2 = v4;
            int32_t * v5 = (int32_t *)*(int64_t *)0x10b7; // 0x10b7
            uint32_t v6 = *v5; // 0x10b7
            uint32_t v7 = v6 - 1; // 0x10ba
            *v5 = v7;
            if (v6 <= 25) {
                int64_t v8 = v4; // 0x10ab
                int64_t v9 = v7; // 0x10ba
                int64_t * v10 = (int64_t *)*(int64_t *)0x10d6; // 0x10d6
                uint64_t v11 = *v10; // 0x10d6
                int64_t v12; // 0xe50
                if (v11 >= *(int64_t *)0x10e5 + 2044) {
                    int64_t v13 = *(int64_t *)*(int64_t *)0x12f0; // 0x12f0
                    uint64_t v14 = *(int64_t *)0x1311 + 2048; // 0x1311
                    int64_t v15 = v9; // 0x134f
                    int64_t v16 = v8; // 0x134f
                    int64_t v17 = 2048; // 0x134f
                    if (v11 >= v14) {
                      lab_0x1351:;
                        int64_t dest_mem = memcpy(*(int64_t *)0x131b, *(int64_t *)0x1360, 2048, v17); // 0x136a
                        if (*(int32_t *)*(int64_t *)0x12ff != 0) {
                            // 0x136c
                            dest_mem = *(int64_t *)0x137f;
                            *(int64_t *)dest_mem = (0x100000000 * v13 >> 32) - 2048;
                        }
                        // 0x1198
                        return dest_mem;
                    }
                    int64_t v18 = v11 + 1; // 0x1323
                    *v10 = v18;
                    unsigned char v19 = *(char *)v11; // 0x132a
                    int32_t v20 = v15;
                    uint32_t v21 = 24 - v20 & 31; // 0x1332
                    int64_t v22 = v19; // 0x1332
                    if (v21 != 0) {
                        v22 = (int32_t)v19 << v21;
                    }
                    v16 |= v22;
                    *v2 = (int32_t)v16;
                    v15 = v15 + 8 & 0xffffffff;
                    v12 = v15;
                    while (v20 <= 16) {
                        // 0x134c
                        v17 = v15;
                        if (v18 >= v14) {
                            goto lab_0x1351;
                        }
                        int64_t v23 = v18;
                        v18 = v23 + 1;
                        *v10 = v18;
                        v19 = *(char *)v23;
                        v20 = v15;
                        v21 = 24 - v20 & 31;
                        v22 = v19;
                        if (v21 != 0) {
                            v22 = (int32_t)v19 << v21;
                        }
                        v16 |= v22;
                        *v2 = (int32_t)v16;
                        v15 = v15 + 8 & 0xffffffff;
                        v12 = v15;
                    }
                } else {
                    int64_t v24 = v11 + 1; // 0x1100
                    *v10 = v24;
                    unsigned char v25 = *(char *)v11; // 0x1107
                    uint32_t v26 = (int32_t)v9;
                    uint32_t v27 = 24 - v26 & 31; // 0x110f
                    int64_t v28 = v25; // 0x110f
                    if (v27 != 0) {
                        v28 = (int32_t)v25 << v27;
                    }
                    int64_t v29 = v28 | v8;
                    *v2 = (int32_t)v29;
                    int64_t v30 = v9 + 8 & 0xffffffff; // 0x1115
                    int64_t v31 = v24; // 0x1123
                    int64_t v32 = v29; // 0x1123
                    int64_t v33 = v30; // 0x1123
                    v12 = v30;
                    while (v26 < 17) {
                        // 0x1100
                        v24 = v31 + 1;
                        *v10 = v24;
                        v25 = *(char *)v31;
                        v26 = (int32_t)v33;
                        v27 = 24 - v26 & 31;
                        v28 = v25;
                        if (v27 != 0) {
                            v28 = (int32_t)v25 << v27;
                        }
                        v29 = v28 | v32;
                        *v2 = (int32_t)v29;
                        v30 = v33 + 8 & 0xffffffff;
                        v31 = v24;
                        v32 = v29;
                        v33 = v30;
                        v12 = v30;
                    }
                }
                // 0x1125
                *(int32_t *)*(int64_t *)0x112c = (int32_t)v12;
            }
            int64_t v34 = 0x100000000 * a4;
            int32_t v35 = (int64_t)v3 < 0;
            int64_t v36 = v34 >> 30; // 0x115b
            *(int32_t *)(v36 + a3) = v35;
            *(int32_t *)(a3 + 8 + v36) = v35;
            v1 = v34;
        } else {
            // 0xe93
            v1 = 0x100000000 * a4;
        }
        int64_t v37 = (v1 >> 29) + a1;
        motion_vector((int32_t *)v37, (int32_t *)a2, a7, a8, a9, a10, 0);
        int64_t result = *(int64_t *)v37; // 0x118e
        *(int64_t *)(v37 + 16) = result;
        // 0x1198
        return result;
    }
    int32_t * v38 = (int32_t *)*(int64_t *)3749; // 0xea5
    int32_t v39 = *v38; // 0xea5
    uint32_t v40 = 2 * v39; // 0xea8
    *v38 = v40;
    int32_t * v41 = (int32_t *)*(int64_t *)3766;
    uint32_t v42 = *v41; // 0xeb6
    uint32_t v43 = v42 - 1; // 0xeb8
    *v41 = v43;
    int32_t * v44 = v41; // 0xed4
    if (v42 <= 25) {
        int64_t * v45 = (int64_t *)*(int64_t *)3818; // 0xeea
        uint64_t result2 = *v45; // 0xeea
        if (result2 >= *(int64_t *)3834 + 2044) {
            int64_t v46 = *(int64_t *)*(int64_t *)0x11ae; // 0x11ae
            if (result2 < *(int64_t *)0x11ca + 2048) {
                // 0x1198
                return result2;
            }
            int64_t result3 = *(int64_t *)0x11d4; // 0x11cd
            memcpy(result3, *(int64_t *)0x122a, 2048, 2048);
            if (*(int32_t *)*(int64_t *)0x11b8 != 0) {
                // 0x1236
                *(int64_t *)*(int64_t *)0x1244 = v46 - 2048;
            }
            // 0x1198
            return result3;
        }
        int64_t v47 = v40;
        int64_t v48 = v43; // 0xe50
        int64_t v49 = result2 + 1; // 0xf10
        *v45 = v49;
        unsigned char v50 = *(char *)result2; // 0xf18
        uint32_t v51 = (int32_t)v48;
        uint32_t v52 = 24 - v51 & 31; // 0xf20
        int64_t v53 = v50; // 0xf20
        if (v52 != 0) {
            v53 = (int32_t)v50 << v52;
        }
        v47 |= v53;
        *v38 = (int32_t)v47;
        int64_t v54 = v48 + 8; // 0xf28
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
        // 0xf38
        v44 = (int32_t *)*(int64_t *)3903;
        *v44 = (int32_t)v54;
    }
    int64_t v56 = 0x100000000 * a4;
    int64_t v57 = v56 >> 30; // 0xf7e
    *(int32_t *)(v57 + a3) = (int32_t)(v39 < 0);
    int64_t v58 = (v56 >> 29) + a1; // 0xf8a
    int32_t * v59 = (int32_t *)a2; // 0xf99
    motion_vector((int32_t *)v58, v59, a7, a8, a9, a10, 0);
    int32_t * v60 = (int32_t *)*(int64_t *)4005; // 0xfa5
    uint32_t v61 = *v60; // 0xfa5
    uint32_t v62 = 2 * v61; // 0xfa8
    *v60 = v62;
    int32_t v63 = *v44; // 0xfaf
    uint32_t v64 = v63 - 1; // 0xfb4
    *v44 = v64;
    if (v63 > 25) {
        // 0x1078
        *(int32_t *)(a3 + 8 + v57) = (int32_t)(v61 < 0);
        motion_vector((int32_t *)(v58 + 16), v59, a7, a8, a9, a10, 0);
        // 0x1198
        return &g3;
    }
    int64_t * v65 = (int64_t *)*(int64_t *)4080; // 0xff0
    int64_t result4 = *v65; // 0xff0
    if (result4 >= *(int64_t *)0x1000 + 2044) {
        // 0x1198
        return result4;
    }
    int64_t v66 = v64; // 0xe50
    int64_t v67 = v62;
    int64_t v68 = result4 + 1; // 0x1010
    *v65 = v68;
    unsigned char v69 = *(char *)result4; // 0x1018
    uint32_t v70 = (int32_t)v66;
    uint32_t v71 = 24 - v70 & 31; // 0x1020
    int64_t v72 = v69; // 0x1020
    if (v71 != 0) {
        v72 = (int32_t)v69 << v71;
    }
    v67 |= v72;
    *v60 = (int32_t)v67;
    int64_t v73 = v66 + 8; // 0x1028
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
    // 0x1038
    *(int32_t *)*(int64_t *)0x103f = (int32_t)v73;
    // 0x1078
    *(int32_t *)(a3 + 8 + v57) = (int32_t)(v61 < 0);
    motion_vector((int32_t *)(v58 + 16), v59, a7, a8, a9, a10, 0);
    // 0x1198
    return &g3;
}
void motion_vector(int32_t * PMV, int32_t * dmvector, int32_t h_r_size, int32_t v_r_size, int32_t dmv, int32_t mvscale, int32_t full_pel_vector) {
    int32_t v1 = Get_motion_code(); // 0x13b1
    int32_t v2; // 0x1390
    int32_t v3; // 0x1390
    int64_t v4; // 0x1390
    int64_t v5; // 0x1390
    if (h_r_size == 0 || v1 == 0) {
        // 0x1390
        v2 = h_r_size & 31;
        int64_t v6; // 0x1390
        v3 = v6;
        v5 = 0;
    } else {
        int32_t * v7 = (int32_t *)*(int64_t *)0x13de; // 0x13de
        uint32_t v8 = *v7; // 0x13de
        int64_t v9 = v8; // 0x13de
        int32_t v10 = h_r_size & 31;
        int64_t v11 = v10 == 0 ? v9 : (int64_t)(v8 << v10);
        *v7 = (int32_t)v11;
        int32_t * v12 = (int32_t *)*(int64_t *)0x13f4; // 0x13f4
        uint32_t v13 = *v12 - h_r_size; // 0x13fc
        *v12 = v13;
        if (v13 <= 24) {
            int64_t * v14 = (int64_t *)*(int64_t *)0x141c; // 0x141c
            uint64_t v15 = *v14; // 0x141c
            if (v15 >= *(int64_t *)0x142b + 2044) {
                // 0x169a
                if (v15 < *(int64_t *)0x16c2 + 2048) {
                    // 0x1660
                    return;
                }
                int64_t v16 = *(int64_t *)*(int64_t *)0x16a1; // 0x16a1
                memcpy(*(int64_t *)0x16cc, *(int64_t *)0x1714, 2048, 2048);
                if (*(int32_t *)*(int64_t *)0x16b0 != 0) {
                    // 0x1720
                    *(int64_t *)*(int64_t *)0x1733 = (0x100000000000000 * v16 >> 56) - 2048;
                }
                // 0x1660
                return;
            }
            int64_t v17 = v13; // 0x1390
            int64_t v18 = v15 + 1; // 0x1440
            *v14 = v18;
            unsigned char v19 = *(char *)v15; // 0x1447
            uint32_t v20 = (int32_t)v17;
            uint32_t v21 = 24 - v20 & 31; // 0x144f
            int64_t v22 = v19; // 0x144f
            if (v21 != 0) {
                v22 = (int32_t)v19 << v21;
            }
            int64_t v23 = v22 | v11;
            *v7 = (int32_t)v23;
            int64_t v24 = v17 + 8; // 0x1458
            v17 = v24 & 0xffffffff;
            int64_t v25 = v23 & 0xffffffff; // 0x1467
            while (v20 < 17) {
                int64_t v26 = v18;
                v18 = v26 + 1;
                *v14 = v18;
                v19 = *(char *)v26;
                v20 = (int32_t)v17;
                v21 = 24 - v20 & 31;
                v22 = v19;
                if (v21 != 0) {
                    v22 = (int32_t)v19 << v21;
                }
                v23 = v22 | v25;
                *v7 = (int32_t)v23;
                v24 = v17 + 8;
                v17 = v24 & 0xffffffff;
                v25 = v23 & 0xffffffff;
            }
            // 0x1469
            *(int32_t *)*(int64_t *)0x1470 = (int32_t)v24;
        }
        uint32_t v27 = -h_r_size & 31; // 0x1488
        v2 = v10;
        v3 = *(int32_t *)&v4;
        v5 = v27 == 0 ? v9 : (int64_t)(v8 >> v27);
    }
    int64_t v28 = v1; // 0x13b1
    uint32_t v29 = v2;
    uint32_t v30 = 16 << v29;
    uint32_t v31 = (int32_t)(full_pel_vector != 0); // 0x14bd
    int64_t v32 = v3 >> v31;
    v4 = v32;
    int64_t v33; // 0x1390
    if (v1 < 1) {
        // 0x14e4
        v33 = v32;
        if (v1 < 0) {
            int64_t v34 = v28 & 0xffffffff ^ 0xffffffff; // 0x166f
            int64_t v35 = v29 == 0 ? v34 : (int64_t)((int32_t)v34 << v29);
            int64_t v36 = (v35 + v5 ^ 0xffffffff) + v32; // 0x1679
            int64_t v37 = v36 & 0xffffffff; // 0x1679
            v4 = v37;
            v33 = v37;
            if (v37 < (int64_t)-v30) {
                int64_t v38 = v36 + (int64_t)(32 << v29) & 0xffffffff; // 0x1693
                v4 = v38;
                v33 = v38;
            }
        }
    } else {
        int64_t v39 = v28 + 0xffffffff; // 0x14c7
        int64_t v40 = v29 == 0 ? v39 : (int64_t)((int32_t)v39 << v29);
        int64_t v41 = v5 + 1 + v40 + v32; // 0x14d1
        int64_t v42 = v41 & 0xffffffff; // 0x14d1
        v4 = v42;
        v33 = v42;
        if (v42 >= (int64_t)v30) {
            int64_t v43 = v41 + (int64_t)(-32 << v29) & 0xffffffff; // 0x14e0
            v4 = v43;
            v33 = v43;
        }
    }
    int64_t v44 = v33; // 0x14f4
    if (full_pel_vector != 0) {
        v44 = (int32_t)v33 << v31;
        v4 = v44;
    }
    *PMV = (int32_t)v44;
    if (dmv != 0) {
        // 0x14fe
        *dmvector = Get_dmvector();
    }
    int32_t v45 = Get_motion_code(); // 0x1506
    int32_t v46; // 0x1390
    int64_t v47; // 0x1390
    if (v_r_size == 0 || v45 == 0) {
        // 0x1506
        v46 = v_r_size & 31;
        v47 = 0;
    } else {
        int32_t * v48 = (int32_t *)*(int64_t *)0x1529; // 0x1529
        uint32_t v49 = *v48; // 0x1529
        int64_t v50 = v49; // 0x1529
        int32_t v51 = v_r_size & 31;
        int64_t v52 = v51 == 0 ? v50 : (int64_t)(v49 << v51);
        *v48 = (int32_t)v52;
        int32_t * v53 = (int32_t *)*(int64_t *)0x153e; // 0x153e
        uint32_t v54 = *v53 - v_r_size; // 0x1541
        *v53 = v54;
        if (v54 <= 24) {
            int64_t v55 = v54; // 0x1541
            int64_t * v56 = (int64_t *)*(int64_t *)0x1561; // 0x1561
            int64_t v57 = *v56; // 0x1561
            int64_t v58; // 0x1390
            if (v57 >= *(int64_t *)0x1570 + 2044) {
                int64_t v59 = *(int64_t *)0x176f; // 0x1768
                int64_t v60 = v55; // 0x176f
                int32_t v61 = (int32_t)*(int64_t *)*(int64_t *)0x1744;
                int32_t v62 = v61; // 0x17b5
                int64_t v63 = v57; // 0x17b5
                int64_t v64; // 0x17da
                if (v57 >= *(int64_t *)0x1765 + 2048) {
                    // 0x17b7
                    memcpy(v59, *(int64_t *)0x17c9, 2048, 2048);
                    v62 = v61;
                    v63 = v59;
                    if (*(int32_t *)*(int64_t *)0x1753 != 0) {
                        // 0x17d5
                        v64 = (int64_t)v61 - 2048;
                        *(int64_t *)*(int64_t *)0x17e8 = v64;
                        v62 = v64;
                        v63 = v59;
                    }
                }
                int64_t v65 = v63 + 1; // 0x1786
                *v56 = v65;
                unsigned char v66 = *(char *)v63; // 0x178d
                int32_t v67 = v60;
                uint32_t v68 = 24 - v67 & 31; // 0x1795
                int64_t v69 = v66; // 0x1795
                if (v68 != 0) {
                    v69 = (int32_t)v66 << v68;
                }
                int64_t v70 = v69 | v52;
                *v48 = (int32_t)v70;
                v60 = v60 + 8 & 0xffffffff;
                v58 = v60;
                int64_t v71 = v60; // 0x17ac
                int64_t v72 = v70 & 0xffffffff; // 0x17ac
                while (v67 <= 16) {
                    // 0x17b2
                    v61 = v62;
                    v62 = v61;
                    v63 = v65;
                    if (v65 >= *(int64_t *)0x1765 + 2048) {
                        // 0x17b7
                        memcpy(v59, *(int64_t *)0x17c9, 2048, v71);
                        v62 = v61;
                        v63 = v59;
                        if (*(int32_t *)*(int64_t *)0x1753 != 0) {
                            // 0x17d5
                            v64 = (int64_t)v61 - 2048;
                            *(int64_t *)*(int64_t *)0x17e8 = v64;
                            v62 = v64;
                            v63 = v59;
                        }
                    }
                    // 0x1786
                    v65 = v63 + 1;
                    *v56 = v65;
                    v66 = *(char *)v63;
                    v67 = v60;
                    v68 = 24 - v67 & 31;
                    v69 = v66;
                    if (v68 != 0) {
                        v69 = (int32_t)v66 << v68;
                    }
                    v70 = v69 | v72;
                    *v48 = (int32_t)v70;
                    v60 = v60 + 8 & 0xffffffff;
                    v58 = v60;
                    v71 = v60;
                    v72 = v70 & 0xffffffff;
                }
            } else {
                int64_t v73 = v57 + 1; // 0x1580
                *v56 = v73;
                unsigned char v74 = *(char *)v57; // 0x1587
                uint32_t v75 = (int32_t)v55;
                uint32_t v76 = 24 - v75 & 31; // 0x158f
                int64_t v77 = v74; // 0x158f
                if (v76 != 0) {
                    v77 = (int32_t)v74 << v76;
                }
                int64_t v78 = v77 | v52;
                *v48 = (int32_t)v78;
                int64_t v79 = v55 + 8 & 0xffffffff; // 0x1597
                int64_t v80 = v73; // 0x15a6
                int64_t v81 = v79; // 0x15a6
                int64_t v82 = v78 & 0xffffffff; // 0x15a6
                v58 = v79;
                while (v75 < 17) {
                    // 0x1580
                    v73 = v80 + 1;
                    *v56 = v73;
                    v74 = *(char *)v80;
                    v75 = (int32_t)v81;
                    v76 = 24 - v75 & 31;
                    v77 = v74;
                    if (v76 != 0) {
                        v77 = (int32_t)v74 << v76;
                    }
                    v78 = v77 | v82;
                    *v48 = (int32_t)v78;
                    v79 = v81 + 8 & 0xffffffff;
                    v80 = v73;
                    v81 = v79;
                    v82 = v78 & 0xffffffff;
                    v58 = v79;
                }
            }
            // 0x15a8
            *(int32_t *)*(int64_t *)0x15af = (int32_t)v58;
        }
        uint32_t v83 = -v_r_size & 31; // 0x15c7
        v46 = v51;
        v47 = v83 == 0 ? v50 : (int64_t)(v49 >> v83);
    }
    int64_t v84 = v45; // 0x1506
    uint32_t v85 = v46;
    int32_t * v86 = (int32_t *)((int64_t)PMV + 4); // 0x15de
    uint32_t v87 = (int32_t)(mvscale != 0);
    uint32_t v88 = 16 << v85;
    int64_t v89 = v88;
    v4 = v89;
    int64_t v90 = (int64_t)(*v86 >> v87 >> v31);
    int64_t v91; // 0x1390
    int64_t v92; // 0x1390
    int64_t v93; // 0x162e
    if (v45 < 1) {
        // 0x1622
        v91 = v90;
        if (v45 == 0) {
            goto lab_0x163d;
        } else {
            int64_t v94 = v84 & 0xffffffff ^ 0xffffffff; // 0x1624
            int64_t v95 = v85 == 0 ? v94 : (int64_t)((int32_t)v94 << v85);
            v93 = (v47 + v95 ^ 0xffffffff) + v90 & 0xffffffff;
            v92 = 32;
            v91 = v93;
            if (v93 < (int64_t)-v88) {
                goto lab_0x161a;
            } else {
                goto lab_0x163d;
            }
        }
    } else {
        int64_t v96 = v84 + 0xffffffff; // 0x1605
        int64_t v97 = v85 == 0 ? v96 : (int64_t)((int32_t)v96 << v85);
        int64_t v98 = v97 + 1 + v47 + v90 & 0xffffffff; // 0x160f
        v93 = v98;
        v92 = 0xffffffe0;
        v91 = v98;
        if (v98 < v89) {
            goto lab_0x163d;
        } else {
            goto lab_0x161a;
        }
    }
  lab_0x163d:;
    int64_t v99 = v91;
    int64_t v100 = full_pel_vector == 0 ? v99 : (int64_t)((int32_t)v99 << v31);
    int64_t v101 = mvscale == 0 ? v100 : (int64_t)((int32_t)v100 << v87);
    *v86 = (int32_t)v101;
    if (dmv != 0) {
        // 0x1657
        *(int32_t *)((int64_t)dmvector + 4) = Get_dmvector();
    }
  lab_0x161a:;
    int64_t v102 = v92;
    int64_t v103 = v85 == 0 ? v102 : (int64_t)((int32_t)v102 << v85);
    v91 = v103 + v93 & 0xffffffff;
    goto lab_0x163d;
}
