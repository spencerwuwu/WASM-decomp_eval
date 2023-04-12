extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x30]
    void* v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x1c]
    unsigned int v3;  // [bp-0xc]
    void* v6;  // rdi

    v3 = a0;
    v2 = 2500;
    v1 = polybench_alloc_data(0x9c4, 0x1);
    v0 = polybench_alloc_data(0x5f5e10, 0x4);
    init_array(v2, v1, v0);
    kernel_nussinov(v2, v1, v0);
    if (v3 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v2, v0);
            free(v1);
            v6 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v1);
        v6 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v1);
    v6 = v0;
    free(rdi<8>);
    return 0;
}

int kernel_nussinov(unsigned int a0, char *a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x3c]
    unsigned int v2;  // [bp-0x38]
    unsigned int v3;  // [bp-0x34]
    unsigned int v4;  // [bp-0x30]
    unsigned int v5;  // [bp-0x2c]
    unsigned int v6;  // [bp-0x28]
    unsigned int v7;  // [bp-0x24]

    for (v7 = a0 - 1; v7 >= 0; v7 -= 1)
    {
        for (v6 = v7 + 1; v6 < a0; v6 += 1)
        {
            if (v6 - 1 >= 0)
            {
                if (*((int *)(a2 + v7 * 10000 + (v6 << 2))) >= *((int *)(a2 + v7 * 10000 + (v6 - 1 << 2))))
                {
                    v4 = *((int *)(a2 + v7 * 10000 + v6 * 4));
                }
                else
                {
                    v4 = *((int *)(a2 + v7 * 10000 + (v6 - 1) * 4));
                }
                *((unsigned int *)(a2 + v7 * 10000 + v6 * 4)) = v4;
            }
            if (v7 + 1 < a0)
            {
                if (*((int *)(a2 + v7 * 10000 + (v6 << 2))) >= *((int *)(a2 + (v7 + 1) * 10000 + (v6 << 2))))
                {
                    v3 = *((int *)(a2 + v7 * 10000 + v6 * 4));
                }
                else
                {
                    v3 = *((int *)(a2 + (v7 + 1) * 10000 + v6 * 4));
                }
                *((unsigned int *)(a2 + v7 * 10000 + v6 * 4)) = v3;
            }
            if (v6 - 1 >= 0 && v7 + 1 < a0)
            {
                if (v7 < v6 - 1)
                {
                    if (*((int *)(a2 + v7 * 10000 + (v6 << 2))) >= *((int *)(a2 + (v7 + 1) * 10000 + (v6 - 1 << 2))) + (a1[v7] + a1[v6] == 3? 1 : 0))
                    {
                        v2 = *((int *)(a2 + v7 * 10000 + v6 * 4));
                    }
                    else
                    {
                        v2 = *((int *)(a2 + (v7 + 1) * 10000 + (v6 - 1) * 4)) + (a1[v7] + a1[v6] == 3? 1 : 0);
                    }
                    *((unsigned int *)(a2 + v7 * 10000 + v6 * 4)) = v2;
                }
                else
                {
                    if (*((int *)(a2 + v7 * 10000 + (v6 << 2))) >= *((int *)(a2 + (v7 + 1) * 10000 + (v6 - 1 << 2))))
                    {
                        v1 = *((int *)(a2 + v7 * 10000 + v6 * 4));
                    }
                    else
                    {
                        v1 = *((int *)(a2 + (v7 + 1) * 10000 + (v6 - 1) * 4));
                    }
                    *((unsigned int *)(a2 + v7 * 10000 + v6 * 4)) = v1;
                }
            }
            for (v5 = v7 + 1; v5 < v6; v5 += 1)
            {
                if (*((int *)(a2 + v7 * 10000 + (v6 << 2))) >= *((int *)(a2 + v7 * 10000 + (v5 << 2))) + *((int *)(a2 + (v5 + 1) * 10000 + (v6 << 2))))
                {
                    v0 = *((int *)(a2 + v7 * 10000 + v6 * 4));
                }
                else
                {
                    v0 = *((int *)(a2 + v7 * 10000 + v5 * 4)) + *((int *)(a2 + (v5 + 1) * 10000 + v6 * 4));
                }
                *((unsigned int *)(a2 + v7 * 10000 + v6 * 4)) = v0;
            }
        }
    }
    return;
}

