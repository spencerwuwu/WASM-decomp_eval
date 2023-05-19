
void fputc();

struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_315();

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

void fun_2b();

int32_t** g45a = reinterpret_cast<int32_t**>(0x3d8d48208b4c);

void fun_476(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8);

void fun_490();

void fun_4bb();

void fun_4de();

void fun_510(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8);

void fun_528();

void fun_55b();

void fun_57c();

void fun_5ac(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8);

void fun_5c5(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8);

void fun_430(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8);

void fun_43a(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8);

void fun_442(int64_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8);

void fun_2b0() {
    int32_t* r13_1;
    uint64_t r12_2;
    uint64_t rbp3;
    uint64_t rax4;
    int32_t* rdi5;
    struct s0* rsi6;
    int32_t* rax7;
    int32_t* v8;
    int32_t* rdx9;
    int32_t* rsi10;
    struct s1* rdi11;
    int32_t* rbx12;
    struct s2* rdi13;
    struct s3* rsi14;
    void* r15_15;
    int32_t* rcx16;
    struct s4* rsi17;
    int32_t* rdi18;
    int32_t* rsi19;
    void* rbx20;
    int32_t* rdi21;
    int32_t* r8_22;
    int32_t* rbx23;
    struct s5* rsi24;
    struct s6* rdi25;
    void* r15_26;
    struct s7* rdi27;
    int32_t* rsi28;
    int32_t v29;
    signed char** r14_30;
    int32_t** rax31;
    int32_t* r12_32;
    int32_t* rcx33;
    int32_t* rsi34;
    int64_t rbp35;
    int32_t* rdi36;
    int64_t r14_37;
    int64_t r13_38;
    int64_t rbp39;
    int32_t* rsi40;
    int32_t* rdi41;
    int64_t r14_42;
    int64_t r13_43;
    int32_t* rbx44;
    int32_t* v45;
    int64_t* r15_46;
    int64_t v47;

    *reinterpret_cast<int32_t*>(&r13_1) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_1) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        r12_2 = rbp3;
        *reinterpret_cast<int32_t*>(&rax4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorpd xmm0, xmm0");
        do {
            *rdi5 = rsi6->f0;
            ++rdi5;
            rsi6 = reinterpret_cast<struct s0*>(&rsi6->f4);
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm0, xmm1");
            ++rax4;
        } while (rax4 != 0x3e8);
        __asm__("ucomisd xmm0, xmm2");
        if (rax4 < 0x3e8) {
            fun_315();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rax7 = v8 + r12_2 * 0x960;
        *rdi5 = rsi6->f0;
        *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi10 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx9) * 0x2580);
            rdi11 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbx12) + reinterpret_cast<uint64_t>(rsi10));
            rdi11->f0 = *rsi10;
            rdi13 = reinterpret_cast<struct s2*>(&rdi11->f4);
            __asm__("divsd xmm0, [rcx]");
            rsi14 = reinterpret_cast<struct s3*>(reinterpret_cast<uint64_t>(rsi10 + 1) + reinterpret_cast<int64_t>(r15_15));
            rdi13->f0 = rsi14->f0;
            rdi5 = &rdi13->f4;
            rsi6 = reinterpret_cast<struct s0*>(&rsi14->f4);
            rdx9 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx9) + 1);
        } while (!reinterpret_cast<int1_t>(rdx9 == 0x3e8));
        rbp3 = r12_2 + 1;
        rcx16 = r13_1;
        if (r12_2 <= 0x4ae) {
            do {
                rdx9 = rax7 + reinterpret_cast<int64_t>(rcx16) * 2;
                rax7[reinterpret_cast<int64_t>(rcx16) * 2] = reinterpret_cast<int32_t>(fputc);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rsi17) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi17) * 0x2580);
                    *rdi18 = rsi17->f0;
                    rsi19 = &rsi17->f4;
                    __asm__("mulsd xmm1, [rdi+rcx*8]");
                    __asm__("addsd xmm0, xmm1");
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi18 + 1) + reinterpret_cast<int64_t>(rbx20)) = *rsi19;
                    rsi17 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rsi19 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rsi17 == 0x3e8));
                *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi21 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi6) * 0x2580);
                    r8_22 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx23) + reinterpret_cast<uint64_t>(rdi21));
                    *rdi21 = rsi6->f0;
                    rsi24 = reinterpret_cast<struct s5*>(&rsi6->f4);
                    rdi25 = reinterpret_cast<struct s6*>(reinterpret_cast<uint64_t>(rdi21 + 1) + reinterpret_cast<int64_t>(r15_26));
                    rdi25->f0 = rsi24->f0;
                    rdi27 = reinterpret_cast<struct s7*>(&rdi25->f4);
                    rsi28 = &rsi24->f4;
                    __asm__("mulsd xmm1, [rdx]");
                    __asm__("subsd xmm0, xmm1");
                    rdi27->f0 = *rsi28;
                    rdi5 = &rdi27->f4;
                    rsi6 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi28 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rsi6 == 0x3e8));
                rcx16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx16) + 1);
            } while (!reinterpret_cast<int1_t>(rcx16 == 0x4b0));
        }
        r13_1 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_1) + 1);
    } while (rbp3 != 0x4b0);
    if (v29 >= reinterpret_cast<int32_t>(fun_2b) && **r14_30 == fputc) {
        rax31 = g45a;
        r12_32 = *rax31;
        rcx33 = r12_32;
        fun_476(0x464, 22, 1, rcx33, r8_22);
        rsi34 = reinterpret_cast<int32_t*>(0x47d);
        *reinterpret_cast<int32_t*>(&rbp35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp35) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi36 = r12_32;
        fun_490();
        do {
            r14_37 = rbp35 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_38) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_38) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_37 + r13_38) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi36) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi34 = r12_32;
                    fun_4bb();
                }
                *rdi36 = *rsi34;
                rdi36 = r12_32;
                rsi34 = reinterpret_cast<int32_t*>(0x4d7);
                fun_4de();
                ++r13_38;
            } while (r13_38 != 0x4b0);
            ++rbp35;
        } while (rbp35 != 0x4b0);
        *reinterpret_cast<int32_t*>(&rbp39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_510(r12_32, 0x4fd, 0x504, rcx33, r8_22);
        rsi40 = reinterpret_cast<int32_t*>(0x517);
        rdi41 = r12_32;
        fun_528();
        do {
            r14_42 = rbp39 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_43) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_43) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_42 + r13_43) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi41) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi40 = r12_32;
                    fun_55b();
                }
                *rdi41 = *rsi40;
                rdi41 = r12_32;
                rsi40 = reinterpret_cast<int32_t*>(0x575);
                fun_57c();
                ++r13_43;
            } while (r13_43 != 0x4b0);
            ++rbp39;
        } while (rbp39 != 0x3e8);
        fun_5ac(r12_32, 0x59b, 0x5a2, rcx33, r8_22);
        *reinterpret_cast<int32_t*>(&rsi6) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx16 = r12_32;
        fun_5c5(0x5b3, 22, 1, rcx16, r8_22);
    }
    fun_430(rbx44, rsi6, rdx9, rcx16, r8_22);
    fun_43a(v45, rsi6, rdx9, rcx16, r8_22);
    fun_442(r15_46, rsi6, rdx9, rcx16, r8_22);
    goto v47;
}

