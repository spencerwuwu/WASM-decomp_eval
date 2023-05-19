
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fun_cff(struct s1* rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8, struct s0* r9, struct s1* a7);

void fun_d07(int32_t* rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8, struct s0* r9, struct s1* a7);

void fun_cf5(int32_t* rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8, struct s0* r9, struct s1* a7) {
    int32_t* r15_8;
    int64_t v9;

    fun_cff(a7, rsi, rdx, rcx, r8, r9, __return_address());
    fun_d07(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_daf();

void fputc();

void fun_de2(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, struct s0* r9, struct s1* a7);

void fun_dfa();

void fun_e2c();

void fun_e4d();

void fun_e7d(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, struct s0* r9, struct s1* a7);

void fun_e96(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8, struct s0* r9, struct s1* a7);

void fun_d8c() {
    struct s1* v1;
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
    int32_t* r8_12;
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
    int32_t* r8_23;
    struct s0* r9_24;
    int32_t* r12_25;
    int32_t* r8_26;
    struct s0* r9_27;
    int32_t* rbx28;
    int32_t* r8_29;
    struct s0* r9_30;
    struct s1* v31;
    int32_t* r8_32;
    struct s0* r9_33;
    int32_t* r15_34;
    int32_t* r8_35;
    struct s0* r9_36;
    int64_t v37;

    while (1) {
        v1 = reinterpret_cast<struct s1*>(__return_address());
        *rdi2 = *rsi3;
        rdi2 = r12_4;
        rsi3 = reinterpret_cast<int32_t*>(0xda8);
        fun_daf();
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
        fun_d8c();
    }
    *reinterpret_cast<int32_t*>(&r14_9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_de2(r12_10, 0xdce, 0xdd5, rcx11, r8_12, r9_13, v1);
    rsi14 = reinterpret_cast<int32_t*>(0xde9);
    rdi15 = r12_16;
    fun_dfa();
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
                fun_e2c();
            }
            *rdi15 = *rsi14;
            rdi15 = r12_20;
            rsi14 = reinterpret_cast<int32_t*>(0xe46);
            fun_e4d();
            ++r13_18;
        } while (r13_18 != 0x4b0);
        ++r14_9;
    } while (r14_9 != 0x3e8);
    fun_e7d(r12_21, 0xe6c, 0xe73, rcx22, r8_23, r9_24, v1);
    fun_e96(0xe84, 22, 1, r12_25, r8_26, r9_27, v1);
    fun_cf5(rbx28, 22, 1, r12_25, r8_29, r9_30, v1);
    fun_cff(v31, 22, 1, r12_25, r8_32, r9_33, v1);
    fun_d07(r15_34, 22, 1, r12_25, r8_35, r9_36, v1);
    goto v37;
}

void fun_daf() {
    struct s1* v1;
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
    int32_t* r8_12;
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
    int32_t* r8_23;
    struct s0* r9_24;
    int32_t* r12_25;
    int32_t* r8_26;
    struct s0* r9_27;
    int32_t* rbx28;
    int32_t* r8_29;
    struct s0* r9_30;
    struct s1* v31;
    int32_t* r8_32;
    struct s0* r9_33;
    int32_t* r15_34;
    int32_t* r8_35;
    struct s0* r9_36;
    int64_t v37;

    while (1) {
        v1 = reinterpret_cast<struct s1*>(__return_address());
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
            fun_d8c();
        }
        *rdi5 = *rsi6;
        rdi5 = r12_8;
        rsi6 = reinterpret_cast<int32_t*>(0xda8);
        fun_daf();
    }
    *reinterpret_cast<int32_t*>(&r14_9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_de2(r12_10, 0xdce, 0xdd5, rcx11, r8_12, r9_13, v1);
    rsi14 = reinterpret_cast<int32_t*>(0xde9);
    rdi15 = r12_16;
    fun_dfa();
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
                fun_e2c();
            }
            *rdi15 = *rsi14;
            rdi15 = r12_20;
            rsi14 = reinterpret_cast<int32_t*>(0xe46);
            fun_e4d();
            ++r13_18;
        } while (r13_18 != 0x4b0);
        ++r14_9;
    } while (r14_9 != 0x3e8);
    fun_e7d(r12_21, 0xe6c, 0xe73, rcx22, r8_23, r9_24, v1);
    fun_e96(0xe84, 22, 1, r12_25, r8_26, r9_27, v1);
    fun_cf5(rbx28, 22, 1, r12_25, r8_29, r9_30, v1);
    fun_cff(v31, 22, 1, r12_25, r8_32, r9_33, v1);
    fun_d07(r15_34, 22, 1, r12_25, r8_35, r9_36, v1);
    goto v37;
}

void fun_de2(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, struct s0* r9, struct s1* a7) {
    struct s1* v8;
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
    int32_t* rbx19;
    int32_t* r15_20;
    int64_t v21;

    v8 = reinterpret_cast<struct s1*>(__return_address());
    rsi9 = reinterpret_cast<int32_t*>(0xde9);
    rdi10 = r12_11;
    fun_dfa();
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
                fun_e2c();
            }
            *rdi10 = *rsi9;
            rdi10 = r12_16;
            rsi9 = reinterpret_cast<int32_t*>(0xe46);
            fun_e4d();
            ++r13_14;
        } while (r13_14 != 0x4b0);
        ++r14_13;
    } while (r14_13 != 0x3e8);
    fun_e7d(r12_17, 0xe6c, 0xe73, rcx, r8, r9, v8);
    fun_e96(0xe84, 22, 1, r12_18, r8, r9, v8);
    fun_cf5(rbx19, 22, 1, r12_18, r8, r9, v8);
    fun_cff(a7, 22, 1, r12_18, r8, r9, v8);
    fun_d07(r15_20, 22, 1, r12_18, r8, r9, v8);
    goto v21;
}

void fun_e2c() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r12_3;
    int64_t r13_4;
    int64_t r14_5;
    int64_t rbp6;
    int32_t* r12_7;
    int32_t* r12_8;
    int32_t* rcx9;
    int32_t* r8_10;
    struct s0* r9_11;
    int32_t* r12_12;
    int32_t* r8_13;
    struct s0* r9_14;
    int32_t* rbx15;
    int32_t* r8_16;
    struct s0* r9_17;
    struct s1* v18;
    int32_t* r8_19;
    struct s0* r9_20;
    int32_t* r15_21;
    int32_t* r8_22;
    struct s0* r9_23;
    int64_t v24;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r12_3;
        rsi2 = reinterpret_cast<int32_t*>(0xe46);
        fun_e4d();
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
        fun_e2c();
    }
    fun_e7d(r12_8, 0xe6c, 0xe73, rcx9, r8_10, r9_11, __return_address());
    fun_e96(0xe84, 22, 1, r12_12, r8_13, r9_14, __return_address());
    fun_cf5(rbx15, 22, 1, r12_12, r8_16, r9_17, __return_address());
    fun_cff(v18, 22, 1, r12_12, r8_19, r9_20, __return_address());
    fun_d07(r15_21, 22, 1, r12_12, r8_22, r9_23, __return_address());
    goto v24;
}

void fun_e4d() {
    int64_t r13_1;
    int64_t r14_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r12_6;
    int32_t* r12_7;
    int32_t* r12_8;
    int32_t* rcx9;
    int32_t* r8_10;
    struct s0* r9_11;
    int32_t* r12_12;
    int32_t* r8_13;
    struct s0* r9_14;
    int32_t* rbx15;
    int32_t* r8_16;
    struct s0* r9_17;
    struct s1* v18;
    int32_t* r8_19;
    struct s0* r9_20;
    int32_t* r15_21;
    int32_t* r8_22;
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
            fun_e2c();
        }
        *rdi4 = *rsi5;
        rdi4 = r12_7;
        rsi5 = reinterpret_cast<int32_t*>(0xe46);
        fun_e4d();
    }
    fun_e7d(r12_8, 0xe6c, 0xe73, rcx9, r8_10, r9_11, __return_address());
    fun_e96(0xe84, 22, 1, r12_12, r8_13, r9_14, __return_address());
    fun_cf5(rbx15, 22, 1, r12_12, r8_16, r9_17, __return_address());
    fun_cff(v18, 22, 1, r12_12, r8_19, r9_20, __return_address());
    fun_d07(r15_21, 22, 1, r12_12, r8_22, r9_23, __return_address());
    goto v24;
}

void fun_e7d(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, struct s0* r9, struct s1* a7) {
    int32_t* r12_8;
    int32_t* rbx9;
    int32_t* r15_10;
    int64_t v11;

    fun_e96(0xe84, 22, 1, r12_8, r8, r9, __return_address());
    fun_cf5(rbx9, 22, 1, r12_8, r8, r9, __return_address());
    fun_cff(a7, 22, 1, r12_8, r8, r9, __return_address());
    fun_d07(r15_10, 22, 1, r12_8, r8, r9, __return_address());
    goto v11;
}

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

