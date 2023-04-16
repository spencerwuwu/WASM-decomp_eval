int kernel_nussinov(unsigned int a0, void* a1, unsigned long a2)
{
    int tmp_43;  // tmp #43
    int tmp_47;  // tmp #47
    unsigned long long v1;  // cc_op
    void* v2;  // rdi
    void* v3;  // cc_dep1
    void* v4;  // cc_dep2
    void* v5;  // rcx
    void* v6;  // r8
    unsigned long v7;  // cc_ndep
    void* v8;  // r10
    unsigned int *v9;  // r11
    unsigned long long v10;  // rbp
    unsigned int v11;  // ebx
    unsigned long long v12;  // cc_op
    void* v13;  // cc_dep1
    void* v14;  // cc_dep2
    void* v15;  // r14
    unsigned long long v16;  // rbx
    unsigned long long v17;  // cc_op
    void* v18;  // cc_dep1
    void* v19;  // cc_dep2
    void* v20;  // r14
    unsigned long long v21;  // r15
    unsigned long long v22;  // cc_op
    unsigned long long v23;  // cc_dep1
    void* v24;  // cc_dep2
    unsigned long v25;  // cc_ndep
    void* v26;  // r9
    unsigned long long v27;  // cc_op
    void* v28;  // cc_dep1
    unsigned long long v29;  // cc_dep2

    v1 = 19;
    v3 = v2;
    v4 = 0;
    if ((unsigned int)v2 > 0)
    {
        v5 = v2;
        do
        {
            v6 = v5;
            v7 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v5 -= 1;
            if (v26 < v2)
            {
                v26 = v6;
                do
                {
                    v8 = v5 * 10000 + a2;
                    v9 = v5 * 10000 + a2 + v26 * 4;
                    v10 = *((int *)(v5 * 10000 + a2 + v26 * 4));
                    if (v26 > 0)
                    {
                        tmp_43 = *((int *)&((char *)v8 + 0x4 * v26)[4]);
                        tmp_47 = *((int *)&((char *)v8 + 0x4 * v26)[4]) < (unsigned int)v10;
                        *((int *)((v2 - 1) * 10000 + a2 + v26 * 4)) = (*((int *)&((char *)v8 + 0x4 * v26)[4]) < (unsigned int)v10? (unsigned int)v10 : *((int *)&((char *)v8 + 0x4 * v26)[4]));
                        v11 = ((tmp_47? (unsigned int)v10 : tmp_43) <= *((int *)(v2 * 10000 + a2 + (v26 << 2)))? *((int *)(v2 * 10000 + a2 + (v26 << 2))) : (tmp_47? (unsigned int)v10 : tmp_43));
                        *((int *)((char *)v8 + 0x4 * v26)) = ((tmp_47? (unsigned int)v10 : tmp_43) <= *((int *)(v2 * 10000 + a2 + (v26 << 2)))? *((int *)(v2 * 10000 + a2 + (v26 << 2))) : (tmp_47? (unsigned int)v10 : tmp_43));
                        *((unsigned int *)&v10) = *((int *)(v2 * 10000 + a2 + (v26 - 1) * 4));
                        if (v2 < v26)
                        {
                            v15 = 0;
                            *((char *)&v15) = *((char *)(a1 + v26)) + *((char *)(a1 + v5)) == 3;
                            *((unsigned int *)&v10) = (unsigned int)(*((int *)(v2 * 10000 + a2 + (v26 - 1) * 4)) + v15);
                        }
                        *((unsigned int *)&v10) = ((unsigned int)v10 < v11? rbx<8> : rbp<8>);
                        *(v9) = v10;
                        v17 = 8;
                        v18 = v2;
                        v19 = v26;
                    }
                    else
                    {
                        *((int *)((v2 - 1) * 10000 + a2 + v26 * 4)) = (*((int *)(v2 * 10000 + a2 + (v26 << 2))) < *((int *)((v2 - 1) * 10000 + a2 + (v26 << 2)))? *((int *)((v2 - 1) * 10000 + a2 + (v26 << 2))) : *((int *)(v2 * 10000 + a2 + (v26 << 2))));
                        v12 = 8;
                        v13 = v2;
                        v14 = v26;
                    }
                    if (v26 <= 0 && v2 < v26 || v2 < v26 && v26 > 0)
                    {
                        *((unsigned int *)&v16) = *((int *)((v2 - 1) * 10000 + a2 + v2 * 4));
                        v20 = v2;
                        do
                        {
                            v21 = v20 + 1;
                            *((unsigned int *)&v16) = ((unsigned int)v16 <= *((int *)((v20 + 1) * 10000 + a2 + (v2 << 2))) + *((int *)((v2 - 1) * 10000 + a2 + (v20 << 2)))? *((int *)((v20 + 1) * 10000 + a2 + (v2 << 2))) + *((int *)((v2 - 1) * 10000 + a2 + (v20 << 2))) : rbx<8>);
                            *(v9) = v16;
                            v20 += 1;
                            v22 = 7;
                            v23 = v21;
                            v24 = v2;
                        }
                        while ((unsigned int)v21 != (unsigned int)v2);
                    }
                    v25 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                    v26 += 1;
                }
                while ((unsigned int)v26 != (unsigned int)v2);
            }
            v27 = 8;
            v28 = v26;
            v29 = 2;
        }
        while (v26 >= 2);
        return;
    }
    return;
}

extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x40]
    void* v1;  // [bp-0x38], Other Possible Types: unsigned long
    void* v6;  // rax
    unsigned long long v7;  // rcx
    void* v11;  // rdi
    unsigned long long v13;  // r12
    unsigned long long v14;  // r14
    unsigned long long v15;  // r13
    unsigned long long v16;  // rbx

    v0 = polybench_alloc_data(0x5f5e10, 0x4);
    v6 = 0;
    do
    {
        v7 = v6 + 1;
        *((char *)(v1 + v6)) = (char)v6 + 1 & 3;
        v6 += 1;
    }
    while (v7 != 2500);
    memset(v0, 0x0, 0x17d7840);
    kernel_nussinov(0x9c4, v1, v0);
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v1);
            v11 = v0;
            free(v11);
            return 0;
        }
        v1 = polybench_alloc_data(0x9c4, 0x1);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        v13 = 0;
        v14 = 0;
        do
        {
            v15 = v13;
            v16 = v14;
            while (true)
            {
                if (((unsigned int)v16 * 3435973837 + 429496728 >> 2 | (unsigned int)v16 * 3435973837 + 429496728 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%d ", *((int *)(0 * 10000 + v0 + v15 * 4)));
                *((unsigned int *)&v16) = (unsigned int)v16 + 1;
                v15 += 1;
                if (v15 == 2500)
                {
                    break;
                }
            }
            v14 = 2500;
            v13 = 1;
        }
        while (true);
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        free(v1);
        v11 = v0;
        free(v11);
        return 0;
    }
    free(v1);
    v11 = v0;
    free(v11);
    return 0;
}

