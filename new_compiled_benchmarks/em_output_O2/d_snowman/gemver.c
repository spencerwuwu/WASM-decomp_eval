
void fun_6a6(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_6ae(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_6b8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_6c0(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_6c8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_6d0(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_6d8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_6e2(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_69c(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;
    int64_t r15_6;
    int64_t v7;
    int64_t r13_8;
    int64_t rbp9;
    int64_t r14_10;
    int64_t r12_11;
    int64_t v12;
    int64_t v13;

    fun_6a6(v5, rsi, rdx, rcx);
    fun_6ae(r15_6, rsi, rdx, rcx);
    fun_6b8(v7, rsi, rdx, rcx);
    fun_6c0(r13_8, rsi, rdx, rcx);
    fun_6c8(rbp9, rsi, rdx, rcx);
    fun_6d0(r14_10, rsi, rdx, rcx);
    fun_6d8(r12_11, rsi, rdx, rcx);
    fun_6e2(v12, rsi, rdx, rcx);
    goto v13;
}

void fputc(int32_t edi, int64_t rsi);

void fun_790();

void fun_7b0(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_7ca(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_758() {
    int64_t rcx1;
    int64_t rcx2;
    int32_t eax3;
    int32_t* rdi4;
    int32_t* rsi5;
    int64_t rbx6;
    int64_t v7;
    int64_t r15_8;
    int64_t v9;
    int64_t r13_10;
    int64_t rbp11;
    int64_t r14_12;
    int64_t r12_13;
    int64_t v14;
    int64_t v15;

    while (rcx1 = rcx2 + 1, rcx1 != 0x7d0) {
        eax3 = *reinterpret_cast<int32_t*>(&rcx1) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax3)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = reinterpret_cast<int32_t*>(__return_address());
            fun_790();
        }
        *rdi4 = *rsi5;
        rdi4 = reinterpret_cast<int32_t*>(__return_address());
        rsi5 = reinterpret_cast<int32_t*>(0x751);
        fun_758();
    }
    fun_7b0(__return_address(), 0x79e, 0x7a5);
    fun_7ca(0x7b7, 22, 1, __return_address());
    fun_69c(rbx6, 22, 1, __return_address());
    fun_6a6(v7, 22, 1, __return_address());
    fun_6ae(r15_8, 22, 1, __return_address());
    fun_6b8(v9, 22, 1, __return_address());
    fun_6c0(r13_10, 22, 1, __return_address());
    fun_6c8(rbp11, 22, 1, __return_address());
    fun_6d0(r14_12, 22, 1, __return_address());
    fun_6d8(r12_13, 22, 1, __return_address());
    fun_6e2(v14, 22, 1, __return_address());
    goto v15;
}

void fun_790() {
    int32_t* v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int64_t rcx4;
    int32_t eax5;
    int64_t rbx6;
    int64_t v7;
    int64_t r15_8;
    int64_t v9;
    int64_t r13_10;
    int64_t rbp11;
    int64_t r14_12;
    int64_t r12_13;
    int64_t v14;
    int64_t v15;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<int32_t*>(0x751);
            fun_758();
            ++rcx4;
            if (rcx4 == 0x7d0) 
                goto addr_797_7;
            eax5 = *reinterpret_cast<int32_t*>(&rcx4) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_790();
    }
    addr_797_7:
    fun_7b0(v1, 0x79e, 0x7a5);
    fun_7ca(0x7b7, 22, 1, v1);
    fun_69c(rbx6, 22, 1, v1);
    fun_6a6(v7, 22, 1, v1);
    fun_6ae(r15_8, 22, 1, v1);
    fun_6b8(v9, 22, 1, v1);
    fun_6c0(r13_10, 22, 1, v1);
    fun_6c8(rbp11, 22, 1, v1);
    fun_6d0(r14_12, 22, 1, v1);
    fun_6d8(r12_13, 22, 1, v1);
    fun_6e2(v14, 22, 1, v1);
    goto v15;
}

void fun_730();

void fun_717(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* v4;
    int32_t* rsi5;
    int32_t* rdi6;
    int64_t rcx7;
    int32_t eax8;
    int64_t rbx9;
    int64_t v10;
    int64_t r15_11;
    int64_t v12;
    int64_t r13_13;
    int64_t rbp14;
    int64_t r14_15;
    int64_t r12_16;
    int64_t v17;
    int64_t v18;

    v4 = reinterpret_cast<int32_t*>(__return_address());
    rsi5 = reinterpret_cast<int32_t*>(0x71e);
    rdi6 = v4;
    fun_730();
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        eax8 = *reinterpret_cast<int32_t*>(&rcx7) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax8)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_790();
        }
        *rdi6 = *rsi5;
        rdi6 = v4;
        rsi5 = reinterpret_cast<int32_t*>(0x751);
        fun_758();
        ++rcx7;
    } while (rcx7 != 0x7d0);
    fun_7b0(v4, 0x79e, 0x7a5);
    fun_7ca(0x7b7, 22, 1, v4);
    fun_69c(rbx9, 22, 1, v4);
    fun_6a6(v10, 22, 1, v4);
    fun_6ae(r15_11, 22, 1, v4);
    fun_6b8(v12, 22, 1, v4);
    fun_6c0(r13_13, 22, 1, v4);
    fun_6c8(rbp14, 22, 1, v4);
    fun_6d0(r14_15, 22, 1, v4);
    fun_6d8(r12_16, 22, 1, v4);
    fun_6e2(v17, 22, 1, v4);
    goto v18;
}

void fun_6a6(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t v6;
    int64_t r13_7;
    int64_t rbp8;
    int64_t r14_9;
    int64_t r12_10;
    int64_t v11;
    int64_t v12;

    fun_6ae(r15_5, rsi, rdx, rcx);
    fun_6b8(v6, rsi, rdx, rcx);
    fun_6c0(r13_7, rsi, rdx, rcx);
    fun_6c8(rbp8, rsi, rdx, rcx);
    fun_6d0(r14_9, rsi, rdx, rcx);
    fun_6d8(r12_10, rsi, rdx, rcx);
    fun_6e2(v11, rsi, rdx, rcx);
    goto v12;
}

void fun_730() {
    int32_t* v1;
    int64_t rcx2;
    int32_t eax3;
    int32_t* rdi4;
    int32_t* rsi5;
    int64_t rbx6;
    int64_t v7;
    int64_t r15_8;
    int64_t v9;
    int64_t r13_10;
    int64_t rbp11;
    int64_t r14_12;
    int64_t r12_13;
    int64_t v14;
    int64_t v15;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    *reinterpret_cast<int32_t*>(&rcx2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        eax3 = *reinterpret_cast<int32_t*>(&rcx2) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax3)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v1;
            fun_790();
        }
        *rdi4 = *rsi5;
        rdi4 = v1;
        rsi5 = reinterpret_cast<int32_t*>(0x751);
        fun_758();
        ++rcx2;
    } while (rcx2 != 0x7d0);
    fun_7b0(v1, 0x79e, 0x7a5);
    fun_7ca(0x7b7, 22, 1, v1);
    fun_69c(rbx6, 22, 1, v1);
    fun_6a6(v7, 22, 1, v1);
    fun_6ae(r15_8, 22, 1, v1);
    fun_6b8(v9, 22, 1, v1);
    fun_6c0(r13_10, 22, 1, v1);
    fun_6c8(rbp11, 22, 1, v1);
    fun_6d0(r14_12, 22, 1, v1);
    fun_6d8(r12_13, 22, 1, v1);
    fun_6e2(v14, 22, 1, v1);
    goto v15;
}

