
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

int32_t** g3a4 = reinterpret_cast<int32_t**>(0x8244c8948088b48);

void fun_3c2(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_3de();

void fun_428();

void fun_3f9();

void fun_446(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_460();

void fun_4b8();

void fun_489();

void fun_4d7(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_4f0(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_36c(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

struct s8 {
    int32_t f0;
    int32_t f4;
};

void fun_374(struct s8* rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_37c(int64_t* rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_384(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_38c(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_2e6() {
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
    int32_t eax21;
    int64_t rbp22;
    int32_t* rsi23;
    int32_t* rdi24;
    int32_t eax25;
    int64_t rbx26;
    struct s8* r14_27;
    int64_t* r15_28;
    int64_t r12_29;
    int64_t r13_30;
    int64_t v31;

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
        rax16 = g3a4;
        v17 = *rax16;
        fun_3c2(0x3b3, 22, 1);
        rsi18 = reinterpret_cast<int32_t*>(0x3c9);
        *reinterpret_cast<int32_t*>(&rbp19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp19) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi20 = v17;
        fun_3de();
        do {
            eax21 = *reinterpret_cast<int32_t*>(&rbp19) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax21)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi20) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi18 = v17;
                fun_428();
            }
            *rdi20 = *rsi18;
            rdi20 = v17;
            rsi18 = reinterpret_cast<int32_t*>(0x3f2);
            fun_3f9();
            ++rbp19;
        } while (rbp19 != 0x76c);
        *reinterpret_cast<int32_t*>(&rbp22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp22) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_446(v17, 0x431, 0x438);
        rsi23 = reinterpret_cast<int32_t*>(0x44d);
        rdi24 = v17;
        fun_460();
        do {
            eax25 = *reinterpret_cast<int32_t*>(&rbp22) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax25)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi24) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi23 = v17;
                fun_4b8();
            }
            *rdi24 = *rsi23;
            rdi24 = v17;
            rsi23 = reinterpret_cast<int32_t*>(0x482);
            fun_489();
            ++rbp22;
        } while (rbp22 != 0x834);
        fun_4d7(v17, 0x4c1, 0x4c8);
        *reinterpret_cast<int32_t*>(&rsi5) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx8 = v17;
        fun_4f0(0x4de, 22, 1, rcx8);
    }
    fun_36c(rbx26, rsi5, 1, rcx8);
    fun_374(r14_27, rsi5, 1, rcx8);
    fun_37c(r15_28, rsi5, 1, rcx8);
    fun_384(r12_29, rsi5, 1, rcx8);
    fun_38c(r13_30, rsi5, 1, rcx8);
    goto v31;
}

void fun_36c(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    struct s8* r14_5;
    int64_t* r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    fun_374(r14_5, rsi, rdx, rcx);
    fun_37c(r15_6, rsi, rdx, rcx);
    fun_384(r12_7, rsi, rdx, rcx);
    fun_38c(r13_8, rsi, rdx, rcx);
    goto v9;
}

void fun_3f9() {
    int64_t rbp1;
    int32_t eax2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* v5;
    int32_t* v6;
    int64_t rbp7;
    int32_t* v8;
    int32_t* rsi9;
    int32_t* rdi10;
    int32_t* v11;
    int32_t eax12;
    int32_t* v13;
    int32_t* v14;
    int32_t* v15;
    int64_t rbx16;
    struct s8* r14_17;
    int64_t* r15_18;
    int64_t r12_19;
    int64_t r13_20;
    int64_t v21;

    while (++rbp1, rbp1 != 0x76c) {
        eax2 = *reinterpret_cast<int32_t*>(&rbp1) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v5;
            fun_428();
        }
        *rdi3 = *rsi4;
        rdi3 = v6;
        rsi4 = reinterpret_cast<int32_t*>(0x3f2);
        fun_3f9();
    }
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_446(v8, 0x431, 0x438);
    rsi9 = reinterpret_cast<int32_t*>(0x44d);
    rdi10 = v11;
    fun_460();
    do {
        eax12 = *reinterpret_cast<int32_t*>(&rbp7) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax12)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi10) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi9 = v13;
            fun_4b8();
        }
        *rdi10 = *rsi9;
        rdi10 = v14;
        rsi9 = reinterpret_cast<int32_t*>(0x482);
        fun_489();
        ++rbp7;
    } while (rbp7 != 0x834);
    fun_4d7(v15, 0x4c1, 0x4c8);
    fun_4f0(0x4de, 22, 1, v15);
    fun_36c(rbx16, 22, 1, v15);
    fun_374(r14_17, 22, 1, v15);
    fun_37c(r15_18, 22, 1, v15);
    fun_384(r12_19, 22, 1, v15);
    fun_38c(r13_20, 22, 1, v15);
    goto v21;
}

