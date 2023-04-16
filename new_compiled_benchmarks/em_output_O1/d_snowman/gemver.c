
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_485(int64_t rdi, struct s0* rsi, int32_t* rdx, signed char** rcx);

void fun_48f(int64_t rdi, struct s0* rsi, int32_t* rdx, signed char** rcx);

void fun_497(int64_t rdi, struct s0* rsi, int32_t* rdx, signed char** rcx);

void fun_49f(int64_t rdi, struct s0* rsi, int32_t* rdx, signed char** rcx);

void fun_4a7(int64_t* rdi, struct s0* rsi, int32_t* rdx, signed char** rcx);

void fun_4af(int64_t* rdi, struct s0* rsi, int32_t* rdx, signed char** rcx);

void fun_4b7(int64_t rdi, struct s0* rsi, int32_t* rdx, signed char** rcx);

void fun_4c1(int64_t rdi, struct s0* rsi, int32_t* rdx, signed char** rcx);

void fun_47b(int32_t* rdi, struct s0* rsi, int32_t* rdx, signed char** rcx) {
    int64_t v5;
    int64_t v6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t* rbp9;
    int64_t* r14_10;
    int64_t r15_11;
    int64_t v12;
    int64_t v13;

    fun_485(v5, rsi, rdx, rcx);
    fun_48f(v6, rsi, rdx, rcx);
    fun_497(r12_7, rsi, rdx, rcx);
    fun_49f(r13_8, rsi, rdx, rcx);
    fun_4a7(rbp9, rsi, rdx, rcx);
    fun_4af(r14_10, rsi, rdx, rcx);
    fun_4b7(r15_11, rsi, rdx, rcx);
    fun_4c1(v12, rsi, rdx, rcx);
    goto v13;
}

void fputc(int32_t edi);

void fun_56c();

void fun_58c(signed char** rdi, int64_t rsi, int64_t rdx);

void fun_5a6(int64_t rdi, struct s0* rsi, int32_t* rdx, signed char** rcx);

void fun_538() {
    int64_t rcx1;
    signed char** rdi2;
    signed char** rsi3;
    int32_t* rbx4;
    int64_t v5;
    int64_t v6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t* rbp9;
    int64_t* r14_10;
    int64_t r15_11;
    int64_t v12;
    int64_t v13;

    while (++rcx1, rcx1 != 0x7d0) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = reinterpret_cast<signed char**>(__return_address());
            fun_56c();
        }
        *rdi2 = *rsi3;
        rdi2 = reinterpret_cast<signed char**>(__return_address());
        rsi3 = reinterpret_cast<signed char**>(0x531);
        fun_538();
    }
    fun_58c(__return_address(), 0x57a, 0x581);
    fun_5a6(0x593, 22, 1, __return_address());
    fun_47b(rbx4, 22, 1, __return_address());
    fun_485(v5, 22, 1, __return_address());
    fun_48f(v6, 22, 1, __return_address());
    fun_497(r12_7, 22, 1, __return_address());
    fun_49f(r13_8, 22, 1, __return_address());
    fun_4a7(rbp9, 22, 1, __return_address());
    fun_4af(r14_10, 22, 1, __return_address());
    fun_4b7(r15_11, 22, 1, __return_address());
    fun_4c1(v12, 22, 1, __return_address());
    goto v13;
}

void fun_56c() {
    signed char** v1;
    signed char** rdi2;
    signed char** rsi3;
    int64_t rcx4;
    int32_t* rbx5;
    int64_t v6;
    int64_t v7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t* rbp10;
    int64_t* r14_11;
    int64_t r15_12;
    int64_t v13;
    int64_t v14;

    while (1) {
        v1 = reinterpret_cast<signed char**>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rcx4;
            if (rcx4 == 0x7d0) 
                goto addr_573_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx4) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_56c();
    }
    addr_573_7:
    fun_58c(v1, 0x57a, 0x581);
    fun_5a6(0x593, 22, 1, v1);
    fun_47b(rbx5, 22, 1, v1);
    fun_485(v6, 22, 1, v1);
    fun_48f(v7, 22, 1, v1);
    fun_497(r12_8, 22, 1, v1);
    fun_49f(r13_9, 22, 1, v1);
    fun_4a7(rbp10, 22, 1, v1);
    fun_4af(r14_11, 22, 1, v1);
    fun_4b7(r15_12, 22, 1, v1);
    fun_4c1(v13, 22, 1, v1);
    goto v14;
}

int64_t fun_187(int64_t rdi, int64_t rsi);

int64_t fun_19b(int64_t rdi, int64_t rsi);

int64_t fun_1af(int64_t rdi, int64_t rsi);

int64_t fun_1c1(int64_t rdi, int64_t rsi);

int64_t* fun_1d3(int64_t rdi, int64_t rsi);

int64_t* fun_1e5(int64_t rdi, int64_t rsi);

int64_t fun_1f7(int64_t rdi, int64_t rsi);

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_209(struct s1* rdi, struct s2* rsi);

int32_t g7d0;

/* .LCPI1_1 */
int32_t LCPI1_1 = 0xf66d231;

int32_t g7d4;

int32_t gc = 0x441f;

int32_t g7d8;

/* .LCPI1_2 */
int32_t LCPI1_2 = 0x66db3145;

int32_t g7dc;

int32_t g14 = 0x2e666666;

int32_t g7e0;

/* .LCPI1_3 */
int32_t LCPI1_3 = 0x841f0f;

int32_t g7e4;

int32_t g1c = 0;

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s4 {
    int32_t f0;
    int32_t f1;
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
    int32_t f1;
    int32_t f4;
};

signed char*** g4d9 = reinterpret_cast<signed char***>(0x48240c8948088b48);

void fun_4f6(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_50f();

void fun_175(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int32_t* rbx4;
    int32_t* rax5;
    int64_t rax6;
    int64_t v7;
    int64_t rax8;
    int64_t v9;
    int64_t rax10;
    int64_t r12_11;
    int64_t rax12;
    int64_t r13_13;
    int64_t* rax14;
    int64_t* rbp15;
    int64_t* rax16;
    int64_t* r14_17;
    int64_t rax18;
    int64_t r15_19;
    int64_t rax20;
    int64_t r11_21;
    int32_t* rdi22;
    struct s3* rsi23;
    int64_t rcx24;
    int64_t rdx25;
    int32_t* rdi26;
    struct s4* rsi27;
    int32_t* rdi28;
    struct s5* rsi29;
    int32_t* rdi30;
    struct s6* rsi31;
    int32_t* rdi32;
    struct s7* rsi33;
    struct s8* rdi34;
    int64_t rcx35;
    int64_t rdx36;
    struct s9* rsi37;
    int32_t* rdi38;
    struct s10* rsi39;
    int32_t* rdi40;
    struct s11* rsi41;
    struct s12* rsi42;
    int64_t rdx43;
    int32_t* rdi44;
    int32_t* rsi45;
    struct s13* rsi46;
    int32_t* rdi47;
    struct s14* rsi48;
    struct s15* rsi49;
    int32_t* rdi50;
    struct s0* rsi51;
    int32_t* rdi52;
    struct s0* rsi53;
    struct s15* rsi54;
    signed char** rcx55;
    int32_t* rdx56;
    int32_t* rdi57;
    struct s0* rsi58;
    int64_t v59;
    int32_t v60;
    signed char*** rax61;
    signed char** v62;
    signed char** rsi63;
    signed char** rdi64;
    int64_t rcx65;
    int64_t v66;

    v3 = reinterpret_cast<signed char**>(__return_address());
    rbx4 = rax5;
    rax6 = fun_187(0x7d0, 8);
    v7 = rax6;
    rax8 = fun_19b(0x7d0, 8);
    v9 = rax8;
    rax10 = fun_1af(0x7d0, 8);
    r12_11 = rax10;
    rax12 = fun_1c1(0x7d0, 8);
    r13_13 = rax12;
    rax14 = fun_1d3(0x7d0, 8);
    rbp15 = rax14;
    rax16 = fun_1e5(0x7d0, 8);
    r14_17 = rax16;
    rax18 = fun_1f7(0x7d0, 8);
    r15_19 = rax18;
    rax20 = fun_209(0x7d0, 8);
    *reinterpret_cast<int32_t*>(&r11_21) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_21) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = LCPI1_1;
    g7d4 = gc;
    g7d8 = LCPI1_2;
    g7dc = g14;
    g7e0 = LCPI1_3;
    g7e4 = g1c;
    rdi22 = reinterpret_cast<int32_t*>(0x7e8);
    rsi23 = reinterpret_cast<struct s3*>(32);
    *reinterpret_cast<int32_t*>(&rcx24) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdx25 = rcx24;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edx");
        *rdi22 = rsi23->f0;
        rdi26 = rdi22 + 1;
        rsi27 = reinterpret_cast<struct s4*>(&rsi23->f4);
        ++rcx24;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm1");
        *rdi26 = rsi27->f0;
        rdi28 = rdi26 + 1;
        rsi29 = reinterpret_cast<struct s5*>(&rsi27->f1);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm2");
        *rdi28 = rsi29->f0;
        rdi30 = rdi28 + 1;
        rsi31 = reinterpret_cast<struct s6*>(&rsi29->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("divsd xmm7, xmm3");
        *rdi30 = rsi31->f0;
        rdi32 = rdi30 + 1;
        rsi33 = reinterpret_cast<struct s7*>(&rsi31->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm4");
        *rdi32 = rsi33->f0;
        __asm__("divsd xmm6, xmm5");
        rdi32[1] = rsi33->f4;
        r14_17[rdx25] = reinterpret_cast<int64_t>(fputc);
        rbp15[rdx25] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rsi23) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edi");
            __asm__("divsd xmm6, xmm0");
            rdi34 = reinterpret_cast<struct s8*>(rbx4 + rdx25 * 0xfa0);
            rdi34->f0 = rsi23->f0;
            rdi22 = &rdi34->f4;
            rsi23 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(&rsi23->f4) + 1);
        } while (!reinterpret_cast<int1_t>(rsi23 == 0x7d0));
    } while (rcx24 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx35) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx36) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx36) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi37 = reinterpret_cast<struct s9*>(rbx4 + r11_21 * 0xfa0);
            *rdi22 = rsi37->f0;
            rdi38 = rdi22 + 1;
            rsi39 = reinterpret_cast<struct s10*>(&rsi37->f4);
            __asm__("mulsd xmm0, [r10+rdx*8]");
            __asm__("addsd xmm0, [rsi+rdx*8]");
            *rdi38 = rsi39->f0;
            rdi40 = rdi38 + 1;
            rsi41 = reinterpret_cast<struct s11*>(&rsi39->f4);
            __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            *rdi40 = rsi41->f0;
            rdi22 = rdi40 + 1;
            rsi42 = reinterpret_cast<struct s12*>(&rsi41->f4);
            ++rdx36;
        } while (rdx36 != 0x7d0);
        ++r11_21;
    } while (r11_21 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rdx43) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx43) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi22 = rsi42->f0;
    rdi44 = rdi22 + 1;
    rsi45 = &rsi42->f4;
    do {
        *rdi44 = *rsi45;
        *reinterpret_cast<int32_t*>(&rdi44) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi46 = reinterpret_cast<struct s13*>(rbx4 + reinterpret_cast<int64_t>(rdi44) * 0xfa0);
            *rdi44 = rsi46->f0;
            rdi47 = rdi44 + 1;
            rsi48 = reinterpret_cast<struct s14*>(&rsi46->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r15+rdi*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi47 = rsi48->f0;
            rsi45 = &rsi48->f4;
            rdi44 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi47 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rdi44 == 0x7d0));
        ++rcx35;
    } while (rcx35 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rsi49) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi49) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *rdi44 = rsi49->f0;
        rdi50 = rdi44 + 1;
        rsi51 = reinterpret_cast<struct s0*>(&rsi49->f1);
        __asm__("addsd xmm0, [rax+rdx*8]");
        *rdi50 = rsi51->f0;
        rdi44 = rdi50 + 1;
        rsi49 = reinterpret_cast<struct s15*>(&rsi51->f4);
        ++rdx43;
    } while (rdx43 != 0x7d0);
    *rdi44 = rsi49->f0;
    rdi52 = rdi44 + 1;
    rsi53 = reinterpret_cast<struct s0*>(&rsi49->f1);
    do {
        *rdi52 = rsi53->f0;
        ++rdi52;
        rsi54 = reinterpret_cast<struct s15*>(&rsi53->f4);
        *reinterpret_cast<int32_t*>(&rcx55) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx55) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx56 = rbx4 + reinterpret_cast<int64_t>(rsi54) * 0xfa0;
            *rdi52 = rsi54->f0;
            rdi57 = rdi52 + 1;
            rsi58 = reinterpret_cast<struct s0*>(&rsi54->f1);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi57 = rsi58->f0;
            rdi52 = rdi57 + 1;
            rsi54 = reinterpret_cast<struct s15*>(&rsi58->f4);
            rcx55 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx55) + 1);
        } while (!reinterpret_cast<int1_t>(rcx55 == 0x7d0));
        rsi53 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi54) + 1);
    } while (!reinterpret_cast<int1_t>(rsi53 == 0x7d0));
    v59 = rax20;
    if (v60 >= 43 && **v3 == fputc) {
        rax61 = g4d9;
        v62 = *rax61;
        fun_4f6(0x4e7, 22, 1);
        rsi63 = reinterpret_cast<signed char**>(0x4fd);
        rdi64 = v62;
        fun_50f();
        *reinterpret_cast<int32_t*>(&rcx65) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx65) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx65) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi64) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi64) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi63 = v62;
                fun_56c();
            }
            *rdi64 = *rsi63;
            rdi64 = v62;
            rsi63 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rcx65;
        } while (rcx65 != 0x7d0);
        fun_58c(v62, 0x57a, 0x581);
        *reinterpret_cast<int32_t*>(&rsi53) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi53) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx56) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx56) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx55 = v62;
        fun_5a6(0x593, 22, 1, rcx55);
    }
    fun_47b(rbx4, rsi53, rdx56, rcx55);
    fun_485(v7, rsi53, rdx56, rcx55);
    fun_48f(v9, rsi53, rdx56, rcx55);
    fun_497(r12_11, rsi53, rdx56, rcx55);
    fun_49f(r13_13, rsi53, rdx56, rcx55);
    fun_4a7(rbp15, rsi53, rdx56, rcx55);
    fun_4af(r14_17, rsi53, rdx56, rcx55);
    fun_4b7(r15_19, rsi53, rdx56, rcx55);
    fun_4c1(v59, rsi53, rdx56, rcx55);
    goto v66;
}

