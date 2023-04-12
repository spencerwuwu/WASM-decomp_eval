extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x44]
    char **v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    void* v5;  // rbx
    unsigned long long v8;  // r12
    int v9;  // xmm3
    int v10;  // xmm0
    int v11;  // xmm1
    unsigned long long v12;  // rcx
    int v13;  // xmm2
    unsigned long long v14;  // rax
    int v16;  // xmm1
    unsigned long long v17;  // rbp
    void* v18;  // rax
    uint128_t v19;  // xmm0
    unsigned long long v20;  // r14
    int v22;  // xmm1
    int v23;  // xmm3
    unsigned long long v24;  // r13
    void* v25;  // rax
    void* v26;  // r13
    unsigned long long v29;  // r15
    unsigned long long v30;  // rcx
    unsigned long long v31;  // rdx
    unsigned long long *v32;  // rsi
    void* v33;  // rdi
    uint128_t v34;  // xmm0
    void* v35;  // rax
    unsigned long long v36;  // rbp
    unsigned long long v37;  // r14
    void* v38;  // rdx
    uint128_t v39;  // xmm0
    void* v40;  // rdi
    uint128_t v41;  // xmm1
    uint128_t v42;  // xmm1
    unsigned long v43;  // cc_ndep
    unsigned long long v44;  // cc_op
    void* v45;  // rdi
    uint128_t v46;  // xmm1
    uint128_t v47;  // xmm1
    uint128_t v48;  // xmm0
    unsigned long v49;  // cc_ndep
    unsigned long long v50;  // cc_op
    unsigned long v51;  // cc_ndep
    unsigned long long v52;  // rdx
    unsigned long v53;  // cc_ndep
    unsigned long long v54;  // rcx
    uint128_t v55;  // xmm0
    unsigned long long v56;  // cc_op
    unsigned long long v57;  // rcx
    uint128_t v58;  // xmm1
    uint128_t v59;  // xmm1
    unsigned long v60;  // cc_ndep
    unsigned long long v61;  // cc_op
    unsigned long v62;  // cc_ndep
    unsigned long long v63;  // rax
    unsigned long long v64;  // rax
    uint128_t v65;  // xmm0
    unsigned long long v66;  // rcx
    uint128_t v67;  // xmm1
    uint128_t v68;  // xmm1
    unsigned long long v69;  // rdx
    void* v71;  // r14

    v2 = a1;
    v1 = a0;
    v5 = polybench_alloc_data(0x3d0900, 0x8);
    v8 = polybench_alloc_data(0x7d0, 0x8);
    v20 = 0;
    v9 = 0;
    *((unsigned long long *)&v9) = 0x409f400000000000;
    v10 = 0;
    *((unsigned long long *)&v10) = 0x3fe0000000000000;
    v11 = 0;
    *((unsigned long long *)&v11) = 0x4010000000000000;
    v14 = 0;
    do
    {
        *((long long *)(v0 + v14 * 8)) = 0;
        *((long long *)(v8 + v14 * 8)) = 0;
        v12 = v14 + 1;
        v13 = 0;
        *((unsigned long long *)&v13) = v14 + 1;
        *((unsigned long long *)&v13) = (unsigned long long)(v13 / v9 * v10 + v11);
        *((unsigned long long *)(v3 + v14 * 8)) = (unsigned long long)v13;
        v14 += 1;
    }
    while (v12 != 2000);
    v0 = polybench_alloc_data(0x7d0, 0x8);
    v3 = polybench_alloc_data(0x7d0, 0x8);
    v16 = 0;
    *((unsigned long long *)&v16) = 0x3ff0000000000000;
    do
    {
        v17 = v20;
        v18 = 0;
        do
        {
            v19 = 0;
            *((unsigned long long *)&v19) = 0 - (unsigned int)v18;
            *((unsigned long long *)&v19) = (unsigned long long)(v19 / v9 + v16);
            *((unsigned long long *)(&((char *)v5)[16000 * v17] + 0x8 * v18)) = v19;
            v18 += 1;
        }
        while (v18 != 1);
        v20 = 1;
        memset(0 * 16008 + 8 + v5, 0x0, 0x3e78);
        v22 = 0;
        *((unsigned long long *)&v22) = 0x3ff0000000000000;
        v23 = 0;
        *((unsigned long long *)&v23) = 0x409f400000000000;
        *((long long *)v5) = 0x3ff0000000000000;
        v24 = 2;
    }
    while (true);
    (unsigned int)v25 = polybench_alloc_data(0x3d0900, 0x8);
    v26 = v25;
    memset(v25, 0x0, 0x1e84800);
    v29 = v3;
    do
    {
        v30 = 0;
        do
        {
            v31 = v30 * 16000;
            v32 = v5 + v30 * 16000;
            v33 = 0;
            do
            {
                v34 = 0;
                *((unsigned long long *)&v34) = *(v32);
                xmm0lq<8> = Conv(128->64, ((xmm0<16> * Conv(64->128, Load(addr=((rdi<8> * 0x3e80<64>) + rbx<8>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rdx<8> + r13<8>) + (rdi<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)(&((char *)v26)[v31] + 0x8 * v33)) = v34;
                v33 += 1;
            }
            while (v33 != 2000);
            v30 = 1;
        }
        while (true);
    }
    while (true);
    do
    {
        v35 = 0;
        do
        {
            *((long long *)((char *)v5 + 0x8 * v35)) = *((long long *)((char *)v26 + 0x8 * v35));
            v35 += 1;
        }
        while (v35 != 2000);
        v36 = 1;
    }
    while (true);
    free(v26);
    v63 = 0;
    v54 = 0;
    v37 = v0;
    do
    {
        if (v54 != 0)
        {
            v38 = 0;
            do
            {
                v39 = 0;
                *((unsigned long long *)&v39) = *((long long *)((char *)v5 + 0x8 * v38));
                if (v38 != 0)
                {
                    v40 = 0;
                    do
                    {
                        v41 = 0;
                        *((unsigned long long *)&v41) = *((long long *)((char *)v5 + 0x8 * v40));
                        xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=((rdi<8> * 0x3e80<64>) + rbx<8>), size=8, endness=Iend_LE)))
                        v39 -= v42;
                        v40 += 1;
                    }
                    while (v40 != 0);
                }
                xmm0lq<8> = Conv(128->64, (xmm0<16> / Conv(64->128, Load(addr=(((rdx<8> * 0x3e80<64>) + rbx<8>) + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)((char *)v5 + 0x8 * v38)) = v39;
                v43 = (v38 * 16000 + v5 <= v38 * 16000? 1 : 0);
                v38 += 1;
            }
            while (v38 != 0);
        }
        v52 = v54;
        do
        {
            v48 = 0;
            *((unsigned long long *)&v48) = *((long long *)&((char *)v5)[16000 * v54 + 8 * v52]);
            v44 = 20;
            if (v54 != 0)
            {
                v45 = 0;
                do
                {
                    v46 = 0;
                    *((unsigned long long *)&v46) = *((long long *)((char *)v5 + 0x8 * v45));
                    xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=((rdi<8> * 0x3e80<64>) + rbx<8>), size=8, endness=Iend_LE)))
                    v48 -= v47;
                    v49 = (v45 * 16000 + v5 <= v45 * 16000? 1 : 0);
                    v45 += 1;
                    v50 = 8;
                }
                while (v45 != 0);
            }
            *((unsigned long long *)&((char *)v5)[8 * v52]) = v48;
            v51 = [D] amd64g_calculate_rflags_c(cc_op<8>, 0x0<64>, 0x0<64>, cc_ndep<8>);
            v52 += 1;
        }
        while (v52 != 2000);
        v53 = 2000 < 2000;
        v54 = 1;
    }
    while (true);
    do
    {
        v55 = 0;
        *((unsigned long long *)&v55) = *((long long *)(v3 + v63 * 8));
        v56 = 20;
        if (v63 != 0)
        {
            v57 = 0;
            do
            {
                v58 = 0;
                *((unsigned long long *)&v58) = *((long long *)&((char *)v5)[8 * v57]);
                xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(r12<8> + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v55 -= v59;
                v60 = (0 * 16000 + v5 <= 0 * 16000? 1 : 0);
                v57 += 1;
                v61 = 8;
            }
            while (v57 != 0);
        }
        *((unsigned long long *)(v8 + v63 * 8)) = v55;
        v62 = [D] amd64g_calculate_rflags_c(cc_op<8>, 0x0<64>, 0x0<64>, cc_ndep<8>);
        v63 += 1;
    }
    while (v63 != 2000);
    v64 = 1999;
    do
    {
        v65 = 0;
        *((unsigned long long *)&v65) = *((long long *)(v8 + v64 * 8));
        v66 = v64;
        if (v64 <= 1998)
        {
            do
            {
                v67 = 0;
                *((unsigned long long *)&v67) = *((long long *)&((char *)v5)[31984008 + 8 * v66]);
                xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=((Load(addr=stack_base-80, size=8, endness=Iend_LE) + (rcx<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE)))
                v69 = v66 + 1;
                v65 -= v68;
                v66 += 1;
            }
            while (v69 != 1999);
        }
        xmm0lq<8> = Conv(128->64, (xmm0<16> / Conv(64->128, Load(addr=(((rax<8> * 0x3e80<64>) + rbx<8>) + (rax<8> * 0x8<64>)), size=8, endness=Iend_LE))))
        *((unsigned long long *)(v0 + v64 * 8)) = v65;
        v64 -= 1;
    }
    while (v64 >= 1);
    if (v1 >= 43)
    {
        if (*(*(v2)) != 0)
        {
            free(v5);
            free(v29);
            free(v37);
            free(v8);
            return 0;
        }
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v71 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        while (true)
        {
            if (((unsigned int)v71 * 3435973837 >> 2 | (unsigned int)v71 * 3435973837 << 30) <= 214748364)
            {
                fputc(0xa, *((long long *)got.stderr));
            }
            fprintf(*((long long *)got.stderr), "%0.2lf ");
            v71 += 1;
            if (v71 == 2000)
            {
                break;
            }
        }
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        free(v5);
        free(v29);
        free(v37);
        free(v8);
        return 0;
    }
    free(v5);
    free(v29);
    free(v37);
    free(v8);
    return 0;
}