void fun_1ea(struct s2* rdi, struct s3* rsi) {
    int32_t* v3;
    struct s4* rdi4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t* rsi7;
    int64_t r14_8;
    uint64_t v9;
    int64_t v10;
    int64_t v11;
    int64_t v12;
    int64_t v13;
    int64_t r14_14;
    int64_t v15;
    int64_t v16;
    int64_t r14_17;
    int32_t* rdi18;
    int64_t r8_19;
    int64_t v20;
    int64_t r14_21;
    int32_t ebp22;
    int32_t ebp23;
    int64_t v24;
    int64_t r11_25;
    int32_t ebp26;
    int32_t* rdi27;
    int32_t* rsi28;
    int32_t* rdi29;
    int32_t* rsi30;
    int32_t* rdi31;
    int32_t* rsi32;
    int64_t r13_33;
    unsigned char r12b34;
    int32_t* rdi35;
    int32_t* rsi36;
    int32_t ebp37;
    int32_t ebp38;
    uint32_t ebp39;
    uint64_t r11_40;
    uint64_t rcx41;
    int64_t r15_42;
    uint64_t r11_43;
    int64_t r15_44;
    uint64_t v45;
    uint64_t v46;
    int1_t zf47;
    uint64_t r10_48;
    unsigned char r12b49;
    int32_t* rdi50;
    int32_t* rsi51;
    int32_t* rdi52;
    int32_t* rsi53;
    uint64_t r10_54;
    struct s5* rsi55;
    int32_t* r15_56;
    int32_t* rdi57;
    uint64_t r13_58;
    uint64_t r13_59;
    int64_t r13_60;
    int64_t r12_61;
    int64_t v62;
    int32_t* rdi63;
    int32_t* rsi64;
    int32_t* rdi65;
    int32_t* rsi66;
    int32_t* rdi67;
    int32_t* rsi68;
    int32_t* rdi69;
    int32_t* rsi70;
    int32_t* rdi71;
    int32_t* rsi72;
    uint64_t r12_73;
    uint32_t ebp74;
    struct s4* v75;
    void* rdx76;
    int32_t* rsi77;
    int32_t* v78;
    void* v79;
    void* r15_80;
    unsigned char cl81;
    void* v82;
    void* r15_83;
    int64_t r14_84;
    uint64_t rdx85;
    uint64_t rcx86;
    unsigned char r12b87;
    struct s6* rsi88;
    int32_t* r15_89;
    struct s2* rdi90;
    int64_t rcx91;
    int32_t* rsi92;
    struct s7* rdi93;
    int32_t* r15_94;
    int64_t r13_95;
    uint64_t r13_96;
    int64_t r13_97;
    int64_t r12_98;
    int64_t v99;
    void* rdx100;
    int32_t* r15_101;
    struct s2* rdi102;
    int32_t* rbx103;
    struct s4* rdi104;
    struct s8* rsi105;
    void* r15_106;
    struct s2* rdi107;
    uint64_t r12_108;

    v3 = reinterpret_cast<int32_t*>(__return_address());
    __asm__("xorpd xmm3, xmm3");
    rdi->f0 = rsi->f0;
    rdi4 = reinterpret_cast<struct s4*>(&rdi->f4);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp5 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp6 == fputc)) {
        addr_370_6:
        rsi7 = v3;
        if (reinterpret_cast<uint64_t>(r14_8 + 1) < v9) {
            v10 = v11 + 8;
            v12 = v11 + 16;
            v13 = r14_14 * 8 + 8;
            v15 = v16 + r14_17 * 8;
            *reinterpret_cast<int32_t*>(&rdi18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
            r8_19 = v20;
            while (1) {
                (rsi7 + r14_21 * 0x960)[r8_19 * 2] = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp22 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp23 == fputc)) {
                    addr_3d0_9:
                    ++r8_19;
                    rdi18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi18) + 1);
                    if (r8_19 == v24) 
                        break; else 
                        continue;
                } else {
                    __asm__("xorpd xmm0, xmm0");
                    *reinterpret_cast<int32_t*>(&r11_25) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_25) + 4) = reinterpret_cast<int32_t>(fputc);
                    if (ebp26 != 1) {
                        do {
                            *rdi18 = *rsi7;
                            rdi27 = rdi18 + 1;
                            rsi28 = rsi7 + 1;
                            __asm__("mulsd xmm1, [rax+r8*8]");
                            __asm__("addsd xmm1, xmm0");
                            *rdi27 = *rsi28;
                            rdi29 = rdi27 + 1;
                            rsi30 = rsi28 + 1;
                            *rdi29 = *rsi30;
                            rdi31 = rdi29 + 1;
                            rsi32 = rsi30 + 1;
                            __asm__("mulsd xmm0, [rax+r8*8]");
                            __asm__("addsd xmm0, xmm1");
                            *rdi31 = *rsi32;
                            rdi18 = rdi31 + 1;
                            rsi7 = rsi32 + 1;
                            r11_25 = r11_25 + 2;
                        } while (r11_25 != r13_33);
                    }
                    if ((r12b34 & 1) != fputc) {
                        *rdi18 = *rsi7;
                        rdi35 = rdi18 + 1;
                        rsi36 = rsi7 + 1;
                        __asm__("mulsd xmm1, [rcx+r8*8]");
                        __asm__("addsd xmm1, xmm0");
                        *rdi35 = *rsi36;
                        rdi18 = rdi35 + 1;
                        rsi7 = rsi36 + 1;
                    }
                    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp37 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp38 == fputc)) 
                        goto addr_3d0_9;
                }
                if (ebp39 < 14) {
                    *reinterpret_cast<int32_t*>(&r11_40) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_40) + 4) = reinterpret_cast<int32_t>(fputc);
                    goto addr_5a0_34;
                }
                rcx41 = reinterpret_cast<uint64_t>(v13 + reinterpret_cast<int64_t>(rdi18) * 8 + r15_42);
                r11_43 = reinterpret_cast<uint64_t>(v15 + reinterpret_cast<int64_t>(rdi18) * 8 + r15_44);
                if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(rcx41 < v45)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(v46 < r11_43))) == fputc)) {
                    *reinterpret_cast<int32_t*>(&r11_40) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_40) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi7 = v3;
                    goto addr_5a0_34;
                }
                *reinterpret_cast<int32_t*>(&r11_40) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_40) + 4) = reinterpret_cast<int32_t>(fputc);
                zf47 = reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(rcx41 < reinterpret_cast<uint64_t>(v12 + reinterpret_cast<int64_t>(rdi18) * 8 + reinterpret_cast<int64_t>(rsi7)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(v10 + reinterpret_cast<int64_t>(rdi18) * 8 + reinterpret_cast<int64_t>(rsi7)) < r11_43))) == fputc);
                rsi7 = v3;
                if (!zf47) {
                    addr_5a0_34:
                    r10_48 = r11_40;
                    if ((r12b49 & 1) != fputc) {
                        *rdi18 = *rsi7;
                        rdi50 = rdi18 + 1;
                        rsi51 = rsi7 + 1;
                        *rdi50 = *rsi51;
                        rdi52 = rdi50 + 1;
                        rsi53 = rsi51 + 1;
                        __asm__("mulsd xmm1, [r9]");
                        __asm__("subsd xmm0, xmm1");
                        *rdi52 = *rsi53;
                        rdi18 = rdi52 + 1;
                        rsi7 = rsi53 + 1;
                        r10_48 = r11_40 | 1;
                    }
                } else {
                    *rdi18 = *rsi7;
                    ++rdi18;
                    __asm__("unpcklpd xmm0, xmm0");
                    *reinterpret_cast<int32_t*>(&r10_54) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_54) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rsi55 = reinterpret_cast<struct s5*>(r15_56 + (r10_54 | 1) * 0x960);
                        *rdi18 = rsi55->f0;
                        rdi57 = rdi18 + 1;
                        __asm__("movhpd xmm1, [rsi+r8*8]");
                        *rdi57 = rsi55->f4;
                        rdi18 = rdi57 + 1;
                        __asm__("movhpd xmm2, [rax+r14*8]");
                        __asm__("mulpd xmm2, xmm0");
                        __asm__("subpd xmm1, xmm2");
                        __asm__("movlpd [rdx+r8*8], xmm1");
                        __asm__("movhpd [rsi+r8*8], xmm1");
                        r10_54 = r10_54 + 2;
                    } while (r10_54 != r13_58);
                    r11_40 = r13_59;
                    rsi7 = v3;
                    if (r13_60 == r12_61) 
                        goto addr_3d0_9; else 
                        goto addr_588_60;
                }
                if (~r11_40 != v62) {
                    do {
                        *rdi18 = *rsi7;
                        rdi63 = rdi18 + 1;
                        rsi64 = rsi7 + 1;
                        *rdi63 = *rsi64;
                        rdi65 = rdi63 + 1;
                        rsi66 = rsi64 + 1;
                        __asm__("mulsd xmm1, [r9]");
                        __asm__("subsd xmm0, xmm1");
                        *rdi65 = *rsi66;
                        rdi67 = rdi65 + 1;
                        rsi68 = rsi66 + 1;
                        *rdi67 = *rsi68;
                        rdi69 = rdi67 + 1;
                        rsi70 = rsi68 + 1;
                        *rdi69 = *rsi70;
                        rdi71 = rdi69 + 1;
                        rsi72 = rsi70 + 1;
                        __asm__("mulsd xmm1, [r9]");
                        __asm__("subsd xmm0, xmm1");
                        *rdi71 = *rsi72;
                        rdi18 = rdi71 + 1;
                        rsi7 = rsi72 + 1;
                        r10_48 = r10_48 + 2;
                    } while (r10_48 != r12_73);
                    goto addr_3d0_9;
                }
                addr_588_60:
                goto addr_5a0_34;
            }
        }
    } else {
        if (ebp74 < 4 || (rdi4 = v75, rdx76 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(v3) + reinterpret_cast<int64_t>(rdi4)), rsi77 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v3) + reinterpret_cast<int64_t>(rdi4) + 8), *reinterpret_cast<unsigned char*>(&rdi4) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(v78) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(v79) + reinterpret_cast<int64_t>(r15_80))), cl81 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(v78) < reinterpret_cast<uint64_t>(rsi77)), *reinterpret_cast<unsigned char*>(&rsi77) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx76) < reinterpret_cast<uint64_t>(v82)), !reinterpret_cast<int1_t>((*reinterpret_cast<unsigned char*>(&rdi4) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_83) + r14_84 * 8) < reinterpret_cast<uint64_t>(v82)))) == fputc))) {
            *reinterpret_cast<int32_t*>(&rdx85) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx85) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_2e2_85;
        }
        *reinterpret_cast<int32_t*>(&rdx85) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx85) + 4) = reinterpret_cast<int32_t>(fputc);
        if (!reinterpret_cast<int1_t>((cl81 & *reinterpret_cast<unsigned char*>(&rsi77)) == fputc)) {
            addr_2e2_85:
            rcx86 = rdx85;
            if ((r12b87 & 1) != fputc) {
                rsi88 = reinterpret_cast<struct s6*>(r15_89 + rdx85 * 0x960);
                rdi4->f0 = rsi88->f0;
                rdi90 = reinterpret_cast<struct s2*>(&rdi4->f4);
                __asm__("divsd xmm0, [rax]");
                rdi90->f0 = rsi88->f4;
                rdi4 = reinterpret_cast<struct s4*>(&rdi90->f4);
                rcx86 = rdx85 | 1;
                goto addr_310_94;
            }
        } else {
            rdi4->f0 = *rsi77;
            __asm__("unpcklpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rcx91) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx91) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rsi92 = reinterpret_cast<int32_t*>(rcx91 * 0x2580);
                rdi93 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(r15_94) + reinterpret_cast<int64_t>(rsi92));
                rdi93->f0 = *rsi92;
                rdi4 = reinterpret_cast<struct s4*>(&rdi93->f4);
                __asm__("movhpd xmm1, [r8+r14*8]");
                __asm__("divpd xmm1, xmm0");
                __asm__("movlpd [rsi+r14*8], xmm1");
                __asm__("movhpd [rdx+r14*8], xmm1");
                rcx91 = rcx91 + 2;
            } while (rcx91 != r13_95);
            rdx85 = r13_96;
            if (r13_97 != r12_98) 
                goto addr_2e2_85; else 
                goto addr_2d0_104;
        }
    }
    addr_310_94:
    if (~rdx85 != v99) {
        do {
            rdx100 = reinterpret_cast<void*>(rcx86 * 0x2580);
            rdi4->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_101) + reinterpret_cast<uint64_t>(rdx100));
            rdi102 = reinterpret_cast<struct s2*>(&rdi4->f4);
            __asm__("divsd xmm0, [rax]");
            rdi102->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx103) + reinterpret_cast<uint64_t>(rdx100));
            rdi104 = reinterpret_cast<struct s4*>(&rdi102->f4);
            rsi105 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(r15_106) + reinterpret_cast<uint64_t>(rdx100) + 0x2580);
            rdi104->f0 = rsi105->f0;
            rdi107 = reinterpret_cast<struct s2*>(&rdi104->f4);
            __asm__("divsd xmm0, [rax]");
            rdi107->f0 = rsi105->f4;
            rdi4 = reinterpret_cast<struct s4*>(&rdi107->f4);
            rcx86 = rcx86 + 2;
        } while (rcx86 != r12_108);
        goto addr_370_6;
    }
    addr_2d0_104:
    goto addr_370_6;
}

struct s9 {
    int32_t f0;
    int32_t f4;
};

struct s10 {
    int32_t f0;
    int32_t f2;
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

void fun_9af();

struct s14 {
    int32_t f0;
    int32_t f4;
};

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
    int32_t f4;
};

int32_t fputc = 0x41574155;

struct s22 {
    int32_t f0;
    int32_t f4;
};

int32_t** gd1f = reinterpret_cast<int32_t**>(0x3d8d48208b4c);

void fun_d3b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, struct s0* r9, struct s1* a7);

void fun_d56();