void fun_4f6(int64_t rdi, int64_t rsi, int64_t rdx) {
    signed char** v4;
    signed char** rsi5;
    signed char** rdi6;
    int64_t rcx7;
    int32_t* rbx8;
    int64_t v9;
    int64_t v10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t* rbp13;
    int64_t* r14_14;
    int64_t r15_15;
    int64_t v16;
    int64_t v17;

    v4 = reinterpret_cast<signed char**>(__return_address());
    rsi5 = reinterpret_cast<signed char**>(0x4fd);
    rdi6 = v4;
    fun_50f();
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx7) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_56c();
        }
        *rdi6 = *rsi5;
        rdi6 = v4;
        rsi5 = reinterpret_cast<signed char**>(0x531);
        fun_538();
        ++rcx7;
    } while (rcx7 != 0x7d0);
    fun_58c(v4, 0x57a, 0x581);
    fun_5a6(0x593, 22, 1, v4);
    fun_47b(rbx8, 22, 1, v4);
    fun_485(v9, 22, 1, v4);
    fun_48f(v10, 22, 1, v4);
    fun_497(r12_11, 22, 1, v4);
    fun_49f(r13_12, 22, 1, v4);
    fun_4a7(rbp13, 22, 1, v4);
    fun_4af(r14_14, 22, 1, v4);
    fun_4b7(r15_15, 22, 1, v4);
    fun_4c1(v16, 22, 1, v4);
    goto v17;
}

void fun_485(int64_t rdi, struct s0* rsi, int32_t* rdx, signed char** rcx) {
    int64_t v5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t* rbp8;
    int64_t* r14_9;
    int64_t r15_10;
    int64_t v11;
    int64_t v12;

    fun_48f(v5, rsi, rdx, rcx);
    fun_497(r12_6, rsi, rdx, rcx);
    fun_49f(r13_7, rsi, rdx, rcx);
    fun_4a7(rbp8, rsi, rdx, rcx);
    fun_4af(r14_9, rsi, rdx, rcx);
    fun_4b7(r15_10, rsi, rdx, rcx);
    fun_4c1(v11, rsi, rdx, rcx);
    goto v12;
}

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f1;
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

int64_t fun_187(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t v4;
    int64_t rax5;
    int64_t rax6;
    int64_t v7;
    int64_t rax8;
    int64_t r12_9;
    int64_t rax10;
    int64_t r13_11;
    int64_t* rax12;
    int64_t* rbp13;
    int64_t* rax14;
    int64_t* r14_15;
    int64_t rax16;
    int64_t r15_17;
    int64_t rax18;
    int64_t r11_19;
    int32_t* rdi20;
    struct s16* rsi21;
    int64_t rcx22;
    int64_t rdx23;
    int32_t* rdi24;
    struct s17* rsi25;
    int32_t* rdi26;
    struct s18* rsi27;
    int32_t* rdi28;
    struct s19* rsi29;
    int32_t* rdi30;
    struct s20* rsi31;
    struct s21* rdi32;
    int32_t* rbx33;
    int64_t rcx34;
    int64_t rdx35;
    struct s22* rsi36;
    int32_t* rbx37;
    int32_t* rdi38;
    struct s23* rsi39;
    int32_t* rdi40;
    struct s24* rsi41;
    struct s25* rsi42;
    int64_t rdx43;
    int32_t* rdi44;
    int32_t* rsi45;
    struct s26* rsi46;
    int32_t* rbx47;
    int32_t* rdi48;
    struct s27* rsi49;
    struct s15* rsi50;
    int32_t* rdi51;
    struct s0* rsi52;
    int32_t* rdi53;
    struct s0* rsi54;
    struct s15* rsi55;
    signed char** rcx56;
    int32_t* rdx57;
    int32_t* rbx58;
    int32_t* rdi59;
    struct s0* rsi60;
    int64_t v61;
    int32_t v62;
    signed char*** rax63;
    signed char** v64;
    signed char** rsi65;
    signed char** rdi66;
    int64_t rcx67;
    int32_t* rbx68;
    int64_t v69;

    v3 = reinterpret_cast<signed char**>(__return_address());
    v4 = rax5;
    rax6 = fun_19b(0x7d0, 8);
    v7 = rax6;
    rax8 = fun_1af(0x7d0, 8);
    r12_9 = rax8;
    rax10 = fun_1c1(0x7d0, 8);
    r13_11 = rax10;
    rax12 = fun_1d3(0x7d0, 8);
    rbp13 = rax12;
    rax14 = fun_1e5(0x7d0, 8);
    r14_15 = rax14;
    rax16 = fun_1f7(0x7d0, 8);
    r15_17 = rax16;
    rax18 = fun_209(0x7d0, 8);
    *reinterpret_cast<int32_t*>(&r11_19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_19) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = LCPI1_1;
    g7d4 = gc;
    g7d8 = LCPI1_2;
    g7dc = g14;
    g7e0 = LCPI1_3;
    g7e4 = g1c;
    rdi20 = reinterpret_cast<int32_t*>(0x7e8);
    rsi21 = reinterpret_cast<struct s16*>(32);
    *reinterpret_cast<int32_t*>(&rcx22) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdx23 = rcx22;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edx");
        *rdi20 = rsi21->f0;
        rdi24 = rdi20 + 1;
        rsi25 = reinterpret_cast<struct s17*>(&rsi21->f4);
        ++rcx22;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm1");
        *rdi24 = rsi25->f0;
        rdi26 = rdi24 + 1;
        rsi27 = reinterpret_cast<struct s18*>(&rsi25->f1);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm2");
        *rdi26 = rsi27->f0;
        rdi28 = rdi26 + 1;
        rsi29 = reinterpret_cast<struct s19*>(&rsi27->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("divsd xmm7, xmm3");
        *rdi28 = rsi29->f0;
        rdi30 = rdi28 + 1;
        rsi31 = reinterpret_cast<struct s20*>(&rsi29->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm4");
        *rdi30 = rsi31->f0;
        __asm__("divsd xmm6, xmm5");
        rdi30[1] = rsi31->f4;
        r14_15[rdx23] = reinterpret_cast<int64_t>(fputc);
        rbp13[rdx23] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edi");
            __asm__("divsd xmm6, xmm0");
            rdi32 = reinterpret_cast<struct s21*>(rbx33 + rdx23 * 0xfa0);
            rdi32->f0 = rsi21->f0;
            rdi20 = &rdi32->f4;
            rsi21 = reinterpret_cast<struct s16*>(reinterpret_cast<int64_t>(&rsi21->f4) + 1);
        } while (!reinterpret_cast<int1_t>(rsi21 == 0x7d0));
    } while (rcx22 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx34) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi36 = reinterpret_cast<struct s22*>(rbx37 + r11_19 * 0xfa0);
            *rdi20 = rsi36->f0;
            rdi38 = rdi20 + 1;
            rsi39 = reinterpret_cast<struct s23*>(&rsi36->f4);
            __asm__("mulsd xmm0, [r10+rdx*8]");
            __asm__("addsd xmm0, [rsi+rdx*8]");
            *rdi38 = rsi39->f0;
            rdi40 = rdi38 + 1;
            rsi41 = reinterpret_cast<struct s24*>(&rsi39->f4);
            __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            *rdi40 = rsi41->f0;
            rdi20 = rdi40 + 1;
            rsi42 = reinterpret_cast<struct s25*>(&rsi41->f4);
            ++rdx35;
        } while (rdx35 != 0x7d0);
        ++r11_19;
    } while (r11_19 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rdx43) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx43) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi20 = rsi42->f0;
    rdi44 = rdi20 + 1;
    rsi45 = &rsi42->f4;
    do {
        *rdi44 = *rsi45;
        *reinterpret_cast<int32_t*>(&rdi44) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi46 = reinterpret_cast<struct s26*>(rbx47 + reinterpret_cast<int64_t>(rdi44) * 0xfa0);
            *rdi44 = rsi46->f0;
            rdi48 = rdi44 + 1;
            rsi49 = reinterpret_cast<struct s27*>(&rsi46->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r15+rdi*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi48 = rsi49->f0;
            rsi45 = &rsi49->f4;
            rdi44 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi48 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rdi44 == 0x7d0));
        ++rcx34;
    } while (rcx34 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rsi50) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi50) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *rdi44 = rsi50->f0;
        rdi51 = rdi44 + 1;
        rsi52 = reinterpret_cast<struct s0*>(&rsi50->f1);
        __asm__("addsd xmm0, [rax+rdx*8]");
        *rdi51 = rsi52->f0;
        rdi44 = rdi51 + 1;
        rsi50 = reinterpret_cast<struct s15*>(&rsi52->f4);
        ++rdx43;
    } while (rdx43 != 0x7d0);
    *rdi44 = rsi50->f0;
    rdi53 = rdi44 + 1;
    rsi54 = reinterpret_cast<struct s0*>(&rsi50->f1);
    do {
        *rdi53 = rsi54->f0;
        ++rdi53;
        rsi55 = reinterpret_cast<struct s15*>(&rsi54->f4);
        *reinterpret_cast<int32_t*>(&rcx56) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx56) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx57 = rbx58 + reinterpret_cast<int64_t>(rsi55) * 0xfa0;
            *rdi53 = rsi55->f0;
            rdi59 = rdi53 + 1;
            rsi60 = reinterpret_cast<struct s0*>(&rsi55->f1);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi59 = rsi60->f0;
            rdi53 = rdi59 + 1;
            rsi55 = reinterpret_cast<struct s15*>(&rsi60->f4);
            rcx56 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx56) + 1);
        } while (!reinterpret_cast<int1_t>(rcx56 == 0x7d0));
        rsi54 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi55) + 1);
    } while (!reinterpret_cast<int1_t>(rsi54 == 0x7d0));
    v61 = rax18;
    if (v62 >= 43 && **v3 == fputc) {
        rax63 = g4d9;
        v64 = *rax63;
        fun_4f6(0x4e7, 22, 1);
        rsi65 = reinterpret_cast<signed char**>(0x4fd);
        rdi66 = v64;
        fun_50f();
        *reinterpret_cast<int32_t*>(&rcx67) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx67) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx67) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi66) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi66) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi65 = v64;
                fun_56c();
            }
            *rdi66 = *rsi65;
            rdi66 = v64;
            rsi65 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rcx67;
        } while (rcx67 != 0x7d0);
        fun_58c(v64, 0x57a, 0x581);
        *reinterpret_cast<int32_t*>(&rsi54) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi54) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx57) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx57) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx56 = v64;
        fun_5a6(0x593, 22, 1, rcx56);
    }
    fun_47b(rbx68, rsi54, rdx57, rcx56);
    fun_485(v4, rsi54, rdx57, rcx56);
    fun_48f(v7, rsi54, rdx57, rcx56);
    fun_497(r12_9, rsi54, rdx57, rcx56);
    fun_49f(r13_11, rsi54, rdx57, rcx56);
    fun_4a7(rbp13, rsi54, rdx57, rcx56);
    fun_4af(r14_15, rsi54, rdx57, rcx56);
    fun_4b7(r15_17, rsi54, rdx57, rcx56);
    fun_4c1(v61, rsi54, rdx57, rcx56);
    goto v69;
}

