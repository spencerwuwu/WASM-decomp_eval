
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_c16(void* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

struct s1 {
    signed char[16000] pad16000;
    int32_t f3e80;
};

void fun_c1e(struct s1* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_c28(void* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, ...);

void fun_c30(struct s1* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, ...);

void fun_c38(int64_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, ...);

struct s2 {
    int64_t f0;
    signed char[15992] pad16000;
    int32_t f3e80;
};

void fun_c40(struct s2* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, ...);

void fun_c48(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, ...);

struct s3 {
    int32_t f0;
    int32_t f4;
    signed char[15992] pad16000;
    int64_t f3e80;
};

void fun_c52(struct s3* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, ...);

void fun_c0c(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    void* v5;
    struct s1* r15_6;
    void* v7;
    struct s1* r13_8;
    int64_t* rbp9;
    struct s2* r14_10;
    int64_t r12_11;
    struct s3* v12;
    int64_t v13;

    fun_c16(v5, rsi, rdx, rcx);
    fun_c1e(r15_6, rsi, rdx, rcx);
    fun_c28(v7, rsi, rdx, rcx, v7, rsi, rdx, rcx);
    fun_c30(r13_8, rsi, rdx, rcx, r13_8, rsi, rdx, rcx);
    fun_c38(rbp9, rsi, rdx, rcx, rbp9, rsi, rdx, rcx);
    fun_c40(r14_10, rsi, rdx, rcx, r14_10, rsi, rdx, rcx);
    fun_c48(r12_11, rsi, rdx, rcx, r12_11, rsi, rdx, rcx);
    fun_c52(v12, rsi, rdx, rcx, v12, rsi, rdx, rcx);
    goto v13;
}

void fputc(int32_t edi);

void fun_d00();

void fun_d20(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_d3a(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_cc8() {
    int64_t rcx1;
    int64_t rcx2;
    int32_t eax3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* rbx6;
    void* v7;
    struct s1* r15_8;
    void* v9;
    struct s1* r13_10;
    int64_t* rbp11;
    struct s2* r14_12;
    int64_t r12_13;
    struct s3* v14;
    int64_t v15;

    while (rcx1 = rcx2 + 1, rcx1 != 0x7d0) {
        eax3 = *reinterpret_cast<int32_t*>(&rcx1) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax3)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(&rdi4 + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = reinterpret_cast<int32_t*>(__return_address());
            fun_d00();
        }
        *rdi4 = *rsi5;
        rdi4 = reinterpret_cast<int32_t*>(__return_address());
        rsi5 = reinterpret_cast<int32_t*>(0xcc1);
        fun_cc8();
    }
    fun_d20(__return_address(), 0xd0e, 0xd15);
    fun_d3a(0xd27, 22, 1, __return_address());
    fun_c0c(rbx6, 22, 1, __return_address());
    fun_c16(v7, 22, 1, __return_address());
    fun_c1e(r15_8, 22, 1, __return_address());
    fun_c28(v9, 22, 1, __return_address());
    fun_c30(r13_10, 22, 1, __return_address());
    fun_c38(rbp11, 22, 1, __return_address());
    fun_c40(r14_12, 22, 1, __return_address());
    fun_c48(r12_13, 22, 1, __return_address());
    fun_c52(v14, 22, 1, __return_address());
    goto v15;
}

void fun_d00() {
    int32_t* v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int64_t rcx4;
    int64_t rcx5;
    int32_t eax6;
    int32_t* rbx7;
    void* v8;
    struct s1* r15_9;
    void* v10;
    struct s1* r13_11;
    int64_t* rbp12;
    struct s2* r14_13;
    int64_t r12_14;
    struct s3* v15;
    int64_t v16;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<int32_t*>(0xcc1);
            fun_cc8();
            rcx4 = rcx5 + 1;
            if (rcx4 == 0x7d0) 
                goto addr_d07_7;
            eax6 = *reinterpret_cast<int32_t*>(&rcx4) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax6)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(&rdi2 + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_d00();
    }
    addr_d07_7:
    fun_d20(v1, 0xd0e, 0xd15);
    fun_d3a(0xd27, 22, 1, v1);
    fun_c0c(rbx7, 22, 1, v1);
    fun_c16(v8, 22, 1, v1);
    fun_c1e(r15_9, 22, 1, v1);
    fun_c28(v10, 22, 1, v1);
    fun_c30(r13_11, 22, 1, v1);
    fun_c38(rbp12, 22, 1, v1);
    fun_c40(r14_13, 22, 1, v1);
    fun_c48(r12_14, 22, 1, v1);
    fun_c52(v15, 22, 1, v1);
    goto v16;
}

void fun_ca0();

void fun_c87(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* v4;
    int32_t* rsi5;
    int32_t* rdi6;
    int64_t rcx7;
    int32_t eax8;
    int32_t* rbx9;
    void* v10;
    struct s1* r15_11;
    void* v12;
    struct s1* r13_13;
    int64_t* rbp14;
    struct s2* r14_15;
    int64_t r12_16;
    struct s3* v17;
    int64_t v18;

    v4 = reinterpret_cast<int32_t*>(__return_address());
    rsi5 = reinterpret_cast<int32_t*>(0xc8e);
    rdi6 = v4;
    fun_ca0();
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        eax8 = *reinterpret_cast<int32_t*>(&rcx7) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax8)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(&rdi6 + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_d00();
        }
        *rdi6 = *rsi5;
        rdi6 = v4;
        rsi5 = reinterpret_cast<int32_t*>(0xcc1);
        fun_cc8();
        ++rcx7;
    } while (rcx7 != 0x7d0);
    fun_d20(v4, 0xd0e, 0xd15);
    fun_d3a(0xd27, 22, 1, v4);
    fun_c0c(rbx9, 22, 1, v4);
    fun_c16(v10, 22, 1, v4);
    fun_c1e(r15_11, 22, 1, v4);
    fun_c28(v12, 22, 1, v4);
    fun_c30(r13_13, 22, 1, v4);
    fun_c38(rbp14, 22, 1, v4);
    fun_c40(r14_15, 22, 1, v4);
    fun_c48(r12_16, 22, 1, v4);
    fun_c52(v17, 22, 1, v4);
    goto v18;
}

void fun_c16(void* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    struct s1* r15_5;
    void* v6;
    struct s1* r13_7;
    int64_t* rbp8;
    struct s2* r14_9;
    int64_t r12_10;
    struct s3* v11;
    int64_t v12;

    fun_c1e(r15_5, rsi, rdx, rcx);
    fun_c28(v6, rsi, rdx, rcx, v6, rsi, rdx, rcx);
    fun_c30(r13_7, rsi, rdx, rcx, r13_7, rsi, rdx, rcx);
    fun_c38(rbp8, rsi, rdx, rcx, rbp8, rsi, rdx, rcx);
    fun_c40(r14_9, rsi, rdx, rcx, r14_9, rsi, rdx, rcx);
    fun_c48(r12_10, rsi, rdx, rcx, r12_10, rsi, rdx, rcx);
    fun_c52(v11, rsi, rdx, rcx, v11, rsi, rdx, rcx);
    goto v12;
}

void* fun_5a8(int64_t rdi, int64_t rsi);

struct s1* fun_5bc(int64_t rdi, int64_t rsi);

void* fun_5ce(int64_t rdi, int64_t rsi);

struct s1* fun_5e2(int64_t rdi, int64_t rsi);

int64_t* fun_5f4(int64_t rdi, int64_t rsi);

struct s2* fun_606(int64_t rdi, int64_t rsi);

int64_t fun_618(int64_t rdi, int64_t rsi);

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s3* fun_62a(int64_t rdi, struct s4* rsi);

int32_t fputc = 0x41574155;

/* .LCPI1_1 */
int32_t LCPI1_1 = 0xff855354;

int32_t g4 = 0x41554156;

int32_t gc = 0x5458e0f;

/* .LCPI1_7 */
int32_t LCPI1_7 = 0x8b4c0000;

int32_t g14 = 0x4848247c;

/* .LCPI1_3 */
int32_t LCPI1_3 = 0x4024448b;

int32_t g1c = 0x8d4cfb89;

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
    int32_t f1;
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

int32_t** gc6a = reinterpret_cast<int32_t**>(0x48240c8948088b48);

void fun_596(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    void* rax5;
    void* v6;
    struct s1* rax7;
    struct s1* r15_8;
    void* rax9;
    void* v10;
    struct s1* rax11;
    struct s1* r13_12;
    int64_t* rax13;
    int64_t* rbp14;
    struct s2* rax15;
    struct s2* r14_16;
    int64_t rax17;
    int64_t r12_18;
    struct s3* rax19;
    void* r9_20;
    void* r11_21;
    struct s5* rdi22;
    struct s6* rsi23;
    struct s7* rdi24;
    struct s8* rsi25;
    struct s5* rcx26;
    struct s9* rdi27;
    struct s10* rsi28;
    struct s11* rdi29;
    struct s12* rsi30;
    struct s13* rdi31;
    struct s14* rsi32;
    int32_t* rdi33;
    void* rdi34;
    int64_t rdx35;
    struct s3* v36;
    struct s15* v37;
    struct s15* v38;
    int64_t rax39;
    struct s0* rsi40;
    void* rdi41;
    struct s1* r11_42;
    struct s15* rdi43;
    int64_t r8_44;
    struct s16* rdi45;
    struct s17* rsi46;
    struct s15* rdi47;
    struct s0* rsi48;
    struct s16* rdi49;
    struct s17* rsi50;
    struct s15* rdi51;
    struct s0* rsi52;
    struct s16* rdi53;
    struct s17* rsi54;
    struct s16* rdi55;
    struct s17* rsi56;
    int64_t r8_57;
    struct s17* rsi58;
    struct s3* rdi59;
    uint64_t rcx60;
    struct s18* rdi61;
    struct s19* rdi62;
    struct s20* rsi63;
    struct s21* rdi64;
    struct s22* rsi65;
    int64_t rax66;
    struct s18* rdi67;
    struct s0* rsi68;
    struct s19* rdi69;
    struct s17* rsi70;
    struct s21* rdi71;
    struct s0* rsi72;
    struct s3* rdi73;
    struct s17* rsi74;
    struct s18* rdi75;
    struct s0* rsi76;
    struct s19* rdi77;
    struct s17* rsi78;
    struct s21* rdi79;
    struct s0* rsi80;
    int64_t rax81;
    struct s18* rdi82;
    struct s0* rsi83;
    int32_t* rcx84;
    int32_t* rdx85;
    struct s19* rdi86;
    int32_t* rsi87;
    struct s21* rdi88;
    struct s23* rsi89;
    struct s3* rdi90;
    struct s24* rsi91;
    int32_t v92;
    signed char** v93;
    int32_t** rax94;
    int32_t* v95;
    int32_t* rsi96;
    int32_t* rdi97;
    int64_t rcx98;
    int32_t eax99;
    int64_t v100;

    rbx3 = rax4;
    rax5 = fun_5a8(0x7d0, 8);
    v6 = rax5;
    rax7 = fun_5bc(0x7d0, 8);
    r15_8 = rax7;
    rax9 = fun_5ce(0x7d0, 8);
    v10 = rax9;
    rax11 = fun_5e2(0x7d0, 8);
    r13_12 = rax11;
    rax13 = fun_5f4(0x7d0, 8);
    rbp14 = rax13;
    rax15 = fun_606(0x7d0, 8);
    r14_16 = rax15;
    rax17 = fun_618(0x7d0, 8);
    r12_18 = rax17;
    rax19 = fun_62a(0x7d0, 8);
    r9_20 = v10;
    r11_21 = v6;
    fputc = LCPI1_1;
    g4 = gc;
    LCPI1_1 = LCPI1_7;
    gc = g14;
    LCPI1_7 = LCPI1_3;
    g14 = g1c;
    rdi22 = reinterpret_cast<struct s5*>(24);
    rsi23 = reinterpret_cast<struct s6*>(32);
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("movapd xmm9, [rip+0x0]");
    __asm__("movdqa xmm10, [rip+0x0]");
    do {
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, edi");
        rdi22->f0 = rsi23->f0;
        rdi24 = reinterpret_cast<struct s7*>(&rdi22->f4);
        rsi25 = reinterpret_cast<struct s8*>(&rsi23->f4);
        rcx26 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(rdi24) + 1);
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, ecx");
        __asm__("divsd xmm11, xmm0");
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm1");
        rdi24->f0 = rsi25->f0;
        rdi27 = reinterpret_cast<struct s9*>(&rdi24->f1);
        rsi28 = reinterpret_cast<struct s10*>(&rsi25->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm2");
        rdi27->f0 = rsi28->f0;
        rdi29 = reinterpret_cast<struct s11*>(&rdi27->f4);
        rsi30 = reinterpret_cast<struct s12*>(&rsi28->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("divsd xmm12, xmm3");
        rdi29->f0 = rsi30->f0;
        rdi31 = reinterpret_cast<struct s13*>(&rdi29->f4);
        rsi32 = reinterpret_cast<struct s14*>(&rsi30->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm4");
        rdi31->f0 = rsi32->f0;
        rdi33 = &rdi31->f4;
        __asm__("divsd xmm11, xmm5");
        *rdi33 = rsi32->f4;
        rdi34 = reinterpret_cast<void*>(rdi33 + 1);
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r14_16) + reinterpret_cast<int64_t>(rdi34) * 8) = reinterpret_cast<int64_t>(fputc);
        rbp14[static_cast<int64_t>(rdi34)] = reinterpret_cast<int64_t>(fputc);
        __asm__("movd xmm11, rdi");
        __asm__("pshufd xmm11, xmm11, 0x44");
        *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm12, xmm6");
        do {
            __asm__("movdqa xmm13, xmm12");
            __asm__("psrlq xmm13, 0x20");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("movdqa xmm14, xmm11");
            __asm__("psrlq xmm14, 0x20");
            __asm__("pmuludq xmm14, xmm12");
            __asm__("paddq xmm14, xmm13");
            __asm__("movdqa xmm13, xmm12");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("psllq xmm14, 0x20");
            __asm__("paddq xmm13, xmm14");
            __asm__("pshufd xmm14, xmm13, 0xe8");
            __asm__("pshufd xmm15, xmm13, 0xee");
            __asm__("pmuludq xmm13, xmm7");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("pmuludq xmm15, xmm7");
            __asm__("pshufd xmm15, xmm15, 0xed");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psrld xmm13, 0x7");
            __asm__("pshufd xmm15, xmm13, 0xf5");
            __asm__("pmuludq xmm13, xmm8");
            __asm__("pmuludq xmm15, xmm8");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psubd xmm14, xmm13");
            __asm__("cvtdq2pd xmm13, xmm14");
            __asm__("divpd xmm13, xmm9");
            rsi23 = reinterpret_cast<struct s6*>(rbx3 + reinterpret_cast<int64_t>(rdi34) * 0xfa0);
            __asm__("movupd [rsi+rdx*8], xmm13");
            rdx35 = rdx35 + 2;
            __asm__("paddq xmm12, xmm10");
        } while (rdx35 != 0x7d0);
        rdi22 = rcx26;
    } while (!reinterpret_cast<int1_t>(rcx26 == 0x7d0));
    v36 = rax19;
    v37 = reinterpret_cast<struct s15*>(&r15_8->f3e80);
    v38 = reinterpret_cast<struct s15*>(&r13_12->f3e80);
    *reinterpret_cast<int32_t*>(&rax39) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi40) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi40) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi41 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi40) * 0x3e80);
        r11_42 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbx3) + reinterpret_cast<uint64_t>(rdi41) + 0x3e80);
        rdi43 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rdi41) + reinterpret_cast<int64_t>(rbx3));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi43) < reinterpret_cast<int64_t>(r11_21) + reinterpret_cast<uint64_t>(rsi40) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r11_21) + reinterpret_cast<uint64_t>(rsi40) * 8 < reinterpret_cast<uint64_t>(r11_42)))) == fputc) || (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi43) < reinterpret_cast<uint64_t>(v37))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r15_8) < reinterpret_cast<uint64_t>(r11_42)))) == fputc) || !reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi43) < reinterpret_cast<int64_t>(r9_20) + reinterpret_cast<uint64_t>(rsi40) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r9_20) + reinterpret_cast<uint64_t>(rsi40) * 8 < reinterpret_cast<uint64_t>(r11_42)))) == fputc))) {
            *reinterpret_cast<int32_t*>(&r8_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_44) + 4) = reinterpret_cast<int32_t>(fputc);
            r11_21 = v6;
            r9_20 = v10;
            goto addr_970_52;
        }
        *reinterpret_cast<int32_t*>(&r8_44) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_44) + 4) = reinterpret_cast<int32_t>(fputc);
        r11_21 = v6;
        r9_20 = v10;
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi43) < reinterpret_cast<uint64_t>(v38))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_12) < reinterpret_cast<uint64_t>(r11_42)))) == fputc)) {
            do {
                addr_970_52:
                rdi43->f0 = rsi40->f0;
                rdi45 = reinterpret_cast<struct s16*>(&rdi43->f4);
                rsi46 = reinterpret_cast<struct s17*>(&rsi40->f4);
                __asm__("mulsd xmm0, [r15+r8*8]");
                __asm__("addsd xmm0, [rdi+r8*8]");
                rdi45->f0 = rsi46->f0;
                rdi47 = reinterpret_cast<struct s15*>(&rdi45->f4);
                rsi48 = reinterpret_cast<struct s0*>(&rsi46->f4);
                __asm__("mulsd xmm1, [r13+r8*8+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi47->f0 = rsi48->f0;
                rdi49 = reinterpret_cast<struct s16*>(&rdi47->f4);
                rsi50 = reinterpret_cast<struct s17*>(&rsi48->f4);
                rdi49->f0 = rsi50->f0;
                rdi51 = reinterpret_cast<struct s15*>(&rdi49->f4);
                rsi52 = reinterpret_cast<struct s0*>(&rsi50->f4);
                __asm__("mulsd xmm0, [r15+rcx]");
                __asm__("addsd xmm0, [rcx+rdi]");
                rdi51->f0 = rsi52->f0;
                rdi53 = reinterpret_cast<struct s16*>(&rdi51->f4);
                rsi54 = reinterpret_cast<struct s17*>(&rsi52->f4);
                __asm__("mulsd xmm1, [r13+rcx+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi53->f0 = rsi54->f0;
                rdi43 = reinterpret_cast<struct s15*>(&rdi53->f4);
                rsi40 = reinterpret_cast<struct s0*>(&rsi54->f4);
                r8_44 = r8_44 + 2;
            } while (r8_44 != 0x7d0);
        } else {
            rdi43->f0 = rsi40->f0;
            rdi55 = reinterpret_cast<struct s16*>(&rdi43->f4);
            rsi56 = reinterpret_cast<struct s17*>(&rsi40->f4);
            __asm__("unpcklpd xmm0, xmm0");
            rdi55->f0 = rsi56->f0;
            rdi43 = reinterpret_cast<struct s15*>(&rdi55->f4);
            rsi40 = reinterpret_cast<struct s0*>(&rsi56->f4);
            __asm__("unpcklpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&r8_57) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_57) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm2, [rdi+r8*8]");
                __asm__("movupd xmm3, [rdi+r8*8+0x10]");
                __asm__("movupd xmm4, [r15+r8*8]");
                __asm__("movupd xmm5, [r15+r8*8+0x10]");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("mulpd xmm5, xmm0");
                __asm__("addpd xmm5, xmm3");
                __asm__("movupd xmm2, [r13+r8*8+0x0]");
                __asm__("movupd xmm3, [r13+r8*8+0x10]");
                __asm__("mulpd xmm2, xmm1");
                __asm__("addpd xmm2, xmm4");
                __asm__("mulpd xmm3, xmm1");
                __asm__("addpd xmm3, xmm5");
                __asm__("movupd [rdi+r8*8], xmm2");
                __asm__("movupd [rdi+r8*8+0x10], xmm3");
                r8_57 = r8_57 + 4;
            } while (r8_57 != 0x7d0);
            continue;
        }
        rsi40 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi40) + 1);
    } while (rsi40 != 0x7d0);
    rdi43->f0 = rsi40->f0;
    rsi58 = reinterpret_cast<struct s17*>(&rsi40->f4);
    rdi59 = v36;
    do {
        rdi59->f0 = rsi58->f0;
        rdi59 = reinterpret_cast<struct s3*>(&rdi59->f4);
        rsi58 = reinterpret_cast<struct s17*>(&rsi58->f4);
        *reinterpret_cast<int32_t*>(&rcx60) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx60) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi59->f0 = rsi58->f0;
            rdi61 = reinterpret_cast<struct s18*>(&rdi59->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, xmm1");
            rdi61->f0 = rsi58->f4;
            rdi62 = reinterpret_cast<struct s19*>(&rdi61->f4);
            rsi63 = reinterpret_cast<struct s20*>(rbx3 + (rcx60 | 1) * 0xfa0);
            rdi62->f0 = rsi63->f0;
            rdi64 = reinterpret_cast<struct s21*>(&rdi62->f4);
            rsi65 = reinterpret_cast<struct s22*>(&rsi63->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm2");
            rdi64->f0 = rsi65->f0;
            rdi59 = reinterpret_cast<struct s3*>(&rdi64->f4);
            rsi58 = reinterpret_cast<struct s17*>(&rsi65->f4);
            rcx60 = rcx60 + 2;
        } while (rcx60 != 0x7d0);
        ++rax39;
    } while (rax39 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rax66) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax66) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(r14_16) >= reinterpret_cast<uint64_t>(&rdi59->f3e80) || reinterpret_cast<uint64_t>(rdi59) >= reinterpret_cast<uint64_t>(&r14_16->f3e80)) {
        do {
            __asm__("movupd xmm0, [r14+rax*8]");
            __asm__("movupd xmm1, [r14+rax*8+0x10]");
            __asm__("movupd xmm2, [rdi+rax*8]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rax*8+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rax*8], xmm2");
            __asm__("movupd [r14+rax*8+0x10], xmm0");
            __asm__("movupd xmm0, [r14+rcx]");
            __asm__("movupd xmm1, [r14+rcx+0x10]");
            __asm__("movupd xmm2, [rdi+rcx]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rcx+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rcx], xmm2");
            __asm__("movupd [r14+rcx+0x10], xmm0");
            rax66 = rax66 + 8;
        } while (rax66 != 0x7d0);
    } else {
        do {
            rdi59->f0 = rsi58->f0;
            rdi67 = reinterpret_cast<struct s18*>(&rdi59->f4);
            rsi68 = reinterpret_cast<struct s0*>(&rsi58->f4);
            __asm__("addsd xmm0, [rdi+rax*8]");
            rdi67->f0 = rsi68->f0;
            rdi69 = reinterpret_cast<struct s19*>(&rdi67->f4);
            rsi70 = reinterpret_cast<struct s17*>(&rsi68->f4);
            rdi69->f0 = rsi70->f0;
            rdi71 = reinterpret_cast<struct s21*>(&rdi69->f4);
            rsi72 = reinterpret_cast<struct s0*>(&rsi70->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi71->f0 = rsi72->f0;
            rdi73 = reinterpret_cast<struct s3*>(&rdi71->f4);
            rsi74 = reinterpret_cast<struct s17*>(&rsi72->f4);
            rdi73->f0 = rsi74->f0;
            rdi75 = reinterpret_cast<struct s18*>(&rdi73->f4);
            rsi76 = reinterpret_cast<struct s0*>(&rsi74->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi75->f0 = rsi76->f0;
            rdi77 = reinterpret_cast<struct s19*>(&rdi75->f4);
            rsi78 = reinterpret_cast<struct s17*>(&rsi76->f4);
            rdi77->f0 = rsi78->f0;
            rdi79 = reinterpret_cast<struct s21*>(&rdi77->f4);
            rsi80 = reinterpret_cast<struct s0*>(&rsi78->f4);
            __asm__("addsd xmm0, [rdi+rcx]");
            rdi79->f0 = rsi80->f0;
            rdi59 = reinterpret_cast<struct s3*>(&rdi79->f4);
            rsi58 = reinterpret_cast<struct s17*>(&rsi80->f4);
            rax66 = rax66 + 4;
        } while (rax66 != 0x7d0);
    }
    *reinterpret_cast<int32_t*>(&rax81) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax81) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi59->f0 = rsi58->f0;
    rdi82 = reinterpret_cast<struct s18*>(&rdi59->f4);
    rsi83 = reinterpret_cast<struct s0*>(&rsi58->f4);
    do {
        rdi82->f0 = rsi83->f0;
        rdi82 = reinterpret_cast<struct s18*>(&rdi82->f4);
        rsi83 = reinterpret_cast<struct s0*>(&rsi83->f4);
        *reinterpret_cast<int32_t*>(&rcx84) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx84 + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx85 = rbx3 + rax81 * 0xfa0;
            rdi82->f0 = rsi83->f0;
            rdi86 = reinterpret_cast<struct s19*>(&rdi82->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            rsi87 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx84) * 8);
            __asm__("addsd xmm2, xmm1");
            rdi86->f0 = *rsi87;
            rdi88 = reinterpret_cast<struct s21*>(&rdi86->f4);
            rsi89 = reinterpret_cast<struct s23*>(reinterpret_cast<uint64_t>(rsi87 + 1) | 8);
            rdi88->f0 = rsi89->f0;
            rdi90 = reinterpret_cast<struct s3*>(&rdi88->f4);
            rsi91 = reinterpret_cast<struct s24*>(&rsi89->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r14+rsi]");
            __asm__("addsd xmm1, xmm2");
            rdi90->f0 = rsi91->f0;
            rdi82 = reinterpret_cast<struct s18*>(&rdi90->f4);
            rsi83 = reinterpret_cast<struct s0*>(&rsi91->f4);
            rcx84 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx84) + 2);
        } while (!reinterpret_cast<int1_t>(rcx84 == 0x7d0));
        ++rax81;
    } while (rax81 != 0x7d0);
    if (v92 >= 43 && **v93 == fputc) {
        rax94 = gc6a;
        v95 = *rax94;
        fun_c87(0xc78, 22, 1);
        rsi96 = reinterpret_cast<int32_t*>(0xc8e);
        rdi97 = v95;
        fun_ca0();
        *reinterpret_cast<int32_t*>(&rcx98) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx98) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            eax99 = *reinterpret_cast<int32_t*>(&rcx98) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax99)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi97) = 10;
                *reinterpret_cast<int32_t*>(&rdi97 + 4) = reinterpret_cast<int32_t>(fputc);
                rsi96 = v95;
                fun_d00();
            }
            *rdi97 = *rsi96;
            rdi97 = v95;
            rsi96 = reinterpret_cast<int32_t*>(0xcc1);
            fun_cc8();
            ++rcx98;
        } while (rcx98 != 0x7d0);
        fun_d20(v95, 0xd0e, 0xd15);
        *reinterpret_cast<int32_t*>(&rsi83) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi83) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx85) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx85) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx84 = v95;
        fun_d3a(0xd27, 22, 1, rcx84);
    }
    fun_c0c(rbx3, rsi83, rdx85, rcx84);
    fun_c16(v6, rsi83, rdx85, rcx84);
    fun_c1e(r15_8, rsi83, rdx85, rcx84);
    fun_c28(v10, rsi83, rdx85, rcx84);
    fun_c30(r13_12, rsi83, rdx85, rcx84);
    fun_c38(rbp14, rsi83, rdx85, rcx84);
    fun_c40(r14_16, rsi83, rdx85, rcx84);
    fun_c48(r12_18, rsi83, rdx85, rcx84);
    fun_c52(v36, rsi83, rdx85, rcx84);
    goto v100;
}

