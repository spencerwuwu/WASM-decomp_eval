long long init_array(unsigned int a0, unsigned int a1, unsigned long long a2, void* a3)
{
    unsigned long long v1;  // r8
    unsigned long long v2;  // rsi
    unsigned long long v3;  // cc_op
    void* v4;  // cc_dep1
    void* v5;  // cc_dep2
    int v6;  // xmm1
    int v7;  // xmm2
    unsigned long v8;  // cc_ndep
    void* v9;  // rax
    unsigned long long v10;  // cc_op
    void* v11;  // cc_dep1
    unsigned long long v12;  // cc_dep2
    unsigned long v14;  // rdi
    unsigned long long v15;  // rax
    uint128_t v16;  // xmm0
    void* v18;  // rdi, Other Possible Types: unsigned long long
    unsigned long long v19;  // cc_op
    unsigned long long v20;  // cc_dep1
    void* v21;  // cc_dep2
    void* v22;  // r10
    unsigned long v23;  // cc_ndep
    unsigned long long v24;  // cc_op
    void* v25;  // cc_dep1
    unsigned long long v26;  // cc_dep2
    unsigned long v27;  // cc_ndep

    v1 = a2;
    if ((unsigned int)v2 > 0)
    {
        v2 = v2;
        v3 = 19;
        v4 = 0;
        v5 = 0;
        v9 = 0;
        v6 = 0;
        *((unsigned long long *)&v6) = 0x3ff0000000000000;
        do
        {
            v7 = 0;
            *((unsigned long long *)&v7) = v9;
            *((unsigned long long *)&v7) = (unsigned long long)(v7 / v2 + v6);
            *((unsigned long long *)((char *)a3 + 0x8 * v9)) = (unsigned long long)v7;
            v8 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v9 += 1;
            v10 = 8;
            v11 = v9;
            v12 = v2;
        }
        while (v9 != v2);
    }
    if ((unsigned int)v14 > 0)
    {
        v15 = v14 * 5;
        v16 = 0;
        *((unsigned long long *)&v16) = v14 * 5;
        v18 = 0;
        do
        {
            v19 = 19;
            v20 = v2;
            v21 = 0;
            if ((unsigned int)v2 > 0)
            {
                v22 = 0;
                do
                {
                    v15 = 0 * 16800 + v1;
                    *((unsigned long long *)(0 * 16800 + v1 + v22 * 8)) = (((unsigned int)v22 >> 31 CONCAT (unsigned int)v22) /m (unsigned int)v2 >> 32) / v16;
                    v23 = (0 * 16800 + v1 <= 0 * 16800? 1 : 0);
                    v22 += 1;
                    v24 = 8;
                    v25 = v22;
                    v26 = v2;
                }
                while (v22 != v2);
            }
            v27 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v18 += 1;
        }
        while (v18 != v14);
        return v15;
    }
    return v9;
}

extern char .L.str.2;
extern char got.stderr;

int print_array(unsigned int a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v2;  // rax
    unsigned long long v3;  // rdi
    unsigned long long v4;  // rbp
    void* v10;  // r13

    v0 = v2;
    v4 = v3;
    fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.2);
    if ((unsigned int)v4 > 0)
    {
        v10 = 0;
        while (true)
        {
            if (((unsigned int)v10 * 3435973837 >> 2 | (unsigned int)v10 * 3435973837 << 30) <= 214748364)
            {
                fputc(0xa, *((long long *)got.stderr));
            }
            fprintf(*((long long *)got.stderr), "%0.2lf ");
            v10 += 1;
            if (v10 == v4)
            {
                break;
            }
        }
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.2);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        return;
    }
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.2);
    fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
    return;
}