void fun_428() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t rbp4;
    int32_t eax5;
    int32_t* v6;
    int64_t rbp7;
    int32_t* v8;
    int32_t* rsi9;
    int32_t* rdi10;
    int32_t* v11;
    int32_t eax12;
    int32_t* v13;
    int32_t* v14;
    int32_t* v15;
    int64_t rbx16;
    struct s8* r14_17;
    int64_t* r15_18;
    int64_t r12_19;
    int64_t r13_20;
    int64_t v21;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = v3;
            rsi2 = reinterpret_cast<int32_t*>(0x3f2);
            fun_3f9();
            ++rbp4;
            if (rbp4 == 0x76c) 
                goto addr_42a_7;
            eax5 = *reinterpret_cast<int32_t*>(&rbp4) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v6;
        fun_428();
    }
    addr_42a_7:
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_446(v8, 0x431, 0x438);
    rsi9 = reinterpret_cast<int32_t*>(0x44d);
    rdi10 = v11;
    fun_460();
    do {
        eax12 = *reinterpret_cast<int32_t*>(&rbp7) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax12)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi10) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi9 = v13;
            fun_4b8();
        }
        *rdi10 = *rsi9;
        rdi10 = v14;
        rsi9 = reinterpret_cast<int32_t*>(0x482);
        fun_489();
        ++rbp7;
    } while (rbp7 != 0x834);
    fun_4d7(v15, 0x4c1, 0x4c8);
    fun_4f0(0x4de, 22, 1, v15);
    fun_36c(rbx16, 22, 1, v15);
    fun_374(r14_17, 22, 1, v15);
    fun_37c(r15_18, 22, 1, v15);
    fun_384(r12_19, 22, 1, v15);
    fun_38c(r13_20, 22, 1, v15);
    goto v21;
}

void fun_489() {
    int64_t rbp1;
    int32_t eax2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* v5;
    int32_t* v6;
    int32_t* v7;
    int64_t rbx8;
    struct s8* r14_9;
    int64_t* r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    while (++rbp1, rbp1 != 0x834) {
        eax2 = *reinterpret_cast<int32_t*>(&rbp1) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v5;
            fun_4b8();
        }
        *rdi3 = *rsi4;
        rdi3 = v6;
        rsi4 = reinterpret_cast<int32_t*>(0x482);
        fun_489();
    }
    fun_4d7(v7, 0x4c1, 0x4c8);
    fun_4f0(0x4de, 22, 1, v7);
    fun_36c(rbx8, 22, 1, v7);
    fun_374(r14_9, 22, 1, v7);
    fun_37c(r15_10, 22, 1, v7);
    fun_384(r12_11, 22, 1, v7);
    fun_38c(r13_12, 22, 1, v7);
    goto v13;
}

void fun_4b8() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t rbp4;
    int32_t eax5;
    int32_t* v6;
    int32_t* v7;
    int64_t rbx8;
    struct s8* r14_9;
    int64_t* r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = v3;
            rsi2 = reinterpret_cast<int32_t*>(0x482);
            fun_489();
            ++rbp4;
            if (rbp4 == 0x834) 
                goto addr_4ba_7;
            eax5 = *reinterpret_cast<int32_t*>(&rbp4) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v6;
        fun_4b8();
    }
    addr_4ba_7:
    fun_4d7(v7, 0x4c1, 0x4c8);
    fun_4f0(0x4de, 22, 1, v7);
    fun_36c(rbx8, 22, 1, v7);
    fun_374(r14_9, 22, 1, v7);
    fun_37c(r15_10, 22, 1, v7);
    fun_384(r12_11, 22, 1, v7);
    fun_38c(r13_12, 22, 1, v7);
    goto v13;
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

