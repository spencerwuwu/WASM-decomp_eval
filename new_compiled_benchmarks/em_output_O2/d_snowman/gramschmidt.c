
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_68f(int64_t rdi, int32_t* rsi, uint64_t rdx, int32_t* rcx, uint64_t r8, struct s0* r9, int64_t a7);

void fun_697(int64_t rdi, int32_t* rsi, uint64_t rdx, int32_t* rcx, uint64_t r8, struct s0* r9, int64_t a7);

void fun_685(int64_t rdi, int32_t* rsi, uint64_t rdx, int32_t* rcx, uint64_t r8, struct s0* r9, int64_t a7) {
    int64_t r15_8;
    int64_t v9;

    fun_68f(a7, rsi, rdx, rcx, r8, r9, __return_address());
    fun_697(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_73f();

void fputc(int32_t edi, int64_t rsi);

void fun_772(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, uint64_t r8, struct s0* r9, int64_t a7);

void fun_78a();

void fun_7bc();

void fun_7dd();

void fun_80d(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, uint64_t r8, struct s0* r9, int64_t a7);

void fun_826(int64_t rdi, int32_t* rsi, uint64_t rdx, int32_t* rcx, uint64_t r8, struct s0* r9, int64_t a7);

void fun_71c() {
    int64_t v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r12_4;
    int64_t r13_5;
    int64_t r14_6;
    int64_t rbp7;
    int32_t* r12_8;
    int64_t r14_9;
    int32_t* r12_10;
    int32_t* rcx11;
    uint64_t r8_12;
    struct s0* r9_13;
    int32_t* rsi14;
    int32_t* rdi15;
    int32_t* r12_16;
    int64_t rbp17;
    int64_t r13_18;
    int32_t* r12_19;
    int32_t* r12_20;
    int32_t* r12_21;
    int32_t* rcx22;
    uint64_t r8_23;
    struct s0* r9_24;
    int32_t* r12_25;
    uint64_t r8_26;
    struct s0* r9_27;
    int64_t rbx28;
    uint64_t r8_29;
    struct s0* r9_30;
    int64_t v31;
    uint64_t r8_32;
    struct s0* r9_33;
    int64_t r15_34;
    uint64_t r8_35;
    struct s0* r9_36;
    int64_t v37;

    while (1) {
        v1 = reinterpret_cast<int64_t>(__return_address());
        *rdi2 = *rsi3;
        rdi2 = r12_4;
        rsi3 = reinterpret_cast<int32_t*>(0x738);
        fun_73f();
        ++r13_5;
        if (r13_5 == 0x4b0) {
            ++r14_6;
            if (r14_6 == 0x4b0) 
                break;
            rbp7 = r14_6 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_5 + rbp7) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = r12_8;
        fun_71c();
    }
    *reinterpret_cast<int32_t*>(&r14_9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_772(r12_10, 0x75e, 0x765, rcx11, r8_12, r9_13, v1);
    rsi14 = reinterpret_cast<int32_t*>(0x779);
    rdi15 = r12_16;
    fun_78a();
    do {
        rbp17 = r14_9 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_18) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_18 + rbp17) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi15) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi14 = r12_19;
                fun_7bc();
            }
            *rdi15 = *rsi14;
            rdi15 = r12_20;
            rsi14 = reinterpret_cast<int32_t*>(0x7d6);
            fun_7dd();
            ++r13_18;
        } while (r13_18 != 0x4b0);
        ++r14_9;
    } while (r14_9 != 0x3e8);
    fun_80d(r12_21, 0x7fc, 0x803, rcx22, r8_23, r9_24, v1);
    fun_826(0x814, 22, 1, r12_25, r8_26, r9_27, v1);
    fun_685(rbx28, 22, 1, r12_25, r8_29, r9_30, v1);
    fun_68f(v31, 22, 1, r12_25, r8_32, r9_33, v1);
    fun_697(r15_34, 22, 1, r12_25, r8_35, r9_36, v1);
    goto v37;
}

void fun_73f() {
    int64_t v1;
    int64_t r13_2;
    int64_t r14_3;
    int64_t rbp4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* r12_7;
    int32_t* r12_8;
    int64_t r14_9;
    int32_t* r12_10;
    int32_t* rcx11;
    uint64_t r8_12;
    struct s0* r9_13;
    int32_t* rsi14;
    int32_t* rdi15;
    int32_t* r12_16;
    int64_t rbp17;
    int64_t r13_18;
    int32_t* r12_19;
    int32_t* r12_20;
    int32_t* r12_21;
    int32_t* rcx22;
    uint64_t r8_23;
    struct s0* r9_24;
    int32_t* r12_25;
    uint64_t r8_26;
    struct s0* r9_27;
    int64_t rbx28;
    uint64_t r8_29;
    struct s0* r9_30;
    int64_t v31;
    uint64_t r8_32;
    struct s0* r9_33;
    int64_t r15_34;
    uint64_t r8_35;
    struct s0* r9_36;
    int64_t v37;

    while (1) {
        v1 = reinterpret_cast<int64_t>(__return_address());
        ++r13_2;
        if (r13_2 == 0x4b0) {
            ++r14_3;
            if (r14_3 == 0x4b0) 
                break;
            rbp4 = r14_3 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_2) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_2) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_2 + rbp4) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = r12_7;
            fun_71c();
        }
        *rdi5 = *rsi6;
        rdi5 = r12_8;
        rsi6 = reinterpret_cast<int32_t*>(0x738);
        fun_73f();
    }
    *reinterpret_cast<int32_t*>(&r14_9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_772(r12_10, 0x75e, 0x765, rcx11, r8_12, r9_13, v1);
    rsi14 = reinterpret_cast<int32_t*>(0x779);
    rdi15 = r12_16;
    fun_78a();
    do {
        rbp17 = r14_9 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_18) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_18 + rbp17) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi15) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi14 = r12_19;
                fun_7bc();
            }
            *rdi15 = *rsi14;
            rdi15 = r12_20;
            rsi14 = reinterpret_cast<int32_t*>(0x7d6);
            fun_7dd();
            ++r13_18;
        } while (r13_18 != 0x4b0);
        ++r14_9;
    } while (r14_9 != 0x3e8);
    fun_80d(r12_21, 0x7fc, 0x803, rcx22, r8_23, r9_24, v1);
    fun_826(0x814, 22, 1, r12_25, r8_26, r9_27, v1);
    fun_685(rbx28, 22, 1, r12_25, r8_29, r9_30, v1);
    fun_68f(v31, 22, 1, r12_25, r8_32, r9_33, v1);
    fun_697(r15_34, 22, 1, r12_25, r8_35, r9_36, v1);
    goto v37;
}

