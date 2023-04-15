
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fun_35f(int64_t rdi, struct s0* rsi, int32_t* rdx, struct s1* rcx, int64_t r8);

void fun_367(int32_t* rdi, struct s0* rsi, int32_t* rdx, struct s1* rcx, int64_t r8);

void fun_357(int32_t* rdi, struct s0* rsi, int32_t* rdx, struct s1* rcx, int64_t r8) {
    int64_t r14_6;
    int32_t* r15_7;
    int64_t v8;

    fun_35f(r14_6, rsi, rdx, rcx, r8);
    fun_367(r15_7, rsi, rdx, rcx, r8);
    goto v8;
}

void fun_40e();

void fputc(int32_t edi);

void fun_442(struct s1* rdi, int64_t rsi, int64_t rdx, struct s1* rcx, int64_t r8);

void fun_45b(int64_t rdi, struct s0* rsi, int32_t* rdx, struct s1* rcx, int64_t r8);

void fun_3ec() {
    struct s1* rdi1;
    struct s1* rsi2;
    int64_t r12_3;
    int64_t rbp4;
    int64_t r13_5;
    struct s1* rcx6;
    int64_t r8_7;
    int64_t r8_8;
    int32_t* rbx9;
    int64_t r8_10;
    int64_t r14_11;
    int64_t r8_12;
    int32_t* r15_13;
    int64_t r8_14;
    int64_t v15;

    while (1) {
        rdi1->f0 = rsi2->f0;
        rdi1 = reinterpret_cast<struct s1*>(__return_address());
        rsi2 = reinterpret_cast<struct s1*>(0x407);
        fun_40e();
        ++r12_3;
        if (r12_3 == 0x4b0) {
            ++rbp4;
            if (rbp4 == 0x4b0) 
                break;
            r13_5 = rbp4 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + r13_5) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = reinterpret_cast<struct s1*>(__return_address());
        fun_3ec();
    }
    fun_442(__return_address(), 0x42d, 0x434, rcx6, r8_7);
    fun_45b(0x449, 22, 1, __return_address(), r8_8);
    fun_357(rbx9, 22, 1, __return_address(), r8_10);
    fun_35f(r14_11, 22, 1, __return_address(), r8_12);
    fun_367(r15_13, 22, 1, __return_address(), r8_14);
    goto v15;
}

void fun_40e() {
    int64_t r12_1;
    int64_t rbp2;
    int64_t r13_3;
    struct s1* rdi4;
    struct s1* rsi5;
    struct s1* rcx6;
    int64_t r8_7;
    int64_t r8_8;
    int32_t* rbx9;
    int64_t r8_10;
    int64_t r14_11;
    int64_t r8_12;
    int32_t* r15_13;
    int64_t r8_14;
    int64_t v15;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x4b0) {
            ++rbp2;
            if (rbp2 == 0x4b0) 
                break;
            r13_3 = rbp2 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = reinterpret_cast<struct s1*>(__return_address());
            fun_3ec();
        }
        rdi4->f0 = rsi5->f0;
        rdi4 = reinterpret_cast<struct s1*>(__return_address());
        rsi5 = reinterpret_cast<struct s1*>(0x407);
        fun_40e();
    }
    fun_442(__return_address(), 0x42d, 0x434, rcx6, r8_7);
    fun_45b(0x449, 22, 1, __return_address(), r8_8);
    fun_357(rbx9, 22, 1, __return_address(), r8_10);
    fun_35f(r14_11, 22, 1, __return_address(), r8_12);
    fun_367(r15_13, 22, 1, __return_address(), r8_14);
    goto v15;
}

void fun_442(struct s1* rdi, int64_t rsi, int64_t rdx, struct s1* rcx, int64_t r8) {
    struct s1* r12_6;
    int32_t* rbx7;
    int64_t r14_8;
    int32_t* r15_9;
    int64_t v10;

    fun_45b(0x449, 22, 1, r12_6, r8);
    fun_357(rbx7, 22, 1, r12_6, r8);
    fun_35f(r14_8, 22, 1, r12_6, r8);
    fun_367(r15_9, 22, 1, r12_6, r8);
    goto v10;
}