void fun_ca0() {
    int32_t* v1;
    int64_t rcx2;
    int32_t eax3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* rbx6;
    void* v7;
    struct s1* r15_8;
    void* v9;
    struct s1* r13_10;
    int64_t* rbp11;
    struct s2* r14_12;
    int64_t r12_13;
    struct s3* v14;
    int64_t v15;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    *reinterpret_cast<int32_t*>(&rcx2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        eax3 = *reinterpret_cast<int32_t*>(&rcx2) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax3)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(&rdi4 + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v1;
            fun_d00();
        }
        *rdi4 = *rsi5;
        rdi4 = v1;
        rsi5 = reinterpret_cast<int32_t*>(0xcc1);
        fun_cc8();
        ++rcx2;
    } while (rcx2 != 0x7d0);
    fun_d20(v1, 0xd0e, 0xd15);
    fun_d3a(0xd27, 22, 1, v1);
    fun_c0c(rbx6, 22, 1, v1);
    fun_c16(v7, 22, 1, v1);
    fun_c1e(r15_8, 22, 1, v1);
    fun_c28(v9, 22, 1, v1);
    fun_c30(r13_10, 22, 1, v1);
    fun_c38(rbp11, 22, 1, v1);
    fun_c40(r14_12, 22, 1, v1);
    fun_c48(r12_13, 22, 1, v1);
    fun_c52(v14, 22, 1, v1);
    goto v15;
}

void fun_c1e(struct s1* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    void* v5;
    struct s1* r13_6;
    int64_t* rbp7;
    struct s2* r14_8;
    int64_t r12_9;
    struct s3* v10;
    int64_t v11;

    fun_c28(v5, rsi, rdx, rcx, v5, rsi, rdx, rcx);
    fun_c30(r13_6, rsi, rdx, rcx, r13_6, rsi, rdx, rcx);
    fun_c38(rbp7, rsi, rdx, rcx, rbp7, rsi, rdx, rcx);
    fun_c40(r14_8, rsi, rdx, rcx, r14_8, rsi, rdx, rcx);
    fun_c48(r12_9, rsi, rdx, rcx, r12_9, rsi, rdx, rcx);
    fun_c52(v10, rsi, rdx, rcx, v10, rsi, rdx, rcx);
    goto v11;
}

void fun_d20(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rbx4;
    void* v5;
    struct s1* r15_6;
    void* v7;
    struct s1* r13_8;
    int64_t* rbp9;
    struct s2* r14_10;
    int64_t r12_11;
    struct s3* v12;
    int64_t v13;

    fun_d3a(0xd27, 22, 1, __return_address());
    fun_c0c(rbx4, 22, 1, __return_address());
    fun_c16(v5, 22, 1, __return_address());
    fun_c1e(r15_6, 22, 1, __return_address());
    fun_c28(v7, 22, 1, __return_address());
    fun_c30(r13_8, 22, 1, __return_address());
    fun_c38(rbp9, 22, 1, __return_address());
    fun_c40(r14_10, 22, 1, __return_address());
    fun_c48(r12_11, 22, 1, __return_address());
    fun_c52(v12, 22, 1, __return_address());
    goto v13;
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
    int32_t f1;
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

struct s37 {
    int32_t f0;
    int32_t f4;
};

struct s38 {
    int32_t f0;
    int32_t f4;
};

void* fun_5a8(int64_t rdi, int64_t rsi) {
    void* v3;
    void* rax4;
    struct s1* rax5;
    struct s1* r15_6;
    void* rax7;
    void* v8;
    struct s1* rax9;
    struct s1* r13_10;
    int64_t* rax11;
    int64_t* rbp12;
    struct s2* rax13;
    struct s2* r14_14;
    int64_t rax15;
    int64_t r12_16;
    struct s3* rax17;
    void* r9_18;
    void* r11_19;
    struct s25* rdi20;
    struct s26* rsi21;
    struct s27* rdi22;
    struct s28* rsi23;
    struct s25* rcx24;
    struct s29* rdi25;
    struct s30* rsi26;
    struct s31* rdi27;
    struct s32* rsi28;
    struct s33* rdi29;
    struct s34* rsi30;
    int32_t* rdi31;
    void* rdi32;
    int64_t rdx33;
    int32_t* rbx34;
    struct s3* v35;
    struct s15* v36;
    struct s15* v37;
    int64_t rax38;
    struct s0* rsi39;
    void* rdi40;
    struct s1* r11_41;
    void* rbx42;
    struct s15* rdi43;
    int32_t* rbx44;
    int64_t r8_45;
    struct s16* rdi46;
    struct s17* rsi47;
    struct s15* rdi48;
    struct s0* rsi49;
    struct s16* rdi50;
    struct s17* rsi51;
    struct s15* rdi52;
    struct s0* rsi53;
    struct s16* rdi54;
    struct s17* rsi55;
    struct s16* rdi56;
    struct s17* rsi57;
    int64_t r8_58;
    struct s17* rsi59;
    struct s3* rdi60;
    uint64_t rcx61;
    struct s18* rdi62;
    struct s19* rdi63;
    struct s35* rsi64;
    int32_t* rbx65;
    struct s21* rdi66;
    struct s36* rsi67;
    int64_t rax68;
    struct s18* rdi69;
    struct s0* rsi70;
    struct s19* rdi71;
    struct s17* rsi72;
    struct s21* rdi73;
    struct s0* rsi74;
    struct s3* rdi75;
    struct s17* rsi76;
    struct s18* rdi77;
    struct s0* rsi78;
    struct s19* rdi79;
    struct s17* rsi80;
    struct s21* rdi81;
    struct s0* rsi82;
    int64_t rax83;
    struct s18* rdi84;
    struct s0* rsi85;
    int32_t* rcx86;
    int32_t* rdx87;
    int32_t* rbx88;
    struct s19* rdi89;
    int32_t* rsi90;
    struct s21* rdi91;
    struct s37* rsi92;
    struct s3* rdi93;
    struct s38* rsi94;
    int32_t v95;
    signed char** v96;
    int32_t** rax97;
    int32_t* v98;
    int32_t* rsi99;
    int32_t* rdi100;
    int64_t rcx101;
    int32_t eax102;
    int32_t* rbx103;
    int64_t v104;

    v3 = rax4;
    rax5 = fun_5bc(0x7d0, 8);
    r15_6 = rax5;
    rax7 = fun_5ce(0x7d0, 8);
    v8 = rax7;
    rax9 = fun_5e2(0x7d0, 8);
    r13_10 = rax9;
    rax11 = fun_5f4(0x7d0, 8);
    rbp12 = rax11;
    rax13 = fun_606(0x7d0, 8);
    r14_14 = rax13;
    rax15 = fun_618(0x7d0, 8);
    r12_16 = rax15;
    rax17 = fun_62a(0x7d0, 8);
    r9_18 = v8;
    r11_19 = v3;
    fputc = LCPI1_1;
    g4 = gc;
    LCPI1_1 = LCPI1_7;
    gc = g14;
    LCPI1_7 = LCPI1_3;
    g14 = g1c;
    rdi20 = reinterpret_cast<struct s25*>(24);
    rsi21 = reinterpret_cast<struct s26*>(32);
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("movapd xmm9, [rip+0x0]");
    __asm__("movdqa xmm10, [rip+0x0]");
    do {
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, edi");
        rdi20->f0 = rsi21->f0;
        rdi22 = reinterpret_cast<struct s27*>(&rdi20->f4);
        rsi23 = reinterpret_cast<struct s28*>(&rsi21->f4);
        rcx24 = reinterpret_cast<struct s25*>(reinterpret_cast<int64_t>(rdi22) + 1);
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, ecx");
        __asm__("divsd xmm11, xmm0");
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm1");
        rdi22->f0 = rsi23->f0;
        rdi25 = reinterpret_cast<struct s29*>(&rdi22->f1);
        rsi26 = reinterpret_cast<struct s30*>(&rsi23->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm2");
        rdi25->f0 = rsi26->f0;
        rdi27 = reinterpret_cast<struct s31*>(&rdi25->f4);
        rsi28 = reinterpret_cast<struct s32*>(&rsi26->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("divsd xmm12, xmm3");
        rdi27->f0 = rsi28->f0;
        rdi29 = reinterpret_cast<struct s33*>(&rdi27->f4);
        rsi30 = reinterpret_cast<struct s34*>(&rsi28->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm4");
        rdi29->f0 = rsi30->f0;
        rdi31 = &rdi29->f4;
        __asm__("divsd xmm11, xmm5");
        *rdi31 = rsi30->f4;
        rdi32 = reinterpret_cast<void*>(rdi31 + 1);
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r14_14) + reinterpret_cast<int64_t>(rdi32) * 8) = reinterpret_cast<int64_t>(fputc);
        rbp12[static_cast<int64_t>(rdi32)] = reinterpret_cast<int64_t>(fputc);
        __asm__("movd xmm11, rdi");
        __asm__("pshufd xmm11, xmm11, 0x44");
        *reinterpret_cast<int32_t*>(&rdx33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm12, xmm6");
        do {
            __asm__("movdqa xmm13, xmm12");
            __asm__("psrlq xmm13, 0x20");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("movdqa xmm14, xmm11");
            __asm__("psrlq xmm14, 0x20");
            __asm__("pmuludq xmm14, xmm12");
            __asm__("paddq xmm14, xmm13");
            __asm__("movdqa xmm13, xmm12");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("psllq xmm14, 0x20");
            __asm__("paddq xmm13, xmm14");
            __asm__("pshufd xmm14, xmm13, 0xe8");
            __asm__("pshufd xmm15, xmm13, 0xee");
            __asm__("pmuludq xmm13, xmm7");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("pmuludq xmm15, xmm7");
            __asm__("pshufd xmm15, xmm15, 0xed");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psrld xmm13, 0x7");
            __asm__("pshufd xmm15, xmm13, 0xf5");
            __asm__("pmuludq xmm13, xmm8");
            __asm__("pmuludq xmm15, xmm8");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psubd xmm14, xmm13");
            __asm__("cvtdq2pd xmm13, xmm14");
            __asm__("divpd xmm13, xmm9");
            rsi21 = reinterpret_cast<struct s26*>(rbx34 + reinterpret_cast<int64_t>(rdi32) * 0xfa0);
            __asm__("movupd [rsi+rdx*8], xmm13");
            rdx33 = rdx33 + 2;
            __asm__("paddq xmm12, xmm10");
        } while (rdx33 != 0x7d0);
        rdi20 = rcx24;
    } while (!reinterpret_cast<int1_t>(rcx24 == 0x7d0));
    v35 = rax17;
    v36 = reinterpret_cast<struct s15*>(&r15_6->f3e80);
    v37 = reinterpret_cast<struct s15*>(&r13_10->f3e80);
    *reinterpret_cast<int32_t*>(&rax38) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi39) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi39) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi40 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi39) * 0x3e80);
        r11_41 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbx42) + reinterpret_cast<uint64_t>(rdi40) + 0x3e80);
        rdi43 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rdi40) + reinterpret_cast<int64_t>(rbx44));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi43) < reinterpret_cast<int64_t>(r11_19) + reinterpret_cast<uint64_t>(rsi39) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r11_19) + reinterpret_cast<uint64_t>(rsi39) * 8 < reinterpret_cast<uint64_t>(r11_41)))) == fputc) || (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi43) < reinterpret_cast<uint64_t>(v36))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r15_6) < reinterpret_cast<uint64_t>(r11_41)))) == fputc) || !reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi43) < reinterpret_cast<int64_t>(r9_18) + reinterpret_cast<uint64_t>(rsi39) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r9_18) + reinterpret_cast<uint64_t>(rsi39) * 8 < reinterpret_cast<uint64_t>(r11_41)))) == fputc))) {
            *reinterpret_cast<int32_t*>(&r8_45) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_45) + 4) = reinterpret_cast<int32_t>(fputc);
            r11_19 = v3;
            r9_18 = v8;
            goto addr_970_51;
        }
        *reinterpret_cast<int32_t*>(&r8_45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_45) + 4) = reinterpret_cast<int32_t>(fputc);
        r11_19 = v3;
        r9_18 = v8;
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi43) < reinterpret_cast<uint64_t>(v37))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_10) < reinterpret_cast<uint64_t>(r11_41)))) == fputc)) {
            do {
                addr_970_51:
                rdi43->f0 = rsi39->f0;
                rdi46 = reinterpret_cast<struct s16*>(&rdi43->f4);
                rsi47 = reinterpret_cast<struct s17*>(&rsi39->f4);
                __asm__("mulsd xmm0, [r15+r8*8]");
                __asm__("addsd xmm0, [rdi+r8*8]");
                rdi46->f0 = rsi47->f0;
                rdi48 = reinterpret_cast<struct s15*>(&rdi46->f4);
                rsi49 = reinterpret_cast<struct s0*>(&rsi47->f4);
                __asm__("mulsd xmm1, [r13+r8*8+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi48->f0 = rsi49->f0;
                rdi50 = reinterpret_cast<struct s16*>(&rdi48->f4);
                rsi51 = reinterpret_cast<struct s17*>(&rsi49->f4);
                rdi50->f0 = rsi51->f0;
                rdi52 = reinterpret_cast<struct s15*>(&rdi50->f4);
                rsi53 = reinterpret_cast<struct s0*>(&rsi51->f4);
                __asm__("mulsd xmm0, [r15+rcx]");
                __asm__("addsd xmm0, [rcx+rdi]");
                rdi52->f0 = rsi53->f0;
                rdi54 = reinterpret_cast<struct s16*>(&rdi52->f4);
                rsi55 = reinterpret_cast<struct s17*>(&rsi53->f4);
                __asm__("mulsd xmm1, [r13+rcx+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi54->f0 = rsi55->f0;
                rdi43 = reinterpret_cast<struct s15*>(&rdi54->f4);
                rsi39 = reinterpret_cast<struct s0*>(&rsi55->f4);
                r8_45 = r8_45 + 2;
            } while (r8_45 != 0x7d0);
        } else {
            rdi43->f0 = rsi39->f0;
            rdi56 = reinterpret_cast<struct s16*>(&rdi43->f4);
            rsi57 = reinterpret_cast<struct s17*>(&rsi39->f4);
            __asm__("unpcklpd xmm0, xmm0");
            rdi56->f0 = rsi57->f0;
            rdi43 = reinterpret_cast<struct s15*>(&rdi56->f4);
            rsi39 = reinterpret_cast<struct s0*>(&rsi57->f4);
            __asm__("unpcklpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&r8_58) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_58) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm2, [rdi+r8*8]");
                __asm__("movupd xmm3, [rdi+r8*8+0x10]");
                __asm__("movupd xmm4, [r15+r8*8]");
                __asm__("movupd xmm5, [r15+r8*8+0x10]");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("mulpd xmm5, xmm0");
                __asm__("addpd xmm5, xmm3");
                __asm__("movupd xmm2, [r13+r8*8+0x0]");
                __asm__("movupd xmm3, [r13+r8*8+0x10]");
                __asm__("mulpd xmm2, xmm1");
                __asm__("addpd xmm2, xmm4");
                __asm__("mulpd xmm3, xmm1");
                __asm__("addpd xmm3, xmm5");
                __asm__("movupd [rdi+r8*8], xmm2");
                __asm__("movupd [rdi+r8*8+0x10], xmm3");
                r8_58 = r8_58 + 4;
            } while (r8_58 != 0x7d0);
            continue;
        }
        rsi39 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi39) + 1);
    } while (rsi39 != 0x7d0);
    rdi43->f0 = rsi39->f0;
    rsi59 = reinterpret_cast<struct s17*>(&rsi39->f4);
    rdi60 = v35;
    do {
        rdi60->f0 = rsi59->f0;
        rdi60 = reinterpret_cast<struct s3*>(&rdi60->f4);
        rsi59 = reinterpret_cast<struct s17*>(&rsi59->f4);
        *reinterpret_cast<int32_t*>(&rcx61) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx61) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi60->f0 = rsi59->f0;
            rdi62 = reinterpret_cast<struct s18*>(&rdi60->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, xmm1");
            rdi62->f0 = rsi59->f4;
            rdi63 = reinterpret_cast<struct s19*>(&rdi62->f4);
            rsi64 = reinterpret_cast<struct s35*>(rbx65 + (rcx61 | 1) * 0xfa0);
            rdi63->f0 = rsi64->f0;
            rdi66 = reinterpret_cast<struct s21*>(&rdi63->f4);
            rsi67 = reinterpret_cast<struct s36*>(&rsi64->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm2");
            rdi66->f0 = rsi67->f0;
            rdi60 = reinterpret_cast<struct s3*>(&rdi66->f4);
            rsi59 = reinterpret_cast<struct s17*>(&rsi67->f4);
            rcx61 = rcx61 + 2;
        } while (rcx61 != 0x7d0);
        ++rax38;
    } while (rax38 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rax68) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax68) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(r14_14) >= reinterpret_cast<uint64_t>(&rdi60->f3e80) || reinterpret_cast<uint64_t>(rdi60) >= reinterpret_cast<uint64_t>(&r14_14->f3e80)) {
        do {
            __asm__("movupd xmm0, [r14+rax*8]");
            __asm__("movupd xmm1, [r14+rax*8+0x10]");
            __asm__("movupd xmm2, [rdi+rax*8]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rax*8+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rax*8], xmm2");
            __asm__("movupd [r14+rax*8+0x10], xmm0");
            __asm__("movupd xmm0, [r14+rcx]");
            __asm__("movupd xmm1, [r14+rcx+0x10]");
            __asm__("movupd xmm2, [rdi+rcx]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rcx+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rcx], xmm2");
            __asm__("movupd [r14+rcx+0x10], xmm0");
            rax68 = rax68 + 8;
        } while (rax68 != 0x7d0);
    } else {
        do {
            rdi60->f0 = rsi59->f0;
            rdi69 = reinterpret_cast<struct s18*>(&rdi60->f4);
            rsi70 = reinterpret_cast<struct s0*>(&rsi59->f4);
            __asm__("addsd xmm0, [rdi+rax*8]");
            rdi69->f0 = rsi70->f0;
            rdi71 = reinterpret_cast<struct s19*>(&rdi69->f4);
            rsi72 = reinterpret_cast<struct s17*>(&rsi70->f4);
            rdi71->f0 = rsi72->f0;
            rdi73 = reinterpret_cast<struct s21*>(&rdi71->f4);
            rsi74 = reinterpret_cast<struct s0*>(&rsi72->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi73->f0 = rsi74->f0;
            rdi75 = reinterpret_cast<struct s3*>(&rdi73->f4);
            rsi76 = reinterpret_cast<struct s17*>(&rsi74->f4);
            rdi75->f0 = rsi76->f0;
            rdi77 = reinterpret_cast<struct s18*>(&rdi75->f4);
            rsi78 = reinterpret_cast<struct s0*>(&rsi76->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi77->f0 = rsi78->f0;
            rdi79 = reinterpret_cast<struct s19*>(&rdi77->f4);
            rsi80 = reinterpret_cast<struct s17*>(&rsi78->f4);
            rdi79->f0 = rsi80->f0;
            rdi81 = reinterpret_cast<struct s21*>(&rdi79->f4);
            rsi82 = reinterpret_cast<struct s0*>(&rsi80->f4);
            __asm__("addsd xmm0, [rdi+rcx]");
            rdi81->f0 = rsi82->f0;
            rdi60 = reinterpret_cast<struct s3*>(&rdi81->f4);
            rsi59 = reinterpret_cast<struct s17*>(&rsi82->f4);
            rax68 = rax68 + 4;
        } while (rax68 != 0x7d0);
    }
    *reinterpret_cast<int32_t*>(&rax83) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax83) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi60->f0 = rsi59->f0;
    rdi84 = reinterpret_cast<struct s18*>(&rdi60->f4);
    rsi85 = reinterpret_cast<struct s0*>(&rsi59->f4);
    do {
        rdi84->f0 = rsi85->f0;
        rdi84 = reinterpret_cast<struct s18*>(&rdi84->f4);
        rsi85 = reinterpret_cast<struct s0*>(&rsi85->f4);
        *reinterpret_cast<int32_t*>(&rcx86) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx86 + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx87 = rbx88 + rax83 * 0xfa0;
            rdi84->f0 = rsi85->f0;
            rdi89 = reinterpret_cast<struct s19*>(&rdi84->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            rsi90 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx86) * 8);
            __asm__("addsd xmm2, xmm1");
            rdi89->f0 = *rsi90;
            rdi91 = reinterpret_cast<struct s21*>(&rdi89->f4);
            rsi92 = reinterpret_cast<struct s37*>(reinterpret_cast<uint64_t>(rsi90 + 1) | 8);
            rdi91->f0 = rsi92->f0;
            rdi93 = reinterpret_cast<struct s3*>(&rdi91->f4);
            rsi94 = reinterpret_cast<struct s38*>(&rsi92->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r14+rsi]");
            __asm__("addsd xmm1, xmm2");
            rdi93->f0 = rsi94->f0;
            rdi84 = reinterpret_cast<struct s18*>(&rdi93->f4);
            rsi85 = reinterpret_cast<struct s0*>(&rsi94->f4);
            rcx86 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx86) + 2);
        } while (!reinterpret_cast<int1_t>(rcx86 == 0x7d0));
        ++rax83;
    } while (rax83 != 0x7d0);
    if (v95 >= 43 && **v96 == fputc) {
        rax97 = gc6a;
        v98 = *rax97;
        fun_c87(0xc78, 22, 1);
        rsi99 = reinterpret_cast<int32_t*>(0xc8e);
        rdi100 = v98;
        fun_ca0();
        *reinterpret_cast<int32_t*>(&rcx101) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx101) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            eax102 = *reinterpret_cast<int32_t*>(&rcx101) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax102)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi100) = 10;
                *reinterpret_cast<int32_t*>(&rdi100 + 4) = reinterpret_cast<int32_t>(fputc);
                rsi99 = v98;
                fun_d00();
            }
            *rdi100 = *rsi99;
            rdi100 = v98;
            rsi99 = reinterpret_cast<int32_t*>(0xcc1);
            fun_cc8();
            ++rcx101;
        } while (rcx101 != 0x7d0);
        fun_d20(v98, 0xd0e, 0xd15);
        *reinterpret_cast<int32_t*>(&rsi85) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi85) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx87) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx87) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx86 = v98;
        fun_d3a(0xd27, 22, 1, rcx86);
    }
    fun_c0c(rbx103, rsi85, rdx87, rcx86);
    fun_c16(v3, rsi85, rdx87, rcx86);
    fun_c1e(r15_6, rsi85, rdx87, rcx86);
    fun_c28(v8, rsi85, rdx87, rcx86);
    fun_c30(r13_10, rsi85, rdx87, rcx86);
    fun_c38(rbp12, rsi85, rdx87, rcx86);
    fun_c40(r14_14, rsi85, rdx87, rcx86);
    fun_c48(r12_16, rsi85, rdx87, rcx86);
    fun_c52(v35, rsi85, rdx87, rcx86);
    goto v104;
}

void fun_c28(void* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, ...) {
    struct s1* r13_5;
    int64_t* rbp6;
    struct s2* r14_7;
    int64_t r12_8;
    struct s3* v9;
    int64_t v10;

    fun_c30(r13_5, rsi, rdx, rcx, r13_5, rsi, rdx, rcx);
    fun_c38(rbp6, rsi, rdx, rcx, rbp6, rsi, rdx, rcx);
    fun_c40(r14_7, rsi, rdx, rcx, r14_7, rsi, rdx, rcx);
    fun_c48(r12_8, rsi, rdx, rcx, r12_8, rsi, rdx, rcx);
    fun_c52(v9, rsi, rdx, rcx, v9, rsi, rdx, rcx);
    goto v10;
}

void fun_d3a(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int32_t* rbx5;
    void* v6;
    struct s1* r15_7;
    void* v8;
    struct s1* r13_9;
    int64_t* rbp10;
    struct s2* r14_11;
    int64_t r12_12;
    struct s3* v13;
    int64_t v14;

    fun_c0c(rbx5, rsi, rdx, rcx);
    fun_c16(v6, rsi, rdx, rcx);
    fun_c1e(r15_7, rsi, rdx, rcx);
    fun_c28(v8, rsi, rdx, rcx, v8, rsi, rdx, rcx);
    fun_c30(r13_9, rsi, rdx, rcx, r13_9, rsi, rdx, rcx);
    fun_c38(rbp10, rsi, rdx, rcx, rbp10, rsi, rdx, rcx);
    fun_c40(r14_11, rsi, rdx, rcx, r14_11, rsi, rdx, rcx);
    fun_c48(r12_12, rsi, rdx, rcx, r12_12, rsi, rdx, rcx);
    fun_c52(v13, rsi, rdx, rcx, v13, rsi, rdx, rcx);
    goto v14;
}

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

struct s52 {
    int32_t f0;
    int32_t f4;
};

