
struct s0 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_c3(struct s0* rdi, int32_t* rsi);

void fputc(int32_t edi);

int32_t g7d0;

int32_t g8 = 0xf6628eb;

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
    int32_t f1;
    int32_t f4;
    signed char[1989] pad2001;
    int32_t f7d1;
};

struct s4 {
    int32_t f0;
    int32_t f4;
};

int32_t** g1f7 = reinterpret_cast<int32_t**>(0x3d8d48208b4c);

void fun_213(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_22d();

void fun_25f();

void fun_27c();

void fun_296(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_2af(int64_t rdi, struct s2* rsi, int64_t rdx, int32_t* rcx);

void fun_1cf(int64_t rdi, struct s2* rsi, int64_t rdx, int32_t* rcx);

void fun_1d7(int64_t* rdi, struct s2* rsi, int64_t rdx, int32_t* rcx);

void fun_1df(int64_t rdi, struct s2* rsi, int64_t rdx, int32_t* rcx);

void fun_b1() {
    int64_t* r14_1;
    int64_t* rax2;
    int64_t rax3;
    int64_t r15_4;
    int64_t rcx5;
    int64_t rax6;
    int64_t rdx7;
    struct s1* rdi8;
    struct s2* rsi9;
    struct s3* rsi10;
    int64_t r8_11;
    struct s4* rdi12;
    struct s3* rsi13;
    struct s1* rdi14;
    struct s2* rsi15;
    int64_t rcx16;
    int64_t rbx17;
    struct s4* rdi18;
    struct s3* rsi19;
    struct s4* rdi20;
    struct s3* rsi21;
    int32_t* rcx22;
    int32_t* rbx23;
    int32_t ebp24;
    signed char** r12_25;
    int32_t** rax26;
    int32_t* r12_27;
    int32_t* rcx28;
    int32_t* rsi29;
    int64_t rbp30;
    int32_t* rdi31;
    int64_t rbx32;
    int64_t v33;

    r14_1 = rax2;
    rax3 = fun_c3(0x7d0, 8);
    r15_4 = rax3;
    *reinterpret_cast<int32_t*>(&rcx5) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx7 = 0xc08f380000000000;
    g7d0 = g8;
    rdi8 = reinterpret_cast<struct s1*>(0x7d4);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, esi");
        r14_1[static_cast<int64_t>(rsi9)] = 0xc08f380000000000;
        rdi8->f0 = rsi9->f0;
        rsi10 = reinterpret_cast<struct s3*>(&rsi9->f4);
        rdi8 = reinterpret_cast<struct s1*>(&rsi10->f7d1);
        *reinterpret_cast<int32_t*>(&r8_11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r9d");
            __asm__("addsd xmm1, xmm1");
            __asm__("divsd xmm1, xmm0");
            rdi8->f0 = rsi10->f0;
            rdi8 = reinterpret_cast<struct s1*>(&rdi8->f4);
            rsi10 = reinterpret_cast<struct s3*>(&rsi10->f1);
            ++r8_11;
        } while (r8_11 != rcx5);
        rsi9 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rsi10) + 1);
        ++rcx5;
    } while (!reinterpret_cast<int1_t>(rsi9 == 0x7d0));
    do {
        rdi8->f0 = rsi9->f0;
        rdi12 = reinterpret_cast<struct s4*>(&rdi8->f4);
        rsi13 = reinterpret_cast<struct s3*>(&rsi9->f4);
        rdi12->f0 = rsi13->f0;
        rdi14 = reinterpret_cast<struct s1*>(&rdi12->f4);
        rsi15 = reinterpret_cast<struct s2*>(&rsi13->f1);
        if (rax6 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdx7 = rax6 * 0x3e80 + rbx17;
                rdi14->f0 = rsi15->f0;
                rdi18 = reinterpret_cast<struct s4*>(&rdi14->f4);
                rsi19 = reinterpret_cast<struct s3*>(&rsi15->f4);
                __asm__("mulsd xmm1, [r14+rcx*8]");
                __asm__("subsd xmm0, xmm1");
                rdi18->f0 = rsi19->f0;
                rdi14 = reinterpret_cast<struct s1*>(&rdi18->f4);
                rsi15 = reinterpret_cast<struct s2*>(&rsi19->f1);
                ++rcx16;
            } while (rcx16 != rax6);
        }
        rdi14->f0 = rsi15->f0;
        rdi20 = reinterpret_cast<struct s4*>(&rdi14->f4);
        rsi21 = reinterpret_cast<struct s3*>(&rsi15->f4);
        rcx22 = rbx23 + rax6 * 0xfa0;
        __asm__("divsd xmm0, [rcx+rax*8]");
        rdi20->f0 = rsi21->f0;
        rdi8 = reinterpret_cast<struct s1*>(&rdi20->f4);
        rsi9 = reinterpret_cast<struct s2*>(&rsi21->f1);
        ++rax6;
    } while (rax6 != 0x7d0);
    if (ebp24 >= 43 && **r12_25 == fputc) {
        rax26 = g1f7;
        r12_27 = *rax26;
        rcx28 = r12_27;
        fun_213(0x201, 22, 1, rcx28);
        rsi29 = reinterpret_cast<int32_t*>(0x21a);
        *reinterpret_cast<int32_t*>(&rbp30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp30) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi31 = r12_27;
        fun_22d();
        do {
            *rdi31 = *rsi29;
            rdi31 = r12_27;
            rsi29 = reinterpret_cast<int32_t*>(0x234);
            fun_25f();
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp30) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi31) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi29 = r12_27;
                fun_27c();
            }
            ++rbp30;
        } while (rbp30 != 0x7d0);
        fun_296(r12_27, 0x285, 0x28c, rcx28);
        *reinterpret_cast<int32_t*>(&rsi9) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx22 = r12_27;
        fun_2af(0x29d, 22, 1, rcx22);
    }
    fun_1cf(rbx32, rsi9, rdx7, rcx22);
    fun_1d7(r14_1, rsi9, rdx7, rcx22);
    fun_1df(r15_4, rsi9, rdx7, rcx22);
    goto v33;
}

