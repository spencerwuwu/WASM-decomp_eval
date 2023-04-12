extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    unsigned long long v0;  // [bp-0x58]
    void* v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    void* v3;  // [bp-0x38]
    char v4;  // [bp-0x30]
    char v5;  // [bp-0x28]
    unsigned int v6;  // [bp-0x20]
    unsigned int v7;  // [bp-0x1c]
    unsigned int v8;  // [bp-0xc]
    void* v11;  // rdi
    void* v12;  // rdi

    v8 = a0;
    v7 = 1000;
    v6 = 1200;
    v3 = polybench_alloc_data(0x124f80, 0x8);
    v2 = polybench_alloc_data(0xf4240, 0x8);
    v1 = polybench_alloc_data(0x124f80, 0x8);
    v0 = v1;
    init_array(v7, v6, &v5, &v4, v3, v2, v0);
    kernel_symm(v7, v6, v3, v2, v1);
    if (v8 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v7, v6, v3);
            free(v3);
            v11 = v2;
            free(rdi<8>);
            v12 = v1;
            free(rdi<8>);
            return 0;
        }
        free(v3);
        v11 = v2;
        free(rdi<8>);
        v12 = v1;
        free(rdi<8>);
        return 0;
    }
    free(v3);
    v11 = v2;
    free(rdi<8>);
    v12 = v1;
    free(rdi<8>);
    return 0;
}

int kernel_symm(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    void* v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    unsigned int v3;  // [bp-0x3c]
    uint128_t v4;  // [bp-0x20]
    uint128_t v5;  // [bp-0x18]
    uint128_t v7;  // xmm0lq
    uint128_t v8;  // xmm1lq
    uint128_t v9;  // xmm0
    uint128_t v10;  // xmm2
    uint128_t v11;  // xmm1
    uint128_t v12;  // xmm0
    uint128_t v13;  // xmm2
    int v14;  // xmm1
    uint128_t v15;  // xmm1
    uint128_t v16;  // xmm2
    uint128_t v17;  // xmm0
    uint128_t v18;  // xmm1
    uint128_t v19;  // xmm0
    int v20;  // xmm2

    v5 = v7;
    v4 = v8;
    for (v3 = 0; v3 < a0; v3 += 1)
    {
        for (v2 = 0; v2 < a1; v2 += 1)
        {
            v0 = 0;
            for (v1 = 0; v1 < v3; v1 += 1)
            {
                v9 = 0;
                *((unsigned long long *)&v9) = v5;
                v10 = 0;
                *((unsigned long long *)&v10) = *((long long *)(a3 + v3 * 8000 + v1 * 8));
                v11 = 0;
                *((unsigned long long *)&v11) = *((long long *)(a2 + v1 * 9600 + v2 * 8));
                xmm0lq<8> = Conv(128->64, (((xmm0<16> * Conv(64->128, Load(addr=((r8<8> + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x2580<64>)) + (Conv(32->s64, Load(addr=stack_base-64, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) * xmm2<16>) + xmm1<16>))
                *((unsigned long long *)(a2 + v1 * 9600 + v2 * 8)) = v9;
                v12 = 0;
                *((unsigned long long *)&v12) = *((long long *)(a4 + v1 * 9600 + v2 * 8));
                v13 = 0;
                *((unsigned long long *)&v13) = *((long long *)(a3 + v3 * 8000 + v1 * 8));
                v14 = 0;
                *((unsigned long long *)&v14) = v0;
                *((unsigned long long *)&v12) = (unsigned long long)(v12 * v13 + v14);
                v0 = (unsigned long long)v12;
            }
            v15 = 0;
            *((unsigned long long *)&v15) = v4;
            v16 = 0;
            *((unsigned long long *)&v16) = *((long long *)(a2 + v3 * 9600 + v2 * 8));
            v17 = 0;
            *((unsigned long long *)&v17) = v5;
            xmm1<16> = ((xmm1<16> * xmm2<16>) + ((xmm0<16> * Conv(64->128, Load(addr=((r8<8> + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x2580<64>)) + (Conv(32->s64, Load(addr=stack_base-64, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) * Conv(64->128, Load(addr=((rcx<8> + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x1f40<64>)) + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
            v19 = 0;
            *((unsigned long long *)&v19) = v5;
            v20 = 0;
            *((unsigned long long *)&v20) = v0;
            *((unsigned long long *)&v19) = (unsigned long long)(v19 * v20 + v18);
            *((unsigned long long *)(a2 + v3 * 9600 + v2 * 8)) = v19;
        }
    }
    return;
}

extern char .L.str.3;
extern char got.stderr;

int print_array(unsigned int a0, unsigned int a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned long v2;  // [bp-0x18]

    v2 = a2;
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
    return;
}

