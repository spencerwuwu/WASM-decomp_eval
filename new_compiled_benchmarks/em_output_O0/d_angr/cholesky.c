extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x1c]

    v1 = 2000;
    v0 = polybench_alloc_data(0x3d0900, 0x8);
    init_array(v1, v0);
    kernel_cholesky(v1, v0);
    if (a0 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v1, v0);
            free(v0);
            return 0;
        }
        free(v0);
        return 0;
    }
    free(v0);
    return 0;
}

int init_array(unsigned int a0, unsigned long a1)
{
    int tmp_66;  // tmp #66
    void* v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x2c]
    unsigned int v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x20]
    unsigned int v5;  // [bp-0x1c]
    unsigned int v6;  // [bp-0xc]
    unsigned long v8;  // rdi
    uint128_t v9;  // rdx
    unsigned long long v10;  // xmm1lq
    int v12;  // xmm1
    unsigned long long v13;  // xmm0lq
    uint128_t v14;  // xmm0
    uint128_t v15;  // xmm2
    uint128_t v16;  // xmm1

    v6 = v8;
    for (v5 = 0; v5 < v6; v5 += 1)
    {
        for (v4 = 0; v4 <= v5; v4 += 1)
        {
            *((unsigned long long *)&v9) = (0 - v4 >> 31 CONCAT 0 - v4) /m v6 >> 32;
            v10 = v6;
            tmp_66 = ((0 - v4 >> 31 CONCAT 0 - v4) /m v6 >> 32) / xmm1<16>;
            v12 = 0;
            *((unsigned long long *)&v12) = 0x3ff0000000000000;
            v13 = (unsigned long long)(tmp_66 + v12);
            *((unsigned long long *)(a1 + v5 * 16000 + v4 * 8)) = v13;
        }
        for (v4 = v5 + 1; v4 < v6; v4 += 1)
        {
            *((long long *)(a1 + v5 * 16000 + v4 * 8)) = 0;
        }
        *((long long *)(a1 + v5 * 16000 + v5 * 8)) = 0x3ff0000000000000;
    }
    v0 = polybench_alloc_data(0x3d0900, 0x8);
    for (v3 = 0; v3 < v6; v3 += 1)
    {
        for (v2 = 0; v2 < v6; v2 += 1)
        {
            *((long long *)&((char *)v0)[16000 * v3 + 8 * v2]) = 0;
        }
    }
    for (v1 = 0; v1 < v6; v1 += 1)
    {
        for (v3 = 0; v3 < v6; v3 += 1)
        {
            for (v2 = 0; v2 < v6; v2 += 1)
            {
                v14 = 0;
                *((unsigned long long *)&v14) = *((long long *)(a1 + v3 * 16000 + v1 * 8));
                v15 = 0;
                *((unsigned long long *)&v15) = *((long long *)(a1 + v2 * 16000 + v1 * 8));
                v16 = 0;
                *((unsigned long long *)&v16) = *((long long *)&((char *)v0)[16000 * v3 + 8 * v2]);
                *((unsigned long long *)&v14) = v14 * v15 + v16;
                *((unsigned long long *)&((char *)v0)[16000 * v3 + 8 * v2]) = v14;
            }
        }
    }
    for (v3 = 0; v3 < v6; v3 += 1)
    {
        for (v2 = 0; v2 < v6; v2 += 1)
        {
            *((long long *)(a1 + v3 * 16000 + v2 * 8)) = *((long long *)&((char *)v0)[16000 * v3 + 8 * v2]);
        }
    }
    free(v0);
    return;
}

int kernel_cholesky(unsigned int a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    uint128_t v4;  // xmm2
    uint128_t v5;  // xmm1
    uint128_t v6;  // xmm1
    uint128_t v7;  // xmm0
    uint128_t v8;  // xmm2
    uint128_t v9;  // xmm1

    for (v2 = 0; v2 < a0; v2 += 1)
    {
        for (v1 = 0; v1 < v2; v1 += 1)
        {
            for (v0 = 0; v0 < v1; v0 += 1)
            {
                v4 = 0;
                *((unsigned long long *)&v4) = *((long long *)(a1 + v1 * 16000 + v0 * 8));
                v5 = 0;
                *((unsigned long long *)&v5) = *((long long *)(a1 + v2 * 16000 + v1 * 8));
                STORE(addr=((rsi<8> + (Conv(32->s64, Load(addr=stack_base-28, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-32, size=4, endness=Iend_LE)) * 0x8<64>)), data=Conv(128->64, ((Conv(64->128, (Load(addr=((rsi<8> + (Conv(32->s64, Load(addr=stack_base-28, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-36, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm2<16>) + xmm1<16>)), size=8, endness=Iend_LE, guard=None)
            }
            v6 = 0;
            *((unsigned long long *)&v6) = *((long long *)(a1 + v1 * 16000 + v1 * 8));
            v7 = 0;
            *((unsigned long long *)&v7) = *((long long *)(a1 + v2 * 16000 + v1 * 8));
            *((unsigned long long *)&v7) = v7 / v6;
            *((unsigned long long *)(a1 + v2 * 16000 + v1 * 8)) = v7;
        }
        for (v0 = 0; v0 < v2; v0 += 1)
        {
            v8 = 0;
            *((unsigned long long *)&v8) = *((long long *)(a1 + v2 * 16000 + v0 * 8));
            v9 = 0;
            *((unsigned long long *)&v9) = *((long long *)(a1 + v2 * 16000 + v2 * 8));
            STORE(addr=((rsi<8> + (Conv(32->s64, Load(addr=stack_base-28, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-28, size=4, endness=Iend_LE)) * 0x8<64>)), data=Conv(128->64, ((Conv(64->128, (Load(addr=((rsi<8> + (Conv(32->s64, Load(addr=stack_base-28, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-36, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm2<16>) + xmm1<16>)), size=8, endness=Iend_LE, guard=None)
        }
        sqrt(*((long long *)(a1 + v2 * 16000 + v2 * 8)));
        *((long long *)(a1 + v2 * 16000 + v2 * 8)) = *((long long *)(a1 + v2 * 16000 + v2 * 8));
    }
    return;
}

extern char .L.str.3;
extern char got.stderr;

int print_array(unsigned int a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned long v2;  // [bp-0x18]

    v2 = a1;
    fprintf(*((long long *)got.stderr), "==BEGIN DUMP_ARRAYS==\n");
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 <= v1; v0 += 1)
        {
            if ((a0 * v1 + v0 >> 31 CONCAT a0 * v1 + v0) /m 20 >> 32 == 0)
            {
                fprintf(*((long long *)got.stderr), "\n");
            }
            fprintf(*((long long *)got.stderr), "%0.2lf ");
        }
    }
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
    fprintf(*((long long *)got.stderr), "==END   DUMP_ARRAYS==\n");
    return;
}

