extern char g_400490;
extern char g_400540;
extern char got.A;
extern char got.endTimer;
extern char got.imem;
extern char got.main_result;
extern char got.outData;
extern char got.startTimer;
extern char submain;

long long submain()
{
    unsigned int v0;  // [bp-0x1c8], Other Possible Types: int, uint128_t
    uint128_t v1;  // [bp-0x1b8]
    uint128_t v2;  // [bp-0x1a8]
    uint128_t v3;  // [bp-0x198]
    uint128_t v4;  // [bp-0x188]
    uint128_t v5;  // [bp-0x178]
    uint128_t v6;  // [bp-0x168]
    uint128_t v7;  // [bp-0x158]
    unsigned int v8;  // [bp-0x154]
    unsigned int v9;  // [bp-0x14c]
    char v10;  // [bp-0x148]
    unsigned int v11;  // [bp-0x140]
    unsigned long long v12;  // [bp-0x138], Other Possible Types: unsigned int
    unsigned int v13;  // [bp-0x130]
    unsigned int v15;  // r15d, Other Possible Types: unsigned long long
    unsigned long long v16;  // rax
    unsigned long long v18;  // xmm0lq
    unsigned long long v19;  // xmm1lq
    uint128_t v20;  // xmm1
    int v21;  // xmm0
    void* v23;  // rax
    void* v24;  // r8
    unsigned int v25;  // edi
    unsigned int v26;  // r11
    unsigned long v27;  // r9
    unsigned long long v28;  // cc_op
    unsigned long v29;  // cc_dep1
    void* v30;  // cc_dep2
    unsigned int *v31;  // r13
    unsigned long long v32;  // cc_op
    unsigned long v33;  // cc_dep1
    unsigned long long v34;  // cc_dep2
    void* v35;  // cc_ndep
    unsigned int *v36;  // r12
    unsigned long long v37;  // cc_op
    unsigned int *v38;  // cc_dep1
    unsigned long long v39;  // cc_dep2
    unsigned long v40;  // r12
    unsigned long long v41;  // cc_op
    unsigned long long v42;  // cc_dep1
    unsigned long long v43;  // cc_dep2
    unsigned long long v44;  // r13
    unsigned long v45;  // r13
    unsigned long long v46;  // cc_op
    unsigned long long v47;  // cc_dep1
    unsigned long long v48;  // cc_dep2
    unsigned long long v49;  // r12
    unsigned long long v50;  // cc_op
    unsigned long long v51;  // cc_dep1
    unsigned long long v52;  // cc_dep2
    unsigned long v53;  // cc_op
    unsigned long v54;  // cc_dep1
    unsigned long v55;  // cc_dep2
    unsigned long long v57;  // cc_op
    unsigned long long v58;  // cc_dep1
    unsigned long long v59;  // cc_dep2
    unsigned long long v60;  // rcx
    unsigned long long v61;  // cc_op
    unsigned long long v62;  // cc_dep1
    unsigned long long v63;  // cc_dep2
    unsigned long v64;  // cc_op
    unsigned long v65;  // cc_dep1
    unsigned long v66;  // cc_dep2
    unsigned long long v67;  // cc_op
    unsigned long long v68;  // cc_dep1
    unsigned long long v69;  // cc_dep2
    unsigned long long v70;  // cc_op
    unsigned long long v71;  // cc_dep1
    void* v72;  // cc_dep2
    unsigned long long v73;  // cc_op
    unsigned long long v74;  // cc_dep1
    void* v75;  // cc_dep2
    unsigned long long v76;  // cc_op
    unsigned long long v77;  // cc_dep1
    unsigned long long v78;  // cc_dep2
    unsigned long long v79;  // cc_op
    unsigned long long v80;  // cc_dep1
    unsigned long long v81;  // cc_dep2
    unsigned long long v82;  // cc_op
    unsigned int v83;  // cc_dep1
    unsigned int v84;  // cc_dep2
    unsigned long long v85;  // cc_op
    unsigned long v86;  // cc_dep1
    void* v87;  // cc_dep2
    unsigned long long v88;  // cc_op
    unsigned long long v89;  // cc_dep1
    void* v90;  // cc_dep2
    unsigned long long v91;  // r10
    unsigned long long v92;  // cc_op
    unsigned long long v93;  // cc_dep1
    unsigned long long v94;  // cc_dep2
    unsigned long long v95;  // r10
    unsigned long long v96;  // cc_op
    unsigned long long v97;  // cc_dep1
    unsigned long long v98;  // cc_dep2
    unsigned int v99;  // rcx
    unsigned long long v100;  // cc_op
    unsigned long v101;  // cc_dep1
    void* v102;  // cc_dep2
    unsigned long long v103;  // cc_op
    unsigned long long v104;  // cc_dep1
    void* v105;  // cc_dep2
    unsigned long long v106;  // cc_op
    unsigned long v107;  // cc_dep1
    unsigned long long v108;  // cc_dep2
    unsigned long long v109;  // cc_op
    unsigned long v110;  // cc_dep1
    void* v111;  // cc_dep2
    unsigned long v112;  // rcx
    unsigned long v113;  // r10
    unsigned long v114;  // cc_op
    unsigned long v115;  // cc_dep1
    unsigned long v116;  // cc_dep2
    unsigned long long v117;  // rcx
    unsigned long long v118;  // r15
    unsigned long long v119;  // cc_op
    unsigned long v120;  // cc_dep1
    unsigned long v121;  // cc_dep2
    unsigned long v122;  // rbp
    unsigned long long v123;  // cc_op
    unsigned long v124;  // cc_dep1
    void* v125;  // cc_dep2
    unsigned long v126;  // cc_ndep
    void* v127;  // rax
    void* v128;  // rcx
    void* v129;  // rdi
    unsigned long long v130;  // rax
    int v132;  // xmm1
    uint128_t v133;  // xmm0

    v15 = 0;
    (unsigned int)v16 = gettimeofday(&v12, NULL);
    if ((unsigned int)v16 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v16);
    }
    v18 = v12;
    v19 = v13;
    *((unsigned long long *)&v20) = (unsigned long long)(v20 * 4517329193108106637 + v21);
    *((unsigned long long *)got.startTimer) = v20;
    *((int *)got.main_result) = 0;
    v7 = 0;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v8 = 2147479548;
    memcpy(&v12, got.A, 0x100);
    v112 = &submain;
    v23 = got.imem;
    v24 = 0;
    v25 = 0;
    do
    {
        v26 = *((long long *)&((char *)v23)[8 * ((unsigned int)v112 / 4 & 63)]);
        v27 = v112 + 4;
        if ((unsigned int)(*((long long *)&((char *)v23)[8 * ((unsigned int)(v112 >> 2) & 63)]) >> 26) == 3)
        {
            v9 = (unsigned int)v112 + 4;
        }
        else if ((unsigned int)(*((long long *)(got.imem + (((unsigned int)(v112 >> 2) & 63) << 3))) >> 26) != 2)
        {
            if ((unsigned int)(*((long long *)(got.imem + (((unsigned int)(v112 >> 2) & 63) << 3))) >> 26) == 0)
            {
                v31 = v26 & 63;
                v113 = 0;
                v32 = 7;
                v33 = v26 & 63;
                v34 = 43;
                switch (v26 & 63)
                {
                case 0:
                    v113 = (int)v0;
                case 2:
                    v53 = (((char)v112 & 31) != 0? 35 : 4);
                    v54 = (((char)v112 & 31) != 0? (int)v0 >> ((char)v112 & 31) : cc_dep1<8>);
                    v55 = (((char)v112 & 31) != 0? (int)v0 >> (((char)v112 & 31) - 1 & 31) : &g_400490);
                    *((unsigned int *)&v113) = (int)v0 >> ((char)v112 & 31);
                case 4:
                    v113 = (int)v0;
                    v112 = (char)v0;
                    v114 = (((char)v112 & 31) != 0? 31 : 4);
                    v115 = (((char)v112 & 31) != 0? v113 << ((char)v112 & 31) : cc_dep1<8>);
                    v116 = (((char)v112 & 31) != 0? v113 << (((char)v112 & 31) - 1 & 31) : &g_400490);
                    *((unsigned int *)&v113) = v113 << ((char)v112 & 31);
                case 6:
                    v64 = (((char)v0 & 31) != 0? 35 : 4);
                    v65 = (((char)v0 & 31) != 0? (int)v0 >> ((char)v0 & 31) : cc_dep1<8>);
                    v66 = (((char)v0 & 31) != 0? (int)v0 >> (((char)v0 & 31) - 1 & 31) : &g_400490);
                    *((unsigned int *)&v113) = (int)v0 >> ((char)v0 & 31);
                case 8:
                    v113 = (int)v0;
                    break;
                case 16:
                    v0 = (unsigned int)v24;
                case 18:
                    v0 = v15;
                case 24:
                    v117 = (int)v0;
                    v118 = (int)v0;
                case 25:
                    v117 = (int)v0;
                    v118 = (int)v0;
                    v15 = v117 * v118;
                    v119 = 36;
                    v120 = v15 / 0x100000000;
                    v121 = v15 / 0x80000000;
                    *((unsigned int *)&v24) = (unsigned int)v15 / 0x100000000;
                case 33:
                    v67 = 3;
                    v68 = (int)v0;
                    v69 = (int)v0;
                    *((unsigned int *)&v113) = (int)v0 + (int)v0;
                case 35:
                    v50 = 7;
                    v51 = (int)v0;
                    v52 = (int)v0;
                    *((unsigned int *)&v112) = (int)v0 - (int)v0;
                case 36:
                    v70 = 19;
                    v71 = (int)v0 & (int)v0;
                    v72 = 0;
                    *((unsigned int *)&v113) = (int)v0 & (int)v0;
                case 37:
                    v73 = 19;
                    v74 = (int)v0 | (int)v0;
                    v75 = 0;
                    *((unsigned int *)&v113) = (int)v0 | (int)v0;
                case 38:
                    v99 = v26;
                    *((unsigned int *)&v113) = (int)v0;
                case 42:
                    v60 = (int)v0;
                    v26 = 0;
                    v61 = 7;
                    v62 = v60;
                    v63 = (int)v0;
                    *((char *)&v26) = (unsigned int)v60 < (int)v0;
                case 43:
                    v26 = 0;
                    v57 = 7;
                    v58 = (int)v0;
                    v59 = (int)v0;
                    *((char *)&v26) = [D] amd64g_calculate_condition(0x2<64>, 0x7<64>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                    v0 = v26;
                }
                if ((v26 & 63) <= 43)
                {
                    v112 = v26 / 64 & 31;
                    v122 = v26 / 0x800 & 31;
                    v40 = v26 / 0x10000 & 31;
                    v26 = v26 / 0x200000 & 31;
                    v41 = 4;
                    v42 = *((int *)((char *)&g_400490 + 0x4 * v31));
                    v43 = &g_400490;
                    v44 = *((int *)((char *)&g_400490 + 0x4 * v31)) + (char *)&g_400490;
                }
            }
            else
            {
                v113 = 0;
                v35 = 0;
                v36 = (unsigned int)(*((long long *)(got.imem + ((unsigned int)v112 / 4 & 63) * 8)) >> 26) - 1;
                v37 = 7;
                v38 = v36;
                v39 = 42;
                switch ((unsigned int)v36)
                {
                case 0:
                    v88 = 7;
                    v89 = (int)v0;
                    v90 = 0;
                case 3:
                    v79 = 7;
                    v80 = (int)v0;
                    v81 = (int)v0;
                    if ((int)v0 == (int)v0)
                    {
                        v113 = (char *)&submain + 4 * *((long long *)(got.imem + ((unsigned int)v112 / 4 & 63) * 8));
                        break;
                    }
                case 4:
                    v76 = 7;
                    v77 = (int)v0;
                    v78 = (int)v0;
                case 8:
                    v106 = 3;
                    v107 = (unsigned short)v26;
                    v108 = (int)v0;
                    *((unsigned int *)&v113) = (unsigned short)v26 + (int)v0;
                case 9:
                    v95 = *((long long *)(got.imem + ((unsigned int)v112 / 4 & 63) * 8));
                    v26 = 0;
                    v96 = 7;
                    v97 = (int)v0;
                    v98 = v95;
                    *((char *)&v26) = (int)v0 < (unsigned int)v95;
                case 10:
                    v91 = *((long long *)(got.imem + ((unsigned int)v112 / 4 & 63) * 8));
                    v26 = 0;
                    v92 = 7;
                    v93 = (int)v0;
                    v94 = v91;
                case 11:
                    v103 = 19;
                    v104 = (short)v0 & v26;
                    v105 = 0;
                    *((unsigned int *)&v112) = (short)v0 & v26;
                    v0 = v112;
                case 12:
                    v109 = 19;
                    v110 = (unsigned short)v26 | (int)v0;
                    v111 = 0;
                    *((unsigned int *)&v113) = (unsigned short)v26 | (int)v0;
                case 13:
                    v99 = (unsigned int)(*((long long *)(got.imem + ((unsigned int)v112 / 4 & 63) * 8)) >> 21) & 31;
                    *((unsigned int *)&v113) = (unsigned short)v26;
                    v123 = 19;
                    v124 = (unsigned int)v113 ^ (int)v0;
                    v125 = 0;
                    *((unsigned int *)&v113) = (unsigned int)v113 ^ (int)v0;
                    v0 = v113;
                    v113 = v27;
                    break;
                case 14:
                    v82 = 31;
                    v83 = v26 * 0x10000;
                    v84 = v26 * 0x8000;
                    v0 = *((long long *)(got.imem + ((unsigned int)v112 / 4 & 63) * 8)) * 0x10000;
                case 34:
                    v100 = 19;
                    v101 = (unsigned int)((int)v0 + v26 >> 2) & 63;
                    v102 = 0;
                    *((unsigned int *)&v112) = v12;
                case 42:
                    v85 = 19;
                    v86 = (unsigned int)((int)v0 + v26 >> 2) & 63;
                    v87 = 0;
                    v12 = (int)v0;
                }
                if ((unsigned int)v36 <= 42)
                {
                    v122 = v26 / 0x10000 & 31;
                    v45 = v26 / 0x200000 & 31;
                    v46 = 4;
                    v47 = *((int *)((char *)&g_400540 + 0x4 * v36));
                    v48 = &g_400540;
                    v49 = *((int *)((char *)&g_400540 + 0x4 * v36)) + (char *)&g_400540;
                }
            }
        }
        if ((unsigned int)(*((long long *)&((char *)v23)[8 * ((unsigned int)(v112 >> 2) & 63)]) >> 26) == 3 || (unsigned int)(*((long long *)(got.imem + (((unsigned int)(v112 >> 2) & 63) << 3))) >> 26) == 2)
        {
            v28 = 19;
            v29 = v26 * 4 & 268435452;
            v30 = 0;
            v113 = v26 * 4 & 268435452;
        }
        v0 = 0;
        v126 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
        v25 += 1;
        v112 = v113;
    }
    while ((unsigned int)v113 != 0);
    v127 = 0;
    *((char *)&v127) = v25 != 611;
    *((unsigned int *)got.main_result) = (unsigned int)v127;
    v128 = 0;
    do
    {
        v129 = 0;
        *((char *)&v129) = (int)v12 != *((int *)(got.outData + (v128 << 2)));
        v127 += v129;
        v128 += 1;
    }
    while (v128 != 8);
    *((unsigned int *)got.main_result) = (unsigned int)v127;
    (unsigned int)v130 = gettimeofday(&v10, NULL);
    if ((unsigned int)v130 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v130);
        v132 = 0;
        *((unsigned long long *)&v132) = *((long long *)&v10);
        v133 = 0;
        *((unsigned long long *)&v133) = v11;
        *((unsigned long long *)&v133) = (unsigned long long)(v133 * 4517329193108106637 + v132);
        *((unsigned long long *)*((long long *)&got.endTimer)) = v133;
        printf("%0.6f\n");
        return *((int *)got.main_result);
    }
    v132 = 0;
    *((unsigned long long *)&v132) = *((long long *)&v10);
    v133 = 0;
    *((unsigned long long *)&v133) = v11;
    *((unsigned long long *)&v133) = (unsigned long long)(v133 * 4517329193108106637 + v132);
    *((unsigned long long *)*((long long *)&got.endTimer)) = v133;
    printf("%0.6f\n");
    return *((int *)got.main_result);
}

