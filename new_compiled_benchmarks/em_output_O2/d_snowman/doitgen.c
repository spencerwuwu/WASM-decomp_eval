
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_70c(int64_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_714(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_704(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t* r14_5;
    int64_t r15_6;
    int64_t v7;

    fun_70c(r14_5, rsi, rdx, rcx);
    fun_714(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_800(int32_t* rdi, int64_t rsi, int64_t rdx);

void fputc(int32_t edi, int32_t esi);

void fun_84e(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_867(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_7cf(int64_t rdi, int32_t* rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rcx5;
    int64_t v6;
    int32_t* rbx7;
    int64_t v8;
    int32_t* v9;
    int64_t r12_10;
    int64_t r13_11;
    int64_t r13_12;
    int64_t v13;
    int64_t rbp14;
    int64_t rbp15;
    int32_t* v16;
    int32_t* v17;
    int32_t* rbx18;
    int64_t* r14_19;
    int64_t r15_20;
    int64_t v21;

    while (1) {
        rcx5 = reinterpret_cast<int32_t*>((v6 << 8) + reinterpret_cast<int64_t>(rbx7) + v8 * 0x2bc00);
        __asm__("movq xmm0, [rcx+r12*8]");
        fun_800(v9, 0x7f9, rdx);
        ++r12_10;
        if (r12_10 == 0xa0) {
            ++r13_11;
            if (r13_11 == 0x8c) {
                r13_12 = v8 + 1;
                if (r13_12 == 0x96) 
                    break;
                v8 = r13_12;
                v13 = r13_12 * 0x5780;
                *reinterpret_cast<int32_t*>(&r13_11) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_11) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            rbp14 = r13_11 * 4 + r13_11;
            v6 = rbp14;
            rbp15 = (rbp14 << 5) + v13;
            *reinterpret_cast<int32_t*>(&r12_10) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_10) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_10 + rbp15) * 0xcccccccd) > 0xccccccc) 
            continue;
        fun_7cf(10, v16, rdx, rcx5);
    }
    fun_84e(v17, 0x838, 0x83f);
    fun_867(0x855, 22, 1, v17);
    fun_704(rbx18, 22, 1, v17);
    fun_70c(r14_19, 22, 1, v17);
    fun_714(r15_20, 22, 1, v17);
    goto v21;
}

void fun_84e(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* r12_4;
    int32_t* rbx5;
    int64_t* r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_867(0x855, 22, 1, r12_4);
    fun_704(rbx5, 22, 1, r12_4);
    fun_70c(r14_6, 22, 1, r12_4);
    fun_714(r15_7, 22, 1, r12_4);
    goto v8;
}

void fun_768(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_748(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int32_t* v6;
    int32_t* r12_7;
    int32_t* r12_8;
    int64_t v9;
    int64_t v10;
    int64_t r13_11;
    int64_t rbp12;
    int64_t v13;
    int64_t rbp14;
    int64_t r12_15;
    int32_t* rbx16;
    int32_t* rbx17;
    int64_t* r14_18;
    int64_t r15_19;
    int64_t v20;

    *reinterpret_cast<int32_t*>(&r13_5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(fputc);
    v6 = r12_7;
    fun_768(r12_8, 0x74f, 0x756, rcx);
    do {
        v9 = r13_5;
        v10 = r13_5 * 0x5780;
        *reinterpret_cast<int32_t*>(&r13_11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rbp12 = r13_11 * 4 + r13_11;
            v13 = rbp12;
            rbp14 = (rbp12 << 5) + v10;
            *reinterpret_cast<int32_t*>(&r12_15) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_15) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_15 + rbp14) * 0xcccccccd) <= 0xccccccc) {
                    fun_7cf(10, v6, 0x756, rcx);
                }
                rcx = reinterpret_cast<int32_t*>((v13 << 8) + reinterpret_cast<int64_t>(rbx16) + v9 * 0x2bc00);
                __asm__("movq xmm0, [rcx+r12*8]");
                fun_800(v6, 0x7f9, 0x756);
                ++r12_15;
            } while (r12_15 != 0xa0);
            ++r13_11;
        } while (r13_11 != 0x8c);
        r13_5 = v9 + 1;
    } while (r13_5 != 0x96);
    fun_84e(v6, 0x838, 0x83f);
    fun_867(0x855, 22, 1, v6);
    fun_704(rbx17, 22, 1, v6);
    fun_70c(r14_18, 22, 1, v6);
    fun_714(r15_19, 22, 1, v6);
    goto v20;
}