struct s1* fun_5bc(int64_t rdi, int64_t rsi) {
    struct s1* r15_3;
    struct s1* rax4;
    void* rax5;
    void* v6;
    struct s1* rax7;
    struct s1* r13_8;
    int64_t* rax9;
    int64_t* rbp10;
    struct s2* rax11;
    struct s2* r14_12;
    int64_t rax13;
    int64_t r12_14;
    struct s3* rax15;
    void* r9_16;
    void* r11_17;
    void* v18;
    struct s39* rdi19;
    struct s40* rsi20;
    struct s41* rdi21;
    struct s42* rsi22;
    struct s39* rcx23;
    struct s43* rdi24;
    struct s44* rsi25;
    struct s45* rdi26;
    struct s46* rsi27;
    struct s47* rdi28;
    struct s48* rsi29;
    int32_t* rdi30;
    void* rdi31;
    int64_t rdx32;
    int32_t* rbx33;
    struct s3* v34;
    struct s15* v35;
    struct s15* v36;
    int64_t rax37;
    struct s0* rsi38;
    void* rdi39;
    struct s1* r11_40;
    void* rbx41;
    struct s15* rdi42;
    int32_t* rbx43;
    int64_t r8_44;
    void* v45;
    void* v46;
    struct s16* rdi47;
    struct s17* rsi48;
    struct s15* rdi49;
    struct s0* rsi50;
    struct s16* rdi51;
    struct s17* rsi52;
    struct s15* rdi53;
    struct s0* rsi54;
    struct s16* rdi55;
    struct s17* rsi56;
    struct s16* rdi57;
    struct s17* rsi58;
    int64_t r8_59;
    struct s17* rsi60;
    struct s3* rdi61;
    uint64_t rcx62;
    struct s18* rdi63;
    struct s19* rdi64;
    struct s49* rsi65;
    int32_t* rbx66;
    struct s21* rdi67;
    struct s50* rsi68;
    int64_t rax69;
    struct s18* rdi70;
    struct s0* rsi71;
    struct s19* rdi72;
    struct s17* rsi73;
    struct s21* rdi74;
    struct s0* rsi75;
    struct s3* rdi76;
    struct s17* rsi77;
    struct s18* rdi78;
    struct s0* rsi79;
    struct s19* rdi80;
    struct s17* rsi81;
    struct s21* rdi82;
    struct s0* rsi83;
    int64_t rax84;
    struct s18* rdi85;
    struct s0* rsi86;
    int32_t* rcx87;
    int32_t* rdx88;
    int32_t* rbx89;
    struct s19* rdi90;
    int32_t* rsi91;
    struct s21* rdi92;
    struct s51* rsi93;
    struct s3* rdi94;
    struct s52* rsi95;
    int32_t v96;
    signed char** v97;
    int32_t** rax98;
    int32_t* v99;
    int32_t* rsi100;
    int32_t* rdi101;
    int64_t rcx102;
    int32_t eax103;
    int32_t* rbx104;
    void* v105;
    int64_t v106;

    r15_3 = rax4;
    rax5 = fun_5ce(0x7d0, 8);
    v6 = rax5;
    rax7 = fun_5e2(0x7d0, 8);
    r13_8 = rax7;
    rax9 = fun_5f4(0x7d0, 8);
    rbp10 = rax9;
    rax11 = fun_606(0x7d0, 8);
    r14_12 = rax11;
    rax13 = fun_618(0x7d0, 8);
    r12_14 = rax13;
    rax15 = fun_62a(0x7d0, 8);
    r9_16 = v6;
    r11_17 = v18;
    fputc = LCPI1_1;
    g4 = gc;
    LCPI1_1 = LCPI1_7;
    gc = g14;
    LCPI1_7 = LCPI1_3;
    g14 = g1c;
    rdi19 = reinterpret_cast<struct s39*>(24);
    rsi20 = reinterpret_cast<struct s40*>(32);
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("movapd xmm9, [rip+0x0]");
    __asm__("movdqa xmm10, [rip+0x0]");
    do {
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, edi");
        rdi19->f0 = rsi20->f0;
        rdi21 = reinterpret_cast<struct s41*>(&rdi19->f4);
        rsi22 = reinterpret_cast<struct s42*>(&rsi20->f4);
        rcx23 = reinterpret_cast<struct s39*>(reinterpret_cast<int64_t>(rdi21) + 1);
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, ecx");
        __asm__("divsd xmm11, xmm0");
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm1");
        rdi21->f0 = rsi22->f0;
        rdi24 = reinterpret_cast<struct s43*>(&rdi21->f1);
        rsi25 = reinterpret_cast<struct s44*>(&rsi22->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm2");
        rdi24->f0 = rsi25->f0;
        rdi26 = reinterpret_cast<struct s45*>(&rdi24->f4);
        rsi27 = reinterpret_cast<struct s46*>(&rsi25->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("divsd xmm12, xmm3");
        rdi26->f0 = rsi27->f0;
        rdi28 = reinterpret_cast<struct s47*>(&rdi26->f4);
        rsi29 = reinterpret_cast<struct s48*>(&rsi27->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm4");
        rdi28->f0 = rsi29->f0;
        rdi30 = &rdi28->f4;
        __asm__("divsd xmm11, xmm5");
        *rdi30 = rsi29->f4;
        rdi31 = reinterpret_cast<void*>(rdi30 + 1);
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r14_12) + reinterpret_cast<int64_t>(rdi31) * 8) = reinterpret_cast<int64_t>(fputc);
        rbp10[static_cast<int64_t>(rdi31)] = reinterpret_cast<int64_t>(fputc);
        __asm__("movd xmm11, rdi");
        __asm__("pshufd xmm11, xmm11, 0x44");
        *reinterpret_cast<int32_t*>(&rdx32) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm12, xmm6");
        do {
            __asm__("movdqa xmm13, xmm12");
            __asm__("psrlq xmm13, 0x20");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("movdqa xmm14, xmm11");
            __asm__("psrlq xmm14, 0x20");
            __asm__("pmuludq xmm14, xmm12");
            __asm__("paddq xmm14, xmm13");
            __asm__("movdqa xmm13, xmm12");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("psllq xmm14, 0x20");
            __asm__("paddq xmm13, xmm14");
            __asm__("pshufd xmm14, xmm13, 0xe8");
            __asm__("pshufd xmm15, xmm13, 0xee");
            __asm__("pmuludq xmm13, xmm7");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("pmuludq xmm15, xmm7");
            __asm__("pshufd xmm15, xmm15, 0xed");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psrld xmm13, 0x7");
            __asm__("pshufd xmm15, xmm13, 0xf5");
            __asm__("pmuludq xmm13, xmm8");
            __asm__("pmuludq xmm15, xmm8");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psubd xmm14, xmm13");
            __asm__("cvtdq2pd xmm13, xmm14");
            __asm__("divpd xmm13, xmm9");
            rsi20 = reinterpret_cast<struct s40*>(rbx33 + reinterpret_cast<int64_t>(rdi31) * 0xfa0);
            __asm__("movupd [rsi+rdx*8], xmm13");
            rdx32 = rdx32 + 2;
            __asm__("paddq xmm12, xmm10");
        } while (rdx32 != 0x7d0);
        rdi19 = rcx23;
    } while (!reinterpret_cast<int1_t>(rcx23 == 0x7d0));
    v34 = rax15;
    v35 = reinterpret_cast<struct s15*>(&r15_3->f3e80);
    v36 = reinterpret_cast<struct s15*>(&r13_8->f3e80);
    *reinterpret_cast<int32_t*>(&rax37) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax37) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi38) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi38) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi39 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi38) * 0x3e80);
        r11_40 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbx41) + reinterpret_cast<uint64_t>(rdi39) + 0x3e80);
        rdi42 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rdi39) + reinterpret_cast<int64_t>(rbx43));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi42) < reinterpret_cast<int64_t>(r11_17) + reinterpret_cast<uint64_t>(rsi38) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r11_17) + reinterpret_cast<uint64_t>(rsi38) * 8 < reinterpret_cast<uint64_t>(r11_40)))) == fputc) || (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi42) < reinterpret_cast<uint64_t>(v35))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r15_3) < reinterpret_cast<uint64_t>(r11_40)))) == fputc) || !reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi42) < reinterpret_cast<int64_t>(r9_16) + reinterpret_cast<uint64_t>(rsi38) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r9_16) + reinterpret_cast<uint64_t>(rsi38) * 8 < reinterpret_cast<uint64_t>(r11_40)))) == fputc))) {
            *reinterpret_cast<int32_t*>(&r8_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_44) + 4) = reinterpret_cast<int32_t>(fputc);
            r11_17 = v45;
            r9_16 = v6;
            goto addr_970_50;
        }
        *reinterpret_cast<int32_t*>(&r8_44) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_44) + 4) = reinterpret_cast<int32_t>(fputc);
        r11_17 = v46;
        r9_16 = v6;
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi42) < reinterpret_cast<uint64_t>(v36))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_8) < reinterpret_cast<uint64_t>(r11_40)))) == fputc)) {
            do {
                addr_970_50:
                rdi42->f0 = rsi38->f0;
                rdi47 = reinterpret_cast<struct s16*>(&rdi42->f4);
                rsi48 = reinterpret_cast<struct s17*>(&rsi38->f4);
                __asm__("mulsd xmm0, [r15+r8*8]");
                __asm__("addsd xmm0, [rdi+r8*8]");
                rdi47->f0 = rsi48->f0;
                rdi49 = reinterpret_cast<struct s15*>(&rdi47->f4);
                rsi50 = reinterpret_cast<struct s0*>(&rsi48->f4);
                __asm__("mulsd xmm1, [r13+r8*8+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi49->f0 = rsi50->f0;
                rdi51 = reinterpret_cast<struct s16*>(&rdi49->f4);
                rsi52 = reinterpret_cast<struct s17*>(&rsi50->f4);
                rdi51->f0 = rsi52->f0;
                rdi53 = reinterpret_cast<struct s15*>(&rdi51->f4);
                rsi54 = reinterpret_cast<struct s0*>(&rsi52->f4);
                __asm__("mulsd xmm0, [r15+rcx]");
                __asm__("addsd xmm0, [rcx+rdi]");
                rdi53->f0 = rsi54->f0;
                rdi55 = reinterpret_cast<struct s16*>(&rdi53->f4);
                rsi56 = reinterpret_cast<struct s17*>(&rsi54->f4);
                __asm__("mulsd xmm1, [r13+rcx+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi55->f0 = rsi56->f0;
                rdi42 = reinterpret_cast<struct s15*>(&rdi55->f4);
                rsi38 = reinterpret_cast<struct s0*>(&rsi56->f4);
                r8_44 = r8_44 + 2;
            } while (r8_44 != 0x7d0);
        } else {
            rdi42->f0 = rsi38->f0;
            rdi57 = reinterpret_cast<struct s16*>(&rdi42->f4);
            rsi58 = reinterpret_cast<struct s17*>(&rsi38->f4);
            __asm__("unpcklpd xmm0, xmm0");
            rdi57->f0 = rsi58->f0;
            rdi42 = reinterpret_cast<struct s15*>(&rdi57->f4);
            rsi38 = reinterpret_cast<struct s0*>(&rsi58->f4);
            __asm__("unpcklpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&r8_59) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_59) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm2, [rdi+r8*8]");
                __asm__("movupd xmm3, [rdi+r8*8+0x10]");
                __asm__("movupd xmm4, [r15+r8*8]");
                __asm__("movupd xmm5, [r15+r8*8+0x10]");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("mulpd xmm5, xmm0");
                __asm__("addpd xmm5, xmm3");
                __asm__("movupd xmm2, [r13+r8*8+0x0]");
                __asm__("movupd xmm3, [r13+r8*8+0x10]");
                __asm__("mulpd xmm2, xmm1");
                __asm__("addpd xmm2, xmm4");
                __asm__("mulpd xmm3, xmm1");
                __asm__("addpd xmm3, xmm5");
                __asm__("movupd [rdi+r8*8], xmm2");
                __asm__("movupd [rdi+r8*8+0x10], xmm3");
                r8_59 = r8_59 + 4;
            } while (r8_59 != 0x7d0);
            continue;
        }
        rsi38 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi38) + 1);
    } while (rsi38 != 0x7d0);
    rdi42->f0 = rsi38->f0;
    rsi60 = reinterpret_cast<struct s17*>(&rsi38->f4);
    rdi61 = v34;
    do {
        rdi61->f0 = rsi60->f0;
        rdi61 = reinterpret_cast<struct s3*>(&rdi61->f4);
        rsi60 = reinterpret_cast<struct s17*>(&rsi60->f4);
        *reinterpret_cast<int32_t*>(&rcx62) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx62) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi61->f0 = rsi60->f0;
            rdi63 = reinterpret_cast<struct s18*>(&rdi61->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, xmm1");
            rdi63->f0 = rsi60->f4;
            rdi64 = reinterpret_cast<struct s19*>(&rdi63->f4);
            rsi65 = reinterpret_cast<struct s49*>(rbx66 + (rcx62 | 1) * 0xfa0);
            rdi64->f0 = rsi65->f0;
            rdi67 = reinterpret_cast<struct s21*>(&rdi64->f4);
            rsi68 = reinterpret_cast<struct s50*>(&rsi65->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm2");
            rdi67->f0 = rsi68->f0;
            rdi61 = reinterpret_cast<struct s3*>(&rdi67->f4);
            rsi60 = reinterpret_cast<struct s17*>(&rsi68->f4);
            rcx62 = rcx62 + 2;
        } while (rcx62 != 0x7d0);
        ++rax37;
    } while (rax37 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rax69) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax69) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(r14_12) >= reinterpret_cast<uint64_t>(&rdi61->f3e80) || reinterpret_cast<uint64_t>(rdi61) >= reinterpret_cast<uint64_t>(&r14_12->f3e80)) {
        do {
            __asm__("movupd xmm0, [r14+rax*8]");
            __asm__("movupd xmm1, [r14+rax*8+0x10]");
            __asm__("movupd xmm2, [rdi+rax*8]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rax*8+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rax*8], xmm2");
            __asm__("movupd [r14+rax*8+0x10], xmm0");
            __asm__("movupd xmm0, [r14+rcx]");
            __asm__("movupd xmm1, [r14+rcx+0x10]");
            __asm__("movupd xmm2, [rdi+rcx]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rcx+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rcx], xmm2");
            __asm__("movupd [r14+rcx+0x10], xmm0");
            rax69 = rax69 + 8;
        } while (rax69 != 0x7d0);
    } else {
        do {
            rdi61->f0 = rsi60->f0;
            rdi70 = reinterpret_cast<struct s18*>(&rdi61->f4);
            rsi71 = reinterpret_cast<struct s0*>(&rsi60->f4);
            __asm__("addsd xmm0, [rdi+rax*8]");
            rdi70->f0 = rsi71->f0;
            rdi72 = reinterpret_cast<struct s19*>(&rdi70->f4);
            rsi73 = reinterpret_cast<struct s17*>(&rsi71->f4);
            rdi72->f0 = rsi73->f0;
            rdi74 = reinterpret_cast<struct s21*>(&rdi72->f4);
            rsi75 = reinterpret_cast<struct s0*>(&rsi73->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi74->f0 = rsi75->f0;
            rdi76 = reinterpret_cast<struct s3*>(&rdi74->f4);
            rsi77 = reinterpret_cast<struct s17*>(&rsi75->f4);
            rdi76->f0 = rsi77->f0;
            rdi78 = reinterpret_cast<struct s18*>(&rdi76->f4);
            rsi79 = reinterpret_cast<struct s0*>(&rsi77->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi78->f0 = rsi79->f0;
            rdi80 = reinterpret_cast<struct s19*>(&rdi78->f4);
            rsi81 = reinterpret_cast<struct s17*>(&rsi79->f4);
            rdi80->f0 = rsi81->f0;
            rdi82 = reinterpret_cast<struct s21*>(&rdi80->f4);
            rsi83 = reinterpret_cast<struct s0*>(&rsi81->f4);
            __asm__("addsd xmm0, [rdi+rcx]");
            rdi82->f0 = rsi83->f0;
            rdi61 = reinterpret_cast<struct s3*>(&rdi82->f4);
            rsi60 = reinterpret_cast<struct s17*>(&rsi83->f4);
            rax69 = rax69 + 4;
        } while (rax69 != 0x7d0);
    }
    *reinterpret_cast<int32_t*>(&rax84) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax84) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi61->f0 = rsi60->f0;
    rdi85 = reinterpret_cast<struct s18*>(&rdi61->f4);
    rsi86 = reinterpret_cast<struct s0*>(&rsi60->f4);
    do {
        rdi85->f0 = rsi86->f0;
        rdi85 = reinterpret_cast<struct s18*>(&rdi85->f4);
        rsi86 = reinterpret_cast<struct s0*>(&rsi86->f4);
        *reinterpret_cast<int32_t*>(&rcx87) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx87 + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx88 = rbx89 + rax84 * 0xfa0;
            rdi85->f0 = rsi86->f0;
            rdi90 = reinterpret_cast<struct s19*>(&rdi85->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            rsi91 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx87) * 8);
            __asm__("addsd xmm2, xmm1");
            rdi90->f0 = *rsi91;
            rdi92 = reinterpret_cast<struct s21*>(&rdi90->f4);
            rsi93 = reinterpret_cast<struct s51*>(reinterpret_cast<uint64_t>(rsi91 + 1) | 8);
            rdi92->f0 = rsi93->f0;
            rdi94 = reinterpret_cast<struct s3*>(&rdi92->f4);
            rsi95 = reinterpret_cast<struct s52*>(&rsi93->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r14+rsi]");
            __asm__("addsd xmm1, xmm2");
            rdi94->f0 = rsi95->f0;
            rdi85 = reinterpret_cast<struct s18*>(&rdi94->f4);
            rsi86 = reinterpret_cast<struct s0*>(&rsi95->f4);
            rcx87 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx87) + 2);
        } while (!reinterpret_cast<int1_t>(rcx87 == 0x7d0));
        ++rax84;
    } while (rax84 != 0x7d0);
    if (v96 >= 43 && **v97 == fputc) {
        rax98 = gc6a;
        v99 = *rax98;
        fun_c87(0xc78, 22, 1);
        rsi100 = reinterpret_cast<int32_t*>(0xc8e);
        rdi101 = v99;
        fun_ca0();
        *reinterpret_cast<int32_t*>(&rcx102) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx102) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            eax103 = *reinterpret_cast<int32_t*>(&rcx102) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax103)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi101) = 10;
                *reinterpret_cast<int32_t*>(&rdi101 + 4) = reinterpret_cast<int32_t>(fputc);
                rsi100 = v99;
                fun_d00();
            }
            *rdi101 = *rsi100;
            rdi101 = v99;
            rsi100 = reinterpret_cast<int32_t*>(0xcc1);
            fun_cc8();
            ++rcx102;
        } while (rcx102 != 0x7d0);
        fun_d20(v99, 0xd0e, 0xd15);
        *reinterpret_cast<int32_t*>(&rsi86) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi86) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx88) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx88) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx87 = v99;
        fun_d3a(0xd27, 22, 1, rcx87);
    }
    fun_c0c(rbx104, rsi86, rdx88, rcx87);
    fun_c16(v105, rsi86, rdx88, rcx87);
    fun_c1e(r15_3, rsi86, rdx88, rcx87);
    fun_c28(v6, rsi86, rdx88, rcx87);
    fun_c30(r13_8, rsi86, rdx88, rcx87);
    fun_c38(rbp10, rsi86, rdx88, rcx87);
    fun_c40(r14_12, rsi86, rdx88, rcx87);
    fun_c48(r12_14, rsi86, rdx88, rcx87);
    fun_c52(v34, rsi86, rdx88, rcx87);
    goto v106;
}

void fun_c30(struct s1* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, ...) {
    int64_t* rbp5;
    struct s2* r14_6;
    int64_t r12_7;
    struct s3* v8;
    int64_t v9;

    fun_c38(rbp5, rsi, rdx, rcx, rbp5, rsi, rdx, rcx);
    fun_c40(r14_6, rsi, rdx, rcx, r14_6, rsi, rdx, rcx);
    fun_c48(r12_7, rsi, rdx, rcx, r12_7, rsi, rdx, rcx);
    fun_c52(v8, rsi, rdx, rcx, v8, rsi, rdx, rcx);
    goto v9;
}

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
    int32_t f1;
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
    signed char[16000] pad16000;
    int32_t f3e80;
};

struct s64 {
    int32_t f0;
    int32_t f4;
};

