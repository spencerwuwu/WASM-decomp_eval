extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x40], Other Possible Types: void*
    int tmp_61;  // tmp #61
    int tmp_72;  // tmp #72
    char **v1;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r14
    unsigned long long v5;  // r15
    unsigned long long v6;  // r12
    int v7;  // xmm0
    unsigned long long v8;  // rcx
    uint128_t v9;  // xmm1
    void* v10;  // rdx
    unsigned long long v11;  // rax
    int v12;  // xmm0
    int v13;  // xmm1
    int v14;  // xmm2
    int v15;  // xmm3
    int v16;  // xmm4
    int v17;  // xmm5
    int v18;  // xmm6
    int v19;  // xmm7
    unsigned long long v20;  // rsi
    unsigned long long v21;  // rdx
    unsigned long long v22;  // r11
    unsigned long long v23;  // r8
    unsigned long long v24;  // r9
    unsigned long long v25;  // r10
    uint128_t v26;  // xmm9
    uint128_t v27;  // xmm8
    unsigned long long v28;  // r10
    uint128_t v29;  // xmm8
    uint128_t v30;  // xmm8
    uint128_t v31;  // xmm9
    uint128_t v32;  // xmm10
    uint128_t v33;  // xmm9
    uint128_t v34;  // xmm10
    uint128_t v35;  // xmm11
    uint128_t v36;  // xmm12
    uint128_t v37;  // xmm12
    uint128_t v38;  // xmm11
    uint128_t v39;  // xmm11
    unsigned long long v40;  // r9
    uint128_t v41;  // xmm8
    unsigned long long v42;  // r10
    unsigned long long v43;  // rdi
    unsigned long long v44;  // r8
    unsigned long long v45;  // r9
    uint128_t v46;  // xmm8
    uint128_t v47;  // xmm8
    uint128_t v48;  // xmm9
    uint128_t v49;  // xmm10
    uint128_t v50;  // xmm9
    uint128_t v51;  // xmm10
    uint128_t v52;  // xmm11
    uint128_t v53;  // xmm12
    uint128_t v54;  // xmm12
    uint128_t v55;  // xmm11
    uint128_t v56;  // xmm11
    uint128_t v57;  // xmm9
    unsigned long long v58;  // r9
    uint128_t v59;  // xmm8
    unsigned long long v60;  // r8
    uint128_t v61;  // xmm8
    unsigned long long v62;  // rsi
    unsigned long long v63;  // rdx
    void* v64;  // r13
    unsigned long long v66;  // rbp
    void* v69;  // r13

    v1 = a1;
    v0 = a0;
    v3 = polybench_alloc_data(0xf4240, 0x8);
    v4 = polybench_alloc_data(0xf4240, 0x8);
    v5 = polybench_alloc_data(0xf4240, 0x8);
    v6 = polybench_alloc_data(0xf4240, 0x8);
    v11 = 0;
    v7 = 0;
    *((unsigned long long *)&v7) = 0x408f400000000000;
    do
    {
        v8 = v11 + 1000;
        v10 = 0;
        do
        {
            v9 = 0;
            *((unsigned long long *)&v9) = v8 - v10;
            *((unsigned long long *)&v9) = (unsigned long long)(v9 / v7);
            *((unsigned long long *)(v11 * 8000 + v3 + v10 * 8)) = v9;
            v10 += 1;
        }
        while (v10 != 1000);
        v11 = 1;
    }
    while (true);
    v12 = 0;
    *((unsigned long long *)&v12) = 13879882945323335681;
    v13 = 0;
    *((unsigned long long *)&v13) = 4661016707119185921;
    v14 = 0;
    *((unsigned long long *)&v14) = 4656510908468559873;
    v15 = 0;
    *((unsigned long long *)&v15) = 13879878547276824577;
    v16 = 0;
    *((unsigned long long *)&v16) = 4652007308841189377;
    v17 = 0;
    *((unsigned long long *)&v17) = 13875379345695965185;
    v18 = 0;
    *((unsigned long long *)&v18) = 4656515306515070977;
    v19 = 0;
    *((unsigned long long *)&v19) = 13884384345927450625;
    do
    {
        v20 = 1;
        v21 = 0;
        do
        {
            v22 = v21 * 8000;
            *((long long *)(v4 + v20 * 8)) = 0x3ff0000000000000;
            v23 = v20 * 8000;
            *((long long *)(v5 + v20 * 8000)) = 0;
            *((long long *)(v6 + v20 * 8000)) = *((long long *)(v4 + v20 * 8));
            v24 = v20 - 1;
            if (v5 + v21 * 8000 + 8000 < v6 + v21 * 8000 + 15992)
            {
                v25 = 1;
                if (v6 + v21 * 8000 + 8000 < v5 + v21 * 8000 + 15992)
                {
                    do
                    {
                        v29 = 0;
                        *((unsigned long long *)&v29) = *((long long *)(v5 + v23 + v25 * 8 - 8));
                        v30 = v29 * v12 + v13;
                        *((unsigned long long *)(v5 + v23 + v25 * 8)) = (unsigned long long)(v14 / v30);
                        v31 = 0;
                        *((unsigned long long *)&v31) = *((long long *)(v25 * 8000 + v3 + 8));
                        v32 = 0;
                        *((unsigned long long *)&v32) = *((long long *)(v25 * 8000 + v3 + v24 * 8));
                        tmp_61 = v32 * v16 + v31 * v15;
                        v33 = 0;
                        *((unsigned long long *)&v33) = *((long long *)(v25 * 8000 + v3 + v20 * 8));
                        v34 = 0;
                        *((unsigned long long *)&v34) = *((long long *)(v6 + v23 + v25 * 8 - 8));
                        *((unsigned long long *)&v34) = (unsigned long long)((v34 * v14 + v33 * v16 + tmp_61) / v30);
                        *((unsigned long long *)(v6 + v23 + v25 * 8)) = v34;
                        v25 += 1;
                    }
                    while (v25 != 999);
                }
            }
            if (v6 + v21 * 8000 + 8000 >= v5 + v21 * 8000 + 15992 || v5 + v21 * 8000 + 8000 >= v6 + v21 * 8000 + 15992)
            {
                v26 = 0;
                *((unsigned long long *)&v26) = *((long long *)(v5 + v22 + 8000));
                v27 = 0;
                *((unsigned long long *)&v27) = *((long long *)(v6 + v22 + 8000));
                v28 = 1;
                do
                {
                    *((unsigned long long *)(v5 + v23 + v28 * 8)) = (unsigned long long)(v14 / (v26 * v12 + v13));
                    v35 = 0;
                    *((unsigned long long *)&v35) = *((long long *)(v28 * 8000 + v3 + 8));
                    v36 = 0;
                    *((unsigned long long *)&v36) = *((long long *)(v28 * 8000 + v3 + v24 * 8));
                    v37 = v36 * v16 + v35 * v15;
                    v38 = 0;
                    *((unsigned long long *)&v38) = *((long long *)(v28 * 8000 + v3 + v20 * 8));
                    v39 = v38 * v16 + v37;
                    v27 = (v27 * v14 + v39) / (v26 * v12 + v13);
                    *((unsigned long long *)(v6 + v23 + v28 * 8)) = v27;
                    v28 += 1;
                    v26 = v14 / (v26 * v12 + v13);
                }
                while (v28 != 999);
            }
            *((long long *)(v4 + 8 + 7992000)) = 0x3ff0000000000000;
            v40 = 998;
            do
            {
                v41 = 0;
                *((unsigned long long *)&v41) = *((long long *)(v5 + v23 + v40 * 8));
                xmm8lq<8> = Conv(128->64, ((xmm8<16> * Conv(64->128, Load(addr=((((r9<8> * 0x1f40<64>) + r14<8>) + 0x8<64>) + 0x1f40<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((r12<8> + r8<8>) + (r9<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)(v40 * 8000 + v4 + 8)) = v41;
                v40 -= 1;
            }
            while (v40 > 1);
            v21 = 1;
            v20 = 2;
        }
        while (true);
        v63 = 1;
        v62 = 0;
        do
        {
            v42 = v62 * 8000;
            v43 = v63 * 8000;
            *((long long *)(v3 + v63 * 8000)) = 0x3ff0000000000000;
            *((long long *)(v5 + v63 * 8000)) = 0;
            *((long long *)(v6 + v63 * 8000)) = *((long long *)(v3 + v63 * 8000));
            v44 = v63 - 1;
            v63 += 1;
            if (v5 + v62 * 8000 + 8000 < v6 + v62 * 8000 + 15992)
            {
                v45 = 1;
                if (v6 + v62 * 8000 + 8000 < v5 + v62 * 8000 + 15992)
                {
                    do
                    {
                        v46 = 0;
                        *((unsigned long long *)&v46) = *((long long *)(v5 + v43 + v45 * 8 - 8));
                        v47 = v46 * v17 + v18;
                        *((unsigned long long *)(v5 + v43 + v45 * 8)) = (unsigned long long)(v16 / v47);
                        v48 = 0;
                        *((unsigned long long *)&v48) = *((long long *)(v4 + v43 + v45 * 8));
                        v49 = 0;
                        *((unsigned long long *)&v49) = *((long long *)(v44 * 8000 + v4 + v45 * 8));
                        tmp_72 = v49 * v14 + v48 * v19;
                        v50 = 0;
                        *((unsigned long long *)&v50) = *((long long *)(v63 * 8000 + v4 + v45 * 8));
                        v51 = 0;
                        *((unsigned long long *)&v51) = *((long long *)(v6 + v43 + v45 * 8 - 8));
                        *((unsigned long long *)&v51) = (unsigned long long)((v51 * v16 + v50 * v14 + tmp_72) / v47);
                        *((unsigned long long *)(v6 + v43 + v45 * 8)) = v51;
                        v45 += 1;
                    }
                    while (v45 != 999);
                }
            }
            if (v5 + v62 * 8000 + 8000 >= v6 + v62 * 8000 + 15992 || v6 + v62 * 8000 + 8000 >= v5 + v62 * 8000 + 15992)
            {
                v57 = 0;
                *((unsigned long long *)&v57) = *((long long *)(v5 + v42 + 8000));
                v59 = 0;
                *((unsigned long long *)&v59) = *((long long *)(v6 + v42 + 8000));
                v58 = 1;
                do
                {
                    *((unsigned long long *)(v5 + v43 + v58 * 8)) = (unsigned long long)(v16 / (v57 * v17 + v18));
                    v52 = 0;
                    *((unsigned long long *)&v52) = *((long long *)(v4 + v43 + v58 * 8));
                    v53 = 0;
                    *((unsigned long long *)&v53) = *((long long *)(v44 * 8000 + v4 + v58 * 8));
                    v54 = v53 * v14 + v52 * v19;
                    v55 = 0;
                    *((unsigned long long *)&v55) = *((long long *)(v63 * 8000 + v4 + v58 * 8));
                    v56 = v55 * v14 + v54;
                    v59 = (v59 * v16 + v56) / (v57 * v17 + v18);
                    *((unsigned long long *)(v6 + v43 + v58 * 8)) = v59;
                    v58 += 1;
                    v57 = v16 / (v57 * v17 + v18);
                }
                while (v58 != 999);
            }
            *((long long *)(v3 + v43 + 7992)) = 0x3ff0000000000000;
            v60 = 998;
            do
            {
                v61 = 0;
                *((unsigned long long *)&v61) = *((long long *)(v5 + v43 + v60 * 8));
                xmm8lq<8> = Conv(128->64, ((xmm8<16> * Conv(64->128, Load(addr=(((rbx<8> + rdi<8>) + (r8<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((r12<8> + rdi<8>) + (r8<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)(v3 + v43 + v60 * 8)) = v61;
                v60 -= 1;
            }
            while (v60 > 1);
            v62 = 1;
        }
        while (v63 != 999);
    }
    while (true);
    if (v0 >= 43)
    {
        if (*(*(v1)) != 0)
        {
            free(v3);
            free(v4);
            free(v5);
            free(v6);
            return 0;
        }
        v64 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v66 = 0;
        v0 = v64;
        fprintf(v64, "begin dump: %s", &.L.str.3);
        do
        {
            v1 = v66 * 1000;
            v69 = 0;
            while (true)
            {
                if (((unsigned int)(v1 + v69) * 3435973837 >> 2 | (unsigned int)(v1 + v69) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, v0);
                }
                fprintf(v0, "%0.2lf ");
                v69 += 1;
                if (v69 == 1000)
                {
                    break;
                }
            }
            v66 = 1;
        }
        while (true);
        fprintf(v0, "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, v0);
        free(v3);
        free(v4);
        free(v5);
        free(v6);
        return 0;
    }
    free(v3);
    free(v4);
    free(v5);
    free(v6);
    return 0;
}