void fun_70c(int64_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t v6;

    fun_714(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_800(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int64_t r12_4;
    int64_t r13_5;
    int64_t r13_6;
    int64_t v7;
    int64_t v8;
    int64_t rbp9;
    int64_t v10;
    int64_t rbp11;
    int32_t* v12;
    int32_t* rcx13;
    int32_t* rbx14;
    int32_t* v15;
    int32_t* v16;
    int32_t* rbx17;
    int64_t* r14_18;
    int64_t r15_19;
    int64_t v20;

    while (1) {
        ++r12_4;
        if (r12_4 == 0xa0) {
            ++r13_5;
            if (r13_5 == 0x8c) {
                r13_6 = v7 + 1;
                if (r13_6 == 0x96) 
                    break;
                v7 = r13_6;
                v8 = r13_6 * 0x5780;
                *reinterpret_cast<int32_t*>(&r13_5) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            rbp9 = r13_5 * 4 + r13_5;
            v10 = rbp9;
            rbp11 = (rbp9 << 5) + v8;
            *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + rbp11) * 0xcccccccd) <= 0xccccccc) {
            fun_7cf(10, v12, rdx, rcx13);
        }
        rcx13 = reinterpret_cast<int32_t*>((v10 << 8) + reinterpret_cast<int64_t>(rbx14) + v7 * 0x2bc00);
        __asm__("movq xmm0, [rcx+r12*8]");
        fun_800(v15, 0x7f9, rdx);
    }
    fun_84e(v16, 0x838, 0x83f);
    fun_867(0x855, 22, 1, v16);
    fun_704(rbx17, 22, 1, v16);
    fun_70c(r14_18, 22, 1, v16);
    fun_714(r15_19, 22, 1, v16);
    goto v20;
}

void fun_867(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int32_t* rbx5;
    int64_t* r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_704(rbx5, rsi, rdx, rcx);
    fun_70c(r14_6, rsi, rdx, rcx);
    fun_714(r15_7, rsi, rdx, rcx);
    goto v8;
}

int64_t* fun_2e4(int64_t rdi, int64_t rsi);

int64_t fun_2f6(int64_t rdi, int64_t rsi);

struct s1 {
    int32_t f0;
    int32_t f4;
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

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

int32_t** g72c = reinterpret_cast<int32_t**>(0x3d8d48208b4c);

void fun_2d2(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    int64_t* rax5;
    int64_t* r14_6;
    int64_t rax7;
    int64_t r15_8;
    int64_t rcx9;
    int64_t rax10;
    int64_t rdx11;
    int64_t rsi12;
    int64_t rax13;
    int64_t rdx14;
    int32_t* rcx15;
    int32_t* rdx16;
    struct s0* rsi17;
    void* r9_18;
    int32_t* r8_19;
    int64_t r10_20;
    int64_t r11_21;
    struct s1* rdi22;
    struct s2* rdi23;
    struct s3* rsi24;
    struct s4* rdi25;
    struct s5* rsi26;
    struct s6* rdi27;
    struct s7* rsi28;
    struct s8* rdi29;
    int64_t r9_30;
    int64_t r10_31;
    struct s9* rdi32;
    struct s3* rsi33;
    struct s10* rdi34;
    struct s5* rsi35;
    struct s11* rdi36;
    struct s7* rsi37;
    struct s12* rdi38;
    struct s0* rsi39;
    struct s13* rdi40;
    struct s3* rsi41;
    struct s14* rdi42;
    struct s5* rsi43;
    struct s15* rdi44;
    struct s7* rsi45;
    int32_t ebp46;
    signed char** r12_47;
    int32_t** rax48;
    int32_t* r12_49;
    int32_t* rcx50;
    int64_t r13_51;
    int32_t* v52;
    int64_t v53;
    int64_t v54;
    int64_t r13_55;
    int64_t rbp56;
    int64_t v57;
    int64_t rbp58;
    int64_t r12_59;
    int64_t v60;

    rbx3 = rax4;
    rax5 = fun_2e4(0xa0, 8);
    r14_6 = rax5;
    rax7 = fun_2f6(0x6400, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("movd xmm6, rsi");
            __asm__("pshufd xmm6, xmm6, 0x44");
            *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm7, xmm3");
            do {
                __asm__("movdqa xmm10, xmm7");
                __asm__("paddq xmm10, xmm6");
                __asm__("pshufd xmm8, xmm10, 0xe8");
                __asm__("movdqa xmm9, xmm10");
                __asm__("pmuludq xmm9, xmm0");
                __asm__("pshufd xmm11, xmm10, 0xee");
                __asm__("pmuludq xmm11, xmm0");
                __asm__("pshufd xmm9, xmm9, 0xed");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("paddq xmm10, xmm2");
                __asm__("pshufd xmm12, xmm10, 0xe8");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("pshufd xmm11, xmm10, 0xee");
                __asm__("pmuludq xmm10, xmm0");
                __asm__("pshufd xmm10, xmm10, 0xed");
                __asm__("psrld xmm9, 0x7");
                __asm__("pmuludq xmm11, xmm0");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("punpckldq xmm10, xmm11");
                __asm__("pshufd xmm11, xmm9, 0xf5");
                __asm__("pmuludq xmm9, xmm1");
                __asm__("pmuludq xmm11, xmm1");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("psubd xmm8, xmm9");
                __asm__("psrld xmm10, 0x7");
                __asm__("pshufd xmm9, xmm10, 0xf5");
                __asm__("cvtdq2pd xmm8, xmm8");
                __asm__("pmuludq xmm10, xmm1");
                __asm__("pmuludq xmm9, xmm1");
                __asm__("punpckldq xmm10, xmm9");
                __asm__("divpd xmm8, xmm4");
                __asm__("psubd xmm12, xmm10");
                __asm__("cvtdq2pd xmm9, xmm12");
                __asm__("divpd xmm9, xmm4");
                __asm__("movupd [r8+rsi*8], xmm8");
                __asm__("movupd [rdi+r8], xmm9");
                rsi12 = rsi12 + 4;
                __asm__("paddq xmm7, xmm5");
            } while (rsi12 != 0xa0);
            ++rdx11;
        } while (rdx11 != 0x8c);
        ++rax10;
    } while (rax10 != 0x96);
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, rcx");
        __asm__("pshufd xmm5, xmm5, 0x44");
        *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm6, xmm3");
        do {
            __asm__("movdqa xmm7, xmm6");
            __asm__("psrlq xmm7, 0x20");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("movdqa xmm8, xmm5");
            __asm__("psrlq xmm8, 0x20");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("paddq xmm8, xmm7");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("psllq xmm8, 0x20");
            __asm__("paddq xmm7, xmm8");
            __asm__("pshufd xmm8, xmm7, 0xe8");
            __asm__("pshufd xmm9, xmm7, 0xee");
            __asm__("pmuludq xmm7, xmm0");
            __asm__("pshufd xmm7, xmm7, 0xed");
            __asm__("pmuludq xmm9, xmm0");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("psrld xmm7, 0x7");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pmuludq xmm7, xmm1");
            __asm__("pmuludq xmm9, xmm1");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("psubd xmm8, xmm7");
            __asm__("cvtdq2pd xmm7, xmm8");
            __asm__("divpd xmm7, xmm4");
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx14 = rdx14 + 2;
            __asm__("paddq xmm6, xmm2");
        } while (rdx14 != 0xa0);
        ++rcx9;
    } while (rcx9 != 0xa0);
    do {
        rcx15 = reinterpret_cast<int32_t*>(rax13 * 0x2bc00);
        rdx16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx15) + reinterpret_cast<int64_t>(rbx3));
        *reinterpret_cast<int32_t*>(&rsi17) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_18 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi17) + reinterpret_cast<int64_t>(rsi17) * 4 << 8);
            r8_19 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx16) + reinterpret_cast<int64_t>(r9_18));
            *reinterpret_cast<int32_t*>(&r10_20) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_20) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r14_6[r10_20] = reinterpret_cast<int64_t>(fputc);
                __asm__("pxor xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r11_21) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_21) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi22 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbx3) + reinterpret_cast<int64_t>(r9_18) + reinterpret_cast<int64_t>(rcx15));
                    rdi22->f0 = rsi17->f0;
                    rdi23 = reinterpret_cast<struct s2*>(&rdi22->f4);
                    rsi24 = reinterpret_cast<struct s3*>(&rsi17->f4);
                    __asm__("mulsd xmm1, [r13+r10*8+0x0]");
                    __asm__("addsd xmm1, xmm0");
                    rdi23->f0 = rsi24->f0;
                    rdi25 = reinterpret_cast<struct s4*>(&rdi23->f4);
                    rsi26 = reinterpret_cast<struct s5*>(&rsi24->f4);
                    rdi25->f0 = rsi26->f0;
                    rdi27 = reinterpret_cast<struct s6*>(&rdi25->f4);
                    rsi28 = reinterpret_cast<struct s7*>(&rsi26->f4);
                    __asm__("mulsd xmm0, [r13+r10*8+0x0]");
                    __asm__("addsd xmm0, xmm1");
                    rdi27->f0 = rsi28->f0;
                    rdi29 = reinterpret_cast<struct s8*>(&rdi27->f4);
                    rsi17 = reinterpret_cast<struct s0*>(&rsi28->f4);
                    r11_21 = r11_21 + 2;
                } while (r11_21 != 0xa0);
                ++r10_20;
            } while (r10_20 != 0xa0);
            *reinterpret_cast<int32_t*>(&r9_30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_30) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&r10_31) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_31) + 4) = reinterpret_cast<int32_t>(fputc);
            if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r8_19) - reinterpret_cast<int64_t>(r14_6)) >= 32) {
                do {
                    __asm__("movups xmm0, [r14+r9*8]");
                    __asm__("movups xmm1, [r14+r9*8+0x10]");
                    __asm__("movups [rdi+r9*8], xmm0");
                    __asm__("movups [rdi+r9*8+0x10], xmm1");
                    __asm__("movdqu xmm0, [r14+r8]");
                    __asm__("movupd xmm1, [r14+r8+0x10]");
                    __asm__("movdqu [r8+rdi], xmm0");
                    __asm__("movupd [r8+rdi+0x10], xmm1");
                    r9_30 = r9_30 + 8;
                } while (r9_30 != 0xa0);
            } else {
                do {
                    rdi29->f0 = rsi17->f0;
                    rdi32 = reinterpret_cast<struct s9*>(&rdi29->f4);
                    rsi33 = reinterpret_cast<struct s3*>(&rsi17->f4);
                    rdi32->f0 = rsi33->f0;
                    rdi34 = reinterpret_cast<struct s10*>(&rdi32->f4);
                    rsi35 = reinterpret_cast<struct s5*>(&rsi33->f4);
                    rdi34->f0 = rsi35->f0;
                    rdi36 = reinterpret_cast<struct s11*>(&rdi34->f4);
                    rsi37 = reinterpret_cast<struct s7*>(&rsi35->f4);
                    rdi36->f0 = rsi37->f0;
                    rdi38 = reinterpret_cast<struct s12*>(&rdi36->f4);
                    rsi39 = reinterpret_cast<struct s0*>(&rsi37->f4);
                    rdi38->f0 = rsi39->f0;
                    rdi40 = reinterpret_cast<struct s13*>(&rdi38->f4);
                    rsi41 = reinterpret_cast<struct s3*>(&rsi39->f4);
                    rdi40->f0 = rsi41->f0;
                    rdi42 = reinterpret_cast<struct s14*>(&rdi40->f4);
                    rsi43 = reinterpret_cast<struct s5*>(&rsi41->f4);
                    rdi42->f0 = rsi43->f0;
                    rdi44 = reinterpret_cast<struct s15*>(&rdi42->f4);
                    rsi45 = reinterpret_cast<struct s7*>(&rsi43->f4);
                    rdi44->f0 = rsi45->f0;
                    rdi29 = reinterpret_cast<struct s8*>(&rdi44->f4);
                    rsi17 = reinterpret_cast<struct s0*>(&rsi45->f4);
                    __asm__("movq xmm0, [r14+r10*8+0x20]");
                    __asm__("movq [rdi+r10*8+0x20], xmm0");
                    r10_31 = r10_31 + 5;
                } while (r10_31 != 0xa0);
            }
            rsi17 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi17) + 1);
        } while (rsi17 != 0x8c);
        ++rax13;
    } while (rax13 != 0x96);
    if (ebp46 >= 43 && **r12_47 == fputc) {
        rax48 = g72c;
        r12_49 = *rax48;
        rcx50 = r12_49;
        fun_748(0x736, 22, 1, rcx50);
        *reinterpret_cast<int32_t*>(&r13_51) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_51) + 4) = reinterpret_cast<int32_t>(fputc);
        v52 = r12_49;
        fun_768(r12_49, 0x74f, 0x756, rcx50);
        do {
            v53 = r13_51;
            v54 = r13_51 * 0x5780;
            *reinterpret_cast<int32_t*>(&r13_55) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_55) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rbp56 = r13_55 * 4 + r13_55;
                v57 = rbp56;
                rbp58 = (rbp56 << 5) + v54;
                *reinterpret_cast<int32_t*>(&r12_59) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_59) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_59 + rbp58) * 0xcccccccd) <= 0xccccccc) {
                        fun_7cf(10, v52, 0x756, rcx50);
                    }
                    rcx50 = reinterpret_cast<int32_t*>((v57 << 8) + reinterpret_cast<int64_t>(rbx3) + v53 * 0x2bc00);
                    __asm__("movq xmm0, [rcx+r12*8]");
                    fun_800(v52, 0x7f9, 0x756);
                    ++r12_59;
                } while (r12_59 != 0xa0);
                ++r13_55;
            } while (r13_55 != 0x8c);
            r13_51 = v53 + 1;
        } while (r13_51 != 0x96);
        fun_84e(v52, 0x838, 0x83f);
        *reinterpret_cast<int32_t*>(&rsi17) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx16) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx15 = v52;
        fun_867(0x855, 22, 1, rcx15);
    }
    fun_704(rbx3, rsi17, rdx16, rcx15);
    fun_70c(r14_6, rsi17, rdx16, rcx15);
    fun_714(r15_8, rsi17, rdx16, rcx15);
    goto v60;
}

