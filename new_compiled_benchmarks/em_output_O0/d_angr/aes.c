extern char got.main_result;
extern char got.nb;
extern char got.round_val;

int encrypt(unsigned int *a0, unsigned long long a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x6c]
    uint128_t v1;  // [bp-0x68]
    uint128_t v2;  // [bp-0x58]
    uint128_t v3;  // [bp-0x48]
    uint128_t v4;  // [bp-0x38]
    unsigned int v5;  // [bp-0x20]

    v4 = 455266533401;
    v3 = 73014444252;
    v2 = 944892805122;
    v1 = 158913790009;
    KeySchedule(a2, a1);
    v0 = a2;
    if (a2 != 128128)
    {
        if (v0 == 192128)
        {
            *((int *)*((long long *)&got.round_val)) = 2;
            *((int *)*((long long *)&got.nb)) = 4;
        }
        if (v0 == 192192 || v0 == 128192)
        {
            *((int *)*((long long *)&got.round_val)) = 2;
            *((int *)*((long long *)&got.nb)) = 6;
        }
        if (v0 == 256128)
        {
            *((int *)*((long long *)&got.round_val)) = 4;
            *((int *)*((long long *)&got.nb)) = 4;
        }
        if (v0 == 256192)
        {
            *((int *)*((long long *)&got.round_val)) = 4;
            *((int *)*((long long *)&got.nb)) = 6;
        }
        if (v0 == 0x3e900 || v0 == 0x2ef00 || v0 == 0x1f500)
        {
            *((int *)*((long long *)&got.round_val)) = 4;
            *((int *)*((long long *)&got.nb)) = 8;
        }
    }
    else
    {
        *((int *)*((long long *)&got.round_val)) = 0;
        *((int *)*((long long *)&got.nb)) = 4;
    }
    AddRoundKey(a0, a2, 0x0);
    for (v5 = 1; v5 <= *((int *)*((long long *)&got.round_val)) + 9; v5 += 1)
    {
        ByteSub_ShiftRow(a0, *((int *)*((long long *)&got.nb)));
        a2 = v5;
        MixColumn_AddRoundKey(a0, *((int *)*((long long *)&got.nb)), a2);
    }
    ByteSub_ShiftRow(a0, *((int *)*((long long *)&got.nb)));
    AddRoundKey(a0, a2, v5);
    for (v5 = 0; v5 < 16; v5 += 1)
    {
        *((unsigned int *)got.main_result) = (a0[v5] != (int)v1) + *((int *)got.main_result);
    }
    return;
}

extern char got.Rcon0;
extern char got.word;

int KeySchedule(unsigned int a0, unsigned int *a1)
{
    unsigned int v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0x44]
    unsigned int v3;  // [bp-0x40]
    unsigned int v4;  // [bp-0x3c]
    unsigned int v5;  // [bp-0x2c]
    unsigned int v6;  // [bp-0x28]
    unsigned int v7;  // [bp-0x24]
    unsigned int v8;  // [bp-0x20]
    unsigned int v9;  // [bp-0x1c]
    unsigned int v10;  // [bp-0xc]
    uint128_t v13;  // rdx
    uint128_t v14;  // rdx

    if (!(a0 != 128128))
    {
        v9 = 4;
        v8 = 4;
        v7 = 10;
    }
    else if (a0 != 128192 && a0 != 0x1f500 && a0 != 192128 && a0 != 192192 && a0 != 0x2ef00 && a0 != 256128 && a0 != 256192 && a0 != 0x3e900)
    {
        v10 = -1;
        return v10;
    }
    if (a0 == 128192)
    {
        v9 = 4;
        v8 = 6;
        v7 = 12;
    }
    if (a0 == 0x1f500)
    {
        v9 = 4;
        v8 = 8;
        v7 = 14;
    }
    if (a0 == 192128)
    {
        v9 = 6;
        v8 = 4;
        v7 = 12;
    }
    if (a0 == 192192)
    {
        v9 = 6;
        v8 = 6;
        v7 = 12;
    }
    if (a0 == 0x2ef00)
    {
        v9 = 6;
        v8 = 8;
        v7 = 14;
    }
    if (a0 == 256128)
    {
        v9 = 8;
        v8 = 4;
        v7 = 14;
    }
    if (a0 == 256192)
    {
        v9 = 8;
        v8 = 6;
        v7 = 14;
    }
    if (a0 == 0x3e900)
    {
        v9 = 8;
        v8 = 8;
        v7 = 14;
    }
    if (a0 == 0x3e900 || a0 == 192192 || a0 == 128192 || a0 == 0x1f500 || a0 == 256128 || a0 == 192128 || a0 == 0x2ef00 || a0 == 256192 || a0 == 128128)
    {
        for (v5 = 0; v5 < v9; v5 += 1)
        {
            for (v6 = 0; v6 < 4; v6 += 1)
            {
                *((unsigned int *)(got.word + v6 * 480 + v5 * 4)) = a1[v6 + (unsigned int)(v5 * 4)];
            }
        }
        for (v5 = v9; v5 < (v7 + 1) * v8; v5 += 1)
        {
            *((unsigned long long *)&v13) = (v5 >> 31 CONCAT v5) /m v9 >> 32;
            if ((v5 >> 31 CONCAT v5) /m v9 >> 32 == 0)
            {
                v0 = SubByte(*((int *)(got.word + (v5 - 1) * 4 + 480)));
                v1 = v0 ^ *((int *)(got.Rcon0 + ((v5 >> 31 CONCAT v5) /m v9 - 1) * 4));
                v2 = SubByte(*((int *)(got.word + (v5 - 1) * 4 + 960)));
                v3 = SubByte(*((int *)(got.word + (v5 - 1) * 4 + 1440)));
                v4 = SubByte(*((int *)(got.word + (v5 - 1) * 4)));
            }
            if ((v5 >> 31 CONCAT v5) /m v9 >> 32 != 0)
            {
                v1 = *((int *)(got.word + (v5 - 1) * 4));
                v2 = *((int *)(got.word + (v5 - 1) * 4 + 480));
                v3 = *((int *)(got.word + (v5 - 1) * 4 + 960));
                v4 = *((int *)(got.word + (v5 - 1) * 4 + 1440));
            }
            if (v9 > 6)
            {
                *((unsigned long long *)&v14) = (v5 >> 31 CONCAT v5) /m v9 >> 32;
                if ((v5 >> 31 CONCAT v5) /m v9 >> 32 == 4)
                {
                    for (v6 = 0; v6 < 4; v6 += 1)
                    {
                        v1 = SubByte(v1);
                    }
                }
            }
            for (v6 = 0; v6 < 4; v6 += 1)
            {
                *((unsigned int *)(got.word + v6 * 480 + v5 * 4)) = *((int *)(got.word + v6 * 480 + (v5 - v9) * 4)) ^ v1;
            }
        }
        v10 = 0;
        return v10;
    }
}

