extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    int tmp_51;  // tmp #51
    int tmp_53;  // tmp #53
    int tmp_57;  // tmp #57
    void* v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x34]
    unsigned long long v5;  // rbx
    void* v6;  // r14
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdi
    unsigned long long v14;  // r8d, Other Possible Types: unsigned int, unsigned long
    unsigned int v15;  // r10d
    void* v16;  // r9
    unsigned int *v17;  // r9
    unsigned long long v18;  // r10, Other Possible Types: unsigned long
    unsigned long long v19;  // r11
    unsigned long long v20;  // rax
    void* v21;  // r15
    unsigned int v24;  // rax
    unsigned long long v25;  // r15
    void* v26;  // rbp
    unsigned long long v27;  // r13
    void* v28;  // r12

    v5 = polybench_alloc_data(0x9c4, 0x1);
    v6 = polybench_alloc_data(0x5f5e10, 0x4);
    v7 = 0;
    do
    {
        v8 = v7 + 1;
        *((char *)(v5 + v7)) = (char)v7 + 1 & 3;
        v7 += 1;
    }
    while (v8 != 2500);
    memset(v6, 0x0, 0x17d7840);
    v20 = 2500;
    v10 = 2499;
    do
    {
        if (v10 <= 2498)
        {
            v11 = v10 + 1;
            v12 = v20;
            do
            {
                v13 = 2499 * 10000 + v6;
                tmp_51 = *((int *)&((char *)v6)[24990000 + 4 * v12]);
                tmp_53 = *((int *)&((char *)v6)[24989996 + 4 * v12]);
                tmp_57 = *((int *)&((char *)v6)[24989996 + 4 * v12]) < *((int *)&((char *)v6)[24990000 + 4 * v12]);
                *((int *)&((char *)v6)[24990000 + 4 * v12]) = (*((int *)&((char *)v6)[24989996 + 4 * v12]) < *((int *)&((char *)v6)[24990000 + 4 * v12])? *((int *)&((char *)v6)[24990000 + 4 * v12]) : *((int *)&((char *)v6)[24989996 + 4 * v12]));
                v14 = ((tmp_57? tmp_51 : tmp_53) <= *((int *)&((char *)v6)[10000 * v11 + 4 * v12])? *((int *)&((char *)v6)[10000 * v11 + 4 * v12]) : (tmp_57? tmp_51 : tmp_53));
                *((int *)&((char *)v6)[24990000 + 4 * v12]) = ((tmp_57? tmp_51 : tmp_53) <= *((int *)&((char *)v6)[10000 * v11 + 4 * v12])? *((int *)&((char *)v6)[10000 * v11 + 4 * v12]) : (tmp_57? tmp_51 : tmp_53));
                v15 = *((int *)&((char *)v6)[4 + 10000 * v11 + 4 * v12]);
                if (2499 < v12 - 1)
                {
                    v16 = 0;
                    *((char *)&v16) = *((char *)(v5 + v12)) + *((char *)(v5 + 2499)) == 3;
                    v15 = (unsigned int)(*((int *)&((char *)v6)[24999996 + 4 * v12]) + v16);
                }
                v17 = v13 + v12 * 4;
                *((unsigned int *)&v18) = (v15 < v14? (unsigned int)v14 : r10<8>);
                *((unsigned int *)(v13 + v12 * 4)) = v18;
                if (v11 < v12)
                {
                    *((unsigned int *)&v14) = *((int *)&((char *)v6)[24990000 + 4 * v12]);
                    v18 = 2500;
                    do
                    {
                        v19 = v18 + 1;
                        v14 = ((unsigned int)v14 <= *((int *)&((char *)v6)[20000 + 10000 * v18]) + *((int *)(v13 + (v18 << 2)))? *((int *)&((char *)v6)[20000 + 10000 * v18]) + *((int *)(v13 + (v18 << 2))) : r8<8>);
                        *(v17) = v14;
                        v18 += 1;
                    }
                    while (v19 != 2500);
                }
                v12 += 1;
            }
            while (v12 != 2500);
        }
        v20 -= 1;
        v10 -= 1;
    }
    while (v10 >= 1);
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v5);
            free(v6);
            return 0;
        }
        v21 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v0 = v21;
        fprintf(v21, "begin dump: %s", &.L.str.3);
        v24 = 2500;
        v25 = 0;
        v26 = 0;
        do
        {
            v1 = v24;
            v27 = v25;
            v28 = v26;
            while (true)
            {
                if (((unsigned int)v28 * 3435973837 + 429496728 >> 2 | (unsigned int)v28 * 3435973837 + 429496728 << 30) <= 214748364)
                {
                    fputc(0xa, v0);
                }
                fprintf(v0, "%d ", *((int *)&((char *)v6)[4 * v27]));
                *((unsigned int *)&v28) = (unsigned int)v28 + 1;
                v27 += 1;
                if (v27 == 2500)
                {
                    break;
                }
            }
            v26 = 0 + v1;
            v25 = 1;
            v24 = v1 - 1;
        }
        while (true);
        fprintf(v0, "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, v0);
        free(v5);
        free(v6);
        return 0;
    }
    free(v5);
    free(v6);
    return 0;
}

