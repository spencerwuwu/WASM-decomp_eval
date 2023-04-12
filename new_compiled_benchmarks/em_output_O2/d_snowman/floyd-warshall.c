
void fun_3f3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi);

void fun_495(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_4c5(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_4de(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_47b(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdx4;
    int64_t r12_5;
    int32_t* rbx6;
    int64_t rbp7;
    int64_t r14_8;
    int64_t r15_9;
    int64_t r13_10;
    int64_t r14_11;
    int64_t r14_12;
    int64_t r14_13;
    int64_t rbx14;
    int64_t v15;

    while (1) {
        *reinterpret_cast<int32_t*>(&rdx4) = (rbx6 + r12_5 * 0xaf0)[rbp7];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_495(r14_8, r15_9, rdx4);
        ++rbp7;
        if (rbp7 == 0xaf0) {
            ++r12_5;
            if (r12_5 == 0xaf0) 
                break;
            r13_10 = r12_5 * 0xaf0;
            *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp7 + r13_10) * 0xcccccccd) > 0xccccccc) 
            continue;
        fun_47b(10, r14_11, rdx4);
    }
    fun_4c5(r14_12, 0x4b4, 0x4bb);
    fun_4de(0x4cc, 22, 1, r14_13);
    fun_3f3(rbx14, 22, 1, r14_13);
    goto v15;
}

void fun_4c5(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r14_4;
    int64_t rbx5;
    int64_t v6;

    fun_4de(0x4cc, 22, 1, r14_4);
    fun_3f3(rbx5, 22, 1, r14_4);
    goto v6;
}

void fun_43f(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_427(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdx5;
    int64_t r14_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t rbp9;
    int64_t r14_10;
    int32_t* rbx11;
    int64_t r14_12;
    int64_t r14_13;
    int64_t r14_14;
    int64_t rbx15;
    int64_t v16;

    rdx5 = 0x435;
    fun_43f(r14_6, 0x42e, 0x435);
    *reinterpret_cast<int32_t*>(&r12_7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        r13_8 = r12_7 * 0xaf0;
        *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp9 + r13_8) * 0xcccccccd) <= 0xccccccc) {
                fun_47b(10, r14_10, rdx5);
            }
            *reinterpret_cast<int32_t*>(&rdx5) = (rbx11 + r12_7 * 0xaf0)[rbp9];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_495(r14_12, 0x446, rdx5);
            ++rbp9;
        } while (rbp9 != 0xaf0);
        ++r12_7;
    } while (r12_7 != 0xaf0);
    fun_4c5(r14_13, 0x4b4, 0x4bb);
    fun_4de(0x4cc, 22, 1, r14_14);
    fun_3f3(rbx15, 22, 1, r14_14);
    goto v16;
}

void fun_495(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t r12_5;
    int64_t r13_6;
    int64_t r14_7;
    int64_t rdx8;
    int32_t* rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t r14_12;
    int64_t r14_13;
    int64_t rbx14;
    int64_t v15;

    while (1) {
        ++rbp4;
        if (rbp4 == 0xaf0) {
            ++r12_5;
            if (r12_5 == 0xaf0) 
                break;
            r13_6 = r12_5 * 0xaf0;
            *reinterpret_cast<int32_t*>(&rbp4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp4 + r13_6) * 0xcccccccd) <= 0xccccccc) {
            fun_47b(10, r14_7, rdx);
        }
        *reinterpret_cast<int32_t*>(&rdx8) = (rbx9 + r12_5 * 0xaf0)[rbp4];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_495(r14_10, r15_11, rdx8);
    }
    fun_4c5(r14_12, 0x4b4, 0x4bb);
    fun_4de(0x4cc, 22, 1, r14_13);
    fun_3f3(rbx14, 22, 1, r14_13);
    goto v15;
}

void fun_4de(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t v6;

    fun_3f3(rbx5, rsi, rdx, rcx);
    goto v6;
}

void fun_43f(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r12_4;
    int64_t r13_5;
    int64_t rbp6;
    int64_t r14_7;
    int32_t* rbx8;
    int64_t r14_9;
    int64_t r14_10;
    int64_t r14_11;
    int64_t rbx12;
    int64_t v13;

    *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        r13_5 = r12_4 * 0xaf0;
        *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp6 + r13_5) * 0xcccccccd) <= 0xccccccc) {
                fun_47b(10, r14_7, rdx);
            }
            *reinterpret_cast<int32_t*>(&rdx) = (rbx8 + r12_4 * 0xaf0)[rbp6];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_495(r14_9, 0x446, rdx);
            ++rbp6;
        } while (rbp6 != 0xaf0);
        ++r12_4;
    } while (r12_4 != 0xaf0);
    fun_4c5(r14_10, 0x4b4, 0x4bb);
    fun_4de(0x4cc, 22, 1, r14_11);
    fun_3f3(rbx12, 22, 1, r14_11);
    goto v13;
}