void fun_768(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;
    int64_t r13_6;
    int64_t v7;
    int64_t r13_8;
    int64_t rbp9;
    int64_t v10;
    int64_t rbp11;
    int64_t r12_12;
    int32_t* v13;
    int32_t* rbx14;
    int32_t* v15;
    int32_t* v16;
    int32_t* rbx17;
    int64_t* r14_18;
    int64_t r15_19;
    int64_t v20;

    do {
        v5 = r13_6;
        v7 = r13_6 * 0x5780;
        *reinterpret_cast<int32_t*>(&r13_8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_8) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rbp9 = r13_8 * 4 + r13_8;
            v10 = rbp9;
            rbp11 = (rbp9 << 5) + v7;
            *reinterpret_cast<int32_t*>(&r12_12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_12 + rbp11) * 0xcccccccd) <= 0xccccccc) {
                    fun_7cf(10, v13, rdx, rcx);
                }
                rcx = reinterpret_cast<int32_t*>((v10 << 8) + reinterpret_cast<int64_t>(rbx14) + v5 * 0x2bc00);
                __asm__("movq xmm0, [rcx+r12*8]");
                fun_800(v15, 0x7f9, rdx);
                ++r12_12;
            } while (r12_12 != 0xa0);
            ++r13_8;
        } while (r13_8 != 0x8c);
        r13_6 = v5 + 1;
    } while (r13_6 != 0x96);
    fun_84e(v16, 0x838, 0x83f);
    fun_867(0x855, 22, 1, v16);
    fun_704(rbx17, 22, 1, v16);
    fun_70c(r14_18, 22, 1, v16);
    fun_714(r15_19, 22, 1, v16);
    goto v20;
}