void fun_6ae(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;
    int64_t r13_6;
    int64_t rbp7;
    int64_t r14_8;
    int64_t r12_9;
    int64_t v10;
    int64_t v11;

    fun_6b8(v5, rsi, rdx, rcx);
    fun_6c0(r13_6, rsi, rdx, rcx);
    fun_6c8(rbp7, rsi, rdx, rcx);
    fun_6d0(r14_8, rsi, rdx, rcx);
    fun_6d8(r12_9, rsi, rdx, rcx);
    fun_6e2(v10, rsi, rdx, rcx);
    goto v11;
}

void fun_7b0(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int64_t rbx4;
    int64_t v5;
    int64_t r15_6;
    int64_t v7;
    int64_t r13_8;
    int64_t rbp9;
    int64_t r14_10;
    int64_t r12_11;
    int64_t v12;
    int64_t v13;

    fun_7ca(0x7b7, 22, 1, __return_address());
    fun_69c(rbx4, 22, 1, __return_address());
    fun_6a6(v5, 22, 1, __return_address());
    fun_6ae(r15_6, 22, 1, __return_address());
    fun_6b8(v7, 22, 1, __return_address());
    fun_6c0(r13_8, 22, 1, __return_address());
    fun_6c8(rbp9, 22, 1, __return_address());
    fun_6d0(r14_10, 22, 1, __return_address());
    fun_6d8(r12_11, 22, 1, __return_address());
    fun_6e2(v12, 22, 1, __return_address());
    goto v13;
}