void fun_50f() {
    signed char** v1;
    int64_t rcx2;
    signed char** rdi3;
    signed char** rsi4;
    int32_t* rbx5;
    int64_t v6;
    int64_t v7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t* rbp10;
    int64_t* r14_11;
    int64_t r15_12;
    int64_t v13;
    int64_t v14;

    v1 = reinterpret_cast<signed char**>(__return_address());
    *reinterpret_cast<int32_t*>(&rcx2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx2) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v1;
            fun_56c();
        }
        *rdi3 = *rsi4;
        rdi3 = v1;
        rsi4 = reinterpret_cast<signed char**>(0x531);
        fun_538();
        ++rcx2;
    } while (rcx2 != 0x7d0);
    fun_58c(v1, 0x57a, 0x581);
    fun_5a6(0x593, 22, 1, v1);
    fun_47b(rbx5, 22, 1, v1);
    fun_485(v6, 22, 1, v1);
    fun_48f(v7, 22, 1, v1);
    fun_497(r12_8, 22, 1, v1);
    fun_49f(r13_9, 22, 1, v1);
    fun_4a7(rbp10, 22, 1, v1);
    fun_4af(r14_11, 22, 1, v1);
    fun_4b7(r15_12, 22, 1, v1);
    fun_4c1(v13, 22, 1, v1);
    goto v14;
}

void fun_48f(int64_t rdi, struct s0* rsi, int32_t* rdx, signed char** rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t* rbp7;
    int64_t* r14_8;
    int64_t r15_9;
    int64_t v10;
    int64_t v11;

    fun_497(r12_5, rsi, rdx, rcx);
    fun_49f(r13_6, rsi, rdx, rcx);
    fun_4a7(rbp7, rsi, rdx, rcx);
    fun_4af(r14_8, rsi, rdx, rcx);
    fun_4b7(r15_9, rsi, rdx, rcx);
    fun_4c1(v10, rsi, rdx, rcx);
    goto v11;
}

void fun_58c(signed char** rdi, int64_t rsi, int64_t rdx) {
    int32_t* rbx4;
    int64_t v5;
    int64_t v6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t* rbp9;
    int64_t* r14_10;
    int64_t r15_11;
    int64_t v12;
    int64_t v13;

    fun_5a6(0x593, 22, 1, __return_address());
    fun_47b(rbx4, 22, 1, __return_address());
    fun_485(v5, 22, 1, __return_address());
    fun_48f(v6, 22, 1, __return_address());
    fun_497(r12_7, 22, 1, __return_address());
    fun_49f(r13_8, 22, 1, __return_address());
    fun_4a7(rbp9, 22, 1, __return_address());
    fun_4af(r14_10, 22, 1, __return_address());
    fun_4b7(r15_11, 22, 1, __return_address());
    fun_4c1(v12, 22, 1, __return_address());
    goto v13;
}

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s29 {
    int32_t f0;
    int32_t f1;
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

int64_t fun_19b(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t v4;
    int64_t rax5;
    int64_t rax6;
    int64_t r12_7;
    int64_t rax8;
    int64_t r13_9;
    int64_t* rax10;
    int64_t* rbp11;
    int64_t* rax12;
    int64_t* r14_13;
    int64_t rax14;
    int64_t r15_15;
    int64_t rax16;
    int64_t r11_17;
    int32_t* rdi18;
    struct s28* rsi19;
    int64_t rcx20;
    int64_t rdx21;
    int32_t* rdi22;
    struct s29* rsi23;
    int32_t* rdi24;
    struct s30* rsi25;
    int32_t* rdi26;
    struct s31* rsi27;
    int32_t* rdi28;
    struct s32* rsi29;
    struct s33* rdi30;
    int32_t* rbx31;
    int64_t rcx32;
    int64_t rdx33;
    struct s34* rsi34;
    int32_t* rbx35;
    int32_t* rdi36;
    struct s35* rsi37;
    int32_t* rdi38;
    struct s36* rsi39;
    struct s37* rsi40;
    int64_t rdx41;
    int32_t* rdi42;
    int32_t* rsi43;
    struct s38* rsi44;
    int32_t* rbx45;
    int32_t* rdi46;
    struct s39* rsi47;
    struct s15* rsi48;
    int32_t* rdi49;
    struct s0* rsi50;
    int32_t* rdi51;
    struct s0* rsi52;
    struct s15* rsi53;
    signed char** rcx54;
    int32_t* rdx55;
    int32_t* rbx56;
    int32_t* rdi57;
    struct s0* rsi58;
    int64_t v59;
    int32_t v60;
    signed char*** rax61;
    signed char** v62;
    signed char** rsi63;
    signed char** rdi64;
    int64_t rcx65;
    int32_t* rbx66;
    int64_t v67;
    int64_t v68;

    v3 = reinterpret_cast<signed char**>(__return_address());
    v4 = rax5;
    rax6 = fun_1af(0x7d0, 8);
    r12_7 = rax6;
    rax8 = fun_1c1(0x7d0, 8);
    r13_9 = rax8;
    rax10 = fun_1d3(0x7d0, 8);
    rbp11 = rax10;
    rax12 = fun_1e5(0x7d0, 8);
    r14_13 = rax12;
    rax14 = fun_1f7(0x7d0, 8);
    r15_15 = rax14;
    rax16 = fun_209(0x7d0, 8);
    *reinterpret_cast<int32_t*>(&r11_17) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_17) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = LCPI1_1;
    g7d4 = gc;
    g7d8 = LCPI1_2;
    g7dc = g14;
    g7e0 = LCPI1_3;
    g7e4 = g1c;
    rdi18 = reinterpret_cast<int32_t*>(0x7e8);
    rsi19 = reinterpret_cast<struct s28*>(32);
    *reinterpret_cast<int32_t*>(&rcx20) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdx21 = rcx20;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edx");
        *rdi18 = rsi19->f0;
        rdi22 = rdi18 + 1;
        rsi23 = reinterpret_cast<struct s29*>(&rsi19->f4);
        ++rcx20;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm1");
        *rdi22 = rsi23->f0;
        rdi24 = rdi22 + 1;
        rsi25 = reinterpret_cast<struct s30*>(&rsi23->f1);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm2");
        *rdi24 = rsi25->f0;
        rdi26 = rdi24 + 1;
        rsi27 = reinterpret_cast<struct s31*>(&rsi25->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("divsd xmm7, xmm3");
        *rdi26 = rsi27->f0;
        rdi28 = rdi26 + 1;
        rsi29 = reinterpret_cast<struct s32*>(&rsi27->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm4");
        *rdi28 = rsi29->f0;
        __asm__("divsd xmm6, xmm5");
        rdi28[1] = rsi29->f4;
        r14_13[rdx21] = reinterpret_cast<int64_t>(fputc);
        rbp11[rdx21] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rsi19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edi");
            __asm__("divsd xmm6, xmm0");
            rdi30 = reinterpret_cast<struct s33*>(rbx31 + rdx21 * 0xfa0);
            rdi30->f0 = rsi19->f0;
            rdi18 = &rdi30->f4;
            rsi19 = reinterpret_cast<struct s28*>(reinterpret_cast<int64_t>(&rsi19->f4) + 1);
        } while (!reinterpret_cast<int1_t>(rsi19 == 0x7d0));
    } while (rcx20 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx32) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi34 = reinterpret_cast<struct s34*>(rbx35 + r11_17 * 0xfa0);
            *rdi18 = rsi34->f0;
            rdi36 = rdi18 + 1;
            rsi37 = reinterpret_cast<struct s35*>(&rsi34->f4);
            __asm__("mulsd xmm0, [r10+rdx*8]");
            __asm__("addsd xmm0, [rsi+rdx*8]");
            *rdi36 = rsi37->f0;
            rdi38 = rdi36 + 1;
            rsi39 = reinterpret_cast<struct s36*>(&rsi37->f4);
            __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            *rdi38 = rsi39->f0;
            rdi18 = rdi38 + 1;
            rsi40 = reinterpret_cast<struct s37*>(&rsi39->f4);
            ++rdx33;
        } while (rdx33 != 0x7d0);
        ++r11_17;
    } while (r11_17 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rdx41) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx41) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi18 = rsi40->f0;
    rdi42 = rdi18 + 1;
    rsi43 = &rsi40->f4;
    do {
        *rdi42 = *rsi43;
        *reinterpret_cast<int32_t*>(&rdi42) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi44 = reinterpret_cast<struct s38*>(rbx45 + reinterpret_cast<int64_t>(rdi42) * 0xfa0);
            *rdi42 = rsi44->f0;
            rdi46 = rdi42 + 1;
            rsi47 = reinterpret_cast<struct s39*>(&rsi44->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r15+rdi*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi46 = rsi47->f0;
            rsi43 = &rsi47->f4;
            rdi42 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi46 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rdi42 == 0x7d0));
        ++rcx32;
    } while (rcx32 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rsi48) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi48) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *rdi42 = rsi48->f0;
        rdi49 = rdi42 + 1;
        rsi50 = reinterpret_cast<struct s0*>(&rsi48->f1);
        __asm__("addsd xmm0, [rax+rdx*8]");
        *rdi49 = rsi50->f0;
        rdi42 = rdi49 + 1;
        rsi48 = reinterpret_cast<struct s15*>(&rsi50->f4);
        ++rdx41;
    } while (rdx41 != 0x7d0);
    *rdi42 = rsi48->f0;
    rdi51 = rdi42 + 1;
    rsi52 = reinterpret_cast<struct s0*>(&rsi48->f1);
    do {
        *rdi51 = rsi52->f0;
        ++rdi51;
        rsi53 = reinterpret_cast<struct s15*>(&rsi52->f4);
        *reinterpret_cast<int32_t*>(&rcx54) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx54) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx55 = rbx56 + reinterpret_cast<int64_t>(rsi53) * 0xfa0;
            *rdi51 = rsi53->f0;
            rdi57 = rdi51 + 1;
            rsi58 = reinterpret_cast<struct s0*>(&rsi53->f1);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi57 = rsi58->f0;
            rdi51 = rdi57 + 1;
            rsi53 = reinterpret_cast<struct s15*>(&rsi58->f4);
            rcx54 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx54) + 1);
        } while (!reinterpret_cast<int1_t>(rcx54 == 0x7d0));
        rsi52 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi53) + 1);
    } while (!reinterpret_cast<int1_t>(rsi52 == 0x7d0));
    v59 = rax16;
    if (v60 >= 43 && **v3 == fputc) {
        rax61 = g4d9;
        v62 = *rax61;
        fun_4f6(0x4e7, 22, 1);
        rsi63 = reinterpret_cast<signed char**>(0x4fd);
        rdi64 = v62;
        fun_50f();
        *reinterpret_cast<int32_t*>(&rcx65) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx65) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx65) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi64) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi64) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi63 = v62;
                fun_56c();
            }
            *rdi64 = *rsi63;
            rdi64 = v62;
            rsi63 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rcx65;
        } while (rcx65 != 0x7d0);
        fun_58c(v62, 0x57a, 0x581);
        *reinterpret_cast<int32_t*>(&rsi52) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi52) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx55) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx55) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx54 = v62;
        fun_5a6(0x593, 22, 1, rcx54);
    }
    fun_47b(rbx66, rsi52, rdx55, rcx54);
    fun_485(v67, rsi52, rdx55, rcx54);
    fun_48f(v4, rsi52, rdx55, rcx54);
    fun_497(r12_7, rsi52, rdx55, rcx54);
    fun_49f(r13_9, rsi52, rdx55, rcx54);
    fun_4a7(rbp11, rsi52, rdx55, rcx54);
    fun_4af(r14_13, rsi52, rdx55, rcx54);
    fun_4b7(r15_15, rsi52, rdx55, rcx54);
    fun_4c1(v59, rsi52, rdx55, rcx54);
    goto v68;
}

