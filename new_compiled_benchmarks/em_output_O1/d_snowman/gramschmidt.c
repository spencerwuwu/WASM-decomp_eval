
void fputc();

struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_155();

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

int32_t** g29a = reinterpret_cast<int32_t**>(0x3d8d48208b4c);

void fun_2b6(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, uint64_t r8);

void fun_2d0();

void fun_2fb();

void fun_31e();

void fun_350(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, uint64_t r8);

void fun_368();

void fun_39b();

void fun_3bc();

void fun_3ec(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, uint64_t r8);

void fun_405(int64_t rdi, struct s0* rsi, int64_t* rdx, int32_t* rcx, uint64_t r8);

void fun_270(int64_t rdi, struct s0* rsi, int64_t* rdx, int32_t* rcx, uint64_t r8);

void fun_27a(int64_t rdi, struct s0* rsi, int64_t* rdx, int32_t* rcx, uint64_t r8);

void fun_282(int64_t rdi, struct s0* rsi, int64_t* rdx, int32_t* rcx, uint64_t r8);

void fun_f0(int32_t* rdi) {
    int32_t* r13_2;
    uint64_t r12_3;
    uint64_t rbp4;
    uint64_t rax5;
    struct s0* rsi6;
    int64_t* rax7;
    int64_t* v8;
    int64_t* rdx9;
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
    uint64_t r8_22;
    int64_t rbx23;
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
    int64_t rbx44;
    int64_t v45;
    int64_t r15_46;
    int64_t v47;

    *reinterpret_cast<int32_t*>(&r13_2) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_2) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        r12_3 = rbp4;
        *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorpd xmm0, xmm0");
        do {
            *rdi = rsi6->f0;
            ++rdi;
            rsi6 = reinterpret_cast<struct s0*>(&rsi6->f4);
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm0, xmm1");
            ++rax5;
        } while (rax5 != 0x3e8);
        __asm__("ucomisd xmm0, xmm2");
        if (rax5 < 0x3e8) {
            fun_155();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rax7 = v8 + r12_3 * 0x4b0;
        *rdi = rsi6->f0;
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
            rdi = &rdi13->f4;
            rsi6 = reinterpret_cast<struct s0*>(&rsi14->f4);
            rdx9 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rdx9) + 1);
        } while (!reinterpret_cast<int1_t>(rdx9 == 0x3e8));
        rbp4 = r12_3 + 1;
        rcx16 = r13_2;
        if (r12_3 <= 0x4ae) {
            do {
                rdx9 = rax7 + static_cast<int64_t>(rcx16);
                rax7[static_cast<int64_t>(rcx16)] = reinterpret_cast<int64_t>(fputc);
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
                    r8_22 = rbx23 + reinterpret_cast<uint64_t>(rdi21);
                    *rdi21 = rsi6->f0;
                    rsi24 = reinterpret_cast<struct s5*>(&rsi6->f4);
                    rdi25 = reinterpret_cast<struct s6*>(reinterpret_cast<uint64_t>(rdi21 + 1) + reinterpret_cast<int64_t>(r15_26));
                    rdi25->f0 = rsi24->f0;
                    rdi27 = reinterpret_cast<struct s7*>(&rdi25->f4);
                    rsi28 = &rsi24->f4;
                    __asm__("mulsd xmm1, [rdx]");
                    __asm__("subsd xmm0, xmm1");
                    rdi27->f0 = *rsi28;
                    rdi = &rdi27->f4;
                    rsi6 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi28 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rsi6 == 0x3e8));
                rcx16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx16) + 1);
            } while (!reinterpret_cast<int1_t>(rcx16 == 0x4b0));
        }
        r13_2 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_2) + 1);
    } while (rbp4 != 0x4b0);
    if (v29 >= 43 && **r14_30 == fputc) {
        rax31 = g29a;
        r12_32 = *rax31;
        rcx33 = r12_32;
        fun_2b6(0x2a4, 22, 1, rcx33, r8_22);
        rsi34 = reinterpret_cast<int32_t*>(0x2bd);
        *reinterpret_cast<int32_t*>(&rbp35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp35) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi36 = r12_32;
        fun_2d0();
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
                    fun_2fb();
                }
                *rdi36 = *rsi34;
                rdi36 = r12_32;
                rsi34 = reinterpret_cast<int32_t*>(0x317);
                fun_31e();
                ++r13_38;
            } while (r13_38 != 0x4b0);
            ++rbp35;
        } while (rbp35 != 0x4b0);
        *reinterpret_cast<int32_t*>(&rbp39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_350(r12_32, 0x33d, 0x344, rcx33, r8_22);
        rsi40 = reinterpret_cast<int32_t*>(0x357);
        rdi41 = r12_32;
        fun_368();
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
                    fun_39b();
                }
                *rdi41 = *rsi40;
                rdi41 = r12_32;
                rsi40 = reinterpret_cast<int32_t*>(0x3b5);
                fun_3bc();
                ++r13_43;
            } while (r13_43 != 0x4b0);
            ++rbp39;
        } while (rbp39 != 0x3e8);
        fun_3ec(r12_32, 0x3db, 0x3e2, rcx33, r8_22);
        *reinterpret_cast<int32_t*>(&rsi6) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx16 = r12_32;
        fun_405(0x3f3, 22, 1, rcx16, r8_22);
    }
    fun_270(rbx44, rsi6, rdx9, rcx16, r8_22);
    fun_27a(v45, rsi6, rdx9, rcx16, r8_22);
    fun_282(r15_46, rsi6, rdx9, rcx16, r8_22);
    goto v47;
}

