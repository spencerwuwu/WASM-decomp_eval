
void fputc();

struct s0 {
    int32_t f0;
    int32_t f4;
};

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

int32_t** g2a4 = reinterpret_cast<int32_t**>(0x8244c8948088b48);

void fun_2c2(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_2de();

void fun_324();

void fun_2f9();

void fun_342(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_35c();

void fun_3a4();

void fun_379();

void fun_3c3(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_3dc(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_26c(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

struct s8 {
    int32_t f0;
    int32_t f4;
};

void fun_274(struct s8* rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_27c(int64_t* rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_284(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_28c(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_1f0() {
    int64_t* r15_1;
    int64_t rbp2;
    int64_t rax3;
    struct s0* rdi4;
    struct s1* rsi5;
    struct s2* rdi6;
    struct s3* rsi7;
    int32_t* rcx8;
    int32_t* rbx9;
    struct s4* rdi10;
    struct s5* rsi11;
    struct s6* rdi12;
    struct s7* rsi13;
    int32_t v14;
    signed char** v15;
    int32_t** rax16;
    int32_t* v17;
    int32_t* rsi18;
    int64_t rbp19;
    int32_t* rdi20;
    int64_t rbp21;
    int32_t* rsi22;
    int32_t* rdi23;
    int64_t rbx24;
    struct s8* r14_25;
    int64_t* r15_26;
    int64_t r12_27;
    int64_t r13_28;
    int64_t v29;

    do {
        r15_1[rbp2] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rax3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi4->f0 = rsi5->f0;
            rdi6 = reinterpret_cast<struct s2*>(&rdi4->f4);
            rsi7 = reinterpret_cast<struct s3*>(&rsi5->f4);
            rcx8 = rbx9 + rbp2 * 0xed8;
            __asm__("mulsd xmm0, [rcx+rax*8]");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi6->f0 = rsi7->f0;
            rdi10 = reinterpret_cast<struct s4*>(&rdi6->f4);
            rsi11 = reinterpret_cast<struct s5*>(&rsi7->f4);
            rdi10->f0 = rsi11->f0;
            rdi12 = reinterpret_cast<struct s6*>(&rdi10->f4);
            rsi13 = reinterpret_cast<struct s7*>(&rsi11->f4);
            __asm__("mulsd xmm0, [r12+rax*8]");
            __asm__("addsd xmm0, [r15+rbp*8]");
            rdi12->f0 = rsi13->f0;
            rdi4 = reinterpret_cast<struct s0*>(&rdi12->f4);
            rsi5 = reinterpret_cast<struct s1*>(&rsi13->f4);
            ++rax3;
        } while (rax3 != 0x76c);
        ++rbp2;
    } while (rbp2 != 0x834);
    if (v14 >= 43 && **v15 == fputc) {
        rax16 = g2a4;
        v17 = *rax16;
        fun_2c2(0x2b3, 22, 1);
        rsi18 = reinterpret_cast<int32_t*>(0x2c9);
        *reinterpret_cast<int32_t*>(&rbp19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp19) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi20 = v17;
        fun_2de();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp19) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi20) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi18 = v17;
                fun_324();
            }
            *rdi20 = *rsi18;
            rdi20 = v17;
            rsi18 = reinterpret_cast<int32_t*>(0x2f2);
            fun_2f9();
            ++rbp19;
        } while (rbp19 != 0x76c);
        *reinterpret_cast<int32_t*>(&rbp21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp21) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_342(v17, 0x32d, 0x334);
        rsi22 = reinterpret_cast<int32_t*>(0x349);
        rdi23 = v17;
        fun_35c();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp21) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi23) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi22 = v17;
                fun_3a4();
            }
            *rdi23 = *rsi22;
            rdi23 = v17;
            rsi22 = reinterpret_cast<int32_t*>(0x372);
            fun_379();
            ++rbp21;
        } while (rbp21 != 0x834);
        fun_3c3(v17, 0x3ad, 0x3b4);
        *reinterpret_cast<int32_t*>(&rsi5) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx8 = v17;
        fun_3dc(0x3ca, 22, 1, rcx8);
    }
    fun_26c(rbx24, rsi5, 1, rcx8);
    fun_274(r14_25, rsi5, 1, rcx8);
    fun_27c(r15_26, rsi5, 1, rcx8);
    fun_284(r12_27, rsi5, 1, rcx8);
    fun_28c(r13_28, rsi5, 1, rcx8);
    goto v29;
}

void fun_26c(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    struct s8* r14_5;
    int64_t* r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    fun_274(r14_5, rsi, rdx, rcx);
    fun_27c(r15_6, rsi, rdx, rcx);
    fun_284(r12_7, rsi, rdx, rcx);
    fun_28c(r13_8, rsi, rdx, rcx);
    goto v9;
}

