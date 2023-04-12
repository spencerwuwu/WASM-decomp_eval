
void fun_2a3(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_2ab(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_29b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t v7;

    fun_2a3(r14_5, rsi, rdx, rcx);
    fun_2ab(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_34e();

void fputc(int32_t edi, int64_t rsi);

void fun_382(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_39b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_32c() {
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
        rsi2 = reinterpret_cast<int32_t*>(0x347);
        fun_34e();
        ++r12_3;
        if (r12_3 == 0x4b0) {
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
        fun_32c();
    }
    fun_382(__return_address(), 0x36d, 0x374);
    fun_39b(0x389, 22, 1, __return_address());
    fun_29b(rbx6, 22, 1, __return_address());
    fun_2a3(r14_7, 22, 1, __return_address());
    fun_2ab(r15_8, 22, 1, __return_address());
    goto v9;
}

void fun_34e() {
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
            fun_32c();
        }
        *rdi4 = *rsi5;
        rdi4 = reinterpret_cast<int32_t*>(__return_address());
        rsi5 = reinterpret_cast<int32_t*>(0x347);
        fun_34e();
    }
    fun_382(__return_address(), 0x36d, 0x374);
    fun_39b(0x389, 22, 1, __return_address());
    fun_29b(rbx6, 22, 1, __return_address());
    fun_2a3(r14_7, 22, 1, __return_address());
    fun_2ab(r15_8, 22, 1, __return_address());
    goto v9;
}

void fun_382(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* r12_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_39b(0x389, 22, 1, r12_4);
    fun_29b(rbx5, 22, 1, r12_4);
    fun_2a3(r14_6, 22, 1, r12_4);
    fun_2ab(r15_7, 22, 1, r12_4);
    goto v8;
}

void fun_2fd();

void fun_2df(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
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

    rsi6 = reinterpret_cast<int32_t*>(0x2e6);
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    v8 = r12_9;
    rdi10 = r12_11;
    fun_2fd();
    do {
        r13_12 = rbp7 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_13 + r13_12) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi10) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v8;
                fun_32c();
            }
            *rdi10 = *rsi6;
            rdi10 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x347);
            fun_34e();
            ++r12_13;
        } while (r12_13 != 0x4b0);
        ++rbp7;
    } while (rbp7 != 0x3e8);
    fun_382(v8, 0x36d, 0x374);
    fun_39b(0x389, 22, 1, v8);
    fun_29b(rbx14, 22, 1, v8);
    fun_2a3(r14_15, 22, 1, v8);
    fun_2ab(r15_16, 22, 1, v8);
    goto v17;
}

void fun_2a3(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t v6;

    fun_2ab(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_39b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_29b(rbx5, rsi, rdx, rcx);
    fun_2a3(r14_6, rsi, rdx, rcx);
    fun_2ab(r15_7, rsi, rdx, rcx);
    goto v8;
}

void fun_2fd() {
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
                fun_32c();
            }
            *rdi5 = *rsi6;
            rdi5 = v1;
            rsi6 = reinterpret_cast<int32_t*>(0x347);
            fun_34e();
            ++r12_4;
        } while (r12_4 != 0x4b0);
        ++rbp3;
    } while (rbp3 != 0x3e8);
    fun_382(v1, 0x36d, 0x374);
    fun_39b(0x389, 22, 1, v1);
    fun_29b(rbx7, 22, 1, v1);
    fun_2a3(r14_8, 22, 1, v1);
    fun_2ab(r15_9, 22, 1, v1);
    goto v10;
}