int32_t g8 = 0x4c505354;

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
    int64_t rcx12;
    int32_t* rdi13;
    int32_t* rsi14;
    int64_t rcx15;
    int64_t rbp16;
    int64_t rdx17;
    struct s8* rdi18;
    struct s1* rsi19;
    int64_t rax20;
    struct s11* rdi21;
    struct s3* rsi22;
    int32_t* rcx23;
    int32_t* rbx24;
    struct s12* rdi25;
    struct s5* rsi26;
    struct s13* rdi27;
    struct s7* rsi28;
    int32_t v29;
    signed char** v30;
    int32_t** rax31;
    int32_t* v32;
    int32_t* rsi33;
    int64_t rbp34;
    int32_t* rdi35;
    int32_t eax36;
    int64_t rbp37;
    int32_t* rsi38;
    int32_t* rdi39;
    int32_t eax40;
    int64_t rbx41;
    int64_t v42;

    r14_3 = rax4;
    rax5 = fun_10a(0x834, 8);
    r15_6 = rax5;
    rax7 = fun_11c(0x76c, 8);
    r12_8 = rax7;
    rax9 = fun_12e(0x834, 8);
    r13_10 = rax9;
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("cvtdq2pd xmm4, xmm0");
        __asm__("divpd xmm4, xmm1");
        __asm__("movupd [r12+rcx*8], xmm4");
        __asm__("movdqa xmm4, xmm0");
        __asm__("paddd xmm4, xmm2");
        __asm__("cvtdq2pd xmm4, xmm4");
        __asm__("divpd xmm4, xmm1");
        __asm__("movupd [r12+rdx], xmm4");
        rcx12 = rcx12 + 4;
        __asm__("paddd xmm0, xmm3");
    } while (rcx12 != 0x76c);
    g834 = g8;
    rdi13 = reinterpret_cast<int32_t*>(0x838);
    rsi14 = reinterpret_cast<int32_t*>(12);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("xorps xmm7, xmm7");
        __asm__("cvtsi2sd xmm7, eax");
        __asm__("divsd xmm7, xmm0");
        *rdi13 = *rsi14;
        ++rdi13;
        ++rsi14;
        __asm__("movd xmm7, rax");
        __asm__("pshufd xmm7, xmm7, 0x44");
        *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("movdqa xmm9, xmm8");
            __asm__("psubq xmm9, xmm2");
            __asm__("movdqa xmm10, xmm7");
            __asm__("psrlq xmm10, 0x20");
            __asm__("movdqa xmm11, xmm9");
            __asm__("psrlq xmm11, 0x20");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pmuludq xmm11, xmm7");
            __asm__("paddq xmm11, xmm10");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("psllq xmm11, 0x20");
            __asm__("paddq xmm9, xmm11");
            __asm__("pshufd xmm10, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm9, 0xee");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("psrld xmm9, 0xb");
            __asm__("pshufd xmm11, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("psubd xmm10, xmm9");
            __asm__("cvtdq2pd xmm9, xmm10");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rdx+rcx*8], xmm9");
            rcx15 = rcx15 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rcx15 != 0x76c);
        ++rax11;
    } while (rax11 != 0x834);
    *reinterpret_cast<int32_t*>(&rbp16) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp16) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx17) = 0x3b60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi18 = r14_3;
    *reinterpret_cast<int32_t*>(&rsi19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_2e6();
    do {
        r15_6[rbp16] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rax20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi18->f0 = rsi19->f0;
            rdi21 = reinterpret_cast<struct s11*>(&rdi18->f4);
            rsi22 = reinterpret_cast<struct s3*>(&rsi19->f4);
            rcx23 = rbx24 + rbp16 * 0xed8;
            __asm__("mulsd xmm0, [rcx+rax*8]");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi21->f0 = rsi22->f0;
            rdi25 = reinterpret_cast<struct s12*>(&rdi21->f4);
            rsi26 = reinterpret_cast<struct s5*>(&rsi22->f4);
            rdi25->f0 = rsi26->f0;
            rdi27 = reinterpret_cast<struct s13*>(&rdi25->f4);
            rsi28 = reinterpret_cast<struct s7*>(&rsi26->f4);
            __asm__("mulsd xmm0, [r12+rax*8]");
            __asm__("addsd xmm0, [r15+rbp*8]");
            rdi27->f0 = rsi28->f0;
            rdi18 = reinterpret_cast<struct s8*>(&rdi27->f4);
            rsi19 = reinterpret_cast<struct s1*>(&rsi28->f4);
            ++rax20;
        } while (rax20 != 0x76c);
        ++rbp16;
    } while (rbp16 != 0x834);
    if (v29 >= 43 && **v30 == fputc) {
        rax31 = g3a4;
        v32 = *rax31;
        fun_3c2(0x3b3, 22, 1);
        rsi33 = reinterpret_cast<int32_t*>(0x3c9);
        *reinterpret_cast<int32_t*>(&rbp34) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp34) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi35 = v32;
        fun_3de();
        do {
            eax36 = *reinterpret_cast<int32_t*>(&rbp34) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax36)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi35) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi33 = v32;
                fun_428();
            }
            *rdi35 = *rsi33;
            rdi35 = v32;
            rsi33 = reinterpret_cast<int32_t*>(0x3f2);
            fun_3f9();
            ++rbp34;
        } while (rbp34 != 0x76c);
        *reinterpret_cast<int32_t*>(&rbp37) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp37) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_446(v32, 0x431, 0x438);
        rsi38 = reinterpret_cast<int32_t*>(0x44d);
        rdi39 = v32;
        fun_460();
        do {
            eax40 = *reinterpret_cast<int32_t*>(&rbp37) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax40)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi39) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi38 = v32;
                fun_4b8();
            }
            *rdi39 = *rsi38;
            rdi39 = v32;
            rsi38 = reinterpret_cast<int32_t*>(0x482);
            fun_489();
            ++rbp37;
        } while (rbp37 != 0x834);
        fun_4d7(v32, 0x4c1, 0x4c8);
        *reinterpret_cast<int32_t*>(&rsi19) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx17) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx23 = v32;
        fun_4f0(0x4de, 22, 1, rcx23);
    }
    fun_36c(rbx41, rsi19, rdx17, rcx23);
    fun_374(r14_3, rsi19, rdx17, rcx23);
    fun_37c(r15_6, rsi19, rdx17, rcx23);
    fun_384(r12_8, rsi19, rdx17, rcx23);
    fun_38c(r13_10, rsi19, rdx17, rcx23);
    goto v42;
}

