extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, char **a1)
{
    unsigned long v0;  // [bp-0x3ed0]
    uint128_t v1;  // [bp-0x3ec8], Other Possible Types: int
    unsigned long v2;  // [bp-0x3eb8]
    void* v5;  // rbx
    void* v6;  // r14
    void* v7;  // rax
    uint128_t v8;  // xmm0
    uint128_t v9;  // xmm4
    int v10;  // xmm5
    unsigned long long v11;  // r13
    uint128_t v12;  // xmm1
    uint128_t v13;  // xmm0
    void* v14;  // rax
    uint128_t v15;  // xmm2
    uint128_t v16;  // xmm2
    int v17;  // xmm5
    uint128_t v18;  // xmm0
    uint128_t v19;  // xmm1
    void* v20;  // rax
    uint128_t v21;  // xmm0
    uint128_t v23;  // xmm4
    unsigned long long v24;  // r13
    void* v26;  // r13

    v5 = polybench_alloc_data(0x7d0, 0x8);
    v6 = polybench_alloc_data(0x7d0, 0x8);
    v7 = 0;
    do
    {
        *((long long *)((char *)v5 + 0x8 * v7)) = 2001 - (unsigned int)v7;
        v7 += 1;
    }
    while (v7 != 2000);
    v8 = 0;
    *((unsigned long long *)&v8) = *((long long *)v5);
    *((unsigned long long *)&v8) = v8 ^ 0x8000000000000000;
    *((unsigned long long *)v6) = v8;
    v9 = 0;
    *((unsigned long long *)&v9) = *((long long *)v5);
    v23 = v9 ^ 0x8000000000000000;
    v10 = 0;
    *((unsigned long long *)&v10) = 0x3ff0000000000000;
    v11 = 1;
    while (true)
    {
        v12 = v23 ^ 0x8000000000000000;
        v13 = 0;
        v14 = 0;
        do
        {
            v15 = 0;
            *((unsigned long long *)&v15) = *((long long *)&((char *)v5 + 0x8 * !(v14))[8 * v11]);
            xmm2<16> = (xmm2<16> * Conv(64->128, Load(addr=(r14<8> + (rax<8> * 0x8<64>)), size=8, endness=Iend_LE)))
            v13 += v16;
            v14 += 1;
        }
        while (v14 != v11);
        v17 = v10 * (v12 * v23 + 0x3ff0000000000000);
        xmm0<16> = ((xmm0<16> + Conv(64->128, Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE))) ^ 0x8000000000000000<128>)
        v0 = (unsigned long long)v17;
        xmm1<16> = (xmm0<16> / Conv(64->128, Load(addr=stack_base-16080, size=8, endness=Iend_LE)))
        v20 = 0;
        do
        {
            v21 = 0;
            *((unsigned long long *)&v21) = *((long long *)&((char *)v6 + 0x8 * !(v20))[8]);
            xmm0lq<8> = Conv(128->64, ((xmm0<16> * Load(addr=stack_base-16072, size=16, endness=Iend_LE)) + Conv(64->128, Load(addr=(r14<8> + (rax<8> * 0x8<64>)), size=8, endness=Iend_LE))))
            v2 = v21;
            v20 += 1;
        }
        while (v20 != 1);
        v1 = v19;
        memcpy(v6, &v2, 0x8);
        v23 = v1;
        *((unsigned long long *)&v6[8]) = v1;
        v24 = 2;
        if (false)
        {
            break;
        }
    }
    if (a0 >= 43)
    {
        if (*(*(a1)) != 0)
        {
            free(v5);
            free(v6);
            return 0;
        }
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v26 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        while (true)
        {
            if (((unsigned int)v26 * 3435973837 >> 2 | (unsigned int)v26 * 3435973837 << 30) <= 214748364)
            {
                fputc(0xa, *((long long *)got.stderr));
            }
            fprintf(*((long long *)got.stderr), "%0.2lf ");
            v26 += 1;
            if (v26 == 2000)
            {
                break;
            }
        }
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        free(v5);
        free(v6);
        return 0;
    }
    free(v5);
    free(v6);
    return 0;
}

