int kernel_seidel_2d(unsigned int a0, unsigned int a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    uint128_t v4;  // xmm0
    int v5;  // xmm1

    for (v2 = 0; v2 <= a0 - 1; v2 += 1)
    {
        for (v1 = 1; v1 <= a1 - 2; v1 += 1)
        {
            for (v0 = 1; v0 <= a1 - 2; v0 += 1)
            {
                v4 = 0;
                *((unsigned long long *)&v4) = *((long long *)(a2 + (v1 - 1) * 16000 + (v0 - 1) * 8));
                v5 = 0;
                *((unsigned long long *)&v5) = 0x4022000000000000;
                xmm0lq<8> = Conv(128->64, (((((((((xmm0<16> + Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, (Load(addr=stack_base-32, size=4, endness=Iend_LE) - 0x1<32>)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-36, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, (Load(addr=stack_base-32, size=4, endness=Iend_LE) - 0x1<32>)) * 0x3e80<64>)) + (Conv(32->s64, (Load(addr=stack_base-36, size=4, endness=Iend_LE) + 0x1<32>)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, Load(addr=stack_base-32, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, (Load(addr=stack_base-36, size=4, endness=Iend_LE) - 0x1<32>)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, Load(addr=stack_base-32, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-36, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, Load(addr=stack_base-32, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, (Load(addr=stack_base-36, size=4, endness=Iend_LE) + 0x1<32>)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, (Load(addr=stack_base-32, size=4, endness=Iend_LE) + 0x1<32>)) * 0x3e80<64>)) + (Conv(32->s64, (Load(addr=stack_base-36, size=4, endness=Iend_LE) - 0x1<32>)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, (Load(addr=stack_base-32, size=4, endness=Iend_LE) + 0x1<32>)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-36, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, (Load(addr=stack_base-32, size=4, endness=Iend_LE) + 0x1<32>)) * 0x3e80<64>)) + (Conv(32->s64, (Load(addr=stack_base-36, size=4, endness=Iend_LE) + 0x1<32>)) * 0x8<64>)), size=8, endness=Iend_LE))) / xmm1<16>))
                *((unsigned long long *)(a2 + v1 * 16000 + v0 * 8)) = v4;
            }
        }
    }
    return;
}

extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    unsigned long v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    v2 = 2000;
    v1 = 500;
    v0 = polybench_alloc_data(0x3d0900, 0x8);
    init_array(v2, v0);
    kernel_seidel_2d(v1, v2, v0);
    if (a0 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v2, v0);
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
    unsigned int v0;  // [bp-0x20]
    int tmp_40;  // tmp #40
    int tmp_44;  // tmp #44
    unsigned int v1;  // [bp-0x1c]
    unsigned long long v3;  // xmm0lq
    unsigned long long v4;  // xmm1lq
    int v7;  // xmm1
    int v8;  // xmm0

    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 < a0; v0 += 1)
        {
            v3 = v1;
            v4 = v0 + 2;
            tmp_40 = xmm0<16> * xmm1<16>;
            v7 = 0;
            *((unsigned long long *)&v7) = 0x4000000000000000;
            tmp_44 = tmp_40 + v7;
            *((unsigned long long *)&v7) = a0;
            v8 = tmp_44 / v7;
            *((unsigned long long *)(a1 + v1 * 16000 + v0 * 8)) = (unsigned long long)v8;
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

