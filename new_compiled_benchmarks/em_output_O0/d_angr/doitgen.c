int kernel_doitgen(unsigned int a0, unsigned int a1, unsigned int a2, unsigned long a3, unsigned long a4, unsigned long long *a5)
{
    unsigned int v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x3c]
    unsigned int v2;  // [bp-0x38]
    unsigned int v3;  // [bp-0x34]
    uint128_t v5;  // xmm0
    uint128_t v6;  // xmm2
    uint128_t v7;  // xmm1

    for (v3 = 0; v3 < a0; v3 += 1)
    {
        for (v2 = 0; v2 < a1; v2 += 1)
        {
            for (v1 = 0; v1 < a2; v1 += 1)
            {
                a5[v1] = 0;
                for (v0 = 0; v0 < a2; v0 += 1)
                {
                    v5 = 0;
                    *((unsigned long long *)&v5) = *((long long *)(a3 + v3 * 0x2bc00 + v2 * 0x500 + v0 * 8));
                    v6 = 0;
                    *((unsigned long long *)&v6) = *((long long *)(a4 + v0 * 0x500 + v1 * 8));
                    v7 = 0;
                    *((unsigned long long *)&v7) = a5[v1];
                    *((unsigned long long *)&v5) = v5 * v6 + v7;
                    a5[v1] = v5;
                }
            }
            for (v1 = 0; v1 < a2; v1 += 1)
            {
                *((unsigned long long *)(a3 + v3 * 0x2bc00 + v2 * 0x500 + v1 * 8)) = a5[v1];
            }
        }
    }
    return;
}

extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    unsigned long v0;  // [bp-0x40]
    void* v1;  // [bp-0x38]
    unsigned long v2;  // [bp-0x30]
    unsigned int v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x20]
    unsigned int v5;  // [bp-0x1c]
    unsigned int v6;  // [bp-0xc]
    void* v10;  // rdi
    void* v11;  // rdi

    v6 = a0;
    v5 = 150;
    v4 = 140;
    v3 = 160;
    v2 = polybench_alloc_data(0x334500, 0x8);
    v1 = polybench_alloc_data(0xa0, 0x8);
    v0 = polybench_alloc_data(0x6400, 0x8);
    init_array(v5, v4, v3, v2, v0);
    kernel_doitgen(v5, v4, v3, v2, v0, v1);
    if (v6 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v5, v4, v3, v2);
            free(v2);
            v10 = v1;
            free(rdi<8>);
            v11 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v2);
        v10 = v1;
        free(rdi<8>);
        v11 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v2);
    v10 = v1;
    free(rdi<8>);
    v11 = v0;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned int a1, unsigned int a2, unsigned long a3, unsigned long a4)
{
    unsigned int v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x2c]
    unsigned int v3;  // [bp-0x14]
    unsigned long v5;  // rdx
    unsigned long long v6;  // xmm1lq

    v3 = v5;
    for (v2 = 0; v2 < a0; v2 += 1)
    {
        for (v1 = 0; v1 < a1; v1 += 1)
        {
            for (v0 = 0; v0 < v3; v0 += 1)
            {
                v6 = v3;
                *((unsigned long long *)(a3 + v2 * 0x2bc00 + v1 * 0x500 + v0 * 8)) = ((v1 * v2 + v0 >> 31 CONCAT v1 * v2 + v0) /m v3 >> 32) / xmm1<16>;
            }
        }
    }
    for (v2 = 0; v2 < v3; v2 += 1)
    {
        for (v1 = 0; v1 < v3; v1 += 1)
        {
            *((unsigned long long *)(a4 + v2 * 0x500 + v1 * 8)) = ((v1 * v2 >> 31 CONCAT v1 * v2) /m v3 >> 32) / v3;
        }
    }
    return;
}

extern char .L.str.3;
extern char got.stderr;

int print_array(unsigned int a0, unsigned int a1, unsigned int a2, unsigned long a3)
{
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    unsigned long v3;  // [bp-0x20]

    v3 = a3;
    fprintf(*((long long *)got.stderr), "==BEGIN DUMP_ARRAYS==\n");
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
    for (v2 = 0; v2 < a0; v2 += 1)
    {
        for (v1 = 0; v1 < a1; v1 += 1)
        {
            for (v0 = 0; v0 < a2; v0 += 1)
            {
                if ((a2 * a1 * v2 + a2 * v1 + v0 >> 31 CONCAT a2 * a1 * v2 + a2 * v1 + v0) /m 20 >> 32 == 0)
                {
                    fprintf(*((long long *)got.stderr), "\n");
                }
                fprintf(*((long long *)got.stderr), "%0.2lf ");
            }
        }
    }
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
    fprintf(*((long long *)got.stderr), "==END   DUMP_ARRAYS==\n");
    return;
}

