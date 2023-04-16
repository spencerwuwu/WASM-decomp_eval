long long kernel_trisolv(unsigned int a0, unsigned long a1, void* a2, void* a3)
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    uint128_t v4;  // xmm1
    uint128_t v5;  // xmm1
    void* v6;  // r8
    uint128_t v7;  // xmm0
    uint128_t v8;  // xmm0
    void* v9;  // rdi

    if ((unsigned int)v1 > 0)
    {
        v3 = v1;
        v9 = 0;
        do
        {
            *((long long *)((char *)a2 + 0x8 * v9)) = *((long long *)((char *)a3 + 0x8 * v9));
            if (v9 != 0)
            {
                v7 = 0;
                *((unsigned long long *)&v7) = *((long long *)((char *)a2 + 0x8 * v9));
                v6 = 0;
                do
                {
                    v4 = 0;
                    *((unsigned long long *)&v4) = *((long long *)(0 * 16000 + a1 + v6 * 8));
                    xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(rdx<8> + (r8<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                    v7 -= v5;
                    *((unsigned long long *)a2) = v7;
                    v6 += 1;
                }
                while (v6 != 0);
            }
            v8 = 0;
            *((unsigned long long *)&v8) = *((long long *)((char *)a2 + 0x8 * v9));
            xmm0lq<8> = Conv(128->64, (xmm0<16> / Conv(64->128, Load(addr=(((rdi<8> * 0x3e80<64>) + rsi<8>) + (rdi<8> * 0x8<64>)), size=8, endness=Iend_LE))))
            *((unsigned long long *)((char *)a2 + 0x8 * v9)) = v8;
            v9 += 1;
        }
        while (v9 != v3);
        return v3;
    }
    return v2;
}