void fun_270(int64_t rdi, struct s0* rsi, int64_t* rdx, int32_t* rcx, uint64_t r8) {
    int64_t v6;
    int64_t r15_7;
    int64_t v8;

    fun_27a(v6, rsi, rdx, rcx, r8);
    fun_282(r15_7, rsi, rdx, rcx, r8);
    goto v8;
}

void fun_2fb() {
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
    uint64_t r8_11;
    int32_t* rsi12;
    int32_t* rdi13;
    int32_t* r12_14;
    int64_t r14_15;
    int64_t r13_16;
    int32_t* r12_17;
    int32_t* r12_18;
    int32_t* r12_19;
    int32_t* rcx20;
    uint64_t r8_21;
    int32_t* r12_22;
    uint64_t r8_23;
    int64_t rbx24;
    uint64_t r8_25;
    int64_t v26;
    uint64_t r8_27;
    int64_t r15_28;
    uint64_t r8_29;
    int64_t v30;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r12_3;
        rsi2 = reinterpret_cast<int32_t*>(0x317);
        fun_31e();
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
        fun_2fb();
    }
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_350(r12_9, 0x33d, 0x344, rcx10, r8_11);
    rsi12 = reinterpret_cast<int32_t*>(0x357);
    rdi13 = r12_14;
    fun_368();
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
                fun_39b();
            }
            *rdi13 = *rsi12;
            rdi13 = r12_18;
            rsi12 = reinterpret_cast<int32_t*>(0x3b5);
            fun_3bc();
            ++r13_16;
        } while (r13_16 != 0x4b0);
        ++rbp8;
    } while (rbp8 != 0x3e8);
    fun_3ec(r12_19, 0x3db, 0x3e2, rcx20, r8_21);
    fun_405(0x3f3, 22, 1, r12_22, r8_23);
    fun_270(rbx24, 22, 1, r12_22, r8_25);
    fun_27a(v26, 22, 1, r12_22, r8_27);
    fun_282(r15_28, 22, 1, r12_22, r8_29);
    goto v30;
}

void fun_31e() {
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
    uint64_t r8_11;
    int32_t* rsi12;
    int32_t* rdi13;
    int32_t* r12_14;
    int64_t r14_15;
    int64_t r13_16;
    int32_t* r12_17;
    int32_t* r12_18;
    int32_t* r12_19;
    int32_t* rcx20;
    uint64_t r8_21;
    int32_t* r12_22;
    uint64_t r8_23;
    int64_t rbx24;
    uint64_t r8_25;
    int64_t v26;
    uint64_t r8_27;
    int64_t r15_28;
    uint64_t r8_29;
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
            fun_2fb();
        }
        *rdi4 = *rsi5;
        rdi4 = r12_7;
        rsi5 = reinterpret_cast<int32_t*>(0x317);
        fun_31e();
    }
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_350(r12_9, 0x33d, 0x344, rcx10, r8_11);
    rsi12 = reinterpret_cast<int32_t*>(0x357);
    rdi13 = r12_14;
    fun_368();
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
                fun_39b();
            }
            *rdi13 = *rsi12;
            rdi13 = r12_18;
            rsi12 = reinterpret_cast<int32_t*>(0x3b5);
            fun_3bc();
            ++r13_16;
        } while (r13_16 != 0x4b0);
        ++rbp8;
    } while (rbp8 != 0x3e8);
    fun_3ec(r12_19, 0x3db, 0x3e2, rcx20, r8_21);
    fun_405(0x3f3, 22, 1, r12_22, r8_23);
    fun_270(rbx24, 22, 1, r12_22, r8_25);
    fun_27a(v26, 22, 1, r12_22, r8_27);
    fun_282(r15_28, 22, 1, r12_22, r8_29);
    goto v30;
}