void fun_772(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, uint64_t r8, struct s0* r9, int64_t a7) {
    int64_t v8;
    int32_t* rsi9;
    int32_t* rdi10;
    int32_t* r12_11;
    int64_t rbp12;
    int64_t r14_13;
    int64_t r13_14;
    int32_t* r12_15;
    int32_t* r12_16;
    int32_t* r12_17;
    int32_t* r12_18;
    int64_t rbx19;
    int64_t r15_20;
    int64_t v21;

    v8 = reinterpret_cast<int64_t>(__return_address());
    rsi9 = reinterpret_cast<int32_t*>(0x779);
    rdi10 = r12_11;
    fun_78a();
    do {
        rbp12 = r14_13 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_14 + rbp12) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi10) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi9 = r12_15;
                fun_7bc();
            }
            *rdi10 = *rsi9;
            rdi10 = r12_16;
            rsi9 = reinterpret_cast<int32_t*>(0x7d6);
            fun_7dd();
            ++r13_14;
        } while (r13_14 != 0x4b0);
        ++r14_13;
    } while (r14_13 != 0x3e8);
    fun_80d(r12_17, 0x7fc, 0x803, rcx, r8, r9, v8);
    fun_826(0x814, 22, 1, r12_18, r8, r9, v8);
    fun_685(rbx19, 22, 1, r12_18, r8, r9, v8);
    fun_68f(a7, 22, 1, r12_18, r8, r9, v8);
    fun_697(r15_20, 22, 1, r12_18, r8, r9, v8);
    goto v21;
}

void fun_7bc() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r12_3;
    int64_t r13_4;
    int64_t r14_5;
    int64_t rbp6;
    int32_t* r12_7;
    int32_t* r12_8;
    int32_t* rcx9;
    uint64_t r8_10;
    struct s0* r9_11;
    int32_t* r12_12;
    uint64_t r8_13;
    struct s0* r9_14;
    int64_t rbx15;
    uint64_t r8_16;
    struct s0* r9_17;
    int64_t v18;
    uint64_t r8_19;
    struct s0* r9_20;
    int64_t r15_21;
    uint64_t r8_22;
    struct s0* r9_23;
    int64_t v24;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r12_3;
        rsi2 = reinterpret_cast<int32_t*>(0x7d6);
        fun_7dd();
        ++r13_4;
        if (r13_4 == 0x4b0) {
            ++r14_5;
            if (r14_5 == 0x3e8) 
                break;
            rbp6 = r14_5 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_4 + rbp6) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r12_7;
        fun_7bc();
    }
    fun_80d(r12_8, 0x7fc, 0x803, rcx9, r8_10, r9_11, __return_address());
    fun_826(0x814, 22, 1, r12_12, r8_13, r9_14, __return_address());
    fun_685(rbx15, 22, 1, r12_12, r8_16, r9_17, __return_address());
    fun_68f(v18, 22, 1, r12_12, r8_19, r9_20, __return_address());
    fun_697(r15_21, 22, 1, r12_12, r8_22, r9_23, __return_address());
    goto v24;
}

void fun_7dd() {
    int64_t r13_1;
    int64_t r14_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r12_6;
    int32_t* r12_7;
    int32_t* r12_8;
    int32_t* rcx9;
    uint64_t r8_10;
    struct s0* r9_11;
    int32_t* r12_12;
    uint64_t r8_13;
    struct s0* r9_14;
    int64_t rbx15;
    uint64_t r8_16;
    struct s0* r9_17;
    int64_t v18;
    uint64_t r8_19;
    struct s0* r9_20;
    int64_t r15_21;
    uint64_t r8_22;
    struct s0* r9_23;
    int64_t v24;

    while (1) {
        ++r13_1;
        if (r13_1 == 0x4b0) {
            ++r14_2;
            if (r14_2 == 0x3e8) 
                break;
            rbp3 = r14_2 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_1 + rbp3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r12_6;
            fun_7bc();
        }
        *rdi4 = *rsi5;
        rdi4 = r12_7;
        rsi5 = reinterpret_cast<int32_t*>(0x7d6);
        fun_7dd();
    }
    fun_80d(r12_8, 0x7fc, 0x803, rcx9, r8_10, r9_11, __return_address());
    fun_826(0x814, 22, 1, r12_12, r8_13, r9_14, __return_address());
    fun_685(rbx15, 22, 1, r12_12, r8_16, r9_17, __return_address());
    fun_68f(v18, 22, 1, r12_12, r8_19, r9_20, __return_address());
    fun_697(r15_21, 22, 1, r12_12, r8_22, r9_23, __return_address());
    goto v24;
}

void fun_80d(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, uint64_t r8, struct s0* r9, int64_t a7) {
    int32_t* r12_8;
    int64_t rbx9;
    int64_t r15_10;
    int64_t v11;

    fun_826(0x814, 22, 1, r12_8, r8, r9, __return_address());
    fun_685(rbx9, 22, 1, r12_8, r8, r9, __return_address());
    fun_68f(a7, 22, 1, r12_8, r8, r9, __return_address());
    fun_697(r15_10, 22, 1, r12_8, r8, r9, __return_address());
    goto v11;
}

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f2;
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

void fun_33f();

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
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

int32_t fputc = 0x41574155;

struct s14 {
    int32_t f0;
    int32_t f4;
};

int32_t** g6af = reinterpret_cast<int32_t**>(0x3d8d48208b4c);

void fun_6cb(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, uint64_t r8, struct s0* r9, int64_t a7);

void fun_6e6();

