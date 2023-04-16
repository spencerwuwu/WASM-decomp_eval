
int64_t* fun_e4(int64_t rdi, int64_t rsi);

int64_t fun_f6(int64_t rdi, int64_t rsi);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

int64_t* fun_108(struct s0* rdi, struct s1* rsi);

void fputc(int32_t edi);

int32_t g514;

/* .LCPI1_7 */
int32_t LCPI1_7 = 0x31f88900;

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

signed char*** g433 = reinterpret_cast<signed char***>(0x48240c8948088b48);

void fun_450(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_46b();

void fun_4b7();

void fun_489();

void fun_4d5(signed char** rdi, int64_t rsi, int64_t rdx);

void fun_4ee(int64_t rdi, void* rsi, int32_t* rdx, signed char** rcx);

void fun_3fb(int64_t rdi, void* rsi, int32_t* rdx, signed char** rcx);

void fun_403(int32_t* rdi, void* rsi, int32_t* rdx, signed char** rcx);

void fun_40b(int64_t* rdi, void* rsi, int32_t* rdx, signed char** rcx);

void fun_413(int64_t rdi, void* rsi, int32_t* rdx, signed char** rcx);

void fun_41b(int64_t* rdi, void* rsi, int32_t* rdx, signed char** rcx);

void fun_d2() {
    signed char** v1;
    int32_t* r14_2;
    int32_t* rax3;
    int64_t* rax4;
    int64_t* r15_5;
    int64_t rax6;
    int64_t r12_7;
    int64_t* rax8;
    int64_t* r13_9;
    int64_t rax10;
    struct s2* rdi11;
    struct s3* rsi12;
    int64_t rdx13;
    int64_t rsi14;
    int32_t* rbx15;
    int64_t r8_16;
    int64_t r8_17;
    struct s4* rdi18;
    struct s5* rsi19;
    struct s4* rdi20;
    struct s2* rdi21;
    signed char** rcx22;
    int64_t rdx23;
    struct s6* rsi24;
    int32_t* rbx25;
    struct s4* rdi26;
    struct s7* rsi27;
    struct s2* rdi28;
    struct s8* rsi29;
    int32_t* rdx30;
    struct s4* rdi31;
    struct s9* rsi32;
    struct s10* rsi33;
    struct s4* rdi34;
    int32_t* rsi35;
    void* rsi36;
    int32_t ebp37;
    signed char*** rax38;
    signed char** v39;
    signed char** rsi40;
    int64_t rbp41;
    signed char** rdi42;
    int32_t eax43;
    int64_t rbx44;
    int64_t v45;

    v1 = reinterpret_cast<signed char**>(__return_address());
    r14_2 = rax3;
    rax4 = fun_e4(0x514, 8);
    r15_5 = rax4;
    rax6 = fun_f6(0x514, 8);
    r12_7 = rax6;
    rax8 = fun_108(0x514, 8);
    r13_9 = rax8;
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    g514 = LCPI1_7;
    rdi11 = reinterpret_cast<struct s2*>(0x518);
    rsi12 = reinterpret_cast<struct s3*>(12);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm8, xmm8");
        __asm__("cvtsi2sd xmm8, edx");
        __asm__("divsd xmm8, xmm0");
        rdi11->f0 = rsi12->f0;
        rsi14 = rdx13 * 0x28a0;
        rdi11 = reinterpret_cast<struct s2*>(rsi14 + reinterpret_cast<int64_t>(rbx15));
        rsi12 = reinterpret_cast<struct s3*>(rsi14 + reinterpret_cast<int64_t>(r14_2));
        if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rsi12) - reinterpret_cast<int64_t>(rdi11)) >= 16) {
            __asm__("movd xmm8, rdx");
            __asm__("pshufd xmm8, xmm8, 0x44");
            *reinterpret_cast<int32_t*>(&r8_16) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm9, xmm1");
            do {
                __asm__("movdqa xmm10, xmm9");
                __asm__("pmuludq xmm10, xmm8");
                __asm__("pshufd xmm10, xmm10, 0xe8");
                __asm__("movdqa xmm11, xmm10");
                __asm__("psubd xmm11, xmm2");
                __asm__("movdqa xmm12, xmm11");
                __asm__("pmuludq xmm12, xmm3");
                __asm__("pshufd xmm12, xmm12, 0xed");
                __asm__("pshufd xmm13, xmm11, 0x55");
                __asm__("pmuludq xmm13, xmm3");
                __asm__("pshufd xmm13, xmm13, 0xed");
                __asm__("punpckldq xmm12, xmm13");
                __asm__("psrld xmm12, 0xa");
                __asm__("pshufd xmm13, xmm12, 0xf5");
                __asm__("pmuludq xmm12, xmm4");
                __asm__("paddd xmm10, xmm6");
                __asm__("movdqa xmm14, xmm10");
                __asm__("pmuludq xmm14, xmm3");
                __asm__("pmuludq xmm13, xmm4");
                __asm__("pshufd xmm14, xmm14, 0xed");
                __asm__("pshufd xmm15, xmm10, 0x55");
                __asm__("pmuludq xmm15, xmm3");
                __asm__("punpckldq xmm12, xmm13");
                __asm__("pshufd xmm13, xmm15, 0xed");
                __asm__("punpckldq xmm14, xmm13");
                __asm__("psrld xmm14, 0xa");
                __asm__("psubd xmm11, xmm12");
                __asm__("pshufd xmm12, xmm14, 0xf5");
                __asm__("pmuludq xmm14, xmm4");
                __asm__("cvtdq2pd xmm11, xmm11");
                __asm__("pmuludq xmm12, xmm4");
                __asm__("punpckldq xmm14, xmm12");
                __asm__("psubd xmm10, xmm14");
                __asm__("divpd xmm11, xmm5");
                __asm__("cvtdq2pd xmm10, xmm10");
                __asm__("divpd xmm10, xmm5");
                __asm__("movupd [rdi+r8*8], xmm11");
                __asm__("movupd [rsi+r8*8], xmm10");
                r8_16 = r8_16 + 2;
                __asm__("paddq xmm9, xmm7");
            } while (r8_16 != 0x514);
        } else {
            *reinterpret_cast<int32_t*>(&r8_17) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_17) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm8, xmm8");
                __asm__("cvtsi2sd xmm8, r10d");
                __asm__("divsd xmm8, xmm0");
                rdi11->f0 = rsi12->f0;
                rdi18 = reinterpret_cast<struct s4*>(&rdi11->f4);
                rsi19 = reinterpret_cast<struct s5*>(&rsi12->f4);
                __asm__("xorps xmm8, xmm8");
                __asm__("cvtsi2sd xmm8, r9d");
                __asm__("divsd xmm8, xmm0");
                rdi18->f0 = rsi19->f0;
                rdi11 = reinterpret_cast<struct s2*>(&rdi18->f4);
                rsi12 = reinterpret_cast<struct s3*>(&rsi19->f4);
                ++r8_17;
            } while (r8_17 != 0x514);
        }
        ++rdx13;
    } while (rdx13 != 0x514);
    rdi11->f0 = rsi12->f0;
    rdi20 = reinterpret_cast<struct s4*>(&rdi11->f4);
    rdi20->f0 = rsi12->f4;
    rdi21 = reinterpret_cast<struct s2*>(&rdi20->f4);
    do {
        r15_5[rax10] = reinterpret_cast<int64_t>(fputc);
        r13_9[rax10] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx23 = rax10 * 0x28a0;
            rsi24 = reinterpret_cast<struct s6*>(reinterpret_cast<int64_t>(rbx25) + rdx23);
            rdi21->f0 = rsi24->f0;
            rdi26 = reinterpret_cast<struct s4*>(&rdi21->f4);
            rsi27 = reinterpret_cast<struct s7*>(&rsi24->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r15+rax*8]");
            rdi26->f0 = rsi27->f0;
            rdi28 = reinterpret_cast<struct s2*>(&rdi26->f4);
            rsi29 = reinterpret_cast<struct s8*>(&rsi27->f4);
            rdx30 = reinterpret_cast<int32_t*>(rdx23 + reinterpret_cast<int64_t>(r14_2));
            rdi28->f0 = rsi29->f0;
            rdi31 = reinterpret_cast<struct s4*>(&rdi28->f4);
            rsi32 = reinterpret_cast<struct s9*>(&rsi29->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r13+rax*8+0x0]");
            rdi31->f0 = rsi32->f0;
            rdi21 = reinterpret_cast<struct s2*>(&rdi31->f4);
            rsi33 = reinterpret_cast<struct s10*>(&rsi32->f4);
            rcx22 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx22) + 1);
        } while (!reinterpret_cast<int1_t>(rcx22 == 0x514));
        __asm__("mulsd xmm2, xmm0");
        rdi21->f0 = rsi33->f0;
        rdi34 = reinterpret_cast<struct s4*>(&rdi21->f4);
        rsi35 = &rsi33->f4;
        __asm__("mulsd xmm3, xmm1");
        __asm__("addsd xmm3, xmm2");
        rdi34->f0 = *rsi35;
        rdi21 = reinterpret_cast<struct s2*>(&rdi34->f4);
        rsi36 = reinterpret_cast<void*>(rsi35 + 1);
        ++rax10;
    } while (rax10 != 0x514);
    if (ebp37 >= 43 && **v1 == fputc) {
        rax38 = g433;
        v39 = *rax38;
        fun_450(0x441, 22, 1);
        rsi40 = reinterpret_cast<signed char**>(0x457);
        *reinterpret_cast<int32_t*>(&rbp41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp41) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi42 = v39;
        fun_46b();
        do {
            eax43 = *reinterpret_cast<int32_t*>(&rbp41) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax43)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi42) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi40 = v39;
                fun_4b7();
            }
            *rdi42 = *rsi40;
            rdi42 = v39;
            rsi40 = reinterpret_cast<signed char**>(0x482);
            fun_489();
            ++rbp41;
        } while (rbp41 != 0x514);
        fun_4d5(v39, 0x4c0, 0x4c7);
        *reinterpret_cast<int32_t*>(&rsi36) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi36) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx30) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx22 = v39;
        fun_4ee(0x4dc, 22, 1, rcx22);
    }
    fun_3fb(rbx44, rsi36, rdx30, rcx22);
    fun_403(r14_2, rsi36, rdx30, rcx22);
    fun_40b(r15_5, rsi36, rdx30, rcx22);
    fun_413(r12_7, rsi36, rdx30, rcx22);
    fun_41b(r13_9, rsi36, rdx30, rcx22);
    goto v45;
}

