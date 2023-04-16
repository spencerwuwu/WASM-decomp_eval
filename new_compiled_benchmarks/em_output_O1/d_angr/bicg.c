long long kernel_bicg(unsigned int a0, unsigned int a1, unsigned long long a2, void* a3, void* a4, void* a5, unsigned long long *v2)
{
    unsigned long v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned long long v3;  // rax
    void* v4;  // r15
    unsigned long long v5;  // r12
    unsigned long v6;  // rdi
    unsigned long long v7;  // rbp
    unsigned long v8;  // r13
    unsigned long v9;  // rsi
    void* v11;  // rdx
    unsigned long long v12;  // cc_op
    unsigned long long v13;  // cc_dep1
    void* v14;  // cc_dep2
    void* v15;  // rsi
    uint128_t v16;  // xmm0
    uint128_t v17;  // xmm0
    unsigned long v18;  // cc_ndep
    unsigned long long v19;  // cc_op
    void* v20;  // cc_dep1
    unsigned long long v21;  // cc_dep2
    unsigned long v22;  // cc_ndep

    v0 = v3;
    v4 = a3;
    v5 = a2;
    v7 = v6;
    v8 = v6;
    if ((unsigned int)v6 > 0)
    {
        v1 = v9;
        v3 = memset(a3, 0x0, v6 * 8);
        a1 = v1;
    }
    if ((unsigned int)a1 > 0)
    {
        v11 = 0;
        do
        {
            *((long long *)((char *)a4 + 0x8 * v11)) = 0;
            v12 = 19;
            v13 = v7;
            v14 = 0;
            if ((unsigned int)v7 > 0)
            {
                v15 = 0;
                do
                {
                    v16 = 0;
                    *((unsigned long long *)&v16) = *(v2);
                    xmm0lq<8> = Conv(128->64, ((xmm0<16> * Conv(64->128, Load(addr=(((0x0<64> * 0x3b60<64>) + r12<8>) + (rsi<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(r15<8> + (rsi<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                    *((unsigned long long *)((char *)v4 + 0x8 * v15)) = v16;
                    v17 = 0;
                    *((unsigned long long *)&v17) = *((long long *)(0 * 15200 + v5 + v15 * 8));
                    xmm0lq<8> = Conv(128->64, ((xmm0<16> * Conv(64->128, Load(addr=(r9<8> + (rsi<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=r8<8>, size=8, endness=Iend_LE))))
                    *((unsigned long long *)a4) = v17;
                    v18 = (0 * 15200 + v5 <= 0 * 15200? 1 : 0);
                    v15 += 1;
                    v19 = 8;
                    v20 = v15;
                    v21 = v8;
                }
                while (v15 != v8);
            }
            v22 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v11 += 1;
        }
        while (v11 != a1);
        return v2;
    }
    return v3;
}

extern char .L.str.3;
extern char .L.str.7;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    void* v0;  // [bp-0x40]
    char **v1;  // [bp-0x38]
    void* v3;  // rbx
    void* v4;  // r14
    unsigned long long v5;  // r15
    void* v6;  // r12
    unsigned long long v7;  // r13
    int v8;  // xmm0
    unsigned long long v9;  // cc_op
    void* v10;  // cc_dep1
    void* v11;  // cc_dep2
    void* v12;  // rcx
    int v13;  // xmm1
    unsigned long v14;  // cc_ndep
    unsigned long long v15;  // cc_op
    void* v16;  // cc_dep1
    unsigned long long v17;  // cc_dep2
    int v18;  // xmm0
    int v19;  // xmm1
    void* v20;  // rdx
    unsigned long long v21;  // rsi
    uint128_t v22;  // xmm1
    unsigned long long v23;  // rax
    unsigned long long v24;  // rbp
    void* v26;  // rax
    uint128_t v27;  // xmm0
    uint128_t v28;  // xmm0
    void* v30;  // rbp
    void* v34;  // rbp

    v1 = a1;
    v3 = polybench_alloc_data(0x3ce1f0, 0x8);
    v4 = polybench_alloc_data(0x76c, 0x8);
    v5 = polybench_alloc_data(0x834, 0x8);
    v6 = polybench_alloc_data(0x76c, 0x8);
    v7 = polybench_alloc_data(0x834, 0x8);
    v23 = 0;
    v8 = 0;
    *((unsigned long long *)&v8) = 0x409db00000000000;
    v9 = 19;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    do
    {
        v13 = 0;
        *((unsigned long long *)&v13) = v12;
        *((unsigned long long *)&v13) = (unsigned long long)(v13 / v8);
        *((unsigned long long *)((char *)v6 + 0x8 * v12)) = (unsigned long long)v13;
        v14 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
        v12 += 1;
        v15 = 8;
        v16 = v12;
        v17 = 1900;
    }
    while (v12 != 1900);
    v18 = 0;
    *((unsigned long long *)&v18) = 0x40a0680000000000;
    do
    {
        v19 = 0;
        *((unsigned long long *)&v19) = v23;
        *((unsigned long long *)&v19) = (unsigned long long)(v19 / v18);
        *((unsigned long long *)(v7 + v23 * 8)) = (unsigned long long)v19;
        v20 = 0;
        do
        {
            v21 = v20 + 1;
            v22 = 0;
            *((unsigned long long *)&v22) = (unsigned int)v23 * ((unsigned int)v20 + 1) - (unsigned int)(4188615725 * (unsigned int)v23 * ((unsigned int)v20 + 1) >> 43) * 2100;
            *((unsigned long long *)&v22) = (unsigned long long)(v22 / v18);
            *((unsigned long long *)(&((char *)v3)[15200 * v23] + 0x8 * v20)) = v22;
            v20 += 1;
        }
        while (v21 != 1900);
        v23 = 1;
    }
    while (true);
    v24 = 0;
    memset(v4, 0x0, 0x3b60);
    do
    {
        *((long long *)(v5 + v24 * 8)) = 0;
        v26 = 0;
        do
        {
            v27 = 0;
            *((unsigned long long *)&v27) = *((long long *)(v7 + v24 * 8));
            xmm0lq<8> = Conv(128->64, ((xmm0<16> * Conv(64->128, Load(addr=(((rbp<8> * 0x3b60<64>) + rbx<8>) + (rax<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(r14<8> + (rax<8> * 0x8<64>)), size=8, endness=Iend_LE))))
            *((unsigned long long *)((char *)v4 + 0x8 * v26)) = v27;
            v28 = 0;
            *((unsigned long long *)&v28) = *((long long *)(&((char *)v3)[15200 * v24] + 0x8 * v26));
            xmm0lq<8> = Conv(128->64, ((xmm0<16> * Conv(64->128, Load(addr=(r12<8> + (rax<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(r15<8> + (rbp<8> * 0x8<64>)), size=8, endness=Iend_LE))))
            *((unsigned long long *)(v5 + v24 * 8)) = v28;
            v26 += 1;
        }
        while (v26 != 1900);
        v24 = 1;
    }
    while (true);
    if (a0 >= 43)
    {
        if (*(*(v1)) != 0)
        {
            free(v3);
            free(v4);
            free(v5);
            free(v6);
            free(v7);
            return 0;
        }
        v0 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v30 = 0;
        fprintf(v0, "begin dump: %s", &.L.str.3);
        while (true)
        {
            if (((unsigned int)v30 * 3435973837 >> 2 | (unsigned int)v30 * 3435973837 << 30) <= 214748364)
            {
                fputc(0xa, v0);
            }
            fprintf(v0, "%0.2lf ");
            v30 += 1;
            if (v30 == 1900)
            {
                break;
            }
        }
        v34 = 0;
        fprintf(v0, "\nend   dump: %s\n", &.L.str.3);
        fprintf(v0, "begin dump: %s", &.L.str.7);
        while (true)
        {
            if (((unsigned int)v34 * 3435973837 >> 2 | (unsigned int)v34 * 3435973837 << 30) <= 214748364)
            {
                fputc(0xa, v0);
            }
            fprintf(v0, "%0.2lf ");
            v34 += 1;
            if (v34 == 2100)
            {
                break;
            }
        }
        fprintf(v0, "\nend   dump: %s\n", &.L.str.7);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, v0);
        free(v3);
        free(v4);
        free(v5);
        free(v6);
        free(v7);
        return 0;
    }
    free(v3);
    free(v4);
    free(v5);
    free(v6);
    free(v7);
    return 0;
}

