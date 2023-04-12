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
    v3 = 2000;
    v2 = 500;
    v1 = polybench_alloc_data(0x7d0, 0x8);
    v0 = polybench_alloc_data(0x7d0, 0x8);
    init_array(v3, v1, v0);
    kernel_jacobi_1d(v2, v3, v1, v0);
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

int init_array(unsigned int a0, unsigned long long *a1, unsigned long long *a2)
{
    unsigned int v0;  // [bp-0x24]
    int tmp_25;  // tmp #25
    int tmp_50;  // tmp #50
    unsigned long long v2;  // xmm0lq
    int v3;  // xmm1
    uint128_t v5;  // xmm0
    int v6;  // xmm1
    int v7;  // xmm0

    for (v0 = 0; v0 < a0; v0 += 1)
    {
        v2 = v0;
        v3 = 0;
        *((unsigned long long *)&v3) = 0x4000000000000000;
        tmp_25 = xmm0<16> + v3;
        *((unsigned long long *)&v3) = a0;
        v5 = tmp_25 / v3;
        a1[v0] = v5;
        *((unsigned long long *)&v5) = v0;
        v6 = 0;
        *((unsigned long long *)&v6) = 0x4008000000000000;
        tmp_50 = v5 + v6;
        *((unsigned long long *)&v6) = a0;
        v7 = tmp_50 / v6;
        a2[v0] = (unsigned long long)v7;
    }
    return;
}

int kernel_jacobi_1d(unsigned int a0, unsigned int a1, unsigned long long *a2, unsigned long long *a3)
{
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    uint128_t v3;  // xmm1
    uint128_t v4;  // xmm1
    int v5;  // xmm0
    uint128_t v6;  // xmm1
    uint128_t v7;  // xmm1
    int v8;  // xmm0

    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 1; v0 < a1 - 1; v0 += 1)
        {
            v3 = 0;
            *((unsigned long long *)&v3) = a2[v0 - 1];
            xmm1<16> = ((xmm1<16> + Conv(64->128, Load(addr=(rdx<8> + (Conv(32->s64, Load(addr=stack_base-40, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(rdx<8> + (Conv(32->s64, (Load(addr=stack_base-40, size=4, endness=Iend_LE) + 0x1<32>)) * 0x8<64>)), size=8, endness=Iend_LE)))
            v5 = 0;
            *((unsigned long long *)&v5) = 4599676359373071550;
            *((unsigned long long *)&v5) = (unsigned long long)(v5 * v4);
            a3[v0] = (unsigned long long)v5;
        }
        for (v0 = 1; v0 < a1 - 1; v0 += 1)
        {
            v6 = 0;
            *((unsigned long long *)&v6) = a3[v0 - 1];
            xmm1<16> = ((xmm1<16> + Conv(64->128, Load(addr=(rcx<8> + (Conv(32->s64, Load(addr=stack_base-40, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(rcx<8> + (Conv(32->s64, (Load(addr=stack_base-40, size=4, endness=Iend_LE) + 0x1<32>)) * 0x8<64>)), size=8, endness=Iend_LE)))
            v8 = 0;
            *((unsigned long long *)&v8) = 4599676359373071550;
            *((unsigned long long *)&v8) = (unsigned long long)(v8 * v7);
            a2[v0] = (unsigned long long)v8;
        }
    }
    return;
}