void fun_3b9();

void fun_39b(int64_t rdi, int64_t rsi, int64_t rdx, struct s1* rcx, int64_t r8) {
    struct s1* rsi6;
    int64_t rbp7;
    struct s1* v8;
    struct s1* r12_9;
    struct s1* rdi10;
    struct s1* r12_11;
    int64_t r13_12;
    int64_t r12_13;
    int32_t* rbx14;
    int64_t r14_15;
    int32_t* r15_16;
    int64_t v17;

    rsi6 = reinterpret_cast<struct s1*>(0x3a2);
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    v8 = r12_9;
    rdi10 = r12_11;
    fun_3b9();
    do {
        r13_12 = rbp7 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_13 + r13_12) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi10) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v8;
                fun_3ec();
            }
            rdi10->f0 = rsi6->f0;
            rdi10 = v8;
            rsi6 = reinterpret_cast<struct s1*>(0x407);
            fun_40e();
            ++r12_13;
        } while (r12_13 != 0x4b0);
        ++rbp7;
    } while (rbp7 != 0x4b0);
    fun_442(v8, 0x42d, 0x434, rcx, r8);
    fun_45b(0x449, 22, 1, v8, r8);
    fun_357(rbx14, 22, 1, v8, r8);
    fun_35f(r14_15, 22, 1, v8, r8);
    fun_367(r15_16, 22, 1, v8, r8);
    goto v17;
}

void fun_35f(int64_t rdi, struct s0* rsi, int32_t* rdx, struct s1* rcx, int64_t r8) {
    int32_t* r15_6;
    int64_t v7;

    fun_367(r15_6, rsi, rdx, rcx, r8);
    goto v7;
}

void fun_45b(int64_t rdi, struct s0* rsi, int32_t* rdx, struct s1* rcx, int64_t r8) {
    int32_t* rbx6;
    int64_t r14_7;
    int32_t* r15_8;
    int64_t v9;

    fun_357(rbx6, rsi, rdx, rcx, r8);
    fun_35f(r14_7, rsi, rdx, rcx, r8);
    fun_367(r15_8, rsi, rdx, rcx, r8);
    goto v9;
}

int64_t fun_131(int64_t rdi, int64_t rsi);

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_143(struct s2* rdi, struct s3* rsi);

int32_t g124f80;

/* .LCPI1_1 */
int32_t LCPI1_1 = 0xff855354;

int32_t g124f84;

int32_t gc = 0xe08e0f;

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

struct s1** g37f = reinterpret_cast<struct s1**>(0x3d8d48208b4c);

