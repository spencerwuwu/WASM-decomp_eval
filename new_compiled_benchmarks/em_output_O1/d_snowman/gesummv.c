
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

/* .LCPI1_1 */
int32_t LCPI1_1 = 0x31f88900;

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

signed char*** g2c3 = reinterpret_cast<signed char***>(0x48240c8948088b48);

void fun_2e0(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_2fb();

void fun_343();

void fun_319();

void fun_361(signed char** rdi, int64_t rsi, int64_t rdx);

void fun_37a(int64_t rdi, void* rsi, int64_t rdx, signed char** rcx);

void fun_28b(int64_t rdi, void* rsi, int64_t rdx, signed char** rcx);

void fun_293(int64_t rdi, void* rsi, int64_t rdx, signed char** rcx);

void fun_29b(int64_t* rdi, void* rsi, int64_t rdx, signed char** rcx);

void fun_2a3(int64_t rdi, void* rsi, int64_t rdx, signed char** rcx);

void fun_2ab(int64_t* rdi, void* rsi, int64_t rdx, signed char** rcx);

void fun_d2() {
    signed char** v1;
    int64_t r14_2;
    int64_t rax3;
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
    int32_t* rdi14;
    void* rdi15;
    int32_t* rsi16;
    int64_t r9_17;
    uint64_t r9_18;
    struct s4* rdi19;
    struct s5* rdi20;
    struct s6* rdi21;
    signed char** rcx22;
    void* rdx23;
    struct s7* rsi24;
    int32_t* rbx25;
    struct s8* rdi26;
    struct s9* rsi27;
    struct s6* rdi28;
    struct s10* rsi29;
    int64_t rdx30;
    struct s8* rdi31;
    struct s11* rsi32;
    struct s12* rsi33;
    struct s8* rdi34;
    int32_t* rsi35;
    void* rsi36;
    int32_t ebp37;
    signed char*** rax38;
    signed char** v39;
    signed char** rsi40;
    int64_t rbp41;
    signed char** rdi42;
    int64_t rbx43;
    int64_t v44;

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
    g514 = LCPI1_1;
    rdi11 = reinterpret_cast<struct s2*>(0x518);
    rsi12 = reinterpret_cast<struct s3*>(12);
    *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, edx");
        __asm__("divsd xmm1, xmm0");
        rdi11->f0 = rsi12->f0;
        *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(&rsi12) * *reinterpret_cast<int32_t*>(&rdx13);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            *rdi14 = rsi12->f0;
            rdi15 = reinterpret_cast<void*>(rdi14 + 1);
            rsi16 = &rsi12->f4;
            *reinterpret_cast<int32_t*>(&r9_17) = *reinterpret_cast<int32_t*>(&rdi15) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_17) + 4) = reinterpret_cast<int32_t>(fputc);
            r9_18 = reinterpret_cast<uint64_t>(r9_17 * 0xc9a633fd) >> 42;
            *reinterpret_cast<int32_t*>(&rdi19) = *reinterpret_cast<int32_t*>(&rdi15) + -(*reinterpret_cast<int32_t*>(&r9_18) * 0x514) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi19->f0 = *rsi16;
            rdi11 = reinterpret_cast<struct s2*>(&rdi19->f4);
            rsi12 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(rsi16 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rsi12 == 0x514));
        ++rdx13;
    } while (rdx13 != 0x514);
    rdi11->f0 = rsi12->f0;
    rdi20 = reinterpret_cast<struct s5*>(&rdi11->f4);
    rdi20->f0 = rsi12->f4;
    rdi21 = reinterpret_cast<struct s6*>(&rdi20->f4);
    do {
        r15_5[rax10] = reinterpret_cast<int64_t>(fputc);
        r13_9[rax10] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx23 = reinterpret_cast<void*>(rax10 * 0x28a0);
            rsi24 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rbx25) + reinterpret_cast<int64_t>(rdx23));
            rdi21->f0 = rsi24->f0;
            rdi26 = reinterpret_cast<struct s8*>(&rdi21->f4);
            rsi27 = reinterpret_cast<struct s9*>(&rsi24->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r15+rax*8]");
            rdi26->f0 = rsi27->f0;
            rdi28 = reinterpret_cast<struct s6*>(&rdi26->f4);
            rsi29 = reinterpret_cast<struct s10*>(&rsi27->f4);
            rdx30 = reinterpret_cast<int64_t>(rdx23) + r14_2;
            rdi28->f0 = rsi29->f0;
            rdi31 = reinterpret_cast<struct s8*>(&rdi28->f4);
            rsi32 = reinterpret_cast<struct s11*>(&rsi29->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r13+rax*8+0x0]");
            rdi31->f0 = rsi32->f0;
            rdi21 = reinterpret_cast<struct s6*>(&rdi31->f4);
            rsi33 = reinterpret_cast<struct s12*>(&rsi32->f4);
            rcx22 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx22) + 1);
        } while (!reinterpret_cast<int1_t>(rcx22 == 0x514));
        __asm__("mulsd xmm2, xmm0");
        rdi21->f0 = rsi33->f0;
        rdi34 = reinterpret_cast<struct s8*>(&rdi21->f4);
        rsi35 = &rsi33->f4;
        __asm__("mulsd xmm3, xmm1");
        __asm__("addsd xmm3, xmm2");
        rdi34->f0 = *rsi35;
        rdi21 = reinterpret_cast<struct s6*>(&rdi34->f4);
        rsi36 = reinterpret_cast<void*>(rsi35 + 1);
        ++rax10;
    } while (rax10 != 0x514);
    if (ebp37 >= 43 && **v1 == fputc) {
        rax38 = g2c3;
        v39 = *rax38;
        fun_2e0(0x2d1, 22, 1);
        rsi40 = reinterpret_cast<signed char**>(0x2e7);
        *reinterpret_cast<int32_t*>(&rbp41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp41) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi42 = v39;
        fun_2fb();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp41) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi42) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi40 = v39;
                fun_343();
            }
            *rdi42 = *rsi40;
            rdi42 = v39;
            rsi40 = reinterpret_cast<signed char**>(0x312);
            fun_319();
            ++rbp41;
        } while (rbp41 != 0x514);
        fun_361(v39, 0x34c, 0x353);
        *reinterpret_cast<int32_t*>(&rsi36) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi36) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx30) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx22 = v39;
        fun_37a(0x368, 22, 1, rcx22);
    }
    fun_28b(rbx43, rsi36, rdx30, rcx22);
    fun_293(r14_2, rsi36, rdx30, rcx22);
    fun_29b(r15_5, rsi36, rdx30, rcx22);
    fun_2a3(r12_7, rsi36, rdx30, rcx22);
    fun_2ab(r13_9, rsi36, rdx30, rcx22);
    goto v44;
}