void fun_430(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8) {
    int32_t* v6;
    int64_t* r15_7;
    int64_t v8;

    fun_43a(v6, rsi, rdx, rcx, r8);
    fun_442(r15_7, rsi, rdx, rcx, r8);
    goto v8;
}

void fun_4bb() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r12_3;
    int64_t r13_4;
    int64_t rbp5;
    int64_t r14_6;
    int32_t* r12_7;
    int64_t rbp8;
    int32_t* r12_9;
    int32_t* rcx10;
    int32_t* r8_11;
    int32_t* rsi12;
    int32_t* rdi13;
    int32_t* r12_14;
    int64_t r14_15;
    int64_t r13_16;
    int32_t* r12_17;
    int32_t* r12_18;
    int32_t* r12_19;
    int32_t* rcx20;
    int32_t* r8_21;
    int32_t* r12_22;
    int32_t* r8_23;
    int32_t* rbx24;
    int32_t* r8_25;
    int32_t* v26;
    int32_t* r8_27;
    int64_t* r15_28;
    int32_t* r8_29;
    int64_t v30;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r12_3;
        rsi2 = reinterpret_cast<int32_t*>(0x4d7);
        fun_4de();
        ++r13_4;
        if (r13_4 == 0x4b0) {
            ++rbp5;
            if (rbp5 == 0x4b0) 
                break;
            r14_6 = rbp5 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_6 + r13_4) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r12_7;
        fun_4bb();
    }
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_510(r12_9, 0x4fd, 0x504, rcx10, r8_11);
    rsi12 = reinterpret_cast<int32_t*>(0x517);
    rdi13 = r12_14;
    fun_528();
    do {
        r14_15 = rbp8 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_15 + r13_16) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi13) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi12 = r12_17;
                fun_55b();
            }
            *rdi13 = *rsi12;
            rdi13 = r12_18;
            rsi12 = reinterpret_cast<int32_t*>(0x575);
            fun_57c();
            ++r13_16;
        } while (r13_16 != 0x4b0);
        ++rbp8;
    } while (rbp8 != 0x3e8);
    fun_5ac(r12_19, 0x59b, 0x5a2, rcx20, r8_21);
    fun_5c5(0x5b3, 22, 1, r12_22, r8_23);
    fun_430(rbx24, 22, 1, r12_22, r8_25);
    fun_43a(v26, 22, 1, r12_22, r8_27);
    fun_442(r15_28, 22, 1, r12_22, r8_29);
    goto v30;
}

void fun_4de() {
    int64_t r13_1;
    int64_t rbp2;
    int64_t r14_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r12_6;
    int32_t* r12_7;
    int64_t rbp8;
    int32_t* r12_9;
    int32_t* rcx10;
    int32_t* r8_11;
    int32_t* rsi12;
    int32_t* rdi13;
    int32_t* r12_14;
    int64_t r14_15;
    int64_t r13_16;
    int32_t* r12_17;
    int32_t* r12_18;
    int32_t* r12_19;
    int32_t* rcx20;
    int32_t* r8_21;
    int32_t* r12_22;
    int32_t* r8_23;
    int32_t* rbx24;
    int32_t* r8_25;
    int32_t* v26;
    int32_t* r8_27;
    int64_t* r15_28;
    int32_t* r8_29;
    int64_t v30;

    while (1) {
        ++r13_1;
        if (r13_1 == 0x4b0) {
            ++rbp2;
            if (rbp2 == 0x4b0) 
                break;
            r14_3 = rbp2 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_3 + r13_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r12_6;
            fun_4bb();
        }
        *rdi4 = *rsi5;
        rdi4 = r12_7;
        rsi5 = reinterpret_cast<int32_t*>(0x4d7);
        fun_4de();
    }
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_510(r12_9, 0x4fd, 0x504, rcx10, r8_11);
    rsi12 = reinterpret_cast<int32_t*>(0x517);
    rdi13 = r12_14;
    fun_528();
    do {
        r14_15 = rbp8 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_15 + r13_16) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi13) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi12 = r12_17;
                fun_55b();
            }
            *rdi13 = *rsi12;
            rdi13 = r12_18;
            rsi12 = reinterpret_cast<int32_t*>(0x575);
            fun_57c();
            ++r13_16;
        } while (r13_16 != 0x4b0);
        ++rbp8;
    } while (rbp8 != 0x3e8);
    fun_5ac(r12_19, 0x59b, 0x5a2, rcx20, r8_21);
    fun_5c5(0x5b3, 22, 1, r12_22, r8_23);
    fun_430(rbx24, 22, 1, r12_22, r8_25);
    fun_43a(v26, 22, 1, r12_22, r8_27);
    fun_442(r15_28, 22, 1, r12_22, r8_29);
    goto v30;
}

void fun_490() {
    int64_t r14_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r12_6;
    int32_t* r12_7;
    int64_t rbp8;
    int32_t* r12_9;
    int32_t* rcx10;
    int32_t* r8_11;
    int32_t* rsi12;
    int32_t* rdi13;
    int32_t* r12_14;
    int64_t r14_15;
    int64_t r13_16;
    int32_t* r12_17;
    int32_t* r12_18;
    int32_t* r12_19;
    int32_t* rcx20;
    int32_t* r8_21;
    int32_t* r12_22;
    int32_t* r8_23;
    int32_t* rbx24;
    int32_t* r8_25;
    int32_t* v26;
    int32_t* r8_27;
    int64_t* r15_28;
    int32_t* r8_29;
    int64_t v30;

    do {
        r14_1 = rbp2 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r12_6;
                fun_4bb();
            }
            *rdi4 = *rsi5;
            rdi4 = r12_7;
            rsi5 = reinterpret_cast<int32_t*>(0x4d7);
            fun_4de();
            ++r13_3;
        } while (r13_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_510(r12_9, 0x4fd, 0x504, rcx10, r8_11);
    rsi12 = reinterpret_cast<int32_t*>(0x517);
    rdi13 = r12_14;
    fun_528();
    do {
        r14_15 = rbp8 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_15 + r13_16) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi13) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi12 = r12_17;
                fun_55b();
            }
            *rdi13 = *rsi12;
            rdi13 = r12_18;
            rsi12 = reinterpret_cast<int32_t*>(0x575);
            fun_57c();
            ++r13_16;
        } while (r13_16 != 0x4b0);
        ++rbp8;
    } while (rbp8 != 0x3e8);
    fun_5ac(r12_19, 0x59b, 0x5a2, rcx20, r8_21);
    fun_5c5(0x5b3, 22, 1, r12_22, r8_23);
    fun_430(rbx24, 22, 1, r12_22, r8_25);
    fun_43a(v26, 22, 1, r12_22, r8_27);
    fun_442(r15_28, 22, 1, r12_22, r8_29);
    goto v30;
}

