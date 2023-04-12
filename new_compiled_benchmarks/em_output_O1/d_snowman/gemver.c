
void fun_335(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_33f(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_347(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_34f(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_357(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_35f(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_367(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_371(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_32b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;
    int64_t v6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t rbp9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t v12;
    int64_t v13;

    fun_335(v5, rsi, rdx, rcx);
    fun_33f(v6, rsi, rdx, rcx);
    fun_347(r12_7, rsi, rdx, rcx);
    fun_34f(r13_8, rsi, rdx, rcx);
    fun_357(rbp9, rsi, rdx, rcx);
    fun_35f(r14_10, rsi, rdx, rcx);
    fun_367(r15_11, rsi, rdx, rcx);
    fun_371(v12, rsi, rdx, rcx);
    goto v13;
}

void fputc(int32_t edi, int64_t rsi);

void fun_41c();

void fun_43c(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_456(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_3e8() {
    int64_t rcx1;
    int64_t rcx2;
    int32_t* rdi3;
    int32_t* rsi4;
    int64_t rbx5;
    int64_t v6;
    int64_t v7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t rbp10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t v13;
    int64_t v14;

    while (rcx1 = rcx2 + 1, rcx1 != 0x7d0) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = reinterpret_cast<int32_t*>(__return_address());
            fun_41c();
        }
        *rdi3 = *rsi4;
        rdi3 = reinterpret_cast<int32_t*>(__return_address());
        rsi4 = reinterpret_cast<int32_t*>(0x3e1);
        fun_3e8();
    }
    fun_43c(__return_address(), 0x42a, 0x431);
    fun_456(0x443, 22, 1, __return_address());
    fun_32b(rbx5, 22, 1, __return_address());
    fun_335(v6, 22, 1, __return_address());
    fun_33f(v7, 22, 1, __return_address());
    fun_347(r12_8, 22, 1, __return_address());
    fun_34f(r13_9, 22, 1, __return_address());
    fun_357(rbp10, 22, 1, __return_address());
    fun_35f(r14_11, 22, 1, __return_address());
    fun_367(r15_12, 22, 1, __return_address());
    fun_371(v13, 22, 1, __return_address());
    goto v14;
}

void fun_41c() {
    int32_t* v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int64_t rcx4;
    int64_t rbx5;
    int64_t v6;
    int64_t v7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t rbp10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t v13;
    int64_t v14;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<int32_t*>(0x3e1);
            fun_3e8();
            ++rcx4;
            if (rcx4 == 0x7d0) 
                goto addr_423_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx4) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_41c();
    }
    addr_423_7:
    fun_43c(v1, 0x42a, 0x431);
    fun_456(0x443, 22, 1, v1);
    fun_32b(rbx5, 22, 1, v1);
    fun_335(v6, 22, 1, v1);
    fun_33f(v7, 22, 1, v1);
    fun_347(r12_8, 22, 1, v1);
    fun_34f(r13_9, 22, 1, v1);
    fun_357(rbp10, 22, 1, v1);
    fun_35f(r14_11, 22, 1, v1);
    fun_367(r15_12, 22, 1, v1);
    fun_371(v13, 22, 1, v1);
    goto v14;
}

void fun_3bf();

void fun_3a6(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* v4;
    int32_t* rsi5;
    int32_t* rdi6;
    int64_t rcx7;
    int64_t rbx8;
    int64_t v9;
    int64_t v10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t rbp13;
    int64_t r14_14;
    int64_t r15_15;
    int64_t v16;
    int64_t v17;

    v4 = reinterpret_cast<int32_t*>(__return_address());
    rsi5 = reinterpret_cast<int32_t*>(0x3ad);
    rdi6 = v4;
    fun_3bf();
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx7) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_41c();
        }
        *rdi6 = *rsi5;
        rdi6 = v4;
        rsi5 = reinterpret_cast<int32_t*>(0x3e1);
        fun_3e8();
        ++rcx7;
    } while (rcx7 != 0x7d0);
    fun_43c(v4, 0x42a, 0x431);
    fun_456(0x443, 22, 1, v4);
    fun_32b(rbx8, 22, 1, v4);
    fun_335(v9, 22, 1, v4);
    fun_33f(v10, 22, 1, v4);
    fun_347(r12_11, 22, 1, v4);
    fun_34f(r13_12, 22, 1, v4);
    fun_357(rbp13, 22, 1, v4);
    fun_35f(r14_14, 22, 1, v4);
    fun_367(r15_15, 22, 1, v4);
    fun_371(v16, 22, 1, v4);
    goto v17;
}

void fun_335(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t rbp8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t v11;
    int64_t v12;

    fun_33f(v5, rsi, rdx, rcx);
    fun_347(r12_6, rsi, rdx, rcx);
    fun_34f(r13_7, rsi, rdx, rcx);
    fun_357(rbp8, rsi, rdx, rcx);
    fun_35f(r14_9, rsi, rdx, rcx);
    fun_367(r15_10, rsi, rdx, rcx);
    fun_371(v11, rsi, rdx, rcx);
    goto v12;
}

void fun_3bf() {
    int32_t* v1;
    int64_t rcx2;
    int32_t* rdi3;
    int32_t* rsi4;
    int64_t rbx5;
    int64_t v6;
    int64_t v7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t rbp10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t v13;
    int64_t v14;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    *reinterpret_cast<int32_t*>(&rcx2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx2) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v1;
            fun_41c();
        }
        *rdi3 = *rsi4;
        rdi3 = v1;
        rsi4 = reinterpret_cast<int32_t*>(0x3e1);
        fun_3e8();
        ++rcx2;
    } while (rcx2 != 0x7d0);
    fun_43c(v1, 0x42a, 0x431);
    fun_456(0x443, 22, 1, v1);
    fun_32b(rbx5, 22, 1, v1);
    fun_335(v6, 22, 1, v1);
    fun_33f(v7, 22, 1, v1);
    fun_347(r12_8, 22, 1, v1);
    fun_34f(r13_9, 22, 1, v1);
    fun_357(rbp10, 22, 1, v1);
    fun_35f(r14_11, 22, 1, v1);
    fun_367(r15_12, 22, 1, v1);
    fun_371(v13, 22, 1, v1);
    goto v14;
}

