extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    void* v6;  // [bp-0x80]
    void* v7;  // [bp-0x78]
    void* v8;  // [bp-0x70]
    void* v9;  // [bp-0x68]
    void* v10;  // [bp-0x60]
    void* v11;  // [bp-0x58]
    void* v12;  // [bp-0x50]
    unsigned int v13;  // [bp-0x44]
    unsigned int v14;  // [bp-0x40]
    unsigned int v15;  // [bp-0x3c]
    unsigned int v16;  // [bp-0x38]
    unsigned int v17;  // [bp-0x34]
    unsigned int v18;  // [bp-0x24]
    void* v22;  // rdi
    void* v23;  // rdi
    void* v24;  // rdi
    void* v25;  // rdi
    void* v26;  // rdi
    void* v27;  // rdi

    v18 = a0;
    v17 = 800;
    v16 = 900;
    v15 = 1000;
    v14 = 1100;
    v13 = 1200;
    v12 = polybench_alloc_data(0xafc80, 0x8);
    v11 = polybench_alloc_data(0xc3500, 0x8);
    v10 = polybench_alloc_data(0xdbba0, 0x8);
    v9 = polybench_alloc_data(0xf1b30, 0x8);
    v8 = polybench_alloc_data(0x107ac0, 0x8);
    v7 = polybench_alloc_data(0x142440, 0x8);
    v6 = polybench_alloc_data(0xd6d80, 0x8);
    v0 = v10;
    v1 = v8;
    v2 = v7;
    init_array(v17, v16, v15, v14, v13, v11, v0, v1, v2);
    v0 = v11;
    v1 = v10;
    v2 = v9;
    v3 = v8;
    v4 = v7;
    v5 = v6;
    kernel_3mm(v17, v16, v15, v14, v13, v12, v0, v1, v2, v3, v4, v5);
    if (v18 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v17, v14, v6);
            free(v12);
            v22 = v11;
            free(rdi<8>);
            v23 = v10;
            free(rdi<8>);
            v24 = v9;
            free(rdi<8>);
            v25 = v8;
            free(rdi<8>);
            v26 = v7;
            free(rdi<8>);
            v27 = v6;
            free(rdi<8>);
            return 0;
        }
        free(v12);
        v22 = v11;
        free(rdi<8>);
        v23 = v10;
        free(rdi<8>);
        v24 = v9;
        free(rdi<8>);
        v25 = v8;
        free(rdi<8>);
        v26 = v7;
        free(rdi<8>);
        v27 = v6;
        free(rdi<8>);
        return 0;
    }
    free(v12);
    v22 = v11;
    free(rdi<8>);
    v23 = v10;
    free(rdi<8>);
    v24 = v9;
    free(rdi<8>);
    v25 = v8;
    free(rdi<8>);
    v26 = v7;
    free(rdi<8>);
    v27 = v6;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned long a5, unsigned long v2, unsigned long a6, unsigned long a7)
{
    unsigned int v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]
    unsigned long long v3;  // xmm1lq
    uint128_t v4;  // xmm1

    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 < a2; v0 += 1)
        {
            v3 = a0 * 5;
            *((unsigned long long *)(a5 + v1 * 8000 + v0 * 8)) = ((v0 * v1 + 1 >> 31 CONCAT v0 * v1 + 1) /m a0 >> 32) / xmm1<16>;
        }
    }
    for (v1 = 0; v1 < a2; v1 += 1)
    {
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            *((unsigned long long *)&v4) = a1 * 5;
            *((unsigned long long *)(v2 + v1 * 7200 + v0 * 8)) = (((v0 + 1) * v1 + 2 >> 31 CONCAT (v0 + 1) * v1 + 2) /m a1 >> 32) / v4;
        }
    }
    for (v1 = 0; v1 < a1; v1 += 1)
    {
        for (v0 = 0; v0 < a4; v0 += 1)
        {
            *((unsigned long long *)&v4) = a3 * 5;
            *((unsigned long long *)(a6 + v1 * 9600 + v0 * 8)) = (((v0 + 3) * v1 >> 31 CONCAT (v0 + 3) * v1) /m a3 >> 32) / v4;
        }
    }
    for (v1 = 0; v1 < a4; v1 += 1)
    {
        for (v0 = 0; v0 < a3; v0 += 1)
        {
            *((unsigned long long *)&v4) = a2 * 5;
            *((unsigned long long *)(a7 + v1 * 8800 + v0 * 8)) = (((v0 + 2) * v1 + 2 >> 31 CONCAT (v0 + 2) * v1 + 2) /m a2 >> 32) / v4;
        }
    }
    return v1;
}