void fun_6b8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int64_t rbp6;
    int64_t r14_7;
    int64_t r12_8;
    int64_t v9;
    int64_t v10;

    fun_6c0(r13_5, rsi, rdx, rcx);
    fun_6c8(rbp6, rsi, rdx, rcx);
    fun_6d0(r14_7, rsi, rdx, rcx);
    fun_6d8(r12_8, rsi, rdx, rcx);
    fun_6e2(v9, rsi, rdx, rcx);
    goto v10;
}

void fun_7ca(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t v6;
    int64_t r15_7;
    int64_t v8;
    int64_t r13_9;
    int64_t rbp10;
    int64_t r14_11;
    int64_t r12_12;
    int64_t v13;
    int64_t v14;

    fun_69c(rbx5, rsi, rdx, rcx);
    fun_6a6(v6, rsi, rdx, rcx);
    fun_6ae(r15_7, rsi, rdx, rcx);
    fun_6b8(v8, rsi, rdx, rcx);
    fun_6c0(r13_9, rsi, rdx, rcx);
    fun_6c8(rbp10, rsi, rdx, rcx);
    fun_6d0(r14_11, rsi, rdx, rcx);
    fun_6d8(r12_12, rsi, rdx, rcx);
    fun_6e2(v13, rsi, rdx, rcx);
    goto v14;
}

void fun_6c0(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbp5;
    int64_t r14_6;
    int64_t r12_7;
    int64_t v8;
    int64_t v9;

    fun_6c8(rbp5, rsi, rdx, rcx);
    fun_6d0(r14_6, rsi, rdx, rcx);
    fun_6d8(r12_7, rsi, rdx, rcx);
    fun_6e2(v8, rsi, rdx, rcx);
    goto v9;
}

void fun_6c8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r12_6;
    int64_t v7;
    int64_t v8;

    fun_6d0(r14_5, rsi, rdx, rcx);
    fun_6d8(r12_6, rsi, rdx, rcx);
    fun_6e2(v7, rsi, rdx, rcx);
    goto v8;
}

void fun_6d0(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t v6;
    int64_t v7;

    fun_6d8(r12_5, rsi, rdx, rcx);
    fun_6e2(v6, rsi, rdx, rcx);
    goto v7;
}

void fun_6d8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;
    int64_t v6;

    fun_6e2(v5, rsi, rdx, rcx);
    goto v6;
}

void fun_6e2(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_a8(int64_t rdi, int64_t rsi);

void fun_94() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    fun_a8(0x7d0, 8);
}

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
    int32_t f1;
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
    signed char[16000] pad16000;
    int32_t f3e80;
};