void fun_21f(struct s1* rdi) {
    int64_t v2;
    uint64_t v3;
    int32_t* v4;
    int32_t* r15_5;
    int32_t* r12_6;
    struct s0* v7;
    void* r15_8;
    struct s0* r13_9;
    int32_t* rbx10;
    int32_t* r14_11;
    void* rbx12;
    void* rcx13;
    struct s0* r9_14;
    int32_t* v15;
    void* v16;
    int32_t* r10_17;
    void* rbp18;
    void* v19;
    uint64_t rax20;
    int32_t* rsi21;
    struct s2* rdi22;
    int32_t* rsi23;
    struct s3* rdi24;
    int32_t* rsi25;
    struct s4* rdi26;
    int32_t* rsi27;
    struct s5* rdi28;
    int32_t* rsi29;
    int32_t* rax30;
    int32_t* v31;
    int32_t* rsi32;
    struct s0* rdi33;
    uint64_t r8_34;
    uint64_t rdx35;
    int32_t* rsi36;
    int32_t* rbx37;
    struct s6* rdi38;
    int64_t r15_39;
    int32_t* rdi40;
    struct s7* rsi41;
    void* rbx42;
    struct s8* rsi43;
    struct s9* rdi44;
    void* r15_45;
    uint64_t rcx46;
    int32_t* rsi47;
    struct s10* rdi48;
    int32_t* rbx49;
    uint64_t rdx50;
    int64_t rbx51;
    void* r15_52;
    int64_t r15_53;
    int32_t* rcx54;
    int32_t* v55;
    struct s0* rdi56;
    void* rbx57;
    int32_t* r8_58;
    void* rbx59;
    int32_t* r9_60;
    void* v61;
    struct s0* r10_62;
    int64_t r11_63;
    struct s11* rdi64;
    int32_t* rsi65;
    struct s12* rdi66;
    int32_t* rsi67;
    struct s13* rdi68;
    int32_t* rsi69;
    struct s2* rdi70;
    int32_t* rsi71;
    struct s3* rdi72;
    int32_t* rsi73;
    struct s4* rdi74;
    int32_t* rsi75;
    void* r8_76;
    int32_t* rbx77;
    struct s5* rdi78;
    int32_t* rsi79;
    int64_t r15_80;
    struct s1* rdi81;
    int32_t* rsi82;
    void* r8_83;
    int32_t* rbx84;
    int32_t* rdi85;
    int32_t* rsi86;
    int64_t r15_87;
    struct s14* rdi88;
    void* r15_89;
    int32_t v90;
    signed char** v91;
    int32_t** rax92;
    int32_t* r12_93;
    int32_t* rcx94;
    int32_t* rsi95;
    int64_t r14_96;
    int32_t* rdi97;
    int64_t rbp98;
    int64_t r13_99;
    int64_t r14_100;
    int32_t* rsi101;
    int32_t* rdi102;
    int64_t rbp103;
    int64_t r13_104;
    int64_t rbx105;
    int64_t v106;
    int64_t r15_107;
    int64_t v108;

    v2 = reinterpret_cast<int64_t>(__return_address());
    v3 = 1;
    __asm__("pxor xmm3, xmm3");
    while (1) {
        v4 = r15_5 + reinterpret_cast<uint64_t>(r12_6) * 2;
        v7 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(r15_8) + reinterpret_cast<uint64_t>(r12_6) * 8 + 0x925688);
        r13_9 = reinterpret_cast<struct s0*>(rbx10 + reinterpret_cast<uint64_t>(r12_6) * 2);
        r14_11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx12) + reinterpret_cast<uint64_t>(r12_6) * 8 + 0x925688);
        rcx13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_6) * 0x2588);
        r9_14 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(v15) + reinterpret_cast<uint64_t>(rcx13));
        v16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx13) + 8);
        r10_17 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v15) + reinterpret_cast<uint64_t>(rcx13) + 8);
        rbp18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_6) * 8 + 8);
        v19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx13) + 16);
        *reinterpret_cast<int32_t*>(&rax20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorpd xmm0, xmm0");
        do {
            rdi->f0 = *rsi21;
            rdi22 = reinterpret_cast<struct s2*>(&rdi->f4);
            rsi23 = rsi21 + 1;
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm1, xmm0");
            rdi22->f0 = *rsi23;
            rdi24 = reinterpret_cast<struct s3*>(&rdi22->f2);
            rsi25 = rsi23 + 1;
            __asm__("mulsd xmm0, xmm0");
            __asm__("addsd xmm0, xmm1");
            rdi24->f0 = *rsi25;
            rdi26 = reinterpret_cast<struct s4*>(&rdi24->f4);
            rsi27 = rsi25 + 1;
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm1, xmm0");
            rdi26->f0 = *rsi27;
            rdi28 = reinterpret_cast<struct s5*>(&rdi26->f4);
            rsi29 = rsi27 + 1;
            __asm__("mulsd xmm2, xmm2");
            __asm__("addsd xmm2, xmm1");
            rdi28->f0 = *rsi29;
            rdi = reinterpret_cast<struct s1*>(&rdi28->f4);
            rsi21 = rsi29 + 1;
            __asm__("mulsd xmm0, xmm0");
            __asm__("addsd xmm0, xmm2");
            rax20 = rax20 + 5;
        } while (rax20 != 0x3e8);
        __asm__("ucomisd xmm0, xmm3");
        if (rax20 < 0x3e8) {
            fun_33f();
            r10_17 = r10_17;
            r9_14 = r9_14;
            __asm__("xorpd xmm3, xmm3");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rax30 = v31 + reinterpret_cast<uint64_t>(r12_6) * 0x960;
        rdi->f0 = *rsi21;
        rsi32 = v4;
        rdi33 = v7;
        *reinterpret_cast<unsigned char*>(&r8_34) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_9) < reinterpret_cast<uint64_t>(rdi33));
        *reinterpret_cast<unsigned char*>(&rdi33) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_14) < reinterpret_cast<uint64_t>(rdi33));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi32) < reinterpret_cast<uint64_t>(r14_11))) & *reinterpret_cast<unsigned char*>(&r8_34)) == fputc)) {
            *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_410_28;
        } else {
            *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<unsigned char*>(&rsi32) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi32) < reinterpret_cast<uint64_t>(r10_17))) & *reinterpret_cast<unsigned char*>(&rdi33));
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rsi32) == fputc)) {
                do {
                    addr_410_28:
                    rsi36 = reinterpret_cast<int32_t*>(rdx35 * 0x2580);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx37) + reinterpret_cast<uint64_t>(rsi36)) = *rsi36;
                    __asm__("divsd xmm0, [rcx]");
                    rdi38 = reinterpret_cast<struct s6*>((rdx35 | 1) * 0x2580);
                    rdi38->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi36 + 1) + r15_39);
                    rdi40 = &rdi38->f4;
                    rsi41 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rbx42) + reinterpret_cast<uint64_t>(rdi40));
                    *rdi40 = rsi41->f0;
                    rsi43 = reinterpret_cast<struct s8*>(&rsi41->f4);
                    __asm__("divsd xmm0, [rcx]");
                    rdi44 = reinterpret_cast<struct s9*>(reinterpret_cast<uint64_t>(rdi40 + 1) + reinterpret_cast<int64_t>(r15_45));
                    rdi44->f0 = rsi43->f0;
                    rdi = reinterpret_cast<struct s1*>(&rdi44->f4);
                    rsi21 = &rsi43->f4;
                    rdx35 = rdx35 + 2;
                } while (rdx35 != 0x3e8);
            } else {
                rdi33->f0 = *rsi32;
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rcx46) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx46) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi47 = reinterpret_cast<int32_t*>(rcx46 * 0x2580);
                    rdi48 = reinterpret_cast<struct s10*>(reinterpret_cast<int64_t>(rbx49) + reinterpret_cast<uint64_t>(rsi47));
                    rdx50 = (rcx46 | 1) * 0x2580;
                    r8_34 = rbx51 + rdx50;
                    rdi48->f0 = *rsi47;
                    rdi = reinterpret_cast<struct s1*>(&rdi48->f4);
                    __asm__("movhpd xmm1, [r8+r12*8]");
                    __asm__("divpd xmm1, xmm0");
                    rsi21 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi47 + 1) + reinterpret_cast<int64_t>(r15_52));
                    rdx35 = rdx50 + r15_53;
                    __asm__("movlpd [rsi+r12*8], xmm1");
                    __asm__("movhpd [rdx+r12*8], xmm1");
                    rcx46 = rcx46 + 2;
                } while (rcx46 != 0x3e8);
            }
            rcx54 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_6) + 1);
            v55 = rcx54;
            if (reinterpret_cast<uint64_t>(r12_6) <= 0x4ae) {
                *reinterpret_cast<int32_t*>(&rcx54) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx54) + 4) = reinterpret_cast<int32_t>(fputc);
                rdx35 = v3;
                do {
                    rdi56 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rcx54) * 8 + reinterpret_cast<uint64_t>(rbp18) + reinterpret_cast<int64_t>(rbx57));
                    r8_58 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx54) * 8 + 0x925688 + reinterpret_cast<uint64_t>(rbp18) + reinterpret_cast<int64_t>(rbx59));
                    r9_60 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(v16) + reinterpret_cast<uint64_t>(rcx54) * 8 + reinterpret_cast<int64_t>(v61));
                    r10_62 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(v19) + reinterpret_cast<uint64_t>(rcx54) * 8 + reinterpret_cast<int64_t>(v61));
                    rsi21 = rax30 + rdx35 * 2;
                    rax30[rdx35 * 2] = reinterpret_cast<int32_t>(fputc);
                    __asm__("xorpd xmm0, xmm0");
                    *reinterpret_cast<int32_t*>(&r11_63) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_63) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi56->f0 = *rsi21;
                        rdi64 = reinterpret_cast<struct s11*>(&rdi56->f4);
                        rsi65 = rsi21 + 1;
                        __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
                        __asm__("addsd xmm1, xmm0");
                        rdi64->f0 = *rsi65;
                        rdi66 = reinterpret_cast<struct s12*>(&rdi64->f4);
                        rsi67 = rsi65 + 1;
                        rdi66->f0 = *rsi67;
                        rdi68 = reinterpret_cast<struct s13*>(&rdi66->f4);
                        rsi69 = rsi67 + 1;
                        __asm__("mulsd xmm0, [r14+rdx*8]");
                        __asm__("addsd xmm0, xmm1");
                        rdi68->f0 = *rsi69;
                        rdi56 = reinterpret_cast<struct s0*>(&rdi68->f4);
                        rsi21 = rsi69 + 1;
                        r11_63 = r11_63 + 2;
                    } while (r11_63 != 0x3e8);
                    if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi56) < reinterpret_cast<uint64_t>(v7))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(v4) < reinterpret_cast<uint64_t>(r8_58)))) == fputc)) {
                        *reinterpret_cast<int32_t*>(&rdi) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi) + 4) = reinterpret_cast<int32_t>(fputc);
                        goto addr_600_69;
                    }
                    *reinterpret_cast<int32_t*>(&rdi) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi) + 4) = reinterpret_cast<int32_t>(fputc);
                    if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi56) < reinterpret_cast<uint64_t>(r10_62))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_60) < reinterpret_cast<uint64_t>(r8_58)))) == fputc)) {
                        do {
                            addr_600_69:
                            rdi->f0 = *rsi21;
                            rdi70 = reinterpret_cast<struct s2*>(&rdi->f4);
                            rsi71 = rsi21 + 1;
                            __asm__("mulsd xmm0, [rsi]");
                            rdi70->f0 = *rsi71;
                            rdi72 = reinterpret_cast<struct s3*>(&rdi70->f2);
                            rsi73 = rsi71 + 1;
                            __asm__("subsd xmm1, xmm0");
                            rdi72->f0 = *rsi73;
                            rdi74 = reinterpret_cast<struct s4*>(&rdi72->f4);
                            rsi75 = rsi73 + 1;
                            r8_76 = reinterpret_cast<void*>((reinterpret_cast<uint64_t>(rdi74) | 1) * 0x2580);
                            r9_14 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx77) + reinterpret_cast<uint64_t>(r8_76));
                            rdi74->f0 = *rsi75;
                            rdi78 = reinterpret_cast<struct s5*>(&rdi74->f4);
                            rsi79 = rsi75 + 1;
                            r8_34 = reinterpret_cast<uint64_t>(r8_76) + r15_80;
                            rdi78->f0 = *rsi79;
                            rdi81 = reinterpret_cast<struct s1*>(&rdi78->f4);
                            rsi82 = rsi79 + 1;
                            __asm__("mulsd xmm1, [rsi]");
                            __asm__("subsd xmm0, xmm1");
                            rdi81->f0 = *rsi82;
                            rsi21 = rsi82 + 1;
                            rdi = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(&rdi81->f4) + 2);
                        } while (!reinterpret_cast<int1_t>(rdi == 0x3e8));
                    } else {
                        fputc = *rsi21;
                        __asm__("unpcklpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
                        do {
                            r8_83 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi21) * 0x2580);
                            r9_14 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx84) + reinterpret_cast<uint64_t>(r8_83));
                            rdi85 = reinterpret_cast<int32_t*>((reinterpret_cast<uint64_t>(rsi21) | 1) * 0x2580);
                            *rdi85 = *rsi21;
                            rsi86 = rsi21 + 1;
                            __asm__("movhpd xmm1, [r10+rdx*8]");
                            r8_34 = reinterpret_cast<uint64_t>(r8_83) + r15_87;
                            rdi88 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rdi85 + 1) + reinterpret_cast<int64_t>(r15_89));
                            rdi88->f0 = *rsi86;
                            rdi = reinterpret_cast<struct s1*>(&rdi88->f4);
                            __asm__("movhpd xmm2, [rdi+r12*8]");
                            __asm__("mulpd xmm2, xmm0");
                            __asm__("subpd xmm1, xmm2");
                            __asm__("movlpd [r9+rdx*8], xmm1");
                            __asm__("movhpd [r10+rdx*8], xmm1");
                            rsi21 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi86 + 1) + 2);
                        } while (!reinterpret_cast<int1_t>(rsi21 == 0x3e8));
                        continue;
                    }
                    ++rdx35;
                    rcx54 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx54) + 1);
                } while (rdx35 != 0x4b0);
            }
            ++v3;
            r12_6 = v55;
            if (r12_6 == 0x4b0) 
                break;
        }
    }
    if (v90 >= 43 && **v91 == fputc) {
        rax92 = g6af;
        r12_93 = *rax92;
        rcx94 = r12_93;
        fun_6cb(0x6b9, 22, 1, rcx94, r8_34, r9_14, v2);
        rsi95 = reinterpret_cast<int32_t*>(0x6d2);
        *reinterpret_cast<int32_t*>(&r14_96) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_96) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi97 = r12_93;
        fun_6e6();
        do {
            rbp98 = r14_96 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_99) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_99) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_99 + rbp98) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi97) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi97) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi95 = r12_93;
                    fun_71c();
                }
                *rdi97 = *rsi95;
                rdi97 = r12_93;
                rsi95 = reinterpret_cast<int32_t*>(0x738);
                fun_73f();
                ++r13_99;
            } while (r13_99 != 0x4b0);
            ++r14_96;
        } while (r14_96 != 0x4b0);
        *reinterpret_cast<int32_t*>(&r14_100) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_100) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_772(r12_93, 0x75e, 0x765, rcx94, r8_34, r9_14, v2);
        rsi101 = reinterpret_cast<int32_t*>(0x779);
        rdi102 = r12_93;
        fun_78a();
        do {
            rbp103 = r14_100 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_104) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_104) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_104 + rbp103) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi102) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi102) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi101 = r12_93;
                    fun_7bc();
                }
                *rdi102 = *rsi101;
                rdi102 = r12_93;
                rsi101 = reinterpret_cast<int32_t*>(0x7d6);
                fun_7dd();
                ++r13_104;
            } while (r13_104 != 0x4b0);
            ++r14_100;
        } while (r14_100 != 0x3e8);
        fun_80d(r12_93, 0x7fc, 0x803, rcx94, r8_34, r9_14, v2);
        *reinterpret_cast<int32_t*>(&rsi21) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx35) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx54 = r12_93;
        fun_826(0x814, 22, 1, rcx54, r8_34, r9_14, v2);
    }
    fun_685(rbx105, rsi21, rdx35, rcx54, r8_34, r9_14, v2);
    fun_68f(v106, rsi21, rdx35, rcx54, r8_34, r9_14, v2);
    fun_697(r15_107, rsi21, rdx35, rcx54, r8_34, r9_14, v2);
    goto v108;
}

