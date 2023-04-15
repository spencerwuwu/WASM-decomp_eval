int init_array(unsigned int a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0xc]
    unsigned long v4;  // rdi
    unsigned long long v5;  // xmm0lq
    unsigned long long v6;  // xmm1lq

    v2 = v4;
    for (v1 = 0; v1 < v2; v1 += 1)
    {
        for (v0 = 0; v0 < v2; v0 += 1)
        {
            v5 = v1 + v2 - v0;
            v6 = v2;
            *((int *)(a1 + v1 * 8000 + v0 * 8)) = xmm0<16> / xmm1<16>;
        }
    }
    return;
}

extern char .L.str.2;
extern char got.stderr;

int print_array(unsigned int a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned long v2;  // [bp-0x18]

    v2 = a1;
    fprintf(*((long long *)got.stderr), "==BEGIN DUMP_ARRAYS==\n");
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.2);
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 < a0; v0 += 1)
        {
            if ((a0 * v1 + v0 >> 31 CONCAT a0 * v1 + v0) /m 20 >> 32 == 0)
            {
                fprintf(*((long long *)got.stderr), "\n");
            }
            fprintf(*((long long *)got.stderr), "%0.2lf ");
        }
    }
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.2);
    fprintf(*((long long *)got.stderr), "==END   DUMP_ARRAYS==\n");
    return;
}

