int kernel_deriche(unsigned int a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned int v0;  // [bp-0xa0], Other Possible Types: uint128_t
    uint128_t v1;  // [bp-0x9c], Other Possible Types: unsigned int
    int v2;  // [bp-0x98], Other Possible Types: unsigned int
    int v3;  // [bp-0x88], Other Possible Types: unsigned int
    uint128_t v4;  // [bp-0x6c]
    uint128_t v5;  // [bp-0x68], Other Possible Types: int
    int v6;  // [bp-0x58], Other Possible Types: uint128_t
    int v7;  // [bp-0x48]
    unsigned int *v9;  // rbx
    void* v10;  // r14
    void* v11;  // r15
    unsigned long long v12;  // r13
    uint128_t v13;  // xmm0
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rbp
    unsigned long long v16;  // rdi
    unsigned long long v17;  // r12
    uint128_t v18;  // xmm0
    int v19;  // xmm1
    int v20;  // xmm1
    uint128_t v21;  // xmm1
    uint128_t v22;  // xmm1
    uint128_t v23;  // xmm1
    int v24;  // xmm1
    int v25;  // xmm1
    uint128_t v26;  // xmm10
    uint128_t v27;  // xmm8
    void* v28;  // rdx, Other Possible Types: unsigned long long
    unsigned long long v29;  // cc_op
    unsigned long long v30;  // cc_dep1
    void* v31;  // cc_dep2
    uint128_t v32;  // xmm2
    void* v33;  // rsi
    uint128_t v34;  // xmm3
    uint128_t v35;  // xmm1
    uint128_t v36;  // xmm4
    uint128_t v37;  // xmm3
    uint128_t v38;  // xmm1
    unsigned long v39;  // cc_ndep
    unsigned long long v40;  // cc_op
    void* v41;  // cc_dep1
    unsigned long long v42;  // cc_dep2
    unsigned long v43;  // cc_ndep
    uint128_t v44;  // xmm6
    uint128_t v45;  // xmm6
    uint128_t v46;  // xmm7
    uint128_t v47;  // xmm7
    uint128_t v48;  // xmm4
    unsigned long long v49;  // rsi
    uint128_t v50;  // xmm3
    uint128_t v51;  // xmm5
    uint128_t v52;  // xmm1
    unsigned long long v53;  // cc_op
    unsigned long long v54;  // cc_dep1
    void* v55;  // cc_dep2
    uint128_t v56;  // xmm2
    uint128_t v57;  // xmm1
    unsigned long long v58;  // cc_op
    unsigned long long v59;  // cc_dep1
    unsigned long long v60;  // cc_dep2
    unsigned long v61;  // cc_ndep
    void* v62;  // rdx, Other Possible Types: unsigned long long
    void* v63;  // rdx, Other Possible Types: unsigned long long
    unsigned long long v64;  // cc_op
    unsigned long long v65;  // cc_dep1
    void* v66;  // cc_dep2
    void* v67;  // rsi
    uint128_t v68;  // xmm1
    unsigned long v69;  // cc_ndep
    unsigned long long v70;  // cc_op
    void* v71;  // cc_dep1
    unsigned long long v72;  // cc_dep2
    unsigned long v73;  // cc_ndep
    void* v74;  // rdx, Other Possible Types: unsigned long long
    unsigned long long v75;  // cc_op
    unsigned long long v76;  // cc_dep1
    void* v77;  // cc_dep2
    uint128_t v78;  // xmm2
    void* v79;  // rsi
    uint128_t v80;  // xmm3
    uint128_t v81;  // xmm1
    uint128_t v82;  // xmm4
    uint128_t v83;  // xmm3
    uint128_t v84;  // xmm1
    unsigned long v85;  // cc_ndep
    unsigned long long v86;  // cc_op
    void* v87;  // cc_dep1
    unsigned long long v88;  // cc_dep2
    unsigned long v89;  // cc_ndep
    void* v90;  // rdx, Other Possible Types: unsigned long long
    uint128_t v91;  // xmm4
    unsigned long long v92;  // rsi
    uint128_t v93;  // xmm3
    uint128_t v94;  // xmm5
    uint128_t v95;  // xmm1
    unsigned long long v96;  // cc_op
    unsigned long long v97;  // cc_dep1
    void* v98;  // cc_dep2
    uint128_t v99;  // xmm2
    uint128_t v100;  // xmm1
    unsigned long long v101;  // cc_op
    unsigned long long v102;  // cc_dep1
    unsigned long long v103;  // cc_dep2
    unsigned long v104;  // cc_ndep
    void* v105;  // rdx, Other Possible Types: unsigned long long
    unsigned long long v106;  // cc_op
    unsigned long long v107;  // cc_dep1
    void* v108;  // cc_dep2
    void* v109;  // rsi
    uint128_t v110;  // xmm0
    unsigned long v111;  // cc_ndep
    unsigned long long v112;  // cc_op
    void* v113;  // cc_dep1
    unsigned long long v114;  // cc_dep2
    unsigned long v115;  // cc_ndep

    v9 = a5;
    v10 = a4;
    v11 = a3;
    v12 = a2;
    v5 = v13;
    v15 = v14;
    v17 = v16;
    v18 = v13 ^ 0x8000000080000000;
    *((uint128_t *)&v3) = v18;
    expf((unsigned int)(int128_t)v3);
    v19 = 0;
    *((unsigned int *)&v19) = 0xbf8000003f800000;
    v1 = 0xbf8000003f800000;
    *((unsigned int *)&v19) = (unsigned int)(v19 - v18);
    v2 = (unsigned int)v19;
    expf((unsigned int)(int128_t)v3);
    v20 = 0;
    *((unsigned int *)&v20) = 0xbf8000003f800000;
    xmm1<16> = ((xmm1<16> - Load(addr=stack_base-136, size=16, endness=Iend_LE)) * Conv(32->128, Load(addr=stack_base-152, size=4, endness=Iend_LE)))
    *((uint128_t *)&v2) = v21;
    *((uint128_t *)&v6) = v5 + v5;
    expf((unsigned int)(int128_t)v3);
    *((unsigned int *)&v0) = (int128_t)v3 * (int128_t)v6 + 0xbf8000003f800000;
    expf((unsigned int)(int128_t)v6);
    v22 = 0;
    *((unsigned int *)&v22) = v0;
    v23 = v22 - (int128_t)v6;
    *((uint128_t *)&v2) = (int128_t)v2 / v23;
    expf((unsigned int)(int128_t)v3);
    v24 = 0;
    *((unsigned int *)&v24) = 0xc0000000bf800000;
    ymm1<4> = Conv(128->32, ((xmm1<16> + Conv(32->128, Load(addr=stack_base-104, size=4, endness=Iend_LE))) * (Load(addr=stack_base-136, size=16, endness=Iend_LE) * Conv(32->128, Load(addr=stack_base-152, size=4, endness=Iend_LE)))))
    *((unsigned int *)&v4) = (unsigned int)v24;
    expf((unsigned int)(int128_t)v3);
    v0 = (int128_t)v3 * (int128_t)v2;
    v25 = 0;
    *((unsigned int *)&v25) = v1;
    *((unsigned int *)&v25) = (unsigned int)(v25 + v5);
    *((unsigned int *)&v1) = (unsigned int)v25;
    *((int128_t *)&v7) = (int128_t)v2 ^ 0x8000000080000000;
    *((unsigned int *)&v18) = v5 * 0x477fff00c0000000;
    *((uint128_t *)&v5) = v5 * 0x477fff00c0000000;
    expf((unsigned int)v18);
    *((unsigned int *)&v6) = v18;
    exp2f((unsigned int)(int128_t)v3);
    v3 = (int128_t)v3;
    expf((unsigned int)(int128_t)v5);
    v26 = 0;
    *((unsigned int *)&v26) = v4;
    v27 = 0;
    *((unsigned int *)&v27) = v3;
    if ((unsigned int)v17 > 0)
    {
        v28 = 0;
        do
        {
            v29 = 19;
            v30 = v15;
            v31 = 0;
            if ((unsigned int)v15 > 0)
            {
                v32 = 0;
                v33 = 0;
                v34 = 0;
                v35 = 0;
                do
                {
                    v36 = v34;
                    v37 = 0;
                    *((unsigned int *)&v37) = *((int *)(0 * 8640 + v12 + v33 * 4));
                    v38 = v35 * ((int128_t)v5 ^ 0x8000000080000000) + v27 * v36 + v37 * (int128_t)v2 + v32 * v26;
                    *((unsigned int *)((char *)v10 + 0x4 * v33)) = v38;
                    v32 = 0;
                    *((unsigned int *)&v32) = *((int *)(0 * 8640 + v12 + v33 * 4));
                    v39 = (0 * 8640 + v10 <= 0 * 8640? 1 : 0);
                    v33 += 1;
                    v34 = v38;
                    v35 = v36;
                    v40 = 8;
                    v41 = v33;
                    v42 = v15;
                }
                while (v33 != v15);
            }
            v43 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v28 += 1;
        }
        while (v28 != v17);
    }
    v44 = 0;
    *((unsigned int *)&v44) = v1;
    xmm6<16> = (xmm6<16> * Conv(32->128, Load(addr=stack_base-160, size=4, endness=Iend_LE)))
    v46 = 0;
    *((unsigned int *)&v46) = v6;
    xmm7<16> = (xmm7<16> * Conv(32->128, Load(addr=stack_base-72, size=4, endness=Iend_LE)))
    if ((unsigned int)v17 > 0)
    {
        v62 = 0;
        do
        {
            v48 = 0;
            v49 = v15;
            v50 = 0;
            v51 = 0;
            v52 = 0;
            v53 = 19;
            v54 = v15;
            v55 = 0;
            if ((unsigned int)v15 > 0)
            {
                do
                {
                    v56 = v51;
                    v57 = v52 * ((int128_t)v5 ^ 0x8000000080000000) + v27 * v51 + v45 * v48 + v50 * v47;
                    v9[1 + v49] = v57;
                    v50 = v48;
                    v48 = 0;
                    *((unsigned int *)&v48) = *((int *)(0 * 8640 + v12 + (v49 - 1) * 4));
                    v58 = 8;
                    v59 = v49;
                    v60 = 1;
                    v49 -= 1;
                    v51 = v57;
                    v52 = v56;
                }
                while (v59 > 1);
            }
            v61 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v62 += 1;
        }
        while (v62 != v17);
    }
    if ((unsigned int)v17 > 0)
    {
        v63 = 0;
        do
        {
            v64 = 19;
            v65 = v15;
            v66 = 0;
            if ((unsigned int)v15 > 0)
            {
                v67 = 0;
                do
                {
                    v68 = 0;
                    *((unsigned int *)&v68) = *((int *)((char *)v10 + 0x4 * v67));
                    ymm1<4> = Conv(128->32, (xmm1<16> + Conv(32->128, Load(addr=((rbx<8> + (0x0<64> * 0x21c0<64>)) + (rsi<8> * 0x4<64>)), size=4, endness=Iend_LE))))
                    *((unsigned int *)((char *)v11 + 0x4 * v67)) = v68;
                    v69 = (0 * 8640 + v11 <= 0 * 8640? 1 : 0);
                    v67 += 1;
                    v70 = 8;
                    v71 = v67;
                    v72 = v15;
                }
                while (v67 != v15);
            }
            v73 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v63 += 1;
        }
        while (v63 != v17);
    }
    if ((unsigned int)v15 > 0)
    {
        v74 = 0;
        do
        {
            v75 = 19;
            v76 = v17;
            v77 = 0;
            if ((unsigned int)v17 > 0)
            {
                v78 = 0;
                v79 = 0;
                v80 = 0;
                v81 = 0;
                do
                {
                    v82 = v80;
                    v83 = 0;
                    *((unsigned int *)&v83) = *((int *)((char *)v11 + 0x21c0 * v79));
                    v84 = v81 * ((int128_t)v5 ^ 0x8000000080000000) + v27 * v82 + v83 * (int128_t)v2 + v78 * v26;
                    *((unsigned int *)(0x21c0 * v79 + (char *)v10)) = v84;
                    v78 = 0;
                    *((unsigned int *)&v78) = *((int *)((char *)v11 + 0x21c0 * v79));
                    v85 = (v79 * 8640 + v10 <= v79 * 8640? 1 : 0);
                    v79 += 1;
                    v80 = v84;
                    v81 = v82;
                    v86 = 8;
                    v87 = v79;
                    v88 = v17;
                }
                while (v79 != v17);
            }
            v89 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v74 += 1;
        }
        while (v74 != v15);
    }
    if ((unsigned int)v15 > 0)
    {
        v90 = 0;
        do
        {
            v91 = 0;
            v92 = v17;
            v93 = 0;
            v94 = 0;
            v95 = 0;
            v96 = 19;
            v97 = v17;
            v98 = 0;
            if ((unsigned int)v17 > 0)
            {
                do
                {
                    v99 = v94;
                    v100 = v95 * ((int128_t)v5 ^ 0x8000000080000000) + v27 * v94 + v45 * v91 + v93 * v47;
                    v9[2160 + 2160 * v92] = v100;
                    v93 = v91;
                    v91 = 0;
                    *((unsigned int *)&v91) = *((int *)&((char *)v11)[8640 + 8640 * v92]);
                    v94 = v100;
                    v95 = v99;
                    v101 = 8;
                    v102 = v92;
                    v103 = 1;
                    v92 -= 1;
                }
                while (v102 > 1);
            }
            v104 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v90 += 1;
        }
        while (v90 != v15);
    }
    if ((unsigned int)v17 > 0)
    {
        v105 = 0;
        do
        {
            v106 = 19;
            v107 = v15;
            v108 = 0;
            if ((unsigned int)v15 > 0)
            {
                v109 = 0;
                do
                {
                    v110 = 0;
                    *((unsigned int *)&v110) = *((int *)((char *)v10 + 0x4 * v109));
                    ymm0<4> = Conv(128->32, (xmm0<16> + Conv(32->128, Load(addr=((rbx<8> + (0x0<64> * 0x21c0<64>)) + (rsi<8> * 0x4<64>)), size=4, endness=Iend_LE))))
                    *((unsigned int *)((char *)v11 + 0x4 * v109)) = v110;
                    v111 = (0 * 8640 + v11 <= 0 * 8640? 1 : 0);
                    v109 += 1;
                    v112 = 8;
                    v113 = v109;
                    v114 = v15;
                }
                while (v109 != v15);
            }
            v115 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v105 += 1;
        }
        while (v105 != v17);
        return;
    }
    return;
}

extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    void* v0;  // [bp-0x48]
    char v1;  // [bp-0x40], Other Possible Types: unsigned long
    unsigned long v2;  // [bp-0x38], Other Possible Types: char
    void* v6;  // rbx
    int v9;  // xmm0
    unsigned int v10;  // ecx
    uint128_t v11;  // xmm1
    void* v12;  // rdx
    unsigned long long v13;  // rax
    void* v16;  // rdi
    unsigned long long v17;  // r15
    unsigned long long v19;  // r12
    void* v20;  // r14

    v6 = polybench_alloc_data(0x870000, 0x4);
    v0 = polybench_alloc_data(0x870000, 0x4);
    v13 = 0;
    v9 = 0;
    *((unsigned int *)&v9) = 0x3e800000477fff00;
    do
    {
        v10 = (unsigned int)v13 * 313;
        v12 = 0;
        do
        {
            v11 = 0;
            *((unsigned int *)&v11) = (unsigned int)v12 * 991 + v10;
            *((unsigned int *)&v11) = (unsigned int)(v11 / v9);
            *((unsigned int *)(&((char *)v6)[8640 * v13] + 0x4 * v12)) = v11;
            v12 += 1;
        }
        while (v12 != 2160);
        v13 = 1;
    }
    while (true);
    kernel_deriche(0x1000, 0x870, v6, v0, *((long long *)&v2), *((long long *)&v1));
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v6);
            v16 = v0;
            free(v16);
            free(*((long long *)&v2));
            free(*((long long *)&v1));
            return 0;
        }
        v1 = polybench_alloc_data(0x870000, 0x4);
        v2 = polybench_alloc_data(0x870000, 0x4);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v17 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        do
        {
            v19 = v17 * 2160;
            v20 = 0;
            while (true)
            {
                if (((unsigned int)(v20 + v19) * 3435973837 >> 2 | (unsigned int)(v20 + v19) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%0.2f ");
                v20 += 1;
                if (v20 == 2160)
                {
                    break;
                }
            }
            v17 = 1;
        }
        while (true);
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        free(v6);
        v16 = v0;
        free(v16);
        free(r14<8>);
        free(0x1);
        return 0;
    }
    free(v6);
    v16 = v0;
    free(v16);
    free(*((long long *)&v2));
    free(*((long long *)&v1));
    return 0;
}

