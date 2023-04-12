extern char got.main_result;
extern char got.nb;
extern char got.round_val;
extern char got.word;

int encrypt(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned long v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned long v3;  // rax
    void* v5;  // rbx
    unsigned int v6;  // edx
    unsigned int v7;  // ecx
    unsigned long long v8;  // rax
    void* v9;  // rcx
    void* v10;  // r15
    unsigned long long v11;  // r14
    unsigned int v12;  // r12d
    unsigned int v14;  // cc_dep1
    unsigned long long v15;  // rax
    unsigned long long v16;  // r12
    void* v17;  // rcx
    unsigned long long v18;  // rcx
    void* v19;  // rdx
    void* v20;  // r8

    v0 = v3;
    v5 = a0;
    KeySchedule(a2, a1);
    v8 = 4;
    if (!(*((int *)&((char *)&v0)[4]) > 192191))
    {
        v7 = 4;
        if (*((int *)&((char *)&v0)[4]) <= 128255)
        {
            v6 = 0;
        }
        else
        {
            if (*((int *)&((char *)&v0)[4]) == 192128)
            {
                v6 = 2;
            }
        }
    }
    else if (*((int *)&((char *)&v0)[4]) > 256127)
    {
        if (*((int *)&((char *)&v0)[4]) != 256128)
        {
        }
        else
        {
            v6 = 4;
            v7 = 4;
        }
        if (*((int *)&((char *)&v0)[4]) == 256192)
        {
            v7 = 6;
        }
    }
    if ((*((int *)&((char *)&v0)[4]) <= 256127 || *((int *)&((char *)&v0)[4]) <= 192191) && (*((int *)&((char *)&v0)[4]) <= 192191 || *((int *)&((char *)&v0)[4]) == 192192) && (*((int *)&((char *)&v0)[4]) == 128192 || *((int *)&((char *)&v0)[4]) > 192191) && (*((int *)&((char *)&v0)[4]) <= 128255 || *((int *)&((char *)&v0)[4]) > 192191) && (*((int *)&((char *)&v0)[4]) > 192191 || *((int *)&((char *)&v0)[4]) != 128128))
    {
        v7 = 6;
        v6 = 2;
    }
    if (*((int *)&((char *)&v0)[4]) == 0x1f500 && *((int *)&((char *)&v0)[4]) <= 192191 && *((int *)&((char *)&v0)[4]) > 128255 || *((int *)&((char *)&v0)[4]) == 0x2ef00 && *((int *)&((char *)&v0)[4]) <= 256127 && *((int *)&((char *)&v0)[4]) > 192191 && *((int *)&((char *)&v0)[4]) != 192192 || *((int *)&((char *)&v0)[4]) == 0x3e900 && *((int *)&((char *)&v0)[4]) != 256128 && *((int *)&((char *)&v0)[4]) > 256127 && *((int *)&((char *)&v0)[4]) > 192191 && *((int *)&((char *)&v0)[4]) != 256192)
    {
        v7 = 8;
    }
    if (*((int *)&((char *)&v0)[4]) == 0x1f500 && *((int *)&((char *)&v0)[4]) <= 192191 && *((int *)&((char *)&v0)[4]) > 128255 || *((int *)&((char *)&v0)[4]) == 0x2ef00 && *((int *)&((char *)&v0)[4]) <= 256127 && *((int *)&((char *)&v0)[4]) > 192191 && *((int *)&((char *)&v0)[4]) != 192192 || *((int *)&((char *)&v0)[4]) == 256192 && *((int *)&((char *)&v0)[4]) != 256128 && *((int *)&((char *)&v0)[4]) > 256127 && *((int *)&((char *)&v0)[4]) > 192191 || *((int *)&((char *)&v0)[4]) == 0x3e900 && *((int *)&((char *)&v0)[4]) != 256128 && *((int *)&((char *)&v0)[4]) > 256127 && *((int *)&((char *)&v0)[4]) > 192191 && *((int *)&((char *)&v0)[4]) != 256192)
    {
        v6 = 4;
    }
    if (*((int *)&((char *)&v0)[4]) <= 128255 && *((int *)&((char *)&v0)[4]) <= 192191 && *((int *)&((char *)&v0)[4]) == 128128 || *((int *)&((char *)&v0)[4]) == 0x1f500 && *((int *)&((char *)&v0)[4]) <= 192191 && *((int *)&((char *)&v0)[4]) > 128255 || *((int *)&((char *)&v0)[4]) == 256128 && *((int *)&((char *)&v0)[4]) > 256127 && *((int *)&((char *)&v0)[4]) > 192191 || *((int *)&((char *)&v0)[4]) == 0x2ef00 && *((int *)&((char *)&v0)[4]) <= 256127 && *((int *)&((char *)&v0)[4]) > 192191 && *((int *)&((char *)&v0)[4]) != 192192 || *((int *)&((char *)&v0)[4]) == 192128 && *((int *)&((char *)&v0)[4]) <= 192191 && *((int *)&((char *)&v0)[4]) != 0x1f500 && *((int *)&((char *)&v0)[4]) > 128255 || *((int *)&((char *)&v0)[4]) == 256192 && *((int *)&((char *)&v0)[4]) != 256128 && *((int *)&((char *)&v0)[4]) > 256127 && *((int *)&((char *)&v0)[4]) > 192191 || *((int *)&((char *)&v0)[4]) == 0x3e900 && *((int *)&((char *)&v0)[4]) != 256128 && *((int *)&((char *)&v0)[4]) > 256127 && *((int *)&((char *)&v0)[4]) > 192191 && *((int *)&((char *)&v0)[4]) != 256192 || (*((int *)&((char *)&v0)[4]) <= 256127 || *((int *)&((char *)&v0)[4]) <= 192191) && (*((int *)&((char *)&v0)[4]) <= 192191 || *((int *)&((char *)&v0)[4]) == 192192) && (*((int *)&((char *)&v0)[4]) == 128192 || *((int *)&((char *)&v0)[4]) > 192191) && (*((int *)&((char *)&v0)[4]) <= 128255 || *((int *)&((char *)&v0)[4]) > 192191) && (*((int *)&((char *)&v0)[4]) > 192191 || *((int *)&((char *)&v0)[4]) != 128128))
    {
        *((unsigned int *)got.round_val) = v6;
        *((unsigned int *)got.nb) = v7;
        if (*((int *)&((char *)&v0)[4]) == 0x3e900 && *((int *)&((char *)&v0)[4]) > 192255 || *((int *)&((char *)&v0)[4]) == 0x2ef00 && *((int *)&((char *)&v0)[4]) > 192255 || *((int *)&((char *)&v0)[4]) <= 192255 && *((int *)&((char *)&v0)[4]) == 0x1f500 && *((int *)&((char *)&v0)[4]) != 128192)
        {
            v8 = 8;
        }
        if ((*((int *)&((char *)&v0)[4]) <= 192255 || *((int *)&((char *)&v0)[4]) == 256192) && (*((int *)&((char *)&v0)[4]) <= 192255 || *((int *)&((char *)&v0)[4]) != 0x3e900) && (*((int *)&((char *)&v0)[4]) <= 192255 || *((int *)&((char *)&v0)[4]) != 0x2ef00) && (*((int *)&((char *)&v0)[4]) == 128192 || *((int *)&((char *)&v0)[4]) == 192192 || *((int *)&((char *)&v0)[4]) > 192255) && (*((int *)&((char *)&v0)[4]) == 128192 || *((int *)&((char *)&v0)[4]) > 192255 || *((int *)&((char *)&v0)[4]) != 0x1f500))
        {
            v8 = 6;
        }
    }
    v9 = 0;
    v10 = got.word;
    do
    {
        *((int *)((char *)v5 + 0x10 * v9)) = *((int *)((char *)v5 + 0x10 * v9)) ^ *((int *)((char *)v10 + 0x4 * v9));
        *((int *)&((char *)v5 + 0x10 * v9)[4]) = *((int *)&((char *)v5 + 0x10 * v9)[4]) ^ *((int *)&((char *)v10 + 0x4 * v9)[480]);
        *((int *)&((char *)v5 + 0x10 * v9)[8]) = *((int *)&((char *)v5 + 0x10 * v9)[8]) ^ *((int *)&((char *)v10 + 0x4 * v9)[960]);
        *((int *)&((char *)v5 + 0x10 * v9)[12]) = *((int *)&((char *)v5 + 0x10 * v9)[12]) ^ *((int *)&((char *)v10 + 0x4 * v9)[1440]);
        v9 += 1;
    }
    while (v9 != v8);
    v1 = a2;
    v11 = 1;
    if (*((int *)got.round_val) < -8)
    {
        v12 = 1;
    }
    else
    {
        while (true)
        {
            ByteSub_ShiftRow(v5, *((int *)got.nb));
            MixColumn_AddRoundKey(v5, *((int *)got.nb), v11);
            v12 = (unsigned int)v11 + 1;
            v14 = v11;
            v11 += 1;
            if (v14 >= *((int *)got.round_val) + 9)
            {
                break;
            }
        }
    }
    ByteSub_ShiftRow(v5, *((int *)got.nb));
    v15 = 4;
    if (*((int *)&((char *)&v0)[4]) == 0x2ef00 && *((int *)&((char *)&v0)[4]) > 192255 || *((int *)&((char *)&v0)[4]) == 0x3e900 && *((int *)&((char *)&v0)[4]) > 192255 || *((int *)&((char *)&v0)[4]) == 0x1f500 && *((int *)&((char *)&v0)[4]) <= 192255 && *((int *)&((char *)&v0)[4]) != 128192)
    {
        v15 = 8;
    }
    if ((*((int *)&((char *)&v0)[4]) == 256192 || *((int *)&((char *)&v0)[4]) <= 192255) && (*((int *)&((char *)&v0)[4]) <= 192255 || *((int *)&((char *)&v0)[4]) != 0x2ef00) && (*((int *)&((char *)&v0)[4]) <= 192255 || *((int *)&((char *)&v0)[4]) != 0x3e900) && (*((int *)&((char *)&v0)[4]) == 192192 || *((int *)&((char *)&v0)[4]) == 128192 || *((int *)&((char *)&v0)[4]) > 192255) && (*((int *)&((char *)&v0)[4]) == 128192 || *((int *)&((char *)&v0)[4]) != 0x1f500 || *((int *)&((char *)&v0)[4]) > 192255))
    {
        v15 = 6;
    }
    v16 = (unsigned int)v15 * v12;
    v17 = 0;
    do
    {
        *((int *)((char *)v5 + 0x10 * v17)) = *((int *)((char *)v5 + 0x10 * v17)) ^ *((int *)&((char *)v10 + 0x4 * v17)[4 * v16]);
        *((int *)&((char *)v5 + 0x10 * v17)[4]) = *((int *)&((char *)v5 + 0x10 * v17)[4]) ^ *((int *)&((char *)v10 + 0x4 * v17)[4 * v16 + 480]);
        *((int *)&((char *)v5 + 0x10 * v17)[8]) = *((int *)&((char *)v5 + 0x10 * v17)[8]) ^ *((int *)&((char *)v10 + 0x4 * v17)[4 * v16 + 960]);
        *((int *)&((char *)v5 + 0x10 * v17)[12]) = *((int *)&((char *)v5 + 0x10 * v17)[12]) ^ *((int *)&((char *)v10 + 0x4 * v17)[4 * v16 + 1440]);
        v17 += 1;
    }
    while (v17 != v15);
    v18 = *((int *)got.main_result);
    v19 = 0;
    do
    {
        v20 = 0;
        *((char *)&v20) = *((int *)((char *)v5 + 0x4 * v19)) != *((int *)(4202736 + 0x4 * v19));
        v18 += v20;
        *((unsigned int *)got.main_result) = v18;
        v19 += 1;
    }
    while (v19 != 16);
    return;
}

