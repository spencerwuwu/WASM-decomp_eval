int kernel_syr2k(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    unsigned int v0;  // [bp-0x44]
    unsigned int v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    uint128_t v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // xmm0lq
    uint128_t v7;  // xmm1lq
    uint128_t v8;  // xmm0
    uint128_t v9;  // xmm0
    uint128_t v10;  // xmm2
    uint128_t v11;  // xmm1
    uint128_t v12;  // xmm1

    v4 = v6;
    v3 = v7;
    for (v2 = 0; v2 < a0; v2 += 1)
    {
        for (v1 = 0; v1 <= v2; v1 += 1)
        {
            v8 = 0;
            *((unsigned long long *)&v8) = v3;
            xmm0lq<8> = Conv(128->64, (xmm0<16> * Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x2580<64>)) + (Conv(32->s64, Load(addr=stack_base-64, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
            *((unsigned long long *)(a2 + v2 * 9600 + v1 * 8)) = v8;
        }
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            for (v1 = 0; v1 <= v2; v1 += 1)
            {
                v9 = 0;
                *((unsigned long long *)&v9) = *((long long *)(a3 + v1 * 8000 + v0 * 8));
                v10 = 0;
                *((unsigned long long *)&v10) = *((long long *)(a4 + v2 * 8000 + v0 * 8));
                v11 = 0;
                *((unsigned long long *)&v11) = *((long long *)(a4 + v1 * 8000 + v0 * 8));
                xmm1<16> = ((xmm1<16> * Conv(64->128, Load(addr=stack_base-24, size=8, endness=Iend_LE))) * Conv(64->128, Load(addr=((rcx<8> + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x1f40<64>)) + (Conv(32->s64, Load(addr=stack_base-68, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE)))
                xmm0lq<8> = Conv(128->64, ((((xmm0<16> * Conv(64->128, Load(addr=stack_base-24, size=8, endness=Iend_LE))) * xmm2<16>) + xmm1<16>) + Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x2580<64>)) + (Conv(32->s64, Load(addr=stack_base-64, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)(a2 + v2 * 9600 + v1 * 8)) = v9;
            }
        }
    }
    return;
}

extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40]
    unsigned long v3;  // [bp-0x38]
    char v4;  // [bp-0x30]
    char v5;  // [bp-0x28]
    unsigned int v6;  // [bp-0x20]
    unsigned int v7;  // [bp-0x1c]
    unsigned int v8;  // [bp-0xc]
    void* v12;  // rdi
    void* v13;  // rdi

    v8 = a0;
    v7 = 1200;
    v6 = 1000;
    v3 = polybench_alloc_data(0x15f900, 0x8);
    v2 = polybench_alloc_data(0x124f80, 0x8);
    v1 = polybench_alloc_data(0x124f80, 0x8);
    v0 = v1;
    init_array(v7, v6, &v5, &v4, v3, v2, v0);
    kernel_syr2k(v7, v6, v3, v2, v1);
    if (v8 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v7, v3);
            free(v3);
            v12 = v2;
            free(rdi<8>);
            v13 = v1;
            free(rdi<8>);
            return 0;
        }
        free(v3);
        v12 = v2;
        free(rdi<8>);
        v13 = v1;
        free(rdi<8>);
        return 0;
    }
    free(v3);
    v12 = v2;
    free(rdi<8>);
    v13 = v1;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned int a1, unsigned long long *a2, unsigned long long *a3, unsigned long a4, unsigned long a5, unsigned long v3)
{
    unsigned int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0xc]
    unsigned long v4;  // rdi
    unsigned long long v5;  // xmm1lq
    uint128_t v6;  // xmm1

    v2 = v4;
    *(a2) = 0x3ff8000000000000;
    *(a3) = 4608083138725491507;
    for (v1 = 0; v1 < v2; v1 += 1)
    {
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            v5 = v2;
            *((unsigned long long *)(a5 + v1 * 8000 + v0 * 8)) = ((v0 * v1 + 1 >> 31 CONCAT v0 * v1 + 1) /m v2 >> 32) / xmm1<16>;
            *((unsigned long long *)&v6) = a1;
            *((unsigned long long *)(v3 + v1 * 8000 + v0 * 8)) = ((v0 * v1 + 2 >> 31 CONCAT v0 * v1 + 2) /m a1 >> 32) / v6;
        }
    }
    for (v1 = 0; v1 < v2; v1 += 1)
    {
        for (v0 = 0; v0 < v2; v0 += 1)
        {
            *((unsigned long long *)&v6) = a1;
            *((unsigned long long *)(a4 + v1 * 9600 + v0 * 8)) = ((v0 * v1 + 3 >> 31 CONCAT v0 * v1 + 3) /m v2 >> 32) / v6;
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

