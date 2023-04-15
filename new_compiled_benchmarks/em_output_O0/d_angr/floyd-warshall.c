int kernel_floyd_warshall(unsigned int a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]

    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v3 = 0; v3 < a0; v3 += 1)
        {
            for (v2 = 0; v2 < a0; v2 += 1)
            {
                if (*((int *)(a1 + v3 * 11200 + (v2 << 2))) < *((int *)(a1 + v3 * 11200 + (v1 << 2))) + *((int *)(a1 + v1 * 11200 + (v2 << 2))))
                {
                    v0 = *((int *)(a1 + v3 * 11200 + v2 * 4));
                }
                else
                {
                    v0 = *((int *)(a1 + v3 * 11200 + v1 * 4)) + *((int *)(a1 + v1 * 11200 + v2 * 4));
                }
                *((unsigned int *)(a1 + v3 * 11200 + v2 * 4)) = v0;
            }
        }
    }
    return;
}

extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    unsigned long v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x1c]

    v1 = 2800;
    v0 = polybench_alloc_data(0x77a100, 0x4);
    init_array(v1, v0);
    kernel_floyd_warshall(v1, v0);
    if (a0 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v1, v0);
            free(v0);
            return 0;
        }
        free(v0);
        return 0;
    }
    free(v0);
    return 0;
}

extern char .L.str.3;
extern char got.stderr;

int print_array(unsigned int a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]

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
            fprintf(*((long long *)got.stderr), "%d ", *((int *)(a1 + v1 * 11200 + v0 * 4)));
        }
    }
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
    fprintf(*((long long *)got.stderr), "==END   DUMP_ARRAYS==\n");
    return;
}