struct s13 {
    signed char[16000] pad16000;
    int32_t f3e80;
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
    signed char[16000] pad16000;
    int32_t f3e80;
};

struct s23 {
    int32_t f0;
    int32_t f4;
};

struct s24 {
    int32_t f0;
    int32_t f4;
};

void fun_100() {
    struct s0* rdi1;
    struct s1* rsi2;
    struct s2* rdi3;
    struct s3* rsi4;
    struct s0* rcx5;
    struct s4* rdi6;
    struct s5* rsi7;
    struct s6* rdi8;
    struct s7* rsi9;
    struct s8* rdi10;
    struct s9* rsi11;
    int32_t* rdi12;
    void* rdi13;
    int64_t* r14_14;
    int64_t* rbp15;
    int64_t rdx16;
    int32_t* rbx17;
    struct s10* v18;
    struct s10* rax19;
    struct s11* v20;
    struct s12* r15_21;
    struct s11* v22;
    struct s13* r13_23;
    int64_t rax24;
    struct s14* rsi25;
    void* rdi26;
    void* r11_27;
    void* rbx28;
    struct s11* rdi29;
    int32_t* rbx30;
    void* r11_31;
    void* r15_32;
    void* r9_33;
    int64_t r8_34;
    void* v35;
    void* v36;
    void* v37;
    void* v38;
    void* r13_39;
    struct s15* rdi40;
    struct s16* rsi41;
    struct s11* rdi42;
    struct s14* rsi43;
    struct s15* rdi44;
    struct s16* rsi45;
    struct s11* rdi46;
    struct s14* rsi47;
    struct s15* rdi48;
    struct s16* rsi49;
    struct s15* rdi50;
    struct s16* rsi51;
    int64_t r8_52;
    struct s16* rsi53;
    struct s10* rdi54;
    uint64_t rcx55;
    struct s17* rdi56;
    struct s18* rdi57;
    struct s19* rsi58;
    int32_t* rbx59;
    struct s20* rdi60;
    struct s21* rsi61;
    int64_t rax62;
    uint64_t r14_63;
    struct s22* r14_64;
    struct s17* rdi65;
    struct s14* rsi66;
    struct s18* rdi67;
    struct s16* rsi68;
    struct s20* rdi69;
    struct s14* rsi70;
    struct s10* rdi71;
    struct s16* rsi72;
    struct s17* rdi73;
    struct s14* rsi74;
    struct s18* rdi75;
    struct s16* rsi76;
    struct s20* rdi77;
    struct s14* rsi78;
    int64_t rax79;
    struct s17* rdi80;
    struct s14* rsi81;
    int64_t rcx82;
    struct s18* rdi83;
    int32_t* rsi84;
    struct s20* rdi85;
    struct s23* rsi86;
    struct s10* rdi87;
    struct s24* rsi88;
    int32_t v89;
    signed char** v90;

    __asm__("outsd ");
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("movapd xmm9, [rip+0x0]");
    __asm__("movdqa xmm10, [rip+0x0]");
    do {
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, edi");
        rdi1->f0 = rsi2->f0;
        rdi3 = reinterpret_cast<struct s2*>(&rdi1->f4);
        rsi4 = reinterpret_cast<struct s3*>(&rsi2->f4);
        rcx5 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rdi3) + 1);
        __asm__("xorps xmm11, xmm11");
        __asm__("cvtsi2sd xmm11, ecx");
        __asm__("divsd xmm11, xmm0");
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm1");
        rdi3->f0 = rsi4->f0;
        rdi6 = reinterpret_cast<struct s4*>(&rdi3->f1);
        rsi7 = reinterpret_cast<struct s5*>(&rsi4->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm2");
        rdi6->f0 = rsi7->f0;
        rdi8 = reinterpret_cast<struct s6*>(&rdi6->f4);
        rsi9 = reinterpret_cast<struct s7*>(&rsi7->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("divsd xmm12, xmm3");
        rdi8->f0 = rsi9->f0;
        rdi10 = reinterpret_cast<struct s8*>(&rdi8->f4);
        rsi11 = reinterpret_cast<struct s9*>(&rsi9->f4);
        __asm__("movapd xmm12, xmm11");
        __asm__("mulsd xmm12, xmm4");
        rdi10->f0 = rsi11->f0;
        rdi12 = &rdi10->f4;
        __asm__("divsd xmm11, xmm5");
        *rdi12 = rsi11->f4;
        rdi13 = reinterpret_cast<void*>(rdi12 + 1);
        r14_14[static_cast<int64_t>(rdi13)] = reinterpret_cast<int64_t>(fputc);
        rbp15[static_cast<int64_t>(rdi13)] = reinterpret_cast<int64_t>(fputc);
        __asm__("movd xmm11, rdi");
        __asm__("pshufd xmm11, xmm11, 0x44");
        *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
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
            rsi2 = reinterpret_cast<struct s1*>(rbx17 + reinterpret_cast<int64_t>(rdi13) * 0xfa0);
            __asm__("movupd [rsi+rdx*8], xmm13");
            rdx16 = rdx16 + 2;
            __asm__("paddq xmm12, xmm10");
        } while (rdx16 != 0x7d0);
        rdi1 = rcx5;
    } while (!reinterpret_cast<int1_t>(rcx5 == 0x7d0));
    v18 = rax19;
    v20 = reinterpret_cast<struct s11*>(&r15_21->f3e80);
    v22 = reinterpret_cast<struct s11*>(&r13_23->f3e80);
    *reinterpret_cast<int32_t*>(&rax24) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi25) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi26 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi25) * 0x3e80);
        r11_27 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbx28) + reinterpret_cast<uint64_t>(rdi26) + 0x3e80);
        rdi29 = reinterpret_cast<struct s11*>(reinterpret_cast<uint64_t>(rdi26) + reinterpret_cast<int64_t>(rbx30));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi29) < reinterpret_cast<int64_t>(r11_31) + reinterpret_cast<uint64_t>(rsi25) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r11_31) + reinterpret_cast<uint64_t>(rsi25) * 8 < reinterpret_cast<uint64_t>(r11_27)))) == fputc) || (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi29) < reinterpret_cast<uint64_t>(v20))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r15_32) < reinterpret_cast<uint64_t>(r11_27)))) == fputc) || !reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi29) < reinterpret_cast<int64_t>(r9_33) + reinterpret_cast<uint64_t>(rsi25) * 8 + 8)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(r9_33) + reinterpret_cast<uint64_t>(rsi25) * 8 < reinterpret_cast<uint64_t>(r11_27)))) == fputc))) {
            *reinterpret_cast<int32_t*>(&r8_34) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_34) + 4) = reinterpret_cast<int32_t>(fputc);
            r11_31 = v35;
            r9_33 = v36;
            goto addr_400_26;
        }
        *reinterpret_cast<int32_t*>(&r8_34) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_34) + 4) = reinterpret_cast<int32_t>(fputc);
        r11_31 = v37;
        r9_33 = v38;
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi29) < reinterpret_cast<uint64_t>(v22))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_39) < reinterpret_cast<uint64_t>(r11_27)))) == fputc)) {
            do {
                addr_400_26:
                rdi29->f0 = rsi25->f0;
                rdi40 = reinterpret_cast<struct s15*>(&rdi29->f4);
                rsi41 = reinterpret_cast<struct s16*>(&rsi25->f4);
                __asm__("mulsd xmm0, [r15+r8*8]");
                __asm__("addsd xmm0, [rdi+r8*8]");
                rdi40->f0 = rsi41->f0;
                rdi42 = reinterpret_cast<struct s11*>(&rdi40->f4);
                rsi43 = reinterpret_cast<struct s14*>(&rsi41->f4);
                __asm__("mulsd xmm1, [r13+r8*8+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi42->f0 = rsi43->f0;
                rdi44 = reinterpret_cast<struct s15*>(&rdi42->f4);
                rsi45 = reinterpret_cast<struct s16*>(&rsi43->f4);
                rdi44->f0 = rsi45->f0;
                rdi46 = reinterpret_cast<struct s11*>(&rdi44->f4);
                rsi47 = reinterpret_cast<struct s14*>(&rsi45->f4);
                __asm__("mulsd xmm0, [r15+rcx]");
                __asm__("addsd xmm0, [rcx+rdi]");
                rdi46->f0 = rsi47->f0;
                rdi48 = reinterpret_cast<struct s15*>(&rdi46->f4);
                rsi49 = reinterpret_cast<struct s16*>(&rsi47->f4);
                __asm__("mulsd xmm1, [r13+rcx+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi48->f0 = rsi49->f0;
                rdi29 = reinterpret_cast<struct s11*>(&rdi48->f4);
                rsi25 = reinterpret_cast<struct s14*>(&rsi49->f4);
                r8_34 = r8_34 + 2;
            } while (r8_34 != 0x7d0);
        } else {
            rdi29->f0 = rsi25->f0;
            rdi50 = reinterpret_cast<struct s15*>(&rdi29->f4);
            rsi51 = reinterpret_cast<struct s16*>(&rsi25->f4);
            __asm__("unpcklpd xmm0, xmm0");
            rdi50->f0 = rsi51->f0;
            rdi29 = reinterpret_cast<struct s11*>(&rdi50->f4);
            rsi25 = reinterpret_cast<struct s14*>(&rsi51->f4);
            __asm__("unpcklpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&r8_52) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_52) + 4) = reinterpret_cast<int32_t>(fputc);
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
                r8_52 = r8_52 + 4;
            } while (r8_52 != 0x7d0);
            continue;
        }
        rsi25 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rsi25) + 1);
    } while (rsi25 != 0x7d0);
    rdi29->f0 = rsi25->f0;
    rsi53 = reinterpret_cast<struct s16*>(&rsi25->f4);
    rdi54 = v18;
    do {
        rdi54->f0 = rsi53->f0;
        rdi54 = reinterpret_cast<struct s10*>(&rdi54->f4);
        rsi53 = reinterpret_cast<struct s16*>(&rsi53->f4);
        *reinterpret_cast<int32_t*>(&rcx55) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx55) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi54->f0 = rsi53->f0;
            rdi56 = reinterpret_cast<struct s17*>(&rdi54->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, xmm1");
            rdi56->f0 = rsi53->f4;
            rdi57 = reinterpret_cast<struct s18*>(&rdi56->f4);
            rsi58 = reinterpret_cast<struct s19*>(rbx59 + (rcx55 | 1) * 0xfa0);
            rdi57->f0 = rsi58->f0;
            rdi60 = reinterpret_cast<struct s20*>(&rdi57->f4);
            rsi61 = reinterpret_cast<struct s21*>(&rsi58->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm2");
            rdi60->f0 = rsi61->f0;
            rdi54 = reinterpret_cast<struct s10*>(&rdi60->f4);
            rsi53 = reinterpret_cast<struct s16*>(&rsi61->f4);
            rcx55 = rcx55 + 2;
        } while (rcx55 != 0x7d0);
        ++rax24;
    } while (rax24 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rax62) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax62) + 4) = reinterpret_cast<int32_t>(fputc);
    if (r14_63 >= reinterpret_cast<uint64_t>(rdi54 + 0x7d0) || reinterpret_cast<uint64_t>(rdi54) >= reinterpret_cast<uint64_t>(&r14_64->f3e80)) {
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
            rax62 = rax62 + 8;
        } while (rax62 != 0x7d0);
    } else {
        do {
            rdi54->f0 = rsi53->f0;
            rdi65 = reinterpret_cast<struct s17*>(&rdi54->f4);
            rsi66 = reinterpret_cast<struct s14*>(&rsi53->f4);
            __asm__("addsd xmm0, [rdi+rax*8]");
            rdi65->f0 = rsi66->f0;
            rdi67 = reinterpret_cast<struct s18*>(&rdi65->f4);
            rsi68 = reinterpret_cast<struct s16*>(&rsi66->f4);
            rdi67->f0 = rsi68->f0;
            rdi69 = reinterpret_cast<struct s20*>(&rdi67->f4);
            rsi70 = reinterpret_cast<struct s14*>(&rsi68->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi69->f0 = rsi70->f0;
            rdi71 = reinterpret_cast<struct s10*>(&rdi69->f4);
            rsi72 = reinterpret_cast<struct s16*>(&rsi70->f4);
            rdi71->f0 = rsi72->f0;
            rdi73 = reinterpret_cast<struct s17*>(&rdi71->f4);
            rsi74 = reinterpret_cast<struct s14*>(&rsi72->f4);
            __asm__("addsd xmm0, [rdi+rdx]");
            rdi73->f0 = rsi74->f0;
            rdi75 = reinterpret_cast<struct s18*>(&rdi73->f4);
            rsi76 = reinterpret_cast<struct s16*>(&rsi74->f4);
            rdi75->f0 = rsi76->f0;
            rdi77 = reinterpret_cast<struct s20*>(&rdi75->f4);
            rsi78 = reinterpret_cast<struct s14*>(&rsi76->f4);
            __asm__("addsd xmm0, [rdi+rcx]");
            rdi77->f0 = rsi78->f0;
            rdi54 = reinterpret_cast<struct s10*>(&rdi77->f4);
            rsi53 = reinterpret_cast<struct s16*>(&rsi78->f4);
            rax62 = rax62 + 4;
        } while (rax62 != 0x7d0);
    }
    *reinterpret_cast<int32_t*>(&rax79) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax79) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi54->f0 = rsi53->f0;
    rdi80 = reinterpret_cast<struct s17*>(&rdi54->f4);
    rsi81 = reinterpret_cast<struct s14*>(&rsi53->f4);
    do {
        rdi80->f0 = rsi81->f0;
        rdi80 = reinterpret_cast<struct s17*>(&rdi80->f4);
        rsi81 = reinterpret_cast<struct s14*>(&rsi81->f4);
        *reinterpret_cast<int32_t*>(&rcx82) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx82) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi80->f0 = rsi81->f0;
            rdi83 = reinterpret_cast<struct s18*>(&rdi80->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            rsi84 = reinterpret_cast<int32_t*>(rcx82 * 8);
            __asm__("addsd xmm2, xmm1");
            rdi83->f0 = *rsi84;
            rdi85 = reinterpret_cast<struct s20*>(&rdi83->f4);
            rsi86 = reinterpret_cast<struct s23*>(reinterpret_cast<uint64_t>(rsi84 + 1) | 8);
            rdi85->f0 = rsi86->f0;
            rdi87 = reinterpret_cast<struct s10*>(&rdi85->f4);
            rsi88 = reinterpret_cast<struct s24*>(&rsi86->f4);
            __asm__("mulsd xmm1, xmm0");
            __asm__("mulsd xmm1, [r14+rsi]");
            __asm__("addsd xmm1, xmm2");
            rdi87->f0 = rsi88->f0;
            rdi80 = reinterpret_cast<struct s17*>(&rdi87->f4);
            rsi81 = reinterpret_cast<struct s14*>(&rsi88->f4);
            rcx82 = rcx82 + 2;
        } while (rcx82 != 0x7d0);
        ++rax79;
    } while (rax79 != 0x7d0);
    if (v89 < 43) 
        goto 0x694;
    if (**v90 != fputc) 
        goto "???";
    fun_717(0x708, 22, 1);
}