extern char got.word;

int AddRoundKey(unsigned int *a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]

    if (a1 == 256128 || a1 == 192128 || a1 == 128128)
    {
        v0 = 4;
    }
    if (a1 == 128192 || a1 == 192192 || a1 == 256192)
    {
        v0 = 6;
    }
    if (a1 == 0x3e900 || a1 == 0x1f500 || a1 == 0x2ef00)
    {
        v0 = 8;
    }
    for (v1 = 0; v1 < v0; v1 += 1)
    {
        a0[4 * v1] = *((int *)(got.word + (v1 + a2 * v0) * 4)) ^ a0[4 * v1];
        a0[(unsigned int)(v1 * 4) + 1] = *((int *)(got.word + (v1 + a2 * v0) * 4 + 480)) ^ a0[(unsigned int)(v1 * 4) + 1];
        a0[(unsigned int)(v1 * 4) + 2] = *((int *)(got.word + (v1 + a2 * v0) * 4 + 960)) ^ a0[(unsigned int)(v1 * 4) + 2];
        a0[(unsigned int)(v1 * 4) + 3] = *((int *)(got.word + (v1 + a2 * v0) * 4 + 1440)) ^ a0[(unsigned int)(v1 * 4) + 3];
    }
    return 0;
}

extern char got.Sbox;

