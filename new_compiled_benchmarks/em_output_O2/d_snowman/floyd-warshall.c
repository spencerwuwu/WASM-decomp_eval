
void fun_5e3(int32_t* rdi, int32_t* rsi, void* rdx, void* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi);

void fun_685(void* rdi, int64_t rsi, int64_t rdx, void* rcx);

void fun_6b5(void* rdi, int64_t rsi, int64_t rdx, void* rcx);

void fun_6ce(int64_t rdi, int32_t* rsi, void* rdx, void* rcx);

void fun_66b(int64_t rdi, void* rsi, int64_t rdx, void* rcx) {
    int64_t rdx5;
    int64_t r12_6;
    int32_t* rbx7;
    int64_t rbp8;
    void* r14_9;
    int64_t r15_10;
    int64_t r13_11;
    void* r14_12;
    void* r14_13;
    void* r14_14;
    int32_t* rbx15;
    int64_t v16;

    while (1) {
        *reinterpret_cast<int32_t*>(&rdx5) = (rbx7 + r12_6 * 0xaf0)[rbp8];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_685(r14_9, r15_10, rdx5, rcx);
        ++rbp8;
        if (rbp8 == 0xaf0) {
            ++r12_6;
            if (r12_6 == 0xaf0) 
                break;
            r13_11 = r12_6 * 0xaf0;
            *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp8 + r13_11) * 0xcccccccd) > 0xccccccc) 
            continue;
        fun_66b(10, r14_12, rdx5, rcx);
    }
    fun_6b5(r14_13, 0x6a4, 0x6ab, rcx);
    fun_6ce(0x6bc, 22, 1, r14_14);
    fun_5e3(rbx15, 22, 1, r14_14);
    goto v16;
}

void fun_6b5(void* rdi, int64_t rsi, int64_t rdx, void* rcx) {
    void* r14_5;
    int32_t* rbx6;
    int64_t v7;

    fun_6ce(0x6bc, 22, 1, r14_5);
    fun_5e3(rbx6, 22, 1, r14_5);
    goto v7;
}

void fun_62f(void* rdi, int64_t rsi, int64_t rdx, void* rcx);

void fun_617(int64_t rdi, int64_t rsi, int64_t rdx, void* rcx) {
    int64_t rdx5;
    void* r14_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t rbp9;
    void* r14_10;
    int32_t* rbx11;
    void* r14_12;
    void* r14_13;
    void* r14_14;
    int32_t* rbx15;
    int64_t v16;

    rdx5 = 0x625;
    fun_62f(r14_6, 0x61e, 0x625, rcx);
    *reinterpret_cast<int32_t*>(&r12_7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        r13_8 = r12_7 * 0xaf0;
        *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp9 + r13_8) * 0xcccccccd) <= 0xccccccc) {
                fun_66b(10, r14_10, rdx5, rcx);
            }
            *reinterpret_cast<int32_t*>(&rdx5) = (rbx11 + r12_7 * 0xaf0)[rbp9];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_685(r14_12, 0x636, rdx5, rcx);
            ++rbp9;
        } while (rbp9 != 0xaf0);
        ++r12_7;
    } while (r12_7 != 0xaf0);
    fun_6b5(r14_13, 0x6a4, 0x6ab, rcx);
    fun_6ce(0x6bc, 22, 1, r14_14);
    fun_5e3(rbx15, 22, 1, r14_14);
    goto v16;
}

void fun_685(void* rdi, int64_t rsi, int64_t rdx, void* rcx) {
    int64_t rbp5;
    int64_t r12_6;
    int64_t r13_7;
    void* r14_8;
    int64_t rdx9;
    int32_t* rbx10;
    void* r14_11;
    int64_t r15_12;
    void* r14_13;
    void* r14_14;
    int32_t* rbx15;
    int64_t v16;

    while (1) {
        ++rbp5;
        if (rbp5 == 0xaf0) {
            ++r12_6;
            if (r12_6 == 0xaf0) 
                break;
            r13_7 = r12_6 * 0xaf0;
            *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp5 + r13_7) * 0xcccccccd) <= 0xccccccc) {
            fun_66b(10, r14_8, rdx, rcx);
        }
        *reinterpret_cast<int32_t*>(&rdx9) = (rbx10 + r12_6 * 0xaf0)[rbp5];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_685(r14_11, r15_12, rdx9, rcx);
    }
    fun_6b5(r14_13, 0x6a4, 0x6ab, rcx);
    fun_6ce(0x6bc, 22, 1, r14_14);
    fun_5e3(rbx15, 22, 1, r14_14);
    goto v16;
}

