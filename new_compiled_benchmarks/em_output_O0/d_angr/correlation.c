int kernel_correlation(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long long *a4, unsigned long long *a5)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned int v2;  // [bp-0x44]
    unsigned int v3;  // [bp-0x40]
    unsigned int v4;  // [bp-0x3c]
    unsigned long v5;  // [bp-0x18]
    unsigned long v7;  // xmm0lq
    uint128_t v8;  // xmm0
    uint128_t v9;  // xmm1
    uint128_t v10;  // xmm0
    uint128_t v11;  // xmm0
    uint128_t v12;  // xmm2
    uint128_t v13;  // xmm2
    uint128_t v14;  // xmm1
    uint128_t v15;  // xmm1
    uint128_t v16;  // xmm0
    uint128_t v17;  // xmm1
    uint128_t v18;  // xmm0
    uint128_t v19;  // xmm1
    uint128_t v20;  // xmm0
    uint128_t v21;  // xmm0
    uint128_t v22;  // xmm2
    uint128_t v23;  // xmm1

    v5 = v7;
    v1 = 4591870180066957722;
    for (v3 = 0; v3 < a0; v3 += 1)
    {
        a4[v3] = 0;
        for (v4 = 0; v4 < a1; v4 += 1)
        {
            v8 = 0;
            *((unsigned long long *)&v8) = *((long long *)(a2 + v4 * 9600 + v3 * 8));
            xmm0lq<8> = Conv(128->64, (xmm0<16> + Conv(64->128, Load(addr=(r8<8> + (Conv(32->s64, Load(addr=stack_base-64, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
            a4[v3] = v8;
        }
        v9 = 0;
        *((unsigned long long *)&v9) = v5;
        v10 = 0;
        *((unsigned long long *)&v10) = a4[v3];
        *((unsigned long long *)&v10) = v10 / v9;
        a4[v3] = v10;
    }
    for (v3 = 0; v3 < a0; v3 += 1)
    {
        a5[v3] = 0;
        for (v4 = 0; v4 < a1; v4 += 1)
        {
            v11 = 0;
            *((unsigned long long *)&v11) = *((long long *)(a2 + v4 * 9600 + v3 * 8));
            v12 = 0;
            *((unsigned long long *)&v12) = *((long long *)(a2 + v4 * 9600 + v3 * 8));
            xmm2<16> = (xmm2<16> - Conv(64->128, Load(addr=(r8<8> + (Conv(32->s64, Load(addr=stack_base-64, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE)))
            v14 = 0;
            *((unsigned long long *)&v14) = a5[v3];
            xmm0lq<8> = Conv(128->64, (((xmm0<16> - Conv(64->128, Load(addr=(r8<8> + (Conv(32->s64, Load(addr=stack_base-64, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) * xmm2<16>) + xmm1<16>))
            a5[v3] = v11;
        }
        v15 = 0;
        *((unsigned long long *)&v15) = v5;
        v16 = 0;
        *((unsigned long long *)&v16) = a5[v3];
        *((unsigned long long *)&v16) = v16 / v15;
        a5[v3] = v16;
        sqrt(a5[v3]);
        a5[v3] = a5[v3];
        if ((BinaryOp CmpF & 1) == 0)
        {
            v0 = 0x3ff0000000000000;
        }
        else
        {
            v0 = a5[v3];
        }
        a5[v3] = v0;
    }
    for (v4 = 0; v4 < a1; v4 += 1)
    {
        for (v3 = 0; v3 < a0; v3 += 1)
        {
            v17 = 0;
            *((unsigned long long *)&v17) = a4[v3];
            v18 = 0;
            *((unsigned long long *)&v18) = *((long long *)(a2 + v4 * 9600 + v3 * 8));
            *((unsigned long long *)&v18) = v18 - v17;
            *((unsigned long long *)(a2 + v4 * 9600 + v3 * 8)) = v18;
            sqrt(v5);
            xmm1<16> = (xmm0<16> * Conv(64->128, Load(addr=(r9<8> + (Conv(32->s64, Load(addr=stack_base-64, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE)))
            v20 = 0;
            *((unsigned long long *)&v20) = *((long long *)(a2 + v4 * 9600 + v3 * 8));
            *((unsigned long long *)&v20) = v20 / v19;
            *((unsigned long long *)(a2 + v4 * 9600 + v3 * 8)) = v20;
        }
    }
    for (v4 = 0; v4 < a0 - 1; v4 += 1)
    {
        *((long long *)(a3 + v4 * 9600 + v4 * 8)) = 0x3ff0000000000000;
        for (v3 = v4 + 1; v3 < a0; v3 += 1)
        {
            *((long long *)(a3 + v4 * 9600 + v3 * 8)) = 0;
            for (v2 = 0; v2 < a1; v2 += 1)
            {
                v21 = 0;
                *((unsigned long long *)&v21) = *((long long *)(a2 + v2 * 9600 + v4 * 8));
                v22 = 0;
                *((unsigned long long *)&v22) = *((long long *)(a2 + v2 * 9600 + v3 * 8));
                v23 = 0;
                *((unsigned long long *)&v23) = *((long long *)(a3 + v4 * 9600 + v3 * 8));
                *((unsigned long long *)&v21) = v21 * v22 + v23;
                *((unsigned long long *)(a3 + v4 * 9600 + v3 * 8)) = v21;
            }
            *((long long *)(a3 + v3 * 9600 + v4 * 8)) = *((long long *)(a3 + v4 * 9600 + v3 * 8));
        }
    }
    *((long long *)(a3 + (a0 - 1) * 9600 + (a0 - 1) * 8)) = 0x3ff0000000000000;
    return;
}

extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x48]
    void* v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38]
    unsigned long v3;  // [bp-0x30]
    char v4;  // [bp-0x28]
    unsigned int v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x1c]
    unsigned int v7;  // [bp-0xc]
    void* v11;  // rdi
    void* v12;  // rdi
    void* v13;  // rdi

    v7 = a0;
    v6 = 1400;
    v5 = 1200;
    v3 = polybench_alloc_data(0x19a280, 0x8);
    v2 = polybench_alloc_data(0x15f900, 0x8);
    v1 = polybench_alloc_data(0x4b0, 0x8);
    v0 = polybench_alloc_data(0x4b0, 0x8);
    init_array(v5, v6, &v4, v3);
    kernel_correlation(v5, v6, v3, v2, v1, v0);
    if (v7 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v5, v2);
            free(v3);
            v11 = v2;
            free(rdi<8>);
            v12 = v1;
            free(rdi<8>);
            v13 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v3);
        v11 = v2;
        free(rdi<8>);
        v12 = v1;
        free(rdi<8>);
        v13 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v3);
    v11 = v2;
    free(rdi<8>);
    v12 = v1;
    free(rdi<8>);
    v13 = v0;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned int a1, unsigned long long *a2, unsigned long a3)
{
    unsigned int v0;  // [bp-0x28]
    int tmp_39;  // tmp #39
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    uint128_t v5;  // xmm0
    int v6;  // xmm1

    v3 = a0;
    v2 = a1;
    v5 = 0;
    *(a2) = 0x4095e00000000000;
    for (v1 = 0; v1 < 1400; v1 += 1)
    {
        for (v0 = 0; v0 < 1200; v0 += 1)
        {
            *((unsigned long long *)&v5) = v0 * v1;
            v6 = 0;
            *((unsigned long long *)&v6) = 0x4092c00000000000;
            tmp_39 = v5 / v6;
            *((unsigned long long *)&v6) = v1;
            v5 = tmp_39 + v6;
            *((unsigned long long *)(a3 + v1 * 9600 + v0 * 8)) = v5;
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

