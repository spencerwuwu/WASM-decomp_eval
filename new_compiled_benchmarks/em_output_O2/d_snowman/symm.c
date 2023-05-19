
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_639(struct s0** rdi, int32_t* rsi, struct s0** rdx, struct s0** rcx, int32_t* r8);

void fun_641(int32_t* rdi, int32_t* rsi, struct s0** rdx, struct s0** rcx, int32_t* r8);

void fun_631(int32_t* rdi, int32_t* rsi, struct s0** rdx, struct s0** rcx, int32_t* r8) {
    struct s0** r14_6;
    int32_t* r15_7;
    int64_t v8;

    fun_639(r14_6, rsi, rdx, rcx, r8);
    fun_641(r15_7, rsi, rdx, rcx, r8);
    goto v8;
}

void fun_6f0();

void fputc();

void fun_725(struct s0** rdi, int64_t rsi, int64_t rdx, struct s0** rcx, int32_t* r8);

void fun_73e(int64_t rdi, int32_t* rsi, struct s0** rdx, struct s0** rcx, int32_t* r8);

void fun_6cd() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t r12_4;
    int64_t rbp5;
    int64_t r13_6;
    int32_t* v7;
    struct s0** v8;
    struct s0** rcx9;
    int32_t* r8_10;
    int32_t* r8_11;
    int32_t* rbx12;
    int32_t* r8_13;
    struct s0** r14_14;
    int32_t* r8_15;
    int32_t* r15_16;
    int32_t* r8_17;
    int64_t v18;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = v3;
        rsi2 = reinterpret_cast<int32_t*>(0x6e9);
        fun_6f0();
        ++r12_4;
        if (r12_4 == 0x4b0) {
            ++rbp5;
            if (rbp5 == 0x3e8) 
                break;
            r13_6 = rbp5 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + r13_6) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v7;
        fun_6cd();
    }
    fun_725(v8, 0x70f, 0x716, rcx9, r8_10);
    fun_73e(0x72c, 22, 1, v8, r8_11);
    fun_631(rbx12, 22, 1, v8, r8_13);
    fun_639(r14_14, 22, 1, v8, r8_15);
    fun_641(r15_16, 22, 1, v8, r8_17);
    goto v18;
}

void fun_6f0() {
    int64_t r12_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* v6;
    int32_t* v7;
    struct s0** v8;
    struct s0** rcx9;
    int32_t* r8_10;
    int32_t* r8_11;
    int32_t* rbx12;
    int32_t* r8_13;
    struct s0** r14_14;
    int32_t* r8_15;
    int32_t* r15_16;
    int32_t* r8_17;
    int64_t v18;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x4b0) {
            ++rbp2;
            if (rbp2 == 0x3e8) 
                break;
            r13_3 = rbp2 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v6;
            fun_6cd();
        }
        *rdi4 = *rsi5;
        rdi4 = v7;
        rsi5 = reinterpret_cast<int32_t*>(0x6e9);
        fun_6f0();
    }
    fun_725(v8, 0x70f, 0x716, rcx9, r8_10);
    fun_73e(0x72c, 22, 1, v8, r8_11);
    fun_631(rbx12, 22, 1, v8, r8_13);
    fun_639(r14_14, 22, 1, v8, r8_15);
    fun_641(r15_16, 22, 1, v8, r8_17);
    goto v18;
}

void fun_725(struct s0** rdi, int64_t rsi, int64_t rdx, struct s0** rcx, int32_t* r8) {
    struct s0** r12_6;
    int32_t* rbx7;
    struct s0** r14_8;
    int32_t* r15_9;
    int64_t v10;

    fun_73e(0x72c, 22, 1, r12_6, r8);
    fun_631(rbx7, 22, 1, r12_6, r8);
    fun_639(r14_8, 22, 1, r12_6, r8);
    fun_641(r15_9, 22, 1, r12_6, r8);
    goto v10;
}

void fun_694();

void fun_675(int64_t rdi, int64_t rsi, int64_t rdx, struct s0** rcx, int32_t* r8) {
    struct s0** rsi6;
    int64_t rbp7;
    struct s0** v8;
    struct s0** r12_9;
    struct s0** rdi10;
    struct s0** r12_11;
    int64_t r13_12;
    int64_t r12_13;
    int32_t* rbx14;
    struct s0** r14_15;
    int32_t* r15_16;
    int64_t v17;

    rsi6 = reinterpret_cast<struct s0**>(0x67c);
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    v8 = r12_9;
    rdi10 = r12_11;
    fun_694();
    do {
        r13_12 = rbp7 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_13 + r13_12) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi10) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v8;
                fun_6cd();
            }
            *rdi10 = *rsi6;
            rdi10 = v8;
            rsi6 = reinterpret_cast<struct s0**>(0x6e9);
            fun_6f0();
            ++r12_13;
        } while (r12_13 != 0x4b0);
        ++rbp7;
    } while (rbp7 != 0x3e8);
    fun_725(v8, 0x70f, 0x716, rcx, r8);
    fun_73e(0x72c, 22, 1, v8, r8);
    fun_631(rbx14, 22, 1, v8, r8);
    fun_639(r14_15, 22, 1, v8, r8);
    fun_641(r15_16, 22, 1, v8, r8);
    goto v17;
}

void fun_639(struct s0** rdi, int32_t* rsi, struct s0** rdx, struct s0** rcx, int32_t* r8) {
    int32_t* r15_6;
    int64_t v7;

    fun_641(r15_6, rsi, rdx, rcx, r8);
    goto v7;
}

void fun_73e(int64_t rdi, int32_t* rsi, struct s0** rdx, struct s0** rcx, int32_t* r8) {
    int32_t* rbx6;
    struct s0** r14_7;
    int32_t* r15_8;
    int64_t v9;

    fun_631(rbx6, rsi, rdx, rcx, r8);
    fun_639(r14_7, rsi, rdx, rcx, r8);
    fun_641(r15_8, rsi, rdx, rcx, r8);
    goto v9;
}

struct s0** fun_148(int64_t rdi, int64_t rsi);

int32_t* fun_15a(int32_t* rdi, int32_t* rsi);

int32_t g124f80;

/* .LCPI1_7 */
int32_t LCPI1_7 = 0xfff8553;

