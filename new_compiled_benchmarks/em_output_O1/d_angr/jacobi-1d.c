extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v2;  // rax
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax
    unsigned long long v7;  // r14
    int v8;  // xmm0
    int v9;  // xmm1
    int v10;  // xmm2
    unsigned long long v11;  // cc_op
    void* v12;  // cc_dep1
    void* v13;  // cc_dep2
    unsigned long long v14;  // rcx
    int v15;  // xmm3
    unsigned long v16;  // cc_ndep
    unsigned long long v17;  // cc_op
    unsigned long long v18;  // cc_dep1
    unsigned long long v19;  // cc_dep2
    int v20;  // xmm0
    unsigned long long v21;  // rcx
    unsigned long long v22;  // rdx
    uint128_t v23;  // xmm1
    unsigned long long v24;  // rsi
    uint128_t v25;  // xmm1
    unsigned long long v26;  // rdx
    void* v28;  // r13

    v0 = v2;
    v5 = polybench_alloc_data(0x7d0, 0x8);
    (unsigned int)v6 = polybench_alloc_data(0x7d0, 0x8);
    v7 = v6;
    v8 = 0;
    *((unsigned long long *)&v8) = 0x4000000000000000;
    v9 = 0;
    *((unsigned long long *)&v9) = 0x409f400000000000;
    v10 = 0;
    *((unsigned long long *)&v10) = 0x4008000000000000;
    v11 = 19;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    do
    {
        v15 = 0;
        *((unsigned long long *)&v15) = v14;
        *((unsigned long long *)(v5 + v14 * 8)) = (unsigned long long)((v15 + v8) / v9);
        *((unsigned long long *)&v15) = (unsigned long long)((v15 + v10) / v9);
        *((unsigned long long *)(v6 + v14 * 8)) = (unsigned long long)v15;
        v16 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
        v14 += 1;
        v17 = 8;
        v18 = v14;
        v19 = 2000;
    }
    while (v14 != 2000);
    v20 = 0;
    *((unsigned long long *)&v20) = 4599676359373071550;
    do
    {
        v21 = 1;
        v22 = 1;
        do
        {
            v23 = 0;
            *((unsigned long long *)&v23) = *((long long *)(v5 + v22 * 8 - 8));
            xmm1lq<8> = Conv(128->64, (((xmm1<16> + Conv(64->128, Load(addr=(rbx<8> + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rbx<8> + (rdx<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) * xmm0<16>))
            *((unsigned long long *)(v6 + v22 * 8)) = v23;
            v24 = v22 + 1;
            v22 += 1;
        }
        while (v24 != 1999);
        do
        {
            v25 = 0;
            *((unsigned long long *)&v25) = *((long long *)(v7 + v21 * 8 - 8));
            xmm1lq<8> = Conv(128->64, (((xmm1<16> + Conv(64->128, Load(addr=(r14<8> + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((r14<8> + (rcx<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) * xmm0<16>))
            *((unsigned long long *)(v5 + v21 * 8)) = v25;
            v26 = v21 + 1;
            v21 += 1;
        }
        while (v26 != 1999);
    }
    while (true);
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v5);
            free(v7);
            return 0;
        }
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v28 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        while (true)
        {
            if (((unsigned int)v28 * 3435973837 >> 2 | (unsigned int)v28 * 3435973837 << 30) <= 214748364)
            {
                fputc(0xa, *((long long *)got.stderr));
            }
            fprintf(*((long long *)got.stderr), "%0.2lf ");
            v28 += 1;
            if (v28 == 2000)
            {
                break;
            }
        }
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        free(v5);
        free(v7);
        return 0;
    }
    free(v5);
    free(v7);
    return 0;
}