void fun_3fb(int64_t rdi, void* rsi, int32_t* rdx, signed char** rcx) {
    int32_t* r14_5;
    int64_t* r15_6;
    int64_t r12_7;
    int64_t* r13_8;
    int64_t v9;

    fun_403(r14_5, rsi, rdx, rcx);
    fun_40b(r15_6, rsi, rdx, rcx);
    fun_413(r12_7, rsi, rdx, rcx);
    fun_41b(r13_8, rsi, rdx, rcx);
    goto v9;
}

void fun_489() {
    int64_t rbp1;
    int32_t eax2;
    signed char** rdi3;
    signed char** rsi4;
    int64_t rbx5;
    int32_t* r14_6;
    int64_t* r15_7;
    int64_t r12_8;
    int64_t* r13_9;
    int64_t v10;

    while (++rbp1, rbp1 != 0x514) {
        eax2 = *reinterpret_cast<int32_t*>(&rbp1) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = reinterpret_cast<signed char**>(__return_address());
            fun_4b7();
        }
        *rdi3 = *rsi4;
        rdi3 = reinterpret_cast<signed char**>(__return_address());
        rsi4 = reinterpret_cast<signed char**>(0x482);
        fun_489();
    }
    fun_4d5(__return_address(), 0x4c0, 0x4c7);
    fun_4ee(0x4dc, 22, 1, __return_address());
    fun_3fb(rbx5, 22, 1, __return_address());
    fun_403(r14_6, 22, 1, __return_address());
    fun_40b(r15_7, 22, 1, __return_address());
    fun_413(r12_8, 22, 1, __return_address());
    fun_41b(r13_9, 22, 1, __return_address());
    goto v10;
}

