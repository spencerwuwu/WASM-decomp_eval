extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    void* v0;  // [bp-0x58]
    char **v1;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned int v2;  // [bp-0x48], Other Possible Types: void*
    unsigned long v3;  // [bp-0x40], Other Possible Types: void*
    unsigned long long v4;  // [bp-0x38]
    void* v6;  // rbx
    void* v7;  // r14
    void* v8;  // r15
    void* v9;  // r12
    void* v10;  // r13
    void* v11;  // rbp
    void* v13;  // r10
    int v14;  // xmm0
    void* v15;  // rcx
    void* v16;  // rdx
    uint128_t v17;  // xmm1
    unsigned long long v18;  // rcx
    void* v19;  // rdx
    int v20;  // xmm0
    void* v21;  // rsi
    unsigned long long v22;  // rdi
    uint128_t v23;  // xmm1
    unsigned long long v24;  // r10
    void* v25;  // rcx
    int v26;  // xmm0
    void* v27;  // r8
    uint128_t v28;  // xmm1
    unsigned long long v29;  // rdx
    int v30;  // xmm0
    void* v31;  // rdx
    uint128_t v32;  // xmm1
    unsigned long long v33;  // rcx
    unsigned long long v34;  // rdx
    unsigned long long *v35;  // rsi
    uint128_t v36;  // xmm0
    void* v37;  // rdi
    uint128_t v38;  // xmm1
    uint128_t v39;  // xmm1
    unsigned long long v40;  // rdx
    unsigned long long *v41;  // rsi
    uint128_t v42;  // xmm0
    void* v43;  // rdi
    uint128_t v44;  // xmm1
    uint128_t v45;  // xmm1
    unsigned long long v46;  // rcx
    unsigned long long *v47;  // rdx
    uint128_t v48;  // xmm0
    void* v49;  // rsi
    uint128_t v50;  // xmm1
    uint128_t v51;  // xmm1
    void* v54;  // rax
    unsigned long long v55;  // rax
    void* v56;  // rdx
    void* v61;  // rdi

    v1 = a1;
    v2 = a0;
    v6 = polybench_alloc_data(0xafc80, 0x8);
    v7 = polybench_alloc_data(0xc3500, 0x8);
    v8 = polybench_alloc_data(0xdbba0, 0x8);
    v9 = polybench_alloc_data(0xf1b30, 0x8);
    v10 = polybench_alloc_data(0x107ac0, 0x8);
    v11 = polybench_alloc_data(0x142440, 0x8);
    v13 = 0;
    v14 = 0;
    *((unsigned long long *)&v14) = 0x40af400000000000;
    v15 = 0;
    do
    {
        v16 = 0;
        do
        {
            v17 = 0;
            *((unsigned long long *)&v17) = (unsigned int)v15 * (unsigned int)v16 + 1 - (unsigned int)(((unsigned int)v15 * (unsigned int)v16 + 1) * 1374389535 >> 40) * 800;
            *((unsigned long long *)&v17) = (unsigned long long)(v17 / v14);
            *((unsigned long long *)(0x1f40 * v15 + (char *)v7 + 0x8 * v16)) = v17;
            v16 += 1;
        }
        while (v16 != 1000);
        v18 = 1;
    }
    while (true);
    v19 = 0;
    v20 = 0;
    *((unsigned long long *)&v20) = 0x40b1940000000000;
    do
    {
        v21 = 0;
        do
        {
            v22 = v21 + 1;
            v23 = 0;
            *((unsigned long long *)&v23) = (unsigned int)v13 * ((unsigned int)v21 + 1) + 2 - (unsigned int)(2443359173 * ((unsigned int)v13 * ((unsigned int)v21 + 1) + 2) >> 41) * 900;
            *((unsigned long long *)&v23) = (unsigned long long)(v23 / v20);
            *((unsigned long long *)(0x1c20 * v13 + (char *)v8 + 0x8 * v21)) = v23;
            v21 += 1;
        }
        while (v22 != 900);
        v24 = 1;
    }
    while (true);
    v25 = 0;
    v26 = 0;
    *((unsigned long long *)&v26) = 0x40b57c0000000000;
    do
    {
        v27 = 0;
        do
        {
            v28 = 0;
            *((unsigned long long *)&v28) = ((unsigned int)v27 + 3) * (unsigned int)v19 - (unsigned int)((((unsigned int)v27 + 3) * (unsigned int)v19 >> 2) * 499778013 >> 37) * 1100;
            *((unsigned long long *)&v28) = (unsigned long long)(v28 / v26);
            *((unsigned long long *)(0x2580 * v19 + (char *)v10 + 0x8 * v27)) = v28;
            v27 += 1;
        }
        while (v27 != 1200);
        v29 = 1;
    }
    while (true);
    v30 = 0;
    *((unsigned long long *)&v30) = 0x40b3880000000000;
    do
    {
        v31 = 0;
        do
        {
            v32 = 0;
            *((unsigned long long *)&v32) = ((unsigned int)v31 + 2) * (unsigned int)v25 + 2 - (unsigned int)((((unsigned int)v31 + 2) * (unsigned int)v25 + 2) * 274877907 >> 38) * 1000;
            *((unsigned long long *)&v32) = (unsigned long long)(v32 / v30);
            *((unsigned long long *)(0x2260 * v25 + (char *)v11 + 0x8 * v31)) = v32;
            v31 += 1;
        }
        while (v31 != 1100);
        v33 = 1;
    }
    while (true);
    do
    {
        v34 = 0;
        do
        {
            v35 = 0 * 7200 + v6 + v34 * 8;
            *((long long *)&((char *)v6)[8 * v34]) = 0;
            v36 = 0;
            v37 = 0;
            do
            {
                v38 = 0;
                *((unsigned long long *)&v38) = *((long long *)((char *)v7 + 0x8 * v37));
                xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(((rdi<8> * 0x1c20<64>) + r15<8>) + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v36 += v39;
                *(v35) = v36;
                v37 += 1;
            }
            while (v37 != 1000);
            v34 = 1;
        }
        while (true);
    }
    while (true);
    do
    {
        v40 = 0;
        do
        {
            v41 = 0 * 8800 + v9 + v40 * 8;
            *((long long *)&((char *)v9)[8 * v40]) = 0;
            v42 = 0;
            v43 = 0;
            do
            {
                v44 = 0;
                *((unsigned long long *)&v44) = *((long long *)((char *)v10 + 0x8 * v43));
                xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(((rdi<8> * 0x2260<64>) + rbp<8>) + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v42 += v45;
                *(v41) = v42;
                v43 += 1;
            }
            while (v43 != 1200);
            v40 = 1;
        }
        while (true);
    }
    while (true);
    do
    {
        v46 = 0;
        do
        {
            v47 = 0 * 8800 + v3 + v46 * 8;
            *((long long *)(0 * 8800 + v3 + v46 * 8)) = 0;
            v48 = 0;
            v49 = 0;
            do
            {
                v50 = 0;
                *((unsigned long long *)&v50) = *((long long *)((char *)v6 + 0x8 * v49));
                xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(((rsi<8> * 0x2260<64>) + r12<8>) + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v48 += v51;
                *(v47) = v48;
                v49 += 1;
            }
            while (v49 != 900);
            v46 = 1;
        }
        while (true);
    }
    while (true);
    *((int *)&v3) = polybench_alloc_data(0xd6d80, 0x8);
    if (v2 >= 43)
    {
        if (*(*(v1)) != 0)
        {
            free(v6);
            free(v7);
            free(v8);
            free(v9);
            free(v10);
            free(v11);
            v61 = v3;
            free(v61);
            return 0;
        }
        v0 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        fprintf(v0, "begin dump: %s", &.L.str.3);
        v54 = 0;
        do
        {
            v1 = v54;
            v55 = v54 * 800;
            v4 = v55;
            v56 = 0;
            while (true)
            {
                v2 = v56;
                if (((unsigned int)(v4 + v56) * 3435973837 >> 2 | (unsigned int)(v4 + v56) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, v0);
                }
                fprintf(v0, "%0.2lf ");
                v56 = v2 + 1;
                if (v2 + 1 == 1100)
                {
                    break;
                }
            }
            v54 = v1 + 1;
        }
        while (v1 + 1 != 800);
        fprintf(v0, "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, v0);
        free(v6);
        free(v7);
        free(v8);
        free(v9);
        free(v10);
        free(v11);
        v61 = v3;
        free(v61);
        return 0;
    }
    free(v6);
    free(v7);
    free(v8);
    free(v9);
    free(v10);
    free(v11);
    v61 = v3;
    free(v61);
    return 0;
}