void fun_3c2(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* rsi4;
    int64_t rbp5;
    int32_t* rdi6;
    int32_t* v7;
    int32_t eax8;
    int32_t* v9;
    int32_t* v10;
    int64_t rbp11;
    int32_t* v12;
    int32_t* rsi13;
    int32_t* rdi14;
    int32_t* v15;
    int32_t eax16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int64_t rbx20;
    struct s8* r14_21;
    int64_t* r15_22;
    int64_t r12_23;
    int64_t r13_24;
    int64_t v25;

    rsi4 = reinterpret_cast<int32_t*>(0x3c9);
    *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi6 = v7;
    fun_3de();
    do {
        eax8 = *reinterpret_cast<int32_t*>(&rbp5) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax8)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v9;
            fun_428();
        }
        *rdi6 = *rsi4;
        rdi6 = v10;
        rsi4 = reinterpret_cast<int32_t*>(0x3f2);
        fun_3f9();
        ++rbp5;
    } while (rbp5 != 0x76c);
    *reinterpret_cast<int32_t*>(&rbp11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp11) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_446(v12, 0x431, 0x438);
    rsi13 = reinterpret_cast<int32_t*>(0x44d);
    rdi14 = v15;
    fun_460();
    do {
        eax16 = *reinterpret_cast<int32_t*>(&rbp11) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax16)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi14) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi13 = v17;
            fun_4b8();
        }
        *rdi14 = *rsi13;
        rdi14 = v18;
        rsi13 = reinterpret_cast<int32_t*>(0x482);
        fun_489();
        ++rbp11;
    } while (rbp11 != 0x834);
    fun_4d7(v19, 0x4c1, 0x4c8);
    fun_4f0(0x4de, 22, 1, v19);
    fun_36c(rbx20, 22, 1, v19);
    fun_374(r14_21, 22, 1, v19);
    fun_37c(r15_22, 22, 1, v19);
    fun_384(r12_23, 22, 1, v19);
    fun_38c(r13_24, 22, 1, v19);
    goto v25;
}

void fun_374(struct s8* rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t* r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t v8;

    fun_37c(r15_5, rsi, rdx, rcx);
    fun_384(r12_6, rsi, rdx, rcx);
    fun_38c(r13_7, rsi, rdx, rcx);
    goto v8;
}

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

int64_t* fun_10a(int64_t rdi, int64_t rsi) {
    int64_t* r15_3;
    int64_t* rax4;
    int64_t rax5;
    int64_t r12_6;
    int64_t rax7;
    int64_t r13_8;
    int64_t rax9;
    int64_t rcx10;
    int32_t* rdi11;
    int32_t* rsi12;
    int64_t rcx13;
    int64_t rbp14;
    int64_t rdx15;
    struct s14* rdi16;
    struct s14* r14_17;
    struct s1* rsi18;
    int64_t rax19;
    struct s15* rdi20;
    struct s3* rsi21;
    int32_t* rcx22;
    int32_t* rbx23;
    struct s16* rdi24;
    struct s5* rsi25;
    struct s17* rdi26;
    struct s7* rsi27;
    int32_t v28;
    signed char** v29;
    int32_t** rax30;
    int32_t* v31;
    int32_t* rsi32;
    int64_t rbp33;
    int32_t* rdi34;
    int32_t eax35;
    int64_t rbp36;
    int32_t* rsi37;
    int32_t* rdi38;
    int32_t eax39;
    int64_t rbx40;
    struct s8* r14_41;
    int64_t v42;

    r15_3 = rax4;
    rax5 = fun_11c(0x76c, 8);
    r12_6 = rax5;
    rax7 = fun_12e(0x834, 8);
    r13_8 = rax7;
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("cvtdq2pd xmm4, xmm0");
        __asm__("divpd xmm4, xmm1");
        __asm__("movupd [r12+rcx*8], xmm4");
        __asm__("movdqa xmm4, xmm0");
        __asm__("paddd xmm4, xmm2");
        __asm__("cvtdq2pd xmm4, xmm4");
        __asm__("divpd xmm4, xmm1");
        __asm__("movupd [r12+rdx], xmm4");
        rcx10 = rcx10 + 4;
        __asm__("paddd xmm0, xmm3");
    } while (rcx10 != 0x76c);
    g834 = g8;
    rdi11 = reinterpret_cast<int32_t*>(0x838);
    rsi12 = reinterpret_cast<int32_t*>(12);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("xorps xmm7, xmm7");
        __asm__("cvtsi2sd xmm7, eax");
        __asm__("divsd xmm7, xmm0");
        *rdi11 = *rsi12;
        ++rdi11;
        ++rsi12;
        __asm__("movd xmm7, rax");
        __asm__("pshufd xmm7, xmm7, 0x44");
        *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("movdqa xmm9, xmm8");
            __asm__("psubq xmm9, xmm2");
            __asm__("movdqa xmm10, xmm7");
            __asm__("psrlq xmm10, 0x20");
            __asm__("movdqa xmm11, xmm9");
            __asm__("psrlq xmm11, 0x20");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pmuludq xmm11, xmm7");
            __asm__("paddq xmm11, xmm10");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("psllq xmm11, 0x20");
            __asm__("paddq xmm9, xmm11");
            __asm__("pshufd xmm10, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm9, 0xee");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("psrld xmm9, 0xb");
            __asm__("pshufd xmm11, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("psubd xmm10, xmm9");
            __asm__("cvtdq2pd xmm9, xmm10");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rdx+rcx*8], xmm9");
            rcx13 = rcx13 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rcx13 != 0x76c);
        ++rax9;
    } while (rax9 != 0x834);
    *reinterpret_cast<int32_t*>(&rbp14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx15) = 0x3b60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi16 = r14_17;
    *reinterpret_cast<int32_t*>(&rsi18) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_2e6();
    do {
        r15_3[rbp14] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rax19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi16->f0 = rsi18->f0;
            rdi20 = reinterpret_cast<struct s15*>(&rdi16->f4);
            rsi21 = reinterpret_cast<struct s3*>(&rsi18->f4);
            rcx22 = rbx23 + rbp14 * 0xed8;
            __asm__("mulsd xmm0, [rcx+rax*8]");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi20->f0 = rsi21->f0;
            rdi24 = reinterpret_cast<struct s16*>(&rdi20->f4);
            rsi25 = reinterpret_cast<struct s5*>(&rsi21->f4);
            rdi24->f0 = rsi25->f0;
            rdi26 = reinterpret_cast<struct s17*>(&rdi24->f4);
            rsi27 = reinterpret_cast<struct s7*>(&rsi25->f4);
            __asm__("mulsd xmm0, [r12+rax*8]");
            __asm__("addsd xmm0, [r15+rbp*8]");
            rdi26->f0 = rsi27->f0;
            rdi16 = reinterpret_cast<struct s14*>(&rdi26->f4);
            rsi18 = reinterpret_cast<struct s1*>(&rsi27->f4);
            ++rax19;
        } while (rax19 != 0x76c);
        ++rbp14;
    } while (rbp14 != 0x834);
    if (v28 >= 43 && **v29 == fputc) {
        rax30 = g3a4;
        v31 = *rax30;
        fun_3c2(0x3b3, 22, 1);
        rsi32 = reinterpret_cast<int32_t*>(0x3c9);
        *reinterpret_cast<int32_t*>(&rbp33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp33) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi34 = v31;
        fun_3de();
        do {
            eax35 = *reinterpret_cast<int32_t*>(&rbp33) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax35)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi34) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi32 = v31;
                fun_428();
            }
            *rdi34 = *rsi32;
            rdi34 = v31;
            rsi32 = reinterpret_cast<int32_t*>(0x3f2);
            fun_3f9();
            ++rbp33;
        } while (rbp33 != 0x76c);
        *reinterpret_cast<int32_t*>(&rbp36) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp36) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_446(v31, 0x431, 0x438);
        rsi37 = reinterpret_cast<int32_t*>(0x44d);
        rdi38 = v31;
        fun_460();
        do {
            eax39 = *reinterpret_cast<int32_t*>(&rbp36) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax39)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi38) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi37 = v31;
                fun_4b8();
            }
            *rdi38 = *rsi37;
            rdi38 = v31;
            rsi37 = reinterpret_cast<int32_t*>(0x482);
            fun_489();
            ++rbp36;
        } while (rbp36 != 0x834);
        fun_4d7(v31, 0x4c1, 0x4c8);
        *reinterpret_cast<int32_t*>(&rsi18) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx15) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx22 = v31;
        fun_4f0(0x4de, 22, 1, rcx22);
    }
    fun_36c(rbx40, rsi18, rdx15, rcx22);
    fun_374(r14_41, rsi18, rdx15, rcx22);
    fun_37c(r15_3, rsi18, rdx15, rcx22);
    fun_384(r12_6, rsi18, rdx15, rcx22);
    fun_38c(r13_8, rsi18, rdx15, rcx22);
    goto v42;
}