void fun_2f9() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* v4;
    int32_t* v5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* rsi8;
    int32_t* rdi9;
    int32_t* v10;
    int32_t* v11;
    int32_t* v12;
    int32_t* v13;
    int64_t rbx14;
    struct s8* r14_15;
    int64_t* r15_16;
    int64_t r12_17;
    int64_t r13_18;
    int64_t v19;

    while (++rbp1, rbp1 != 0x76c) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = v4;
            fun_324();
        }
        *rdi2 = *rsi3;
        rdi2 = v5;
        rsi3 = reinterpret_cast<int32_t*>(0x2f2);
        fun_2f9();
    }
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_342(v7, 0x32d, 0x334);
    rsi8 = reinterpret_cast<int32_t*>(0x349);
    rdi9 = v10;
    fun_35c();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi9) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi8 = v11;
            fun_3a4();
        }
        *rdi9 = *rsi8;
        rdi9 = v12;
        rsi8 = reinterpret_cast<int32_t*>(0x372);
        fun_379();
        ++rbp6;
    } while (rbp6 != 0x834);
    fun_3c3(v13, 0x3ad, 0x3b4);
    fun_3dc(0x3ca, 22, 1, v13);
    fun_26c(rbx14, 22, 1, v13);
    fun_274(r14_15, 22, 1, v13);
    fun_27c(r15_16, 22, 1, v13);
    fun_284(r12_17, 22, 1, v13);
    fun_28c(r13_18, 22, 1, v13);
    goto v19;
}

void fun_324() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t rbp4;
    int32_t* v5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* rsi8;
    int32_t* rdi9;
    int32_t* v10;
    int32_t* v11;
    int32_t* v12;
    int32_t* v13;
    int64_t rbx14;
    struct s8* r14_15;
    int64_t* r15_16;
    int64_t r12_17;
    int64_t r13_18;
    int64_t v19;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = v3;
            rsi2 = reinterpret_cast<int32_t*>(0x2f2);
            fun_2f9();
            ++rbp4;
            if (rbp4 == 0x76c) 
                goto addr_326_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp4) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v5;
        fun_324();
    }
    addr_326_7:
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_342(v7, 0x32d, 0x334);
    rsi8 = reinterpret_cast<int32_t*>(0x349);
    rdi9 = v10;
    fun_35c();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi9) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi8 = v11;
            fun_3a4();
        }
        *rdi9 = *rsi8;
        rdi9 = v12;
        rsi8 = reinterpret_cast<int32_t*>(0x372);
        fun_379();
        ++rbp6;
    } while (rbp6 != 0x834);
    fun_3c3(v13, 0x3ad, 0x3b4);
    fun_3dc(0x3ca, 22, 1, v13);
    fun_26c(rbx14, 22, 1, v13);
    fun_274(r14_15, 22, 1, v13);
    fun_27c(r15_16, 22, 1, v13);
    fun_284(r12_17, 22, 1, v13);
    fun_28c(r13_18, 22, 1, v13);
    goto v19;
}

void fun_379() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* v4;
    int32_t* v5;
    int32_t* v6;
    int64_t rbx7;
    struct s8* r14_8;
    int64_t* r15_9;
    int64_t r12_10;
    int64_t r13_11;
    int64_t v12;

    while (++rbp1, rbp1 != 0x834) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = v4;
            fun_3a4();
        }
        *rdi2 = *rsi3;
        rdi2 = v5;
        rsi3 = reinterpret_cast<int32_t*>(0x372);
        fun_379();
    }
    fun_3c3(v6, 0x3ad, 0x3b4);
    fun_3dc(0x3ca, 22, 1, v6);
    fun_26c(rbx7, 22, 1, v6);
    fun_274(r14_8, 22, 1, v6);
    fun_27c(r15_9, 22, 1, v6);
    fun_284(r12_10, 22, 1, v6);
    fun_28c(r13_11, 22, 1, v6);
    goto v12;
}

void fun_3a4() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t rbp4;
    int32_t* v5;
    int32_t* v6;
    int64_t rbx7;
    struct s8* r14_8;
    int64_t* r15_9;
    int64_t r12_10;
    int64_t r13_11;
    int64_t v12;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = v3;
            rsi2 = reinterpret_cast<int32_t*>(0x372);
            fun_379();
            ++rbp4;
            if (rbp4 == 0x834) 
                goto addr_3a6_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp4) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v5;
        fun_3a4();
    }
    addr_3a6_7:
    fun_3c3(v6, 0x3ad, 0x3b4);
    fun_3dc(0x3ca, 22, 1, v6);
    fun_26c(rbx7, 22, 1, v6);
    fun_274(r14_8, 22, 1, v6);
    fun_27c(r15_9, 22, 1, v6);
    fun_284(r12_10, 22, 1, v6);
    fun_28c(r13_11, 22, 1, v6);
    goto v12;
}

int64_t* fun_10a(int64_t rdi, int64_t rsi);

int64_t fun_11c(int64_t rdi, int64_t rsi);

struct s9 {
    int32_t f0;
    int32_t f4;
};

struct s10 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_12e(struct s9* rdi, struct s10* rsi);

int32_t g834;

/* .LCPI1_1 */
int32_t LCPI1_1 = 0x4c505354;

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
    int32_t f1;
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

