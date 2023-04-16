long long kernel_floyd_warshall(unsigned int a0, unsigned long a1)
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    void* v5;  // rdi
    unsigned int *v6;  // r8
    void* v7;  // r9
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rcx

    if ((unsigned int)v1 > 0)
    {
        v3 = v1;
        do
        {
            v8 = 0;
            do
            {
                v5 = v8 * 11200 + a1;
                v6 = v8 * 11200 + a1 + 0 * 4;
                v7 = 0;
                do
                {
                    *((int *)((char *)v5 + 0x4 * v7)) = (*((int *)((char *)v5 + 0x4 * v7)) < *((int *)(0 * 11200 + a1 + (v7 << 2))) + *(v6)? *((int *)((char *)v5 + 0x4 * v7)) : *((int *)(0 * 11200 + a1 + (v7 << 2))) + *(v6));
                    v7 += 1;
                }
                while (v7 != v3);
                v8 = 1;
            }
            while (v3 != 1);
            v9 = 1;
        }
        while (v3 != 1);
        return v3;
    }
    return v2;
}

extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v2;  // rax
    void* v5;  // rax
    void* v6;  // rbx
    void* v7;  // rdx
    void* v8;  // rsi
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rcx
    void* v11;  // rdx
    unsigned int *v12;  // rsi
    void* v13;  // rdi
    unsigned long long v16;  // r12
    unsigned long long v17;  // r13
    void* v18;  // rbp

    v0 = v2;
    (unsigned int)v5 = polybench_alloc_data(0x77a100, 0x4);
    v6 = v5;
    v7 = 0;
    do
    {
        v8 = 0;
        do
        {
            *((int *)(0x2bc0 * v7 + (char *)v5 + 0x4 * v8)) = ((unsigned int)(v8 + v7) * 3303820997 < 330382100? 999 : ((unsigned int)(v8 + v7) * 3067833783 < 613566757? 999 : ((unsigned int)(v8 + v7) * 3123612579 < 390451573? 999 : (unsigned int)v7 * (unsigned int)v8 + (unsigned int)((((unsigned int)v7 * (unsigned int)v8 - (unsigned int)((unsigned int)v7 * (unsigned int)v8 * 613566757 >> 32) >> 1) + ((unsigned int)v7 * (unsigned int)v8 * 613566757 >> 32) >> 2) - (((unsigned int)v7 * (unsigned int)v8 - (unsigned int)((unsigned int)v7 * (unsigned int)v8 * 613566757 >> 32) >> 1) + ((unsigned int)v7 * (unsigned int)v8 * 613566757 >> 32) >> 2 << 3)) + 1)));
            v8 += 1;
        }
        while (v8 != 2800);
        v9 = 1;
    }
    while (true);
    do
    {
        v10 = 0;
        do
        {
            v11 = v10 * 11200 + v6;
            v12 = v10 * 11200 + v6;
            v13 = 0;
            do
            {
                *((int *)((char *)v11 + 0x4 * v13)) = (*((int *)((char *)v11 + 0x4 * v13)) < *((int *)((char *)v6 + 0x4 * v13)) + *(v12)? *((int *)((char *)v11 + 0x4 * v13)) : *((int *)((char *)v6 + 0x4 * v13)) + *(v12));
                v13 += 1;
            }
            while (v13 != 2800);
            v10 = 1;
        }
        while (true);
    }
    while (true);
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v6);
            return 0;
        }
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        v16 = 0;
        do
        {
            v17 = v16 * 2800;
            v18 = 0;
            while (true)
            {
                if (((unsigned int)(v18 + v17) * 3435973837 >> 2 | (unsigned int)(v18 + v17) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%d ", *((int *)((char *)v6 + 0x4 * v18)));
                v18 += 1;
                if (v18 == 2800)
                {
                    break;
                }
            }
            v16 = 1;
        }
        while (true);
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        free(v6);
        return 0;
    }
    free(v6);
    return 0;
}

