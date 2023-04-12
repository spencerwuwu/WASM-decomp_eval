extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    char **v0;  // [bp-0x38], Other Possible Types: unsigned long, void*
    unsigned long v2;  // rax
    void* v4;  // rbx
    void* v5;  // r14
    unsigned long long v6;  // r15
    unsigned long long v7;  // r12
    unsigned long long v8;  // r13
    int v9;  // xmm0
    int v10;  // xmm1
    void* v11;  // rsi
    uint128_t v12;  // xmm1
    uint128_t v13;  // xmm1
    unsigned long long v14;  // rdx
    int v15;  // xmm0
    int v16;  // xmm1
    unsigned long long v17;  // rcx
    uint128_t v18;  // xmm2
    uint128_t v19;  // xmm2
    uint128_t v20;  // xmm2
    uint128_t v21;  // xmm2
    uint128_t v22;  // xmm3
    unsigned long long v23;  // rax
    void* v25;  // rbp

    v0 = v2;
    v0 = a1;
    v4 = polybench_alloc_data(0x19c990, 0x8);
    v5 = polybench_alloc_data(0x19c990, 0x8);
    v6 = polybench_alloc_data(0x514, 0x8);
    v7 = polybench_alloc_data(0x514, 0x8);
    v8 = polybench_alloc_data(0x514, 0x8);
    v23 = 0;
    v9 = 0;
    *((unsigned long long *)&v9) = 0x4094500000000000;
    v14 = 0;
    do
    {
        v10 = 0;
        *((unsigned long long *)&v10) = v14;
        *((unsigned long long *)&v10) = (unsigned long long)(v10 / v9);
        *((unsigned long long *)(v7 + v14 * 8)) = (unsigned long long)v10;
        v11 = 0;
        do
        {
            v12 = 0;
            *((unsigned long long *)&v12) = 0 - (unsigned int)(3383112701 * (v14 * v11 + 1) >> 42) * 1300 + (unsigned int)v14 * (unsigned int)v11 + 1;
            *((unsigned long long *)&v12) = (unsigned long long)(v12 / v9);
            *((unsigned long long *)(&((char *)v4)[10400 * v14] + 0x8 * v11)) = v12;
            v13 = 0;
            *((unsigned long long *)&v13) = (unsigned int)v14 * (unsigned int)v11 + 0 - (unsigned int)(3383112701 * ((unsigned int)v14 * (unsigned int)v11 + 2) >> 42) * 1300 + 2;
            *((unsigned long long *)&v13) = (unsigned long long)(v13 / v9);
            *((unsigned long long *)(&((char *)v5)[10400 * v14] + 0x8 * v11)) = v13;
            v11 += 1;
        }
        while (v11 != 1300);
        v14 = 1;
    }
    while (true);
    v15 = 0;
    *((unsigned long long *)&v15) = 4608083138725491507;
    v16 = 0;
    *((unsigned long long *)&v16) = 0x3ff8000000000000;
    do
    {
        *((long long *)(v6 + v23 * 8)) = 0;
        *((long long *)(v8 + v23 * 8)) = 0;
        v17 = 0;
        do
        {
            v18 = 0;
            *((unsigned long long *)&v18) = *((long long *)&((char *)v4)[10400 * v23 + 8 * v17]);
            xmm2lq<8> = Conv(128->64, ((xmm2<16> * Conv(64->128, Load(addr=(r12<8> + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(r15<8> + (rax<8> * 0x8<64>)), size=8, endness=Iend_LE))))
            *((unsigned long long *)(v6 + v23 * 8)) = v18;
            v19 = 0;
            *((unsigned long long *)&v19) = *((long long *)&((char *)v5)[10400 * v23 + 8 * v17]);
            xmm2<16> = ((xmm2<16> * Conv(64->128, Load(addr=(r12<8> + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(r13<8> + (rax<8> * 0x8<64>)), size=8, endness=Iend_LE)))
            *((unsigned long long *)(v8 + v23 * 8)) = v20;
            v17 += 1;
        }
        while (v17 != 1300);
        v21 = v20 * v15;
        v22 = 0;
        *((unsigned long long *)&v22) = *((long long *)v6);
        *((unsigned long long *)&v22) = (unsigned long long)(v22 * v16 + v21);
        *((unsigned long long *)v8) = v22;
        v23 = 1;
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
            free(v8);
            return 0;
        }
        v0 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v25 = 0;
        fprintf(v0, "begin dump: %s", &.L.str.3);
        while (true)
        {
            if (((unsigned int)v25 * 3435973837 >> 2 | (unsigned int)v25 * 3435973837 << 30) <= 214748364)
            {
                fputc(0xa, v0);
            }
            fprintf(v0, "%0.2lf ");
            v25 += 1;
            if (v25 == 1300)
            {
                break;
            }
        }
        fprintf(v0, "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, v0);
        free(v4);
        free(v5);
        free(v6);
        free(v7);
        free(v8);
        return 0;
    }
    free(v4);
    free(v5);
    free(v6);
    free(v7);
    free(v8);
    return 0;
}