extern char got.word;

long long AddRoundKey(void* a0, unsigned int a1, unsigned int a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    void* v3;  // rdx
    unsigned int *v4;  // rsi

    v1 = 4;
    if (a1 == 0x2ef00 && a1 > 192255 || a1 == 0x3e900 && a1 > 192255 || a1 == 0x1f500 && a1 <= 192255 && a1 != 128192)
    {
        v1 = 8;
    }
    if ((a1 <= 192255 || a1 == 256192) && (a1 <= 192255 || a1 != 0x2ef00) && (a1 <= 192255 || a1 != 0x3e900) && (a1 == 128192 || a1 == 192192 || a1 > 192255) && (a1 == 128192 || a1 != 0x1f500 || a1 > 192255))
    {
        v1 = 6;
    }
    v2 = (unsigned int)v1 * a2;
    v3 = 0;
    v4 = got.word;
    do
    {
        *((int *)((char *)a0 + 0x10 * v3)) = *((int *)((char *)a0 + 0x10 * v3)) ^ *((int *)&((char *)v4 + 0x4 * v3)[4 * v2]);
        *((int *)&((char *)a0 + 0x10 * v3)[4]) = *((int *)&((char *)a0 + 0x10 * v3)[4]) ^ *((int *)&((char *)v4 + 0x4 * v3)[4 * v2 + 480]);
        *((int *)&((char *)a0 + 0x10 * v3)[8]) = *((int *)&((char *)a0 + 0x10 * v3)[8]) ^ *((int *)&((char *)v4 + 0x4 * v3)[4 * v2 + 960]);
        *((int *)&((char *)a0 + 0x10 * v3)[12]) = *((int *)&((char *)a0 + 0x10 * v3)[12]) ^ *((int *)&((char *)v4 + 0x4 * v3)[4 * v2 + 1440]);
        v3 += 1;
    }
    while (v3 != v1);
    return 0;
}

extern char got.Sbox;

