extern char .L.str.3;
extern char .L.str.7;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    char **v0;  // [bp-0x38], Other Possible Types: unsigned long, void*
    unsigned long v2;  // rax
    void* v4;  // rbx
    unsigned long long v5;  // r14
    unsigned long long v6;  // r15
    unsigned long long v7;  // r12
    unsigned long long v8;  // r13
    int v9;  // xmm0
    int v10;  // xmm1
    uint128_t v11;  // xmm1
    uint128_t v12;  // xmm2
    void* v13;  // rsi
    uint128_t v14;  // xmm1
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rcx
    uint128_t v17;  // xmm0
    unsigned long long v18;  // rdx
    uint128_t v19;  // xmm1
    uint128_t v20;  // xmm1
    unsigned long long v21;  // rax
    uint128_t v22;  // xmm0
    unsigned long long v23;  // rax
    uint128_t v24;  // xmm1
    uint128_t v25;  // xmm1
    void* v27;  // rbp
    void* v31;  // rbp

    v0 = v2;
    v0 = a1;
    v4 = polybench_alloc_data(0x3d0900, 0x8);
    v5 = polybench_alloc_data(0x7d0, 0x8);
    v6 = polybench_alloc_data(0x7d0, 0x8);
    v7 = polybench_alloc_data(0x7d0, 0x8);
    v8 = polybench_alloc_data(0x7d0, 0x8);
    v21 = 0;
    v9 = 0;
    *((unsigned long long *)&v9) = 0x409f400000000000;
    v15 = 0;
    do
    {
        v10 = 0;
        *((unsigned long long *)&v10) = v15;
        *((unsigned long long *)&v10) = (unsigned long long)(v10 / v9);
        *((unsigned long long *)(v5 + v15 * 8)) = (unsigned long long)v10;
        *((unsigned long long *)&v10) = 0;
        if (v15 + 1 != 2000)
        {
            v10 = 0;
            *((unsigned long long *)&v10) = v15 + 1;
            *((unsigned long long *)&v10) = (unsigned long long)(v10 / v9);
        }
        *((unsigned long long *)(v6 + v15 * 8)) = (unsigned long long)v10;
        v11 = 0;
        *((unsigned long long *)&v11) = 0 - (unsigned int)((v15 + 3) / 2000) * 2000 + (unsigned int)v15 + 3;
        *((unsigned long long *)&v11) = (unsigned long long)(v11 / v9);
        v12 = 0;
        *((unsigned long long *)&v12) = 0 - (unsigned int)((v15 + 4) / 2000) * 2000 + (unsigned int)v15 + 4;
        *((unsigned long long *)(v7 + v15 * 8)) = v11;
        *((unsigned long long *)&v12) = (unsigned long long)(v12 / v9);
        *((unsigned long long *)(v8 + v15 * 8)) = v12;
        v13 = 0;
        do
        {
            v14 = 0;
            *((unsigned long long *)&v14) = (unsigned int)v15 * (unsigned int)v13 - (unsigned int)(v15 * v13 / 2000) * 2000;
            *((unsigned long long *)&v14) = (unsigned long long)(v14 / v9);
            *((unsigned long long *)(&((char *)v4)[16000 * v15] + 0x8 * v13)) = v14;
            v13 += 1;
        }
        while (v13 != 2000);
        v15 = 1;
    }
    while (true);
    v16 = 0;
    do
    {
        v17 = 0;
        *((unsigned long long *)&v17) = *((long long *)(v5 + v21 * 8));
        v18 = 0;
        do
        {
            v19 = 0;
            *((unsigned long long *)&v19) = *((long long *)&((char *)v4)[16000 * v21 + 8 * v18]);
            xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(r12<8> + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
            v17 += v20;
            *((unsigned long long *)(v5 + v21 * 8)) = v17;
            v18 += 1;
        }
        while (v18 != 2000);
        v21 = 1;
    }
    while (true);
    do
    {
        v22 = 0;
        *((unsigned long long *)&v22) = *((long long *)(v6 + v16 * 8));
        v23 = 0;
        do
        {
            v24 = 0;
            *((unsigned long long *)&v24) = *((long long *)&((char *)v4)[16000 * v23 + 8 * v16]);
            xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(r13<8> + (rax<8> * 0x8<64>)), size=8, endness=Iend_LE)))
            v22 += v25;
            *((unsigned long long *)(v6 + v16 * 8)) = v22;
            v23 += 1;
        }
        while (v23 != 2000);
        v16 = 1;
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
        v27 = 0;
        fprintf(v0, "begin dump: %s", &.L.str.3);
        while (true)
        {
            if (((unsigned int)v27 * 3435973837 >> 2 | (unsigned int)v27 * 3435973837 << 30) <= 214748364)
            {
                fputc(0xa, v0);
            }
            fprintf(v0, "%0.2lf ");
            v27 += 1;
            if (v27 == 2000)
            {
                break;
            }
        }
        v31 = 0;
        fprintf(v0, "\nend   dump: %s\n", &.L.str.3);
        fprintf(v0, "begin dump: %s", &.L.str.7);
        while (true)
        {
            if (((unsigned int)v31 * 3435973837 >> 2 | (unsigned int)v31 * 3435973837 << 30) <= 214748364)
            {
                fputc(0xa, v0);
            }
            fprintf(v0, "%0.2lf ");
            v31 += 1;
            if (v31 == 2000)
            {
                break;
            }
        }
        fprintf(v0, "\nend   dump: %s\n", &.L.str.7);
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

