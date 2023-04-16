
struct s0 {
    int32_t f0;
    int32_t f4;
};

int32_t fputc = 0x89535641;

int32_t g7fffffff8;

void fputc(int32_t edi);

int64_t fun_385(int64_t rdi, int64_t rsi);

void fun_399(int64_t rdi);

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

void fun_477(int64_t rdi);

void fun_492(int64_t rdi, int32_t* rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7, signed char** a8);

int32_t** g4de = reinterpret_cast<int32_t**>(0x3d8d48288b4c);

void fun_4fa(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7);

void fun_515();

void fun_55d();

void fun_533();

void fun_577(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7);

void fun_590(int64_t rdi, int32_t* rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7);

void fun_4ae(int32_t* rdi, int32_t* rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7);

void fun_4b6(int64_t rdi, int32_t* rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7);

void fun_4be(int32_t* rdi, int32_t* rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7);

void fun_4c6(signed char** rdi, int32_t* rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7);

void fun_357() {
    signed char** v1;
    struct s0* rdi2;
    int32_t* rsi3;
    uint64_t r12_4;
    int64_t* rbx5;
    int64_t r14_6;
    int64_t r13_7;
    uint64_t r15_8;
    int32_t* rdi9;
    int64_t rax10;
    int64_t rbx11;
    int64_t rax12;
    int64_t r13_13;
    int64_t rbp14;
    int64_t rax15;
    int64_t r15_16;
    int64_t v17;
    int32_t* r12_18;
    int32_t* v19;
    int64_t rcx20;
    int64_t rdx21;
    struct s1* rsi22;
    int32_t* rbx23;
    int32_t* rdi24;
    struct s2* rdi25;
    struct s3* rsi26;
    int64_t r9_27;
    int64_t rax28;
    struct s2* rdi29;
    struct s3* rsi30;
    int32_t* rsi31;
    int32_t* rbx32;
    int64_t rdx33;
    int32_t* rcx34;
    signed char** r14_35;
    signed char** v36;
    signed char** r8_37;
    signed char** v38;
    signed char** v39;
    int32_t** rax40;
    int32_t* r13_41;
    int32_t* rcx42;
    int32_t* rsi43;
    int64_t r14_44;
    int32_t* rdi45;
    signed char** v46;
    int32_t* rbx47;
    int64_t v48;

    while (1) {
        v1 = reinterpret_cast<signed char**>(__return_address());
        rdi2->f0 = fputc;
        rdi2->f4 = g7fffffff8;
        rsi3 = reinterpret_cast<int32_t*>(0x7fffffffc);
        do {
            (rbx5 + r12_4 * 0x7d0)[r12_4] = r14_6;
            ++r13_7;
            if (r15_8 == 0x7d0) 
                goto addr_376_9;
            r12_4 = r15_8;
            rdi9 = reinterpret_cast<int32_t*>(r15_8 * 0x3e88 + 8);
            *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm0, xmm0");
                __asm__("cvtsi2sd xmm0, ecx");
                __asm__("divsd xmm0, xmm3");
                __asm__("addsd xmm0, xmm1");
                *rdi9 = *rsi3;
                ++rdi9;
                ++rsi3;
                ++rax10;
            } while (rax10 != r13_7);
            r15_8 = r12_4 + 1;
        } while (r12_4 > 0x7ce);
        rdi2 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rdi9) + rbx11);
        fun_357();
    }
    addr_376_9:
    rax12 = fun_385(0x3d0900, 8);
    r13_13 = rax12;
    *reinterpret_cast<int32_t*>(&rbp14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_399(rax12);
    *reinterpret_cast<int32_t*>(&rax15) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(fputc);
    r15_16 = v17;
    r12_18 = v19;
    do {
        *reinterpret_cast<int32_t*>(&rcx20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx21 = rcx20 * 0x3e80;
            rsi22 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbx23) + rdx21 + rax15 * 8);
            *reinterpret_cast<int32_t*>(&rdi24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi24 = rsi22->f0;
                rdi25 = reinterpret_cast<struct s2*>(rdi24 + 1);
                rsi26 = reinterpret_cast<struct s3*>(&rsi22->f4);
                r9_27 = rdx21 + r13_13;
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi25->f0 = rsi26->f0;
                rsi22 = reinterpret_cast<struct s1*>(&rsi26->f4);
                rdi24 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi24 == 0x7d0));
            ++rcx20;
        } while (rcx20 != 0x7d0);
        ++rax15;
    } while (rax15 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi24 = rsi22->f0;
            rdi29 = reinterpret_cast<struct s2*>(rdi24 + 1);
            rsi30 = reinterpret_cast<struct s3*>(&rsi22->f4);
            rdi29->f0 = rsi30->f0;
            rdi24 = &rdi29->f4;
            rsi22 = reinterpret_cast<struct s1*>(&rsi30->f4);
            ++rax28;
        } while (rax28 != 0x7d0);
        ++rbp14;
    } while (rbp14 != 0x7d0);
    fun_477(r13_13);
    rsi31 = rbx32;
    rdx33 = r15_16;
    rcx34 = r12_18;
    r14_35 = v36;
    r8_37 = r14_35;
    fun_492(0x7d0, rsi31, rdx33, rcx34, r8_37, r9_27, v1, v38);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4) >= 43 && **v39 == fputc) {
        rax40 = g4de;
        r13_41 = *rax40;
        rcx42 = r13_41;
        fun_4fa(0x4e8, 22, 1, rcx42, r8_37, r9_27, v1);
        rsi43 = reinterpret_cast<int32_t*>(0x501);
        *reinterpret_cast<int32_t*>(&r14_44) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_44) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi45 = r13_41;
        fun_515();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_44) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi45) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi43 = r13_41;
                fun_55d();
            }
            *rdi45 = *rsi43;
            rdi45 = r13_41;
            rsi43 = reinterpret_cast<int32_t*>(0x51c);
            fun_533();
            ++r14_44;
        } while (r14_44 != 0x7d0);
        fun_577(r13_41, 0x566, 0x56d, rcx42, r8_37, r9_27, v1);
        *reinterpret_cast<int32_t*>(&rsi31) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx33) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx34 = r13_41;
        fun_590(0x57e, 22, 1, rcx34, r8_37, r9_27, v1);
        r14_35 = v46;
    }
    fun_4ae(rbx47, rsi31, rdx33, rcx34, r8_37, r9_27, v1);
    fun_4b6(r15_16, rsi31, rdx33, rcx34, r8_37, r9_27, v1);
    fun_4be(r12_18, rsi31, rdx33, rcx34, r8_37, r9_27, v1);
    fun_4c6(r14_35, rsi31, rdx33, rcx34, r8_37, r9_27, v1);
    goto v48;
}