int ByteSub_ShiftRow(unsigned int a0[16], unsigned int a1)
{
    int tmp_259;  // tmp #259
    int tmp_299;  // tmp #299
    int tmp_483;  // tmp #483
    int tmp_577;  // tmp #577
    int tmp_349;  // tmp #349
    int tmp_443;  // tmp #443
    int tmp_537;  // tmp #537
    int tmp_631;  // tmp #631
    int tmp_260;  // tmp #260
    unsigned long long v1;  // rax
    unsigned int v2;  // ecx
    unsigned long long v3;  // rax
    unsigned int v4;  // ecx
    unsigned int *v5;  // rdi
    unsigned long long v6;  // rax
    unsigned int v7;  // ecx
    unsigned int *v8;  // rdi
    unsigned long long v9;  // rdi

    if (a1 != 8)
    {
        if (a1 != 6)
        {
            if (a1 == 4)
            {
                tmp_259 = a0[2];
                v6 = *((long long *)&got.Sbox);
                tmp_299 = *((int *)((a0[1] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[1] & 15) * 4));
                a0[1] = *((int *)((a0[5] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[5] & 15) * 4));
                a0[5] = *((int *)((a0[9] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[9] & 15) * 4));
                a0[9] = *((int *)((a0[13] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[13] & 15) * 4));
                a0[13] = tmp_299;
                tmp_483 = *((int *)((tmp_259 >> 4) * 64 + *((long long *)&got.Sbox) + ((unsigned int)tmp_259 & 15) * 4));
                a0[2] = *((int *)((a0[10] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[10] & 15) * 4));
                a0[10] = tmp_483;
                tmp_577 = *((int *)((a0[6] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[6] & 15) * 4));
                a0[6] = *((int *)((a0[14] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[14] & 15) * 4));
                a0[14] = tmp_577;
                v7 = *((int *)((a0[3] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[3] & 15) * 4));
                a0[3] = *((int *)((a0[15] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[15] & 15) * 4));
                a0[15] = *((int *)((a0[11] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[11] & 15) * 4));
                a0[11] = *((int *)((a0[7] >> 4) * 64 + v6 + (a0[7] & 15) * 4));
                a0[7] = v7;
                a0[0] = *((int *)((a0[0] >> 4) * 64 + v6 + (a0[0] & 15) * 4));
                a0[4] = *((int *)((a0[4] >> 4) * 64 + v6 + (a0[4] & 15) * 4));
                a0[8] = *((int *)((a0[8] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[8] & 15) * 4));
                v9 = &a0[12];
                *((int *)rdi<8>) = *((int *)((*((int *)rdi<8>) >> 4) * 64 + *((long long *)&got.Sbox) + (*((int *)rdi<8>) & 15) * 4));
                return;
            }
            return;
        }
        tmp_259 = a0[2];
        v3 = *((long long *)&got.Sbox);
        tmp_299 = *((int *)((a0[1] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[1] & 15) * 4));
        a0[1] = *((int *)((a0[5] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[5] & 15) * 4));
        a0[5] = *((int *)((a0[9] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[9] & 15) * 4));
        a0[9] = *((int *)((a0[13] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[13] & 15) * 4));
        a0[13] = *((int *)((a0[1 + 1] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[1 + 1] & 15) * 4));
        a0[1 + 1] = *((int *)((a0[1 + 5] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[1 + 5] & 15) * 4));
        a0[1 + 5] = tmp_299;
        tmp_577 = *((int *)((tmp_259 >> 4) * 64 + *((long long *)&got.Sbox) + ((unsigned int)tmp_259 & 15) * 4));
        a0[2] = *((int *)((a0[10] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[10] & 15) * 4));
        a0[10] = *((int *)((a0[1 + 2] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[1 + 2] & 15) * 4));
        a0[1 + 2] = tmp_577;
        v4 = *((int *)((a0[6] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[6] & 15) * 4));
        a0[6] = *((int *)((a0[14] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[14] & 15) * 4));
        a0[14] = *((int *)((a0[1 + 6] >> 4) * 64 + v3 + (a0[1 + 6] & 15) * 4));
        a0[1 + 6] = v4;
        tmp_349 = *((int *)((a0[3] >> 4) * 64 + v3 + (a0[3] & 15) * 4));
        a0[3] = *((int *)((a0[15] >> 4) * 64 + v3 + (a0[15] & 15) * 4));
        a0[15] = tmp_349;
        tmp_443 = *((int *)((a0[7] >> 4) * 64 + v3 + (a0[7] & 15) * 4));
        a0[7] = *((int *)((a0[1 + 3] >> 4) * 64 + v3 + (a0[1 + 3] & 15) * 4));
        a0[1 + 3] = tmp_443;
        tmp_537 = *((int *)((a0[11] >> 4) * 64 + v3 + (a0[11] & 15) * 4));
        a0[11] = *((int *)((a0[1 + 7] >> 4) * 64 + v3 + (a0[1 + 7] & 15) * 4));
        a0[1 + 7] = tmp_537;
        a0[0] = *((int *)((a0[0] >> 4) * 64 + v3 + (a0[0] & 15) * 4));
        a0[4] = *((int *)((a0[4] >> 4) * 64 + v3 + (a0[4] & 15) * 4));
        a0[8] = *((int *)((a0[8] >> 4) * 64 + v3 + (a0[8] & 15) * 4));
        a0[12] = *((int *)((a0[12] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[12] & 15) * 4));
        a0[1] = *((int *)((a0[1] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[1] & 15) * 4));
        v8 = &a0[1 + 4];
        *((int *)rdi<8>) = *((int *)((*((int *)rdi<8>) >> 4) * 64 + *((long long *)&got.Sbox) + (*((int *)rdi<8>) & 15) * 4));
        return;
    }
    tmp_259 = a0[2];
    v1 = *((long long *)&got.Sbox);
    tmp_299 = *((int *)((a0[1] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[1] & 15) * 4));
    a0[1] = *((int *)((a0[5] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[5] & 15) * 4));
    a0[5] = *((int *)((a0[9] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[9] & 15) * 4));
    a0[9] = *((int *)((a0[13] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[13] & 15) * 4));
    a0[13] = *((int *)((a0[1 + 1] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[1 + 1] & 15) * 4));
    a0[1 + 1] = *((int *)((a0[1 + 5] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[1 + 5] & 15) * 4));
    a0[1 + 5] = *((int *)((a0[1 + 9] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[1 + 9] & 15) * 4));
    a0[1 + 9] = *((int *)((a0[1 + 13] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[1 + 13] & 15) * 4));
    a0[1 + 13] = tmp_299;
    v2 = *((int *)((tmp_259 >> 4) * 64 + *((long long *)&got.Sbox) + ((unsigned int)tmp_259 & 15) * 4));
    a0[2] = *((int *)((a0[14] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[14] & 15) * 4));
    a0[14] = *((int *)((a0[1 + 10] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[1 + 10] & 15) * 4));
    a0[1 + 10] = *((int *)((a0[6] >> 4) * 64 + v1 + (a0[6] & 15) * 4));
    a0[6] = *((int *)((a0[1 + 2] >> 4) * 64 + v1 + (a0[1 + 2] & 15) * 4));
    a0[1 + 2] = *((int *)((a0[1 + 14] >> 4) * 64 + v1 + (a0[1 + 14] & 15) * 4));
    a0[1 + 14] = *((int *)((a0[10] >> 4) * 64 + v1 + (a0[10] & 15) * 4));
    a0[10] = *((int *)((a0[1 + 6] >> 4) * 64 + v1 + (a0[1 + 6] & 15) * 4));
    a0[1 + 6] = v2;
    tmp_537 = *((int *)((a0[3] >> 4) * 64 + v1 + (a0[3] & 15) * 4));
    a0[3] = *((int *)((a0[1 + 3] >> 4) * 64 + v1 + (a0[1 + 3] & 15) * 4));
    a0[1 + 3] = tmp_537;
    tmp_631 = *((int *)((a0[7] >> 4) * 64 + v1 + (a0[7] & 15) * 4));
    a0[7] = *((int *)((a0[1 + 7] >> 4) * 64 + v1 + (a0[1 + 7] & 15) * 4));
    a0[1 + 7] = tmp_631;
    a0[11] = *((int *)((a0[1 + 11] >> 4) * 64 + v1 + (a0[1 + 11] & 15) * 4));
    a0[1 + 11] = *((int *)((a0[11] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[11] & 15) * 4));
    tmp_260 = *((int *)((a0[15] >> 4) * 64 + v1 + (a0[15] & 15) * 4));
    a0[15] = *((int *)((a0[1 + 15] >> 4) * 64 + v1 + (a0[1 + 15] & 15) * 4));
    a0[1 + 15] = tmp_260;
    a0[0] = *((int *)((a0[0] >> 4) * 64 + v1 + (a0[0] & 15) * 4));
    a0[4] = *((int *)((a0[4] >> 4) * 64 + v1 + (a0[4] & 15) * 4));
    a0[8] = *((int *)((a0[8] >> 4) * 64 + v1 + (a0[8] & 15) * 4));
    a0[12] = *((int *)((a0[12] >> 4) * 64 + v1 + (a0[12] & 15) * 4));
    a0[1] = *((int *)((a0[1] >> 4) * 64 + v1 + (a0[1] & 15) * 4));
    a0[1 + 4] = *((int *)((a0[1 + 4] >> 4) * 64 + v1 + (a0[1 + 4] & 15) * 4));
    a0[1 + 8] = *((int *)((a0[1 + 8] >> 4) * 64 + *((long long *)&got.Sbox) + (a0[1 + 8] & 15) * 4));
    v5 = &a0[1 + 12];
    *((int *)rdi<8>) = *((int *)((*((int *)rdi<8>) >> 4) * 64 + *((long long *)&got.Sbox) + (*((int *)rdi<8>) & 15) * 4));
    return;
}

