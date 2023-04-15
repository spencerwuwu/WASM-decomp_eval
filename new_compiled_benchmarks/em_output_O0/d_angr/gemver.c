int kernel_gemver(unsigned int a0, unsigned long a1, unsigned long long *a2, unsigned long long *a3, unsigned long long *a4, unsigned long long *a5, unsigned long long *v4, unsigned long long *a6, unsigned long long *a7, unsigned long long *a8)
{
    unsigned int v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x4c]
    uint128_t v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]
    uint128_t v5;  // xmm0lq
    uint128_t v6;  // xmm1lq
    uint128_t v7;  // xmm0
    uint128_t v8;  // xmm1
    uint128_t v9;  // xmm2
    uint128_t v10;  // xmm1
    uint128_t v11;  // xmm0
    uint128_t v12;  // xmm2
    uint128_t v13;  // xmm1
    uint128_t v14;  // xmm0
    uint128_t v15;  // xmm2
    uint128_t v16;  // xmm0
    uint128_t v17;  // xmm1
    uint128_t v18;  // xmm0
    uint128_t v19;  // xmm2

    v3 = v5;
    v2 = v6;
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 < a0; v0 += 1)
        {
            v7 = 0;
            *((unsigned long long *)&v7) = *((long long *)(a1 + v1 * 16000 + v0 * 8));
            v8 = 0;
            *((unsigned long long *)&v8) = a2[v1];
            v9 = 0;
            *((unsigned long long *)&v9) = a3[v0];
            v10 = v8 * v9 + v7;
            v11 = 0;
            *((unsigned long long *)&v11) = a4[v1];
            v12 = 0;
            *((unsigned long long *)&v12) = a5[v0];
            *((unsigned long long *)&v11) = v11 * v12 + v10;
            *((unsigned long long *)(a1 + v1 * 16000 + v0 * 8)) = v11;
        }
    }
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 < a0; v0 += 1)
        {
            v13 = 0;
            *((unsigned long long *)&v13) = a6[v1];
            v14 = 0;
            *((unsigned long long *)&v14) = v2;
            v15 = 0;
            *((unsigned long long *)&v15) = a7[v0];
            xmm0lq<8> = Conv(128->64, (((xmm0<16> * Conv(64->128, Load(addr=((rsi<8> + (Conv(32->s64, Load(addr=stack_base-80, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-76, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) * xmm2<16>) + xmm1<16>))
            a6[v1] = v14;
        }
    }
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        v16 = 0;
        *((unsigned long long *)&v16) = a6[v1];
        xmm0lq<8> = Conv(128->64, (xmm0<16> + Conv(64->128, Load(addr=(Load(addr=stack_base+32, size=8, endness=Iend_LE) + (Conv(32->s64, Load(addr=stack_base-76, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
        a6[v1] = v16;
    }
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 < a0; v0 += 1)
        {
            v17 = 0;
            *((unsigned long long *)&v17) = v4[v1];
            v18 = 0;
            *((unsigned long long *)&v18) = v3;
            v19 = 0;
            *((unsigned long long *)&v19) = a6[v0];
            xmm0lq<8> = Conv(128->64, (((xmm0<16> * Conv(64->128, Load(addr=((rsi<8> + (Conv(32->s64, Load(addr=stack_base-76, size=4, endness=Iend_LE)) * 0x3e80<64>)) + (Conv(32->s64, Load(addr=stack_base-80, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))) * xmm2<16>) + xmm1<16>))
            v4[v1] = v18;
        }
    }
    return;
}

extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    unsigned long long *v0;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long *v1;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xb8], Other Possible Types: unsigned long long *
    unsigned long long v3;  // [bp-0xb0], Other Possible Types: unsigned long long *
    unsigned long long v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0xa0]
    void* v6;  // [bp-0x90]
    void* v7;  // [bp-0x88]
    void* v8;  // [bp-0x80]
    void* v9;  // [bp-0x78]
    void* v10;  // [bp-0x70]
    void* v11;  // [bp-0x68]
    void* v12;  // [bp-0x60]
    void* v13;  // [bp-0x58]
    unsigned long v14;  // [bp-0x50]
    char v15;  // [bp-0x48]
    char v16;  // [bp-0x40]
    unsigned int v17;  // [bp-0x34]
    unsigned int v18;  // [bp-0x24]
    void* v23;  // rdi
    void* v24;  // rdi
    void* v25;  // rdi
    void* v26;  // rdi
    void* v27;  // rdi
    void* v28;  // rdi
    void* v29;  // rdi
    void* v30;  // rdi

    v18 = a0;
    v17 = 2000;
    v14 = polybench_alloc_data(0x3d0900, 0x8);
    v13 = polybench_alloc_data(0x7d0, 0x8);
    v12 = polybench_alloc_data(0x7d0, 0x8);
    v11 = polybench_alloc_data(0x7d0, 0x8);
    v10 = polybench_alloc_data(0x7d0, 0x8);
    v9 = polybench_alloc_data(0x7d0, 0x8);
    v8 = polybench_alloc_data(0x7d0, 0x8);
    v7 = polybench_alloc_data(0x7d0, 0x8);
    v6 = polybench_alloc_data(0x7d0, 0x8);
    v0 = v11;
    v1 = v10;
    v2 = v9;
    v3 = v8;
    v4 = v7;
    v5 = v6;
    init_array(v17, &v16, &v15, v14, v13, v12, v0, v1, v2, v3, v4, v5);
    v0 = v9;
    v1 = v8;
    v2 = v7;
    v3 = v6;
    kernel_gemver(v17, v14, v13, v12, v11, v10, v0, v1, v2, v3);
    if (v18 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v17, v9);
            free(v14);
            v23 = v13;
            free(rdi<8>);
            v24 = v12;
            free(rdi<8>);
            v25 = v11;
            free(rdi<8>);
            v26 = v10;
            free(rdi<8>);
            v27 = v9;
            free(rdi<8>);
            v28 = v8;
            free(rdi<8>);
            v29 = v7;
            free(rdi<8>);
            v30 = v6;
            free(rdi<8>);
            return 0;
        }
        free(v14);
        v23 = v13;
        free(rdi<8>);
        v24 = v12;
        free(rdi<8>);
        v25 = v11;
        free(rdi<8>);
        v26 = v10;
        free(rdi<8>);
        v27 = v9;
        free(rdi<8>);
        v28 = v8;
        free(rdi<8>);
        v29 = v7;
        free(rdi<8>);
        v30 = v6;
        free(rdi<8>);
        return 0;
    }
    free(v14);
    v23 = v13;
    free(rdi<8>);
    v24 = v12;
    free(rdi<8>);
    v25 = v11;
    free(rdi<8>);
    v26 = v10;
    free(rdi<8>);
    v27 = v9;
    free(rdi<8>);
    v28 = v8;
    free(rdi<8>);
    v29 = v7;
    free(rdi<8>);
    v30 = v6;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned long long *a1, unsigned long long *a2, unsigned long a3, unsigned long long *a4, unsigned long long *a5, unsigned long long *v2, unsigned long long *a6, unsigned long long *a7, unsigned long long *a8, unsigned long long *a9, unsigned long long *a10)
{
    unsigned int v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x3c]
    uint128_t v3;  // xmm0, Other Possible Types: int
    int v4;  // xmm1
    uint128_t v5;  // xmm0
    int v6;  // xmm1
    uint128_t v7;  // xmm0
    int v8;  // xmm1
    uint128_t v9;  // xmm0
    int v10;  // xmm1
    uint128_t v11;  // xmm0
    int v12;  // xmm1

    *(a1) = 0x3ff8000000000000;
    v3 = 0;
    *(a2) = 4608083138725491507;
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        a4[v1] = v1;
        *((unsigned long long *)&v3) = v1 + 1;
        v4 = 0;
        *((unsigned long long *)&v4) = 0x4000000000000000;
        xmm0<16> = ((xmm0<16> / Conv(32->128, edi<4>)) / xmm1<16>)
        v2[v1] = v5;
        *((unsigned long long *)&v5) = v1 + 1;
        v6 = 0;
        *((unsigned long long *)&v6) = 0x4010000000000000;
        xmm0<16> = ((xmm0<16> / Conv(32->128, edi<4>)) / xmm1<16>)
        a5[v1] = v7;
        *((unsigned long long *)&v7) = v1 + 1;
        v8 = 0;
        *((unsigned long long *)&v8) = 0x4018000000000000;
        xmm0<16> = ((xmm0<16> / Conv(32->128, edi<4>)) / xmm1<16>)
        a6[v1] = v9;
        *((unsigned long long *)&v9) = v1 + 1;
        v10 = 0;
        *((unsigned long long *)&v10) = 0x4020000000000000;
        xmm0<16> = ((xmm0<16> / Conv(32->128, edi<4>)) / xmm1<16>)
        a9[v1] = v11;
        *((unsigned long long *)&v11) = v1 + 1;
        v12 = 0;
        *((unsigned long long *)&v12) = 0x4022000000000000;
        xmm0lq<8> = Conv(128->64, ((xmm0<16> / Conv(32->128, edi<4>)) / xmm1<16>))
        a10[v1] = v11;
        a8[v1] = 0;
        v3 = 0;
        a7[v1] = 0;
        for (v0 = 0; v0 < a0; v0 += 1)
        {
            *((unsigned long long *)&v12) = a0;
            v3 = ((v0 * v1 >> 31 CONCAT v0 * v1) /m a0 >> 32) / v12;
            *((unsigned long long *)(a3 + v1 * 16000 + v0 * 8)) = (unsigned long long)(((v0 * v1 >> 31 CONCAT v0 * v1) /m a0 >> 32) / v12);
        }
    }
    return v1;
}