void fun_4b7() {
    signed char** v1;
    signed char** rdi2;
    signed char** rsi3;
    int64_t rbp4;
    int32_t eax5;
    int64_t rbx6;
    int32_t* r14_7;
    int64_t* r15_8;
    int64_t r12_9;
    int64_t* r13_10;
    int64_t v11;

    while (1) {
        v1 = reinterpret_cast<signed char**>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<signed char**>(0x482);
            fun_489();
            ++rbp4;
            if (rbp4 == 0x514) 
                goto addr_4b9_7;
            eax5 = *reinterpret_cast<int32_t*>(&rbp4) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_4b7();
    }
    addr_4b9_7:
    fun_4d5(v1, 0x4c0, 0x4c7);
    fun_4ee(0x4dc, 22, 1, v1);
    fun_3fb(rbx6, 22, 1, v1);
    fun_403(r14_7, 22, 1, v1);
    fun_40b(r15_8, 22, 1, v1);
    fun_413(r12_9, 22, 1, v1);
    fun_41b(r13_10, 22, 1, v1);
    goto v11;
}

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

int64_t* fun_e4(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t* r15_4;
    int64_t* rax5;
    int64_t rax6;
    int64_t r12_7;
    int64_t* rax8;
    int64_t* r13_9;
    int64_t rax10;
    struct s2* rdi11;
    struct s3* rsi12;
    int64_t rdx13;
    int64_t rsi14;
    int32_t* rbx15;
    int32_t* r14_16;
    int64_t r8_17;
    int64_t r8_18;
    struct s4* rdi19;
    struct s5* rsi20;
    struct s4* rdi21;
    struct s2* rdi22;
    signed char** rcx23;
    int64_t rdx24;
    struct s11* rsi25;
    int32_t* rbx26;
    struct s4* rdi27;
    struct s12* rsi28;
    struct s2* rdi29;
    struct s13* rsi30;
    int32_t* rdx31;
    int32_t* r14_32;
    struct s4* rdi33;
    struct s14* rsi34;
    struct s15* rsi35;
    struct s4* rdi36;
    int32_t* rsi37;
    void* rsi38;
    int32_t ebp39;
    signed char*** rax40;
    signed char** v41;
    signed char** rsi42;
    int64_t rbp43;
    signed char** rdi44;
    int32_t eax45;
    int64_t rbx46;
    int32_t* r14_47;
    int64_t v48;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r15_4 = rax5;
    rax6 = fun_f6(0x514, 8);
    r12_7 = rax6;
    rax8 = fun_108(0x514, 8);
    r13_9 = rax8;
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    g514 = LCPI1_7;
    rdi11 = reinterpret_cast<struct s2*>(0x518);
    rsi12 = reinterpret_cast<struct s3*>(12);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm8, xmm8");
        __asm__("cvtsi2sd xmm8, edx");
        __asm__("divsd xmm8, xmm0");
        rdi11->f0 = rsi12->f0;
        rsi14 = rdx13 * 0x28a0;
        rdi11 = reinterpret_cast<struct s2*>(rsi14 + reinterpret_cast<int64_t>(rbx15));
        rsi12 = reinterpret_cast<struct s3*>(rsi14 + reinterpret_cast<int64_t>(r14_16));
        if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rsi12) - reinterpret_cast<int64_t>(rdi11)) >= 16) {
            __asm__("movd xmm8, rdx");
            __asm__("pshufd xmm8, xmm8, 0x44");
            *reinterpret_cast<int32_t*>(&r8_17) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_17) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm9, xmm1");
            do {
                __asm__("movdqa xmm10, xmm9");
                __asm__("pmuludq xmm10, xmm8");
                __asm__("pshufd xmm10, xmm10, 0xe8");
                __asm__("movdqa xmm11, xmm10");
                __asm__("psubd xmm11, xmm2");
                __asm__("movdqa xmm12, xmm11");
                __asm__("pmuludq xmm12, xmm3");
                __asm__("pshufd xmm12, xmm12, 0xed");
                __asm__("pshufd xmm13, xmm11, 0x55");
                __asm__("pmuludq xmm13, xmm3");
                __asm__("pshufd xmm13, xmm13, 0xed");
                __asm__("punpckldq xmm12, xmm13");
                __asm__("psrld xmm12, 0xa");
                __asm__("pshufd xmm13, xmm12, 0xf5");
                __asm__("pmuludq xmm12, xmm4");
                __asm__("paddd xmm10, xmm6");
                __asm__("movdqa xmm14, xmm10");
                __asm__("pmuludq xmm14, xmm3");
                __asm__("pmuludq xmm13, xmm4");
                __asm__("pshufd xmm14, xmm14, 0xed");
                __asm__("pshufd xmm15, xmm10, 0x55");
                __asm__("pmuludq xmm15, xmm3");
                __asm__("punpckldq xmm12, xmm13");
                __asm__("pshufd xmm13, xmm15, 0xed");
                __asm__("punpckldq xmm14, xmm13");
                __asm__("psrld xmm14, 0xa");
                __asm__("psubd xmm11, xmm12");
                __asm__("pshufd xmm12, xmm14, 0xf5");
                __asm__("pmuludq xmm14, xmm4");
                __asm__("cvtdq2pd xmm11, xmm11");
                __asm__("pmuludq xmm12, xmm4");
                __asm__("punpckldq xmm14, xmm12");
                __asm__("psubd xmm10, xmm14");
                __asm__("divpd xmm11, xmm5");
                __asm__("cvtdq2pd xmm10, xmm10");
                __asm__("divpd xmm10, xmm5");
                __asm__("movupd [rdi+r8*8], xmm11");
                __asm__("movupd [rsi+r8*8], xmm10");
                r8_17 = r8_17 + 2;
                __asm__("paddq xmm9, xmm7");
            } while (r8_17 != 0x514);
        } else {
            *reinterpret_cast<int32_t*>(&r8_18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_18) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm8, xmm8");
                __asm__("cvtsi2sd xmm8, r10d");
                __asm__("divsd xmm8, xmm0");
                rdi11->f0 = rsi12->f0;
                rdi19 = reinterpret_cast<struct s4*>(&rdi11->f4);
                rsi20 = reinterpret_cast<struct s5*>(&rsi12->f4);
                __asm__("xorps xmm8, xmm8");
                __asm__("cvtsi2sd xmm8, r9d");
                __asm__("divsd xmm8, xmm0");
                rdi19->f0 = rsi20->f0;
                rdi11 = reinterpret_cast<struct s2*>(&rdi19->f4);
                rsi12 = reinterpret_cast<struct s3*>(&rsi20->f4);
                ++r8_18;
            } while (r8_18 != 0x514);
        }
        ++rdx13;
    } while (rdx13 != 0x514);
    rdi11->f0 = rsi12->f0;
    rdi21 = reinterpret_cast<struct s4*>(&rdi11->f4);
    rdi21->f0 = rsi12->f4;
    rdi22 = reinterpret_cast<struct s2*>(&rdi21->f4);
    do {
        r15_4[rax10] = reinterpret_cast<int64_t>(fputc);
        r13_9[rax10] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx23) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx24 = rax10 * 0x28a0;
            rsi25 = reinterpret_cast<struct s11*>(reinterpret_cast<int64_t>(rbx26) + rdx24);
            rdi22->f0 = rsi25->f0;
            rdi27 = reinterpret_cast<struct s4*>(&rdi22->f4);
            rsi28 = reinterpret_cast<struct s12*>(&rsi25->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r15+rax*8]");
            rdi27->f0 = rsi28->f0;
            rdi29 = reinterpret_cast<struct s2*>(&rdi27->f4);
            rsi30 = reinterpret_cast<struct s13*>(&rsi28->f4);
            rdx31 = reinterpret_cast<int32_t*>(rdx24 + reinterpret_cast<int64_t>(r14_32));
            rdi29->f0 = rsi30->f0;
            rdi33 = reinterpret_cast<struct s4*>(&rdi29->f4);
            rsi34 = reinterpret_cast<struct s14*>(&rsi30->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r13+rax*8+0x0]");
            rdi33->f0 = rsi34->f0;
            rdi22 = reinterpret_cast<struct s2*>(&rdi33->f4);
            rsi35 = reinterpret_cast<struct s15*>(&rsi34->f4);
            rcx23 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx23) + 1);
        } while (!reinterpret_cast<int1_t>(rcx23 == 0x514));
        __asm__("mulsd xmm2, xmm0");
        rdi22->f0 = rsi35->f0;
        rdi36 = reinterpret_cast<struct s4*>(&rdi22->f4);
        rsi37 = &rsi35->f4;
        __asm__("mulsd xmm3, xmm1");
        __asm__("addsd xmm3, xmm2");
        rdi36->f0 = *rsi37;
        rdi22 = reinterpret_cast<struct s2*>(&rdi36->f4);
        rsi38 = reinterpret_cast<void*>(rsi37 + 1);
        ++rax10;
    } while (rax10 != 0x514);
    if (ebp39 >= 43 && **v3 == fputc) {
        rax40 = g433;
        v41 = *rax40;
        fun_450(0x441, 22, 1);
        rsi42 = reinterpret_cast<signed char**>(0x457);
        *reinterpret_cast<int32_t*>(&rbp43) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp43) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi44 = v41;
        fun_46b();
        do {
            eax45 = *reinterpret_cast<int32_t*>(&rbp43) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax45)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi44) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi42 = v41;
                fun_4b7();
            }
            *rdi44 = *rsi42;
            rdi44 = v41;
            rsi42 = reinterpret_cast<signed char**>(0x482);
            fun_489();
            ++rbp43;
        } while (rbp43 != 0x514);
        fun_4d5(v41, 0x4c0, 0x4c7);
        *reinterpret_cast<int32_t*>(&rsi38) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi38) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx31) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx23 = v41;
        fun_4ee(0x4dc, 22, 1, rcx23);
    }
    fun_3fb(rbx46, rsi38, rdx31, rcx23);
    fun_403(r14_47, rsi38, rdx31, rcx23);
    fun_40b(r15_4, rsi38, rdx31, rcx23);
    fun_413(r12_7, rsi38, rdx31, rcx23);
    fun_41b(r13_9, rsi38, rdx31, rcx23);
    goto v48;
}