extern char got.word;

int MixColumn_AddRoundKey(void* a0, unsigned int a1, unsigned int a2)
{
    unsigned long v0;  // [bp-0xc8]
    int tmp_173;  // tmp #173
    int tmp_199;  // tmp #199
    int tmp_201;  // tmp #201
    int tmp_205;  // tmp #205
    int tmp_264;  // tmp #264
    int tmp_266;  // tmp #266
    int tmp_270;  // tmp #270
    int tmp_295;  // tmp #295
    int tmp_435;  // tmp #435
    int tmp_505;  // tmp #505
    int tmp_507;  // tmp #507
    int tmp_511;  // tmp #511
    unsigned long long v1;  // [bp-0xc0]
    unsigned int v2;  // [bp-0xb8]
    unsigned int v3;  // [bp-0xb4]
    unsigned int v4;  // [bp-0xb0]
    unsigned int v5;  // [bp-0xac]
    unsigned long long v7;  // rsi
    unsigned long long v8;  // r8
    unsigned long long v9;  // rbx
    unsigned long long v10;  // r14
    unsigned long long v11;  // r15
    unsigned long long v12;  // rbp
    unsigned int v13;  // r10d
    unsigned int v14;  // ecx
    unsigned int v15;  // r11d
    unsigned long long v17;  // cc_dep1
    unsigned long v18;  // cc_ndep
    void* v19;  // rdx
    void* v20;  // rcx
    unsigned long v21;  // cc_ndep

    v8 = v7;
    if ((unsigned int)v7 > 0)
    {
        v0 = (unsigned int)v7 * a2;
        v19 = 0;
        v1 = v7;
        do
        {
            tmp_173 = *((int *)((char *)a0 + 0x10 * v19));
            tmp_199 = *((int *)((char *)a0 + 0x10 * v19)) * 2;
            tmp_201 = (unsigned int)(*((int *)((char *)a0 + 0x10 * v19)) * 2) ^ 283;
            tmp_205 = (*((int *)((char *)a0 + 0x10 * v19)) & 2147483520) != 128;
            v2 = ((*((int *)((char *)a0 + 0x10 * v19)) & 2147483520) != 128? (unsigned int)(*((int *)((char *)a0 + 0x10 * v19)) << 1) : (unsigned int)(*((int *)((char *)a0 + 0x10 * v19)) << 1) ^ 283);
            v9 = *((int *)&((char *)a0 + 0x10 * v19)[4]);
            tmp_264 = (unsigned int)v9 * 2 ^ *((int *)&((char *)a0 + 0x10 * v19)[4]) ^ (tmp_205? (unsigned int)(tmp_173 << 1) : (unsigned int)(tmp_173 << 1) ^ 283);
            tmp_266 = (unsigned int)v9 * 2 ^ *((int *)&((char *)a0 + 0x10 * v19)[4]) ^ (tmp_205? (unsigned int)(tmp_173 << 1) : (unsigned int)(tmp_173 << 1) ^ 283) ^ 283;
            tmp_270 = (((unsigned int)(v9 << 1) ^ *((int *)&((char *)a0 + 0x10 * v19)[4])) & -0x100) != 0x100;
            v2 = ((((unsigned int)(v9 << 1) ^ *((int *)&((char *)a0 + 0x10 * v19)[4])) & -0x100) != 0x100? (unsigned int)(v9 << 1) ^ *((int *)&((char *)a0 + 0x10 * v19)[4]) ^ (tmp_205? tmp_199 : tmp_201) : (unsigned int)(v9 << 1) ^ *((int *)&((char *)a0 + 0x10 * v19)[4]) ^ (tmp_205? tmp_199 : tmp_201) ^ 283);
            v10 = *((int *)&((char *)a0 + 0x10 * v19)[8]);
            tmp_295 = *((int *)&((char *)a0 + 0x10 * v19)[12]);
            v11 = v19 + v0;
            tmp_435 = *((int *)(got.word + (v19 + v0) * 4 + 480)) ^ (unsigned int)tmp_173 ^ *((int *)&((char *)a0 + 0x10 * v19)[12]) ^ ((((unsigned int)(v10 << 1) ^ *((int *)&((char *)a0 + 0x10 * v19)[8])) & -0x100) != 0x100? (unsigned int)(v10 << 1) ^ *((int *)&((char *)a0 + 0x10 * v19)[8]) ^ (((unsigned int)v9 & 2147483520) != 128? (unsigned int)(v9 << 1) : (unsigned int)(v9 << 1) ^ 283) : (unsigned int)(v10 << 1) ^ *((int *)&((char *)a0 + 0x10 * v19)[8]) ^ (((unsigned int)v9 & 2147483520) != 128? (unsigned int)(v9 << 1) : (unsigned int)(v9 << 1) ^ 283) ^ 283);
            tmp_505 = (unsigned int)(*((int *)&((char *)a0 + 0x10 * v19)[12]) * 2) ^ *((int *)&((char *)a0 + 0x10 * v19)[12]) ^ ((*((int *)&((char *)a0 + 0x10 * v19)[8]) & 2147483520) != 128? (unsigned int)(v10 << 1) : (unsigned int)(v10 << 1) ^ 283);
            tmp_507 = (unsigned int)(*((int *)&((char *)a0 + 0x10 * v19)[12]) * 2) ^ *((int *)&((char *)a0 + 0x10 * v19)[12]) ^ ((*((int *)&((char *)a0 + 0x10 * v19)[8]) & 2147483520) != 128? (unsigned int)(v10 << 1) : (unsigned int)(v10 << 1) ^ 283) ^ 283;
            tmp_511 = (((unsigned int)(*((int *)&((char *)a0 + 0x10 * v19)[12]) << 1) ^ *((int *)&((char *)a0 + 0x10 * v19)[12])) & -0x100) != 0x100;
            v2 = *((int *)(got.word + (v19 + v0) * 4)) ^ *((int *)&((char *)a0 + 0x10 * v19)[8]) ^ *((int *)&((char *)a0 + 0x10 * v19)[12]) ^ (tmp_270? tmp_264 : tmp_266);
            v12 = got.word;
            v13 = (unsigned int)tmp_173 ^ *((int *)(got.word + (v19 + v0) * 4 + 960)) ^ (unsigned int)v9 ^ (tmp_511? tmp_505 : tmp_507);
            v8 = v1;
            v3 = tmp_435;
            v14 = (((unsigned int)tmp_295 & 2147483520) != 128? (unsigned int)(tmp_295 << 1) : (unsigned int)(tmp_295 << 1) ^ 283) ^ (unsigned int)(tmp_173 * 2) ^ (unsigned int)tmp_173;
            v15 = ((unsigned int)(tmp_173 * 2) ^ (unsigned int)tmp_173) & -0x100;
            v4 = v13;
            v17 = (unsigned int)v9 ^ *((int *)(v12 + v11 * 4 + 1440)) ^ (unsigned int)v10 ^ (v15 != 0x100? rcx<8> : rcx<8> ^ 283);
            *((unsigned int *)&v9) = (unsigned int)v9 ^ *((int *)(v12 + v11 * 4 + 1440)) ^ (unsigned int)v10 ^ (v15 != 0x100? rcx<8> : rcx<8> ^ 283);
            v5 = v9;
            v18 = [D] amd64g_calculate_rflags_c(0x13<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>);
            v19 += 1;
        }
        while (v19 != v1);
    }
    if ((unsigned int)v7 > 0)
    {
        v20 = 0;
        do
        {
            *((unsigned int *)((char *)a0 + 0x10 * v20)) = v2;
            *((unsigned int *)&((char *)a0 + 0x10 * v20)[4]) = v3;
            *((unsigned int *)&((char *)a0 + 0x10 * v20)[8]) = v4;
            *((unsigned int *)&((char *)a0 + 0x10 * v20)[12]) = v5;
            v21 = [D] amd64g_calculate_rflags_c(0x20<64>, Shl(rcx<8>, 0x4<8>), Shl(rcx<8>, 0x3<8>), cc_ndep<8>);
            v20 += 1;
        }
        while (v20 != v8);
        return 0;
    }
    return 0;
}