struct s15 {
    int32_t f0;
    int32_t f4;
};

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
    int32_t f2;
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

struct s25 {
    int32_t f0;
    int32_t f4;
};

void fun_33f() {
    int64_t v1;
    int32_t* r10_2;
    struct s0* r9_3;
    int32_t* rax4;
    int32_t* r12_5;
    int32_t* v6;
    struct s15* rdi7;
    int32_t* rsi8;
    int32_t* rsi9;
    int32_t* v10;
    struct s0* rdi11;
    struct s0* v12;
    uint64_t r8_13;
    struct s0* r13_14;
    int32_t* r14_15;
    uint64_t rdx16;
    int32_t* rsi17;
    int32_t* rbx18;
    struct s16* rdi19;
    int64_t r15_20;
    int32_t* rdi21;
    struct s17* rsi22;
    void* rbx23;
    struct s18* rsi24;
    struct s19* rdi25;
    void* r15_26;
    uint64_t rcx27;
    int32_t* rsi28;
    struct s20* rdi29;
    int32_t* rbx30;
    uint64_t rdx31;
    int64_t rbx32;
    void* r15_33;
    int64_t r15_34;
    int32_t* rcx35;
    int32_t* v36;
    uint64_t v37;
    struct s0* rdi38;
    void* rbp39;
    void* rbx40;
    int32_t* r8_41;
    void* rbx42;
    int32_t* r9_43;
    void* v44;
    void* v45;
    struct s0* r10_46;
    void* v47;
    int64_t r11_48;
    struct s11* rdi49;
    int32_t* rsi50;
    struct s12* rdi51;
    int32_t* rsi52;
    struct s13* rdi53;
    int32_t* rsi54;
    struct s21* rdi55;
    int32_t* rsi56;
    struct s22* rdi57;
    int32_t* rsi58;
    struct s23* rdi59;
    int32_t* rsi60;
    void* r8_61;
    int32_t* rbx62;
    struct s24* rdi63;
    int32_t* rsi64;
    int64_t r15_65;
    struct s15* rdi66;
    int32_t* rsi67;
    void* r8_68;
    int32_t* rbx69;
    int32_t* rdi70;
    int32_t* rsi71;
    int64_t r15_72;
    struct s25* rdi73;
    void* r15_74;
    int32_t* r15_75;
    void* r15_76;
    int32_t* rbx77;
    void* rbx78;
    void* rcx79;
    int32_t* v80;
    uint64_t rax81;
    struct s21* rdi82;
    int32_t* rsi83;
    struct s22* rdi84;
    int32_t* rsi85;
    struct s23* rdi86;
    int32_t* rsi87;
    struct s24* rdi88;
    int32_t* rsi89;
    int32_t v90;
    signed char** v91;
    int32_t** rax92;
    int32_t* r12_93;
    int32_t* rcx94;
    int32_t* rsi95;
    int64_t r14_96;
    int32_t* rdi97;
    int64_t rbp98;
    int64_t r13_99;
    int64_t r14_100;
    int32_t* rsi101;
    int32_t* rdi102;
    int64_t rbp103;
    int64_t r13_104;
    int64_t rbx105;
    int64_t v106;
    int64_t r15_107;
    int64_t v108;

    while (1) {
        v1 = reinterpret_cast<int64_t>(__return_address());
        r10_2 = r10_2;
        r9_3 = r9_3;
        __asm__("xorpd xmm3, xmm3");
        while (1) {
            rax4 = v6 + reinterpret_cast<uint64_t>(r12_5) * 0x960;
            rdi7->f0 = *rsi8;
            rsi9 = v10;
            rdi11 = v12;
            *reinterpret_cast<unsigned char*>(&r8_13) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_14) < reinterpret_cast<uint64_t>(rdi11));
            *reinterpret_cast<unsigned char*>(&rdi11) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_3) < reinterpret_cast<uint64_t>(rdi11));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi9) < reinterpret_cast<uint64_t>(r14_15))) & *reinterpret_cast<unsigned char*>(&r8_13)) == fputc)) {
                *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_410_7;
            } else {
                *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<unsigned char*>(&rsi9) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi9) < reinterpret_cast<uint64_t>(r10_2))) & *reinterpret_cast<unsigned char*>(&rdi11));
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rsi9) == fputc)) {
                    do {
                        addr_410_7:
                        rsi17 = reinterpret_cast<int32_t*>(rdx16 * 0x2580);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx18) + reinterpret_cast<uint64_t>(rsi17)) = *rsi17;
                        __asm__("divsd xmm0, [rcx]");
                        rdi19 = reinterpret_cast<struct s16*>((rdx16 | 1) * 0x2580);
                        rdi19->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi17 + 1) + r15_20);
                        rdi21 = &rdi19->f4;
                        rsi22 = reinterpret_cast<struct s17*>(reinterpret_cast<int64_t>(rbx23) + reinterpret_cast<uint64_t>(rdi21));
                        *rdi21 = rsi22->f0;
                        rsi24 = reinterpret_cast<struct s18*>(&rsi22->f4);
                        __asm__("divsd xmm0, [rcx]");
                        rdi25 = reinterpret_cast<struct s19*>(reinterpret_cast<uint64_t>(rdi21 + 1) + reinterpret_cast<int64_t>(r15_26));
                        rdi25->f0 = rsi24->f0;
                        rdi7 = reinterpret_cast<struct s15*>(&rdi25->f4);
                        rsi8 = &rsi24->f4;
                        rdx16 = rdx16 + 2;
                    } while (rdx16 != 0x3e8);
                } else {
                    rdi11->f0 = *rsi9;
                    __asm__("unpcklpd xmm0, xmm0");
                    *reinterpret_cast<int32_t*>(&rcx27) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rsi28 = reinterpret_cast<int32_t*>(rcx27 * 0x2580);
                        rdi29 = reinterpret_cast<struct s20*>(reinterpret_cast<int64_t>(rbx30) + reinterpret_cast<uint64_t>(rsi28));
                        rdx31 = (rcx27 | 1) * 0x2580;
                        r8_13 = rbx32 + rdx31;
                        rdi29->f0 = *rsi28;
                        rdi7 = reinterpret_cast<struct s15*>(&rdi29->f4);
                        __asm__("movhpd xmm1, [r8+r12*8]");
                        __asm__("divpd xmm1, xmm0");
                        rsi8 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi28 + 1) + reinterpret_cast<int64_t>(r15_33));
                        rdx16 = rdx31 + r15_34;
                        __asm__("movlpd [rsi+r12*8], xmm1");
                        __asm__("movhpd [rdx+r12*8], xmm1");
                        rcx27 = rcx27 + 2;
                    } while (rcx27 != 0x3e8);
                }
                rcx35 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_5) + 1);
                v36 = rcx35;
                if (reinterpret_cast<uint64_t>(r12_5) <= 0x4ae) {
                    *reinterpret_cast<int32_t*>(&rcx35) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(fputc);
                    rdx16 = v37;
                    do {
                        rdi38 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rcx35) * 8 + reinterpret_cast<uint64_t>(rbp39) + reinterpret_cast<int64_t>(rbx40));
                        r8_41 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx35) * 8 + 0x925688 + reinterpret_cast<uint64_t>(rbp39) + reinterpret_cast<int64_t>(rbx42));
                        r9_43 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(v44) + reinterpret_cast<uint64_t>(rcx35) * 8 + reinterpret_cast<int64_t>(v45));
                        r10_46 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(v47) + reinterpret_cast<uint64_t>(rcx35) * 8 + reinterpret_cast<int64_t>(v45));
                        rsi8 = rax4 + rdx16 * 2;
                        rax4[rdx16 * 2] = reinterpret_cast<int32_t>(fputc);
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&r11_48) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_48) + 4) = reinterpret_cast<int32_t>(fputc);
                        do {
                            rdi38->f0 = *rsi8;
                            rdi49 = reinterpret_cast<struct s11*>(&rdi38->f4);
                            rsi50 = rsi8 + 1;
                            __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
                            __asm__("addsd xmm1, xmm0");
                            rdi49->f0 = *rsi50;
                            rdi51 = reinterpret_cast<struct s12*>(&rdi49->f4);
                            rsi52 = rsi50 + 1;
                            rdi51->f0 = *rsi52;
                            rdi53 = reinterpret_cast<struct s13*>(&rdi51->f4);
                            rsi54 = rsi52 + 1;
                            __asm__("mulsd xmm0, [r14+rdx*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi53->f0 = *rsi54;
                            rdi38 = reinterpret_cast<struct s0*>(&rdi53->f4);
                            rsi8 = rsi54 + 1;
                            r11_48 = r11_48 + 2;
                        } while (r11_48 != 0x3e8);
                        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi38) < reinterpret_cast<uint64_t>(v12))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(v10) < reinterpret_cast<uint64_t>(r8_41)))) == fputc)) {
                            *reinterpret_cast<int32_t*>(&rdi7) = reinterpret_cast<int32_t>(fputc);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                            goto addr_600_48;
                        }
                        *reinterpret_cast<int32_t*>(&rdi7) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi38) < reinterpret_cast<uint64_t>(r10_46))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_43) < reinterpret_cast<uint64_t>(r8_41)))) == fputc)) {
                            do {
                                addr_600_48:
                                rdi7->f0 = *rsi8;
                                rdi55 = reinterpret_cast<struct s21*>(&rdi7->f4);
                                rsi56 = rsi8 + 1;
                                __asm__("mulsd xmm0, [rsi]");
                                rdi55->f0 = *rsi56;
                                rdi57 = reinterpret_cast<struct s22*>(&rdi55->f2);
                                rsi58 = rsi56 + 1;
                                __asm__("subsd xmm1, xmm0");
                                rdi57->f0 = *rsi58;
                                rdi59 = reinterpret_cast<struct s23*>(&rdi57->f4);
                                rsi60 = rsi58 + 1;
                                r8_61 = reinterpret_cast<void*>((reinterpret_cast<uint64_t>(rdi59) | 1) * 0x2580);
                                r9_3 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx62) + reinterpret_cast<uint64_t>(r8_61));
                                rdi59->f0 = *rsi60;
                                rdi63 = reinterpret_cast<struct s24*>(&rdi59->f4);
                                rsi64 = rsi60 + 1;
                                r8_13 = reinterpret_cast<uint64_t>(r8_61) + r15_65;
                                rdi63->f0 = *rsi64;
                                rdi66 = reinterpret_cast<struct s15*>(&rdi63->f4);
                                rsi67 = rsi64 + 1;
                                __asm__("mulsd xmm1, [rsi]");
                                __asm__("subsd xmm0, xmm1");
                                rdi66->f0 = *rsi67;
                                rsi8 = rsi67 + 1;
                                rdi7 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(&rdi66->f4) + 2);
                            } while (!reinterpret_cast<int1_t>(rdi7 == 0x3e8));
                        } else {
                            fputc = *rsi8;
                            __asm__("unpcklpd xmm0, xmm0");
                            *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(fputc);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
                            do {
                                r8_68 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi8) * 0x2580);
                                r9_3 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx69) + reinterpret_cast<uint64_t>(r8_68));
                                rdi70 = reinterpret_cast<int32_t*>((reinterpret_cast<uint64_t>(rsi8) | 1) * 0x2580);
                                *rdi70 = *rsi8;
                                rsi71 = rsi8 + 1;
                                __asm__("movhpd xmm1, [r10+rdx*8]");
                                r8_13 = reinterpret_cast<uint64_t>(r8_68) + r15_72;
                                rdi73 = reinterpret_cast<struct s25*>(reinterpret_cast<uint64_t>(rdi70 + 1) + reinterpret_cast<int64_t>(r15_74));
                                rdi73->f0 = *rsi71;
                                rdi7 = reinterpret_cast<struct s15*>(&rdi73->f4);
                                __asm__("movhpd xmm2, [rdi+r12*8]");
                                __asm__("mulpd xmm2, xmm0");
                                __asm__("subpd xmm1, xmm2");
                                __asm__("movlpd [r9+rdx*8], xmm1");
                                __asm__("movhpd [r10+rdx*8], xmm1");
                                rsi8 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi71 + 1) + 2);
                            } while (!reinterpret_cast<int1_t>(rsi8 == 0x3e8));
                            continue;
                        }
                        ++rdx16;
                        rcx35 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx35) + 1);
                    } while (rdx16 != 0x4b0);
                }
                ++v37;
                r12_5 = v36;
                if (r12_5 == 0x4b0) 
                    goto addr_669_83;
                v10 = r15_75 + reinterpret_cast<uint64_t>(r12_5) * 2;
                v12 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(r15_76) + reinterpret_cast<uint64_t>(r12_5) * 8 + 0x925688);
                r13_14 = reinterpret_cast<struct s0*>(rbx77 + reinterpret_cast<uint64_t>(r12_5) * 2);
                r14_15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx78) + reinterpret_cast<uint64_t>(r12_5) * 8 + 0x925688);
                rcx79 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_5) * 0x2588);
                r9_3 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(v80) + reinterpret_cast<uint64_t>(rcx79));
                v44 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx79) + 8);
                r10_2 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v80) + reinterpret_cast<uint64_t>(rcx79) + 8);
                rbp39 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_5) * 8 + 8);
                v47 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx79) + 16);
                *reinterpret_cast<int32_t*>(&rax81) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax81) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorpd xmm0, xmm0");
                do {
                    rdi7->f0 = *rsi8;
                    rdi82 = reinterpret_cast<struct s21*>(&rdi7->f4);
                    rsi83 = rsi8 + 1;
                    __asm__("mulsd xmm1, xmm1");
                    __asm__("addsd xmm1, xmm0");
                    rdi82->f0 = *rsi83;
                    rdi84 = reinterpret_cast<struct s22*>(&rdi82->f2);
                    rsi85 = rsi83 + 1;
                    __asm__("mulsd xmm0, xmm0");
                    __asm__("addsd xmm0, xmm1");
                    rdi84->f0 = *rsi85;
                    rdi86 = reinterpret_cast<struct s23*>(&rdi84->f4);
                    rsi87 = rsi85 + 1;
                    __asm__("mulsd xmm1, xmm1");
                    __asm__("addsd xmm1, xmm0");
                    rdi86->f0 = *rsi87;
                    rdi88 = reinterpret_cast<struct s24*>(&rdi86->f4);
                    rsi89 = rsi87 + 1;
                    __asm__("mulsd xmm2, xmm2");
                    __asm__("addsd xmm2, xmm1");
                    rdi88->f0 = *rsi89;
                    rdi7 = reinterpret_cast<struct s15*>(&rdi88->f4);
                    rsi8 = rsi89 + 1;
                    __asm__("mulsd xmm0, xmm0");
                    __asm__("addsd xmm0, xmm2");
                    rax81 = rax81 + 5;
                } while (rax81 != 0x3e8);
                __asm__("ucomisd xmm0, xmm3");
                if (rax81 < 0x3e8) 
                    break;
                __asm__("sqrtsd xmm0, xmm0");
            }
        }
        fun_33f();
    }
    addr_669_83:
    if (v90 >= 43 && **v91 == fputc) {
        rax92 = g6af;
        r12_93 = *rax92;
        rcx94 = r12_93;
        fun_6cb(0x6b9, 22, 1, rcx94, r8_13, r9_3, v1);
        rsi95 = reinterpret_cast<int32_t*>(0x6d2);
        *reinterpret_cast<int32_t*>(&r14_96) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_96) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi97 = r12_93;
        fun_6e6();
        do {
            rbp98 = r14_96 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_99) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_99) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_99 + rbp98) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi97) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi97) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi95 = r12_93;
                    fun_71c();
                }
                *rdi97 = *rsi95;
                rdi97 = r12_93;
                rsi95 = reinterpret_cast<int32_t*>(0x738);
                fun_73f();
                ++r13_99;
            } while (r13_99 != 0x4b0);
            ++r14_96;
        } while (r14_96 != 0x4b0);
        *reinterpret_cast<int32_t*>(&r14_100) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_100) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_772(r12_93, 0x75e, 0x765, rcx94, r8_13, r9_3, v1);
        rsi101 = reinterpret_cast<int32_t*>(0x779);
        rdi102 = r12_93;
        fun_78a();
        do {
            rbp103 = r14_100 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_104) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_104) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_104 + rbp103) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi102) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi102) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi101 = r12_93;
                    fun_7bc();
                }
                *rdi102 = *rsi101;
                rdi102 = r12_93;
                rsi101 = reinterpret_cast<int32_t*>(0x7d6);
                fun_7dd();
                ++r13_104;
            } while (r13_104 != 0x4b0);
            ++r14_100;
        } while (r14_100 != 0x3e8);
        fun_80d(r12_93, 0x7fc, 0x803, rcx94, r8_13, r9_3, v1);
        *reinterpret_cast<int32_t*>(&rsi8) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx16) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx35 = r12_93;
        fun_826(0x814, 22, 1, rcx35, r8_13, r9_3, v1);
    }
    fun_685(rbx105, rsi8, rdx16, rcx35, r8_13, r9_3, v1);
    fun_68f(v106, rsi8, rdx16, rcx35, r8_13, r9_3, v1);
    fun_697(r15_107, rsi8, rdx16, rcx35, r8_13, r9_3, v1);
    goto v108;
}