void fun_450(int64_t rdi, int64_t rsi, int64_t rdx) {
    signed char** v4;
    signed char** rsi5;
    int64_t rbp6;
    signed char** rdi7;
    int32_t eax8;
    int64_t rbx9;
    int32_t* r14_10;
    int64_t* r15_11;
    int64_t r12_12;
    int64_t* r13_13;
    int64_t v14;

    v4 = reinterpret_cast<signed char**>(__return_address());
    rsi5 = reinterpret_cast<signed char**>(0x457);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = v4;
    fun_46b();
    do {
        eax8 = *reinterpret_cast<int32_t*>(&rbp6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax8)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_4b7();
        }
        *rdi7 = *rsi5;
        rdi7 = v4;
        rsi5 = reinterpret_cast<signed char**>(0x482);
        fun_489();
        ++rbp6;
    } while (rbp6 != 0x514);
    fun_4d5(v4, 0x4c0, 0x4c7);
    fun_4ee(0x4dc, 22, 1, v4);
    fun_3fb(rbx9, 22, 1, v4);
    fun_403(r14_10, 22, 1, v4);
    fun_40b(r15_11, 22, 1, v4);
    fun_413(r12_12, 22, 1, v4);
    fun_41b(r13_13, 22, 1, v4);
    goto v14;
}