void fun_2d0() {
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
    uint64_t r8_11;
    int32_t* rsi12;
    int32_t* rdi13;
    int32_t* r12_14;
    int64_t r14_15;
    int64_t r13_16;
    int32_t* r12_17;
    int32_t* r12_18;
    int32_t* r12_19;
    int32_t* rcx20;
    uint64_t r8_21;
    int32_t* r12_22;
    uint64_t r8_23;
    int64_t rbx24;
    uint64_t r8_25;
    int64_t v26;
    uint64_t r8_27;
    int64_t r15_28;
    uint64_t r8_29;
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
                fun_2fb();
            }
            *rdi4 = *rsi5;
            rdi4 = r12_7;
            rsi5 = reinterpret_cast<int32_t*>(0x317);
            fun_31e();
            ++r13_3;
        } while (r13_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_350(r12_9, 0x33d, 0x344, rcx10, r8_11);
    rsi12 = reinterpret_cast<int32_t*>(0x357);
    rdi13 = r12_14;
    fun_368();
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
                fun_39b();
            }
            *rdi13 = *rsi12;
            rdi13 = r12_18;
            rsi12 = reinterpret_cast<int32_t*>(0x3b5);
            fun_3bc();
            ++r13_16;
        } while (r13_16 != 0x4b0);
        ++rbp8;
    } while (rbp8 != 0x3e8);
    fun_3ec(r12_19, 0x3db, 0x3e2, rcx20, r8_21);
    fun_405(0x3f3, 22, 1, r12_22, r8_23);
    fun_270(rbx24, 22, 1, r12_22, r8_25);
    fun_27a(v26, 22, 1, r12_22, r8_27);
    fun_282(r15_28, 22, 1, r12_22, r8_29);
    goto v30;
}

void fun_350(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, uint64_t r8) {
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
    int64_t rbx16;
    int64_t v17;
    int64_t r15_18;
    int64_t v19;

    rsi6 = reinterpret_cast<int32_t*>(0x357);
    rdi7 = r12_8;
    fun_368();
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
                fun_39b();
            }
            *rdi7 = *rsi6;
            rdi7 = r12_13;
            rsi6 = reinterpret_cast<int32_t*>(0x3b5);
            fun_3bc();
            ++r13_11;
        } while (r13_11 != 0x4b0);
        ++rbp10;
    } while (rbp10 != 0x3e8);
    fun_3ec(r12_14, 0x3db, 0x3e2, rcx, r8);
    fun_405(0x3f3, 22, 1, r12_15, r8);
    fun_270(rbx16, 22, 1, r12_15, r8);
    fun_27a(v17, 22, 1, r12_15, r8);
    fun_282(r15_18, 22, 1, r12_15, r8);
    goto v19;
}

void fun_39b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r12_3;
    int64_t r13_4;
    int64_t rbp5;
    int64_t r14_6;
    int32_t* r12_7;
    int32_t* r12_8;
    int32_t* rcx9;
    uint64_t r8_10;
    int32_t* r12_11;
    uint64_t r8_12;
    int64_t rbx13;
    uint64_t r8_14;
    int64_t v15;
    uint64_t r8_16;
    int64_t r15_17;
    uint64_t r8_18;
    int64_t v19;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r12_3;
        rsi2 = reinterpret_cast<int32_t*>(0x3b5);
        fun_3bc();
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
        fun_39b();
    }
    fun_3ec(r12_8, 0x3db, 0x3e2, rcx9, r8_10);
    fun_405(0x3f3, 22, 1, r12_11, r8_12);
    fun_270(rbx13, 22, 1, r12_11, r8_14);
    fun_27a(v15, 22, 1, r12_11, r8_16);
    fun_282(r15_17, 22, 1, r12_11, r8_18);
    goto v19;
}