void fun_497(int64_t rdi, struct s0* rsi, int32_t* rdx, signed char** rcx) {
    int64_t r13_5;
    int64_t* rbp6;
    int64_t* r14_7;
    int64_t r15_8;
    int64_t v9;
    int64_t v10;

    fun_49f(r13_5, rsi, rdx, rcx);
    fun_4a7(rbp6, rsi, rdx, rcx);
    fun_4af(r14_7, rsi, rdx, rcx);
    fun_4b7(r15_8, rsi, rdx, rcx);
    fun_4c1(v9, rsi, rdx, rcx);
    goto v10;
}

void fun_5a6(int64_t rdi, struct s0* rsi, int32_t* rdx, signed char** rcx) {
    int32_t* rbx5;
    int64_t v6;
    int64_t v7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t* rbp10;
    int64_t* r14_11;
    int64_t r15_12;
    int64_t v13;
    int64_t v14;

    fun_47b(rbx5, rsi, rdx, rcx);
    fun_485(v6, rsi, rdx, rcx);
    fun_48f(v7, rsi, rdx, rcx);
    fun_497(r12_8, rsi, rdx, rcx);
    fun_49f(r13_9, rsi, rdx, rcx);
    fun_4a7(rbp10, rsi, rdx, rcx);
    fun_4af(r14_11, rsi, rdx, rcx);
    fun_4b7(r15_12, rsi, rdx, rcx);
    fun_4c1(v13, rsi, rdx, rcx);
    goto v14;
}

struct s40 {
    int32_t f0;
    int32_t f4;
};

struct s41 {
    int32_t f0;
    int32_t f1;
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
    int32_t f4;
};

int64_t fun_1af(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t r12_4;
    int64_t rax5;
    int64_t rax6;
    int64_t r13_7;
    int64_t* rax8;
    int64_t* rbp9;
    int64_t* rax10;
    int64_t* r14_11;
    int64_t rax12;
    int64_t r15_13;
    int64_t rax14;
    int64_t r11_15;
    int32_t* rdi16;
    struct s40* rsi17;
    int64_t rcx18;
    int64_t rdx19;
    int32_t* rdi20;
    struct s41* rsi21;
    int32_t* rdi22;
    struct s42* rsi23;
    int32_t* rdi24;
    struct s43* rsi25;
    int32_t* rdi26;
    struct s44* rsi27;
    struct s45* rdi28;
    int32_t* rbx29;
    int64_t rcx30;
    int64_t rdx31;
    struct s46* rsi32;
    int32_t* rbx33;
    int32_t* rdi34;
    struct s47* rsi35;
    int32_t* rdi36;
    struct s48* rsi37;
    struct s49* rsi38;
    int64_t rdx39;
    int32_t* rdi40;
    int32_t* rsi41;
    struct s50* rsi42;
    int32_t* rbx43;
    int32_t* rdi44;
    struct s51* rsi45;
    struct s15* rsi46;
    int32_t* rdi47;
    struct s0* rsi48;
    int32_t* rdi49;
    struct s0* rsi50;
    struct s15* rsi51;
    signed char** rcx52;
    int32_t* rdx53;
    int32_t* rbx54;
    int32_t* rdi55;
    struct s0* rsi56;
    int64_t v57;
    int32_t v58;
    signed char*** rax59;
    signed char** v60;
    signed char** rsi61;
    signed char** rdi62;
    int64_t rcx63;
    int32_t* rbx64;
    int64_t v65;
    int64_t v66;
    int64_t v67;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r12_4 = rax5;
    rax6 = fun_1c1(0x7d0, 8);
    r13_7 = rax6;
    rax8 = fun_1d3(0x7d0, 8);
    rbp9 = rax8;
    rax10 = fun_1e5(0x7d0, 8);
    r14_11 = rax10;
    rax12 = fun_1f7(0x7d0, 8);
    r15_13 = rax12;
    rax14 = fun_209(0x7d0, 8);
    *reinterpret_cast<int32_t*>(&r11_15) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_15) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = LCPI1_1;
    g7d4 = gc;
    g7d8 = LCPI1_2;
    g7dc = g14;
    g7e0 = LCPI1_3;
    g7e4 = g1c;
    rdi16 = reinterpret_cast<int32_t*>(0x7e8);
    rsi17 = reinterpret_cast<struct s40*>(32);
    *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdx19 = rcx18;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edx");
        *rdi16 = rsi17->f0;
        rdi20 = rdi16 + 1;
        rsi21 = reinterpret_cast<struct s41*>(&rsi17->f4);
        ++rcx18;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm1");
        *rdi20 = rsi21->f0;
        rdi22 = rdi20 + 1;
        rsi23 = reinterpret_cast<struct s42*>(&rsi21->f1);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm2");
        *rdi22 = rsi23->f0;
        rdi24 = rdi22 + 1;
        rsi25 = reinterpret_cast<struct s43*>(&rsi23->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("divsd xmm7, xmm3");
        *rdi24 = rsi25->f0;
        rdi26 = rdi24 + 1;
        rsi27 = reinterpret_cast<struct s44*>(&rsi25->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm4");
        *rdi26 = rsi27->f0;
        __asm__("divsd xmm6, xmm5");
        rdi26[1] = rsi27->f4;
        r14_11[rdx19] = reinterpret_cast<int64_t>(fputc);
        rbp9[rdx19] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rsi17) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edi");
            __asm__("divsd xmm6, xmm0");
            rdi28 = reinterpret_cast<struct s45*>(rbx29 + rdx19 * 0xfa0);
            rdi28->f0 = rsi17->f0;
            rdi16 = &rdi28->f4;
            rsi17 = reinterpret_cast<struct s40*>(reinterpret_cast<int64_t>(&rsi17->f4) + 1);
        } while (!reinterpret_cast<int1_t>(rsi17 == 0x7d0));
    } while (rcx18 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx30) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx30) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx31) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi32 = reinterpret_cast<struct s46*>(rbx33 + r11_15 * 0xfa0);
            *rdi16 = rsi32->f0;
            rdi34 = rdi16 + 1;
            rsi35 = reinterpret_cast<struct s47*>(&rsi32->f4);
            __asm__("mulsd xmm0, [r10+rdx*8]");
            __asm__("addsd xmm0, [rsi+rdx*8]");
            *rdi34 = rsi35->f0;
            rdi36 = rdi34 + 1;
            rsi37 = reinterpret_cast<struct s48*>(&rsi35->f4);
            __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            *rdi36 = rsi37->f0;
            rdi16 = rdi36 + 1;
            rsi38 = reinterpret_cast<struct s49*>(&rsi37->f4);
            ++rdx31;
        } while (rdx31 != 0x7d0);
        ++r11_15;
    } while (r11_15 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rdx39) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi16 = rsi38->f0;
    rdi40 = rdi16 + 1;
    rsi41 = &rsi38->f4;
    do {
        *rdi40 = *rsi41;
        *reinterpret_cast<int32_t*>(&rdi40) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi42 = reinterpret_cast<struct s50*>(rbx43 + reinterpret_cast<int64_t>(rdi40) * 0xfa0);
            *rdi40 = rsi42->f0;
            rdi44 = rdi40 + 1;
            rsi45 = reinterpret_cast<struct s51*>(&rsi42->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r15+rdi*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi44 = rsi45->f0;
            rsi41 = &rsi45->f4;
            rdi40 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi44 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rdi40 == 0x7d0));
        ++rcx30;
    } while (rcx30 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rsi46) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi46) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *rdi40 = rsi46->f0;
        rdi47 = rdi40 + 1;
        rsi48 = reinterpret_cast<struct s0*>(&rsi46->f1);
        __asm__("addsd xmm0, [rax+rdx*8]");
        *rdi47 = rsi48->f0;
        rdi40 = rdi47 + 1;
        rsi46 = reinterpret_cast<struct s15*>(&rsi48->f4);
        ++rdx39;
    } while (rdx39 != 0x7d0);
    *rdi40 = rsi46->f0;
    rdi49 = rdi40 + 1;
    rsi50 = reinterpret_cast<struct s0*>(&rsi46->f1);
    do {
        *rdi49 = rsi50->f0;
        ++rdi49;
        rsi51 = reinterpret_cast<struct s15*>(&rsi50->f4);
        *reinterpret_cast<int32_t*>(&rcx52) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx52) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx53 = rbx54 + reinterpret_cast<int64_t>(rsi51) * 0xfa0;
            *rdi49 = rsi51->f0;
            rdi55 = rdi49 + 1;
            rsi56 = reinterpret_cast<struct s0*>(&rsi51->f1);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi55 = rsi56->f0;
            rdi49 = rdi55 + 1;
            rsi51 = reinterpret_cast<struct s15*>(&rsi56->f4);
            rcx52 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx52) + 1);
        } while (!reinterpret_cast<int1_t>(rcx52 == 0x7d0));
        rsi50 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi51) + 1);
    } while (!reinterpret_cast<int1_t>(rsi50 == 0x7d0));
    v57 = rax14;
    if (v58 >= 43 && **v3 == fputc) {
        rax59 = g4d9;
        v60 = *rax59;
        fun_4f6(0x4e7, 22, 1);
        rsi61 = reinterpret_cast<signed char**>(0x4fd);
        rdi62 = v60;
        fun_50f();
        *reinterpret_cast<int32_t*>(&rcx63) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx63) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx63) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi62) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi62) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi61 = v60;
                fun_56c();
            }
            *rdi62 = *rsi61;
            rdi62 = v60;
            rsi61 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rcx63;
        } while (rcx63 != 0x7d0);
        fun_58c(v60, 0x57a, 0x581);
        *reinterpret_cast<int32_t*>(&rsi50) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi50) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx53) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx53) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx52 = v60;
        fun_5a6(0x593, 22, 1, rcx52);
    }
    fun_47b(rbx64, rsi50, rdx53, rcx52);
    fun_485(v65, rsi50, rdx53, rcx52);
    fun_48f(v66, rsi50, rdx53, rcx52);
    fun_497(r12_4, rsi50, rdx53, rcx52);
    fun_49f(r13_7, rsi50, rdx53, rcx52);
    fun_4a7(rbp9, rsi50, rdx53, rcx52);
    fun_4af(r14_11, rsi50, rdx53, rcx52);
    fun_4b7(r15_13, rsi50, rdx53, rcx52);
    fun_4c1(v57, rsi50, rdx53, rcx52);
    goto v67;
}

void fun_49f(int64_t rdi, struct s0* rsi, int32_t* rdx, signed char** rcx) {
    int64_t* rbp5;
    int64_t* r14_6;
    int64_t r15_7;
    int64_t v8;
    int64_t v9;

    fun_4a7(rbp5, rsi, rdx, rcx);
    fun_4af(r14_6, rsi, rdx, rcx);
    fun_4b7(r15_7, rsi, rdx, rcx);
    fun_4c1(v8, rsi, rdx, rcx);
    goto v9;
}

struct s52 {
    int32_t f0;
    int32_t f4;
};

