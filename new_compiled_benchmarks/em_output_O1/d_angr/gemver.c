long long kernel_gemver(unsigned int a0, unsigned long a1, unsigned long long *a2, void* a3, unsigned long long *a4, void* a5, unsigned long long v0, unsigned long long a6, void* a7, unsigned long long a8)
{
    unsigned long long v1;  // rdi
    unsigned long long v2;  // rax
    void* v3;  // r10
    void* v4;  // r11
    uint128_t v5;  // xmm2
    uint128_t v6;  // xmm2
    uint128_t v7;  // xmm3
    unsigned long v8;  // cc_ndep
    unsigned long long v9;  // r10
    unsigned long long v10;  // rcx
    unsigned long long v11;  // r8
    uint128_t v12;  // xmm2
    void* v13;  // r9
    uint128_t v14;  // xmm3
    int v15;  // xmm1
    uint128_t v16;  // xmm3
    unsigned long v17;  // cc_ndep
    unsigned long long v18;  // cc_op
    void* v19;  // cc_dep1
    void* v20;  // cc_dep2
    unsigned long long v21;  // r8
    uint128_t v22;  // xmm1
    unsigned long v23;  // cc_ndep
    unsigned long long v24;  // cc_op
    unsigned long long v25;  // cc_dep1
    unsigned long long v26;  // cc_dep2
    unsigned long long v27;  // rdi
    uint128_t v28;  // xmm1
    unsigned long long v29;  // r8
    uint128_t v30;  // xmm2
    int v31;  // xmm0
    uint128_t v32;  // xmm2

    v2 = v1;
    if ((unsigned int)v1 > 0)
    {
        v3 = 0;
        do
        {
            v4 = 0;
            do
            {
                v5 = 0;
                *((unsigned long long *)&v5) = *((long long *)((char *)a2 + 0x8 * v3));
                xmm2<16> = ((xmm2<16> * Conv(64->128, Load(addr=(rcx<8> + (r11<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((r10<8> * 0x3e80<64>) + rsi<8>) + (r11<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v7 = 0;
                *((unsigned long long *)&v7) = *((long long *)((char *)a4 + 0x8 * v3));
                xmm3lq<8> = Conv(128->64, ((xmm3<16> * Conv(64->128, Load(addr=(r9<8> + (r11<8> * 0x8<64>)), size=8, endness=Iend_LE))) + xmm2<16>))
                *((unsigned long long *)(v3 * 16000 + a1 + v4 * 8)) = v7;
                v4 += 1;
            }
            while (v4 != v1);
            v8 = v4 < v1;
            v9 = 1;
        }
        while (v1 != 1);
    }
    v10 = a6;
    if ((unsigned int)v1 > 0)
    {
        v11 = 0;
        do
        {
            v12 = 0;
            *((unsigned long long *)&v12) = *((long long *)(a6 + v11 * 8));
            v13 = 0;
            do
            {
                v14 = 0;
                *((unsigned long long *)&v14) = *((long long *)(v13 * 16000 + a1 + v11 * 8));
                xmm3<16> = ((xmm3<16> * xmm1<16>) * Conv(64->128, Load(addr=(Load(addr=stack_base+24, size=8, endness=Iend_LE) + (r9<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v12 += v16;
                *((unsigned long long *)(a6 + v11 * 8)) = v12;
                v13 += 1;
            }
            while (v13 != v1);
            v17 = v13 < v1;
            v11 = 1;
        }
        while (v1 != 1);
    }
    if ((unsigned int)v1 > 0)
    {
        v18 = 19;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        do
        {
            v22 = 0;
            *((unsigned long long *)&v22) = *((long long *)(v10 + v21 * 8));
            xmm1lq<8> = Conv(128->64, (xmm1<16> + Conv(64->128, Load(addr=(Load(addr=stack_base+32, size=8, endness=Iend_LE) + (r8<8> * 0x8<64>)), size=8, endness=Iend_LE))))
            *((unsigned long long *)(v10 + v21 * 8)) = v22;
            v23 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v21 += 1;
            v24 = 8;
            v25 = v21;
            v26 = v1;
        }
        while (v21 != v1);
    }
    if ((unsigned int)v1 > 0)
    {
        v27 = 0;
        do
        {
            v28 = 0;
            *((unsigned long long *)&v28) = *((long long *)(v0 + v27 * 8));
            v29 = 0;
            do
            {
                v30 = 0;
                *((unsigned long long *)&v30) = *((long long *)(v27 * 16000 + a1 + v29 * 8));
                xmm2<16> = ((xmm2<16> * xmm0<16>) * Conv(64->128, Load(addr=(Load(addr=stack_base+16, size=8, endness=Iend_LE) + (r8<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v28 += v32;
                *((unsigned long long *)(v0 + v27 * 8)) = v28;
                v29 += 1;
            }
            while (v29 != v2);
            v27 = 1;
        }
        while (v2 != 1);
        return v2;
    }
    return v2;
}

extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    char **v0;  // [bp-0x58], Other Possible Types: void*
    unsigned int v1;  // [bp-0x50], Other Possible Types: void*
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    void* v4;  // [bp-0x38], Other Possible Types: unsigned long long
    void* v6;  // rbx
    unsigned long long v7;  // r12
    unsigned long long v8;  // r13
    unsigned long long v9;  // rbp
    unsigned long long v10;  // r14
    unsigned long long v11;  // r15
    void* v13;  // r11
    int v14;  // xmm0
    int v15;  // xmm1
    int v16;  // xmm2
    int v17;  // xmm3
    int v18;  // xmm4
    int v19;  // xmm5
    unsigned long long v20;  // rcx
    unsigned long long v21;  // rdx
    int v22;  // xmm6
    void* v23;  // rsi
    uint128_t v24;  // xmm6
    unsigned long long v25;  // rcx
    unsigned long long v26;  // rdx
    uint128_t v27;  // xmm0
    uint128_t v28;  // xmm0
    uint128_t v29;  // xmm1
    unsigned long long v30;  // r11
    unsigned long long v31;  // rdx
    int v32;  // xmm0
    uint128_t v33;  // xmm1
    unsigned long long v34;  // rdi
    uint128_t v35;  // xmm2
    uint128_t v36;  // xmm2
    unsigned long v37;  // cc_ndep
    unsigned long long v38;  // cc_op
    void* v39;  // cc_dep1
    void* v40;  // cc_dep2
    unsigned long long v41;  // rsi
    uint128_t v42;  // xmm0
    unsigned long v43;  // cc_ndep
    unsigned long long v44;  // cc_op
    unsigned long long v45;  // cc_dep1
    unsigned long long v46;  // cc_dep2
    int v47;  // xmm0
    uint128_t v48;  // xmm1
    unsigned long long v49;  // rcx
    uint128_t v50;  // xmm2
    uint128_t v51;  // xmm2
    unsigned long long v53;  // rdi
    unsigned long long v55;  // rdi
    void* v58;  // rcx
    void* v61;  // rdi

    v0 = a1;
    v1 = a0;
    v6 = polybench_alloc_data(0x3d0900, 0x8);
    v3 = polybench_alloc_data(0x7d0, 0x8);
    v2 = polybench_alloc_data(0x7d0, 0x8);
    v7 = polybench_alloc_data(0x7d0, 0x8);
    v8 = polybench_alloc_data(0x7d0, 0x8);
    v9 = polybench_alloc_data(0x7d0, 0x8);
    v10 = polybench_alloc_data(0x7d0, 0x8);
    v11 = polybench_alloc_data(0x7d0, 0x8);
    v13 = 0;
    v14 = 0;
    *((unsigned long long *)&v14) = 0x409f400000000000;
    v15 = 0;
    *((unsigned long long *)&v15) = 0x3fe0000000000000;
    v16 = 0;
    *((unsigned long long *)&v16) = 0x3fd0000000000000;
    v17 = 0;
    *((unsigned long long *)&v17) = 0x4018000000000000;
    v18 = 0;
    *((unsigned long long *)&v18) = 0x3fc0000000000000;
    v19 = 0;
    *((unsigned long long *)&v19) = 0x4022000000000000;
    v20 = 0;
    do
    {
        v21 = v20;
        *((unsigned long long *)(v3 + v20 * 8)) = v20;
        v20 += 1;
        v22 = 0;
        *((unsigned long long *)&v22) = v20;
        *((unsigned long long *)(v7 + v21 * 8)) = (unsigned long long)(v22 / v14 * v15);
        *((unsigned long long *)(v2 + v21 * 8)) = (unsigned long long)(v22 / v14 * v16);
        *((unsigned long long *)(v8 + v21 * 8)) = (unsigned long long)(v22 / v14 / v17);
        *((unsigned long long *)(v11 + v21 * 8)) = (unsigned long long)(v22 / v14 * v18);
        *((unsigned long long *)&v22) = (unsigned long long)(v22 / v14 / v19);
        *((unsigned long long *)(v4 + v21 * 8)) = (unsigned long long)v22;
        *((long long *)(v10 + v21 * 8)) = 0;
        *((long long *)(v9 + v21 * 8)) = 0;
        v23 = 0;
        do
        {
            v24 = 0;
            *((unsigned long long *)&v24) = (unsigned int)v21 * (unsigned int)v23 - (unsigned int)(v21 * v23 / 2000) * 2000;
            *((unsigned long long *)&v24) = (unsigned long long)(v24 / v14);
            *((unsigned long long *)(&((char *)v6)[16000 * v21] + 0x8 * v23)) = v24;
            v23 += 1;
        }
        while (v23 != 2000);
    }
    while (v20 != 2000);
    v25 = 0;
    do
    {
        v26 = 0;
        do
        {
            v27 = 0;
            *((unsigned long long *)&v27) = *((long long *)(v3 + v13 * 8));
            xmm0<16> = ((xmm0<16> * Conv(64->128, Load(addr=(Load(addr=stack_base-72, size=8, endness=Iend_LE) + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((r11<8> * 0x3e80<64>) + rbx<8>) + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
            v29 = 0;
            *((unsigned long long *)&v29) = *((long long *)(v7 + v13 * 8));
            xmm1lq<8> = Conv(128->64, ((xmm1<16> * Conv(64->128, Load(addr=(r13<8> + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE))) + xmm0<16>))
            *((unsigned long long *)&(0x3e80 * v13 + (char *)v6)[8 * v26]) = v29;
            v26 += 1;
        }
        while (v26 != 2000);
        v30 = 1;
    }
    while (true);
    v31 = 0;
    v32 = 0;
    *((unsigned long long *)&v32) = 4608083138725491507;
    do
    {
        v33 = 0;
        *((unsigned long long *)&v33) = *((long long *)(v10 + v25 * 8));
        v34 = 0;
        do
        {
            v35 = 0;
            *((unsigned long long *)&v35) = *((long long *)&((char *)v6)[16000 * v34 + 8 * v25]);
            xmm2<16> = ((xmm2<16> * xmm0<16>) * Conv(64->128, Load(addr=(r15<8> + (rdi<8> * 0x8<64>)), size=8, endness=Iend_LE)))
            v33 += v36;
            *((unsigned long long *)(v10 + v25 * 8)) = v33;
            v34 += 1;
        }
        while (v34 != 2000);
        v37 = 2000 < 2000;
        v25 = 1;
    }
    while (true);
    v38 = 19;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    do
    {
        v42 = 0;
        *((unsigned long long *)&v42) = *((long long *)(v10 + v31 * 8));
        xmm0lq<8> = Conv(128->64, (xmm0<16> + Conv(64->128, Load(addr=(Load(addr=stack_base-56, size=8, endness=Iend_LE) + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE))))
        *((unsigned long long *)(v10 + v31 * 8)) = v42;
        v43 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
        v31 += 1;
        v44 = 8;
        v45 = v31;
        v46 = 2000;
    }
    while (v31 != 2000);
    v47 = 0;
    *((unsigned long long *)&v47) = 0x3ff8000000000000;
    do
    {
        v48 = 0;
        *((unsigned long long *)&v48) = *((long long *)(v9 + v41 * 8));
        v49 = 0;
        do
        {
            v50 = 0;
            *((unsigned long long *)&v50) = *((long long *)&((char *)v6)[16000 * v41 + 8 * v49]);
            xmm2<16> = ((xmm2<16> * xmm0<16>) * Conv(64->128, Load(addr=(r14<8> + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
            v48 += v51;
            *((unsigned long long *)(v9 + v41 * 8)) = v48;
            v49 += 1;
        }
        while (v49 != 2000);
        v41 = 1;
    }
    while (true);
    *((int *)&v4) = polybench_alloc_data(0x7d0, 0x8);
    if (v1 >= 43)
    {
        if (*(*(v0)) != 0)
        {
            free(v6);
            v53 = v3;
            free(v53);
            v55 = v2;
            free(v55);
            free(v7);
            free(v8);
            free(v9);
            free(v10);
            free(v11);
            v61 = v4;
            free(v61);
            return 0;
        }
        v0 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        fprintf(v0, "begin dump: %s", &.L.str.3);
        v58 = 0;
        while (true)
        {
            v1 = v58;
            if (((unsigned int)v58 * 3435973837 >> 2 | (unsigned int)v58 * 3435973837 << 30) <= 214748364)
            {
                fputc(0xa, v0);
            }
            fprintf(v0, "%0.2lf ");
            v58 = v1 + 1;
            if (v1 + 1 == 2000)
            {
                break;
            }
        }
        fprintf(v0, "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, v0);
        free(v6);
        v53 = v3;
        free(v53);
        v55 = v2;
        free(v55);
        free(v7);
        free(v8);
        free(v9);
        free(v10);
        free(v11);
        v61 = v4;
        free(v61);
        return 0;
    }
    free(v6);
    v53 = v3;
    free(v53);
    v55 = v2;
    free(v55);
    free(v7);
    free(v8);
    free(v9);
    free(v10);
    free(v11);
    v61 = v4;
    free(v61);
    return 0;
}

