extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    unsigned long long v0;  // [bp-0x58]
    void* v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    void* v3;  // [bp-0x38]
    void* v4;  // [bp-0x30]
    unsigned int v5;  // [bp-0x24]
    unsigned int v6;  // [bp-0x20]
    unsigned int v7;  // [bp-0x1c]
    unsigned int v8;  // [bp-0xc]
    void* v12;  // rdi
    void* v13;  // rdi
    void* v14;  // rdi

    v8 = a0;
    v7 = 500;
    v6 = 1000;
    v5 = 1200;
    v4 = polybench_alloc_data(0x124f80, 0x8);
    v3 = polybench_alloc_data(0x124f80, 0x8);
    v2 = polybench_alloc_data(0x124f80, 0x8);
    v1 = polybench_alloc_data(0x1f4, 0x8);
    v0 = v1;
    init_array(v7, v6, v5, v4, v3, v2, v0);
    v0 = v1;
    kernel_fdtd_2d(v7, v6, v5, v4, v3, v2, v0);
    if (v8 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v6, v5, v4, v3, v2);
            free(v4);
            v12 = v3;
            free(rdi<8>);
            v13 = v2;
            free(rdi<8>);
            v14 = v1;
            free(rdi<8>);
            return 0;
        }
        free(v4);
        v12 = v3;
        free(rdi<8>);
        v13 = v2;
        free(rdi<8>);
        v14 = v1;
        free(rdi<8>);
        return 0;
    }
    free(v4);
    v12 = v3;
    free(rdi<8>);
    v13 = v2;
    free(rdi<8>);
    v14 = v1;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned int a1, unsigned int a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long *v2)
{
    unsigned int v0;  // [bp-0x38]
    int tmp_77;  // tmp #77
    int tmp_117;  // tmp #117
    int tmp_157;  // tmp #157
    unsigned int v1;  // [bp-0x34]
    unsigned long long v3;  // xmm0lq
    unsigned long long v4;  // xmm1lq
    uint128_t v6;  // xmm1
    uint128_t v7;  // xmm0
    uint128_t v8;  // xmm0
    int v9;  // xmm0

    for (v1 = 0; v1 < a0; v1 += 1)
    {
        v2[v1] = v1;
    }
    for (v1 = 0; v1 < a1; v1 += 1)
    {
        for (v0 = 0; v0 < a2; v0 += 1)
        {
            v3 = v1;
            v4 = v0 + 1;
            tmp_77 = xmm0<16> * xmm1<16>;
            *((unsigned long long *)&v6) = a1;
            v7 = tmp_77 / v6;
            *((unsigned long long *)(a3 + v1 * 9600 + v0 * 8)) = v7;
            *((unsigned long long *)&v7) = v1;
            *((unsigned long long *)&v6) = v0 + 2;
            tmp_117 = v7 * v6;
            *((unsigned long long *)&v6) = a2;
            v8 = tmp_117 / v6;
            *((unsigned long long *)(a4 + v1 * 9600 + v0 * 8)) = v8;
            *((unsigned long long *)&v8) = v1;
            *((unsigned long long *)&v6) = v0 + 3;
            tmp_157 = v8 * v6;
            *((unsigned long long *)&v6) = a1;
            v9 = tmp_157 / v6;
            *((unsigned long long *)(a5 + v1 * 9600 + v0 * 8)) = (unsigned long long)v9;
        }
    }
    return v1;
}