int ByteSub_ShiftRow(unsigned int a0[32], unsigned int a1)
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1[32];  // [bp-0x10]

    *((unsigned int *[32])&v1[0]) = a0;
    if (a1 != 4)
    {
        if (a1 != 6)
        {
            if (a1 == 8)
            {
                v0 = *((int *)(*((long long *)&got.Sbox) + (a0[1] >> 4) * 64 + (a0[1] & 15) * 4));
                a0[1] = *((int *)(*((long long *)&got.Sbox) + (a0[5] >> 4) * 64 + (a0[5] & 15) * 4));
                a0[5] = *((int *)(*((long long *)&got.Sbox) + (a0[9] >> 4) * 64 + (a0[9] & 15) * 4));
                a0[9] = *((int *)(*((long long *)&got.Sbox) + (a0[13] >> 4) * 64 + (a0[13] & 15) * 4));
                a0[13] = *((int *)(*((long long *)&got.Sbox) + (a0[17] >> 4) * 64 + (a0[17] & 15) * 4));
                a0[17] = *((int *)(*((long long *)&got.Sbox) + (a0[21] >> 4) * 64 + (a0[21] & 15) * 4));
                a0[21] = *((int *)(*((long long *)&got.Sbox) + (a0[25] >> 4) * 64 + (a0[25] & 15) * 4));
                a0[25] = *((int *)(*((long long *)&got.Sbox) + (a0[29] >> 4) * 64 + (a0[29] & 15) * 4));
                a0[29] = v0;
                v0 = *((int *)(*((long long *)&got.Sbox) + (a0[2] >> 4) * 64 + (a0[2] & 15) * 4));
                a0[2] = *((int *)(*((long long *)&got.Sbox) + (a0[14] >> 4) * 64 + (a0[14] & 15) * 4));
                a0[14] = *((int *)(*((long long *)&got.Sbox) + (a0[26] >> 4) * 64 + (a0[26] & 15) * 4));
                a0[26] = *((int *)(*((long long *)&got.Sbox) + (a0[6] >> 4) * 64 + (a0[6] & 15) * 4));
                a0[6] = *((int *)(*((long long *)&got.Sbox) + (a0[18] >> 4) * 64 + (a0[18] & 15) * 4));
                a0[18] = *((int *)(*((long long *)&got.Sbox) + (a0[30] >> 4) * 64 + (a0[30] & 15) * 4));
                a0[30] = *((int *)(*((long long *)&got.Sbox) + (a0[10] >> 4) * 64 + (a0[10] & 15) * 4));
                a0[10] = *((int *)(*((long long *)&got.Sbox) + (a0[22] >> 4) * 64 + (a0[22] & 15) * 4));
                a0[22] = v0;
                v0 = *((int *)(*((long long *)&got.Sbox) + (a0[3] >> 4) * 64 + (a0[3] & 15) * 4));
                a0[3] = *((int *)(*((long long *)&got.Sbox) + (a0[19] >> 4) * 64 + (a0[19] & 15) * 4));
                a0[19] = v0;
                v0 = *((int *)(*((long long *)&got.Sbox) + (a0[7] >> 4) * 64 + (a0[7] & 15) * 4));
                a0[7] = *((int *)(*((long long *)&got.Sbox) + (a0[23] >> 4) * 64 + (a0[23] & 15) * 4));
                a0[23] = v0;
                v0 = *((int *)(*((long long *)&got.Sbox) + (a0[11] >> 4) * 64 + (a0[11] & 15) * 4));
                a0[11] = *((int *)(*((long long *)&got.Sbox) + (a0[27] >> 4) * 64 + (a0[27] & 15) * 4));
                a0[27] = v0;
                v0 = *((int *)(*((long long *)&got.Sbox) + (a0[15] >> 4) * 64 + (a0[15] & 15) * 4));
                a0[15] = *((int *)(*((long long *)&got.Sbox) + (a0[31] >> 4) * 64 + (a0[31] & 15) * 4));
                a0[31] = v0;
                a0[0] = *((int *)(*((long long *)&got.Sbox) + (a0[0] >> 4) * 64 + (a0[0] & 15) * 4));
                a0[4] = *((int *)(*((long long *)&got.Sbox) + (a0[4] >> 4) * 64 + (a0[4] & 15) * 4));
                a0[8] = *((int *)(*((long long *)&got.Sbox) + (a0[8] >> 4) * 64 + (a0[8] & 15) * 4));
                a0[12] = *((int *)(*((long long *)&got.Sbox) + (a0[12] >> 4) * 64 + (a0[12] & 15) * 4));
                a0[16] = *((int *)(*((long long *)&got.Sbox) + (a0[16] >> 4) * 64 + (a0[16] & 15) * 4));
                a0[20] = *((int *)(*((long long *)&got.Sbox) + (a0[20] >> 4) * 64 + (a0[20] & 15) * 4));
                a0[24] = *((int *)(*((long long *)&got.Sbox) + (a0[24] >> 4) * 64 + (a0[24] & 15) * 4));
                a0[28] = *((int *)(*((long long *)&got.Sbox) + (a0[28] >> 4) * 64 + (a0[28] & 15) * 4));
                return (unsigned int)a0;
            }
            return a1 - 8;
        }
        v0 = *((int *)(*((long long *)&got.Sbox) + (a0[1] >> 4) * 64 + (a0[1] & 15) * 4));
        a0[1] = *((int *)(*((long long *)&got.Sbox) + (a0[5] >> 4) * 64 + (a0[5] & 15) * 4));
        a0[5] = *((int *)(*((long long *)&got.Sbox) + (a0[9] >> 4) * 64 + (a0[9] & 15) * 4));
        a0[9] = *((int *)(*((long long *)&got.Sbox) + (a0[13] >> 4) * 64 + (a0[13] & 15) * 4));
        a0[13] = *((int *)(*((long long *)&got.Sbox) + (a0[17] >> 4) * 64 + (a0[17] & 15) * 4));
        a0[17] = *((int *)(*((long long *)&got.Sbox) + (a0[21] >> 4) * 64 + (a0[21] & 15) * 4));
        a0[21] = v0;
        v0 = *((int *)(*((long long *)&got.Sbox) + (a0[2] >> 4) * 64 + (a0[2] & 15) * 4));
        a0[2] = *((int *)(*((long long *)&got.Sbox) + (a0[10] >> 4) * 64 + (a0[10] & 15) * 4));
        a0[10] = *((int *)(*((long long *)&got.Sbox) + (a0[18] >> 4) * 64 + (a0[18] & 15) * 4));
        a0[18] = v0;
        v0 = *((int *)(*((long long *)&got.Sbox) + (a0[6] >> 4) * 64 + (a0[6] & 15) * 4));
        a0[6] = *((int *)(*((long long *)&got.Sbox) + (a0[14] >> 4) * 64 + (a0[14] & 15) * 4));
        a0[14] = *((int *)(*((long long *)&got.Sbox) + (a0[22] >> 4) * 64 + (a0[22] & 15) * 4));
        a0[22] = v0;
        v0 = *((int *)(*((long long *)&got.Sbox) + (a0[3] >> 4) * 64 + (a0[3] & 15) * 4));
        a0[3] = *((int *)(*((long long *)&got.Sbox) + (a0[15] >> 4) * 64 + (a0[15] & 15) * 4));
        a0[15] = v0;
        v0 = *((int *)(*((long long *)&got.Sbox) + (a0[7] >> 4) * 64 + (a0[7] & 15) * 4));
        a0[7] = *((int *)(*((long long *)&got.Sbox) + (a0[19] >> 4) * 64 + (a0[19] & 15) * 4));
        a0[19] = v0;
        v0 = *((int *)(*((long long *)&got.Sbox) + (a0[11] >> 4) * 64 + (a0[11] & 15) * 4));
        a0[11] = *((int *)(*((long long *)&got.Sbox) + (a0[23] >> 4) * 64 + (a0[23] & 15) * 4));
        a0[23] = v0;
        a0[0] = *((int *)(*((long long *)&got.Sbox) + (a0[0] >> 4) * 64 + (a0[0] & 15) * 4));
        a0[4] = *((int *)(*((long long *)&got.Sbox) + (a0[4] >> 4) * 64 + (a0[4] & 15) * 4));
        a0[8] = *((int *)(*((long long *)&got.Sbox) + (a0[8] >> 4) * 64 + (a0[8] & 15) * 4));
        a0[12] = *((int *)(*((long long *)&got.Sbox) + (a0[12] >> 4) * 64 + (a0[12] & 15) * 4));
        a0[16] = *((int *)(*((long long *)&got.Sbox) + (a0[16] >> 4) * 64 + (a0[16] & 15) * 4));
        a0[20] = *((int *)(*((long long *)&got.Sbox) + (a0[20] >> 4) * 64 + (a0[20] & 15) * 4));
        return (unsigned int)a0;
    }
    v0 = *((int *)(*((long long *)&got.Sbox) + (a0[1] >> 4) * 64 + (a0[1] & 15) * 4));
    a0[1] = *((int *)(*((long long *)&got.Sbox) + (a0[5] >> 4) * 64 + (a0[5] & 15) * 4));
    a0[5] = *((int *)(*((long long *)&got.Sbox) + (a0[9] >> 4) * 64 + (a0[9] & 15) * 4));
    a0[9] = *((int *)(*((long long *)&got.Sbox) + (a0[13] >> 4) * 64 + (a0[13] & 15) * 4));
    a0[13] = v0;
    v0 = *((int *)(*((long long *)&got.Sbox) + (a0[2] >> 4) * 64 + (a0[2] & 15) * 4));
    a0[2] = *((int *)(*((long long *)&got.Sbox) + (a0[10] >> 4) * 64 + (a0[10] & 15) * 4));
    a0[10] = v0;
    v0 = *((int *)(*((long long *)&got.Sbox) + (a0[6] >> 4) * 64 + (a0[6] & 15) * 4));
    a0[6] = *((int *)(*((long long *)&got.Sbox) + (a0[14] >> 4) * 64 + (a0[14] & 15) * 4));
    a0[14] = v0;
    v0 = *((int *)(*((long long *)&got.Sbox) + (a0[3] >> 4) * 64 + (a0[3] & 15) * 4));
    a0[3] = *((int *)(*((long long *)&got.Sbox) + (a0[15] >> 4) * 64 + (a0[15] & 15) * 4));
    a0[15] = *((int *)(*((long long *)&got.Sbox) + (a0[11] >> 4) * 64 + (a0[11] & 15) * 4));
    a0[11] = *((int *)(*((long long *)&got.Sbox) + (a0[7] >> 4) * 64 + (a0[7] & 15) * 4));
    a0[7] = v0;
    a0[0] = *((int *)(*((long long *)&got.Sbox) + (a0[0] >> 4) * 64 + (a0[0] & 15) * 4));
    a0[4] = *((int *)(*((long long *)&got.Sbox) + (a0[4] >> 4) * 64 + (a0[4] & 15) * 4));
    a0[8] = *((int *)(*((long long *)&got.Sbox) + (a0[8] >> 4) * 64 + (a0[8] & 15) * 4));
    a0[12] = *((int *)(*((long long *)&got.Sbox) + (a0[12] >> 4) * 64 + (a0[12] & 15) * 4));
    return (unsigned int)a0;
}

