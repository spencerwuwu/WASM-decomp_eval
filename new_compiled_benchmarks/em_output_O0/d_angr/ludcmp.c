int kernel_ludcmp(unsigned int a0, unsigned long a1, unsigned long long *a2, unsigned long long *a3, unsigned long long *a4)
{
    uint128_t v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x3c]
    unsigned int v2;  // [bp-0x38]
    unsigned int v3;  // [bp-0x34]
    uint128_t v5;  // xmm2
    uint128_t v6;  // xmm1
    uint128_t v7;  // xmm0
    uint128_t v8;  // xmm2
    uint128_t v9;  // xmm1
    uint128_t v10;  // xmm2
    uint128_t v11;  // xmm1
    uint128_t v12;  // xmm2
    uint128_t v13;  // xmm1
    uint128_t v14;  // xmm0

    for (v3 = 0; v3 < a0; v3 += 1)
    {
        for (v2 = 0; v2 < v3; v2 += 1)
        {
            *((long long *)&v0) = *((long long *)(a1 + v3 * 16000 + v2 * 8));
            for (v1 = 0; v1 < v2; v1 += 1)
            {
                v5 = 0;
                *((unsigned long long *)&v5) = *((long long *)(a1 + v1 * 16000 + v2 * 8));
                v6 = 0;
                *((unsigned long long *)&v6) = v0;
                s_48 =L Conv(128->64, ((Conv(64->128, (Load(addr=((rsi<8> + (Conv(32->s64, Load(addr=stack_base-52, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm2<16>) + xmm1<16>))<8>
            }
            v7 = 0;
            *((unsigned long long *)&v7) = v0;
            xmm0lq<8> = Conv(128->64, (xmm0<16> / Conv(64->128, Load(addr=((rsi<8> + (Conv(32->s64, Load(addr=stack_base-56, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-56, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
            *((unsigned long long *)(a1 + v3 * 16000 + v2 * 8)) = v7;
        }
        for (v2 = v3; v2 < a0; v2 += 1)
        {
            *((long long *)&v0) = *((long long *)(a1 + v3 * 16000 + v2 * 8));
            for (v1 = 0; v1 < v3; v1 += 1)
            {
                v8 = 0;
                *((unsigned long long *)&v8) = *((long long *)(a1 + v1 * 16000 + v2 * 8));
                v9 = 0;
                *((unsigned long long *)&v9) = v0;
                s_48 =L Conv(128->64, ((Conv(64->128, (Load(addr=((rsi<8> + (Conv(32->s64, Load(addr=stack_base-52, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm2<16>) + xmm1<16>))<8>
            }
            *((long long *)(a1 + v3 * 16000 + v2 * 8)) = v0;
        }
    }
    for (v3 = 0; v3 < a0; v3 += 1)
    {
        *((unsigned long long *)&v0) = a2[v3];
        for (v2 = 0; v2 < v3; v2 += 1)
        {
            v10 = 0;
            *((unsigned long long *)&v10) = a4[v2];
            v11 = 0;
            *((unsigned long long *)&v11) = v0;
            s_48 =L Conv(128->64, ((Conv(64->128, (Load(addr=((rsi<8> + (Conv(32->s64, Load(addr=stack_base-52, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-56, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm2<16>) + xmm1<16>))<8>
        }
        a4[v3] = v0;
    }
    for (v3 = a0 - 1; v3 >= 0; v3 -= 1)
    {
        *((unsigned long long *)&v0) = a4[v3];
        for (v2 = v3 + 1; v2 < a0; v2 += 1)
        {
            v12 = 0;
            *((unsigned long long *)&v12) = a3[v2];
            v13 = 0;
            *((unsigned long long *)&v13) = v0;
            s_48 =L Conv(128->64, ((Conv(64->128, (Load(addr=((rsi<8> + (Conv(32->s64, Load(addr=stack_base-52, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-56, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm2<16>) + xmm1<16>))<8>
        }
        v14 = 0;
        *((unsigned long long *)&v14) = v0;
        xmm0lq<8> = Conv(128->64, (xmm0<16> / Conv(64->128, Load(addr=((rsi<8> + (Conv(32->s64, Load(addr=stack_base-52, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-52, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
        a3[v3] = v14;
    }
    return;
}

extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x40]
    void* v1;  // [bp-0x38]
    void* v2;  // [bp-0x30]
    unsigned long v3;  // [bp-0x28]
    unsigned int v4;  // [bp-0x1c]
    unsigned int v5;  // [bp-0xc]
    void* v9;  // rdi
    void* v10;  // rdi
    void* v11;  // rdi

    v5 = a0;
    v4 = 2000;
    v3 = polybench_alloc_data(0x3d0900, 0x8);
    v2 = polybench_alloc_data(0x7d0, 0x8);
    v1 = polybench_alloc_data(0x7d0, 0x8);
    v0 = polybench_alloc_data(0x7d0, 0x8);
    init_array(v4, v3, v2, v1, v0);
    kernel_ludcmp(v4, v3, v2, v1, v0);
    if (v5 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v4, v1);
            free(v3);
            v9 = v2;
            free(rdi<8>);
            v10 = v1;
            free(rdi<8>);
            v11 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v3);
        v9 = v2;
        free(rdi<8>);
        v10 = v1;
        free(rdi<8>);
        v11 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v3);
    v9 = v2;
    free(rdi<8>);
    v10 = v1;
    free(rdi<8>);
    v11 = v0;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned long a1, unsigned long long *a2, unsigned long long *a3, unsigned long long *a4)
{
    int tmp_72;  // tmp #72
    int tmp_66;  // tmp #66
    void* v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x4c]
    unsigned int v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x44]
    unsigned long v4;  // [bp-0x40]
    unsigned int v5;  // [bp-0x38]
    unsigned int v6;  // [bp-0x34]
    unsigned int v7;  // [bp-0xc]
    uint128_t v9;  // xmm0
    int v10;  // xmm1
    int v11;  // xmm1
    uint128_t v12;  // xmm0
    uint128_t v13;  // xmm2
    uint128_t v14;  // xmm1

    v7 = a0;
    v4 = a0;
    for (v6 = 0; v6 < a0; v6 += 1)
    {
        a3[v6] = 0;
        v9 = 0;
        a4[v6] = 0;
        *((unsigned long long *)&v9) = v6 + 1;
        v10 = 0;
        *((unsigned long long *)&v10) = 0x4000000000000000;
        t72 = ((xmm0<16> / Conv(32->128, edi<4>)) / xmm1<16>)
        v11 = 0;
        *((unsigned long long *)&v11) = 0x4010000000000000;
        *((unsigned long long *)&v9) = (unsigned long long)(tmp_72 + v11);
        a2[v6] = v9;
    }
    for (v6 = 0; v6 < a0; v6 += 1)
    {
        for (v5 = 0; v5 <= v6; v5 += 1)
        {
            *((unsigned long long *)&v11) = a0;
            tmp_66 = ((0 - v5 >> 31 CONCAT 0 - v5) /m a0 >> 32) / v11;
            v11 = 0;
            *((unsigned long long *)&v11) = 0x3ff0000000000000;
            *((unsigned long long *)&v9) = (unsigned long long)(tmp_66 + v11);
            *((unsigned long long *)(a1 + v6 * 16000 + v5 * 8)) = v9;
        }
        for (v5 = v6 + 1; v5 < a0; v5 += 1)
        {
            *((long long *)(a1 + v6 * 16000 + v5 * 8)) = 0;
        }
        *((long long *)(a1 + v6 * 16000 + v6 * 8)) = 0x3ff0000000000000;
    }
    v0 = polybench_alloc_data(0x3d0900, 0x8);
    for (v3 = 0; v3 < a0; v3 += 1)
    {
        for (v2 = 0; v2 < a0; v2 += 1)
        {
            *((long long *)&((char *)v0)[16000 * v3 + 8 * v2]) = 0;
        }
    }
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v3 = 0; v3 < a0; v3 += 1)
        {
            for (v2 = 0; v2 < a0; v2 += 1)
            {
                v12 = 0;
                *((unsigned long long *)&v12) = *((long long *)(a1 + v3 * 16000 + v1 * 8));
                v13 = 0;
                *((unsigned long long *)&v13) = *((long long *)(a1 + v2 * 16000 + v1 * 8));
                v14 = 0;
                *((unsigned long long *)&v14) = *((long long *)&((char *)v0)[16000 * v3 + 8 * v2]);
                *((unsigned long long *)&v12) = v12 * v13 + v14;
                *((unsigned long long *)&((char *)v0)[16000 * v3 + 8 * v2]) = v12;
            }
        }
    }
    for (v3 = 0; v3 < a0; v3 += 1)
    {
        for (v2 = 0; v2 < a0; v2 += 1)
        {
            *((long long *)(a1 + v3 * 16000 + v2 * 8)) = *((long long *)&((char *)v0)[16000 * v3 + 8 * v2]);
        }
    }
    free(v0);
    return;
}

