
void fun_25f(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_267(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_257(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t v7;

    fun_25f(r14_5, rsi, rdx, rcx);
    fun_267(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_30e();

void fputc(int32_t edi, int64_t rsi);

void fun_342(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_35b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_2ec() {
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
        rsi2 = reinterpret_cast<int32_t*>(0x307);
        fun_30e();
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
        rsi2 = reinterpret_cast<int32_t*>(__return_address());
        fun_2ec();
    }
    fun_342(__return_address(), 0x32d, 0x334);
    fun_35b(0x349, 22, 1, __return_address());
    fun_257(rbx6, 22, 1, __return_address());
    fun_25f(r14_7, 22, 1, __return_address());
    fun_267(r15_8, 22, 1, __return_address());
    goto v9;
}

void fun_30e() {
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
            rsi5 = reinterpret_cast<int32_t*>(__return_address());
            fun_2ec();
        }
        *rdi4 = *rsi5;
        rdi4 = reinterpret_cast<int32_t*>(__return_address());
        rsi5 = reinterpret_cast<int32_t*>(0x307);
        fun_30e();
    }
    fun_342(__return_address(), 0x32d, 0x334);
    fun_35b(0x349, 22, 1, __return_address());
    fun_257(rbx6, 22, 1, __return_address());
    fun_25f(r14_7, 22, 1, __return_address());
    fun_267(r15_8, 22, 1, __return_address());
    goto v9;
}

void fun_342(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* r12_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_35b(0x349, 22, 1, r12_4);
    fun_257(rbx5, 22, 1, r12_4);
    fun_25f(r14_6, 22, 1, r12_4);
    fun_267(r15_7, 22, 1, r12_4);
    goto v8;
}

void fun_2b9();

void fun_29b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t* rsi6;
    int64_t rbp7;
    int32_t* v8;
    int32_t* r12_9;
    int32_t* rdi10;
    int32_t* r12_11;
    int64_t r13_12;
    int64_t r12_13;
    int64_t rbx14;
    int64_t r14_15;
    int64_t r15_16;
    int64_t v17;

    rsi6 = reinterpret_cast<int32_t*>(0x2a2);
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    v8 = r12_9;
    rdi10 = r12_11;
    fun_2b9();
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
                fun_2ec();
            }
            *rdi10 = *rsi6;
            rdi10 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x307);
            fun_30e();
            ++r12_13;
        } while (r12_13 != 0x4b0);
        ++rbp7;
    } while (rbp7 != 0x4b0);
    fun_342(v8, 0x32d, 0x334);
    fun_35b(0x349, 22, 1, v8);
    fun_257(rbx14, 22, 1, v8);
    fun_25f(r14_15, 22, 1, v8);
    fun_267(r15_16, 22, 1, v8);
    goto v17;
}

void fun_25f(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t v6;

    fun_267(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_35b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_257(rbx5, rsi, rdx, rcx);
    fun_25f(r14_6, rsi, rdx, rcx);
    fun_267(r15_7, rsi, rdx, rcx);
    goto v8;
}

void fun_2b9() {
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
        r13_2 = rbp3 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + r13_2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v1;
                fun_2ec();
            }
            *rdi5 = *rsi6;
            rdi5 = v1;
            rsi6 = reinterpret_cast<int32_t*>(0x307);
            fun_30e();
            ++r12_4;
        } while (r12_4 != 0x4b0);
        ++rbp3;
    } while (rbp3 != 0x4b0);
    fun_342(v1, 0x32d, 0x334);
    fun_35b(0x349, 22, 1, v1);
    fun_257(rbx7, 22, 1, v1);
    fun_25f(r14_8, 22, 1, v1);
    fun_267(r15_9, 22, 1, v1);
    goto v10;
}