void fun_88f() {
    struct s1* v1;
    int32_t* v2;
    int32_t* v3;
    int32_t* r15_4;
    int32_t* r12_5;
    struct s0* v6;
    void* r15_7;
    struct s0* r13_8;
    int32_t* rbx9;
    int32_t* r14_10;
    void* rbx11;
    void* rcx12;
    struct s0* r9_13;
    int32_t* v14;
    void* v15;
    int32_t* r10_16;
    void* rbp17;
    void* v18;
    uint64_t rax19;
    struct s9* rdi20;
    int32_t* rsi21;
    struct s10* rdi22;
    int32_t* rsi23;
    struct s11* rdi24;
    int32_t* rsi25;
    struct s12* rdi26;
    int32_t* rsi27;
    struct s13* rdi28;
    int32_t* rsi29;
    int32_t* rax30;
    int32_t* v31;
    int32_t* rsi32;
    struct s0* rdi33;
    int32_t* r8_34;
    int32_t* rdx35;
    int32_t* rsi36;
    int32_t* rbx37;
    struct s14* rdi38;
    int64_t r15_39;
    int32_t* rdi40;
    struct s15* rsi41;
    void* rbx42;
    struct s16* rsi43;
    struct s17* rdi44;
    void* r15_45;
    uint64_t rcx46;
    int32_t* rsi47;
    struct s18* rdi48;
    int32_t* rbx49;
    void* rdx50;
    int32_t* rbx51;
    void* r15_52;
    int32_t* r15_53;
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
    struct s19* rdi64;
    int32_t* rsi65;
    struct s20* rdi66;
    int32_t* rsi67;
    struct s21* rdi68;
    int32_t* rsi69;
    struct s10* rdi70;
    int32_t* rsi71;
    struct s11* rdi72;
    int32_t* rsi73;
    struct s12* rdi74;
    int32_t* rsi75;
    void* r8_76;
    int32_t* rbx77;
    struct s13* rdi78;
    int32_t* rsi79;
    int32_t* r15_80;
    struct s9* rdi81;
    int32_t* rsi82;
    void* r8_83;
    int32_t* rbx84;
    int32_t* rdi85;
    int32_t* rsi86;
    int32_t* r15_87;
    struct s22* rdi88;
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
    int32_t* rbx105;
    struct s1* v106;
    int32_t* r15_107;
    int64_t v108;

    v1 = reinterpret_cast<struct s1*>(__return_address());
    v2 = reinterpret_cast<int32_t*>(1);
    __asm__("pxor xmm3, xmm3");
    while (1) {
        v3 = r15_4 + reinterpret_cast<uint64_t>(r12_5) * 2;
        v6 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(r15_7) + reinterpret_cast<uint64_t>(r12_5) * 8 + 0x925688);
        r13_8 = reinterpret_cast<struct s0*>(rbx9 + reinterpret_cast<uint64_t>(r12_5) * 2);
        r14_10 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx11) + reinterpret_cast<uint64_t>(r12_5) * 8 + 0x925688);
        rcx12 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_5) * 0x2588);
        r9_13 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(v14) + reinterpret_cast<uint64_t>(rcx12));
        v15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx12) + 8);
        r10_16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v14) + reinterpret_cast<uint64_t>(rcx12) + 8);
        rbp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_5) * 8 + 8);
        v18 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx12) + 16);
        *reinterpret_cast<int32_t*>(&rax19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorpd xmm0, xmm0");
        do {
            rdi20->f0 = *rsi21;
            rdi22 = reinterpret_cast<struct s10*>(&rdi20->f4);
            rsi23 = rsi21 + 1;
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm1, xmm0");
            rdi22->f0 = *rsi23;
            rdi24 = reinterpret_cast<struct s11*>(&rdi22->f2);
            rsi25 = rsi23 + 1;
            __asm__("mulsd xmm0, xmm0");
            __asm__("addsd xmm0, xmm1");
            rdi24->f0 = *rsi25;
            rdi26 = reinterpret_cast<struct s12*>(&rdi24->f4);
            rsi27 = rsi25 + 1;
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm1, xmm0");
            rdi26->f0 = *rsi27;
            rdi28 = reinterpret_cast<struct s13*>(&rdi26->f4);
            rsi29 = rsi27 + 1;
            __asm__("mulsd xmm2, xmm2");
            __asm__("addsd xmm2, xmm1");
            rdi28->f0 = *rsi29;
            rdi20 = reinterpret_cast<struct s9*>(&rdi28->f4);
            rsi21 = rsi29 + 1;
            __asm__("mulsd xmm0, xmm0");
            __asm__("addsd xmm0, xmm2");
            rax19 = rax19 + 5;
        } while (rax19 != 0x3e8);
        __asm__("ucomisd xmm0, xmm3");
        if (rax19 < 0x3e8) {
            fun_9af();
            r10_16 = r10_16;
            r9_13 = r9_13;
            __asm__("xorpd xmm3, xmm3");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rax30 = v31 + reinterpret_cast<uint64_t>(r12_5) * 0x960;
        rdi20->f0 = *rsi21;
        rsi32 = v3;
        rdi33 = v6;
        *reinterpret_cast<unsigned char*>(&r8_34) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_8) < reinterpret_cast<uint64_t>(rdi33));
        *reinterpret_cast<unsigned char*>(&rdi33) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_13) < reinterpret_cast<uint64_t>(rdi33));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi32) < reinterpret_cast<uint64_t>(r14_10))) & *reinterpret_cast<unsigned char*>(&r8_34)) == fputc)) {
            *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_a80_28;
        } else {
            *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<unsigned char*>(&rsi32) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi32) < reinterpret_cast<uint64_t>(r10_16))) & *reinterpret_cast<unsigned char*>(&rdi33));
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rsi32) == fputc)) {
                do {
                    addr_a80_28:
                    rsi36 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx35) * 0x2580);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx37) + reinterpret_cast<uint64_t>(rsi36)) = *rsi36;
                    __asm__("divsd xmm0, [rcx]");
                    rdi38 = reinterpret_cast<struct s14*>((reinterpret_cast<uint64_t>(rdx35) | 1) * 0x2580);
                    rdi38->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi36 + 1) + r15_39);
                    rdi40 = &rdi38->f4;
                    rsi41 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(rbx42) + reinterpret_cast<uint64_t>(rdi40));
                    *rdi40 = rsi41->f0;
                    rsi43 = reinterpret_cast<struct s16*>(&rsi41->f4);
                    __asm__("divsd xmm0, [rcx]");
                    rdi44 = reinterpret_cast<struct s17*>(reinterpret_cast<uint64_t>(rdi40 + 1) + reinterpret_cast<int64_t>(r15_45));
                    rdi44->f0 = rsi43->f0;
                    rdi20 = reinterpret_cast<struct s9*>(&rdi44->f4);
                    rsi21 = &rsi43->f4;
                    rdx35 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx35) + 2);
                } while (!reinterpret_cast<int1_t>(rdx35 == 0x3e8));
            } else {
                rdi33->f0 = *rsi32;
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rcx46) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx46) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi47 = reinterpret_cast<int32_t*>(rcx46 * 0x2580);
                    rdi48 = reinterpret_cast<struct s18*>(reinterpret_cast<int64_t>(rbx49) + reinterpret_cast<uint64_t>(rsi47));
                    rdx50 = reinterpret_cast<void*>((rcx46 | 1) * 0x2580);
                    r8_34 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx51) + reinterpret_cast<uint64_t>(rdx50));
                    rdi48->f0 = *rsi47;
                    rdi20 = reinterpret_cast<struct s9*>(&rdi48->f4);
                    __asm__("movhpd xmm1, [r8+r12*8]");
                    __asm__("divpd xmm1, xmm0");
                    rsi21 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi47 + 1) + reinterpret_cast<int64_t>(r15_52));
                    rdx35 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx50) + reinterpret_cast<int64_t>(r15_53));
                    __asm__("movlpd [rsi+r12*8], xmm1");
                    __asm__("movhpd [rdx+r12*8], xmm1");
                    rcx46 = rcx46 + 2;
                } while (rcx46 != 0x3e8);
            }
            rcx54 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_5) + 1);
            v55 = rcx54;
            if (reinterpret_cast<uint64_t>(r12_5) <= 0x4ae) {
                *reinterpret_cast<int32_t*>(&rcx54) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx54) + 4) = reinterpret_cast<int32_t>(fputc);
                rdx35 = v2;
                do {
                    rdi56 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rcx54) * 8 + reinterpret_cast<uint64_t>(rbp17) + reinterpret_cast<int64_t>(rbx57));
                    r8_58 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx54) * 8 + 0x925688 + reinterpret_cast<uint64_t>(rbp17) + reinterpret_cast<int64_t>(rbx59));
                    r9_60 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(v15) + reinterpret_cast<uint64_t>(rcx54) * 8 + reinterpret_cast<int64_t>(v61));
                    r10_62 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(v18) + reinterpret_cast<uint64_t>(rcx54) * 8 + reinterpret_cast<int64_t>(v61));
                    rsi21 = rax30 + reinterpret_cast<uint64_t>(rdx35) * 2;
                    rax30[reinterpret_cast<uint64_t>(rdx35) * 2] = reinterpret_cast<int32_t>(fputc);
                    __asm__("xorpd xmm0, xmm0");
                    *reinterpret_cast<int32_t*>(&r11_63) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_63) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi56->f0 = *rsi21;
                        rdi64 = reinterpret_cast<struct s19*>(&rdi56->f4);
                        rsi65 = rsi21 + 1;
                        __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
                        __asm__("addsd xmm1, xmm0");
                        rdi64->f0 = *rsi65;
                        rdi66 = reinterpret_cast<struct s20*>(&rdi64->f4);
                        rsi67 = rsi65 + 1;
                        rdi66->f0 = *rsi67;
                        rdi68 = reinterpret_cast<struct s21*>(&rdi66->f4);
                        rsi69 = rsi67 + 1;
                        __asm__("mulsd xmm0, [r14+rdx*8]");
                        __asm__("addsd xmm0, xmm1");
                        rdi68->f0 = *rsi69;
                        rdi56 = reinterpret_cast<struct s0*>(&rdi68->f4);
                        rsi21 = rsi69 + 1;
                        r11_63 = r11_63 + 2;
                    } while (r11_63 != 0x3e8);
                    if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi56) < reinterpret_cast<uint64_t>(v6))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(v3) < reinterpret_cast<uint64_t>(r8_58)))) == fputc)) {
                        *reinterpret_cast<int32_t*>(&rdi20) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
                        goto addr_c70_69;
                    }
                    *reinterpret_cast<int32_t*>(&rdi20) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
                    if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi56) < reinterpret_cast<uint64_t>(r10_62))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_60) < reinterpret_cast<uint64_t>(r8_58)))) == fputc)) {
                        do {
                            addr_c70_69:
                            rdi20->f0 = *rsi21;
                            rdi70 = reinterpret_cast<struct s10*>(&rdi20->f4);
                            rsi71 = rsi21 + 1;
                            __asm__("mulsd xmm0, [rsi]");
                            rdi70->f0 = *rsi71;
                            rdi72 = reinterpret_cast<struct s11*>(&rdi70->f2);
                            rsi73 = rsi71 + 1;
                            __asm__("subsd xmm1, xmm0");
                            rdi72->f0 = *rsi73;
                            rdi74 = reinterpret_cast<struct s12*>(&rdi72->f4);
                            rsi75 = rsi73 + 1;
                            r8_76 = reinterpret_cast<void*>((reinterpret_cast<uint64_t>(rdi74) | 1) * 0x2580);
                            r9_13 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx77) + reinterpret_cast<uint64_t>(r8_76));
                            rdi74->f0 = *rsi75;
                            rdi78 = reinterpret_cast<struct s13*>(&rdi74->f4);
                            rsi79 = rsi75 + 1;
                            r8_34 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_76) + reinterpret_cast<int64_t>(r15_80));
                            rdi78->f0 = *rsi79;
                            rdi81 = reinterpret_cast<struct s9*>(&rdi78->f4);
                            rsi82 = rsi79 + 1;
                            __asm__("mulsd xmm1, [rsi]");
                            __asm__("subsd xmm0, xmm1");
                            rdi81->f0 = *rsi82;
                            rsi21 = rsi82 + 1;
                            rdi20 = reinterpret_cast<struct s9*>(reinterpret_cast<uint64_t>(&rdi81->f4) + 2);
                        } while (!reinterpret_cast<int1_t>(rdi20 == 0x3e8));
                    } else {
                        fputc = *rsi21;
                        __asm__("unpcklpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
                        do {
                            r8_83 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi21) * 0x2580);
                            r9_13 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx84) + reinterpret_cast<uint64_t>(r8_83));
                            rdi85 = reinterpret_cast<int32_t*>((reinterpret_cast<uint64_t>(rsi21) | 1) * 0x2580);
                            *rdi85 = *rsi21;
                            rsi86 = rsi21 + 1;
                            __asm__("movhpd xmm1, [r10+rdx*8]");
                            r8_34 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_83) + reinterpret_cast<int64_t>(r15_87));
                            rdi88 = reinterpret_cast<struct s22*>(reinterpret_cast<uint64_t>(rdi85 + 1) + reinterpret_cast<int64_t>(r15_89));
                            rdi88->f0 = *rsi86;
                            rdi20 = reinterpret_cast<struct s9*>(&rdi88->f4);
                            __asm__("movhpd xmm2, [rdi+r12*8]");
                            __asm__("mulpd xmm2, xmm0");
                            __asm__("subpd xmm1, xmm2");
                            __asm__("movlpd [r9+rdx*8], xmm1");
                            __asm__("movhpd [r10+rdx*8], xmm1");
                            rsi21 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi86 + 1) + 2);
                        } while (!reinterpret_cast<int1_t>(rsi21 == 0x3e8));
                        continue;
                    }
                    rdx35 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx35) + 1);
                    rcx54 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx54) + 1);
                } while (rdx35 != 0x4b0);
            }
            v2 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(v2) + 1);
            r12_5 = v55;
            if (r12_5 == 0x4b0) 
                break;
        }
    }
    if (v90 >= 43 && **v91 == fputc) {
        rax92 = gd1f;
        r12_93 = *rax92;
        rcx94 = r12_93;
        fun_d3b(0xd29, 22, 1, rcx94, r8_34, r9_13, v1);
        rsi95 = reinterpret_cast<int32_t*>(0xd42);
        *reinterpret_cast<int32_t*>(&r14_96) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_96) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi97 = r12_93;
        fun_d56();
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
                    fun_d8c();
                }
                *rdi97 = *rsi95;
                rdi97 = r12_93;
                rsi95 = reinterpret_cast<int32_t*>(0xda8);
                fun_daf();
                ++r13_99;
            } while (r13_99 != 0x4b0);
            ++r14_96;
        } while (r14_96 != 0x4b0);
        *reinterpret_cast<int32_t*>(&r14_100) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_100) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_de2(r12_93, 0xdce, 0xdd5, rcx94, r8_34, r9_13, v1);
        rsi101 = reinterpret_cast<int32_t*>(0xde9);
        rdi102 = r12_93;
        fun_dfa();
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
                    fun_e2c();
                }
                *rdi102 = *rsi101;
                rdi102 = r12_93;
                rsi101 = reinterpret_cast<int32_t*>(0xe46);
                fun_e4d();
                ++r13_104;
            } while (r13_104 != 0x4b0);
            ++r14_100;
        } while (r14_100 != 0x3e8);
        fun_e7d(r12_93, 0xe6c, 0xe73, rcx94, r8_34, r9_13, v1);
        *reinterpret_cast<int32_t*>(&rsi21) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx35) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx54 = r12_93;
        fun_e96(0xe84, 22, 1, rcx54, r8_34, r9_13, v1);
    }
    fun_cf5(rbx105, rsi21, rdx35, rcx54, r8_34, r9_13, v1);
    fun_cff(v106, rsi21, rdx35, rcx54, r8_34, r9_13, v1);
    fun_d07(r15_107, rsi21, rdx35, rcx54, r8_34, r9_13, v1);
    goto v108;
}

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

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s29 {
    int32_t f0;
    int32_t f2;
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

void fun_9af() {
    struct s1* v1;
    int32_t* r10_2;
    struct s0* r9_3;
    int32_t* rax4;
    int32_t* r12_5;
    int32_t* v6;
    struct s23* rdi7;
    int32_t* rsi8;
    int32_t* rsi9;
    int32_t* v10;
    struct s0* rdi11;
    struct s0* v12;
    int32_t* r8_13;
    struct s0* r13_14;
    int32_t* r14_15;
    int32_t* rdx16;
    int32_t* rsi17;
    int32_t* rbx18;
    struct s24* rdi19;
    int64_t r15_20;
    int32_t* rdi21;
    struct s25* rsi22;
    void* rbx23;
    struct s26* rsi24;
    struct s27* rdi25;
    void* r15_26;
    uint64_t rcx27;
    int32_t* rsi28;
    struct s28* rdi29;
    int32_t* rbx30;
    void* rdx31;
    int32_t* rbx32;
    void* r15_33;
    int32_t* r15_34;
    int32_t* rcx35;
    int32_t* v36;
    int32_t* v37;
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
    struct s19* rdi49;
    int32_t* rsi50;
    struct s20* rdi51;
    int32_t* rsi52;
    struct s21* rdi53;
    int32_t* rsi54;
    struct s29* rdi55;
    int32_t* rsi56;
    struct s30* rdi57;
    int32_t* rsi58;
    struct s31* rdi59;
    int32_t* rsi60;
    void* r8_61;
    int32_t* rbx62;
    struct s32* rdi63;
    int32_t* rsi64;
    int32_t* r15_65;
    struct s23* rdi66;
    int32_t* rsi67;
    void* r8_68;
    int32_t* rbx69;
    int32_t* rdi70;
    int32_t* rsi71;
    int32_t* r15_72;
    struct s33* rdi73;
    void* r15_74;
    int32_t* r15_75;
    void* r15_76;
    int32_t* rbx77;
    void* rbx78;
    void* rcx79;
    int32_t* v80;
    uint64_t rax81;
    struct s29* rdi82;
    int32_t* rsi83;
    struct s30* rdi84;
    int32_t* rsi85;
    struct s31* rdi86;
    int32_t* rsi87;
    struct s32* rdi88;
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
    int32_t* rbx105;
    struct s1* v106;
    int32_t* r15_107;
    int64_t v108;

    while (1) {
        v1 = reinterpret_cast<struct s1*>(__return_address());
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
                goto addr_a80_7;
            } else {
                *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<unsigned char*>(&rsi9) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi9) < reinterpret_cast<uint64_t>(r10_2))) & *reinterpret_cast<unsigned char*>(&rdi11));
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rsi9) == fputc)) {
                    do {
                        addr_a80_7:
                        rsi17 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx16) * 0x2580);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx18) + reinterpret_cast<uint64_t>(rsi17)) = *rsi17;
                        __asm__("divsd xmm0, [rcx]");
                        rdi19 = reinterpret_cast<struct s24*>((reinterpret_cast<uint64_t>(rdx16) | 1) * 0x2580);
                        rdi19->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi17 + 1) + r15_20);
                        rdi21 = &rdi19->f4;
                        rsi22 = reinterpret_cast<struct s25*>(reinterpret_cast<int64_t>(rbx23) + reinterpret_cast<uint64_t>(rdi21));
                        *rdi21 = rsi22->f0;
                        rsi24 = reinterpret_cast<struct s26*>(&rsi22->f4);
                        __asm__("divsd xmm0, [rcx]");
                        rdi25 = reinterpret_cast<struct s27*>(reinterpret_cast<uint64_t>(rdi21 + 1) + reinterpret_cast<int64_t>(r15_26));
                        rdi25->f0 = rsi24->f0;
                        rdi7 = reinterpret_cast<struct s23*>(&rdi25->f4);
                        rsi8 = &rsi24->f4;
                        rdx16 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx16) + 2);
                    } while (!reinterpret_cast<int1_t>(rdx16 == 0x3e8));
                } else {
                    rdi11->f0 = *rsi9;
                    __asm__("unpcklpd xmm0, xmm0");
                    *reinterpret_cast<int32_t*>(&rcx27) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rsi28 = reinterpret_cast<int32_t*>(rcx27 * 0x2580);
                        rdi29 = reinterpret_cast<struct s28*>(reinterpret_cast<int64_t>(rbx30) + reinterpret_cast<uint64_t>(rsi28));
                        rdx31 = reinterpret_cast<void*>((rcx27 | 1) * 0x2580);
                        r8_13 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx32) + reinterpret_cast<uint64_t>(rdx31));
                        rdi29->f0 = *rsi28;
                        rdi7 = reinterpret_cast<struct s23*>(&rdi29->f4);
                        __asm__("movhpd xmm1, [r8+r12*8]");
                        __asm__("divpd xmm1, xmm0");
                        rsi8 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi28 + 1) + reinterpret_cast<int64_t>(r15_33));
                        rdx16 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx31) + reinterpret_cast<int64_t>(r15_34));
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
                        rsi8 = rax4 + reinterpret_cast<uint64_t>(rdx16) * 2;
                        rax4[reinterpret_cast<uint64_t>(rdx16) * 2] = reinterpret_cast<int32_t>(fputc);
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&r11_48) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_48) + 4) = reinterpret_cast<int32_t>(fputc);
                        do {
                            rdi38->f0 = *rsi8;
                            rdi49 = reinterpret_cast<struct s19*>(&rdi38->f4);
                            rsi50 = rsi8 + 1;
                            __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
                            __asm__("addsd xmm1, xmm0");
                            rdi49->f0 = *rsi50;
                            rdi51 = reinterpret_cast<struct s20*>(&rdi49->f4);
                            rsi52 = rsi50 + 1;
                            rdi51->f0 = *rsi52;
                            rdi53 = reinterpret_cast<struct s21*>(&rdi51->f4);
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
                            goto addr_c70_48;
                        }
                        *reinterpret_cast<int32_t*>(&rdi7) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi38) < reinterpret_cast<uint64_t>(r10_46))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_43) < reinterpret_cast<uint64_t>(r8_41)))) == fputc)) {
                            do {
                                addr_c70_48:
                                rdi7->f0 = *rsi8;
                                rdi55 = reinterpret_cast<struct s29*>(&rdi7->f4);
                                rsi56 = rsi8 + 1;
                                __asm__("mulsd xmm0, [rsi]");
                                rdi55->f0 = *rsi56;
                                rdi57 = reinterpret_cast<struct s30*>(&rdi55->f2);
                                rsi58 = rsi56 + 1;
                                __asm__("subsd xmm1, xmm0");
                                rdi57->f0 = *rsi58;
                                rdi59 = reinterpret_cast<struct s31*>(&rdi57->f4);
                                rsi60 = rsi58 + 1;
                                r8_61 = reinterpret_cast<void*>((reinterpret_cast<uint64_t>(rdi59) | 1) * 0x2580);
                                r9_3 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx62) + reinterpret_cast<uint64_t>(r8_61));
                                rdi59->f0 = *rsi60;
                                rdi63 = reinterpret_cast<struct s32*>(&rdi59->f4);
                                rsi64 = rsi60 + 1;
                                r8_13 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_61) + reinterpret_cast<int64_t>(r15_65));
                                rdi63->f0 = *rsi64;
                                rdi66 = reinterpret_cast<struct s23*>(&rdi63->f4);
                                rsi67 = rsi64 + 1;
                                __asm__("mulsd xmm1, [rsi]");
                                __asm__("subsd xmm0, xmm1");
                                rdi66->f0 = *rsi67;
                                rsi8 = rsi67 + 1;
                                rdi7 = reinterpret_cast<struct s23*>(reinterpret_cast<uint64_t>(&rdi66->f4) + 2);
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
                                r8_13 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_68) + reinterpret_cast<int64_t>(r15_72));
                                rdi73 = reinterpret_cast<struct s33*>(reinterpret_cast<uint64_t>(rdi70 + 1) + reinterpret_cast<int64_t>(r15_74));
                                rdi73->f0 = *rsi71;
                                rdi7 = reinterpret_cast<struct s23*>(&rdi73->f4);
                                __asm__("movhpd xmm2, [rdi+r12*8]");
                                __asm__("mulpd xmm2, xmm0");
                                __asm__("subpd xmm1, xmm2");
                                __asm__("movlpd [r9+rdx*8], xmm1");
                                __asm__("movhpd [r10+rdx*8], xmm1");
                                rsi8 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi71 + 1) + 2);
                            } while (!reinterpret_cast<int1_t>(rsi8 == 0x3e8));
                            continue;
                        }
                        rdx16 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx16) + 1);
                        rcx35 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx35) + 1);
                    } while (rdx16 != 0x4b0);
                }
                v37 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(v37) + 1);
                r12_5 = v36;
                if (r12_5 == 0x4b0) 
                    goto addr_cd9_83;
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
                    rdi82 = reinterpret_cast<struct s29*>(&rdi7->f4);
                    rsi83 = rsi8 + 1;
                    __asm__("mulsd xmm1, xmm1");
                    __asm__("addsd xmm1, xmm0");
                    rdi82->f0 = *rsi83;
                    rdi84 = reinterpret_cast<struct s30*>(&rdi82->f2);
                    rsi85 = rsi83 + 1;
                    __asm__("mulsd xmm0, xmm0");
                    __asm__("addsd xmm0, xmm1");
                    rdi84->f0 = *rsi85;
                    rdi86 = reinterpret_cast<struct s31*>(&rdi84->f4);
                    rsi87 = rsi85 + 1;
                    __asm__("mulsd xmm1, xmm1");
                    __asm__("addsd xmm1, xmm0");
                    rdi86->f0 = *rsi87;
                    rdi88 = reinterpret_cast<struct s32*>(&rdi86->f4);
                    rsi89 = rsi87 + 1;
                    __asm__("mulsd xmm2, xmm2");
                    __asm__("addsd xmm2, xmm1");
                    rdi88->f0 = *rsi89;
                    rdi7 = reinterpret_cast<struct s23*>(&rdi88->f4);
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
        fun_9af();
    }
    addr_cd9_83:
    if (v90 >= 43 && **v91 == fputc) {
        rax92 = gd1f;
        r12_93 = *rax92;
        rcx94 = r12_93;
        fun_d3b(0xd29, 22, 1, rcx94, r8_13, r9_3, v1);
        rsi95 = reinterpret_cast<int32_t*>(0xd42);
        *reinterpret_cast<int32_t*>(&r14_96) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_96) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi97 = r12_93;
        fun_d56();
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
                    fun_d8c();
                }
                *rdi97 = *rsi95;
                rdi97 = r12_93;
                rsi95 = reinterpret_cast<int32_t*>(0xda8);
                fun_daf();
                ++r13_99;
            } while (r13_99 != 0x4b0);
            ++r14_96;
        } while (r14_96 != 0x4b0);
        *reinterpret_cast<int32_t*>(&r14_100) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_100) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_de2(r12_93, 0xdce, 0xdd5, rcx94, r8_13, r9_3, v1);
        rsi101 = reinterpret_cast<int32_t*>(0xde9);
        rdi102 = r12_93;
        fun_dfa();
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
                    fun_e2c();
                }
                *rdi102 = *rsi101;
                rdi102 = r12_93;
                rsi101 = reinterpret_cast<int32_t*>(0xe46);
                fun_e4d();
                ++r13_104;
            } while (r13_104 != 0x4b0);
            ++r14_100;
        } while (r14_100 != 0x3e8);
        fun_e7d(r12_93, 0xe6c, 0xe73, rcx94, r8_13, r9_3, v1);
        *reinterpret_cast<int32_t*>(&rsi8) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx16) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx35 = r12_93;
        fun_e96(0xe84, 22, 1, rcx35, r8_13, r9_3, v1);
    }
    fun_cf5(rbx105, rsi8, rdx16, rcx35, r8_13, r9_3, v1);
    fun_cff(v106, rsi8, rdx16, rcx35, r8_13, r9_3, v1);
    fun_d07(r15_107, rsi8, rdx16, rcx35, r8_13, r9_3, v1);
    goto v108;
}