void fun_477(int64_t rdi) {
    signed char** v2;
    int32_t* rsi3;
    int32_t* rbx4;
    int64_t rdx5;
    int64_t r15_6;
    int32_t* rcx7;
    int32_t* r12_8;
    signed char** r14_9;
    signed char** v10;
    signed char** r8_11;
    int64_t r9_12;
    signed char** v13;
    signed char** v14;
    int32_t** rax15;
    int32_t* r13_16;
    int32_t* rcx17;
    int64_t r9_18;
    int32_t* rsi19;
    int64_t r14_20;
    int32_t* rdi21;
    int64_t r9_22;
    int64_t r9_23;
    signed char** v24;
    int32_t* rbx25;
    int64_t r9_26;
    int64_t r15_27;
    int64_t r9_28;
    int32_t* r12_29;
    int64_t r9_30;
    int64_t r9_31;
    int64_t v32;

    v2 = reinterpret_cast<signed char**>(__return_address());
    rsi3 = rbx4;
    rdx5 = r15_6;
    rcx7 = r12_8;
    r14_9 = v10;
    r8_11 = r14_9;
    fun_492(0x7d0, rsi3, rdx5, rcx7, r8_11, r9_12, v2, v13);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v2) + 4) >= 43 && **v14 == fputc) {
        rax15 = g4de;
        r13_16 = *rax15;
        rcx17 = r13_16;
        fun_4fa(0x4e8, 22, 1, rcx17, r8_11, r9_18, v2);
        rsi19 = reinterpret_cast<int32_t*>(0x501);
        *reinterpret_cast<int32_t*>(&r14_20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_20) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi21 = r13_16;
        fun_515();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_20) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi21) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi19 = r13_16;
                fun_55d();
            }
            *rdi21 = *rsi19;
            rdi21 = r13_16;
            rsi19 = reinterpret_cast<int32_t*>(0x51c);
            fun_533();
            ++r14_20;
        } while (r14_20 != 0x7d0);
        fun_577(r13_16, 0x566, 0x56d, rcx17, r8_11, r9_22, v2);
        *reinterpret_cast<int32_t*>(&rsi3) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx5) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx7 = r13_16;
        fun_590(0x57e, 22, 1, rcx7, r8_11, r9_23, v2);
        r14_9 = v24;
    }
    fun_4ae(rbx25, rsi3, rdx5, rcx7, r8_11, r9_26, v2);
    fun_4b6(r15_27, rsi3, rdx5, rcx7, r8_11, r9_28, v2);
    fun_4be(r12_29, rsi3, rdx5, rcx7, r8_11, r9_30, v2);
    fun_4c6(r14_9, rsi3, rdx5, rcx7, r8_11, r9_31, v2);
    goto v32;
}

void fun_4ae(int32_t* rdi, int32_t* rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7) {
    int64_t r15_8;
    int32_t* r12_9;
    signed char** r14_10;
    int64_t v11;

    fun_4b6(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    fun_4be(r12_9, rsi, rdx, rcx, r8, r9, __return_address());
    fun_4c6(r14_10, rsi, rdx, rcx, r8, r9, __return_address());
    goto v11;
}

void fun_533() {
    int64_t r14_1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r13_4;
    int32_t* r13_5;
    int32_t* rbp6;
    int32_t* r13_7;
    int32_t* rcx8;
    signed char** r8_9;
    int64_t r9_10;
    int32_t* r13_11;
    signed char** r8_12;
    int64_t r9_13;
    int32_t* rbx14;
    signed char** r8_15;
    int64_t r9_16;
    int64_t r15_17;
    signed char** r8_18;
    int64_t r9_19;
    int32_t* r12_20;
    signed char** r8_21;
    int64_t r9_22;
    signed char** v23;
    signed char** r8_24;
    int64_t r9_25;
    int64_t v26;

    while (++r14_1, r14_1 != 0x7d0) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r13_4;
            fun_55d();
        }
        *rdi2 = *rsi3;
        rdi2 = r13_5;
        rsi3 = rbp6;
        fun_533();
    }
    fun_577(r13_7, 0x566, 0x56d, rcx8, r8_9, r9_10, __return_address());
    fun_590(0x57e, 22, 1, r13_11, r8_12, r9_13, __return_address());
    fun_4ae(rbx14, 22, 1, r13_11, r8_15, r9_16, __return_address());
    fun_4b6(r15_17, 22, 1, r13_11, r8_18, r9_19, __return_address());
    fun_4be(r12_20, 22, 1, r13_11, r8_21, r9_22, __return_address());
    fun_4c6(v23, 22, 1, r13_11, r8_24, r9_25, __return_address());
    goto v26;
}

void fun_55d() {
    signed char** v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r13_4;
    int32_t* rbp5;
    int64_t r14_6;
    int32_t* r13_7;
    int32_t* r13_8;
    int32_t* rcx9;
    signed char** r8_10;
    int64_t r9_11;
    int32_t* r13_12;
    signed char** r8_13;
    int64_t r9_14;
    int32_t* rbx15;
    signed char** r8_16;
    int64_t r9_17;
    int64_t r15_18;
    signed char** r8_19;
    int64_t r9_20;
    int32_t* r12_21;
    signed char** r8_22;
    int64_t r9_23;
    signed char** v24;
    signed char** r8_25;
    int64_t r9_26;
    int64_t v27;

    while (1) {
        v1 = reinterpret_cast<signed char**>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = r13_4;
            rsi3 = rbp5;
            fun_533();
            ++r14_6;
            if (r14_6 == 0x7d0) 
                goto addr_55f_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_6) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = r13_7;
        fun_55d();
    }
    addr_55f_7:
    fun_577(r13_8, 0x566, 0x56d, rcx9, r8_10, r9_11, v1);
    fun_590(0x57e, 22, 1, r13_12, r8_13, r9_14, v1);
    fun_4ae(rbx15, 22, 1, r13_12, r8_16, r9_17, v1);
    fun_4b6(r15_18, 22, 1, r13_12, r8_19, r9_20, v1);
    fun_4be(r12_21, 22, 1, r13_12, r8_22, r9_23, v1);
    fun_4c6(v24, 22, 1, r13_12, r8_25, r9_26, v1);
    goto v27;
}

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

int64_t fun_385(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t r13_4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rax8;
    int64_t r15_9;
    int64_t v10;
    int32_t* r12_11;
    int32_t* v12;
    int64_t rcx13;
    int64_t rdx14;
    struct s4* rsi15;
    int32_t* rbx16;
    int32_t* rdi17;
    struct s5* rdi18;
    struct s6* rsi19;
    int64_t r9_20;
    int64_t rax21;
    struct s5* rdi22;
    struct s6* rsi23;
    int32_t* rsi24;
    int32_t* rbx25;
    int64_t rdx26;
    int32_t* rcx27;
    signed char** r14_28;
    signed char** v29;
    signed char** r8_30;
    signed char** v31;
    signed char** v32;
    int32_t** rax33;
    int32_t* r13_34;
    int32_t* rcx35;
    int32_t* rsi36;
    int64_t r14_37;
    int32_t* rdi38;
    signed char** v39;
    int32_t* rbx40;
    int64_t v41;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r13_4 = rax5;
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_399(rax7);
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    r15_9 = v10;
    r12_11 = v12;
    do {
        *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx14 = rcx13 * 0x3e80;
            rsi15 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rbx16) + rdx14 + rax8 * 8);
            *reinterpret_cast<int32_t*>(&rdi17) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi17 = rsi15->f0;
                rdi18 = reinterpret_cast<struct s5*>(rdi17 + 1);
                rsi19 = reinterpret_cast<struct s6*>(&rsi15->f4);
                r9_20 = rdx14 + r13_4;
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi18->f0 = rsi19->f0;
                rsi15 = reinterpret_cast<struct s4*>(&rsi19->f4);
                rdi17 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi17 == 0x7d0));
            ++rcx13;
        } while (rcx13 != 0x7d0);
        ++rax8;
    } while (rax8 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi17 = rsi15->f0;
            rdi22 = reinterpret_cast<struct s5*>(rdi17 + 1);
            rsi23 = reinterpret_cast<struct s6*>(&rsi15->f4);
            rdi22->f0 = rsi23->f0;
            rdi17 = &rdi22->f4;
            rsi15 = reinterpret_cast<struct s4*>(&rsi23->f4);
            ++rax21;
        } while (rax21 != 0x7d0);
        ++rbp6;
    } while (rbp6 != 0x7d0);
    fun_477(r13_4);
    rsi24 = rbx25;
    rdx26 = r15_9;
    rcx27 = r12_11;
    r14_28 = v29;
    r8_30 = r14_28;
    fun_492(0x7d0, rsi24, rdx26, rcx27, r8_30, r9_20, v3, v31);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && **v32 == fputc) {
        rax33 = g4de;
        r13_34 = *rax33;
        rcx35 = r13_34;
        fun_4fa(0x4e8, 22, 1, rcx35, r8_30, r9_20, v3);
        rsi36 = reinterpret_cast<int32_t*>(0x501);
        *reinterpret_cast<int32_t*>(&r14_37) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_37) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi38 = r13_34;
        fun_515();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_37) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi38) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi36 = r13_34;
                fun_55d();
            }
            *rdi38 = *rsi36;
            rdi38 = r13_34;
            rsi36 = reinterpret_cast<int32_t*>(0x51c);
            fun_533();
            ++r14_37;
        } while (r14_37 != 0x7d0);
        fun_577(r13_34, 0x566, 0x56d, rcx35, r8_30, r9_20, v3);
        *reinterpret_cast<int32_t*>(&rsi24) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx26) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx27 = r13_34;
        fun_590(0x57e, 22, 1, rcx27, r8_30, r9_20, v3);
        r14_28 = v39;
    }
    fun_4ae(rbx40, rsi24, rdx26, rcx27, r8_30, r9_20, v3);
    fun_4b6(r15_9, rsi24, rdx26, rcx27, r8_30, r9_20, v3);
    fun_4be(r12_11, rsi24, rdx26, rcx27, r8_30, r9_20, v3);
    fun_4c6(r14_28, rsi24, rdx26, rcx27, r8_30, r9_20, v3);
    goto v41;
}

