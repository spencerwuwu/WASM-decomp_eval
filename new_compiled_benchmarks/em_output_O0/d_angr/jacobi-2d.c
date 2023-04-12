extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x30]
    void* v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]
    unsigned int v4;  // [bp-0xc]
    void* v7;  // rdi

    v4 = a0;
    v3 = 1300;
    v2 = 500;
    v1 = polybench_alloc_data(0x19c990, 0x8);
    v0 = polybench_alloc_data(0x19c990, 0x8);
    init_array(v3, v1, v0);
    kernel_jacobi_2d(v2, v3, v1, v0);
    if (v4 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v3, v1);
            free(v1);
            v7 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v1);
        v7 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v1);
    v7 = v0;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned long a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0x28]
    int tmp_60;  // tmp #60
    int tmp_64;  // tmp #64
    int tmp_104;  // tmp #104
    int tmp_108;  // tmp #108
    unsigned int v1;  // [bp-0x24]
    unsigned long long v3;  // xmm0lq
    unsigned long long v4;  // xmm1lq
    int v7;  // xmm1
    uint128_t v8;  // xmm0
    int v9;  // xmm1
    int v10;  // xmm0

    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 < a0; v0 += 1)
        {
            v3 = v1;
            v4 = v0 + 2;
            tmp_60 = xmm0<16> * xmm1<16>;
            v7 = 0;
            *((unsigned long long *)&v7) = 0x4000000000000000;
            tmp_64 = tmp_60 + v7;
            *((unsigned long long *)&v7) = a0;
            v8 = tmp_64 / v7;
            *((unsigned long long *)(a1 + v1 * 10400 + v0 * 8)) = v8;
            *((unsigned long long *)&v8) = v1;
            *((unsigned long long *)&v7) = v0 + 3;
            tmp_104 = v8 * v7;
            v9 = 0;
            *((unsigned long long *)&v9) = 0x4008000000000000;
            tmp_108 = tmp_104 + v9;
            *((unsigned long long *)&v9) = a0;
            v10 = tmp_108 / v9;
            *((unsigned long long *)(a2 + v1 * 10400 + v0 * 8)) = (unsigned long long)v10;
        }
    }
    return;
}

int kernel_jacobi_2d(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long a3)
{
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    uint128_t v4;  // xmm1
    uint128_t v5;  // xmm1
    int v6;  // xmm0
    uint128_t v7;  // xmm1
    uint128_t v8;  // xmm1
    int v9;  // xmm0

    for (v2 = 0; v2 < a0; v2 += 1)
    {
        for (v1 = 1; v1 < a1 - 1; v1 += 1)
        {
            for (v0 = 1; v0 < a1 - 1; v0 += 1)
            {
                v4 = 0;
                *((unsigned long long *)&v4) = *((long long *)(a2 + v1 * 10400 + v0 * 8));
                xmm1<16> = ((((xmm1<16> + Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, Load(addr=stack_base-40, size=4, endness=Iend_LE)) * 0x28a0<64>)) + (Conv(32->s64, (Load(addr=stack_base-44, size=4, endness=Iend_LE) - 0x1<32>)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, Load(addr=stack_base-40, size=4, endness=Iend_LE)) * 0x28a0<64>)) + (Conv(32->s64, (Load(addr=stack_base-44, size=4, endness=Iend_LE) + 0x1<32>)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, (Load(addr=stack_base-40, size=4, endness=Iend_LE) + 0x1<32>)) * 0x28a0<64>)) + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, (Load(addr=stack_base-40, size=4, endness=Iend_LE) - 0x1<32>)) * 0x28a0<64>)) + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE)))
                v6 = 0;
                *((unsigned long long *)&v6) = 4596373779694328218;
                *((unsigned long long *)&v6) = (unsigned long long)(v6 * v5);
                *((unsigned long long *)(a3 + v1 * 10400 + v0 * 8)) = (unsigned long long)v6;
            }
        }
        for (v1 = 1; v1 < a1 - 1; v1 += 1)
        {
            for (v0 = 1; v0 < a1 - 1; v0 += 1)
            {
                v7 = 0;
                *((unsigned long long *)&v7) = *((long long *)(a3 + v1 * 10400 + v0 * 8));
                xmm1<16> = ((((xmm1<16> + Conv(64->128, Load(addr=((rcx<8> + (Conv(32->s64, Load(addr=stack_base-40, size=4, endness=Iend_LE)) * 0x28a0<64>)) + (Conv(32->s64, (Load(addr=stack_base-44, size=4, endness=Iend_LE) - 0x1<32>)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rcx<8> + (Conv(32->s64, Load(addr=stack_base-40, size=4, endness=Iend_LE)) * 0x28a0<64>)) + (Conv(32->s64, (Load(addr=stack_base-44, size=4, endness=Iend_LE) + 0x1<32>)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rcx<8> + (Conv(32->s64, (Load(addr=stack_base-40, size=4, endness=Iend_LE) + 0x1<32>)) * 0x28a0<64>)) + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rcx<8> + (Conv(32->s64, (Load(addr=stack_base-40, size=4, endness=Iend_LE) - 0x1<32>)) * 0x28a0<64>)) + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE)))
                v9 = 0;
                *((unsigned long long *)&v9) = 4596373779694328218;
                *((unsigned long long *)&v9) = (unsigned long long)(v9 * v8);
                *((unsigned long long *)(a2 + v1 * 10400 + v0 * 8)) = (unsigned long long)v9;
            }
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