void fun_28b(int64_t rdi, void* rsi, int64_t rdx, signed char** rcx) {
    int64_t r14_5;
    int64_t* r15_6;
    int64_t r12_7;
    int64_t* r13_8;
    int64_t v9;

    fun_293(r14_5, rsi, rdx, rcx);
    fun_29b(r15_6, rsi, rdx, rcx);
    fun_2a3(r12_7, rsi, rdx, rcx);
    fun_2ab(r13_8, rsi, rdx, rcx);
    goto v9;
}

void fun_319() {
    int64_t rbp1;
    signed char** rdi2;
    signed char** rsi3;
    int64_t rbx4;
    int64_t r14_5;
    int64_t* r15_6;
    int64_t r12_7;
    int64_t* r13_8;
    int64_t v9;

    while (++rbp1, rbp1 != 0x514) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = reinterpret_cast<signed char**>(__return_address());
            fun_343();
        }
        *rdi2 = *rsi3;
        rdi2 = reinterpret_cast<signed char**>(__return_address());
        rsi3 = reinterpret_cast<signed char**>(0x312);
        fun_319();
    }
    fun_361(__return_address(), 0x34c, 0x353);
    fun_37a(0x368, 22, 1, __return_address());
    fun_28b(rbx4, 22, 1, __return_address());
    fun_293(r14_5, 22, 1, __return_address());
    fun_29b(r15_6, 22, 1, __return_address());
    fun_2a3(r12_7, 22, 1, __return_address());
    fun_2ab(r13_8, 22, 1, __return_address());
    goto v9;
}