void fun_492(int64_t rdi, int32_t* rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7, signed char** a8) {
    signed char** v9;
    int32_t** rax10;
    int32_t* r13_11;
    int32_t* rcx12;
    int32_t* rsi13;
    int64_t r14_14;
    int32_t* rdi15;
    signed char** r14_16;
    int32_t* rbx17;
    int64_t r15_18;
    int32_t* r12_19;
    int64_t v20;

    v9 = reinterpret_cast<signed char**>(__return_address());
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v9) + 4) >= 43 && **a8 == fputc) {
        rax10 = g4de;
        r13_11 = *rax10;
        rcx12 = r13_11;
        fun_4fa(0x4e8, 22, 1, rcx12, r8, r9, v9);
        rsi13 = reinterpret_cast<int32_t*>(0x501);
        *reinterpret_cast<int32_t*>(&r14_14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_14) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi15 = r13_11;
        fun_515();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_14) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi15) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi13 = r13_11;
                fun_55d();
            }
            *rdi15 = *rsi13;
            rdi15 = r13_11;
            rsi13 = reinterpret_cast<int32_t*>(0x51c);
            fun_533();
            ++r14_14;
        } while (r14_14 != 0x7d0);
        fun_577(r13_11, 0x566, 0x56d, rcx12, r8, r9, v9);
        *reinterpret_cast<int32_t*>(&rsi) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx = r13_11;
        fun_590(0x57e, 22, 1, rcx, r8, r9, v9);
        r14_16 = a7;
    }
    fun_4ae(rbx17, rsi, rdx, rcx, r8, r9, v9);
    fun_4b6(r15_18, rsi, rdx, rcx, r8, r9, v9);
    fun_4be(r12_19, rsi, rdx, rcx, r8, r9, v9);
    fun_4c6(r14_16, rsi, rdx, rcx, r8, r9, v9);
    goto v20;
}

void fun_4fa(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7) {
    signed char** v8;
    int32_t* rsi9;
    int64_t r14_10;
    int32_t* rdi11;
    int32_t* r13_12;
    int32_t* r13_13;
    int32_t* r13_14;
    int32_t* r13_15;
    int32_t* r13_16;
    int32_t* rbx17;
    int64_t r15_18;
    int32_t* r12_19;
    int64_t v20;

    v8 = reinterpret_cast<signed char**>(__return_address());
    rsi9 = reinterpret_cast<int32_t*>(0x501);
    *reinterpret_cast<int32_t*>(&r14_10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_10) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi11 = r13_12;
    fun_515();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_10) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi11) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi9 = r13_13;
            fun_55d();
        }
        *rdi11 = *rsi9;
        rdi11 = r13_14;
        rsi9 = reinterpret_cast<int32_t*>(0x51c);
        fun_533();
        ++r14_10;
    } while (r14_10 != 0x7d0);
    fun_577(r13_15, 0x566, 0x56d, rcx, r8, r9, v8);
    fun_590(0x57e, 22, 1, r13_16, r8, r9, v8);
    fun_4ae(rbx17, 22, 1, r13_16, r8, r9, v8);
    fun_4b6(r15_18, 22, 1, r13_16, r8, r9, v8);
    fun_4be(r12_19, 22, 1, r13_16, r8, r9, v8);
    fun_4c6(a7, 22, 1, r13_16, r8, r9, v8);
    goto v20;
}

void fun_4b6(int64_t rdi, int32_t* rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7) {
    int32_t* r12_8;
    signed char** r14_9;
    int64_t v10;

    fun_4be(r12_8, rsi, rdx, rcx, r8, r9, __return_address());
    fun_4c6(r14_9, rsi, rdx, rcx, r8, r9, __return_address());
    goto v10;
}

int64_t fun_218(int64_t rdi, int64_t rsi);

int32_t* fun_22a(int64_t rdi, int64_t rsi);

struct s7 {
    int32_t f0;
    int32_t f4;
};

struct s8 {
    int32_t f0;
    int32_t f4;
};

signed char** fun_23c(struct s7* rdi, struct s8* rsi);

int32_t g7d0;

/* .LCPI1_1 */
int32_t LCPI1_1 = 0x1078e;

int32_t g7d4;

int32_t gc = 0xc9314500;

int32_t g7d8;

/* .LCPI1_2 */
int32_t LCPI1_2 = 0x66661aeb;

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