struct s65 {
    int32_t f0;
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

void* fun_5ce(int64_t rdi, int64_t rsi) {
    void* v3;
    void* rax4;
    struct s1* rax5;
    struct s1* r13_6;
    int64_t* rax7;
    int64_t* rbp8;
    struct s2* rax9;
    struct s2* r14_10;
    int64_t rax11;
    int64_t r12_12;
    struct s3* rax13;
    void* r9_14;
    void* r11_15;
    void* v16;
    struct s53* rdi17;
    struct s54* rsi18;
    struct s55* rdi19;
    struct s56* rsi20;
    struct s53* rcx21;
    struct s57* rdi22;
    struct s58* rsi23;
    struct s59* rdi24;
    struct s60* rsi25;
    struct s61* rdi26;
    struct s62* rsi27;
    int32_t* rdi28;
    void* rdi29;
    int64_t rdx30;
    int32_t* rbx31;
    struct s3* v32;
    struct s15* v33;
    struct s63* r15_34;
    struct s15* v35;
    int64_t rax36;
    struct s0* rsi37;
    void* rdi38;
    struct s1* r11_39;
    void* rbx40;
    struct s15* rdi41;
    int32_t* rbx42;
    struct s1* r15_43;
    int64_t r8_44;
    void* v45;
    void* v46;
    struct s16* rdi47;
    struct s17* rsi48;
    struct s15* rdi49;
    struct s0* rsi50;
    struct s16* rdi51;
    struct s17* rsi52;
    struct s15* rdi53;
    struct s0* rsi54;
    struct s16* rdi55;
    struct s17* rsi56;
    struct s16* rdi57;
    struct s17* rsi58;
    int64_t r8_59;
    struct s17* rsi60;
    struct s3* rdi61;
    uint64_t rcx62;
    struct s18* rdi63;
    struct s19* rdi64;
    struct s64* rsi65;
    int32_t* rbx66;
    struct s21* rdi67;
    struct s65* rsi68;
    int64_t rax69;
    struct s18* rdi70;
    struct s0* rsi71;
    struct s19* rdi72;
    struct s17* rsi73;
    struct s21* rdi74;
    struct s0* rsi75;
    struct s3* rdi76;
    struct s17* rsi77;
    struct s18* rdi78;
    struct s0* rsi79;
    struct s19* rdi80;
    struct s17* rsi81;
    struct s21* rdi82;
    struct s0* rsi83;
    int64_t rax84;
    struct s18* rdi85;
    struct s0* rsi86;
    int32_t* rcx87;
    int32_t* rdx88;
    int32_t* rbx89;
    struct s19* rdi90;
    int32_t* rsi91;
    struct s21* rdi92;
    struct s66* rsi93;
    struct s3* rdi94;
    struct s67* rsi95;
    int32_t v96;
    signed char** v97;
    int32_t** rax98;
    int32_t* v99;
    int32_t* rsi100;
    int32_t* rdi101;
    int64_t rcx102;
    int32_t eax103;
    int32_t* rbx104;
    void* v105;
    struct s1* r15_106;
    int64_t v107;

    v3 = rax4;
    rax5 = fun_5e2(0x7d0, 8);
    r13_6 = rax5;
    rax7 = fun_5f4(0x7d0, 8);
    rbp8 = rax7;
    rax9 = fun_606(0x7d0, 8);
    r14_10 = rax9;
    rax11 = fun_618(0x7d0, 8);
    r12_12 = rax11;
    rax13 = fun_62a(0x7d0, 8);
    r9_14 = v3;
    r11_15 = v16;
    fputc = LCPI1_1;
    g4 = gc;
    LCPI1_1 = LCPI1_7;
    gc = g14;
    LCPI1_7 = LCPI1_3;
    g14 = g1c;
    rdi17 = reinterpret_cast<struct s53*>(24);
    rsi18 = reinterpret_cast<struct s54*>(32);
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("movapd xmm9, [rip+0x0]");
    __asm__("movdqa xmm10, [rip+0x0]");
    do {
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, edi");
        rdi17->f0 = rsi18->f0;
        rdi19 = reinterpret_cast<struct s55*>(&rdi17->f4);
        rsi20 = reinterpret_cast<struct s56*>(&rsi18->f4);
        rcx21 = reinterpret_cast<struct s53*>(reinterpret_cast<int64_t>(rdi19) + 1);
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, ecx");
        __asm__("divsd xmm11, xmm0");
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm1");
        rdi19->f0 = rsi20->f0;
        rdi22 = reinterpret_cast<struct s57*>(&rdi19->f1);
        rsi23 = reinterpret_cast<struct s58*>(&rsi20->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm2");
        rdi22->f0 = rsi23->f0;
        rdi24 = reinterpret_cast<struct s59*>(&rdi22->f4);
        rsi25 = reinterpret_cast<struct s60*>(&rsi23->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("divsd xmm12, xmm3");
        rdi24->f0 = rsi25->f0;
        rdi26 = reinterpret_cast<struct s61*>(&rdi24->f4);
        rsi27 = reinterpret_cast<struct s62*>(&rsi25->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm4");
        rdi26->f0 = rsi27->f0;
        rdi28 = &rdi26->f4;
        __asm__("divsd xmm11, xmm5");
        *rdi28 = rsi27->f4;
        rdi29 = reinterpret_cast<void*>(rdi28 + 1);
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r14_10) + reinterpret_cast<int64_t>(rdi29) * 8) = reinterpret_cast<int64_t>(fputc);
        rbp8[static_cast<int64_t>(rdi29)] = reinterpret_cast<int64_t>(fputc);
        __asm__("movd xmm11, rdi");
        __asm__("pshufd xmm11, xmm11, 0x44");
        *reinterpret_cast<int32_t*>(&rdx30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm12, xmm6");
        do {
            __asm__("movdqa xmm13, xmm12");
            __asm__("psrlq xmm13, 0x20");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("movdqa xmm14, xmm11");
            __asm__("psrlq xmm14, 0x20");
            __asm__("pmuludq xmm14, xmm12");
            __asm__("paddq xmm14, xmm13");
            __asm__("movdqa xmm13, xmm12");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("psllq xmm14, 0x20");
            __asm__("paddq xmm13, xmm14");
            __asm__("pshufd xmm14, xmm13, 0xe8");
            __asm__("pshufd xmm15, xmm13, 0xee");
            __asm__("pmuludq xmm13, xmm7");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("pmuludq xmm15, xmm7");
            __asm__("pshufd xmm15, xmm15, 0xed");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psrld xmm13, 0x7");
            __asm__("pshufd xmm15, xmm13, 0xf5");
            __asm__("pmuludq xmm13, xmm8");
            __asm__("pmuludq xmm15, xmm8");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psubd xmm14, xmm13");
            __asm__("cvtdq2pd xmm13, xmm14");
            __asm__("divpd xmm13, xmm9");
            rsi18 = reinterpret_cast<struct s54*>(rbx31 + reinterpret_cast<int64_t>(rdi29) * 0xfa0);
            __asm__("movupd [rsi+rdx*8], xmm13");
            rdx30 = rdx30 + 2;
            __asm__("paddq xmm12, xmm10");
        } while (rdx30 != 0x7d0);
        rdi17 = rcx21;
    } while (!reinterpret_cast<int1_t>(rcx21 == 0x7d0));
    v32 = rax13;
    v33 = reinterpret_cast<struct s15*>(&r15_34->f3e80);
    v35 = reinterpret_cast<struct s15*>(&r13_6->f3e80);
    *reinterpret_cast<int32_t*>(&rax36) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax36) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi37) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi37) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi38 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi37) * 0x3e80);
        r11_39 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbx40) + reinterpret_cast<uint64_t>(rdi38) + 0x3e80);
        rdi41 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rdi38) + reinterpret_cast<int64_t>(rbx42));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi41) < reinterpret_cast<int64_t>(r11_15) + reinterpret_cast<uint64_t>(rsi37) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r11_15) + reinterpret_cast<uint64_t>(rsi37) * 8 < reinterpret_cast<uint64_t>(r11_39)))) == fputc) || (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi41) < reinterpret_cast<uint64_t>(v33))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r15_43) < reinterpret_cast<uint64_t>(r11_39)))) == fputc) || !reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi41) < reinterpret_cast<int64_t>(r9_14) + reinterpret_cast<uint64_t>(rsi37) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r9_14) + reinterpret_cast<uint64_t>(rsi37) * 8 < reinterpret_cast<uint64_t>(r11_39)))) == fputc))) {
            *reinterpret_cast<int32_t*>(&r8_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_44) + 4) = reinterpret_cast<int32_t>(fputc);
            r11_15 = v45;
            r9_14 = v3;
            goto addr_970_49;
        }
        *reinterpret_cast<int32_t*>(&r8_44) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_44) + 4) = reinterpret_cast<int32_t>(fputc);
        r11_15 = v46;
        r9_14 = v3;
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi41) < reinterpret_cast<uint64_t>(v35))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_6) < reinterpret_cast<uint64_t>(r11_39)))) == fputc)) {
            do {
                addr_970_49:
                rdi41->f0 = rsi37->f0;
                rdi47 = reinterpret_cast<struct s16*>(&rdi41->f4);
                rsi48 = reinterpret_cast<struct s17*>(&rsi37->f4);
                __asm__("mulsd xmm0, [r15+r8*8]");
                __asm__("addsd xmm0, [rdi+r8*8]");
                rdi47->f0 = rsi48->f0;
                rdi49 = reinterpret_cast<struct s15*>(&rdi47->f4);
                rsi50 = reinterpret_cast<struct s0*>(&rsi48->f4);
                __asm__("mulsd xmm1, [r13+r8*8+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi49->f0 = rsi50->f0;
                rdi51 = reinterpret_cast<struct s16*>(&rdi49->f4);
                rsi52 = reinterpret_cast<struct s17*>(&rsi50->f4);
                rdi51->f0 = rsi52->f0;
                rdi53 = reinterpret_cast<struct s15*>(&rdi51->f4);
                rsi54 = reinterpret_cast<struct s0*>(&rsi52->f4);
                __asm__("mulsd xmm0, [r15+rcx]");
                __asm__("addsd xmm0, [rcx+rdi]");
                rdi53->f0 = rsi54->f0;
                rdi55 = reinterpret_cast<struct s16*>(&rdi53->f4);
                rsi56 = reinterpret_cast<struct s17*>(&rsi54->f4);
                __asm__("mulsd xmm1, [r13+rcx+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi55->f0 = rsi56->f0;
                rdi41 = reinterpret_cast<struct s15*>(&rdi55->f4);
                rsi37 = reinterpret_cast<struct s0*>(&rsi56->f4);
                r8_44 = r8_44 + 2;
            } while (r8_44 != 0x7d0);
        } else {
            rdi41->f0 = rsi37->f0;
            rdi57 = reinterpret_cast<struct s16*>(&rdi41->f4);
            rsi58 = reinterpret_cast<struct s17*>(&rsi37->f4);
            __asm__("unpcklpd xmm0, xmm0");
            rdi57->f0 = rsi58->f0;
            rdi41 = reinterpret_cast<struct s15*>(&rdi57->f4);
            rsi37 = reinterpret_cast<struct s0*>(&rsi58->f4);
            __asm__("unpcklpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&r8_59) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_59) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm2, [rdi+r8*8]");
                __asm__("movupd xmm3, [rdi+r8*8+0x10]");
                __asm__("movupd xmm4, [r15+r8*8]");
                __asm__("movupd xmm5, [r15+r8*8+0x10]");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("mulpd xmm5, xmm0");
                __asm__("addpd xmm5, xmm3");
                __asm__("movupd xmm2, [r13+r8*8+0x0]");
                __asm__("movupd xmm3, [r13+r8*8+0x10]");
                __asm__("mulpd xmm2, xmm1");
                __asm__("addpd xmm2, xmm4");
                __asm__("mulpd xmm3, xmm1");
                __asm__("addpd xmm3, xmm5");
                __asm__("movupd [rdi+r8*8], xmm2");
                __asm__("movupd [rdi+r8*8+0x10], xmm3");
                r8_59 = r8_59 + 4;
            } while (r8_59 != 0x7d0);
            continue;
        }
        rsi37 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi37) + 1);
    } while (rsi37 != 0x7d0);
    rdi41->f0 = rsi37->f0;
    rsi60 = reinterpret_cast<struct s17*>(&rsi37->f4);
    rdi61 = v32;
    do {
        rdi61->f0 = rsi60->f0;
        rdi61 = reinterpret_cast<struct s3*>(&rdi61->f4);
        rsi60 = reinterpret_cast<struct s17*>(&rsi60->f4);
        *reinterpret_cast<int32_t*>(&rcx62) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx62) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi61->f0 = rsi60->f0;
            rdi63 = reinterpret_cast<struct s18*>(&rdi61->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, xmm1");
            rdi63->f0 = rsi60->f4;
            rdi64 = reinterpret_cast<struct s19*>(&rdi63->f4);
            rsi65 = reinterpret_cast<struct s64*>(rbx66 + (rcx62 | 1) * 0xfa0);
            rdi64->f0 = rsi65->f0;
            rdi67 = reinterpret_cast<struct s21*>(&rdi64->f4);
            rsi68 = reinterpret_cast<struct s65*>(&rsi65->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm2");
            rdi67->f0 = rsi68->f0;
            rdi61 = reinterpret_cast<struct s3*>(&rdi67->f4);
            rsi60 = reinterpret_cast<struct s17*>(&rsi68->f4);
            rcx62 = rcx62 + 2;
        } while (rcx62 != 0x7d0);
        ++rax36;
    } while (rax36 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rax69) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax69) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(r14_10) >= reinterpret_cast<uint64_t>(&rdi61->f3e80) || reinterpret_cast<uint64_t>(rdi61) >= reinterpret_cast<uint64_t>(&r14_10->f3e80)) {
        do {
            __asm__("movupd xmm0, [r14+rax*8]");
            __asm__("movupd xmm1, [r14+rax*8+0x10]");
            __asm__("movupd xmm2, [rdi+rax*8]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rax*8+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rax*8], xmm2");
            __asm__("movupd [r14+rax*8+0x10], xmm0");
            __asm__("movupd xmm0, [r14+rcx]");
            __asm__("movupd xmm1, [r14+rcx+0x10]");
            __asm__("movupd xmm2, [rdi+rcx]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rcx+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rcx], xmm2");
            __asm__("movupd [r14+rcx+0x10], xmm0");
            rax69 = rax69 + 8;
        } while (rax69 != 0x7d0);
    } else {
        do {
            rdi61->f0 = rsi60->f0;
            rdi70 = reinterpret_cast<struct s18*>(&rdi61->f4);
            rsi71 = reinterpret_cast<struct s0*>(&rsi60->f4);
            __asm__("addsd xmm0, [rdi+rax*8]");
            rdi70->f0 = rsi71->f0;
            rdi72 = reinterpret_cast<struct s19*>(&rdi70->f4);
            rsi73 = reinterpret_cast<struct s17*>(&rsi71->f4);
            rdi72->f0 = rsi73->f0;
            rdi74 = reinterpret_cast<struct s21*>(&rdi72->f4);
            rsi75 = reinterpret_cast<struct s0*>(&rsi73->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi74->f0 = rsi75->f0;
            rdi76 = reinterpret_cast<struct s3*>(&rdi74->f4);
            rsi77 = reinterpret_cast<struct s17*>(&rsi75->f4);
            rdi76->f0 = rsi77->f0;
            rdi78 = reinterpret_cast<struct s18*>(&rdi76->f4);
            rsi79 = reinterpret_cast<struct s0*>(&rsi77->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi78->f0 = rsi79->f0;
            rdi80 = reinterpret_cast<struct s19*>(&rdi78->f4);
            rsi81 = reinterpret_cast<struct s17*>(&rsi79->f4);
            rdi80->f0 = rsi81->f0;
            rdi82 = reinterpret_cast<struct s21*>(&rdi80->f4);
            rsi83 = reinterpret_cast<struct s0*>(&rsi81->f4);
            __asm__("addsd xmm0, [rdi+rcx]");
            rdi82->f0 = rsi83->f0;
            rdi61 = reinterpret_cast<struct s3*>(&rdi82->f4);
            rsi60 = reinterpret_cast<struct s17*>(&rsi83->f4);
            rax69 = rax69 + 4;
        } while (rax69 != 0x7d0);
    }
    *reinterpret_cast<int32_t*>(&rax84) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax84) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi61->f0 = rsi60->f0;
    rdi85 = reinterpret_cast<struct s18*>(&rdi61->f4);
    rsi86 = reinterpret_cast<struct s0*>(&rsi60->f4);
    do {
        rdi85->f0 = rsi86->f0;
        rdi85 = reinterpret_cast<struct s18*>(&rdi85->f4);
        rsi86 = reinterpret_cast<struct s0*>(&rsi86->f4);
        *reinterpret_cast<int32_t*>(&rcx87) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx87 + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx88 = rbx89 + rax84 * 0xfa0;
            rdi85->f0 = rsi86->f0;
            rdi90 = reinterpret_cast<struct s19*>(&rdi85->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            rsi91 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx87) * 8);
            __asm__("addsd xmm2, xmm1");
            rdi90->f0 = *rsi91;
            rdi92 = reinterpret_cast<struct s21*>(&rdi90->f4);
            rsi93 = reinterpret_cast<struct s66*>(reinterpret_cast<uint64_t>(rsi91 + 1) | 8);
            rdi92->f0 = rsi93->f0;
            rdi94 = reinterpret_cast<struct s3*>(&rdi92->f4);
            rsi95 = reinterpret_cast<struct s67*>(&rsi93->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r14+rsi]");
            __asm__("addsd xmm1, xmm2");
            rdi94->f0 = rsi95->f0;
            rdi85 = reinterpret_cast<struct s18*>(&rdi94->f4);
            rsi86 = reinterpret_cast<struct s0*>(&rsi95->f4);
            rcx87 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx87) + 2);
        } while (!reinterpret_cast<int1_t>(rcx87 == 0x7d0));
        ++rax84;
    } while (rax84 != 0x7d0);
    if (v96 >= 43 && **v97 == fputc) {
        rax98 = gc6a;
        v99 = *rax98;
        fun_c87(0xc78, 22, 1);
        rsi100 = reinterpret_cast<int32_t*>(0xc8e);
        rdi101 = v99;
        fun_ca0();
        *reinterpret_cast<int32_t*>(&rcx102) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx102) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            eax103 = *reinterpret_cast<int32_t*>(&rcx102) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax103)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi101) = 10;
                *reinterpret_cast<int32_t*>(&rdi101 + 4) = reinterpret_cast<int32_t>(fputc);
                rsi100 = v99;
                fun_d00();
            }
            *rdi101 = *rsi100;
            rdi101 = v99;
            rsi100 = reinterpret_cast<int32_t*>(0xcc1);
            fun_cc8();
            ++rcx102;
        } while (rcx102 != 0x7d0);
        fun_d20(v99, 0xd0e, 0xd15);
        *reinterpret_cast<int32_t*>(&rsi86) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi86) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx88) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx88) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx87 = v99;
        fun_d3a(0xd27, 22, 1, rcx87);
    }
    fun_c0c(rbx104, rsi86, rdx88, rcx87);
    fun_c16(v105, rsi86, rdx88, rcx87);
    fun_c1e(r15_106, rsi86, rdx88, rcx87);
    fun_c28(v3, rsi86, rdx88, rcx87);
    fun_c30(r13_6, rsi86, rdx88, rcx87);
    fun_c38(rbp8, rsi86, rdx88, rcx87);
    fun_c40(r14_10, rsi86, rdx88, rcx87);
    fun_c48(r12_12, rsi86, rdx88, rcx87);
    fun_c52(v32, rsi86, rdx88, rcx87);
    goto v107;
}

void fun_c38(int64_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, ...) {
    struct s2* r14_5;
    int64_t r12_6;
    struct s3* v7;
    int64_t v8;

    fun_c40(r14_5, rsi, rdx, rcx, r14_5, rsi, rdx, rcx);
    fun_c48(r12_6, rsi, rdx, rcx, r12_6, rsi, rdx, rcx);
    fun_c52(v7, rsi, rdx, rcx, v7, rsi, rdx, rcx);
    goto v8;
}

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
    int32_t f1;
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

struct s76 {
    int32_t f0;
    int32_t f4;
};

struct s77 {
    int32_t f0;
    int32_t f4;
};

struct s78 {
    signed char[16000] pad16000;
    int32_t f3e80;
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

struct s1* fun_5e2(int64_t rdi, int64_t rsi) {
    struct s1* r13_3;
    struct s1* rax4;
    int64_t* rax5;
    int64_t* rbp6;
    struct s2* rax7;
    struct s2* r14_8;
    int64_t rax9;
    int64_t r12_10;
    struct s3* rax11;
    void* r9_12;
    void* v13;
    void* r11_14;
    void* v15;
    struct s68* rdi16;
    struct s69* rsi17;
    struct s70* rdi18;
    struct s71* rsi19;
    struct s68* rcx20;
    struct s72* rdi21;
    struct s73* rsi22;
    struct s74* rdi23;
    struct s75* rsi24;
    struct s76* rdi25;
    struct s77* rsi26;
    int32_t* rdi27;
    void* rdi28;
    int64_t rdx29;
    int32_t* rbx30;
    struct s3* v31;
    struct s15* v32;
    struct s78* r15_33;
    struct s15* v34;
    int64_t rax35;
    struct s0* rsi36;
    void* rdi37;
    struct s1* r11_38;
    void* rbx39;
    struct s15* rdi40;
    int32_t* rbx41;
    struct s1* r15_42;
    int64_t r8_43;
    void* v44;
    void* v45;
    void* v46;
    void* v47;
    struct s16* rdi48;
    struct s17* rsi49;
    struct s15* rdi50;
    struct s0* rsi51;
    struct s16* rdi52;
    struct s17* rsi53;
    struct s15* rdi54;
    struct s0* rsi55;
    struct s16* rdi56;
    struct s17* rsi57;
    struct s16* rdi58;
    struct s17* rsi59;
    int64_t r8_60;
    struct s17* rsi61;
    struct s3* rdi62;
    uint64_t rcx63;
    struct s18* rdi64;
    struct s19* rdi65;
    struct s79* rsi66;
    int32_t* rbx67;
    struct s21* rdi68;
    struct s80* rsi69;
    int64_t rax70;
    struct s18* rdi71;
    struct s0* rsi72;
    struct s19* rdi73;
    struct s17* rsi74;
    struct s21* rdi75;
    struct s0* rsi76;
    struct s3* rdi77;
    struct s17* rsi78;
    struct s18* rdi79;
    struct s0* rsi80;
    struct s19* rdi81;
    struct s17* rsi82;
    struct s21* rdi83;
    struct s0* rsi84;
    int64_t rax85;
    struct s18* rdi86;
    struct s0* rsi87;
    int32_t* rcx88;
    int32_t* rdx89;
    int32_t* rbx90;
    struct s19* rdi91;
    int32_t* rsi92;
    struct s21* rdi93;
    struct s81* rsi94;
    struct s3* rdi95;
    struct s82* rsi96;
    int32_t v97;
    signed char** v98;
    int32_t** rax99;
    int32_t* v100;
    int32_t* rsi101;
    int32_t* rdi102;
    int64_t rcx103;
    int32_t eax104;
    int32_t* rbx105;
    void* v106;
    struct s1* r15_107;
    void* v108;
    int64_t v109;

    r13_3 = rax4;
    rax5 = fun_5f4(0x7d0, 8);
    rbp6 = rax5;
    rax7 = fun_606(0x7d0, 8);
    r14_8 = rax7;
    rax9 = fun_618(0x7d0, 8);
    r12_10 = rax9;
    rax11 = fun_62a(0x7d0, 8);
    r9_12 = v13;
    r11_14 = v15;
    fputc = LCPI1_1;
    g4 = gc;
    LCPI1_1 = LCPI1_7;
    gc = g14;
    LCPI1_7 = LCPI1_3;
    g14 = g1c;
    rdi16 = reinterpret_cast<struct s68*>(24);
    rsi17 = reinterpret_cast<struct s69*>(32);
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("movapd xmm9, [rip+0x0]");
    __asm__("movdqa xmm10, [rip+0x0]");
    do {
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, edi");
        rdi16->f0 = rsi17->f0;
        rdi18 = reinterpret_cast<struct s70*>(&rdi16->f4);
        rsi19 = reinterpret_cast<struct s71*>(&rsi17->f4);
        rcx20 = reinterpret_cast<struct s68*>(reinterpret_cast<int64_t>(rdi18) + 1);
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, ecx");
        __asm__("divsd xmm11, xmm0");
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm1");
        rdi18->f0 = rsi19->f0;
        rdi21 = reinterpret_cast<struct s72*>(&rdi18->f1);
        rsi22 = reinterpret_cast<struct s73*>(&rsi19->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm2");
        rdi21->f0 = rsi22->f0;
        rdi23 = reinterpret_cast<struct s74*>(&rdi21->f4);
        rsi24 = reinterpret_cast<struct s75*>(&rsi22->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("divsd xmm12, xmm3");
        rdi23->f0 = rsi24->f0;
        rdi25 = reinterpret_cast<struct s76*>(&rdi23->f4);
        rsi26 = reinterpret_cast<struct s77*>(&rsi24->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm4");
        rdi25->f0 = rsi26->f0;
        rdi27 = &rdi25->f4;
        __asm__("divsd xmm11, xmm5");
        *rdi27 = rsi26->f4;
        rdi28 = reinterpret_cast<void*>(rdi27 + 1);
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r14_8) + reinterpret_cast<int64_t>(rdi28) * 8) = reinterpret_cast<int64_t>(fputc);
        rbp6[static_cast<int64_t>(rdi28)] = reinterpret_cast<int64_t>(fputc);
        __asm__("movd xmm11, rdi");
        __asm__("pshufd xmm11, xmm11, 0x44");
        *reinterpret_cast<int32_t*>(&rdx29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm12, xmm6");
        do {
            __asm__("movdqa xmm13, xmm12");
            __asm__("psrlq xmm13, 0x20");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("movdqa xmm14, xmm11");
            __asm__("psrlq xmm14, 0x20");
            __asm__("pmuludq xmm14, xmm12");
            __asm__("paddq xmm14, xmm13");
            __asm__("movdqa xmm13, xmm12");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("psllq xmm14, 0x20");
            __asm__("paddq xmm13, xmm14");
            __asm__("pshufd xmm14, xmm13, 0xe8");
            __asm__("pshufd xmm15, xmm13, 0xee");
            __asm__("pmuludq xmm13, xmm7");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("pmuludq xmm15, xmm7");
            __asm__("pshufd xmm15, xmm15, 0xed");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psrld xmm13, 0x7");
            __asm__("pshufd xmm15, xmm13, 0xf5");
            __asm__("pmuludq xmm13, xmm8");
            __asm__("pmuludq xmm15, xmm8");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psubd xmm14, xmm13");
            __asm__("cvtdq2pd xmm13, xmm14");
            __asm__("divpd xmm13, xmm9");
            rsi17 = reinterpret_cast<struct s69*>(rbx30 + reinterpret_cast<int64_t>(rdi28) * 0xfa0);
            __asm__("movupd [rsi+rdx*8], xmm13");
            rdx29 = rdx29 + 2;
            __asm__("paddq xmm12, xmm10");
        } while (rdx29 != 0x7d0);
        rdi16 = rcx20;
    } while (!reinterpret_cast<int1_t>(rcx20 == 0x7d0));
    v31 = rax11;
    v32 = reinterpret_cast<struct s15*>(&r15_33->f3e80);
    v34 = reinterpret_cast<struct s15*>(&r13_3->f3e80);
    *reinterpret_cast<int32_t*>(&rax35) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax35) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi36) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi36) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi36) * 0x3e80);
        r11_38 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbx39) + reinterpret_cast<uint64_t>(rdi37) + 0x3e80);
        rdi40 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rdi37) + reinterpret_cast<int64_t>(rbx41));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi40) < reinterpret_cast<int64_t>(r11_14) + reinterpret_cast<uint64_t>(rsi36) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r11_14) + reinterpret_cast<uint64_t>(rsi36) * 8 < reinterpret_cast<uint64_t>(r11_38)))) == fputc) || (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi40) < reinterpret_cast<uint64_t>(v32))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r15_42) < reinterpret_cast<uint64_t>(r11_38)))) == fputc) || !reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi40) < reinterpret_cast<int64_t>(r9_12) + reinterpret_cast<uint64_t>(rsi36) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r9_12) + reinterpret_cast<uint64_t>(rsi36) * 8 < reinterpret_cast<uint64_t>(r11_38)))) == fputc))) {
            *reinterpret_cast<int32_t*>(&r8_43) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_43) + 4) = reinterpret_cast<int32_t>(fputc);
            r11_14 = v44;
            r9_12 = v45;
            goto addr_970_48;
        }
        *reinterpret_cast<int32_t*>(&r8_43) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_43) + 4) = reinterpret_cast<int32_t>(fputc);
        r11_14 = v46;
        r9_12 = v47;
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi40) < reinterpret_cast<uint64_t>(v34))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_3) < reinterpret_cast<uint64_t>(r11_38)))) == fputc)) {
            do {
                addr_970_48:
                rdi40->f0 = rsi36->f0;
                rdi48 = reinterpret_cast<struct s16*>(&rdi40->f4);
                rsi49 = reinterpret_cast<struct s17*>(&rsi36->f4);
                __asm__("mulsd xmm0, [r15+r8*8]");
                __asm__("addsd xmm0, [rdi+r8*8]");
                rdi48->f0 = rsi49->f0;
                rdi50 = reinterpret_cast<struct s15*>(&rdi48->f4);
                rsi51 = reinterpret_cast<struct s0*>(&rsi49->f4);
                __asm__("mulsd xmm1, [r13+r8*8+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi50->f0 = rsi51->f0;
                rdi52 = reinterpret_cast<struct s16*>(&rdi50->f4);
                rsi53 = reinterpret_cast<struct s17*>(&rsi51->f4);
                rdi52->f0 = rsi53->f0;
                rdi54 = reinterpret_cast<struct s15*>(&rdi52->f4);
                rsi55 = reinterpret_cast<struct s0*>(&rsi53->f4);
                __asm__("mulsd xmm0, [r15+rcx]");
                __asm__("addsd xmm0, [rcx+rdi]");
                rdi54->f0 = rsi55->f0;
                rdi56 = reinterpret_cast<struct s16*>(&rdi54->f4);
                rsi57 = reinterpret_cast<struct s17*>(&rsi55->f4);
                __asm__("mulsd xmm1, [r13+rcx+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi56->f0 = rsi57->f0;
                rdi40 = reinterpret_cast<struct s15*>(&rdi56->f4);
                rsi36 = reinterpret_cast<struct s0*>(&rsi57->f4);
                r8_43 = r8_43 + 2;
            } while (r8_43 != 0x7d0);
        } else {
            rdi40->f0 = rsi36->f0;
            rdi58 = reinterpret_cast<struct s16*>(&rdi40->f4);
            rsi59 = reinterpret_cast<struct s17*>(&rsi36->f4);
            __asm__("unpcklpd xmm0, xmm0");
            rdi58->f0 = rsi59->f0;
            rdi40 = reinterpret_cast<struct s15*>(&rdi58->f4);
            rsi36 = reinterpret_cast<struct s0*>(&rsi59->f4);
            __asm__("unpcklpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&r8_60) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_60) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm2, [rdi+r8*8]");
                __asm__("movupd xmm3, [rdi+r8*8+0x10]");
                __asm__("movupd xmm4, [r15+r8*8]");
                __asm__("movupd xmm5, [r15+r8*8+0x10]");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("mulpd xmm5, xmm0");
                __asm__("addpd xmm5, xmm3");
                __asm__("movupd xmm2, [r13+r8*8+0x0]");
                __asm__("movupd xmm3, [r13+r8*8+0x10]");
                __asm__("mulpd xmm2, xmm1");
                __asm__("addpd xmm2, xmm4");
                __asm__("mulpd xmm3, xmm1");
                __asm__("addpd xmm3, xmm5");
                __asm__("movupd [rdi+r8*8], xmm2");
                __asm__("movupd [rdi+r8*8+0x10], xmm3");
                r8_60 = r8_60 + 4;
            } while (r8_60 != 0x7d0);
            continue;
        }
        rsi36 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi36) + 1);
    } while (rsi36 != 0x7d0);
    rdi40->f0 = rsi36->f0;
    rsi61 = reinterpret_cast<struct s17*>(&rsi36->f4);
    rdi62 = v31;
    do {
        rdi62->f0 = rsi61->f0;
        rdi62 = reinterpret_cast<struct s3*>(&rdi62->f4);
        rsi61 = reinterpret_cast<struct s17*>(&rsi61->f4);
        *reinterpret_cast<int32_t*>(&rcx63) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx63) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi62->f0 = rsi61->f0;
            rdi64 = reinterpret_cast<struct s18*>(&rdi62->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, xmm1");
            rdi64->f0 = rsi61->f4;
            rdi65 = reinterpret_cast<struct s19*>(&rdi64->f4);
            rsi66 = reinterpret_cast<struct s79*>(rbx67 + (rcx63 | 1) * 0xfa0);
            rdi65->f0 = rsi66->f0;
            rdi68 = reinterpret_cast<struct s21*>(&rdi65->f4);
            rsi69 = reinterpret_cast<struct s80*>(&rsi66->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm2");
            rdi68->f0 = rsi69->f0;
            rdi62 = reinterpret_cast<struct s3*>(&rdi68->f4);
            rsi61 = reinterpret_cast<struct s17*>(&rsi69->f4);
            rcx63 = rcx63 + 2;
        } while (rcx63 != 0x7d0);
        ++rax35;
    } while (rax35 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rax70) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax70) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(r14_8) >= reinterpret_cast<uint64_t>(&rdi62->f3e80) || reinterpret_cast<uint64_t>(rdi62) >= reinterpret_cast<uint64_t>(&r14_8->f3e80)) {
        do {
            __asm__("movupd xmm0, [r14+rax*8]");
            __asm__("movupd xmm1, [r14+rax*8+0x10]");
            __asm__("movupd xmm2, [rdi+rax*8]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rax*8+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rax*8], xmm2");
            __asm__("movupd [r14+rax*8+0x10], xmm0");
            __asm__("movupd xmm0, [r14+rcx]");
            __asm__("movupd xmm1, [r14+rcx+0x10]");
            __asm__("movupd xmm2, [rdi+rcx]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rcx+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rcx], xmm2");
            __asm__("movupd [r14+rcx+0x10], xmm0");
            rax70 = rax70 + 8;
        } while (rax70 != 0x7d0);
    } else {
        do {
            rdi62->f0 = rsi61->f0;
            rdi71 = reinterpret_cast<struct s18*>(&rdi62->f4);
            rsi72 = reinterpret_cast<struct s0*>(&rsi61->f4);
            __asm__("addsd xmm0, [rdi+rax*8]");
            rdi71->f0 = rsi72->f0;
            rdi73 = reinterpret_cast<struct s19*>(&rdi71->f4);
            rsi74 = reinterpret_cast<struct s17*>(&rsi72->f4);
            rdi73->f0 = rsi74->f0;
            rdi75 = reinterpret_cast<struct s21*>(&rdi73->f4);
            rsi76 = reinterpret_cast<struct s0*>(&rsi74->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi75->f0 = rsi76->f0;
            rdi77 = reinterpret_cast<struct s3*>(&rdi75->f4);
            rsi78 = reinterpret_cast<struct s17*>(&rsi76->f4);
            rdi77->f0 = rsi78->f0;
            rdi79 = reinterpret_cast<struct s18*>(&rdi77->f4);
            rsi80 = reinterpret_cast<struct s0*>(&rsi78->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi79->f0 = rsi80->f0;
            rdi81 = reinterpret_cast<struct s19*>(&rdi79->f4);
            rsi82 = reinterpret_cast<struct s17*>(&rsi80->f4);
            rdi81->f0 = rsi82->f0;
            rdi83 = reinterpret_cast<struct s21*>(&rdi81->f4);
            rsi84 = reinterpret_cast<struct s0*>(&rsi82->f4);
            __asm__("addsd xmm0, [rdi+rcx]");
            rdi83->f0 = rsi84->f0;
            rdi62 = reinterpret_cast<struct s3*>(&rdi83->f4);
            rsi61 = reinterpret_cast<struct s17*>(&rsi84->f4);
            rax70 = rax70 + 4;
        } while (rax70 != 0x7d0);
    }
    *reinterpret_cast<int32_t*>(&rax85) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax85) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi62->f0 = rsi61->f0;
    rdi86 = reinterpret_cast<struct s18*>(&rdi62->f4);
    rsi87 = reinterpret_cast<struct s0*>(&rsi61->f4);
    do {
        rdi86->f0 = rsi87->f0;
        rdi86 = reinterpret_cast<struct s18*>(&rdi86->f4);
        rsi87 = reinterpret_cast<struct s0*>(&rsi87->f4);
        *reinterpret_cast<int32_t*>(&rcx88) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx88 + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx89 = rbx90 + rax85 * 0xfa0;
            rdi86->f0 = rsi87->f0;
            rdi91 = reinterpret_cast<struct s19*>(&rdi86->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            rsi92 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx88) * 8);
            __asm__("addsd xmm2, xmm1");
            rdi91->f0 = *rsi92;
            rdi93 = reinterpret_cast<struct s21*>(&rdi91->f4);
            rsi94 = reinterpret_cast<struct s81*>(reinterpret_cast<uint64_t>(rsi92 + 1) | 8);
            rdi93->f0 = rsi94->f0;
            rdi95 = reinterpret_cast<struct s3*>(&rdi93->f4);
            rsi96 = reinterpret_cast<struct s82*>(&rsi94->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r14+rsi]");
            __asm__("addsd xmm1, xmm2");
            rdi95->f0 = rsi96->f0;
            rdi86 = reinterpret_cast<struct s18*>(&rdi95->f4);
            rsi87 = reinterpret_cast<struct s0*>(&rsi96->f4);
            rcx88 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx88) + 2);
        } while (!reinterpret_cast<int1_t>(rcx88 == 0x7d0));
        ++rax85;
    } while (rax85 != 0x7d0);
    if (v97 >= 43 && **v98 == fputc) {
        rax99 = gc6a;
        v100 = *rax99;
        fun_c87(0xc78, 22, 1);
        rsi101 = reinterpret_cast<int32_t*>(0xc8e);
        rdi102 = v100;
        fun_ca0();
        *reinterpret_cast<int32_t*>(&rcx103) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx103) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            eax104 = *reinterpret_cast<int32_t*>(&rcx103) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax104)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi102) = 10;
                *reinterpret_cast<int32_t*>(&rdi102 + 4) = reinterpret_cast<int32_t>(fputc);
                rsi101 = v100;
                fun_d00();
            }
            *rdi102 = *rsi101;
            rdi102 = v100;
            rsi101 = reinterpret_cast<int32_t*>(0xcc1);
            fun_cc8();
            ++rcx103;
        } while (rcx103 != 0x7d0);
        fun_d20(v100, 0xd0e, 0xd15);
        *reinterpret_cast<int32_t*>(&rsi87) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi87) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx89) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx89) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx88 = v100;
        fun_d3a(0xd27, 22, 1, rcx88);
    }
    fun_c0c(rbx105, rsi87, rdx89, rcx88);
    fun_c16(v106, rsi87, rdx89, rcx88);
    fun_c1e(r15_107, rsi87, rdx89, rcx88);
    fun_c28(v108, rsi87, rdx89, rcx88);
    fun_c30(r13_3, rsi87, rdx89, rcx88);
    fun_c38(rbp6, rsi87, rdx89, rcx88);
    fun_c40(r14_8, rsi87, rdx89, rcx88);
    fun_c48(r12_10, rsi87, rdx89, rcx88);
    fun_c52(v31, rsi87, rdx89, rcx88);
    goto v109;
}