struct s53 {
    int32_t f0;
    int32_t f1;
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

struct s61 {
    int32_t f0;
    int32_t f4;
};

struct s62 {
    int32_t f0;
    int32_t f4;
};

struct s63 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_1c1(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t r13_4;
    int64_t rax5;
    int64_t* rax6;
    int64_t* rbp7;
    int64_t* rax8;
    int64_t* r14_9;
    int64_t rax10;
    int64_t r15_11;
    int64_t rax12;
    int64_t r11_13;
    int32_t* rdi14;
    struct s52* rsi15;
    int64_t rcx16;
    int64_t rdx17;
    int32_t* rdi18;
    struct s53* rsi19;
    int32_t* rdi20;
    struct s54* rsi21;
    int32_t* rdi22;
    struct s55* rsi23;
    int32_t* rdi24;
    struct s56* rsi25;
    struct s57* rdi26;
    int32_t* rbx27;
    int64_t rcx28;
    int64_t rdx29;
    struct s58* rsi30;
    int32_t* rbx31;
    int32_t* rdi32;
    struct s59* rsi33;
    int32_t* rdi34;
    struct s60* rsi35;
    struct s61* rsi36;
    int64_t rdx37;
    int32_t* rdi38;
    int32_t* rsi39;
    struct s62* rsi40;
    int32_t* rbx41;
    int32_t* rdi42;
    struct s63* rsi43;
    struct s15* rsi44;
    int32_t* rdi45;
    struct s0* rsi46;
    int32_t* rdi47;
    struct s0* rsi48;
    struct s15* rsi49;
    signed char** rcx50;
    int32_t* rdx51;
    int32_t* rbx52;
    int32_t* rdi53;
    struct s0* rsi54;
    int64_t v55;
    int32_t v56;
    signed char*** rax57;
    signed char** v58;
    signed char** rsi59;
    signed char** rdi60;
    int64_t rcx61;
    int32_t* rbx62;
    int64_t v63;
    int64_t v64;
    int64_t r12_65;
    int64_t v66;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r13_4 = rax5;
    rax6 = fun_1d3(0x7d0, 8);
    rbp7 = rax6;
    rax8 = fun_1e5(0x7d0, 8);
    r14_9 = rax8;
    rax10 = fun_1f7(0x7d0, 8);
    r15_11 = rax10;
    rax12 = fun_209(0x7d0, 8);
    *reinterpret_cast<int32_t*>(&r11_13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_13) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = LCPI1_1;
    g7d4 = gc;
    g7d8 = LCPI1_2;
    g7dc = g14;
    g7e0 = LCPI1_3;
    g7e4 = g1c;
    rdi14 = reinterpret_cast<int32_t*>(0x7e8);
    rsi15 = reinterpret_cast<struct s52*>(32);
    *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdx17 = rcx16;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edx");
        *rdi14 = rsi15->f0;
        rdi18 = rdi14 + 1;
        rsi19 = reinterpret_cast<struct s53*>(&rsi15->f4);
        ++rcx16;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm1");
        *rdi18 = rsi19->f0;
        rdi20 = rdi18 + 1;
        rsi21 = reinterpret_cast<struct s54*>(&rsi19->f1);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm2");
        *rdi20 = rsi21->f0;
        rdi22 = rdi20 + 1;
        rsi23 = reinterpret_cast<struct s55*>(&rsi21->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("divsd xmm7, xmm3");
        *rdi22 = rsi23->f0;
        rdi24 = rdi22 + 1;
        rsi25 = reinterpret_cast<struct s56*>(&rsi23->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm4");
        *rdi24 = rsi25->f0;
        __asm__("divsd xmm6, xmm5");
        rdi24[1] = rsi25->f4;
        r14_9[rdx17] = reinterpret_cast<int64_t>(fputc);
        rbp7[rdx17] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rsi15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edi");
            __asm__("divsd xmm6, xmm0");
            rdi26 = reinterpret_cast<struct s57*>(rbx27 + rdx17 * 0xfa0);
            rdi26->f0 = rsi15->f0;
            rdi14 = &rdi26->f4;
            rsi15 = reinterpret_cast<struct s52*>(reinterpret_cast<int64_t>(&rsi15->f4) + 1);
        } while (!reinterpret_cast<int1_t>(rsi15 == 0x7d0));
    } while (rcx16 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx28) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi30 = reinterpret_cast<struct s58*>(rbx31 + r11_13 * 0xfa0);
            *rdi14 = rsi30->f0;
            rdi32 = rdi14 + 1;
            rsi33 = reinterpret_cast<struct s59*>(&rsi30->f4);
            __asm__("mulsd xmm0, [r10+rdx*8]");
            __asm__("addsd xmm0, [rsi+rdx*8]");
            *rdi32 = rsi33->f0;
            rdi34 = rdi32 + 1;
            rsi35 = reinterpret_cast<struct s60*>(&rsi33->f4);
            __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            *rdi34 = rsi35->f0;
            rdi14 = rdi34 + 1;
            rsi36 = reinterpret_cast<struct s61*>(&rsi35->f4);
            ++rdx29;
        } while (rdx29 != 0x7d0);
        ++r11_13;
    } while (r11_13 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rdx37) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi14 = rsi36->f0;
    rdi38 = rdi14 + 1;
    rsi39 = &rsi36->f4;
    do {
        *rdi38 = *rsi39;
        *reinterpret_cast<int32_t*>(&rdi38) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi40 = reinterpret_cast<struct s62*>(rbx41 + reinterpret_cast<int64_t>(rdi38) * 0xfa0);
            *rdi38 = rsi40->f0;
            rdi42 = rdi38 + 1;
            rsi43 = reinterpret_cast<struct s63*>(&rsi40->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r15+rdi*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi42 = rsi43->f0;
            rsi39 = &rsi43->f4;
            rdi38 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi42 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rdi38 == 0x7d0));
        ++rcx28;
    } while (rcx28 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rsi44) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi44) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *rdi38 = rsi44->f0;
        rdi45 = rdi38 + 1;
        rsi46 = reinterpret_cast<struct s0*>(&rsi44->f1);
        __asm__("addsd xmm0, [rax+rdx*8]");
        *rdi45 = rsi46->f0;
        rdi38 = rdi45 + 1;
        rsi44 = reinterpret_cast<struct s15*>(&rsi46->f4);
        ++rdx37;
    } while (rdx37 != 0x7d0);
    *rdi38 = rsi44->f0;
    rdi47 = rdi38 + 1;
    rsi48 = reinterpret_cast<struct s0*>(&rsi44->f1);
    do {
        *rdi47 = rsi48->f0;
        ++rdi47;
        rsi49 = reinterpret_cast<struct s15*>(&rsi48->f4);
        *reinterpret_cast<int32_t*>(&rcx50) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx50) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx51 = rbx52 + reinterpret_cast<int64_t>(rsi49) * 0xfa0;
            *rdi47 = rsi49->f0;
            rdi53 = rdi47 + 1;
            rsi54 = reinterpret_cast<struct s0*>(&rsi49->f1);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi53 = rsi54->f0;
            rdi47 = rdi53 + 1;
            rsi49 = reinterpret_cast<struct s15*>(&rsi54->f4);
            rcx50 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx50) + 1);
        } while (!reinterpret_cast<int1_t>(rcx50 == 0x7d0));
        rsi48 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi49) + 1);
    } while (!reinterpret_cast<int1_t>(rsi48 == 0x7d0));
    v55 = rax12;
    if (v56 >= 43 && **v3 == fputc) {
        rax57 = g4d9;
        v58 = *rax57;
        fun_4f6(0x4e7, 22, 1);
        rsi59 = reinterpret_cast<signed char**>(0x4fd);
        rdi60 = v58;
        fun_50f();
        *reinterpret_cast<int32_t*>(&rcx61) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx61) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx61) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi60) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi60) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi59 = v58;
                fun_56c();
            }
            *rdi60 = *rsi59;
            rdi60 = v58;
            rsi59 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rcx61;
        } while (rcx61 != 0x7d0);
        fun_58c(v58, 0x57a, 0x581);
        *reinterpret_cast<int32_t*>(&rsi48) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi48) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx51) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx51) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx50 = v58;
        fun_5a6(0x593, 22, 1, rcx50);
    }
    fun_47b(rbx62, rsi48, rdx51, rcx50);
    fun_485(v63, rsi48, rdx51, rcx50);
    fun_48f(v64, rsi48, rdx51, rcx50);
    fun_497(r12_65, rsi48, rdx51, rcx50);
    fun_49f(r13_4, rsi48, rdx51, rcx50);
    fun_4a7(rbp7, rsi48, rdx51, rcx50);
    fun_4af(r14_9, rsi48, rdx51, rcx50);
    fun_4b7(r15_11, rsi48, rdx51, rcx50);
    fun_4c1(v55, rsi48, rdx51, rcx50);
    goto v66;
}

void fun_4a7(int64_t* rdi, struct s0* rsi, int32_t* rdx, signed char** rcx) {
    int64_t* r14_5;
    int64_t r15_6;
    int64_t v7;
    int64_t v8;

    fun_4af(r14_5, rsi, rdx, rcx);
    fun_4b7(r15_6, rsi, rdx, rcx);
    fun_4c1(v7, rsi, rdx, rcx);
    goto v8;
}

struct s64 {
    int32_t f0;
    int32_t f4;
};

struct s65 {
    int32_t f0;
    int32_t f1;
    int32_t f4;
};

struct s66 {
    int32_t f0;
    int32_t f4;
};

struct s67 {
    int32_t f0;
    int32_t f4;
};

struct s68 {
    int32_t f0;
    int32_t f4;
};

struct s69 {
    int32_t f0;
    int32_t f4;
};

struct s70 {
    int32_t f0;
    int32_t f4;
};

struct s71 {
    int32_t f0;
    int32_t f4;
};

struct s72 {
    int32_t f0;
    int32_t f4;
};

struct s73 {
    int32_t f0;
    int32_t f4;
};

struct s74 {
    int32_t f0;
    int32_t f4;
};

struct s75 {
    int32_t f0;
    int32_t f4;
};