void fun_206(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int32_t* rbx4;
    int32_t* rax5;
    int64_t rax6;
    int64_t r14_7;
    int32_t* rax8;
    int32_t* r12_9;
    signed char** rax10;
    uint64_t r15_11;
    int32_t* rdi12;
    int32_t* rsi13;
    int64_t rdx14;
    int64_t rcx15;
    signed char** v16;
    int32_t* v17;
    int64_t v18;
    int64_t r13_19;
    int32_t* rsi20;
    uint64_t r12_21;
    int32_t* rdi22;
    int64_t rax23;
    struct s9* rdi24;
    int64_t rax25;
    int64_t r13_26;
    int64_t rbp27;
    int64_t rax28;
    int64_t r15_29;
    int32_t* r12_30;
    int64_t rcx31;
    void* rdx32;
    struct s10* rsi33;
    int32_t* rdi34;
    struct s11* rdi35;
    struct s12* rsi36;
    int64_t r9_37;
    int64_t rax38;
    struct s11* rdi39;
    struct s12* rsi40;
    int32_t* rsi41;
    int64_t rdx42;
    int32_t* rcx43;
    signed char** r14_44;
    signed char** r8_45;
    signed char** v46;
    int32_t** rax47;
    int32_t* r13_48;
    int32_t* rcx49;
    int32_t* rsi50;
    int64_t r14_51;
    int32_t* rdi52;
    int64_t v53;

    v3 = reinterpret_cast<signed char**>(__return_address());
    rbx4 = rax5;
    rax6 = fun_218(0x7d0, 8);
    r14_7 = rax6;
    rax8 = fun_22a(0x7d0, 8);
    r12_9 = rax8;
    rax10 = fun_23c(0x7d0, 8);
    *reinterpret_cast<int32_t*>(&r15_11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_11) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = LCPI1_1;
    g7d4 = gc;
    g7d8 = LCPI1_2;
    rdi12 = reinterpret_cast<int32_t*>(0x7dc);
    rsi13 = reinterpret_cast<int32_t*>(20);
    *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        r12_9[rdx14 * 2] = reinterpret_cast<int32_t>(fputc);
        rax10[rdx14] = reinterpret_cast<signed char*>(fputc);
        rcx15 = rdx14 + 1;
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, ecx");
        __asm__("divsd xmm2, xmm3");
        __asm__("mulsd xmm2, xmm0");
        __asm__("addsd xmm2, xmm1");
        *rdi12 = *rsi13;
        ++rdi12;
        ++rsi13;
        rdx14 = rcx15;
    } while (rcx15 != 0x7d0);
    v16 = rax10;
    v17 = r12_9;
    v18 = r14_7;
    *reinterpret_cast<int32_t*>(&r13_19) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_19) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi12 = g7fffffff8;
    rsi20 = reinterpret_cast<int32_t*>(0x7fffffffc);
    do {
        r12_21 = r15_11;
        rdi22 = reinterpret_cast<int32_t*>(r15_11 * 0x3e88 + 8);
        *reinterpret_cast<int32_t*>(&rax23) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, ecx");
            __asm__("divsd xmm0, xmm3");
            __asm__("addsd xmm0, xmm1");
            *rdi22 = *rsi20;
            ++rdi22;
            ++rsi20;
            ++rax23;
        } while (rax23 != r13_19);
        r15_11 = r12_21 + 1;
        if (r12_21 <= 0x7ce) {
            rdi24 = reinterpret_cast<struct s9*>(reinterpret_cast<uint64_t>(rdi22) + reinterpret_cast<int64_t>(rbx4));
            fun_357();
            rdi24->f0 = fputc;
            rdi24->f4 = g7fffffff8;
            rsi20 = reinterpret_cast<int32_t*>(0x7fffffffc);
        }
        (rbx4 + r12_21 * 0xfa0)[r12_21 * 2] = reinterpret_cast<int32_t>(0x3ff0000000000000);
        ++r13_19;
    } while (r15_11 != 0x7d0);
    rax25 = fun_385(0x3d0900, 8);
    r13_26 = rax25;
    *reinterpret_cast<int32_t*>(&rbp27) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp27) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_399(rax25);
    *reinterpret_cast<int32_t*>(&rax28) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = reinterpret_cast<int32_t>(fputc);
    r15_29 = v18;
    r12_30 = v17;
    do {
        *reinterpret_cast<int32_t*>(&rcx31) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx32 = reinterpret_cast<void*>(rcx31 * 0x3e80);
            rsi33 = reinterpret_cast<struct s10*>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<int64_t>(rdx32) + rax28 * 8);
            *reinterpret_cast<int32_t*>(&rdi34) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi34 = rsi33->f0;
                rdi35 = reinterpret_cast<struct s11*>(rdi34 + 1);
                rsi36 = reinterpret_cast<struct s12*>(&rsi33->f4);
                r9_37 = reinterpret_cast<int64_t>(rdx32) + r13_26;
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi35->f0 = rsi36->f0;
                rsi33 = reinterpret_cast<struct s10*>(&rsi36->f4);
                rdi34 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi34 == 0x7d0));
            ++rcx31;
        } while (rcx31 != 0x7d0);
        ++rax28;
    } while (rax28 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax38) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi34 = rsi33->f0;
            rdi39 = reinterpret_cast<struct s11*>(rdi34 + 1);
            rsi40 = reinterpret_cast<struct s12*>(&rsi33->f4);
            rdi39->f0 = rsi40->f0;
            rdi34 = &rdi39->f4;
            rsi33 = reinterpret_cast<struct s10*>(&rsi40->f4);
            ++rax38;
        } while (rax38 != 0x7d0);
        ++rbp27;
    } while (rbp27 != 0x7d0);
    fun_477(r13_26);
    rsi41 = rbx4;
    rdx42 = r15_29;
    rcx43 = r12_30;
    r14_44 = v16;
    r8_45 = r14_44;
    fun_492(0x7d0, rsi41, rdx42, rcx43, r8_45, r9_37, v3, v16);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && **v46 == fputc) {
        rax47 = g4de;
        r13_48 = *rax47;
        rcx49 = r13_48;
        fun_4fa(0x4e8, 22, 1, rcx49, r8_45, r9_37, v3);
        rsi50 = reinterpret_cast<int32_t*>(0x501);
        *reinterpret_cast<int32_t*>(&r14_51) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_51) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi52 = r13_48;
        fun_515();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_51) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi52) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi52) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi50 = r13_48;
                fun_55d();
            }
            *rdi52 = *rsi50;
            rdi52 = r13_48;
            rsi50 = reinterpret_cast<int32_t*>(0x51c);
            fun_533();
            ++r14_51;
        } while (r14_51 != 0x7d0);
        fun_577(r13_48, 0x566, 0x56d, rcx49, r8_45, r9_37, v3);
        *reinterpret_cast<int32_t*>(&rsi41) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi41) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx42) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx42) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx43 = r13_48;
        fun_590(0x57e, 22, 1, rcx43, r8_45, r9_37, v3);
        r14_44 = v16;
    }
    fun_4ae(rbx4, rsi41, rdx42, rcx43, r8_45, r9_37, v3);
    fun_4b6(r15_29, rsi41, rdx42, rcx43, r8_45, r9_37, v3);
    fun_4be(r12_30, rsi41, rdx42, rcx43, r8_45, r9_37, v3);
    fun_4c6(r14_44, rsi41, rdx42, rcx43, r8_45, r9_37, v3);
    goto v53;
}

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

void fun_399(int64_t rdi) {
    signed char** v2;
    int64_t rax3;
    int64_t r15_4;
    int64_t v5;
    int32_t* r12_6;
    int32_t* v7;
    int64_t rcx8;
    int64_t rdx9;
    struct s13* rsi10;
    int32_t* rbx11;
    int32_t* rdi12;
    struct s14* rdi13;
    struct s15* rsi14;
    int64_t r9_15;
    int64_t r13_16;
    int64_t rax17;
    struct s14* rdi18;
    struct s15* rsi19;
    int64_t rbp20;
    int64_t r13_21;
    int32_t* rsi22;
    int32_t* rbx23;
    int64_t rdx24;
    int32_t* rcx25;
    signed char** r14_26;
    signed char** v27;
    signed char** r8_28;
    signed char** v29;
    signed char** v30;
    int32_t** rax31;
    int32_t* r13_32;
    int32_t* rcx33;
    int32_t* rsi34;
    int64_t r14_35;
    int32_t* rdi36;
    signed char** v37;
    int32_t* rbx38;
    int64_t v39;

    v2 = reinterpret_cast<signed char**>(__return_address());
    *reinterpret_cast<int32_t*>(&rax3) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = reinterpret_cast<int32_t>(fputc);
    r15_4 = v5;
    r12_6 = v7;
    do {
        *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx9 = rcx8 * 0x3e80;
            rsi10 = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(rbx11) + rdx9 + rax3 * 8);
            *reinterpret_cast<int32_t*>(&rdi12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi12 = rsi10->f0;
                rdi13 = reinterpret_cast<struct s14*>(rdi12 + 1);
                rsi14 = reinterpret_cast<struct s15*>(&rsi10->f4);
                r9_15 = rdx9 + r13_16;
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi13->f0 = rsi14->f0;
                rsi10 = reinterpret_cast<struct s13*>(&rsi14->f4);
                rdi12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi12 == 0x7d0));
            ++rcx8;
        } while (rcx8 != 0x7d0);
        ++rax3;
    } while (rax3 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax17) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi12 = rsi10->f0;
            rdi18 = reinterpret_cast<struct s14*>(rdi12 + 1);
            rsi19 = reinterpret_cast<struct s15*>(&rsi10->f4);
            rdi18->f0 = rsi19->f0;
            rdi12 = &rdi18->f4;
            rsi10 = reinterpret_cast<struct s13*>(&rsi19->f4);
            ++rax17;
        } while (rax17 != 0x7d0);
        ++rbp20;
    } while (rbp20 != 0x7d0);
    fun_477(r13_21);
    rsi22 = rbx23;
    rdx24 = r15_4;
    rcx25 = r12_6;
    r14_26 = v27;
    r8_28 = r14_26;
    fun_492(0x7d0, rsi22, rdx24, rcx25, r8_28, r9_15, v2, v29);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v2) + 4) >= 43 && **v30 == fputc) {
        rax31 = g4de;
        r13_32 = *rax31;
        rcx33 = r13_32;
        fun_4fa(0x4e8, 22, 1, rcx33, r8_28, r9_15, v2);
        rsi34 = reinterpret_cast<int32_t*>(0x501);
        *reinterpret_cast<int32_t*>(&r14_35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_35) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi36 = r13_32;
        fun_515();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_35) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi36) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi34 = r13_32;
                fun_55d();
            }
            *rdi36 = *rsi34;
            rdi36 = r13_32;
            rsi34 = reinterpret_cast<int32_t*>(0x51c);
            fun_533();
            ++r14_35;
        } while (r14_35 != 0x7d0);
        fun_577(r13_32, 0x566, 0x56d, rcx33, r8_28, r9_15, v2);
        *reinterpret_cast<int32_t*>(&rsi22) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx24) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx25 = r13_32;
        fun_590(0x57e, 22, 1, rcx25, r8_28, r9_15, v2);
        r14_26 = v37;
    }
    fun_4ae(rbx38, rsi22, rdx24, rcx25, r8_28, r9_15, v2);
    fun_4b6(r15_4, rsi22, rdx24, rcx25, r8_28, r9_15, v2);
    fun_4be(r12_6, rsi22, rdx24, rcx25, r8_28, r9_15, v2);
    fun_4c6(r14_26, rsi22, rdx24, rcx25, r8_28, r9_15, v2);
    goto v39;
}

