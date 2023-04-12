
void fun_277(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_27f(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_26f(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t v7;

    fun_277(r14_5, rsi, rdx, rcx);
    fun_27f(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_32e();

void fputc(int32_t edi, int64_t rsi);

void fun_362(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_37b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_30c() {
    int32_t* rdi1;
    int32_t* rsi2;
    int64_t r12_3;
    int64_t rbp4;
    int64_t r13_5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t v9;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = reinterpret_cast<int32_t*>(__return_address());
        rsi2 = reinterpret_cast<int32_t*>(0x327);
        fun_32e();
        ++r12_3;
        if (r12_3 == 0x44c) {
            ++rbp4;
            if (rbp4 == 0x3e8) 
                break;
            r13_5 = rbp4 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + r13_5) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = reinterpret_cast<int32_t*>(__return_address());
        fun_30c();
    }
    fun_362(__return_address(), 0x34d, 0x354);
    fun_37b(0x369, 22, 1, __return_address());
    fun_26f(rbx6, 22, 1, __return_address());
    fun_277(r14_7, 22, 1, __return_address());
    fun_27f(r15_8, 22, 1, __return_address());
    goto v9;
}

void fun_32e() {
    int64_t r12_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t v9;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x44c) {
            ++rbp2;
            if (rbp2 == 0x3e8) 
                break;
            r13_3 = rbp2 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = reinterpret_cast<int32_t*>(__return_address());
            fun_30c();
        }
        *rdi4 = *rsi5;
        rdi4 = reinterpret_cast<int32_t*>(__return_address());
        rsi5 = reinterpret_cast<int32_t*>(0x327);
        fun_32e();
    }
    fun_362(__return_address(), 0x34d, 0x354);
    fun_37b(0x369, 22, 1, __return_address());
    fun_26f(rbx6, 22, 1, __return_address());
    fun_277(r14_7, 22, 1, __return_address());
    fun_27f(r15_8, 22, 1, __return_address());
    goto v9;
}

void fun_362(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* r12_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_37b(0x369, 22, 1, r12_4);
    fun_26f(rbx5, 22, 1, r12_4);
    fun_277(r14_6, 22, 1, r12_4);
    fun_27f(r15_7, 22, 1, r12_4);
    goto v8;
}

void fun_2d1();

void fun_2b3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* r12_8;
    int32_t* rdi9;
    int32_t* r12_10;
    int64_t r13_11;
    int64_t r12_12;
    int64_t rbx13;
    int64_t r14_14;
    int64_t r15_15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x2ba);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    v7 = r12_8;
    rdi9 = r12_10;
    fun_2d1();
    do {
        r13_11 = rbp6 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_12 + r13_11) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi9) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v7;
                fun_30c();
            }
            *rdi9 = *rsi5;
            rdi9 = v7;
            rsi5 = reinterpret_cast<int32_t*>(0x327);
            fun_32e();
            ++r12_12;
        } while (r12_12 != 0x44c);
        ++rbp6;
    } while (rbp6 != 0x3e8);
    fun_362(v7, 0x34d, 0x354);
    fun_37b(0x369, 22, 1, v7);
    fun_26f(rbx13, 22, 1, v7);
    fun_277(r14_14, 22, 1, v7);
    fun_27f(r15_15, 22, 1, v7);
    goto v16;
}

void fun_277(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t v6;

    fun_27f(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_37b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_26f(rbx5, rsi, rdx, rcx);
    fun_277(r14_6, rsi, rdx, rcx);
    fun_27f(r15_7, rsi, rdx, rcx);
    goto v8;
}

void fun_2d1() {
    int32_t* v1;
    int64_t r13_2;
    int64_t rbp3;
    int64_t r12_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int64_t rbx7;
    int64_t r14_8;
    int64_t r15_9;
    int64_t v10;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    do {
        r13_2 = rbp3 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + r13_2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v1;
                fun_30c();
            }
            *rdi5 = *rsi6;
            rdi5 = v1;
            rsi6 = reinterpret_cast<int32_t*>(0x327);
            fun_32e();
            ++r12_4;
        } while (r12_4 != 0x44c);
        ++rbp3;
    } while (rbp3 != 0x3e8);
    fun_362(v1, 0x34d, 0x354);
    fun_37b(0x369, 22, 1, v1);
    fun_26f(rbx7, 22, 1, v1);
    fun_277(r14_8, 22, 1, v1);
    fun_27f(r15_9, 22, 1, v1);
    goto v10;
}