void fun_3bc() {
    int64_t r13_1;
    int64_t rbp2;
    int64_t r14_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r12_6;
    int32_t* r12_7;
    int32_t* r12_8;
    int32_t* rcx9;
    uint64_t r8_10;
    int32_t* r12_11;
    uint64_t r8_12;
    int64_t rbx13;
    uint64_t r8_14;
    int64_t v15;
    uint64_t r8_16;
    int64_t r15_17;
    uint64_t r8_18;
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
            fun_39b();
        }
        *rdi4 = *rsi5;
        rdi4 = r12_7;
        rsi5 = reinterpret_cast<int32_t*>(0x3b5);
        fun_3bc();
    }
    fun_3ec(r12_8, 0x3db, 0x3e2, rcx9, r8_10);
    fun_405(0x3f3, 22, 1, r12_11, r8_12);
    fun_270(rbx13, 22, 1, r12_11, r8_14);
    fun_27a(v15, 22, 1, r12_11, r8_16);
    fun_282(r15_17, 22, 1, r12_11, r8_18);
    goto v19;
}

void fun_3ec(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, uint64_t r8) {
    int32_t* r12_6;
    int64_t rbx7;
    int64_t v8;
    int64_t r15_9;
    int64_t v10;

    fun_405(0x3f3, 22, 1, r12_6, r8);
    fun_270(rbx7, 22, 1, r12_6, r8);
    fun_27a(v8, 22, 1, r12_6, r8);
    fun_282(r15_9, 22, 1, r12_6, r8);
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

void fun_155() {
    int64_t* rax1;
    uint64_t r12_2;
    int64_t* v3;
    int32_t* rdi4;
    struct s0* rsi5;
    int64_t* rdx6;
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
    uint64_t r8_21;
    int64_t rbx22;
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
    int64_t rbx44;
    int64_t v45;
    int64_t r15_46;
    int64_t v47;

    while (1) {
        __asm__("xorpd xmm2, xmm2");
        while (1) {
            rax1 = v3 + r12_2 * 0x4b0;
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
                rdx6 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rdx6) + 1);
            } while (!reinterpret_cast<int1_t>(rdx6 == 0x3e8));
            rbp13 = r12_2 + 1;
            rcx14 = r13_15;
            if (r12_2 <= 0x4ae) {
                do {
                    rdx6 = rax1 + static_cast<int64_t>(rcx14);
                    rax1[static_cast<int64_t>(rcx14)] = reinterpret_cast<int64_t>(fputc);
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
                        r8_21 = rbx22 + reinterpret_cast<uint64_t>(rdi20);
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
                goto addr_259_37;
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
        fun_155();
    }
    addr_259_37:
    if (v29 >= 43 && **r14_30 == fputc) {
        rax31 = g29a;
        r12_32 = *rax31;
        rcx33 = r12_32;
        fun_2b6(0x2a4, 22, 1, rcx33, r8_21);
        rsi34 = reinterpret_cast<int32_t*>(0x2bd);
        *reinterpret_cast<int32_t*>(&rbp35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp35) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi36 = r12_32;
        fun_2d0();
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
                    fun_2fb();
                }
                *rdi36 = *rsi34;
                rdi36 = r12_32;
                rsi34 = reinterpret_cast<int32_t*>(0x317);
                fun_31e();
                ++r13_38;
            } while (r13_38 != 0x4b0);
            ++rbp35;
        } while (rbp35 != 0x4b0);
        *reinterpret_cast<int32_t*>(&rbp39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_350(r12_32, 0x33d, 0x344, rcx33, r8_21);
        rsi40 = reinterpret_cast<int32_t*>(0x357);
        rdi41 = r12_32;
        fun_368();
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
                    fun_39b();
                }
                *rdi41 = *rsi40;
                rdi41 = r12_32;
                rsi40 = reinterpret_cast<int32_t*>(0x3b5);
                fun_3bc();
                ++r13_43;
            } while (r13_43 != 0x4b0);
            ++rbp39;
        } while (rbp39 != 0x3e8);
        fun_3ec(r12_32, 0x3db, 0x3e2, rcx33, r8_21);
        *reinterpret_cast<int32_t*>(&rsi5) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx6) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx14 = r12_32;
        fun_405(0x3f3, 22, 1, rcx14, r8_21);
    }
    fun_270(rbx44, rsi5, rdx6, rcx14, r8_21);
    fun_27a(v45, rsi5, rdx6, rcx14, r8_21);
    fun_282(r15_46, rsi5, rdx6, rcx14, r8_21);
    goto v47;
}