void fun_714(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

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

struct s25 {
    int32_t f0;
    int32_t f4;
};

struct s26 {
    int32_t f0;
    int32_t f4;
};

struct s27 {
    int32_t f0;
    int32_t f4;
};

int64_t* fun_2e4(int64_t rdi, int64_t rsi) {
    int64_t* r14_3;
    int64_t* rax4;
    int64_t rax5;
    int64_t r15_6;
    int64_t rcx7;
    int64_t rax8;
    int64_t rdx9;
    int64_t rsi10;
    int64_t rax11;
    int64_t rdx12;
    int32_t* rcx13;
    int32_t* rdx14;
    int32_t* rbx15;
    struct s0* rsi16;
    void* r9_17;
    int32_t* r8_18;
    int64_t r10_19;
    int64_t r11_20;
    struct s16* rdi21;
    int32_t* rbx22;
    struct s17* rdi23;
    struct s3* rsi24;
    struct s18* rdi25;
    struct s5* rsi26;
    struct s19* rdi27;
    struct s7* rsi28;
    struct s20* rdi29;
    int64_t r9_30;
    int64_t r10_31;
    struct s21* rdi32;
    struct s3* rsi33;
    struct s22* rdi34;
    struct s5* rsi35;
    struct s23* rdi36;
    struct s7* rsi37;
    struct s24* rdi38;
    struct s0* rsi39;
    struct s25* rdi40;
    struct s3* rsi41;
    struct s26* rdi42;
    struct s5* rsi43;
    struct s27* rdi44;
    struct s7* rsi45;
    int32_t ebp46;
    signed char** r12_47;
    int32_t** rax48;
    int32_t* r12_49;
    int32_t* rcx50;
    int64_t r13_51;
    int32_t* v52;
    int64_t v53;
    int64_t v54;
    int64_t r13_55;
    int64_t rbp56;
    int64_t v57;
    int64_t rbp58;
    int64_t r12_59;
    int32_t* rbx60;
    int32_t* rbx61;
    int64_t v62;

    r14_3 = rax4;
    rax5 = fun_2f6(0x6400, 8);
    r15_6 = rax5;
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("movd xmm6, rsi");
            __asm__("pshufd xmm6, xmm6, 0x44");
            *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm7, xmm3");
            do {
                __asm__("movdqa xmm10, xmm7");
                __asm__("paddq xmm10, xmm6");
                __asm__("pshufd xmm8, xmm10, 0xe8");
                __asm__("movdqa xmm9, xmm10");
                __asm__("pmuludq xmm9, xmm0");
                __asm__("pshufd xmm11, xmm10, 0xee");
                __asm__("pmuludq xmm11, xmm0");
                __asm__("pshufd xmm9, xmm9, 0xed");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("paddq xmm10, xmm2");
                __asm__("pshufd xmm12, xmm10, 0xe8");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("pshufd xmm11, xmm10, 0xee");
                __asm__("pmuludq xmm10, xmm0");
                __asm__("pshufd xmm10, xmm10, 0xed");
                __asm__("psrld xmm9, 0x7");
                __asm__("pmuludq xmm11, xmm0");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("punpckldq xmm10, xmm11");
                __asm__("pshufd xmm11, xmm9, 0xf5");
                __asm__("pmuludq xmm9, xmm1");
                __asm__("pmuludq xmm11, xmm1");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("psubd xmm8, xmm9");
                __asm__("psrld xmm10, 0x7");
                __asm__("pshufd xmm9, xmm10, 0xf5");
                __asm__("cvtdq2pd xmm8, xmm8");
                __asm__("pmuludq xmm10, xmm1");
                __asm__("pmuludq xmm9, xmm1");
                __asm__("punpckldq xmm10, xmm9");
                __asm__("divpd xmm8, xmm4");
                __asm__("psubd xmm12, xmm10");
                __asm__("cvtdq2pd xmm9, xmm12");
                __asm__("divpd xmm9, xmm4");
                __asm__("movupd [r8+rsi*8], xmm8");
                __asm__("movupd [rdi+r8], xmm9");
                rsi10 = rsi10 + 4;
                __asm__("paddq xmm7, xmm5");
            } while (rsi10 != 0xa0);
            ++rdx9;
        } while (rdx9 != 0x8c);
        ++rax8;
    } while (rax8 != 0x96);
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, rcx");
        __asm__("pshufd xmm5, xmm5, 0x44");
        *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm6, xmm3");
        do {
            __asm__("movdqa xmm7, xmm6");
            __asm__("psrlq xmm7, 0x20");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("movdqa xmm8, xmm5");
            __asm__("psrlq xmm8, 0x20");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("paddq xmm8, xmm7");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("psllq xmm8, 0x20");
            __asm__("paddq xmm7, xmm8");
            __asm__("pshufd xmm8, xmm7, 0xe8");
            __asm__("pshufd xmm9, xmm7, 0xee");
            __asm__("pmuludq xmm7, xmm0");
            __asm__("pshufd xmm7, xmm7, 0xed");
            __asm__("pmuludq xmm9, xmm0");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("psrld xmm7, 0x7");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pmuludq xmm7, xmm1");
            __asm__("pmuludq xmm9, xmm1");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("psubd xmm8, xmm7");
            __asm__("cvtdq2pd xmm7, xmm8");
            __asm__("divpd xmm7, xmm4");
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx12 = rdx12 + 2;
            __asm__("paddq xmm6, xmm2");
        } while (rdx12 != 0xa0);
        ++rcx7;
    } while (rcx7 != 0xa0);
    do {
        rcx13 = reinterpret_cast<int32_t*>(rax11 * 0x2bc00);
        rdx14 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx13) + reinterpret_cast<int64_t>(rbx15));
        *reinterpret_cast<int32_t*>(&rsi16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi16) + reinterpret_cast<int64_t>(rsi16) * 4 << 8);
            r8_18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx14) + reinterpret_cast<int64_t>(r9_17));
            *reinterpret_cast<int32_t*>(&r10_19) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_19) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r14_3[r10_19] = reinterpret_cast<int64_t>(fputc);
                __asm__("pxor xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r11_20) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_20) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi21 = reinterpret_cast<struct s16*>(reinterpret_cast<int64_t>(rbx22) + reinterpret_cast<int64_t>(r9_17) + reinterpret_cast<int64_t>(rcx13));
                    rdi21->f0 = rsi16->f0;
                    rdi23 = reinterpret_cast<struct s17*>(&rdi21->f4);
                    rsi24 = reinterpret_cast<struct s3*>(&rsi16->f4);
                    __asm__("mulsd xmm1, [r13+r10*8+0x0]");
                    __asm__("addsd xmm1, xmm0");
                    rdi23->f0 = rsi24->f0;
                    rdi25 = reinterpret_cast<struct s18*>(&rdi23->f4);
                    rsi26 = reinterpret_cast<struct s5*>(&rsi24->f4);
                    rdi25->f0 = rsi26->f0;
                    rdi27 = reinterpret_cast<struct s19*>(&rdi25->f4);
                    rsi28 = reinterpret_cast<struct s7*>(&rsi26->f4);
                    __asm__("mulsd xmm0, [r13+r10*8+0x0]");
                    __asm__("addsd xmm0, xmm1");
                    rdi27->f0 = rsi28->f0;
                    rdi29 = reinterpret_cast<struct s20*>(&rdi27->f4);
                    rsi16 = reinterpret_cast<struct s0*>(&rsi28->f4);
                    r11_20 = r11_20 + 2;
                } while (r11_20 != 0xa0);
                ++r10_19;
            } while (r10_19 != 0xa0);
            *reinterpret_cast<int32_t*>(&r9_30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_30) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&r10_31) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_31) + 4) = reinterpret_cast<int32_t>(fputc);
            if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r8_18) - reinterpret_cast<int64_t>(r14_3)) >= 32) {
                do {
                    __asm__("movups xmm0, [r14+r9*8]");
                    __asm__("movups xmm1, [r14+r9*8+0x10]");
                    __asm__("movups [rdi+r9*8], xmm0");
                    __asm__("movups [rdi+r9*8+0x10], xmm1");
                    __asm__("movdqu xmm0, [r14+r8]");
                    __asm__("movupd xmm1, [r14+r8+0x10]");
                    __asm__("movdqu [r8+rdi], xmm0");
                    __asm__("movupd [r8+rdi+0x10], xmm1");
                    r9_30 = r9_30 + 8;
                } while (r9_30 != 0xa0);
            } else {
                do {
                    rdi29->f0 = rsi16->f0;
                    rdi32 = reinterpret_cast<struct s21*>(&rdi29->f4);
                    rsi33 = reinterpret_cast<struct s3*>(&rsi16->f4);
                    rdi32->f0 = rsi33->f0;
                    rdi34 = reinterpret_cast<struct s22*>(&rdi32->f4);
                    rsi35 = reinterpret_cast<struct s5*>(&rsi33->f4);
                    rdi34->f0 = rsi35->f0;
                    rdi36 = reinterpret_cast<struct s23*>(&rdi34->f4);
                    rsi37 = reinterpret_cast<struct s7*>(&rsi35->f4);
                    rdi36->f0 = rsi37->f0;
                    rdi38 = reinterpret_cast<struct s24*>(&rdi36->f4);
                    rsi39 = reinterpret_cast<struct s0*>(&rsi37->f4);
                    rdi38->f0 = rsi39->f0;
                    rdi40 = reinterpret_cast<struct s25*>(&rdi38->f4);
                    rsi41 = reinterpret_cast<struct s3*>(&rsi39->f4);
                    rdi40->f0 = rsi41->f0;
                    rdi42 = reinterpret_cast<struct s26*>(&rdi40->f4);
                    rsi43 = reinterpret_cast<struct s5*>(&rsi41->f4);
                    rdi42->f0 = rsi43->f0;
                    rdi44 = reinterpret_cast<struct s27*>(&rdi42->f4);
                    rsi45 = reinterpret_cast<struct s7*>(&rsi43->f4);
                    rdi44->f0 = rsi45->f0;
                    rdi29 = reinterpret_cast<struct s20*>(&rdi44->f4);
                    rsi16 = reinterpret_cast<struct s0*>(&rsi45->f4);
                    __asm__("movq xmm0, [r14+r10*8+0x20]");
                    __asm__("movq [rdi+r10*8+0x20], xmm0");
                    r10_31 = r10_31 + 5;
                } while (r10_31 != 0xa0);
            }
            rsi16 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi16) + 1);
        } while (rsi16 != 0x8c);
        ++rax11;
    } while (rax11 != 0x96);
    if (ebp46 >= 43 && **r12_47 == fputc) {
        rax48 = g72c;
        r12_49 = *rax48;
        rcx50 = r12_49;
        fun_748(0x736, 22, 1, rcx50);
        *reinterpret_cast<int32_t*>(&r13_51) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_51) + 4) = reinterpret_cast<int32_t>(fputc);
        v52 = r12_49;
        fun_768(r12_49, 0x74f, 0x756, rcx50);
        do {
            v53 = r13_51;
            v54 = r13_51 * 0x5780;
            *reinterpret_cast<int32_t*>(&r13_55) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_55) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rbp56 = r13_55 * 4 + r13_55;
                v57 = rbp56;
                rbp58 = (rbp56 << 5) + v54;
                *reinterpret_cast<int32_t*>(&r12_59) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_59) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_59 + rbp58) * 0xcccccccd) <= 0xccccccc) {
                        fun_7cf(10, v52, 0x756, rcx50);
                    }
                    rcx50 = reinterpret_cast<int32_t*>((v57 << 8) + reinterpret_cast<int64_t>(rbx60) + v53 * 0x2bc00);
                    __asm__("movq xmm0, [rcx+r12*8]");
                    fun_800(v52, 0x7f9, 0x756);
                    ++r12_59;
                } while (r12_59 != 0xa0);
                ++r13_55;
            } while (r13_55 != 0x8c);
            r13_51 = v53 + 1;
        } while (r13_51 != 0x96);
        fun_84e(v52, 0x838, 0x83f);
        *reinterpret_cast<int32_t*>(&rsi16) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx14) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx13 = v52;
        fun_867(0x855, 22, 1, rcx13);
    }
    fun_704(rbx61, rsi16, rdx14, rcx13);
    fun_70c(r14_3, rsi16, rdx14, rcx13);
    fun_714(r15_6, rsi16, rdx14, rcx13);
    goto v62;
}

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

