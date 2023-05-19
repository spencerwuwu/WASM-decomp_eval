int init_array(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned long long *a4, unsigned long long *a5, unsigned long v3, unsigned long a6, unsigned long a7, unsigned long a8)
{
    unsigned int v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]
    unsigned int v2;  // [bp-0xc]
    unsigned long v4;  // rdi
    unsigned long long v5;  // xmm1lq
    uint128_t v6;  // xmm1

    v2 = v4;
    *(a4) = 0x3ff8000000000000;
    *(a5) = 4608083138725491507;
    for (v1 = 0; v1 < v2; v1 += 1)
    {
        for (v0 = 0; v0 < a2; v0 += 1)
        {
            v5 = v2;
            *((unsigned long long *)(v3 + v1 * 8800 + v0 * 8)) = ((v0 * v1 + 1 >> 31 CONCAT v0 * v1 + 1) /m v2 >> 32) / xmm1<16>;
        }
    }
    for (v1 = 0; v1 < a2; v1 += 1)
    {
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            *((unsigned long long *)&v6) = a1;
            *((unsigned long long *)(a6 + v1 * 7200 + v0 * 8)) = (((v0 + 1) * v1 >> 31 CONCAT (v0 + 1) * v1) /m a1 >> 32) / v6;
        }
    }
    for (v1 = 0; v1 < a1; v1 += 1)
    {
        for (v0 = 0; v0 < a3; v0 += 1)
        {
            *((unsigned long long *)&v6) = a3;
            *((unsigned long long *)(a7 + v1 * 9600 + v0 * 8)) = (((v0 + 3) * v1 + 1 >> 31 CONCAT (v0 + 3) * v1 + 1) /m a3 >> 32) / v6;
        }
    }
    for (v1 = 0; v1 < v2; v1 += 1)
    {
        for (v0 = 0; v0 < a3; v0 += 1)
        {
            *((unsigned long long *)&v6) = a2;
            *((unsigned long long *)(a8 + v1 * 9600 + v0 * 8)) = (((v0 + 2) * v1 >> 31 CONCAT (v0 + 2) * v1) /m a2 >> 32) / v6;
        }
    }
    return v1;
}

extern char .L.str.2;
extern char got.stderr;

int print_array(unsigned int a0, unsigned int a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned long v2;  // [bp-0x18]

    v2 = a2;
    fprintf(*((long long *)got.stderr), "==BEGIN DUMP_ARRAYS==\n");
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.2);
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            if ((a0 * v1 + v0 >> 31 CONCAT a0 * v1 + v0) /m 20 >> 32 == 0)
            {
                fprintf(*((long long *)got.stderr), "\n");
            }
            fprintf(*((long long *)got.stderr), "%0.2lf ");
        }
    }
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.2);
    fprintf(*((long long *)got.stderr), "==END   DUMP_ARRAYS==\n");
    return;
}