void fun_403(int32_t* rdi, void* rsi, int32_t* rdx, signed char** rcx) {
    int64_t* r15_5;
    int64_t r12_6;
    int64_t* r13_7;
    int64_t v8;

    fun_40b(r15_5, rsi, rdx, rcx);
    fun_413(r12_6, rsi, rdx, rcx);
    fun_41b(r13_7, rsi, rdx, rcx);
    goto v8;
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

int64_t fun_f6(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t r12_4;
    int64_t rax5;
    int64_t* rax6;
    int64_t* r13_7;
    int64_t rax8;
    struct s2* rdi9;
    struct s3* rsi10;
    int64_t rdx11;
    int64_t rsi12;
    int32_t* rbx13;
    int32_t* r14_14;
    int64_t r8_15;
    int64_t r8_16;
    struct s4* rdi17;
    struct s5* rsi18;
    struct s4* rdi19;
    struct s2* rdi20;
    int64_t* r15_21;
    signed char** rcx22;
    int64_t rdx23;
    struct s16* rsi24;
    int32_t* rbx25;
    struct s4* rdi26;
    struct s17* rsi27;
    struct s2* rdi28;
    struct s18* rsi29;
    int32_t* rdx30;
    int32_t* r14_31;
    struct s4* rdi32;
    struct s19* rsi33;
    struct s20* rsi34;
    struct s4* rdi35;
    int32_t* rsi36;
    void* rsi37;
    int32_t ebp38;
    signed char*** rax39;
    signed char** v40;
    signed char** rsi41;
    int64_t rbp42;
    signed char** rdi43;
    int32_t eax44;
    int64_t rbx45;
    int32_t* r14_46;
    int64_t* r15_47;
    int64_t v48;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r12_4 = rax5;
    rax6 = fun_108(0x514, 8);
    r13_7 = rax6;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    g514 = LCPI1_7;
    rdi9 = reinterpret_cast<struct s2*>(0x518);
    rsi10 = reinterpret_cast<struct s3*>(12);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rdx11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm8, xmm8");
        __asm__("cvtsi2sd xmm8, edx");
        __asm__("divsd xmm8, xmm0");
        rdi9->f0 = rsi10->f0;
        rsi12 = rdx11 * 0x28a0;
        rdi9 = reinterpret_cast<struct s2*>(rsi12 + reinterpret_cast<int64_t>(rbx13));
        rsi10 = reinterpret_cast<struct s3*>(rsi12 + reinterpret_cast<int64_t>(r14_14));
        if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rsi10) - reinterpret_cast<int64_t>(rdi9)) >= 16) {
            __asm__("movd xmm8, rdx");
            __asm__("pshufd xmm8, xmm8, 0x44");
            *reinterpret_cast<int32_t*>(&r8_15) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_15) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm9, xmm1");
            do {
                __asm__("movdqa xmm10, xmm9");
                __asm__("pmuludq xmm10, xmm8");
                __asm__("pshufd xmm10, xmm10, 0xe8");
                __asm__("movdqa xmm11, xmm10");
                __asm__("psubd xmm11, xmm2");
                __asm__("movdqa xmm12, xmm11");
                __asm__("pmuludq xmm12, xmm3");
                __asm__("pshufd xmm12, xmm12, 0xed");
                __asm__("pshufd xmm13, xmm11, 0x55");
                __asm__("pmuludq xmm13, xmm3");
                __asm__("pshufd xmm13, xmm13, 0xed");
                __asm__("punpckldq xmm12, xmm13");
                __asm__("psrld xmm12, 0xa");
                __asm__("pshufd xmm13, xmm12, 0xf5");
                __asm__("pmuludq xmm12, xmm4");
                __asm__("paddd xmm10, xmm6");
                __asm__("movdqa xmm14, xmm10");
                __asm__("pmuludq xmm14, xmm3");
                __asm__("pmuludq xmm13, xmm4");
                __asm__("pshufd xmm14, xmm14, 0xed");
                __asm__("pshufd xmm15, xmm10, 0x55");
                __asm__("pmuludq xmm15, xmm3");
                __asm__("punpckldq xmm12, xmm13");
                __asm__("pshufd xmm13, xmm15, 0xed");
                __asm__("punpckldq xmm14, xmm13");
                __asm__("psrld xmm14, 0xa");
                __asm__("psubd xmm11, xmm12");
                __asm__("pshufd xmm12, xmm14, 0xf5");
                __asm__("pmuludq xmm14, xmm4");
                __asm__("cvtdq2pd xmm11, xmm11");
                __asm__("pmuludq xmm12, xmm4");
                __asm__("punpckldq xmm14, xmm12");
                __asm__("psubd xmm10, xmm14");
                __asm__("divpd xmm11, xmm5");
                __asm__("cvtdq2pd xmm10, xmm10");
                __asm__("divpd xmm10, xmm5");
                __asm__("movupd [rdi+r8*8], xmm11");
                __asm__("movupd [rsi+r8*8], xmm10");
                r8_15 = r8_15 + 2;
                __asm__("paddq xmm9, xmm7");
            } while (r8_15 != 0x514);
        } else {
            *reinterpret_cast<int32_t*>(&r8_16) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm8, xmm8");
                __asm__("cvtsi2sd xmm8, r10d");
                __asm__("divsd xmm8, xmm0");
                rdi9->f0 = rsi10->f0;
                rdi17 = reinterpret_cast<struct s4*>(&rdi9->f4);
                rsi18 = reinterpret_cast<struct s5*>(&rsi10->f4);
                __asm__("xorps xmm8, xmm8");
                __asm__("cvtsi2sd xmm8, r9d");
                __asm__("divsd xmm8, xmm0");
                rdi17->f0 = rsi18->f0;
                rdi9 = reinterpret_cast<struct s2*>(&rdi17->f4);
                rsi10 = reinterpret_cast<struct s3*>(&rsi18->f4);
                ++r8_16;
            } while (r8_16 != 0x514);
        }
        ++rdx11;
    } while (rdx11 != 0x514);
    rdi9->f0 = rsi10->f0;
    rdi19 = reinterpret_cast<struct s4*>(&rdi9->f4);
    rdi19->f0 = rsi10->f4;
    rdi20 = reinterpret_cast<struct s2*>(&rdi19->f4);
    do {
        r15_21[rax8] = reinterpret_cast<int64_t>(fputc);
        r13_7[rax8] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx23 = rax8 * 0x28a0;
            rsi24 = reinterpret_cast<struct s16*>(reinterpret_cast<int64_t>(rbx25) + rdx23);
            rdi20->f0 = rsi24->f0;
            rdi26 = reinterpret_cast<struct s4*>(&rdi20->f4);
            rsi27 = reinterpret_cast<struct s17*>(&rsi24->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r15+rax*8]");
            rdi26->f0 = rsi27->f0;
            rdi28 = reinterpret_cast<struct s2*>(&rdi26->f4);
            rsi29 = reinterpret_cast<struct s18*>(&rsi27->f4);
            rdx30 = reinterpret_cast<int32_t*>(rdx23 + reinterpret_cast<int64_t>(r14_31));
            rdi28->f0 = rsi29->f0;
            rdi32 = reinterpret_cast<struct s4*>(&rdi28->f4);
            rsi33 = reinterpret_cast<struct s19*>(&rsi29->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r13+rax*8+0x0]");
            rdi32->f0 = rsi33->f0;
            rdi20 = reinterpret_cast<struct s2*>(&rdi32->f4);
            rsi34 = reinterpret_cast<struct s20*>(&rsi33->f4);
            rcx22 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx22) + 1);
        } while (!reinterpret_cast<int1_t>(rcx22 == 0x514));
        __asm__("mulsd xmm2, xmm0");
        rdi20->f0 = rsi34->f0;
        rdi35 = reinterpret_cast<struct s4*>(&rdi20->f4);
        rsi36 = &rsi34->f4;
        __asm__("mulsd xmm3, xmm1");
        __asm__("addsd xmm3, xmm2");
        rdi35->f0 = *rsi36;
        rdi20 = reinterpret_cast<struct s2*>(&rdi35->f4);
        rsi37 = reinterpret_cast<void*>(rsi36 + 1);
        ++rax8;
    } while (rax8 != 0x514);
    if (ebp38 >= 43 && **v3 == fputc) {
        rax39 = g433;
        v40 = *rax39;
        fun_450(0x441, 22, 1);
        rsi41 = reinterpret_cast<signed char**>(0x457);
        *reinterpret_cast<int32_t*>(&rbp42) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp42) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi43 = v40;
        fun_46b();
        do {
            eax44 = *reinterpret_cast<int32_t*>(&rbp42) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax44)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi43) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi41 = v40;
                fun_4b7();
            }
            *rdi43 = *rsi41;
            rdi43 = v40;
            rsi41 = reinterpret_cast<signed char**>(0x482);
            fun_489();
            ++rbp42;
        } while (rbp42 != 0x514);
        fun_4d5(v40, 0x4c0, 0x4c7);
        *reinterpret_cast<int32_t*>(&rsi37) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi37) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx30) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx22 = v40;
        fun_4ee(0x4dc, 22, 1, rcx22);
    }
    fun_3fb(rbx45, rsi37, rdx30, rcx22);
    fun_403(r14_46, rsi37, rdx30, rcx22);
    fun_40b(r15_47, rsi37, rdx30, rcx22);
    fun_413(r12_4, rsi37, rdx30, rcx22);
    fun_41b(r13_7, rsi37, rdx30, rcx22);
    goto v48;
}

