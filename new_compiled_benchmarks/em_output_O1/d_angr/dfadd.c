long long shift64RightJamming(unsigned long long a0, unsigned long long a1, unsigned long long *a2)
{
    unsigned long v1;  // rax
    unsigned long long v2;  // rax
    void* v4;  // rcx
    void* v5;  // rcx
    void* v6;  // rax

    if ((unsigned int)a1 != 0)
    {
        if ((unsigned int)a1 <= 63)
        {
            v2 = a0 >> ((char)a1 & 63);
            *((char *)&a1) = 0 - (char)a1;
            v4 = 0;
            *((char *)&v4) = a0 << ((char)a1 & 63) != 0;
            v5 = v4 | v2;
            *(a2) = v5;
            return v2;
        }
        v6 = 0;
        *((char *)&v6) = a0 != 0;
        *(a2) = v6;
        return v6;
    }
    *(a2) = a0;
    return v1;
}

extern char got.float_exception_flags;

long long float_raise(unsigned int a0)
{
    *((unsigned int *)got.float_exception_flags) = *((int *)got.float_exception_flags) | a0;
    return got.float_exception_flags;
}

long long float64_is_nan(unsigned long long a0)
{
    void* v2;  // rax

    v2 = 0;
    *((char *)&v2) = !(a0 * 2 <= -0x20000000000000);
    return v2;
}

long long float64_is_signaling_nan(unsigned long long a0)
{
    int tmp_21;  // tmp #21
    int tmp_28;  // tmp #28
    unsigned long v2;  // rax

    tmp_21 = (0x7ff8000000000000 & a0) == 0x7ff0000000000000;
    tmp_28 = a0 * 0x1000;
    v2 = (char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Mul(rdi<8>, 0x2000<64>), t28, cc_ndep<8>) & tmp_21;
    return v2;
}

long long extractFloat64Frac(unsigned long a0)
{
    return 4503599627370495 & a0;
}

long long extractFloat64Exp(unsigned long a0)
{
    return (unsigned int)a0 / 0x10000000000000 & 2047;
}

long long extractFloat64Sign(unsigned long a0)
{
    return a0 / 0x8000000000000000;
}

long long packFloat64(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    return a0 * 0x8000000000000000 + a2 + a1 * 0x10000000000000;
}

extern char got.float_exception_flags;
extern char got.float_rounding_mode;

long long roundAndPackFloat64(unsigned int a0, unsigned int a1, unsigned int a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned short v0)
{
    unsigned long long v1;  // r8
    unsigned long long v2;  // rcx
    void* v3;  // rcx
    unsigned long long v4;  // cc_dep2
    void* v5;  // rdx
    unsigned int v6;  // r9
    unsigned long v7;  // rsi
    unsigned long long v8;  // rcx
    void* v11;  // rcx
    void* v12;  // rcx
    unsigned long long v13;  // rdx
    void* v14;  // rcx
    void* v15;  // rcx

    if (!(*((int *)got.float_rounding_mode) != 0))
    {
        v1 = 0x200;
        v2 = 0;
    }
    else if (*((int *)got.float_rounding_mode) == 1)
    {
        v2 = -1;
        v1 = 0;
    }
    else
    {
        v3 = 0;
        if ((unsigned int)a0 != 0)
        {
            v4 = 2;
        }
        else
        {
            v4 = 3;
        }
        *((char *)&v3) = *((int *)got.float_rounding_mode) == v4;
        v1 = (*((int *)got.float_rounding_mode) == v4? 0 : 1023);
        v2 = 0 - v3;
    }
    v6 = (unsigned int)v5 & 1023;
    if ((unsigned short)a1 >= 2045)
    {
        if ((unsigned int)v7 <= 2045)
        {
            if (v7 == 2045 && (char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, r8<8>, rdx<8>, cc_ndep<8>))
            {
                *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 9;
                v8 = v2 + a0 * 0x8000000000000000;
                return 0x7ff0000000000000 + v8;
            }
            if ((!((char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, r8<8>, rdx<8>, cc_ndep<8>)) || v7 != 2045) && (unsigned int)v7 < 0)
            {
                if ((unsigned int)v7 >= -63)
                {
                    v11 = 0;
                    *((char *)&v11) = v5 << ((char)v7 & 63) != 0;
                    v12 = v11 | v5 >> (0 - (char)v7 & 63);
                }
                else
                {
                    v12 = 0;
                    *((char *)&v12) = v5 != 0;
                }
                v5 = v12;
                v6 = (unsigned int)v12 & 1023;
                if (((unsigned short)(unsigned int)v12 & 1023) != 0)
                {
                    *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 4;
                }
                else
                {
                    v6 = 0;
                }
            }
        }
        else
        {
            *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 9;
            v8 = v2 + a0 * 0x8000000000000000;
            return 0x7ff0000000000000 + v8;
        }
    }
    if ((unsigned short)a1 < 2045 || (unsigned int)v7 <= 2045 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, r8<8>, rdx<8>, cc_ndep<8>)) || (unsigned int)v7 <= 2045 && v7 != 2045)
    {
        if (v6 != 0)
        {
            *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 1;
            v13 = v5 + v1 >> 10;
            v6 ^= 0x200;
            v14 = 0;
            *((char *)&v14) = *((int *)got.float_rounding_mode) == 0 && v6 == 0;
            v15 = !(v14) & v13;
            return (a0 * 0x8000000000000000 | v15) + (v15 == 0? v15 : 0);
        }
        v13 = v5 + v1 >> 10;
        v6 ^= 0x200;
        v14 = 0;
        *((char *)&v14) = *((int *)got.float_rounding_mode) == 0 && v6 == 0;
        v15 = !(v14) & v13;
        return (a0 * 0x8000000000000000 | v15) + (v15 == 0? v15 : 0);
    }
}