void fun_267(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
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

int64_t* g27f = reinterpret_cast<int64_t*>(0x3d8d48208b4c);

void fun_a0(int32_t* rdi, int32_t* rsi, int64_t rdx, signed char cl) {
    int64_t rcx4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rax7;
    signed char al8;
    int64_t rsi9;
    int64_t r8_10;
    uint64_t r8_11;
    int32_t* rsi12;
    int64_t r15_13;
    int64_t rax14;
    int64_t rdx15;
    int64_t rsi16;
    uint64_t rdi17;
    struct s0* rdi18;
    struct s1* rsi19;
    int32_t* rbx20;
    struct s2* rdi21;
    struct s3* rsi22;
    struct s4* rcx23;
    struct s5* rdi24;
    int32_t* rdi25;
    struct s4* rsi26;
    int32_t* rdi27;
    int32_t* rsi28;
    struct s6* rsi29;
    void* r8_30;
    int32_t* r15_31;
    int64_t r8_32;
    int64_t r14_33;
    struct s4* r9_34;
    int32_t* rdi35;
    struct s7* rsi36;
    int32_t* rdi37;
    struct s8* rsi38;
    int32_t ebp39;
    signed char** r12_40;
    int64_t* rax41;
    int64_t rcx42;

    *reinterpret_cast<signed char*>(&rcx4) = cl;
    *reinterpret_cast<signed char*>(rbp5 - 0x73) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbp6 - 0x73) + *reinterpret_cast<signed char*>(&rcx4));
    *reinterpret_cast<signed char*>(&rax7) = reinterpret_cast<signed char>(al8 + 62);
    *rdi = *rsi;
    rsi9 = reinterpret_cast<int64_t>(rsi + 1);
    *reinterpret_cast<int32_t*>(&r8_10) = *reinterpret_cast<int32_t*>(&rsi9) + 2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_10) + 4) = reinterpret_cast<int32_t>(fputc);
    r8_11 = reinterpret_cast<uint64_t>(r8_10 * 0x10624dd3) >> 38;
    *reinterpret_cast<int32_t*>(&rsi12) = *reinterpret_cast<int32_t*>(&rsi9) + -(*reinterpret_cast<int32_t*>(&r8_11) * 0x3e8) + 2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorps xmm2, xmm2");
    __asm__("cvtsi2sd xmm2, esi");
    __asm__("divsd xmm2, xmm0");
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi + 1) + r15_13) = *rsi12;
    if (rdx + 1 == 0x3e8) {
        if (rax7 + 1 == 0x4b0) {
            *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *reinterpret_cast<int32_t*>(&rsi16) = *reinterpret_cast<int32_t*>(&rdx15) * *reinterpret_cast<int32_t*>(&rcx4) + 3;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
                    rdi17 = reinterpret_cast<uint64_t>(rsi16 * 0x1b4e81b5) >> 39;
                    *reinterpret_cast<int32_t*>(&rdi18) = *reinterpret_cast<int32_t*>(&rdi17) * 0x4b0;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
                    __asm__("xorps xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, esi");
                    __asm__("divsd xmm1, xmm0");
                    rsi19 = reinterpret_cast<struct s1*>(rbx20 + rcx4 * 0x960);
                    rdi18->f0 = rsi19->f0;
                    rdi21 = reinterpret_cast<struct s2*>(&rdi18->f4);
                    rsi22 = reinterpret_cast<struct s3*>(&rsi19->f4);
                    ++rdx15;
                } while (rdx15 != 0x4b0);
                ++rcx4;
            } while (rcx4 != 0x4b0);
            *reinterpret_cast<int32_t*>(&rcx23) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(fputc);
            rdi21->f0 = rsi22->f0;
            rdi24 = reinterpret_cast<struct s5*>(&rdi21->f4);
            rdi24->f0 = rsi22->f4;
            rdi25 = &rdi24->f4;
            do {
                *reinterpret_cast<int32_t*>(&rsi26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi26) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi25 = rsi26->f0;
                    rdi27 = rdi25 + 1;
                    rsi28 = &rsi26->f4;
                    __asm__("mulsd xmm2, xmm0");
                    *rdi27 = *rsi28;
                    rdi25 = rdi27 + 1;
                    rsi26 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rsi28 + 1) + 1);
                } while (rsi26 != rcx23);
                *reinterpret_cast<int32_t*>(&rsi29) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    r8_30 = reinterpret_cast<void*>(rax14 * 0x1f40);
                    rdi25 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_31) + reinterpret_cast<int64_t>(r8_30) + reinterpret_cast<int64_t>(rsi29) * 8);
                    r8_32 = reinterpret_cast<int64_t>(r8_30) + r14_33 + reinterpret_cast<int64_t>(rsi29) * 8;
                    *reinterpret_cast<int32_t*>(&r9_34) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_34) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        *rdi25 = rsi29->f0;
                        rdi35 = rdi25 + 1;
                        rsi36 = reinterpret_cast<struct s7*>(&rsi29->f4);
                        __asm__("mulsd xmm2, xmm1");
                        *rdi35 = rsi36->f0;
                        rdi37 = rdi35 + 1;
                        rsi38 = reinterpret_cast<struct s8*>(&rsi36->f4);
                        __asm__("mulsd xmm3, xmm1");
                        __asm__("mulsd xmm3, [r8]");
                        __asm__("mulsd xmm2, [rdi]");
                        __asm__("addsd xmm2, xmm3");
                        __asm__("addsd xmm2, [rdx+r9*8]");
                        *rdi37 = rsi38->f0;
                        rdi25 = rdi37 + 1;
                        rsi29 = reinterpret_cast<struct s6*>(&rsi38->f4);
                        r9_34 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(r9_34) + 1);
                    } while (r9_34 != rcx23);
                    rsi29 = reinterpret_cast<struct s6*>(reinterpret_cast<int64_t>(rsi29) + 1);
                } while (!reinterpret_cast<int1_t>(rsi29 == 0x3e8));
                ++rax14;
                rcx23 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rcx23) + 1);
            } while (rax14 != 0x4b0);
            if (ebp39 < 43) 
                goto 0x24f;
            if (**r12_40 != fputc) 
                goto "???";
            rax41 = g27f;
            rcx42 = *rax41;
            fun_29b(0x289, 22, 1, rcx42, r8_32);
        }
    }
}