struct s1 {
    signed char[1200] pad1200;
    int32_t f4b0;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    int32_t f4;
};

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    int32_t f0;
    int32_t f4;
};

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

struct s0*** g659 = reinterpret_cast<struct s0***>(0x3d8d48208b4c);

void fun_136(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    struct s0** rax5;
    struct s0** r14_6;
    int32_t* rax7;
    int32_t* r15_8;
    uint64_t rcx9;
    struct s1* rax10;
    struct s2* rdi11;
    void* rdx12;
    struct s3* rsi13;
    int64_t rdi14;
    int64_t r8_15;
    struct s4* rdi16;
    struct s5* rsi17;
    uint64_t rdx18;
    int64_t rax19;
    struct s0* rsi20;
    struct s6* rdi21;
    uint64_t r8_22;
    uint64_t rcx23;
    uint64_t r9_24;
    uint64_t r10_25;
    uint64_t r9_26;
    uint64_t r11_27;
    uint64_t r13_28;
    struct s0** rcx29;
    struct s0** rdx30;
    int32_t* rsi31;
    struct s7* rdi32;
    int64_t r8_33;
    struct s8* rdi34;
    struct s9* rsi35;
    struct s10* rdi36;
    struct s11* rsi37;
    void* rdi38;
    int32_t* r8_39;
    struct s12* rdi40;
    struct s13* rdi41;
    struct s9* rsi42;
    struct s11* rsi43;
    int32_t v44;
    signed char** v45;
    struct s0*** rax46;
    struct s0** r12_47;
    struct s0** rcx48;
    struct s0** rsi49;
    int64_t rbp50;
    struct s0** v51;
    struct s0** rdi52;
    int64_t r13_53;
    int64_t r12_54;
    int64_t v55;

    rbx3 = rax4;
    rax5 = fun_148(0xf4240, 8);
    r14_6 = rax5;
    rax7 = fun_15a(0x124f80, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
    g124f80 = LCPI1_7;
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi11 = reinterpret_cast<struct s2*>(&rax10->f4b0);
        rdx12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax10) * 0x2580);
        rsi13 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(rdx12) + reinterpret_cast<int64_t>(rbx3));
        if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rdx12) + reinterpret_cast<int64_t>(r15_8) - reinterpret_cast<int64_t>(rsi13)) >= 16) {
            __asm__("movd xmm6, rax");
            __asm__("pshufd xmm6, xmm6, 0x44");
            __asm__("movd xmm7, rdi");
            __asm__("pshufd xmm7, xmm7, 0x44");
            *reinterpret_cast<int32_t*>(&rdi14) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm8, xmm4");
            do {
                __asm__("movdqa xmm10, xmm8");
                __asm__("paddq xmm10, xmm6");
                __asm__("pshufd xmm9, xmm10, 0xe8");
                __asm__("pshufd xmm11, xmm10, 0xee");
                __asm__("pmuludq xmm10, xmm1");
                __asm__("pshufd xmm10, xmm10, 0xed");
                __asm__("pmuludq xmm11, xmm1");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("punpckldq xmm10, xmm11");
                __asm__("psrld xmm10, 0x5");
                __asm__("movdqa xmm11, xmm7");
                __asm__("psubq xmm11, xmm8");
                __asm__("pshufd xmm12, xmm10, 0xf5");
                __asm__("pshufd xmm13, xmm11, 0xe8");
                __asm__("pshufd xmm14, xmm11, 0xee");
                __asm__("pmuludq xmm11, xmm1");
                __asm__("pmuludq xmm10, xmm2");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("pmuludq xmm14, xmm1");
                __asm__("pshufd xmm14, xmm14, 0xed");
                __asm__("pmuludq xmm12, xmm2");
                __asm__("punpckldq xmm11, xmm14");
                __asm__("psrld xmm11, 0x5");
                __asm__("pshufd xmm14, xmm11, 0xf5");
                __asm__("punpckldq xmm10, xmm12");
                __asm__("pmuludq xmm11, xmm2");
                __asm__("pmuludq xmm14, xmm2");
                __asm__("punpckldq xmm11, xmm14");
                __asm__("psubd xmm9, xmm10");
                __asm__("cvtdq2pd xmm9, xmm9");
                __asm__("psubd xmm13, xmm11");
                __asm__("divpd xmm9, xmm5");
                __asm__("cvtdq2pd xmm10, xmm13");
                __asm__("divpd xmm10, xmm5");
                __asm__("movupd [rsi+rdi*8], xmm9");
                __asm__("movupd [rdx+rdi*8], xmm10");
                rdi14 = rdi14 + 2;
                __asm__("paddq xmm8, xmm3");
            } while (rdi14 != 0x4b0);
        } else {
            *reinterpret_cast<int32_t*>(&r8_15) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_15) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm6, xmm6");
                __asm__("cvtsi2sd xmm6, r9d");
                __asm__("divsd xmm6, xmm0");
                rdi11->f0 = rsi13->f0;
                rdi16 = reinterpret_cast<struct s4*>(&rdi11->f4);
                rsi17 = reinterpret_cast<struct s5*>(&rsi13->f4);
                __asm__("xorps xmm6, xmm6");
                __asm__("cvtsi2sd xmm6, r9d");
                __asm__("divsd xmm6, xmm0");
                rdi16->f0 = rsi17->f0;
                rdi11 = reinterpret_cast<struct s2*>(&rdi16->f4);
                rsi13 = reinterpret_cast<struct s3*>(&rsi17->f4);
                ++r8_15;
            } while (r8_15 != 0x4b0);
        }
        rax10 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rax10) + 1);
    } while (rax10 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rdx18) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rax19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(fputc);
    rsi20 = reinterpret_cast<struct s0*>(0xc08f380000000000);
    __asm__("movapd xmm4, [rip+0x0]");
    rdi21 = reinterpret_cast<struct s6*>(0x7ffffffffffffffe);
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movapd xmm6, [rip+0x0]");
    while (1) {
        r8_22 = rcx9;
        if (rdx18 >= 2) {
            rcx23 = rdx18 & reinterpret_cast<uint64_t>(rdi21);
            __asm__("movd xmm7, r8");
            __asm__("pshufd xmm7, xmm7, 0x44");
            *reinterpret_cast<int32_t*>(&r9_24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_24) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm8, xmm5");
            do {
                __asm__("movdqa xmm9, xmm8");
                __asm__("paddq xmm9, xmm7");
                __asm__("pshufd xmm10, xmm9, 0xe8");
                __asm__("pshufd xmm11, xmm9, 0xee");
                __asm__("pmuludq xmm9, xmm1");
                __asm__("pshufd xmm9, xmm9, 0xed");
                __asm__("pmuludq xmm11, xmm1");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("psrld xmm9, 0x5");
                __asm__("pshufd xmm11, xmm9, 0xf5");
                __asm__("pmuludq xmm9, xmm2");
                __asm__("pmuludq xmm11, xmm2");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("psubd xmm10, xmm9");
                __asm__("cvtdq2pd xmm9, xmm10");
                __asm__("divpd xmm9, xmm6");
                __asm__("movupd [r10+r9*8], xmm9");
                r9_24 = r9_24 + 2;
                __asm__("paddq xmm8, xmm3");
            } while (r9_24 != rcx23);
            if (rdx18 != rcx23) 
                goto addr_44e_26;
        } else {
            *reinterpret_cast<int32_t*>(&rcx23) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_450_28;
        }
        addr_48a_29:
        rcx9 = r8_22 + 1;
        if (r8_22 > 0x3e6) {
            addr_390_30:
            ++rdx18;
            if (rcx9 == 0x3e8) 
                break; else 
                continue;
        } else {
            r10_25 = 0x3e7 - r8_22;
            r9_26 = rdx18;
            if (r10_25 < 4) {
                do {
                    addr_4f0_32:
                    (r14_6 + r8_22 * 0x7d0)[r9_26 * 2] = rsi20;
                    ++r9_26;
                } while (r9_26 != 0x3e8);
            } else {
                r11_27 = r10_25 & 0xfffffffffffffffc;
                r9_26 = rdx18 + r11_27;
                *reinterpret_cast<int32_t*>(&r13_28) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_28) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movupd [rbp+r12*8+0x0], xmm4");
                    __asm__("movupd [rbp+r12*8+0x10], xmm4");
                    r13_28 = r13_28 + 4;
                } while (r13_28 != r11_27);
                if (r10_25 == r11_27) 
                    goto addr_390_30; else 
                    goto addr_4ee_36;
            }
        }
        goto addr_390_30;
        addr_4ee_36:
        goto addr_4f0_32;
        addr_44e_26:
        do {
            addr_450_28:
            __asm__("xorps xmm7, xmm7");
            __asm__("cvtsi2sd xmm7, r9d");
            __asm__("divsd xmm7, xmm0");
            rdi21->f0 = *reinterpret_cast<int32_t*>(&rsi20->f0);
            rdi21 = reinterpret_cast<struct s6*>(&rdi21->f4);
            rsi20 = reinterpret_cast<struct s0*>(&rsi20->f4);
            ++rcx23;
        } while (rcx23 != rdx18);
        goto addr_48a_29;
    }
    rdi21->f0 = *reinterpret_cast<int32_t*>(&rsi20->f0);
    rdi21->f4 = rsi20->f4;
    do {
        rcx29 = r14_6 + rax19 * 0x7d0;
        rdx30 = rcx29 + rax19 * 2;
        *reinterpret_cast<int32_t*>(&rsi31) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (rax19 == fputc) {
                __asm__("pxor xmm2, xmm2");
            } else {
                rdi32 = reinterpret_cast<struct s7*>(r15_8 + rax19 * 0x960 + reinterpret_cast<int64_t>(rsi31) * 2);
                __asm__("pxor xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&r8_33) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_33) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi32->f0 = *rsi31;
                    rdi34 = reinterpret_cast<struct s8*>(&rdi32->f4);
                    rsi35 = reinterpret_cast<struct s9*>(rsi31 + 1);
                    __asm__("mulsd xmm3, xmm0");
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm3, [r10+rsi*8]");
                    rdi34->f0 = rsi35->f0;
                    rdi36 = reinterpret_cast<struct s10*>(&rdi34->f4);
                    rsi37 = reinterpret_cast<struct s11*>(&rsi35->f4);
                    rdi36->f0 = rsi37->f0;
                    rdi32 = reinterpret_cast<struct s7*>(&rdi36->f4);
                    rsi31 = &rsi37->f4;
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm2, xmm3");
                    ++r8_33;
                } while (r8_33 != rax19);
            }
            rdi38 = reinterpret_cast<void*>(rax19 * 0x2580);
            r8_39 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx3) + reinterpret_cast<int64_t>(rdi38));
            rdi40 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rdi38) + reinterpret_cast<int64_t>(r15_8));
            rdi40->f0 = *rsi31;
            rdi41 = reinterpret_cast<struct s13*>(&rdi40->f4);
            rsi42 = reinterpret_cast<struct s9*>(rsi31 + 1);
            __asm__("mulsd xmm3, xmm0");
            __asm__("mulsd xmm3, [rdx]");
            rdi41->f0 = rsi42->f0;
            rsi43 = reinterpret_cast<struct s11*>(&rsi42->f4);
            __asm__("mulsd xmm4, xmm1");
            __asm__("addsd xmm4, xmm3");
            __asm__("mulsd xmm2, xmm0");
            __asm__("addsd xmm2, xmm4");
            rdi41->f4 = rsi43->f0;
            rsi31 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi43->f4) + 1);
        } while (rsi31 != 0x4b0);
        ++rax19;
    } while (rax19 != 0x3e8);
    if (v44 >= 43 && **v45 == fputc) {
        rax46 = g659;
        r12_47 = *rax46;
        rcx48 = r12_47;
        fun_675(0x663, 22, 1, rcx48, r8_39);
        rsi49 = reinterpret_cast<struct s0**>(0x67c);
        *reinterpret_cast<int32_t*>(&rbp50) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp50) + 4) = reinterpret_cast<int32_t>(fputc);
        v51 = r12_47;
        rdi52 = r12_47;
        fun_694();
        do {
            r13_53 = rbp50 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_54) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_54) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_54 + r13_53) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi52) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi52) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi49 = v51;
                    fun_6cd();
                }
                *rdi52 = *rsi49;
                rdi52 = v51;
                rsi49 = reinterpret_cast<struct s0**>(0x6e9);
                fun_6f0();
                ++r12_54;
            } while (r12_54 != 0x4b0);
            ++rbp50;
        } while (rbp50 != 0x3e8);
        fun_725(v51, 0x70f, 0x716, rcx48, r8_39);
        *reinterpret_cast<int32_t*>(&rsi31) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx30) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx29 = v51;
        fun_73e(0x72c, 22, 1, rcx29, r8_39);
    }
    fun_631(rbx3, rsi31, rdx30, rcx29, r8_39);
    fun_639(r14_6, rsi31, rdx30, rcx29, r8_39);
    fun_641(r15_8, rsi31, rdx30, rcx29, r8_39);
    goto v55;
}