int64_t* fun_1d3(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t* rbp4;
    int64_t* rax5;
    int64_t* rax6;
    int64_t* r14_7;
    int64_t rax8;
    int64_t r15_9;
    int64_t rax10;
    int64_t r11_11;
    int32_t* rdi12;
    struct s64* rsi13;
    int64_t rcx14;
    int64_t rdx15;
    int32_t* rdi16;
    struct s65* rsi17;
    int32_t* rdi18;
    struct s66* rsi19;
    int32_t* rdi20;
    struct s67* rsi21;
    int32_t* rdi22;
    struct s68* rsi23;
    struct s69* rdi24;
    int32_t* rbx25;
    int64_t rcx26;
    int64_t rdx27;
    struct s70* rsi28;
    int32_t* rbx29;
    int32_t* rdi30;
    struct s71* rsi31;
    int32_t* rdi32;
    struct s72* rsi33;
    struct s73* rsi34;
    int64_t rdx35;
    int32_t* rdi36;
    int32_t* rsi37;
    struct s74* rsi38;
    int32_t* rbx39;
    int32_t* rdi40;
    struct s75* rsi41;
    struct s15* rsi42;
    int32_t* rdi43;
    struct s0* rsi44;
    int32_t* rdi45;
    struct s0* rsi46;
    struct s15* rsi47;
    signed char** rcx48;
    int32_t* rdx49;
    int32_t* rbx50;
    int32_t* rdi51;
    struct s0* rsi52;
    int64_t v53;
    int32_t v54;
    signed char*** rax55;
    signed char** v56;
    signed char** rsi57;
    signed char** rdi58;
    int64_t rcx59;
    int32_t* rbx60;
    int64_t v61;
    int64_t v62;
    int64_t r12_63;
    int64_t r13_64;
    int64_t v65;

    v3 = reinterpret_cast<signed char**>(__return_address());
    rbp4 = rax5;
    rax6 = fun_1e5(0x7d0, 8);
    r14_7 = rax6;
    rax8 = fun_1f7(0x7d0, 8);
    r15_9 = rax8;
    rax10 = fun_209(0x7d0, 8);
    *reinterpret_cast<int32_t*>(&r11_11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_11) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = LCPI1_1;
    g7d4 = gc;
    g7d8 = LCPI1_2;
    g7dc = g14;
    g7e0 = LCPI1_3;
    g7e4 = g1c;
    rdi12 = reinterpret_cast<int32_t*>(0x7e8);
    rsi13 = reinterpret_cast<struct s64*>(32);
    *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdx15 = rcx14;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edx");
        *rdi12 = rsi13->f0;
        rdi16 = rdi12 + 1;
        rsi17 = reinterpret_cast<struct s65*>(&rsi13->f4);
        ++rcx14;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm1");
        *rdi16 = rsi17->f0;
        rdi18 = rdi16 + 1;
        rsi19 = reinterpret_cast<struct s66*>(&rsi17->f1);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm2");
        *rdi18 = rsi19->f0;
        rdi20 = rdi18 + 1;
        rsi21 = reinterpret_cast<struct s67*>(&rsi19->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("divsd xmm7, xmm3");
        *rdi20 = rsi21->f0;
        rdi22 = rdi20 + 1;
        rsi23 = reinterpret_cast<struct s68*>(&rsi21->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm4");
        *rdi22 = rsi23->f0;
        __asm__("divsd xmm6, xmm5");
        rdi22[1] = rsi23->f4;
        r14_7[rdx15] = reinterpret_cast<int64_t>(fputc);
        rbp4[rdx15] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edi");
            __asm__("divsd xmm6, xmm0");
            rdi24 = reinterpret_cast<struct s69*>(rbx25 + rdx15 * 0xfa0);
            rdi24->f0 = rsi13->f0;
            rdi12 = &rdi24->f4;
            rsi13 = reinterpret_cast<struct s64*>(reinterpret_cast<int64_t>(&rsi13->f4) + 1);
        } while (!reinterpret_cast<int1_t>(rsi13 == 0x7d0));
    } while (rcx14 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx26) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi28 = reinterpret_cast<struct s70*>(rbx29 + r11_11 * 0xfa0);
            *rdi12 = rsi28->f0;
            rdi30 = rdi12 + 1;
            rsi31 = reinterpret_cast<struct s71*>(&rsi28->f4);
            __asm__("mulsd xmm0, [r10+rdx*8]");
            __asm__("addsd xmm0, [rsi+rdx*8]");
            *rdi30 = rsi31->f0;
            rdi32 = rdi30 + 1;
            rsi33 = reinterpret_cast<struct s72*>(&rsi31->f4);
            __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            *rdi32 = rsi33->f0;
            rdi12 = rdi32 + 1;
            rsi34 = reinterpret_cast<struct s73*>(&rsi33->f4);
            ++rdx27;
        } while (rdx27 != 0x7d0);
        ++r11_11;
    } while (r11_11 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi12 = rsi34->f0;
    rdi36 = rdi12 + 1;
    rsi37 = &rsi34->f4;
    do {
        *rdi36 = *rsi37;
        *reinterpret_cast<int32_t*>(&rdi36) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi38 = reinterpret_cast<struct s74*>(rbx39 + reinterpret_cast<int64_t>(rdi36) * 0xfa0);
            *rdi36 = rsi38->f0;
            rdi40 = rdi36 + 1;
            rsi41 = reinterpret_cast<struct s75*>(&rsi38->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r15+rdi*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi40 = rsi41->f0;
            rsi37 = &rsi41->f4;
            rdi36 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi40 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rdi36 == 0x7d0));
        ++rcx26;
    } while (rcx26 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rsi42) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi42) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *rdi36 = rsi42->f0;
        rdi43 = rdi36 + 1;
        rsi44 = reinterpret_cast<struct s0*>(&rsi42->f1);
        __asm__("addsd xmm0, [rax+rdx*8]");
        *rdi43 = rsi44->f0;
        rdi36 = rdi43 + 1;
        rsi42 = reinterpret_cast<struct s15*>(&rsi44->f4);
        ++rdx35;
    } while (rdx35 != 0x7d0);
    *rdi36 = rsi42->f0;
    rdi45 = rdi36 + 1;
    rsi46 = reinterpret_cast<struct s0*>(&rsi42->f1);
    do {
        *rdi45 = rsi46->f0;
        ++rdi45;
        rsi47 = reinterpret_cast<struct s15*>(&rsi46->f4);
        *reinterpret_cast<int32_t*>(&rcx48) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx48) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx49 = rbx50 + reinterpret_cast<int64_t>(rsi47) * 0xfa0;
            *rdi45 = rsi47->f0;
            rdi51 = rdi45 + 1;
            rsi52 = reinterpret_cast<struct s0*>(&rsi47->f1);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi51 = rsi52->f0;
            rdi45 = rdi51 + 1;
            rsi47 = reinterpret_cast<struct s15*>(&rsi52->f4);
            rcx48 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx48) + 1);
        } while (!reinterpret_cast<int1_t>(rcx48 == 0x7d0));
        rsi46 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi47) + 1);
    } while (!reinterpret_cast<int1_t>(rsi46 == 0x7d0));
    v53 = rax10;
    if (v54 >= 43 && **v3 == fputc) {
        rax55 = g4d9;
        v56 = *rax55;
        fun_4f6(0x4e7, 22, 1);
        rsi57 = reinterpret_cast<signed char**>(0x4fd);
        rdi58 = v56;
        fun_50f();
        *reinterpret_cast<int32_t*>(&rcx59) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx59) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx59) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi58) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi58) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi57 = v56;
                fun_56c();
            }
            *rdi58 = *rsi57;
            rdi58 = v56;
            rsi57 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rcx59;
        } while (rcx59 != 0x7d0);
        fun_58c(v56, 0x57a, 0x581);
        *reinterpret_cast<int32_t*>(&rsi46) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi46) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx49) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx49) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx48 = v56;
        fun_5a6(0x593, 22, 1, rcx48);
    }
    fun_47b(rbx60, rsi46, rdx49, rcx48);
    fun_485(v61, rsi46, rdx49, rcx48);
    fun_48f(v62, rsi46, rdx49, rcx48);
    fun_497(r12_63, rsi46, rdx49, rcx48);
    fun_49f(r13_64, rsi46, rdx49, rcx48);
    fun_4a7(rbp4, rsi46, rdx49, rcx48);
    fun_4af(r14_7, rsi46, rdx49, rcx48);
    fun_4b7(r15_9, rsi46, rdx49, rcx48);
    fun_4c1(v53, rsi46, rdx49, rcx48);
    goto v65;
}

void fun_4af(int64_t* rdi, struct s0* rsi, int32_t* rdx, signed char** rcx) {
    int64_t r15_5;
    int64_t v6;
    int64_t v7;

    fun_4b7(r15_5, rsi, rdx, rcx);
    fun_4c1(v6, rsi, rdx, rcx);
    goto v7;
}

struct s76 {
    int32_t f0;
    int32_t f4;
};

struct s77 {
    int32_t f0;
    int32_t f1;
    int32_t f4;
};

struct s78 {
    int32_t f0;
    int32_t f4;
};

struct s79 {
    int32_t f0;
    int32_t f4;
};

struct s80 {
    int32_t f0;
    int32_t f4;
};

struct s81 {
    int32_t f0;
    int32_t f4;
};

struct s82 {
    int32_t f0;
    int32_t f4;
};

struct s83 {
    int32_t f0;
    int32_t f4;
};

struct s84 {
    int32_t f0;
    int32_t f4;
};

struct s85 {
    int32_t f0;
    int32_t f4;
};

struct s86 {
    int32_t f0;
    int32_t f4;
};

struct s87 {
    int32_t f0;
    int32_t f4;
};

int64_t* fun_1e5(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t* r14_4;
    int64_t* rax5;
    int64_t rax6;
    int64_t r15_7;
    int64_t rax8;
    int64_t r11_9;
    int32_t* rdi10;
    struct s76* rsi11;
    int64_t rcx12;
    int64_t rdx13;
    int32_t* rdi14;
    struct s77* rsi15;
    int32_t* rdi16;
    struct s78* rsi17;
    int32_t* rdi18;
    struct s79* rsi19;
    int32_t* rdi20;
    struct s80* rsi21;
    int64_t* rbp22;
    struct s81* rdi23;
    int32_t* rbx24;
    int64_t rcx25;
    int64_t rdx26;
    struct s82* rsi27;
    int32_t* rbx28;
    int32_t* rdi29;
    struct s83* rsi30;
    int32_t* rdi31;
    struct s84* rsi32;
    struct s85* rsi33;
    int64_t rdx34;
    int32_t* rdi35;
    int32_t* rsi36;
    struct s86* rsi37;
    int32_t* rbx38;
    int32_t* rdi39;
    struct s87* rsi40;
    struct s15* rsi41;
    int32_t* rdi42;
    struct s0* rsi43;
    int32_t* rdi44;
    struct s0* rsi45;
    struct s15* rsi46;
    signed char** rcx47;
    int32_t* rdx48;
    int32_t* rbx49;
    int32_t* rdi50;
    struct s0* rsi51;
    int64_t v52;
    int32_t v53;
    signed char*** rax54;
    signed char** v55;
    signed char** rsi56;
    signed char** rdi57;
    int64_t rcx58;
    int32_t* rbx59;
    int64_t v60;
    int64_t v61;
    int64_t r12_62;
    int64_t r13_63;
    int64_t* rbp64;
    int64_t v65;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r14_4 = rax5;
    rax6 = fun_1f7(0x7d0, 8);
    r15_7 = rax6;
    rax8 = fun_209(0x7d0, 8);
    *reinterpret_cast<int32_t*>(&r11_9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_9) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = LCPI1_1;
    g7d4 = gc;
    g7d8 = LCPI1_2;
    g7dc = g14;
    g7e0 = LCPI1_3;
    g7e4 = g1c;
    rdi10 = reinterpret_cast<int32_t*>(0x7e8);
    rsi11 = reinterpret_cast<struct s76*>(32);
    *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdx13 = rcx12;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edx");
        *rdi10 = rsi11->f0;
        rdi14 = rdi10 + 1;
        rsi15 = reinterpret_cast<struct s77*>(&rsi11->f4);
        ++rcx12;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm1");
        *rdi14 = rsi15->f0;
        rdi16 = rdi14 + 1;
        rsi17 = reinterpret_cast<struct s78*>(&rsi15->f1);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm2");
        *rdi16 = rsi17->f0;
        rdi18 = rdi16 + 1;
        rsi19 = reinterpret_cast<struct s79*>(&rsi17->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("divsd xmm7, xmm3");
        *rdi18 = rsi19->f0;
        rdi20 = rdi18 + 1;
        rsi21 = reinterpret_cast<struct s80*>(&rsi19->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm4");
        *rdi20 = rsi21->f0;
        __asm__("divsd xmm6, xmm5");
        rdi20[1] = rsi21->f4;
        r14_4[rdx13] = reinterpret_cast<int64_t>(fputc);
        rbp22[rdx13] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edi");
            __asm__("divsd xmm6, xmm0");
            rdi23 = reinterpret_cast<struct s81*>(rbx24 + rdx13 * 0xfa0);
            rdi23->f0 = rsi11->f0;
            rdi10 = &rdi23->f4;
            rsi11 = reinterpret_cast<struct s76*>(reinterpret_cast<int64_t>(&rsi11->f4) + 1);
        } while (!reinterpret_cast<int1_t>(rsi11 == 0x7d0));
    } while (rcx12 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx25) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi27 = reinterpret_cast<struct s82*>(rbx28 + r11_9 * 0xfa0);
            *rdi10 = rsi27->f0;
            rdi29 = rdi10 + 1;
            rsi30 = reinterpret_cast<struct s83*>(&rsi27->f4);
            __asm__("mulsd xmm0, [r10+rdx*8]");
            __asm__("addsd xmm0, [rsi+rdx*8]");
            *rdi29 = rsi30->f0;
            rdi31 = rdi29 + 1;
            rsi32 = reinterpret_cast<struct s84*>(&rsi30->f4);
            __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            *rdi31 = rsi32->f0;
            rdi10 = rdi31 + 1;
            rsi33 = reinterpret_cast<struct s85*>(&rsi32->f4);
            ++rdx26;
        } while (rdx26 != 0x7d0);
        ++r11_9;
    } while (r11_9 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rdx34) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx34) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi10 = rsi33->f0;
    rdi35 = rdi10 + 1;
    rsi36 = &rsi33->f4;
    do {
        *rdi35 = *rsi36;
        *reinterpret_cast<int32_t*>(&rdi35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi37 = reinterpret_cast<struct s86*>(rbx38 + reinterpret_cast<int64_t>(rdi35) * 0xfa0);
            *rdi35 = rsi37->f0;
            rdi39 = rdi35 + 1;
            rsi40 = reinterpret_cast<struct s87*>(&rsi37->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r15+rdi*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi39 = rsi40->f0;
            rsi36 = &rsi40->f4;
            rdi35 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi39 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rdi35 == 0x7d0));
        ++rcx25;
    } while (rcx25 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rsi41) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi41) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *rdi35 = rsi41->f0;
        rdi42 = rdi35 + 1;
        rsi43 = reinterpret_cast<struct s0*>(&rsi41->f1);
        __asm__("addsd xmm0, [rax+rdx*8]");
        *rdi42 = rsi43->f0;
        rdi35 = rdi42 + 1;
        rsi41 = reinterpret_cast<struct s15*>(&rsi43->f4);
        ++rdx34;
    } while (rdx34 != 0x7d0);
    *rdi35 = rsi41->f0;
    rdi44 = rdi35 + 1;
    rsi45 = reinterpret_cast<struct s0*>(&rsi41->f1);
    do {
        *rdi44 = rsi45->f0;
        ++rdi44;
        rsi46 = reinterpret_cast<struct s15*>(&rsi45->f4);
        *reinterpret_cast<int32_t*>(&rcx47) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx47) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx48 = rbx49 + reinterpret_cast<int64_t>(rsi46) * 0xfa0;
            *rdi44 = rsi46->f0;
            rdi50 = rdi44 + 1;
            rsi51 = reinterpret_cast<struct s0*>(&rsi46->f1);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi50 = rsi51->f0;
            rdi44 = rdi50 + 1;
            rsi46 = reinterpret_cast<struct s15*>(&rsi51->f4);
            rcx47 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx47) + 1);
        } while (!reinterpret_cast<int1_t>(rcx47 == 0x7d0));
        rsi45 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi46) + 1);
    } while (!reinterpret_cast<int1_t>(rsi45 == 0x7d0));
    v52 = rax8;
    if (v53 >= 43 && **v3 == fputc) {
        rax54 = g4d9;
        v55 = *rax54;
        fun_4f6(0x4e7, 22, 1);
        rsi56 = reinterpret_cast<signed char**>(0x4fd);
        rdi57 = v55;
        fun_50f();
        *reinterpret_cast<int32_t*>(&rcx58) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx58) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx58) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi57) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi57) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi56 = v55;
                fun_56c();
            }
            *rdi57 = *rsi56;
            rdi57 = v55;
            rsi56 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rcx58;
        } while (rcx58 != 0x7d0);
        fun_58c(v55, 0x57a, 0x581);
        *reinterpret_cast<int32_t*>(&rsi45) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi45) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx48) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx48) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx47 = v55;
        fun_5a6(0x593, 22, 1, rcx47);
    }
    fun_47b(rbx59, rsi45, rdx48, rcx47);
    fun_485(v60, rsi45, rdx48, rcx47);
    fun_48f(v61, rsi45, rdx48, rcx47);
    fun_497(r12_62, rsi45, rdx48, rcx47);
    fun_49f(r13_63, rsi45, rdx48, rcx47);
    fun_4a7(rbp64, rsi45, rdx48, rcx47);
    fun_4af(r14_4, rsi45, rdx48, rcx47);
    fun_4b7(r15_7, rsi45, rdx48, rcx47);
    fun_4c1(v52, rsi45, rdx48, rcx47);
    goto v65;
}