void fun_6ce(int64_t rdi, int32_t* rsi, void* rdx, void* rcx) {
    int32_t* rbx5;
    int64_t v6;

    fun_5e3(rbx5, rsi, rdx, rcx);
    goto v6;
}

void** g5fb = reinterpret_cast<void**>(0x3d8d48308b4c);

void fun_210(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int32_t* rbx4;
    int32_t* rax5;
    int64_t rax6;
    int64_t rcx7;
    int64_t rdx8;
    void* rcx9;
    void* rdx10;
    void* rdi11;
    int32_t* rsi12;
    int32_t* rdi13;
    int64_t r8_14;
    void* r11_15;
    int32_t* r9_16;
    int32_t* r10_17;
    int32_t* r11_18;
    int64_t r11_19;
    int32_t r12d20;
    void* r14_21;
    int32_t r15d22;
    int64_t r10_23;
    int32_t ebp24;
    void** rax25;
    void* r14_26;
    void* rcx27;
    int64_t rdx28;
    int64_t r12_29;
    int64_t r13_30;
    int64_t rbp31;
    int64_t v32;

    v3 = reinterpret_cast<signed char**>(__return_address());
    rbx4 = rax5;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm9, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movdqa xmm15, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm12, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("movd xmm0, rcx");
        __asm__("pshufd xmm13, xmm0, 0x44");
        *reinterpret_cast<int32_t*>(&rdx8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm1, [rip+0x0]");
        __asm__("movdqa xmm8, [rip+0x0]");
        do {
            __asm__("movdqa xmm0, xmm1");
            __asm__("pmuludq xmm0, xmm13");
            __asm__("movdqa xmm6, xmm8");
            __asm__("pmuludq xmm6, xmm13");
            __asm__("movdqa xmm14, xmm0");
            __asm__("shufps xmm14, xmm6, 0x88");
            __asm__("punpckhqdq xmm0, xmm6");
            __asm__("pmuludq xmm0, xmm2");
            __asm__("pshufd xmm0, xmm0, 0xed");
            __asm__("movaps xmm6, xmm14");
            __asm__("pmuludq xmm6, xmm2");
            __asm__("pshufd xmm6, xmm6, 0xed");
            __asm__("punpckldq xmm6, xmm0");
            __asm__("movaps xmm0, xmm14");
            __asm__("psubd xmm0, xmm6");
            __asm__("psrld xmm0, 0x1");
            __asm__("paddd xmm0, xmm6");
            __asm__("psrld xmm0, 0x2");
            __asm__("movdqa xmm6, xmm0");
            __asm__("pslld xmm6, 0x3");
            __asm__("psubd xmm0, xmm6");
            __asm__("paddd xmm0, xmm14");
            __asm__("movdqa xmm14, xmm1");
            __asm__("paddq xmm14, xmm13");
            __asm__("movdqa xmm3, xmm5");
            __asm__("movdqa xmm5, xmm12");
            __asm__("movdqa xmm12, xmm4");
            __asm__("movdqa xmm4, xmm2");
            __asm__("movdqa xmm2, xmm15");
            __asm__("movdqa xmm15, xmm8");
            __asm__("paddq xmm15, xmm13");
            __asm__("movdqa xmm11, xmm14");
            __asm__("shufps xmm11, xmm15, 0x88");
            __asm__("shufps xmm14, xmm15, 0xaa");
            __asm__("movaps xmm15, xmm14");
            __asm__("pmuludq xmm15, xmm9");
            __asm__("pshufd xmm15, xmm15, 0xe8");
            __asm__("movaps xmm6, xmm11");
            __asm__("pmuludq xmm6, xmm9");
            __asm__("pshufd xmm6, xmm6, 0xe8");
            __asm__("punpckldq xmm6, xmm15");
            __asm__("movaps xmm15, xmm14");
            __asm__("pmuludq xmm15, xmm7");
            __asm__("pshufd xmm15, xmm15, 0xe8");
            __asm__("movaps xmm10, xmm11");
            __asm__("pmuludq xmm10, xmm7");
            __asm__("pshufd xmm10, xmm10, 0xe8");
            __asm__("punpckldq xmm10, xmm15");
            __asm__("movdqa xmm15, xmm2");
            __asm__("movdqa xmm2, xmm4");
            __asm__("movdqa xmm4, xmm12");
            __asm__("movdqa xmm12, xmm5");
            __asm__("movdqa xmm5, xmm3");
            __asm__("pcmpeqd xmm3, xmm3");
            __asm__("pxor xmm6, xmm5");
            __asm__("pcmpgtd xmm6, xmm15");
            __asm__("pxor xmm6, xmm3");
            __asm__("pxor xmm10, xmm5");
            __asm__("pcmpgtd xmm10, xmm4");
            __asm__("pxor xmm10, xmm3");
            __asm__("por xmm10, xmm6");
            __asm__("pmuludq xmm14, xmm12");
            __asm__("pshufd xmm6, xmm14, 0xe8");
            __asm__("movdqa xmm14, [rip+0x0]");
            __asm__("pmuludq xmm11, xmm12");
            __asm__("pshufd xmm11, xmm11, 0xe8");
            __asm__("punpckldq xmm11, xmm6");
            __asm__("psubd xmm0, xmm3");
            __asm__("pxor xmm11, xmm5");
            __asm__("pcmpgtd xmm11, xmm14");
            __asm__("pxor xmm11, xmm3");
            __asm__("movdqa xmm3, [rip+0x0]");
            __asm__("por xmm11, xmm10");
            __asm__("movdqa xmm6, xmm11");
            __asm__("pandn xmm6, xmm0");
            __asm__("pand xmm11, xmm3");
            __asm__("movdqa xmm0, [rip+0x0]");
            __asm__("por xmm11, xmm6");
            __asm__("movdqu [rsi+rdx*4], xmm11");
            rdx8 = rdx8 + 4;
            __asm__("paddq xmm1, xmm0");
            __asm__("paddq xmm8, xmm0");
        } while (rdx8 != 0xaf0);
        ++rcx7;
    } while (rcx7 != 0xaf0);
    do {
        rcx9 = reinterpret_cast<void*>(rax6 * 4);
        rdx10 = reinterpret_cast<void*>(rax6 * 4 + 4);
        rdi11 = reinterpret_cast<void*>(rax6 * 0x2bc0);
        rsi12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<int64_t>(rdi11));
        rdi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi11) + reinterpret_cast<int64_t>(rbx4) + 0x2bc0);
        *reinterpret_cast<int32_t*>(&r8_14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r11_15 = reinterpret_cast<void*>(r8_14 * 0x2bc0);
            r9_16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<int64_t>(r11_15));
            r10_17 = r9_16 + rax6;
            r11_18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r11_15) + reinterpret_cast<int64_t>(rbx4) + 0x2bc0);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_16) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<int64_t>(rdx10) + reinterpret_cast<int64_t>(r11_15)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<int64_t>(rcx9) + reinterpret_cast<int64_t>(r11_15)) < reinterpret_cast<uint64_t>(r11_18)))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_19) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_19) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_580_9;
            }
            *reinterpret_cast<int32_t*>(&r11_19) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_19) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_16) < reinterpret_cast<uint64_t>(rdi13))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi12) < reinterpret_cast<uint64_t>(r11_18)))) == fputc)) {
                do {
                    addr_580_9:
                    r12d20 = rsi12[r11_19] + *r10_17;
                    if (r9_16[r11_19] < r12d20) {
                        r12d20 = r9_16[r11_19];
                    }
                    r9_16[r11_19] = r12d20;
                    r14_21 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r11_19 * 4) | 4);
                    r15d22 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r14_21) + reinterpret_cast<uint64_t>(rsi12)) + *r10_17;
                    if (*reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r14_21) + reinterpret_cast<uint64_t>(r9_16)) < r15d22) {
                        r15d22 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r14_21) + reinterpret_cast<uint64_t>(r9_16));
                    }
                    *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r14_21) + reinterpret_cast<uint64_t>(r9_16)) = r15d22;
                    r11_19 = r11_19 + 2;
                } while (r11_19 != 0xaf0);
            } else {
                __asm__("movd xmm0, dword [r10]");
                __asm__("pshufd xmm0, xmm0, 0x0");
                *reinterpret_cast<int32_t*>(&r10_23) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_23) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movdqu xmm1, [r9+r10*4]");
                    __asm__("movdqu xmm2, [r9+r10*4+0x10]");
                    __asm__("movdqu xmm3, [rsi+r10*4]");
                    __asm__("movdqu xmm4, [rsi+r10*4+0x10]");
                    __asm__("paddd xmm3, xmm0");
                    __asm__("paddd xmm4, xmm0");
                    __asm__("movdqa xmm5, xmm3");
                    __asm__("pcmpgtd xmm5, xmm1");
                    __asm__("pand xmm1, xmm5");
                    __asm__("pandn xmm5, xmm3");
                    __asm__("por xmm5, xmm1");
                    __asm__("movdqa xmm1, xmm4");
                    __asm__("pcmpgtd xmm1, xmm2");
                    __asm__("pand xmm2, xmm1");
                    __asm__("pandn xmm1, xmm4");
                    __asm__("por xmm1, xmm2");
                    __asm__("movdqu [r9+r10*4], xmm5");
                    __asm__("movdqu [r9+r10*4+0x10], xmm1");
                    r10_23 = r10_23 + 8;
                } while (r10_23 != 0xaf0);
                continue;
            }
            ++r8_14;
        } while (r8_14 != 0xaf0);
        ++rax6;
    } while (rax6 != 0xaf0);
    if (ebp24 >= 43 && **v3 == fputc) {
        rax25 = g5fb;
        r14_26 = *rax25;
        rcx27 = r14_26;
        fun_617(0x605, 22, 1, rcx27);
        rdx28 = 0x625;
        fun_62f(r14_26, 0x61e, 0x625, rcx27);
        *reinterpret_cast<int32_t*>(&r12_29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_29) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r13_30 = r12_29 * 0xaf0;
            *reinterpret_cast<int32_t*>(&rbp31) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp31) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp31 + r13_30) * 0xcccccccd) <= 0xccccccc) {
                    fun_66b(10, r14_26, rdx28, rcx27);
                }
                *reinterpret_cast<int32_t*>(&rdx28) = (rbx4 + r12_29 * 0xaf0)[rbp31];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(fputc);
                fun_685(r14_26, 0x636, rdx28, rcx27);
                ++rbp31;
            } while (rbp31 != 0xaf0);
            ++r12_29;
        } while (r12_29 != 0xaf0);
        fun_6b5(r14_26, 0x6a4, 0x6ab, rcx27);
        *reinterpret_cast<int32_t*>(&rsi12) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx10) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx9 = r14_26;
        fun_6ce(0x6bc, 22, 1, rcx9);
    }
    fun_5e3(rbx4, rsi12, rdx10, rcx9);
    goto v32;
}