void fun_1cf(int64_t rdi, struct s2* rsi, int64_t rdx, int32_t* rcx) {
    int64_t* r14_5;
    int64_t r15_6;
    int64_t v7;

    fun_1d7(r14_5, rsi, rdx, rcx);
    fun_1df(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_25f() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r12_4;
    int32_t* r12_5;
    int32_t* r13_6;
    int32_t* r12_7;
    int32_t* rcx8;
    int32_t* r12_9;
    int64_t rbx10;
    int64_t* r14_11;
    int64_t r15_12;
    int64_t v13;

    while (1) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r12_4;
            fun_27c();
        }
        ++rbp1;
        if (rbp1 == 0x7d0) 
            break;
        *rdi2 = *rsi3;
        rdi2 = r12_5;
        rsi3 = r13_6;
        fun_25f();
    }
    fun_296(r12_7, 0x285, 0x28c, rcx8);
    fun_2af(0x29d, 22, 1, r12_9);
    fun_1cf(rbx10, 22, 1, r12_9);
    fun_1d7(r14_11, 22, 1, r12_9);
    fun_1df(r15_12, 22, 1, r12_9);
    goto v13;
}

void fun_27c() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r12_4;
    int32_t* r13_5;
    int32_t* r12_6;
    int32_t* r12_7;
    int32_t* rcx8;
    int32_t* r12_9;
    int64_t rbx10;
    int64_t* r14_11;
    int64_t r15_12;
    int64_t v13;

    while (1) {
        do {
            ++rbp1;
            if (rbp1 == 0x7d0) 
                goto addr_27e_3;
            *rdi2 = *rsi3;
            rdi2 = r12_4;
            rsi3 = r13_5;
            fun_25f();
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = r12_6;
        fun_27c();
    }
    addr_27e_3:
    fun_296(r12_7, 0x285, 0x28c, rcx8);
    fun_2af(0x29d, 22, 1, r12_9);
    fun_1cf(rbx10, 22, 1, r12_9);
    fun_1d7(r14_11, 22, 1, r12_9);
    fun_1df(r15_12, 22, 1, r12_9);
    goto v13;
}