int64_t fun_2f6(int64_t rdi, int64_t rsi) {
    int64_t r15_3;
    int64_t rax4;
    int64_t rcx5;
    int64_t rax6;
    int64_t rdx7;
    int64_t rsi8;
    int64_t rax9;
    int64_t rdx10;
    int32_t* rcx11;
    int32_t* rdx12;
    int32_t* rbx13;
    struct s0* rsi14;
    void* r9_15;
    int32_t* r8_16;
    int64_t r10_17;
    int64_t* r14_18;
    int64_t r11_19;
    struct s28* rdi20;
    int32_t* rbx21;
    struct s29* rdi22;
    struct s3* rsi23;
    struct s30* rdi24;
    struct s5* rsi25;
    struct s31* rdi26;
    struct s7* rsi27;
    struct s32* rdi28;
    int64_t r9_29;
    int64_t r10_30;
    int64_t r14_31;
    struct s33* rdi32;
    struct s3* rsi33;
    struct s34* rdi34;
    struct s5* rsi35;
    struct s35* rdi36;
    struct s7* rsi37;
    struct s36* rdi38;
    struct s0* rsi39;
    struct s37* rdi40;
    struct s3* rsi41;
    struct s38* rdi42;
    struct s5* rsi43;
    struct s39* rdi44;
    struct s7* rsi45;
    int32_t ebp46;
    signed char** r12_47;
    int32_t** rax48;
    int32_t* r12_49;
    int32_t* rcx50;
    int64_t r13_51;
    int32_t* v52;
    int64_t v53;
    int64_t v54;
    int64_t r13_55;
    int64_t rbp56;
    int64_t v57;
    int64_t rbp58;
    int64_t r12_59;
    int32_t* rbx60;
    int32_t* rbx61;
    int64_t* r14_62;
    int64_t v63;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&rcx5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("movd xmm6, rsi");
            __asm__("pshufd xmm6, xmm6, 0x44");
            *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm7, xmm3");
            do {
                __asm__("movdqa xmm10, xmm7");
                __asm__("paddq xmm10, xmm6");
                __asm__("pshufd xmm8, xmm10, 0xe8");
                __asm__("movdqa xmm9, xmm10");
                __asm__("pmuludq xmm9, xmm0");
                __asm__("pshufd xmm11, xmm10, 0xee");
                __asm__("pmuludq xmm11, xmm0");
                __asm__("pshufd xmm9, xmm9, 0xed");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("paddq xmm10, xmm2");
                __asm__("pshufd xmm12, xmm10, 0xe8");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("pshufd xmm11, xmm10, 0xee");
                __asm__("pmuludq xmm10, xmm0");
                __asm__("pshufd xmm10, xmm10, 0xed");
                __asm__("psrld xmm9, 0x7");
                __asm__("pmuludq xmm11, xmm0");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("punpckldq xmm10, xmm11");
                __asm__("pshufd xmm11, xmm9, 0xf5");
                __asm__("pmuludq xmm9, xmm1");
                __asm__("pmuludq xmm11, xmm1");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("psubd xmm8, xmm9");
                __asm__("psrld xmm10, 0x7");
                __asm__("pshufd xmm9, xmm10, 0xf5");
                __asm__("cvtdq2pd xmm8, xmm8");
                __asm__("pmuludq xmm10, xmm1");
                __asm__("pmuludq xmm9, xmm1");
                __asm__("punpckldq xmm10, xmm9");
                __asm__("divpd xmm8, xmm4");
                __asm__("psubd xmm12, xmm10");
                __asm__("cvtdq2pd xmm9, xmm12");
                __asm__("divpd xmm9, xmm4");
                __asm__("movupd [r8+rsi*8], xmm8");
                __asm__("movupd [rdi+r8], xmm9");
                rsi8 = rsi8 + 4;
                __asm__("paddq xmm7, xmm5");
            } while (rsi8 != 0xa0);
            ++rdx7;
        } while (rdx7 != 0x8c);
        ++rax6;
    } while (rax6 != 0x96);
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, rcx");
        __asm__("pshufd xmm5, xmm5, 0x44");
        *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm6, xmm3");
        do {
            __asm__("movdqa xmm7, xmm6");
            __asm__("psrlq xmm7, 0x20");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("movdqa xmm8, xmm5");
            __asm__("psrlq xmm8, 0x20");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("paddq xmm8, xmm7");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("psllq xmm8, 0x20");
            __asm__("paddq xmm7, xmm8");
            __asm__("pshufd xmm8, xmm7, 0xe8");
            __asm__("pshufd xmm9, xmm7, 0xee");
            __asm__("pmuludq xmm7, xmm0");
            __asm__("pshufd xmm7, xmm7, 0xed");
            __asm__("pmuludq xmm9, xmm0");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("psrld xmm7, 0x7");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pmuludq xmm7, xmm1");
            __asm__("pmuludq xmm9, xmm1");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("psubd xmm8, xmm7");
            __asm__("cvtdq2pd xmm7, xmm8");
            __asm__("divpd xmm7, xmm4");
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx10 = rdx10 + 2;
            __asm__("paddq xmm6, xmm2");
        } while (rdx10 != 0xa0);
        ++rcx5;
    } while (rcx5 != 0xa0);
    do {
        rcx11 = reinterpret_cast<int32_t*>(rax9 * 0x2bc00);
        rdx12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx11) + reinterpret_cast<int64_t>(rbx13));
        *reinterpret_cast<int32_t*>(&rsi14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi14) + reinterpret_cast<int64_t>(rsi14) * 4 << 8);
            r8_16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx12) + reinterpret_cast<int64_t>(r9_15));
            *reinterpret_cast<int32_t*>(&r10_17) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_17) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r14_18[r10_17] = reinterpret_cast<int64_t>(fputc);
                __asm__("pxor xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r11_19) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_19) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi20 = reinterpret_cast<struct s28*>(reinterpret_cast<int64_t>(rbx21) + reinterpret_cast<int64_t>(r9_15) + reinterpret_cast<int64_t>(rcx11));
                    rdi20->f0 = rsi14->f0;
                    rdi22 = reinterpret_cast<struct s29*>(&rdi20->f4);
                    rsi23 = reinterpret_cast<struct s3*>(&rsi14->f4);
                    __asm__("mulsd xmm1, [r13+r10*8+0x0]");
                    __asm__("addsd xmm1, xmm0");
                    rdi22->f0 = rsi23->f0;
                    rdi24 = reinterpret_cast<struct s30*>(&rdi22->f4);
                    rsi25 = reinterpret_cast<struct s5*>(&rsi23->f4);
                    rdi24->f0 = rsi25->f0;
                    rdi26 = reinterpret_cast<struct s31*>(&rdi24->f4);
                    rsi27 = reinterpret_cast<struct s7*>(&rsi25->f4);
                    __asm__("mulsd xmm0, [r13+r10*8+0x0]");
                    __asm__("addsd xmm0, xmm1");
                    rdi26->f0 = rsi27->f0;
                    rdi28 = reinterpret_cast<struct s32*>(&rdi26->f4);
                    rsi14 = reinterpret_cast<struct s0*>(&rsi27->f4);
                    r11_19 = r11_19 + 2;
                } while (r11_19 != 0xa0);
                ++r10_17;
            } while (r10_17 != 0xa0);
            *reinterpret_cast<int32_t*>(&r9_29) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_29) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&r10_30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_30) + 4) = reinterpret_cast<int32_t>(fputc);
            if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r8_16) - r14_31) >= 32) {
                do {
                    __asm__("movups xmm0, [r14+r9*8]");
                    __asm__("movups xmm1, [r14+r9*8+0x10]");
                    __asm__("movups [rdi+r9*8], xmm0");
                    __asm__("movups [rdi+r9*8+0x10], xmm1");
                    __asm__("movdqu xmm0, [r14+r8]");
                    __asm__("movupd xmm1, [r14+r8+0x10]");
                    __asm__("movdqu [r8+rdi], xmm0");
                    __asm__("movupd [r8+rdi+0x10], xmm1");
                    r9_29 = r9_29 + 8;
                } while (r9_29 != 0xa0);
            } else {
                do {
                    rdi28->f0 = rsi14->f0;
                    rdi32 = reinterpret_cast<struct s33*>(&rdi28->f4);
                    rsi33 = reinterpret_cast<struct s3*>(&rsi14->f4);
                    rdi32->f0 = rsi33->f0;
                    rdi34 = reinterpret_cast<struct s34*>(&rdi32->f4);
                    rsi35 = reinterpret_cast<struct s5*>(&rsi33->f4);
                    rdi34->f0 = rsi35->f0;
                    rdi36 = reinterpret_cast<struct s35*>(&rdi34->f4);
                    rsi37 = reinterpret_cast<struct s7*>(&rsi35->f4);
                    rdi36->f0 = rsi37->f0;
                    rdi38 = reinterpret_cast<struct s36*>(&rdi36->f4);
                    rsi39 = reinterpret_cast<struct s0*>(&rsi37->f4);
                    rdi38->f0 = rsi39->f0;
                    rdi40 = reinterpret_cast<struct s37*>(&rdi38->f4);
                    rsi41 = reinterpret_cast<struct s3*>(&rsi39->f4);
                    rdi40->f0 = rsi41->f0;
                    rdi42 = reinterpret_cast<struct s38*>(&rdi40->f4);
                    rsi43 = reinterpret_cast<struct s5*>(&rsi41->f4);
                    rdi42->f0 = rsi43->f0;
                    rdi44 = reinterpret_cast<struct s39*>(&rdi42->f4);
                    rsi45 = reinterpret_cast<struct s7*>(&rsi43->f4);
                    rdi44->f0 = rsi45->f0;
                    rdi28 = reinterpret_cast<struct s32*>(&rdi44->f4);
                    rsi14 = reinterpret_cast<struct s0*>(&rsi45->f4);
                    __asm__("movq xmm0, [r14+r10*8+0x20]");
                    __asm__("movq [rdi+r10*8+0x20], xmm0");
                    r10_30 = r10_30 + 5;
                } while (r10_30 != 0xa0);
            }
            rsi14 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi14) + 1);
        } while (rsi14 != 0x8c);
        ++rax9;
    } while (rax9 != 0x96);
    if (ebp46 >= 43 && **r12_47 == fputc) {
        rax48 = g72c;
        r12_49 = *rax48;
        rcx50 = r12_49;
        fun_748(0x736, 22, 1, rcx50);
        *reinterpret_cast<int32_t*>(&r13_51) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_51) + 4) = reinterpret_cast<int32_t>(fputc);
        v52 = r12_49;
        fun_768(r12_49, 0x74f, 0x756, rcx50);
        do {
            v53 = r13_51;
            v54 = r13_51 * 0x5780;
            *reinterpret_cast<int32_t*>(&r13_55) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_55) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rbp56 = r13_55 * 4 + r13_55;
                v57 = rbp56;
                rbp58 = (rbp56 << 5) + v54;
                *reinterpret_cast<int32_t*>(&r12_59) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_59) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_59 + rbp58) * 0xcccccccd) <= 0xccccccc) {
                        fun_7cf(10, v52, 0x756, rcx50);
                    }
                    rcx50 = reinterpret_cast<int32_t*>((v57 << 8) + reinterpret_cast<int64_t>(rbx60) + v53 * 0x2bc00);
                    __asm__("movq xmm0, [rcx+r12*8]");
                    fun_800(v52, 0x7f9, 0x756);
                    ++r12_59;
                } while (r12_59 != 0xa0);
                ++r13_55;
            } while (r13_55 != 0x8c);
            r13_51 = v53 + 1;
        } while (r13_51 != 0x96);
        fun_84e(v52, 0x838, 0x83f);
        *reinterpret_cast<int32_t*>(&rsi14) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx11 = v52;
        fun_867(0x855, 22, 1, rcx11);
    }
    fun_704(rbx61, rsi14, rdx12, rcx11);
    fun_70c(r14_62, rsi14, rdx12, rcx11);
    fun_714(r15_3, rsi14, rdx12, rcx11);
    goto v63;
}