void fun_33f(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t rbp7;
    int64_t r14_8;
    int64_t r15_9;
    int64_t v10;
    int64_t v11;

    fun_347(r12_5, rsi, rdx, rcx);
    fun_34f(r13_6, rsi, rdx, rcx);
    fun_357(rbp7, rsi, rdx, rcx);
    fun_35f(r14_8, rsi, rdx, rcx);
    fun_367(r15_9, rsi, rdx, rcx);
    fun_371(v10, rsi, rdx, rcx);
    goto v11;
}

void fun_43c(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int64_t rbx4;
    int64_t v5;
    int64_t v6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t rbp9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t v12;
    int64_t v13;

    fun_456(0x443, 22, 1, __return_address());
    fun_32b(rbx4, 22, 1, __return_address());
    fun_335(v5, 22, 1, __return_address());
    fun_33f(v6, 22, 1, __return_address());
    fun_347(r12_7, 22, 1, __return_address());
    fun_34f(r13_8, 22, 1, __return_address());
    fun_357(rbp9, 22, 1, __return_address());
    fun_35f(r14_10, 22, 1, __return_address());
    fun_367(r15_11, 22, 1, __return_address());
    fun_371(v12, 22, 1, __return_address());
    goto v13;
}

void fun_347(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int64_t rbp6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t v9;
    int64_t v10;

    fun_34f(r13_5, rsi, rdx, rcx);
    fun_357(rbp6, rsi, rdx, rcx);
    fun_35f(r14_7, rsi, rdx, rcx);
    fun_367(r15_8, rsi, rdx, rcx);
    fun_371(v9, rsi, rdx, rcx);
    goto v10;
}