void fun_c40(struct s2* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, ...) {
    int64_t r12_5;
    struct s3* v6;
    int64_t v7;

    fun_c48(r12_5, rsi, rdx, rcx, r12_5, rsi, rdx, rcx);
    fun_c52(v6, rsi, rdx, rcx, v6, rsi, rdx, rcx);
    goto v7;
}

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
    int32_t f1;
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

struct s88 {
    int32_t f0;
    int32_t f4;
};

struct s89 {
    int32_t f0;
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
    signed char[16000] pad16000;
    int32_t f3e80;
};

struct s95 {
    signed char[16000] pad16000;
    int32_t f3e80;
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

struct s100 {
    int32_t f0;
    int32_t f4;
};

int64_t* fun_5f4(int64_t rdi, int64_t rsi) {
    int64_t* rbp3;
    int64_t* rax4;
    struct s2* rax5;
    struct s2* r14_6;
    int64_t rax7;
    int64_t r12_8;
    struct s3* rax9;
    void* r9_10;
    void* v11;
    void* r11_12;
    void* v13;
    struct s83* rdi14;
    struct s84* rsi15;
    struct s85* rdi16;
    struct s86* rsi17;
    struct s83* rcx18;
    struct s87* rdi19;
    struct s88* rsi20;
    struct s89* rdi21;
    struct s90* rsi22;
    struct s91* rdi23;
    struct s92* rsi24;
    int32_t* rdi25;
    void* rdi26;
    int64_t rdx27;
    int32_t* rbx28;
    struct s3* v29;
    struct s93* v30;
    struct s94* r15_31;
    struct s93* v32;
    struct s95* r13_33;
    int64_t rax34;
    struct s0* rsi35;
    void* rdi36;
    void* r11_37;
    void* rbx38;
    struct s93* rdi39;
    int32_t* rbx40;
    void* r15_41;
    int64_t r8_42;
    void* v43;
    void* v44;
    void* v45;
    void* v46;
    void* r13_47;
    struct s96* rdi48;
    struct s17* rsi49;
    struct s93* rdi50;
    struct s0* rsi51;
    struct s96* rdi52;
    struct s17* rsi53;
    struct s93* rdi54;
    struct s0* rsi55;
    struct s96* rdi56;
    struct s17* rsi57;
    struct s96* rdi58;
    struct s17* rsi59;
    int64_t r8_60;
    struct s17* rsi61;
    struct s3* rdi62;
    uint64_t rcx63;
    struct s18* rdi64;
    struct s19* rdi65;
    struct s97* rsi66;
    int32_t* rbx67;
    struct s21* rdi68;
    struct s98* rsi69;
    int64_t rax70;
    struct s18* rdi71;
    struct s0* rsi72;
    struct s19* rdi73;
    struct s17* rsi74;
    struct s21* rdi75;
    struct s0* rsi76;
    struct s3* rdi77;
    struct s17* rsi78;
    struct s18* rdi79;
    struct s0* rsi80;
    struct s19* rdi81;
    struct s17* rsi82;
    struct s21* rdi83;
    struct s0* rsi84;
    int64_t rax85;
    struct s18* rdi86;
    struct s0* rsi87;
    int32_t* rcx88;
    int32_t* rdx89;
    int32_t* rbx90;
    struct s19* rdi91;
    int32_t* rsi92;
    struct s21* rdi93;
    struct s99* rsi94;
    struct s3* rdi95;
    struct s100* rsi96;
    int32_t v97;
    signed char** v98;
    int32_t** rax99;
    int32_t* v100;
    int32_t* rsi101;
    int32_t* rdi102;
    int64_t rcx103;
    int32_t eax104;
    int32_t* rbx105;
    void* v106;
    struct s1* r15_107;
    void* v108;
    struct s1* r13_109;
    int64_t v110;

    rbp3 = rax4;
    rax5 = fun_606(0x7d0, 8);
    r14_6 = rax5;
    rax7 = fun_618(0x7d0, 8);
    r12_8 = rax7;
    rax9 = fun_62a(0x7d0, 8);
    r9_10 = v11;
    r11_12 = v13;
    fputc = LCPI1_1;
    g4 = gc;
    LCPI1_1 = LCPI1_7;
    gc = g14;
    LCPI1_7 = LCPI1_3;
    g14 = g1c;
    rdi14 = reinterpret_cast<struct s83*>(24);
    rsi15 = reinterpret_cast<struct s84*>(32);
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("movapd xmm9, [rip+0x0]");
    __asm__("movdqa xmm10, [rip+0x0]");
    do {
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, edi");
        rdi14->f0 = rsi15->f0;
        rdi16 = reinterpret_cast<struct s85*>(&rdi14->f4);
        rsi17 = reinterpret_cast<struct s86*>(&rsi15->f4);
        rcx18 = reinterpret_cast<struct s83*>(reinterpret_cast<int64_t>(rdi16) + 1);
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, ecx");
        __asm__("divsd xmm11, xmm0");
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm1");
        rdi16->f0 = rsi17->f0;
        rdi19 = reinterpret_cast<struct s87*>(&rdi16->f1);
        rsi20 = reinterpret_cast<struct s88*>(&rsi17->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm2");
        rdi19->f0 = rsi20->f0;
        rdi21 = reinterpret_cast<struct s89*>(&rdi19->f4);
        rsi22 = reinterpret_cast<struct s90*>(&rsi20->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("divsd xmm12, xmm3");
        rdi21->f0 = rsi22->f0;
        rdi23 = reinterpret_cast<struct s91*>(&rdi21->f4);
        rsi24 = reinterpret_cast<struct s92*>(&rsi22->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm4");
        rdi23->f0 = rsi24->f0;
        rdi25 = &rdi23->f4;
        __asm__("divsd xmm11, xmm5");
        *rdi25 = rsi24->f4;
        rdi26 = reinterpret_cast<void*>(rdi25 + 1);
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r14_6) + reinterpret_cast<int64_t>(rdi26) * 8) = reinterpret_cast<int64_t>(fputc);
        rbp3[static_cast<int64_t>(rdi26)] = reinterpret_cast<int64_t>(fputc);
        __asm__("movd xmm11, rdi");
        __asm__("pshufd xmm11, xmm11, 0x44");
        *reinterpret_cast<int32_t*>(&rdx27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm12, xmm6");
        do {
            __asm__("movdqa xmm13, xmm12");
            __asm__("psrlq xmm13, 0x20");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("movdqa xmm14, xmm11");
            __asm__("psrlq xmm14, 0x20");
            __asm__("pmuludq xmm14, xmm12");
            __asm__("paddq xmm14, xmm13");
            __asm__("movdqa xmm13, xmm12");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("psllq xmm14, 0x20");
            __asm__("paddq xmm13, xmm14");
            __asm__("pshufd xmm14, xmm13, 0xe8");
            __asm__("pshufd xmm15, xmm13, 0xee");
            __asm__("pmuludq xmm13, xmm7");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("pmuludq xmm15, xmm7");
            __asm__("pshufd xmm15, xmm15, 0xed");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psrld xmm13, 0x7");
            __asm__("pshufd xmm15, xmm13, 0xf5");
            __asm__("pmuludq xmm13, xmm8");
            __asm__("pmuludq xmm15, xmm8");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psubd xmm14, xmm13");
            __asm__("cvtdq2pd xmm13, xmm14");
            __asm__("divpd xmm13, xmm9");
            rsi15 = reinterpret_cast<struct s84*>(rbx28 + reinterpret_cast<int64_t>(rdi26) * 0xfa0);
            __asm__("movupd [rsi+rdx*8], xmm13");
            rdx27 = rdx27 + 2;
            __asm__("paddq xmm12, xmm10");
        } while (rdx27 != 0x7d0);
        rdi14 = rcx18;
    } while (!reinterpret_cast<int1_t>(rcx18 == 0x7d0));
    v29 = rax9;
    v30 = reinterpret_cast<struct s93*>(&r15_31->f3e80);
    v32 = reinterpret_cast<struct s93*>(&r13_33->f3e80);
    *reinterpret_cast<int32_t*>(&rax34) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax34) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi35) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi35) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi36 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi35) * 0x3e80);
        r11_37 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx38) + reinterpret_cast<uint64_t>(rdi36) + 0x3e80);
        rdi39 = reinterpret_cast<struct s93*>(reinterpret_cast<uint64_t>(rdi36) + reinterpret_cast<int64_t>(rbx40));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi39) < reinterpret_cast<int64_t>(r11_12) + reinterpret_cast<uint64_t>(rsi35) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r11_12) + reinterpret_cast<uint64_t>(rsi35) * 8 < reinterpret_cast<uint64_t>(r11_37)))) == fputc) || (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi39) < reinterpret_cast<uint64_t>(v30))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r15_41) < reinterpret_cast<uint64_t>(r11_37)))) == fputc) || !reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi39) < reinterpret_cast<int64_t>(r9_10) + reinterpret_cast<uint64_t>(rsi35) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r9_10) + reinterpret_cast<uint64_t>(rsi35) * 8 < reinterpret_cast<uint64_t>(r11_37)))) == fputc))) {
            *reinterpret_cast<int32_t*>(&r8_42) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_42) + 4) = reinterpret_cast<int32_t>(fputc);
            r11_12 = v43;
            r9_10 = v44;
            goto addr_970_47;
        }
        *reinterpret_cast<int32_t*>(&r8_42) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_42) + 4) = reinterpret_cast<int32_t>(fputc);
        r11_12 = v45;
        r9_10 = v46;
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi39) < reinterpret_cast<uint64_t>(v32))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_47) < reinterpret_cast<uint64_t>(r11_37)))) == fputc)) {
            do {
                addr_970_47:
                rdi39->f0 = rsi35->f0;
                rdi48 = reinterpret_cast<struct s96*>(&rdi39->f4);
                rsi49 = reinterpret_cast<struct s17*>(&rsi35->f4);
                __asm__("mulsd xmm0, [r15+r8*8]");
                __asm__("addsd xmm0, [rdi+r8*8]");
                rdi48->f0 = rsi49->f0;
                rdi50 = reinterpret_cast<struct s93*>(&rdi48->f4);
                rsi51 = reinterpret_cast<struct s0*>(&rsi49->f4);
                __asm__("mulsd xmm1, [r13+r8*8+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi50->f0 = rsi51->f0;
                rdi52 = reinterpret_cast<struct s96*>(&rdi50->f4);
                rsi53 = reinterpret_cast<struct s17*>(&rsi51->f4);
                rdi52->f0 = rsi53->f0;
                rdi54 = reinterpret_cast<struct s93*>(&rdi52->f4);
                rsi55 = reinterpret_cast<struct s0*>(&rsi53->f4);
                __asm__("mulsd xmm0, [r15+rcx]");
                __asm__("addsd xmm0, [rcx+rdi]");
                rdi54->f0 = rsi55->f0;
                rdi56 = reinterpret_cast<struct s96*>(&rdi54->f4);
                rsi57 = reinterpret_cast<struct s17*>(&rsi55->f4);
                __asm__("mulsd xmm1, [r13+rcx+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi56->f0 = rsi57->f0;
                rdi39 = reinterpret_cast<struct s93*>(&rdi56->f4);
                rsi35 = reinterpret_cast<struct s0*>(&rsi57->f4);
                r8_42 = r8_42 + 2;
            } while (r8_42 != 0x7d0);
        } else {
            rdi39->f0 = rsi35->f0;
            rdi58 = reinterpret_cast<struct s96*>(&rdi39->f4);
            rsi59 = reinterpret_cast<struct s17*>(&rsi35->f4);
            __asm__("unpcklpd xmm0, xmm0");
            rdi58->f0 = rsi59->f0;
            rdi39 = reinterpret_cast<struct s93*>(&rdi58->f4);
            rsi35 = reinterpret_cast<struct s0*>(&rsi59->f4);
            __asm__("unpcklpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&r8_60) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_60) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm2, [rdi+r8*8]");
                __asm__("movupd xmm3, [rdi+r8*8+0x10]");
                __asm__("movupd xmm4, [r15+r8*8]");
                __asm__("movupd xmm5, [r15+r8*8+0x10]");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("mulpd xmm5, xmm0");
                __asm__("addpd xmm5, xmm3");
                __asm__("movupd xmm2, [r13+r8*8+0x0]");
                __asm__("movupd xmm3, [r13+r8*8+0x10]");
                __asm__("mulpd xmm2, xmm1");
                __asm__("addpd xmm2, xmm4");
                __asm__("mulpd xmm3, xmm1");
                __asm__("addpd xmm3, xmm5");
                __asm__("movupd [rdi+r8*8], xmm2");
                __asm__("movupd [rdi+r8*8+0x10], xmm3");
                r8_60 = r8_60 + 4;
            } while (r8_60 != 0x7d0);
            continue;
        }
        rsi35 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi35) + 1);
    } while (rsi35 != 0x7d0);
    rdi39->f0 = rsi35->f0;
    rsi61 = reinterpret_cast<struct s17*>(&rsi35->f4);
    rdi62 = v29;
    do {
        rdi62->f0 = rsi61->f0;
        rdi62 = reinterpret_cast<struct s3*>(&rdi62->f4);
        rsi61 = reinterpret_cast<struct s17*>(&rsi61->f4);
        *reinterpret_cast<int32_t*>(&rcx63) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx63) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi62->f0 = rsi61->f0;
            rdi64 = reinterpret_cast<struct s18*>(&rdi62->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, xmm1");
            rdi64->f0 = rsi61->f4;
            rdi65 = reinterpret_cast<struct s19*>(&rdi64->f4);
            rsi66 = reinterpret_cast<struct s97*>(rbx67 + (rcx63 | 1) * 0xfa0);
            rdi65->f0 = rsi66->f0;
            rdi68 = reinterpret_cast<struct s21*>(&rdi65->f4);
            rsi69 = reinterpret_cast<struct s98*>(&rsi66->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm2");
            rdi68->f0 = rsi69->f0;
            rdi62 = reinterpret_cast<struct s3*>(&rdi68->f4);
            rsi61 = reinterpret_cast<struct s17*>(&rsi69->f4);
            rcx63 = rcx63 + 2;
        } while (rcx63 != 0x7d0);
        ++rax34;
    } while (rax34 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rax70) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax70) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(r14_6) >= reinterpret_cast<uint64_t>(&rdi62->f3e80) || reinterpret_cast<uint64_t>(rdi62) >= reinterpret_cast<uint64_t>(&r14_6->f3e80)) {
        do {
            __asm__("movupd xmm0, [r14+rax*8]");
            __asm__("movupd xmm1, [r14+rax*8+0x10]");
            __asm__("movupd xmm2, [rdi+rax*8]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rax*8+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rax*8], xmm2");
            __asm__("movupd [r14+rax*8+0x10], xmm0");
            __asm__("movupd xmm0, [r14+rcx]");
            __asm__("movupd xmm1, [r14+rcx+0x10]");
            __asm__("movupd xmm2, [rdi+rcx]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rcx+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rcx], xmm2");
            __asm__("movupd [r14+rcx+0x10], xmm0");
            rax70 = rax70 + 8;
        } while (rax70 != 0x7d0);
    } else {
        do {
            rdi62->f0 = rsi61->f0;
            rdi71 = reinterpret_cast<struct s18*>(&rdi62->f4);
            rsi72 = reinterpret_cast<struct s0*>(&rsi61->f4);
            __asm__("addsd xmm0, [rdi+rax*8]");
            rdi71->f0 = rsi72->f0;
            rdi73 = reinterpret_cast<struct s19*>(&rdi71->f4);
            rsi74 = reinterpret_cast<struct s17*>(&rsi72->f4);
            rdi73->f0 = rsi74->f0;
            rdi75 = reinterpret_cast<struct s21*>(&rdi73->f4);
            rsi76 = reinterpret_cast<struct s0*>(&rsi74->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi75->f0 = rsi76->f0;
            rdi77 = reinterpret_cast<struct s3*>(&rdi75->f4);
            rsi78 = reinterpret_cast<struct s17*>(&rsi76->f4);
            rdi77->f0 = rsi78->f0;
            rdi79 = reinterpret_cast<struct s18*>(&rdi77->f4);
            rsi80 = reinterpret_cast<struct s0*>(&rsi78->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi79->f0 = rsi80->f0;
            rdi81 = reinterpret_cast<struct s19*>(&rdi79->f4);
            rsi82 = reinterpret_cast<struct s17*>(&rsi80->f4);
            rdi81->f0 = rsi82->f0;
            rdi83 = reinterpret_cast<struct s21*>(&rdi81->f4);
            rsi84 = reinterpret_cast<struct s0*>(&rsi82->f4);
            __asm__("addsd xmm0, [rdi+rcx]");
            rdi83->f0 = rsi84->f0;
            rdi62 = reinterpret_cast<struct s3*>(&rdi83->f4);
            rsi61 = reinterpret_cast<struct s17*>(&rsi84->f4);
            rax70 = rax70 + 4;
        } while (rax70 != 0x7d0);
    }
    *reinterpret_cast<int32_t*>(&rax85) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax85) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi62->f0 = rsi61->f0;
    rdi86 = reinterpret_cast<struct s18*>(&rdi62->f4);
    rsi87 = reinterpret_cast<struct s0*>(&rsi61->f4);
    do {
        rdi86->f0 = rsi87->f0;
        rdi86 = reinterpret_cast<struct s18*>(&rdi86->f4);
        rsi87 = reinterpret_cast<struct s0*>(&rsi87->f4);
        *reinterpret_cast<int32_t*>(&rcx88) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx88 + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx89 = rbx90 + rax85 * 0xfa0;
            rdi86->f0 = rsi87->f0;
            rdi91 = reinterpret_cast<struct s19*>(&rdi86->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            rsi92 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx88) * 8);
            __asm__("addsd xmm2, xmm1");
            rdi91->f0 = *rsi92;
            rdi93 = reinterpret_cast<struct s21*>(&rdi91->f4);
            rsi94 = reinterpret_cast<struct s99*>(reinterpret_cast<uint64_t>(rsi92 + 1) | 8);
            rdi93->f0 = rsi94->f0;
            rdi95 = reinterpret_cast<struct s3*>(&rdi93->f4);
            rsi96 = reinterpret_cast<struct s100*>(&rsi94->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r14+rsi]");
            __asm__("addsd xmm1, xmm2");
            rdi95->f0 = rsi96->f0;
            rdi86 = reinterpret_cast<struct s18*>(&rdi95->f4);
            rsi87 = reinterpret_cast<struct s0*>(&rsi96->f4);
            rcx88 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx88) + 2);
        } while (!reinterpret_cast<int1_t>(rcx88 == 0x7d0));
        ++rax85;
    } while (rax85 != 0x7d0);
    if (v97 >= 43 && **v98 == fputc) {
        rax99 = gc6a;
        v100 = *rax99;
        fun_c87(0xc78, 22, 1);
        rsi101 = reinterpret_cast<int32_t*>(0xc8e);
        rdi102 = v100;
        fun_ca0();
        *reinterpret_cast<int32_t*>(&rcx103) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx103) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            eax104 = *reinterpret_cast<int32_t*>(&rcx103) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax104)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi102) = 10;
                *reinterpret_cast<int32_t*>(&rdi102 + 4) = reinterpret_cast<int32_t>(fputc);
                rsi101 = v100;
                fun_d00();
            }
            *rdi102 = *rsi101;
            rdi102 = v100;
            rsi101 = reinterpret_cast<int32_t*>(0xcc1);
            fun_cc8();
            ++rcx103;
        } while (rcx103 != 0x7d0);
        fun_d20(v100, 0xd0e, 0xd15);
        *reinterpret_cast<int32_t*>(&rsi87) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi87) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx89) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx89) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx88 = v100;
        fun_d3a(0xd27, 22, 1, rcx88);
    }
    fun_c0c(rbx105, rsi87, rdx89, rcx88);
    fun_c16(v106, rsi87, rdx89, rcx88);
    fun_c1e(r15_107, rsi87, rdx89, rcx88);
    fun_c28(v108, rsi87, rdx89, rcx88);
    fun_c30(r13_109, rsi87, rdx89, rcx88);
    fun_c38(rbp3, rsi87, rdx89, rcx88);
    fun_c40(r14_6, rsi87, rdx89, rcx88);
    fun_c48(r12_8, rsi87, rdx89, rcx88);
    fun_c52(v29, rsi87, rdx89, rcx88);
    goto v110;
}