void fun_f8(int64_t rdi, int64_t rsi) {
    struct s8* r14_3;
    struct s8* rax4;
    int64_t* rax5;
    int64_t* r15_6;
    int64_t rax7;
    int64_t r12_8;
    int64_t rax9;
    int64_t r13_10;
    int64_t rax11;
    struct s11* rdi12;
    struct s12* rsi13;
    int64_t rcx14;
    int32_t* rdi15;
    struct s13* rsi16;
    struct s13* rdx17;
    struct s14* rsi18;
    struct s15* rdi19;
    int32_t* rbx20;
    int64_t rbp21;
    int64_t rdx22;
    struct s8* rdi23;
    struct s1* rsi24;
    int64_t rax25;
    struct s16* rdi26;
    struct s3* rsi27;
    int32_t* rcx28;
    int32_t* rbx29;
    struct s17* rdi30;
    struct s5* rsi31;
    struct s18* rdi32;
    struct s7* rsi33;
    int32_t v34;
    signed char** v35;
    int32_t** rax36;
    int32_t* v37;
    int32_t* rsi38;
    int64_t rbp39;
    int32_t* rdi40;
    int64_t rbp41;
    int32_t* rsi42;
    int32_t* rdi43;
    int64_t rbx44;
    int64_t v45;

    r14_3 = rax4;
    rax5 = fun_10a(0x834, 8);
    r15_6 = rax5;
    rax7 = fun_11c(0x76c, 8);
    r12_8 = rax7;
    rax9 = fun_12e(0x834, 8);
    r13_10 = rax9;
    *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
    g834 = LCPI1_1;
    rdi12 = reinterpret_cast<struct s11*>(0x838);
    rsi13 = reinterpret_cast<struct s12*>(12);
    *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, ecx");
        __asm__("divsd xmm1, xmm0");
        rdi12->f0 = rsi13->f0;
        rdi12 = reinterpret_cast<struct s11*>(&rdi12->f4);
        rsi13 = reinterpret_cast<struct s12*>(&rsi13->f4);
        ++rcx14;
    } while (rcx14 != 0x76c);
    rdi12->f0 = rsi13->f0;
    rdi15 = &rdi12->f4;
    rsi16 = reinterpret_cast<struct s13*>(&rsi13->f4);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, eax");
        __asm__("divsd xmm1, xmm0");
        *rdi15 = rsi16->f0;
        *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi18 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rdx17) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi19 = reinterpret_cast<struct s15*>(rbx20 + rax11 * 0xed8);
            rdi19->f0 = rsi18->f0;
            rdi15 = &rdi19->f4;
            rsi16 = reinterpret_cast<struct s13*>(&rsi18->f4);
            rdx17 = rsi16;
        } while (!reinterpret_cast<int1_t>(rsi16 == 0x76c));
        ++rax11;
    } while (rax11 != 0x834);
    *reinterpret_cast<int32_t*>(&rbp21) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp21) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx22) = 0x3b60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi23 = r14_3;
    *reinterpret_cast<int32_t*>(&rsi24) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_1f0();
    do {
        r15_6[rbp21] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rax25) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi23->f0 = rsi24->f0;
            rdi26 = reinterpret_cast<struct s16*>(&rdi23->f4);
            rsi27 = reinterpret_cast<struct s3*>(&rsi24->f4);
            rcx28 = rbx29 + rbp21 * 0xed8;
            __asm__("mulsd xmm0, [rcx+rax*8]");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi26->f0 = rsi27->f0;
            rdi30 = reinterpret_cast<struct s17*>(&rdi26->f4);
            rsi31 = reinterpret_cast<struct s5*>(&rsi27->f4);
            rdi30->f0 = rsi31->f0;
            rdi32 = reinterpret_cast<struct s18*>(&rdi30->f4);
            rsi33 = reinterpret_cast<struct s7*>(&rsi31->f4);
            __asm__("mulsd xmm0, [r12+rax*8]");
            __asm__("addsd xmm0, [r15+rbp*8]");
            rdi32->f0 = rsi33->f0;
            rdi23 = reinterpret_cast<struct s8*>(&rdi32->f4);
            rsi24 = reinterpret_cast<struct s1*>(&rsi33->f4);
            ++rax25;
        } while (rax25 != 0x76c);
        ++rbp21;
    } while (rbp21 != 0x834);
    if (v34 >= 43 && **v35 == fputc) {
        rax36 = g2a4;
        v37 = *rax36;
        fun_2c2(0x2b3, 22, 1);
        rsi38 = reinterpret_cast<int32_t*>(0x2c9);
        *reinterpret_cast<int32_t*>(&rbp39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi40 = v37;
        fun_2de();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp39) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi40) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi38 = v37;
                fun_324();
            }
            *rdi40 = *rsi38;
            rdi40 = v37;
            rsi38 = reinterpret_cast<int32_t*>(0x2f2);
            fun_2f9();
            ++rbp39;
        } while (rbp39 != 0x76c);
        *reinterpret_cast<int32_t*>(&rbp41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp41) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_342(v37, 0x32d, 0x334);
        rsi42 = reinterpret_cast<int32_t*>(0x349);
        rdi43 = v37;
        fun_35c();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp41) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi43) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi42 = v37;
                fun_3a4();
            }
            *rdi43 = *rsi42;
            rdi43 = v37;
            rsi42 = reinterpret_cast<int32_t*>(0x372);
            fun_379();
            ++rbp41;
        } while (rbp41 != 0x834);
        fun_3c3(v37, 0x3ad, 0x3b4);
        *reinterpret_cast<int32_t*>(&rsi24) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx22) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx28 = v37;
        fun_3dc(0x3ca, 22, 1, rcx28);
    }
    fun_26c(rbx44, rsi24, rdx22, rcx28);
    fun_274(r14_3, rsi24, rdx22, rcx28);
    fun_27c(r15_6, rsi24, rdx22, rcx28);
    fun_284(r12_8, rsi24, rdx22, rcx28);
    fun_28c(r13_10, rsi24, rdx22, rcx28);
    goto v45;
}