void fun_456(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t v6;
    int64_t v7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t rbp10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t v13;
    int64_t v14;

    fun_32b(rbx5, rsi, rdx, rcx);
    fun_335(v6, rsi, rdx, rcx);
    fun_33f(v7, rsi, rdx, rcx);
    fun_347(r12_8, rsi, rdx, rcx);
    fun_34f(r13_9, rsi, rdx, rcx);
    fun_357(rbp10, rsi, rdx, rcx);
    fun_35f(r14_11, rsi, rdx, rcx);
    fun_367(r15_12, rsi, rdx, rcx);
    fun_371(v13, rsi, rdx, rcx);
    goto v14;
}

void fun_34f(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbp5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;
    int64_t v9;

    fun_357(rbp5, rsi, rdx, rcx);
    fun_35f(r14_6, rsi, rdx, rcx);
    fun_367(r15_7, rsi, rdx, rcx);
    fun_371(v8, rsi, rdx, rcx);
    goto v9;
}

void fun_357(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t v7;
    int64_t v8;

    fun_35f(r14_5, rsi, rdx, rcx);
    fun_367(r15_6, rsi, rdx, rcx);
    fun_371(v7, rsi, rdx, rcx);
    goto v8;
}

void fun_35f(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t v6;
    int64_t v7;

    fun_367(r15_5, rsi, rdx, rcx);
    fun_371(v6, rsi, rdx, rcx);
    goto v7;
}

void fun_367(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;
    int64_t v6;

    fun_371(v5, rsi, rdx, rcx);
    goto v6;
}