void fun_510(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8) {
    int32_t* rsi6;
    int32_t* rdi7;
    int32_t* r12_8;
    int64_t r14_9;
    int64_t rbp10;
    int64_t r13_11;
    int32_t* r12_12;
    int32_t* r12_13;
    int32_t* r12_14;
    int32_t* r12_15;
    int32_t* rbx16;
    int32_t* v17;
    int64_t* r15_18;
    int64_t v19;

    rsi6 = reinterpret_cast<int32_t*>(0x517);
    rdi7 = r12_8;
    fun_528();
    do {
        r14_9 = rbp10 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_9 + r13_11) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = r12_12;
                fun_55b();
            }
            *rdi7 = *rsi6;
            rdi7 = r12_13;
            rsi6 = reinterpret_cast<int32_t*>(0x575);
            fun_57c();
            ++r13_11;
        } while (r13_11 != 0x4b0);
        ++rbp10;
    } while (rbp10 != 0x3e8);
    fun_5ac(r12_14, 0x59b, 0x5a2, rcx, r8);
    fun_5c5(0x5b3, 22, 1, r12_15, r8);
    fun_430(rbx16, 22, 1, r12_15, r8);
    fun_43a(v17, 22, 1, r12_15, r8);
    fun_442(r15_18, 22, 1, r12_15, r8);
    goto v19;
}

void fun_55b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r12_3;
    int64_t r13_4;
    int64_t rbp5;
    int64_t r14_6;
    int32_t* r12_7;
    int32_t* r12_8;
    int32_t* rcx9;
    int32_t* r8_10;
    int32_t* r12_11;
    int32_t* r8_12;
    int32_t* rbx13;
    int32_t* r8_14;
    int32_t* v15;
    int32_t* r8_16;
    int64_t* r15_17;
    int32_t* r8_18;
    int64_t v19;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r12_3;
        rsi2 = reinterpret_cast<int32_t*>(0x575);
        fun_57c();
        ++r13_4;
        if (r13_4 == 0x4b0) {
            ++rbp5;
            if (rbp5 == 0x3e8) 
                break;
            r14_6 = rbp5 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_6 + r13_4) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r12_7;
        fun_55b();
    }
    fun_5ac(r12_8, 0x59b, 0x5a2, rcx9, r8_10);
    fun_5c5(0x5b3, 22, 1, r12_11, r8_12);
    fun_430(rbx13, 22, 1, r12_11, r8_14);
    fun_43a(v15, 22, 1, r12_11, r8_16);
    fun_442(r15_17, 22, 1, r12_11, r8_18);
    goto v19;
}

void fun_57c() {
    int64_t r13_1;
    int64_t rbp2;
    int64_t r14_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r12_6;
    int32_t* r12_7;
    int32_t* r12_8;
    int32_t* rcx9;
    int32_t* r8_10;
    int32_t* r12_11;
    int32_t* r8_12;
    int32_t* rbx13;
    int32_t* r8_14;
    int32_t* v15;
    int32_t* r8_16;
    int64_t* r15_17;
    int32_t* r8_18;
    int64_t v19;

    while (1) {
        ++r13_1;
        if (r13_1 == 0x4b0) {
            ++rbp2;
            if (rbp2 == 0x3e8) 
                break;
            r14_3 = rbp2 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_3 + r13_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r12_6;
            fun_55b();
        }
        *rdi4 = *rsi5;
        rdi4 = r12_7;
        rsi5 = reinterpret_cast<int32_t*>(0x575);
        fun_57c();
    }
    fun_5ac(r12_8, 0x59b, 0x5a2, rcx9, r8_10);
    fun_5c5(0x5b3, 22, 1, r12_11, r8_12);
    fun_430(rbx13, 22, 1, r12_11, r8_14);
    fun_43a(v15, 22, 1, r12_11, r8_16);
    fun_442(r15_17, 22, 1, r12_11, r8_18);
    goto v19;
}

void fun_5ac(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8) {
    int32_t* r12_6;
    int32_t* rbx7;
    int32_t* v8;
    int64_t* r15_9;
    int64_t v10;

    fun_5c5(0x5b3, 22, 1, r12_6, r8);
    fun_430(rbx7, 22, 1, r12_6, r8);
    fun_43a(v8, 22, 1, r12_6, r8);
    fun_442(r15_9, 22, 1, r12_6, r8);
    goto v10;
}

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