int64_t fun_c3(struct s0* rdi, int32_t* rsi) {
    int64_t r15_3;
    int64_t rax4;
    int64_t rcx5;
    int64_t rax6;
    int64_t rdx7;
    struct s1* rdi8;
    struct s2* rsi9;
    int64_t* r14_10;
    struct s3* rsi11;
    int64_t r8_12;
    struct s4* rdi13;
    struct s3* rsi14;
    struct s1* rdi15;
    struct s2* rsi16;
    int64_t rcx17;
    int64_t rbx18;
    struct s4* rdi19;
    struct s3* rsi20;
    struct s4* rdi21;
    struct s3* rsi22;
    int32_t* rcx23;
    int32_t* rbx24;
    int32_t ebp25;
    signed char** r12_26;
    int32_t** rax27;
    int32_t* r12_28;
    int32_t* rcx29;
    int32_t* rsi30;
    int64_t rbp31;
    int32_t* rdi32;
    int64_t rbx33;
    int64_t* r14_34;
    int64_t v35;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&rcx5) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx7 = 0xc08f380000000000;
    rdi->f0 = *rsi;
    rdi8 = reinterpret_cast<struct s1*>(&rdi->f4);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, esi");
        r14_10[static_cast<int64_t>(rsi9)] = 0xc08f380000000000;
        rdi8->f0 = rsi9->f0;
        rsi11 = reinterpret_cast<struct s3*>(&rsi9->f4);
        rdi8 = reinterpret_cast<struct s1*>(&rsi11->f7d1);
        *reinterpret_cast<int32_t*>(&r8_12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r9d");
            __asm__("addsd xmm1, xmm1");
            __asm__("divsd xmm1, xmm0");
            rdi8->f0 = rsi11->f0;
            rdi8 = reinterpret_cast<struct s1*>(&rdi8->f4);
            rsi11 = reinterpret_cast<struct s3*>(&rsi11->f1);
            ++r8_12;
        } while (r8_12 != rcx5);
        rsi9 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rsi11) + 1);
        ++rcx5;
    } while (!reinterpret_cast<int1_t>(rsi9 == 0x7d0));
    do {
        rdi8->f0 = rsi9->f0;
        rdi13 = reinterpret_cast<struct s4*>(&rdi8->f4);
        rsi14 = reinterpret_cast<struct s3*>(&rsi9->f4);
        rdi13->f0 = rsi14->f0;
        rdi15 = reinterpret_cast<struct s1*>(&rdi13->f4);
        rsi16 = reinterpret_cast<struct s2*>(&rsi14->f1);
        if (rax6 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx17) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdx7 = rax6 * 0x3e80 + rbx18;
                rdi15->f0 = rsi16->f0;
                rdi19 = reinterpret_cast<struct s4*>(&rdi15->f4);
                rsi20 = reinterpret_cast<struct s3*>(&rsi16->f4);
                __asm__("mulsd xmm1, [r14+rcx*8]");
                __asm__("subsd xmm0, xmm1");
                rdi19->f0 = rsi20->f0;
                rdi15 = reinterpret_cast<struct s1*>(&rdi19->f4);
                rsi16 = reinterpret_cast<struct s2*>(&rsi20->f1);
                ++rcx17;
            } while (rcx17 != rax6);
        }
        rdi15->f0 = rsi16->f0;
        rdi21 = reinterpret_cast<struct s4*>(&rdi15->f4);
        rsi22 = reinterpret_cast<struct s3*>(&rsi16->f4);
        rcx23 = rbx24 + rax6 * 0xfa0;
        __asm__("divsd xmm0, [rcx+rax*8]");
        rdi21->f0 = rsi22->f0;
        rdi8 = reinterpret_cast<struct s1*>(&rdi21->f4);
        rsi9 = reinterpret_cast<struct s2*>(&rsi22->f1);
        ++rax6;
    } while (rax6 != 0x7d0);
    if (ebp25 >= 43 && **r12_26 == fputc) {
        rax27 = g1f7;
        r12_28 = *rax27;
        rcx29 = r12_28;
        fun_213(0x201, 22, 1, rcx29);
        rsi30 = reinterpret_cast<int32_t*>(0x21a);
        *reinterpret_cast<int32_t*>(&rbp31) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp31) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi32 = r12_28;
        fun_22d();
        do {
            *rdi32 = *rsi30;
            rdi32 = r12_28;
            rsi30 = reinterpret_cast<int32_t*>(0x234);
            fun_25f();
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp31) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi32) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi30 = r12_28;
                fun_27c();
            }
            ++rbp31;
        } while (rbp31 != 0x7d0);
        fun_296(r12_28, 0x285, 0x28c, rcx29);
        *reinterpret_cast<int32_t*>(&rsi9) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx23 = r12_28;
        fun_2af(0x29d, 22, 1, rcx23);
    }
    fun_1cf(rbx33, rsi9, rdx7, rcx23);
    fun_1d7(r14_34, rsi9, rdx7, rcx23);
    fun_1df(r15_3, rsi9, rdx7, rcx23);
    goto v35;
}