void fun_515() {
    signed char** v1;
    int64_t r14_2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* r13_5;
    int32_t* r13_6;
    int32_t* r13_7;
    int32_t* rcx8;
    signed char** r8_9;
    int64_t r9_10;
    int32_t* r13_11;
    signed char** r8_12;
    int64_t r9_13;
    int32_t* rbx14;
    signed char** r8_15;
    int64_t r9_16;
    int64_t r15_17;
    signed char** r8_18;
    int64_t r9_19;
    int32_t* r12_20;
    signed char** r8_21;
    int64_t r9_22;
    signed char** v23;
    signed char** r8_24;
    int64_t r9_25;
    int64_t v26;

    v1 = reinterpret_cast<signed char**>(__return_address());
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_2) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = r13_5;
            fun_55d();
        }
        *rdi3 = *rsi4;
        rdi3 = r13_6;
        rsi4 = reinterpret_cast<int32_t*>(0x51c);
        fun_533();
        ++r14_2;
    } while (r14_2 != 0x7d0);
    fun_577(r13_7, 0x566, 0x56d, rcx8, r8_9, r9_10, v1);
    fun_590(0x57e, 22, 1, r13_11, r8_12, r9_13, v1);
    fun_4ae(rbx14, 22, 1, r13_11, r8_15, r9_16, v1);
    fun_4b6(r15_17, 22, 1, r13_11, r8_18, r9_19, v1);
    fun_4be(r12_20, 22, 1, r13_11, r8_21, r9_22, v1);
    fun_4c6(v23, 22, 1, r13_11, r8_24, r9_25, v1);
    goto v26;
}

void fun_4be(int32_t* rdi, int32_t* rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7) {
    signed char** r14_8;
    int64_t v9;

    fun_4c6(r14_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_577(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7) {
    int32_t* r13_8;
    int32_t* rbx9;
    int64_t r15_10;
    int32_t* r12_11;
    int64_t v12;

    fun_590(0x57e, 22, 1, r13_8, r8, r9, __return_address());
    fun_4ae(rbx9, 22, 1, r13_8, r8, r9, __return_address());
    fun_4b6(r15_10, 22, 1, r13_8, r8, r9, __return_address());
    fun_4be(r12_11, 22, 1, r13_8, r8, r9, __return_address());
    fun_4c6(a7, 22, 1, r13_8, r8, r9, __return_address());
    goto v12;
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

int64_t fun_218(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t r14_4;
    int64_t rax5;
    int32_t* rax6;
    int32_t* r12_7;
    signed char** rax8;
    uint64_t r15_9;
    int32_t* rdi10;
    int32_t* rsi11;
    int64_t rdx12;
    int64_t rcx13;
    signed char** v14;
    int32_t* v15;
    int64_t v16;
    int64_t r13_17;
    int32_t* rsi18;
    uint64_t r12_19;
    int32_t* rdi20;
    int64_t rax21;
    struct s16* rdi22;
    int64_t rbx23;
    int64_t* rbx24;
    int64_t rax25;
    int64_t r13_26;
    int64_t rbp27;
    int64_t rax28;
    int64_t r15_29;
    int32_t* r12_30;
    int64_t rcx31;
    int64_t rdx32;
    struct s17* rsi33;
    int32_t* rbx34;
    int32_t* rdi35;
    struct s18* rdi36;
    struct s19* rsi37;
    int64_t r9_38;
    int64_t rax39;
    struct s18* rdi40;
    struct s19* rsi41;
    int32_t* rsi42;
    int32_t* rbx43;
    int64_t rdx44;
    int32_t* rcx45;
    signed char** r14_46;
    signed char** r8_47;
    signed char** v48;
    int32_t** rax49;
    int32_t* r13_50;
    int32_t* rcx51;
    int32_t* rsi52;
    int64_t r14_53;
    int32_t* rdi54;
    int32_t* rbx55;
    int64_t v56;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r14_4 = rax5;
    rax6 = fun_22a(0x7d0, 8);
    r12_7 = rax6;
    rax8 = fun_23c(0x7d0, 8);
    *reinterpret_cast<int32_t*>(&r15_9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_9) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = LCPI1_1;
    g7d4 = gc;
    g7d8 = LCPI1_2;
    rdi10 = reinterpret_cast<int32_t*>(0x7dc);
    rsi11 = reinterpret_cast<int32_t*>(20);
    *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        r12_7[rdx12 * 2] = reinterpret_cast<int32_t>(fputc);
        rax8[rdx12] = reinterpret_cast<signed char*>(fputc);
        rcx13 = rdx12 + 1;
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, ecx");
        __asm__("divsd xmm2, xmm3");
        __asm__("mulsd xmm2, xmm0");
        __asm__("addsd xmm2, xmm1");
        *rdi10 = *rsi11;
        ++rdi10;
        ++rsi11;
        rdx12 = rcx13;
    } while (rcx13 != 0x7d0);
    v14 = rax8;
    v15 = r12_7;
    v16 = r14_4;
    *reinterpret_cast<int32_t*>(&r13_17) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_17) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi10 = g7fffffff8;
    rsi18 = reinterpret_cast<int32_t*>(0x7fffffffc);
    do {
        r12_19 = r15_9;
        rdi20 = reinterpret_cast<int32_t*>(r15_9 * 0x3e88 + 8);
        *reinterpret_cast<int32_t*>(&rax21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, ecx");
            __asm__("divsd xmm0, xmm3");
            __asm__("addsd xmm0, xmm1");
            *rdi20 = *rsi18;
            ++rdi20;
            ++rsi18;
            ++rax21;
        } while (rax21 != r13_17);
        r15_9 = r12_19 + 1;
        if (r12_19 <= 0x7ce) {
            rdi22 = reinterpret_cast<struct s16*>(reinterpret_cast<uint64_t>(rdi20) + rbx23);
            fun_357();
            rdi22->f0 = fputc;
            rdi22->f4 = g7fffffff8;
            rsi18 = reinterpret_cast<int32_t*>(0x7fffffffc);
        }
        (rbx24 + r12_19 * 0x7d0)[r12_19] = 0x3ff0000000000000;
        ++r13_17;
    } while (r15_9 != 0x7d0);
    rax25 = fun_385(0x3d0900, 8);
    r13_26 = rax25;
    *reinterpret_cast<int32_t*>(&rbp27) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp27) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_399(rax25);
    *reinterpret_cast<int32_t*>(&rax28) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = reinterpret_cast<int32_t>(fputc);
    r15_29 = v16;
    r12_30 = v15;
    do {
        *reinterpret_cast<int32_t*>(&rcx31) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx32 = rcx31 * 0x3e80;
            rsi33 = reinterpret_cast<struct s17*>(reinterpret_cast<int64_t>(rbx34) + rdx32 + rax28 * 8);
            *reinterpret_cast<int32_t*>(&rdi35) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi35 = rsi33->f0;
                rdi36 = reinterpret_cast<struct s18*>(rdi35 + 1);
                rsi37 = reinterpret_cast<struct s19*>(&rsi33->f4);
                r9_38 = rdx32 + r13_26;
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi36->f0 = rsi37->f0;
                rsi33 = reinterpret_cast<struct s17*>(&rsi37->f4);
                rdi35 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi35 == 0x7d0));
            ++rcx31;
        } while (rcx31 != 0x7d0);
        ++rax28;
    } while (rax28 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi35 = rsi33->f0;
            rdi40 = reinterpret_cast<struct s18*>(rdi35 + 1);
            rsi41 = reinterpret_cast<struct s19*>(&rsi33->f4);
            rdi40->f0 = rsi41->f0;
            rdi35 = &rdi40->f4;
            rsi33 = reinterpret_cast<struct s17*>(&rsi41->f4);
            ++rax39;
        } while (rax39 != 0x7d0);
        ++rbp27;
    } while (rbp27 != 0x7d0);
    fun_477(r13_26);
    rsi42 = rbx43;
    rdx44 = r15_29;
    rcx45 = r12_30;
    r14_46 = v14;
    r8_47 = r14_46;
    fun_492(0x7d0, rsi42, rdx44, rcx45, r8_47, r9_38, v3, v14);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && **v48 == fputc) {
        rax49 = g4de;
        r13_50 = *rax49;
        rcx51 = r13_50;
        fun_4fa(0x4e8, 22, 1, rcx51, r8_47, r9_38, v3);
        rsi52 = reinterpret_cast<int32_t*>(0x501);
        *reinterpret_cast<int32_t*>(&r14_53) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_53) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi54 = r13_50;
        fun_515();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_53) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi54) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi54) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi52 = r13_50;
                fun_55d();
            }
            *rdi54 = *rsi52;
            rdi54 = r13_50;
            rsi52 = reinterpret_cast<int32_t*>(0x51c);
            fun_533();
            ++r14_53;
        } while (r14_53 != 0x7d0);
        fun_577(r13_50, 0x566, 0x56d, rcx51, r8_47, r9_38, v3);
        *reinterpret_cast<int32_t*>(&rsi42) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi42) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx44) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx44) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx45 = r13_50;
        fun_590(0x57e, 22, 1, rcx45, r8_47, r9_38, v3);
        r14_46 = v14;
    }
    fun_4ae(rbx55, rsi42, rdx44, rcx45, r8_47, r9_38, v3);
    fun_4b6(r15_29, rsi42, rdx44, rcx45, r8_47, r9_38, v3);
    fun_4be(r12_30, rsi42, rdx44, rcx45, r8_47, r9_38, v3);
    fun_4c6(r14_46, rsi42, rdx44, rcx45, r8_47, r9_38, v3);
    goto v56;
}