void fun_2c2(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* rsi4;
    int64_t rbp5;
    int32_t* rdi6;
    int32_t* v7;
    int32_t* v8;
    int32_t* v9;
    int64_t rbp10;
    int32_t* v11;
    int32_t* rsi12;
    int32_t* rdi13;
    int32_t* v14;
    int32_t* v15;
    int32_t* v16;
    int32_t* v17;
    int64_t rbx18;
    struct s8* r14_19;
    int64_t* r15_20;
    int64_t r12_21;
    int64_t r13_22;
    int64_t v23;

    rsi4 = reinterpret_cast<int32_t*>(0x2c9);
    *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi6 = v7;
    fun_2de();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp5) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v8;
            fun_324();
        }
        *rdi6 = *rsi4;
        rdi6 = v9;
        rsi4 = reinterpret_cast<int32_t*>(0x2f2);
        fun_2f9();
        ++rbp5;
    } while (rbp5 != 0x76c);
    *reinterpret_cast<int32_t*>(&rbp10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp10) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_342(v11, 0x32d, 0x334);
    rsi12 = reinterpret_cast<int32_t*>(0x349);
    rdi13 = v14;
    fun_35c();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp10) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi13) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi12 = v15;
            fun_3a4();
        }
        *rdi13 = *rsi12;
        rdi13 = v16;
        rsi12 = reinterpret_cast<int32_t*>(0x372);
        fun_379();
        ++rbp10;
    } while (rbp10 != 0x834);
    fun_3c3(v17, 0x3ad, 0x3b4);
    fun_3dc(0x3ca, 22, 1, v17);
    fun_26c(rbx18, 22, 1, v17);
    fun_274(r14_19, 22, 1, v17);
    fun_27c(r15_20, 22, 1, v17);
    fun_284(r12_21, 22, 1, v17);
    fun_28c(r13_22, 22, 1, v17);
    goto v23;
}

