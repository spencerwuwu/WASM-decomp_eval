extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    char **v0;  // [bp-0x38], Other Possible Types: unsigned long
    unsigned long v2;  // rax
    void* v4;  // rbx
    void* v5;  // r14
    void* v6;  // r15
    unsigned long long v7;  // r12
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
    void* v21;  // rdx
    uint128_t v22;  // xmm1
    unsigned long long v23;  // rax
    unsigned long long v24;  // r13
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
    void* v41;  // rbp

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
            *((unsigned long long *)&v22) = (unsigned int)(v21 + v8) - (unsigned int)(4188615725 * (v21 + v8) >> 43) * 2100;
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
            xmm0lq<8> = Conv(128->64, ((xmm0<16> * Conv(64->128, Load(addr=r12<8>, size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(r15<8> + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE))))
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
        if (*(*(v0)) != 0)
        {
            free(v4);
            free(v5);
            free(v6);
            free(v7);
            return 0;
        }
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v41 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        while (true)
        {
            if (((unsigned int)v41 * 3435973837 >> 2 | (unsigned int)v41 * 3435973837 << 30) <= 214748364)
            {
                fputc(0xa, *((long long *)got.stderr));
            }
            fprintf(*((long long *)got.stderr), "%0.2lf ");
            v41 += 1;
            if (v41 == 2100)
            {
                break;
            }
        }
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
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