int kernel_fdtd_2d(unsigned int a0, unsigned int a1, unsigned int a2, unsigned long a3, unsigned long long *a4, unsigned long a5, unsigned long long *v3)
{
    unsigned int v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x34]
    uint128_t v4;  // xmm1
    uint128_t v5;  // xmm0
    int v6;  // xmm2
    uint128_t v7;  // xmm1
    uint128_t v8;  // xmm0
    int v9;  // xmm2
    uint128_t v10;  // xmm1
    uint128_t v11;  // xmm0
    int v12;  // xmm2

    for (v2 = 0; v2 < a0; v2 += 1)
    {
        for (v0 = 0; v0 < a2; v0 += 1)
        {
            a4[v0] = v3[v2];
        }
        for (v1 = 1; v1 < a1; v1 += 1)
        {
            for (v0 = 0; v0 < a2; v0 += 1)
            {
                v4 = 0;
                *((unsigned long long *)&v4) = a4[1200 * v1 + v0];
                v5 = 0;
                *((unsigned long long *)&v5) = *((long long *)(a5 + v1 * 9600 + v0 * 8));
                v6 = 0;
                *((unsigned long long *)&v6) = 0xbfe0000000000000;
                xmm0lq<8> = Conv(128->64, (((xmm0<16> - Conv(64->128, Load(addr=((r9<8> + (Conv(32->s64, (Load(addr=stack_base-56, size=4, endness=Iend_LE) - 0x1<32>)) * 0x2580<64>)) + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) * xmm2<16>) + xmm1<16>))
                a4[1200 * v1 + v0] = v5;
            }
        }
        for (v1 = 0; v1 < a1; v1 += 1)
        {
            for (v0 = 1; v0 < a2; v0 += 1)
            {
                v7 = 0;
                *((unsigned long long *)&v7) = *((long long *)(a3 + v1 * 9600 + v0 * 8));
                v8 = 0;
                *((unsigned long long *)&v8) = *((long long *)(a5 + v1 * 9600 + v0 * 8));
                v9 = 0;
                *((unsigned long long *)&v9) = 0xbfe0000000000000;
                xmm0lq<8> = Conv(128->64, (((xmm0<16> - Conv(64->128, Load(addr=((r9<8> + (Conv(32->s64, Load(addr=stack_base-56, size=4, endness=Iend_LE)) * 0x2580<64>)) + (Conv(32->s64, (Load(addr=stack_base-60, size=4, endness=Iend_LE) - 0x1<32>)) * 0x8<64>)), size=8, endness=Iend_LE))) * xmm2<16>) + xmm1<16>))
                *((unsigned long long *)(a3 + v1 * 9600 + v0 * 8)) = v8;
            }
        }
        for (v1 = 0; v1 < a1 - 1; v1 += 1)
        {
            for (v0 = 0; v0 < a2 - 1; v0 += 1)
            {
                v10 = 0;
                *((unsigned long long *)&v10) = *((long long *)(a5 + v1 * 9600 + v0 * 8));
                v11 = 0;
                *((unsigned long long *)&v11) = *((long long *)(a3 + v1 * 9600 + (v0 + 1) * 8));
                v12 = 0;
                *((unsigned long long *)&v12) = 13827852295878370918;
                xmm0lq<8> = Conv(128->64, (((((xmm0<16> - Conv(64->128, Load(addr=((rcx<8> + (Conv(32->s64, Load(addr=stack_base-56, size=4, endness=Iend_LE)) * 0x2580<64>)) + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((r8<8> + (Conv(32->s64, (Load(addr=stack_base-56, size=4, endness=Iend_LE) + 0x1<32>)) * 0x2580<64>)) + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) - Conv(64->128, Load(addr=((r8<8> + (Conv(32->s64, Load(addr=stack_base-56, size=4, endness=Iend_LE)) * 0x2580<64>)) + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) * xmm2<16>) + xmm1<16>))
                *((unsigned long long *)(a5 + v1 * 9600 + v0 * 8)) = v11;
            }
        }
    }
    return;
}

extern char .L.str.3;
extern char .L.str.8;
extern char .L.str.9;
extern char got.stderr;

int print_array(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    unsigned int v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]
    unsigned long v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]

    v4 = a2;
    v3 = a3;
    v2 = a4;
    fprintf(*((long long *)got.stderr), "==BEGIN DUMP_ARRAYS==\n");
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
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
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
    fprintf(*((long long *)got.stderr), "==END   DUMP_ARRAYS==\n");
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.8);
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
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.8);
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.9);
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
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.9);
    return;
}