void fun_3de() {
    int32_t eax1;
    int64_t rbp2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* v5;
    int32_t* v6;
    int64_t rbp7;
    int32_t* v8;
    int32_t* rsi9;
    int32_t* rdi10;
    int32_t* v11;
    int32_t eax12;
    int32_t* v13;
    int32_t* v14;
    int32_t* v15;
    int64_t rbx16;
    struct s8* r14_17;
    int64_t* r15_18;
    int64_t r12_19;
    int64_t r13_20;
    int64_t v21;

    do {
        eax1 = *reinterpret_cast<int32_t*>(&rbp2) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax1)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v5;
            fun_428();
        }
        *rdi3 = *rsi4;
        rdi3 = v6;
        rsi4 = reinterpret_cast<int32_t*>(0x3f2);
        fun_3f9();
        ++rbp2;
    } while (rbp2 != 0x76c);
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_446(v8, 0x431, 0x438);
    rsi9 = reinterpret_cast<int32_t*>(0x44d);
    rdi10 = v11;
    fun_460();
    do {
        eax12 = *reinterpret_cast<int32_t*>(&rbp7) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax12)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi10) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi9 = v13;
            fun_4b8();
        }
        *rdi10 = *rsi9;
        rdi10 = v14;
        rsi9 = reinterpret_cast<int32_t*>(0x482);
        fun_489();
        ++rbp7;
    } while (rbp7 != 0x834);
    fun_4d7(v15, 0x4c1, 0x4c8);
    fun_4f0(0x4de, 22, 1, v15);
    fun_36c(rbx16, 22, 1, v15);
    fun_374(r14_17, 22, 1, v15);
    fun_37c(r15_18, 22, 1, v15);
    fun_384(r12_19, 22, 1, v15);
    fun_38c(r13_20, 22, 1, v15);
    goto v21;
}

void fun_37c(int64_t* rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t v7;

    fun_384(r12_5, rsi, rdx, rcx);
    fun_38c(r13_6, rsi, rdx, rcx);
    goto v7;
}