void fun_694() {
    int64_t r13_1;
    int64_t rbp2;
    int64_t r12_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* v6;
    int32_t* v7;
    struct s0** v8;
    struct s0** rcx9;
    int32_t* r8_10;
    int32_t* r8_11;
    int32_t* rbx12;
    int32_t* r8_13;
    struct s0** r14_14;
    int32_t* r8_15;
    int32_t* r15_16;
    int32_t* r8_17;
    int64_t v18;

    do {
        r13_1 = rbp2 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + r13_1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v6;
                fun_6cd();
            }
            *rdi4 = *rsi5;
            rdi4 = v7;
            rsi5 = reinterpret_cast<int32_t*>(0x6e9);
            fun_6f0();
            ++r12_3;
        } while (r12_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x3e8);
    fun_725(v8, 0x70f, 0x716, rcx9, r8_10);
    fun_73e(0x72c, 22, 1, v8, r8_11);
    fun_631(rbx12, 22, 1, v8, r8_13);
    fun_639(r14_14, 22, 1, v8, r8_15);
    fun_641(r15_16, 22, 1, v8, r8_17);
    goto v18;
}

void fun_641(int32_t* rdi, int32_t* rsi, struct s0** rdx, struct s0** rcx, int32_t* r8) {
    int64_t v6;

    goto v6;
}