void fun_274(struct s8* rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t* r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t v8;

    fun_27c(r15_5, rsi, rdx, rcx);
    fun_284(r12_6, rsi, rdx, rcx);
    fun_28c(r13_7, rsi, rdx, rcx);
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

int64_t* fun_10a(int64_t rdi, int64_t rsi) {
    int64_t* r15_3;
    int64_t* rax4;
    int64_t rax5;
    int64_t r12_6;
    int64_t rax7;
    int64_t r13_8;
    int64_t rax9;
    struct s11* rdi10;
    struct s12* rsi11;
    int64_t rcx12;
    int32_t* rdi13;
    struct s13* rsi14;
    struct s13* rdx15;
    struct s14* rsi16;
    struct s19* rdi17;
    int32_t* rbx18;
    int64_t rbp19;
    int64_t rdx20;
    struct s20* rdi21;
    struct s20* r14_22;
    struct s1* rsi23;
    int64_t rax24;
    struct s21* rdi25;
    struct s3* rsi26;
    int32_t* rcx27;
    int32_t* rbx28;
    struct s22* rdi29;
    struct s5* rsi30;
    struct s23* rdi31;
    struct s7* rsi32;
    int32_t v33;
    signed char** v34;
    int32_t** rax35;
    int32_t* v36;
    int32_t* rsi37;
    int64_t rbp38;
    int32_t* rdi39;
    int64_t rbp40;
    int32_t* rsi41;
    int32_t* rdi42;
    int64_t rbx43;
    struct s8* r14_44;
    int64_t v45;

    r15_3 = rax4;
    rax5 = fun_11c(0x76c, 8);
    r12_6 = rax5;
    rax7 = fun_12e(0x834, 8);
    r13_8 = rax7;
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
    g834 = LCPI1_1;
    rdi10 = reinterpret_cast<struct s11*>(0x838);
    rsi11 = reinterpret_cast<struct s12*>(12);
    *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, ecx");
        __asm__("divsd xmm1, xmm0");
        rdi10->f0 = rsi11->f0;
        rdi10 = reinterpret_cast<struct s11*>(&rdi10->f4);
        rsi11 = reinterpret_cast<struct s12*>(&rsi11->f4);
        ++rcx12;
    } while (rcx12 != 0x76c);
    rdi10->f0 = rsi11->f0;
    rdi13 = &rdi10->f4;
    rsi14 = reinterpret_cast<struct s13*>(&rsi11->f4);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, eax");
        __asm__("divsd xmm1, xmm0");
        *rdi13 = rsi14->f0;
        *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi16 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rdx15) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi17 = reinterpret_cast<struct s19*>(rbx18 + rax9 * 0xed8);
            rdi17->f0 = rsi16->f0;
            rdi13 = &rdi17->f4;
            rsi14 = reinterpret_cast<struct s13*>(&rsi16->f4);
            rdx15 = rsi14;
        } while (!reinterpret_cast<int1_t>(rsi14 == 0x76c));
        ++rax9;
    } while (rax9 != 0x834);
    *reinterpret_cast<int32_t*>(&rbp19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp19) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx20) = 0x3b60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi21 = r14_22;
    *reinterpret_cast<int32_t*>(&rsi23) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_1f0();
    do {
        r15_3[rbp19] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rax24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi21->f0 = rsi23->f0;
            rdi25 = reinterpret_cast<struct s21*>(&rdi21->f4);
            rsi26 = reinterpret_cast<struct s3*>(&rsi23->f4);
            rcx27 = rbx28 + rbp19 * 0xed8;
            __asm__("mulsd xmm0, [rcx+rax*8]");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi25->f0 = rsi26->f0;
            rdi29 = reinterpret_cast<struct s22*>(&rdi25->f4);
            rsi30 = reinterpret_cast<struct s5*>(&rsi26->f4);
            rdi29->f0 = rsi30->f0;
            rdi31 = reinterpret_cast<struct s23*>(&rdi29->f4);
            rsi32 = reinterpret_cast<struct s7*>(&rsi30->f4);
            __asm__("mulsd xmm0, [r12+rax*8]");
            __asm__("addsd xmm0, [r15+rbp*8]");
            rdi31->f0 = rsi32->f0;
            rdi21 = reinterpret_cast<struct s20*>(&rdi31->f4);
            rsi23 = reinterpret_cast<struct s1*>(&rsi32->f4);
            ++rax24;
        } while (rax24 != 0x76c);
        ++rbp19;
    } while (rbp19 != 0x834);
    if (v33 >= 43 && **v34 == fputc) {
        rax35 = g2a4;
        v36 = *rax35;
        fun_2c2(0x2b3, 22, 1);
        rsi37 = reinterpret_cast<int32_t*>(0x2c9);
        *reinterpret_cast<int32_t*>(&rbp38) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp38) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi39 = v36;
        fun_2de();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp38) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi39) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi37 = v36;
                fun_324();
            }
            *rdi39 = *rsi37;
            rdi39 = v36;
            rsi37 = reinterpret_cast<int32_t*>(0x2f2);
            fun_2f9();
            ++rbp38;
        } while (rbp38 != 0x76c);
        *reinterpret_cast<int32_t*>(&rbp40) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp40) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_342(v36, 0x32d, 0x334);
        rsi41 = reinterpret_cast<int32_t*>(0x349);
        rdi42 = v36;
        fun_35c();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp40) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi42) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi41 = v36;
                fun_3a4();
            }
            *rdi42 = *rsi41;
            rdi42 = v36;
            rsi41 = reinterpret_cast<int32_t*>(0x372);
            fun_379();
            ++rbp40;
        } while (rbp40 != 0x834);
        fun_3c3(v36, 0x3ad, 0x3b4);
        *reinterpret_cast<int32_t*>(&rsi23) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx20) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx27 = v36;
        fun_3dc(0x3ca, 22, 1, rcx27);
    }
    fun_26c(rbx43, rsi23, rdx20, rcx27);
    fun_274(r14_44, rsi23, rdx20, rcx27);
    fun_27c(r15_3, rsi23, rdx20, rcx27);
    fun_284(r12_6, rsi23, rdx20, rcx27);
    fun_28c(r13_8, rsi23, rdx20, rcx27);
    goto v45;
}

void fun_2de() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* v4;
    int32_t* v5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* rsi8;
    int32_t* rdi9;
    int32_t* v10;
    int32_t* v11;
    int32_t* v12;
    int32_t* v13;
    int64_t rbx14;
    struct s8* r14_15;
    int64_t* r15_16;
    int64_t r12_17;
    int64_t r13_18;
    int64_t v19;

    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = v4;
            fun_324();
        }
        *rdi2 = *rsi3;
        rdi2 = v5;
        rsi3 = reinterpret_cast<int32_t*>(0x2f2);
        fun_2f9();
        ++rbp1;
    } while (rbp1 != 0x76c);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_342(v7, 0x32d, 0x334);
    rsi8 = reinterpret_cast<int32_t*>(0x349);
    rdi9 = v10;
    fun_35c();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi9) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi8 = v11;
            fun_3a4();
        }
        *rdi9 = *rsi8;
        rdi9 = v12;
        rsi8 = reinterpret_cast<int32_t*>(0x372);
        fun_379();
        ++rbp6;
    } while (rbp6 != 0x834);
    fun_3c3(v13, 0x3ad, 0x3b4);
    fun_3dc(0x3ca, 22, 1, v13);
    fun_26c(rbx14, 22, 1, v13);
    fun_274(r14_15, 22, 1, v13);
    fun_27c(r15_16, 22, 1, v13);
    fun_284(r12_17, 22, 1, v13);
    fun_28c(r13_18, 22, 1, v13);
    goto v19;
}

void fun_27c(int64_t* rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t v7;

    fun_284(r12_5, rsi, rdx, rcx);
    fun_28c(r13_6, rsi, rdx, rcx);
    goto v7;
}