long long kernel_atax(unsigned long long a0, unsigned int a1, unsigned long long a2, unsigned long long a3, void* a4, void* a5)
{
    unsigned long v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned long long v3;  // rax
    unsigned long long v5;  // r12
    unsigned long v6;  // rsi
    unsigned long v7;  // rbp
    unsigned long v8;  // r13
    unsigned long v9;  // rdi
    void* v10;  // rcx
    uint128_t v11;  // xmm0
    void* v12;  // rdx
    uint128_t v13;  // xmm1
    uint128_t v14;  // xmm1
    unsigned long v15;  // cc_ndep
    unsigned long long v16;  // cc_op
    unsigned long long v17;  // cc_dep1
    void* v18;  // cc_dep2
    void* v19;  // rdx
    uint128_t v20;  // xmm0
    unsigned long v21;  // cc_ndep
    unsigned long long v22;  // cc_op
    void* v23;  // cc_dep1
    unsigned long long v24;  // cc_dep2
    unsigned long v25;  // cc_ndep

    v0 = v3;
    v5 = a2;
    v7 = v6;
    v8 = v6;
    if ((unsigned int)v6 > 0)
    {
        v1 = v9;
        v3 = memset(a4, 0x0, v6 * 8);
        a0 = v1;
    }
    if ((unsigned int)a0 > 0)
    {
        v10 = 0;
        do
        {
            *((long long *)((char *)a5 + 0x8 * v10)) = 0;
            if ((unsigned int)0 > 0)
            {
                v11 = 0;
                *((unsigned long long *)&v11) = *((long long *)((char *)a5 + 0x8 * v10));
                v12 = 0;
                do
                {
                    v13 = 0;
                    *((unsigned long long *)&v13) = *((long long *)(0 * 16800 + v5 + v12 * 8));
                    xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(rcx<8> + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                    v11 += v14;
                    *((unsigned long long *)a5) = v11;
                    v15 = (0 * 16800 + v5 <= 0 * 16800? 1 : 0);
                    v12 += 1;
                }
                while (v12 != 0);
            }
            v16 = 19;
            v17 = v7;
            v18 = 0;
            if ((unsigned int)v7 > 0)
            {
                v19 = 0;
                do
                {
                    v20 = 0;
                    *((unsigned long long *)&v20) = *((long long *)(0 * 16800 + v5 + v19 * 8));
                    xmm0lq<8> = Conv(128->64, ((xmm0<16> * Conv(64->128, Load(addr=r9<8>, size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(r8<8> + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                    *((unsigned long long *)((char *)a4 + 0x8 * v19)) = v20;
                    v21 = (0 * 16800 + v5 <= 0 * 16800? 1 : 0);
                    v19 += 1;
                    v22 = 8;
                    v23 = v19;
                    v24 = v8;
                }
                while (v19 != v8);
            }
            v25 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v10 += 1;
        }
        while (v10 != a0);
        return a0;
    }
    return v3;
}

long long submain(unsigned int a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x38], Other Possible Types: char **
    unsigned long v2;  // rax
    void* v4;  // rbx
    void* v5;  // r14
    void* v6;  // r12
    unsigned long long v7;  // r13
    void* v8;  // rax
    int v9;  // xmm0
    int v10;  // xmm1
    unsigned long long v11;  // cc_op
    void* v12;  // cc_dep1
    void* v13;  // cc_dep2
    void* v14;  // rcx
    int v15;  // xmm2
    unsigned long v16;  // cc_ndep
    unsigned long long v17;  // cc_op
    void* v18;  // cc_dep1
    unsigned long long v19;  // cc_dep2
    int v20;  // xmm0
    void* v21;  // rcx
    uint128_t v22;  // xmm1
    unsigned long long v23;  // rax
    unsigned long long v24;  // r15
    uint128_t v26;  // xmm0
    void* v27;  // rcx
    uint128_t v28;  // xmm1
    uint128_t v29;  // xmm1
    unsigned long v30;  // cc_ndep
    unsigned long long v31;  // cc_op
    void* v32;  // cc_dep1
    void* v33;  // cc_dep2
    void* v34;  // rcx
    uint128_t v35;  // xmm0
    unsigned long v36;  // cc_ndep
    unsigned long long v37;  // cc_op
    void* v38;  // cc_dep1
    unsigned long long v39;  // cc_dep2

    v0 = v2;
    v0 = a1;
    v4 = polybench_alloc_data(0x3ce1f0, 0x8);
    v5 = polybench_alloc_data(0x834, 0x8);
    v6 = polybench_alloc_data(0x834, 0x8);
    v7 = polybench_alloc_data(0x76c, 0x8);
    v8 = 0;
    v9 = 0;
    *((unsigned long long *)&v9) = 0x40a0680000000000;
    v10 = 0;
    *((unsigned long long *)&v10) = 0x3ff0000000000000;
    v11 = 19;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    do
    {
        v15 = 0;
        *((unsigned long long *)&v15) = v14;
        *((unsigned long long *)&v15) = (unsigned long long)(v15 / v9 + v10);
        *((unsigned long long *)((char *)v5 + 0x8 * v14)) = (unsigned long long)v15;
        v16 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
        v14 += 1;
        v17 = 8;
        v18 = v14;
        v19 = 2100;
    }
    while (v14 != 2100);
    v20 = 0;
    *((unsigned long long *)&v20) = 0x40c28e0000000000;
    do
    {
        v21 = 0;
        do
        {
            v22 = 0;
            *((unsigned long long *)&v22) = (unsigned int)(v21 + v8) - (unsigned int)(((v21 + v8) * 2094307863 >> 42) + ((v21 + v8) * 2094307863 >> 63)) * 2100;
            *((unsigned long long *)&v22) = (unsigned long long)(v22 / v20);
            *((unsigned long long *)(0x41a0 * v8 + (char *)v4 + 0x8 * v21)) = v22;
            v21 += 1;
        }
        while (v21 != 2100);
        v23 = 1;
    }
    while (true);
    v24 = 0;
    memset(v6, 0x0, 0x41a0);
    do
    {
        *((long long *)(v7 + v24 * 8)) = 0;
        v26 = 0;
        v27 = 0;
        do
        {
            v28 = 0;
            *((unsigned long long *)&v28) = *((long long *)(&((char *)v4)[16800 * v24] + 0x8 * v27));
            xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(r14<8> + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
            v26 += v29;
            *((unsigned long long *)(v7 + v24 * 8)) = v26;
            v30 = (v24 * 16800 + v4 <= v24 * 16800? 1 : 0);
            v27 += 1;
        }
        while (v27 != 2100);
        v31 = 19;
        v32 = 0;
        v33 = 0;
        v34 = 0;
        do
        {
            v35 = 0;
            *((unsigned long long *)&v35) = *((long long *)((char *)v4 + 0x8 * v34));
            xmm0lq<8> = Conv(128->64, ((xmm0<16> * Conv(64->128, Load(addr=r13<8>, size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(r12<8> + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE))))
            *((unsigned long long *)((char *)v6 + 0x8 * v34)) = v35;
            v36 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v34 += 1;
            v37 = 8;
            v38 = v34;
            v39 = 2100;
        }
        while (v34 != 2100);
        v24 = 1;
    }
    while (true);
    if (a0 >= 43)
    {
        if (*(*(v0)) == 0)
        {
            print_array(0x834, v6);
            free(v4);
            free(v5);
            free(v6);
            free(v7);
            return 0;
        }
        free(v4);
        free(v5);
        free(v6);
        free(v7);
        return 0;
    }
    free(v4);
    free(v5);
    free(v6);
    free(v7);
    return 0;
}