void fun_343() {
    signed char** v1;
    signed char** rdi2;
    signed char** rsi3;
    int64_t rbp4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t* r15_7;
    int64_t r12_8;
    int64_t* r13_9;
    int64_t v10;

    while (1) {
        v1 = reinterpret_cast<signed char**>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<signed char**>(0x312);
            fun_319();
            ++rbp4;
            if (rbp4 == 0x514) 
                goto addr_345_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp4) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_343();
    }
    addr_345_7:
    fun_361(v1, 0x34c, 0x353);
    fun_37a(0x368, 22, 1, v1);
    fun_28b(rbx5, 22, 1, v1);
    fun_293(r14_6, 22, 1, v1);
    fun_29b(r15_7, 22, 1, v1);
    fun_2a3(r12_8, 22, 1, v1);
    fun_2ab(r13_9, 22, 1, v1);
    goto v10;
}

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
    int32_t* rdi14;
    void* rdi15;
    int32_t* rsi16;
    int64_t r9_17;
    uint64_t r9_18;
    struct s13* rdi19;
    struct s5* rdi20;
    struct s6* rdi21;
    signed char** rcx22;
    void* rdx23;
    struct s14* rsi24;
    int32_t* rbx25;
    struct s8* rdi26;
    struct s15* rsi27;
    struct s6* rdi28;
    struct s16* rsi29;
    int64_t rdx30;
    int64_t r14_31;
    struct s8* rdi32;
    struct s17* rsi33;
    struct s18* rsi34;
    struct s8* rdi35;
    int32_t* rsi36;
    void* rsi37;
    int32_t ebp38;
    signed char*** rax39;
    signed char** v40;
    signed char** rsi41;
    int64_t rbp42;
    signed char** rdi43;
    int64_t rbx44;
    int64_t r14_45;
    int64_t v46;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r15_4 = rax5;
    rax6 = fun_f6(0x514, 8);
    r12_7 = rax6;
    rax8 = fun_108(0x514, 8);
    r13_9 = rax8;
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    g514 = LCPI1_1;
    rdi11 = reinterpret_cast<struct s2*>(0x518);
    rsi12 = reinterpret_cast<struct s3*>(12);
    *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, edx");
        __asm__("divsd xmm1, xmm0");
        rdi11->f0 = rsi12->f0;
        *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(&rsi12) * *reinterpret_cast<int32_t*>(&rdx13);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            *rdi14 = rsi12->f0;
            rdi15 = reinterpret_cast<void*>(rdi14 + 1);
            rsi16 = &rsi12->f4;
            *reinterpret_cast<int32_t*>(&r9_17) = *reinterpret_cast<int32_t*>(&rdi15) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_17) + 4) = reinterpret_cast<int32_t>(fputc);
            r9_18 = reinterpret_cast<uint64_t>(r9_17 * 0xc9a633fd) >> 42;
            *reinterpret_cast<int32_t*>(&rdi19) = *reinterpret_cast<int32_t*>(&rdi15) + -(*reinterpret_cast<int32_t*>(&r9_18) * 0x514) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi19->f0 = *rsi16;
            rdi11 = reinterpret_cast<struct s2*>(&rdi19->f4);
            rsi12 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(rsi16 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rsi12 == 0x514));
        ++rdx13;
    } while (rdx13 != 0x514);
    rdi11->f0 = rsi12->f0;
    rdi20 = reinterpret_cast<struct s5*>(&rdi11->f4);
    rdi20->f0 = rsi12->f4;
    rdi21 = reinterpret_cast<struct s6*>(&rdi20->f4);
    do {
        r15_4[rax10] = reinterpret_cast<int64_t>(fputc);
        r13_9[rax10] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx23 = reinterpret_cast<void*>(rax10 * 0x28a0);
            rsi24 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rbx25) + reinterpret_cast<int64_t>(rdx23));
            rdi21->f0 = rsi24->f0;
            rdi26 = reinterpret_cast<struct s8*>(&rdi21->f4);
            rsi27 = reinterpret_cast<struct s15*>(&rsi24->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r15+rax*8]");
            rdi26->f0 = rsi27->f0;
            rdi28 = reinterpret_cast<struct s6*>(&rdi26->f4);
            rsi29 = reinterpret_cast<struct s16*>(&rsi27->f4);
            rdx30 = reinterpret_cast<int64_t>(rdx23) + r14_31;
            rdi28->f0 = rsi29->f0;
            rdi32 = reinterpret_cast<struct s8*>(&rdi28->f4);
            rsi33 = reinterpret_cast<struct s17*>(&rsi29->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r13+rax*8+0x0]");
            rdi32->f0 = rsi33->f0;
            rdi21 = reinterpret_cast<struct s6*>(&rdi32->f4);
            rsi34 = reinterpret_cast<struct s18*>(&rsi33->f4);
            rcx22 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx22) + 1);
        } while (!reinterpret_cast<int1_t>(rcx22 == 0x514));
        __asm__("mulsd xmm2, xmm0");
        rdi21->f0 = rsi34->f0;
        rdi35 = reinterpret_cast<struct s8*>(&rdi21->f4);
        rsi36 = &rsi34->f4;
        __asm__("mulsd xmm3, xmm1");
        __asm__("addsd xmm3, xmm2");
        rdi35->f0 = *rsi36;
        rdi21 = reinterpret_cast<struct s6*>(&rdi35->f4);
        rsi37 = reinterpret_cast<void*>(rsi36 + 1);
        ++rax10;
    } while (rax10 != 0x514);
    if (ebp38 >= 43 && **v3 == fputc) {
        rax39 = g2c3;
        v40 = *rax39;
        fun_2e0(0x2d1, 22, 1);
        rsi41 = reinterpret_cast<signed char**>(0x2e7);
        *reinterpret_cast<int32_t*>(&rbp42) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp42) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi43 = v40;
        fun_2fb();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp42) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi43) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi41 = v40;
                fun_343();
            }
            *rdi43 = *rsi41;
            rdi43 = v40;
            rsi41 = reinterpret_cast<signed char**>(0x312);
            fun_319();
            ++rbp42;
        } while (rbp42 != 0x514);
        fun_361(v40, 0x34c, 0x353);
        *reinterpret_cast<int32_t*>(&rsi37) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi37) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx30) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx22 = v40;
        fun_37a(0x368, 22, 1, rcx22);
    }
    fun_28b(rbx44, rsi37, rdx30, rcx22);
    fun_293(r14_45, rsi37, rdx30, rcx22);
    fun_29b(r15_4, rsi37, rdx30, rcx22);
    fun_2a3(r12_7, rsi37, rdx30, rcx22);
    fun_2ab(r13_9, rsi37, rdx30, rcx22);
    goto v46;
}