void fun_342(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rsi4;
    int32_t* rdi5;
    int32_t* v6;
    int64_t rbp7;
    int32_t* v8;
    int32_t* v9;
    int32_t* v10;
    int64_t rbx11;
    struct s8* r14_12;
    int64_t* r15_13;
    int64_t r12_14;
    int64_t r13_15;
    int64_t v16;

    rsi4 = reinterpret_cast<int32_t*>(0x349);
    rdi5 = v6;
    fun_35c();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp7) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v8;
            fun_3a4();
        }
        *rdi5 = *rsi4;
        rdi5 = v9;
        rsi4 = reinterpret_cast<int32_t*>(0x372);
        fun_379();
        ++rbp7;
    } while (rbp7 != 0x834);
    fun_3c3(v10, 0x3ad, 0x3b4);
    fun_3dc(0x3ca, 22, 1, v10);
    fun_26c(rbx11, 22, 1, v10);
    fun_274(r14_12, 22, 1, v10);
    fun_27c(r15_13, 22, 1, v10);
    fun_284(r12_14, 22, 1, v10);
    fun_28c(r13_15, 22, 1, v10);
    goto v16;
}

void fun_3c3(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rbp4;
    int64_t rbx5;
    struct s8* r14_6;
    int64_t* r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_3dc(0x3ca, 22, 1, rbp4);
    fun_26c(rbx5, 22, 1, rbp4);
    fun_274(r14_6, 22, 1, rbp4);
    fun_27c(r15_7, 22, 1, rbp4);
    fun_284(r12_8, 22, 1, rbp4);
    fun_28c(r13_9, 22, 1, rbp4);
    goto v10;
}

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

struct s28 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_11c(int64_t rdi, int64_t rsi) {
    int64_t r12_3;
    int64_t rax4;
    int64_t rax5;
    int64_t r13_6;
    int64_t rax7;
    struct s11* rdi8;
    struct s12* rsi9;
    int64_t rcx10;
    int32_t* rdi11;
    struct s13* rsi12;
    struct s13* rdx13;
    struct s14* rsi14;
    struct s24* rdi15;
    int32_t* rbx16;
    int64_t rbp17;
    int64_t rdx18;
    struct s25* rdi19;
    struct s25* r14_20;
    struct s1* rsi21;
    int64_t* r15_22;
    int64_t rax23;
    struct s26* rdi24;
    struct s3* rsi25;
    int32_t* rcx26;
    int32_t* rbx27;
    struct s27* rdi28;
    struct s5* rsi29;
    struct s28* rdi30;
    struct s7* rsi31;
    int32_t v32;
    signed char** v33;
    int32_t** rax34;
    int32_t* v35;
    int32_t* rsi36;
    int64_t rbp37;
    int32_t* rdi38;
    int64_t rbp39;
    int32_t* rsi40;
    int32_t* rdi41;
    int64_t rbx42;
    struct s8* r14_43;
    int64_t* r15_44;
    int64_t v45;