struct s14 {
    signed char[1200] pad1200;
    int32_t f4b0;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f4;
};

struct s18 {
    int32_t f0;
    int32_t f4;
};

struct s19 {
    int32_t f0;
    int32_t f4;
};

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    int32_t f0;
    int32_t f4;
};

struct s22 {
    int32_t f0;
    int32_t f4;
};

struct s23 {
    int32_t f0;
    int32_t f4;
};

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s0** fun_148(int64_t rdi, int64_t rsi) {
    struct s0** r14_3;
    struct s0** rax4;
    int32_t* rax5;
    int32_t* r15_6;
    uint64_t rcx7;
    struct s14* rax8;
    struct s15* rdi9;
    void* rdx10;
    struct s16* rsi11;
    int32_t* rbx12;
    int64_t rdi13;
    int64_t r8_14;
    struct s17* rdi15;
    struct s18* rsi16;
    uint64_t rdx17;
    int64_t rax18;
    struct s0* rsi19;
    struct s19* rdi20;
    uint64_t r8_21;
    uint64_t rcx22;
    uint64_t r9_23;
    uint64_t r10_24;
    uint64_t r9_25;
    uint64_t r11_26;
    uint64_t r13_27;
    struct s0** rcx28;
    struct s0** rdx29;
    int32_t* rsi30;
    struct s20* rdi31;
    int64_t r8_32;
    struct s21* rdi33;
    struct s9* rsi34;
    struct s22* rdi35;
    struct s11* rsi36;
    void* rdi37;
    int32_t* r8_38;
    int32_t* rbx39;
    struct s23* rdi40;
    struct s24* rdi41;
    struct s9* rsi42;
    struct s11* rsi43;
    int32_t v44;
    signed char** v45;
    struct s0*** rax46;
    struct s0** r12_47;
    struct s0** rcx48;
    struct s0** rsi49;
    int64_t rbp50;
    struct s0** v51;
    struct s0** rdi52;
    int64_t r13_53;
    int64_t r12_54;
    int32_t* rbx55;
    int64_t v56;

    r14_3 = rax4;
    rax5 = fun_15a(0x124f80, 8);
    r15_6 = rax5;
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    g124f80 = LCPI1_7;
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi9 = reinterpret_cast<struct s15*>(&rax8->f4b0);
        rdx10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax8) * 0x2580);
        rsi11 = reinterpret_cast<struct s16*>(reinterpret_cast<int64_t>(rdx10) + reinterpret_cast<int64_t>(rbx12));
        if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rdx10) + reinterpret_cast<int64_t>(r15_6) - reinterpret_cast<int64_t>(rsi11)) >= 16) {
            __asm__("movd xmm6, rax");
            __asm__("pshufd xmm6, xmm6, 0x44");
            __asm__("movd xmm7, rdi");
            __asm__("pshufd xmm7, xmm7, 0x44");
            *reinterpret_cast<int32_t*>(&rdi13) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm8, xmm4");
            do {
                __asm__("movdqa xmm10, xmm8");
                __asm__("paddq xmm10, xmm6");
                __asm__("pshufd xmm9, xmm10, 0xe8");
                __asm__("pshufd xmm11, xmm10, 0xee");
                __asm__("pmuludq xmm10, xmm1");
                __asm__("pshufd xmm10, xmm10, 0xed");
                __asm__("pmuludq xmm11, xmm1");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("punpckldq xmm10, xmm11");
                __asm__("psrld xmm10, 0x5");
                __asm__("movdqa xmm11, xmm7");
                __asm__("psubq xmm11, xmm8");
                __asm__("pshufd xmm12, xmm10, 0xf5");
                __asm__("pshufd xmm13, xmm11, 0xe8");
                __asm__("pshufd xmm14, xmm11, 0xee");
                __asm__("pmuludq xmm11, xmm1");
                __asm__("pmuludq xmm10, xmm2");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("pmuludq xmm14, xmm1");
                __asm__("pshufd xmm14, xmm14, 0xed");
                __asm__("pmuludq xmm12, xmm2");
                __asm__("punpckldq xmm11, xmm14");
                __asm__("psrld xmm11, 0x5");
                __asm__("pshufd xmm14, xmm11, 0xf5");
                __asm__("punpckldq xmm10, xmm12");
                __asm__("pmuludq xmm11, xmm2");
                __asm__("pmuludq xmm14, xmm2");
                __asm__("punpckldq xmm11, xmm14");
                __asm__("psubd xmm9, xmm10");
                __asm__("cvtdq2pd xmm9, xmm9");
                __asm__("psubd xmm13, xmm11");
                __asm__("divpd xmm9, xmm5");
                __asm__("cvtdq2pd xmm10, xmm13");
                __asm__("divpd xmm10, xmm5");
                __asm__("movupd [rsi+rdi*8], xmm9");
                __asm__("movupd [rdx+rdi*8], xmm10");
                rdi13 = rdi13 + 2;
                __asm__("paddq xmm8, xmm3");
            } while (rdi13 != 0x4b0);
        } else {
            *reinterpret_cast<int32_t*>(&r8_14) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_14) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm6, xmm6");
                __asm__("cvtsi2sd xmm6, r9d");
                __asm__("divsd xmm6, xmm0");
                rdi9->f0 = rsi11->f0;
                rdi15 = reinterpret_cast<struct s17*>(&rdi9->f4);
                rsi16 = reinterpret_cast<struct s18*>(&rsi11->f4);
                __asm__("xorps xmm6, xmm6");
                __asm__("cvtsi2sd xmm6, r9d");
                __asm__("divsd xmm6, xmm0");
                rdi15->f0 = rsi16->f0;
                rdi9 = reinterpret_cast<struct s15*>(&rdi15->f4);
                rsi11 = reinterpret_cast<struct s16*>(&rsi16->f4);
                ++r8_14;
            } while (r8_14 != 0x4b0);
        }
        rax8 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rax8) + 1);
    } while (rax8 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rdx17) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rax18) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = reinterpret_cast<int32_t>(fputc);
    rsi19 = reinterpret_cast<struct s0*>(0xc08f380000000000);
    __asm__("movapd xmm4, [rip+0x0]");
    rdi20 = reinterpret_cast<struct s19*>(0x7ffffffffffffffe);
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movapd xmm6, [rip+0x0]");
    while (1) {
        r8_21 = rcx7;
        if (rdx17 >= 2) {
            rcx22 = rdx17 & reinterpret_cast<uint64_t>(rdi20);
            __asm__("movd xmm7, r8");
            __asm__("pshufd xmm7, xmm7, 0x44");
            *reinterpret_cast<int32_t*>(&r9_23) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_23) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm8, xmm5");
            do {
                __asm__("movdqa xmm9, xmm8");
                __asm__("paddq xmm9, xmm7");
                __asm__("pshufd xmm10, xmm9, 0xe8");
                __asm__("pshufd xmm11, xmm9, 0xee");
                __asm__("pmuludq xmm9, xmm1");
                __asm__("pshufd xmm9, xmm9, 0xed");
                __asm__("pmuludq xmm11, xmm1");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("psrld xmm9, 0x5");
                __asm__("pshufd xmm11, xmm9, 0xf5");
                __asm__("pmuludq xmm9, xmm2");
                __asm__("pmuludq xmm11, xmm2");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("psubd xmm10, xmm9");
                __asm__("cvtdq2pd xmm9, xmm10");
                __asm__("divpd xmm9, xmm6");
                __asm__("movupd [r10+r9*8], xmm9");
                r9_23 = r9_23 + 2;
                __asm__("paddq xmm8, xmm3");
            } while (r9_23 != rcx22);
            if (rdx17 != rcx22) 
                goto addr_44e_25;
        } else {
            *reinterpret_cast<int32_t*>(&rcx22) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_450_27;
        }
        addr_48a_28:
        rcx7 = r8_21 + 1;
        if (r8_21 > 0x3e6) {
            addr_390_29:
            ++rdx17;
            if (rcx7 == 0x3e8) 
                break; else 
                continue;
        } else {
            r10_24 = 0x3e7 - r8_21;
            r9_25 = rdx17;
            if (r10_24 < 4) {
                do {
                    addr_4f0_31:
                    (r14_3 + r8_21 * 0x7d0)[r9_25 * 2] = rsi19;
                    ++r9_25;
                } while (r9_25 != 0x3e8);
            } else {
                r11_26 = r10_24 & 0xfffffffffffffffc;
                r9_25 = rdx17 + r11_26;
                *reinterpret_cast<int32_t*>(&r13_27) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_27) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movupd [rbp+r12*8+0x0], xmm4");
                    __asm__("movupd [rbp+r12*8+0x10], xmm4");
                    r13_27 = r13_27 + 4;
                } while (r13_27 != r11_26);
                if (r10_24 == r11_26) 
                    goto addr_390_29; else 
                    goto addr_4ee_35;
            }
        }
        goto addr_390_29;
        addr_4ee_35:
        goto addr_4f0_31;
        addr_44e_25:
        do {
            addr_450_27:
            __asm__("xorps xmm7, xmm7");
            __asm__("cvtsi2sd xmm7, r9d");
            __asm__("divsd xmm7, xmm0");
            rdi20->f0 = *reinterpret_cast<int32_t*>(&rsi19->f0);
            rdi20 = reinterpret_cast<struct s19*>(&rdi20->f4);
            rsi19 = reinterpret_cast<struct s0*>(&rsi19->f4);
            ++rcx22;
        } while (rcx22 != rdx17);
        goto addr_48a_28;
    }
    rdi20->f0 = *reinterpret_cast<int32_t*>(&rsi19->f0);
    rdi20->f4 = rsi19->f4;
    do {
        rcx28 = r14_3 + rax18 * 0x7d0;
        rdx29 = rcx28 + rax18 * 2;
        *reinterpret_cast<int32_t*>(&rsi30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (rax18 == fputc) {
                __asm__("pxor xmm2, xmm2");
            } else {
                rdi31 = reinterpret_cast<struct s20*>(r15_6 + rax18 * 0x960 + reinterpret_cast<int64_t>(rsi30) * 2);
                __asm__("pxor xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&r8_32) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_32) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi31->f0 = *rsi30;
                    rdi33 = reinterpret_cast<struct s21*>(&rdi31->f4);
                    rsi34 = reinterpret_cast<struct s9*>(rsi30 + 1);
                    __asm__("mulsd xmm3, xmm0");
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm3, [r10+rsi*8]");
                    rdi33->f0 = rsi34->f0;
                    rdi35 = reinterpret_cast<struct s22*>(&rdi33->f4);
                    rsi36 = reinterpret_cast<struct s11*>(&rsi34->f4);
                    rdi35->f0 = rsi36->f0;
                    rdi31 = reinterpret_cast<struct s20*>(&rdi35->f4);
                    rsi30 = &rsi36->f4;
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm2, xmm3");
                    ++r8_32;
                } while (r8_32 != rax18);
            }
            rdi37 = reinterpret_cast<void*>(rax18 * 0x2580);
            r8_38 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx39) + reinterpret_cast<int64_t>(rdi37));
            rdi40 = reinterpret_cast<struct s23*>(reinterpret_cast<int64_t>(rdi37) + reinterpret_cast<int64_t>(r15_6));
            rdi40->f0 = *rsi30;
            rdi41 = reinterpret_cast<struct s24*>(&rdi40->f4);
            rsi42 = reinterpret_cast<struct s9*>(rsi30 + 1);
            __asm__("mulsd xmm3, xmm0");
            __asm__("mulsd xmm3, [rdx]");
            rdi41->f0 = rsi42->f0;
            rsi43 = reinterpret_cast<struct s11*>(&rsi42->f4);
            __asm__("mulsd xmm4, xmm1");
            __asm__("addsd xmm4, xmm3");
            __asm__("mulsd xmm2, xmm0");
            __asm__("addsd xmm2, xmm4");
            rdi41->f4 = rsi43->f0;
            rsi30 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi43->f4) + 1);
        } while (rsi30 != 0x4b0);
        ++rax18;
    } while (rax18 != 0x3e8);
    if (v44 >= 43 && **v45 == fputc) {
        rax46 = g659;
        r12_47 = *rax46;
        rcx48 = r12_47;
        fun_675(0x663, 22, 1, rcx48, r8_38);
        rsi49 = reinterpret_cast<struct s0**>(0x67c);
        *reinterpret_cast<int32_t*>(&rbp50) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp50) + 4) = reinterpret_cast<int32_t>(fputc);
        v51 = r12_47;
        rdi52 = r12_47;
        fun_694();
        do {
            r13_53 = rbp50 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_54) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_54) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_54 + r13_53) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi52) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi52) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi49 = v51;
                    fun_6cd();
                }
                *rdi52 = *rsi49;
                rdi52 = v51;
                rsi49 = reinterpret_cast<struct s0**>(0x6e9);
                fun_6f0();
                ++r12_54;
            } while (r12_54 != 0x4b0);
            ++rbp50;
        } while (rbp50 != 0x3e8);
        fun_725(v51, 0x70f, 0x716, rcx48, r8_38);
        *reinterpret_cast<int32_t*>(&rsi30) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx29) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx28 = v51;
        fun_73e(0x72c, 22, 1, rcx28, r8_38);
    }
    fun_631(rbx55, rsi30, rdx29, rcx28, r8_38);
    fun_639(r14_3, rsi30, rdx29, rcx28, r8_38);
    fun_641(r15_6, rsi30, rdx29, rcx28, r8_38);
    goto v56;
}