void fun_4b7(int64_t rdi, struct s0* rsi, int32_t* rdx, signed char** rcx) {
    int64_t v5;
    int64_t v6;

    fun_4c1(v5, rsi, rdx, rcx);
    goto v6;
}

struct s88 {
    int32_t f0;
    int32_t f4;
};

struct s89 {
    int32_t f0;
    int32_t f1;
    int32_t f4;
};

struct s90 {
    int32_t f0;
    int32_t f4;
};

struct s91 {
    int32_t f0;
    int32_t f4;
};

struct s92 {
    int32_t f0;
    int32_t f4;
};

struct s93 {
    int32_t f0;
    int32_t f4;
};

struct s94 {
    int32_t f0;
    int32_t f4;
};

struct s95 {
    int32_t f0;
    int32_t f4;
};

struct s96 {
    int32_t f0;
    int32_t f4;
};

struct s97 {
    int32_t f0;
    int32_t f4;
};

struct s98 {
    int32_t f0;
    int32_t f4;
};

struct s99 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_1f7(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t r15_4;
    int64_t rax5;
    int64_t rax6;
    int64_t r11_7;
    int32_t* rdi8;
    struct s88* rsi9;
    int64_t rcx10;
    int64_t rdx11;
    int32_t* rdi12;
    struct s89* rsi13;
    int32_t* rdi14;
    struct s90* rsi15;
    int32_t* rdi16;
    struct s91* rsi17;
    int32_t* rdi18;
    struct s92* rsi19;
    int64_t* r14_20;
    int64_t* rbp21;
    struct s93* rdi22;
    int32_t* rbx23;
    int64_t rcx24;
    int64_t rdx25;
    struct s94* rsi26;
    int32_t* rbx27;
    int32_t* rdi28;
    struct s95* rsi29;
    int32_t* rdi30;
    struct s96* rsi31;
    struct s97* rsi32;
    int64_t rdx33;
    int32_t* rdi34;
    int32_t* rsi35;
    struct s98* rsi36;
    int32_t* rbx37;
    int32_t* rdi38;
    struct s99* rsi39;
    struct s15* rsi40;
    int32_t* rdi41;
    struct s0* rsi42;
    int32_t* rdi43;
    struct s0* rsi44;
    struct s15* rsi45;
    signed char** rcx46;
    int32_t* rdx47;
    int32_t* rbx48;
    int32_t* rdi49;
    struct s0* rsi50;
    int64_t v51;
    int32_t v52;
    signed char*** rax53;
    signed char** v54;
    signed char** rsi55;
    signed char** rdi56;
    int64_t rcx57;
    int32_t* rbx58;
    int64_t v59;
    int64_t v60;
    int64_t r12_61;
    int64_t r13_62;
    int64_t* rbp63;
    int64_t* r14_64;
    int64_t v65;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r15_4 = rax5;
    rax6 = fun_209(0x7d0, 8);
    *reinterpret_cast<int32_t*>(&r11_7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_7) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = LCPI1_1;
    g7d4 = gc;
    g7d8 = LCPI1_2;
    g7dc = g14;
    g7e0 = LCPI1_3;
    g7e4 = g1c;
    rdi8 = reinterpret_cast<int32_t*>(0x7e8);
    rsi9 = reinterpret_cast<struct s88*>(32);
    *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdx11 = rcx10;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edx");
        *rdi8 = rsi9->f0;
        rdi12 = rdi8 + 1;
        rsi13 = reinterpret_cast<struct s89*>(&rsi9->f4);
        ++rcx10;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm1");
        *rdi12 = rsi13->f0;
        rdi14 = rdi12 + 1;
        rsi15 = reinterpret_cast<struct s90*>(&rsi13->f1);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm2");
        *rdi14 = rsi15->f0;
        rdi16 = rdi14 + 1;
        rsi17 = reinterpret_cast<struct s91*>(&rsi15->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("divsd xmm7, xmm3");
        *rdi16 = rsi17->f0;
        rdi18 = rdi16 + 1;
        rsi19 = reinterpret_cast<struct s92*>(&rsi17->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm4");
        *rdi18 = rsi19->f0;
        __asm__("divsd xmm6, xmm5");
        rdi18[1] = rsi19->f4;
        r14_20[rdx11] = reinterpret_cast<int64_t>(fputc);
        rbp21[rdx11] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edi");
            __asm__("divsd xmm6, xmm0");
            rdi22 = reinterpret_cast<struct s93*>(rbx23 + rdx11 * 0xfa0);
            rdi22->f0 = rsi9->f0;
            rdi8 = &rdi22->f4;
            rsi9 = reinterpret_cast<struct s88*>(reinterpret_cast<int64_t>(&rsi9->f4) + 1);
        } while (!reinterpret_cast<int1_t>(rsi9 == 0x7d0));
    } while (rcx10 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx24) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx25) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi26 = reinterpret_cast<struct s94*>(rbx27 + r11_7 * 0xfa0);
            *rdi8 = rsi26->f0;
            rdi28 = rdi8 + 1;
            rsi29 = reinterpret_cast<struct s95*>(&rsi26->f4);
            __asm__("mulsd xmm0, [r10+rdx*8]");
            __asm__("addsd xmm0, [rsi+rdx*8]");
            *rdi28 = rsi29->f0;
            rdi30 = rdi28 + 1;
            rsi31 = reinterpret_cast<struct s96*>(&rsi29->f4);
            __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            *rdi30 = rsi31->f0;
            rdi8 = rdi30 + 1;
            rsi32 = reinterpret_cast<struct s97*>(&rsi31->f4);
            ++rdx25;
        } while (rdx25 != 0x7d0);
        ++r11_7;
    } while (r11_7 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rdx33) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi8 = rsi32->f0;
    rdi34 = rdi8 + 1;
    rsi35 = &rsi32->f4;
    do {
        *rdi34 = *rsi35;
        *reinterpret_cast<int32_t*>(&rdi34) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi36 = reinterpret_cast<struct s98*>(rbx37 + reinterpret_cast<int64_t>(rdi34) * 0xfa0);
            *rdi34 = rsi36->f0;
            rdi38 = rdi34 + 1;
            rsi39 = reinterpret_cast<struct s99*>(&rsi36->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r15+rdi*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi38 = rsi39->f0;
            rsi35 = &rsi39->f4;
            rdi34 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi38 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rdi34 == 0x7d0));
        ++rcx24;
    } while (rcx24 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rsi40) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi40) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *rdi34 = rsi40->f0;
        rdi41 = rdi34 + 1;
        rsi42 = reinterpret_cast<struct s0*>(&rsi40->f1);
        __asm__("addsd xmm0, [rax+rdx*8]");
        *rdi41 = rsi42->f0;
        rdi34 = rdi41 + 1;
        rsi40 = reinterpret_cast<struct s15*>(&rsi42->f4);
        ++rdx33;
    } while (rdx33 != 0x7d0);
    *rdi34 = rsi40->f0;
    rdi43 = rdi34 + 1;
    rsi44 = reinterpret_cast<struct s0*>(&rsi40->f1);
    do {
        *rdi43 = rsi44->f0;
        ++rdi43;
        rsi45 = reinterpret_cast<struct s15*>(&rsi44->f4);
        *reinterpret_cast<int32_t*>(&rcx46) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx46) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx47 = rbx48 + reinterpret_cast<int64_t>(rsi45) * 0xfa0;
            *rdi43 = rsi45->f0;
            rdi49 = rdi43 + 1;
            rsi50 = reinterpret_cast<struct s0*>(&rsi45->f1);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi49 = rsi50->f0;
            rdi43 = rdi49 + 1;
            rsi45 = reinterpret_cast<struct s15*>(&rsi50->f4);
            rcx46 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx46) + 1);
        } while (!reinterpret_cast<int1_t>(rcx46 == 0x7d0));
        rsi44 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi45) + 1);
    } while (!reinterpret_cast<int1_t>(rsi44 == 0x7d0));
    v51 = rax6;
    if (v52 >= 43 && **v3 == fputc) {
        rax53 = g4d9;
        v54 = *rax53;
        fun_4f6(0x4e7, 22, 1);
        rsi55 = reinterpret_cast<signed char**>(0x4fd);
        rdi56 = v54;
        fun_50f();
        *reinterpret_cast<int32_t*>(&rcx57) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx57) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx57) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi56) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi56) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi55 = v54;
                fun_56c();
            }
            *rdi56 = *rsi55;
            rdi56 = v54;
            rsi55 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rcx57;
        } while (rcx57 != 0x7d0);
        fun_58c(v54, 0x57a, 0x581);
        *reinterpret_cast<int32_t*>(&rsi44) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi44) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx47) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx47) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx46 = v54;
        fun_5a6(0x593, 22, 1, rcx46);
    }
    fun_47b(rbx58, rsi44, rdx47, rcx46);
    fun_485(v59, rsi44, rdx47, rcx46);
    fun_48f(v60, rsi44, rdx47, rcx46);
    fun_497(r12_61, rsi44, rdx47, rcx46);
    fun_49f(r13_62, rsi44, rdx47, rcx46);
    fun_4a7(rbp63, rsi44, rdx47, rcx46);
    fun_4af(r14_64, rsi44, rdx47, rcx46);
    fun_4b7(r15_4, rsi44, rdx47, rcx46);
    fun_4c1(v51, rsi44, rdx47, rcx46);
    goto v65;
}

void fun_4c1(int64_t rdi, struct s0* rsi, int32_t* rdx, signed char** rcx) {
    int64_t v5;

    goto v5;
}