extern char got.main_result;
extern char got.nb;
extern char got.round_val;
extern char got.word;

int decrypt(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x38]
    unsigned int v2;  // rax
    unsigned int v3;  // ebp
    void* v4;  // rbx
    unsigned int v5;  // ecx
    unsigned int *v6;  // r14
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rax
    void* v9;  // rdx
    void* v10;  // r15
    unsigned long long v11;  // r13
    unsigned int v12;  // cc_dep1
    unsigned long long v13;  // rax
    void* v14;  // rcx
    unsigned long long v15;  // rcx
    void* v16;  // rdx
    void* v17;  // r8

    v0 = v2;
    v3 = a2;
    v4 = a0;
    KeySchedule(a2, a1);
    v2 = 4;
    if (v3 > 192191)
    {
        if (v3 > 256127 && v3 == 256192)
        {
            v2 = 6;
        }
    }
    else
    {
        if (v3 <= 128255)
        {
            v5 = 10;
        }
        else if (v3 == 192128)
        {
            v5 = 12;
        }
    }
    if ((v3 == 192192 || v3 <= 192191) && (v3 <= 192191 || v3 <= 256127) && (v3 == 128192 || v3 > 192191) && (v3 <= 128255 || v3 > 192191) && (v3 > 192191 || v3 != 128128))
    {
        v2 = 6;
        v5 = 12;
    }
    if (v3 <= 192191 && v3 == 0x1f500 && v3 > 128255 || v3 == 0x2ef00 && v3 <= 256127 && v3 != 192192 && v3 > 192191 || v3 == 0x3e900 && v3 != 256128 && v3 > 192191 && v3 != 256192 && v3 > 256127)
    {
        v2 = 8;
    }
    if (v3 <= 192191 && v3 == 0x1f500 && v3 > 128255 || v3 == 256128 && v3 > 192191 && v3 > 256127 || v3 == 0x2ef00 && v3 <= 256127 && v3 != 192192 && v3 > 192191 || v3 == 256192 && v3 != 256128 && v3 > 192191 && v3 > 256127 || v3 == 0x3e900 && v3 != 256128 && v3 > 192191 && v3 != 256192 && v3 > 256127)
    {
        v5 = 14;
    }
    if (v3 <= 192191 && v3 == 128128 && v3 <= 128255 || v3 <= 192191 && v3 == 0x1f500 && v3 > 128255 || v3 == 256128 && v3 > 192191 && v3 > 256127 || v3 <= 192191 && v3 == 192128 && v3 != 0x1f500 && v3 > 128255 || v3 == 0x2ef00 && v3 <= 256127 && v3 != 192192 && v3 > 192191 || v3 == 256192 && v3 != 256128 && v3 > 192191 && v3 > 256127 || v3 == 0x3e900 && v3 != 256128 && v3 > 192191 && v3 != 256192 && v3 > 256127 || (v3 == 192192 || v3 <= 192191) && (v3 <= 192191 || v3 <= 256127) && (v3 == 128192 || v3 > 192191) && (v3 <= 128255 || v3 > 192191) && (v3 > 192191 || v3 != 128128))
    {
        *((unsigned int *)got.round_val) = v5;
        *((unsigned int *)got.nb) = v2;
    }
    v6 = got.round_val;
    v7 = 4;
    if (v3 == 0x2ef00 && v3 > 192255 || v3 == 0x3e900 && v3 > 192255 || v3 == 0x1f500 && v3 <= 192255 && v3 != 128192)
    {
        v7 = 8;
    }
    if ((v3 == 256192 || v3 <= 192255) && (v3 <= 192255 || v3 != 0x2ef00) && (v3 <= 192255 || v3 != 0x3e900) && (v3 == 192192 || v3 == 128192 || v3 > 192255) && (v3 == 128192 || v3 != 0x1f500 || v3 > 192255))
    {
        v7 = 6;
    }
    v8 = v7 * *((int *)got.round_val);
    v9 = 0;
    v10 = got.word;
    do
    {
        *((int *)((char *)v4 + 0x10 * v9)) = *((int *)((char *)v4 + 0x10 * v9)) ^ *((int *)&((char *)v10 + 0x4 * v9)[4 * v7 * *((int *)got.round_val)]);
        *((int *)&((char *)v4 + 0x10 * v9)[4]) = *((int *)&((char *)v4 + 0x10 * v9)[4]) ^ *((int *)&((char *)v10 + 0x4 * v9)[4 * v8 + 480]);
        *((int *)&((char *)v4 + 0x10 * v9)[8]) = *((int *)&((char *)v4 + 0x10 * v9)[8]) ^ *((int *)&((char *)v10 + 0x4 * v9)[4 * v8 + 960]);
        *((int *)&((char *)v4 + 0x10 * v9)[12]) = *((int *)&((char *)v4 + 0x10 * v9)[12]) ^ *((int *)&((char *)v10 + 0x4 * v9)[4 * v8 + 1440]);
        v9 += 1;
    }
    while (v9 != v7);
    InversShiftRow_ByteSub(v4, *((int *)got.nb));
    v11 = *(v6);
    if (*(v6) >= 2)
    {
        while (true)
        {
            AddRoundKey_InversMixColumn(v4, *((int *)got.nb), (unsigned int)v11 - 1);
            InversShiftRow_ByteSub(v4, *((int *)got.nb));
            v12 = v11;
            v11 -= 1;
            if (v12 <= 2)
            {
                break;
            }
        }
    }
    v13 = 4;
    if (v3 == 0x2ef00 && v3 > 192255 || v3 == 0x3e900 && v3 > 192255 || v3 == 0x1f500 && v3 <= 192255 && v3 != 128192)
    {
        v13 = 8;
    }
    if ((v3 == 256192 || v3 <= 192255) && (v3 <= 192255 || v3 != 0x2ef00) && (v3 <= 192255 || v3 != 0x3e900) && (v3 == 192192 || v3 == 128192 || v3 > 192255) && (v3 == 128192 || v3 != 0x1f500 || v3 > 192255))
    {
        v13 = 6;
    }
    v14 = 0;
    do
    {
        *((int *)((char *)v4 + 0x10 * v14)) = *((int *)((char *)v4 + 0x10 * v14)) ^ *((int *)((char *)v10 + 0x4 * v14));
        *((int *)&((char *)v4 + 0x10 * v14)[4]) = *((int *)&((char *)v4 + 0x10 * v14)[4]) ^ *((int *)&((char *)v10 + 0x4 * v14)[480]);
        *((int *)&((char *)v4 + 0x10 * v14)[8]) = *((int *)&((char *)v4 + 0x10 * v14)[8]) ^ *((int *)&((char *)v10 + 0x4 * v14)[960]);
        *((int *)&((char *)v4 + 0x10 * v14)[12]) = *((int *)&((char *)v4 + 0x10 * v14)[12]) ^ *((int *)&((char *)v10 + 0x4 * v14)[1440]);
        v14 += 1;
    }
    while (v14 != v13);
    v15 = *((int *)got.main_result);
    v16 = 0;
    do
    {
        v17 = 0;
        *((char *)&v17) = *((int *)((char *)v4 + 0x4 * v16)) != *((int *)(4202800 + 0x4 * v16));
        v15 += v17;
        *((unsigned int *)got.main_result) = v15;
        v16 += 1;
    }
    while (v16 != 16);
    return;
}