void fun_62f(void* rdi, int64_t rsi, int64_t rdx, void* rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t rbp7;
    void* r14_8;
    int32_t* rbx9;
    void* r14_10;
    void* r14_11;
    void* r14_12;
    int32_t* rbx13;
    int64_t v14;

    *reinterpret_cast<int32_t*>(&r12_5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_5) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        r13_6 = r12_5 * 0xaf0;
        *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp7 + r13_6) * 0xcccccccd) <= 0xccccccc) {
                fun_66b(10, r14_8, rdx, rcx);
            }
            *reinterpret_cast<int32_t*>(&rdx) = (rbx9 + r12_5 * 0xaf0)[rbp7];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_685(r14_10, 0x636, rdx, rcx);
            ++rbp7;
        } while (rbp7 != 0xaf0);
        ++r12_5;
    } while (r12_5 != 0xaf0);
    fun_6b5(r14_11, 0x6a4, 0x6ab, rcx);
    fun_6ce(0x6bc, 22, 1, r14_12);
    fun_5e3(rbx13, 22, 1, r14_12);
    goto v14;
}

void fputc(int32_t edi) {
}

void fun_6c() {
    void* rbp1;
    int64_t rcx2;
    void* rbp3;
    int64_t rcx4;
    signed char cl5;

    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp1) + rcx2 * 4 + 52) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp3) + rcx4 * 4 + 52) + cl5);
}