void fun_11f(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    int64_t rax5;
    int64_t r14_6;
    int32_t* rax7;
    int32_t* r15_8;
    int64_t rcx9;
    int64_t rax10;
    int64_t rdx11;
    int32_t* rsi12;
    int32_t* rdi13;
    void* rsi14;
    int64_t r8_15;
    uint64_t r8_16;
    int32_t* rsi17;
    int64_t rax18;
    int64_t rdx19;
    int64_t rsi20;
    uint64_t rdi21;
    struct s4* rdi22;
    struct s5* rsi23;
    struct s6* rdi24;
    struct s7* rsi25;
    struct s1* rcx26;
    struct s8* rdi27;
    int32_t* rdi28;
    struct s1* rsi29;
    int32_t* rdx30;
    int32_t* rdi31;
    int32_t* rsi32;
    struct s0* rsi33;
    void* r8_34;
    int64_t r8_35;
    struct s1* r9_36;
    int32_t* rdi37;
    struct s9* rsi38;
    int32_t* rdi39;
    struct s10* rsi40;
    int32_t ebp41;
    signed char** r12_42;
    struct s1** rax43;
    struct s1* r12_44;
    struct s1* rcx45;
    struct s1* rsi46;
    int64_t rbp47;
    struct s1* v48;
    struct s1* rdi49;
    int64_t r13_50;
    int64_t r12_51;
    int64_t v52;

    rbx3 = rax4;
    rax5 = fun_131(0x124f80, 8);
    r14_6 = rax5;
    rax7 = fun_143(0x124f80, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
    g124f80 = LCPI1_1;
    g124f84 = gc;
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi12) = *reinterpret_cast<int32_t*>(&rdx11) * *reinterpret_cast<int32_t*>(&rax10);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, edi");
            __asm__("divsd xmm2, xmm1");
            rdi13 = reinterpret_cast<int32_t*>(rax10 * 0x1f40);
            *rdi13 = *rsi12;
            rsi14 = reinterpret_cast<void*>(rsi12 + 1);
            *reinterpret_cast<int32_t*>(&r8_15) = *reinterpret_cast<int32_t*>(&rsi14) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_15) + 4) = reinterpret_cast<int32_t>(fputc);
            r8_16 = reinterpret_cast<uint64_t>(r8_15 * 0x10624dd3) >> 38;
            *reinterpret_cast<int32_t*>(&rsi17) = *reinterpret_cast<int32_t*>(&rsi14) + -(*reinterpret_cast<int32_t*>(&r8_16) * 0x3e8) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, esi");
            __asm__("divsd xmm2, xmm0");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi13 + 1) + reinterpret_cast<int64_t>(r15_8)) = *rsi17;
            ++rdx11;
        } while (rdx11 != 0x3e8);
        ++rax10;
    } while (rax10 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rax18) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi20) = *reinterpret_cast<int32_t*>(&rdx19) * *reinterpret_cast<int32_t*>(&rcx9) + 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(fputc);
            rdi21 = reinterpret_cast<uint64_t>(rsi20 * 0x1b4e81b5) >> 39;
            *reinterpret_cast<int32_t*>(&rdi22) = *reinterpret_cast<int32_t*>(&rdi21) * 0x4b0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi23 = reinterpret_cast<struct s5*>(rbx3 + rcx9 * 0x960);
            rdi22->f0 = rsi23->f0;
            rdi24 = reinterpret_cast<struct s6*>(&rdi22->f4);
            rsi25 = reinterpret_cast<struct s7*>(&rsi23->f4);
            ++rdx19;
        } while (rdx19 != 0x4b0);
        ++rcx9;
    } while (rcx9 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx26) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi24->f0 = rsi25->f0;
    rdi27 = reinterpret_cast<struct s8*>(&rdi24->f4);
    rdi27->f0 = rsi25->f4;
    rdi28 = &rdi27->f4;
    do {
        *reinterpret_cast<int32_t*>(&rsi29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx30 = rbx3 + rax18 * 0x960;
            *rdi28 = rsi29->f0;
            rdi31 = rdi28 + 1;
            rsi32 = &rsi29->f4;
            __asm__("mulsd xmm2, xmm0");
            *rdi31 = *rsi32;
            rdi28 = rdi31 + 1;
            rsi29 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rsi32 + 1) + 1);
        } while (rsi29 != rcx26);
        *reinterpret_cast<int32_t*>(&rsi33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r8_34 = reinterpret_cast<void*>(rax18 * 0x1f40);
            rdi28 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_8) + reinterpret_cast<int64_t>(r8_34) + reinterpret_cast<int64_t>(rsi33) * 8);
            r8_35 = reinterpret_cast<int64_t>(r8_34) + r14_6 + reinterpret_cast<int64_t>(rsi33) * 8;
            *reinterpret_cast<int32_t*>(&r9_36) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_36) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi28 = rsi33->f0;
                rdi37 = rdi28 + 1;
                rsi38 = reinterpret_cast<struct s9*>(&rsi33->f4);
                __asm__("mulsd xmm2, xmm1");
                *rdi37 = rsi38->f0;
                rdi39 = rdi37 + 1;
                rsi40 = reinterpret_cast<struct s10*>(&rsi38->f4);
                __asm__("mulsd xmm3, xmm1");
                __asm__("mulsd xmm3, [r8]");
                __asm__("mulsd xmm2, [rdi]");
                __asm__("addsd xmm2, xmm3");
                __asm__("addsd xmm2, [rdx+r9*8]");
                *rdi39 = rsi40->f0;
                rdi28 = rdi39 + 1;
                rsi33 = reinterpret_cast<struct s0*>(&rsi40->f4);
                r9_36 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(r9_36) + 1);
            } while (r9_36 != rcx26);
            rsi33 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi33) + 1);
        } while (!reinterpret_cast<int1_t>(rsi33 == 0x3e8));
        ++rax18;
        rcx26 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rcx26) + 1);
    } while (rax18 != 0x4b0);
    if (ebp41 >= 43 && **r12_42 == fputc) {
        rax43 = g37f;
        r12_44 = *rax43;
        rcx45 = r12_44;
        fun_39b(0x389, 22, 1, rcx45, r8_35);
        rsi46 = reinterpret_cast<struct s1*>(0x3a2);
        *reinterpret_cast<int32_t*>(&rbp47) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp47) + 4) = reinterpret_cast<int32_t>(fputc);
        v48 = r12_44;
        rdi49 = r12_44;
        fun_3b9();
        do {
            r13_50 = rbp47 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_51) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_51) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_51 + r13_50) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi49) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi46 = v48;
                    fun_3ec();
                }
                rdi49->f0 = rsi46->f0;
                rdi49 = v48;
                rsi46 = reinterpret_cast<struct s1*>(0x407);
                fun_40e();
                ++r12_51;
            } while (r12_51 != 0x4b0);
            ++rbp47;
        } while (rbp47 != 0x4b0);
        fun_442(v48, 0x42d, 0x434, rcx45, r8_35);
        *reinterpret_cast<int32_t*>(&rsi33) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx30) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx26 = v48;
        fun_45b(0x449, 22, 1, rcx26, r8_35);
    }
    fun_357(rbx3, rsi33, rdx30, rcx26, r8_35);
    fun_35f(r14_6, rsi33, rdx30, rcx26, r8_35);
    fun_367(r15_8, rsi33, rdx30, rcx26, r8_35);
    goto v52;
}