void fun_315() {
    int32_t* rax1;
    uint64_t r12_2;
    int32_t* v3;
    int32_t* rdi4;
    struct s0* rsi5;
    int32_t* rdx6;
    int32_t* rsi7;
    struct s8* rdi8;
    int32_t* rbx9;
    struct s9* rdi10;
    struct s10* rsi11;
    void* r15_12;
    uint64_t rbp13;
    int32_t* rcx14;
    int32_t* r13_15;
    struct s11* rsi16;
    int32_t* rdi17;
    int32_t* rsi18;
    void* rbx19;
    int32_t* rdi20;
    int32_t* r8_21;
    int32_t* rbx22;
    struct s5* rsi23;
    struct s12* rdi24;
    void* r15_25;
    struct s13* rdi26;
    int32_t* rsi27;
    uint64_t rax28;
    int32_t v29;
    signed char** r14_30;
    int32_t** rax31;
    int32_t* r12_32;
    int32_t* rcx33;
    int32_t* rsi34;
    int64_t rbp35;
    int32_t* rdi36;
    int64_t r14_37;
    int64_t r13_38;
    int64_t rbp39;
    int32_t* rsi40;
    int32_t* rdi41;
    int64_t r14_42;
    int64_t r13_43;
    int32_t* rbx44;
    int32_t* v45;
    int64_t* r15_46;
    int64_t v47;

    while (1) {
        __asm__("xorpd xmm2, xmm2");
        while (1) {
            rax1 = v3 + r12_2 * 0x960;
            *rdi4 = rsi5->f0;
            *reinterpret_cast<int32_t*>(&rdx6) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rsi7 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx6) * 0x2580);
                rdi8 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(rbx9) + reinterpret_cast<uint64_t>(rsi7));
                rdi8->f0 = *rsi7;
                rdi10 = reinterpret_cast<struct s9*>(&rdi8->f4);
                __asm__("divsd xmm0, [rcx]");
                rsi11 = reinterpret_cast<struct s10*>(reinterpret_cast<uint64_t>(rsi7 + 1) + reinterpret_cast<int64_t>(r15_12));
                rdi10->f0 = rsi11->f0;
                rdi4 = &rdi10->f4;
                rsi5 = reinterpret_cast<struct s0*>(&rsi11->f4);
                rdx6 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx6) + 1);
            } while (!reinterpret_cast<int1_t>(rdx6 == 0x3e8));
            rbp13 = r12_2 + 1;
            rcx14 = r13_15;
            if (r12_2 <= 0x4ae) {
                do {
                    rdx6 = rax1 + reinterpret_cast<int64_t>(rcx14) * 2;
                    rax1[reinterpret_cast<int64_t>(rcx14) * 2] = reinterpret_cast<int32_t>(fputc);
                    __asm__("xorpd xmm0, xmm0");
                    *reinterpret_cast<int32_t*>(&rsi16) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi17 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi16) * 0x2580);
                        *rdi17 = rsi16->f0;
                        rsi18 = &rsi16->f4;
                        __asm__("mulsd xmm1, [rdi+rcx*8]");
                        __asm__("addsd xmm0, xmm1");
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi17 + 1) + reinterpret_cast<int64_t>(rbx19)) = *rsi18;
                        rsi16 = reinterpret_cast<struct s11*>(reinterpret_cast<int64_t>(rsi18 + 1) + 1);
                    } while (!reinterpret_cast<int1_t>(rsi16 == 0x3e8));
                    *reinterpret_cast<int32_t*>(&rsi5) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi20 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi5) * 0x2580);
                        r8_21 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx22) + reinterpret_cast<uint64_t>(rdi20));
                        *rdi20 = rsi5->f0;
                        rsi23 = reinterpret_cast<struct s5*>(&rsi5->f4);
                        rdi24 = reinterpret_cast<struct s12*>(reinterpret_cast<uint64_t>(rdi20 + 1) + reinterpret_cast<int64_t>(r15_25));
                        rdi24->f0 = rsi23->f0;
                        rdi26 = reinterpret_cast<struct s13*>(&rdi24->f4);
                        rsi27 = &rsi23->f4;
                        __asm__("mulsd xmm1, [rdx]");
                        __asm__("subsd xmm0, xmm1");
                        rdi26->f0 = *rsi27;
                        rdi4 = &rdi26->f4;
                        rsi5 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi27 + 1) + 1);
                    } while (!reinterpret_cast<int1_t>(rsi5 == 0x3e8));
                    rcx14 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx14) + 1);
                } while (!reinterpret_cast<int1_t>(rcx14 == 0x4b0));
            }
            r13_15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_15) + 1);
            if (rbp13 == 0x4b0) 
                goto addr_419_37;
            r12_2 = rbp13;
            *reinterpret_cast<int32_t*>(&rax28) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorpd xmm0, xmm0");
            do {
                *rdi4 = rsi5->f0;
                ++rdi4;
                rsi5 = reinterpret_cast<struct s0*>(&rsi5->f4);
                __asm__("mulsd xmm1, xmm1");
                __asm__("addsd xmm0, xmm1");
                ++rax28;
            } while (rax28 != 0x3e8);
            __asm__("ucomisd xmm0, xmm2");
            if (rax28 < 0x3e8) 
                break;
            __asm__("sqrtsd xmm0, xmm0");
        }
        fun_315();
    }
    addr_419_37:
    if (v29 >= reinterpret_cast<int32_t>(fun_2b) && **r14_30 == fputc) {
        rax31 = g45a;
        r12_32 = *rax31;
        rcx33 = r12_32;
        fun_476(0x464, 22, 1, rcx33, r8_21);
        rsi34 = reinterpret_cast<int32_t*>(0x47d);
        *reinterpret_cast<int32_t*>(&rbp35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp35) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi36 = r12_32;
        fun_490();
        do {
            r14_37 = rbp35 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_38) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_38) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_37 + r13_38) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi36) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi34 = r12_32;
                    fun_4bb();
                }
                *rdi36 = *rsi34;
                rdi36 = r12_32;
                rsi34 = reinterpret_cast<int32_t*>(0x4d7);
                fun_4de();
                ++r13_38;
            } while (r13_38 != 0x4b0);
            ++rbp35;
        } while (rbp35 != 0x4b0);
        *reinterpret_cast<int32_t*>(&rbp39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_510(r12_32, 0x4fd, 0x504, rcx33, r8_21);
        rsi40 = reinterpret_cast<int32_t*>(0x517);
        rdi41 = r12_32;
        fun_528();
        do {
            r14_42 = rbp39 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_43) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_43) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_42 + r13_43) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi41) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi40 = r12_32;
                    fun_55b();
                }
                *rdi41 = *rsi40;
                rdi41 = r12_32;
                rsi40 = reinterpret_cast<int32_t*>(0x575);
                fun_57c();
                ++r13_43;
            } while (r13_43 != 0x4b0);
            ++rbp39;
        } while (rbp39 != 0x3e8);
        fun_5ac(r12_32, 0x59b, 0x5a2, rcx33, r8_21);
        *reinterpret_cast<int32_t*>(&rsi5) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx6) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx14 = r12_32;
        fun_5c5(0x5b3, 22, 1, rcx14, r8_21);
    }
    fun_430(rbx44, rsi5, rdx6, rcx14, r8_21);
    fun_43a(v45, rsi5, rdx6, rcx14, r8_21);
    fun_442(r15_46, rsi5, rdx6, rcx14, r8_21);
    goto v47;
}

void fun_476(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8) {
    int32_t* rsi6;
    int64_t rbp7;
    int32_t* rdi8;
    int32_t* r12_9;
    int64_t r14_10;
    int64_t r13_11;
    int32_t* r12_12;
    int32_t* r12_13;
    int64_t rbp14;
    int32_t* r12_15;
    int32_t* rsi16;
    int32_t* rdi17;
    int32_t* r12_18;
    int64_t r14_19;
    int64_t r13_20;
    int32_t* r12_21;
    int32_t* r12_22;
    int32_t* r12_23;
    int32_t* r12_24;
    int32_t* rbx25;
    int32_t* v26;
    int64_t* r15_27;
    int64_t v28;

    rsi6 = reinterpret_cast<int32_t*>(0x47d);
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi8 = r12_9;
    fun_490();
    do {
        r14_10 = rbp7 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_10 + r13_11) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi8) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = r12_12;
                fun_4bb();
            }
            *rdi8 = *rsi6;
            rdi8 = r12_13;
            rsi6 = reinterpret_cast<int32_t*>(0x4d7);
            fun_4de();
            ++r13_11;
        } while (r13_11 != 0x4b0);
        ++rbp7;
    } while (rbp7 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rbp14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_510(r12_15, 0x4fd, 0x504, rcx, r8);
    rsi16 = reinterpret_cast<int32_t*>(0x517);
    rdi17 = r12_18;
    fun_528();
    do {
        r14_19 = rbp14 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_19 + r13_20) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi17) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi16 = r12_21;
                fun_55b();
            }
            *rdi17 = *rsi16;
            rdi17 = r12_22;
            rsi16 = reinterpret_cast<int32_t*>(0x575);
            fun_57c();
            ++r13_20;
        } while (r13_20 != 0x4b0);
        ++rbp14;
    } while (rbp14 != 0x3e8);
    fun_5ac(r12_23, 0x59b, 0x5a2, rcx, r8);
    fun_5c5(0x5b3, 22, 1, r12_24, r8);
    fun_430(rbx25, 22, 1, r12_24, r8);
    fun_43a(v26, 22, 1, r12_24, r8);
    fun_442(r15_27, 22, 1, r12_24, r8);
    goto v28;
}

void fun_43a(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8) {
    int64_t* r15_6;
    int64_t v7;

    fun_442(r15_6, rsi, rdx, rcx, r8);
    goto v7;
}

void fun_528() {
    int64_t r14_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r12_6;
    int32_t* r12_7;
    int32_t* r12_8;
    int32_t* rcx9;
    int32_t* r8_10;
    int32_t* r12_11;
    int32_t* r8_12;
    int32_t* rbx13;
    int32_t* r8_14;
    int32_t* v15;
    int32_t* r8_16;
    int64_t* r15_17;
    int32_t* r8_18;
    int64_t v19;

    do {
        r14_1 = rbp2 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r12_6;
                fun_55b();
            }
            *rdi4 = *rsi5;
            rdi4 = r12_7;
            rsi5 = reinterpret_cast<int32_t*>(0x575);
            fun_57c();
            ++r13_3;
        } while (r13_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x3e8);
    fun_5ac(r12_8, 0x59b, 0x5a2, rcx9, r8_10);
    fun_5c5(0x5b3, 22, 1, r12_11, r8_12);
    fun_430(rbx13, 22, 1, r12_11, r8_14);
    fun_43a(v15, 22, 1, r12_11, r8_16);
    fun_442(r15_17, 22, 1, r12_11, r8_18);
    goto v19;
}

