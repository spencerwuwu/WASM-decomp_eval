extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x40]
    void* v1;  // [bp-0x38]
    void* v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    unsigned int v4;  // [bp-0x20]
    unsigned int v5;  // [bp-0x1c]
    unsigned int v6;  // [bp-0xc]
    void* v9;  // rdi
    void* v10;  // rdi

    v6 = a0;
    v5 = 1400;
    v4 = 1200;
    v2 = polybench_alloc_data(0x19a280, 0x8);
    v1 = polybench_alloc_data(0x15f900, 0x8);
    v0 = polybench_alloc_data(0x4b0, 0x8);
    init_array(v4, v5, &v3, v2);
    kernel_covariance(v4, v5, v2, v1, v0);
    if (v6 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v4, v1);
            free(v2);
            v9 = v1;
            free(rdi<8>);
            v10 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v2);
        v9 = v1;
        free(rdi<8>);
        v10 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v2);
    v9 = v1;
    free(rdi<8>);
    v10 = v0;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned int a1, unsigned long long *a2, unsigned long a3)
{
    unsigned int v0;  // [bp-0x28]
    int tmp_26;  // tmp #26
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0xc]
    unsigned long long v4;  // xmm0lq
    unsigned long long v5;  // xmm1lq
    int v8;  // xmm1
    int v9;  // xmm0

    v2 = a0;
    *(a2) = a1;
    for (v1 = 0; v1 < 1400; v1 += 1)
    {
        for (v0 = 0; v0 < 1200; v0 += 1)
        {
            v4 = v1;
            v5 = v0;
            tmp_26 = xmm0<16> * xmm1<16>;
            v8 = 0;
            *((unsigned long long *)&v8) = 0x4092c00000000000;
            v9 = tmp_26 / v8;
            *((unsigned long long *)(a3 + v1 * 9600 + v0 * 8)) = (unsigned long long)v9;
        }
    }
    return;
}

int kernel_covariance(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long long *a4)
{
    unsigned int v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x34]
    uint128_t v3;  // [bp-0x18]
    uint128_t v5;  // xmm0lq
    uint128_t v6;  // xmm0
    uint128_t v7;  // xmm1
    uint128_t v8;  // xmm0
    uint128_t v9;  // xmm1
    uint128_t v10;  // xmm0
    uint128_t v11;  // xmm0
    uint128_t v12;  // xmm2
    uint128_t v13;  // xmm1
    uint128_t v14;  // xmm1
    int v15;  // xmm0
    uint128_t v16;  // xmm1
    uint128_t v17;  // xmm0

    v3 = v5;
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        a4[v1] = 0;
        for (v2 = 0; v2 < a1; v2 += 1)
        {
            v6 = 0;
            *((unsigned long long *)&v6) = *((long long *)(a2 + v2 * 9600 + v1 * 8));
            xmm0lq<8> = Conv(128->64, (xmm0<16> + Conv(64->128, Load(addr=(r8<8> + (Conv(32->s64, Load(addr=stack_base-56, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
            a4[v1] = v6;
        }
        v7 = 0;
        *((unsigned long long *)&v7) = v3;
        v8 = 0;
        *((unsigned long long *)&v8) = a4[v1];
        *((unsigned long long *)&v8) = v8 / v7;
        a4[v1] = v8;
    }
    for (v2 = 0; v2 < a1; v2 += 1)
    {
        for (v1 = 0; v1 < a0; v1 += 1)
        {
            v9 = 0;
            *((unsigned long long *)&v9) = a4[v1];
            v10 = 0;
            *((unsigned long long *)&v10) = *((long long *)(a2 + v2 * 9600 + v1 * 8));
            *((unsigned long long *)&v10) = v10 - v9;
            *((unsigned long long *)(a2 + v2 * 9600 + v1 * 8)) = v10;
        }
    }
    for (v2 = 0; v2 < a0; v2 += 1)
    {
        for (v1 = v2; v1 < a0; v1 += 1)
        {
            *((long long *)(a3 + v2 * 9600 + v1 * 8)) = 0;
            for (v0 = 0; v0 < a1; v0 += 1)
            {
                v11 = 0;
                *((unsigned long long *)&v11) = *((long long *)(a2 + v0 * 9600 + v2 * 8));
                v12 = 0;
                *((unsigned long long *)&v12) = *((long long *)(a2 + v0 * 9600 + v1 * 8));
                v13 = 0;
                *((unsigned long long *)&v13) = *((long long *)(a3 + v2 * 9600 + v1 * 8));
                *((unsigned long long *)&v11) = v11 * v12 + v13;
                *((unsigned long long *)(a3 + v2 * 9600 + v1 * 8)) = v11;
            }
            v14 = 0;
            *((unsigned long long *)&v14) = v3;
            v15 = 0;
            *((unsigned long long *)&v15) = 0x3ff0000000000000;
            v16 = v14 - v15;
            v17 = 0;
            *((unsigned long long *)&v17) = *((long long *)(a3 + v2 * 9600 + v1 * 8));
            *((unsigned long long *)&v17) = v17 / v16;
            *((unsigned long long *)(a3 + v2 * 9600 + v1 * 8)) = v17;
            *((long long *)(a3 + v1 * 9600 + v2 * 8)) = *((long long *)(a3 + v2 * 9600 + v1 * 8));
        }
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
        for (v0 = 0; v0 < a0; v0 += 1)
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