void fun_2b6(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, uint64_t r8) {
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
    int64_t rbx25;
    int64_t v26;
    int64_t r15_27;
    int64_t v28;

    rsi6 = reinterpret_cast<int32_t*>(0x2bd);
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi8 = r12_9;
    fun_2d0();
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
                fun_2fb();
            }
            *rdi8 = *rsi6;
            rdi8 = r12_13;
            rsi6 = reinterpret_cast<int32_t*>(0x317);
            fun_31e();
            ++r13_11;
        } while (r13_11 != 0x4b0);
        ++rbp7;
    } while (rbp7 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rbp14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_350(r12_15, 0x33d, 0x344, rcx, r8);
    rsi16 = reinterpret_cast<int32_t*>(0x357);
    rdi17 = r12_18;
    fun_368();
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
                fun_39b();
            }
            *rdi17 = *rsi16;
            rdi17 = r12_22;
            rsi16 = reinterpret_cast<int32_t*>(0x3b5);
            fun_3bc();
            ++r13_20;
        } while (r13_20 != 0x4b0);
        ++rbp14;
    } while (rbp14 != 0x3e8);
    fun_3ec(r12_23, 0x3db, 0x3e2, rcx, r8);
    fun_405(0x3f3, 22, 1, r12_24, r8);
    fun_270(rbx25, 22, 1, r12_24, r8);
    fun_27a(v26, 22, 1, r12_24, r8);
    fun_282(r15_27, 22, 1, r12_24, r8);
    goto v28;
}

void fun_27a(int64_t rdi, struct s0* rsi, int64_t* rdx, int32_t* rcx, uint64_t r8) {
    int64_t r15_6;
    int64_t v7;

    fun_282(r15_6, rsi, rdx, rcx, r8);
    goto v7;
}

void fun_368() {
    int64_t r14_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r12_6;
    int32_t* r12_7;
    int32_t* r12_8;
    int32_t* rcx9;
    uint64_t r8_10;
    int32_t* r12_11;
    uint64_t r8_12;
    int64_t rbx13;
    uint64_t r8_14;
    int64_t v15;
    uint64_t r8_16;
    int64_t r15_17;
    uint64_t r8_18;
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
                fun_39b();
            }
            *rdi4 = *rsi5;
            rdi4 = r12_7;
            rsi5 = reinterpret_cast<int32_t*>(0x3b5);
            fun_3bc();
            ++r13_3;
        } while (r13_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x3e8);
    fun_3ec(r12_8, 0x3db, 0x3e2, rcx9, r8_10);
    fun_405(0x3f3, 22, 1, r12_11, r8_12);
    fun_270(rbx13, 22, 1, r12_11, r8_14);
    fun_27a(v15, 22, 1, r12_11, r8_16);
    fun_282(r15_17, 22, 1, r12_11, r8_18);
    goto v19;
}

void fun_405(int64_t rdi, struct s0* rsi, int64_t* rdx, int32_t* rcx, uint64_t r8) {
    int64_t rbx6;
    int64_t v7;
    int64_t r15_8;
    int64_t v9;

    fun_270(rbx6, rsi, rdx, rcx, r8);
    fun_27a(v7, rsi, rdx, rcx, r8);
    fun_282(r15_8, rsi, rdx, rcx, r8);
    goto v9;
}

void fun_282(int64_t rdi, struct s0* rsi, int64_t* rdx, int32_t* rcx, uint64_t r8) {
    int64_t v6;

    goto v6;
}

void fputc() {
}

struct s14 {
    signed char[8] pad8;
    signed char f8;
};

struct s15 {
    signed char[8] pad8;
    signed char f8;
};

void fun_19() {
    struct s14* rsi1;
    struct s15* rsi2;
    signed char bh3;

    rsi1->f8 = reinterpret_cast<signed char>(rsi2->f8 + bh3);
}

void fun_27() {
}

void fun_7c() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
}

void fun_c8() {
    signed char* rax1;
    int32_t* v2;

    __asm__("ror dword [rax-0x7f], 0xf9");
    *reinterpret_cast<signed char*>(&rax1) = 4;
    *rax1 = reinterpret_cast<signed char>(*rax1 + 4);
    if (!reinterpret_cast<int1_t>(*rax1 == fputc)) 
        goto 0x80;
    if (reinterpret_cast<int1_t>(rax1 + 1 == 0x3e8)) {
        fun_f0(v2);
    }
}