extern char got.word;

int MixColumn_AddRoundKey(unsigned int *a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0xa0]
    unsigned int v1;  // [bp-0x9c]
    unsigned int v2;  // [bp-0x98]

    for (v1 = 0; v1 < a1; v1 += 1)
    {
        v2 = a0[4 * v1] * 2;
        if ((unsigned int)(v2 >> 8) == 1)
        {
            v2 ^= 283;
        }
        v0 = a0[(unsigned int)(v1 * 4) + 1];
        v0 = (unsigned int)(v0 * 2) ^ v0;
        if ((unsigned int)(v0 >> 8) == 1)
        {
            v2 = v0 ^ 283 ^ v2;
        }
        else
        {
            v2 = v0 ^ v2;
        }
        v2 = a0[(unsigned int)(v1 * 4) + 2] ^ a0[(unsigned int)(v1 * 4) + 3] ^ *((int *)(got.word + (v1 + a2 * a1) * 4)) ^ v2;
        v2 = a0[(unsigned int)(v1 * 4) + 1] * 2;
        if ((unsigned int)(v2 >> 8) == 1)
        {
            v2 ^= 283;
        }
        v0 = a0[(unsigned int)(v1 * 4) + 2];
        v0 = (unsigned int)(v0 * 2) ^ v0;
        if ((unsigned int)(v0 >> 8) == 1)
        {
            v2 = v0 ^ 283 ^ v2;
        }
        else
        {
            v2 = v0 ^ v2;
        }
        v2 = a0[(unsigned int)(v1 * 4) + 3] ^ a0[4 * v1] ^ *((int *)(got.word + (v1 + a2 * a1) * 4 + 480)) ^ v2;
        v2 = a0[(unsigned int)(v1 * 4) + 2] * 2;
        if ((unsigned int)(v2 >> 8) == 1)
        {
            v2 ^= 283;
        }
        v0 = a0[(unsigned int)(v1 * 4) + 3];
        v0 = (unsigned int)(v0 * 2) ^ v0;
        if ((unsigned int)(v0 >> 8) == 1)
        {
            v2 = v0 ^ 283 ^ v2;
        }
        else
        {
            v2 = v0 ^ v2;
        }
        v2 = a0[4 * v1] ^ a0[(unsigned int)(v1 * 4) + 1] ^ *((int *)(got.word + (v1 + a2 * a1) * 4 + 960)) ^ v2;
        v2 = a0[(unsigned int)(v1 * 4) + 3] * 2;
        if ((unsigned int)(v2 >> 8) == 1)
        {
            v2 ^= 283;
        }
        v0 = a0[4 * v1];
        v0 = (unsigned int)(v0 * 2) ^ v0;
        if ((unsigned int)(v0 >> 8) == 1)
        {
            v2 = v0 ^ 283 ^ v2;
        }
        else
        {
            v2 = v0 ^ v2;
        }
        v2 = a0[(unsigned int)(v1 * 4) + 1] ^ a0[(unsigned int)(v1 * 4) + 2] ^ *((int *)(got.word + (v1 + a2 * a1) * 4 + 1440)) ^ v2;
    }
    for (v1 = 0; v1 < a1; v1 += 1)
    {
        a0[4 * v1] = v2;
        a0[(unsigned int)(v1 * 4) + 1] = v2;
        a0[(unsigned int)(v1 * 4) + 2] = v2;
        a0[(unsigned int)(v1 * 4) + 3] = v2;
    }
    return 0;
}