    r12_3 = rax4;
    rax5 = fun_12e(0x834, 8);
    r13_6 = rax5;
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    g834 = LCPI1_1;
    rdi8 = reinterpret_cast<struct s11*>(0x838);
    rsi9 = reinterpret_cast<struct s12*>(12);
    *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, ecx");
        __asm__("divsd xmm1, xmm0");
        rdi8->f0 = rsi9->f0;
        rdi8 = reinterpret_cast<struct s11*>(&rdi8->f4);
        rsi9 = reinterpret_cast<struct s12*>(&rsi9->f4);
        ++rcx10;
    } while (rcx10 != 0x76c);
    rdi8->f0 = rsi9->f0;
    rdi11 = &rdi8->f4;
    rsi12 = reinterpret_cast<struct s13*>(&rsi9->f4);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, eax");
        __asm__("divsd xmm1, xmm0");
        *rdi11 = rsi12->f0;
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi14 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rdx13) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi15 = reinterpret_cast<struct s24*>(rbx16 + rax7 * 0xed8);
            rdi15->f0 = rsi14->f0;
            rdi11 = &rdi15->f4;
            rsi12 = reinterpret_cast<struct s13*>(&rsi14->f4);
            rdx13 = rsi12;
        } while (!reinterpret_cast<int1_t>(rsi12 == 0x76c));
        ++rax7;
    } while (rax7 != 0x834);
    *reinterpret_cast<int32_t*>(&rbp17) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp17) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx18) = 0x3b60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi19 = r14_20;
    *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_1f0();
    do {
        r15_22[rbp17] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rax23) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi19->f0 = rsi21->f0;
            rdi24 = reinterpret_cast<struct s26*>(&rdi19->f4);
            rsi25 = reinterpret_cast<struct s3*>(&rsi21->f4);
            rcx26 = rbx27 + rbp17 * 0xed8;
            __asm__("mulsd xmm0, [rcx+rax*8]");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi24->f0 = rsi25->f0;
            rdi28 = reinterpret_cast<struct s27*>(&rdi24->f4);
            rsi29 = reinterpret_cast<struct s5*>(&rsi25->f4);
            rdi28->f0 = rsi29->f0;
            rdi30 = reinterpret_cast<struct s28*>(&rdi28->f4);
            rsi31 = reinterpret_cast<struct s7*>(&rsi29->f4);
            __asm__("mulsd xmm0, [r12+rax*8]");
            __asm__("addsd xmm0, [r15+rbp*8]");
            rdi30->f0 = rsi31->f0;
            rdi19 = reinterpret_cast<struct s25*>(&rdi30->f4);
            rsi21 = reinterpret_cast<struct s1*>(&rsi31->f4);
            ++rax23;
        } while (rax23 != 0x76c);
        ++rbp17;
    } while (rbp17 != 0x834);
    if (v32 >= 43 && **v33 == fputc) {
        rax34 = g2a4;
        v35 = *rax34;
        fun_2c2(0x2b3, 22, 1);
        rsi36 = reinterpret_cast<int32_t*>(0x2c9);
        *reinterpret_cast<int32_t*>(&rbp37) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp37) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi38 = v35;
        fun_2de();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp37) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi38) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi36 = v35;
                fun_324();
            }
            *rdi38 = *rsi36;
            rdi38 = v35;
            rsi36 = reinterpret_cast<int32_t*>(0x2f2);
            fun_2f9();
            ++rbp37;
        } while (rbp37 != 0x76c);
        *reinterpret_cast<int32_t*>(&rbp39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_342(v35, 0x32d, 0x334);
        rsi40 = reinterpret_cast<int32_t*>(0x349);
        rdi41 = v35;
        fun_35c();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp39) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi41) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi40 = v35;
                fun_3a4();
            }
            *rdi41 = *rsi40;
            rdi41 = v35;
            rsi40 = reinterpret_cast<int32_t*>(0x372);
            fun_379();
            ++rbp39;
        } while (rbp39 != 0x834);
        fun_3c3(v35, 0x3ad, 0x3b4);
        *reinterpret_cast<int32_t*>(&rsi21) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx18) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx26 = v35;
        fun_3dc(0x3ca, 22, 1, rcx26);
    }
    fun_26c(rbx42, rsi21, rdx18, rcx26);
    fun_274(r14_43, rsi21, rdx18, rcx26);
    fun_27c(r15_44, rsi21, rdx18, rcx26);
    fun_284(r12_3, rsi21, rdx18, rcx26);
    fun_28c(r13_6, rsi21, rdx18, rcx26);
    goto v45;
}

void fun_284(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int64_t v6;

    fun_28c(r13_5, rsi, rdx, rcx);
    goto v6;
}

void fun_35c() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* v4;
    int32_t* v5;
    int32_t* v6;
    int64_t rbx7;
    struct s8* r14_8;
    int64_t* r15_9;
    int64_t r12_10;
    int64_t r13_11;
    int64_t v12;

    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = v4;
            fun_3a4();
        }
        *rdi2 = *rsi3;
        rdi2 = v5;
        rsi3 = reinterpret_cast<int32_t*>(0x372);
        fun_379();
        ++rbp1;
    } while (rbp1 != 0x834);
    fun_3c3(v6, 0x3ad, 0x3b4);
    fun_3dc(0x3ca, 22, 1, v6);
    fun_26c(rbx7, 22, 1, v6);
    fun_274(r14_8, 22, 1, v6);
    fun_27c(r15_9, 22, 1, v6);
    fun_284(r12_10, 22, 1, v6);
    fun_28c(r13_11, 22, 1, v6);
    goto v12;
}

void fun_3dc(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    struct s8* r14_6;
    int64_t* r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_26c(rbx5, rsi, rdx, rcx);
    fun_274(r14_6, rsi, rdx, rcx);
    fun_27c(r15_7, rsi, rdx, rcx);
    fun_284(r12_8, rsi, rdx, rcx);
    fun_28c(r13_9, rsi, rdx, rcx);
    goto v10;
}

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