extern char countLeadingZeros32.countLeadingZerosHigh;

long long normalizeRoundAndPackFloat64(unsigned int a0, unsigned int a1, unsigned int a2, unsigned short a3)
{
    char v0;  // [bp+0x0]
    unsigned int v2;  // ecx
    void* v3;  // r9
    unsigned long long v4;  // rdx
    void* v5;  // r9
    unsigned long v6;  // rcx
    unsigned long long v7;  // rsi

    v2 = 0;
    *((char *)&v2) = [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(rdx<8>, 0x20<8>), Shr(rdx<8>, 0x1f<8>), cc_ndep<8>);
    v3 = 0;
    *((char *)&v3) = (v4 >> 32 == 0? (unsigned int)v4 : (unsigned int)(v4 >> 32)) < 0x10000;
    v5 = v3 * 16;
    v6 = ...;
    *((unsigned int *)&v4) = v4 << ((char)v6 & 63);
    *((unsigned int *)&v7) = v7 - v6;
    return roundAndPackFloat64(a0, v7, v4, v6, &countLeadingZeros32.countLeadingZerosHigh, v5, *((short *)&v0));
}

extern char got.float_exception_flags;

int addFloat64Sigs(unsigned long a0, unsigned long long a1, unsigned int a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long v1, unsigned short a6)
{
    char v0;  // [bp+0x0]
    unsigned int v2;  // ebx
    unsigned long v3;  // r9
    unsigned long long v4;  // r11
    unsigned long v5;  // r8
    void* v7;  // rsi
    unsigned long v8;  // r11
    unsigned long v10;  // r8
    void* v11;  // rsi
    unsigned long long v12;  // cc_dep1
    unsigned long long v13;  // r8
    unsigned long v14;  // rdx
    unsigned long long v15;  // r9
    void* v16;  // rsi
    unsigned int v17;  // rcx
    unsigned int v18;  // eax
    unsigned long long v19;  // rdx
    unsigned long long v21;  // rcx
    unsigned long v22;  // rdx
    void* v24;  // rax
    void* v25;  // r9
    unsigned long long v27;  // r8
    unsigned long long v28;  // rsi
    unsigned int v29;  // eax

    v2 = (unsigned int)a1 / 0x10000000000000 & 2047;
    v3 = a0 * 0x200 & 0x1ffffffffffffe00;
    v4 = a1 * 0x200 & 0x1ffffffffffffe00;
    v5 = ((unsigned int)a0 / 0x10000000000000 & 2047) - ((unsigned int)a1 / 0x10000000000000 & 2047);
    if (((unsigned int)(a0 >> 52) & 2047) > ((unsigned int)(a1 >> 52) & 2047))
    {
        if (!(((unsigned short)(a0 >> 52) & 2047) == 2047))
        {
            v7 = 0;
            *((char *)&v7) = v2 == 0;
            v8 = (v2 != 0? a1 * 0x200 & 0x1ffffffffffffe00 | 0x2000000000000000 : r11<8>);
            v10 = v5 - v7;
            if ((unsigned int)v5 != (unsigned int)v7)
            {
                roundAndPackFloat64(rdx<8>, (unsigned int)a0 / 0x10000000000000 & 2047, a1 * 0x200 & 0x1ffffffffffffe00 | 0x2000000000000000, a1 * 0x200 & 0x1ffffffffffffe00 | 0x2000000000000000, r8<8>, a0 * 0x200 & 0x1ffffffffffffe00, *((short *)stack_base));
                return (unsigned int)((a1 * 0x200 & 0x1ffffffffffffe00 | 0x2000000000000000) >> 52) & 2047;
            }
            v15 = (a0 * 0x200 & 0x1ffffffffffffe00 | 0x2000000000000000) + r11<8>;
            v16 = 0;
            *((char *)&v16) = [D] amd64g_calculate_condition(0x9<64>, 0x4<64>, r9<8>, r9<8>, cc_ndep<8>);
            v17 = ((char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, r9<8>, r9<8>, cc_ndep<8>)? v15 : v15 << 1);
            v18 = (unsigned int)(((unsigned int)a0 / 0x10000000000000 & 2047) - v16);
            *((unsigned int *)&a0) = rdx<8>;
            *((unsigned int *)&v16) = v18;
            roundAndPackFloat64(a0, (unsigned int)v16, rcx<8>, v17, v10, v15, *((short *)&v0));
            return roundAndPackFloat64(a0, (unsigned int)v16, v22, v17, v10, v15, *((short *)&v0));
        }
        else if ((a0 << 9 & 0x1ffffffffffffe00) == 0)
        {
            return a0;
        }
    }
    else
    {
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x7<64>, Conv(32->64, (Conv(64->32, (rdi<8> >> 0x34<8>)) & 0x7ff<32>)), Conv(32->64, (Conv(64->32, (rsi<8> >> 0x34<8>)) & 0x7ff<32>)), cc_ndep<8>)))
        {
            if (((unsigned short)(a0 >> 52) & 2047) != 0)
            {
                if (((unsigned short)(a0 >> 52) & 2047) != 2047)
                {
                    v21 = 0x4000000000000000 | (a1 * 0x200 & 0x1ffffffffffffe00) + (a0 * 0x200 & 0x1ffffffffffffe00);
                    *((unsigned int *)&a0) = rdx<8>;
                    *((unsigned int *)&v16) = (unsigned int)a0 / 0x10000000000000 & 2047;
                    roundAndPackFloat64(a0, (unsigned int)v16, rcx<8>, v17, v10, v15, *((short *)&v0));
                    return roundAndPackFloat64(a0, (unsigned int)v16, v22, v17, v10, v15, *((short *)&v0));
                }
                if ((a0 << 9 & 0x1ffffffffffffe00) == 0 && ((unsigned short)(a0 >> 52) & 2047) == 2047 && (a1 << 9 & 0x1ffffffffffffe00) == 0)
                {
                    return a0;
                }
            }
            else
            {
                *((unsigned int *)&a0) = v14 * 0x8000000000000000 | (a1 * 0x200 & 0x1ffffffffffffe00) + (a0 * 0x200 & 0x1ffffffffffffe00) >> 9;
                return a0;
            }
        }
        else
        {
            if (!(((unsigned short)(a1 >> 52) & 2047) == 2047))
            {
                v11 = 0;
                *((char *)&v11) = ((unsigned int)(a0 >> 52) & 2047) == 0;
                v12 = v5;
                v13 = v5 + v11;
                if (!((unsigned int)(v12 + v11) == 0))
                {
                    if ((unsigned int)v13 >= -63)
                    {
                    }
                    else
                    {
                        v24 = 0;
                        *((char *)&v24) = (((unsigned int)(a0 >> 52) & 2047) != 0? a0 << 9 & 0x1ffffffffffffe00 | 0x2000000000000000 : a0 << 9 & 0x1ffffffffffffe00) != 0;
                        v25 = v24;
                        v15 = (v25 | 0x2000000000000000) + r11<8>;
                        *((unsigned int *)&v16) = rax<8>;
                        roundAndPackFloat64(rdx<8>, rsi<4>, rcx<8>, rcx<8>, r8<8>, r9<8>, *((short *)stack_base));
                        return v29;
                    }
                }
                if ((unsigned int)(v12 + v11) == 0 || (unsigned int)v13 >= -63)
                {
                    roundAndPackFloat64(rdx<8>, (unsigned int)a0 / 0x10000000000000 & 2047, rcx<8>, rcx<8>, r8<8>, (((unsigned int)(a0 >> 52) & 2047) != 0? a0 << 9 & 0x1ffffffffffffe00 | 0x2000000000000000 : a0 << 9 & 0x1ffffffffffffe00), *((short *)stack_base));
                    return rcx<8> / 0x10000000000000 & 2047;
                }
            }
            else if ((a1 << 9 & 0x1ffffffffffffe00) == 0)
            {
                *((unsigned int *)&a0) = 0x7ff0000000000000 | v19 * 0x8000000000000000;
                return a0;
            }
        }
    }
    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x7<64>, Conv(32->64, (Conv(64->32, (rdi<8> >> 0x34<8>)) & 0x7ff<32>)), Conv(32->64, (Conv(64->32, (rsi<8> >> 0x34<8>)) & 0x7ff<32>)), cc_ndep<8>) || ((unsigned short)(a0 >> 52) & 2047) == 2047) && (((unsigned int)(a0 >> 52) & 2047) <= ((unsigned int)(a1 >> 52) & 2047) || ((unsigned short)(a0 >> 52) & 2047) == 2047) && (((unsigned int)(a0 >> 52) & 2047) <= ((unsigned int)(a1 >> 52) & 2047) || (a0 << 9 & 0x1ffffffffffffe00) != 0) && ((a0 << 9 & 0x1ffffffffffffe00) != 0 || (a1 << 9 & 0x1ffffffffffffe00) != 0) && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x7<64>, Conv(32->64, (Conv(64->32, (rdi<8> >> 0x34<8>)) & 0x7ff<32>)), Conv(32->64, (Conv(64->32, (rsi<8> >> 0x34<8>)) & 0x7ff<32>)), cc_ndep<8>) || ((unsigned short)(a0 >> 52) & 2047) != 0 || ((unsigned int)(a0 >> 52) & 2047) > ((unsigned int)(a1 >> 52) & 2047)) && (((unsigned short)(a1 >> 52) & 2047) == 2047 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x7<64>, Conv(32->64, (Conv(64->32, (rdi<8> >> 0x34<8>)) & 0x7ff<32>)), Conv(32->64, (Conv(64->32, (rsi<8> >> 0x34<8>)) & 0x7ff<32>)), cc_ndep<8>)) || ((unsigned int)(a0 >> 52) & 2047) > ((unsigned int)(a1 >> 52) & 2047)) && (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x7<64>, Conv(32->64, (Conv(64->32, (rdi<8> >> 0x34<8>)) & 0x7ff<32>)), Conv(32->64, (Conv(64->32, (rsi<8> >> 0x34<8>)) & 0x7ff<32>)), cc_ndep<8>)) || ((unsigned int)(a0 >> 52) & 2047) > ((unsigned int)(a1 >> 52) & 2047) || (a1 << 9 & 0x1ffffffffffffe00) != 0))
    {
        *((char *)&a2) = (char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (0x7ff8000000000000 & a1) == 0x7ff0000000000000;
        if (((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (a0 & 0x7ff8000000000000) == 0x7ff0000000000000) == 0 && ((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (0x7ff8000000000000 & a1) == 0x7ff0000000000000) == 0)
        {
            v27 = a1 | 0x8000000000000;
            v28 = a1 * 2;
            *((unsigned int *)&a0) = ((char)a2 != 0? v27 : (((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rdi<8>, 0xd<8>), Shl(rdi<8>, 0xc<8>), cc_ndep<8>) & (a0 & 0x7ff8000000000000) == 0x7ff0000000000000) != 0? rdi<8> | 0x8000000000000 : (v28 < -9007199254740991? rdi<8> | 0x8000000000000 : v27)));
            return a0;
        }
        if (((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (0x7ff8000000000000 & a1) == 0x7ff0000000000000) != 0 || ((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (a0 & 0x7ff8000000000000) == 0x7ff0000000000000) != 0)
        {
            *((char *)got.float_exception_flags) = *((char *)got.float_exception_flags) | 16;
            v27 = a1 | 0x8000000000000;
            v28 = a1 * 2;
            *((unsigned int *)&a0) = ((char)a2 != 0? v27 : (((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rdi<8>, 0xd<8>), Shl(rdi<8>, 0xc<8>), cc_ndep<8>) & (a0 & 0x7ff8000000000000) == 0x7ff0000000000000) != 0? rdi<8> | 0x8000000000000 : (v28 < -9007199254740991? rdi<8> | 0x8000000000000 : v27)));
            return a0;
        }
    }
}

extern char countLeadingZeros32.countLeadingZerosHigh;
extern char got.float_exception_flags;
extern char got.float_rounding_mode;

int subFloat64Sigs(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned short a3)
{
    char v0;  // [bp+0x0]
    unsigned long long v2;  // rbx
    unsigned long long v3;  // r9
    unsigned long long v4;  // r11
    unsigned long long v5;  // rax
    unsigned long long v6;  // r8
    void* v7;  // rcx
    unsigned long long v9;  // r8
    void* v10;  // rcx
    void* v11;  // rsi
    unsigned long long v13;  // r8
    unsigned long v14;  // rdx
    void* v15;  // rax
    void* v16;  // rsi
    unsigned long v17;  // rax
    void* v18;  // rcx
    void* v19;  // rcx
    void* v20;  // rcx
    unsigned long v21;  // rdi
    void* v22;  // rcx
    unsigned long long v23;  // r9
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned int v26;  // edx
    unsigned int v27;  // ecx
    void* v28;  // r8
    void* v29;  // r8
    unsigned int v30;  // rcx
    unsigned long long v32;  // rax
    unsigned long long v33;  // r8
    unsigned long long v34;  // rsi
    unsigned long long v35;  // rax
    unsigned int v36;  // eax
    unsigned int v37;  // eax

    v2 = (unsigned int)a0 / 0x10000000000000 & 2047;
    v3 = (unsigned int)a1 / 0x10000000000000 & 2047;
    v4 = a0 * 0x400 & 0x3ffffffffffffc00;
    v5 = a1 * 0x400 & 0x3ffffffffffffc00;
    v6 = ((unsigned int)a0 / 0x10000000000000 & 2047) - ((unsigned int)a1 / 0x10000000000000 & 2047);
    if (((unsigned int)(a0 >> 52) & 2047) > ((unsigned int)(a1 >> 52) & 2047))
    {
        if (!(((unsigned short)(a0 >> 52) & 2047) == 2047))
        {
            v7 = 0;
            *((char *)&v7) = (unsigned int)v3 == 0;
            v16 = ((unsigned int)v3 == 0? a1 << 10 & 0x3ffffffffffffc00 : a1 << 10 & 0x3ffffffffffffc00 | 0x4000000000000000);
            v9 = v6 - v7;
            if ((unsigned int)v6 != (unsigned int)v7)
            {
                if ((unsigned int)v9 <= 63)
                {
                    v17 = ((unsigned int)v3 == 0? v5 : v5 | 0x4000000000000000) >> ((char)v9 & 63);
                    *((char *)&v9) = 0 - (char)v9;
                    v18 = 0;
                    *((char *)&v18) = v16 << ((char)v9 & 63) != 0;
                    v19 = v18 | v17;
                    v16 = v19;
                }
                else
                {
                    v15 = 0;
                    *((char *)&v15) = v16 != 0;
                    v16 = v15;
                }
            }
            v23 = (unsigned int)a0 / 0x10000000000000 & 2047;
            v24 = (a0 * 0x400 & 0x3ffffffffffffc00 | 0x4000000000000000) - v16;
            v27 = 0;
            *((char *)&v27) = [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(rax<8>, 0x20<8>), Shr(rax<8>, 0x1f<8>), cc_ndep<8>);
            v28 = 0;
            *((char *)&v28) = (v25 >> 32 == 0? (unsigned int)v25 : (unsigned int)(v25 >> 32)) < 0x10000;
            v29 = v28 * 16;
            v30 = ...;
            roundAndPackFloat64(v26, !(v30) + (unsigned int)v2, v25 << ((char)v30 & 63), rcx<8>, r8<8>, r9<8>, *((short *)&v0));
            return v36;
        }
        else if ((a0 << 10 & 0x3ffffffffffffc00) == 0)
        {
            return a0;
        }
    }
    else
    {
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x7<64>, Conv(32->64, (Conv(64->32, (rdi<8> >> 0x34<8>)) & 0x7ff<32>)), Conv(32->64, (Conv(64->32, (rsi<8> >> 0x34<8>)) & 0x7ff<32>)), cc_ndep<8>)))
        {
            if (((unsigned short)(a0 >> 52) & 2047) != 0)
            {
                if ((a0 << 10 & 0x3ffffffffffffc00) == 0 && (a1 << 10 & 0x3ffffffffffffc00) == 0 && ((unsigned short)(a0 >> 52) & 2047) == 2047)
                {
                    *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 16;
                    return -1;
                }
            }
            else
            {
                v2 = 1;
                v3 = 1;
            }
            if (((unsigned short)(a0 >> 52) & 2047) == 0 || ((unsigned short)(a0 >> 52) & 2047) != 2047)
            {
                if ((a1 << 10 & 0x3ffffffffffffc00) < (a0 << 10 & 0x3ffffffffffffc00))
                {
                    v23 = v2;
                    v24 = (a0 * 0x400 & 0x3ffffffffffffc00) - v5;
                    v27 = 0;
                    *((char *)&v27) = [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(rax<8>, 0x20<8>), Shr(rax<8>, 0x1f<8>), cc_ndep<8>);
                    v28 = 0;
                    *((char *)&v28) = (v25 >> 32 == 0? (unsigned int)v25 : (unsigned int)(v25 >> 32)) < 0x10000;
                    v29 = v28 * 16;
                    v30 = ...;
                    *((unsigned int *)&a1) = !(v30) + (unsigned int)v2;
                    roundAndPackFloat64(v26, a1, v25 << ((char)v30 & 63), v30, v29, v23, *((short *)&v0));
                    return roundAndPackFloat64(a0, a1, a2, v30, v29, v23, *((short *)&v0));
                }
                if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x7<64>, Conv(32->64, (Conv(64->32, (rdi<8> >> 0x34<8>)) & 0x7ff<32>)), Conv(32->64, (Conv(64->32, (rsi<8> >> 0x34<8>)) & 0x7ff<32>)), cc_ndep<8>))
                {
                    return (*((int *)got.float_rounding_mode) == 3? 0x8000000000000000 : 0);
                }
                v25 = rax<8> - v4;
                v26 = a2 ^ 1;
                v27 = 0;
                *((char *)&v27) = [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(rax<8>, 0x20<8>), Shr(rax<8>, 0x1f<8>), cc_ndep<8>);
                v28 = 0;
                *((char *)&v28) = (v25 >> 32 == 0? (unsigned int)v25 : (unsigned int)(v25 >> 32)) < 0x10000;
                v29 = v28 * 16;
                v30 = ...;
                roundAndPackFloat64(v26, !(v30) + (unsigned int)v3, v25 << ((char)v30 & 63), v30, v29, v3, *((short *)&v0));
                return v35;
            }
        }
        else if (!(((unsigned short)(a1 >> 52) & 2047) == 2047))
        {
            v10 = 0;
            *((char *)&v10) = (unsigned int)v2 == 0;
            v11 = ((unsigned int)v2 == 0? a0 << 10 & 0x3ffffffffffffc00 : a0 << 10 & 0x3ffffffffffffc00 | 0x4000000000000000);
            v13 = v6 + v10;
            if (!((unsigned int)(v6 + v10) == 0))
            {
                if ((unsigned int)v13 >= -63)
                {
                    v21 = ((unsigned int)v2 == 0? a0 << 10 & 0x3ffffffffffffc00 : a0 << 10 & 0x3ffffffffffffc00 | 0x4000000000000000) >> ((char)(0 - (unsigned int)v13) & 63);
                    v22 = 0;
                    *((char *)&v22) = ((unsigned int)v2 == 0? v4 : v4 | 0x4000000000000000) << ((char)v13 & 63) != 0;
                    v20 = v22 | v21;
                }
                else
                {
                    v20 = 0;
                    *((char *)&v20) = ((unsigned int)v2 == 0? a0 << 10 & 0x3ffffffffffffc00 : a0 << 10 & 0x3ffffffffffffc00 | 0x4000000000000000) != 0;
                }
                v11 = v20;
            }
            v32 = v5 | 0x4000000000000000;
            v25 = rax<8> - v11;
            v26 = a2 ^ 1;
            v27 = 0;
            *((char *)&v27) = [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(rax<8>, 0x20<8>), Shr(rax<8>, 0x1f<8>), cc_ndep<8>);
            v28 = 0;
            *((char *)&v28) = (v25 >> 32 == 0? (unsigned int)v25 : (unsigned int)(v25 >> 32)) < 0x10000;
            v29 = v28 * 16;
            v30 = ...;
            roundAndPackFloat64(v26, !(v30) + (unsigned int)v3, v25 << ((char)v30 & 63), v30, v29, v3, *((short *)&v0));
            return v37;
        }
        else if ((a1 << 10 & 0x3ffffffffffffc00) == 0)
        {
            *((unsigned int *)&a0) = 0x7ff0000000000000 | !((unsigned int)v14) * 0x8000000000000000;
            return a0;
        }
    }
    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x7<64>, Conv(32->64, (Conv(64->32, (rdi<8> >> 0x34<8>)) & 0x7ff<32>)), Conv(32->64, (Conv(64->32, (rsi<8> >> 0x34<8>)) & 0x7ff<32>)), cc_ndep<8>) || ((unsigned short)(a0 >> 52) & 2047) == 2047) && (((unsigned int)(a0 >> 52) & 2047) <= ((unsigned int)(a1 >> 52) & 2047) || ((unsigned short)(a0 >> 52) & 2047) == 2047) && (((unsigned int)(a0 >> 52) & 2047) <= ((unsigned int)(a1 >> 52) & 2047) || (a0 << 10 & 0x3ffffffffffffc00) != 0) && ((a0 << 10 & 0x3ffffffffffffc00) != 0 || (a1 << 10 & 0x3ffffffffffffc00) != 0) && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x7<64>, Conv(32->64, (Conv(64->32, (rdi<8> >> 0x34<8>)) & 0x7ff<32>)), Conv(32->64, (Conv(64->32, (rsi<8> >> 0x34<8>)) & 0x7ff<32>)), cc_ndep<8>) || ((unsigned short)(a0 >> 52) & 2047) != 0 || ((unsigned int)(a0 >> 52) & 2047) > ((unsigned int)(a1 >> 52) & 2047)) && (((unsigned short)(a1 >> 52) & 2047) == 2047 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x7<64>, Conv(32->64, (Conv(64->32, (rdi<8> >> 0x34<8>)) & 0x7ff<32>)), Conv(32->64, (Conv(64->32, (rsi<8> >> 0x34<8>)) & 0x7ff<32>)), cc_ndep<8>)) || ((unsigned int)(a0 >> 52) & 2047) > ((unsigned int)(a1 >> 52) & 2047)) && (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x7<64>, Conv(32->64, (Conv(64->32, (rdi<8> >> 0x34<8>)) & 0x7ff<32>)), Conv(32->64, (Conv(64->32, (rsi<8> >> 0x34<8>)) & 0x7ff<32>)), cc_ndep<8>)) || (a1 << 10 & 0x3ffffffffffffc00) != 0 || ((unsigned int)(a0 >> 52) & 2047) > ((unsigned int)(a1 >> 52) & 2047)))
    {
        *((char *)&a2) = (char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (0x7ff8000000000000 & a1) == 0x7ff0000000000000;
        if (((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (a0 & 0x7ff8000000000000) == 0x7ff0000000000000) == 0 && ((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (0x7ff8000000000000 & a1) == 0x7ff0000000000000) == 0)
        {
            v33 = a1 | 0x8000000000000;
            v34 = a1 * 2;
            *((unsigned int *)&a0) = ((char)a2 != 0? v33 : (((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rdi<8>, 0xd<8>), Shl(rdi<8>, 0xc<8>), cc_ndep<8>) & (a0 & 0x7ff8000000000000) == 0x7ff0000000000000) != 0? rdi<8> | 0x8000000000000 : (v34 < -9007199254740991? rdi<8> | 0x8000000000000 : v33)));
            return a0;
        }
        if (((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (0x7ff8000000000000 & a1) == 0x7ff0000000000000) != 0 || ((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (a0 & 0x7ff8000000000000) == 0x7ff0000000000000) != 0)
        {
            *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 16;
            v33 = a1 | 0x8000000000000;
            v34 = a1 * 2;
            *((unsigned int *)&a0) = ((char)a2 != 0? v33 : (((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rdi<8>, 0xd<8>), Shl(rdi<8>, 0xc<8>), cc_ndep<8>) & (a0 & 0x7ff8000000000000) == 0x7ff0000000000000) != 0? rdi<8> | 0x8000000000000 : (v34 < -9007199254740991? rdi<8> | 0x8000000000000 : v33)));
            return a0;
        }
    }
}

long long float64_add(unsigned long a0, unsigned long long a1, unsigned long a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned short v1, unsigned long a6, unsigned short a7)
{
    char v0;  // [bp+0x0]

    if ((unsigned int)(a0 >> 63) == (unsigned int)(a1 >> 63))
    {
        return addFloat64Sigs(a0, a1, (unsigned int)a0 / 0x8000000000000000, a3, a4, a5, *((long long *)&v0), v1);
    }
    return subFloat64Sigs(a0, a1, (unsigned int)a0 / 0x8000000000000000, a3);
}

long long ullong_to_double()
{
    unsigned long v1;  // rax

    return v1;
}

extern char got.a_input;
extern char got.b_input;
extern char got.endTimer;
extern char got.startTimer;
extern char got.z_output;

long long submain(unsigned long a0, unsigned long a1, unsigned long a2, void* a3, unsigned int a4, unsigned int a5, unsigned long v3)
{
    char v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x38]
    char v2;  // [bp+0x0]
    void* v4;  // rbx, Other Possible Types: unsigned long long
    unsigned long long v5;  // rax
    unsigned long long v7;  // xmm0lq
    unsigned long long v8;  // xmm1lq
    uint128_t v9;  // xmm1
    int v10;  // xmm0
    unsigned long long v12;  // rax
    void* v13;  // rbp
    unsigned long long v14;  // rax
    int v16;  // xmm1
    uint128_t v17;  // xmm0
    unsigned long long v19;  // rax

    v4 = 0;
    (unsigned int)v5 = gettimeofday(&v0, NULL);
    if ((unsigned int)v5 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v5);
    }
    v7 = *((long long *)&v0);
    v8 = v1;
    *((unsigned long long *)&v9) = (unsigned long long)(v9 * 4517329193108106637 + v10);
    *((unsigned long long *)got.startTimer) = v9;
    v13 = 0;
    do
    {
        if ((unsigned int)(*((long long *)(got.a_input + (v13 << 3))) >> 63) != (unsigned int)(*((long long *)(got.b_input + (v13 << 3))) >> 63))
        {
            (unsigned int)v12 = subFloat64Sigs(*((long long *)(got.a_input + v13 * 8)), *((long long *)(got.b_input + v13 * 8)), *((long long *)(got.a_input + v13 * 8)) >> 63, (unsigned short)a3);
        }
        else
        {
            (unsigned int)v12 = addFloat64Sigs(*((long long *)(got.a_input + v13 * 8)), *((long long *)(got.b_input + v13 * 8)), *((long long *)(got.a_input + v13 * 8)) >> 63, a3, a4, a5, *((long long *)&v2), v3);
        }
        a3 = 0;
        *((char *)&a3) = v12 != *((long long *)(got.z_output + (v13 << 3)));
        v4 += a3;
        v13 += 1;
    }
    while (v13 != 46);
    (unsigned int)v14 = gettimeofday(&v0, NULL);
    if ((unsigned int)v14 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v14);
        v16 = 0;
        *((unsigned long long *)&v16) = *((long long *)&v0);
        v17 = 0;
        *((unsigned long long *)&v17) = v1;
        *((unsigned long long *)&v17) = (unsigned long long)(v17 * 4517329193108106637 + v16);
        *((unsigned long long *)*((long long *)&got.endTimer)) = v17;
        printf("%0.6f\n");
        v19 = v4;
        return v19;
    }
    v16 = 0;
    *((unsigned long long *)&v16) = *((long long *)&v0);
    v17 = 0;
    *((unsigned long long *)&v17) = v1;
    *((unsigned long long *)&v17) = (unsigned long long)(v17 * 4517329193108106637 + v16);
    *((unsigned long long *)*((long long *)&got.endTimer)) = v17;
    printf("%0.6f\n");
    v19 = v4;
    return v19;
}