void fun_d3b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, struct s0* r9, struct s1* a7) {
    struct s1* v8;
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
    int32_t* rbx28;
    int32_t* r15_29;
    int64_t v30;

    v8 = reinterpret_cast<struct s1*>(__return_address());
    rsi9 = reinterpret_cast<int32_t*>(0xd42);
    *reinterpret_cast<int32_t*>(&r14_10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_10) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi11 = r12_12;
    fun_d56();
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
                fun_d8c();
            }
            *rdi11 = *rsi9;
            rdi11 = r12_16;
            rsi9 = reinterpret_cast<int32_t*>(0xda8);
            fun_daf();
            ++r13_14;
        } while (r13_14 != 0x4b0);
        ++r14_10;
    } while (r14_10 != 0x4b0);
    *reinterpret_cast<int32_t*>(&r14_17) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_17) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_de2(r12_18, 0xdce, 0xdd5, rcx, r8, r9, v8);
    rsi19 = reinterpret_cast<int32_t*>(0xde9);
    rdi20 = r12_21;
    fun_dfa();
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
                fun_e2c();
            }
            *rdi20 = *rsi19;
            rdi20 = r12_25;
            rsi19 = reinterpret_cast<int32_t*>(0xe46);
            fun_e4d();
            ++r13_23;
        } while (r13_23 != 0x4b0);
        ++r14_17;
    } while (r14_17 != 0x3e8);
    fun_e7d(r12_26, 0xe6c, 0xe73, rcx, r8, r9, v8);
    fun_e96(0xe84, 22, 1, r12_27, r8, r9, v8);
    fun_cf5(rbx28, 22, 1, r12_27, r8, r9, v8);
    fun_cff(a7, 22, 1, r12_27, r8, r9, v8);
    fun_d07(r15_29, 22, 1, r12_27, r8, r9, v8);
    goto v30;
}

void fun_cff(struct s1* rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8, struct s0* r9, struct s1* a7) {
    int32_t* r15_8;
    int64_t v9;

    fun_d07(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_dfa() {
    struct s1* v1;
    int64_t rbp2;
    int64_t r14_3;
    int64_t r13_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* r12_7;
    int32_t* r12_8;
    int32_t* r12_9;
    int32_t* rcx10;
    int32_t* r8_11;
    struct s0* r9_12;
    int32_t* r12_13;
    int32_t* r8_14;
    struct s0* r9_15;
    int32_t* rbx16;
    int32_t* r8_17;
    struct s0* r9_18;
    struct s1* v19;
    int32_t* r8_20;
    struct s0* r9_21;
    int32_t* r15_22;
    int32_t* r8_23;
    struct s0* r9_24;
    int64_t v25;

    v1 = reinterpret_cast<struct s1*>(__return_address());
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
                fun_e2c();
            }
            *rdi5 = *rsi6;
            rdi5 = r12_8;
            rsi6 = reinterpret_cast<int32_t*>(0xe46);
            fun_e4d();
            ++r13_4;
        } while (r13_4 != 0x4b0);
        ++r14_3;
    } while (r14_3 != 0x3e8);
    fun_e7d(r12_9, 0xe6c, 0xe73, rcx10, r8_11, r9_12, v1);
    fun_e96(0xe84, 22, 1, r12_13, r8_14, r9_15, v1);
    fun_cf5(rbx16, 22, 1, r12_13, r8_17, r9_18, v1);
    fun_cff(v19, 22, 1, r12_13, r8_20, r9_21, v1);
    fun_d07(r15_22, 22, 1, r12_13, r8_23, r9_24, v1);
    goto v25;
}

void fun_e96(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8, struct s0* r9, struct s1* a7) {
    int32_t* rbx8;
    int32_t* r15_9;
    int64_t v10;

    fun_cf5(rbx8, rsi, rdx, rcx, r8, r9, __return_address());
    fun_cff(a7, rsi, rdx, rcx, r8, r9, __return_address());
    fun_d07(r15_9, rsi, rdx, rcx, r8, r9, __return_address());
    goto v10;
}

struct s1* fun_6a8(int64_t rdi, int64_t rsi);

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_6bc(struct s34* rdi, struct s35* rsi);

int32_t g124f80;

/* .LCPI1_8 */
int32_t LCPI1_8 = 0x83485354;

int32_t g124f84;

int32_t gc = 0x894878ec;

int32_t g124f88;

/* .LCPI1_9 */
int32_t LCPI1_9 = 0xf685240c;

struct s36 {
    signed char[1] pad1;
    int32_t f1;
};

struct s37 {
    int32_t f0;
    int32_t f2;
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
    int32_t f4;
};

struct s42 {
    int32_t f0;
    int32_t f4;
};

struct s43 {
    int32_t f0;
    int32_t f4;
};

struct s44 {
    int32_t f0;
    int32_t f4;
};

struct s45 {
    int32_t f0;
    int32_t f4;
};

struct s46 {
    int32_t f0;
    int32_t f4;
};