void fun_46b() {
    signed char** v1;
    int32_t eax2;
    int64_t rbp3;
    signed char** rdi4;
    signed char** rsi5;
    int64_t rbx6;
    int32_t* r14_7;
    int64_t* r15_8;
    int64_t r12_9;
    int64_t* r13_10;
    int64_t v11;

    v1 = reinterpret_cast<signed char**>(__return_address());
    do {
        eax2 = *reinterpret_cast<int32_t*>(&rbp3) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v1;
            fun_4b7();
        }
        *rdi4 = *rsi5;
        rdi4 = v1;
        rsi5 = reinterpret_cast<signed char**>(0x482);
        fun_489();
        ++rbp3;
    } while (rbp3 != 0x514);
    fun_4d5(v1, 0x4c0, 0x4c7);
    fun_4ee(0x4dc, 22, 1, v1);
    fun_3fb(rbx6, 22, 1, v1);
    fun_403(r14_7, 22, 1, v1);
    fun_40b(r15_8, 22, 1, v1);
    fun_413(r12_9, 22, 1, v1);
    fun_41b(r13_10, 22, 1, v1);
    goto v11;
}

void fun_40b(int64_t* rdi, void* rsi, int32_t* rdx, signed char** rcx) {
    int64_t r12_5;
    int64_t* r13_6;
    int64_t v7;

    fun_413(r12_5, rsi, rdx, rcx);
    fun_41b(r13_6, rsi, rdx, rcx);
    goto v7;
}