void fun_446(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rsi4;
    int32_t* rdi5;
    int32_t* v6;
    int32_t eax7;
    int64_t rbp8;
    int32_t* v9;
    int32_t* v10;
    int32_t* v11;
    int64_t rbx12;
    struct s8* r14_13;
    int64_t* r15_14;
    int64_t r12_15;
    int64_t r13_16;
    int64_t v17;

    rsi4 = reinterpret_cast<int32_t*>(0x44d);
    rdi5 = v6;
    fun_460();
    do {
        eax7 = *reinterpret_cast<int32_t*>(&rbp8) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax7)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v9;
            fun_4b8();
        }
        *rdi5 = *rsi4;
        rdi5 = v10;
        rsi4 = reinterpret_cast<int32_t*>(0x482);
        fun_489();
        ++rbp8;
    } while (rbp8 != 0x834);
    fun_4d7(v11, 0x4c1, 0x4c8);
    fun_4f0(0x4de, 22, 1, v11);
    fun_36c(rbx12, 22, 1, v11);
    fun_374(r14_13, 22, 1, v11);
    fun_37c(r15_14, 22, 1, v11);
    fun_384(r12_15, 22, 1, v11);
    fun_38c(r13_16, 22, 1, v11);
    goto v17;
}

void fun_4d7(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rbp4;
    int64_t rbx5;
    struct s8* r14_6;
    int64_t* r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_4f0(0x4de, 22, 1, rbp4);
    fun_36c(rbx5, 22, 1, rbp4);
    fun_374(r14_6, 22, 1, rbp4);
    fun_37c(r15_7, 22, 1, rbp4);
    fun_384(r12_8, 22, 1, rbp4);
    fun_38c(r13_9, 22, 1, rbp4);
    goto v10;
}

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

int64_t fun_11c(int64_t rdi, int64_t rsi) {
    int64_t r12_3;
    int64_t rax4;
    int64_t rax5;
    int64_t r13_6;
    int64_t rax7;
    int64_t rcx8;
    int32_t* rdi9;
    int32_t* rsi10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t rdx13;
    struct s18* rdi14;
    struct s18* r14_15;
    struct s1* rsi16;
    int64_t* r15_17;
    int64_t rax18;
    struct s19* rdi19;
    struct s3* rsi20;
    int32_t* rcx21;
    int32_t* rbx22;
    struct s20* rdi23;
    struct s5* rsi24;
    struct s21* rdi25;
    struct s7* rsi26;
    int32_t v27;
    signed char** v28;
    int32_t** rax29;
    int32_t* v30;
    int32_t* rsi31;
    int64_t rbp32;
    int32_t* rdi33;
    int32_t eax34;
    int64_t rbp35;
    int32_t* rsi36;
    int32_t* rdi37;
    int32_t eax38;
    int64_t rbx39;
    struct s8* r14_40;
    int64_t* r15_41;
    int64_t v42;

    r12_3 = rax4;
    rax5 = fun_12e(0x834, 8);
    r13_6 = rax5;
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("cvtdq2pd xmm4, xmm0");
        __asm__("divpd xmm4, xmm1");
        __asm__("movupd [r12+rcx*8], xmm4");
        __asm__("movdqa xmm4, xmm0");
        __asm__("paddd xmm4, xmm2");
        __asm__("cvtdq2pd xmm4, xmm4");
        __asm__("divpd xmm4, xmm1");
        __asm__("movupd [r12+rdx], xmm4");
        rcx8 = rcx8 + 4;
        __asm__("paddd xmm0, xmm3");
    } while (rcx8 != 0x76c);
    g834 = g8;
    rdi9 = reinterpret_cast<int32_t*>(0x838);
    rsi10 = reinterpret_cast<int32_t*>(12);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("xorps xmm7, xmm7");
        __asm__("cvtsi2sd xmm7, eax");
        __asm__("divsd xmm7, xmm0");
        *rdi9 = *rsi10;
        ++rdi9;
        ++rsi10;
        __asm__("movd xmm7, rax");
        __asm__("pshufd xmm7, xmm7, 0x44");
        *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("movdqa xmm9, xmm8");
            __asm__("psubq xmm9, xmm2");
            __asm__("movdqa xmm10, xmm7");
            __asm__("psrlq xmm10, 0x20");
            __asm__("movdqa xmm11, xmm9");
            __asm__("psrlq xmm11, 0x20");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pmuludq xmm11, xmm7");
            __asm__("paddq xmm11, xmm10");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("psllq xmm11, 0x20");
            __asm__("paddq xmm9, xmm11");
            __asm__("pshufd xmm10, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm9, 0xee");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("psrld xmm9, 0xb");
            __asm__("pshufd xmm11, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("psubd xmm10, xmm9");
            __asm__("cvtdq2pd xmm9, xmm10");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rdx+rcx*8], xmm9");
            rcx11 = rcx11 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rcx11 != 0x76c);
        ++rax7;
    } while (rax7 != 0x834);
    *reinterpret_cast<int32_t*>(&rbp12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp12) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx13) = 0x3b60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi14 = r14_15;
    *reinterpret_cast<int32_t*>(&rsi16) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_2e6();
    do {
        r15_17[rbp12] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rax18) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi14->f0 = rsi16->f0;
            rdi19 = reinterpret_cast<struct s19*>(&rdi14->f4);
            rsi20 = reinterpret_cast<struct s3*>(&rsi16->f4);
            rcx21 = rbx22 + rbp12 * 0xed8;
            __asm__("mulsd xmm0, [rcx+rax*8]");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi19->f0 = rsi20->f0;
            rdi23 = reinterpret_cast<struct s20*>(&rdi19->f4);
            rsi24 = reinterpret_cast<struct s5*>(&rsi20->f4);
            rdi23->f0 = rsi24->f0;
            rdi25 = reinterpret_cast<struct s21*>(&rdi23->f4);
            rsi26 = reinterpret_cast<struct s7*>(&rsi24->f4);
            __asm__("mulsd xmm0, [r12+rax*8]");
            __asm__("addsd xmm0, [r15+rbp*8]");
            rdi25->f0 = rsi26->f0;
            rdi14 = reinterpret_cast<struct s18*>(&rdi25->f4);
            rsi16 = reinterpret_cast<struct s1*>(&rsi26->f4);
            ++rax18;
        } while (rax18 != 0x76c);
        ++rbp12;
    } while (rbp12 != 0x834);
    if (v27 >= 43 && **v28 == fputc) {
        rax29 = g3a4;
        v30 = *rax29;
        fun_3c2(0x3b3, 22, 1);
        rsi31 = reinterpret_cast<int32_t*>(0x3c9);
        *reinterpret_cast<int32_t*>(&rbp32) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp32) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi33 = v30;
        fun_3de();
        do {
            eax34 = *reinterpret_cast<int32_t*>(&rbp32) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax34)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi33) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi33) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi31 = v30;
                fun_428();
            }
            *rdi33 = *rsi31;
            rdi33 = v30;
            rsi31 = reinterpret_cast<int32_t*>(0x3f2);
            fun_3f9();
            ++rbp32;
        } while (rbp32 != 0x76c);
        *reinterpret_cast<int32_t*>(&rbp35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp35) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_446(v30, 0x431, 0x438);
        rsi36 = reinterpret_cast<int32_t*>(0x44d);
        rdi37 = v30;
        fun_460();
        do {
            eax38 = *reinterpret_cast<int32_t*>(&rbp35) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax38)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi37) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi36 = v30;
                fun_4b8();
            }
            *rdi37 = *rsi36;
            rdi37 = v30;
            rsi36 = reinterpret_cast<int32_t*>(0x482);
            fun_489();
            ++rbp35;
        } while (rbp35 != 0x834);
        fun_4d7(v30, 0x4c1, 0x4c8);
        *reinterpret_cast<int32_t*>(&rsi16) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx13) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx21 = v30;
        fun_4f0(0x4de, 22, 1, rcx21);
    }
    fun_36c(rbx39, rsi16, rdx13, rcx21);
    fun_374(r14_40, rsi16, rdx13, rcx21);
    fun_37c(r15_41, rsi16, rdx13, rcx21);
    fun_384(r12_3, rsi16, rdx13, rcx21);
    fun_38c(r13_6, rsi16, rdx13, rcx21);
    goto v42;
}