void fun_3b9() {
    struct s1* v1;
    int64_t r13_2;
    int64_t rbp3;
    int64_t r12_4;
    struct s1* rdi5;
    struct s1* rsi6;
    struct s1* rcx7;
    int64_t r8_8;
    int64_t r8_9;
    int32_t* rbx10;
    int64_t r8_11;
    int64_t r14_12;
    int64_t r8_13;
    int32_t* r15_14;
    int64_t r8_15;
    int64_t v16;

    v1 = reinterpret_cast<struct s1*>(__return_address());
    do {
        r13_2 = rbp3 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + r13_2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v1;
                fun_3ec();
            }
            rdi5->f0 = rsi6->f0;
            rdi5 = v1;
            rsi6 = reinterpret_cast<struct s1*>(0x407);
            fun_40e();
            ++r12_4;
        } while (r12_4 != 0x4b0);
        ++rbp3;
    } while (rbp3 != 0x4b0);
    fun_442(v1, 0x42d, 0x434, rcx7, r8_8);
    fun_45b(0x449, 22, 1, v1, r8_9);
    fun_357(rbx10, 22, 1, v1, r8_11);
    fun_35f(r14_12, 22, 1, v1, r8_13);
    fun_367(r15_14, 22, 1, v1, r8_15);
    goto v16;
}

void fun_367(int32_t* rdi, struct s0* rsi, int32_t* rdx, struct s1* rcx, int64_t r8) {
    int64_t v6;

    goto v6;
}

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