void fun_2ab(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_a0() {
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

int64_t* g2c3 = reinterpret_cast<int64_t*>(0x3d8d48208b4c);

void fun_ac() {
    int64_t rdx1;
    struct s0* rcx2;
    struct s0* rdi3;
    int64_t rcx4;
    struct s1** r8_5;
    struct s1** r14_6;
    struct s1* rsi7;
    int64_t r9_8;
    int32_t* rsi9;
    int64_t rax10;
    struct s2* rdi11;
    int32_t* r15_12;
    int64_t r8_13;
    struct s3* rdi14;
    struct s4* rsi15;
    struct s5* rdi16;
    struct s6* rsi17;
    void* rdi18;
    struct s7* rdi19;
    int32_t* r15_20;
    struct s8* rdi21;
    struct s4* rsi22;
    struct s6* rsi23;
    int32_t ebp24;
    signed char** r12_25;
    int64_t* rax26;
    int64_t rcx27;
    int64_t rbx28;

    while (++rdx1, rcx2 != 0x3e8) {
        rdi3 = rcx2;
        *reinterpret_cast<int32_t*>(&rcx4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            r8_5 = r14_6 + reinterpret_cast<uint64_t>(rdi3) * 0x3e8;
            rdi3->f0 = rsi7->f0;
            rdi3 = reinterpret_cast<struct s0*>(&rdi3->f4);
            rsi7 = reinterpret_cast<struct s1*>(&rsi7->f4);
            ++rcx4;
        } while (rcx4 != rdx1);
        rcx2 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rdi3) + 1);
        r9_8 = rdx1;
        if (reinterpret_cast<uint64_t>(rdi3) > 0x3e6) 
            continue;
        do {
            r8_5[r9_8] = rsi7;
            ++r9_8;
        } while (r9_8 != 0x3e8);
    }
    rdi3->f0 = rsi7->f0;
    rdi3->f4 = rsi7->f4;
    do {
        *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (rax10 == fputc) {
                __asm__("xorpd xmm2, xmm2");
            } else {
                rdi11 = reinterpret_cast<struct s2*>(r15_12 + rax10 * 0x960 + reinterpret_cast<int64_t>(rsi9) * 2);
                __asm__("xorpd xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&r8_13) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi11->f0 = *rsi9;
                    rdi14 = reinterpret_cast<struct s3*>(&rdi11->f4);
                    rsi15 = reinterpret_cast<struct s4*>(rsi9 + 1);
                    __asm__("mulsd xmm3, xmm0");
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm3, [r10+rsi*8]");
                    rdi14->f0 = rsi15->f0;
                    rdi16 = reinterpret_cast<struct s5*>(&rdi14->f4);
                    rsi17 = reinterpret_cast<struct s6*>(&rsi15->f4);
                    rdi16->f0 = rsi17->f0;
                    rdi11 = reinterpret_cast<struct s2*>(&rdi16->f4);
                    rsi9 = &rsi17->f4;
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm2, xmm3");
                    ++r8_13;
                } while (r8_13 != rax10);
            }
            rdi18 = reinterpret_cast<void*>(rax10 * 0x2580);
            rdi19 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rdi18) + reinterpret_cast<int64_t>(r15_20));
            rdi19->f0 = *rsi9;
            rdi21 = reinterpret_cast<struct s8*>(&rdi19->f4);
            rsi22 = reinterpret_cast<struct s4*>(rsi9 + 1);
            __asm__("mulsd xmm3, xmm0");
            __asm__("mulsd xmm3, [rdx]");
            rdi21->f0 = rsi22->f0;
            rsi23 = reinterpret_cast<struct s6*>(&rsi22->f4);
            __asm__("mulsd xmm4, xmm1");
            __asm__("addsd xmm4, xmm3");
            __asm__("mulsd xmm2, xmm0");
            __asm__("addsd xmm2, xmm4");
            rdi21->f4 = rsi23->f0;
            rsi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23->f4) + 1);
        } while (rsi9 != 0x4b0);
        ++rax10;
    } while (rax10 != 0x3e8);
    if (ebp24 < 43) 
        goto 0x293;
    if (**r12_25 != fputc) 
        goto "???";
    rax26 = g2c3;
    rcx27 = *rax26;
    fun_2df(0x2cd, 22, 1, rcx27, rbx28 + reinterpret_cast<int64_t>(rdi18));
}

void fun_ae(int64_t rdi, int32_t* rsi) {
    int64_t r15_3;
    int64_t rax4;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, r8d");
    __asm__("divsd xmm1, xmm0");
    *reinterpret_cast<int32_t*>(rdi + r15_3) = *rsi;
    if (reinterpret_cast<int64_t>(rsi + 1) + 1 == 0x4b0) {
        if (rax4 + 1 == 0x3e8) {
            goto 0x10c;
        }
    }
}