void fun_5c5(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8) {
    int32_t* rbx6;
    int32_t* v7;
    int64_t* r15_8;
    int64_t v9;

    fun_430(rbx6, rsi, rdx, rcx, r8);
    fun_43a(v7, rsi, rdx, rcx, r8);
    fun_442(r15_8, rsi, rdx, rcx, r8);
    goto v9;
}

int32_t* fun_1f6(int64_t rdi, int64_t rsi);

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

int64_t* fun_20a(struct s14* rdi, struct s15* rsi);

int32_t g124f80;

/* .LCPI1_1 */
int32_t LCPI1_1 = 0x83485354;

int32_t g124f84;

int32_t gc = 0x894818ec;

int32_t g124f88;

/* .LCPI1_2 */
int32_t LCPI1_2 = 0x8510244c;

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

void fun_1e4(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t* v6;
    int64_t* rax7;
    int64_t* r15_8;
    int64_t rax9;
    int32_t* rdi10;
    int64_t rcx11;
    void* rdx12;
    uint64_t rbp13;
    int32_t* rdi14;
    struct s0* rsi15;
    int32_t* r13_16;
    uint64_t r12_17;
    uint64_t rax18;
    int32_t* rax19;
    int32_t* rdx20;
    int32_t* rsi21;
    struct s16* rdi22;
    struct s17* rdi23;
    struct s18* rsi24;
    int32_t* rcx25;
    struct s19* rsi26;
    int32_t* rdi27;
    int32_t* rsi28;
    int32_t* rdi29;
    int32_t* r8_30;
    struct s5* rsi31;
    struct s20* rdi32;
    struct s21* rdi33;
    int32_t* rsi34;
    int32_t v35;
    signed char** r14_36;
    int32_t** rax37;
    int32_t* r12_38;
    int32_t* rcx39;
    int32_t* rsi40;
    int64_t rbp41;
    int32_t* rdi42;
    int64_t r14_43;
    int64_t r13_44;
    int64_t rbp45;
    int32_t* rsi46;
    int32_t* rdi47;
    int64_t r14_48;
    int64_t r13_49;
    int64_t v50;

    rbx3 = rax4;
    rax5 = fun_1f6(0x15f900, 8);
    v6 = rax5;
    rax7 = fun_20a(0x124f80, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
    g124f80 = LCPI1_1;
    g124f84 = gc;
    g124f88 = LCPI1_2;
    rdi10 = reinterpret_cast<int32_t*>(0x124f8c);
    do {
        *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edx");
            __asm__("divsd xmm3, xmm0");
            __asm__("mulsd xmm3, xmm1");
            __asm__("addsd xmm3, xmm2");
            rdx12 = reinterpret_cast<void*>(rax9 * 0x2580);
            *rdi10 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx3) + reinterpret_cast<int64_t>(rdx12));
            ++rdi10;
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdx12) + reinterpret_cast<int64_t>(r15_8) + rcx11 * 8) = reinterpret_cast<int64_t>(fputc);
            ++rcx11;
        } while (rcx11 != 0x4b0);
        ++rax9;
    } while (rax9 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp13) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi14 = v6;
    *reinterpret_cast<int32_t*>(&rsi15) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_2b0();
    *reinterpret_cast<int32_t*>(&r13_16) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_16) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        r12_17 = rbp13;
        *reinterpret_cast<int32_t*>(&rax18) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorpd xmm0, xmm0");
        do {
            *rdi14 = rsi15->f0;
            ++rdi14;
            rsi15 = reinterpret_cast<struct s0*>(&rsi15->f4);
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm0, xmm1");
            ++rax18;
        } while (rax18 != 0x3e8);
        __asm__("ucomisd xmm0, xmm2");
        if (rax18 < 0x3e8) {
            fun_315();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rax19 = v6 + r12_17 * 0x960;
        *rdi14 = rsi15->f0;
        *reinterpret_cast<int32_t*>(&rdx20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi21 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx20) * 0x2580);
            rdi22 = reinterpret_cast<struct s16*>(reinterpret_cast<int64_t>(rbx3) + reinterpret_cast<uint64_t>(rsi21));
            rdi22->f0 = *rsi21;
            rdi23 = reinterpret_cast<struct s17*>(&rdi22->f4);
            __asm__("divsd xmm0, [rcx]");
            rsi24 = reinterpret_cast<struct s18*>(reinterpret_cast<uint64_t>(rsi21 + 1) + reinterpret_cast<int64_t>(r15_8));
            rdi23->f0 = rsi24->f0;
            rdi14 = &rdi23->f4;
            rsi15 = reinterpret_cast<struct s0*>(&rsi24->f4);
            rdx20 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx20) + 1);
        } while (!reinterpret_cast<int1_t>(rdx20 == 0x3e8));
        rbp13 = r12_17 + 1;
        rcx25 = r13_16;
        if (r12_17 <= 0x4ae) {
            do {
                rdx20 = rax19 + reinterpret_cast<int64_t>(rcx25) * 2;
                rax19[reinterpret_cast<int64_t>(rcx25) * 2] = reinterpret_cast<int32_t>(fputc);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rsi26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi26) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi27 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi26) * 0x2580);
                    *rdi27 = rsi26->f0;
                    rsi28 = &rsi26->f4;
                    __asm__("mulsd xmm1, [rdi+rcx*8]");
                    __asm__("addsd xmm0, xmm1");
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi27 + 1) + reinterpret_cast<int64_t>(rbx3)) = *rsi28;
                    rsi26 = reinterpret_cast<struct s19*>(reinterpret_cast<int64_t>(rsi28 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rsi26 == 0x3e8));
                *reinterpret_cast<int32_t*>(&rsi15) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi29 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi15) * 0x2580);
                    r8_30 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx3) + reinterpret_cast<uint64_t>(rdi29));
                    *rdi29 = rsi15->f0;
                    rsi31 = reinterpret_cast<struct s5*>(&rsi15->f4);
                    rdi32 = reinterpret_cast<struct s20*>(reinterpret_cast<uint64_t>(rdi29 + 1) + reinterpret_cast<int64_t>(r15_8));
                    rdi32->f0 = rsi31->f0;
                    rdi33 = reinterpret_cast<struct s21*>(&rdi32->f4);
                    rsi34 = &rsi31->f4;
                    __asm__("mulsd xmm1, [rdx]");
                    __asm__("subsd xmm0, xmm1");
                    rdi33->f0 = *rsi34;
                    rdi14 = &rdi33->f4;
                    rsi15 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi34 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rsi15 == 0x3e8));
                rcx25 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx25) + 1);
            } while (!reinterpret_cast<int1_t>(rcx25 == 0x4b0));
        }
        r13_16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_16) + 1);
    } while (rbp13 != 0x4b0);
    if (v35 >= reinterpret_cast<int32_t>(fun_2b) && **r14_36 == fputc) {
        rax37 = g45a;
        r12_38 = *rax37;
        rcx39 = r12_38;
        fun_476(0x464, 22, 1, rcx39, r8_30);
        rsi40 = reinterpret_cast<int32_t*>(0x47d);
        *reinterpret_cast<int32_t*>(&rbp41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp41) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi42 = r12_38;
        fun_490();
        do {
            r14_43 = rbp41 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_44) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_43 + r13_44) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi42) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi40 = r12_38;
                    fun_4bb();
                }
                *rdi42 = *rsi40;
                rdi42 = r12_38;
                rsi40 = reinterpret_cast<int32_t*>(0x4d7);
                fun_4de();
                ++r13_44;
            } while (r13_44 != 0x4b0);
            ++rbp41;
        } while (rbp41 != 0x4b0);
        *reinterpret_cast<int32_t*>(&rbp45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp45) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_510(r12_38, 0x4fd, 0x504, rcx39, r8_30);
        rsi46 = reinterpret_cast<int32_t*>(0x517);
        rdi47 = r12_38;
        fun_528();
        do {
            r14_48 = rbp45 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_49) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_49) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_48 + r13_49) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi47) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi46 = r12_38;
                    fun_55b();
                }
                *rdi47 = *rsi46;
                rdi47 = r12_38;
                rsi46 = reinterpret_cast<int32_t*>(0x575);
                fun_57c();
                ++r13_49;
            } while (r13_49 != 0x4b0);
            ++rbp45;
        } while (rbp45 != 0x3e8);
        fun_5ac(r12_38, 0x59b, 0x5a2, rcx39, r8_30);
        *reinterpret_cast<int32_t*>(&rsi15) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx20) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx25 = r12_38;
        fun_5c5(0x5b3, 22, 1, rcx25, r8_30);
    }
    fun_430(rbx3, rsi15, rdx20, rcx25, r8_30);
    fun_43a(v6, rsi15, rdx20, rcx25, r8_30);
    fun_442(r15_8, rsi15, rdx20, rcx25, r8_30);
    goto v50;
}