void fun_213(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* rdi7;
    int32_t* r12_8;
    int32_t* r12_9;
    int32_t* r12_10;
    int32_t* r12_11;
    int32_t* r12_12;
    int64_t rbx13;
    int64_t* r14_14;
    int64_t r15_15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x21a);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r12_8;
    fun_22d();
    do {
        *rdi7 = *rsi5;
        rdi7 = r12_9;
        rsi5 = reinterpret_cast<int32_t*>(0x234);
        fun_25f();
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r12_10;
            fun_27c();
        }
        ++rbp6;
    } while (rbp6 != 0x7d0);
    fun_296(r12_11, 0x285, 0x28c, rcx);
    fun_2af(0x29d, 22, 1, r12_12);
    fun_1cf(rbx13, 22, 1, r12_12);
    fun_1d7(r14_14, 22, 1, r12_12);
    fun_1df(r15_15, 22, 1, r12_12);
    goto v16;
}

void fun_1d7(int64_t* rdi, struct s2* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t v6;

    fun_1df(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_22d() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r12_3;
    int64_t rbp4;
    int32_t* r12_5;
    int32_t* r12_6;
    int32_t* rcx7;
    int32_t* r12_8;
    int64_t rbx9;
    int64_t* r14_10;
    int64_t r15_11;
    int64_t v12;

    do {
        *rdi1 = *rsi2;
        rdi1 = r12_3;
        rsi2 = reinterpret_cast<int32_t*>(0x234);
        fun_25f();
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp4) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi1) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi2 = r12_5;
            fun_27c();
        }
        ++rbp4;
    } while (rbp4 != 0x7d0);
    fun_296(r12_6, 0x285, 0x28c, rcx7);
    fun_2af(0x29d, 22, 1, r12_8);
    fun_1cf(rbx9, 22, 1, r12_8);
    fun_1d7(r14_10, 22, 1, r12_8);
    fun_1df(r15_11, 22, 1, r12_8);
    goto v12;
}

void fun_1df(int64_t rdi, struct s2* rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_296(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r12_5;
    int64_t rbx6;
    int64_t* r14_7;
    int64_t r15_8;
    int64_t v9;

    fun_2af(0x29d, 22, 1, r12_5);
    fun_1cf(rbx6, 22, 1, r12_5);
    fun_1d7(r14_7, 22, 1, r12_5);
    fun_1df(r15_8, 22, 1, r12_5);
    goto v9;
}

void fun_2af(int64_t rdi, struct s2* rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t* r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_1cf(rbx5, rsi, rdx, rcx);
    fun_1d7(r14_6, rsi, rdx, rcx);
    fun_1df(r15_7, rsi, rdx, rcx);
    goto v8;
}

void fputc(int32_t edi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) {
    }
}

void fun_a8() {
    unsigned char* rax1;
    unsigned char* rax2;
    unsigned char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;

    *rax1 = reinterpret_cast<unsigned char>(*rax2 | al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    fun_b1();
}