void fputc(int32_t edi, int32_t esi) {
}

void* fun_8e0c1f5();

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

struct s43 {
    int32_t f0;
    int32_t f4;
};

struct s44 {
    int32_t f0;
    int32_t f4;
};

struct s45 {
    int32_t f0;
    int32_t f4;
};

struct s46 {
    int32_t f0;
    int32_t f4;
};

struct s47 {
    int32_t f0;
    int32_t f4;
};

struct s48 {
    int32_t f0;
    int32_t f4;
};

struct s49 {
    int32_t f0;
    int32_t f4;
};

struct s50 {
    int32_t f0;
    int32_t f4;
};

struct s51 {
    int32_t f0;
    int32_t f1;
    int32_t f4;
};

struct s52 {
    int32_t f0;
    int32_t f4;
};

struct s53 {
    int32_t f0;
    int32_t f4;
};

struct s54 {
    int32_t f0;
    int32_t f4;
};

struct s55 {
    int32_t f0;
    int32_t f4;
};

struct s56 {
    int32_t f0;
    int32_t f4;
};

struct s57 {
    int32_t f0;
    int32_t f4;
};

struct s58 {
    int32_t f0;
    int32_t f4;
};

struct s59 {
    int32_t f0;
    int32_t f4;
};

struct s60 {
    int32_t f0;
    int32_t f4;
};