int kernel_3mm(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned long a5, unsigned long v3, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10)
{
    unsigned int v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x2c]
    uint128_t v4;  // xmm0
    uint128_t v5;  // xmm2
    uint128_t v6;  // xmm1
    uint128_t v7;  // xmm0
    uint128_t v8;  // xmm2
    uint128_t v9;  // xmm1
    uint128_t v10;  // xmm0
    uint128_t v11;  // xmm2
    uint128_t v12;  // xmm1

    for (v2 = 0; v2 < a0; v2 += 1)
    {
        for (v1 = 0; v1 < a1; v1 += 1)
        {
            *((long long *)(a5 + v2 * 7200 + v1 * 8)) = 0;
            for (v0 = 0; v0 < a2; v0 += 1)
            {
                v4 = 0;
                *((unsigned long long *)&v4) = *((long long *)(v3 + v2 * 8000 + v0 * 8));
                v5 = 0;
                *((unsigned long long *)&v5) = *((long long *)(a6 + v0 * 7200 + v1 * 8));
                v6 = 0;
                *((unsigned long long *)&v6) = *((long long *)(a5 + v2 * 7200 + v1 * 8));
                *((unsigned long long *)&v4) = v4 * v5 + v6;
                *((unsigned long long *)(a5 + v2 * 7200 + v1 * 8)) = v4;
            }
        }
    }
    for (v2 = 0; v2 < a1; v2 += 1)
    {
        for (v1 = 0; v1 < a3; v1 += 1)
        {
            *((long long *)(a7 + v2 * 8800 + v1 * 8)) = 0;
            for (v0 = 0; v0 < a4; v0 += 1)
            {
                v7 = 0;
                *((unsigned long long *)&v7) = *((long long *)(a8 + v2 * 9600 + v0 * 8));
                v8 = 0;
                *((unsigned long long *)&v8) = *((long long *)(a9 + v0 * 8800 + v1 * 8));
                v9 = 0;
                *((unsigned long long *)&v9) = *((long long *)(a7 + v2 * 8800 + v1 * 8));
                *((unsigned long long *)&v7) = v7 * v8 + v9;
                *((unsigned long long *)(a7 + v2 * 8800 + v1 * 8)) = v7;
            }
        }
    }
    for (v2 = 0; v2 < a0; v2 += 1)
    {
        for (v1 = 0; v1 < a3; v1 += 1)
        {
            *((long long *)(a10 + v2 * 8800 + v1 * 8)) = 0;
            for (v0 = 0; v0 < a1; v0 += 1)
            {
                v10 = 0;
                *((unsigned long long *)&v10) = *((long long *)(a5 + v2 * 7200 + v0 * 8));
                v11 = 0;
                *((unsigned long long *)&v11) = *((long long *)(a7 + v0 * 8800 + v1 * 8));
                v12 = 0;
                *((unsigned long long *)&v12) = *((long long *)(a10 + v2 * 8800 + v1 * 8));
                *((unsigned long long *)&v10) = v10 * v11 + v12;
                *((unsigned long long *)(a10 + v2 * 8800 + v1 * 8)) = v10;
            }
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

