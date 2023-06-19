
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "adpcm.h"
int64_t _abs(int64_t a1) {
    // 0x0
    return ((int32_t)a1 < 0 ? -a1 : a1) & 0xffffffff;
}
int32_t encode(int32_t xin1, int32_t xin2) {
    int64_t v1 = *(int64_t *)37; // 0x1e
    int32_t * v2 = (int32_t *)v1; // 0x25
    int32_t v3 = *v2; // 0x25
    int32_t * v4 = (int32_t *)(v1 + 4); // 0x2c
    int32_t v5 = *v4; // 0x2c
    int64_t v6 = v1 + 8; // 0x34
    int32_t v7 = *(int32_t *)v6; // 0x34
    int32_t v8 = *(int32_t *)(v1 + 12); // 0x3c
    int64_t v9 = v1 + 16; // 0x4a
    int32_t v10 = *(int32_t *)v9; // 0x4a
    int32_t v11 = *(int32_t *)(v1 + 20); // 0x56
    int64_t v12 = v1 + 24; // 0x61
    int32_t v13 = *(int32_t *)v12; // 0x61
    int32_t v14 = *(int32_t *)(v1 + 28); // 0x6c
    int64_t v15 = v1 + 32; // 0x7d
    int32_t v16 = *(int32_t *)v15; // 0x7d
    int32_t v17 = *(int32_t *)(v1 + 36); // 0x8b
    int64_t v18 = v1 + 40; // 0x96
    int32_t v19 = *(int32_t *)v18; // 0x96
    int32_t v20 = *(int32_t *)(v1 + 44); // 0xa1
    int64_t v21 = v1 + 48; // 0xaf
    int32_t v22 = *(int32_t *)v21; // 0xaf
    int32_t v23 = *(int32_t *)(v1 + 52); // 0xbd
    int64_t v24 = v1 + 56; // 0xce
    int32_t v25 = *(int32_t *)v24; // 0xce
    int32_t v26 = *(int32_t *)(v1 + 60); // 0xdc
    int64_t v27 = v1 + 64; // 0xe7
    int32_t v28 = *(int32_t *)v27; // 0xe7
    int32_t v29 = *(int32_t *)(v1 + 68); // 0xf2
    int64_t v30 = v1 + 72; // 0xfd
    int32_t v31 = *(int32_t *)v30; // 0xfd
    int32_t v32 = *(int32_t *)(v1 + 76); // 0x10b
    int64_t v33 = v1 + 80; // 0x11a
    int32_t v34 = *(int32_t *)v33; // 0x11a
    int32_t v35 = *(int32_t *)(v1 + 84); // 0x128
    int64_t v36 = v1 + 88; // 0x136
    int32_t v37 = *(int32_t *)v36; // 0x136
    int32_t v38 = *(int32_t *)(v1 + 92); // 0x141
    int128_t v39 = __asm_movaps(*(int128_t *)v1); // 0x149
    int128_t v40 = __asm_movaps(*(int128_t *)v9); // 0x14c
    int128_t v41 = __asm_movaps(*(int128_t *)v15); // 0x150
    int128_t v42 = __asm_movaps(*(int128_t *)v21); // 0x154
    __asm_movups(*(int128_t *)v6, v39);
    __asm_movups(*(int128_t *)v12, v40);
    __asm_movups(*(int128_t *)v18, v41);
    int128_t v43 = __asm_movaps(*(int128_t *)v27); // 0x164
    __asm_movups(*(int128_t *)v24, v42);
    __asm_movups(*(int128_t *)v30, v43);
    *(int64_t *)v36 = *(int64_t *)v33;
    int64_t v44 = 48 * (int64_t)v10 + 12 * (int64_t)v3 + 128 * (int64_t)v13 + -840 * (int64_t)v16 + 3804 * (int64_t)v19 + 0x3c90 * (int64_t)v22 + -3220 * (int64_t)v25 + 1448 * (int64_t)v28 + -624 * (int64_t)v31 + 212 * (int64_t)v34 + -44 * ((int64_t)v37 + (int64_t)v7); // 0x182
    int64_t v45 = -624 * (int64_t)v11 + 212 * (int64_t)v8 + 1448 * (int64_t)v14 + -3220 * (int64_t)v17 + 0x3c90 * (int64_t)v20 + 3804 * (int64_t)v23 + -840 * (int64_t)v26 + 128 * (int64_t)v29 + 48 * (int64_t)v32 + -44 * ((int64_t)v35 + (int64_t)v5) + 12 * (int64_t)v38; // 0x185
    *v4 = xin1;
    *v2 = xin2;
    uint64_t v46 = (v45 + v44) / 0x8000; // 0x192
    *(int32_t *)*(int64_t *)413 = (int32_t)v46;
    uint64_t v47 = (v44 - v45) / 0x8000; // 0x1a2
    *(int32_t *)*(int64_t *)429 = (int32_t)v47;
    int64_t v48 = *(int64_t *)439; // 0x1b0
    int32_t v49 = *(int32_t *)v48; // 0x1b7
    int64_t v50 = *(int64_t *)449; // 0x1ba
    int32_t v51 = *(int32_t *)v50; // 0x1c1
    int32_t v52 = *(int32_t *)(v48 + 4); // 0x1c8
    int32_t v53 = *(int32_t *)(v50 + 4); // 0x1cc
    int32_t v54 = *(int32_t *)(v48 + 8); // 0x1d7
    int32_t v55 = *(int32_t *)(v50 + 8); // 0x1db
    int32_t v56 = *(int32_t *)(v48 + 12); // 0x1e3
    int32_t v57 = *(int32_t *)(v50 + 12); // 0x1e7
    int32_t v58 = *(int32_t *)(v48 + 16); // 0x1f5
    int32_t v59 = *(int32_t *)(v50 + 16); // 0x1f9
    int32_t v60 = *(int32_t *)(v48 + 20); // 0x201
    int32_t v61 = *(int32_t *)(v50 + 20); // 0x205
    uint64_t v62 = ((int64_t)v53 * (int64_t)v52 + (int64_t)v51 * (int64_t)v49 + (int64_t)v55 * (int64_t)v54 + (int64_t)v57 * (int64_t)v56 + (int64_t)v59 * (int64_t)v58 + (int64_t)v61 * (int64_t)v60) / 0x4000; // 0x213
    *(int32_t *)*(int64_t *)542 = (int32_t)v62;
    int64_t v63 = (int64_t)*(int32_t *)*(int64_t *)563; // 0x233
    int32_t v64 = *(int32_t *)*(int64_t *)573; // 0x23d
    int64_t v65 = (int64_t)*(int32_t *)*(int64_t *)583; // 0x247
    uint64_t v66 = (2 * (int64_t)v64 * v65 + 0xaac69a * v63) / 0x8000; // 0x25c
    *(int32_t *)*(int64_t *)615 = (int32_t)v66;
    int64_t v67 = v66 + v62; // 0x26a
    *(int32_t *)*(int64_t *)628 = (int32_t)v67;
    int64_t v68 = v46 - v67; // 0x277
    int32_t result = v68; // 0x281
    *(int32_t *)*(int64_t *)641 = result;
    int32_t * v69 = (int32_t *)*(int64_t *)650; // 0x28a
    int64_t v70 = (int64_t)*v69; // 0x28a
    uint64_t v71 = (result < 0 ? -v68 : v68) & 0xffffffff; // 0x291
    int64_t v72 = 0;
    int64_t v73 = 4 * v72 + *(int64_t *)669;
    int64_t v74 = v72; // 0x2af
    while ((int64_t)*(int32_t *)v73 * v70 >> 15 < v71) {
        // 0x2b1
        if ((int64_t)*(int32_t *)(v73 + 4) * v70 >> 15 >= v71) {
            // 0x2e6
            v74 = v72 + 1;
            goto lab_0x2ef;
        }
        // 0x2c3
        if ((int64_t)*(int32_t *)(v73 + 8) * v70 >> 15 >= v71) {
            // 0x2eb
            v74 = v72 + 2;
            goto lab_0x2ef;
        }
        // 0x2d5
        v74 = 30;
        if (v72 == 27) {
            // break -> 0x2ef
            break;
        }
        v72 += 3;
        v73 = 4 * v72 + *(int64_t *)669;
        v74 = v72;
    }
    goto lab_0x2ef;
  lab_0x2ef:
    if (result >= 0) {
        // 0x308
        return result;
    }
    int32_t v75 = *(int32_t *)(*(int64_t *)774 + (4 * v74 & 0x3fffffffc)); // 0x30f
    *(int32_t *)*(int64_t *)793 = v75;
    int64_t v76 = 4 * (int64_t)(v75 >> 2); // 0x32d
    uint64_t v77 = (int64_t)*(int32_t *)(*(int64_t *)813 + v76) * v70 / 0x8000; // 0x335
    int32_t v78 = v77; // 0x340
    *(int32_t *)*(int64_t *)832 = v78;
    int32_t * v79 = (int32_t *)*(int64_t *)841; // 0x349
    int32_t v80 = *(int32_t *)(*(int64_t *)865 + v76); // 0x361
    int32_t v81 = v80 + (int32_t)(127 * (int64_t)*v79 / 128); // 0x361
    uint32_t v82 = v81 > 0 ? v81 : 0; // 0x368
    uint32_t v83 = v82 < 0x4800 ? v82 : 0x4800; // 0x376
    *v79 = v83;
    int32_t v84 = *(int32_t *)(*(int64_t *)909 + (int64_t)(v83 / 16 & 124)); // 0x38d
    *v69 = 8 * (v84 >> (9 - v83 / 2048 & 31));
    int64_t v85 = v77 + v62; // 0x39b
    *(int32_t *)*(int64_t *)933 = (int32_t)v85;
    int64_t v86 = *(int64_t *)950; // 0x3af
    upzero(v78, (int32_t *)*(int64_t *)943, (int32_t *)v86);
    int32_t * v87 = (int32_t *)*(int64_t *)964; // 0x3c4
    int32_t v88 = *v87; // 0x3c4
    int32_t * v89 = (int32_t *)*(int64_t *)974; // 0x3ce
    *v89 = v88;
    int64_t v90 = 4 * v63; // 0x3dd
    int64_t v91 = 0x100000000 * v85 >> 32; // 0x3e5
    uint64_t v92 = v91 * (int64_t)v88 < 0 ? v90 : -v90; // 0x406
    int64_t v93 = (v91 * (int64_t)v88 >= 0 ? 192 : 0xffffff40) + 255 * v63 / 256; // 0x40a
    int64_t v94 = v91 * (int64_t)*v89 < 0 ? 0xffffff80 : 128; // 0x436
    int64_t v95 = v92 / 128 + 127 * v65 / 128 + v94; // 0x43b
    int32_t v96 = v95; // 0x43e
    int64_t v97 = v96 < 0x3000 == (0x2fff - v96 & v96) < 0 ? 0x3000 : v95 & 0xffffffff; // 0x449
    int32_t v98 = v97; // 0x44c
    int32_t v99 = v98 + 0x2fff; // 0x44c
    int64_t v100 = v99 < 0 == ((v99 ^ v98) & (v98 ^ -0x80000000)) < 0 ? v97 : 0xffffd000; // 0x457
    *(int32_t *)*(int64_t *)1121 = (int32_t)v100;
    int64_t v101 = 0x3c00 - v100; // 0x468
    int64_t v102 = v100 + 0xffffc400; // 0x46a
    int32_t v103 = v93; // 0x470
    int32_t v104 = v103 - (int32_t)v101; // 0x470
    int64_t v105 = v104 < 0 == ((v104 ^ v103) & (int32_t)(v101 ^ v93)) < 0 ? v101 : v93;
    int32_t v106 = v105; // 0x475
    int32_t v107 = v106 - (int32_t)v102; // 0x475
    int64_t v108 = v107 == 0 | v107 < 0 != ((v107 ^ v106) & (int32_t)(v105 ^ v102)) < 0 ? v102 : v105;
    *(int32_t *)*(int64_t *)1153 = (int32_t)v108;
    int32_t v109 = v77 + v67; // 0x48d
    *(int32_t *)*(int64_t *)1165 = v109;
    *(int32_t *)*(int64_t *)1180 = 0x55634d;
    *(int32_t *)0x55634d = v109;
    *v87 = (int32_t)v91;
    int64_t v110 = *(int64_t *)1196; // 0x4a5
    int32_t v111 = *(int32_t *)v110; // 0x4ac
    int64_t v112 = *(int64_t *)1206; // 0x4af
    int32_t v113 = *(int32_t *)v112; // 0x4b6
    int32_t v114 = *(int32_t *)(v110 + 4); // 0x4bd
    int32_t v115 = *(int32_t *)(v112 + 4); // 0x4c1
    int32_t v116 = *(int32_t *)(v110 + 8); // 0x4cc
    int32_t v117 = *(int32_t *)(v112 + 8); // 0x4d0
    int32_t v118 = *(int32_t *)(v110 + 12); // 0x4d8
    int32_t v119 = *(int32_t *)(v112 + 12); // 0x4dc
    int32_t v120 = *(int32_t *)(v110 + 16); // 0x4ea
    int32_t v121 = *(int32_t *)(v112 + 16); // 0x4ee
    int32_t v122 = *(int32_t *)(v110 + 20); // 0x4f6
    int32_t v123 = *(int32_t *)(v112 + 20); // 0x4fa
    uint64_t v124 = ((int64_t)v115 * (int64_t)v114 + (int64_t)v113 * (int64_t)v111 + (int64_t)v117 * (int64_t)v116 + (int64_t)v119 * (int64_t)v118 + (int64_t)v121 * (int64_t)v120 + (int64_t)v123 * (int64_t)v122) / 0x4000; // 0x508
    *(int32_t *)*(int64_t *)1299 = (int32_t)v124;
    int64_t v125 = (int64_t)*(int32_t *)*(int64_t *)1319; // 0x527
    int64_t v126 = (int64_t)*(int32_t *)*(int64_t *)1339; // 0x53b
    uint64_t v127 = (0xc690 * v126 + 0xc698 * v125) / 0x8000; // 0x550
    *(int32_t *)*(int64_t *)1371 = (int32_t)v127;
    int64_t v128 = v127 + v124; // 0x55e
    *(int32_t *)*(int64_t *)1384 = (int32_t)v128;
    uint64_t v129 = v47 - v128; // 0x56b
    int32_t v130 = v129; // 0x575
    *(int32_t *)*(int64_t *)1397 = v130;
    int64_t v131 = v129 / 0x40000000 & 2 ^ 3; // 0x580
    int32_t * v132 = (int32_t *)*(int64_t *)1418; // 0x58a
    int64_t v133 = (int64_t)*v132; // 0x58a
    int64_t v134 = v130 < 0 ? -v129 : v129; // 0x59d
    int64_t v135 = v131 + 0xffffffff;
    int64_t v136 = 564 * v133 / 0x1000 < (v134 & 0xffffffff) ? v135 : v131;
    int64_t v137 = 564 * v133 / 0x1000 < (v134 & 0xffffffff) ? v135 & 2 : v131;
    *(int32_t *)*(int64_t *)1448 = (int32_t)v136;
    int64_t v138 = 4 * v137; // 0x5d6
    uint64_t v139 = (int64_t)*(int32_t *)(v138 + *(int64_t *)1503) * v133 / 0x8000; // 0x5e7
    int32_t v140 = v139; // 0x5f2
    *(int32_t *)*(int64_t *)1522 = v140;
    int32_t * v141 = (int32_t *)*(int64_t *)1532; // 0x5fc
    int32_t v142 = *(int32_t *)(*(int64_t *)1556 + v138); // 0x614
    int32_t v143 = v142 + (int32_t)(127 * (int64_t)*v141 / 128); // 0x614
    int64_t v144 = v143 >= 0 == (v143 != 0) ? (int64_t)v143 : 0; // 0x619
    uint64_t v145 = (int32_t)v144 < 0x5800 ? v144 : 0x5800; // 0x629
    uint32_t v146 = (int32_t)v145; // 0x62d
    *v141 = v146;
    int32_t v147 = *(int32_t *)((v145 / 16 & 124) + *(int64_t *)1494); // 0x63a
    *v132 = 8 * (v147 >> (11 - v146 / 2048 & 31));
    int64_t v148 = v139 + v124; // 0x649
    *(int32_t *)*(int64_t *)1619 = (int32_t)v148;
    int64_t v149 = *(int64_t *)1636; // 0x65d
    upzero(v140, (int32_t *)*(int64_t *)1629, (int32_t *)v149);
    int64_t v150 = 4 * v125; // 0x67b
    int64_t v151 = 0x100000000 * v148 >> 32; // 0x683
    int32_t * v152 = (int32_t *)*(int64_t *)1677; // 0x68d
    int32_t v153 = *v152; // 0x68d
    uint64_t v154 = v151 * (int64_t)v153 < 0 ? v150 : -v150; // 0x6b1
    int64_t v155 = (v151 * (int64_t)v153 >= 0 ? 192 : 0xffffff40) + 255 * v125 / 256; // 0x6b5
    int32_t * v156 = (int32_t *)*(int64_t *)1747; // 0x6d3
    int64_t v157 = v151 * (int64_t)*v156 < 0 ? 0xffffff80 : 128; // 0x6e7
    int64_t v158 = v154 / 128 + 127 * v126 / 128 + v157; // 0x6ee
    int32_t v159 = v158; // 0x6f1
    int64_t v160 = v159 < 0x3000 == (0x2fff - v159 & v159) < 0 ? 0x3000 : v158 & 0xffffffff; // 0x6fd
    int32_t v161 = v160; // 0x701
    int32_t v162 = v161 + 0x2fff; // 0x701
    int64_t v163 = v162 < 0 == ((v162 ^ v161) & (v161 ^ -0x80000000)) < 0 ? v160 : 0xffffd000; // 0x70e
    *v156 = v153;
    *(int32_t *)*(int64_t *)1819 = (int32_t)v163;
    int64_t v164 = 0x3c00 - v163; // 0x71e
    int64_t v165 = v163 + 0xffffc400; // 0x721
    int32_t v166 = v155; // 0x728
    int32_t v167 = v166 - (int32_t)v164; // 0x728
    int64_t v168 = v167 < 0 == ((v167 ^ v166) & (int32_t)(v164 ^ v155)) < 0 ? v164 : v155;
    int32_t v169 = v168; // 0x72f
    int32_t v170 = v169 - (int32_t)v165; // 0x72f
    int64_t v171 = v170 == 0 | v170 < 0 != ((v170 ^ v169) & (int32_t)(v168 ^ v165)) < 0 ? v165 : v168;
    *(int32_t *)*(int64_t *)1853 = (int32_t)v171;
    *(int32_t *)*(int64_t *)1868 = 0x634c;
    int32_t v172 = v139 + v128; // 0x758
    *(int32_t *)*(int64_t *)1880 = v172;
    *(int32_t *)*(int64_t *)1890 = v172;
    *v152 = (int32_t)v151;
    return 64 * (int32_t)v137 | v75;
}
void upzero(int32_t dlt, int32_t * dlti, int32_t * bli) {
    int64_t v1 = (int64_t)bli;
    int64_t v2 = (int64_t)dlti;
    int64_t v3 = v2;
    if (dlt == 0) {
        // 0xa22
        *bli = (int32_t)(255 * (0x100000000 * v1 >> 32) / 256);
        int32_t * v4 = (int32_t *)(v1 + 4); // 0xa35
        *v4 = (int32_t)(255 * (int64_t)*v4 / 256);
        int32_t * v5 = (int32_t *)(v1 + 8); // 0xa4a
        *v5 = (int32_t)(255 * (int64_t)*v5 / 256);
        int32_t * v6 = (int32_t *)(v1 + 12); // 0xa5f
        *v6 = (int32_t)(255 * (int64_t)*v6 / 256);
        int32_t * v7 = (int32_t *)(v1 + 16); // 0xa74
        *v7 = (int32_t)(255 * (int64_t)*v7 / 256);
        int32_t * v8 = (int32_t *)(v1 + 20); // 0xa89
        *v8 = (int32_t)(255 * (int64_t)*v8 / 256);
    } else {
        int64_t v9 = dlt;
        *bli = (int32_t)(256 * (int64_t)((0x100000000 * v2 >> 32) * v9 >= 0) + 255 * (0x100000000 * v1 >> 32) / 256) - 128;
        int32_t v10 = *(int32_t *)(v2 + 4); // 0x92a
        int32_t * v11 = (int32_t *)(v1 + 4); // 0x940
        int32_t v12 = *v11; // 0x940
        *v11 = (int32_t)(256 * (int64_t)((int64_t)v10 * v9 >= 0) + 255 * (int64_t)v12 / 256) - 128;
        int32_t v13 = *(int32_t *)(v3 + 8); // 0x95c
        int32_t * v14 = (int32_t *)(v1 + 8); // 0x972
        int32_t v15 = *v14; // 0x972
        *v14 = (int32_t)(256 * (int64_t)((int64_t)v13 * v9 >= 0) + 255 * (int64_t)v15 / 256) - 128;
        int32_t v16 = *(int32_t *)(v3 + 12); // 0x98e
        int32_t * v17 = (int32_t *)(v1 + 12); // 0x9a4
        int32_t v18 = *v17; // 0x9a4
        *v17 = (int32_t)(256 * (int64_t)((int64_t)v16 * v9 >= 0) + 255 * (int64_t)v18 / 256) - 128;
        int32_t v19 = *(int32_t *)(v3 + 16); // 0x9c0
        int32_t * v20 = (int32_t *)(v1 + 16); // 0x9d6
        int32_t v21 = *v20; // 0x9d6
        *v20 = (int32_t)(256 * (int64_t)((int64_t)v19 * v9 >= 0) + 255 * (int64_t)v21 / 256) - 128;
        int32_t v22 = *(int32_t *)(v3 + 20); // 0x9f2
        int32_t * v23 = (int32_t *)(v1 + 20); // 0xa05
        int32_t v24 = *v23; // 0xa05
        *v23 = (int32_t)(255 * (int64_t)v24 / 256) - 128 + 256 * (int32_t)((int64_t)v22 * v9 >= 0);
    }
    int64_t v25 = v3;
    *(int32_t *)(v25 + 20) = *(int32_t *)(v25 + 16);
    int128_t v26 = *(int128_t *)&v3; // 0xaa4
    int128_t v27 = __asm_movups_1(v26); // 0xaa4
    int64_t v28 = v26;
    __asm_movups(*(int128_t *)(v28 + 4), v27);
    *(int32_t *)v28 = dlt;
}
int64_t filtez(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x78a
    int32_t v2 = *(int32_t *)(a2 + 4); // 0x78e
    int32_t v3 = *(int32_t *)(a1 + 8); // 0x799
    int32_t v4 = *(int32_t *)(a2 + 8); // 0x79d
    int32_t v5 = *(int32_t *)(a1 + 12); // 0x7a5
    int32_t v6 = *(int32_t *)(a2 + 12); // 0x7a9
    int32_t v7 = *(int32_t *)(a1 + 16); // 0x7b7
    int32_t v8 = *(int32_t *)(a2 + 16); // 0x7bb
    int32_t v9 = *(int32_t *)(a1 + 20); // 0x7c3
    int32_t v10 = *(int32_t *)(a2 + 20); // 0x7c7
    int64_t v11; // 0x780
    return ((int64_t)v2 * (int64_t)v1 + (0x100000000 * v11 >> 32) * (0x100000000 * v11 >> 32) + (int64_t)v4 * (int64_t)v3 + (int64_t)v6 * (int64_t)v5 + (int64_t)v8 * (int64_t)v7 + (int64_t)v10 * (int64_t)v9) / 0x4000;
}
int64_t filtep(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x7e0
    return ((0x100000000 * a4 >> 32) * (0x200000000 * a3 >> 32) + (0x100000000 * a2 >> 32) * (0x200000000 * a1 >> 32)) / 0x8000;
}
int64_t quantl(int64_t a1, int64_t a2) {
    uint64_t v1 = ((int32_t)a1 < 0 ? -a1 : a1) & 0xffffffff; // 0x804
    int64_t v2 = 0x100000000 * a2 >> 32; // 0x807
    int64_t v3 = 0;
    int64_t v4 = 4 * v3 + *(int64_t *)2067;
    int64_t v5 = v3; // 0x82f
    while (v2 * (int64_t)*(int32_t *)v4 >> 15 < v1) {
        // 0x831
        if (v2 * (int64_t)*(int32_t *)(v4 + 4) >> 15 >= v1) {
            // 0x866
            v5 = v3 + 1;
            goto lab_0x86f;
        }
        // 0x843
        if (v2 * (int64_t)*(int32_t *)(v4 + 8) >> 15 >= v1) {
            // 0x86b
            v5 = v3 + 2;
            goto lab_0x86f;
        }
        // 0x855
        v5 = 30;
        if (v3 == 27) {
            // break -> 0x86f
            break;
        }
        v3 += 3;
        v4 = 4 * v3 + *(int64_t *)2067;
        v5 = v3;
    }
    goto lab_0x86f;
  lab_0x86f:;
    int64_t result = v5 & 0xffffffff; // 0x86f
    if ((int32_t)a1 >= 0) {
        // 0x880
        return result;
    }
    // 0x875
    return (int64_t)*(int32_t *)(*(int64_t *)2172 + 4 * result);
}
int64_t logscl(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)2222; // 0x8a7
    int32_t v2 = *(int32_t *)(v1 + 4 * (int64_t)((int32_t)a1 >> 2)); // 0x8ae
    int32_t v3 = v2 + (int32_t)((128 * a2 - (0x100000000 * a2 >> 32)) / 128); // 0x8ae
    int64_t v4 = v3 >= 0 == (v3 != 0) ? (int64_t)v3 : 0; // 0x8b5
    return (int32_t)v4 < 0x4800 ? v4 : 0x4800;
}
int64_t scalel(uint64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(*(int64_t *)2274 + (a1 / 16 & 124)); // 0x8e2
    return 8 * (int64_t)(v1 >> (1 - (int32_t)a1 / 2048 + (int32_t)a2 & 31)) & 0xfffffff8;
}
int64_t uppol2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x100000000 * a1 >> 30; // 0xab3
    int64_t v2 = 0x100000000 * a3 >> 32; // 0xab7
    uint64_t v3 = (0x100000000 * a4 >> 32) * v2 < 0 ? v1 : -v1; // 0xaca
    int64_t v4 = (128 * a2 - (0x100000000 * a2 >> 32)) / 128 + 0xffffff80 + v3 / 128 + 256 * (int64_t)((0x100000000 * a5 >> 32) * v2 >= 0); // 0xafa
    int32_t v5 = v4; // 0xafd
    int64_t v6 = v5 < 0x3000 == (0x2fff - v5 & v5) < 0 ? 0x3000 : v4 & 0xffffffff; // 0xb07
    int32_t v7 = v6; // 0xb0a
    int32_t v8 = v7 + 0x2fff; // 0xb0a
    return v8 < 0 == ((v8 ^ v7) & (v7 ^ -0x80000000)) < 0 ? v6 : 0xffffd000;
}
int64_t uppol1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = (0x100000000 * a4 >> 32) * (0x100000000 * a3 >> 32) >= 0 ? 192 : 0xffffff40;
    int64_t v3 = v2 + ((v1 >> 24) - (v1 >> 32)) / 256; // 0xb4a
    int64_t v4 = 0x3c00 - a2; // 0xb52
    int64_t v5 = a2 + 0xffffc400; // 0xb54
    int32_t v6 = v3; // 0xb5a
    int32_t v7 = v6 - (int32_t)v4; // 0xb5a
    int64_t v8 = v7 < 0 == ((v7 ^ v6) & (int32_t)(v3 ^ v4)) < 0 ? v4 : v3;
    int32_t v9 = v8; // 0xb5f
    int32_t v10 = v9 - (int32_t)v5; // 0xb5f
    int64_t v11 = v10 == 0 | v10 < 0 != ((v10 ^ v9) & (int32_t)(v8 ^ v5)) < 0 ? v5 : v8;
    return v11 & 0xffffffff;
}
int64_t logsch(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(*(int64_t *)2955 + (0x100000000 * a1 >> 30)); // 0xb8b
    int32_t v2 = v1 + (int32_t)((128 * a2 - (0x100000000 * a2 >> 32)) / 128); // 0xb8b
    int64_t v3 = v2 >= 0 == (v2 != 0) ? (int64_t)v2 : 0; // 0xb92
    return (int32_t)v3 < 0x5800 ? v3 : 0x5800;
}
void decode(int32_t input) {
    int64_t v1 = *(int64_t *)3013; // 0xbbe
    int32_t * v2 = (int32_t *)v1; // 0xbc5
    int32_t v3 = *v2; // 0xbc5
    int64_t v4 = *(int64_t *)3023; // 0xbc8
    int32_t * v5 = (int32_t *)v4; // 0xbcf
    int32_t v6 = *v5; // 0xbcf
    int32_t v7 = *(int32_t *)(v1 + 4); // 0xbd6
    int32_t v8 = *(int32_t *)(v4 + 4); // 0xbda
    int32_t v9 = *(int32_t *)(v1 + 8); // 0xbe5
    int32_t v10 = *(int32_t *)(v4 + 8); // 0xbe9
    int32_t v11 = *(int32_t *)(v1 + 12); // 0xbf1
    int32_t v12 = *(int32_t *)(v4 + 12); // 0xbf5
    int32_t v13 = *(int32_t *)(v1 + 16); // 0xc03
    int32_t v14 = *(int32_t *)(v4 + 16); // 0xc07
    int32_t v15 = *(int32_t *)(v1 + 20); // 0xc0f
    int32_t v16 = *(int32_t *)(v4 + 20); // 0xc13
    int64_t v17 = (int64_t)*(int32_t *)*(int64_t *)3126; // 0xc36
    int64_t v18 = (int64_t)*(int32_t *)*(int64_t *)3146; // 0xc4a
    uint64_t v19 = (0xc690 * v18 + 0xc698 * v17) / 0x8000; // 0xc5f
    *(int32_t *)*(int64_t *)3178 = (int32_t)v19;
    int32_t * v20 = (int32_t *)*(int64_t *)3188; // 0xc74
    int64_t v21 = input & 60; // 0xc86
    int32_t v22 = *(int32_t *)(*(int64_t *)3220 + v21); // 0xc94
    int32_t v23 = v22 + (int32_t)(127 * (int64_t)*v20 / 128); // 0xc94
    int32_t v24 = *(int32_t *)*(int64_t *)3242; // 0xcaa
    int32_t v25 = *(int32_t *)(4 * (int64_t)v24 + *(int64_t *)3252); // 0xcb4
    int32_t * v26 = (int32_t *)*(int64_t *)3263; // 0xcbf
    int64_t v27 = (int64_t)*v26; // 0xcc2
    uint64_t v28 = v27 * (int64_t)v25 / 0x8000; // 0xcca
    *(int32_t *)*(int64_t *)3285 = (int32_t)v28;
    uint32_t v29 = input >> 6; // 0xcdb
    uint64_t v30 = ((int64_t)v8 * (int64_t)v7 + (int64_t)v6 * (int64_t)v3 + (int64_t)v10 * (int64_t)v9 + (int64_t)v12 * (int64_t)v11 + (int64_t)v14 * (int64_t)v13 + (int64_t)v16 * (int64_t)v15) / 0x4000; // 0xcdf
    int64_t v31 = v19 + v30; // 0xce3
    uint64_t v32 = v27 * (int64_t)*(int32_t *)(*(int64_t *)3231 + v21) / 0x8000; // 0xce6
    int32_t v33 = v28 + v31; // 0xced
    uint32_t v34 = v23 > 0 ? v23 : 0; // 0xcf8
    uint32_t v35 = v34 < 0x4800 ? v34 : 0x4800; // 0xd09
    *v20 = v35;
    int32_t v36 = *(int32_t *)(*(int64_t *)3371 + (int64_t)(v35 / 16 & 124)); // 0xd2b
    *(int32_t *)*(int64_t *)3385 = input & 63;
    *v26 = 8 * (v36 >> (9 - v35 / 2048 & 31));
    *(int32_t *)*(int64_t *)3401 = v29;
    *(int32_t *)*(int64_t *)3411 = (int32_t)v30;
    *(int32_t *)*(int64_t *)3421 = (int32_t)v31;
    int32_t v37 = v32; // 0xd67
    *(int32_t *)*(int64_t *)3431 = v37;
    *(int32_t *)*(int64_t *)3440 = v33;
    int64_t v38 = v32 + v30; // 0xd73
    *(int32_t *)*(int64_t *)3453 = (int32_t)v38;
    upzero(v37, v5, v2);
    int64_t v39 = 4 * v17; // 0xd98
    int64_t v40 = 0x100000000 * v38 >> 32; // 0xda0
    int32_t * v41 = (int32_t *)*(int64_t *)3470; // 0xda3
    int32_t v42 = *v41; // 0xda3
    int32_t * v43 = (int32_t *)*(int64_t *)3538; // 0xdd2
    *v43 = v42;
    int64_t v44 = (v40 * (int64_t)v42 >= 0 ? 192 : 0xffffff40) + 255 * v17 / 256; // 0xdd8
    int64_t v45 = v40 * (int64_t)*v43 < 0 ? 0xffffff80 : 128; // 0xe01
    int64_t v46 = (v40 * (int64_t)v42 < 0 ? v39 : -v39) / 128 + 127 * v18 / 128 + v45; // 0xe08
    int32_t v47 = v46; // 0xe0b
    int64_t v48 = v47 < 0x3000 == (0x2fff - v47 & v47) < 0 ? 0x3000 : v46 & 0xffffffff; // 0xe17
    int32_t v49 = v48; // 0xe1b
    int32_t v50 = v49 + 0x2fff; // 0xe1b
    int64_t v51 = v50 < 0 == ((v50 ^ v49) & (v49 ^ -0x80000000)) < 0 ? v48 : 0xffffd000; // 0xe27
    *(int32_t *)*(int64_t *)3634 = (int32_t)v51;
    int64_t v52 = 0x3c00 - v51; // 0xe3a
    int64_t v53 = v51 + 0xffffc400; // 0xe3d
    int32_t v54 = v44; // 0xe44
    int32_t v55 = v54 - (int32_t)v52; // 0xe44
    int64_t v56 = v55 < 0 == ((v55 ^ v54) & (int32_t)(v52 ^ v44)) < 0 ? v52 : v44;
    int32_t v57 = v56; // 0xe49
    int32_t v58 = v57 - (int32_t)v53; // 0xe49
    int64_t v59 = v58 == 0 | v58 < 0 != ((v58 ^ v57) & (int32_t)(v56 ^ v53)) < 0 ? v53 : v56;
    *(int32_t *)*(int64_t *)3671 = (int32_t)v59;
    int32_t v60 = v32 + v31; // 0xe63
    *(int32_t *)*(int64_t *)3683 = v60;
    *(int32_t *)*(int64_t *)3693 = 0x634c;
    *(int32_t *)*(int64_t *)3706 = v60;
    *v41 = (int32_t)v40;
    int64_t v61 = *(int64_t *)3718; // 0xe7f
    int32_t * v62 = (int32_t *)v61; // 0xe86
    int32_t v63 = *v62; // 0xe86
    int64_t v64 = *(int64_t *)3728; // 0xe89
    int32_t * v65 = (int32_t *)v64; // 0xe90
    int32_t v66 = *v65; // 0xe90
    int32_t v67 = *(int32_t *)(v61 + 4); // 0xe97
    int32_t v68 = *(int32_t *)(v64 + 4); // 0xe9b
    int32_t v69 = *(int32_t *)(v61 + 8); // 0xea6
    int32_t v70 = *(int32_t *)(v64 + 8); // 0xeaa
    int32_t v71 = *(int32_t *)(v61 + 12); // 0xeb2
    int32_t v72 = *(int32_t *)(v64 + 12); // 0xeb6
    int32_t v73 = *(int32_t *)(v61 + 16); // 0xec4
    int32_t v74 = *(int32_t *)(v64 + 16); // 0xec8
    int32_t v75 = *(int32_t *)(v61 + 20); // 0xed0
    int32_t v76 = *(int32_t *)(v64 + 20); // 0xed4
    int32_t v77 = *(int32_t *)*(int64_t *)3817; // 0xee9
    int64_t v78 = (int64_t)*(int32_t *)*(int64_t *)3831; // 0xef7
    int32_t v79 = *(int32_t *)*(int64_t *)3841; // 0xf0b
    int64_t v80 = (int64_t)*(int32_t *)*(int64_t *)3861; // 0xf15
    uint64_t v81 = (v80 * (int64_t)v79 + v78 * (int64_t)v77) / 0x4000;
    *(int32_t *)*(int64_t *)3888 = (int32_t)v81;
    int32_t * v82 = (int32_t *)*(int64_t *)3898; // 0xf3a
    int64_t v83 = 0x100000000 * (int64_t)v29 >> 30; // 0xf55
    int32_t v84 = *(int32_t *)(*(int64_t *)3925 + v83); // 0xf55
    int32_t v85 = v84 + (int32_t)(127 * (int64_t)*v82 / 128); // 0xf55
    int32_t v86 = *(int32_t *)(*(int64_t *)3936 + v83); // 0xf60
    int32_t * v87 = (int32_t *)*(int64_t *)3947; // 0xf6b
    uint64_t v88 = ((int64_t)v68 * (int64_t)v67 + (int64_t)v66 * (int64_t)v63 + (int64_t)v70 * (int64_t)v69 + (int64_t)v72 * (int64_t)v71 + (int64_t)v74 * (int64_t)v73 + (int64_t)v76 * (int64_t)v75) / 0x4000; // 0xf72
    int64_t v89 = v81 + v88; // 0xf76
    uint64_t v90 = (int64_t)*v87 * (int64_t)v86 / 0x8000; // 0xf79
    uint32_t v91 = v85 > 0 ? v85 : 0; // 0xf84
    uint32_t v92 = v91 < 0x5800 ? v91 : 0x5800; // 0xf93
    *v82 = v92;
    int32_t v93 = *(int32_t *)(*(int64_t *)4010 + (int64_t)(v92 / 16 & 124)); // 0xfaa
    *v87 = 8 * (v93 >> (11 - v92 / 2048 & 31));
    *(int32_t *)*(int64_t *)4037 = (int32_t)v88;
    *(int32_t *)*(int64_t *)4047 = (int32_t)v89;
    int32_t v94 = v90; // 0xfd9
    *(int32_t *)*(int64_t *)4057 = v94;
    int64_t v95 = v90 + v88; // 0xfdb
    *(int32_t *)*(int64_t *)4069 = (int32_t)v95;
    upzero(v94, v65, v62);
    int64_t v96 = 4 * v78; // 0x1005
    int64_t v97 = 0x100000000 * v95 >> 32; // 0x100d
    int32_t * v98 = (int32_t *)*(int64_t *)0x1017; // 0x1017
    int32_t v99 = *v98; // 0x1017
    uint64_t v100 = v97 * (int64_t)v99 < 0 ? v96 : -v96; // 0x103b
    int64_t v101 = (v97 * (int64_t)v99 >= 0 ? 192 : 0xffffff40) + 255 * v78 / 256; // 0x103f
    int32_t * v102 = (int32_t *)*(int64_t *)0x105d; // 0x105d
    int64_t v103 = v97 * (int64_t)*v102 < 0 ? 0xffffff80 : 128; // 0x1071
    int64_t v104 = v100 / 128 + 127 * v80 / 128 + v103; // 0x1078
    int32_t v105 = v104; // 0x107b
    int64_t v106 = v105 < 0x3000 == (0x2fff - v105 & v105) < 0 ? 0x3000 : v104 & 0xffffffff; // 0x1088
    int32_t v107 = v106; // 0x108c
    int32_t v108 = v107 + 0x2fff; // 0x108c
    int64_t v109 = v108 < 0 == ((v108 ^ v107) & (v107 ^ -0x80000000)) < 0 ? v106 : 0xffffd000; // 0x1099
    *v102 = v99;
    *(int32_t *)*(int64_t *)0x10a6 = (int32_t)v109;
    int64_t v110 = 0x3c00 - v109; // 0x10a9
    int64_t v111 = v109 + 0xffffc400; // 0x10ac
    int32_t v112 = v101; // 0x10b3
    int32_t v113 = v112 - (int32_t)v110; // 0x10b3
    int64_t v114 = v113 < 0 == ((v113 ^ v112) & (int32_t)(v110 ^ v101)) < 0 ? v110 : v101;
    int32_t v115 = v114; // 0x10ba
    int32_t v116 = v115 - (int32_t)v111; // 0x10ba
    int64_t v117 = v116 == 0 | v116 < 0 != ((v116 ^ v115) & (int32_t)(v114 ^ v111)) < 0 ? v111 : v114;
    *(int32_t *)*(int64_t *)0x10c8 = (int32_t)v117;
    int32_t v118 = v90 + v89; // 0x10d5
    *(int32_t *)*(int64_t *)0x10d5 = v118;
    *(int32_t *)*(int64_t *)0x10e3 = v77;
    *(int32_t *)*(int64_t *)0x10ec = v118;
    *v98 = (int32_t)v97;
    int32_t v119 = v33 - v118; // 0x10f8
    *(int32_t *)*(int64_t *)0x1102 = v119;
    int32_t v120 = v118 + v33; // 0x1104
    *(int32_t *)*(int64_t *)0x110e = v120;
    int64_t v121 = *(int64_t *)0x111e; // 0x1117
    int32_t * v122 = (int32_t *)v121; // 0x111e
    int32_t v123 = *v122; // 0x111e
    int64_t v124 = v121 + 4; // 0x1129
    int32_t v125 = *(int32_t *)v124; // 0x1129
    int32_t v126 = *(int32_t *)(v121 + 8); // 0x1135
    int32_t v127 = *(int32_t *)(v121 + 12); // 0x1140
    int64_t v128 = v121 + 16; // 0x114e
    int32_t v129 = *(int32_t *)v128; // 0x114e
    int64_t v130 = v121 + 20; // 0x115c
    int32_t v131 = *(int32_t *)v130; // 0x115c
    int32_t v132 = *(int32_t *)(v121 + 24); // 0x116a
    int32_t v133 = *(int32_t *)(v121 + 28); // 0x1178
    int64_t v134 = v121 + 32; // 0x1186
    int32_t v135 = *(int32_t *)v134; // 0x1186
    int64_t v136 = v121 + 36; // 0x11a2
    int32_t v137 = *(int32_t *)v136; // 0x11a2
    int32_t v138 = *(int32_t *)(v121 + 40); // 0x11b0
    int64_t v139 = *(int64_t *)0x11c2; // 0x11bb
    int64_t v140 = *(int64_t *)0x11d0; // 0x11c9
    *(int32_t *)v140 = (int32_t)((-44 * (int64_t)v123 + 12 * (int64_t)v119 + 48 * (int64_t)v125 + 128 * (int64_t)v126 + -840 * (int64_t)v127 + 3804 * (int64_t)v129 + 0x3c90 * (int64_t)v131 + -3220 * (int64_t)v132 + 1448 * (int64_t)v133 + 0x3ffffffffd90 * (int64_t)v135 + 212 * (int64_t)v137 + 0x3fffffffffd4 * (int64_t)v138) / 0x4000);
    int32_t * v141 = (int32_t *)v139; // 0x11d3
    int32_t v142 = *v141; // 0x11d3
    int64_t v143 = v139 + 4; // 0x11dd
    int32_t v144 = *(int32_t *)v143; // 0x11dd
    int32_t v145 = *(int32_t *)(v139 + 8); // 0x11eb
    int32_t v146 = *(int32_t *)(v139 + 12); // 0x11f9
    int64_t v147 = v139 + 16; // 0x1207
    int32_t v148 = *(int32_t *)v147; // 0x1207
    int64_t v149 = v139 + 20; // 0x1215
    int32_t v150 = *(int32_t *)v149; // 0x1215
    int32_t v151 = *(int32_t *)(v139 + 24); // 0x1223
    int32_t v152 = *(int32_t *)(v139 + 28); // 0x1231
    int64_t v153 = v139 + 32; // 0x123c
    int32_t v154 = *(int32_t *)v153; // 0x123c
    int64_t v155 = v139 + 36; // 0x124b
    int32_t v156 = *(int32_t *)v155; // 0x124b
    int32_t v157 = *(int32_t *)(v139 + 40); // 0x1260
    int64_t v158 = *(int64_t *)0x1277; // 0x1270
    *(int32_t *)v158 = (int32_t)((212 * (int64_t)v142 + -44 * (int64_t)v120 + -624 * (int64_t)v144 + 1448 * (int64_t)v145 + -3220 * (int64_t)v146 + 0x3c90 * (int64_t)v148 + 3804 * (int64_t)v150 + -840 * (int64_t)v151 + 128 * (int64_t)v152 + 48 * (int64_t)v154 + 0x3fffffffffd4 * (int64_t)v156 + 12 * (int64_t)v157) / 0x4000);
    int128_t v159 = __asm_movaps(*(int128_t *)v121); // 0x127a
    int128_t v160 = __asm_movaps(*(int128_t *)v128); // 0x127d
    __asm_movups(*(int128_t *)v124, v159);
    *(int64_t *)v136 = *(int64_t *)v134;
    __asm_movups(*(int128_t *)v130, v160);
    *v122 = v119;
    int128_t v161 = __asm_movaps(*(int128_t *)v139); // 0x1293
    int128_t v162 = __asm_movaps(*(int128_t *)v147); // 0x1296
    __asm_movups(*(int128_t *)v143, v161);
    *(int64_t *)v155 = *(int64_t *)v153;
    __asm_movups(*(int128_t *)v149, v162);
    *v141 = v120;
}
