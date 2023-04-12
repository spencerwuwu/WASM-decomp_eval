extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    void* v0;  // [bp-0x48], Other Possible Types: char **
    void* v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    void* v5;  // rbx
    void* v6;  // r14
    void* v7;  // r15
    void* v8;  // r12
    void* v9;  // r13
    void* v10;  // rax
    int v11;  // xmm0
    void* v12;  // rcx
    uint128_t v13;  // xmm1
    void* v14;  // rdx
    unsigned long long v15;  // rcx
    void* v16;  // rcx
    int v17;  // xmm0
    void* v18;  // rsi
    unsigned long long v19;  // rdi
    uint128_t v20;  // xmm1
    unsigned long long v21;  // rax
    void* v22;  // rax
    int v23;  // xmm0
    void* v24;  // rdx
    uint128_t v25;  // xmm1
    unsigned long long v26;  // rcx
    int v27;  // xmm0
    void* v28;  // rdx
    uint128_t v29;  // xmm1
    unsigned long long v30;  // rax
    int v31;  // xmm0
    unsigned long long v32;  // rdx
    unsigned long long *v33;  // rsi
    uint128_t v34;  // xmm1
    void* v35;  // rdi
    uint128_t v36;  // xmm2
    uint128_t v37;  // xmm2
    int v38;  // xmm0
    unsigned long long v39;  // rcx
    unsigned long long *v40;  // rdx
    uint128_t v41;  // xmm1
    uint128_t v42;  // xmm1
    void* v43;  // rsi
    uint128_t v44;  // xmm2
    uint128_t v45;  // xmm2
    void* v46;  // rbp
    void* v50;  // rax
    unsigned long long v51;  // rax
    void* v52;  // rbp

    v0 = a1;
    v5 = polybench_alloc_data(0xafc80, 0x8);
    v6 = polybench_alloc_data(0xd6d80, 0x8);
    v7 = polybench_alloc_data(0xf1b30, 0x8);
    v8 = polybench_alloc_data(0x107ac0, 0x8);
    v9 = polybench_alloc_data(0xea600, 0x8);
    v10 = 0;
    v11 = 0;
    *((unsigned long long *)&v11) = 0x4089000000000000;
    v12 = 0;
    do
    {
        v14 = 0;
        do
        {
            v13 = 0;
            *((unsigned long long *)&v13) = (unsigned int)v12 * (unsigned int)v14 + 1 - (unsigned int)(((unsigned int)v12 * (unsigned int)v14 + 1) * 1374389535 >> 40) * 800;
            *((unsigned long long *)&v13) = (unsigned long long)(v13 / v11);
            *((unsigned long long *)(0x2260 * v12 + (char *)v6 + 0x8 * v14)) = v13;
            v14 += 1;
        }
        while (v14 != 1100);
        v15 = 1;
    }
    while (true);
    v16 = 0;
    v17 = 0;
    *((unsigned long long *)&v17) = 0x408c200000000000;
    do
    {
        v18 = 0;
        do
        {
            v19 = v18 + 1;
            v20 = 0;
            *((unsigned long long *)&v20) = (unsigned int)v10 * ((unsigned int)v18 + 1) - (unsigned int)(2443359173 * (unsigned int)v10 * ((unsigned int)v18 + 1) >> 41) * 900;
            *((unsigned long long *)&v20) = (unsigned long long)(v20 / v17);
            *((unsigned long long *)(0x1c20 * v10 + (char *)v7 + 0x8 * v18)) = v20;
            v18 += 1;
        }
        while (v19 != 900);
        v21 = 1;
    }
    while (true);
    v22 = 0;
    v23 = 0;
    *((unsigned long long *)&v23) = 0x4092c00000000000;
    do
    {
        v24 = 0;
        do
        {
            v25 = 0;
            *((unsigned long long *)&v25) = ((unsigned int)v24 + 3) * (unsigned int)v16 + 1 - (unsigned int)((((unsigned int)v24 + 3) * (unsigned int)v16 + 1) * 458129845 >> 39) * 1200;
            *((unsigned long long *)&v25) = (unsigned long long)(v25 / v23);
            *((unsigned long long *)(0x2580 * v16 + (char *)v8 + 0x8 * v24)) = v25;
            v24 += 1;
        }
        while (v24 != 1200);
        v26 = 1;
    }
    while (true);
    v27 = 0;
    *((unsigned long long *)&v27) = 0x4091300000000000;
    do
    {
        v28 = 0;
        do
        {
            v29 = 0;
            *((unsigned long long *)&v29) = ((unsigned int)v28 + 2) * (unsigned int)v22 - (unsigned int)((((unsigned int)v28 + 2) * (unsigned int)v22 >> 2) * 499778013 >> 37) * 1100;
            *((unsigned long long *)&v29) = (unsigned long long)(v29 / v27);
            *((unsigned long long *)(0x2580 * v22 + (char *)v9 + 0x8 * v28)) = v29;
            v28 += 1;
        }
        while (v28 != 1200);
        v30 = 1;
    }
    while (true);
    v31 = 0;
    *((unsigned long long *)&v31) = 0x3ff8000000000000;
    do
    {
        v32 = 0;
        do
        {
            v33 = 0 * 7200 + v5 + v32 * 8;
            *((long long *)&((char *)v5)[8 * v32]) = 0;
            v34 = 0;
            v35 = 0;
            do
            {
                v36 = 0;
                *((unsigned long long *)&v36) = *((long long *)((char *)v6 + 0x8 * v35));
                xmm2<16> = ((xmm2<16> * xmm0<16>) * Conv(64->128, Load(addr=(((rdi<8> * 0x1c20<64>) + r15<8>) + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v34 += v37;
                *(v33) = v34;
                v35 += 1;
            }
            while (v35 != 1100);
            v32 = 1;
        }
        while (true);
    }
    while (true);
    v38 = 0;
    *((unsigned long long *)&v38) = 4608083138725491507;
    do
    {
        v39 = 0;
        do
        {
            v40 = 0 * 9600 + v9 + v39 * 8;
            v41 = 0;
            *((unsigned long long *)&v41) = *((long long *)&((char *)v9)[8 * v39]);
            v42 = v41 * v38;
            *((unsigned long long *)&((char *)v9)[8 * v39]) = v42;
            v43 = 0;
            do
            {
                v44 = 0;
                *((unsigned long long *)&v44) = *((long long *)((char *)v5 + 0x8 * v43));
                xmm2<16> = (xmm2<16> * Conv(64->128, Load(addr=(((rsi<8> * 0x2580<64>) + r12<8>) + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v42 += v45;
                *(v40) = v42;
                v43 += 1;
            }
            while (v43 != 900);
            v39 = 1;
        }
        while (true);
    }
    while (true);
    if (a0 >= 43)
    {
        if (*(*(v0)) != 0)
        {
            free(v5);
            free(v6);
            free(v7);
            free(v8);
            free(v9);
            return 0;
        }
        v46 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v1 = v46;
        fprintf(v46, "begin dump: %s", &.L.str.3);
        v50 = 0;
        do
        {
            v0 = v50;
            v51 = v50 * 800;
            v2 = v51;
            v52 = 0;
            while (true)
            {
                if (((unsigned int)(v2 + v52) * 3435973837 >> 2 | (unsigned int)(v2 + v52) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, v1);
                }
                fprintf(v1, "%0.2lf ");
                v52 += 1;
                if (v52 == 1200)
                {
                    break;
                }
            }
            v50 = v0 + 1;
        }
        while (v0 + 1 != 800);
        fprintf(v1, "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, v1);
        free(v5);
        free(v6);
        free(v7);
        free(v8);
        free(v9);
        return 0;
    }
    free(v5);
    free(v6);
    free(v7);
    free(v8);
    free(v9);
    return 0;
}