void fun_c48(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, ...) {
    struct s3* v5;
    int64_t v6;

    fun_c52(v5, rsi, rdx, rcx, v5, rsi, rdx, rcx);
    goto v6;
}

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
    int32_t f1;
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
    int32_t f4;
};

struct s112 {
    signed char[16000] pad16000;
    int32_t f3e80;
};

struct s113 {
    signed char[16000] pad16000;
    int32_t f3e80;
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

struct s2* fun_606(int64_t rdi, int64_t rsi) {
    struct s2* r14_3;
    struct s2* rax4;
    int64_t rax5;
    int64_t r12_6;
    struct s3* rax7;
    void* r9_8;
    void* v9;
    void* r11_10;
    void* v11;
    struct s101* rdi12;
    struct s102* rsi13;
    struct s103* rdi14;
    struct s104* rsi15;
    struct s101* rcx16;
    struct s105* rdi17;
    struct s106* rsi18;
    struct s107* rdi19;
    struct s108* rsi20;
    struct s109* rdi21;
    struct s110* rsi22;
    int32_t* rdi23;
    void* rdi24;
    int64_t* rbp25;
    int64_t rdx26;
    int32_t* rbx27;
    struct s3* v28;
    struct s111* v29;
    struct s112* r15_30;
    struct s111* v31;
    struct s113* r13_32;
    int64_t rax33;
    struct s0* rsi34;
    void* rdi35;
    void* r11_36;
    void* rbx37;
    struct s111* rdi38;
    int32_t* rbx39;
    void* r15_40;
    int64_t r8_41;
    void* v42;
    void* v43;
    void* v44;
    void* v45;
    void* r13_46;
    struct s114* rdi47;
    struct s17* rsi48;
    struct s111* rdi49;
    struct s0* rsi50;
    struct s114* rdi51;
    struct s17* rsi52;
    struct s111* rdi53;
    struct s0* rsi54;
    struct s114* rdi55;
    struct s17* rsi56;
    struct s114* rdi57;
    struct s17* rsi58;
    int64_t r8_59;
    struct s17* rsi60;
    struct s3* rdi61;
    uint64_t rcx62;
    struct s18* rdi63;
    struct s19* rdi64;
    struct s115* rsi65;
    int32_t* rbx66;
    struct s21* rdi67;
    struct s116* rsi68;
    int64_t rax69;
    struct s18* rdi70;
    struct s0* rsi71;
    struct s19* rdi72;
    struct s17* rsi73;
    struct s21* rdi74;
    struct s0* rsi75;
    struct s3* rdi76;
    struct s17* rsi77;
    struct s18* rdi78;
    struct s0* rsi79;
    struct s19* rdi80;
    struct s17* rsi81;
    struct s21* rdi82;
    struct s0* rsi83;
    int64_t rax84;
    struct s18* rdi85;
    struct s0* rsi86;
    int32_t* rcx87;
    int32_t* rdx88;
    int32_t* rbx89;
    struct s19* rdi90;
    int32_t* rsi91;
    struct s21* rdi92;
    struct s117* rsi93;
    struct s3* rdi94;
    struct s118* rsi95;
    int32_t v96;
    signed char** v97;
    int32_t** rax98;
    int32_t* v99;
    int32_t* rsi100;
    int32_t* rdi101;
    int64_t rcx102;
    int32_t eax103;
    int32_t* rbx104;
    void* v105;
    struct s1* r15_106;
    void* v107;
    struct s1* r13_108;
    int64_t* rbp109;
    int64_t v110;

    r14_3 = rax4;
    rax5 = fun_618(0x7d0, 8);
    r12_6 = rax5;
    rax7 = fun_62a(0x7d0, 8);
    r9_8 = v9;
    r11_10 = v11;
    fputc = LCPI1_1;
    g4 = gc;
    LCPI1_1 = LCPI1_7;
    gc = g14;
    LCPI1_7 = LCPI1_3;
    g14 = g1c;
    rdi12 = reinterpret_cast<struct s101*>(24);
    rsi13 = reinterpret_cast<struct s102*>(32);
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("movapd xmm9, [rip+0x0]");
    __asm__("movdqa xmm10, [rip+0x0]");
    do {
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, edi");
        rdi12->f0 = rsi13->f0;
        rdi14 = reinterpret_cast<struct s103*>(&rdi12->f4);
        rsi15 = reinterpret_cast<struct s104*>(&rsi13->f4);
        rcx16 = reinterpret_cast<struct s101*>(reinterpret_cast<int64_t>(rdi14) + 1);
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, ecx");
        __asm__("divsd xmm11, xmm0");
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm1");
        rdi14->f0 = rsi15->f0;
        rdi17 = reinterpret_cast<struct s105*>(&rdi14->f1);
        rsi18 = reinterpret_cast<struct s106*>(&rsi15->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm2");
        rdi17->f0 = rsi18->f0;
        rdi19 = reinterpret_cast<struct s107*>(&rdi17->f4);
        rsi20 = reinterpret_cast<struct s108*>(&rsi18->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("divsd xmm12, xmm3");
        rdi19->f0 = rsi20->f0;
        rdi21 = reinterpret_cast<struct s109*>(&rdi19->f4);
        rsi22 = reinterpret_cast<struct s110*>(&rsi20->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm4");
        rdi21->f0 = rsi22->f0;
        rdi23 = &rdi21->f4;
        __asm__("divsd xmm11, xmm5");
        *rdi23 = rsi22->f4;
        rdi24 = reinterpret_cast<void*>(rdi23 + 1);
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r14_3) + reinterpret_cast<int64_t>(rdi24) * 8) = reinterpret_cast<int64_t>(fputc);
        rbp25[static_cast<int64_t>(rdi24)] = reinterpret_cast<int64_t>(fputc);
        __asm__("movd xmm11, rdi");
        __asm__("pshufd xmm11, xmm11, 0x44");
        *reinterpret_cast<int32_t*>(&rdx26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm12, xmm6");
        do {
            __asm__("movdqa xmm13, xmm12");
            __asm__("psrlq xmm13, 0x20");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("movdqa xmm14, xmm11");
            __asm__("psrlq xmm14, 0x20");
            __asm__("pmuludq xmm14, xmm12");
            __asm__("paddq xmm14, xmm13");
            __asm__("movdqa xmm13, xmm12");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("psllq xmm14, 0x20");
            __asm__("paddq xmm13, xmm14");
            __asm__("pshufd xmm14, xmm13, 0xe8");
            __asm__("pshufd xmm15, xmm13, 0xee");
            __asm__("pmuludq xmm13, xmm7");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("pmuludq xmm15, xmm7");
            __asm__("pshufd xmm15, xmm15, 0xed");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psrld xmm13, 0x7");
            __asm__("pshufd xmm15, xmm13, 0xf5");
            __asm__("pmuludq xmm13, xmm8");
            __asm__("pmuludq xmm15, xmm8");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psubd xmm14, xmm13");
            __asm__("cvtdq2pd xmm13, xmm14");
            __asm__("divpd xmm13, xmm9");
            rsi13 = reinterpret_cast<struct s102*>(rbx27 + reinterpret_cast<int64_t>(rdi24) * 0xfa0);
            __asm__("movupd [rsi+rdx*8], xmm13");
            rdx26 = rdx26 + 2;
            __asm__("paddq xmm12, xmm10");
        } while (rdx26 != 0x7d0);
        rdi12 = rcx16;
    } while (!reinterpret_cast<int1_t>(rcx16 == 0x7d0));
    v28 = rax7;
    v29 = reinterpret_cast<struct s111*>(&r15_30->f3e80);
    v31 = reinterpret_cast<struct s111*>(&r13_32->f3e80);
    *reinterpret_cast<int32_t*>(&rax33) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax33) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi34) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi35 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi34) * 0x3e80);
        r11_36 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx37) + reinterpret_cast<uint64_t>(rdi35) + 0x3e80);
        rdi38 = reinterpret_cast<struct s111*>(reinterpret_cast<uint64_t>(rdi35) + reinterpret_cast<int64_t>(rbx39));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi38) < reinterpret_cast<int64_t>(r11_10) + reinterpret_cast<uint64_t>(rsi34) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r11_10) + reinterpret_cast<uint64_t>(rsi34) * 8 < reinterpret_cast<uint64_t>(r11_36)))) == fputc) || (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi38) < reinterpret_cast<uint64_t>(v29))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r15_40) < reinterpret_cast<uint64_t>(r11_36)))) == fputc) || !reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi38) < reinterpret_cast<int64_t>(r9_8) + reinterpret_cast<uint64_t>(rsi34) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r9_8) + reinterpret_cast<uint64_t>(rsi34) * 8 < reinterpret_cast<uint64_t>(r11_36)))) == fputc))) {
            *reinterpret_cast<int32_t*>(&r8_41) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_41) + 4) = reinterpret_cast<int32_t>(fputc);
            r11_10 = v42;
            r9_8 = v43;
            goto addr_970_46;
        }
        *reinterpret_cast<int32_t*>(&r8_41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_41) + 4) = reinterpret_cast<int32_t>(fputc);
        r11_10 = v44;
        r9_8 = v45;
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi38) < reinterpret_cast<uint64_t>(v31))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_46) < reinterpret_cast<uint64_t>(r11_36)))) == fputc)) {
            do {
                addr_970_46:
                rdi38->f0 = rsi34->f0;
                rdi47 = reinterpret_cast<struct s114*>(&rdi38->f4);
                rsi48 = reinterpret_cast<struct s17*>(&rsi34->f4);
                __asm__("mulsd xmm0, [r15+r8*8]");
                __asm__("addsd xmm0, [rdi+r8*8]");
                rdi47->f0 = rsi48->f0;
                rdi49 = reinterpret_cast<struct s111*>(&rdi47->f4);
                rsi50 = reinterpret_cast<struct s0*>(&rsi48->f4);
                __asm__("mulsd xmm1, [r13+r8*8+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi49->f0 = rsi50->f0;
                rdi51 = reinterpret_cast<struct s114*>(&rdi49->f4);
                rsi52 = reinterpret_cast<struct s17*>(&rsi50->f4);
                rdi51->f0 = rsi52->f0;
                rdi53 = reinterpret_cast<struct s111*>(&rdi51->f4);
                rsi54 = reinterpret_cast<struct s0*>(&rsi52->f4);
                __asm__("mulsd xmm0, [r15+rcx]");
                __asm__("addsd xmm0, [rcx+rdi]");
                rdi53->f0 = rsi54->f0;
                rdi55 = reinterpret_cast<struct s114*>(&rdi53->f4);
                rsi56 = reinterpret_cast<struct s17*>(&rsi54->f4);
                __asm__("mulsd xmm1, [r13+rcx+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi55->f0 = rsi56->f0;
                rdi38 = reinterpret_cast<struct s111*>(&rdi55->f4);
                rsi34 = reinterpret_cast<struct s0*>(&rsi56->f4);
                r8_41 = r8_41 + 2;
            } while (r8_41 != 0x7d0);
        } else {
            rdi38->f0 = rsi34->f0;
            rdi57 = reinterpret_cast<struct s114*>(&rdi38->f4);
            rsi58 = reinterpret_cast<struct s17*>(&rsi34->f4);
            __asm__("unpcklpd xmm0, xmm0");
            rdi57->f0 = rsi58->f0;
            rdi38 = reinterpret_cast<struct s111*>(&rdi57->f4);
            rsi34 = reinterpret_cast<struct s0*>(&rsi58->f4);
            __asm__("unpcklpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&r8_59) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_59) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm2, [rdi+r8*8]");
                __asm__("movupd xmm3, [rdi+r8*8+0x10]");
                __asm__("movupd xmm4, [r15+r8*8]");
                __asm__("movupd xmm5, [r15+r8*8+0x10]");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("mulpd xmm5, xmm0");
                __asm__("addpd xmm5, xmm3");
                __asm__("movupd xmm2, [r13+r8*8+0x0]");
                __asm__("movupd xmm3, [r13+r8*8+0x10]");
                __asm__("mulpd xmm2, xmm1");
                __asm__("addpd xmm2, xmm4");
                __asm__("mulpd xmm3, xmm1");
                __asm__("addpd xmm3, xmm5");
                __asm__("movupd [rdi+r8*8], xmm2");
                __asm__("movupd [rdi+r8*8+0x10], xmm3");
                r8_59 = r8_59 + 4;
            } while (r8_59 != 0x7d0);
            continue;
        }
        rsi34 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi34) + 1);
    } while (rsi34 != 0x7d0);
    rdi38->f0 = rsi34->f0;
    rsi60 = reinterpret_cast<struct s17*>(&rsi34->f4);
    rdi61 = v28;
    do {
        rdi61->f0 = rsi60->f0;
        rdi61 = reinterpret_cast<struct s3*>(&rdi61->f4);
        rsi60 = reinterpret_cast<struct s17*>(&rsi60->f4);
        *reinterpret_cast<int32_t*>(&rcx62) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx62) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi61->f0 = rsi60->f0;
            rdi63 = reinterpret_cast<struct s18*>(&rdi61->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, xmm1");
            rdi63->f0 = rsi60->f4;
            rdi64 = reinterpret_cast<struct s19*>(&rdi63->f4);
            rsi65 = reinterpret_cast<struct s115*>(rbx66 + (rcx62 | 1) * 0xfa0);
            rdi64->f0 = rsi65->f0;
            rdi67 = reinterpret_cast<struct s21*>(&rdi64->f4);
            rsi68 = reinterpret_cast<struct s116*>(&rsi65->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm2");
            rdi67->f0 = rsi68->f0;
            rdi61 = reinterpret_cast<struct s3*>(&rdi67->f4);
            rsi60 = reinterpret_cast<struct s17*>(&rsi68->f4);
            rcx62 = rcx62 + 2;
        } while (rcx62 != 0x7d0);
        ++rax33;
    } while (rax33 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rax69) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax69) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(r14_3) >= reinterpret_cast<uint64_t>(&rdi61->f3e80) || reinterpret_cast<uint64_t>(rdi61) >= reinterpret_cast<uint64_t>(&r14_3->f3e80)) {
        do {
            __asm__("movupd xmm0, [r14+rax*8]");
            __asm__("movupd xmm1, [r14+rax*8+0x10]");
            __asm__("movupd xmm2, [rdi+rax*8]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rax*8+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rax*8], xmm2");
            __asm__("movupd [r14+rax*8+0x10], xmm0");
            __asm__("movupd xmm0, [r14+rcx]");
            __asm__("movupd xmm1, [r14+rcx+0x10]");
            __asm__("movupd xmm2, [rdi+rcx]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rcx+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rcx], xmm2");
            __asm__("movupd [r14+rcx+0x10], xmm0");
            rax69 = rax69 + 8;
        } while (rax69 != 0x7d0);
    } else {
        do {
            rdi61->f0 = rsi60->f0;
            rdi70 = reinterpret_cast<struct s18*>(&rdi61->f4);
            rsi71 = reinterpret_cast<struct s0*>(&rsi60->f4);
            __asm__("addsd xmm0, [rdi+rax*8]");
            rdi70->f0 = rsi71->f0;
            rdi72 = reinterpret_cast<struct s19*>(&rdi70->f4);
            rsi73 = reinterpret_cast<struct s17*>(&rsi71->f4);
            rdi72->f0 = rsi73->f0;
            rdi74 = reinterpret_cast<struct s21*>(&rdi72->f4);
            rsi75 = reinterpret_cast<struct s0*>(&rsi73->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi74->f0 = rsi75->f0;
            rdi76 = reinterpret_cast<struct s3*>(&rdi74->f4);
            rsi77 = reinterpret_cast<struct s17*>(&rsi75->f4);
            rdi76->f0 = rsi77->f0;
            rdi78 = reinterpret_cast<struct s18*>(&rdi76->f4);
            rsi79 = reinterpret_cast<struct s0*>(&rsi77->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi78->f0 = rsi79->f0;
            rdi80 = reinterpret_cast<struct s19*>(&rdi78->f4);
            rsi81 = reinterpret_cast<struct s17*>(&rsi79->f4);
            rdi80->f0 = rsi81->f0;
            rdi82 = reinterpret_cast<struct s21*>(&rdi80->f4);
            rsi83 = reinterpret_cast<struct s0*>(&rsi81->f4);
            __asm__("addsd xmm0, [rdi+rcx]");
            rdi82->f0 = rsi83->f0;
            rdi61 = reinterpret_cast<struct s3*>(&rdi82->f4);
            rsi60 = reinterpret_cast<struct s17*>(&rsi83->f4);
            rax69 = rax69 + 4;
        } while (rax69 != 0x7d0);
    }
    *reinterpret_cast<int32_t*>(&rax84) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax84) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi61->f0 = rsi60->f0;
    rdi85 = reinterpret_cast<struct s18*>(&rdi61->f4);
    rsi86 = reinterpret_cast<struct s0*>(&rsi60->f4);
    do {
        rdi85->f0 = rsi86->f0;
        rdi85 = reinterpret_cast<struct s18*>(&rdi85->f4);
        rsi86 = reinterpret_cast<struct s0*>(&rsi86->f4);
        *reinterpret_cast<int32_t*>(&rcx87) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx87 + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx88 = rbx89 + rax84 * 0xfa0;
            rdi85->f0 = rsi86->f0;
            rdi90 = reinterpret_cast<struct s19*>(&rdi85->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            rsi91 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx87) * 8);
            __asm__("addsd xmm2, xmm1");
            rdi90->f0 = *rsi91;
            rdi92 = reinterpret_cast<struct s21*>(&rdi90->f4);
            rsi93 = reinterpret_cast<struct s117*>(reinterpret_cast<uint64_t>(rsi91 + 1) | 8);
            rdi92->f0 = rsi93->f0;
            rdi94 = reinterpret_cast<struct s3*>(&rdi92->f4);
            rsi95 = reinterpret_cast<struct s118*>(&rsi93->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r14+rsi]");
            __asm__("addsd xmm1, xmm2");
            rdi94->f0 = rsi95->f0;
            rdi85 = reinterpret_cast<struct s18*>(&rdi94->f4);
            rsi86 = reinterpret_cast<struct s0*>(&rsi95->f4);
            rcx87 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx87) + 2);
        } while (!reinterpret_cast<int1_t>(rcx87 == 0x7d0));
        ++rax84;
    } while (rax84 != 0x7d0);
    if (v96 >= 43 && **v97 == fputc) {
        rax98 = gc6a;
        v99 = *rax98;
        fun_c87(0xc78, 22, 1);
        rsi100 = reinterpret_cast<int32_t*>(0xc8e);
        rdi101 = v99;
        fun_ca0();
        *reinterpret_cast<int32_t*>(&rcx102) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx102) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            eax103 = *reinterpret_cast<int32_t*>(&rcx102) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax103)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi101) = 10;
                *reinterpret_cast<int32_t*>(&rdi101 + 4) = reinterpret_cast<int32_t>(fputc);
                rsi100 = v99;
                fun_d00();
            }
            *rdi101 = *rsi100;
            rdi101 = v99;
            rsi100 = reinterpret_cast<int32_t*>(0xcc1);
            fun_cc8();
            ++rcx102;
        } while (rcx102 != 0x7d0);
        fun_d20(v99, 0xd0e, 0xd15);
        *reinterpret_cast<int32_t*>(&rsi86) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi86) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx88) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx88) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx87 = v99;
        fun_d3a(0xd27, 22, 1, rcx87);
    }
    fun_c0c(rbx104, rsi86, rdx88, rcx87);
    fun_c16(v105, rsi86, rdx88, rcx87);
    fun_c1e(r15_106, rsi86, rdx88, rcx87);
    fun_c28(v107, rsi86, rdx88, rcx87);
    fun_c30(r13_108, rsi86, rdx88, rcx87);
    fun_c38(rbp109, rsi86, rdx88, rcx87);
    fun_c40(r14_3, rsi86, rdx88, rcx87);
    fun_c48(r12_6, rsi86, rdx88, rcx87);
    fun_c52(v28, rsi86, rdx88, rcx87);
    goto v110;
}

void fun_c52(struct s3* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, ...) {
    int64_t v5;

    goto v5;
}

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
    int32_t f1;
    int32_t f4;
};

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

struct s126 {
    int32_t f0;
    int32_t f4;
};

struct s127 {
    int32_t f0;
    int32_t f4;
};

struct s128 {
    int32_t f0;
    int32_t f4;
};

struct s129 {
    int32_t f0;
    int32_t f4;
};

struct s130 {
    signed char[16000] pad16000;
    int32_t f3e80;
};

struct s131 {
    signed char[16000] pad16000;
    int32_t f3e80;
};

struct s132 {
    int32_t f0;
    int32_t f4;
};

struct s133 {
    int32_t f0;
    int32_t f4;
};

struct s134 {
    int32_t f0;
    int32_t f4;
};

struct s135 {
    signed char[16000] pad16000;
    int32_t f3e80;
};

struct s136 {
    int32_t f0;
    int32_t f4;
};

struct s137 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_618(int64_t rdi, int64_t rsi) {
    int64_t r12_3;
    int64_t rax4;
    struct s3* rax5;
    void* r9_6;
    void* v7;
    void* r11_8;
    void* v9;
    struct s119* rdi10;
    struct s120* rsi11;
    struct s121* rdi12;
    struct s122* rsi13;
    struct s119* rcx14;
    struct s123* rdi15;
    struct s124* rsi16;
    struct s125* rdi17;
    struct s126* rsi18;
    struct s127* rdi19;
    struct s128* rsi20;
    int32_t* rdi21;
    void* rdi22;
    int64_t* r14_23;
    int64_t* rbp24;
    int64_t rdx25;
    int32_t* rbx26;
    struct s3* v27;
    struct s129* v28;
    struct s130* r15_29;
    struct s129* v30;
    struct s131* r13_31;
    int64_t rax32;
    struct s0* rsi33;
    void* rdi34;
    void* r11_35;
    void* rbx36;
    struct s129* rdi37;
    int32_t* rbx38;
    void* r15_39;
    int64_t r8_40;
    void* v41;
    void* v42;
    void* v43;
    void* v44;
    void* r13_45;
    struct s132* rdi46;
    struct s17* rsi47;
    struct s129* rdi48;
    struct s0* rsi49;
    struct s132* rdi50;
    struct s17* rsi51;
    struct s129* rdi52;
    struct s0* rsi53;
    struct s132* rdi54;
    struct s17* rsi55;
    struct s132* rdi56;
    struct s17* rsi57;
    int64_t r8_58;
    struct s17* rsi59;
    struct s3* rdi60;
    uint64_t rcx61;
    struct s18* rdi62;
    struct s19* rdi63;
    struct s133* rsi64;
    int32_t* rbx65;
    struct s21* rdi66;
    struct s134* rsi67;
    int64_t rax68;
    struct s2* r14_69;
    struct s135* r14_70;
    struct s18* rdi71;
    struct s0* rsi72;
    struct s19* rdi73;
    struct s17* rsi74;
    struct s21* rdi75;
    struct s0* rsi76;
    struct s3* rdi77;
    struct s17* rsi78;
    struct s18* rdi79;
    struct s0* rsi80;
    struct s19* rdi81;
    struct s17* rsi82;
    struct s21* rdi83;
    struct s0* rsi84;
    int64_t rax85;
    struct s18* rdi86;
    struct s0* rsi87;
    int32_t* rcx88;
    int32_t* rdx89;
    int32_t* rbx90;
    struct s19* rdi91;
    int32_t* rsi92;
    struct s21* rdi93;
    struct s136* rsi94;
    struct s3* rdi95;
    struct s137* rsi96;
    int32_t v97;
    signed char** v98;
    int32_t** rax99;
    int32_t* v100;
    int32_t* rsi101;
    int32_t* rdi102;
    int64_t rcx103;
    int32_t eax104;
    int32_t* rbx105;
    void* v106;
    struct s1* r15_107;
    void* v108;
    struct s1* r13_109;
    int64_t* rbp110;
    struct s2* r14_111;
    int64_t v112;