extern char got.invSbox;

int InversShiftRow_ByteSub(unsigned int a0[16], unsigned int a1)
{
    int tmp_295;  // tmp #295
    int tmp_397;  // tmp #397
    int tmp_487;  // tmp #487
    int tmp_577;  // tmp #577
    int tmp_440;  // tmp #440
    int tmp_349;  // tmp #349
    int tmp_443;  // tmp #443
    int tmp_537;  // tmp #537
    int tmp_534;  // tmp #534
    int tmp_631;  // tmp #631
    int tmp_260;  // tmp #260
    unsigned long long v1;  // rax
    unsigned int v2;  // ecx
    unsigned long long v3;  // rax
    unsigned int v4;  // edx
    unsigned int *v5;  // rdi
    unsigned long long v6;  // rax
    unsigned int v7;  // ecx
    unsigned int *v8;  // rdi
    unsigned long long v9;  // rdi

    if (a1 != 8)
    {
        if (a1 != 6)
        {
            if (a1 == 4)
            {
                v6 = *((long long *)&got.invSbox);
                tmp_295 = *((int *)((a0[13] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[13] & 15) * 4));
                a0[13] = *((int *)((a0[9] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[9] & 15) * 4));
                a0[9] = *((int *)((a0[5] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[5] & 15) * 4));
                tmp_397 = a0[2];
                a0[5] = *((int *)((a0[1] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[1] & 15) * 4));
                a0[1] = tmp_295;
                tmp_487 = *((int *)((a0[14] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[14] & 15) * 4));
                a0[14] = *((int *)((a0[6] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[6] & 15) * 4));
                a0[6] = tmp_487;
                tmp_577 = *((int *)((tmp_397 >> 4) * 64 + *((long long *)&got.invSbox) + ((unsigned int)tmp_397 & 15) * 4));
                a0[2] = *((int *)((a0[10] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[10] & 15) * 4));
                a0[10] = tmp_577;
                v7 = *((int *)((a0[15] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[15] & 15) * 4));
                a0[15] = *((int *)((a0[3] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[3] & 15) * 4));
                a0[3] = *((int *)((a0[7] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[7] & 15) * 4));
                a0[7] = *((int *)((a0[11] >> 4) * 64 + v6 + (a0[11] & 15) * 4));
                a0[11] = v7;
                a0[0] = *((int *)((a0[0] >> 4) * 64 + v6 + (a0[0] & 15) * 4));
                a0[4] = *((int *)((a0[4] >> 4) * 64 + v6 + (a0[4] & 15) * 4));
                a0[8] = *((int *)((a0[8] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[8] & 15) * 4));
                v9 = &a0[12];
                *((int *)rdi<8>) = *((int *)((*((int *)rdi<8>) >> 4) * 64 + *((long long *)&got.invSbox) + (*((int *)rdi<8>) & 15) * 4));
                return;
            }
            return;
        }
        v3 = *((long long *)&got.invSbox);
        tmp_295 = *((int *)((a0[1 + 5] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[1 + 5] & 15) * 4));
        a0[1 + 5] = *((int *)((a0[1 + 1] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[1 + 1] & 15) * 4));
        a0[1 + 1] = *((int *)((a0[13] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[13] & 15) * 4));
        a0[13] = *((int *)((a0[9] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[9] & 15) * 4));
        tmp_440 = a0[1];
        a0[9] = *((int *)((a0[5] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[5] & 15) * 4));
        a0[5] = *((int *)((tmp_440 >> 4) * 64 + *((long long *)&got.invSbox) + ((unsigned int)tmp_440 & 15) * 4));
        a0[1] = tmp_295;
        tmp_577 = *((int *)((a0[1 + 6] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[1 + 6] & 15) * 4));
        a0[1 + 6] = *((int *)((a0[14] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[14] & 15) * 4));
        a0[14] = *((int *)((a0[6] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[6] & 15) * 4));
        a0[6] = tmp_577;
        v4 = *((int *)((a0[1 + 2] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[1 + 2] & 15) * 4));
        a0[1 + 2] = *((int *)((a0[10] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[10] & 15) * 4));
        a0[10] = *((int *)((a0[2] >> 4) * 64 + v3 + (a0[2] & 15) * 4));
        a0[2] = v4;
        tmp_349 = *((int *)((a0[15] >> 4) * 64 + v3 + (a0[15] & 15) * 4));
        a0[15] = *((int *)((a0[3] >> 4) * 64 + v3 + (a0[3] & 15) * 4));
        a0[3] = tmp_349;
        tmp_443 = *((int *)((a0[1 + 3] >> 4) * 64 + v3 + (a0[1 + 3] & 15) * 4));
        a0[1 + 3] = *((int *)((a0[7] >> 4) * 64 + v3 + (a0[7] & 15) * 4));
        a0[7] = tmp_443;
        tmp_537 = *((int *)((a0[1 + 7] >> 4) * 64 + v3 + (a0[1 + 7] & 15) * 4));
        a0[1 + 7] = *((int *)((a0[11] >> 4) * 64 + v3 + (a0[11] & 15) * 4));
        a0[11] = tmp_537;
        a0[0] = *((int *)((a0[0] >> 4) * 64 + v3 + (a0[0] & 15) * 4));
        a0[4] = *((int *)((a0[4] >> 4) * 64 + v3 + (a0[4] & 15) * 4));
        a0[8] = *((int *)((a0[8] >> 4) * 64 + v3 + (a0[8] & 15) * 4));
        a0[12] = *((int *)((a0[12] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[12] & 15) * 4));
        a0[1] = *((int *)((a0[1] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[1] & 15) * 4));
        v8 = &a0[1 + 4];
        *((int *)rdi<8>) = *((int *)((*((int *)rdi<8>) >> 4) * 64 + *((long long *)&got.invSbox) + (*((int *)rdi<8>) & 15) * 4));
        return;
    }
    v1 = *((long long *)&got.invSbox);
    tmp_295 = *((int *)((a0[1 + 13] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[1 + 13] & 15) * 4));
    a0[1 + 13] = *((int *)((a0[1 + 9] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[1 + 9] & 15) * 4));
    a0[1 + 9] = *((int *)((a0[1 + 5] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[1 + 5] & 15) * 4));
    a0[1 + 5] = *((int *)((a0[1 + 1] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[1 + 1] & 15) * 4));
    a0[1 + 1] = *((int *)((a0[13] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[13] & 15) * 4));
    a0[13] = *((int *)((a0[9] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[9] & 15) * 4));
    tmp_534 = a0[1];
    a0[9] = *((int *)((a0[5] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[5] & 15) * 4));
    a0[5] = *((int *)((tmp_534 >> 4) * 64 + *((long long *)&got.invSbox) + ((unsigned int)tmp_534 & 15) * 4));
    a0[1] = tmp_295;
    v2 = *((int *)((a0[1 + 14] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[1 + 14] & 15) * 4));
    a0[1 + 14] = *((int *)((a0[1 + 2] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[1 + 2] & 15) * 4));
    a0[1 + 2] = *((int *)((a0[6] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[6] & 15) * 4));
    a0[6] = *((int *)((a0[1 + 10] >> 4) * 64 + v1 + (a0[1 + 10] & 15) * 4));
    a0[1 + 10] = *((int *)((a0[14] >> 4) * 64 + v1 + (a0[14] & 15) * 4));
    a0[14] = *((int *)((a0[2] >> 4) * 64 + v1 + (a0[2] & 15) * 4));
    a0[2] = *((int *)((a0[1 + 6] >> 4) * 64 + v1 + (a0[1 + 6] & 15) * 4));
    a0[1 + 6] = *((int *)((a0[10] >> 4) * 64 + v1 + (a0[10] & 15) * 4));
    a0[10] = v2;
    tmp_537 = *((int *)((a0[1 + 15] >> 4) * 64 + v1 + (a0[1 + 15] & 15) * 4));
    a0[1 + 15] = *((int *)((a0[15] >> 4) * 64 + v1 + (a0[15] & 15) * 4));
    a0[15] = tmp_537;
    tmp_631 = *((int *)((a0[1 + 11] >> 4) * 64 + v1 + (a0[1 + 11] & 15) * 4));
    a0[1 + 11] = *((int *)((a0[11] >> 4) * 64 + v1 + (a0[11] & 15) * 4));
    a0[11] = tmp_631;
    a0[1 + 7] = *((int *)((a0[7] >> 4) * 64 + v1 + (a0[7] & 15) * 4));
    a0[7] = *((int *)((a0[1 + 7] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[1 + 7] & 15) * 4));
    tmp_260 = *((int *)((a0[1 + 3] >> 4) * 64 + v1 + (a0[1 + 3] & 15) * 4));
    a0[1 + 3] = *((int *)((a0[3] >> 4) * 64 + v1 + (a0[3] & 15) * 4));
    a0[3] = tmp_260;
    a0[0] = *((int *)((a0[0] >> 4) * 64 + v1 + (a0[0] & 15) * 4));
    a0[4] = *((int *)((a0[4] >> 4) * 64 + v1 + (a0[4] & 15) * 4));
    a0[8] = *((int *)((a0[8] >> 4) * 64 + v1 + (a0[8] & 15) * 4));
    a0[12] = *((int *)((a0[12] >> 4) * 64 + v1 + (a0[12] & 15) * 4));
    a0[1] = *((int *)((a0[1] >> 4) * 64 + v1 + (a0[1] & 15) * 4));
    a0[1 + 4] = *((int *)((a0[1 + 4] >> 4) * 64 + v1 + (a0[1 + 4] & 15) * 4));
    a0[1 + 8] = *((int *)((a0[1 + 8] >> 4) * 64 + *((long long *)&got.invSbox) + (a0[1 + 8] & 15) * 4));
    v5 = &a0[1 + 12];
    *((int *)rdi<8>) = *((int *)((*((int *)rdi<8>) >> 4) * 64 + *((long long *)&got.invSbox) + (*((int *)rdi<8>) & 15) * 4));
    return;
}