void fputc(int32_t edi, int64_t rsi) {
}

/* .LCPI0_2 */
void LCPI0_2();

void fun_19() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    LCPI0_2();
}

int64_t* g40b = reinterpret_cast<int64_t*>(0x3d8d48308b4c);

/* .LCPI0_8 */
void LCPI0_8() {
    signed char** v1;
    int64_t rax2;
    uint32_t eax3;
    int64_t rdx4;
    int64_t tmp64_5;
    int64_t rcx6;
    int64_t rcx7;
    int64_t rdx8;
    int64_t rdi9;
    int32_t* rsi10;
    int32_t* rbx11;
    int32_t* rdi12;
    int64_t rbx13;
    int64_t r8_14;
    int64_t r11_15;
    int32_t* r9_16;
    int32_t* rbx17;
    int32_t* r10_18;
    int32_t* r11_19;
    int64_t rbx20;
    int64_t rbx21;
    int32_t* rbx22;
    int64_t r11_23;
    int32_t r12d24;
    uint64_t r14_25;
    int32_t r15d26;
    int64_t r10_27;
    int32_t ebp28;
    int64_t* rax29;
    int64_t rcx30;

    v1 = reinterpret_cast<signed char**>(__return_address());
    *reinterpret_cast<uint32_t*>(&rax2) = eax3 | reinterpret_cast<uint32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
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
        rdx4 = tmp64_5;
        __asm__("paddq xmm1, xmm0");
        __asm__("paddq xmm8, xmm0");
    } while (rdx4 != 0xaf0);
    if (rcx6 + 1 == 0xaf0) {
        do {
            rcx7 = rax2 * 4;
            rdx8 = rax2 * 4 + 4;
            rdi9 = rax2 * 0x2bc0;
            rsi10 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx11) + rdi9);
            rdi12 = reinterpret_cast<int32_t*>(rdi9 + rbx13 + 0x2bc0);
            *reinterpret_cast<int32_t*>(&r8_14) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_14) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r11_15 = r8_14 * 0x2bc0;
                r9_16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx17) + r11_15);
                r10_18 = r9_16 + rax2;
                r11_19 = reinterpret_cast<int32_t*>(r11_15 + rbx20 + 0x2bc0);
                if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_16) < reinterpret_cast<uint64_t>(rbx21 + rdx8 + r11_15))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx22) + rcx7 + r11_15) < reinterpret_cast<uint64_t>(r11_19)))) == fputc)) {
                    *reinterpret_cast<int32_t*>(&r11_23) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_23) + 4) = reinterpret_cast<int32_t>(fputc);
                    goto addr_390_9;
                }
                *reinterpret_cast<int32_t*>(&r11_23) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_23) + 4) = reinterpret_cast<int32_t>(fputc);
                if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_16) < reinterpret_cast<uint64_t>(rdi12))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi10) < reinterpret_cast<uint64_t>(r11_19)))) == fputc)) {
                    do {
                        addr_390_9:
                        r12d24 = rsi10[r11_23] + *r10_18;
                        if (r9_16[r11_23] < r12d24) {
                            r12d24 = r9_16[r11_23];
                        }
                        r9_16[r11_23] = r12d24;
                        r14_25 = reinterpret_cast<uint64_t>(r11_23 * 4) | 4;
                        r15d26 = *reinterpret_cast<int32_t*>(r14_25 + reinterpret_cast<uint64_t>(rsi10)) + *r10_18;
                        if (*reinterpret_cast<int32_t*>(r14_25 + reinterpret_cast<uint64_t>(r9_16)) < r15d26) {
                            r15d26 = *reinterpret_cast<int32_t*>(r14_25 + reinterpret_cast<uint64_t>(r9_16));
                        }
                        *reinterpret_cast<int32_t*>(r14_25 + reinterpret_cast<uint64_t>(r9_16)) = r15d26;
                        r11_23 = r11_23 + 2;
                    } while (r11_23 != 0xaf0);
                } else {
                    __asm__("movd xmm0, dword [r10]");
                    __asm__("pshufd xmm0, xmm0, 0x0");
                    *reinterpret_cast<int32_t*>(&r10_27) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_27) + 4) = reinterpret_cast<int32_t>(fputc);
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
                        r10_27 = r10_27 + 8;
                    } while (r10_27 != 0xaf0);
                    continue;
                }
                ++r8_14;
            } while (r8_14 != 0xaf0);
            ++rax2;
        } while (rax2 != 0xaf0);
        if (ebp28 < 43) 
            goto 0x3eb;
        if (**v1 != fputc) 
            goto "???";
        rax29 = g40b;
        rcx30 = *rax29;
        fun_427(0x415, 22, 1, rcx30);
    }
}