void fun_4c6(signed char** rdi, int32_t* rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7) {
    int64_t v8;

    goto v8;
}

void fun_590(int64_t rdi, int32_t* rsi, int64_t rdx, int32_t* rcx, signed char** r8, int64_t r9, signed char** a7) {
    int32_t* rbx8;
    int64_t r15_9;
    int32_t* r12_10;
    int64_t v11;

    fun_4ae(rbx8, rsi, rdx, rcx, r8, r9, __return_address());
    fun_4b6(r15_9, rsi, rdx, rcx, r8, r9, __return_address());
    fun_4be(r12_10, rsi, rdx, rcx, r8, r9, __return_address());
    fun_4c6(a7, rsi, rdx, rcx, r8, r9, __return_address());
    goto v11;
}

struct s20 {
    int32_t f0;
    int32_t f4;
};

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

int32_t* fun_22a(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int32_t* r12_4;
    int32_t* rax5;
    signed char** rax6;
    uint64_t r15_7;
    int32_t* rdi8;
    int32_t* rsi9;
    int64_t rdx10;
    int64_t rcx11;
    signed char** v12;
    int32_t* v13;
    int64_t v14;
    int64_t r14_15;
    int64_t r13_16;
    int32_t* rsi17;
    uint64_t r12_18;
    int32_t* rdi19;
    int64_t rax20;
    struct s20* rdi21;
    int64_t rbx22;
    int64_t* rbx23;
    int64_t rax24;
    int64_t r13_25;
    int64_t rbp26;
    int64_t rax27;
    int64_t r15_28;
    int32_t* r12_29;
    int64_t rcx30;
    int64_t rdx31;
    struct s21* rsi32;
    int32_t* rbx33;
    int32_t* rdi34;
    struct s22* rdi35;
    struct s23* rsi36;
    int64_t r9_37;
    int64_t rax38;
    struct s22* rdi39;
    struct s23* rsi40;
    int32_t* rsi41;
    int32_t* rbx42;
    int64_t rdx43;
    int32_t* rcx44;
    signed char** r14_45;
    signed char** r8_46;
    signed char** v47;
    int32_t** rax48;
    int32_t* r13_49;
    int32_t* rcx50;
    int32_t* rsi51;
    int64_t r14_52;
    int32_t* rdi53;
    int32_t* rbx54;
    int64_t v55;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r12_4 = rax5;
    rax6 = fun_23c(0x7d0, 8);
    *reinterpret_cast<int32_t*>(&r15_7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_7) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = LCPI1_1;
    g7d4 = gc;
    g7d8 = LCPI1_2;
    rdi8 = reinterpret_cast<int32_t*>(0x7dc);
    rsi9 = reinterpret_cast<int32_t*>(20);
    *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        r12_4[rdx10 * 2] = reinterpret_cast<int32_t>(fputc);
        rax6[rdx10] = reinterpret_cast<signed char*>(fputc);
        rcx11 = rdx10 + 1;
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, ecx");
        __asm__("divsd xmm2, xmm3");
        __asm__("mulsd xmm2, xmm0");
        __asm__("addsd xmm2, xmm1");
        *rdi8 = *rsi9;
        ++rdi8;
        ++rsi9;
        rdx10 = rcx11;
    } while (rcx11 != 0x7d0);
    v12 = rax6;
    v13 = r12_4;
    v14 = r14_15;
    *reinterpret_cast<int32_t*>(&r13_16) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_16) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi8 = g7fffffff8;
    rsi17 = reinterpret_cast<int32_t*>(0x7fffffffc);
    do {
        r12_18 = r15_7;
        rdi19 = reinterpret_cast<int32_t*>(r15_7 * 0x3e88 + 8);
        *reinterpret_cast<int32_t*>(&rax20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, ecx");
            __asm__("divsd xmm0, xmm3");
            __asm__("addsd xmm0, xmm1");
            *rdi19 = *rsi17;
            ++rdi19;
            ++rsi17;
            ++rax20;
        } while (rax20 != r13_16);
        r15_7 = r12_18 + 1;
        if (r12_18 <= 0x7ce) {
            rdi21 = reinterpret_cast<struct s20*>(reinterpret_cast<uint64_t>(rdi19) + rbx22);
            fun_357();
            rdi21->f0 = fputc;
            rdi21->f4 = g7fffffff8;
            rsi17 = reinterpret_cast<int32_t*>(0x7fffffffc);
        }
        (rbx23 + r12_18 * 0x7d0)[r12_18] = 0x3ff0000000000000;
        ++r13_16;
    } while (r15_7 != 0x7d0);
    rax24 = fun_385(0x3d0900, 8);
    r13_25 = rax24;
    *reinterpret_cast<int32_t*>(&rbp26) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp26) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_399(rax24);
    *reinterpret_cast<int32_t*>(&rax27) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = reinterpret_cast<int32_t>(fputc);
    r15_28 = v14;
    r12_29 = v13;
    do {
        *reinterpret_cast<int32_t*>(&rcx30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx30) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx31 = rcx30 * 0x3e80;
            rsi32 = reinterpret_cast<struct s21*>(reinterpret_cast<int64_t>(rbx33) + rdx31 + rax27 * 8);
            *reinterpret_cast<int32_t*>(&rdi34) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi34 = rsi32->f0;
                rdi35 = reinterpret_cast<struct s22*>(rdi34 + 1);
                rsi36 = reinterpret_cast<struct s23*>(&rsi32->f4);
                r9_37 = rdx31 + r13_25;
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi35->f0 = rsi36->f0;
                rsi32 = reinterpret_cast<struct s21*>(&rsi36->f4);
                rdi34 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi34 == 0x7d0));
            ++rcx30;
        } while (rcx30 != 0x7d0);
        ++rax27;
    } while (rax27 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax38) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi34 = rsi32->f0;
            rdi39 = reinterpret_cast<struct s22*>(rdi34 + 1);
            rsi40 = reinterpret_cast<struct s23*>(&rsi32->f4);
            rdi39->f0 = rsi40->f0;
            rdi34 = &rdi39->f4;
            rsi32 = reinterpret_cast<struct s21*>(&rsi40->f4);
            ++rax38;
        } while (rax38 != 0x7d0);
        ++rbp26;
    } while (rbp26 != 0x7d0);
    fun_477(r13_25);
    rsi41 = rbx42;
    rdx43 = r15_28;
    rcx44 = r12_29;
    r14_45 = v12;
    r8_46 = r14_45;
    fun_492(0x7d0, rsi41, rdx43, rcx44, r8_46, r9_37, v3, v12);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && **v47 == fputc) {
        rax48 = g4de;
        r13_49 = *rax48;
        rcx50 = r13_49;
        fun_4fa(0x4e8, 22, 1, rcx50, r8_46, r9_37, v3);
        rsi51 = reinterpret_cast<int32_t*>(0x501);
        *reinterpret_cast<int32_t*>(&r14_52) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_52) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi53 = r13_49;
        fun_515();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_52) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi53) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi53) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi51 = r13_49;
                fun_55d();
            }
            *rdi53 = *rsi51;
            rdi53 = r13_49;
            rsi51 = reinterpret_cast<int32_t*>(0x51c);
            fun_533();
            ++r14_52;
        } while (r14_52 != 0x7d0);
        fun_577(r13_49, 0x566, 0x56d, rcx50, r8_46, r9_37, v3);
        *reinterpret_cast<int32_t*>(&rsi41) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi41) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx43) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx43) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx44 = r13_49;
        fun_590(0x57e, 22, 1, rcx44, r8_46, r9_37, v3);
        r14_45 = v12;
    }
    fun_4ae(rbx54, rsi41, rdx43, rcx44, r8_46, r9_37, v3);
    fun_4b6(r15_28, rsi41, rdx43, rcx44, r8_46, r9_37, v3);
    fun_4be(r12_29, rsi41, rdx43, rcx44, r8_46, r9_37, v3);
    fun_4c6(r14_45, rsi41, rdx43, rcx44, r8_46, r9_37, v3);
    goto v55;
}

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