void fun_6cb(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, uint64_t r8, struct s0* r9, int64_t a7) {
    int64_t v8;
    int32_t* rsi9;
    int64_t r14_10;
    int32_t* rdi11;
    int32_t* r12_12;
    int64_t rbp13;
    int64_t r13_14;
    int32_t* r12_15;
    int32_t* r12_16;
    int64_t r14_17;
    int32_t* r12_18;
    int32_t* rsi19;
    int32_t* rdi20;
    int32_t* r12_21;
    int64_t rbp22;
    int64_t r13_23;
    int32_t* r12_24;
    int32_t* r12_25;
    int32_t* r12_26;
    int32_t* r12_27;
    int64_t rbx28;
    int64_t r15_29;
    int64_t v30;

    v8 = reinterpret_cast<int64_t>(__return_address());
    rsi9 = reinterpret_cast<int32_t*>(0x6d2);
    *reinterpret_cast<int32_t*>(&r14_10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_10) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi11 = r12_12;
    fun_6e6();
    do {
        rbp13 = r14_10 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_14 + rbp13) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi11) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi9 = r12_15;
                fun_71c();
            }
            *rdi11 = *rsi9;
            rdi11 = r12_16;
            rsi9 = reinterpret_cast<int32_t*>(0x738);
            fun_73f();
            ++r13_14;
        } while (r13_14 != 0x4b0);
        ++r14_10;
    } while (r14_10 != 0x4b0);
    *reinterpret_cast<int32_t*>(&r14_17) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_17) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_772(r12_18, 0x75e, 0x765, rcx, r8, r9, v8);
    rsi19 = reinterpret_cast<int32_t*>(0x779);
    rdi20 = r12_21;
    fun_78a();
    do {
        rbp22 = r14_17 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_23) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_23) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_23 + rbp22) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi20) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi19 = r12_24;
                fun_7bc();
            }
            *rdi20 = *rsi19;
            rdi20 = r12_25;
            rsi19 = reinterpret_cast<int32_t*>(0x7d6);
            fun_7dd();
            ++r13_23;
        } while (r13_23 != 0x4b0);
        ++r14_17;
    } while (r14_17 != 0x3e8);
    fun_80d(r12_26, 0x7fc, 0x803, rcx, r8, r9, v8);
    fun_826(0x814, 22, 1, r12_27, r8, r9, v8);
    fun_685(rbx28, 22, 1, r12_27, r8, r9, v8);
    fun_68f(a7, 22, 1, r12_27, r8, r9, v8);
    fun_697(r15_29, 22, 1, r12_27, r8, r9, v8);
    goto v30;
}