void fun_371(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f1;
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
    int32_t f1;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

void fun_100() {
    signed char** v1;
    int64_t rdx2;
    int64_t rcx3;
    int32_t* rdi4;
    struct s0* rsi5;
    int32_t* rdi6;
    struct s1* rsi7;
    int32_t* rdi8;
    struct s2* rsi9;
    int32_t* rdi10;
    struct s3* rsi11;
    int32_t* rdi12;
    struct s4* rsi13;
    int64_t* r14_14;
    int64_t* rbp15;
    struct s5* rdi16;
    int32_t* rbx17;
    int64_t rcx18;
    int64_t rdx19;
    struct s6* rsi20;
    int64_t r11_21;
    int32_t* rbx22;
    int32_t* rdi23;
    struct s7* rsi24;
    int32_t* rdi25;
    struct s8* rsi26;
    struct s9* rsi27;
    int64_t rdx28;
    int32_t* rdi29;
    int32_t* rsi30;
    struct s10* rsi31;
    int32_t* rbx32;
    int32_t* rdi33;
    struct s11* rsi34;
    struct s12* rsi35;
    int32_t* rdi36;
    struct s13* rsi37;
    int32_t* rdi38;
    struct s13* rsi39;
    struct s12* rsi40;
    int64_t rcx41;
    int32_t* rdi42;
    struct s13* rsi43;
    int32_t v44;

    do {
        v1 = reinterpret_cast<signed char**>(__return_address());
        rdx2 = rcx3;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edx");
        *rdi4 = rsi5->f0;
        rdi6 = rdi4 + 1;
        rsi7 = reinterpret_cast<struct s1*>(&rsi5->f4);
        ++rcx3;
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm1");
        *rdi6 = rsi7->f0;
        rdi8 = rdi6 + 1;
        rsi9 = reinterpret_cast<struct s2*>(&rsi7->f1);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm2");
        *rdi8 = rsi9->f0;
        rdi10 = rdi8 + 1;
        rsi11 = reinterpret_cast<struct s3*>(&rsi9->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("divsd xmm7, xmm3");
        *rdi10 = rsi11->f0;
        rdi12 = rdi10 + 1;
        rsi13 = reinterpret_cast<struct s4*>(&rsi11->f4);
        __asm__("movapd xmm7, xmm6");
        __asm__("mulsd xmm7, xmm4");
        *rdi12 = rsi13->f0;
        __asm__("divsd xmm6, xmm5");
        rdi12[1] = rsi13->f4;
        r14_14[rdx2] = reinterpret_cast<int64_t>(fputc);
        rbp15[rdx2] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rsi5) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edi");
            __asm__("divsd xmm6, xmm0");
            rdi16 = reinterpret_cast<struct s5*>(rbx17 + rdx2 * 0xfa0);
            rdi16->f0 = rsi5->f0;
            rdi4 = &rdi16->f4;
            rsi5 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(&rsi5->f4) + 1);
        } while (!reinterpret_cast<int1_t>(rsi5 == 0x7d0));
    } while (rcx3 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi20 = reinterpret_cast<struct s6*>(rbx22 + r11_21 * 0xfa0);
            *rdi4 = rsi20->f0;
            rdi23 = rdi4 + 1;
            rsi24 = reinterpret_cast<struct s7*>(&rsi20->f4);
            __asm__("mulsd xmm0, [r10+rdx*8]");
            __asm__("addsd xmm0, [rsi+rdx*8]");
            *rdi23 = rsi24->f0;
            rdi25 = rdi23 + 1;
            rsi26 = reinterpret_cast<struct s8*>(&rsi24->f4);
            __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            *rdi25 = rsi26->f0;
            rdi4 = rdi25 + 1;
            rsi27 = reinterpret_cast<struct s9*>(&rsi26->f4);
            ++rdx19;
        } while (rdx19 != 0x7d0);
        ++r11_21;
    } while (r11_21 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rdx28) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi4 = rsi27->f0;
    rdi29 = rdi4 + 1;
    rsi30 = &rsi27->f4;
    do {
        *rdi29 = *rsi30;
        *reinterpret_cast<int32_t*>(&rdi29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi31 = reinterpret_cast<struct s10*>(rbx32 + reinterpret_cast<int64_t>(rdi29) * 0xfa0);
            *rdi29 = rsi31->f0;
            rdi33 = rdi29 + 1;
            rsi34 = reinterpret_cast<struct s11*>(&rsi31->f4);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r15+rdi*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi33 = rsi34->f0;
            rsi30 = &rsi34->f4;
            rdi29 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi33 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rdi29 == 0x7d0));
        ++rcx18;
    } while (rcx18 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rsi35) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi35) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *rdi29 = rsi35->f0;
        rdi36 = rdi29 + 1;
        rsi37 = reinterpret_cast<struct s13*>(&rsi35->f1);
        __asm__("addsd xmm0, [rax+rdx*8]");
        *rdi36 = rsi37->f0;
        rdi29 = rdi36 + 1;
        rsi35 = reinterpret_cast<struct s12*>(&rsi37->f4);
        ++rdx28;
    } while (rdx28 != 0x7d0);
    *rdi29 = rsi35->f0;
    rdi38 = rdi29 + 1;
    rsi39 = reinterpret_cast<struct s13*>(&rsi35->f1);
    do {
        *rdi38 = rsi39->f0;
        ++rdi38;
        rsi40 = reinterpret_cast<struct s12*>(&rsi39->f4);
        *reinterpret_cast<int32_t*>(&rcx41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi38 = rsi40->f0;
            rdi42 = rdi38 + 1;
            rsi43 = reinterpret_cast<struct s13*>(&rsi40->f1);
            __asm__("mulsd xmm2, xmm0");
            __asm__("mulsd xmm2, [r14+rcx*8]");
            __asm__("addsd xmm1, xmm2");
            *rdi42 = rsi43->f0;
            rdi38 = rdi42 + 1;
            rsi40 = reinterpret_cast<struct s12*>(&rsi43->f4);
            ++rcx41;
        } while (rcx41 != 0x7d0);
        rsi39 = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(rsi40) + 1);
    } while (!reinterpret_cast<int1_t>(rsi39 == 0x7d0));
    if (v44 < 43) 
        goto 0x323;
    if (**v1 != fputc) 
        goto "???";
    fun_3a6(0x397, 22, 1);
}