struct s100 {
    int32_t f0;
    int32_t f4;
};

struct s101 {
    int32_t f0;
    int32_t f4;
};

struct s102 {
    int32_t f0;
    int32_t f4;
};

struct s103 {
    int32_t f0;
    int32_t f4;
};

struct s104 {
    int32_t f0;
    int32_t f4;
};

struct s105 {
    int32_t f0;
    int32_t f4;
};

struct s106 {
    int32_t f0;
    int32_t f4;
};

struct s107 {
    int32_t f0;
    int32_t f4;
};

struct s108 {
    int32_t f0;
    int32_t f4;
};

struct s109 {
    int32_t f0;
    int32_t f4;
};

struct s110 {
    int32_t f0;
    int32_t f4;
};

struct s111 {
    int32_t f0;
    int32_t f1;
    int32_t f4;
};

struct s112 {
    int32_t f0;
    int32_t f4;
};

struct s113 {
    int32_t f0;
    int32_t f4;
};

struct s114 {
    int32_t f0;
    int32_t f4;
};

struct s115 {
    int32_t f0;
    int32_t f4;
};

struct s116 {
    int32_t f0;
    int32_t f4;
};

struct s117 {
    int32_t f0;
    int32_t f4;
};

struct s118 {
    int32_t f0;
    int32_t f4;
};

struct s119 {
    int32_t f0;
    int32_t f4;
};

struct s120 {
    int32_t f0;
    int32_t f4;
};

struct s121 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_209(struct s1* rdi, struct s2* rsi) {
    signed char** v3;
    int64_t r11_4;
    struct s100* rdi5;
    struct s101* rsi6;
    struct s102* rdi7;
    struct s103* rsi8;
    struct s104* rdi9;
    struct s105* rsi10;
    struct s106* rdi11;
    struct s107* rsi12;
    struct s108* rdi13;
    struct s109* rsi14;
    int32_t* rdi15;
    struct s110* rsi16;
    int64_t rcx17;
    int64_t rdx18;
    int32_t* rdi19;
    struct s111* rsi20;
    int32_t* rdi21;
    struct s112* rsi22;
    int32_t* rdi23;
    struct s113* rsi24;
    int32_t* rdi25;
    struct s114* rsi26;
    int64_t* r14_27;
    int64_t* rbp28;
    struct s115* rdi29;
    int32_t* rbx30;
    int64_t rcx31;
    int64_t rdx32;
    struct s116* rsi33;
    int32_t* rbx34;
    int32_t* rdi35;
    struct s117* rsi36;
    int32_t* rdi37;
    struct s118* rsi38;
    struct s119* rsi39;
    int64_t rdx40;
    int32_t* rdi41;
    int32_t* rsi42;
    struct s120* rsi43;
    int32_t* rbx44;
    int32_t* rdi45;
    struct s121* rsi46;
    struct s15* rsi47;
    int32_t* rdi48;
    struct s0* rsi49;
    int32_t* rdi50;
    struct s0* rsi51;
    struct s15* rsi52;
    signed char** rcx53;
    int32_t* rdx54;
    int32_t* rbx55;
    int32_t* rdi56;
    struct s0* rsi57;
    int64_t v58;
    int64_t rax59;
    int32_t v60;
    signed char*** rax61;
    signed char** v62;
    signed char** rsi63;
    signed char** rdi64;
    int64_t rcx65;
    int32_t* rbx66;
    int64_t v67;
    int64_t v68;
    int64_t r12_69;
    int64_t r13_70;
    int64_t* rbp71;
    int64_t* r14_72;
    int64_t r15_73;
    int64_t v74;

    v3 = reinterpret_cast<signed char**>(__return_address());
    *reinterpret_cast<int32_t*>(&r11_4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_4) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi5 = reinterpret_cast<struct s100*>(&rdi->f4);
    rsi6 = reinterpret_cast<struct s101*>(&rsi->f4);
    rdi5->f0 = rsi6->f0;
    rdi7 = reinterpret_cast<struct s102*>(&rdi5->f4);
    rsi8 = reinterpret_cast<struct s103*>(&rsi6->f4);
    rdi7->f0 = rsi8->f0;
    rdi9 = reinterpret_cast<struct s104*>(&rdi7->f4);
    rsi10 = reinterpret_cast<struct s105*>(&rsi8->f4);
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s106*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s107*>(&rsi10->f4);
    rdi11->f0 = rsi12->f0;
    rdi13 = reinterpret_cast<struct s108*>(&rdi11->f4);
    rsi14 = reinterpret_cast<struct s109*>(&rsi12->f4);
    rdi13->f0 = rsi14->f0;
    rdi15 = &rdi13->f4;
    rsi16 = reinterpret_cast<struct s110*>(&rsi14->f4);
    *reinterpret_cast<int32_t*>(&rcx17) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdx18 = rcx17;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edx");
        *rdi15 = rsi16->f0;
        rdi19 = rdi15 + 1;
        rsi20 = reinterpret_cast<struct s111*>(&rsi16->f4);
        ++rcx17;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm1");
        *rdi19 = rsi20->f0;
        rdi21 = rdi19 + 1;
        rsi22 = reinterpret_cast<struct s112*>(&rsi20->f1);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm2");
        *rdi21 = rsi22->f0;
        rdi23 = rdi21 + 1;
        rsi24 = reinterpret_cast<struct s113*>(&rsi22->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("divsd xmm7, xmm3");
        *rdi23 = rsi24->f0;
        rdi25 = rdi23 + 1;
        rsi26 = reinterpret_cast<struct s114*>(&rsi24->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm4");
        *rdi25 = rsi26->f0;
        __asm__("divsd xmm6, xmm5");
        rdi25[1] = rsi26->f4;
        r14_27[rdx18] = reinterpret_cast<int64_t>(fputc);
        rbp28[rdx18] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rsi16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edi");
            __asm__("divsd xmm6, xmm0");
            rdi29 = reinterpret_cast<struct s115*>(rbx30 + rdx18 * 0xfa0);
            rdi29->f0 = rsi16->f0;
            rdi15 = &rdi29->f4;
            rsi16 = reinterpret_cast<struct s110*>(reinterpret_cast<int64_t>(&rsi16->f4) + 1);
        } while (!reinterpret_cast<int1_t>(rsi16 == 0x7d0));
    } while (rcx17 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx31) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx32) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi33 = reinterpret_cast<struct s116*>(rbx34 + r11_4 * 0xfa0);
            *rdi15 = rsi33->f0;
            rdi35 = rdi15 + 1;
            rsi36 = reinterpret_cast<struct s117*>(&rsi33->f4);
            __asm__("mulsd xmm0, [r10+rdx*8]");
            __asm__("addsd xmm0, [rsi+rdx*8]");
            *rdi35 = rsi36->f0;
            rdi37 = rdi35 + 1;
            rsi38 = reinterpret_cast<struct s118*>(&rsi36->f4);
            __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            *rdi37 = rsi38->f0;
            rdi15 = rdi37 + 1;
            rsi39 = reinterpret_cast<struct s119*>(&rsi38->f4);
            ++rdx32;
        } while (rdx32 != 0x7d0);
        ++r11_4;
    } while (r11_4 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rdx40) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx40) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi15 = rsi39->f0;
    rdi41 = rdi15 + 1;
    rsi42 = &rsi39->f4;
    do {
        *rdi41 = *rsi42;
        *reinterpret_cast<int32_t*>(&rdi41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi43 = reinterpret_cast<struct s120*>(rbx44 + reinterpret_cast<int64_t>(rdi41) * 0xfa0);
            *rdi41 = rsi43->f0;
            rdi45 = rdi41 + 1;
            rsi46 = reinterpret_cast<struct s121*>(&rsi43->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r15+rdi*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi45 = rsi46->f0;
            rsi42 = &rsi46->f4;
            rdi41 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi45 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rdi41 == 0x7d0));
        ++rcx31;
    } while (rcx31 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rsi47) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi47) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *rdi41 = rsi47->f0;
        rdi48 = rdi41 + 1;
        rsi49 = reinterpret_cast<struct s0*>(&rsi47->f1);
        __asm__("addsd xmm0, [rax+rdx*8]");
        *rdi48 = rsi49->f0;
        rdi41 = rdi48 + 1;
        rsi47 = reinterpret_cast<struct s15*>(&rsi49->f4);
        ++rdx40;
    } while (rdx40 != 0x7d0);
    *rdi41 = rsi47->f0;
    rdi50 = rdi41 + 1;
    rsi51 = reinterpret_cast<struct s0*>(&rsi47->f1);
    do {
        *rdi50 = rsi51->f0;
        ++rdi50;
        rsi52 = reinterpret_cast<struct s15*>(&rsi51->f4);
        *reinterpret_cast<int32_t*>(&rcx53) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx53) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx54 = rbx55 + reinterpret_cast<int64_t>(rsi52) * 0xfa0;
            *rdi50 = rsi52->f0;
            rdi56 = rdi50 + 1;
            rsi57 = reinterpret_cast<struct s0*>(&rsi52->f1);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi56 = rsi57->f0;
            rdi50 = rdi56 + 1;
            rsi52 = reinterpret_cast<struct s15*>(&rsi57->f4);
            rcx53 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx53) + 1);
        } while (!reinterpret_cast<int1_t>(rcx53 == 0x7d0));
        rsi51 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi52) + 1);
    } while (!reinterpret_cast<int1_t>(rsi51 == 0x7d0));
    v58 = rax59;
    if (v60 >= 43 && **v3 == fputc) {
        rax61 = g4d9;
        v62 = *rax61;
        fun_4f6(0x4e7, 22, 1);
        rsi63 = reinterpret_cast<signed char**>(0x4fd);
        rdi64 = v62;
        fun_50f();
        *reinterpret_cast<int32_t*>(&rcx65) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx65) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx65) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi64) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi64) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi63 = v62;
                fun_56c();
            }
            *rdi64 = *rsi63;
            rdi64 = v62;
            rsi63 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rcx65;
        } while (rcx65 != 0x7d0);
        fun_58c(v62, 0x57a, 0x581);
        *reinterpret_cast<int32_t*>(&rsi51) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi51) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx54) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx54) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx53 = v62;
        fun_5a6(0x593, 22, 1, rcx53);
    }
    fun_47b(rbx66, rsi51, rdx54, rcx53);
    fun_485(v67, rsi51, rdx54, rcx53);
    fun_48f(v68, rsi51, rdx54, rcx53);
    fun_497(r12_69, rsi51, rdx54, rcx53);
    fun_49f(r13_70, rsi51, rdx54, rcx53);
    fun_4a7(rbp71, rsi51, rdx54, rcx53);
    fun_4af(r14_72, rsi51, rdx54, rcx53);
    fun_4b7(r15_73, rsi51, rdx54, rcx53);
    fun_4c1(v58, rsi51, rdx54, rcx53);
    goto v74;
}

void fputc(int32_t edi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) {
    }
}

struct s122 {
    int32_t f0;
    int32_t f4;
};

struct s123 {
    int32_t f0;
    int32_t f4;
};

struct s124 {
    int32_t f0;
    int32_t f4;
};

struct s125 {
    int32_t f0;
    int32_t f4;
};

void fun_108() {
    struct s122* rdi1;
    struct s123* rsi2;
    struct s124* rdi3;
    struct s125* rsi4;
    int64_t r8_5;
    int64_t rax6;
    int64_t rax7;
    int64_t v8;

    do {
        rdi1->f0 = rsi2->f0;
        rdi3 = reinterpret_cast<struct s124*>(&rdi1->f4);
        rsi4 = reinterpret_cast<struct s125*>(&rsi2->f4);
        __asm__("mulsd xmm2, xmm0");
        __asm__("mulsd xmm2, [rcx+r8*8]");
        __asm__("addsd xmm1, xmm2");
        rdi3->f0 = rsi4->f0;
        rdi1 = reinterpret_cast<struct s122*>(&rdi3->f4);
        rsi2 = reinterpret_cast<struct s123*>(&rsi4->f4);
        ++r8_5;
    } while (r8_5 != rax6);
    if (reinterpret_cast<int64_t>(rdi1) + 1 == rax7) {
        goto v8;
    }
}

void submain(int32_t edi, int64_t rsi) {
    fun_175(0x3d0900, 8);
}