void fun_68f(int64_t rdi, int32_t* rsi, uint64_t rdx, int32_t* rcx, uint64_t r8, struct s0* r9, int64_t a7) {
    int64_t r15_8;
    int64_t v9;

    fun_697(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_78a() {
    int64_t v1;
    int64_t rbp2;
    int64_t r14_3;
    int64_t r13_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* r12_7;
    int32_t* r12_8;
    int32_t* r12_9;
    int32_t* rcx10;
    uint64_t r8_11;
    struct s0* r9_12;
    int32_t* r12_13;
    uint64_t r8_14;
    struct s0* r9_15;
    int64_t rbx16;
    uint64_t r8_17;
    struct s0* r9_18;
    int64_t v19;
    uint64_t r8_20;
    struct s0* r9_21;
    int64_t r15_22;
    uint64_t r8_23;
    struct s0* r9_24;
    int64_t v25;

    v1 = reinterpret_cast<int64_t>(__return_address());
    do {
        rbp2 = r14_3 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_4 + rbp2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = r12_7;
                fun_7bc();
            }
            *rdi5 = *rsi6;
            rdi5 = r12_8;
            rsi6 = reinterpret_cast<int32_t*>(0x7d6);
            fun_7dd();
            ++r13_4;
        } while (r13_4 != 0x4b0);
        ++r14_3;
    } while (r14_3 != 0x3e8);
    fun_80d(r12_9, 0x7fc, 0x803, rcx10, r8_11, r9_12, v1);
    fun_826(0x814, 22, 1, r12_13, r8_14, r9_15, v1);
    fun_685(rbx16, 22, 1, r12_13, r8_17, r9_18, v1);
    fun_68f(v19, 22, 1, r12_13, r8_20, r9_21, v1);
    fun_697(r15_22, 22, 1, r12_13, r8_23, r9_24, v1);
    goto v25;
}