void fun_27f(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_a0() {
    __asm__("movups [rsi+rdx*8], xmm1");
}

struct s0 {
    int32_t f0;
    int32_t f1;
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

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    int32_t f0;
    int32_t f4;
};

int64_t* g297 = reinterpret_cast<int64_t*>(0x3d8d48208b4c);

void fun_ac(int32_t* rdi, int32_t* rsi) {
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    signed char* rax6;
    int64_t rcx7;
    int64_t rcx8;
    struct s0* rdx9;
    struct s1* rsi10;
    struct s2* rdi11;
    int64_t rax12;
    int32_t* r14_13;
    struct s0* rsi14;
    int64_t rax15;
    int64_t rdx16;
    uint32_t edi17;
    int64_t rsi18;
    uint64_t rsi19;
    struct s3* rdi20;
    struct s4* rsi21;
    int32_t* r15_22;
    struct s5* rdi23;
    struct s6* rsi24;
    struct s7* rdi25;
    struct s8* rsi26;
    int32_t* rdi27;
    struct s9* rsi28;
    int64_t rdx29;
    struct s10* rdi30;
    struct s11* rsi31;
    int64_t rdx32;
    int32_t* r14_33;
    struct s10* rdi34;
    struct s11* rsi35;
    int32_t ebp36;
    signed char** r12_37;
    int64_t* rax38;
    int64_t rcx39;

    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    if (reinterpret_cast<int1_t>(*rax6 == fputc)) {
        if (rcx7 + 1 == 0x3e8) {
            *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(fputc);
            *rdi = *rsi;
            do {
                *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi10 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rdx9) + 1);
                    __asm__("xorps xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, edi");
                    __asm__("divsd xmm1, xmm0");
                    rdi11 = reinterpret_cast<struct s2*>(r14_13 + rax12 * 0x960);
                    rdi11->f0 = rsi10->f0;
                    rsi14 = reinterpret_cast<struct s0*>(&rsi10->f4);
                    rdx9 = rsi14;
                } while (!reinterpret_cast<int1_t>(rsi14 == 0x4b0));
                ++rax12;
            } while (rax12 != 0x3e8);
            *reinterpret_cast<int32_t*>(&rax15) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(fputc);
            rdi11->f4 = rsi14->f0;
            do {
                *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    edi17 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx8) * static_cast<int32_t>(rdx16 + 2));
                    *reinterpret_cast<uint32_t*>(&rsi18) = edi17 >> 2;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi19 = reinterpret_cast<uint64_t>(rsi18 * 0x1dca01dd) >> 37;
                    *reinterpret_cast<uint32_t*>(&rdi20) = edi17 - *reinterpret_cast<int32_t*>(&rsi19) * 0x44c;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
                    __asm__("xorps xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, edi");
                    __asm__("divsd xmm1, xmm0");
                    rsi21 = reinterpret_cast<struct s4*>(r15_22 + rcx8 * 0x898);
                    rdi20->f0 = rsi21->f0;
                    rdi23 = reinterpret_cast<struct s5*>(&rdi20->f4);
                    rsi24 = reinterpret_cast<struct s6*>(&rsi21->f4);
                    ++rdx16;
                } while (rdx16 != 0x44c);
                ++rcx8;
            } while (rcx8 != 0x4b0);
            rdi23->f0 = rsi24->f0;
            rdi25 = reinterpret_cast<struct s7*>(&rdi23->f4);
            rsi26 = reinterpret_cast<struct s8*>(&rsi24->f4);
            rdi25->f0 = rsi26->f0;
            rdi27 = &rdi25->f4;
            rsi28 = reinterpret_cast<struct s9*>(&rsi26->f4);
            do {
                *reinterpret_cast<int32_t*>(&rdx29) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi27 = rsi28->f0;
                    rdi30 = reinterpret_cast<struct s10*>(rdi27 + 1);
                    rsi31 = reinterpret_cast<struct s11*>(&rsi28->f4);
                    __asm__("mulsd xmm2, xmm0");
                    rdi30->f0 = rsi31->f0;
                    rdi27 = &rdi30->f4;
                    rsi28 = reinterpret_cast<struct s9*>(&rsi31->f4);
                    ++rdx29;
                } while (rdx29 != 0x44c);
                *reinterpret_cast<int32_t*>(&rdx32) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi28 = reinterpret_cast<struct s9*>(r14_33 + rax15 * 0x960 + rdx32 * 2);
                    *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        *rdi27 = rsi28->f0;
                        rdi34 = reinterpret_cast<struct s10*>(rdi27 + 1);
                        rsi35 = reinterpret_cast<struct s11*>(&rsi28->f4);
                        __asm__("mulsd xmm2, xmm1");
                        __asm__("mulsd xmm2, [r8+rdi*8]");
                        __asm__("addsd xmm2, [rcx+rdi*8]");
                        rdi34->f0 = rsi35->f0;
                        rsi28 = reinterpret_cast<struct s9*>(&rsi35->f4);
                        rdi27 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34->f4) + 1);
                    } while (!reinterpret_cast<int1_t>(rdi27 == 0x44c));
                    ++rdx32;
                } while (rdx32 != 0x4b0);
                ++rax15;
            } while (rax15 != 0x3e8);
            if (ebp36 < 43) 
                goto 0x267;
            if (**r12_37 != fputc) 
                goto "???";
            rax38 = g297;
            rcx39 = *rax38;
            fun_2b3(0x2a1, 22, 1, rcx39);
        }
    }
}