void fun_696(int64_t rdi, int64_t rsi) {
    struct s1* v3;
    int32_t* rbx4;
    int32_t* rax5;
    struct s1* rax6;
    struct s1* v7;
    int32_t* rax8;
    int32_t* r15_9;
    int64_t rax10;
    void* rcx11;
    int32_t* rcx12;
    int64_t rsi13;
    int32_t* rsi14;
    int64_t rdi15;
    uint64_t r8_16;
    int32_t* r8_17;
    int32_t* rdi18;
    struct s36* rsi19;
    int32_t* r12_20;
    struct s1* rdi21;
    int32_t* rsi22;
    int32_t* v23;
    int32_t* v24;
    struct s0* v25;
    struct s0* r13_26;
    int32_t* r14_27;
    void* rcx28;
    struct s0* r9_29;
    void* v30;
    int32_t* r10_31;
    void* rbp32;
    void* v33;
    uint64_t rax34;
    struct s37* rdi35;
    int32_t* rsi36;
    struct s38* rdi37;
    int32_t* rsi38;
    struct s39* rdi39;
    int32_t* rsi40;
    struct s40* rdi41;
    int32_t* rsi42;
    int32_t* rax43;
    int32_t* rsi44;
    struct s0* rdi45;
    int32_t* rdx46;
    int32_t* rsi47;
    struct s41* rdi48;
    int32_t* rdi49;
    struct s42* rsi50;
    struct s43* rsi51;
    struct s44* rdi52;
    uint64_t rcx53;
    int32_t* rsi54;
    struct s45* rdi55;
    void* rdx56;
    int32_t* rcx57;
    int32_t* v58;
    struct s0* rdi59;
    int32_t* r8_60;
    int32_t* r9_61;
    struct s0* r10_62;
    int64_t r11_63;
    struct s19* rdi64;
    int32_t* rsi65;
    struct s20* rdi66;
    int32_t* rsi67;
    struct s21* rdi68;
    int32_t* rsi69;
    struct s37* rdi70;
    int32_t* rsi71;
    struct s38* rdi72;
    int32_t* rsi73;
    struct s39* rdi74;
    int32_t* rsi75;
    void* r8_76;
    struct s40* rdi77;
    int32_t* rsi78;
    struct s1* rdi79;
    int32_t* rsi80;
    void* r8_81;
    int32_t* rdi82;
    int32_t* rsi83;
    struct s46* rdi84;
    int32_t v85;
    signed char** v86;
    int32_t** rax87;
    int32_t* r12_88;
    int32_t* rcx89;
    int32_t* rsi90;
    int64_t r14_91;
    int32_t* rdi92;
    int64_t rbp93;
    int64_t r13_94;
    int64_t r14_95;
    int32_t* rsi96;
    int32_t* rdi97;
    int64_t rbp98;
    int64_t r13_99;
    int64_t v100;

    v3 = reinterpret_cast<struct s1*>(__return_address());
    rbx4 = rax5;
    rax6 = fun_6a8(0x15f900, 8);
    v7 = rax6;
    rax8 = fun_6bc(0x124f80, 8);
    r15_9 = rax8;
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    g124f80 = LCPI1_8;
    g124f84 = gc;
    g124f88 = LCPI1_9;
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movapd xmm6, [rip+0x0]");
    __asm__("movapd xmm7, [rip+0x0]");
    __asm__("movapd xmm8, [rip+0x0]");
    __asm__("xorps xmm9, xmm9");
    __asm__("movdqa xmm10, [rip+0x0]");
    do {
        rcx11 = reinterpret_cast<void*>(rax10 * 0x2580);
        rcx12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx11) + reinterpret_cast<int64_t>(r15_9));
        if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rcx12) - (reinterpret_cast<int64_t>(rcx11) + reinterpret_cast<int64_t>(rbx4))) >= 16) {
            __asm__("movd xmm11, rax");
            __asm__("pshufd xmm11, xmm11, 0x44");
            *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
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
                rsi13 = rsi13 + 2;
                __asm__("paddq xmm12, xmm10");
            } while (rsi13 != 0x4b0);
        } else {
            *reinterpret_cast<int32_t*>(&rsi14) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *reinterpret_cast<int32_t*>(&rdi15) = *reinterpret_cast<int32_t*>(&rsi14) * *reinterpret_cast<int32_t*>(&rax10);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
                r8_16 = reinterpret_cast<uint64_t>(rdi15 * 0x10624dd3) >> 38;
                *reinterpret_cast<int32_t*>(&r8_17) = *reinterpret_cast<int32_t*>(&r8_16) * 0x3e8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_17) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&rdi18) = *reinterpret_cast<int32_t*>(&rdi15) - *reinterpret_cast<int32_t*>(&r8_17);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm11, xmm11");
                __asm__("cvtsi2sd xmm11, edi");
                __asm__("divsd xmm11, xmm0");
                __asm__("mulsd xmm11, xmm1");
                __asm__("addsd xmm11, xmm2");
                *rdi18 = *rsi14;
                rsi19 = reinterpret_cast<struct s36*>(rsi14 + 1);
                rcx12[reinterpret_cast<int64_t>(rsi19) * 2] = reinterpret_cast<int32_t>(fputc);
                rsi14 = &rsi19->f1;
            } while (!reinterpret_cast<int1_t>(rsi14 == 0x4b0));
        }
        ++rax10;
    } while (rax10 != 0x3e8);
    *reinterpret_cast<int32_t*>(&r12_20) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi21 = v7;
    *reinterpret_cast<int32_t*>(&rsi22) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_88f();
    v23 = reinterpret_cast<int32_t*>(1);
    __asm__("pxor xmm3, xmm3");
    while (1) {
        v24 = r15_9 + reinterpret_cast<uint64_t>(r12_20) * 2;
        v25 = reinterpret_cast<struct s0*>(r15_9 + reinterpret_cast<uint64_t>(r12_20) * 2 + 0x2495a2);
        r13_26 = reinterpret_cast<struct s0*>(rbx4 + reinterpret_cast<uint64_t>(r12_20) * 2);
        r14_27 = rbx4 + reinterpret_cast<uint64_t>(r12_20) * 2 + 0x2495a2;
        rcx28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_20) * 0x2588);
        r9_29 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(v7) + reinterpret_cast<uint64_t>(rcx28));
        v30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx28) + 8);
        r10_31 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(v7) + reinterpret_cast<uint64_t>(rcx28) + 8);
        rbp32 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_20) * 8 + 8);
        v33 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx28) + 16);
        *reinterpret_cast<int32_t*>(&rax34) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax34) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorpd xmm0, xmm0");
        do {
            rdi21->f0 = *rsi22;
            rdi35 = reinterpret_cast<struct s37*>(&rdi21->f4);
            rsi36 = rsi22 + 1;
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm1, xmm0");
            rdi35->f0 = *rsi36;
            rdi37 = reinterpret_cast<struct s38*>(&rdi35->f2);
            rsi38 = rsi36 + 1;
            __asm__("mulsd xmm0, xmm0");
            __asm__("addsd xmm0, xmm1");
            rdi37->f0 = *rsi38;
            rdi39 = reinterpret_cast<struct s39*>(&rdi37->f4);
            rsi40 = rsi38 + 1;
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm1, xmm0");
            rdi39->f0 = *rsi40;
            rdi41 = reinterpret_cast<struct s40*>(&rdi39->f4);
            rsi42 = rsi40 + 1;
            __asm__("mulsd xmm2, xmm2");
            __asm__("addsd xmm2, xmm1");
            rdi41->f0 = *rsi42;
            rdi21 = reinterpret_cast<struct s1*>(&rdi41->f4);
            rsi22 = rsi42 + 1;
            __asm__("mulsd xmm0, xmm0");
            __asm__("addsd xmm0, xmm2");
            rax34 = rax34 + 5;
        } while (rax34 != 0x3e8);
        __asm__("ucomisd xmm0, xmm3");
        if (rax34 < 0x3e8) {
            fun_9af();
            r10_31 = r10_31;
            r9_29 = r9_29;
            __asm__("xorpd xmm3, xmm3");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rax43 = &(v7 + reinterpret_cast<uint64_t>(r12_20) * 0x4b0)->f0;
        rdi21->f0 = *rsi22;
        rsi44 = v24;
        rdi45 = v25;
        *reinterpret_cast<unsigned char*>(&r8_17) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_26) < reinterpret_cast<uint64_t>(rdi45));
        *reinterpret_cast<unsigned char*>(&rdi45) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_29) < reinterpret_cast<uint64_t>(rdi45));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi44) < reinterpret_cast<uint64_t>(r14_27))) & *reinterpret_cast<unsigned char*>(&r8_17)) == fputc)) {
            *reinterpret_cast<int32_t*>(&rdx46) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx46) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_a80_52;
        } else {
            *reinterpret_cast<int32_t*>(&rdx46) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx46) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<unsigned char*>(&rsi44) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi44) < reinterpret_cast<uint64_t>(r10_31))) & *reinterpret_cast<unsigned char*>(&rdi45));
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rsi44) == fputc)) {
                do {
                    addr_a80_52:
                    rsi47 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx46) * 0x2580);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<uint64_t>(rsi47)) = *rsi47;
                    __asm__("divsd xmm0, [rcx]");
                    rdi48 = reinterpret_cast<struct s41*>((reinterpret_cast<uint64_t>(rdx46) | 1) * 0x2580);
                    rdi48->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi47 + 1) + reinterpret_cast<int64_t>(r15_9));
                    rdi49 = &rdi48->f4;
                    rsi50 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<uint64_t>(rdi49));
                    *rdi49 = rsi50->f0;
                    rsi51 = reinterpret_cast<struct s43*>(&rsi50->f4);
                    __asm__("divsd xmm0, [rcx]");
                    rdi52 = reinterpret_cast<struct s44*>(reinterpret_cast<uint64_t>(rdi49 + 1) + reinterpret_cast<int64_t>(r15_9));
                    rdi52->f0 = rsi51->f0;
                    rdi21 = reinterpret_cast<struct s1*>(&rdi52->f4);
                    rsi22 = &rsi51->f4;
                    rdx46 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx46) + 2);
                } while (!reinterpret_cast<int1_t>(rdx46 == 0x3e8));
            } else {
                rdi45->f0 = *rsi44;
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rcx53) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx53) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi54 = reinterpret_cast<int32_t*>(rcx53 * 0x2580);
                    rdi55 = reinterpret_cast<struct s45*>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<uint64_t>(rsi54));
                    rdx56 = reinterpret_cast<void*>((rcx53 | 1) * 0x2580);
                    r8_17 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<uint64_t>(rdx56));
                    rdi55->f0 = *rsi54;
                    rdi21 = reinterpret_cast<struct s1*>(&rdi55->f4);
                    __asm__("movhpd xmm1, [r8+r12*8]");
                    __asm__("divpd xmm1, xmm0");
                    rsi22 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi54 + 1) + reinterpret_cast<int64_t>(r15_9));
                    rdx46 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx56) + reinterpret_cast<int64_t>(r15_9));
                    __asm__("movlpd [rsi+r12*8], xmm1");
                    __asm__("movhpd [rdx+r12*8], xmm1");
                    rcx53 = rcx53 + 2;
                } while (rcx53 != 0x3e8);
            }
            rcx57 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_20) + 1);
            v58 = rcx57;
            if (reinterpret_cast<uint64_t>(r12_20) <= 0x4ae) {
                *reinterpret_cast<int32_t*>(&rcx57) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx57) + 4) = reinterpret_cast<int32_t>(fputc);
                rdx46 = v23;
                do {
                    rdi59 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rcx57) * 8 + reinterpret_cast<uint64_t>(rbp32) + reinterpret_cast<int64_t>(rbx4));
                    r8_60 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx57) * 8 + 0x925688 + reinterpret_cast<uint64_t>(rbp32) + reinterpret_cast<int64_t>(rbx4));
                    r9_61 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(v30) + reinterpret_cast<uint64_t>(rcx57) * 8 + reinterpret_cast<uint64_t>(v7));
                    r10_62 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(v33) + reinterpret_cast<uint64_t>(rcx57) * 8 + reinterpret_cast<uint64_t>(v7));
                    rsi22 = rax43 + reinterpret_cast<uint64_t>(rdx46) * 2;
                    rax43[reinterpret_cast<uint64_t>(rdx46) * 2] = reinterpret_cast<int32_t>(fputc);
                    __asm__("xorpd xmm0, xmm0");
                    *reinterpret_cast<int32_t*>(&r11_63) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_63) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi59->f0 = *rsi22;
                        rdi64 = reinterpret_cast<struct s19*>(&rdi59->f4);
                        rsi65 = rsi22 + 1;
                        __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
                        __asm__("addsd xmm1, xmm0");
                        rdi64->f0 = *rsi65;
                        rdi66 = reinterpret_cast<struct s20*>(&rdi64->f4);
                        rsi67 = rsi65 + 1;
                        rdi66->f0 = *rsi67;
                        rdi68 = reinterpret_cast<struct s21*>(&rdi66->f4);
                        rsi69 = rsi67 + 1;
                        __asm__("mulsd xmm0, [r14+rdx*8]");
                        __asm__("addsd xmm0, xmm1");
                        rdi68->f0 = *rsi69;
                        rdi59 = reinterpret_cast<struct s0*>(&rdi68->f4);
                        rsi22 = rsi69 + 1;
                        r11_63 = r11_63 + 2;
                    } while (r11_63 != 0x3e8);
                    if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi59) < reinterpret_cast<uint64_t>(v25))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(v24) < reinterpret_cast<uint64_t>(r8_60)))) == fputc)) {
                        *reinterpret_cast<int32_t*>(&rdi21) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(fputc);
                        goto addr_c70_93;
                    }
                    *reinterpret_cast<int32_t*>(&rdi21) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(fputc);
                    if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi59) < reinterpret_cast<uint64_t>(r10_62))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_61) < reinterpret_cast<uint64_t>(r8_60)))) == fputc)) {
                        do {
                            addr_c70_93:
                            rdi21->f0 = *rsi22;
                            rdi70 = reinterpret_cast<struct s37*>(&rdi21->f4);
                            rsi71 = rsi22 + 1;
                            __asm__("mulsd xmm0, [rsi]");
                            rdi70->f0 = *rsi71;
                            rdi72 = reinterpret_cast<struct s38*>(&rdi70->f2);
                            rsi73 = rsi71 + 1;
                            __asm__("subsd xmm1, xmm0");
                            rdi72->f0 = *rsi73;
                            rdi74 = reinterpret_cast<struct s39*>(&rdi72->f4);
                            rsi75 = rsi73 + 1;
                            r8_76 = reinterpret_cast<void*>((reinterpret_cast<uint64_t>(rdi74) | 1) * 0x2580);
                            r9_29 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<uint64_t>(r8_76));
                            rdi74->f0 = *rsi75;
                            rdi77 = reinterpret_cast<struct s40*>(&rdi74->f4);
                            rsi78 = rsi75 + 1;
                            r8_17 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_76) + reinterpret_cast<int64_t>(r15_9));
                            rdi77->f0 = *rsi78;
                            rdi79 = reinterpret_cast<struct s1*>(&rdi77->f4);
                            rsi80 = rsi78 + 1;
                            __asm__("mulsd xmm1, [rsi]");
                            __asm__("subsd xmm0, xmm1");
                            rdi79->f0 = *rsi80;
                            rsi22 = rsi80 + 1;
                            rdi21 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(&rdi79->f4) + 2);
                        } while (!reinterpret_cast<int1_t>(rdi21 == 0x3e8));
                    } else {
                        fputc = *rsi22;
                        __asm__("unpcklpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&rsi22) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
                        do {
                            r8_81 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi22) * 0x2580);
                            r9_29 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<uint64_t>(r8_81));
                            rdi82 = reinterpret_cast<int32_t*>((reinterpret_cast<uint64_t>(rsi22) | 1) * 0x2580);
                            *rdi82 = *rsi22;
                            rsi83 = rsi22 + 1;
                            __asm__("movhpd xmm1, [r10+rdx*8]");
                            r8_17 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_81) + reinterpret_cast<int64_t>(r15_9));
                            rdi84 = reinterpret_cast<struct s46*>(reinterpret_cast<uint64_t>(rdi82 + 1) + reinterpret_cast<int64_t>(r15_9));
                            rdi84->f0 = *rsi83;
                            rdi21 = reinterpret_cast<struct s1*>(&rdi84->f4);
                            __asm__("movhpd xmm2, [rdi+r12*8]");
                            __asm__("mulpd xmm2, xmm0");
                            __asm__("subpd xmm1, xmm2");
                            __asm__("movlpd [r9+rdx*8], xmm1");
                            __asm__("movhpd [r10+rdx*8], xmm1");
                            rsi22 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi83 + 1) + 2);
                        } while (!reinterpret_cast<int1_t>(rsi22 == 0x3e8));
                        continue;
                    }
                    rdx46 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx46) + 1);
                    rcx57 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx57) + 1);
                } while (rdx46 != 0x4b0);
            }
            v23 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(v23) + 1);
            r12_20 = v58;
            if (r12_20 == 0x4b0) 
                break;
        }
    }
    if (v85 >= 43 && **v86 == fputc) {
        rax87 = gd1f;
        r12_88 = *rax87;
        rcx89 = r12_88;
        fun_d3b(0xd29, 22, 1, rcx89, r8_17, r9_29, v3);
        rsi90 = reinterpret_cast<int32_t*>(0xd42);
        *reinterpret_cast<int32_t*>(&r14_91) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_91) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi92 = r12_88;
        fun_d56();
        do {
            rbp93 = r14_91 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_94) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_94) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_94 + rbp93) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi92) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi92) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi90 = r12_88;
                    fun_d8c();
                }
                *rdi92 = *rsi90;
                rdi92 = r12_88;
                rsi90 = reinterpret_cast<int32_t*>(0xda8);
                fun_daf();
                ++r13_94;
            } while (r13_94 != 0x4b0);
            ++r14_91;
        } while (r14_91 != 0x4b0);
        *reinterpret_cast<int32_t*>(&r14_95) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_95) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_de2(r12_88, 0xdce, 0xdd5, rcx89, r8_17, r9_29, v3);
        rsi96 = reinterpret_cast<int32_t*>(0xde9);
        rdi97 = r12_88;
        fun_dfa();
        do {
            rbp98 = r14_95 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_99) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_99) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_99 + rbp98) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi97) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi97) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi96 = r12_88;
                    fun_e2c();
                }
                *rdi97 = *rsi96;
                rdi97 = r12_88;
                rsi96 = reinterpret_cast<int32_t*>(0xe46);
                fun_e4d();
                ++r13_99;
            } while (r13_99 != 0x4b0);
            ++r14_95;
        } while (r14_95 != 0x3e8);
        fun_e7d(r12_88, 0xe6c, 0xe73, rcx89, r8_17, r9_29, v3);
        *reinterpret_cast<int32_t*>(&rsi22) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx46) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx46) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx57 = r12_88;
        fun_e96(0xe84, 22, 1, rcx57, r8_17, r9_29, v3);
    }
    fun_cf5(rbx4, rsi22, rdx46, rcx57, r8_17, r9_29, v3);
    fun_cff(v7, rsi22, rdx46, rcx57, r8_17, r9_29, v3);
    fun_d07(r15_9, rsi22, rdx46, rcx57, r8_17, r9_29, v3);
    goto v100;
}