extern char got.main_result;
extern char got.nb;
extern char got.round_val;

int decrypt(unsigned int *a0, unsigned int *a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x6c]
    uint128_t v1;  // [bp-0x68]
    uint128_t v2;  // [bp-0x58]
    uint128_t v3;  // [bp-0x48]
    uint128_t v4;  // [bp-0x38]
    unsigned int v5;  // [bp-0x20]

    v4 = 236223201504;
    v3 = 210453397553;
    v2 = 386547056776;
    v1 = 287762808882;
    KeySchedule(a2, a1);
    v0 = a2;
    if (a2 != 128128)
    {
        if (v0 != 128192 && v0 != 0x1f500 && v0 != 192128 && v0 != 192192 && v0 != 0x2ef00)
        {
            if (!(v0 != 256128))
            {
                *((int *)*((long long *)&got.round_val)) = 14;
                *((int *)*((long long *)&got.nb)) = 4;
            }
            else if (!(v0 != 256192))
            {
                *((int *)*((long long *)&got.round_val)) = 14;
                *((int *)*((long long *)&got.nb)) = 6;
            }
            else if (v0 == 0x3e900)
            {
                *((int *)*((long long *)&got.round_val)) = 14;
                *((int *)*((long long *)&got.nb)) = 8;
            }
        }
        if (v0 == 192128)
        {
            *((int *)*((long long *)&got.round_val)) = 12;
            *((int *)*((long long *)&got.nb)) = 4;
        }
        if (v0 == 192192 || v0 == 128192)
        {
            *((int *)*((long long *)&got.round_val)) = 12;
            *((int *)*((long long *)&got.nb)) = 6;
        }
        if (v0 == 0x2ef00 || v0 == 0x1f500)
        {
            *((int *)*((long long *)&got.round_val)) = 14;
            *((int *)*((long long *)&got.nb)) = 8;
        }
    }
    else
    {
        *((int *)*((long long *)&got.round_val)) = 10;
        *((int *)*((long long *)&got.nb)) = 4;
    }
    AddRoundKey(a0, a2, *((int *)*((long long *)&got.round_val)));
    InversShiftRow_ByteSub(a0, *((int *)*((long long *)&got.nb)));
    for (v5 = *((int *)*((long long *)&got.round_val)) - 1; v5 >= 1; v5 -= 1)
    {
        a2 = v5;
        AddRoundKey_InversMixColumn(a0, *((int *)*((long long *)&got.nb)), a2);
        InversShiftRow_ByteSub(a0, *((int *)*((long long *)&got.nb)));
    }
    AddRoundKey(a0, a2, 0x0);
    for (v5 = 0; v5 < 16; v5 += 1)
    {
        *((unsigned int *)got.main_result) = (a0[v5] != (int)v1) + *((int *)got.main_result);
    }
    return;
}