void fun_384(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int64_t v6;

    fun_38c(r13_5, rsi, rdx, rcx);
    goto v6;
}

void fun_460() {
    int32_t eax1;
    int64_t rbp2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* v5;
    int32_t* v6;
    int32_t* v7;
    int64_t rbx8;
    struct s8* r14_9;
    int64_t* r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    do {
        eax1 = *reinterpret_cast<int32_t*>(&rbp2) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax1)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v5;
            fun_4b8();
        }
        *rdi3 = *rsi4;
        rdi3 = v6;
        rsi4 = reinterpret_cast<int32_t*>(0x482);
        fun_489();
        ++rbp2;
    } while (rbp2 != 0x834);
    fun_4d7(v7, 0x4c1, 0x4c8);
    fun_4f0(0x4de, 22, 1, v7);
    fun_36c(rbx8, 22, 1, v7);
    fun_374(r14_9, 22, 1, v7);
    fun_37c(r15_10, 22, 1, v7);
    fun_384(r12_11, 22, 1, v7);
    fun_38c(r13_12, 22, 1, v7);
    goto v13;
}

void fun_4f0(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    struct s8* r14_6;
    int64_t* r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_36c(rbx5, rsi, rdx, rcx);
    fun_374(r14_6, rsi, rdx, rcx);
    fun_37c(r15_7, rsi, rdx, rcx);
    fun_384(r12_8, rsi, rdx, rcx);
    fun_38c(r13_9, rsi, rdx, rcx);
    goto v10;
}

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

