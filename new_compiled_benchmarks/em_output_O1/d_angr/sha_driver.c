long long local_memset(unsigned long a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned long v1;  // rdx
    unsigned long v2;  // rax
    unsigned long v3;  // rcx
    unsigned int *v4;  // rdi
    unsigned long long v5;  // rax
    unsigned int v6;  // cc_dep1

    if ((unsigned int)v1 >= 4)
    {
        v4 = a0 + (v3 > 0? (v3 - 1 << 2) + 4 : 0);
        v5 = ((char)(v1 >> 31 & 1 ^ 1)? (unsigned int)v1 : (unsigned int)(v1 + 3)) >> 2;
        do
        {
            *(v4) = a1;
            v4 = &v4[1];
            v6 = v5;
            v5 -= 1;
        }
        while (v6 > 1);
        return v5;
    }
    return v2;
}

long long local_memcpy(unsigned int *a0, unsigned int *a1, unsigned int a2)
{
    unsigned long long v1;  // rdx
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned int v4;  // cc_dep1

    if ((unsigned int)v1 >= 4)
    {
        v3 = ((char)(v1 >> 31 & 1 ^ 1)? (unsigned int)v1 : (unsigned int)(v1 + 3)) >> 2;
        do
        {
            *((unsigned int *)&v1) = *(a1);
            a1 = &a1[1];
            *(a0) = v1;
            a0 = &a0[1];
            v4 = v3;
            v3 -= 1;
        }
        while (v4 > 1);
        return v3;
    }
    return v2;
}

typedef struct struct_0 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
    char padding_11[15];
    uint128_t field_20;
    uint128_t field_30;
} struct_0;

extern char got.sha_info_data;
extern char got.sha_info_digest;

