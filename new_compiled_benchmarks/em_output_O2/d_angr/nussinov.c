extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    void* v0;  // [bp-0x40], Other Possible Types: unsigned int
    int tmp_57;  // tmp #57
    int tmp_54;  // tmp #54
    int tmp_29;  // tmp #29
    int tmp_58;  // tmp #58
    int tmp_62;  // tmp #62
    int tmp_86;  // tmp #86
    int tmp_93;  // tmp #93
    int tmp_99;  // tmp #99
    char **v1;  // [bp-0x38], Other Possible Types: unsigned int
    unsigned long long v3;  // rbx
    void* v4;  // r14
    unsigned long long v5;  // rax
    uint128_t v6;  // xmm7
    uint128_t v7;  // xmm6
    uint128_t v8;  // xmm5
    uint128_t v9;  // xmm4
    uint128_t v10;  // xmm3
    uint128_t v11;  // xmm2
    uint128_t v12;  // xmm1
    uint128_t v13;  // xmm0
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rsi
    void* v19;  // r8
    void* v20;  // r9, Other Possible Types: unsigned long long
    unsigned long long v21;  // r10
    unsigned long long v22;  // r13d, Other Possible Types: unsigned long, unsigned int
    unsigned long long v23;  // r11
    void* v24;  // r12
    unsigned int *v25;  // r12
    unsigned long v26;  // r11
    void* v27;  // r15
    unsigned int v30;  // rax
    unsigned long long v31;  // r15
    void* v32;  // rbp
    unsigned long long v33;  // r13
    void* v34;  // r12

    v1 = a1;
    v0 = a0;
    v3 = polybench_alloc_data(0x9c4, 0x1);
    v4 = polybench_alloc_data(0x5f5e10, 0x4);
    v13 = 14;
    v12 = 12;
    v11 = 10;
    v10 = 8;
    v9 = 6;
    v8 = 4;
    v7 = 2;
    v6 = 0;
    v5 = 0;
    do
    {
        tmp_57 = BinaryOp QNarrowBin;
        *((int128_t *)(v3 + v5)) = tmp_57 - 340282366920938463463374607431768211455 & 217020518514230019;
        v5 += 16;
        v6 += 16;
        v7 += 16;
        v8 += 16;
        v9 += 16;
        v10 += 16;
        v11 += 16;
        v12 += 16;
        v13 += 16;
    }
    while (v5 != 2496);
    *((int *)(v3 + 2496)) = 197121;
    memset(v4, 0x0, 0x17d7840);
    v15 = 2500;
    v16 = 2499;
    do
    {
        if (v16 <= 2498)
        {
            v17 = v16 + 1;
            v18 = v16 * 10000 + v4;
            v19 = v15 + 1;
            v20 = 0;
            v21 = v15;
            do
            {
                v22 = ((*((int *)(v18 + (v21 << 2) - 4)) < *((int *)(v18 + (v21 << 2)))? *((int *)(v18 + (v21 << 2))) : *((int *)(v18 + (v21 << 2) - 4))) <= *((int *)&((char *)v4)[10000 * v17 + 4 * v21])? *((int *)&((char *)v4)[10000 * v17 + 4 * v21]) : (*((int *)(v18 + (v21 << 2) - 4)) < *((int *)(v18 + (v21 << 2)))? *((int *)(v18 + (v21 << 2))) : *((int *)(v18 + (v21 << 2) - 4))));
                *((int *)(v18 + v21 * 4)) = ((*((int *)(v18 + (v21 << 2) - 4)) < *((int *)(v18 + (v21 << 2)))? *((int *)(v18 + (v21 << 2))) : *((int *)(v18 + (v21 << 2) - 4))) <= *((int *)&((char *)v4)[10000 * v17 + 4 * v21])? *((int *)&((char *)v4)[10000 * v17 + 4 * v21]) : (*((int *)(v18 + (v21 << 2) - 4)) < *((int *)(v18 + (v21 << 2)))? *((int *)(v18 + (v21 << 2))) : *((int *)(v18 + (v21 << 2) - 4))));
                v23 = *((int *)&((char *)v4)[4 + 10000 * v17 + 4 * v21]);
                if (2499 < v21 - 1)
                {
                    v24 = 0;
                    *((char *)&v24) = *((char *)(v3 + v21)) + *((char *)(v3 + 2499)) == 3;
                    *((unsigned int *)&v23) = (unsigned int)(*((int *)&((char *)v4)[24999996 + 4 * v21]) + v24);
                }
                v25 = v18 + v21 * 4;
                v26 = ((unsigned int)v23 < ((*((int *)(v18 + (v21 << 2) - 4)) < *((int *)(v18 + (v21 << 2)))? *((int *)(v18 + (v21 << 2))) : *((int *)(v18 + (v21 << 2) - 4))) <= *((int *)&((char *)v4)[10000 * v17 + 4 * v21])? *((int *)&((char *)v4)[10000 * v17 + 4 * v21]) : (*((int *)(v18 + (v21 << 2) - 4)) < *((int *)(v18 + (v21 << 2)))? *((int *)(v18 + (v21 << 2))) : *((int *)(v18 + (v21 << 2) - 4))))? (unsigned int)v22 : r11<8>);
                *((unsigned int *)(v18 + v21 * 4)) = v26;
                if (v17 < v21)
                {
                    if (((char)v20 & 1) == 0)
                    {
                        v22 = 2500;
                    }
                    else
                    {
                        v26 = ((unsigned int)v26 <= *((int *)&(0x2710 * v19 + (char *)v4)[4 * v21]) + (int)v4[25000000]? *((int *)&(0x2710 * v19 + (char *)v4)[4 * v21]) + (int)v4[25000000] : (unsigned int)v26);
                        *((unsigned int *)&((char *)v4)[24990000 + 4 * v21]) = v26;
                        v22 = v19;
                    }
                    if (v20 != 1)
                    {
                        do
                        {
                            tmp_58 = *((int *)&((char *)v4)[20000 + 10000 * v22]) + *((int *)(v18 + v22 * 4));
                            tmp_62 = *((int *)&((char *)v4)[20000 + 10000 * v22]) + *((int *)(v18 + v22 * 4)) < (unsigned int)v26;
                            *(v25) = (*((int *)&((char *)v4)[20000 + 10000 * v22]) + *((int *)(v18 + (v22 << 2))) < (unsigned int)v26? (unsigned int)v26 : *((int *)&((char *)v4)[20000 + 10000 * v22]) + *((int *)(v18 + (v22 << 2))));
                            tmp_86 = *((int *)&((char *)v4)[30000 + 10000 * v22]) + *((int *)(v18 + v22 * 4 + 4));
                            v22 += 2;
                            tmp_93 = (tmp_62? (unsigned int)v26 : tmp_58);
                            tmp_99 = (unsigned int)tmp_86 < (tmp_62? (unsigned int)v26 : tmp_58);
                            v26 = ((unsigned int)tmp_86 < (tmp_62? (unsigned int)v26 : tmp_58)? (tmp_62? (unsigned int)v26 : tmp_58) : (unsigned int)tmp_86);
                            *(v25) = (tmp_99? tmp_93 : (unsigned int)tmp_86);
                        }
                        while (v22 != 2500);
                    }
                }
                v21 += 1;
                v20 += 1;
            }
            while (v21 != 2500);
        }
        v15 -= 1;
        v16 -= 1;
    }
    while (v16 >= 1);
    if (v0 >= 43)
    {
        if (*(*(v1)) != 0)
        {
            free(v3);
            free(v4);
            return 0;
        }
        v27 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v0 = v27;
        fprintf(v27, "begin dump: %s", &.L.str.3);
        v30 = 2500;
        v31 = 0;
        v32 = 0;
        do
        {
            v1 = v30;
            v33 = v31;
            v34 = v32;
            while (true)
            {
                if (((unsigned int)v34 * 3435973837 + 429496728 >> 2 | (unsigned int)v34 * 3435973837 + 429496728 << 30) <= 214748364)
                {
                    fputc(0xa, v0);
                }
                fprintf(v0, "%d ", *((int *)&((char *)v4)[4 * v33]));
                *((unsigned int *)&v34) = (unsigned int)v34 + 1;
                v33 += 1;
                if (v33 == 2500)
                {
                    break;
                }
            }
            v32 = 0 + v1;
            v31 = 1;
            v30 = v1 - 1;
        }
        while (true);
        fprintf(v0, "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, v0);
        free(v3);
        free(v4);
        return 0;
    }
    free(v3);
    free(v4);
    return 0;
}