void fun_826(int64_t rdi, int32_t* rsi, uint64_t rdx, int32_t* rcx, uint64_t r8, struct s0* r9, int64_t a7) {
    int64_t rbx8;
    int64_t r15_9;
    int64_t v10;

    fun_685(rbx8, rsi, rdx, rcx, r8, r9, __return_address());
    fun_68f(a7, rsi, rdx, rcx, r8, r9, __return_address());
    fun_697(r15_9, rsi, rdx, rcx, r8, r9, __return_address());
    goto v10;
}

void fun_6e6() {
    int64_t v1;
    int64_t rbp2;
    int64_t r14_3;
    int64_t r13_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* r12_7;
    int32_t* r12_8;
    int64_t r14_9;
    int32_t* r12_10;
    int32_t* rcx11;
    uint64_t r8_12;
    struct s0* r9_13;
    int32_t* rsi14;
    int32_t* rdi15;
    int32_t* r12_16;
    int64_t rbp17;
    int64_t r13_18;
    int32_t* r12_19;
    int32_t* r12_20;
    int32_t* r12_21;
    int32_t* rcx22;
    uint64_t r8_23;
    struct s0* r9_24;
    int32_t* r12_25;
    uint64_t r8_26;
    struct s0* r9_27;
    int64_t rbx28;
    uint64_t r8_29;
    struct s0* r9_30;
    int64_t v31;
    uint64_t r8_32;
    struct s0* r9_33;
    int64_t r15_34;
    uint64_t r8_35;
    struct s0* r9_36;
    int64_t v37;

    v1 = reinterpret_cast<int64_t>(__return_address());
    do {
        rbp2 = r14_3 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_4 + rbp2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = r12_7;
                fun_71c();
            }
            *rdi5 = *rsi6;
            rdi5 = r12_8;
            rsi6 = reinterpret_cast<int32_t*>(0x738);
            fun_73f();
            ++r13_4;
        } while (r13_4 != 0x4b0);
        ++r14_3;
    } while (r14_3 != 0x4b0);
    *reinterpret_cast<int32_t*>(&r14_9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_772(r12_10, 0x75e, 0x765, rcx11, r8_12, r9_13, v1);
    rsi14 = reinterpret_cast<int32_t*>(0x779);
    rdi15 = r12_16;
    fun_78a();
    do {
        rbp17 = r14_9 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_18) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_18 + rbp17) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi15) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi14 = r12_19;
                fun_7bc();
            }
            *rdi15 = *rsi14;
            rdi15 = r12_20;
            rsi14 = reinterpret_cast<int32_t*>(0x7d6);
            fun_7dd();
            ++r13_18;
        } while (r13_18 != 0x4b0);
        ++r14_9;
    } while (r14_9 != 0x3e8);
    fun_80d(r12_21, 0x7fc, 0x803, rcx22, r8_23, r9_24, v1);
    fun_826(0x814, 22, 1, r12_25, r8_26, r9_27, v1);
    fun_685(rbx28, 22, 1, r12_25, r8_29, r9_30, v1);
    fun_68f(v31, 22, 1, r12_25, r8_32, r9_33, v1);
    fun_697(r15_34, 22, 1, r12_25, r8_35, r9_36, v1);
    goto v37;
}