int sha_transform()
{
    int tmp_132;  // tmp #132
    int tmp_114;  // tmp #114
    unsigned int v1;  // [bp-0x1b0]
    unsigned int v3;  // [bp-0x184]
    int v4;  // [bp-0x178]
    int v5;  // [bp-0x168]
    int v6;  // [bp-0x158]
    int v7;  // [bp-0x148]
    unsigned int v8;  // [bp-0x138]
    unsigned long long v13;  // rax
    void* v14;  // cc_ndep
    struct_0 *v15;  // rax
    unsigned long long v16;  // rdi
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rcx
    unsigned long long v20;  // cc_op
    void* v21;  // cc_dep1
    void* v22;  // cc_dep2
    void* v23;  // rbx
    unsigned long long v24;  // r15
    unsigned long long v25;  // r13
    unsigned long long v26;  // r12
    unsigned long long v27;  // r11
    unsigned long long v28;  // r14
    unsigned long long v29;  // rbp
    unsigned long v30;  // cc_ndep
    unsigned long long v31;  // cc_op
    void* v32;  // cc_dep1
    unsigned long long v33;  // cc_dep2
    unsigned long long v34;  // r13
    unsigned long long v35;  // rbx
    unsigned long long v36;  // r12
    unsigned long long v37;  // r15
    unsigned long v38;  // cc_ndep
    unsigned long long v39;  // cc_dep1
    unsigned long long v40;  // cc_dep2
    unsigned long long v41;  // r13
    unsigned long v42;  // cc_ndep
    unsigned long long v43;  // cc_dep1
    unsigned long long v44;  // cc_dep2
    unsigned long long v45;  // r13
    unsigned long long v46;  // rbx
    unsigned long long v47;  // r12
    unsigned long v48;  // cc_ndep
    unsigned long long v49;  // r14
    unsigned long long v50;  // r11
    unsigned long long v51;  // cc_dep1
    unsigned long long v52;  // cc_dep2
    unsigned long long v53;  // rbp
    unsigned long long v54;  // r9
    unsigned long long v55;  // r10
    unsigned long long v56;  // r15

    *((int128_t *)&v7) = *((int128_t *)(got.sha_info_data + 48));
    *((int128_t *)&v6) = *((int128_t *)(got.sha_info_data + 32));
    *((int128_t *)&v5) = *((int128_t *)(got.sha_info_data + 16));
    *((int128_t *)&v4) = *((int128_t *)got.sha_info_data);
    v13 = 16;
    do
    {
        v8 = (int)v6 ^ v3 ^ v1 ^ (int)v4;
        v14 = 0;
        v13 += 1;
    }
    while (v13 != 80);
    v15 = got.sha_info_digest;
    v16 = *((int *)(got.sha_info_digest + 4));
    v17 = *((int *)(got.sha_info_digest + 8));
    v18 = *((int *)(got.sha_info_digest + 12));
    v19 = *((int *)(got.sha_info_digest + 16));
    v20 = 19;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = *((int *)(got.sha_info_digest + 16));
    v25 = *((int *)(got.sha_info_digest + 12));
    v54 = *((int *)(got.sha_info_digest + 8));
    v26 = *((int *)(got.sha_info_digest + 4));
    v55 = *((int *)got.sha_info_digest);
    do
    {
        v27 = v55;
        v28 = v54;
        v29 = v25;
        tmp_132 = (&v8)[-16] + (!((unsigned int)v26) & (unsigned int)v25) + (unsigned int)v24 + ((unsigned int)v54 & (unsigned int)v26) + ((unsigned int)v55 * 32 | (unsigned int)v55 >> 27);
        v55 = (&v8)[-16] + (!((unsigned int)v26) & (unsigned int)v25) + (unsigned int)v24 + ((unsigned int)v54 & (unsigned int)v26) + ((unsigned int)v55 * 32 | (unsigned int)v55 >> 27) + 1518500249;
        v54 = (unsigned int)v26 * 0x40000000 | (unsigned int)v26 >> 2;
        v30 = [D] amd64g_calculate_rflags_c(0x27<64>, Conv(32->64, ((Conv(64->32, r12<8>) << 0x1e<8>) | (Conv(64->32, r12<8>) >> 0x2<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
        v23 += 1;
        v24 = v25;
        v25 = v28;
        v26 = v27;
        v31 = 8;
        v32 = v23;
        v33 = 20;
    }
    while (v23 != 20);
    v34 = 20;
    do
    {
        v35 = v55;
        v36 = v54;
        v37 = v28;
        tmp_114 = ((unsigned int)v54 ^ (unsigned int)v27 ^ (unsigned int)v28) + ((unsigned int)v55 * 32 | (unsigned int)v55 >> 27) + (unsigned int)v29 + (&v8)[-16];
        v55 = ((unsigned int)v54 ^ (unsigned int)v27 ^ (unsigned int)v28) + ((unsigned int)v55 * 32 | (unsigned int)v55 >> 27) + (unsigned int)v29 + (&v8)[-16] + 1859775393;
        v54 = (unsigned int)v27 * 0x40000000 | (unsigned int)v27 >> 2;
        v38 = [D] amd64g_calculate_rflags_c(0x27<64>, Conv(32->64, ((Conv(64->32, r11<8>) << 0x1e<8>) | (Conv(64->32, r11<8>) >> 0x2<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
        v34 += 1;
        v29 = v28;
        v28 = v36;
        v27 = v35;
        v39 = v34;
        v40 = 40;
    }
    while (v34 != 40);
    v41 = 40;
    do
    {
        v50 = v55;
        v49 = v54;
        v53 = v36;
        tmp_132 = (&v8)[-16] + ((unsigned int)v36 & (unsigned int)v54 | ((unsigned int)v36 | (unsigned int)v54) & (unsigned int)v35) + ((unsigned int)v55 * 32 | (unsigned int)v55 >> 27) + (unsigned int)v37;
        v55 = (&v8)[-16] + ((unsigned int)v36 & (unsigned int)v54 | ((unsigned int)v36 | (unsigned int)v54) & (unsigned int)v35) + ((unsigned int)v55 * 32 | (unsigned int)v55 >> 27) + (unsigned int)v37 - 1894007588;
        v54 = (unsigned int)v35 * 0x40000000 | (unsigned int)v35 >> 2;
        v42 = [D] amd64g_calculate_rflags_c(0x27<64>, Conv(32->64, ((Conv(64->32, rbx<8>) << 0x1e<8>) | (Conv(64->32, rbx<8>) >> 0x2<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
        v41 += 1;
        v37 = v36;
        v36 = v49;
        v35 = v50;
        v43 = v41;
        v44 = 60;
    }
    while (v41 != 60);
    v56 = 60;
    do
    {
        v45 = v55;
        v46 = v54;
        v47 = v49;
        tmp_114 = ((unsigned int)v54 ^ (unsigned int)v50 ^ (unsigned int)v49) + ((unsigned int)v55 * 32 | (unsigned int)v55 >> 27) + (unsigned int)v53 + (&v8)[-16];
        v55 = ((unsigned int)v54 ^ (unsigned int)v50 ^ (unsigned int)v49) + ((unsigned int)v55 * 32 | (unsigned int)v55 >> 27) + (unsigned int)v53 + (&v8)[-16] - 899497514;
        v54 = (unsigned int)v50 * 0x40000000 | (unsigned int)v50 >> 2;
        v48 = [D] amd64g_calculate_rflags_c(0x27<64>, Conv(32->64, ((Conv(64->32, r11<8>) << 0x1e<8>) | (Conv(64->32, r11<8>) >> 0x2<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
        v56 += 1;
        v53 = v49;
        v49 = v46;
        v50 = v45;
        v51 = v56;
        v52 = 80;
    }
    while (v56 != 80);
    *((unsigned int *)&v55) = v55 + *((int *)got.sha_info_digest);
    *((unsigned int *)&v15->field_0) = v55;
    v15->field_4 = v50 + v16;
    *((unsigned int *)&v54) = v54 + v17;
    v15->field_8 = v54;
    v15->field_c = v49 + v18;
    *((unsigned int *)&v15->field_10) = v47 + v19;
    return;
}

extern char got.sha_info_count_hi;
extern char got.sha_info_count_lo;
extern char got.sha_info_digest;

double sha_init()
{
    *((int128_t *)got.sha_info_digest) = 17279655951921914625;
    *((int *)(got.sha_info_digest + 16)) = 3285377520;
    *((int *)got.sha_info_count_lo) = 0;
    *((int *)got.sha_info_count_hi) = 0;
    return 17279655951921914625;
}

extern char got.sha_info_count_hi;
extern char got.sha_info_count_lo;
extern char got.sha_info_data;

int sha_update(unsigned long long a0, unsigned int a1)
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // r14
    unsigned int v4;  // cc_dep1
    unsigned long long v5;  // rax
    unsigned int *v6;  // rcx
    unsigned int *v7;  // rdx
    unsigned int *v9;  // rbx
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rax
    unsigned int *v12;  // rcx
    unsigned int v13;  // cc_dep1

    v2 = v1;
    v9 = a0;
    if ((char)__CFADD__(v1 << 3, *((int *)got.sha_info_count_lo)))
    {
        *((int *)got.sha_info_count_hi) = *((int *)got.sha_info_count_hi) + 1;
    }
    *((unsigned int *)got.sha_info_count_lo) = (unsigned int)v1 * 8 + *((int *)got.sha_info_count_lo);
    *((unsigned int *)got.sha_info_count_hi) = *((int *)got.sha_info_count_hi) + (unsigned int)v1 / 0x20000000;
    if ((unsigned int)v1 >= 64)
    {
        while (true)
        {
            v5 = 16;
            v6 = got.sha_info_data;
            v7 = v9;
            do
            {
                *((unsigned int *)&a0) = *(v7);
                v7 = &v7[1];
                *(v6) = a0;
                v6 = &v6[1];
                v4 = v5;
                v5 -= 1;
            }
            while (v4 > 1);
            v9 = &v9[16];
            v10 = v2 - 64;
            if ((unsigned int)v2 <= 127)
            {
                break;
            }
        }
        if ((unsigned int)(v2 - 64) < 4)
        {
            return sha_transform();
        }
    }
    else
    {
        v10 = v1;
        if ((unsigned int)v1 < 4)
        {
            return (unsigned int)v1 / 0x20000000;
        }
    }
    if ((unsigned int)v1 < 64 && (unsigned int)v1 >= 4 || (unsigned int)(v2 - 64) >= 4 && (unsigned int)v1 >= 64)
    {
        v11 = ((char)(v10 >> 31 & 1 ^ 1)? (unsigned int)v10 : (unsigned int)(v10 + 3)) >> 2;
        v12 = got.sha_info_data;
        do
        {
            *((unsigned int *)&v1) = *(v9);
            v9 = &v9[1];
            *(v12) = v1;
            v12 = &v12[1];
            v13 = v11;
            v11 -= 1;
        }
        while (v13 > 1);
        return eax<4>;
    }
}

typedef struct struct_0 {
    char field_0;
    char padding_1[15];
    uint128_t field_10;
    uint128_t field_20;
    unsigned long long field_30;
    unsigned int field_38;
    unsigned int field_3c;
} struct_0;

extern char got.sha_info_count_hi;
extern char got.sha_info_count_lo;
extern char got.sha_info_data;

long long sha_final()
{
    unsigned long long v1;  // rbx
    struct_0 *v2;  // r14
    unsigned long v7;  // rax
    unsigned long v8;  // rax

    v1 = *((int *)got.sha_info_count_lo);
    v2 = got.sha_info_data;
    *((int *)(got.sha_info_data + ((unsigned int)v1 / 8 & 63) * 4)) = 128;
    if (((unsigned int)(v1 >> 3) & 63) >= 56)
    {
        if (((unsigned int)(v1 >> 3) & 63 ^ 63) >= 4)
        {
            memset(got.sha_info_data + ((unsigned int)v1 / 8 & 63) * 4 + 4, 0x0, ((unsigned int)(((unsigned int)v1 / 8 & 63 ^ 63) >> 2) - ((unsigned int)(((unsigned int)(v1 >> 3) & 63 ^ 63) >> 2) <= 0? (unsigned int)(((unsigned int)(v1 >> 3) & 63 ^ 63) >> 2) : 1)) * 4 + 4);
            sha_transform();
            v2->field_20 = 0;
            v2->field_10 = 0;
            *((int128_t *)&v2->field_0) = 0;
            v2->field_30 = 0;
            v2->field_38 = *((int *)*((long long *)&got.sha_info_count_hi));
            v2->field_3c = v1;
            sha_transform();
            return v8;
        }
        sha_transform();
        v2->field_20 = 0;
        v2->field_10 = 0;
        *((int128_t *)&v2->field_0) = 0;
        v2->field_30 = 0;
        v2->field_38 = *((int *)*((long long *)&got.sha_info_count_hi));
        v2->field_3c = v1;
        sha_transform();
        return v7;
    }
    if (((unsigned int)(v1 >> 3) & 63) <= 51)
    {
        memset(got.sha_info_data + ((unsigned int)v1 / 8 & 63) * 4 + 4, 0x0, ...);
        v2->field_38 = *((int *)*((long long *)&got.sha_info_count_hi));
        v2->field_3c = v1;
        sha_transform();
        return sha_transform();
    }
    v2->field_38 = *((int *)*((long long *)&got.sha_info_count_hi));
    v2->field_3c = v1;
    sha_transform();
    return sha_transform();
}

typedef struct struct_0 {
    char field_0;
    char padding_1[15];
    char field_10;
    char padding_11[15];
    uint128_t field_20;
    unsigned long long field_30;
    unsigned int field_38;
    unsigned int field_3c;
} struct_0;

extern char got.in_i;
extern char got.indata;
extern char got.sha_info_count_hi;
extern char got.sha_info_count_lo;
extern char got.sha_info_data;
extern char got.sha_info_digest;

int sha_stream()
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v2;  // rax
    void* v3;  // r15
    unsigned long long v5;  // rbx
    struct_0 *v6;  // r14

    v0 = v2;
    *((int128_t *)got.sha_info_digest) = 17279655951921914625;
    *((int *)(got.sha_info_digest + 16)) = 3285377520;
    *((int *)got.sha_info_count_lo) = 0;
    *((int *)got.sha_info_count_hi) = 0;
    v3 = 0;
    while (true)
    {
        sha_update(v3 * 0x2000 + got.indata, *((int *)(got.in_i + v3 * 4)));
        v3 += 1;
        if (v3 != 0)
        {
            break;
        }
    }
    v5 = *((int *)got.sha_info_count_lo);
    v6 = got.sha_info_data;
    *((int *)(got.sha_info_data + ((unsigned int)v5 / 8 & 63) * 4)) = 128;
    if (((unsigned int)(v5 >> 3) & 63) >= 56)
    {
        if (((unsigned int)(v5 >> 3) & 63 ^ 63) >= 4)
        {
            memset(got.sha_info_data + ((unsigned int)v5 / 8 & 63) * 4 + 4, 0x0, ((unsigned int)(((unsigned int)v5 / 8 & 63 ^ 63) >> 2) - ((unsigned int)(((unsigned int)(v5 >> 3) & 63 ^ 63) >> 2) <= 0? (unsigned int)(((unsigned int)(v5 >> 3) & 63 ^ 63) >> 2) : 1)) * 4 + 4);
            sha_transform();
            v6->field_20 = 0;
            *((int128_t *)&v6->field_10) = 0;
            *((int128_t *)&v6->field_0) = 0;
            v6->field_30 = 0;
            v6->field_38 = *((int *)got.sha_info_count_hi);
            v6->field_3c = v5;
            sha_transform();
            return;
        }
        sha_transform();
        v6->field_20 = 0;
        *((int128_t *)&v6->field_10) = 0;
        *((int128_t *)&v6->field_0) = 0;
        v6->field_30 = 0;
        v6->field_38 = *((int *)got.sha_info_count_hi);
        v6->field_3c = v5;
        sha_transform();
        return;
    }
    if (((unsigned int)(v5 >> 3) & 63) <= 51)
    {
        memset(got.sha_info_data + ((unsigned int)v5 / 8 & 63) * 4 + 4, 0x0, ...);
        v6->field_38 = *((int *)got.sha_info_count_hi);
        v6->field_3c = v5;
        sha_transform();
        return;
    }
    v6->field_38 = *((int *)got.sha_info_count_hi);
    v6->field_3c = v5;
    sha_transform();
    return;
}

extern char got.endTimer;
extern char got.outData;
extern char got.sha_info_digest;
extern char got.startTimer;

long long submain()
{
    char v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x18]
    void* v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v6;  // xmm0lq
    unsigned long long v7;  // xmm1lq
    uint128_t v8;  // xmm1
    int v9;  // xmm0
    void* v11;  // rdi
    void* v12;  // rdx
    unsigned long long v13;  // rax
    int v15;  // xmm1
    uint128_t v16;  // xmm0
    void* v18;  // rax

    v3 = 0;
    (unsigned int)v4 = gettimeofday(&v0, NULL);
    if ((unsigned int)v4 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v4);
    }
    v6 = *((long long *)&v0);
    v7 = v1;
    *((unsigned long long *)&v8) = (unsigned long long)(v8 * 4517329193108106637 + v9);
    *((unsigned long long *)got.startTimer) = v8;
    sha_stream();
    v12 = 0;
    do
    {
        v11 = 0;
        *((char *)&v11) = *((int *)(got.sha_info_digest + (v12 << 2))) != *((int *)(got.outData + (v12 << 2)));
        v3 += v11;
        v12 += 1;
    }
    while (v12 != 5);
    (unsigned int)v13 = gettimeofday(&v0, NULL);
    if ((unsigned int)v13 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v13);
        v15 = 0;
        *((unsigned long long *)&v15) = *((long long *)&v0);
        v16 = 0;
        *((unsigned long long *)&v16) = v1;
        *((unsigned long long *)&v16) = (unsigned long long)(v16 * 4517329193108106637 + v15);
        *((unsigned long long *)*((long long *)&got.endTimer)) = v16;
        printf("%0.6f\n");
        v18 = v3;
        return v18;
    }
    v15 = 0;
    *((unsigned long long *)&v15) = *((long long *)&v0);
    v16 = 0;
    *((unsigned long long *)&v16) = v1;
    *((unsigned long long *)&v16) = (unsigned long long)(v16 * 4517329193108106637 + v15);
    *((unsigned long long *)*((long long *)&got.endTimer)) = v16;
    printf("%0.6f\n");
    v18 = v3;
    return v18;
}