    r12_3 = rax4;
    rax5 = fun_62a(0x7d0, 8);
    r9_6 = v7;
    r11_8 = v9;
    fputc = LCPI1_1;
    g4 = gc;
    LCPI1_1 = LCPI1_7;
    gc = g14;
    LCPI1_7 = LCPI1_3;
    g14 = g1c;
    rdi10 = reinterpret_cast<struct s119*>(24);
    rsi11 = reinterpret_cast<struct s120*>(32);
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("movapd xmm9, [rip+0x0]");
    __asm__("movdqa xmm10, [rip+0x0]");
    do {
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, edi");
        rdi10->f0 = rsi11->f0;
        rdi12 = reinterpret_cast<struct s121*>(&rdi10->f4);
        rsi13 = reinterpret_cast<struct s122*>(&rsi11->f4);
        rcx14 = reinterpret_cast<struct s119*>(reinterpret_cast<int64_t>(rdi12) + 1);
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, ecx");
        __asm__("divsd xmm11, xmm0");
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm1");
        rdi12->f0 = rsi13->f0;
        rdi15 = reinterpret_cast<struct s123*>(&rdi12->f1);
        rsi16 = reinterpret_cast<struct s124*>(&rsi13->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm2");
        rdi15->f0 = rsi16->f0;
        rdi17 = reinterpret_cast<struct s125*>(&rdi15->f4);
        rsi18 = reinterpret_cast<struct s126*>(&rsi16->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("divsd xmm12, xmm3");
        rdi17->f0 = rsi18->f0;
        rdi19 = reinterpret_cast<struct s127*>(&rdi17->f4);
        rsi20 = reinterpret_cast<struct s128*>(&rsi18->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm4");
        rdi19->f0 = rsi20->f0;
        rdi21 = &rdi19->f4;
        __asm__("divsd xmm11, xmm5");
        *rdi21 = rsi20->f4;
        rdi22 = reinterpret_cast<void*>(rdi21 + 1);
        r14_23[static_cast<int64_t>(rdi22)] = reinterpret_cast<int64_t>(fputc);
        rbp24[static_cast<int64_t>(rdi22)] = reinterpret_cast<int64_t>(fputc);
        __asm__("movd xmm11, rdi");
        __asm__("pshufd xmm11, xmm11, 0x44");
        *reinterpret_cast<int32_t*>(&rdx25) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm12, xmm6");
        do {
            __asm__("movdqa xmm13, xmm12");
            __asm__("psrlq xmm13, 0x20");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("movdqa xmm14, xmm11");
            __asm__("psrlq xmm14, 0x20");
            __asm__("pmuludq xmm14, xmm12");
            __asm__("paddq xmm14, xmm13");
            __asm__("movdqa xmm13, xmm12");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("psllq xmm14, 0x20");
            __asm__("paddq xmm13, xmm14");
            __asm__("pshufd xmm14, xmm13, 0xe8");
            __asm__("pshufd xmm15, xmm13, 0xee");
            __asm__("pmuludq xmm13, xmm7");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("pmuludq xmm15, xmm7");
            __asm__("pshufd xmm15, xmm15, 0xed");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psrld xmm13, 0x7");
            __asm__("pshufd xmm15, xmm13, 0xf5");
            __asm__("pmuludq xmm13, xmm8");
            __asm__("pmuludq xmm15, xmm8");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psubd xmm14, xmm13");
            __asm__("cvtdq2pd xmm13, xmm14");
            __asm__("divpd xmm13, xmm9");
            rsi11 = reinterpret_cast<struct s120*>(rbx26 + reinterpret_cast<int64_t>(rdi22) * 0xfa0);
            __asm__("movupd [rsi+rdx*8], xmm13");
            rdx25 = rdx25 + 2;
            __asm__("paddq xmm12, xmm10");
        } while (rdx25 != 0x7d0);
        rdi10 = rcx14;
    } while (!reinterpret_cast<int1_t>(rcx14 == 0x7d0));
    v27 = rax5;
    v28 = reinterpret_cast<struct s129*>(&r15_29->f3e80);
    v30 = reinterpret_cast<struct s129*>(&r13_31->f3e80);
    *reinterpret_cast<int32_t*>(&rax32) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax32) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi33) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi34 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi33) * 0x3e80);
        r11_35 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx36) + reinterpret_cast<uint64_t>(rdi34) + 0x3e80);
        rdi37 = reinterpret_cast<struct s129*>(reinterpret_cast<uint64_t>(rdi34) + reinterpret_cast<int64_t>(rbx38));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi37) < reinterpret_cast<int64_t>(r11_8) + reinterpret_cast<uint64_t>(rsi33) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r11_8) + reinterpret_cast<uint64_t>(rsi33) * 8 < reinterpret_cast<uint64_t>(r11_35)))) == fputc) || (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi37) < reinterpret_cast<uint64_t>(v28))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r15_39) < reinterpret_cast<uint64_t>(r11_35)))) == fputc) || !reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi37) < reinterpret_cast<int64_t>(r9_6) + reinterpret_cast<uint64_t>(rsi33) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r9_6) + reinterpret_cast<uint64_t>(rsi33) * 8 < reinterpret_cast<uint64_t>(r11_35)))) == fputc))) {
            *reinterpret_cast<int32_t*>(&r8_40) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_40) + 4) = reinterpret_cast<int32_t>(fputc);
            r11_8 = v41;
            r9_6 = v42;
            goto addr_970_45;
        }
        *reinterpret_cast<int32_t*>(&r8_40) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_40) + 4) = reinterpret_cast<int32_t>(fputc);
        r11_8 = v43;
        r9_6 = v44;
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi37) < reinterpret_cast<uint64_t>(v30))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_45) < reinterpret_cast<uint64_t>(r11_35)))) == fputc)) {
            do {
                addr_970_45:
                rdi37->f0 = rsi33->f0;
                rdi46 = reinterpret_cast<struct s132*>(&rdi37->f4);
                rsi47 = reinterpret_cast<struct s17*>(&rsi33->f4);
                __asm__("mulsd xmm0, [r15+r8*8]");
                __asm__("addsd xmm0, [rdi+r8*8]");
                rdi46->f0 = rsi47->f0;
                rdi48 = reinterpret_cast<struct s129*>(&rdi46->f4);
                rsi49 = reinterpret_cast<struct s0*>(&rsi47->f4);
                __asm__("mulsd xmm1, [r13+r8*8+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi48->f0 = rsi49->f0;
                rdi50 = reinterpret_cast<struct s132*>(&rdi48->f4);
                rsi51 = reinterpret_cast<struct s17*>(&rsi49->f4);
                rdi50->f0 = rsi51->f0;
                rdi52 = reinterpret_cast<struct s129*>(&rdi50->f4);
                rsi53 = reinterpret_cast<struct s0*>(&rsi51->f4);
                __asm__("mulsd xmm0, [r15+rcx]");
                __asm__("addsd xmm0, [rcx+rdi]");
                rdi52->f0 = rsi53->f0;
                rdi54 = reinterpret_cast<struct s132*>(&rdi52->f4);
                rsi55 = reinterpret_cast<struct s17*>(&rsi53->f4);
                __asm__("mulsd xmm1, [r13+rcx+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi54->f0 = rsi55->f0;
                rdi37 = reinterpret_cast<struct s129*>(&rdi54->f4);
                rsi33 = reinterpret_cast<struct s0*>(&rsi55->f4);
                r8_40 = r8_40 + 2;
            } while (r8_40 != 0x7d0);
        } else {
            rdi37->f0 = rsi33->f0;
            rdi56 = reinterpret_cast<struct s132*>(&rdi37->f4);
            rsi57 = reinterpret_cast<struct s17*>(&rsi33->f4);
            __asm__("unpcklpd xmm0, xmm0");
            rdi56->f0 = rsi57->f0;
            rdi37 = reinterpret_cast<struct s129*>(&rdi56->f4);
            rsi33 = reinterpret_cast<struct s0*>(&rsi57->f4);
            __asm__("unpcklpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&r8_58) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_58) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm2, [rdi+r8*8]");
                __asm__("movupd xmm3, [rdi+r8*8+0x10]");
                __asm__("movupd xmm4, [r15+r8*8]");
                __asm__("movupd xmm5, [r15+r8*8+0x10]");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("mulpd xmm5, xmm0");
                __asm__("addpd xmm5, xmm3");
                __asm__("movupd xmm2, [r13+r8*8+0x0]");
                __asm__("movupd xmm3, [r13+r8*8+0x10]");
                __asm__("mulpd xmm2, xmm1");
                __asm__("addpd xmm2, xmm4");
                __asm__("mulpd xmm3, xmm1");
                __asm__("addpd xmm3, xmm5");
                __asm__("movupd [rdi+r8*8], xmm2");
                __asm__("movupd [rdi+r8*8+0x10], xmm3");
                r8_58 = r8_58 + 4;
            } while (r8_58 != 0x7d0);
            continue;
        }
        rsi33 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi33) + 1);
    } while (rsi33 != 0x7d0);
    rdi37->f0 = rsi33->f0;
    rsi59 = reinterpret_cast<struct s17*>(&rsi33->f4);
    rdi60 = v27;
    do {
        rdi60->f0 = rsi59->f0;
        rdi60 = reinterpret_cast<struct s3*>(&rdi60->f4);
        rsi59 = reinterpret_cast<struct s17*>(&rsi59->f4);
        *reinterpret_cast<int32_t*>(&rcx61) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx61) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi60->f0 = rsi59->f0;
            rdi62 = reinterpret_cast<struct s18*>(&rdi60->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, xmm1");
            rdi62->f0 = rsi59->f4;
            rdi63 = reinterpret_cast<struct s19*>(&rdi62->f4);
            rsi64 = reinterpret_cast<struct s133*>(rbx65 + (rcx61 | 1) * 0xfa0);
            rdi63->f0 = rsi64->f0;
            rdi66 = reinterpret_cast<struct s21*>(&rdi63->f4);
            rsi67 = reinterpret_cast<struct s134*>(&rsi64->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm2");
            rdi66->f0 = rsi67->f0;
            rdi60 = reinterpret_cast<struct s3*>(&rdi66->f4);
            rsi59 = reinterpret_cast<struct s17*>(&rsi67->f4);
            rcx61 = rcx61 + 2;
        } while (rcx61 != 0x7d0);
        ++rax32;
    } while (rax32 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rax68) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax68) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(r14_69) >= reinterpret_cast<uint64_t>(&rdi60->f3e80) || reinterpret_cast<uint64_t>(rdi60) >= reinterpret_cast<uint64_t>(&r14_70->f3e80)) {
        do {
            __asm__("movupd xmm0, [r14+rax*8]");
            __asm__("movupd xmm1, [r14+rax*8+0x10]");
            __asm__("movupd xmm2, [rdi+rax*8]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rax*8+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rax*8], xmm2");
            __asm__("movupd [r14+rax*8+0x10], xmm0");
            __asm__("movupd xmm0, [r14+rcx]");
            __asm__("movupd xmm1, [r14+rcx+0x10]");
            __asm__("movupd xmm2, [rdi+rcx]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rcx+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rcx], xmm2");
            __asm__("movupd [r14+rcx+0x10], xmm0");
            rax68 = rax68 + 8;
        } while (rax68 != 0x7d0);
    } else {
        do {
            rdi60->f0 = rsi59->f0;
            rdi71 = reinterpret_cast<struct s18*>(&rdi60->f4);
            rsi72 = reinterpret_cast<struct s0*>(&rsi59->f4);
            __asm__("addsd xmm0, [rdi+rax*8]");
            rdi71->f0 = rsi72->f0;
            rdi73 = reinterpret_cast<struct s19*>(&rdi71->f4);
            rsi74 = reinterpret_cast<struct s17*>(&rsi72->f4);
            rdi73->f0 = rsi74->f0;
            rdi75 = reinterpret_cast<struct s21*>(&rdi73->f4);
            rsi76 = reinterpret_cast<struct s0*>(&rsi74->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi75->f0 = rsi76->f0;
            rdi77 = reinterpret_cast<struct s3*>(&rdi75->f4);
            rsi78 = reinterpret_cast<struct s17*>(&rsi76->f4);
            rdi77->f0 = rsi78->f0;
            rdi79 = reinterpret_cast<struct s18*>(&rdi77->f4);
            rsi80 = reinterpret_cast<struct s0*>(&rsi78->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi79->f0 = rsi80->f0;
            rdi81 = reinterpret_cast<struct s19*>(&rdi79->f4);
            rsi82 = reinterpret_cast<struct s17*>(&rsi80->f4);
            rdi81->f0 = rsi82->f0;
            rdi83 = reinterpret_cast<struct s21*>(&rdi81->f4);
            rsi84 = reinterpret_cast<struct s0*>(&rsi82->f4);
            __asm__("addsd xmm0, [rdi+rcx]");
            rdi83->f0 = rsi84->f0;
            rdi60 = reinterpret_cast<struct s3*>(&rdi83->f4);
            rsi59 = reinterpret_cast<struct s17*>(&rsi84->f4);
            rax68 = rax68 + 4;
        } while (rax68 != 0x7d0);
    }
    *reinterpret_cast<int32_t*>(&rax85) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax85) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi60->f0 = rsi59->f0;
    rdi86 = reinterpret_cast<struct s18*>(&rdi60->f4);
    rsi87 = reinterpret_cast<struct s0*>(&rsi59->f4);
    do {
        rdi86->f0 = rsi87->f0;
        rdi86 = reinterpret_cast<struct s18*>(&rdi86->f4);
        rsi87 = reinterpret_cast<struct s0*>(&rsi87->f4);
        *reinterpret_cast<int32_t*>(&rcx88) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx88 + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx89 = rbx90 + rax85 * 0xfa0;
            rdi86->f0 = rsi87->f0;
            rdi91 = reinterpret_cast<struct s19*>(&rdi86->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            rsi92 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx88) * 8);
            __asm__("addsd xmm2, xmm1");
            rdi91->f0 = *rsi92;
            rdi93 = reinterpret_cast<struct s21*>(&rdi91->f4);
            rsi94 = reinterpret_cast<struct s136*>(reinterpret_cast<uint64_t>(rsi92 + 1) | 8);
            rdi93->f0 = rsi94->f0;
            rdi95 = reinterpret_cast<struct s3*>(&rdi93->f4);
            rsi96 = reinterpret_cast<struct s137*>(&rsi94->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r14+rsi]");
            __asm__("addsd xmm1, xmm2");
            rdi95->f0 = rsi96->f0;
            rdi86 = reinterpret_cast<struct s18*>(&rdi95->f4);
            rsi87 = reinterpret_cast<struct s0*>(&rsi96->f4);
            rcx88 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx88) + 2);
        } while (!reinterpret_cast<int1_t>(rcx88 == 0x7d0));
        ++rax85;
    } while (rax85 != 0x7d0);
    if (v97 >= 43 && **v98 == fputc) {
        rax99 = gc6a;
        v100 = *rax99;
        fun_c87(0xc78, 22, 1);
        rsi101 = reinterpret_cast<int32_t*>(0xc8e);
        rdi102 = v100;
        fun_ca0();
        *reinterpret_cast<int32_t*>(&rcx103) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx103) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            eax104 = *reinterpret_cast<int32_t*>(&rcx103) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax104)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi102) = 10;
                *reinterpret_cast<int32_t*>(&rdi102 + 4) = reinterpret_cast<int32_t>(fputc);
                rsi101 = v100;
                fun_d00();
            }
            *rdi102 = *rsi101;
            rdi102 = v100;
            rsi101 = reinterpret_cast<int32_t*>(0xcc1);
            fun_cc8();
            ++rcx103;
        } while (rcx103 != 0x7d0);
        fun_d20(v100, 0xd0e, 0xd15);
        *reinterpret_cast<int32_t*>(&rsi87) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi87) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx89) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx89) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx88 = v100;
        fun_d3a(0xd27, 22, 1, rcx88);
    }
    fun_c0c(rbx105, rsi87, rdx89, rcx88);
    fun_c16(v106, rsi87, rdx89, rcx88);
    fun_c1e(r15_107, rsi87, rdx89, rcx88);
    fun_c28(v108, rsi87, rdx89, rcx88);
    fun_c30(r13_109, rsi87, rdx89, rcx88);
    fun_c38(rbp110, rsi87, rdx89, rcx88);
    fun_c40(r14_111, rsi87, rdx89, rcx88);
    fun_c48(r12_3, rsi87, rdx89, rcx88);
    fun_c52(v27, rsi87, rdx89, rcx88);
    goto v112;
}

struct s138 {
    int32_t f0;
    int32_t f4;
};

struct s139 {
    int32_t f0;
    int32_t f4;
};

struct s140 {
    int32_t f0;
    int32_t f4;
};

struct s141 {
    int32_t f0;
    int32_t f4;
};

struct s142 {
    int32_t f0;
    int32_t f4;
};

struct s143 {
    int32_t f0;
    int32_t f4;
};

struct s144 {
    int32_t f0;
    int32_t f4;
};

struct s145 {
    int32_t f0;
    int32_t f1;
    int32_t f4;
};

struct s146 {
    int32_t f0;
    int32_t f4;
};

struct s147 {
    int32_t f0;
    int32_t f4;
};

struct s148 {
    int32_t f0;
    int32_t f4;
};

struct s149 {
    int32_t f0;
    int32_t f4;
};

struct s150 {
    int32_t f0;
    int32_t f4;
};

struct s151 {
    int32_t f0;
    int32_t f4;
};

struct s152 {
    int32_t f0;
    int32_t f4;
};

struct s153 {
    int32_t f0;
    int32_t f4;
};

struct s154 {
    signed char[16000] pad16000;
    int32_t f3e80;
};

struct s155 {
    signed char[16000] pad16000;
    int32_t f3e80;
};

struct s156 {
    int32_t f0;
    int32_t f4;
};

struct s157 {
    int32_t f0;
    int32_t f4;
};

struct s158 {
    int32_t f0;
    int32_t f4;
};

struct s159 {
    signed char[16000] pad16000;
    int32_t f3e80;
};

struct s160 {
    int32_t f0;
    int32_t f4;
};

struct s161 {
    int32_t f0;
    int32_t f4;
};

struct s3* fun_62a(int64_t rdi, struct s4* rsi) {
    void* r9_3;
    void* v4;
    void* r11_5;
    void* v6;
    struct s138* rsi7;
    struct s139* rsi8;
    struct s140* rsi9;
    struct s141* rsi10;
    struct s142* rsi11;
    struct s143* rdi12;
    struct s144* rsi13;
    struct s145* rdi14;
    struct s146* rsi15;
    struct s143* rcx16;
    struct s147* rdi17;
    struct s148* rsi18;
    struct s149* rdi19;
    struct s150* rsi20;
    struct s151* rdi21;
    struct s152* rsi22;
    int32_t* rdi23;
    void* rdi24;
    int64_t* r14_25;
    int64_t* rbp26;
    int64_t rdx27;
    int32_t* rbx28;
    struct s3* v29;
    struct s3* rax30;
    struct s153* v31;
    struct s154* r15_32;
    struct s153* v33;
    struct s155* r13_34;
    int64_t rax35;
    struct s0* rsi36;
    void* rdi37;
    void* r11_38;
    void* rbx39;
    struct s153* rdi40;
    int32_t* rbx41;
    void* r15_42;
    int64_t r8_43;
    void* v44;
    void* v45;
    void* v46;
    void* v47;
    void* r13_48;
    struct s156* rdi49;
    struct s17* rsi50;
    struct s153* rdi51;
    struct s0* rsi52;
    struct s156* rdi53;
    struct s17* rsi54;
    struct s153* rdi55;
    struct s0* rsi56;
    struct s156* rdi57;
    struct s17* rsi58;
    struct s156* rdi59;
    struct s17* rsi60;
    int64_t r8_61;
    struct s17* rsi62;
    struct s3* rdi63;
    uint64_t rcx64;
    struct s18* rdi65;
    struct s19* rdi66;
    struct s157* rsi67;
    int32_t* rbx68;
    struct s21* rdi69;
    struct s158* rsi70;
    int64_t rax71;
    struct s2* r14_72;
    struct s159* r14_73;
    struct s18* rdi74;
    struct s0* rsi75;
    struct s19* rdi76;
    struct s17* rsi77;
    struct s21* rdi78;
    struct s0* rsi79;
    struct s3* rdi80;
    struct s17* rsi81;
    struct s18* rdi82;
    struct s0* rsi83;
    struct s19* rdi84;
    struct s17* rsi85;
    struct s21* rdi86;
    struct s0* rsi87;
    int64_t rax88;
    struct s18* rdi89;
    struct s0* rsi90;
    int32_t* rcx91;
    int32_t* rdx92;
    int32_t* rbx93;
    struct s19* rdi94;
    int32_t* rsi95;
    struct s21* rdi96;
    struct s160* rsi97;
    struct s3* rdi98;
    struct s161* rsi99;
    int32_t v100;
    signed char** v101;
    int32_t** rax102;
    int32_t* v103;
    int32_t* rsi104;
    int32_t* rdi105;
    int64_t rcx106;
    int32_t eax107;
    int32_t* rbx108;
    void* v109;
    struct s1* r15_110;
    void* v111;
    struct s1* r13_112;
    int64_t* rbp113;
    struct s2* r14_114;
    int64_t r12_115;
    int64_t v116;