void fun_d56() {
    struct s1* v1;
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
    int32_t* r8_12;
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
    int32_t* r8_23;
    struct s0* r9_24;
    int32_t* r12_25;
    int32_t* r8_26;
    struct s0* r9_27;
    int32_t* rbx28;
    int32_t* r8_29;
    struct s0* r9_30;
    struct s1* v31;
    int32_t* r8_32;
    struct s0* r9_33;
    int32_t* r15_34;
    int32_t* r8_35;
    struct s0* r9_36;
    int64_t v37;

    v1 = reinterpret_cast<struct s1*>(__return_address());
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
                fun_d8c();
            }
            *rdi5 = *rsi6;
            rdi5 = r12_8;
            rsi6 = reinterpret_cast<int32_t*>(0xda8);
            fun_daf();
            ++r13_4;
        } while (r13_4 != 0x4b0);
        ++r14_3;
    } while (r14_3 != 0x4b0);
    *reinterpret_cast<int32_t*>(&r14_9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_de2(r12_10, 0xdce, 0xdd5, rcx11, r8_12, r9_13, v1);
    rsi14 = reinterpret_cast<int32_t*>(0xde9);
    rdi15 = r12_16;
    fun_dfa();
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
                fun_e2c();
            }
            *rdi15 = *rsi14;
            rdi15 = r12_20;
            rsi14 = reinterpret_cast<int32_t*>(0xe46);
            fun_e4d();
            ++r13_18;
        } while (r13_18 != 0x4b0);
        ++r14_9;
    } while (r14_9 != 0x3e8);
    fun_e7d(r12_21, 0xe6c, 0xe73, rcx22, r8_23, r9_24, v1);
    fun_e96(0xe84, 22, 1, r12_25, r8_26, r9_27, v1);
    fun_cf5(rbx28, 22, 1, r12_25, r8_29, r9_30, v1);
    fun_cff(v31, 22, 1, r12_25, r8_32, r9_33, v1);
    fun_d07(r15_34, 22, 1, r12_25, r8_35, r9_36, v1);
    goto v37;
}

void fun_d07(int32_t* rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx, int32_t* r8, struct s0* r9, struct s1* a7) {
    int64_t v8;

    goto v8;
}

struct s47 {
    signed char[1] pad1;
    int32_t f1;
};

struct s48 {
    int32_t f0;
    int32_t f4;
};

struct s49 {
    int32_t f0;
    int32_t f4;
};

struct s50 {
    int32_t f0;
    int32_t f4;
};

struct s51 {
    int32_t f0;
    int32_t f4;
};

struct s52 {
    int32_t f0;
    int32_t f4;
};

struct s53 {
    int32_t f0;
    int32_t f4;
};

struct s1* fun_6a8(int64_t rdi, int64_t rsi) {
    struct s1* v3;
    struct s1* v4;
    struct s1* rax5;
    int32_t* rax6;
    int32_t* r15_7;
    int64_t rax8;
    void* rcx9;
    int32_t* rcx10;
    int64_t rbx11;
    int64_t rsi12;
    int32_t* rsi13;
    int64_t rdi14;
    uint64_t r8_15;
    int32_t* r8_16;
    int32_t* rdi17;
    struct s47* rsi18;
    int32_t* r12_19;
    struct s1* rdi20;
    int32_t* rsi21;
    int32_t* v22;
    int32_t* v23;
    struct s0* v24;
    struct s0* r13_25;
    int32_t* rbx26;
    int32_t* r14_27;
    void* rbx28;
    void* rcx29;
    struct s0* r9_30;
    void* v31;
    int32_t* r10_32;
    void* rbp33;
    void* v34;
    uint64_t rax35;
    struct s37* rdi36;
    int32_t* rsi37;
    struct s38* rdi38;
    int32_t* rsi39;
    struct s39* rdi40;
    int32_t* rsi41;
    struct s40* rdi42;
    int32_t* rsi43;
    int32_t* rax44;
    int32_t* rsi45;
    struct s0* rdi46;
    int32_t* rdx47;
    int32_t* rsi48;
    int32_t* rbx49;
    struct s48* rdi50;
    int32_t* rdi51;
    struct s49* rsi52;
    void* rbx53;
    struct s50* rsi54;
    struct s51* rdi55;
    uint64_t rcx56;
    int32_t* rsi57;
    struct s52* rdi58;
    int32_t* rbx59;
    void* rdx60;
    int32_t* rbx61;
    int32_t* rcx62;
    int32_t* v63;
    struct s0* rdi64;
    void* rbx65;
    int32_t* r8_66;
    void* rbx67;
    int32_t* r9_68;
    struct s0* r10_69;
    int64_t r11_70;
    struct s19* rdi71;
    int32_t* rsi72;
    struct s20* rdi73;
    int32_t* rsi74;
    struct s21* rdi75;
    int32_t* rsi76;
    struct s37* rdi77;
    int32_t* rsi78;
    struct s38* rdi79;
    int32_t* rsi80;
    struct s39* rdi81;
    int32_t* rsi82;
    void* r8_83;
    int32_t* rbx84;
    struct s40* rdi85;
    int32_t* rsi86;
    struct s1* rdi87;
    int32_t* rsi88;
    void* r8_89;
    int32_t* rbx90;
    int32_t* rdi91;
    int32_t* rsi92;
    struct s53* rdi93;
    int32_t v94;
    signed char** v95;
    int32_t** rax96;
    int32_t* r12_97;
    int32_t* rcx98;
    int32_t* rsi99;
    int64_t r14_100;
    int32_t* rdi101;
    int64_t rbp102;
    int64_t r13_103;
    int64_t r14_104;
    int32_t* rsi105;
    int32_t* rdi106;
    int64_t rbp107;
    int64_t r13_108;
    int32_t* rbx109;
    int64_t v110;

    v3 = reinterpret_cast<struct s1*>(__return_address());
    v4 = rax5;
    rax6 = fun_6bc(0x124f80, 8);
    r15_7 = rax6;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    g124f80 = LCPI1_8;
    g124f84 = gc;
    g124f88 = LCPI1_9;
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movapd xmm6, [rip+0x0]");
    __asm__("movapd xmm7, [rip+0x0]");
    __asm__("movapd xmm8, [rip+0x0]");
    __asm__("xorps xmm9, xmm9");
    __asm__("movdqa xmm10, [rip+0x0]");
    do {
        rcx9 = reinterpret_cast<void*>(rax8 * 0x2580);
        rcx10 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx9) + reinterpret_cast<int64_t>(r15_7));
        if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rcx10) - (reinterpret_cast<int64_t>(rcx9) + rbx11)) >= 16) {
            __asm__("movd xmm11, rax");
            __asm__("pshufd xmm11, xmm11, 0x44");
            *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
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
                rsi12 = rsi12 + 2;
                __asm__("paddq xmm12, xmm10");
            } while (rsi12 != 0x4b0);
        } else {
            *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(&rsi13) * *reinterpret_cast<int32_t*>(&rax8);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fputc);
                r8_15 = reinterpret_cast<uint64_t>(rdi14 * 0x10624dd3) >> 38;
                *reinterpret_cast<int32_t*>(&r8_16) = *reinterpret_cast<int32_t*>(&r8_15) * 0x3e8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<int32_t*>(&rdi14) - *reinterpret_cast<int32_t*>(&r8_16);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm11, xmm11");
                __asm__("cvtsi2sd xmm11, edi");
                __asm__("divsd xmm11, xmm0");
                __asm__("mulsd xmm11, xmm1");
                __asm__("addsd xmm11, xmm2");
                *rdi17 = *rsi13;
                rsi18 = reinterpret_cast<struct s47*>(rsi13 + 1);
                rcx10[reinterpret_cast<int64_t>(rsi18) * 2] = reinterpret_cast<int32_t>(fputc);
                rsi13 = &rsi18->f1;
            } while (!reinterpret_cast<int1_t>(rsi13 == 0x4b0));
        }
        ++rax8;
    } while (rax8 != 0x3e8);
    *reinterpret_cast<int32_t*>(&r12_19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_19) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi20 = v4;
    *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_88f();
    v22 = reinterpret_cast<int32_t*>(1);
    __asm__("pxor xmm3, xmm3");
    while (1) {
        v23 = r15_7 + reinterpret_cast<uint64_t>(r12_19) * 2;
        v24 = reinterpret_cast<struct s0*>(r15_7 + reinterpret_cast<uint64_t>(r12_19) * 2 + 0x2495a2);
        r13_25 = reinterpret_cast<struct s0*>(rbx26 + reinterpret_cast<uint64_t>(r12_19) * 2);
        r14_27 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx28) + reinterpret_cast<uint64_t>(r12_19) * 8 + 0x925688);
        rcx29 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_19) * 0x2588);
        r9_30 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(v4) + reinterpret_cast<uint64_t>(rcx29));
        v31 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx29) + 8);
        r10_32 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(v4) + reinterpret_cast<uint64_t>(rcx29) + 8);
        rbp33 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_19) * 8 + 8);
        v34 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx29) + 16);
        *reinterpret_cast<int32_t*>(&rax35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax35) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorpd xmm0, xmm0");
        do {
            rdi20->f0 = *rsi21;
            rdi36 = reinterpret_cast<struct s37*>(&rdi20->f4);
            rsi37 = rsi21 + 1;
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm1, xmm0");
            rdi36->f0 = *rsi37;
            rdi38 = reinterpret_cast<struct s38*>(&rdi36->f2);
            rsi39 = rsi37 + 1;
            __asm__("mulsd xmm0, xmm0");
            __asm__("addsd xmm0, xmm1");
            rdi38->f0 = *rsi39;
            rdi40 = reinterpret_cast<struct s39*>(&rdi38->f4);
            rsi41 = rsi39 + 1;
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm1, xmm0");
            rdi40->f0 = *rsi41;
            rdi42 = reinterpret_cast<struct s40*>(&rdi40->f4);
            rsi43 = rsi41 + 1;
            __asm__("mulsd xmm2, xmm2");
            __asm__("addsd xmm2, xmm1");
            rdi42->f0 = *rsi43;
            rdi20 = reinterpret_cast<struct s1*>(&rdi42->f4);
            rsi21 = rsi43 + 1;
            __asm__("mulsd xmm0, xmm0");
            __asm__("addsd xmm0, xmm2");
            rax35 = rax35 + 5;
        } while (rax35 != 0x3e8);
        __asm__("ucomisd xmm0, xmm3");
        if (rax35 < 0x3e8) {
            fun_9af();
            r10_32 = r10_32;
            r9_30 = r9_30;
            __asm__("xorpd xmm3, xmm3");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rax44 = &(v4 + reinterpret_cast<uint64_t>(r12_19) * 0x4b0)->f0;
        rdi20->f0 = *rsi21;
        rsi45 = v23;
        rdi46 = v24;
        *reinterpret_cast<unsigned char*>(&r8_16) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_25) < reinterpret_cast<uint64_t>(rdi46));
        *reinterpret_cast<unsigned char*>(&rdi46) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_30) < reinterpret_cast<uint64_t>(rdi46));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi45) < reinterpret_cast<uint64_t>(r14_27))) & *reinterpret_cast<unsigned char*>(&r8_16)) == fputc)) {
            *reinterpret_cast<int32_t*>(&rdx47) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx47) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_a80_51;
        } else {
            *reinterpret_cast<int32_t*>(&rdx47) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx47) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<unsigned char*>(&rsi45) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi45) < reinterpret_cast<uint64_t>(r10_32))) & *reinterpret_cast<unsigned char*>(&rdi46));
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rsi45) == fputc)) {
                do {
                    addr_a80_51:
                    rsi48 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx47) * 0x2580);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx49) + reinterpret_cast<uint64_t>(rsi48)) = *rsi48;
                    __asm__("divsd xmm0, [rcx]");
                    rdi50 = reinterpret_cast<struct s48*>((reinterpret_cast<uint64_t>(rdx47) | 1) * 0x2580);
                    rdi50->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi48 + 1) + reinterpret_cast<int64_t>(r15_7));
                    rdi51 = &rdi50->f4;
                    rsi52 = reinterpret_cast<struct s49*>(reinterpret_cast<int64_t>(rbx53) + reinterpret_cast<uint64_t>(rdi51));
                    *rdi51 = rsi52->f0;
                    rsi54 = reinterpret_cast<struct s50*>(&rsi52->f4);
                    __asm__("divsd xmm0, [rcx]");
                    rdi55 = reinterpret_cast<struct s51*>(reinterpret_cast<uint64_t>(rdi51 + 1) + reinterpret_cast<int64_t>(r15_7));
                    rdi55->f0 = rsi54->f0;
                    rdi20 = reinterpret_cast<struct s1*>(&rdi55->f4);
                    rsi21 = &rsi54->f4;
                    rdx47 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx47) + 2);
                } while (!reinterpret_cast<int1_t>(rdx47 == 0x3e8));
            } else {
                rdi46->f0 = *rsi45;
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rcx56) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx56) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi57 = reinterpret_cast<int32_t*>(rcx56 * 0x2580);
                    rdi58 = reinterpret_cast<struct s52*>(reinterpret_cast<int64_t>(rbx59) + reinterpret_cast<uint64_t>(rsi57));
                    rdx60 = reinterpret_cast<void*>((rcx56 | 1) * 0x2580);
                    r8_16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx61) + reinterpret_cast<uint64_t>(rdx60));
                    rdi58->f0 = *rsi57;
                    rdi20 = reinterpret_cast<struct s1*>(&rdi58->f4);
                    __asm__("movhpd xmm1, [r8+r12*8]");
                    __asm__("divpd xmm1, xmm0");
                    rsi21 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi57 + 1) + reinterpret_cast<int64_t>(r15_7));
                    rdx47 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx60) + reinterpret_cast<int64_t>(r15_7));
                    __asm__("movlpd [rsi+r12*8], xmm1");
                    __asm__("movhpd [rdx+r12*8], xmm1");
                    rcx56 = rcx56 + 2;
                } while (rcx56 != 0x3e8);
            }
            rcx62 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_19) + 1);
            v63 = rcx62;
            if (reinterpret_cast<uint64_t>(r12_19) <= 0x4ae) {
                *reinterpret_cast<int32_t*>(&rcx62) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx62) + 4) = reinterpret_cast<int32_t>(fputc);
                rdx47 = v22;
                do {
                    rdi64 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rcx62) * 8 + reinterpret_cast<uint64_t>(rbp33) + reinterpret_cast<int64_t>(rbx65));
                    r8_66 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx62) * 8 + 0x925688 + reinterpret_cast<uint64_t>(rbp33) + reinterpret_cast<int64_t>(rbx67));
                    r9_68 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(v31) + reinterpret_cast<uint64_t>(rcx62) * 8 + reinterpret_cast<uint64_t>(v4));
                    r10_69 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(v34) + reinterpret_cast<uint64_t>(rcx62) * 8 + reinterpret_cast<uint64_t>(v4));
                    rsi21 = rax44 + reinterpret_cast<uint64_t>(rdx47) * 2;
                    rax44[reinterpret_cast<uint64_t>(rdx47) * 2] = reinterpret_cast<int32_t>(fputc);
                    __asm__("xorpd xmm0, xmm0");
                    *reinterpret_cast<int32_t*>(&r11_70) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_70) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi64->f0 = *rsi21;
                        rdi71 = reinterpret_cast<struct s19*>(&rdi64->f4);
                        rsi72 = rsi21 + 1;
                        __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
                        __asm__("addsd xmm1, xmm0");
                        rdi71->f0 = *rsi72;
                        rdi73 = reinterpret_cast<struct s20*>(&rdi71->f4);
                        rsi74 = rsi72 + 1;
                        rdi73->f0 = *rsi74;
                        rdi75 = reinterpret_cast<struct s21*>(&rdi73->f4);
                        rsi76 = rsi74 + 1;
                        __asm__("mulsd xmm0, [r14+rdx*8]");
                        __asm__("addsd xmm0, xmm1");
                        rdi75->f0 = *rsi76;
                        rdi64 = reinterpret_cast<struct s0*>(&rdi75->f4);
                        rsi21 = rsi76 + 1;
                        r11_70 = r11_70 + 2;
                    } while (r11_70 != 0x3e8);
                    if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi64) < reinterpret_cast<uint64_t>(v24))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(v23) < reinterpret_cast<uint64_t>(r8_66)))) == fputc)) {
                        *reinterpret_cast<int32_t*>(&rdi20) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
                        goto addr_c70_92;
                    }
                    *reinterpret_cast<int32_t*>(&rdi20) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
                    if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi64) < reinterpret_cast<uint64_t>(r10_69))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_68) < reinterpret_cast<uint64_t>(r8_66)))) == fputc)) {
                        do {
                            addr_c70_92:
                            rdi20->f0 = *rsi21;
                            rdi77 = reinterpret_cast<struct s37*>(&rdi20->f4);
                            rsi78 = rsi21 + 1;
                            __asm__("mulsd xmm0, [rsi]");
                            rdi77->f0 = *rsi78;
                            rdi79 = reinterpret_cast<struct s38*>(&rdi77->f2);
                            rsi80 = rsi78 + 1;
                            __asm__("subsd xmm1, xmm0");
                            rdi79->f0 = *rsi80;
                            rdi81 = reinterpret_cast<struct s39*>(&rdi79->f4);
                            rsi82 = rsi80 + 1;
                            r8_83 = reinterpret_cast<void*>((reinterpret_cast<uint64_t>(rdi81) | 1) * 0x2580);
                            r9_30 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx84) + reinterpret_cast<uint64_t>(r8_83));
                            rdi81->f0 = *rsi82;
                            rdi85 = reinterpret_cast<struct s40*>(&rdi81->f4);
                            rsi86 = rsi82 + 1;
                            r8_16 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_83) + reinterpret_cast<int64_t>(r15_7));
                            rdi85->f0 = *rsi86;
                            rdi87 = reinterpret_cast<struct s1*>(&rdi85->f4);
                            rsi88 = rsi86 + 1;
                            __asm__("mulsd xmm1, [rsi]");
                            __asm__("subsd xmm0, xmm1");
                            rdi87->f0 = *rsi88;
                            rsi21 = rsi88 + 1;
                            rdi20 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(&rdi87->f4) + 2);
                        } while (!reinterpret_cast<int1_t>(rdi20 == 0x3e8));
                    } else {
                        fputc = *rsi21;
                        __asm__("unpcklpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
                        do {
                            r8_89 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi21) * 0x2580);
                            r9_30 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx90) + reinterpret_cast<uint64_t>(r8_89));
                            rdi91 = reinterpret_cast<int32_t*>((reinterpret_cast<uint64_t>(rsi21) | 1) * 0x2580);
                            *rdi91 = *rsi21;
                            rsi92 = rsi21 + 1;
                            __asm__("movhpd xmm1, [r10+rdx*8]");
                            r8_16 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_89) + reinterpret_cast<int64_t>(r15_7));
                            rdi93 = reinterpret_cast<struct s53*>(reinterpret_cast<uint64_t>(rdi91 + 1) + reinterpret_cast<int64_t>(r15_7));
                            rdi93->f0 = *rsi92;
                            rdi20 = reinterpret_cast<struct s1*>(&rdi93->f4);
                            __asm__("movhpd xmm2, [rdi+r12*8]");
                            __asm__("mulpd xmm2, xmm0");
                            __asm__("subpd xmm1, xmm2");
                            __asm__("movlpd [r9+rdx*8], xmm1");
                            __asm__("movhpd [r10+rdx*8], xmm1");
                            rsi21 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi92 + 1) + 2);
                        } while (!reinterpret_cast<int1_t>(rsi21 == 0x3e8));
                        continue;
                    }
                    rdx47 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx47) + 1);
                    rcx62 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx62) + 1);
                } while (rdx47 != 0x4b0);
            }
            v22 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(v22) + 1);
            r12_19 = v63;
            if (r12_19 == 0x4b0) 
                break;
        }
    }
    if (v94 >= 43 && **v95 == fputc) {
        rax96 = gd1f;
        r12_97 = *rax96;
        rcx98 = r12_97;
        fun_d3b(0xd29, 22, 1, rcx98, r8_16, r9_30, v3);
        rsi99 = reinterpret_cast<int32_t*>(0xd42);
        *reinterpret_cast<int32_t*>(&r14_100) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_100) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi101 = r12_97;
        fun_d56();
        do {
            rbp102 = r14_100 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_103) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_103) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_103 + rbp102) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi101) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi101) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi99 = r12_97;
                    fun_d8c();
                }
                *rdi101 = *rsi99;
                rdi101 = r12_97;
                rsi99 = reinterpret_cast<int32_t*>(0xda8);
                fun_daf();
                ++r13_103;
            } while (r13_103 != 0x4b0);
            ++r14_100;
        } while (r14_100 != 0x4b0);
        *reinterpret_cast<int32_t*>(&r14_104) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_104) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_de2(r12_97, 0xdce, 0xdd5, rcx98, r8_16, r9_30, v3);
        rsi105 = reinterpret_cast<int32_t*>(0xde9);
        rdi106 = r12_97;
        fun_dfa();
        do {
            rbp107 = r14_104 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_108) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_108) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_108 + rbp107) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi106) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi106) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi105 = r12_97;
                    fun_e2c();
                }
                *rdi106 = *rsi105;
                rdi106 = r12_97;
                rsi105 = reinterpret_cast<int32_t*>(0xe46);
                fun_e4d();
                ++r13_108;
            } while (r13_108 != 0x4b0);
            ++r14_104;
        } while (r14_104 != 0x3e8);
        fun_e7d(r12_97, 0xe6c, 0xe73, rcx98, r8_16, r9_30, v3);
        *reinterpret_cast<int32_t*>(&rsi21) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx47) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx47) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx62 = r12_97;
        fun_e96(0xe84, 22, 1, rcx62, r8_16, r9_30, v3);
    }
    fun_cf5(rbx109, rsi21, rdx47, rcx62, r8_16, r9_30, v3);
    fun_cff(v4, rsi21, rdx47, rcx62, r8_16, r9_30, v3);
    fun_d07(r15_7, rsi21, rdx47, rcx62, r8_16, r9_30, v3);
    goto v110;
}