extern char got.word;

int AddRoundKey_InversMixColumn(void* a0, unsigned int a1, unsigned int a2)
{
    int tmp_245;  // tmp #245
    int tmp_273;  // tmp #273
    unsigned int v0;  // [bp-0xa8]
    int tmp_420;  // tmp #420
    unsigned int v1;  // [bp-0xa4]
    unsigned int v2;  // [bp-0xa0]
    unsigned int v3;  // [bp-0x9c]
    unsigned long v5;  // rsi
    unsigned long long v6;  // rcx
    void* v7;  // rdx
    unsigned int *v8;  // r8
    void* v9;  // cc_ndep
    unsigned long long v10;  // rdx
    unsigned long long v11;  // r8
    void* v12;  // r10
    unsigned long long v13;  // r9
    unsigned long long v14;  // r11
    unsigned long long v15;  // r14
    unsigned int v16;  // ebp
    void* v17;  // r10
    unsigned long long v18;  // r10
    unsigned int v19;  // ebx
    unsigned long v21;  // cc_ndep
    unsigned long long v22;  // rcx
    void* v23;  // rcx
    unsigned long v24;  // cc_ndep

    if ((unsigned int)v5 > 0)
    {
        v6 = (unsigned int)v5 * a2;
        v7 = 0;
        v8 = got.word;
        do
        {
            *((int *)((char *)a0 + 0x10 * v7)) = *((int *)((char *)a0 + 0x10 * v7)) ^ *((int *)&((char *)v8 + 0x4 * v7)[4 * v6]);
            *((int *)&((char *)a0 + 0x10 * v7)[4]) = *((int *)&((char *)a0 + 0x10 * v7)[4]) ^ *((int *)&((char *)v8 + 0x4 * v7)[4 * v6 + 480]);
            *((int *)&((char *)a0 + 0x10 * v7)[8]) = *((int *)&((char *)a0 + 0x10 * v7)[8]) ^ *((int *)&((char *)v8 + 0x4 * v7)[4 * v6 + 960]);
            *((int *)&((char *)a0 + 0x10 * v7)[12]) = *((int *)&((char *)a0 + 0x10 * v7)[12]) ^ *((int *)&((char *)v8 + 0x4 * v7)[4 * v6 + 1440]);
            v9 = 0;
            v7 += 1;
        }
        while (v7 != v5);
    }
    if ((unsigned int)v5 > 0)
    {
        v22 = 0;
        do
        {
            v10 = v22 * 4;
            v11 = v22 * 4;
            v12 = 0;
            do
            {
                v13 = v12 + v10;
                tmp_245 = (((((*((int *)&((char *)a0 + 0x4 * v12)[4 * v10]) & 2147483520) != 128? (unsigned int)(*((int *)&((char *)a0 + 0x4 * v12)[4 * v10]) << 1) : (unsigned int)(*((int *)&((char *)a0 + 0x4 * v12)[4 * v10]) << 1) ^ 283) ^ *((int *)&((char *)a0 + 0x4 * v12)[4 * v10])) & 2147483520) != 128? (unsigned int)((((*((int *)&((char *)a0 + 0x4 * v12)[4 * v10]) & 2147483520) != 128? (unsigned int)(*((int *)&((char *)a0 + 0x4 * v12)[4 * v10]) << 1) : (unsigned int)(*((int *)&((char *)a0 + 0x4 * v12)[4 * v10]) << 1) ^ 283) ^ *((int *)&((char *)a0 + 0x4 * v12)[4 * v10])) << 1) : (unsigned int)((((*((int *)&((char *)a0 + 0x4 * v12)[4 * v10]) & 2147483520) != 128? (unsigned int)(*((int *)&((char *)a0 + 0x4 * v12)[4 * v10]) << 1) : (unsigned int)(*((int *)&((char *)a0 + 0x4 * v12)[4 * v10]) << 1) ^ 283) ^ *((int *)&((char *)a0 + 0x4 * v12)[4 * v10])) << 1) ^ 283) ^ *((int *)&((char *)a0 + 0x4 * v12)[4 * v10]);
                tmp_273 = ...;
                v0 = (...? (unsigned int)(...) : ...);
                v14 = v12 + 1;
                tmp_420 = ...;
                v0 = ...;
                v15 = *((int *)&((char *)a0)[4 * ((unsigned int)v12 + 2 & 3 | v11)]);
                v16 = ...;
                v0 = ...;
                *((unsigned int *)&v12) = (unsigned int)v12 - 1;
                v17 = (unsigned int)v12 & 3 | v11;
                v18 = *((int *)((char *)a0 + 0x4 * v17));
                v19 = (unsigned int)v18 * 2;
                v0 = (((((((unsigned int)v18 & 2147483520) != 128? rbx<8> : rbx<8> ^ 283) & 2147483520) != 128? (unsigned int)((((unsigned int)v18 & 2147483520) != 128? rbx<8> : rbx<8> ^ 283) << 1) : (unsigned int)((((unsigned int)v18 & 2147483520) != 128? rbx<8> : rbx<8> ^ 283) << 1) ^ 283) & 2147483520) != 128? (unsigned int)((((((unsigned int)v18 & 2147483520) != 128? rbx<8> : rbx<8> ^ 283) & 2147483520) != 128? (unsigned int)((((unsigned int)v18 & 2147483520) != 128? rbx<8> : rbx<8> ^ 283) << 1) : (unsigned int)((((unsigned int)v18 & 2147483520) != 128? rbx<8> : rbx<8> ^ 283) << 1) ^ 283) << 1) : (unsigned int)((((((unsigned int)v18 & 2147483520) != 128? rbx<8> : rbx<8> ^ 283) & 2147483520) != 128? (unsigned int)((((unsigned int)v18 & 2147483520) != 128? rbx<8> : rbx<8> ^ 283) << 1) : (unsigned int)((((unsigned int)v18 & 2147483520) != 128? rbx<8> : rbx<8> ^ 283) << 1) ^ 283) << 1) ^ 283) ^ (unsigned int)v18 ^ v16;
                v12 = v14;
            }
            while (v12 != 4);
            v21 = 4 < 4;
            v22 = 1;
        }
        while (v5 != 1);
    }
    if ((unsigned int)v5 > 0)
    {
        v23 = 0;
        do
        {
            *((unsigned int *)((char *)a0 + 0x10 * v23)) = v0;
            *((unsigned int *)&((char *)a0 + 0x10 * v23)[4]) = v1;
            *((unsigned int *)&((char *)a0 + 0x10 * v23)[8]) = v2;
            *((unsigned int *)&((char *)a0 + 0x10 * v23)[12]) = v3;
            v24 = [D] amd64g_calculate_rflags_c(0x20<64>, Shl(rcx<8>, 0x4<8>), Shl(rcx<8>, 0x3<8>), cc_ndep<8>);
            v23 += 1;
        }
        while (v23 != v5);
        return;
    }
    return;
}