void fun_442(int64_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8) {
    int64_t v6;

    goto v6;
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

struct s26 {
    int32_t f0;
    int32_t f4;
};

struct s27 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_1f6(int64_t rdi, int64_t rsi) {
    int32_t* v3;
    int32_t* rax4;
    int64_t* rax5;
    int64_t* r15_6;
    int64_t rax7;
    int32_t* rdi8;
    int64_t rcx9;
    void* rdx10;
    int32_t* rbx11;
    uint64_t rbp12;
    int32_t* rdi13;
    struct s0* rsi14;
    int32_t* r13_15;
    uint64_t r12_16;
    uint64_t rax17;
    int32_t* rax18;
    int32_t* rdx19;
    int32_t* rsi20;
    struct s22* rdi21;
    int32_t* rbx22;
    struct s23* rdi23;
    struct s24* rsi24;
    int32_t* rcx25;
    struct s25* rsi26;
    int32_t* rdi27;
    int32_t* rsi28;
    void* rbx29;
    int32_t* rdi30;
    int32_t* r8_31;
    int32_t* rbx32;
    struct s5* rsi33;
    struct s26* rdi34;
    struct s27* rdi35;
    int32_t* rsi36;
    int32_t v37;
    signed char** r14_38;
    int32_t** rax39;
    int32_t* r12_40;
    int32_t* rcx41;
    int32_t* rsi42;
    int64_t rbp43;
    int32_t* rdi44;
    int64_t r14_45;
    int64_t r13_46;
    int64_t rbp47;
    int32_t* rsi48;
    int32_t* rdi49;
    int64_t r14_50;
    int64_t r13_51;
    int32_t* rbx52;
    int64_t v53;

    v3 = rax4;
    rax5 = fun_20a(0x124f80, 8);
    r15_6 = rax5;
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    g124f80 = LCPI1_1;
    g124f84 = gc;
    g124f88 = LCPI1_2;
    rdi8 = reinterpret_cast<int32_t*>(0x124f8c);
    do {
        *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edx");
            __asm__("divsd xmm3, xmm0");
            __asm__("mulsd xmm3, xmm1");
            __asm__("addsd xmm3, xmm2");
            rdx10 = reinterpret_cast<void*>(rax7 * 0x2580);
            *rdi8 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx11) + reinterpret_cast<int64_t>(rdx10));
            ++rdi8;
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdx10) + reinterpret_cast<int64_t>(r15_6) + rcx9 * 8) = reinterpret_cast<int64_t>(fputc);
            ++rcx9;
        } while (rcx9 != 0x4b0);
        ++rax7;
    } while (rax7 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp12) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi13 = v3;
    *reinterpret_cast<int32_t*>(&rsi14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_2b0();
    *reinterpret_cast<int32_t*>(&r13_15) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_15) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        r12_16 = rbp12;
        *reinterpret_cast<int32_t*>(&rax17) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorpd xmm0, xmm0");
        do {
            *rdi13 = rsi14->f0;
            ++rdi13;
            rsi14 = reinterpret_cast<struct s0*>(&rsi14->f4);
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm0, xmm1");
            ++rax17;
        } while (rax17 != 0x3e8);
        __asm__("ucomisd xmm0, xmm2");
        if (rax17 < 0x3e8) {
            fun_315();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rax18 = v3 + r12_16 * 0x960;
        *rdi13 = rsi14->f0;
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi20 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx19) * 0x2580);
            rdi21 = reinterpret_cast<struct s22*>(reinterpret_cast<int64_t>(rbx22) + reinterpret_cast<uint64_t>(rsi20));
            rdi21->f0 = *rsi20;
            rdi23 = reinterpret_cast<struct s23*>(&rdi21->f4);
            __asm__("divsd xmm0, [rcx]");
            rsi24 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(rsi20 + 1) + reinterpret_cast<int64_t>(r15_6));
            rdi23->f0 = rsi24->f0;
            rdi13 = &rdi23->f4;
            rsi14 = reinterpret_cast<struct s0*>(&rsi24->f4);
            rdx19 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx19) + 1);
        } while (!reinterpret_cast<int1_t>(rdx19 == 0x3e8));
        rbp12 = r12_16 + 1;
        rcx25 = r13_15;
        if (r12_16 <= 0x4ae) {
            do {
                rdx19 = rax18 + reinterpret_cast<int64_t>(rcx25) * 2;
                rax18[reinterpret_cast<int64_t>(rcx25) * 2] = reinterpret_cast<int32_t>(fputc);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rsi26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi26) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi27 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi26) * 0x2580);
                    *rdi27 = rsi26->f0;
                    rsi28 = &rsi26->f4;
                    __asm__("mulsd xmm1, [rdi+rcx*8]");
                    __asm__("addsd xmm0, xmm1");
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi27 + 1) + reinterpret_cast<int64_t>(rbx29)) = *rsi28;
                    rsi26 = reinterpret_cast<struct s25*>(reinterpret_cast<int64_t>(rsi28 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rsi26 == 0x3e8));
                *reinterpret_cast<int32_t*>(&rsi14) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi30 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi14) * 0x2580);
                    r8_31 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx32) + reinterpret_cast<uint64_t>(rdi30));
                    *rdi30 = rsi14->f0;
                    rsi33 = reinterpret_cast<struct s5*>(&rsi14->f4);
                    rdi34 = reinterpret_cast<struct s26*>(reinterpret_cast<uint64_t>(rdi30 + 1) + reinterpret_cast<int64_t>(r15_6));
                    rdi34->f0 = rsi33->f0;
                    rdi35 = reinterpret_cast<struct s27*>(&rdi34->f4);
                    rsi36 = &rsi33->f4;
                    __asm__("mulsd xmm1, [rdx]");
                    __asm__("subsd xmm0, xmm1");
                    rdi35->f0 = *rsi36;
                    rdi13 = &rdi35->f4;
                    rsi14 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi36 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rsi14 == 0x3e8));
                rcx25 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx25) + 1);
            } while (!reinterpret_cast<int1_t>(rcx25 == 0x4b0));
        }
        r13_15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_15) + 1);
    } while (rbp12 != 0x4b0);
    if (v37 >= reinterpret_cast<int32_t>(fun_2b) && **r14_38 == fputc) {
        rax39 = g45a;
        r12_40 = *rax39;
        rcx41 = r12_40;
        fun_476(0x464, 22, 1, rcx41, r8_31);
        rsi42 = reinterpret_cast<int32_t*>(0x47d);
        *reinterpret_cast<int32_t*>(&rbp43) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp43) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi44 = r12_40;
        fun_490();
        do {
            r14_45 = rbp43 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_46) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_46) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_45 + r13_46) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi44) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi42 = r12_40;
                    fun_4bb();
                }
                *rdi44 = *rsi42;
                rdi44 = r12_40;
                rsi42 = reinterpret_cast<int32_t*>(0x4d7);
                fun_4de();
                ++r13_46;
            } while (r13_46 != 0x4b0);
            ++rbp43;
        } while (rbp43 != 0x4b0);
        *reinterpret_cast<int32_t*>(&rbp47) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp47) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_510(r12_40, 0x4fd, 0x504, rcx41, r8_31);
        rsi48 = reinterpret_cast<int32_t*>(0x517);
        rdi49 = r12_40;
        fun_528();
        do {
            r14_50 = rbp47 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_51) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_51) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_50 + r13_51) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi49) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi48 = r12_40;
                    fun_55b();
                }
                *rdi49 = *rsi48;
                rdi49 = r12_40;
                rsi48 = reinterpret_cast<int32_t*>(0x575);
                fun_57c();
                ++r13_51;
            } while (r13_51 != 0x4b0);
            ++rbp47;
        } while (rbp47 != 0x3e8);
        fun_5ac(r12_40, 0x59b, 0x5a2, rcx41, r8_31);
        *reinterpret_cast<int32_t*>(&rsi14) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx19) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx25 = r12_40;
        fun_5c5(0x5b3, 22, 1, rcx25, r8_31);
    }
    fun_430(rbx52, rsi14, rdx19, rcx25, r8_31);
    fun_43a(v3, rsi14, rdx19, rcx25, r8_31);
    fun_442(r15_6, rsi14, rdx19, rcx25, r8_31);
    goto v53;
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