int64_t fun_12e(struct s9* rdi, struct s10* rsi) {
    int64_t r13_3;
    int64_t rax4;
    int64_t rax5;
    struct s11* rdi6;
    struct s12* rsi7;
    int64_t rcx8;
    int32_t* rdi9;
    struct s13* rsi10;
    struct s13* rdx11;
    struct s14* rsi12;
    struct s29* rdi13;
    int32_t* rbx14;
    int64_t rbp15;
    int64_t rdx16;
    struct s30* rdi17;
    struct s30* r14_18;
    struct s1* rsi19;
    int64_t* r15_20;
    int64_t rax21;
    struct s31* rdi22;
    struct s3* rsi23;
    int32_t* rcx24;
    int32_t* rbx25;
    struct s32* rdi26;
    struct s5* rsi27;
    struct s33* rdi28;
    struct s7* rsi29;
    int32_t v30;
    signed char** v31;
    int32_t** rax32;
    int32_t* v33;
    int32_t* rsi34;
    int64_t rbp35;
    int32_t* rdi36;
    int64_t rbp37;
    int32_t* rsi38;
    int32_t* rdi39;
    int64_t rbx40;
    struct s8* r14_41;
    int64_t* r15_42;
    int64_t r12_43;
    int64_t v44;

    r13_3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi6 = reinterpret_cast<struct s11*>(&rdi->f4);
    rsi7 = reinterpret_cast<struct s12*>(&rsi->f4);
    *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, ecx");
        __asm__("divsd xmm1, xmm0");
        rdi6->f0 = rsi7->f0;
        rdi6 = reinterpret_cast<struct s11*>(&rdi6->f4);
        rsi7 = reinterpret_cast<struct s12*>(&rsi7->f4);
        ++rcx8;
    } while (rcx8 != 0x76c);
    rdi6->f0 = rsi7->f0;
    rdi9 = &rdi6->f4;
    rsi10 = reinterpret_cast<struct s13*>(&rsi7->f4);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, eax");
        __asm__("divsd xmm1, xmm0");
        *rdi9 = rsi10->f0;
        *reinterpret_cast<int32_t*>(&rdx11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi12 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rdx11) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi13 = reinterpret_cast<struct s29*>(rbx14 + rax5 * 0xed8);
            rdi13->f0 = rsi12->f0;
            rdi9 = &rdi13->f4;
            rsi10 = reinterpret_cast<struct s13*>(&rsi12->f4);
            rdx11 = rsi10;
        } while (!reinterpret_cast<int1_t>(rsi10 == 0x76c));
        ++rax5;
    } while (rax5 != 0x834);
    *reinterpret_cast<int32_t*>(&rbp15) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp15) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx16) = 0x3b60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi17 = r14_18;
    *reinterpret_cast<int32_t*>(&rsi19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_1f0();
    do {
        r15_20[rbp15] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rax21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi17->f0 = rsi19->f0;
            rdi22 = reinterpret_cast<struct s31*>(&rdi17->f4);
            rsi23 = reinterpret_cast<struct s3*>(&rsi19->f4);
            rcx24 = rbx25 + rbp15 * 0xed8;
            __asm__("mulsd xmm0, [rcx+rax*8]");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi22->f0 = rsi23->f0;
            rdi26 = reinterpret_cast<struct s32*>(&rdi22->f4);
            rsi27 = reinterpret_cast<struct s5*>(&rsi23->f4);
            rdi26->f0 = rsi27->f0;
            rdi28 = reinterpret_cast<struct s33*>(&rdi26->f4);
            rsi29 = reinterpret_cast<struct s7*>(&rsi27->f4);
            __asm__("mulsd xmm0, [r12+rax*8]");
            __asm__("addsd xmm0, [r15+rbp*8]");
            rdi28->f0 = rsi29->f0;
            rdi17 = reinterpret_cast<struct s30*>(&rdi28->f4);
            rsi19 = reinterpret_cast<struct s1*>(&rsi29->f4);
            ++rax21;
        } while (rax21 != 0x76c);
        ++rbp15;
    } while (rbp15 != 0x834);
    if (v30 >= 43 && **v31 == fputc) {
        rax32 = g2a4;
        v33 = *rax32;
        fun_2c2(0x2b3, 22, 1);
        rsi34 = reinterpret_cast<int32_t*>(0x2c9);
        *reinterpret_cast<int32_t*>(&rbp35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp35) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi36 = v33;
        fun_2de();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp35) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi36) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi34 = v33;
                fun_324();
            }
            *rdi36 = *rsi34;
            rdi36 = v33;
            rsi34 = reinterpret_cast<int32_t*>(0x2f2);
            fun_2f9();
            ++rbp35;
        } while (rbp35 != 0x76c);
        *reinterpret_cast<int32_t*>(&rbp37) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp37) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_342(v33, 0x32d, 0x334);
        rsi38 = reinterpret_cast<int32_t*>(0x349);
        rdi39 = v33;
        fun_35c();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp37) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi39) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi38 = v33;
                fun_3a4();
            }
            *rdi39 = *rsi38;
            rdi39 = v33;
            rsi38 = reinterpret_cast<int32_t*>(0x372);
            fun_379();
            ++rbp37;
        } while (rbp37 != 0x834);
        fun_3c3(v33, 0x3ad, 0x3b4);
        *reinterpret_cast<int32_t*>(&rsi19) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx16) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx24 = v33;
        fun_3dc(0x3ca, 22, 1, rcx24);
    }
    fun_26c(rbx40, rsi19, rdx16, rcx24);
    fun_274(r14_41, rsi19, rdx16, rcx24);
    fun_27c(r15_42, rsi19, rdx16, rcx24);
    fun_284(r12_43, rsi19, rdx16, rcx24);
    fun_28c(r13_3, rsi19, rdx16, rcx24);
    goto v44;
}

void fun_28c(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc() {
}

void fun_19(int32_t edi) {
}

void fun_7c(int64_t rdi) {
    __asm__("mulsd xmm0, [rdi+rsi*8]");
    __asm__("addsd xmm0, [r15+rsi*8]");
}

void fun_92(unsigned char* rdi, int64_t rsi) {
    signed char al3;
    uint1_t cf4;

    rdi[rsi * 8] = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rdi[rsi * 8] + al3) + cf4);
    __asm__("mulsd xmm0, [rbx+rsi*8]");
    __asm__("addsd xmm0, [r14+rdx*8]");
}

void fun_e8() {
    return;
}

void fun_e9() {
    fun_f8(0x76c, 8);
}