void fun_a8() {
    void* rax1;
    int64_t v2;
    int64_t v3;
    struct s40* rsi4;
    int64_t* r9_5;
    int64_t r13_6;
    struct s41* rdi7;
    int32_t edx8;
    struct s42* rdi9;
    struct s43* rsi10;
    struct s44* rdi11;
    struct s40* rsi12;
    int32_t* rdi13;
    struct s43* rsi14;
    struct s41* r11_15;
    unsigned char r10b16;
    int64_t rcx17;
    int64_t r12_18;
    struct s43* rsi19;
    int32_t* r8_20;
    struct s40* r10_21;
    int64_t r14_22;
    int64_t v23;
    int32_t edx24;
    int32_t edx25;
    uint32_t edx26;
    struct s45* rsi27;
    int64_t rdi28;
    int64_t r9_29;
    struct s46* rdi30;
    void* r10_31;
    int64_t r15_32;
    struct s47* rdi33;
    struct s48* rsi34;
    int64_t rbx35;
    struct s45* rbx36;
    int64_t rbx37;
    int64_t r10_38;
    struct s48* rsi39;
    struct s49* rdi40;
    void* rcx41;
    void* r12_42;
    struct s50* rdi43;
    struct s51* rsi44;
    struct s52* rdi45;
    struct s53* rsi46;
    struct s54* rdi47;
    struct s55* rsi48;
    struct s56* rdi49;
    struct s57* rsi50;
    struct s58* rdi51;
    struct s59* rsi52;
    struct s60* rdi53;
    int32_t* rsi54;
    struct s45* r10_55;

    rax1 = fun_8e0c1f5();
    v2 = v3 + reinterpret_cast<int64_t>(rax1);
    *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        r9_5[static_cast<int64_t>(rsi4)] = reinterpret_cast<int64_t>(fputc);
        __asm__("xorpd xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
        if (edx8 != 1) {
            do {
                rdi7->f0 = rsi4->f0;
                rdi9 = reinterpret_cast<struct s42*>(&rdi7->f4);
                rsi10 = reinterpret_cast<struct s43*>(&rsi4->f4);
                __asm__("mulsd xmm1, [r14+rsi*8]");
                __asm__("addsd xmm1, xmm0");
                rdi9->f0 = rsi10->f0;
                rdi11 = reinterpret_cast<struct s44*>(&rdi9->f4);
                rsi12 = reinterpret_cast<struct s40*>(&rsi10->f4);
                rdi11->f0 = rsi12->f0;
                rdi13 = &rdi11->f4;
                rsi14 = reinterpret_cast<struct s43*>(&rsi12->f4);
                __asm__("mulsd xmm0, [r14+rsi*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi13 = rsi14->f0;
                rsi4 = reinterpret_cast<struct s40*>(&rsi14->f4);
                r13_6 = r13_6 + 2;
                rdi7 = reinterpret_cast<struct s41*>(reinterpret_cast<int64_t>(rdi13 + 1) + 2);
            } while (rdi7 != r11_15);
        }
        if ((r10b16 & 1) != fputc) {
            *reinterpret_cast<int32_t*>(rcx17 + reinterpret_cast<int64_t>(rax1) + r12_18) = rsi4->f0;
            rsi19 = reinterpret_cast<struct s43*>(&rsi4->f4);
            __asm__("mulsd xmm1, [rdi+rsi*8]");
            __asm__("addsd xmm1, xmm0");
            *reinterpret_cast<int32_t*>((r13_6 * 4 + r13_6 << 8) + reinterpret_cast<int64_t>(r8_20)) = rsi19->f0;
            rsi4 = reinterpret_cast<struct s40*>(&rsi19->f4);
        }
        rsi4 = reinterpret_cast<struct s40*>(reinterpret_cast<int64_t>(rsi4) + 1);
    } while (rsi4 != r10_21);
    r14_22 = v23;
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edx24 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edx25 == fputc)) {
        addr_90_27:
    } else {
        if (edx26 < 6) {
            *reinterpret_cast<int32_t*>(&rsi27) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_208_30;
        }
        *reinterpret_cast<int32_t*>(&rdi28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rsi27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(v2 - r9_29) < 32) {
            addr_208_30:
            rdi30 = reinterpret_cast<struct s46*>(~reinterpret_cast<int64_t>(rsi27) + reinterpret_cast<int64_t>(r10_31));
            if (r14_22 != fputc) {
                *reinterpret_cast<int32_t*>(&r15_32) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_32) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi30->f0 = rsi27->f0;
                    rdi33 = reinterpret_cast<struct s47*>(&rdi30->f4);
                    rsi34 = reinterpret_cast<struct s48*>(&rsi27->f4);
                    rdi33->f0 = rsi34->f0;
                    rdi30 = reinterpret_cast<struct s46*>(&rdi33->f4);
                    rsi27 = reinterpret_cast<struct s45*>(reinterpret_cast<int64_t>(&rsi34->f4) + 1);
                    ++r15_32;
                } while (r15_32 != r14_22);
            }
        } else {
            do {
                __asm__("movupd xmm0, [r9+rdi*8]");
                __asm__("movupd xmm1, [r9+rdi*8+0x10]");
                __asm__("movupd [rsi+rdi*8], xmm0");
                __asm__("movupd [rsi+rdi*8+0x10], xmm1");
                rdi28 = rdi28 + 4;
            } while (rdi28 != rbx35);
            rsi27 = rbx36;
            if (rbx37 == r10_38) 
                goto addr_90_27; else 
                goto addr_204_43;
        }
    }
    if (reinterpret_cast<uint64_t>(rdi30) >= 3) {
        do {
            rdi30->f0 = rsi27->f0;
            rsi39 = reinterpret_cast<struct s48*>(&rsi27->f4);
            rdi40 = reinterpret_cast<struct s49*>(reinterpret_cast<int64_t>(rcx41) + reinterpret_cast<int64_t>(rax1) + reinterpret_cast<int64_t>(r12_42));
            rdi40->f0 = rsi39->f0;
            rdi43 = reinterpret_cast<struct s50*>(&rdi40->f4);
            rsi44 = reinterpret_cast<struct s51*>(&rsi39->f4);
            rdi43->f0 = rsi44->f0;
            rdi45 = reinterpret_cast<struct s52*>(&rdi43->f4);
            rsi46 = reinterpret_cast<struct s53*>(&rsi44->f1);
            rdi45->f0 = rsi46->f0;
            rdi47 = reinterpret_cast<struct s54*>(&rdi45->f4);
            rsi48 = reinterpret_cast<struct s55*>(&rsi46->f4);
            rdi47->f0 = rsi48->f0;
            rdi49 = reinterpret_cast<struct s56*>(&rdi47->f4);
            rsi50 = reinterpret_cast<struct s57*>(&rsi48->f4);
            rdi49->f0 = rsi50->f0;
            rdi51 = reinterpret_cast<struct s58*>(&rdi49->f4);
            rsi52 = reinterpret_cast<struct s59*>(&rsi50->f4);
            rdi51->f0 = rsi52->f0;
            rdi53 = reinterpret_cast<struct s60*>(&rdi51->f4);
            rsi54 = &rsi52->f4;
            rdi53->f0 = *rsi54;
            rdi30 = reinterpret_cast<struct s46*>(&rdi53->f4);
            rsi27 = reinterpret_cast<struct s45*>(rsi54 + 1 + 1);
        } while (rsi27 != r10_55);
        goto addr_90_27;
    }
    addr_204_43:
    goto addr_208_30;
}

void fun_297() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_2d2(0x334500, 8);
}