void fun_2e0(int64_t rdi, int64_t rsi, int64_t rdx) {
    signed char** v4;
    signed char** rsi5;
    int64_t rbp6;
    signed char** rdi7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t* r15_10;
    int64_t r12_11;
    int64_t* r13_12;
    int64_t v13;

    v4 = reinterpret_cast<signed char**>(__return_address());
    rsi5 = reinterpret_cast<signed char**>(0x2e7);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = v4;
    fun_2fb();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_343();
        }
        *rdi7 = *rsi5;
        rdi7 = v4;
        rsi5 = reinterpret_cast<signed char**>(0x312);
        fun_319();
        ++rbp6;
    } while (rbp6 != 0x514);
    fun_361(v4, 0x34c, 0x353);
    fun_37a(0x368, 22, 1, v4);
    fun_28b(rbx8, 22, 1, v4);
    fun_293(r14_9, 22, 1, v4);
    fun_29b(r15_10, 22, 1, v4);
    fun_2a3(r12_11, 22, 1, v4);
    fun_2ab(r13_12, 22, 1, v4);
    goto v13;
}

void fun_293(int64_t rdi, void* rsi, int64_t rdx, signed char** rcx) {
    int64_t* r15_5;
    int64_t r12_6;
    int64_t* r13_7;
    int64_t v8;

    fun_29b(r15_5, rsi, rdx, rcx);
    fun_2a3(r12_6, rsi, rdx, rcx);
    fun_2ab(r13_7, rsi, rdx, rcx);
    goto v8;
}

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
    int32_t* rdi12;
    void* rdi13;
    int32_t* rsi14;
    int64_t r9_15;
    uint64_t r9_16;
    struct s19* rdi17;
    struct s5* rdi18;
    struct s6* rdi19;
    int64_t* r15_20;
    signed char** rcx21;
    void* rdx22;
    struct s20* rsi23;
    int32_t* rbx24;
    struct s8* rdi25;
    struct s21* rsi26;
    struct s6* rdi27;
    struct s22* rsi28;
    int64_t rdx29;
    int64_t r14_30;
    struct s8* rdi31;
    struct s23* rsi32;
    struct s24* rsi33;
    struct s8* rdi34;
    int32_t* rsi35;
    void* rsi36;
    int32_t ebp37;
    signed char*** rax38;
    signed char** v39;
    signed char** rsi40;
    int64_t rbp41;
    signed char** rdi42;
    int64_t rbx43;
    int64_t r14_44;
    int64_t* r15_45;
    int64_t v46;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r12_4 = rax5;
    rax6 = fun_108(0x514, 8);
    r13_7 = rax6;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    g514 = LCPI1_1;
    rdi9 = reinterpret_cast<struct s2*>(0x518);
    rsi10 = reinterpret_cast<struct s3*>(12);
    *reinterpret_cast<int32_t*>(&rdx11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, edx");
        __asm__("divsd xmm1, xmm0");
        rdi9->f0 = rsi10->f0;
        *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rdi12) = *reinterpret_cast<int32_t*>(&rsi10) * *reinterpret_cast<int32_t*>(&rdx11);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            *rdi12 = rsi10->f0;
            rdi13 = reinterpret_cast<void*>(rdi12 + 1);
            rsi14 = &rsi10->f4;
            *reinterpret_cast<int32_t*>(&r9_15) = *reinterpret_cast<int32_t*>(&rdi13) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_15) + 4) = reinterpret_cast<int32_t>(fputc);
            r9_16 = reinterpret_cast<uint64_t>(r9_15 * 0xc9a633fd) >> 42;
            *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<int32_t*>(&rdi13) + -(*reinterpret_cast<int32_t*>(&r9_16) * 0x514) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi17->f0 = *rsi14;
            rdi9 = reinterpret_cast<struct s2*>(&rdi17->f4);
            rsi10 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(rsi14 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rsi10 == 0x514));
        ++rdx11;
    } while (rdx11 != 0x514);
    rdi9->f0 = rsi10->f0;
    rdi18 = reinterpret_cast<struct s5*>(&rdi9->f4);
    rdi18->f0 = rsi10->f4;
    rdi19 = reinterpret_cast<struct s6*>(&rdi18->f4);
    do {
        r15_20[rax8] = reinterpret_cast<int64_t>(fputc);
        r13_7[rax8] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx22 = reinterpret_cast<void*>(rax8 * 0x28a0);
            rsi23 = reinterpret_cast<struct s20*>(reinterpret_cast<int64_t>(rbx24) + reinterpret_cast<int64_t>(rdx22));
            rdi19->f0 = rsi23->f0;
            rdi25 = reinterpret_cast<struct s8*>(&rdi19->f4);
            rsi26 = reinterpret_cast<struct s21*>(&rsi23->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r15+rax*8]");
            rdi25->f0 = rsi26->f0;
            rdi27 = reinterpret_cast<struct s6*>(&rdi25->f4);
            rsi28 = reinterpret_cast<struct s22*>(&rsi26->f4);
            rdx29 = reinterpret_cast<int64_t>(rdx22) + r14_30;
            rdi27->f0 = rsi28->f0;
            rdi31 = reinterpret_cast<struct s8*>(&rdi27->f4);
            rsi32 = reinterpret_cast<struct s23*>(&rsi28->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r13+rax*8+0x0]");
            rdi31->f0 = rsi32->f0;
            rdi19 = reinterpret_cast<struct s6*>(&rdi31->f4);
            rsi33 = reinterpret_cast<struct s24*>(&rsi32->f4);
            rcx21 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx21) + 1);
        } while (!reinterpret_cast<int1_t>(rcx21 == 0x514));
        __asm__("mulsd xmm2, xmm0");
        rdi19->f0 = rsi33->f0;
        rdi34 = reinterpret_cast<struct s8*>(&rdi19->f4);
        rsi35 = &rsi33->f4;
        __asm__("mulsd xmm3, xmm1");
        __asm__("addsd xmm3, xmm2");
        rdi34->f0 = *rsi35;
        rdi19 = reinterpret_cast<struct s6*>(&rdi34->f4);
        rsi36 = reinterpret_cast<void*>(rsi35 + 1);
        ++rax8;
    } while (rax8 != 0x514);
    if (ebp37 >= 43 && **v3 == fputc) {
        rax38 = g2c3;
        v39 = *rax38;
        fun_2e0(0x2d1, 22, 1);
        rsi40 = reinterpret_cast<signed char**>(0x2e7);
        *reinterpret_cast<int32_t*>(&rbp41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp41) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi42 = v39;
        fun_2fb();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp41) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi42) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi40 = v39;
                fun_343();
            }
            *rdi42 = *rsi40;
            rdi42 = v39;
            rsi40 = reinterpret_cast<signed char**>(0x312);
            fun_319();
            ++rbp41;
        } while (rbp41 != 0x514);
        fun_361(v39, 0x34c, 0x353);
        *reinterpret_cast<int32_t*>(&rsi36) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi36) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx29) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx21 = v39;
        fun_37a(0x368, 22, 1, rcx21);
    }
    fun_28b(rbx43, rsi36, rdx29, rcx21);
    fun_293(r14_44, rsi36, rdx29, rcx21);
    fun_29b(r15_45, rsi36, rdx29, rcx21);
    fun_2a3(r12_4, rsi36, rdx29, rcx21);
    fun_2ab(r13_7, rsi36, rdx29, rcx21);
    goto v46;
}