struct s54 {
    int32_t f0;
    int32_t f4;
};

struct s55 {
    int32_t f0;
    int32_t f4;
};

struct s56 {
    signed char[1] pad1;
    int32_t f1;
};

struct s57 {
    int32_t f0;
    int32_t f4;
};

struct s58 {
    int32_t f0;
    int32_t f2;
    int32_t f4;
};

struct s59 {
    int32_t f0;
    int32_t f4;
};

struct s60 {
    int32_t f0;
    int32_t f4;
};

struct s61 {
    int32_t f0;
    int32_t f4;
};

struct s62 {
    int32_t f0;
    int32_t f4;
};

struct s63 {
    int32_t f0;
    int32_t f4;
};

struct s64 {
    int32_t f0;
    int32_t f4;
};

struct s65 {
    int32_t f0;
    int32_t f4;
};

struct s66 {
    int32_t f0;
    int32_t f4;
};

struct s67 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_6bc(struct s34* rdi, struct s35* rsi) {
    struct s1* v3;
    int32_t* r15_4;
    int32_t* rax5;
    int64_t rax6;
    struct s54* rdi7;
    struct s55* rsi8;
    void* rcx9;
    int32_t* rcx10;
    int64_t rbx11;
    int64_t rsi12;
    int32_t* rsi13;
    int64_t rdi14;
    uint64_t r8_15;
    int32_t* r8_16;
    int32_t* rdi17;
    struct s56* rsi18;
    int32_t* r12_19;
    struct s57* rdi20;
    struct s57* v21;
    int32_t* rsi22;
    int32_t* v23;
    int32_t* v24;
    struct s0* v25;
    struct s0* r13_26;
    int32_t* rbx27;
    int32_t* r14_28;
    void* rbx29;
    void* rcx30;
    struct s0* r9_31;
    int32_t* v32;
    void* v33;
    int32_t* r10_34;
    void* rbp35;
    void* v36;
    uint64_t rax37;
    struct s58* rdi38;
    int32_t* rsi39;
    struct s59* rdi40;
    int32_t* rsi41;
    struct s60* rdi42;
    int32_t* rsi43;
    struct s61* rdi44;
    int32_t* rsi45;
    int32_t* rax46;
    int32_t* v47;
    int32_t* rsi48;
    struct s0* rdi49;
    int32_t* rdx50;
    int32_t* rsi51;
    int32_t* rbx52;
    struct s62* rdi53;
    int32_t* rdi54;
    struct s63* rsi55;
    void* rbx56;
    struct s64* rsi57;
    struct s65* rdi58;
    uint64_t rcx59;
    int32_t* rsi60;
    struct s66* rdi61;
    int32_t* rbx62;
    void* rdx63;
    int32_t* rbx64;
    int32_t* rcx65;
    int32_t* v66;
    struct s0* rdi67;
    void* rbx68;
    int32_t* r8_69;
    void* rbx70;
    int32_t* r9_71;
    void* v72;
    struct s0* r10_73;
    int64_t r11_74;
    struct s19* rdi75;
    int32_t* rsi76;
    struct s20* rdi77;
    int32_t* rsi78;
    struct s21* rdi79;
    int32_t* rsi80;
    struct s58* rdi81;
    int32_t* rsi82;
    struct s59* rdi83;
    int32_t* rsi84;
    struct s60* rdi85;
    int32_t* rsi86;
    void* r8_87;
    int32_t* rbx88;
    struct s61* rdi89;
    int32_t* rsi90;
    struct s57* rdi91;
    int32_t* rsi92;
    void* r8_93;
    int32_t* rbx94;
    int32_t* rdi95;
    int32_t* rsi96;
    struct s67* rdi97;
    int32_t v98;
    signed char** v99;
    int32_t** rax100;
    int32_t* r12_101;
    int32_t* rcx102;
    int32_t* rsi103;
    int64_t r14_104;
    int32_t* rdi105;
    int64_t rbp106;
    int64_t r13_107;
    int64_t r14_108;
    int32_t* rsi109;
    int32_t* rdi110;
    int64_t rbp111;
    int64_t r13_112;
    int32_t* rbx113;
    struct s1* v114;
    int64_t v115;

