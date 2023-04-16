int kernel_trisolv(unsigned int a0, unsigned long a1, unsigned long long *a2, unsigned long long *a3)
{
    unsigned int v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]
    uint128_t v3;  // xmm2
    uint128_t v4;  // xmm1
    uint128_t v5;  // xmm0

    for (v1 = 0; v1 < a0; v1 += 1)
    {
        a2[v1] = a3[v1];
        for (v0 = 0; v0 < v1; v0 += 1)
        {
            v3 = 0;
            *((unsigned long long *)&v3) = a2[v0];
            v4 = 0;
            *((unsigned long long *)&v4) = a2[v1];
            STORE(addr=(rdx<8> + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x8<64>)), data=Conv(128->64, ((Conv(64->128, (Load(addr=((rsi<8> + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-48, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm2<16>) + xmm1<16>)), size=8, endness=Iend_LE, guard=None)
        }
        v5 = 0;
        *((unsigned long long *)&v5) = a2[v1];
        xmm0lq<8> = Conv(128->64, (xmm0<16> / Conv(64->128, Load(addr=((rsi<8> + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
        a2[v1] = v5;
    }
    return;
}

extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x38]
    void* v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x1c]
    unsigned int v4;  // [bp-0xc]
    void* v8;  // rdi
    void* v9;  // rdi

    v4 = a0;
    v3 = 2000;
    v2 = polybench_alloc_data(0x3d0900, 0x8);
    v1 = polybench_alloc_data(0x7d0, 0x8);
    v0 = polybench_alloc_data(0x7d0, 0x8);
    init_array(v3, v2, v1, v0);
    kernel_trisolv(v3, v2, v1, v0);
    if (v4 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v3, v1);
            free(v2);
            v8 = v1;
            free(rdi<8>);
            v9 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v2);
        v8 = v1;
        free(rdi<8>);
        v9 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v2);
    v8 = v1;
    free(rdi<8>);
    v9 = v0;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned long a1, unsigned long long *a2, unsigned long long *a3)
{
    unsigned int v0;  // [bp-0x30]
    int tmp_58;  // tmp #58
    unsigned int v1;  // [bp-0x2c]
    uint128_t v3;  // xmm0
    int v4;  // xmm1

    for (v1 = 0; v1 < a0; v1 += 1)
    {
        v3 = 0;
        a2[v1] = 0xc08f380000000000;
        a3[v1] = v1;
        for (v0 = 0; v0 <= v1; v0 += 1)
        {
            *((unsigned long long *)&v3) = v1 + a0 - v0 + 1;
            v4 = 0;
            *((unsigned long long *)&v4) = 0x4000000000000000;
            tmp_58 = v3 * v4;
            *((unsigned long long *)&v4) = a0;
            v3 = tmp_58 / v4;
            *((unsigned long long *)(a1 + v1 * 16000 + v0 * 8)) = v3;
        }
    }
    return;
}

