
void fun_1f4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_1ec(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_1f4(r14_5, rsi, rdx, rcx);
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
            if (r13_5 == 0x3e8) 
                break;
            rbp6 = r13_5 * 0x3e8;
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
    fun_1ec(rbx10, 22, 1, r15_9);
    fun_1f4(r14_11, 22, 1, r15_9);
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
            if (r13_2 == 0x3e8) 
                break;
            rbp3 = r13_2 * 0x3e8;
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
    fun_1ec(rbx10, 22, 1, r15_9);
    fun_1f4(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_2cc(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_2e5(0x2d3, 22, 1, r15_4);
    fun_1ec(rbx5, 22, 1, r15_4);
    fun_1f4(r14_6, 22, 1, r15_4);
    goto v7;
}

void fun_243();

void fun_228(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
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

    rsi5 = reinterpret_cast<int32_t*>(0x22f);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_243();
    do {
        rbp9 = r13_6 * 0x3e8;
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
    } while (r13_6 != 0x3e8);
    fun_2cc(r15_13, 0x2bb, 0x2c2);
    fun_2e5(0x2d3, 22, 1, r15_14);
    fun_1ec(rbx15, 22, 1, r15_14);
    fun_1f4(r14_16, 22, 1, r15_14);
    goto v17;
}

void fun_1f4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_2e5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_1ec(rbx5, rsi, rdx, rcx);
    fun_1f4(r14_6, rsi, rdx, rcx);
    goto v7;
}

void fun_243() {
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
        rbp1 = r13_2 * 0x3e8;
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
    } while (r13_2 != 0x3e8);
    fun_2cc(r15_8, 0x2bb, 0x2c2);
    fun_2e5(0x2d3, 22, 1, r15_9);
    fun_1ec(rbx10, 22, 1, r15_9);
    fun_1f4(r14_11, 22, 1, r15_9);
    goto v12;
}

void fputc(int32_t edi, int64_t rsi) {
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    signed char[1200] pad1200;
    int32_t f4b0;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f1;
    int32_t f4;
};

struct s4 {
    int32_t f0;
    int32_t f1;
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

int64_t* g20c = reinterpret_cast<int64_t*>(0x3d8d48388b4c);

void fun_90() {
    int64_t rdx1;
    int32_t* rbx2;
    int32_t* rsi3;
    int64_t rsi4;
    int64_t rdx5;
    int64_t rdx6;
    int64_t* rbx7;
    int64_t rdx8;
    int64_t rcx9;
    struct s0* rsi10;
    struct s1* rdx11;
    struct s2* rdi12;
    int64_t rdx13;
    struct s3* rdi14;
    struct s4* rsi15;
    int64_t rcx16;
    struct s4* rax17;
    int32_t* r14_18;
    struct s5* rsi19;
    int32_t* rbx20;
    struct s6* rsi21;
    struct s7* rdi22;
    int32_t* r14_23;
    struct s8* rdi24;
    struct s9* rsi25;
    int32_t ebp26;
    signed char** r15_27;
    int64_t* rax28;
    int64_t rcx29;

    __asm__("divps xmm2, xmm1");
    rbx2[rdx1 * 0x7d0] = *rsi3;
    if (rsi4 + 4 + 1 != rdx5) {
    }
    (rbx7 + rdx6 * 0x3e8)[rdx8] = rcx9;
    rsi10 = reinterpret_cast<struct s0*>(&rdx11->f4b0);
    *reinterpret_cast<int32_t*>(&rdi12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, r8d");
        __asm__("divsd xmm2, xmm0");
        rdi12->f0 = rsi10->f0;
        rsi10 = reinterpret_cast<struct s0*>(&rsi10->f4);
        rdi12 = reinterpret_cast<struct s2*>(reinterpret_cast<uint64_t>(&rdi12->f4) + 1);
    } while (!reinterpret_cast<int1_t>(rdi12 == 0x4b0));
    if (rdx13 + 1 == 0x3e8) 
        goto addr_123_12;
    addr_123_12:
    rdi12->f0 = rsi10->f0;
    rdi14 = reinterpret_cast<struct s3*>(&rdi12->f4);
    rsi15 = reinterpret_cast<struct s4*>(&rsi10->f4);
    do {
        *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (reinterpret_cast<uint64_t>(rax17) <= 0x3e6) {
                rdi14->f0 = r14_18[reinterpret_cast<uint64_t>(rax17) * 0x960];
                rsi15 = rax17;
                do {
                    rsi19 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rsi15) + 1);
                    rbx20[reinterpret_cast<uint64_t>(rsi19) * 0x7d0] = rsi19->f0;
                    rsi21 = reinterpret_cast<struct s6*>(&rsi19->f4);
                    rdi22 = reinterpret_cast<struct s7*>(r14_23 + reinterpret_cast<uint64_t>(rsi21) * 0x960);
                    __asm__("mulsd xmm2, [rdi+rcx*8]");
                    __asm__("addsd xmm1, xmm2");
                    rdi22->f0 = rsi21->f0;
                    rdi14 = reinterpret_cast<struct s3*>(&rdi22->f4);
                    rsi15 = reinterpret_cast<struct s4*>(&rsi21->f4);
                } while (!reinterpret_cast<int1_t>(rsi15 == 0x3e7));
            }
            rdi14->f0 = rsi15->f0;
            rdi24 = reinterpret_cast<struct s8*>(&rdi14->f1);
            rsi25 = reinterpret_cast<struct s9*>(&rsi15->f1);
            __asm__("mulsd xmm1, xmm0");
            rdi24->f0 = rsi25->f0;
            rdi14 = reinterpret_cast<struct s3*>(&rdi24->f4);
            rsi15 = reinterpret_cast<struct s4*>(&rsi25->f4);
            ++rcx16;
        } while (rcx16 != 0x4b0);
        rax17 = reinterpret_cast<struct s4*>(reinterpret_cast<uint64_t>(rax17) + 1);
    } while (rax17 != 0x3e8);
    if (ebp26 < 43) 
        goto 0x1e4;
    if (**r15_27 != fputc) 
        goto "???";
    rax28 = g20c;
    rcx29 = *rax28;
    fun_228(0x216, 22, 1, rcx29);
}