extern char got.invSbox;

int InversShiftRow_ByteSub(unsigned int a0[32], unsigned int a1)
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1[32];  // [bp-0x10]

    *((unsigned int *[32])&v1[0]) = a0;
    if (a1 != 4)
    {
        if (a1 != 6)
        {
            if (a1 == 8)
            {
                v0 = *((int *)(*((long long *)&got.invSbox) + (a0[29] >> 4) * 64 + (a0[29] & 15) * 4));
                a0[29] = *((int *)(*((long long *)&got.invSbox) + (a0[25] >> 4) * 64 + (a0[25] & 15) * 4));
                a0[25] = *((int *)(*((long long *)&got.invSbox) + (a0[21] >> 4) * 64 + (a0[21] & 15) * 4));
                a0[21] = *((int *)(*((long long *)&got.invSbox) + (a0[17] >> 4) * 64 + (a0[17] & 15) * 4));
                a0[17] = *((int *)(*((long long *)&got.invSbox) + (a0[13] >> 4) * 64 + (a0[13] & 15) * 4));
                a0[13] = *((int *)(*((long long *)&got.invSbox) + (a0[9] >> 4) * 64 + (a0[9] & 15) * 4));
                a0[9] = *((int *)(*((long long *)&got.invSbox) + (a0[5] >> 4) * 64 + (a0[5] & 15) * 4));
                a0[5] = *((int *)(*((long long *)&got.invSbox) + (a0[1] >> 4) * 64 + (a0[1] & 15) * 4));
                a0[1] = v0;
                v0 = *((int *)(*((long long *)&got.invSbox) + (a0[30] >> 4) * 64 + (a0[30] & 15) * 4));
                a0[30] = *((int *)(*((long long *)&got.invSbox) + (a0[18] >> 4) * 64 + (a0[18] & 15) * 4));
                a0[18] = *((int *)(*((long long *)&got.invSbox) + (a0[6] >> 4) * 64 + (a0[6] & 15) * 4));
                a0[6] = *((int *)(*((long long *)&got.invSbox) + (a0[26] >> 4) * 64 + (a0[26] & 15) * 4));
                a0[26] = *((int *)(*((long long *)&got.invSbox) + (a0[14] >> 4) * 64 + (a0[14] & 15) * 4));
                a0[14] = *((int *)(*((long long *)&got.invSbox) + (a0[2] >> 4) * 64 + (a0[2] & 15) * 4));
                a0[2] = *((int *)(*((long long *)&got.invSbox) + (a0[22] >> 4) * 64 + (a0[22] & 15) * 4));
                a0[22] = *((int *)(*((long long *)&got.invSbox) + (a0[10] >> 4) * 64 + (a0[10] & 15) * 4));
                a0[10] = v0;
                v0 = *((int *)(*((long long *)&got.invSbox) + (a0[31] >> 4) * 64 + (a0[31] & 15) * 4));
                a0[31] = *((int *)(*((long long *)&got.invSbox) + (a0[15] >> 4) * 64 + (a0[15] & 15) * 4));
                a0[15] = v0;
                v0 = *((int *)(*((long long *)&got.invSbox) + (a0[27] >> 4) * 64 + (a0[27] & 15) * 4));
                a0[27] = *((int *)(*((long long *)&got.invSbox) + (a0[11] >> 4) * 64 + (a0[11] & 15) * 4));
                a0[11] = v0;
                v0 = *((int *)(*((long long *)&got.invSbox) + (a0[23] >> 4) * 64 + (a0[23] & 15) * 4));
                a0[23] = *((int *)(*((long long *)&got.invSbox) + (a0[7] >> 4) * 64 + (a0[7] & 15) * 4));
                a0[7] = v0;
                v0 = *((int *)(*((long long *)&got.invSbox) + (a0[19] >> 4) * 64 + (a0[19] & 15) * 4));
                a0[19] = *((int *)(*((long long *)&got.invSbox) + (a0[3] >> 4) * 64 + (a0[3] & 15) * 4));
                a0[3] = v0;
                a0[0] = *((int *)(*((long long *)&got.invSbox) + (a0[0] >> 4) * 64 + (a0[0] & 15) * 4));
                a0[4] = *((int *)(*((long long *)&got.invSbox) + (a0[4] >> 4) * 64 + (a0[4] & 15) * 4));
                a0[8] = *((int *)(*((long long *)&got.invSbox) + (a0[8] >> 4) * 64 + (a0[8] & 15) * 4));
                a0[12] = *((int *)(*((long long *)&got.invSbox) + (a0[12] >> 4) * 64 + (a0[12] & 15) * 4));
                a0[16] = *((int *)(*((long long *)&got.invSbox) + (a0[16] >> 4) * 64 + (a0[16] & 15) * 4));
                a0[20] = *((int *)(*((long long *)&got.invSbox) + (a0[20] >> 4) * 64 + (a0[20] & 15) * 4));
                a0[24] = *((int *)(*((long long *)&got.invSbox) + (a0[24] >> 4) * 64 + (a0[24] & 15) * 4));
                a0[28] = *((int *)(*((long long *)&got.invSbox) + (a0[28] >> 4) * 64 + (a0[28] & 15) * 4));
                return (unsigned int)a0;
            }
            return a1 - 8;
        }
        v0 = *((int *)(*((long long *)&got.invSbox) + (a0[21] >> 4) * 64 + (a0[21] & 15) * 4));
        a0[21] = *((int *)(*((long long *)&got.invSbox) + (a0[17] >> 4) * 64 + (a0[17] & 15) * 4));
        a0[17] = *((int *)(*((long long *)&got.invSbox) + (a0[13] >> 4) * 64 + (a0[13] & 15) * 4));
        a0[13] = *((int *)(*((long long *)&got.invSbox) + (a0[9] >> 4) * 64 + (a0[9] & 15) * 4));
        a0[9] = *((int *)(*((long long *)&got.invSbox) + (a0[5] >> 4) * 64 + (a0[5] & 15) * 4));
        a0[5] = *((int *)(*((long long *)&got.invSbox) + (a0[1] >> 4) * 64 + (a0[1] & 15) * 4));
        a0[1] = v0;
        v0 = *((int *)(*((long long *)&got.invSbox) + (a0[22] >> 4) * 64 + (a0[22] & 15) * 4));
        a0[22] = *((int *)(*((long long *)&got.invSbox) + (a0[14] >> 4) * 64 + (a0[14] & 15) * 4));
        a0[14] = *((int *)(*((long long *)&got.invSbox) + (a0[6] >> 4) * 64 + (a0[6] & 15) * 4));
        a0[6] = v0;
        v0 = *((int *)(*((long long *)&got.invSbox) + (a0[18] >> 4) * 64 + (a0[18] & 15) * 4));
        a0[18] = *((int *)(*((long long *)&got.invSbox) + (a0[10] >> 4) * 64 + (a0[10] & 15) * 4));
        a0[10] = *((int *)(*((long long *)&got.invSbox) + (a0[2] >> 4) * 64 + (a0[2] & 15) * 4));
        a0[2] = v0;
        v0 = *((int *)(*((long long *)&got.invSbox) + (a0[15] >> 4) * 64 + (a0[15] & 15) * 4));
        a0[15] = *((int *)(*((long long *)&got.invSbox) + (a0[3] >> 4) * 64 + (a0[3] & 15) * 4));
        a0[3] = v0;
        v0 = *((int *)(*((long long *)&got.invSbox) + (a0[19] >> 4) * 64 + (a0[19] & 15) * 4));
        a0[19] = *((int *)(*((long long *)&got.invSbox) + (a0[7] >> 4) * 64 + (a0[7] & 15) * 4));
        a0[7] = v0;
        v0 = *((int *)(*((long long *)&got.invSbox) + (a0[23] >> 4) * 64 + (a0[23] & 15) * 4));
        a0[23] = *((int *)(*((long long *)&got.invSbox) + (a0[11] >> 4) * 64 + (a0[11] & 15) * 4));
        a0[11] = v0;
        a0[0] = *((int *)(*((long long *)&got.invSbox) + (a0[0] >> 4) * 64 + (a0[0] & 15) * 4));
        a0[4] = *((int *)(*((long long *)&got.invSbox) + (a0[4] >> 4) * 64 + (a0[4] & 15) * 4));
        a0[8] = *((int *)(*((long long *)&got.invSbox) + (a0[8] >> 4) * 64 + (a0[8] & 15) * 4));
        a0[12] = *((int *)(*((long long *)&got.invSbox) + (a0[12] >> 4) * 64 + (a0[12] & 15) * 4));
        a0[16] = *((int *)(*((long long *)&got.invSbox) + (a0[16] >> 4) * 64 + (a0[16] & 15) * 4));
        a0[20] = *((int *)(*((long long *)&got.invSbox) + (a0[20] >> 4) * 64 + (a0[20] & 15) * 4));
        return (unsigned int)a0;
    }
    v0 = *((int *)(*((long long *)&got.invSbox) + (a0[13] >> 4) * 64 + (a0[13] & 15) * 4));
    a0[13] = *((int *)(*((long long *)&got.invSbox) + (a0[9] >> 4) * 64 + (a0[9] & 15) * 4));
    a0[9] = *((int *)(*((long long *)&got.invSbox) + (a0[5] >> 4) * 64 + (a0[5] & 15) * 4));
    a0[5] = *((int *)(*((long long *)&got.invSbox) + (a0[1] >> 4) * 64 + (a0[1] & 15) * 4));
    a0[1] = v0;
    v0 = *((int *)(*((long long *)&got.invSbox) + (a0[14] >> 4) * 64 + (a0[14] & 15) * 4));
    a0[14] = *((int *)(*((long long *)&got.invSbox) + (a0[6] >> 4) * 64 + (a0[6] & 15) * 4));
    a0[6] = v0;
    v0 = *((int *)(*((long long *)&got.invSbox) + (a0[2] >> 4) * 64 + (a0[2] & 15) * 4));
    a0[2] = *((int *)(*((long long *)&got.invSbox) + (a0[10] >> 4) * 64 + (a0[10] & 15) * 4));
    a0[10] = v0;
    v0 = *((int *)(*((long long *)&got.invSbox) + (a0[15] >> 4) * 64 + (a0[15] & 15) * 4));
    a0[15] = *((int *)(*((long long *)&got.invSbox) + (a0[3] >> 4) * 64 + (a0[3] & 15) * 4));
    a0[3] = *((int *)(*((long long *)&got.invSbox) + (a0[7] >> 4) * 64 + (a0[7] & 15) * 4));
    a0[7] = *((int *)(*((long long *)&got.invSbox) + (a0[11] >> 4) * 64 + (a0[11] & 15) * 4));
    a0[11] = v0;
    a0[0] = *((int *)(*((long long *)&got.invSbox) + (a0[0] >> 4) * 64 + (a0[0] & 15) * 4));
    a0[4] = *((int *)(*((long long *)&got.invSbox) + (a0[4] >> 4) * 64 + (a0[4] & 15) * 4));
    a0[8] = *((int *)(*((long long *)&got.invSbox) + (a0[8] >> 4) * 64 + (a0[8] & 15) * 4));
    a0[12] = *((int *)(*((long long *)&got.invSbox) + (a0[12] >> 4) * 64 + (a0[12] & 15) * 4));
    return (unsigned int)a0;
}