int64_t fun_131(int64_t rdi, int64_t rsi) {
    int64_t r14_3;
    int64_t rax4;
    int32_t* rax5;
    int32_t* r15_6;
    int64_t rcx7;
    int64_t rax8;
    int64_t rdx9;
    int32_t* rsi10;
    int32_t* rdi11;
    void* rsi12;
    int64_t r8_13;
    uint64_t r8_14;
    int32_t* rsi15;
    int64_t rax16;
    int64_t rdx17;
    int64_t rsi18;
    uint64_t rdi19;
    struct s11* rdi20;
    struct s12* rsi21;
    int32_t* rbx22;
    struct s13* rdi23;
    struct s14* rsi24;
    struct s1* rcx25;
    struct s15* rdi26;
    int32_t* rdi27;
    struct s1* rsi28;
    int32_t* rdx29;
    int32_t* rbx30;
    int32_t* rdi31;
    int32_t* rsi32;
    struct s0* rsi33;
    void* r8_34;
    int64_t r8_35;
    struct s1* r9_36;
    int32_t* rdi37;
    struct s9* rsi38;
    int32_t* rdi39;
    struct s10* rsi40;
    int32_t ebp41;
    signed char** r12_42;
    struct s1** rax43;
    struct s1* r12_44;
    struct s1* rcx45;
    struct s1* rsi46;
    int64_t rbp47;
    struct s1* v48;
    struct s1* rdi49;
    int64_t r13_50;
    int64_t r12_51;
    int32_t* rbx52;
    int64_t v53;

    r14_3 = rax4;
    rax5 = fun_143(0x124f80, 8);
    r15_6 = rax5;
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    g124f80 = LCPI1_1;
    g124f84 = gc;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi10) = *reinterpret_cast<int32_t*>(&rdx9) * *reinterpret_cast<int32_t*>(&rax8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, edi");
            __asm__("divsd xmm2, xmm1");
            rdi11 = reinterpret_cast<int32_t*>(rax8 * 0x1f40);
            *rdi11 = *rsi10;
            rsi12 = reinterpret_cast<void*>(rsi10 + 1);
            *reinterpret_cast<int32_t*>(&r8_13) = *reinterpret_cast<int32_t*>(&rsi12) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = reinterpret_cast<int32_t>(fputc);
            r8_14 = reinterpret_cast<uint64_t>(r8_13 * 0x10624dd3) >> 38;
            *reinterpret_cast<int32_t*>(&rsi15) = *reinterpret_cast<int32_t*>(&rsi12) + -(*reinterpret_cast<int32_t*>(&r8_14) * 0x3e8) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, esi");
            __asm__("divsd xmm2, xmm0");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi11 + 1) + reinterpret_cast<int64_t>(r15_6)) = *rsi15;
            ++rdx9;
        } while (rdx9 != 0x3e8);
        ++rax8;
    } while (rax8 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rax16) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi18) = *reinterpret_cast<int32_t*>(&rdx17) * *reinterpret_cast<int32_t*>(&rcx7) + 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fputc);
            rdi19 = reinterpret_cast<uint64_t>(rsi18 * 0x1b4e81b5) >> 39;
            *reinterpret_cast<int32_t*>(&rdi20) = *reinterpret_cast<int32_t*>(&rdi19) * 0x4b0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi21 = reinterpret_cast<struct s12*>(rbx22 + rcx7 * 0x960);
            rdi20->f0 = rsi21->f0;
            rdi23 = reinterpret_cast<struct s13*>(&rdi20->f4);
            rsi24 = reinterpret_cast<struct s14*>(&rsi21->f4);
            ++rdx17;
        } while (rdx17 != 0x4b0);
        ++rcx7;
    } while (rcx7 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx25) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi23->f0 = rsi24->f0;
    rdi26 = reinterpret_cast<struct s15*>(&rdi23->f4);
    rdi26->f0 = rsi24->f4;
    rdi27 = &rdi26->f4;
    do {
        *reinterpret_cast<int32_t*>(&rsi28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx29 = rbx30 + rax16 * 0x960;
            *rdi27 = rsi28->f0;
            rdi31 = rdi27 + 1;
            rsi32 = &rsi28->f4;
            __asm__("mulsd xmm2, xmm0");
            *rdi31 = *rsi32;
            rdi27 = rdi31 + 1;
            rsi28 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rsi32 + 1) + 1);
        } while (rsi28 != rcx25);
        *reinterpret_cast<int32_t*>(&rsi33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r8_34 = reinterpret_cast<void*>(rax16 * 0x1f40);
            rdi27 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_6) + reinterpret_cast<int64_t>(r8_34) + reinterpret_cast<int64_t>(rsi33) * 8);
            r8_35 = reinterpret_cast<int64_t>(r8_34) + r14_3 + reinterpret_cast<int64_t>(rsi33) * 8;
            *reinterpret_cast<int32_t*>(&r9_36) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_36) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi27 = rsi33->f0;
                rdi37 = rdi27 + 1;
                rsi38 = reinterpret_cast<struct s9*>(&rsi33->f4);
                __asm__("mulsd xmm2, xmm1");
                *rdi37 = rsi38->f0;
                rdi39 = rdi37 + 1;
                rsi40 = reinterpret_cast<struct s10*>(&rsi38->f4);
                __asm__("mulsd xmm3, xmm1");
                __asm__("mulsd xmm3, [r8]");
                __asm__("mulsd xmm2, [rdi]");
                __asm__("addsd xmm2, xmm3");
                __asm__("addsd xmm2, [rdx+r9*8]");
                *rdi39 = rsi40->f0;
                rdi27 = rdi39 + 1;
                rsi33 = reinterpret_cast<struct s0*>(&rsi40->f4);
                r9_36 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(r9_36) + 1);
            } while (r9_36 != rcx25);
            rsi33 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi33) + 1);
        } while (!reinterpret_cast<int1_t>(rsi33 == 0x3e8));
        ++rax16;
        rcx25 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rcx25) + 1);
    } while (rax16 != 0x4b0);
    if (ebp41 >= 43 && **r12_42 == fputc) {
        rax43 = g37f;
        r12_44 = *rax43;
        rcx45 = r12_44;
        fun_39b(0x389, 22, 1, rcx45, r8_35);
        rsi46 = reinterpret_cast<struct s1*>(0x3a2);
        *reinterpret_cast<int32_t*>(&rbp47) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp47) + 4) = reinterpret_cast<int32_t>(fputc);
        v48 = r12_44;
        rdi49 = r12_44;
        fun_3b9();
        do {
            r13_50 = rbp47 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_51) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_51) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_51 + r13_50) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi49) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi46 = v48;
                    fun_3ec();
                }
                rdi49->f0 = rsi46->f0;
                rdi49 = v48;
                rsi46 = reinterpret_cast<struct s1*>(0x407);
                fun_40e();
                ++r12_51;
            } while (r12_51 != 0x4b0);
            ++rbp47;
        } while (rbp47 != 0x4b0);
        fun_442(v48, 0x42d, 0x434, rcx45, r8_35);
        *reinterpret_cast<int32_t*>(&rsi33) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx29) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx25 = v48;
        fun_45b(0x449, 22, 1, rcx25, r8_35);
    }
    fun_357(rbx52, rsi33, rdx29, rcx25, r8_35);
    fun_35f(r14_3, rsi33, rdx29, rcx25, r8_35);
    fun_367(r15_6, rsi33, rdx29, rcx25, r8_35);
    goto v53;
}

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