void fun_4d5(signed char** rdi, int64_t rsi, int64_t rdx) {
    signed char** rbp4;
    int64_t rbx5;
    int32_t* r14_6;
    int64_t* r15_7;
    int64_t r12_8;
    int64_t* r13_9;
    int64_t v10;

    fun_4ee(0x4dc, 22, 1, rbp4);
    fun_3fb(rbx5, 22, 1, rbp4);
    fun_403(r14_6, 22, 1, rbp4);
    fun_40b(r15_7, 22, 1, rbp4);
    fun_413(r12_8, 22, 1, rbp4);
    fun_41b(r13_9, 22, 1, rbp4);
    goto v10;
}

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

int64_t* fun_108(struct s0* rdi, struct s1* rsi) {
    signed char** v3;
    int64_t* r13_4;
    int64_t* rax5;
    int64_t rax6;
    struct s2* rdi7;
    struct s3* rsi8;
    int64_t rdx9;
    int64_t rsi10;
    int32_t* rbx11;
    int32_t* r14_12;
    int64_t r8_13;
    int64_t r8_14;
    struct s4* rdi15;
    struct s5* rsi16;
    struct s4* rdi17;
    struct s2* rdi18;
    int64_t* r15_19;
    signed char** rcx20;
    int64_t rdx21;
    struct s21* rsi22;
    int32_t* rbx23;
    struct s4* rdi24;
    struct s22* rsi25;
    struct s2* rdi26;
    struct s23* rsi27;
    int32_t* rdx28;
    int32_t* r14_29;
    struct s4* rdi30;
    struct s24* rsi31;
    struct s25* rsi32;
    struct s4* rdi33;
    int32_t* rsi34;
    void* rsi35;
    int32_t ebp36;
    signed char*** rax37;
    signed char** v38;
    signed char** rsi39;
    int64_t rbp40;
    signed char** rdi41;
    int32_t eax42;
    int64_t rbx43;
    int32_t* r14_44;
    int64_t* r15_45;
    int64_t r12_46;
    int64_t v47;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r13_4 = rax5;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s3*>(&rsi->f4);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm8, xmm8");
        __asm__("cvtsi2sd xmm8, edx");
        __asm__("divsd xmm8, xmm0");
        rdi7->f0 = rsi8->f0;
        rsi10 = rdx9 * 0x28a0;
        rdi7 = reinterpret_cast<struct s2*>(rsi10 + reinterpret_cast<int64_t>(rbx11));
        rsi8 = reinterpret_cast<struct s3*>(rsi10 + reinterpret_cast<int64_t>(r14_12));
        if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rsi8) - reinterpret_cast<int64_t>(rdi7)) >= 16) {
            __asm__("movd xmm8, rdx");
            __asm__("pshufd xmm8, xmm8, 0x44");
            *reinterpret_cast<int32_t*>(&r8_13) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm9, xmm1");
            do {
                __asm__("movdqa xmm10, xmm9");
                __asm__("pmuludq xmm10, xmm8");
                __asm__("pshufd xmm10, xmm10, 0xe8");
                __asm__("movdqa xmm11, xmm10");
                __asm__("psubd xmm11, xmm2");
                __asm__("movdqa xmm12, xmm11");
                __asm__("pmuludq xmm12, xmm3");
                __asm__("pshufd xmm12, xmm12, 0xed");
                __asm__("pshufd xmm13, xmm11, 0x55");
                __asm__("pmuludq xmm13, xmm3");
                __asm__("pshufd xmm13, xmm13, 0xed");
                __asm__("punpckldq xmm12, xmm13");
                __asm__("psrld xmm12, 0xa");
                __asm__("pshufd xmm13, xmm12, 0xf5");
                __asm__("pmuludq xmm12, xmm4");
                __asm__("paddd xmm10, xmm6");
                __asm__("movdqa xmm14, xmm10");
                __asm__("pmuludq xmm14, xmm3");
                __asm__("pmuludq xmm13, xmm4");
                __asm__("pshufd xmm14, xmm14, 0xed");
                __asm__("pshufd xmm15, xmm10, 0x55");
                __asm__("pmuludq xmm15, xmm3");
                __asm__("punpckldq xmm12, xmm13");
                __asm__("pshufd xmm13, xmm15, 0xed");
                __asm__("punpckldq xmm14, xmm13");
                __asm__("psrld xmm14, 0xa");
                __asm__("psubd xmm11, xmm12");
                __asm__("pshufd xmm12, xmm14, 0xf5");
                __asm__("pmuludq xmm14, xmm4");
                __asm__("cvtdq2pd xmm11, xmm11");
                __asm__("pmuludq xmm12, xmm4");
                __asm__("punpckldq xmm14, xmm12");
                __asm__("psubd xmm10, xmm14");
                __asm__("divpd xmm11, xmm5");
                __asm__("cvtdq2pd xmm10, xmm10");
                __asm__("divpd xmm10, xmm5");
                __asm__("movupd [rdi+r8*8], xmm11");
                __asm__("movupd [rsi+r8*8], xmm10");
                r8_13 = r8_13 + 2;
                __asm__("paddq xmm9, xmm7");
            } while (r8_13 != 0x514);
        } else {
            *reinterpret_cast<int32_t*>(&r8_14) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_14) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm8, xmm8");
                __asm__("cvtsi2sd xmm8, r10d");
                __asm__("divsd xmm8, xmm0");
                rdi7->f0 = rsi8->f0;
                rdi15 = reinterpret_cast<struct s4*>(&rdi7->f4);
                rsi16 = reinterpret_cast<struct s5*>(&rsi8->f4);
                __asm__("xorps xmm8, xmm8");
                __asm__("cvtsi2sd xmm8, r9d");
                __asm__("divsd xmm8, xmm0");
                rdi15->f0 = rsi16->f0;
                rdi7 = reinterpret_cast<struct s2*>(&rdi15->f4);
                rsi8 = reinterpret_cast<struct s3*>(&rsi16->f4);
                ++r8_14;
            } while (r8_14 != 0x514);
        }
        ++rdx9;
    } while (rdx9 != 0x514);
    rdi7->f0 = rsi8->f0;
    rdi17 = reinterpret_cast<struct s4*>(&rdi7->f4);
    rdi17->f0 = rsi8->f4;
    rdi18 = reinterpret_cast<struct s2*>(&rdi17->f4);
    do {
        r15_19[rax6] = reinterpret_cast<int64_t>(fputc);
        r13_4[rax6] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx21 = rax6 * 0x28a0;
            rsi22 = reinterpret_cast<struct s21*>(reinterpret_cast<int64_t>(rbx23) + rdx21);
            rdi18->f0 = rsi22->f0;
            rdi24 = reinterpret_cast<struct s4*>(&rdi18->f4);
            rsi25 = reinterpret_cast<struct s22*>(&rsi22->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r15+rax*8]");
            rdi24->f0 = rsi25->f0;
            rdi26 = reinterpret_cast<struct s2*>(&rdi24->f4);
            rsi27 = reinterpret_cast<struct s23*>(&rsi25->f4);
            rdx28 = reinterpret_cast<int32_t*>(rdx21 + reinterpret_cast<int64_t>(r14_29));
            rdi26->f0 = rsi27->f0;
            rdi30 = reinterpret_cast<struct s4*>(&rdi26->f4);
            rsi31 = reinterpret_cast<struct s24*>(&rsi27->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r13+rax*8+0x0]");
            rdi30->f0 = rsi31->f0;
            rdi18 = reinterpret_cast<struct s2*>(&rdi30->f4);
            rsi32 = reinterpret_cast<struct s25*>(&rsi31->f4);
            rcx20 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx20) + 1);
        } while (!reinterpret_cast<int1_t>(rcx20 == 0x514));
        __asm__("mulsd xmm2, xmm0");
        rdi18->f0 = rsi32->f0;
        rdi33 = reinterpret_cast<struct s4*>(&rdi18->f4);
        rsi34 = &rsi32->f4;
        __asm__("mulsd xmm3, xmm1");
        __asm__("addsd xmm3, xmm2");
        rdi33->f0 = *rsi34;
        rdi18 = reinterpret_cast<struct s2*>(&rdi33->f4);
        rsi35 = reinterpret_cast<void*>(rsi34 + 1);
        ++rax6;
    } while (rax6 != 0x514);
    if (ebp36 >= 43 && **v3 == fputc) {
        rax37 = g433;
        v38 = *rax37;
        fun_450(0x441, 22, 1);
        rsi39 = reinterpret_cast<signed char**>(0x457);
        *reinterpret_cast<int32_t*>(&rbp40) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp40) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi41 = v38;
        fun_46b();
        do {
            eax42 = *reinterpret_cast<int32_t*>(&rbp40) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax42)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi41) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi39 = v38;
                fun_4b7();
            }
            *rdi41 = *rsi39;
            rdi41 = v38;
            rsi39 = reinterpret_cast<signed char**>(0x482);
            fun_489();
            ++rbp40;
        } while (rbp40 != 0x514);
        fun_4d5(v38, 0x4c0, 0x4c7);
        *reinterpret_cast<int32_t*>(&rsi35) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi35) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx28) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx20 = v38;
        fun_4ee(0x4dc, 22, 1, rcx20);
    }
    fun_3fb(rbx43, rsi35, rdx28, rcx20);
    fun_403(r14_44, rsi35, rdx28, rcx20);
    fun_40b(r15_45, rsi35, rdx28, rcx20);
    fun_413(r12_46, rsi35, rdx28, rcx20);
    fun_41b(r13_4, rsi35, rdx28, rcx20);
    goto v47;
}

void fun_413(int64_t rdi, void* rsi, int32_t* rdx, signed char** rcx) {
    int64_t* r13_5;
    int64_t v6;

    fun_41b(r13_5, rsi, rdx, rcx);
    goto v6;
}

void fun_4ee(int64_t rdi, void* rsi, int32_t* rdx, signed char** rcx) {
    int64_t rbx5;
    int32_t* r14_6;
    int64_t* r15_7;
    int64_t r12_8;
    int64_t* r13_9;
    int64_t v10;

    fun_3fb(rbx5, rsi, rdx, rcx);
    fun_403(r14_6, rsi, rdx, rcx);
    fun_40b(r15_7, rsi, rdx, rcx);
    fun_413(r12_8, rsi, rdx, rcx);
    fun_41b(r13_9, rsi, rdx, rcx);
    goto v10;
}

void fun_41b(int64_t* rdi, void* rsi, int32_t* rdx, signed char** rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) {
    }
}

void fun_c8() {
    fun_d2();
}