struct s25 {
    signed char[1200] pad1200;
    int32_t f4b0;
};

struct s26 {
    int32_t f0;
    int32_t f4;
};

struct s27 {
    int32_t f0;
    int32_t f4;
};

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s29 {
    int32_t f0;
    int32_t f4;
};

struct s30 {
    int32_t f0;
    int32_t f4;
};

struct s31 {
    int32_t f0;
    int32_t f4;
};

struct s32 {
    int32_t f0;
    int32_t f4;
};

struct s33 {
    int32_t f0;
    int32_t f4;
};

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

struct s36 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_15a(int32_t* rdi, int32_t* rsi) {
    int32_t* r15_3;
    int32_t* rax4;
    uint64_t rcx5;
    struct s25* rax6;
    struct s26* rdi7;
    void* rdx8;
    struct s27* rsi9;
    int32_t* rbx10;
    int64_t rdi11;
    int64_t r8_12;
    struct s28* rdi13;
    struct s29* rsi14;
    uint64_t rdx15;
    int64_t rax16;
    struct s30* rsi17;
    struct s31* rdi18;
    uint64_t r8_19;
    uint64_t rcx20;
    uint64_t r9_21;
    uint64_t r10_22;
    uint64_t r9_23;
    struct s30** r14_24;
    uint64_t r11_25;
    uint64_t r13_26;
    struct s0** rcx27;
    struct s0** r14_28;
    struct s0** rdx29;
    int32_t* rsi30;
    struct s32* rdi31;
    int64_t r8_32;
    struct s33* rdi33;
    struct s9* rsi34;
    struct s34* rdi35;
    struct s11* rsi36;
    void* rdi37;
    int32_t* r8_38;
    int32_t* rbx39;
    struct s35* rdi40;
    struct s36* rdi41;
    struct s9* rsi42;
    struct s11* rsi43;
    int32_t v44;
    signed char** v45;
    struct s0*** rax46;
    struct s0** r12_47;
    struct s0** rcx48;
    struct s0** rsi49;
    int64_t rbp50;
    struct s0** v51;
    struct s0** rdi52;
    int64_t r13_53;
    int64_t r12_54;
    int32_t* rbx55;
    struct s0** r14_56;
    int64_t v57;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&rcx5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi = *rsi;
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi7 = reinterpret_cast<struct s26*>(&rax6->f4b0);
        rdx8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax6) * 0x2580);
        rsi9 = reinterpret_cast<struct s27*>(reinterpret_cast<int64_t>(rdx8) + reinterpret_cast<int64_t>(rbx10));
        if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rdx8) + reinterpret_cast<int64_t>(r15_3) - reinterpret_cast<int64_t>(rsi9)) >= 16) {
            __asm__("movd xmm6, rax");
            __asm__("pshufd xmm6, xmm6, 0x44");
            __asm__("movd xmm7, rdi");
            __asm__("pshufd xmm7, xmm7, 0x44");
            *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm8, xmm4");
            do {
                __asm__("movdqa xmm10, xmm8");
                __asm__("paddq xmm10, xmm6");
                __asm__("pshufd xmm9, xmm10, 0xe8");
                __asm__("pshufd xmm11, xmm10, 0xee");
                __asm__("pmuludq xmm10, xmm1");
                __asm__("pshufd xmm10, xmm10, 0xed");
                __asm__("pmuludq xmm11, xmm1");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("punpckldq xmm10, xmm11");
                __asm__("psrld xmm10, 0x5");
                __asm__("movdqa xmm11, xmm7");
                __asm__("psubq xmm11, xmm8");
                __asm__("pshufd xmm12, xmm10, 0xf5");
                __asm__("pshufd xmm13, xmm11, 0xe8");
                __asm__("pshufd xmm14, xmm11, 0xee");
                __asm__("pmuludq xmm11, xmm1");
                __asm__("pmuludq xmm10, xmm2");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("pmuludq xmm14, xmm1");
                __asm__("pshufd xmm14, xmm14, 0xed");
                __asm__("pmuludq xmm12, xmm2");
                __asm__("punpckldq xmm11, xmm14");
                __asm__("psrld xmm11, 0x5");
                __asm__("pshufd xmm14, xmm11, 0xf5");
                __asm__("punpckldq xmm10, xmm12");
                __asm__("pmuludq xmm11, xmm2");
                __asm__("pmuludq xmm14, xmm2");
                __asm__("punpckldq xmm11, xmm14");
                __asm__("psubd xmm9, xmm10");
                __asm__("cvtdq2pd xmm9, xmm9");
                __asm__("psubd xmm13, xmm11");
                __asm__("divpd xmm9, xmm5");
                __asm__("cvtdq2pd xmm10, xmm13");
                __asm__("divpd xmm10, xmm5");
                __asm__("movupd [rsi+rdi*8], xmm9");
                __asm__("movupd [rdx+rdi*8], xmm10");
                rdi11 = rdi11 + 2;
                __asm__("paddq xmm8, xmm3");
            } while (rdi11 != 0x4b0);
        } else {
            *reinterpret_cast<int32_t*>(&r8_12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm6, xmm6");
                __asm__("cvtsi2sd xmm6, r9d");
                __asm__("divsd xmm6, xmm0");
                rdi7->f0 = rsi9->f0;
                rdi13 = reinterpret_cast<struct s28*>(&rdi7->f4);
                rsi14 = reinterpret_cast<struct s29*>(&rsi9->f4);
                __asm__("xorps xmm6, xmm6");
                __asm__("cvtsi2sd xmm6, r9d");
                __asm__("divsd xmm6, xmm0");
                rdi13->f0 = rsi14->f0;
                rdi7 = reinterpret_cast<struct s26*>(&rdi13->f4);
                rsi9 = reinterpret_cast<struct s27*>(&rsi14->f4);
                ++r8_12;
            } while (r8_12 != 0x4b0);
        }
        rax6 = reinterpret_cast<struct s25*>(reinterpret_cast<int64_t>(rax6) + 1);
    } while (rax6 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rdx15) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rax16) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(fputc);
    rsi17 = reinterpret_cast<struct s30*>(0xc08f380000000000);
    __asm__("movapd xmm4, [rip+0x0]");
    rdi18 = reinterpret_cast<struct s31*>(0x7ffffffffffffffe);
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movapd xmm6, [rip+0x0]");
    while (1) {
        r8_19 = rcx5;
        if (rdx15 >= 2) {
            rcx20 = rdx15 & reinterpret_cast<uint64_t>(rdi18);
            __asm__("movd xmm7, r8");
            __asm__("pshufd xmm7, xmm7, 0x44");
            *reinterpret_cast<int32_t*>(&r9_21) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_21) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm8, xmm5");
            do {
                __asm__("movdqa xmm9, xmm8");
                __asm__("paddq xmm9, xmm7");
                __asm__("pshufd xmm10, xmm9, 0xe8");
                __asm__("pshufd xmm11, xmm9, 0xee");
                __asm__("pmuludq xmm9, xmm1");
                __asm__("pshufd xmm9, xmm9, 0xed");
                __asm__("pmuludq xmm11, xmm1");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("psrld xmm9, 0x5");
                __asm__("pshufd xmm11, xmm9, 0xf5");
                __asm__("pmuludq xmm9, xmm2");
                __asm__("pmuludq xmm11, xmm2");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("psubd xmm10, xmm9");
                __asm__("cvtdq2pd xmm9, xmm10");
                __asm__("divpd xmm9, xmm6");
                __asm__("movupd [r10+r9*8], xmm9");
                r9_21 = r9_21 + 2;
                __asm__("paddq xmm8, xmm3");
            } while (r9_21 != rcx20);
            if (rdx15 != rcx20) 
                goto addr_44e_24;
        } else {
            *reinterpret_cast<int32_t*>(&rcx20) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_450_26;
        }
        addr_48a_27:
        rcx5 = r8_19 + 1;
        if (r8_19 > 0x3e6) {
            addr_390_28:
            ++rdx15;
            if (rcx5 == 0x3e8) 
                break; else 
                continue;
        } else {
            r10_22 = 0x3e7 - r8_19;
            r9_23 = rdx15;
            if (r10_22 < 4) {
                do {
                    addr_4f0_30:
                    (r14_24 + r8_19 * 0x3e8)[r9_23] = rsi17;
                    ++r9_23;
                } while (r9_23 != 0x3e8);
            } else {
                r11_25 = r10_22 & 0xfffffffffffffffc;
                r9_23 = rdx15 + r11_25;
                *reinterpret_cast<int32_t*>(&r13_26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_26) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movupd [rbp+r12*8+0x0], xmm4");
                    __asm__("movupd [rbp+r12*8+0x10], xmm4");
                    r13_26 = r13_26 + 4;
                } while (r13_26 != r11_25);
                if (r10_22 == r11_25) 
                    goto addr_390_28; else 
                    goto addr_4ee_34;
            }
        }
        goto addr_390_28;
        addr_4ee_34:
        goto addr_4f0_30;
        addr_44e_24:
        do {
            addr_450_26:
            __asm__("xorps xmm7, xmm7");
            __asm__("cvtsi2sd xmm7, r9d");
            __asm__("divsd xmm7, xmm0");
            rdi18->f0 = rsi17->f0;
            rdi18 = reinterpret_cast<struct s31*>(&rdi18->f4);
            rsi17 = reinterpret_cast<struct s30*>(&rsi17->f4);
            ++rcx20;
        } while (rcx20 != rdx15);
        goto addr_48a_27;
    }
    rdi18->f0 = rsi17->f0;
    rdi18->f4 = rsi17->f4;
    do {
        rcx27 = r14_28 + rax16 * 0x7d0;
        rdx29 = rcx27 + rax16 * 2;
        *reinterpret_cast<int32_t*>(&rsi30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (rax16 == fputc) {
                __asm__("pxor xmm2, xmm2");
            } else {
                rdi31 = reinterpret_cast<struct s32*>(r15_3 + rax16 * 0x960 + reinterpret_cast<int64_t>(rsi30) * 2);
                __asm__("pxor xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&r8_32) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_32) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi31->f0 = *rsi30;
                    rdi33 = reinterpret_cast<struct s33*>(&rdi31->f4);
                    rsi34 = reinterpret_cast<struct s9*>(rsi30 + 1);
                    __asm__("mulsd xmm3, xmm0");
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm3, [r10+rsi*8]");
                    rdi33->f0 = rsi34->f0;
                    rdi35 = reinterpret_cast<struct s34*>(&rdi33->f4);
                    rsi36 = reinterpret_cast<struct s11*>(&rsi34->f4);
                    rdi35->f0 = rsi36->f0;
                    rdi31 = reinterpret_cast<struct s32*>(&rdi35->f4);
                    rsi30 = &rsi36->f4;
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm2, xmm3");
                    ++r8_32;
                } while (r8_32 != rax16);
            }
            rdi37 = reinterpret_cast<void*>(rax16 * 0x2580);
            r8_38 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx39) + reinterpret_cast<int64_t>(rdi37));
            rdi40 = reinterpret_cast<struct s35*>(reinterpret_cast<int64_t>(rdi37) + reinterpret_cast<int64_t>(r15_3));
            rdi40->f0 = *rsi30;
            rdi41 = reinterpret_cast<struct s36*>(&rdi40->f4);
            rsi42 = reinterpret_cast<struct s9*>(rsi30 + 1);
            __asm__("mulsd xmm3, xmm0");
            __asm__("mulsd xmm3, [rdx]");
            rdi41->f0 = rsi42->f0;
            rsi43 = reinterpret_cast<struct s11*>(&rsi42->f4);
            __asm__("mulsd xmm4, xmm1");
            __asm__("addsd xmm4, xmm3");
            __asm__("mulsd xmm2, xmm0");
            __asm__("addsd xmm2, xmm4");
            rdi41->f4 = rsi43->f0;
            rsi30 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi43->f4) + 1);
        } while (rsi30 != 0x4b0);
        ++rax16;
    } while (rax16 != 0x3e8);
    if (v44 >= 43 && **v45 == fputc) {
        rax46 = g659;
        r12_47 = *rax46;
        rcx48 = r12_47;
        fun_675(0x663, 22, 1, rcx48, r8_38);
        rsi49 = reinterpret_cast<struct s0**>(0x67c);
        *reinterpret_cast<int32_t*>(&rbp50) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp50) + 4) = reinterpret_cast<int32_t>(fputc);
        v51 = r12_47;
        rdi52 = r12_47;
        fun_694();
        do {
            r13_53 = rbp50 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_54) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_54) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_54 + r13_53) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi52) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi52) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi49 = v51;
                    fun_6cd();
                }
                *rdi52 = *rsi49;
                rdi52 = v51;
                rsi49 = reinterpret_cast<struct s0**>(0x6e9);
                fun_6f0();
                ++r12_54;
            } while (r12_54 != 0x4b0);
            ++rbp50;
        } while (rbp50 != 0x3e8);
        fun_725(v51, 0x70f, 0x716, rcx48, r8_38);
        *reinterpret_cast<int32_t*>(&rsi30) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx29) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx27 = v51;
        fun_73e(0x72c, 22, 1, rcx27, r8_38);
    }
    fun_631(rbx55, rsi30, rdx29, rcx27, r8_38);
    fun_639(r14_56, rsi30, rdx29, rcx27, r8_38);
    fun_641(r15_3, rsi30, rdx29, rcx27, r8_38);
    goto v57;
}