signed char** fun_23c(struct s7* rdi, struct s8* rsi) {
    signed char** v3;
    uint64_t r15_4;
    struct s24* rdi5;
    struct s25* rsi6;
    struct s26* rdi7;
    struct s27* rsi8;
    int32_t* rdi9;
    int32_t* rsi10;
    int64_t rdx11;
    int64_t* r12_12;
    int64_t* rax13;
    int64_t rcx14;
    signed char** v15;
    signed char** rax16;
    int32_t* v17;
    int32_t* r12_18;
    int64_t v19;
    int64_t r14_20;
    int64_t r13_21;
    int32_t* rsi22;
    uint64_t r12_23;
    int32_t* rdi24;
    int64_t rax25;
    struct s28* rdi26;
    int64_t rbx27;
    int64_t* rbx28;
    int64_t rax29;
    int64_t r13_30;
    int64_t rbp31;
    int64_t rax32;
    int64_t r15_33;
    int32_t* r12_34;
    int64_t rcx35;
    int64_t rdx36;
    struct s29* rsi37;
    int32_t* rbx38;
    int32_t* rdi39;
    struct s30* rdi40;
    struct s31* rsi41;
    int64_t r9_42;
    int64_t rax43;
    struct s30* rdi44;
    struct s31* rsi45;
    int32_t* rsi46;
    int32_t* rbx47;
    int64_t rdx48;
    int32_t* rcx49;
    signed char** r14_50;
    signed char** r8_51;
    signed char** v52;
    int32_t** rax53;
    int32_t* r13_54;
    int32_t* rcx55;
    int32_t* rsi56;
    int64_t r14_57;
    int32_t* rdi58;
    int32_t* rbx59;
    int64_t v60;

    v3 = reinterpret_cast<signed char**>(__return_address());
    *reinterpret_cast<int32_t*>(&r15_4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_4) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi5 = reinterpret_cast<struct s24*>(&rdi->f4);
    rsi6 = reinterpret_cast<struct s25*>(&rsi->f4);
    rdi5->f0 = rsi6->f0;
    rdi7 = reinterpret_cast<struct s26*>(&rdi5->f4);
    rsi8 = reinterpret_cast<struct s27*>(&rsi6->f4);
    rdi7->f0 = rsi8->f0;
    rdi9 = &rdi7->f4;
    rsi10 = &rsi8->f4;
    *reinterpret_cast<int32_t*>(&rdx11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        r12_12[rdx11] = reinterpret_cast<int64_t>(fputc);
        rax13[rdx11] = reinterpret_cast<int64_t>(fputc);
        rcx14 = rdx11 + 1;
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, ecx");
        __asm__("divsd xmm2, xmm3");
        __asm__("mulsd xmm2, xmm0");
        __asm__("addsd xmm2, xmm1");
        *rdi9 = *rsi10;
        ++rdi9;
        ++rsi10;
        rdx11 = rcx14;
    } while (rcx14 != 0x7d0);
    v15 = rax16;
    v17 = r12_18;
    v19 = r14_20;
    *reinterpret_cast<int32_t*>(&r13_21) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_21) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi9 = g7fffffff8;
    rsi22 = reinterpret_cast<int32_t*>(0x7fffffffc);
    do {
        r12_23 = r15_4;
        rdi24 = reinterpret_cast<int32_t*>(r15_4 * 0x3e88 + 8);
        *reinterpret_cast<int32_t*>(&rax25) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, ecx");
            __asm__("divsd xmm0, xmm3");
            __asm__("addsd xmm0, xmm1");
            *rdi24 = *rsi22;
            ++rdi24;
            ++rsi22;
            ++rax25;
        } while (rax25 != r13_21);
        r15_4 = r12_23 + 1;
        if (r12_23 <= 0x7ce) {
            rdi26 = reinterpret_cast<struct s28*>(reinterpret_cast<uint64_t>(rdi24) + rbx27);
            fun_357();
            rdi26->f0 = fputc;
            rdi26->f4 = g7fffffff8;
            rsi22 = reinterpret_cast<int32_t*>(0x7fffffffc);
        }
        (rbx28 + r12_23 * 0x7d0)[r12_23] = 0x3ff0000000000000;
        ++r13_21;
    } while (r15_4 != 0x7d0);
    rax29 = fun_385(0x3d0900, 8);
    r13_30 = rax29;
    *reinterpret_cast<int32_t*>(&rbp31) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp31) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_399(rax29);
    *reinterpret_cast<int32_t*>(&rax32) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax32) + 4) = reinterpret_cast<int32_t>(fputc);
    r15_33 = v19;
    r12_34 = v17;
    do {
        *reinterpret_cast<int32_t*>(&rcx35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx36 = rcx35 * 0x3e80;
            rsi37 = reinterpret_cast<struct s29*>(reinterpret_cast<int64_t>(rbx38) + rdx36 + rax32 * 8);
            *reinterpret_cast<int32_t*>(&rdi39) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi39 = rsi37->f0;
                rdi40 = reinterpret_cast<struct s30*>(rdi39 + 1);
                rsi41 = reinterpret_cast<struct s31*>(&rsi37->f4);
                r9_42 = rdx36 + r13_30;
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi40->f0 = rsi41->f0;
                rsi37 = reinterpret_cast<struct s29*>(&rsi41->f4);
                rdi39 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi39 == 0x7d0));
            ++rcx35;
        } while (rcx35 != 0x7d0);
        ++rax32;
    } while (rax32 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax43) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax43) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi39 = rsi37->f0;
            rdi44 = reinterpret_cast<struct s30*>(rdi39 + 1);
            rsi45 = reinterpret_cast<struct s31*>(&rsi37->f4);
            rdi44->f0 = rsi45->f0;
            rdi39 = &rdi44->f4;
            rsi37 = reinterpret_cast<struct s29*>(&rsi45->f4);
            ++rax43;
        } while (rax43 != 0x7d0);
        ++rbp31;
    } while (rbp31 != 0x7d0);
    fun_477(r13_30);
    rsi46 = rbx47;
    rdx48 = r15_33;
    rcx49 = r12_34;
    r14_50 = v15;
    r8_51 = r14_50;
    fun_492(0x7d0, rsi46, rdx48, rcx49, r8_51, r9_42, v3, v15);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && **v52 == fputc) {
        rax53 = g4de;
        r13_54 = *rax53;
        rcx55 = r13_54;
        fun_4fa(0x4e8, 22, 1, rcx55, r8_51, r9_42, v3);
        rsi56 = reinterpret_cast<int32_t*>(0x501);
        *reinterpret_cast<int32_t*>(&r14_57) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_57) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi58 = r13_54;
        fun_515();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_57) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi58) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi58) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi56 = r13_54;
                fun_55d();
            }
            *rdi58 = *rsi56;
            rdi58 = r13_54;
            rsi56 = reinterpret_cast<int32_t*>(0x51c);
            fun_533();
            ++r14_57;
        } while (r14_57 != 0x7d0);
        fun_577(r13_54, 0x566, 0x56d, rcx55, r8_51, r9_42, v3);
        *reinterpret_cast<int32_t*>(&rsi46) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi46) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx48) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx48) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx49 = r13_54;
        fun_590(0x57e, 22, 1, rcx49, r8_51, r9_42, v3);
        r14_50 = v15;
    }
    fun_4ae(rbx59, rsi46, rdx48, rcx49, r8_51, r9_42, v3);
    fun_4b6(r15_33, rsi46, rdx48, rcx49, r8_51, r9_42, v3);
    fun_4be(r12_34, rsi46, rdx48, rcx49, r8_51, r9_42, v3);
    fun_4c6(r14_50, rsi46, rdx48, rcx49, r8_51, r9_42, v3);
    goto v60;
}

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