int64_t* fun_20a(struct s14* rdi, struct s15* rsi) {
    int64_t* r15_3;
    int64_t* rax4;
    int64_t rax5;
    struct s28* rdi6;
    struct s29* rsi7;
    struct s30* rdi8;
    int32_t* rdi9;
    int64_t rcx10;
    void* rdx11;
    int32_t* rbx12;
    uint64_t rbp13;
    int32_t* rdi14;
    int32_t* v15;
    struct s0* rsi16;
    int32_t* r13_17;
    uint64_t r12_18;
    uint64_t rax19;
    int32_t* rax20;
    int32_t* v21;
    int32_t* rdx22;
    int32_t* rsi23;
    struct s31* rdi24;
    int32_t* rbx25;
    struct s32* rdi26;
    struct s33* rsi27;
    int32_t* rcx28;
    struct s34* rsi29;
    int32_t* rdi30;
    int32_t* rsi31;
    void* rbx32;
    int32_t* rdi33;
    int32_t* r8_34;
    int32_t* rbx35;
    struct s5* rsi36;
    struct s35* rdi37;
    struct s36* rdi38;
    int32_t* rsi39;
    int32_t v40;
    signed char** r14_41;
    int32_t** rax42;
    int32_t* r12_43;
    int32_t* rcx44;
    int32_t* rsi45;
    int64_t rbp46;
    int32_t* rdi47;
    int64_t r14_48;
    int64_t r13_49;
    int64_t rbp50;
    int32_t* rsi51;
    int32_t* rdi52;
    int64_t r14_53;
    int64_t r13_54;
    int32_t* rbx55;
    int32_t* v56;
    int64_t v57;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi6 = reinterpret_cast<struct s28*>(&rdi->f4);
    rsi7 = reinterpret_cast<struct s29*>(&rsi->f4);
    rdi6->f0 = rsi7->f0;
    rdi8 = reinterpret_cast<struct s30*>(&rdi6->f4);
    rdi8->f0 = rsi7->f4;
    rdi9 = &rdi8->f4;
    do {
        *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edx");
            __asm__("divsd xmm3, xmm0");
            __asm__("mulsd xmm3, xmm1");
            __asm__("addsd xmm3, xmm2");
            rdx11 = reinterpret_cast<void*>(rax5 * 0x2580);
            *rdi9 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx12) + reinterpret_cast<int64_t>(rdx11));
            ++rdi9;
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdx11) + reinterpret_cast<int64_t>(r15_3) + rcx10 * 8) = reinterpret_cast<int64_t>(fputc);
            ++rcx10;
        } while (rcx10 != 0x4b0);
        ++rax5;
    } while (rax5 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp13) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi14 = v15;
    *reinterpret_cast<int32_t*>(&rsi16) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_2b0();
    *reinterpret_cast<int32_t*>(&r13_17) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_17) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        r12_18 = rbp13;
        *reinterpret_cast<int32_t*>(&rax19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorpd xmm0, xmm0");
        do {
            *rdi14 = rsi16->f0;
            ++rdi14;
            rsi16 = reinterpret_cast<struct s0*>(&rsi16->f4);
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm0, xmm1");
            ++rax19;
        } while (rax19 != 0x3e8);
        __asm__("ucomisd xmm0, xmm2");
        if (rax19 < 0x3e8) {
            fun_315();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rax20 = v21 + r12_18 * 0x960;
        *rdi14 = rsi16->f0;
        *reinterpret_cast<int32_t*>(&rdx22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi23 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx22) * 0x2580);
            rdi24 = reinterpret_cast<struct s31*>(reinterpret_cast<int64_t>(rbx25) + reinterpret_cast<uint64_t>(rsi23));
            rdi24->f0 = *rsi23;
            rdi26 = reinterpret_cast<struct s32*>(&rdi24->f4);
            __asm__("divsd xmm0, [rcx]");
            rsi27 = reinterpret_cast<struct s33*>(reinterpret_cast<uint64_t>(rsi23 + 1) + reinterpret_cast<int64_t>(r15_3));
            rdi26->f0 = rsi27->f0;
            rdi14 = &rdi26->f4;
            rsi16 = reinterpret_cast<struct s0*>(&rsi27->f4);
            rdx22 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx22) + 1);
        } while (!reinterpret_cast<int1_t>(rdx22 == 0x3e8));
        rbp13 = r12_18 + 1;
        rcx28 = r13_17;
        if (r12_18 <= 0x4ae) {
            do {
                rdx22 = rax20 + reinterpret_cast<int64_t>(rcx28) * 2;
                rax20[reinterpret_cast<int64_t>(rcx28) * 2] = reinterpret_cast<int32_t>(fputc);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rsi29) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi30 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi29) * 0x2580);
                    *rdi30 = rsi29->f0;
                    rsi31 = &rsi29->f4;
                    __asm__("mulsd xmm1, [rdi+rcx*8]");
                    __asm__("addsd xmm0, xmm1");
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi30 + 1) + reinterpret_cast<int64_t>(rbx32)) = *rsi31;
                    rsi29 = reinterpret_cast<struct s34*>(reinterpret_cast<int64_t>(rsi31 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rsi29 == 0x3e8));
                *reinterpret_cast<int32_t*>(&rsi16) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi33 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi16) * 0x2580);
                    r8_34 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx35) + reinterpret_cast<uint64_t>(rdi33));
                    *rdi33 = rsi16->f0;
                    rsi36 = reinterpret_cast<struct s5*>(&rsi16->f4);
                    rdi37 = reinterpret_cast<struct s35*>(reinterpret_cast<uint64_t>(rdi33 + 1) + reinterpret_cast<int64_t>(r15_3));
                    rdi37->f0 = rsi36->f0;
                    rdi38 = reinterpret_cast<struct s36*>(&rdi37->f4);
                    rsi39 = &rsi36->f4;
                    __asm__("mulsd xmm1, [rdx]");
                    __asm__("subsd xmm0, xmm1");
                    rdi38->f0 = *rsi39;
                    rdi14 = &rdi38->f4;
                    rsi16 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi39 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rsi16 == 0x3e8));
                rcx28 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx28) + 1);
            } while (!reinterpret_cast<int1_t>(rcx28 == 0x4b0));
        }
        r13_17 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_17) + 1);
    } while (rbp13 != 0x4b0);
    if (v40 >= reinterpret_cast<int32_t>(fun_2b) && **r14_41 == fputc) {
        rax42 = g45a;
        r12_43 = *rax42;
        rcx44 = r12_43;
        fun_476(0x464, 22, 1, rcx44, r8_34);
        rsi45 = reinterpret_cast<int32_t*>(0x47d);
        *reinterpret_cast<int32_t*>(&rbp46) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp46) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi47 = r12_43;
        fun_490();
        do {
            r14_48 = rbp46 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_49) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_49) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_48 + r13_49) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi47) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi45 = r12_43;
                    fun_4bb();
                }
                *rdi47 = *rsi45;
                rdi47 = r12_43;
                rsi45 = reinterpret_cast<int32_t*>(0x4d7);
                fun_4de();
                ++r13_49;
            } while (r13_49 != 0x4b0);
            ++rbp46;
        } while (rbp46 != 0x4b0);
        *reinterpret_cast<int32_t*>(&rbp50) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp50) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_510(r12_43, 0x4fd, 0x504, rcx44, r8_34);
        rsi51 = reinterpret_cast<int32_t*>(0x517);
        rdi52 = r12_43;
        fun_528();
        do {
            r14_53 = rbp50 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_54) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_54) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_53 + r13_54) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi52) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi52) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi51 = r12_43;
                    fun_55b();
                }
                *rdi52 = *rsi51;
                rdi52 = r12_43;
                rsi51 = reinterpret_cast<int32_t*>(0x575);
                fun_57c();
                ++r13_54;
            } while (r13_54 != 0x4b0);
            ++rbp50;
        } while (rbp50 != 0x3e8);
        fun_5ac(r12_43, 0x59b, 0x5a2, rcx44, r8_34);
        *reinterpret_cast<int32_t*>(&rsi16) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx22) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx28 = r12_43;
        fun_5c5(0x5b3, 22, 1, rcx28, r8_34);
    }
    fun_430(rbx55, rsi16, rdx22, rcx28, r8_34);
    fun_43a(v56, rsi16, rdx22, rcx28, r8_34);
    fun_442(r15_3, rsi16, rdx22, rcx28, r8_34);
    goto v57;
}

