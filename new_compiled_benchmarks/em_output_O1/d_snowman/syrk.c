
void fun_1f7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_1ef(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_1f7(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_29c();

void fputc(int32_t edi, int64_t rsi);

void fun_2cc(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_2e5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_27b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int64_t r12_4;
    int64_t r13_5;
    int64_t rbp6;
    int32_t* r15_7;
    int64_t r15_8;
    int64_t r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r15_3;
        rsi2 = reinterpret_cast<int32_t*>(0x295);
        fun_29c();
        ++r12_4;
        if (r12_4 == 0x4b0) {
            ++r13_5;
            if (r13_5 == 0x4b0) 
                break;
            rbp6 = r13_5 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + rbp6) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_7;
        fun_27b();
    }
    fun_2cc(r15_8, 0x2bb, 0x2c2);
    fun_2e5(0x2d3, 22, 1, r15_9);
    fun_1ef(rbx10, 22, 1, r15_9);
    fun_1f7(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_29c() {
    int64_t r12_1;
    int64_t r13_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    int64_t r15_8;
    int64_t r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x4b0) {
            ++r13_2;
            if (r13_2 == 0x4b0) 
                break;
            rbp3 = r13_2 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + rbp3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_6;
            fun_27b();
        }
        *rdi4 = *rsi5;
        rdi4 = r15_7;
        rsi5 = reinterpret_cast<int32_t*>(0x295);
        fun_29c();
    }
    fun_2cc(r15_8, 0x2bb, 0x2c2);
    fun_2e5(0x2d3, 22, 1, r15_9);
    fun_1ef(rbx10, 22, 1, r15_9);
    fun_1f7(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_2cc(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_2e5(0x2d3, 22, 1, r15_4);
    fun_1ef(rbx5, 22, 1, r15_4);
    fun_1f7(r14_6, 22, 1, r15_4);
    goto v7;
}

void fun_246();

void fun_22b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int64_t rbp9;
    int64_t r12_10;
    int32_t* r15_11;
    int32_t* r15_12;
    int64_t r15_13;
    int64_t r15_14;
    int64_t rbx15;
    int64_t r14_16;
    int64_t v17;

    rsi5 = reinterpret_cast<int32_t*>(0x232);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_246();
    do {
        rbp9 = r13_6 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_10 + rbp9) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r15_11;
                fun_27b();
            }
            *rdi7 = *rsi5;
            rdi7 = r15_12;
            rsi5 = reinterpret_cast<int32_t*>(0x295);
            fun_29c();
            ++r12_10;
        } while (r12_10 != 0x4b0);
        ++r13_6;
    } while (r13_6 != 0x4b0);
    fun_2cc(r15_13, 0x2bb, 0x2c2);
    fun_2e5(0x2d3, 22, 1, r15_14);
    fun_1ef(rbx15, 22, 1, r15_14);
    fun_1f7(r14_16, 22, 1, r15_14);
    goto v17;
}

void fun_1f7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_2e5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_1ef(rbx5, rsi, rdx, rcx);
    fun_1f7(r14_6, rsi, rdx, rcx);
    goto v7;
}

void fun_246() {
    int64_t rbp1;
    int64_t r13_2;
    int64_t r12_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    int64_t r15_8;
    int64_t r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    do {
        rbp1 = r13_2 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + rbp1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r15_6;
                fun_27b();
            }
            *rdi4 = *rsi5;
            rdi4 = r15_7;
            rsi5 = reinterpret_cast<int32_t*>(0x295);
            fun_29c();
            ++r12_3;
        } while (r12_3 != 0x4b0);
        ++r13_2;
    } while (r13_2 != 0x4b0);
    fun_2cc(r15_8, 0x2bb, 0x2c2);
    fun_2e5(0x2d3, 22, 1, r15_9);
    fun_1ef(rbx10, 22, 1, r15_9);
    fun_1f7(r14_11, 22, 1, r15_9);
    goto v12;
}