int kernel_adi(unsigned int a0, unsigned int a1, unsigned long long *a2, unsigned int a3, unsigned long long *a4, unsigned long long *a5)
{
    unsigned long v0;  // [bp-0xa8]
    int tmp_226;  // tmp #226
    int tmp_262;  // tmp #262
    int tmp_222;  // tmp #222
    int tmp_258;  // tmp #258
    uint128_t v1;  // [bp-0xa0]
    uint128_t v2;  // [bp-0x98]
    unsigned long v3;  // [bp-0x90]
    uint128_t v4;  // [bp-0x88]
    uint128_t v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    unsigned long v10;  // [bp-0x58]
    uint128_t v11;  // [bp-0x50]
    uint128_t v12;  // [bp-0x48]
    unsigned int v13;  // [bp-0x3c]
    unsigned int v14;  // [bp-0x38]
    unsigned int v15;  // [bp-0x34]
    unsigned long v16;  // [bp-0x20]
    unsigned long long *v17;  // [bp-0x18]
    unsigned int v18;  // [bp-0x10]
    unsigned long v20;  // rsi
    unsigned long long v21;  // xmm1lq
    int v22;  // xmm0
    uint128_t v23;  // xmm1
    int v24;  // xmm0
    int v25;  // xmm0
    int v26;  // xmm0
    uint128_t v27;  // xmm1
    int v28;  // xmm0
    uint128_t v29;  // xmm1
    int v30;  // xmm1
    int v31;  // xmm0
    int v32;  // xmm1
    int v33;  // xmm0
    uint128_t v34;  // xmm1
    uint128_t v35;  // xmm3
    uint128_t v36;  // xmm2
    uint128_t v37;  // xmm2
    uint128_t v38;  // xmm1
    int v39;  // xmm3
    uint128_t v40;  // xmm2
    uint128_t v41;  // xmm2
    uint128_t v42;  // xmm0
    uint128_t v43;  // xmm1
    uint128_t v44;  // xmm3
    uint128_t v45;  // xmm2
    uint128_t v46;  // xmm1
    uint128_t v47;  // xmm0
    uint128_t v48;  // xmm2
    uint128_t v49;  // xmm1
    uint128_t v50;  // xmm1
    uint128_t v51;  // xmm3
    uint128_t v52;  // xmm2
    uint128_t v53;  // xmm2
    uint128_t v54;  // xmm1
    int v55;  // xmm3
    uint128_t v56;  // xmm2
    uint128_t v57;  // xmm2
    uint128_t v58;  // xmm0
    uint128_t v59;  // xmm1
    uint128_t v60;  // xmm3
    uint128_t v61;  // xmm2
    uint128_t v62;  // xmm1
    uint128_t v63;  // xmm0
    uint128_t v64;  // xmm2
    uint128_t v65;  // xmm1

    v18 = v20;
    v17 = a2;
    *((unsigned int *)&v16) = a3;
    v21 = v18;
    v22 = 0;
    *((unsigned long long *)&v22) = 0x3ff0000000000000;
    *((unsigned long long *)&v22) = (unsigned long long)(v22 / v23);
    *((unsigned long long *)&v12) = (unsigned long long)v22;
    *((unsigned long long *)&v23) = v18;
    v24 = 0;
    *((unsigned long long *)&v24) = 0x3ff0000000000000;
    *((unsigned long long *)&v24) = (unsigned long long)(v24 / v23);
    *((unsigned long long *)&v11) = (unsigned long long)v24;
    *((unsigned long long *)&v23) = a0;
    v25 = 0;
    *((unsigned long long *)&v25) = 0x3ff0000000000000;
    *((unsigned long long *)&v25) = (unsigned long long)(v25 / v23);
    v10 = (unsigned long long)v25;
    v9 = 0x4000000000000000;
    v8 = 0x3ff0000000000000;
    v26 = 0;
    *((unsigned long long *)&v26) = v9;
    v27 = 0;
    *((unsigned long long *)&v27) = v12;
    xmm0lq<8> = Conv(128->64, ((xmm0<16> * Conv(64->128, Load(addr=stack_base-88, size=8, endness=Iend_LE))) / (xmm1<16> * Conv(64->128, Load(addr=stack_base-72, size=8, endness=Iend_LE)))))
    v7 = (unsigned long long)v26;
    v28 = 0;
    *((unsigned long long *)&v28) = v8;
    v29 = 0;
    *((unsigned long long *)&v29) = v11;
    xmm0lq<8> = Conv(128->64, ((xmm0<16> * Conv(64->128, Load(addr=stack_base-88, size=8, endness=Iend_LE))) / (xmm1<16> * Conv(64->128, Load(addr=stack_base-80, size=8, endness=Iend_LE)))))
    v6 = (unsigned long long)v28;
    v30 = 0;
    *((unsigned long long *)&v30) = 0x4000000000000000;
    s_80 =L Conv(128->64, (Conv(64->128, (Load(addr=stack_base-112, size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) / xmm1<16>))<8>
    v31 = 0;
    *((unsigned long long *)&v31) = 0x3ff0000000000000;
    xmm0lq<8> = Conv(128->64, (xmm0<16> + Conv(64->128, Load(addr=stack_base-112, size=8, endness=Iend_LE))))
    *((unsigned long long *)&v4) = (unsigned long long)v31;
    v3 = v5;
    v32 = 0;
    *((unsigned long long *)&v32) = 0x4000000000000000;
    s_98 =L Conv(128->64, (Conv(64->128, (Load(addr=stack_base-120, size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) / xmm1<16>))<8>
    v33 = 0;
    *((unsigned long long *)&v33) = 0x3ff0000000000000;
    xmm0lq<8> = Conv(128->64, (xmm0<16> + Conv(64->128, Load(addr=stack_base-120, size=8, endness=Iend_LE))))
    *((unsigned long long *)&v1) = (unsigned long long)v33;
    v0 = v2;
    for (v15 = 1; v15 <= a0; v15 += 1)
    {
        for (v14 = 1; v14 < v18 - 1; v14 += 1)
        {
            *((long long *)(v16 + v14 * 8)) = 0x3ff0000000000000;
            a4[1000 * v14] = 0;
            a5[1000 * v14] = *((long long *)(v16 + v14 * 8));
            for (v13 = 1; v13 < v18 - 1; v13 += 1)
            {
                v34 = 0;
                *((unsigned long long *)&v34) = v5;
                v35 = 0;
                *((unsigned long long *)&v35) = a4[1000 * v14 + v13 - 1];
                v36 = 0;
                *((unsigned long long *)&v36) = v4;
                STORE(addr=((r8<8> + (Conv(32->s64, Load(addr=stack_base-56, size=4, endness=Iend_LE)) * 0x1f40<64>)) + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x8<64>)), data=Conv(128->64, (Conv(64->128, (Load(addr=stack_base-144, size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) / ((xmm1<16> * xmm3<16>) + xmm2<16>))), size=8, endness=Iend_LE, guard=None)
                v37 = 0;
                *((unsigned long long *)&v37) = a2[1000 * v13 + v14 - 1];
                v38 = 0;
                *((unsigned long long *)&v38) = v2;
                v39 = 0;
                *((unsigned long long *)&v39) = 0x3ff0000000000000;
                t226 = ((Conv(64->128, (Load(addr=stack_base-152, size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm2<16>) + (((xmm1<16> * 0x2<8>) + xmm3<16>) * Conv(64->128, Load(addr=((rdx<8> + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x1f40<64>)) + (Conv(32->s64, Load(addr=stack_base-56, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
                v40 = 0;
                *((unsigned long long *)&v40) = a2[1000 * v13 + v14 + 1];
                t262 = ((Conv(64->128, (Load(addr=stack_base-168, size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm2<16>) + t226)
                v41 = 0;
                *((unsigned long long *)&v41) = a5[1000 * v14 + v13 - 1];
                xmm0<16> = ((Conv(64->128, (Load(addr=stack_base-128, size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm2<16>) + t262)
                v43 = 0;
                *((unsigned long long *)&v43) = v5;
                a3 = v13;
                v44 = 0;
                *((unsigned long long *)&v44) = a4[1 + 1000 * v14 + a3];
                v45 = 0;
                *((unsigned long long *)&v45) = v4;
                v46 = v43 * v44 + v45;
                *((unsigned long long *)&v42) = v42 / v46;
                a5[1000 * v14 + v13] = v42;
            }
            *((long long *)(v16 + (v18 - 1) * 8000 + v14 * 8)) = 0x3ff0000000000000;
            for (v13 = v18 - 2; v13 >= 1; v13 -= 1)
            {
                v47 = 0;
                *((unsigned long long *)&v47) = a4[1000 * v14 + v13];
                v48 = 0;
                *((unsigned long long *)&v48) = *((long long *)(v16 + (v13 + 1) * 8000 + v14 * 8));
                v49 = 0;
                *((unsigned long long *)&v49) = a5[1000 * v14 + v13];
                *((unsigned long long *)&v47) = v47 * v48 + v49;
                *((unsigned long long *)(v16 + v13 * 8000 + v14 * 8)) = v47;
            }
        }
        for (v14 = 1; v14 < v18 - 1; v14 += 1)
        {
            a2[1000 * v14] = 0x3ff0000000000000;
            a4[1000 * v14] = 0;
            a5[1000 * v14] = a2[1000 * v14];
            for (v13 = 1; v13 < v18 - 1; v13 += 1)
            {
                v50 = 0;
                *((unsigned long long *)&v50) = v2;
                v51 = 0;
                *((unsigned long long *)&v51) = a4[1000 * v14 + v13 - 1];
                v52 = 0;
                *((unsigned long long *)&v52) = v1;
                STORE(addr=((r8<8> + (Conv(32->s64, Load(addr=stack_base-56, size=4, endness=Iend_LE)) * 0x1f40<64>)) + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x8<64>)), data=Conv(128->64, (Conv(64->128, (Load(addr=stack_base-168, size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) / ((xmm1<16> * xmm3<16>) + xmm2<16>))), size=8, endness=Iend_LE, guard=None)
                v53 = 0;
                *((unsigned long long *)&v53) = *((long long *)(v16 + (v14 - 1) * 8000 + v13 * 8));
                v54 = 0;
                *((unsigned long long *)&v54) = v5;
                v55 = 0;
                *((unsigned long long *)&v55) = 0x3ff0000000000000;
                t222 = ((Conv(64->128, (Load(addr=stack_base-128, size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm2<16>) + (((xmm1<16> * 0x2<8>) + xmm3<16>) * Conv(64->128, Load(addr=((Load(addr=stack_base-32, size=8, endness=Iend_LE) + (Conv(32->s64, Load(addr=stack_base-56, size=4, endness=Iend_LE)) * 0x1f40<64>)) + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
                v56 = 0;
                *((unsigned long long *)&v56) = *((long long *)(v16 + (v14 + 1) * 8000 + v13 * 8));
                t258 = ((Conv(64->128, (Load(addr=stack_base-144, size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm2<16>) + t222)
                v57 = 0;
                *((unsigned long long *)&v57) = a5[1000 * v14 + v13 - 1];
                xmm0<16> = ((Conv(64->128, (Load(addr=stack_base-152, size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm2<16>) + t258)
                v59 = 0;
                *((unsigned long long *)&v59) = v2;
                v60 = 0;
                *((unsigned long long *)&v60) = a4[1000 * v14 + v13 - 1];
                v61 = 0;
                *((unsigned long long *)&v61) = v1;
                v62 = v59 * v60 + v61;
                *((unsigned long long *)&v58) = v58 / v62;
                a5[1000 * v14 + v13] = v58;
            }
            a2[1000 * v14 + v18 - 1] = 0x3ff0000000000000;
            for (v13 = v18 - 2; v13 >= 1; v13 -= 1)
            {
                v63 = 0;
                *((unsigned long long *)&v63) = a4[1000 * v14 + v13];
                v64 = 0;
                *((unsigned long long *)&v64) = a2[1000 * v14 + v13 + 1];
                v65 = 0;
                *((unsigned long long *)&v65) = a5[1000 * v14 + v13];
                *((unsigned long long *)&v63) = v63 * v64 + v65;
                a2[1000 * v14 + v13] = v63;
            }
        }
    }
    return;
}

extern char .L.str.7;

long long submain(unsigned int a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x40]
    void* v1;  // [bp-0x38]
    void* v2;  // [bp-0x30]
    unsigned long v3;  // [bp-0x28]
    unsigned int v4;  // [bp-0x20]
    unsigned int v5;  // [bp-0x1c]
    unsigned int v6;  // [bp-0xc]
    void* v11;  // rdi
    void* v12;  // rdi
    void* v14;  // rdi

    v6 = a0;
    v5 = 1000;
    v4 = 500;
    v3 = polybench_alloc_data(0xf4240, 0x8);
    v2 = polybench_alloc_data(0xf4240, 0x8);
    v1 = polybench_alloc_data(0xf4240, 0x8);
    v0 = polybench_alloc_data(0xf4240, 0x8);
    init_array(v5, v3);
    kernel_adi(v4, v5, v3, (unsigned int)v2, v1, v0);
    if (v6 > 42)
    {
        if (strcmp(*(a1), &.L.str.7) == 0)
        {
            print_array(v5, v3);
            free(v3);
            v11 = v2;
            free(rdi<8>);
            v12 = v1;
            free(rdi<8>);
            v14 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v3);
        v11 = v2;
        free(rdi<8>);
        v12 = v1;
        free(rdi<8>);
        v14 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v3);
    v11 = v2;
    free(rdi<8>);
    v12 = v1;
    free(rdi<8>);
    v14 = v0;
    free(rdi<8>);
    return 0;
}