int32_t* fun_143(struct s2* rdi, struct s3* rsi) {
    int32_t* r15_3;
    int32_t* rax4;
    int64_t rcx5;
    int64_t rax6;
    int64_t rdx7;
    int32_t* rsi8;
    int32_t* rdi9;
    void* rsi10;
    int64_t r8_11;
    uint64_t r8_12;
    int32_t* rsi13;
    int64_t rax14;
    int64_t rdx15;
    int64_t rsi16;
    uint64_t rdi17;
    struct s16* rdi18;
    struct s17* rsi19;
    int32_t* rbx20;
    struct s18* rdi21;
    struct s19* rsi22;
    struct s1* rcx23;
    struct s20* rdi24;
    int32_t* rdi25;
    struct s1* rsi26;
    int32_t* rdx27;
    int32_t* rbx28;
    int32_t* rdi29;
    int32_t* rsi30;
    struct s0* rsi31;
    void* r8_32;
    int64_t r8_33;
    int64_t r14_34;
    struct s1* r9_35;
    int32_t* rdi36;
    struct s9* rsi37;
    int32_t* rdi38;
    struct s10* rsi39;
    int32_t ebp40;
    signed char** r12_41;
    struct s1** rax42;
    struct s1* r12_43;
    struct s1* rcx44;
    struct s1* rsi45;
    int64_t rbp46;
    struct s1* v47;
    struct s1* rdi48;
    int64_t r13_49;
    int64_t r12_50;
    int32_t* rbx51;
    int64_t r14_52;
    int64_t v53;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&rcx5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi8) = *reinterpret_cast<int32_t*>(&rdx7) * *reinterpret_cast<int32_t*>(&rax6);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, edi");
            __asm__("divsd xmm2, xmm1");
            rdi9 = reinterpret_cast<int32_t*>(rax6 * 0x1f40);
            *rdi9 = *rsi8;
            rsi10 = reinterpret_cast<void*>(rsi8 + 1);
            *reinterpret_cast<int32_t*>(&r8_11) = *reinterpret_cast<int32_t*>(&rsi10) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = reinterpret_cast<int32_t>(fputc);
            r8_12 = reinterpret_cast<uint64_t>(r8_11 * 0x10624dd3) >> 38;
            *reinterpret_cast<int32_t*>(&rsi13) = *reinterpret_cast<int32_t*>(&rsi10) + -(*reinterpret_cast<int32_t*>(&r8_12) * 0x3e8) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, esi");
            __asm__("divsd xmm2, xmm0");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi9 + 1) + reinterpret_cast<int64_t>(r15_3)) = *rsi13;
            ++rdx7;
        } while (rdx7 != 0x3e8);
        ++rax6;
    } while (rax6 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi16) = *reinterpret_cast<int32_t*>(&rdx15) * *reinterpret_cast<int32_t*>(&rcx5) + 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
            rdi17 = reinterpret_cast<uint64_t>(rsi16 * 0x1b4e81b5) >> 39;
            *reinterpret_cast<int32_t*>(&rdi18) = *reinterpret_cast<int32_t*>(&rdi17) * 0x4b0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi19 = reinterpret_cast<struct s17*>(rbx20 + rcx5 * 0x960);
            rdi18->f0 = rsi19->f0;
            rdi21 = reinterpret_cast<struct s18*>(&rdi18->f4);
            rsi22 = reinterpret_cast<struct s19*>(&rsi19->f4);
            ++rdx15;
        } while (rdx15 != 0x4b0);
        ++rcx5;
    } while (rcx5 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx23) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi21->f0 = rsi22->f0;
    rdi24 = reinterpret_cast<struct s20*>(&rdi21->f4);
    rdi24->f0 = rsi22->f4;
    rdi25 = &rdi24->f4;
    do {
        *reinterpret_cast<int32_t*>(&rsi26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi26) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx27 = rbx28 + rax14 * 0x960;
            *rdi25 = rsi26->f0;
            rdi29 = rdi25 + 1;
            rsi30 = &rsi26->f4;
            __asm__("mulsd xmm2, xmm0");
            *rdi29 = *rsi30;
            rdi25 = rdi29 + 1;
            rsi26 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rsi30 + 1) + 1);
        } while (rsi26 != rcx23);
        *reinterpret_cast<int32_t*>(&rsi31) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r8_32 = reinterpret_cast<void*>(rax14 * 0x1f40);
            rdi25 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_3) + reinterpret_cast<int64_t>(r8_32) + reinterpret_cast<int64_t>(rsi31) * 8);
            r8_33 = reinterpret_cast<int64_t>(r8_32) + r14_34 + reinterpret_cast<int64_t>(rsi31) * 8;
            *reinterpret_cast<int32_t*>(&r9_35) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_35) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi25 = rsi31->f0;
                rdi36 = rdi25 + 1;
                rsi37 = reinterpret_cast<struct s9*>(&rsi31->f4);
                __asm__("mulsd xmm2, xmm1");
                *rdi36 = rsi37->f0;
                rdi38 = rdi36 + 1;
                rsi39 = reinterpret_cast<struct s10*>(&rsi37->f4);
                __asm__("mulsd xmm3, xmm1");
                __asm__("mulsd xmm3, [r8]");
                __asm__("mulsd xmm2, [rdi]");
                __asm__("addsd xmm2, xmm3");
                __asm__("addsd xmm2, [rdx+r9*8]");
                *rdi38 = rsi39->f0;
                rdi25 = rdi38 + 1;
                rsi31 = reinterpret_cast<struct s0*>(&rsi39->f4);
                r9_35 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(r9_35) + 1);
            } while (r9_35 != rcx23);
            rsi31 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi31) + 1);
        } while (!reinterpret_cast<int1_t>(rsi31 == 0x3e8));
        ++rax14;
        rcx23 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rcx23) + 1);
    } while (rax14 != 0x4b0);
    if (ebp40 >= 43 && **r12_41 == fputc) {
        rax42 = g37f;
        r12_43 = *rax42;
        rcx44 = r12_43;
        fun_39b(0x389, 22, 1, rcx44, r8_33);
        rsi45 = reinterpret_cast<struct s1*>(0x3a2);
        *reinterpret_cast<int32_t*>(&rbp46) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp46) + 4) = reinterpret_cast<int32_t>(fputc);
        v47 = r12_43;
        rdi48 = r12_43;
        fun_3b9();
        do {
            r13_49 = rbp46 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_50) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_50) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_50 + r13_49) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi48) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi48) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi45 = v47;
                    fun_3ec();
                }
                rdi48->f0 = rsi45->f0;
                rdi48 = v47;
                rsi45 = reinterpret_cast<struct s1*>(0x407);
                fun_40e();
                ++r12_50;
            } while (r12_50 != 0x4b0);
            ++rbp46;
        } while (rbp46 != 0x4b0);
        fun_442(v47, 0x42d, 0x434, rcx44, r8_33);
        *reinterpret_cast<int32_t*>(&rsi31) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx27) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx23 = v47;
        fun_45b(0x449, 22, 1, rcx23, r8_33);
    }
    fun_357(rbx51, rsi31, rdx27, rcx23, r8_33);
    fun_35f(r14_52, rsi31, rdx27, rcx23, r8_33);
    fun_367(r15_3, rsi31, rdx27, rcx23, r8_33);
    goto v53;
}

void fputc(int32_t edi) {
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

void fun_a8(struct s21* rdi, struct s22* rsi) {
    struct s23* rdi3;
    struct s24* rsi4;
    int32_t* rdi5;
    int64_t r12_6;
    int64_t r9_7;
    int64_t rbx8;

    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s23*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s24*>(&rsi->f4);
    __asm__("mulsd xmm2, xmm0");
    rdi3->f0 = rsi4->f0;
    rdi5 = &rdi3->f4;
    __asm__("mulsd xmm3, xmm0");
    __asm__("mulsd xmm3, [r15]");
    __asm__("mulsd xmm2, [r14]");
    __asm__("addsd xmm2, xmm3");
    __asm__("addsd xmm2, [r11+r12*8]");
    *rdi5 = rsi4->f4;
    if (r12_6 + 1 == r9_7) {
        if (!reinterpret_cast<int1_t>(rbx8 + 1 == rdi5 + 1)) 
            goto 0x80;
    }
}

void fun_f2() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_11f(0x15f900, 8);
}