void fputc() {
}

struct s37 {
    int32_t f0;
    int32_t f4;
};

struct s38 {
    int32_t f0;
    int32_t f4;
};

struct s39 {
    int32_t f0;
    int32_t f4;
};

struct s40 {
    int32_t f0;
    int32_t f4;
};

struct s41 {
    int32_t f0;
    int32_t f4;
};

struct s42 {
    int32_t f0;
    int32_t f4;
};

void fun_a8() {
    int64_t r15_1;
    struct s37* rdi2;
    struct s38* rsi3;
    struct s39* rdi4;
    struct s40* rsi5;
    struct s41* rdi6;
    struct s42* rsi7;
    int64_t r9_8;

    __asm__("xorpd xmm2, xmm2");
    *reinterpret_cast<int32_t*>(&r15_1) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_1) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi2->f0 = rsi3->f0;
        rdi4 = reinterpret_cast<struct s39*>(&rdi2->f4);
        rsi5 = reinterpret_cast<struct s40*>(&rsi3->f4);
        __asm__("mulsd xmm3, xmm0");
        __asm__("mulsd xmm3, [r10+r15*8]");
        __asm__("addsd xmm3, [r13+rbx*8+0x0]");
        rdi4->f0 = rsi5->f0;
        rdi6 = reinterpret_cast<struct s41*>(&rdi4->f4);
        rsi7 = reinterpret_cast<struct s42*>(&rsi5->f4);
        rdi6->f0 = rsi7->f0;
        rdi2 = reinterpret_cast<struct s37*>(&rdi6->f4);
        rsi3 = reinterpret_cast<struct s38*>(&rsi7->f4);
        __asm__("mulsd xmm3, [r10+r15*8]");
        __asm__("addsd xmm2, xmm3");
        ++r15_1;
    } while (r15_1 != r9_8);
}

void fun_f8() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_136(0x124f80, 8);
}