    r9_3 = v4;
    r11_5 = v6;
    fputc = rsi->f0;
    rsi7 = reinterpret_cast<struct s138*>(&rsi->f4);
    g4 = rsi7->f0;
    rsi8 = reinterpret_cast<struct s139*>(&rsi7->f4);
    LCPI1_1 = rsi8->f0;
    rsi9 = reinterpret_cast<struct s140*>(&rsi8->f4);
    gc = rsi9->f0;
    rsi10 = reinterpret_cast<struct s141*>(&rsi9->f4);
    LCPI1_7 = rsi10->f0;
    rsi11 = reinterpret_cast<struct s142*>(&rsi10->f4);
    g14 = rsi11->f0;
    rdi12 = reinterpret_cast<struct s143*>(24);
    rsi13 = reinterpret_cast<struct s144*>(&rsi11->f4);
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("movapd xmm9, [rip+0x0]");
    __asm__("movdqa xmm10, [rip+0x0]");
    do {
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, edi");
        rdi12->f0 = rsi13->f0;
        rdi14 = reinterpret_cast<struct s145*>(&rdi12->f4);
        rsi15 = reinterpret_cast<struct s146*>(&rsi13->f4);
        rcx16 = reinterpret_cast<struct s143*>(reinterpret_cast<int64_t>(rdi14) + 1);
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, ecx");
        __asm__("divsd xmm11, xmm0");
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm1");
        rdi14->f0 = rsi15->f0;
        rdi17 = reinterpret_cast<struct s147*>(&rdi14->f1);
        rsi18 = reinterpret_cast<struct s148*>(&rsi15->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm2");
        rdi17->f0 = rsi18->f0;
        rdi19 = reinterpret_cast<struct s149*>(&rdi17->f4);
        rsi20 = reinterpret_cast<struct s150*>(&rsi18->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("divsd xmm12, xmm3");
        rdi19->f0 = rsi20->f0;
        rdi21 = reinterpret_cast<struct s151*>(&rdi19->f4);
        rsi22 = reinterpret_cast<struct s152*>(&rsi20->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm4");
        rdi21->f0 = rsi22->f0;
        rdi23 = &rdi21->f4;
        __asm__("divsd xmm11, xmm5");
        *rdi23 = rsi22->f4;
        rdi24 = reinterpret_cast<void*>(rdi23 + 1);
        r14_25[static_cast<int64_t>(rdi24)] = reinterpret_cast<int64_t>(fputc);
        rbp26[static_cast<int64_t>(rdi24)] = reinterpret_cast<int64_t>(fputc);
        __asm__("movd xmm11, rdi");
        __asm__("pshufd xmm11, xmm11, 0x44");
        *reinterpret_cast<int32_t*>(&rdx27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm12, xmm6");
        do {
            __asm__("movdqa xmm13, xmm12");
            __asm__("psrlq xmm13, 0x20");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("movdqa xmm14, xmm11");
            __asm__("psrlq xmm14, 0x20");
            __asm__("pmuludq xmm14, xmm12");
            __asm__("paddq xmm14, xmm13");
            __asm__("movdqa xmm13, xmm12");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("psllq xmm14, 0x20");
            __asm__("paddq xmm13, xmm14");
            __asm__("pshufd xmm14, xmm13, 0xe8");
            __asm__("pshufd xmm15, xmm13, 0xee");
            __asm__("pmuludq xmm13, xmm7");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("pmuludq xmm15, xmm7");
            __asm__("pshufd xmm15, xmm15, 0xed");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psrld xmm13, 0x7");
            __asm__("pshufd xmm15, xmm13, 0xf5");
            __asm__("pmuludq xmm13, xmm8");
            __asm__("pmuludq xmm15, xmm8");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psubd xmm14, xmm13");
            __asm__("cvtdq2pd xmm13, xmm14");
            __asm__("divpd xmm13, xmm9");
            rsi13 = reinterpret_cast<struct s144*>(rbx28 + reinterpret_cast<int64_t>(rdi24) * 0xfa0);
            __asm__("movupd [rsi+rdx*8], xmm13");
            rdx27 = rdx27 + 2;
            __asm__("paddq xmm12, xmm10");
        } while (rdx27 != 0x7d0);
        rdi12 = rcx16;
    } while (!reinterpret_cast<int1_t>(rcx16 == 0x7d0));
    v29 = rax30;
    v31 = reinterpret_cast<struct s153*>(&r15_32->f3e80);
    v33 = reinterpret_cast<struct s153*>(&r13_34->f3e80);
    *reinterpret_cast<int32_t*>(&rax35) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax35) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi36) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi36) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi36) * 0x3e80);
        r11_38 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx39) + reinterpret_cast<uint64_t>(rdi37) + 0x3e80);
        rdi40 = reinterpret_cast<struct s153*>(reinterpret_cast<uint64_t>(rdi37) + reinterpret_cast<int64_t>(rbx41));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi40) < reinterpret_cast<int64_t>(r11_5) + reinterpret_cast<uint64_t>(rsi36) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r11_5) + reinterpret_cast<uint64_t>(rsi36) * 8 < reinterpret_cast<uint64_t>(r11_38)))) == fputc) || (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi40) < reinterpret_cast<uint64_t>(v31))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r15_42) < reinterpret_cast<uint64_t>(r11_38)))) == fputc) || !reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi40) < reinterpret_cast<int64_t>(r9_3) + reinterpret_cast<uint64_t>(rsi36) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r9_3) + reinterpret_cast<uint64_t>(rsi36) * 8 < reinterpret_cast<uint64_t>(r11_38)))) == fputc))) {
            *reinterpret_cast<int32_t*>(&r8_43) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_43) + 4) = reinterpret_cast<int32_t>(fputc);
            r11_5 = v44;
            r9_3 = v45;
            goto addr_970_44;
        }
        *reinterpret_cast<int32_t*>(&r8_43) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_43) + 4) = reinterpret_cast<int32_t>(fputc);
        r11_5 = v46;
        r9_3 = v47;
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi40) < reinterpret_cast<uint64_t>(v33))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_48) < reinterpret_cast<uint64_t>(r11_38)))) == fputc)) {
            do {
                addr_970_44:
                rdi40->f0 = rsi36->f0;
                rdi49 = reinterpret_cast<struct s156*>(&rdi40->f4);
                rsi50 = reinterpret_cast<struct s17*>(&rsi36->f4);
                __asm__("mulsd xmm0, [r15+r8*8]");
                __asm__("addsd xmm0, [rdi+r8*8]");
                rdi49->f0 = rsi50->f0;
                rdi51 = reinterpret_cast<struct s153*>(&rdi49->f4);
                rsi52 = reinterpret_cast<struct s0*>(&rsi50->f4);
                __asm__("mulsd xmm1, [r13+r8*8+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi51->f0 = rsi52->f0;
                rdi53 = reinterpret_cast<struct s156*>(&rdi51->f4);
                rsi54 = reinterpret_cast<struct s17*>(&rsi52->f4);
                rdi53->f0 = rsi54->f0;
                rdi55 = reinterpret_cast<struct s153*>(&rdi53->f4);
                rsi56 = reinterpret_cast<struct s0*>(&rsi54->f4);
                __asm__("mulsd xmm0, [r15+rcx]");
                __asm__("addsd xmm0, [rcx+rdi]");
                rdi55->f0 = rsi56->f0;
                rdi57 = reinterpret_cast<struct s156*>(&rdi55->f4);
                rsi58 = reinterpret_cast<struct s17*>(&rsi56->f4);
                __asm__("mulsd xmm1, [r13+rcx+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi57->f0 = rsi58->f0;
                rdi40 = reinterpret_cast<struct s153*>(&rdi57->f4);
                rsi36 = reinterpret_cast<struct s0*>(&rsi58->f4);
                r8_43 = r8_43 + 2;
            } while (r8_43 != 0x7d0);
        } else {
            rdi40->f0 = rsi36->f0;
            rdi59 = reinterpret_cast<struct s156*>(&rdi40->f4);
            rsi60 = reinterpret_cast<struct s17*>(&rsi36->f4);
            __asm__("unpcklpd xmm0, xmm0");
            rdi59->f0 = rsi60->f0;
            rdi40 = reinterpret_cast<struct s153*>(&rdi59->f4);
            rsi36 = reinterpret_cast<struct s0*>(&rsi60->f4);
            __asm__("unpcklpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&r8_61) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_61) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm2, [rdi+r8*8]");
                __asm__("movupd xmm3, [rdi+r8*8+0x10]");
                __asm__("movupd xmm4, [r15+r8*8]");
                __asm__("movupd xmm5, [r15+r8*8+0x10]");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("mulpd xmm5, xmm0");
                __asm__("addpd xmm5, xmm3");
                __asm__("movupd xmm2, [r13+r8*8+0x0]");
                __asm__("movupd xmm3, [r13+r8*8+0x10]");
                __asm__("mulpd xmm2, xmm1");
                __asm__("addpd xmm2, xmm4");
                __asm__("mulpd xmm3, xmm1");
                __asm__("addpd xmm3, xmm5");
                __asm__("movupd [rdi+r8*8], xmm2");
                __asm__("movupd [rdi+r8*8+0x10], xmm3");
                r8_61 = r8_61 + 4;
            } while (r8_61 != 0x7d0);
            continue;
        }
        rsi36 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi36) + 1);
    } while (rsi36 != 0x7d0);
    rdi40->f0 = rsi36->f0;
    rsi62 = reinterpret_cast<struct s17*>(&rsi36->f4);
    rdi63 = v29;
    do {
        rdi63->f0 = rsi62->f0;
        rdi63 = reinterpret_cast<struct s3*>(&rdi63->f4);
        rsi62 = reinterpret_cast<struct s17*>(&rsi62->f4);
        *reinterpret_cast<int32_t*>(&rcx64) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx64) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi63->f0 = rsi62->f0;
            rdi65 = reinterpret_cast<struct s18*>(&rdi63->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, xmm1");
            rdi65->f0 = rsi62->f4;
            rdi66 = reinterpret_cast<struct s19*>(&rdi65->f4);
            rsi67 = reinterpret_cast<struct s157*>(rbx68 + (rcx64 | 1) * 0xfa0);
            rdi66->f0 = rsi67->f0;
            rdi69 = reinterpret_cast<struct s21*>(&rdi66->f4);
            rsi70 = reinterpret_cast<struct s158*>(&rsi67->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm2");
            rdi69->f0 = rsi70->f0;
            rdi63 = reinterpret_cast<struct s3*>(&rdi69->f4);
            rsi62 = reinterpret_cast<struct s17*>(&rsi70->f4);
            rcx64 = rcx64 + 2;
        } while (rcx64 != 0x7d0);
        ++rax35;
    } while (rax35 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rax71) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax71) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(r14_72) >= reinterpret_cast<uint64_t>(&rdi63->f3e80) || reinterpret_cast<uint64_t>(rdi63) >= reinterpret_cast<uint64_t>(&r14_73->f3e80)) {
        do {
            __asm__("movupd xmm0, [r14+rax*8]");
            __asm__("movupd xmm1, [r14+rax*8+0x10]");
            __asm__("movupd xmm2, [rdi+rax*8]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rax*8+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rax*8], xmm2");
            __asm__("movupd [r14+rax*8+0x10], xmm0");
            __asm__("movupd xmm0, [r14+rcx]");
            __asm__("movupd xmm1, [r14+rcx+0x10]");
            __asm__("movupd xmm2, [rdi+rcx]");
            __asm__("addpd xmm2, xmm0");
            __asm__("movupd xmm0, [rdi+rcx+0x10]");
            __asm__("addpd xmm0, xmm1");
            __asm__("movupd [r14+rcx], xmm2");
            __asm__("movupd [r14+rcx+0x10], xmm0");
            rax71 = rax71 + 8;
        } while (rax71 != 0x7d0);
    } else {
        do {
            rdi63->f0 = rsi62->f0;
            rdi74 = reinterpret_cast<struct s18*>(&rdi63->f4);
            rsi75 = reinterpret_cast<struct s0*>(&rsi62->f4);
            __asm__("addsd xmm0, [rdi+rax*8]");
            rdi74->f0 = rsi75->f0;
            rdi76 = reinterpret_cast<struct s19*>(&rdi74->f4);
            rsi77 = reinterpret_cast<struct s17*>(&rsi75->f4);
            rdi76->f0 = rsi77->f0;
            rdi78 = reinterpret_cast<struct s21*>(&rdi76->f4);
            rsi79 = reinterpret_cast<struct s0*>(&rsi77->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi78->f0 = rsi79->f0;
            rdi80 = reinterpret_cast<struct s3*>(&rdi78->f4);
            rsi81 = reinterpret_cast<struct s17*>(&rsi79->f4);
            rdi80->f0 = rsi81->f0;
            rdi82 = reinterpret_cast<struct s18*>(&rdi80->f4);
            rsi83 = reinterpret_cast<struct s0*>(&rsi81->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi82->f0 = rsi83->f0;
            rdi84 = reinterpret_cast<struct s19*>(&rdi82->f4);
            rsi85 = reinterpret_cast<struct s17*>(&rsi83->f4);
            rdi84->f0 = rsi85->f0;
            rdi86 = reinterpret_cast<struct s21*>(&rdi84->f4);
            rsi87 = reinterpret_cast<struct s0*>(&rsi85->f4);
            __asm__("addsd xmm0, [rdi+rcx]");
            rdi86->f0 = rsi87->f0;
            rdi63 = reinterpret_cast<struct s3*>(&rdi86->f4);
            rsi62 = reinterpret_cast<struct s17*>(&rsi87->f4);
            rax71 = rax71 + 4;
        } while (rax71 != 0x7d0);
    }
    *reinterpret_cast<int32_t*>(&rax88) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax88) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi63->f0 = rsi62->f0;
    rdi89 = reinterpret_cast<struct s18*>(&rdi63->f4);
    rsi90 = reinterpret_cast<struct s0*>(&rsi62->f4);
    do {
        rdi89->f0 = rsi90->f0;
        rdi89 = reinterpret_cast<struct s18*>(&rdi89->f4);
        rsi90 = reinterpret_cast<struct s0*>(&rsi90->f4);
        *reinterpret_cast<int32_t*>(&rcx91) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx91 + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx92 = rbx93 + rax88 * 0xfa0;
            rdi89->f0 = rsi90->f0;
            rdi94 = reinterpret_cast<struct s19*>(&rdi89->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            rsi95 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx91) * 8);
            __asm__("addsd xmm2, xmm1");
            rdi94->f0 = *rsi95;
            rdi96 = reinterpret_cast<struct s21*>(&rdi94->f4);
            rsi97 = reinterpret_cast<struct s160*>(reinterpret_cast<uint64_t>(rsi95 + 1) | 8);
            rdi96->f0 = rsi97->f0;
            rdi98 = reinterpret_cast<struct s3*>(&rdi96->f4);
            rsi99 = reinterpret_cast<struct s161*>(&rsi97->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r14+rsi]");
            __asm__("addsd xmm1, xmm2");
            rdi98->f0 = rsi99->f0;
            rdi89 = reinterpret_cast<struct s18*>(&rdi98->f4);
            rsi90 = reinterpret_cast<struct s0*>(&rsi99->f4);
            rcx91 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx91) + 2);
        } while (!reinterpret_cast<int1_t>(rcx91 == 0x7d0));
        ++rax88;
    } while (rax88 != 0x7d0);
    if (v100 >= 43 && **v101 == fputc) {
        rax102 = gc6a;
        v103 = *rax102;
        fun_c87(0xc78, 22, 1);
        rsi104 = reinterpret_cast<int32_t*>(0xc8e);
        rdi105 = v103;
        fun_ca0();
        *reinterpret_cast<int32_t*>(&rcx106) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx106) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            eax107 = *reinterpret_cast<int32_t*>(&rcx106) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax107)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi105) = 10;
                *reinterpret_cast<int32_t*>(&rdi105 + 4) = reinterpret_cast<int32_t>(fputc);
                rsi104 = v103;
                fun_d00();
            }
            *rdi105 = *rsi104;
            rdi105 = v103;
            rsi104 = reinterpret_cast<int32_t*>(0xcc1);
            fun_cc8();
            ++rcx106;
        } while (rcx106 != 0x7d0);
        fun_d20(v103, 0xd0e, 0xd15);
        *reinterpret_cast<int32_t*>(&rsi90) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi90) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx92) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx92) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx91 = v103;
        fun_d3a(0xd27, 22, 1, rcx91);
    }
    fun_c0c(rbx108, rsi90, rdx92, rcx91);
    fun_c16(v109, rsi90, rdx92, rcx91);
    fun_c1e(r15_110, rsi90, rdx92, rcx91);
    fun_c28(v111, rsi90, rdx92, rcx91);
    fun_c30(r13_112, rsi90, rdx92, rcx91);
    fun_c38(rbp113, rsi90, rdx92, rcx91);
    fun_c40(r14_114, rsi90, rdx92, rcx91);
    fun_c48(r12_115, rsi90, rdx92, rcx91);
    fun_c52(v29, rsi90, rdx92, rcx91);
    goto v116;
}

void fputc(int32_t edi) {
}

void fun_94(int32_t* rdi, int32_t* rsi) {
    __asm__("addsd xmm2, [r10+r11*8]");
    *rdi = *rsi;
    __asm__("mulsd xmm3, [r9+r11*8]");
}

void fun_108(int32_t* rdi, int32_t* rsi) {
    int64_t rbp3;
    int64_t rbx4;

    __asm__("mulsd xmm3, [r9+rbp*8+0x8]");
    __asm__("addsd xmm3, xmm2");
    *rdi = *rsi;
    if (rbp3 + 2 != rbx4) {
    }
}

struct s162 {
    int32_t f0;
    int32_t f4;
};

struct s163 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_130() {
    int64_t rbp1;
    int64_t r13_2;
    uint64_t r12_3;
    int64_t v4;
    uint64_t rbp5;
    int64_t rsi6;
    uint32_t r12d7;
    int64_t rdx8;
    int64_t r13_9;
    int64_t rdx10;
    int64_t r13_11;
    uint64_t v12;
    uint64_t rcx13;
    int64_t r8_14;
    int64_t r13_15;
    int64_t r8_16;
    int64_t r13_17;
    struct s162* rdi18;
    int32_t v19;
    uint64_t v20;
    uint64_t r9_21;
    int32_t* rsi22;
    struct s163* rsi23;
    int64_t r11_24;
    int64_t r14_25;
    int64_t r14_26;
    int64_t rbx27;

    rbp1 = r13_2 * 0x3e80;
    r12_3 = reinterpret_cast<uint64_t>(v4 + rbp1);
    rbp5 = reinterpret_cast<uint64_t>(rbp1 + rsi6);
    r12d7 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx8 + r13_9 * 8) < r12_3);
    if (!(!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(rbp5 < reinterpret_cast<uint64_t>(rdx10 + r13_11 * 8 + 8))) & *reinterpret_cast<unsigned char*>(&r12d7)) == fputc) || (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(rbp5 < v12)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(r12_3 > rcx13))) == fputc) || !reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(rbp5 < reinterpret_cast<uint64_t>(r8_14 + r13_15 * 8 + 8))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r8_16 + r13_17 * 8) < r12_3))) == fputc)))) {
        *reinterpret_cast<int32_t*>(&rdi18) = v19;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(rbp5 < v20)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(r12_3 > r9_21))) == fputc)) {
            rdi18->f0 = *rsi22;
            __asm__("unpcklpd xmm2, xmm2");
            rdi18->f4 = rsi23->f4;
            __asm__("unpcklpd xmm3, xmm3");
            *reinterpret_cast<int32_t*>(&r11_24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_24) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm4, [rbp+r11*8+0x0]");
                __asm__("movupd xmm5, [rbp+r11*8+0x10]");
                __asm__("movupd xmm6, [rcx+r11*8]");
                __asm__("movupd xmm7, [rcx+r11*8+0x10]");
                __asm__("mulpd xmm6, xmm2");
                __asm__("addpd xmm6, xmm4");
                __asm__("mulpd xmm7, xmm2");
                __asm__("addpd xmm7, xmm5");
                __asm__("movupd xmm4, [r9+r11*8]");
                __asm__("movupd xmm5, [r9+r11*8+0x10]");
                __asm__("mulpd xmm4, xmm3");
                __asm__("addpd xmm4, xmm6");
                __asm__("mulpd xmm5, xmm3");
                __asm__("addpd xmm5, xmm7");
                __asm__("movupd [rbp+r11*8+0x0], xmm4");
                __asm__("movupd [rbp+r11*8+0x10], xmm5");
                r11_24 = r11_24 + 4;
            } while (r11_24 != r14_25);
            if (r14_26 == rbx27) 
                goto 96;
        }
    }
}

struct s164 {
    int32_t f0;
    int32_t f4;
};

struct s165 {
    int32_t f0;
    int32_t f4;
};

struct s166 {
    int32_t f0;
    int32_t f4;
};

struct s167 {
    int32_t f0;
    int32_t f4;
};

struct s168 {
    int32_t f0;
    int32_t f4;
};

struct s169 {
    int32_t f0;
    int32_t f4;
};

struct s170 {
    int32_t f0;
    int32_t f4;
};

struct s171 {
    int32_t f0;
    int32_t f4;
};

void fun_297() {
    int64_t rdx1;
    int64_t rbx2;
    int32_t* rdi3;
    struct s164* rsi4;
    uint64_t r8_5;
    int64_t r9_6;
    int64_t r12_7;
    struct s165* rdi8;
    struct s166* rsi9;
    struct s164* rsi10;
    struct s167* rdi11;
    struct s168* rdi12;
    struct s166* rsi13;
    int64_t rcx14;
    unsigned char bl15;
    struct s169* rdi16;
    struct s170* rdi17;
    struct s166* rsi18;
    int32_t* rdi19;
    uint32_t v20;
    int64_t v21;
    uint64_t v22;
    int64_t rbx23;
    uint64_t rax24;
    int64_t rax25;
    int64_t rbx26;
    int64_t rcx27;
    uint32_t ebx28;
    int64_t rdx29;
    int64_t rbx30;
    int64_t rcx31;
    uint32_t ebx32;
    int64_t rdx33;
    int64_t r8_34;
    int64_t r12_35;
    struct s171* rdi36;
    struct s166* rsi37;
    int32_t* rdi38;
    struct s164* rsi39;
    struct s171* rdi40;
    struct s166* rsi41;
    unsigned char bl42;
    struct s171* rdi43;
    struct s166* rsi44;
    int64_t rbx45;
    uint64_t rdx46;
    int64_t rbx47;
    uint64_t r8_48;
    uint64_t rbx49;
    uint64_t r9_50;
    struct s171* rdi51;
    struct s166* rsi52;
    struct s171* rdi53;
    struct s166* rsi54;
    int32_t* rdi55;
    struct s164* rsi56;
    struct s171* rdi57;
    struct s166* rsi58;
    int32_t* rdi59;
    struct s164* rsi60;
    struct s171* rdi61;
    struct s166* rsi62;
    int32_t* rdi63;
    struct s164* rsi64;
    struct s171* rdi65;
    struct s166* rsi66;
    int64_t rbx67;

    while (++rdx1, rdx1 != rbx2) {
        *rdi3 = rsi4->f0;
        ++rdi3;
        rsi4 = reinterpret_cast<struct s164*>(&rsi4->f4);
        *reinterpret_cast<int32_t*>(&r8_5) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_5) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&r9_6) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_6) + 4) = reinterpret_cast<int32_t>(fputc);
        if (r12_7 != fputc) {
            do {
                rdi8 = reinterpret_cast<struct s165*>(rsi4 + r8_5 * 0x7d0);
                rdi8->f0 = rsi4->f0;
                rsi9 = reinterpret_cast<struct s166*>(&rsi4->f4);
                __asm__("mulsd xmm3, xmm1");
                __asm__("mulsd xmm3, [r15+r8*8]");
                __asm__("addsd xmm3, xmm2");
                rdi8->f4 = rsi9->f0;
                rsi10 = reinterpret_cast<struct s164*>(&rsi9->f4);
                rdi11 = reinterpret_cast<struct s167*>(r8_5 | 1);
                rdi11->f0 = rsi10->f0;
                rdi12 = reinterpret_cast<struct s168*>(&rdi11->f4);
                rsi13 = reinterpret_cast<struct s166*>(&rsi10->f4);
                __asm__("mulsd xmm2, xmm1");
                __asm__("mulsd xmm2, [r15+rdi*8]");
                __asm__("addsd xmm2, xmm3");
                rdi12->f0 = rsi13->f0;
                rdi3 = &rdi12->f4;
                rsi4 = reinterpret_cast<struct s164*>(&rsi13->f4);
                r8_5 = r8_5 + 2;
                r9_6 = r9_6 + 2;
            } while (r9_6 != rcx14);
        }
        if ((bl15 & 1) == fputc) 
            continue;
        rdi16 = reinterpret_cast<struct s169*>(rsi4 + r8_5 * 0x7d0);
        rdi16->f0 = rsi4->f0;
        rdi17 = reinterpret_cast<struct s170*>(&rdi16->f4);
        rsi18 = reinterpret_cast<struct s166*>(&rsi4->f4);
        __asm__("mulsd xmm3, xmm1");
        __asm__("mulsd xmm3, [r15+r8*8]");
        __asm__("addsd xmm3, xmm2");
        rdi17->f0 = rsi18->f0;
        rdi3 = &rdi17->f4;
        rsi4 = reinterpret_cast<struct s164*>(&rsi18->f4);
    }
    *reinterpret_cast<uint32_t*>(&rdi19) = v20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi19) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi19) == fputc)) {
        addr_557_30:
        goto v21;
    } else {
        if (*reinterpret_cast<uint32_t*>(&rdi19) >= 6) {
            if (v22 + rbx23 * 8 <= rax24 || reinterpret_cast<uint64_t>(rax25 + rbx26 * 8) <= v22) {
                *reinterpret_cast<uint32_t*>(&rcx27) = ebx28 & 0xfffffffc;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&rdx29) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movupd xmm1, [rax+rdx*8]");
                    __asm__("movupd xmm2, [rax+rdx*8+0x10]");
                    __asm__("movupd xmm3, [r10+rdx*8]");
                    __asm__("addpd xmm3, xmm1");
                    __asm__("movupd xmm1, [r10+rdx*8+0x10]");
                    __asm__("addpd xmm1, xmm2");
                    __asm__("movupd [rax+rdx*8], xmm3");
                    __asm__("movupd [rax+rdx*8+0x10], xmm1");
                    rdx29 = rdx29 + 4;
                } while (rdx29 != rcx27);
                if (rcx27 != rbx30) 
                    goto addr_3dd_36;
            } else {
                *reinterpret_cast<uint32_t*>(&rcx27) = reinterpret_cast<uint32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_3dd_36;
            }
        } else {
            *reinterpret_cast<uint32_t*>(&rcx27) = reinterpret_cast<uint32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_3dd_36;
        }
    }
    addr_482_39:
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi19) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi19) == fputc))) {
        *reinterpret_cast<uint32_t*>(&rcx31) = ebx32 & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi19 = rsi4->f0;
            rsi4 = reinterpret_cast<struct s164*>(&rsi4->f4);
            *reinterpret_cast<uint32_t*>(&rdi19) = reinterpret_cast<uint32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&r8_34) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_34) + 4) = reinterpret_cast<int32_t>(fputc);
            if (r12_35 != fputc) {
                do {
                    *rdi19 = rsi4->f0;
                    rdi36 = reinterpret_cast<struct s171*>(rdi19 + 1);
                    rsi37 = reinterpret_cast<struct s166*>(&rsi4->f4);
                    __asm__("mulsd xmm2, xmm0");
                    __asm__("mulsd xmm2, [rax+rdi*8]");
                    __asm__("addsd xmm2, xmm1");
                    rdi36->f0 = rsi37->f0;
                    rdi38 = &rdi36->f4;
                    rsi39 = reinterpret_cast<struct s164*>(&rsi37->f4);
                    *rdi38 = rsi39->f0;
                    rdi40 = reinterpret_cast<struct s171*>(rdi38 + 1);
                    rsi41 = reinterpret_cast<struct s166*>(&rsi39->f4);
                    __asm__("mulsd xmm1, xmm0");
                    __asm__("mulsd xmm1, [rax+r10]");
                    __asm__("addsd xmm1, xmm2");
                    rdi40->f0 = rsi41->f0;
                    rsi4 = reinterpret_cast<struct s164*>(&rsi41->f4);
                    rdi19 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40->f4) + 2);
                    r8_34 = r8_34 + 2;
                } while (r8_34 != rcx31);
            }
            if ((bl42 & 1) != fputc) {
                *rdi19 = rsi4->f0;
                rdi43 = reinterpret_cast<struct s171*>(rdi19 + 1);
                rsi44 = reinterpret_cast<struct s166*>(&rsi4->f4);
                __asm__("mulsd xmm2, xmm0");
                __asm__("mulsd xmm2, [rax+rdi*8]");
                __asm__("addsd xmm2, xmm1");
                rdi43->f0 = rsi44->f0;
                rdi19 = &rdi43->f4;
                rsi4 = reinterpret_cast<struct s164*>(&rsi44->f4);
            }
            ++rdx33;
        } while (rdx33 != rbx45);
        goto addr_557_30;
    }
    addr_3dd_36:
    rdx46 = reinterpret_cast<uint64_t>(~rcx27 + rbx47);
    r8_48 = rbx49 & 3;
    if (r8_48 != fputc) {
        *reinterpret_cast<int32_t*>(&r9_50) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_50) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi19 = rsi4->f0;
            rdi51 = reinterpret_cast<struct s171*>(rdi19 + 1);
            rsi52 = reinterpret_cast<struct s166*>(&rsi4->f4);
            __asm__("addsd xmm1, [r10+rcx*8]");
            rdi51->f0 = rsi52->f0;
            rdi19 = &rdi51->f4;
            rsi4 = reinterpret_cast<struct s164*>(&rsi52->f4);
            ++rcx27;
            ++r9_50;
        } while (r9_50 != r8_48);
    }
    if (rdx46 >= 3) {
        do {
            *rdi19 = rsi4->f0;
            rdi53 = reinterpret_cast<struct s171*>(rdi19 + 1);
            rsi54 = reinterpret_cast<struct s166*>(&rsi4->f4);
            __asm__("addsd xmm1, [r10+rcx*8]");
            rdi53->f0 = rsi54->f0;
            rdi55 = &rdi53->f4;
            rsi56 = reinterpret_cast<struct s164*>(&rsi54->f4);
            *rdi55 = rsi56->f0;
            rdi57 = reinterpret_cast<struct s171*>(rdi55 + 1);
            rsi58 = reinterpret_cast<struct s166*>(&rsi56->f4);
            __asm__("addsd xmm2, [r10+rcx*8+0x8]");
            rdi57->f0 = rsi58->f0;
            rdi59 = &rdi57->f4;
            rsi60 = reinterpret_cast<struct s164*>(&rsi58->f4);
            *rdi59 = rsi60->f0;
            rdi61 = reinterpret_cast<struct s171*>(rdi59 + 1);
            rsi62 = reinterpret_cast<struct s166*>(&rsi60->f4);
            __asm__("addsd xmm1, [r10+rcx*8+0x10]");
            rdi61->f0 = rsi62->f0;
            rdi63 = &rdi61->f4;
            rsi64 = reinterpret_cast<struct s164*>(&rsi62->f4);
            *rdi63 = rsi64->f0;
            rdi65 = reinterpret_cast<struct s171*>(rdi63 + 1);
            rsi66 = reinterpret_cast<struct s166*>(&rsi64->f4);
            __asm__("addsd xmm1, [r10+rcx*8+0x18]");
            rdi65->f0 = rsi66->f0;
            rdi19 = &rdi65->f4;
            rsi4 = reinterpret_cast<struct s164*>(&rsi66->f4);
            rcx27 = rcx27 + 4;
        } while (rcx27 != rbx67);
        goto addr_482_39;
    }
}

void fun_281(int32_t edi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) 
        goto 0x557;
    goto 0x2ac;
}

void submain(int32_t edi, int64_t rsi) {
    fun_596(0x3d0900, 8);
}