void fputc(int32_t edi) {
    struct s32* rdi1;
    int64_t rax2;
    int64_t r9_3;
    struct s33* rsi4;
    struct s34* rdi5;
    struct s35* rsi6;
    int64_t r10_7;
    int64_t rdx8;
    int64_t r9_9;
    int64_t r11_10;
    struct s34* rdi11;
    struct s35* rsi12;
    int1_t less_or_equal13;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rax2) = *reinterpret_cast<int32_t*>(&rdi1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi1) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi1) == fputc)) {
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi1) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi1) == fputc))) {
            *reinterpret_cast<int32_t*>(&r9_3) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_3) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi1->f0 = rsi4->f0;
                rdi5 = reinterpret_cast<struct s34*>(&rdi1->f4);
                rsi6 = reinterpret_cast<struct s35*>(&rsi4->f4);
                if (r9_3 != fputc) {
                    *reinterpret_cast<int32_t*>(&r10_7) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_7) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi5->f0 = rsi6->f0;
                        rdi5 = reinterpret_cast<struct s34*>(&rdi5->f4);
                        rsi6 = reinterpret_cast<struct s35*>(&rsi6->f4);
                        __asm__("mulsd xmm1, [r8+r10*8]");
                        __asm__("subsd xmm0, xmm1");
                        ++r10_7;
                    } while (r10_7 != r9_3);
                }
                rdi5->f0 = rsi6->f0;
                rdi1 = reinterpret_cast<struct s32*>(&rdi5->f4);
                rsi4 = reinterpret_cast<struct s33*>(&rsi6->f4);
                ++r9_3;
            } while (r9_3 != rax2);
        }
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi1) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi1) == fputc))) {
            rdx8 = *reinterpret_cast<int32_t*>(&rdi1);
            r9_9 = rdx8;
            do {
                r11_10 = r9_9;
                --r9_9;
                rdi1->f0 = rsi4->f0;
                rdi11 = reinterpret_cast<struct s34*>(&rdi1->f4);
                rsi12 = reinterpret_cast<struct s35*>(&rsi4->f4);
                if (rax2 < rdx8) {
                    do {
                        rdi11->f0 = rsi12->f0;
                        rdi11 = reinterpret_cast<struct s34*>(&rdi11->f4);
                        rsi12 = reinterpret_cast<struct s35*>(&rsi12->f4);
                        __asm__("mulsd xmm1, [rcx+r11*8]");
                        __asm__("subsd xmm0, xmm1");
                        ++r11_10;
                    } while (*reinterpret_cast<int32_t*>(&r11_10) != *reinterpret_cast<int32_t*>(&rdi11));
                }
                __asm__("divsd xmm0, [r11+r10*8]");
                rdi11->f0 = rsi12->f0;
                rdi1 = reinterpret_cast<struct s32*>(&rdi11->f4);
                rsi4 = reinterpret_cast<struct s33*>(&rsi12->f4);
                less_or_equal13 = rax2 <= 1;
                --rax2;
            } while (!less_or_equal13);
        }
        return;
    }
}

void fun_c8() {
    return;
}

struct s36 {
    int32_t f0;
    int32_t f4;
};

struct s37 {
    int32_t f0;
    int32_t f4;
};

struct s38 {
    signed char[105] pad105;
    int32_t f69;
};

struct s39 {
    signed char[105] pad105;
    int32_t f69;
};

void fun_d4(struct s36* rdi, struct s37* rsi) {
    struct s38* rbp3;
    struct s39* rbp4;
    int32_t* rdi5;
    int32_t* rsi6;
    int64_t r9_7;
    int64_t rbx8;
    int64_t r9_9;

    rbp3->f69 = rbp4->f69 - 1;
    __asm__("fld dword [rax+0x4900003e]");
    rdi->f0 = rsi->f0;
    rdi5 = &rdi->f4;
    rsi6 = &rsi->f4;
    if (r9_7 != fputc) {
        *reinterpret_cast<int32_t*>(&rbx8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx8) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi5 = *rsi6;
            ++rdi5;
            ++rsi6;
            __asm__("mulsd xmm1, [r14+r10*8]");
            __asm__("subsd xmm0, xmm1");
            ++rbx8;
        } while (rbx8 != r9_9);
    }
}

void fun_ce() {
    return;
}

void submain(int32_t edi, int64_t rsi) {
    fun_206(0x3d0900, 8);
}