int64_t fun_12e(struct s9* rdi, struct s10* rsi) {
    int64_t r13_3;
    int64_t rax4;
    int64_t rax5;
    int64_t rcx6;
    int32_t* rdi7;
    int32_t* rsi8;
    int64_t rcx9;
    int64_t rbp10;
    int64_t rdx11;
    struct s22* rdi12;
    struct s22* r14_13;
    struct s1* rsi14;
    int64_t* r15_15;
    int64_t rax16;
    struct s23* rdi17;
    struct s3* rsi18;
    int32_t* rcx19;
    int32_t* rbx20;
    struct s24* rdi21;
    struct s5* rsi22;
    struct s25* rdi23;
    struct s7* rsi24;
    int32_t v25;
    signed char** v26;
    int32_t** rax27;
    int32_t* v28;
    int32_t* rsi29;
    int64_t rbp30;
    int32_t* rdi31;
    int32_t eax32;
    int64_t rbp33;
    int32_t* rsi34;
    int32_t* rdi35;
    int32_t eax36;
    int64_t rbx37;
    struct s8* r14_38;
    int64_t* r15_39;
    int64_t r12_40;
    int64_t v41;

    r13_3 = rax4;
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("cvtdq2pd xmm4, xmm0");
        __asm__("divpd xmm4, xmm1");
        __asm__("movupd [r12+rcx*8], xmm4");
        __asm__("movdqa xmm4, xmm0");
        __asm__("paddd xmm4, xmm2");
        __asm__("cvtdq2pd xmm4, xmm4");
        __asm__("divpd xmm4, xmm1");
        __asm__("movupd [r12+rdx], xmm4");
        rcx6 = rcx6 + 4;
        __asm__("paddd xmm0, xmm3");
    } while (rcx6 != 0x76c);
    rdi->f0 = rsi->f0;
    rdi7 = &rdi->f4;
    rsi8 = &rsi->f4;
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("xorps xmm7, xmm7");
        __asm__("cvtsi2sd xmm7, eax");
        __asm__("divsd xmm7, xmm0");
        *rdi7 = *rsi8;
        ++rdi7;
        ++rsi8;
        __asm__("movd xmm7, rax");
        __asm__("pshufd xmm7, xmm7, 0x44");
        *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("movdqa xmm9, xmm8");
            __asm__("psubq xmm9, xmm2");
            __asm__("movdqa xmm10, xmm7");
            __asm__("psrlq xmm10, 0x20");
            __asm__("movdqa xmm11, xmm9");
            __asm__("psrlq xmm11, 0x20");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pmuludq xmm11, xmm7");
            __asm__("paddq xmm11, xmm10");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("psllq xmm11, 0x20");
            __asm__("paddq xmm9, xmm11");
            __asm__("pshufd xmm10, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm9, 0xee");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("psrld xmm9, 0xb");
            __asm__("pshufd xmm11, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("psubd xmm10, xmm9");
            __asm__("cvtdq2pd xmm9, xmm10");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rdx+rcx*8], xmm9");
            rcx9 = rcx9 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rcx9 != 0x76c);
        ++rax5;
    } while (rax5 != 0x834);
    *reinterpret_cast<int32_t*>(&rbp10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp10) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx11) = 0x3b60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi12 = r14_13;
    *reinterpret_cast<int32_t*>(&rsi14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_2e6();
    do {
        r15_15[rbp10] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rax16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi12->f0 = rsi14->f0;
            rdi17 = reinterpret_cast<struct s23*>(&rdi12->f4);
            rsi18 = reinterpret_cast<struct s3*>(&rsi14->f4);
            rcx19 = rbx20 + rbp10 * 0xed8;
            __asm__("mulsd xmm0, [rcx+rax*8]");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi17->f0 = rsi18->f0;
            rdi21 = reinterpret_cast<struct s24*>(&rdi17->f4);
            rsi22 = reinterpret_cast<struct s5*>(&rsi18->f4);
            rdi21->f0 = rsi22->f0;
            rdi23 = reinterpret_cast<struct s25*>(&rdi21->f4);
            rsi24 = reinterpret_cast<struct s7*>(&rsi22->f4);
            __asm__("mulsd xmm0, [r12+rax*8]");
            __asm__("addsd xmm0, [r15+rbp*8]");
            rdi23->f0 = rsi24->f0;
            rdi12 = reinterpret_cast<struct s22*>(&rdi23->f4);
            rsi14 = reinterpret_cast<struct s1*>(&rsi24->f4);
            ++rax16;
        } while (rax16 != 0x76c);
        ++rbp10;
    } while (rbp10 != 0x834);
    if (v25 >= 43 && **v26 == fputc) {
        rax27 = g3a4;
        v28 = *rax27;
        fun_3c2(0x3b3, 22, 1);
        rsi29 = reinterpret_cast<int32_t*>(0x3c9);
        *reinterpret_cast<int32_t*>(&rbp30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp30) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi31 = v28;
        fun_3de();
        do {
            eax32 = *reinterpret_cast<int32_t*>(&rbp30) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax32)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi31) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi29 = v28;
                fun_428();
            }
            *rdi31 = *rsi29;
            rdi31 = v28;
            rsi29 = reinterpret_cast<int32_t*>(0x3f2);
            fun_3f9();
            ++rbp30;
        } while (rbp30 != 0x76c);
        *reinterpret_cast<int32_t*>(&rbp33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp33) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_446(v28, 0x431, 0x438);
        rsi34 = reinterpret_cast<int32_t*>(0x44d);
        rdi35 = v28;
        fun_460();
        do {
            eax36 = *reinterpret_cast<int32_t*>(&rbp33) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax36)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi35) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi34 = v28;
                fun_4b8();
            }
            *rdi35 = *rsi34;
            rdi35 = v28;
            rsi34 = reinterpret_cast<int32_t*>(0x482);
            fun_489();
            ++rbp33;
        } while (rbp33 != 0x834);
        fun_4d7(v28, 0x4c1, 0x4c8);
        *reinterpret_cast<int32_t*>(&rsi14) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx11) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx19 = v28;
        fun_4f0(0x4de, 22, 1, rcx19);
    }
    fun_36c(rbx37, rsi14, rdx11, rcx19);
    fun_374(r14_38, rsi14, rdx11, rcx19);
    fun_37c(r15_39, rsi14, rdx11, rcx19);
    fun_384(r12_40, rsi14, rdx11, rcx19);
    fun_38c(r13_3, rsi14, rdx11, rcx19);
    goto v41;
}

void fun_38c(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
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

