extern char got.A;
extern char got.endTimer;
extern char got.imem;
extern char got.main_result;
extern char got.outData;
extern char got.startTimer;
extern char submain;

long long submain()
{
    unsigned long v0;  // [bp-0x1f0]
    unsigned long v1;  // [bp-0x1e8]
    unsigned int v2;  // [bp-0x1dc]
    unsigned int v3;  // [bp-0x1d8]
    unsigned int v4;  // [bp-0x1d4]
    unsigned int v5;  // [bp-0x1d0]
    unsigned short v6;  // [bp-0x1ca]
    unsigned int v7;  // [bp-0x1c8]
    unsigned int v8;  // [bp-0x1c4]
    unsigned int v9;  // [bp-0x1c0]
    unsigned int v10;  // [bp-0x1bc]
    unsigned int v11;  // [bp-0x1b8]
    unsigned int v12;  // [bp-0x1b4]
    unsigned int v13;  // [bp-0x1b0]
    unsigned int v14;  // [bp-0x1ac]
    unsigned int v15;  // [bp-0x1a8]
    unsigned int v16;  // [bp-0xa4]
    unsigned int v17;  // [bp-0xa0]
    unsigned int v18;  // [bp-0x9c]
    unsigned int v19;  // [bp-0x98]
    unsigned int v20;  // [bp-0x24]
    unsigned int v21;  // [bp-0x1c]
    unsigned long v22;  // [bp-0x10]
    unsigned long v25;  // xmm0lq

    v18 = 0;
    v17 = 0;
    v16 = 0;
    rtclock();
    *((unsigned long *)got.startTimer) = v25;
    v3 = 0;
    *((int *)got.main_result) = 0;
    for (v4 = 0; v4 < 32; v4 += 1)
    {
        v19 = 0;
    }
    v20 = 2147479548;
    for (v4 = 0; v4 < 64; v4 += 1)
    {
        v15 = *((int *)(got.A + v4 * 4));
    }
    *((long long **)&v16) = &submain;
    do
    {
        v13 = *((int *)(got.imem + ((char)v16 >> 2) * 8));
        v16 += 4;
        v12 = v13 >> 26;
        v2 = v12;
        if (!(v12 != 0))
        {
            v7 = v13 & 63;
            v8 = (unsigned int)(v13 >> 6) & 31;
            v9 = (unsigned int)(v13 >> 11) & 31;
            v10 = *((short *)&((char *)&v13)[2]) & 31;
            v11 = (unsigned int)(v13 >> 21) & 31;
            v1 = v7;
            switch (v7)
            {
            case 0:
                v19 <<= (char)v8 & 31;
                break;
            case 2:
                v19 >>= (char)v8 & 31;
                break;
            case 4:
                v19 <<= (char)v19 & 31;
                break;
            case 6:
                v19 >>= (char)v19 & 31;
                break;
            case 8:
                v16 = v19;
                break;
            case 16:
                v19 = v18;
                break;
            case 18:
                v19 = v17;
                break;
            case 24:
                v22 = v19 * v19;
                v17 = 4294967295 & v22;
                v18 = v22 >> 32 & 4294967295;
                break;
            case 25:
                v22 = v19 * v19;
                v17 = 4294967295 & v22;
                v18 = v22 >> 32 & 4294967295;
                break;
            case 33:
                v19 += v19;
                break;
            case 35:
                v19 -= v19;
                break;
            case 36:
                v19 &= v19;
                break;
            case 37:
                v19 |= v19;
                break;
            case 38:
                v19 ^= v19;
                break;
            case 42:
                v19 = v19 < v19;
                break;
            case 43:
                v19 = v19 < v19;
                break;
            default:
                v16 = 0;
                break;
            }
        }
        else if (!(v2 != 2))
        {
            v5 = v13 & 67108863;
            v16 = v5 * 4;
        }
        else if (v2 == 3)
        {
            v5 = v13 & 67108863;
            v21 = v16;
            v16 = v5 * 4;
        }
        else
        {
            v6 = v13;
            v10 = *((short *)&((char *)&v13)[2]) & 31;
            v11 = (unsigned int)(v13 >> 21) & 31;
            v0 = v12 - 1;
            switch (v12)
            {
            case 1:
                if (v19 >= 0)
                {
                    v16 = v16 - 4 + (unsigned int)(v6 * 4);
                }
                break;
            case 4:
                if (v19 == v19)
                {
                    v16 = v16 - 4 + (unsigned int)(v6 * 4);
                }
                break;
            case 5:
                if (v19 != v19)
                {
                    v16 = v16 - 4 + (unsigned int)(v6 * 4);
                }
                break;
            case 9:
                v19 += v6;
                break;
            case 10:
                v19 = v19 < v6;
                break;
            case 11:
                v19 = v19 < v6;
                break;
            case 12:
                v19 &= v6;
                break;
            case 13:
                v19 |= v6;
                break;
            case 14:
                v19 ^= v6;
                break;
            case 15:
                v19 = v6 * 0x10000;
                break;
            case 35:
                v19 = v15;
                break;
            case 43:
                v15 = v19;
                break;
            default:
                v16 = 0;
                break;
            }
        }
        v19 = 0;
        v3 += 1;
    }
    while (v16 != 0);
    *((unsigned int *)got.main_result) = (v3 != 611) + *((int *)got.main_result);
    for (v14 = 0; v14 < 8; v14 += 1)
    {
        *((unsigned int *)got.main_result) = (v15 != *((int *)(got.outData + (v14 << 2)))) + *((int *)got.main_result);
    }
    rtclock();
    *((unsigned long *)got.endTimer) = v25;
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