void fun_697(int64_t rdi, int32_t* rsi, uint64_t rdx, int32_t* rcx, uint64_t r8, struct s0* r9, int64_t a7) {
    int64_t v8;

    goto v8;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_7c() {
    __asm__("movapd xmm6, [rip+0x0]");
    __asm__("movapd xmm7, [rip+0x0]");
    __asm__("movapd xmm8, [rip+0x0]");
    __asm__("xorps xmm9, xmm9");
    __asm__("movdqa xmm10, [rip+0x0]");
}

struct s26 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_c8() {
    int32_t eax1;
    signed char al2;
    uint1_t cf3;
    int64_t* rcx4;
    int64_t rcx5;
    int64_t r15_6;
    int64_t rdx7;
    int64_t rsi8;
    int32_t* rsi9;
    int64_t rdi10;
    uint64_t r8_11;
    int32_t* rdi12;
    struct s26* rsi13;

    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(al2 + 25) + cf3);
    rcx4 = reinterpret_cast<int64_t*>(rcx5 + r15_6);
    if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rcx4) - rdx7) >= 16) {
        __asm__("movd xmm11, rax");
        __asm__("pshufd xmm11, xmm11, 0x44");
        *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm12, xmm3");
        do {
            __asm__("movdqa xmm13, xmm12");
            __asm__("psrlq xmm13, 0x20");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("movdqa xmm14, xmm11");
            __asm__("psrlq xmm14, 0x20");
            __asm__("pmuludq xmm14, xmm12");
            __asm__("paddq xmm14, xmm13");
            __asm__("movdqa xmm13, xmm12");
            __asm__("pmuludq xmm13, xmm11");
            __asm__("psllq xmm14, 0x20");
            __asm__("paddq xmm13, xmm14");
            __asm__("pshufd xmm14, xmm13, 0xe8");
            __asm__("pshufd xmm15, xmm13, 0xee");
            __asm__("pmuludq xmm13, xmm4");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("pmuludq xmm15, xmm4");
            __asm__("pshufd xmm15, xmm15, 0xed");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psrld xmm13, 0x6");
            __asm__("pshufd xmm15, xmm13, 0xf5");
            __asm__("pmuludq xmm13, xmm5");
            __asm__("pmuludq xmm15, xmm5");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psubd xmm14, xmm13");
            __asm__("cvtdq2pd xmm13, xmm14");
            __asm__("divpd xmm13, xmm6");
            __asm__("mulpd xmm13, xmm7");
            __asm__("addpd xmm13, xmm8");
            __asm__("movupd [rdx+rsi*8], xmm13");
            __asm__("movups [rcx+rsi*8], xmm9");
            rsi8 = rsi8 + 2;
            __asm__("paddq xmm12, xmm10");
        } while (rsi8 != 0x4b0);
    } else {
        *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rdi10) = *reinterpret_cast<int32_t*>(&rsi9) * eax1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            r8_11 = reinterpret_cast<uint64_t>(rdi10 * 0x10624dd3) >> 38;
            *reinterpret_cast<int32_t*>(&rdi12) = *reinterpret_cast<int32_t*>(&rdi10) - *reinterpret_cast<int32_t*>(&r8_11) * 0x3e8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm11, xmm11");
            __asm__("cvtsi2sd xmm11, edi");
            __asm__("divsd xmm11, xmm0");
            __asm__("mulsd xmm11, xmm1");
            __asm__("addsd xmm11, xmm2");
            *rdi12 = *rsi9;
            rsi13 = reinterpret_cast<struct s26*>(rsi9 + 1);
            rcx4[static_cast<int64_t>(rsi13)] = reinterpret_cast<int64_t>(fputc);
            rsi9 = &rsi13->f1;
        } while (!reinterpret_cast<int1_t>(rsi9 == 0x4b0));
    }
}

void fun_20b() {
    struct s1* v1;

    fun_21f(v1);
}