void fun_2fb() {
    signed char** v1;
    int64_t rbp2;
    signed char** rdi3;
    signed char** rsi4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t* r15_7;
    int64_t r12_8;
    int64_t* r13_9;
    int64_t v10;

    v1 = reinterpret_cast<signed char**>(__return_address());
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp2) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v1;
            fun_343();
        }
        *rdi3 = *rsi4;
        rdi3 = v1;
        rsi4 = reinterpret_cast<signed char**>(0x312);
        fun_319();
        ++rbp2;
    } while (rbp2 != 0x514);
    fun_361(v1, 0x34c, 0x353);
    fun_37a(0x368, 22, 1, v1);
    fun_28b(rbx5, 22, 1, v1);
    fun_293(r14_6, 22, 1, v1);
    fun_29b(r15_7, 22, 1, v1);
    fun_2a3(r12_8, 22, 1, v1);
    fun_2ab(r13_9, 22, 1, v1);
    goto v10;
}

void fun_29b(int64_t* rdi, void* rsi, int64_t rdx, signed char** rcx) {
    int64_t r12_5;
    int64_t* r13_6;
    int64_t v7;

    fun_2a3(r12_5, rsi, rdx, rcx);
    fun_2ab(r13_6, rsi, rdx, rcx);
    goto v7;
}