    v3 = reinterpret_cast<struct s1*>(__return_address());
    r15_4 = rax5;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s54*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s55*>(&rsi->f4);
    rdi7->f0 = rsi8->f0;
    rdi7->f4 = rsi8->f4;
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movapd xmm6, [rip+0x0]");
    __asm__("movapd xmm7, [rip+0x0]");
    __asm__("movapd xmm8, [rip+0x0]");
    __asm__("xorps xmm9, xmm9");
    __asm__("movdqa xmm10, [rip+0x0]");
    do {
        rcx9 = reinterpret_cast<void*>(rax6 * 0x2580);
        rcx10 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx9) + reinterpret_cast<int64_t>(r15_4));
        if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rcx10) - (reinterpret_cast<int64_t>(rcx9) + rbx11)) >= 16) {
            __asm__("movd xmm11, rax");
            __asm__("pshufd xmm11, xmm11, 0x44");
            *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
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
                rsi12 = rsi12 + 2;
                __asm__("paddq xmm12, xmm10");
            } while (rsi12 != 0x4b0);
        } else {
            *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(&rsi13) * *reinterpret_cast<int32_t*>(&rax6);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fputc);
                r8_15 = reinterpret_cast<uint64_t>(rdi14 * 0x10624dd3) >> 38;
                *reinterpret_cast<int32_t*>(&r8_16) = *reinterpret_cast<int32_t*>(&r8_15) * 0x3e8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<int32_t*>(&rdi14) - *reinterpret_cast<int32_t*>(&r8_16);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm11, xmm11");
                __asm__("cvtsi2sd xmm11, edi");
                __asm__("divsd xmm11, xmm0");
                __asm__("mulsd xmm11, xmm1");
                __asm__("addsd xmm11, xmm2");
                *rdi17 = *rsi13;
                rsi18 = reinterpret_cast<struct s56*>(rsi13 + 1);
                rcx10[reinterpret_cast<int64_t>(rsi18) * 2] = reinterpret_cast<int32_t>(fputc);
                rsi13 = &rsi18->f1;
            } while (!reinterpret_cast<int1_t>(rsi13 == 0x4b0));
        }
        ++rax6;
    } while (rax6 != 0x3e8);
    *reinterpret_cast<int32_t*>(&r12_19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_19) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi20 = v21;
    *reinterpret_cast<int32_t*>(&rsi22) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_88f();
    v23 = reinterpret_cast<int32_t*>(1);
    __asm__("pxor xmm3, xmm3");
    while (1) {
        v24 = r15_4 + reinterpret_cast<uint64_t>(r12_19) * 2;
        v25 = reinterpret_cast<struct s0*>(r15_4 + reinterpret_cast<uint64_t>(r12_19) * 2 + 0x2495a2);
        r13_26 = reinterpret_cast<struct s0*>(rbx27 + reinterpret_cast<uint64_t>(r12_19) * 2);
        r14_28 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx29) + reinterpret_cast<uint64_t>(r12_19) * 8 + 0x925688);
        rcx30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_19) * 0x2588);
        r9_31 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(v32) + reinterpret_cast<uint64_t>(rcx30));
        v33 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx30) + 8);
        r10_34 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(v32) + reinterpret_cast<uint64_t>(rcx30) + 8);
        rbp35 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_19) * 8 + 8);
        v36 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx30) + 16);
        *reinterpret_cast<int32_t*>(&rax37) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax37) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorpd xmm0, xmm0");
        do {
            rdi20->f0 = *rsi22;
            rdi38 = reinterpret_cast<struct s58*>(&rdi20->f4);
            rsi39 = rsi22 + 1;
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm1, xmm0");
            rdi38->f0 = *rsi39;
            rdi40 = reinterpret_cast<struct s59*>(&rdi38->f2);
            rsi41 = rsi39 + 1;
            __asm__("mulsd xmm0, xmm0");
            __asm__("addsd xmm0, xmm1");
            rdi40->f0 = *rsi41;
            rdi42 = reinterpret_cast<struct s60*>(&rdi40->f4);
            rsi43 = rsi41 + 1;
            __asm__("mulsd xmm1, xmm1");
            __asm__("addsd xmm1, xmm0");
            rdi42->f0 = *rsi43;
            rdi44 = reinterpret_cast<struct s61*>(&rdi42->f4);
            rsi45 = rsi43 + 1;
            __asm__("mulsd xmm2, xmm2");
            __asm__("addsd xmm2, xmm1");
            rdi44->f0 = *rsi45;
            rdi20 = reinterpret_cast<struct s57*>(&rdi44->f4);
            rsi22 = rsi45 + 1;
            __asm__("mulsd xmm0, xmm0");
            __asm__("addsd xmm0, xmm2");
            rax37 = rax37 + 5;
        } while (rax37 != 0x3e8);
        __asm__("ucomisd xmm0, xmm3");
        if (rax37 < 0x3e8) {
            fun_9af();
            r10_34 = r10_34;
            r9_31 = r9_31;
            __asm__("xorpd xmm3, xmm3");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rax46 = v47 + reinterpret_cast<uint64_t>(r12_19) * 0x960;
        rdi20->f0 = *rsi22;
        rsi48 = v24;
        rdi49 = v25;
        *reinterpret_cast<unsigned char*>(&r8_16) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r13_26) < reinterpret_cast<uint64_t>(rdi49));
        *reinterpret_cast<unsigned char*>(&rdi49) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_31) < reinterpret_cast<uint64_t>(rdi49));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi48) < reinterpret_cast<uint64_t>(r14_28))) & *reinterpret_cast<unsigned char*>(&r8_16)) == fputc)) {
            *reinterpret_cast<int32_t*>(&rdx50) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx50) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_a80_50;
        } else {
            *reinterpret_cast<int32_t*>(&rdx50) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx50) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<unsigned char*>(&rsi48) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi48) < reinterpret_cast<uint64_t>(r10_34))) & *reinterpret_cast<unsigned char*>(&rdi49));
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rsi48) == fputc)) {
                do {
                    addr_a80_50:
                    rsi51 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx50) * 0x2580);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx52) + reinterpret_cast<uint64_t>(rsi51)) = *rsi51;
                    __asm__("divsd xmm0, [rcx]");
                    rdi53 = reinterpret_cast<struct s62*>((reinterpret_cast<uint64_t>(rdx50) | 1) * 0x2580);
                    rdi53->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi51 + 1) + reinterpret_cast<int64_t>(r15_4));
                    rdi54 = &rdi53->f4;
                    rsi55 = reinterpret_cast<struct s63*>(reinterpret_cast<int64_t>(rbx56) + reinterpret_cast<uint64_t>(rdi54));
                    *rdi54 = rsi55->f0;
                    rsi57 = reinterpret_cast<struct s64*>(&rsi55->f4);
                    __asm__("divsd xmm0, [rcx]");
                    rdi58 = reinterpret_cast<struct s65*>(reinterpret_cast<uint64_t>(rdi54 + 1) + reinterpret_cast<int64_t>(r15_4));
                    rdi58->f0 = rsi57->f0;
                    rdi20 = reinterpret_cast<struct s57*>(&rdi58->f4);
                    rsi22 = &rsi57->f4;
                    rdx50 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx50) + 2);
                } while (!reinterpret_cast<int1_t>(rdx50 == 0x3e8));
            } else {
                rdi49->f0 = *rsi48;
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rcx59) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx59) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi60 = reinterpret_cast<int32_t*>(rcx59 * 0x2580);
                    rdi61 = reinterpret_cast<struct s66*>(reinterpret_cast<int64_t>(rbx62) + reinterpret_cast<uint64_t>(rsi60));
                    rdx63 = reinterpret_cast<void*>((rcx59 | 1) * 0x2580);
                    r8_16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx64) + reinterpret_cast<uint64_t>(rdx63));
                    rdi61->f0 = *rsi60;
                    rdi20 = reinterpret_cast<struct s57*>(&rdi61->f4);
                    __asm__("movhpd xmm1, [r8+r12*8]");
                    __asm__("divpd xmm1, xmm0");
                    rsi22 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi60 + 1) + reinterpret_cast<int64_t>(r15_4));
                    rdx50 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx63) + reinterpret_cast<int64_t>(r15_4));
                    __asm__("movlpd [rsi+r12*8], xmm1");
                    __asm__("movhpd [rdx+r12*8], xmm1");
                    rcx59 = rcx59 + 2;
                } while (rcx59 != 0x3e8);
            }
            rcx65 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_19) + 1);
            v66 = rcx65;
            if (reinterpret_cast<uint64_t>(r12_19) <= 0x4ae) {
                *reinterpret_cast<int32_t*>(&rcx65) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx65) + 4) = reinterpret_cast<int32_t>(fputc);
                rdx50 = v23;
                do {
                    rdi67 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rcx65) * 8 + reinterpret_cast<uint64_t>(rbp35) + reinterpret_cast<int64_t>(rbx68));
                    r8_69 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx65) * 8 + 0x925688 + reinterpret_cast<uint64_t>(rbp35) + reinterpret_cast<int64_t>(rbx70));
                    r9_71 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(v33) + reinterpret_cast<uint64_t>(rcx65) * 8 + reinterpret_cast<int64_t>(v72));
                    r10_73 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(v36) + reinterpret_cast<uint64_t>(rcx65) * 8 + reinterpret_cast<int64_t>(v72));
                    rsi22 = rax46 + reinterpret_cast<uint64_t>(rdx50) * 2;
                    rax46[reinterpret_cast<uint64_t>(rdx50) * 2] = reinterpret_cast<int32_t>(fputc);
                    __asm__("xorpd xmm0, xmm0");
                    *reinterpret_cast<int32_t*>(&r11_74) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_74) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi67->f0 = *rsi22;
                        rdi75 = reinterpret_cast<struct s19*>(&rdi67->f4);
                        rsi76 = rsi22 + 1;
                        __asm__("mulsd xmm1, [r13+rdx*8+0x0]");
                        __asm__("addsd xmm1, xmm0");
                        rdi75->f0 = *rsi76;
                        rdi77 = reinterpret_cast<struct s20*>(&rdi75->f4);
                        rsi78 = rsi76 + 1;
                        rdi77->f0 = *rsi78;
                        rdi79 = reinterpret_cast<struct s21*>(&rdi77->f4);
                        rsi80 = rsi78 + 1;
                        __asm__("mulsd xmm0, [r14+rdx*8]");
                        __asm__("addsd xmm0, xmm1");
                        rdi79->f0 = *rsi80;
                        rdi67 = reinterpret_cast<struct s0*>(&rdi79->f4);
                        rsi22 = rsi80 + 1;
                        r11_74 = r11_74 + 2;
                    } while (r11_74 != 0x3e8);
                    if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi67) < reinterpret_cast<uint64_t>(v25))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(v24) < reinterpret_cast<uint64_t>(r8_69)))) == fputc)) {
                        *reinterpret_cast<int32_t*>(&rdi20) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
                        goto addr_c70_91;
                    }
                    *reinterpret_cast<int32_t*>(&rdi20) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
                    if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi67) < reinterpret_cast<uint64_t>(r10_73))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_71) < reinterpret_cast<uint64_t>(r8_69)))) == fputc)) {
                        do {
                            addr_c70_91:
                            rdi20->f0 = *rsi22;
                            rdi81 = reinterpret_cast<struct s58*>(&rdi20->f4);
                            rsi82 = rsi22 + 1;
                            __asm__("mulsd xmm0, [rsi]");
                            rdi81->f0 = *rsi82;
                            rdi83 = reinterpret_cast<struct s59*>(&rdi81->f2);
                            rsi84 = rsi82 + 1;
                            __asm__("subsd xmm1, xmm0");
                            rdi83->f0 = *rsi84;
                            rdi85 = reinterpret_cast<struct s60*>(&rdi83->f4);
                            rsi86 = rsi84 + 1;
                            r8_87 = reinterpret_cast<void*>((reinterpret_cast<uint64_t>(rdi85) | 1) * 0x2580);
                            r9_31 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx88) + reinterpret_cast<uint64_t>(r8_87));
                            rdi85->f0 = *rsi86;
                            rdi89 = reinterpret_cast<struct s61*>(&rdi85->f4);
                            rsi90 = rsi86 + 1;
                            r8_16 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_87) + reinterpret_cast<int64_t>(r15_4));
                            rdi89->f0 = *rsi90;
                            rdi91 = reinterpret_cast<struct s57*>(&rdi89->f4);
                            rsi92 = rsi90 + 1;
                            __asm__("mulsd xmm1, [rsi]");
                            __asm__("subsd xmm0, xmm1");
                            rdi91->f0 = *rsi92;
                            rsi22 = rsi92 + 1;
                            rdi20 = reinterpret_cast<struct s57*>(reinterpret_cast<uint64_t>(&rdi91->f4) + 2);
                        } while (!reinterpret_cast<int1_t>(rdi20 == 0x3e8));
                    } else {
                        fputc = *rsi22;
                        __asm__("unpcklpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&rsi22) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
                        do {
                            r8_93 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi22) * 0x2580);
                            r9_31 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx94) + reinterpret_cast<uint64_t>(r8_93));
                            rdi95 = reinterpret_cast<int32_t*>((reinterpret_cast<uint64_t>(rsi22) | 1) * 0x2580);
                            *rdi95 = *rsi22;
                            rsi96 = rsi22 + 1;
                            __asm__("movhpd xmm1, [r10+rdx*8]");
                            r8_16 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_93) + reinterpret_cast<int64_t>(r15_4));
                            rdi97 = reinterpret_cast<struct s67*>(reinterpret_cast<uint64_t>(rdi95 + 1) + reinterpret_cast<int64_t>(r15_4));
                            rdi97->f0 = *rsi96;
                            rdi20 = reinterpret_cast<struct s57*>(&rdi97->f4);
                            __asm__("movhpd xmm2, [rdi+r12*8]");
                            __asm__("mulpd xmm2, xmm0");
                            __asm__("subpd xmm1, xmm2");
                            __asm__("movlpd [r9+rdx*8], xmm1");
                            __asm__("movhpd [r10+rdx*8], xmm1");
                            rsi22 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi96 + 1) + 2);
                        } while (!reinterpret_cast<int1_t>(rsi22 == 0x3e8));
                        continue;
                    }
                    rdx50 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdx50) + 1);
                    rcx65 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx65) + 1);
                } while (rdx50 != 0x4b0);
            }
            v23 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(v23) + 1);
            r12_19 = v66;
            if (r12_19 == 0x4b0) 
                break;
        }
    }
    if (v98 >= 43 && **v99 == fputc) {
        rax100 = gd1f;
        r12_101 = *rax100;
        rcx102 = r12_101;
        fun_d3b(0xd29, 22, 1, rcx102, r8_16, r9_31, v3);
        rsi103 = reinterpret_cast<int32_t*>(0xd42);
        *reinterpret_cast<int32_t*>(&r14_104) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_104) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi105 = r12_101;
        fun_d56();
        do {
            rbp106 = r14_104 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_107) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_107) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_107 + rbp106) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi105) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi105) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi103 = r12_101;
                    fun_d8c();
                }
                *rdi105 = *rsi103;
                rdi105 = r12_101;
                rsi103 = reinterpret_cast<int32_t*>(0xda8);
                fun_daf();
                ++r13_107;
            } while (r13_107 != 0x4b0);
            ++r14_104;
        } while (r14_104 != 0x4b0);
        *reinterpret_cast<int32_t*>(&r14_108) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_108) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_de2(r12_101, 0xdce, 0xdd5, rcx102, r8_16, r9_31, v3);
        rsi109 = reinterpret_cast<int32_t*>(0xde9);
        rdi110 = r12_101;
        fun_dfa();
        do {
            rbp111 = r14_108 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_112) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_112) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_112 + rbp111) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi110) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi110) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi109 = r12_101;
                    fun_e2c();
                }
                *rdi110 = *rsi109;
                rdi110 = r12_101;
                rsi109 = reinterpret_cast<int32_t*>(0xe46);
                fun_e4d();
                ++r13_112;
            } while (r13_112 != 0x4b0);
            ++r14_108;
        } while (r14_108 != 0x3e8);
        fun_e7d(r12_101, 0xe6c, 0xe73, rcx102, r8_16, r9_31, v3);
        *reinterpret_cast<int32_t*>(&rsi22) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx50) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx50) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx65 = r12_101;
        fun_e96(0xe84, 22, 1, rcx65, r8_16, r9_31, v3);
    }
    fun_cf5(rbx113, rsi22, rdx50, rcx65, r8_16, r9_31, v3);
    fun_cff(v114, rsi22, rdx50, rcx65, r8_16, r9_31, v3);
    fun_d07(r15_4, rsi22, rdx50, rcx65, r8_16, r9_31, v3);
    goto v115;
}

void fputc() {
}

void fun_7c(int64_t rdi) {
}

struct s68 {
    int32_t f0;
    int32_t f4;
};

struct s69 {
    int32_t f0;
    int32_t f4;
};

struct s70 {
    int32_t f0;
    int32_t f4;
};

void fun_d8() {
    int1_t less_or_equal1;
    int64_t r14_2;
    int64_t r14_3;
    struct s2* rcx4;
    uint32_t ebp5;
    struct s2* rdi6;
    struct s3* rsi7;
    struct s4* rdi8;
    struct s68* rsi9;
    struct s2* rdi10;
    struct s69* rsi11;
    struct s4* rdi12;
    struct s70* rsi13;
    int1_t cf14;
    struct s3* rcx15;

    if (less_or_equal1) {
        *reinterpret_cast<int64_t*>(r14_2 * 0x2580 + reinterpret_cast<int64_t>(__return_address()) + r14_3 * 8) = reinterpret_cast<int64_t>(fputc);
        goto 0x370;
    } else {
        __asm__("xorpd xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&rcx4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = reinterpret_cast<int32_t>(fputc);
        if (ebp5 >= 4) {
            do {
                rdi6->f0 = rsi7->f0;
                rdi8 = reinterpret_cast<struct s4*>(&rdi6->f4);
                rsi9 = reinterpret_cast<struct s68*>(&rsi7->f4);
                __asm__("mulsd xmm1, xmm1");
                __asm__("addsd xmm1, xmm0");
                rdi8->f0 = rsi9->f0;
                rdi10 = reinterpret_cast<struct s2*>(&rdi8->f4);
                rsi11 = reinterpret_cast<struct s69*>(&rsi9->f4);
                __asm__("mulsd xmm0, xmm0");
                __asm__("addsd xmm0, xmm1");
                rdi10->f0 = rsi11->f0;
                rdi12 = reinterpret_cast<struct s4*>(&rdi10->f4);
                rsi13 = reinterpret_cast<struct s70*>(&rsi11->f4);
                __asm__("mulsd xmm1, xmm1");
                __asm__("addsd xmm1, xmm0");
                rdi12->f0 = rsi13->f0;
                rdi6 = reinterpret_cast<struct s2*>(&rdi12->f4);
                rsi7 = reinterpret_cast<struct s3*>(&rsi13->f4);
                __asm__("mulsd xmm0, xmm0");
                __asm__("addsd xmm0, xmm1");
                rcx4 = reinterpret_cast<struct s2*>(&rcx4->f4);
            } while (rcx4 != rdi6);
        }
        cf14 = reinterpret_cast<int1_t>(fputc);
        if (rsi7 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi6->f0 = rsi7->f0;
                rdi6 = reinterpret_cast<struct s2*>(&rdi6->f4);
                rsi7 = reinterpret_cast<struct s3*>(&rsi7->f4);
                __asm__("mulsd xmm1, xmm1");
                __asm__("addsd xmm0, xmm1");
                rcx15 = reinterpret_cast<struct s3*>(reinterpret_cast<uint64_t>(rcx15) + 1);
                cf14 = reinterpret_cast<uint64_t>(rcx15) < reinterpret_cast<uint64_t>(rsi7);
            } while (rcx15 != rsi7);
        }
        __asm__("ucomisd xmm0, xmm3");
        if (cf14) {
            fun_1ea(rdi6, rsi7);
        } else {
            __asm__("sqrtsd xmm0, xmm0");
            goto 0x1f3;
        }
    }
}

void fun_653() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_696(0x124f80, 8);
}

