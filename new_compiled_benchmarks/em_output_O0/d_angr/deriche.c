extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x48]
    void* v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    void* v3;  // [bp-0x30]
    char v4;  // [bp-0x24]
    unsigned int v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x1c]
    unsigned int v7;  // [bp-0xc]
    void* v10;  // rdi
    void* v11;  // rdi
    void* v12;  // rdi

    v7 = a0;
    v6 = 0x1000;
    v5 = 2160;
    v3 = polybench_alloc_data(0x870000, 0x4);
    v2 = polybench_alloc_data(0x870000, 0x4);
    v1 = polybench_alloc_data(0x870000, 0x4);
    v0 = polybench_alloc_data(0x870000, 0x4);
    init_array(v6, v5, &v4, v3, v2);
    kernel_deriche(v6, v5, v3, v2, v1, v0);
    if (v7 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v6, v5, v2);
            free(v3);
            v10 = v2;
            free(rdi<8>);
            v11 = v1;
            free(rdi<8>);
            v12 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v3);
        v10 = v2;
        free(rdi<8>);
        v11 = v1;
        free(rdi<8>);
        v12 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v3);
    v10 = v2;
    free(rdi<8>);
    v11 = v1;
    free(rdi<8>);
    v12 = v0;
    free(rdi<8>);
    return 0;
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
            if ((a1 * v1 + v0 >> 31 CONCAT a1 * v1 + v0) /m 20 >> 32 == 0)
            {
                fprintf(*((long long *)got.stderr), "\n");
            }
            fprintf(*((long long *)got.stderr), "%0.2f ");
        }
    }
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
    fprintf(*((long long *)got.stderr), "==END   DUMP_ARRAYS==\n");
    return;
}