extern char got.Sbox;

long long SubByte(unsigned int a0)
{
    int tmp_72;  // tmp #72
    unsigned long v1;  // rdi
    unsigned long long v3;  // rax

    tmp_72 = ((char)(v1 >> 31 & 1 ^ 1)? (unsigned int)v1 : (unsigned int)(v1 + 15)) >> 4;
    v3 = *((int *)(tmp_72 * 64 + got.Sbox + ((unsigned int)v1 - (((char)(v1 >> 31 & 1 ^ 1)? (unsigned int)v1 : (unsigned int)(v1 + 15)) & -0x10)) * 4));
    return v3;
}

extern char got.key;
extern char got.statemt;

long long aes_main()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v2;  // rax

    v0 = v2;
    *((int128_t *)got.statemt) = 287762808882;
    *((int128_t *)(got.statemt + 16)) = 386547056776;
    *((int128_t *)(got.statemt + 32)) = 210453397553;
    *((int128_t *)(got.statemt + 48)) = 236223201504;
    *((int128_t *)got.key) = 541165879339;
    *((int128_t *)(got.key + 16)) = 747324309544;
    *((int128_t *)(got.key + 32)) = 1060856922283;
    *((int128_t *)(got.key + 48)) = 889058230281;
    encrypt(got.statemt, got.key, 0x1f480);
    decrypt(got.statemt, got.key, 0x1f480);
    return 0;
}

extern char got.endTimer;
extern char got.key;
extern char got.main_result;
extern char got.startTimer;
extern char got.statemt;

long long submain()
{
    char v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x28]
    unsigned long long v3;  // rax
    unsigned long long v5;  // xmm0lq
    unsigned long long v6;  // xmm1lq
    uint128_t v7;  // xmm1
    int v8;  // xmm0
    unsigned long long v11;  // rax
    int v13;  // xmm1
    uint128_t v14;  // xmm0

    *((int *)got.main_result) = 0;
    (unsigned int)v3 = gettimeofday(&v0, NULL);
    if ((unsigned int)v3 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v3);
    }
    v5 = *((long long *)&v0);
    v6 = v1;
    *((unsigned long long *)&v7) = (unsigned long long)(v7 * 4517329193108106637 + v8);
    *((unsigned long long *)got.startTimer) = v7;
    *((int128_t *)got.statemt) = 287762808882;
    *((int128_t *)(got.statemt + 16)) = 386547056776;
    *((int128_t *)(got.statemt + 32)) = 210453397553;
    *((int128_t *)(got.statemt + 48)) = 236223201504;
    *((int128_t *)got.key) = 541165879339;
    *((int128_t *)(got.key + 16)) = 747324309544;
    *((int128_t *)(got.key + 32)) = 1060856922283;
    *((int128_t *)(got.key + 48)) = 889058230281;
    encrypt(got.statemt, got.key, 0x1f480);
    decrypt(got.statemt, got.key, 0x1f480);
    (unsigned int)v11 = gettimeofday(&v0, NULL);
    if ((unsigned int)v11 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v11);
        v13 = 0;
        *((unsigned long long *)&v13) = *((long long *)&v0);
        v14 = 0;
        *((unsigned long long *)&v14) = v1;
        *((unsigned long long *)&v14) = (unsigned long long)(v14 * 4517329193108106637 + v13);
        *((unsigned long long *)*((long long *)&got.endTimer)) = v14;
        printf("%0.6f\n");
        return *((int *)got.main_result);
    }
    v13 = 0;
    *((unsigned long long *)&v13) = *((long long *)&v0);
    v14 = 0;
    *((unsigned long long *)&v14) = v1;
    *((unsigned long long *)&v14) = (unsigned long long)(v14 * 4517329193108106637 + v13);
    *((unsigned long long *)*((long long *)&got.endTimer)) = v14;
    printf("%0.6f\n");
    return *((int *)got.main_result);
}

