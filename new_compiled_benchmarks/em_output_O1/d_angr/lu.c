long long kernel_lu(unsigned int a0, void* a1)
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long long *v4;  // r8
    uint128_t v5;  // xmm1
    uint128_t v6;  // xmm1
    uint128_t v7;  // xmm0
    void* v8;  // r9
    uint128_t v9;  // xmm0
    unsigned long v10;  // cc_ndep
    void* v11;  // rdx
    unsigned long long v12;  // rdx
    unsigned long long v13;  // cc_op
    unsigned long long *v14;  // r8
    uint128_t v15;  // xmm0
    void* v16;  // r9
    uint128_t v17;  // xmm1
    uint128_t v18;  // xmm1
    unsigned long v19;  // cc_ndep
    unsigned long long v20;  // cc_op
    unsigned long v21;  // cc_ndep

    if ((unsigned int)v1 > 0)
    {
        v3 = 0;
        do
        {
            v12 = v3;
            if (v3 != 0)
            {
                v11 = 0;
                do
                {
                    if (v11 != 0)
                    {
                        v4 = 0 * 16000 + a1 + v11 * 8;
                        v7 = 0;
                        *((unsigned long long *)&v7) = *((long long *)((char *)a1 + 0x8 * v11));
                        v8 = 0;
                        do
                        {
                            v5 = 0;
                            *((unsigned long long *)&v5) = *((long long *)((char *)a1 + 0x8 * v8));
                            xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=((r9<8> * 0x3e80<64>) + rsi<8>), size=8, endness=Iend_LE)))
                            v7 -= v6;
                            *(v4) = v7;
                            v8 += 1;
                        }
                        while (v8 != 0);
                    }
                    v9 = 0;
                    *((unsigned long long *)&v9) = *((long long *)((char *)a1 + 0x8 * v11));
                    xmm0lq<8> = Conv(128->64, (xmm0<16> / Conv(64->128, Load(addr=(((rdx<8> * 0x3e80<64>) + rsi<8>) + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                    *((unsigned long long *)((char *)a1 + 0x8 * v11)) = v9;
                    v10 = (0 * 16000 + a1 <= 0 * 16000? 1 : 0);
                    v11 += 1;
                }
                while (v11 != 0);
                v12 = 0;
            }
            do
            {
                v13 = 20;
                if (v3 != 0)
                {
                    v14 = 0 * 16000 + a1 + v12 * 8;
                    v15 = 0;
                    *((unsigned long long *)&v15) = *((long long *)&((char *)a1)[8 * v12]);
                    v16 = 0;
                    do
                    {
                        v17 = 0;
                        *((unsigned long long *)&v17) = *((long long *)((char *)a1 + 0x8 * v16));
                        xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=((r9<8> * 0x3e80<64>) + rsi<8>), size=8, endness=Iend_LE)))
                        v15 -= v18;
                        *(v14) = v15;
                        v19 = (v16 * 16000 + a1 <= v16 * 16000? 1 : 0);
                        v16 += 1;
                        v20 = 8;
                    }
                    while (v16 != 0);
                }
                v21 = [D] amd64g_calculate_rflags_c(cc_op<8>, 0x0<64>, 0x0<64>, cc_ndep<8>);
                v12 += 1;
            }
            while (v12 != v1);
            v3 = 1;
        }
        while (v1 != 1);
        return v1;
    }
    return v2;
}

extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x3c]
    char **v1;  // [bp-0x38]
    void* v3;  // rbx
    int v5;  // xmm1
    int v6;  // xmm2
    unsigned long long v7;  // r14
    void* v8;  // rax
    uint128_t v9;  // xmm0
    unsigned long long v10;  // rbp
    int v12;  // xmm2
    int v13;  // xmm1
    unsigned long long v14;  // r15
    void* v15;  // rax
    void* v16;  // r15
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rdx
    unsigned long long *v21;  // rsi
    void* v22;  // rdi
    uint128_t v23;  // xmm0
    void* v24;  // rax
    unsigned long long v25;  // r12
    void* v26;  // rcx
    unsigned long long *v27;  // rsi
    uint128_t v28;  // xmm0
    void* v29;  // rdi
    uint128_t v30;  // xmm1
    uint128_t v31;  // xmm1
    uint128_t v32;  // xmm0
    unsigned long v33;  // cc_ndep
    unsigned long long v34;  // cc_op
    unsigned long long *v35;  // rsi
    uint128_t v36;  // xmm0
    void* v37;  // rdi
    uint128_t v38;  // xmm1
    uint128_t v39;  // xmm1
    unsigned long v40;  // cc_ndep
    unsigned long long v41;  // cc_op
    unsigned long v42;  // cc_ndep
    unsigned long long v43;  // rcx
    unsigned long long v44;  // rax
    unsigned long long v46;  // r12
    unsigned long long v48;  // r13
    void* v49;  // rbp

    v1 = a1;
    v0 = a0;
    v3 = polybench_alloc_data(0x3d0900, 0x8);
    v10 = 0;
    v5 = 0;
    *((unsigned long long *)&v5) = 0x409f400000000000;
    v6 = 0;
    *((unsigned long long *)&v6) = 0x3ff0000000000000;
    do
    {
        v7 = v10;
        v8 = 0;
        do
        {
            v9 = 0;
            *((unsigned long long *)&v9) = 0 - (unsigned int)v8;
            *((unsigned long long *)&v9) = (unsigned long long)(v9 / v5 + v6);
            *((unsigned long long *)(&((char *)v3)[16000 * v7] + 0x8 * v8)) = v9;
            v8 += 1;
        }
        while (v8 != 1);
        v10 = 1;
        memset(0 * 16008 + 8 + v3, 0x0, 0x3e78);
        v12 = 0;
        *((unsigned long long *)&v12) = 0x3ff0000000000000;
        v13 = 0;
        *((unsigned long long *)&v13) = 0x409f400000000000;
        *((long long *)v3) = 0x3ff0000000000000;
        v14 = 2;
    }
    while (true);
    (unsigned int)v15 = polybench_alloc_data(0x3d0900, 0x8);
    v16 = v15;
    memset(v15, 0x0, 0x1e84800);
    do
    {
        v19 = 0;
        do
        {
            v20 = v19 * 16000;
            v21 = v3 + v19 * 16000;
            v22 = 0;
            do
            {
                v23 = 0;
                *((unsigned long long *)&v23) = *(v21);
                xmm0lq<8> = Conv(128->64, ((xmm0<16> * Conv(64->128, Load(addr=((rdi<8> * 0x3e80<64>) + rbx<8>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((r15<8> + rdx<8>) + (rdi<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)(&((char *)v16)[v20] + 0x8 * v22)) = v23;
                v22 += 1;
            }
            while (v22 != 2000);
            v19 = 1;
        }
        while (true);
    }
    while (true);
    do
    {
        v24 = 0;
        do
        {
            *((long long *)((char *)v3 + 0x8 * v24)) = *((long long *)((char *)v16 + 0x8 * v24));
            v24 += 1;
        }
        while (v24 != 2000);
        v25 = 1;
    }
    while (true);
    free(v16);
    v44 = 0;
    do
    {
        if (v44 != 0)
        {
            v26 = 0;
            do
            {
                if (v26 != 0)
                {
                    v27 = 0 * 16000 + v3 + v26 * 8;
                    v28 = 0;
                    *((unsigned long long *)&v28) = *((long long *)((char *)v3 + 0x8 * v26));
                    v29 = 0;
                    do
                    {
                        v30 = 0;
                        *((unsigned long long *)&v30) = *((long long *)((char *)v3 + 0x8 * v29));
                        xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=((rdi<8> * 0x3e80<64>) + rbx<8>), size=8, endness=Iend_LE)))
                        v28 -= v31;
                        *(v27) = v28;
                        v29 += 1;
                    }
                    while (v29 != 0);
                }
                v32 = 0;
                *((unsigned long long *)&v32) = *((long long *)((char *)v3 + 0x8 * v26));
                xmm0lq<8> = Conv(128->64, (xmm0<16> / Conv(64->128, Load(addr=(((rcx<8> * 0x3e80<64>) + rbx<8>) + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)((char *)v3 + 0x8 * v26)) = v32;
                v33 = (0 * 16000 + v3 <= 0 * 16000? 1 : 0);
                v26 += 1;
            }
            while (v26 != 0);
        }
        v43 = v44;
        do
        {
            v34 = 20;
            if (false)
            {
                v35 = 0 * 16000 + v3 + v43 * 8;
                v36 = 0;
                *((unsigned long long *)&v36) = *((long long *)&((char *)v3)[8 * v43]);
                v37 = 0;
                do
                {
                    v38 = 0;
                    *((unsigned long long *)&v38) = *((long long *)((char *)v3 + 0x8 * v37));
                    xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=((rdi<8> * 0x3e80<64>) + rbx<8>), size=8, endness=Iend_LE)))
                    v36 -= v39;
                    *(v35) = v36;
                    v40 = (v37 * 16000 + v3 <= v37 * 16000? 1 : 0);
                    v37 += 1;
                    v41 = 8;
                }
                while (v37 != 0);
            }
            v42 = [D] amd64g_calculate_rflags_c(cc_op<8>, 0x0<64>, 0x0<64>, cc_ndep<8>);
            v43 += 1;
        }
        while (v43 != 2000);
        v44 = 1;
    }
    while (true);
    if (v0 >= 43)
    {
        if (*(*(v1)) != 0)
        {
            free(v3);
            return 0;
        }
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v46 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        do
        {
            v48 = v46 * 2000;
            v49 = 0;
            while (true)
            {
                if (((unsigned int)(v49 + v48) * 3435973837 >> 2 | (unsigned int)(v49 + v48) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%0.2lf ");
                v49 += 1;
                if (v49 == 2000)
                {
                    break;
                }
            }
            v46 = 1;
        }
        while (true);
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        free(v3);
        return 0;
    }
    free(v3);
    return 0;
}