void fun_88(uint32_t edi, int32_t* rsi) {
    int64_t rdx3;
    int64_t r15_4;
    int32_t* r12_5;
    int32_t* r13_6;
    int64_t r9_7;
    uint64_t rdx8;
    int64_t v9;
    int64_t v10;
    int64_t v11;
    uint64_t rdx12;
    int32_t* v13;
    uint64_t r14_14;
    uint64_t rbp15;
    unsigned char al16;
    int32_t r10d17;
    int32_t* r14_18;
    int64_t rbp19;
    int64_t rcx20;
    uint64_t rcx21;
    int64_t rcx22;
    int64_t rax23;
    int64_t r8_24;
    int32_t edx25;
    int32_t* r14_26;
    int32_t r11d27;
    int32_t edx28;
    void* r14_29;
    uint64_t rax30;

    rdx3 = r15_4 * 0x2bc0;
    r12_5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi) + rdx3);
    r13_6 = r12_5 + r9_7;
    if (edi < 12 || (rdx8 = reinterpret_cast<uint64_t>(rdx3 + v9), !reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r12_5) < reinterpret_cast<uint64_t>(v10 + reinterpret_cast<int64_t>(rsi) + rdx3))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rsi) + v11 + rdx3) < rdx8))) == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        goto addr_9e_3;
    }
    *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
    if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r12_5) < reinterpret_cast<uint64_t>(v13))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(r14_14 < rdx8))) == fputc)) {
        addr_9e_3:
        rbp15 = rdx12;
        if ((al16 & 1) != fputc) {
            r10d17 = r14_18[rdx12] + *r13_6;
            if (r12_5[rdx12] < r10d17) {
                r10d17 = r12_5[rdx12];
            }
            r12_5[rdx12] = r10d17;
            rbp15 = rdx12 | 1;
        }
    } else {
        __asm__("movd xmm0, dword [r13+0x0]");
        __asm__("pshufd xmm0, xmm0, 0x0");
        *reinterpret_cast<int32_t*>(&rbp19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp19) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("movdqu xmm1, [r12+rbp*4]");
            __asm__("movdqu xmm2, [r12+rbp*4+0x10]");
            __asm__("movdqu xmm3, [r14+rbp*4]");
            __asm__("movdqu xmm4, [r14+rbp*4+0x10]");
            __asm__("paddd xmm3, xmm0");
            __asm__("paddd xmm4, xmm0");
            __asm__("movdqa xmm5, xmm3");
            __asm__("pcmpgtd xmm5, xmm1");
            __asm__("pand xmm1, xmm5");
            __asm__("pandn xmm5, xmm3");
            __asm__("por xmm5, xmm1");
            __asm__("movdqa xmm1, xmm4");
            __asm__("pcmpgtd xmm1, xmm2");
            __asm__("pand xmm2, xmm1");
            __asm__("pandn xmm1, xmm4");
            __asm__("por xmm1, xmm2");
            __asm__("movdqu [r12+rbp*4], xmm5");
            __asm__("movdqu [r12+rbp*4+0x10], xmm1");
            rbp19 = rbp19 + 8;
        } while (rbp19 != rcx20);
        rdx12 = rcx21;
        if (rcx22 == rax23) 
            goto addr_80_11; else 
            goto addr_1dc_12;
    }
    if (~rdx12 != r8_24) {
        do {
            edx25 = r14_26[rbp15] + *r13_6;
            r11d27 = (r12_5 + rbp15)[1];
            if (r12_5[rbp15] < edx25) {
                edx25 = r12_5[rbp15];
            }
            r12_5[rbp15] = edx25;
            edx28 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_29) + rbp15 * 4 + 4) + *r13_6;
            if (r11d27 < edx28) {
                edx28 = r11d27;
            }
            (r12_5 + rbp15)[1] = edx28;
            rbp15 = rbp15 + 2;
        } while (rbp15 != rax30);
    }
    addr_80_11:
    addr_1dc_12:
    goto addr_9e_3;
}

void fun_1e1() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_210(0x77a100, 4);
}