void fputc() {
}

void fun_1d() {
    return;
}

void fun_2b() {
    int64_t rcx1;
    int64_t rcx2;
    int32_t* rax3;
    int32_t* rax4;
    int32_t eax5;

    *reinterpret_cast<signed char*>(rcx1 - 71) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rcx2 - 71) + 1);
    *rax3 = *rax4 + eax5;
}

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

struct s40 {
    int32_t f0;
    int32_t f4;
};

struct s41 {
    int32_t f0;
    int32_t f1;
};

void fun_d8(int64_t rdi, int32_t* rsi, int64_t rdx, int64_t rcx) {
    struct s37* rdi5;
    struct s38* rdi6;
    int64_t rbx7;
    struct s39* rdi8;
    int64_t r14_9;
    int64_t rdx10;
    int64_t r9_11;
    int64_t r12_12;
    int32_t* rsi13;
    int32_t* rax14;
    int64_t* rax15;
    int32_t ebp16;
    int32_t ebp17;
    struct s40* rdi18;
    int32_t* rsi19;
    struct s39* r14_20;
    int32_t ebp21;
    int32_t ebp22;
    struct s40* rdi23;
    int32_t* rsi24;
    struct s41* rdi25;
    int32_t* rsi26;
    struct s39* r14_27;
    int64_t r13_28;

    *reinterpret_cast<int32_t*>(&rdi5) = static_cast<int32_t>(rdi + reinterpret_cast<int64_t>(rsi));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi5->f0 = *rsi;
    rdi6 = reinterpret_cast<struct s38*>(&rdi5->f4);
    __asm__("divsd xmm0, [r8]");
    rdi6->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi + 1) + rbx7);
    rdi8 = reinterpret_cast<struct s39*>(&rdi6->f4);
    if (rdx + 1 == r14_9) {
        rdx10 = r9_11;
        if (r12_12 + 1 < rcx) {
            do {
                rsi13 = rax14 + rdx10 * 2;
                rax15[rdx10] = reinterpret_cast<int64_t>(fputc);
                if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp16 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp17 == fputc))) {
                    rdi8->f0 = *rsi13;
                    ++rsi13;
                    *reinterpret_cast<int32_t*>(&rdi8) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi8->f0 = *rsi13;
                        rdi18 = reinterpret_cast<struct s40*>(&rdi8->f4);
                        rsi19 = rsi13 + 1;
                        __asm__("mulsd xmm1, [r8+rdx*8]");
                        __asm__("addsd xmm0, xmm1");
                        rdi18->f0 = *rsi19;
                        rsi13 = rsi19 + 1;
                        rdi8 = reinterpret_cast<struct s39*>(reinterpret_cast<int64_t>(&rdi18->f4) + 1);
                    } while (rdi8 != r14_20);
                }
                if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp21 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp22 == fputc))) {
                    *reinterpret_cast<int32_t*>(&rdi8) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi8->f0 = *rsi13;
                        rdi23 = reinterpret_cast<struct s40*>(&rdi8->f4);
                        rsi24 = rsi13 + 1;
                        rdi23->f0 = *rsi24;
                        rdi25 = reinterpret_cast<struct s41*>(&rdi23->f4);
                        rsi26 = rsi24 + 1;
                        __asm__("mulsd xmm1, [rsi]");
                        __asm__("subsd xmm0, xmm1");
                        rdi25->f0 = *rsi26;
                        rsi13 = rsi26 + 1;
                        rdi8 = reinterpret_cast<struct s39*>(reinterpret_cast<int64_t>(&rdi25->f1) + 1);
                    } while (rdi8 != r14_27);
                }
                ++rdx10;
            } while (rdx10 != r13_28);
        }
    }
}

void fun_1e(int32_t edi) {
}

void fun_1a5() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_1e4(0x124f80, 8);
}