extern char got.key;
extern char got.statemt;

int aes_main()
{
    *((int *)got.statemt) = 50;
    *((int *)(got.statemt + 4)) = 67;
    *((int *)(got.statemt + 8)) = 246;
    *((int *)(got.statemt + 12)) = 168;
    *((int *)(got.statemt + 16)) = 136;
    *((int *)(got.statemt + 20)) = 90;
    *((int *)(got.statemt + 24)) = 48;
    *((int *)(got.statemt + 28)) = 141;
    *((int *)(got.statemt + 32)) = 49;
    *((int *)(got.statemt + 36)) = 49;
    *((int *)(got.statemt + 40)) = 152;
    *((int *)(got.statemt + 44)) = 162;
    *((int *)(got.statemt + 48)) = 224;
    *((int *)(got.statemt + 52)) = 55;
    *((int *)(got.statemt + 56)) = 7;
    *((int *)(got.statemt + 60)) = 52;
    *((int *)got.key) = 43;
    *((int *)(got.key + 4)) = 126;
    *((int *)(got.key + 8)) = 21;
    *((int *)(got.key + 12)) = 22;
    *((int *)(got.key + 16)) = 40;
    *((int *)(got.key + 20)) = 174;
    *((int *)(got.key + 24)) = 210;
    *((int *)(got.key + 28)) = 166;
    *((int *)(got.key + 32)) = 171;
    *((int *)(got.key + 36)) = 247;
    *((int *)(got.key + 40)) = 21;
    *((int *)(got.key + 44)) = 136;
    *((int *)(got.key + 48)) = 9;
    *((int *)(got.key + 52)) = 207;
    *((int *)(got.key + 56)) = 79;
    *((int *)(got.key + 60)) = 60;
    encrypt(got.statemt, got.key, 0x1f480);
    decrypt(got.statemt, got.key, 0x1f480);
    return;
}

extern char got.endTimer;
extern char got.main_result;
extern char got.startTimer;

long long submain()
{
    unsigned long v2;  // xmm0lq

    *((int *)got.main_result) = 0;
    rtclock();
    *((unsigned long *)got.startTimer) = v2;
    aes_main();
    rtclock();
    *((unsigned long *)got.endTimer) = v2;
    printf("%0.6f\n");
    return *((int *)got.main_result);
}

int rtclock()
{
    unsigned int v0;  // [bp-0x1c]
    char v1;  // [bp-0x18]

    v0 = gettimeofday(&v1, NULL);
    if (v0 != 0)
    {
        return printf("Error return from gettimeofday: %d", v0);
    }
    return v0;
}