void fun_361(signed char** rdi, int64_t rsi, int64_t rdx) {
    signed char** rbp4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t* r15_7;
    int64_t r12_8;
    int64_t* r13_9;
    int64_t v10;

    fun_37a(0x368, 22, 1, rbp4);
    fun_28b(rbx5, 22, 1, rbp4);
    fun_293(r14_6, 22, 1, rbp4);
    fun_29b(r15_7, 22, 1, rbp4);
    fun_2a3(r12_8, 22, 1, rbp4);
    fun_2ab(r13_9, 22, 1, rbp4);
    goto v10;
}

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

int64_t* fun_108(struct s0* rdi, struct s1* rsi) {
    signed char** v3;
    int64_t* r13_4;
    int64_t* rax5;
    int64_t rax6;
    struct s2* rdi7;
    struct s3* rsi8;
    int64_t rdx9;
    int32_t* rdi10;
    void* rdi11;
    int32_t* rsi12;
    int64_t r9_13;
    uint64_t r9_14;
    struct s25* rdi15;
    struct s5* rdi16;
    struct s6* rdi17;
    int64_t* r15_18;
    signed char** rcx19;
    void* rdx20;
    struct s26* rsi21;
    int32_t* rbx22;
    struct s8* rdi23;
    struct s27* rsi24;
    struct s6* rdi25;
    struct s28* rsi26;
    int64_t rdx27;
    int64_t r14_28;
    struct s8* rdi29;
    struct s29* rsi30;
    struct s30* rsi31;
    struct s8* rdi32;
    int32_t* rsi33;
    void* rsi34;
    int32_t ebp35;
    signed char*** rax36;
    signed char** v37;
    signed char** rsi38;
    int64_t rbp39;
    signed char** rdi40;
    int64_t rbx41;
    int64_t r14_42;
    int64_t* r15_43;
    int64_t r12_44;
    int64_t v45;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r13_4 = rax5;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s3*>(&rsi->f4);
    *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, edx");
        __asm__("divsd xmm1, xmm0");
        rdi7->f0 = rsi8->f0;
        *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rdi10) = *reinterpret_cast<int32_t*>(&rsi8) * *reinterpret_cast<int32_t*>(&rdx9);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            *rdi10 = rsi8->f0;
            rdi11 = reinterpret_cast<void*>(rdi10 + 1);
            rsi12 = &rsi8->f4;
            *reinterpret_cast<int32_t*>(&r9_13) = *reinterpret_cast<int32_t*>(&rdi11) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_13) + 4) = reinterpret_cast<int32_t>(fputc);
            r9_14 = reinterpret_cast<uint64_t>(r9_13 * 0xc9a633fd) >> 42;
            *reinterpret_cast<int32_t*>(&rdi15) = *reinterpret_cast<int32_t*>(&rdi11) + -(*reinterpret_cast<int32_t*>(&r9_14) * 0x514) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi15->f0 = *rsi12;
            rdi7 = reinterpret_cast<struct s2*>(&rdi15->f4);
            rsi8 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(rsi12 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rsi8 == 0x514));
        ++rdx9;
    } while (rdx9 != 0x514);
    rdi7->f0 = rsi8->f0;
    rdi16 = reinterpret_cast<struct s5*>(&rdi7->f4);
    rdi16->f0 = rsi8->f4;
    rdi17 = reinterpret_cast<struct s6*>(&rdi16->f4);
    do {
        r15_18[rax6] = reinterpret_cast<int64_t>(fputc);
        r13_4[rax6] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx20 = reinterpret_cast<void*>(rax6 * 0x28a0);
            rsi21 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(rbx22) + reinterpret_cast<int64_t>(rdx20));
            rdi17->f0 = rsi21->f0;
            rdi23 = reinterpret_cast<struct s8*>(&rdi17->f4);
            rsi24 = reinterpret_cast<struct s27*>(&rsi21->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r15+rax*8]");
            rdi23->f0 = rsi24->f0;
            rdi25 = reinterpret_cast<struct s6*>(&rdi23->f4);
            rsi26 = reinterpret_cast<struct s28*>(&rsi24->f4);
            rdx27 = reinterpret_cast<int64_t>(rdx20) + r14_28;
            rdi25->f0 = rsi26->f0;
            rdi29 = reinterpret_cast<struct s8*>(&rdi25->f4);
            rsi30 = reinterpret_cast<struct s29*>(&rsi26->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r13+rax*8+0x0]");
            rdi29->f0 = rsi30->f0;
            rdi17 = reinterpret_cast<struct s6*>(&rdi29->f4);
            rsi31 = reinterpret_cast<struct s30*>(&rsi30->f4);
            rcx19 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx19) + 1);
        } while (!reinterpret_cast<int1_t>(rcx19 == 0x514));
        __asm__("mulsd xmm2, xmm0");
        rdi17->f0 = rsi31->f0;
        rdi32 = reinterpret_cast<struct s8*>(&rdi17->f4);
        rsi33 = &rsi31->f4;
        __asm__("mulsd xmm3, xmm1");
        __asm__("addsd xmm3, xmm2");
        rdi32->f0 = *rsi33;
        rdi17 = reinterpret_cast<struct s6*>(&rdi32->f4);
        rsi34 = reinterpret_cast<void*>(rsi33 + 1);
        ++rax6;
    } while (rax6 != 0x514);
    if (ebp35 >= 43 && **v3 == fputc) {
        rax36 = g2c3;
        v37 = *rax36;
        fun_2e0(0x2d1, 22, 1);
        rsi38 = reinterpret_cast<signed char**>(0x2e7);
        *reinterpret_cast<int32_t*>(&rbp39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi40 = v37;
        fun_2fb();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp39) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi40) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi38 = v37;
                fun_343();
            }
            *rdi40 = *rsi38;
            rdi40 = v37;
            rsi38 = reinterpret_cast<signed char**>(0x312);
            fun_319();
            ++rbp39;
        } while (rbp39 != 0x514);
        fun_361(v37, 0x34c, 0x353);
        *reinterpret_cast<int32_t*>(&rsi34) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx27) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx19 = v37;
        fun_37a(0x368, 22, 1, rcx19);
    }
    fun_28b(rbx41, rsi34, rdx27, rcx19);
    fun_293(r14_42, rsi34, rdx27, rcx19);
    fun_29b(r15_43, rsi34, rdx27, rcx19);
    fun_2a3(r12_44, rsi34, rdx27, rcx19);
    fun_2ab(r13_4, rsi34, rdx27, rcx19);
    goto v45;
}

void fun_2a3(int64_t rdi, void* rsi, int64_t rdx, signed char** rcx) {
    int64_t* r13_5;
    int64_t v6;

    fun_2ab(r13_5, rsi, rdx, rcx);
    goto v6;
}

void fun_37a(int64_t rdi, void* rsi, int64_t rdx, signed char** rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t* r15_7;
    int64_t r12_8;
    int64_t* r13_9;
    int64_t v10;

    fun_28b(rbx5, rsi, rdx, rcx);
    fun_293(r14_6, rsi, rdx, rcx);
    fun_29b(r15_7, rsi, rdx, rcx);
    fun_2a3(r12_8, rsi, rdx, rcx);
    fun_2ab(r13_9, rsi, rdx, rcx);
    goto v10;
}

void fun_2ab(int64_t* rdi, void* rsi, int64_t rdx, signed char** rcx) {
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