void fputc(int32_t edi, int64_t rsi) {
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

int64_t* g20f = reinterpret_cast<int64_t*>(0x3d8d48388b4c);

void fun_90(int32_t* rdi, int32_t* rsi) {
    int64_t rax3;
    int64_t rax4;
    int64_t rdx5;
    int64_t rsi6;
    int64_t rcx7;
    uint64_t rdi8;
    struct s0* rdi9;
    struct s1* rsi10;
    int32_t* rbx11;
    struct s2* rdi12;
    struct s3* rsi13;
    struct s4* rcx14;
    struct s5* rdi15;
    struct s6* rdi16;
    struct s4* rsi17;
    struct s7* rdi18;
    int32_t* rsi19;
    struct s8* rsi20;
    int32_t* r14_21;
    struct s4* r8_22;
    struct s7* rdi23;
    struct s9* rsi24;
    int32_t ebp25;
    signed char** r15_26;
    int64_t* rax27;
    int64_t rcx28;

    if (rax3 + 1 == 0x4b0) {
        *reinterpret_cast<int32_t*>(&rax4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(fputc);
        *rdi = *rsi;
        do {
            *reinterpret_cast<int32_t*>(&rdx5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *reinterpret_cast<int32_t*>(&rsi6) = *reinterpret_cast<int32_t*>(&rdx5) * *reinterpret_cast<int32_t*>(&rcx7) + 2;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(fputc);
                rdi8 = reinterpret_cast<uint64_t>(rsi6 * 0x10624dd3) >> 38;
                *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(&rdi8) * 0x3e8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm1, xmm1");
                __asm__("cvtsi2sd xmm1, esi");
                __asm__("divsd xmm1, xmm0");
                rsi10 = reinterpret_cast<struct s1*>(rbx11 + rcx7 * 0x960);
                rdi9->f0 = rsi10->f0;
                rdi12 = reinterpret_cast<struct s2*>(&rdi9->f4);
                rsi13 = reinterpret_cast<struct s3*>(&rsi10->f4);
                ++rdx5;
            } while (rdx5 != 0x4b0);
            ++rcx7;
        } while (rcx7 != 0x4b0);
        *reinterpret_cast<int32_t*>(&rcx14) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi12->f0 = rsi13->f0;
        rdi15 = reinterpret_cast<struct s5*>(&rdi12->f4);
        rdi15->f0 = rsi13->f4;
        rdi16 = reinterpret_cast<struct s6*>(&rdi15->f4);
        do {
            *reinterpret_cast<int32_t*>(&rsi17) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi16->f0 = rsi17->f0;
                rdi18 = reinterpret_cast<struct s7*>(&rdi16->f4);
                rsi19 = &rsi17->f4;
                __asm__("mulsd xmm2, xmm0");
                rdi18->f0 = *rsi19;
                rdi16 = reinterpret_cast<struct s6*>(&rdi18->f4);
                rsi17 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rsi19 + 1) + 1);
            } while (rsi17 != rcx14);
            *reinterpret_cast<int32_t*>(&rsi20) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi16 = reinterpret_cast<struct s6*>(r14_21 + rax4 * 0x7d0 + reinterpret_cast<int64_t>(rsi20) * 2);
                *reinterpret_cast<int32_t*>(&r8_22) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi16->f0 = rsi20->f0;
                    rdi23 = reinterpret_cast<struct s7*>(&rdi16->f4);
                    rsi24 = reinterpret_cast<struct s9*>(&rsi20->f4);
                    __asm__("mulsd xmm2, xmm1");
                    __asm__("mulsd xmm2, [r9+rsi*8]");
                    __asm__("addsd xmm2, [rdx+r8*8]");
                    rdi23->f0 = rsi24->f0;
                    rdi16 = reinterpret_cast<struct s6*>(&rdi23->f4);
                    rsi20 = reinterpret_cast<struct s8*>(&rsi24->f4);
                    r8_22 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(r8_22) + 1);
                } while (r8_22 != rcx14);
                rsi20 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(rsi20) + 1);
            } while (!reinterpret_cast<int1_t>(rsi20 == 0x3e8));
            ++rax4;
            rcx14 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rcx14) + 1);
        } while (rax4 != 0x4b0);
        if (ebp25 < 43) 
            goto 0x1e7;
        if (**r15_26 != fputc) 
            goto "???";
        rax27 = g20f;
        rcx28 = *rax27;
        fun_22b(0x219, 22, 1, rcx28);
    }
}