int kernel_2mm(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned long a4, unsigned long a5, unsigned long v5, unsigned long a6, unsigned long a7)
{
    unsigned int v0;  // [bp-0x44]
    unsigned int v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    uint128_t v3;  // [bp-0x28]
    uint128_t v4;  // [bp-0x20]
    uint128_t v6;  // xmm0lq
    uint128_t v7;  // xmm1lq
    uint128_t v8;  // xmm0
    uint128_t v9;  // xmm2
    uint128_t v10;  // xmm1
    uint128_t v11;  // xmm0
    uint128_t v12;  // xmm0
    uint128_t v13;  // xmm2
    uint128_t v14;  // xmm1

    v4 = v6;
    v3 = v7;
    for (v2 = 0; v2 < a0; v2 += 1)
    {
        for (v1 = 0; v1 < a1; v1 += 1)
        {
            *((long long *)(a4 + v2 * 7200 + v1 * 8)) = 0;
            for (v0 = 0; v0 < a2; v0 += 1)
            {
                v8 = 0;
                *((unsigned long long *)&v8) = v4;
                v9 = 0;
                *((unsigned long long *)&v9) = *((long long *)(v5 + v0 * 7200 + v1 * 8));
                v10 = 0;
                *((unsigned long long *)&v10) = *((long long *)(a4 + v2 * 7200 + v1 * 8));
                xmm0lq<8> = Conv(128->64, (((xmm0<16> * Conv(64->128, Load(addr=((r9<8> + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x2260<64>)) + (Conv(32->s64, Load(addr=stack_base-68, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) * xmm2<16>) + xmm1<16>))
                *((unsigned long long *)(a4 + v2 * 7200 + v1 * 8)) = v8;
            }
        }
    }
    for (v2 = 0; v2 < a0; v2 += 1)
    {
        for (v1 = 0; v1 < a3; v1 += 1)
        {
            v11 = 0;
            *((unsigned long long *)&v11) = v3;
            xmm0lq<8> = Conv(128->64, (xmm0<16> * Conv(64->128, Load(addr=((Load(addr=stack_base+24, size=8, endness=Iend_LE) + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x2580<64>)) + (Conv(32->s64, Load(addr=stack_base-64, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
            *((unsigned long long *)(a7 + v2 * 9600 + v1 * 8)) = v11;
            for (v0 = 0; v0 < a1; v0 += 1)
            {
                v12 = 0;
                *((unsigned long long *)&v12) = *((long long *)(a4 + v2 * 7200 + v0 * 8));
                v13 = 0;
                *((unsigned long long *)&v13) = *((long long *)(a6 + v0 * 9600 + v1 * 8));
                v14 = 0;
                *((unsigned long long *)&v14) = *((long long *)(a7 + v2 * 9600 + v1 * 8));
                *((unsigned long long *)&v12) = v12 * v13 + v14;
                *((unsigned long long *)(a7 + v2 * 9600 + v1 * 8)) = v12;
            }
        }
    }
    return;
}

extern char .L.str.7;

long long submain(unsigned int a0, unsigned long long *a1)
{
    unsigned int v0;  // [bp-0x88]
    unsigned int v1;  // [bp-0x80]
    unsigned int v2;  // [bp-0x78]
    unsigned int v3;  // [bp-0x70]
    unsigned long v4;  // [bp-0x68]
    unsigned long v5;  // [bp-0x60]
    unsigned long v6;  // [bp-0x58]
    unsigned long v7;  // [bp-0x50]
    unsigned long v8;  // [bp-0x48]
    char v9;  // [bp-0x40]
    char v10;  // [bp-0x38]
    unsigned int v11;  // [bp-0x30]
    unsigned int v12;  // [bp-0x2c]
    unsigned int v13;  // [bp-0x28]
    unsigned int v14;  // [bp-0x24]
    unsigned int v15;  // [bp-0x14]
    void* v20;  // rdi
    void* v21;  // rdi
    void* v23;  // rdi
    void* v24;  // rdi

    v15 = a0;
    v14 = 800;
    v13 = 900;
    v12 = 1100;
    v11 = 1200;
    v8 = polybench_alloc_data(0xafc80, 0x8);
    v7 = polybench_alloc_data(0xd6d80, 0x8);
    v6 = polybench_alloc_data(0xf1b30, 0x8);
    v5 = polybench_alloc_data(0x107ac0, 0x8);
    v4 = polybench_alloc_data(0xea600, 0x8);
    *((unsigned long *)&v0) = v7;
    *((unsigned long *)&v1) = v6;
    *((unsigned long *)&v2) = v5;
    *((unsigned long *)&v3) = v4;
    init_array(v14, v13, v12, v11, &v10, &v9, *((long long *)&v0), *((long long *)&v1), *((long long *)&v2), *((long long *)&v3));
    *((unsigned long *)&v0) = v6;
    *((unsigned long *)&v1) = v5;
    *((unsigned long *)&v2) = v4;
    kernel_2mm(v14, v13, v12, v11, v8, v7, *((long long *)&v0), *((long long *)&v1), *((long long *)&v2));
    if (v15 > 42)
    {
        if (strcmp(*(a1), &.L.str.7) == 0)
        {
            print_array(v14, v11, v4);
            free(v8);
            v20 = v7;
            free(rdi<8>);
            v21 = v6;
            free(rdi<8>);
            v23 = v5;
            free(rdi<8>);
            v24 = v4;
            free(rdi<8>);
            return 0;
        }
        free(v8);
        v20 = v7;
        free(rdi<8>);
        v21 = v6;
        free(rdi<8>);
        v23 = v5;
        free(rdi<8>);
        v24 = v4;
        free(rdi<8>);
        return 0;
    }
    free(v8);
    v20 = v7;
    free(rdi<8>);
    v21 = v6;
    free(rdi<8>);
    v23 = v5;
    free(rdi<8>);
    v24 = v4;
    free(rdi<8>);
    return 0;
}

