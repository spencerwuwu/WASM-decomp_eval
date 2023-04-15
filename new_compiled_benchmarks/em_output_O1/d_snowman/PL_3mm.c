
void fun_262();

void free();

void fun_284(int64_t rdi, int64_t rsi, int64_t rdx);

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

void fun_23f() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* rbx3;
    int64_t r14_4;
    int64_t r13_5;
    int64_t rbp6;
    int64_t r12_7;
    int32_t v8;
    int64_t r15_9;
    int64_t r12_10;
    int32_t* rbx11;
    int64_t rbx12;
    struct s0* rdi13;
    struct s1* rsi14;
    int64_t rcx15;
    int64_t rbx16;
    int32_t v17;
    int64_t r15_18;
    int64_t r12_19;
    int64_t* r9_20;
    int64_t rbp21;
    struct s2* rdi22;
    struct s3* rsi23;
    int64_t* rdx24;
    int64_t* v25;
    int64_t rcx26;
    int64_t r15_27;
    int32_t r8d28;
    int64_t r12_29;
    int64_t r13_30;
    int32_t r8d31;
    int32_t r8d32;
    int64_t rax33;
    struct s2* rdi34;
    struct s3* rsi35;
    struct s4* rdi36;
    struct s4* v37;
    int64_t r8_38;
    int64_t rbx39;
    int64_t rax40;
    struct s5* rdi41;
    struct s3* rsi42;
    int64_t v43;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = rbx3;
        rsi2 = reinterpret_cast<int32_t*>(0x25b);
        fun_262();
        ++r14_4;
        if (r14_4 == r13_5) {
            do {
                ++rbp6;
                if (rbp6 == r12_7) 
                    goto addr_26c_8;
            } while (v8 <= reinterpret_cast<int32_t>(free));
            r15_9 = rbp6 * r12_10;
            *reinterpret_cast<int32_t*>(&r14_4) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_4) + 4) = reinterpret_cast<int32_t>(free);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_4 + r15_9) * 0xcccccccd + 0x19999998) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(free);
        rsi2 = rbx11;
        fun_23f();
    }
    addr_26c_8:
    fun_284(rbx12, 0x273, 0x27a);
    rdi13 = reinterpret_cast<struct s0*>(0x28b);
    *reinterpret_cast<int32_t*>(&rsi14) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
    rcx15 = rbx16;
    v17 = *reinterpret_cast<int32_t*>(&rcx15);
    if (!free) {
        *reinterpret_cast<int32_t*>(&r15_18) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_18) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi14) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi14) == free))) {
                *reinterpret_cast<int32_t*>(&r12_19) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_19) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r9_20 + r15_18 * 0x384)[r12_19] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        rdi13->f0 = rsi14->f0;
                        rdi13 = reinterpret_cast<struct s0*>(&rdi13->f4);
                        rsi14 = reinterpret_cast<struct s1*>(&rsi14->f4);
                        *reinterpret_cast<int32_t*>(&rbp21) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp21) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi13->f0 = rsi14->f0;
                            rdi22 = reinterpret_cast<struct s2*>(&rdi13->f4);
                            rsi23 = reinterpret_cast<struct s3*>(&rsi14->f4);
                            __asm__("mulsd xmm1, [rax+r12*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi22->f0 = rsi23->f0;
                            rdi13 = reinterpret_cast<struct s0*>(&rdi22->f4);
                            rsi14 = reinterpret_cast<struct s1*>(&rsi23->f4);
                            ++rbp21;
                        } while (rbp21 != 1);
                    }
                    ++r12_19;
                } while (r12_19 != 22);
            }
            ++r15_18;
        } while (r15_18 != 0x28b);
    }
    rdx24 = v25;
    *reinterpret_cast<int32_t*>(&rcx26) = v17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = reinterpret_cast<int32_t>(free);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi14) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi14) == free))) {
        *reinterpret_cast<int32_t*>(&r15_27) = r8d28;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_27) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r12_29) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_29) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v17 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&r13_30) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_30) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdx24 + r12_29 * 0x44c)[r13_30] = reinterpret_cast<int64_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r8d31 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r8d32 == free))) {
                        rdi13->f0 = rsi14->f0;
                        rdi13 = reinterpret_cast<struct s0*>(&rdi13->f4);
                        rsi14 = reinterpret_cast<struct s1*>(&rsi14->f4);
                        *reinterpret_cast<int32_t*>(&rax33) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax33) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi13->f0 = rsi14->f0;
                            rdi34 = reinterpret_cast<struct s2*>(&rdi13->f4);
                            rsi35 = reinterpret_cast<struct s3*>(&rsi14->f4);
                            __asm__("mulsd xmm1, [r11+r13*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi34->f0 = rsi35->f0;
                            rdi13 = reinterpret_cast<struct s0*>(&rdi34->f4);
                            rsi14 = reinterpret_cast<struct s1*>(&rsi35->f4);
                            ++rax33;
                        } while (rax33 != r15_27);
                    }
                    ++r13_30;
                } while (r13_30 != rcx26);
            }
            ++r12_29;
        } while (r12_29 != 22);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi13) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi13) == free))) {
        rdi36 = v37;
        *reinterpret_cast<int32_t*>(&r8_38) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_38) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v17 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&rbx39) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx39) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdi36 + r8_38 * 0x44c + rbx39)->f0 = reinterpret_cast<int32_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi14) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi14) == free))) {
                        rdi36->f0 = rsi14->f0;
                        rdi36 = reinterpret_cast<struct s4*>(&rdi36->f4);
                        rsi14 = reinterpret_cast<struct s1*>(&rsi14->f4);
                        *reinterpret_cast<int32_t*>(&rax40) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax40) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi36->f0 = rsi14->f0;
                            rdi41 = reinterpret_cast<struct s5*>(&rdi36->f4);
                            rsi42 = reinterpret_cast<struct s3*>(&rsi14->f4);
                            __asm__("mulsd xmm1, [r11+rbx*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi41->f0 = rsi42->f0;
                            rdi36 = reinterpret_cast<struct s4*>(&rdi41->f4);
                            rsi14 = reinterpret_cast<struct s1*>(&rsi42->f4);
                            ++rax40;
                        } while (rax40 != 22);
                    }
                    ++rbx39;
                } while (rbx39 != rcx26);
            }
            ++r8_38;
        } while (r8_38 != 0x28b);
    }
    goto v43;
}

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

void fun_262() {
    int64_t r14_1;
    int64_t r13_2;
    int64_t rbp3;
    int64_t r12_4;
    int32_t v5;
    int64_t r15_6;
    int64_t r12_7;
    int32_t* rdi8;
    int32_t* rsi9;
    int32_t* rbx10;
    int32_t* rbx11;
    int64_t rbx12;
    struct s6* rdi13;
    struct s7* rsi14;
    int64_t rcx15;
    int64_t rbx16;
    int32_t v17;
    int64_t r15_18;
    int64_t r12_19;
    int64_t* r9_20;
    int64_t rbp21;
    struct s8* rdi22;
    struct s9* rsi23;
    int64_t* rdx24;
    int64_t* v25;
    int64_t rcx26;
    int64_t r15_27;
    int32_t r8d28;
    int64_t r12_29;
    int64_t r13_30;
    int32_t r8d31;
    int32_t r8d32;
    int64_t rax33;
    struct s8* rdi34;
    struct s9* rsi35;
    struct s10* rdi36;
    struct s10* v37;
    int64_t r8_38;
    int64_t rbx39;
    int64_t rax40;
    struct s11* rdi41;
    struct s9* rsi42;
    int64_t v43;

    while (1) {
        ++r14_1;
        if (r14_1 == r13_2) {
            do {
                ++rbp3;
                if (rbp3 == r12_4) 
                    goto addr_26c_4;
            } while (v5 <= reinterpret_cast<int32_t>(free));
            r15_6 = rbp3 * r12_7;
            *reinterpret_cast<int32_t*>(&r14_1) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_1) + 4) = reinterpret_cast<int32_t>(free);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_1 + r15_6) * 0xcccccccd + 0x19999998) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi8) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(free);
            rsi9 = rbx10;
            fun_23f();
        }
        *rdi8 = *rsi9;
        rdi8 = rbx11;
        rsi9 = reinterpret_cast<int32_t*>(0x25b);
        fun_262();
    }
    addr_26c_4:
    fun_284(rbx12, 0x273, 0x27a);
    rdi13 = reinterpret_cast<struct s6*>(0x28b);
    *reinterpret_cast<int32_t*>(&rsi14) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
    rcx15 = rbx16;
    v17 = *reinterpret_cast<int32_t*>(&rcx15);
    if (!free) {
        *reinterpret_cast<int32_t*>(&r15_18) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_18) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi14) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi14) == free))) {
                *reinterpret_cast<int32_t*>(&r12_19) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_19) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r9_20 + r15_18 * 0x384)[r12_19] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        rdi13->f0 = rsi14->f0;
                        rdi13 = reinterpret_cast<struct s6*>(&rdi13->f4);
                        rsi14 = reinterpret_cast<struct s7*>(&rsi14->f4);
                        *reinterpret_cast<int32_t*>(&rbp21) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp21) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi13->f0 = rsi14->f0;
                            rdi22 = reinterpret_cast<struct s8*>(&rdi13->f4);
                            rsi23 = reinterpret_cast<struct s9*>(&rsi14->f4);
                            __asm__("mulsd xmm1, [rax+r12*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi22->f0 = rsi23->f0;
                            rdi13 = reinterpret_cast<struct s6*>(&rdi22->f4);
                            rsi14 = reinterpret_cast<struct s7*>(&rsi23->f4);
                            ++rbp21;
                        } while (rbp21 != 1);
                    }
                    ++r12_19;
                } while (r12_19 != 22);
            }
            ++r15_18;
        } while (r15_18 != 0x28b);
    }
    rdx24 = v25;
    *reinterpret_cast<int32_t*>(&rcx26) = v17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = reinterpret_cast<int32_t>(free);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi14) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi14) == free))) {
        *reinterpret_cast<int32_t*>(&r15_27) = r8d28;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_27) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r12_29) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_29) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v17 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&r13_30) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_30) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdx24 + r12_29 * 0x44c)[r13_30] = reinterpret_cast<int64_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r8d31 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r8d32 == free))) {
                        rdi13->f0 = rsi14->f0;
                        rdi13 = reinterpret_cast<struct s6*>(&rdi13->f4);
                        rsi14 = reinterpret_cast<struct s7*>(&rsi14->f4);
                        *reinterpret_cast<int32_t*>(&rax33) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax33) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi13->f0 = rsi14->f0;
                            rdi34 = reinterpret_cast<struct s8*>(&rdi13->f4);
                            rsi35 = reinterpret_cast<struct s9*>(&rsi14->f4);
                            __asm__("mulsd xmm1, [r11+r13*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi34->f0 = rsi35->f0;
                            rdi13 = reinterpret_cast<struct s6*>(&rdi34->f4);
                            rsi14 = reinterpret_cast<struct s7*>(&rsi35->f4);
                            ++rax33;
                        } while (rax33 != r15_27);
                    }
                    ++r13_30;
                } while (r13_30 != rcx26);
            }
            ++r12_29;
        } while (r12_29 != 22);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi13) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi13) == free))) {
        rdi36 = v37;
        *reinterpret_cast<int32_t*>(&r8_38) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_38) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v17 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&rbx39) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx39) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdi36 + r8_38 * 0x44c + rbx39)->f0 = reinterpret_cast<int32_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi14) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi14) == free))) {
                        rdi36->f0 = rsi14->f0;
                        rdi36 = reinterpret_cast<struct s10*>(&rdi36->f4);
                        rsi14 = reinterpret_cast<struct s7*>(&rsi14->f4);
                        *reinterpret_cast<int32_t*>(&rax40) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax40) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi36->f0 = rsi14->f0;
                            rdi41 = reinterpret_cast<struct s11*>(&rdi36->f4);
                            rsi42 = reinterpret_cast<struct s9*>(&rsi14->f4);
                            __asm__("mulsd xmm1, [r11+rbx*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi41->f0 = rsi42->f0;
                            rdi36 = reinterpret_cast<struct s10*>(&rdi41->f4);
                            rsi14 = reinterpret_cast<struct s7*>(&rsi42->f4);
                            ++rax40;
                        } while (rax40 != 22);
                    }
                    ++rbx39;
                } while (rbx39 != rcx26);
            }
            ++r8_38;
        } while (r8_38 != 0x28b);
    }
    goto v43;
}

struct s12 {
    int32_t f0;
    int32_t f4;
};

void fun_91f(int32_t* rdi, struct s12* rsi, int64_t* rdx);

void fun_927(int32_t* rdi, struct s12* rsi, int64_t* rdx);

void fun_92f(int32_t* rdi, struct s12* rsi, int64_t* rdx);

void fun_937(int32_t* rdi, struct s12* rsi, int64_t* rdx);

void fun_93f(int32_t* rdi, struct s12* rsi, int64_t* rdx);

void fun_947(int32_t* rdi, struct s12* rsi, int64_t* rdx);

void fun_951(int64_t* rdi, struct s12* rsi, int64_t* rdx);

void fun_917(int64_t rdi, struct s12* rsi, int64_t* rdx) {
    int32_t* rbx4;
    int32_t* r14_5;
    int32_t* r12_6;
    int32_t* r13_7;
    int32_t* r15_8;
    int32_t* rbp9;
    int64_t* v10;
    int64_t v11;

    fun_91f(rbx4, rsi, rdx);
    fun_927(r14_5, rsi, rdx);
    fun_92f(r12_6, rsi, rdx);
    fun_937(r13_7, rsi, rdx);
    fun_93f(r15_8, rsi, rdx);
    fun_947(rbp9, rsi, rdx);
    fun_951(v10, rsi, rdx);
    goto v11;
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

void fun_284(int64_t rdi, int64_t rsi, int64_t rdx) {
    struct s13* rdi4;
    struct s14* rsi5;
    int64_t rcx6;
    int64_t rbx7;
    int32_t v8;
    int64_t r15_9;
    int64_t r12_10;
    int64_t* r9_11;
    int64_t rbp12;
    struct s15* rdi13;
    struct s16* rsi14;
    int64_t* rdx15;
    int64_t* v16;
    int64_t rcx17;
    int64_t r15_18;
    int32_t r8d19;
    int64_t r12_20;
    int64_t r13_21;
    int32_t r8d22;
    int32_t r8d23;
    int64_t rax24;
    struct s15* rdi25;
    struct s16* rsi26;
    struct s17* rdi27;
    struct s17* v28;
    int64_t r8_29;
    int64_t rbx30;
    int64_t rax31;
    struct s18* rdi32;
    struct s16* rsi33;
    int64_t v34;

    rdi4 = reinterpret_cast<struct s13*>(0x28b);
    *reinterpret_cast<int32_t*>(&rsi5) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(free);
    rcx6 = rbx7;
    v8 = *reinterpret_cast<int32_t*>(&rcx6);
    if (!free) {
        *reinterpret_cast<int32_t*>(&r15_9) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_9) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi5) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi5) == free))) {
                *reinterpret_cast<int32_t*>(&r12_10) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_10) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r9_11 + r15_9 * 0x384)[r12_10] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        rdi4->f0 = rsi5->f0;
                        rdi4 = reinterpret_cast<struct s13*>(&rdi4->f4);
                        rsi5 = reinterpret_cast<struct s14*>(&rsi5->f4);
                        *reinterpret_cast<int32_t*>(&rbp12) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp12) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi4->f0 = rsi5->f0;
                            rdi13 = reinterpret_cast<struct s15*>(&rdi4->f4);
                            rsi14 = reinterpret_cast<struct s16*>(&rsi5->f4);
                            __asm__("mulsd xmm1, [rax+r12*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi13->f0 = rsi14->f0;
                            rdi4 = reinterpret_cast<struct s13*>(&rdi13->f4);
                            rsi5 = reinterpret_cast<struct s14*>(&rsi14->f4);
                            ++rbp12;
                        } while (rbp12 != 1);
                    }
                    ++r12_10;
                } while (r12_10 != 22);
            }
            ++r15_9;
        } while (r15_9 != 0x28b);
    }
    rdx15 = v16;
    *reinterpret_cast<int32_t*>(&rcx17) = v8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(free);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi5) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi5) == free))) {
        *reinterpret_cast<int32_t*>(&r15_18) = r8d19;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_18) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r12_20) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v8 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&r13_21) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_21) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdx15 + r12_20 * 0x44c)[r13_21] = reinterpret_cast<int64_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r8d22 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r8d23 == free))) {
                        rdi4->f0 = rsi5->f0;
                        rdi4 = reinterpret_cast<struct s13*>(&rdi4->f4);
                        rsi5 = reinterpret_cast<struct s14*>(&rsi5->f4);
                        *reinterpret_cast<int32_t*>(&rax24) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi4->f0 = rsi5->f0;
                            rdi25 = reinterpret_cast<struct s15*>(&rdi4->f4);
                            rsi26 = reinterpret_cast<struct s16*>(&rsi5->f4);
                            __asm__("mulsd xmm1, [r11+r13*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi25->f0 = rsi26->f0;
                            rdi4 = reinterpret_cast<struct s13*>(&rdi25->f4);
                            rsi5 = reinterpret_cast<struct s14*>(&rsi26->f4);
                            ++rax24;
                        } while (rax24 != r15_18);
                    }
                    ++r13_21;
                } while (r13_21 != rcx17);
            }
            ++r12_20;
        } while (r12_20 != 22);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi4) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi4) == free))) {
        rdi27 = v28;
        *reinterpret_cast<int32_t*>(&r8_29) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_29) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v8 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&rbx30) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx30) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdi27 + r8_29 * 0x44c + rbx30)->f0 = reinterpret_cast<int32_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi5) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi5) == free))) {
                        rdi27->f0 = rsi5->f0;
                        rdi27 = reinterpret_cast<struct s17*>(&rdi27->f4);
                        rsi5 = reinterpret_cast<struct s14*>(&rsi5->f4);
                        *reinterpret_cast<int32_t*>(&rax31) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax31) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi27->f0 = rsi5->f0;
                            rdi32 = reinterpret_cast<struct s18*>(&rdi27->f4);
                            rsi33 = reinterpret_cast<struct s16*>(&rsi5->f4);
                            __asm__("mulsd xmm1, [r11+rbx*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi32->f0 = rsi33->f0;
                            rdi27 = reinterpret_cast<struct s17*>(&rdi32->f4);
                            rsi5 = reinterpret_cast<struct s14*>(&rsi33->f4);
                            ++rax31;
                        } while (rax31 != 22);
                    }
                    ++rbx30;
                } while (rbx30 != rcx17);
            }
            ++r8_29;
        } while (r8_29 != 0x28b);
    }
    goto v34;
}

void fun_91f(int32_t* rdi, struct s12* rsi, int64_t* rdx) {
    int32_t* r14_4;
    int32_t* r12_5;
    int32_t* r13_6;
    int32_t* r15_7;
    int32_t* rbp8;
    int64_t* v9;
    int64_t v10;

    fun_927(r14_4, rsi, rdx);
    fun_92f(r12_5, rsi, rdx);
    fun_937(r13_6, rsi, rdx);
    fun_93f(r15_7, rsi, rdx);
    fun_947(rbp8, rsi, rdx);
    fun_951(v9, rsi, rdx);
    goto v10;
}

void fun_1e5();

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

void fun_1cd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int32_t r8d, int64_t* r9) {
    int32_t* rsi7;
    int32_t* rdi8;
    int32_t* rbx9;
    int32_t r15d10;
    int32_t r15d11;
    int64_t r12_12;
    int32_t r15d13;
    int64_t r13_14;
    int32_t v15;
    int64_t rbp16;
    int32_t v17;
    int64_t r15_18;
    int64_t r14_19;
    int32_t* rbx20;
    int32_t* rbx21;
    int64_t rbx22;
    struct s19* rdi23;
    struct s20* rsi24;
    int64_t rcx25;
    int64_t rbx26;
    int32_t v27;
    int64_t r15_28;
    int64_t r12_29;
    int64_t rbp30;
    struct s21* rdi31;
    struct s22* rsi32;
    int64_t* rdx33;
    int64_t* v34;
    int64_t rcx35;
    int64_t r15_36;
    int64_t r12_37;
    int64_t r13_38;
    int64_t rax39;
    struct s21* rdi40;
    struct s22* rsi41;
    struct s23* rdi42;
    struct s23* v43;
    int64_t r8_44;
    int64_t rbx45;
    int64_t rax46;
    struct s24* rdi47;
    struct s22* rsi48;
    int64_t v49;

    rsi7 = reinterpret_cast<int32_t*>(0x1d4);
    rdi8 = rbx9;
    fun_1e5();
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r15d10 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r15d11 == free))) {
        *reinterpret_cast<int32_t*>(&r12_12) = r15d13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_12) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_14) = v15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_14) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&rbp16) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp16) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v17 > reinterpret_cast<int32_t>(free)) {
                r15_18 = rbp16 * r12_12;
                *reinterpret_cast<int32_t*>(&r14_19) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_19) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_19 + r15_18) * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                        *reinterpret_cast<int32_t*>(&rdi8) = 10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(free);
                        rsi7 = rbx20;
                        fun_23f();
                    }
                    *rdi8 = *rsi7;
                    rdi8 = rbx21;
                    rsi7 = reinterpret_cast<int32_t*>(0x25b);
                    fun_262();
                    ++r14_19;
                } while (r14_19 != r13_14);
            }
            ++rbp16;
        } while (rbp16 != r12_12);
    }
    fun_284(rbx22, 0x273, 0x27a);
    rdi23 = reinterpret_cast<struct s19*>(0x28b);
    *reinterpret_cast<int32_t*>(&rsi24) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(free);
    rcx25 = rbx26;
    v27 = *reinterpret_cast<int32_t*>(&rcx25);
    if (!free) {
        *reinterpret_cast<int32_t*>(&r15_28) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_28) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi24) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi24) == free))) {
                *reinterpret_cast<int32_t*>(&r12_29) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_29) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r9 + r15_28 * 0x384)[r12_29] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        rdi23->f0 = rsi24->f0;
                        rdi23 = reinterpret_cast<struct s19*>(&rdi23->f4);
                        rsi24 = reinterpret_cast<struct s20*>(&rsi24->f4);
                        *reinterpret_cast<int32_t*>(&rbp30) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp30) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi23->f0 = rsi24->f0;
                            rdi31 = reinterpret_cast<struct s21*>(&rdi23->f4);
                            rsi32 = reinterpret_cast<struct s22*>(&rsi24->f4);
                            __asm__("mulsd xmm1, [rax+r12*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi31->f0 = rsi32->f0;
                            rdi23 = reinterpret_cast<struct s19*>(&rdi31->f4);
                            rsi24 = reinterpret_cast<struct s20*>(&rsi32->f4);
                            ++rbp30;
                        } while (rbp30 != 1);
                    }
                    ++r12_29;
                } while (r12_29 != 22);
            }
            ++r15_28;
        } while (r15_28 != 0x28b);
    }
    rdx33 = v34;
    *reinterpret_cast<int32_t*>(&rcx35) = v27;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(free);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi24) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi24) == free))) {
        *reinterpret_cast<int32_t*>(&r15_36) = r8d;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_36) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r12_37) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_37) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v27 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&r13_38) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_38) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdx33 + r12_37 * 0x44c)[r13_38] = reinterpret_cast<int64_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r8d < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r8d == free))) {
                        rdi23->f0 = rsi24->f0;
                        rdi23 = reinterpret_cast<struct s19*>(&rdi23->f4);
                        rsi24 = reinterpret_cast<struct s20*>(&rsi24->f4);
                        *reinterpret_cast<int32_t*>(&rax39) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi23->f0 = rsi24->f0;
                            rdi40 = reinterpret_cast<struct s21*>(&rdi23->f4);
                            rsi41 = reinterpret_cast<struct s22*>(&rsi24->f4);
                            __asm__("mulsd xmm1, [r11+r13*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi40->f0 = rsi41->f0;
                            rdi23 = reinterpret_cast<struct s19*>(&rdi40->f4);
                            rsi24 = reinterpret_cast<struct s20*>(&rsi41->f4);
                            ++rax39;
                        } while (rax39 != r15_36);
                    }
                    ++r13_38;
                } while (r13_38 != rcx35);
            }
            ++r12_37;
        } while (r12_37 != 22);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi23) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi23) == free))) {
        rdi42 = v43;
        *reinterpret_cast<int32_t*>(&r8_44) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_44) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v27 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&rbx45) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx45) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdi42 + r8_44 * 0x44c + rbx45)->f0 = reinterpret_cast<int32_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi24) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi24) == free))) {
                        rdi42->f0 = rsi24->f0;
                        rdi42 = reinterpret_cast<struct s23*>(&rdi42->f4);
                        rsi24 = reinterpret_cast<struct s20*>(&rsi24->f4);
                        *reinterpret_cast<int32_t*>(&rax46) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi42->f0 = rsi24->f0;
                            rdi47 = reinterpret_cast<struct s24*>(&rdi42->f4);
                            rsi48 = reinterpret_cast<struct s22*>(&rsi24->f4);
                            __asm__("mulsd xmm1, [r11+rbx*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi47->f0 = rsi48->f0;
                            rdi42 = reinterpret_cast<struct s23*>(&rdi47->f4);
                            rsi24 = reinterpret_cast<struct s20*>(&rsi48->f4);
                            ++rax46;
                        } while (rax46 != 22);
                    }
                    ++rbx45;
                } while (rbx45 != rcx35);
            }
            ++r8_44;
        } while (r8_44 != 0x28b);
    }
    goto v49;
}

int32_t* fun_508(int64_t rdi, int64_t rsi);

int32_t* fun_51a(int64_t rdi, int64_t rsi);

int32_t* fun_52c(int64_t rdi, int64_t rsi);

int32_t* fun_53e(int64_t rdi, int64_t rsi);

int32_t* fun_550(int64_t rdi, int64_t rsi);

int64_t* fun_562(int32_t* rdi, int32_t* rsi);

int32_t gd6d80;

/* .LCPI3_1 */
int32_t LCPI3_1 = 0x85d38941;

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
    int32_t f1;
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

struct s36 {
    int32_t f0;
    int32_t f4;
};

struct s37 {
    int32_t f0;
    int32_t f4;
};

void fun_4f6(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int32_t* rbx4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* r14_7;
    int32_t* rax8;
    int32_t* r12_9;
    int32_t* rax10;
    int32_t* r13_11;
    int32_t* rax12;
    int32_t* r15_13;
    int32_t* rax14;
    int32_t* rbp15;
    int64_t* rax16;
    int64_t r10_17;
    int64_t rcx18;
    int64_t rdx19;
    uint64_t rdi20;
    uint64_t r8_21;
    int64_t rdi22;
    struct s25* rdi23;
    struct s26* rsi24;
    int64_t rcx25;
    struct s27* rdx26;
    struct s28* rsi27;
    struct s29* rdi28;
    struct s27* rsi29;
    int64_t rdx30;
    int64_t r9_31;
    uint64_t rdi32;
    uint64_t r8_33;
    int64_t rdi34;
    struct s30* rdi35;
    struct s31* rsi36;
    int64_t r9_37;
    int64_t rcx38;
    uint64_t rdi39;
    uint64_t r8_40;
    int64_t rdi41;
    int32_t* rdi42;
    int64_t rcx43;
    int64_t rdx44;
    int32_t* rdi45;
    struct s32* rsi46;
    struct s33* rdi47;
    int32_t* rdi48;
    struct s34* rsi49;
    int64_t r9_50;
    int64_t rdx51;
    int32_t* rdi52;
    struct s35* rsi53;
    struct s36* rdi54;
    int32_t* rdi55;
    struct s37* rsi56;
    int64_t rcx57;
    int64_t* rsi58;
    int64_t* rdx59;
    struct s12* rsi60;
    int32_t* rsi61;
    signed char** v62;
    int64_t v63;

    v3 = reinterpret_cast<int64_t>(__return_address());
    rbx4 = rax5;
    rax6 = fun_508(0xc3500, 8);
    r14_7 = rax6;
    rax8 = fun_51a(0xdbba0, 8);
    r12_9 = rax8;
    rax10 = fun_52c(0xf1b30, 8);
    r13_11 = rax10;
    rax12 = fun_53e(0x107ac0, 8);
    r15_13 = rax12;
    rax14 = fun_550(0x142440, 8);
    rbp15 = rax14;
    rax16 = fun_562(0xd6d80, 8);
    *reinterpret_cast<int32_t*>(&r10_17) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_17) + 4) = reinterpret_cast<int32_t>(free);
    gd6d80 = LCPI3_1;
    *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi20 = (*reinterpret_cast<int32_t*>(&rdx19) * *reinterpret_cast<int32_t*>(&rcx18) + 1) * 0x51eb851f;
            r8_21 = rdi20 >> 63;
            rdi22 = reinterpret_cast<int64_t>(rdi20) >> 40;
            *reinterpret_cast<int32_t*>(&rdi23) = (*reinterpret_cast<int32_t*>(&rdi22) + *reinterpret_cast<int32_t*>(&r8_21)) * 0x320;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi24 = reinterpret_cast<struct s26*>(r14_7 + rcx18 * 0x7d0);
            rdi23->f0 = rsi24->f0;
            ++rdx19;
        } while (rdx19 != 0x3e8);
        ++rcx18;
    } while (rcx18 != 0x320);
    *reinterpret_cast<int32_t*>(&rcx25) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = reinterpret_cast<int32_t>(free);
    rdi23->f4 = rsi24->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx26) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi27 = reinterpret_cast<struct s28*>(reinterpret_cast<int64_t>(rdx26) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            rdi28 = reinterpret_cast<struct s29*>(r12_9 + r10_17 * 0x708);
            rdi28->f0 = rsi27->f0;
            rsi29 = reinterpret_cast<struct s27*>(&rsi27->f4);
            rdx26 = rsi29;
        } while (!reinterpret_cast<int1_t>(rsi29 == 0x384));
        ++r10_17;
    } while (r10_17 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rdx30) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(free);
    rdi28->f4 = rsi29->f0;
    do {
        *reinterpret_cast<int32_t*>(&r9_31) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_31) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi32 = static_cast<int32_t>(r9_31 + 3) * *reinterpret_cast<int32_t*>(&rcx25) * 0x77280773;
            r8_33 = rdi32 >> 63;
            rdi34 = reinterpret_cast<int64_t>(rdi32) >> 41;
            *reinterpret_cast<int32_t*>(&rdi35) = (*reinterpret_cast<int32_t*>(&rdi34) + *reinterpret_cast<int32_t*>(&r8_33)) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi36 = reinterpret_cast<struct s31*>(r15_13 + rcx25 * 0x960);
            rdi35->f0 = rsi36->f0;
            ++r9_31;
        } while (r9_31 != 0x4b0);
        ++rcx25;
    } while (rcx25 != 0x384);
    *reinterpret_cast<int32_t*>(&r9_37) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_37) + 4) = reinterpret_cast<int32_t>(free);
    rdi35->f4 = rsi36->f4;
    do {
        *reinterpret_cast<int32_t*>(&rcx38) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx38) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi39 = (static_cast<int32_t>(rcx38 + 2) * *reinterpret_cast<int32_t*>(&rdx30) + 2) * 0x10624dd3;
            r8_40 = rdi39 >> 63;
            rdi41 = reinterpret_cast<int64_t>(rdi39) >> 38;
            *reinterpret_cast<int32_t*>(&rdi42) = (*reinterpret_cast<int32_t*>(&rdi41) + *reinterpret_cast<int32_t*>(&r8_40)) * 0x3e8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            *rdi42 = rbp15[rdx30 * 0x898];
            ++rcx38;
        } while (rcx38 != 0x44c);
        ++rdx30;
    } while (rdx30 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx43) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx43) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx44) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx44) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi45 = rbx4 + r9_37 * 0x708;
            rsi46 = reinterpret_cast<struct s32*>(rdi45 + rdx44 * 2);
            rdi45[rdx44 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi47) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi47->f0 = rsi46->f0;
                rdi48 = &rdi47->f4;
                rsi49 = reinterpret_cast<struct s34*>(&rsi46->f4);
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi48 = rsi49->f0;
                rsi46 = reinterpret_cast<struct s32*>(&rsi49->f4);
                rdi47 = reinterpret_cast<struct s33*>(reinterpret_cast<int64_t>(rdi48 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi47 == 0x3e8));
            ++rdx44;
        } while (rdx44 != 0x384);
        ++r9_37;
    } while (r9_37 != 0x320);
    *reinterpret_cast<int32_t*>(&r9_50) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_50) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx51) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx51) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi52 = r13_11 + rcx43 * 0x898;
            rsi53 = reinterpret_cast<struct s35*>(rdi52 + rdx51 * 2);
            rdi52[rdx51 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi54) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi54) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi54->f0 = rsi53->f0;
                rdi55 = &rdi54->f4;
                rsi56 = reinterpret_cast<struct s37*>(&rsi53->f4);
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi55 = rsi56->f0;
                rsi53 = reinterpret_cast<struct s35*>(&rsi56->f4);
                rdi54 = reinterpret_cast<struct s36*>(reinterpret_cast<int64_t>(rdi55 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi54 == 0x4b0));
            ++rdx51;
        } while (rdx51 != 0x44c);
        ++rcx43;
    } while (rcx43 != 0x384);
    do {
        *reinterpret_cast<int32_t*>(&rcx57) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx57) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi58 = rax16 + r9_50 * 0x44c;
            rdx59 = rsi58 + rcx57;
            rsi58[rcx57] = reinterpret_cast<int64_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rsi60) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi60) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rbx4[r9_50 * 0x708] = rsi60->f0;
                rsi61 = &rsi60->f4;
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                r13_11[reinterpret_cast<int64_t>(rsi61) * 0x898] = *rsi61;
                rsi60 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rsi61 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi60 == 0x384));
            ++rcx57;
        } while (rcx57 != 0x44c);
        ++r9_50;
    } while (r9_50 != 0x320);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && reinterpret_cast<int1_t>(**v62 == free)) {
        *reinterpret_cast<int32_t*>(&rsi60) = 0x44c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi60) + 4) = reinterpret_cast<int32_t>(free);
        rdx59 = rax16;
        fun_917(0x320, 0x44c, rdx59);
    }
    fun_91f(rbx4, rsi60, rdx59);
    fun_927(r14_7, rsi60, rdx59);
    fun_92f(r12_9, rsi60, rdx59);
    fun_937(r13_11, rsi60, rdx59);
    fun_93f(r15_13, rsi60, rdx59);
    fun_947(rbp15, rsi60, rdx59);
    fun_951(rax16, rsi60, rdx59);
    goto v63;
}

void fun_927(int32_t* rdi, struct s12* rsi, int64_t* rdx) {
    int32_t* r12_4;
    int32_t* r13_5;
    int32_t* r15_6;
    int32_t* rbp7;
    int64_t* v8;
    int64_t v9;

    fun_92f(r12_4, rsi, rdx);
    fun_937(r13_5, rsi, rdx);
    fun_93f(r15_6, rsi, rdx);
    fun_947(rbp7, rsi, rdx);
    fun_951(v8, rsi, rdx);
    goto v9;
}

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

void fun_1e5() {
    int32_t r15d1;
    int32_t r15d2;
    int64_t r12_3;
    int32_t r15d4;
    int64_t r13_5;
    int32_t v6;
    int64_t rbp7;
    int32_t v8;
    int64_t r15_9;
    int64_t r14_10;
    int32_t* rdi11;
    int32_t* rsi12;
    int32_t* rbx13;
    int32_t* rbx14;
    int64_t rbx15;
    struct s38* rdi16;
    struct s39* rsi17;
    int64_t rcx18;
    int64_t rbx19;
    int32_t v20;
    int64_t r15_21;
    int64_t r12_22;
    int64_t* r9_23;
    int64_t rbp24;
    struct s40* rdi25;
    struct s41* rsi26;
    int64_t* rdx27;
    int64_t* v28;
    int64_t rcx29;
    int64_t r15_30;
    int32_t r8d31;
    int64_t r12_32;
    int64_t r13_33;
    int32_t r8d34;
    int32_t r8d35;
    int64_t rax36;
    struct s40* rdi37;
    struct s41* rsi38;
    struct s42* rdi39;
    struct s42* v40;
    int64_t r8_41;
    int64_t rbx42;
    int64_t rax43;
    struct s43* rdi44;
    struct s41* rsi45;
    int64_t v46;

    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r15d1 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r15d2 == free))) {
        *reinterpret_cast<int32_t*>(&r12_3) = r15d4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_5) = v6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v8 > reinterpret_cast<int32_t>(free)) {
                r15_9 = rbp7 * r12_3;
                *reinterpret_cast<int32_t*>(&r14_10) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_10) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_10 + r15_9) * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                        *reinterpret_cast<int32_t*>(&rdi11) = 10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(free);
                        rsi12 = rbx13;
                        fun_23f();
                    }
                    *rdi11 = *rsi12;
                    rdi11 = rbx14;
                    rsi12 = reinterpret_cast<int32_t*>(0x25b);
                    fun_262();
                    ++r14_10;
                } while (r14_10 != r13_5);
            }
            ++rbp7;
        } while (rbp7 != r12_3);
    }
    fun_284(rbx15, 0x273, 0x27a);
    rdi16 = reinterpret_cast<struct s38*>(0x28b);
    *reinterpret_cast<int32_t*>(&rsi17) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(free);
    rcx18 = rbx19;
    v20 = *reinterpret_cast<int32_t*>(&rcx18);
    if (!free) {
        *reinterpret_cast<int32_t*>(&r15_21) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_21) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi17) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi17) == free))) {
                *reinterpret_cast<int32_t*>(&r12_22) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_22) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r9_23 + r15_21 * 0x384)[r12_22] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        rdi16->f0 = rsi17->f0;
                        rdi16 = reinterpret_cast<struct s38*>(&rdi16->f4);
                        rsi17 = reinterpret_cast<struct s39*>(&rsi17->f4);
                        *reinterpret_cast<int32_t*>(&rbp24) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp24) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi16->f0 = rsi17->f0;
                            rdi25 = reinterpret_cast<struct s40*>(&rdi16->f4);
                            rsi26 = reinterpret_cast<struct s41*>(&rsi17->f4);
                            __asm__("mulsd xmm1, [rax+r12*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi25->f0 = rsi26->f0;
                            rdi16 = reinterpret_cast<struct s38*>(&rdi25->f4);
                            rsi17 = reinterpret_cast<struct s39*>(&rsi26->f4);
                            ++rbp24;
                        } while (rbp24 != 1);
                    }
                    ++r12_22;
                } while (r12_22 != 22);
            }
            ++r15_21;
        } while (r15_21 != 0x28b);
    }
    rdx27 = v28;
    *reinterpret_cast<int32_t*>(&rcx29) = v20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(free);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi17) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi17) == free))) {
        *reinterpret_cast<int32_t*>(&r15_30) = r8d31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_30) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r12_32) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_32) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v20 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&r13_33) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_33) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdx27 + r12_32 * 0x44c)[r13_33] = reinterpret_cast<int64_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r8d34 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r8d35 == free))) {
                        rdi16->f0 = rsi17->f0;
                        rdi16 = reinterpret_cast<struct s38*>(&rdi16->f4);
                        rsi17 = reinterpret_cast<struct s39*>(&rsi17->f4);
                        *reinterpret_cast<int32_t*>(&rax36) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax36) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi16->f0 = rsi17->f0;
                            rdi37 = reinterpret_cast<struct s40*>(&rdi16->f4);
                            rsi38 = reinterpret_cast<struct s41*>(&rsi17->f4);
                            __asm__("mulsd xmm1, [r11+r13*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi37->f0 = rsi38->f0;
                            rdi16 = reinterpret_cast<struct s38*>(&rdi37->f4);
                            rsi17 = reinterpret_cast<struct s39*>(&rsi38->f4);
                            ++rax36;
                        } while (rax36 != r15_30);
                    }
                    ++r13_33;
                } while (r13_33 != rcx29);
            }
            ++r12_32;
        } while (r12_32 != 22);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi16) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi16) == free))) {
        rdi39 = v40;
        *reinterpret_cast<int32_t*>(&r8_41) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_41) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v20 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&rbx42) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx42) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdi39 + r8_41 * 0x44c + rbx42)->f0 = reinterpret_cast<int32_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi17) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi17) == free))) {
                        rdi39->f0 = rsi17->f0;
                        rdi39 = reinterpret_cast<struct s42*>(&rdi39->f4);
                        rsi17 = reinterpret_cast<struct s39*>(&rsi17->f4);
                        *reinterpret_cast<int32_t*>(&rax43) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax43) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi39->f0 = rsi17->f0;
                            rdi44 = reinterpret_cast<struct s43*>(&rdi39->f4);
                            rsi45 = reinterpret_cast<struct s41*>(&rsi17->f4);
                            __asm__("mulsd xmm1, [r11+rbx*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi44->f0 = rsi45->f0;
                            rdi39 = reinterpret_cast<struct s42*>(&rdi44->f4);
                            rsi17 = reinterpret_cast<struct s39*>(&rsi45->f4);
                            ++rax43;
                        } while (rax43 != 22);
                    }
                    ++rbx42;
                } while (rbx42 != rcx29);
            }
            ++r8_41;
        } while (r8_41 != 0x28b);
    }
    goto v46;
}

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
    int32_t f1;
};

struct s47 {
    int32_t f0;
    int32_t f4;
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

struct s54 {
    int32_t f0;
    int32_t f4;
};

struct s55 {
    int32_t f0;
    int32_t f4;
};

struct s56 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_508(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int32_t* r14_4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* r12_7;
    int32_t* rax8;
    int32_t* r13_9;
    int32_t* rax10;
    int32_t* r15_11;
    int32_t* rax12;
    int32_t* rbp13;
    int64_t* rax14;
    int64_t r10_15;
    int64_t rcx16;
    int64_t rdx17;
    uint64_t rdi18;
    uint64_t r8_19;
    int64_t rdi20;
    struct s44* rdi21;
    struct s45* rsi22;
    int64_t rcx23;
    struct s46* rdx24;
    struct s47* rsi25;
    struct s48* rdi26;
    struct s46* rsi27;
    int64_t rdx28;
    int64_t r9_29;
    uint64_t rdi30;
    uint64_t r8_31;
    int64_t rdi32;
    struct s49* rdi33;
    struct s50* rsi34;
    int64_t r9_35;
    int64_t rcx36;
    uint64_t rdi37;
    uint64_t r8_38;
    int64_t rdi39;
    int32_t* rdi40;
    int64_t rcx41;
    int64_t rdx42;
    int32_t* rdi43;
    int32_t* rbx44;
    struct s51* rsi45;
    struct s52* rdi46;
    int32_t* rdi47;
    struct s53* rsi48;
    int64_t r9_49;
    int64_t rdx50;
    int32_t* rdi51;
    struct s54* rsi52;
    struct s55* rdi53;
    int32_t* rdi54;
    struct s56* rsi55;
    int64_t rcx56;
    int64_t* rsi57;
    int64_t* rdx58;
    struct s12* rsi59;
    int32_t* rbx60;
    int32_t* rsi61;
    signed char** v62;
    int32_t* rbx63;
    int64_t v64;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r14_4 = rax5;
    rax6 = fun_51a(0xdbba0, 8);
    r12_7 = rax6;
    rax8 = fun_52c(0xf1b30, 8);
    r13_9 = rax8;
    rax10 = fun_53e(0x107ac0, 8);
    r15_11 = rax10;
    rax12 = fun_550(0x142440, 8);
    rbp13 = rax12;
    rax14 = fun_562(0xd6d80, 8);
    *reinterpret_cast<int32_t*>(&r10_15) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_15) + 4) = reinterpret_cast<int32_t>(free);
    gd6d80 = LCPI3_1;
    *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi18 = (*reinterpret_cast<int32_t*>(&rdx17) * *reinterpret_cast<int32_t*>(&rcx16) + 1) * 0x51eb851f;
            r8_19 = rdi18 >> 63;
            rdi20 = reinterpret_cast<int64_t>(rdi18) >> 40;
            *reinterpret_cast<int32_t*>(&rdi21) = (*reinterpret_cast<int32_t*>(&rdi20) + *reinterpret_cast<int32_t*>(&r8_19)) * 0x320;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi22 = reinterpret_cast<struct s45*>(r14_4 + rcx16 * 0x7d0);
            rdi21->f0 = rsi22->f0;
            ++rdx17;
        } while (rdx17 != 0x3e8);
        ++rcx16;
    } while (rcx16 != 0x320);
    *reinterpret_cast<int32_t*>(&rcx23) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(free);
    rdi21->f4 = rsi22->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi25 = reinterpret_cast<struct s47*>(reinterpret_cast<int64_t>(rdx24) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            rdi26 = reinterpret_cast<struct s48*>(r12_7 + r10_15 * 0x708);
            rdi26->f0 = rsi25->f0;
            rsi27 = reinterpret_cast<struct s46*>(&rsi25->f4);
            rdx24 = rsi27;
        } while (!reinterpret_cast<int1_t>(rsi27 == 0x384));
        ++r10_15;
    } while (r10_15 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rdx28) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(free);
    rdi26->f4 = rsi27->f0;
    do {
        *reinterpret_cast<int32_t*>(&r9_29) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_29) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi30 = static_cast<int32_t>(r9_29 + 3) * *reinterpret_cast<int32_t*>(&rcx23) * 0x77280773;
            r8_31 = rdi30 >> 63;
            rdi32 = reinterpret_cast<int64_t>(rdi30) >> 41;
            *reinterpret_cast<int32_t*>(&rdi33) = (*reinterpret_cast<int32_t*>(&rdi32) + *reinterpret_cast<int32_t*>(&r8_31)) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi33) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi34 = reinterpret_cast<struct s50*>(r15_11 + rcx23 * 0x960);
            rdi33->f0 = rsi34->f0;
            ++r9_29;
        } while (r9_29 != 0x4b0);
        ++rcx23;
    } while (rcx23 != 0x384);
    *reinterpret_cast<int32_t*>(&r9_35) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_35) + 4) = reinterpret_cast<int32_t>(free);
    rdi33->f4 = rsi34->f4;
    do {
        *reinterpret_cast<int32_t*>(&rcx36) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx36) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi37 = (static_cast<int32_t>(rcx36 + 2) * *reinterpret_cast<int32_t*>(&rdx28) + 2) * 0x10624dd3;
            r8_38 = rdi37 >> 63;
            rdi39 = reinterpret_cast<int64_t>(rdi37) >> 38;
            *reinterpret_cast<int32_t*>(&rdi40) = (*reinterpret_cast<int32_t*>(&rdi39) + *reinterpret_cast<int32_t*>(&r8_38)) * 0x3e8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            *rdi40 = rbp13[rdx28 * 0x898];
            ++rcx36;
        } while (rcx36 != 0x44c);
        ++rdx28;
    } while (rdx28 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx41) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx42) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx42) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi43 = rbx44 + r9_35 * 0x708;
            rsi45 = reinterpret_cast<struct s51*>(rdi43 + rdx42 * 2);
            rdi43[rdx42 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi46) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi46) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi46->f0 = rsi45->f0;
                rdi47 = &rdi46->f4;
                rsi48 = reinterpret_cast<struct s53*>(&rsi45->f4);
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi47 = rsi48->f0;
                rsi45 = reinterpret_cast<struct s51*>(&rsi48->f4);
                rdi46 = reinterpret_cast<struct s52*>(reinterpret_cast<int64_t>(rdi47 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi46 == 0x3e8));
            ++rdx42;
        } while (rdx42 != 0x384);
        ++r9_35;
    } while (r9_35 != 0x320);
    *reinterpret_cast<int32_t*>(&r9_49) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_49) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx50) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx50) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi51 = r13_9 + rcx41 * 0x898;
            rsi52 = reinterpret_cast<struct s54*>(rdi51 + rdx50 * 2);
            rdi51[rdx50 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi53) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi53) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi53->f0 = rsi52->f0;
                rdi54 = &rdi53->f4;
                rsi55 = reinterpret_cast<struct s56*>(&rsi52->f4);
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi54 = rsi55->f0;
                rsi52 = reinterpret_cast<struct s54*>(&rsi55->f4);
                rdi53 = reinterpret_cast<struct s55*>(reinterpret_cast<int64_t>(rdi54 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi53 == 0x4b0));
            ++rdx50;
        } while (rdx50 != 0x44c);
        ++rcx41;
    } while (rcx41 != 0x384);
    do {
        *reinterpret_cast<int32_t*>(&rcx56) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx56) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi57 = rax14 + r9_49 * 0x44c;
            rdx58 = rsi57 + rcx56;
            rsi57[rcx56] = reinterpret_cast<int64_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rsi59) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi59) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rbx60[r9_49 * 0x708] = rsi59->f0;
                rsi61 = &rsi59->f4;
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                r13_9[reinterpret_cast<int64_t>(rsi61) * 0x898] = *rsi61;
                rsi59 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rsi61 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi59 == 0x384));
            ++rcx56;
        } while (rcx56 != 0x44c);
        ++r9_49;
    } while (r9_49 != 0x320);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && reinterpret_cast<int1_t>(**v62 == free)) {
        *reinterpret_cast<int32_t*>(&rsi59) = 0x44c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi59) + 4) = reinterpret_cast<int32_t>(free);
        rdx58 = rax14;
        fun_917(0x320, 0x44c, rdx58);
    }
    fun_91f(rbx63, rsi59, rdx58);
    fun_927(r14_4, rsi59, rdx58);
    fun_92f(r12_7, rsi59, rdx58);
    fun_937(r13_9, rsi59, rdx58);
    fun_93f(r15_11, rsi59, rdx58);
    fun_947(rbp13, rsi59, rdx58);
    fun_951(rax14, rsi59, rdx58);
    goto v64;
}

void fun_92f(int32_t* rdi, struct s12* rsi, int64_t* rdx) {
    int32_t* r13_4;
    int32_t* r15_5;
    int32_t* rbp6;
    int64_t* v7;
    int64_t v8;

    fun_937(r13_4, rsi, rdx);
    fun_93f(r15_5, rsi, rdx);
    fun_947(rbp6, rsi, rdx);
    fun_951(v7, rsi, rdx);
    goto v8;
}

struct s57 {
    int32_t f0;
    int32_t f4;
};

struct s58 {
    int32_t f0;
    int32_t f4;
};

struct s59 {
    int32_t f0;
    int32_t f1;
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

struct s68 {
    int32_t f0;
    int32_t f4;
};

struct s69 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_51a(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int32_t* r12_4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* r13_7;
    int32_t* rax8;
    int32_t* r15_9;
    int32_t* rax10;
    int32_t* rbp11;
    int64_t* rax12;
    int64_t r10_13;
    int64_t rcx14;
    int64_t rdx15;
    uint64_t rdi16;
    uint64_t r8_17;
    int64_t rdi18;
    struct s57* rdi19;
    struct s58* rsi20;
    int32_t* r14_21;
    int64_t rcx22;
    struct s59* rdx23;
    struct s60* rsi24;
    struct s61* rdi25;
    struct s59* rsi26;
    int64_t rdx27;
    int64_t r9_28;
    uint64_t rdi29;
    uint64_t r8_30;
    int64_t rdi31;
    struct s62* rdi32;
    struct s63* rsi33;
    int64_t r9_34;
    int64_t rcx35;
    uint64_t rdi36;
    uint64_t r8_37;
    int64_t rdi38;
    int32_t* rdi39;
    int64_t rcx40;
    int64_t rdx41;
    int32_t* rdi42;
    int32_t* rbx43;
    struct s64* rsi44;
    struct s65* rdi45;
    int32_t* rdi46;
    struct s66* rsi47;
    int64_t r9_48;
    int64_t rdx49;
    int32_t* rdi50;
    struct s67* rsi51;
    struct s68* rdi52;
    int32_t* rdi53;
    struct s69* rsi54;
    int64_t rcx55;
    int64_t* rsi56;
    int64_t* rdx57;
    struct s12* rsi58;
    int32_t* rbx59;
    int32_t* rsi60;
    signed char** v61;
    int32_t* rbx62;
    int32_t* r14_63;
    int64_t v64;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r12_4 = rax5;
    rax6 = fun_52c(0xf1b30, 8);
    r13_7 = rax6;
    rax8 = fun_53e(0x107ac0, 8);
    r15_9 = rax8;
    rax10 = fun_550(0x142440, 8);
    rbp11 = rax10;
    rax12 = fun_562(0xd6d80, 8);
    *reinterpret_cast<int32_t*>(&r10_13) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_13) + 4) = reinterpret_cast<int32_t>(free);
    gd6d80 = LCPI3_1;
    *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi16 = (*reinterpret_cast<int32_t*>(&rdx15) * *reinterpret_cast<int32_t*>(&rcx14) + 1) * 0x51eb851f;
            r8_17 = rdi16 >> 63;
            rdi18 = reinterpret_cast<int64_t>(rdi16) >> 40;
            *reinterpret_cast<int32_t*>(&rdi19) = (*reinterpret_cast<int32_t*>(&rdi18) + *reinterpret_cast<int32_t*>(&r8_17)) * 0x320;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi20 = reinterpret_cast<struct s58*>(r14_21 + rcx14 * 0x7d0);
            rdi19->f0 = rsi20->f0;
            ++rdx15;
        } while (rdx15 != 0x3e8);
        ++rcx14;
    } while (rcx14 != 0x320);
    *reinterpret_cast<int32_t*>(&rcx22) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(free);
    rdi19->f4 = rsi20->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx23) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi24 = reinterpret_cast<struct s60*>(reinterpret_cast<int64_t>(rdx23) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            rdi25 = reinterpret_cast<struct s61*>(r12_4 + r10_13 * 0x708);
            rdi25->f0 = rsi24->f0;
            rsi26 = reinterpret_cast<struct s59*>(&rsi24->f4);
            rdx23 = rsi26;
        } while (!reinterpret_cast<int1_t>(rsi26 == 0x384));
        ++r10_13;
    } while (r10_13 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rdx27) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(free);
    rdi25->f4 = rsi26->f0;
    do {
        *reinterpret_cast<int32_t*>(&r9_28) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_28) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi29 = static_cast<int32_t>(r9_28 + 3) * *reinterpret_cast<int32_t*>(&rcx22) * 0x77280773;
            r8_30 = rdi29 >> 63;
            rdi31 = reinterpret_cast<int64_t>(rdi29) >> 41;
            *reinterpret_cast<int32_t*>(&rdi32) = (*reinterpret_cast<int32_t*>(&rdi31) + *reinterpret_cast<int32_t*>(&r8_30)) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi33 = reinterpret_cast<struct s63*>(r15_9 + rcx22 * 0x960);
            rdi32->f0 = rsi33->f0;
            ++r9_28;
        } while (r9_28 != 0x4b0);
        ++rcx22;
    } while (rcx22 != 0x384);
    *reinterpret_cast<int32_t*>(&r9_34) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_34) + 4) = reinterpret_cast<int32_t>(free);
    rdi32->f4 = rsi33->f4;
    do {
        *reinterpret_cast<int32_t*>(&rcx35) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi36 = (static_cast<int32_t>(rcx35 + 2) * *reinterpret_cast<int32_t*>(&rdx27) + 2) * 0x10624dd3;
            r8_37 = rdi36 >> 63;
            rdi38 = reinterpret_cast<int64_t>(rdi36) >> 38;
            *reinterpret_cast<int32_t*>(&rdi39) = (*reinterpret_cast<int32_t*>(&rdi38) + *reinterpret_cast<int32_t*>(&r8_37)) * 0x3e8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            *rdi39 = rbp11[rdx27 * 0x898];
            ++rcx35;
        } while (rcx35 != 0x44c);
        ++rdx27;
    } while (rdx27 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx40) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx40) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx41) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx41) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi42 = rbx43 + r9_34 * 0x708;
            rsi44 = reinterpret_cast<struct s64*>(rdi42 + rdx41 * 2);
            rdi42[rdx41 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi45) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi45->f0 = rsi44->f0;
                rdi46 = &rdi45->f4;
                rsi47 = reinterpret_cast<struct s66*>(&rsi44->f4);
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi46 = rsi47->f0;
                rsi44 = reinterpret_cast<struct s64*>(&rsi47->f4);
                rdi45 = reinterpret_cast<struct s65*>(reinterpret_cast<int64_t>(rdi46 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi45 == 0x3e8));
            ++rdx41;
        } while (rdx41 != 0x384);
        ++r9_34;
    } while (r9_34 != 0x320);
    *reinterpret_cast<int32_t*>(&r9_48) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_48) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx49) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx49) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi50 = r13_7 + rcx40 * 0x898;
            rsi51 = reinterpret_cast<struct s67*>(rdi50 + rdx49 * 2);
            rdi50[rdx49 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi52) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi52) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi52->f0 = rsi51->f0;
                rdi53 = &rdi52->f4;
                rsi54 = reinterpret_cast<struct s69*>(&rsi51->f4);
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi53 = rsi54->f0;
                rsi51 = reinterpret_cast<struct s67*>(&rsi54->f4);
                rdi52 = reinterpret_cast<struct s68*>(reinterpret_cast<int64_t>(rdi53 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi52 == 0x4b0));
            ++rdx49;
        } while (rdx49 != 0x44c);
        ++rcx40;
    } while (rcx40 != 0x384);
    do {
        *reinterpret_cast<int32_t*>(&rcx55) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx55) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi56 = rax12 + r9_48 * 0x44c;
            rdx57 = rsi56 + rcx55;
            rsi56[rcx55] = reinterpret_cast<int64_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rsi58) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi58) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rbx59[r9_48 * 0x708] = rsi58->f0;
                rsi60 = &rsi58->f4;
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                r13_7[reinterpret_cast<int64_t>(rsi60) * 0x898] = *rsi60;
                rsi58 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rsi60 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi58 == 0x384));
            ++rcx55;
        } while (rcx55 != 0x44c);
        ++r9_48;
    } while (r9_48 != 0x320);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && reinterpret_cast<int1_t>(**v61 == free)) {
        *reinterpret_cast<int32_t*>(&rsi58) = 0x44c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi58) + 4) = reinterpret_cast<int32_t>(free);
        rdx57 = rax12;
        fun_917(0x320, 0x44c, rdx57);
    }
    fun_91f(rbx62, rsi58, rdx57);
    fun_927(r14_63, rsi58, rdx57);
    fun_92f(r12_4, rsi58, rdx57);
    fun_937(r13_7, rsi58, rdx57);
    fun_93f(r15_9, rsi58, rdx57);
    fun_947(rbp11, rsi58, rdx57);
    fun_951(rax12, rsi58, rdx57);
    goto v64;
}

void fun_937(int32_t* rdi, struct s12* rsi, int64_t* rdx) {
    int32_t* r15_4;
    int32_t* rbp5;
    int64_t* v6;
    int64_t v7;

    fun_93f(r15_4, rsi, rdx);
    fun_947(rbp5, rsi, rdx);
    fun_951(v6, rsi, rdx);
    goto v7;
}

struct s70 {
    int32_t f0;
    int32_t f4;
};

struct s71 {
    int32_t f0;
    int32_t f4;
};

struct s72 {
    int32_t f0;
    int32_t f1;
};

struct s73 {
    int32_t f0;
    int32_t f4;
};

struct s74 {
    int32_t f0;
    int32_t f4;
};

struct s75 {
    int32_t f0;
    int32_t f4;
};

struct s76 {
    int32_t f0;
    int32_t f4;
};

struct s77 {
    int32_t f0;
    int32_t f4;
};

struct s78 {
    int32_t f0;
    int32_t f4;
};

struct s79 {
    int32_t f0;
    int32_t f4;
};

struct s80 {
    int32_t f0;
    int32_t f4;
};

struct s81 {
    int32_t f0;
    int32_t f4;
};

struct s82 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_52c(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int32_t* r13_4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* r15_7;
    int32_t* rax8;
    int32_t* rbp9;
    int64_t* rax10;
    int64_t r10_11;
    int64_t rcx12;
    int64_t rdx13;
    uint64_t rdi14;
    uint64_t r8_15;
    int64_t rdi16;
    struct s70* rdi17;
    struct s71* rsi18;
    int32_t* r14_19;
    int64_t rcx20;
    struct s72* rdx21;
    struct s73* rsi22;
    struct s74* rdi23;
    int32_t* r12_24;
    struct s72* rsi25;
    int64_t rdx26;
    int64_t r9_27;
    uint64_t rdi28;
    uint64_t r8_29;
    int64_t rdi30;
    struct s75* rdi31;
    struct s76* rsi32;
    int64_t r9_33;
    int64_t rcx34;
    uint64_t rdi35;
    uint64_t r8_36;
    int64_t rdi37;
    int32_t* rdi38;
    int64_t rcx39;
    int64_t rdx40;
    int32_t* rdi41;
    int32_t* rbx42;
    struct s77* rsi43;
    struct s78* rdi44;
    int32_t* rdi45;
    struct s79* rsi46;
    int64_t r9_47;
    int64_t rdx48;
    int32_t* rdi49;
    struct s80* rsi50;
    struct s81* rdi51;
    int32_t* rdi52;
    struct s82* rsi53;
    int64_t rcx54;
    int64_t* rsi55;
    int64_t* rdx56;
    struct s12* rsi57;
    int32_t* rbx58;
    int32_t* rsi59;
    signed char** v60;
    int32_t* rbx61;
    int32_t* r14_62;
    int32_t* r12_63;
    int64_t v64;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r13_4 = rax5;
    rax6 = fun_53e(0x107ac0, 8);
    r15_7 = rax6;
    rax8 = fun_550(0x142440, 8);
    rbp9 = rax8;
    rax10 = fun_562(0xd6d80, 8);
    *reinterpret_cast<int32_t*>(&r10_11) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_11) + 4) = reinterpret_cast<int32_t>(free);
    gd6d80 = LCPI3_1;
    *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi14 = (*reinterpret_cast<int32_t*>(&rdx13) * *reinterpret_cast<int32_t*>(&rcx12) + 1) * 0x51eb851f;
            r8_15 = rdi14 >> 63;
            rdi16 = reinterpret_cast<int64_t>(rdi14) >> 40;
            *reinterpret_cast<int32_t*>(&rdi17) = (*reinterpret_cast<int32_t*>(&rdi16) + *reinterpret_cast<int32_t*>(&r8_15)) * 0x320;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi18 = reinterpret_cast<struct s71*>(r14_19 + rcx12 * 0x7d0);
            rdi17->f0 = rsi18->f0;
            ++rdx13;
        } while (rdx13 != 0x3e8);
        ++rcx12;
    } while (rcx12 != 0x320);
    *reinterpret_cast<int32_t*>(&rcx20) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(free);
    rdi17->f4 = rsi18->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx21) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi22 = reinterpret_cast<struct s73*>(reinterpret_cast<int64_t>(rdx21) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            rdi23 = reinterpret_cast<struct s74*>(r12_24 + r10_11 * 0x708);
            rdi23->f0 = rsi22->f0;
            rsi25 = reinterpret_cast<struct s72*>(&rsi22->f4);
            rdx21 = rsi25;
        } while (!reinterpret_cast<int1_t>(rsi25 == 0x384));
        ++r10_11;
    } while (r10_11 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rdx26) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(free);
    rdi23->f4 = rsi25->f0;
    do {
        *reinterpret_cast<int32_t*>(&r9_27) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_27) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi28 = static_cast<int32_t>(r9_27 + 3) * *reinterpret_cast<int32_t*>(&rcx20) * 0x77280773;
            r8_29 = rdi28 >> 63;
            rdi30 = reinterpret_cast<int64_t>(rdi28) >> 41;
            *reinterpret_cast<int32_t*>(&rdi31) = (*reinterpret_cast<int32_t*>(&rdi30) + *reinterpret_cast<int32_t*>(&r8_29)) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi32 = reinterpret_cast<struct s76*>(r15_7 + rcx20 * 0x960);
            rdi31->f0 = rsi32->f0;
            ++r9_27;
        } while (r9_27 != 0x4b0);
        ++rcx20;
    } while (rcx20 != 0x384);
    *reinterpret_cast<int32_t*>(&r9_33) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_33) + 4) = reinterpret_cast<int32_t>(free);
    rdi31->f4 = rsi32->f4;
    do {
        *reinterpret_cast<int32_t*>(&rcx34) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi35 = (static_cast<int32_t>(rcx34 + 2) * *reinterpret_cast<int32_t*>(&rdx26) + 2) * 0x10624dd3;
            r8_36 = rdi35 >> 63;
            rdi37 = reinterpret_cast<int64_t>(rdi35) >> 38;
            *reinterpret_cast<int32_t*>(&rdi38) = (*reinterpret_cast<int32_t*>(&rdi37) + *reinterpret_cast<int32_t*>(&r8_36)) * 0x3e8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            *rdi38 = rbp9[rdx26 * 0x898];
            ++rcx34;
        } while (rcx34 != 0x44c);
        ++rdx26;
    } while (rdx26 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx39) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx39) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx40) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx40) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi41 = rbx42 + r9_33 * 0x708;
            rsi43 = reinterpret_cast<struct s77*>(rdi41 + rdx40 * 2);
            rdi41[rdx40 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi44) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi44->f0 = rsi43->f0;
                rdi45 = &rdi44->f4;
                rsi46 = reinterpret_cast<struct s79*>(&rsi43->f4);
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi45 = rsi46->f0;
                rsi43 = reinterpret_cast<struct s77*>(&rsi46->f4);
                rdi44 = reinterpret_cast<struct s78*>(reinterpret_cast<int64_t>(rdi45 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi44 == 0x3e8));
            ++rdx40;
        } while (rdx40 != 0x384);
        ++r9_33;
    } while (r9_33 != 0x320);
    *reinterpret_cast<int32_t*>(&r9_47) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_47) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx48) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx48) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi49 = r13_4 + rcx39 * 0x898;
            rsi50 = reinterpret_cast<struct s80*>(rdi49 + rdx48 * 2);
            rdi49[rdx48 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi51) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi51) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi51->f0 = rsi50->f0;
                rdi52 = &rdi51->f4;
                rsi53 = reinterpret_cast<struct s82*>(&rsi50->f4);
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi52 = rsi53->f0;
                rsi50 = reinterpret_cast<struct s80*>(&rsi53->f4);
                rdi51 = reinterpret_cast<struct s81*>(reinterpret_cast<int64_t>(rdi52 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi51 == 0x4b0));
            ++rdx48;
        } while (rdx48 != 0x44c);
        ++rcx39;
    } while (rcx39 != 0x384);
    do {
        *reinterpret_cast<int32_t*>(&rcx54) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx54) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi55 = rax10 + r9_47 * 0x44c;
            rdx56 = rsi55 + rcx54;
            rsi55[rcx54] = reinterpret_cast<int64_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rsi57) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi57) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rbx58[r9_47 * 0x708] = rsi57->f0;
                rsi59 = &rsi57->f4;
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                r13_4[reinterpret_cast<int64_t>(rsi59) * 0x898] = *rsi59;
                rsi57 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rsi59 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi57 == 0x384));
            ++rcx54;
        } while (rcx54 != 0x44c);
        ++r9_47;
    } while (r9_47 != 0x320);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && reinterpret_cast<int1_t>(**v60 == free)) {
        *reinterpret_cast<int32_t*>(&rsi57) = 0x44c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi57) + 4) = reinterpret_cast<int32_t>(free);
        rdx56 = rax10;
        fun_917(0x320, 0x44c, rdx56);
    }
    fun_91f(rbx61, rsi57, rdx56);
    fun_927(r14_62, rsi57, rdx56);
    fun_92f(r12_63, rsi57, rdx56);
    fun_937(r13_4, rsi57, rdx56);
    fun_93f(r15_7, rsi57, rdx56);
    fun_947(rbp9, rsi57, rdx56);
    fun_951(rax10, rsi57, rdx56);
    goto v64;
}

void fun_93f(int32_t* rdi, struct s12* rsi, int64_t* rdx) {
    int32_t* rbp4;
    int64_t* v5;
    int64_t v6;

    fun_947(rbp4, rsi, rdx);
    fun_951(v5, rsi, rdx);
    goto v6;
}

struct s83 {
    int32_t f0;
    int32_t f4;
};

struct s84 {
    int32_t f0;
    int32_t f4;
};

struct s85 {
    int32_t f0;
    int32_t f1;
};

struct s86 {
    int32_t f0;
    int32_t f4;
};

struct s87 {
    int32_t f0;
    int32_t f4;
};

struct s88 {
    int32_t f0;
    int32_t f4;
};

struct s89 {
    int32_t f0;
    int32_t f4;
};

struct s90 {
    int32_t f0;
    int32_t f4;
};

struct s91 {
    int32_t f0;
    int32_t f4;
};

struct s92 {
    int32_t f0;
    int32_t f4;
};

struct s93 {
    int32_t f0;
    int32_t f4;
};

struct s94 {
    int32_t f0;
    int32_t f4;
};

struct s95 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_53e(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int32_t* r15_4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* rbp7;
    int64_t* rax8;
    int64_t r10_9;
    int64_t rcx10;
    int64_t rdx11;
    uint64_t rdi12;
    uint64_t r8_13;
    int64_t rdi14;
    struct s83* rdi15;
    struct s84* rsi16;
    int32_t* r14_17;
    int64_t rcx18;
    struct s85* rdx19;
    struct s86* rsi20;
    struct s87* rdi21;
    int32_t* r12_22;
    struct s85* rsi23;
    int64_t rdx24;
    int64_t r9_25;
    uint64_t rdi26;
    uint64_t r8_27;
    int64_t rdi28;
    struct s88* rdi29;
    struct s89* rsi30;
    int64_t r9_31;
    int64_t rcx32;
    uint64_t rdi33;
    uint64_t r8_34;
    int64_t rdi35;
    int32_t* rdi36;
    int64_t rcx37;
    int64_t rdx38;
    int32_t* rdi39;
    int32_t* rbx40;
    struct s90* rsi41;
    struct s91* rdi42;
    int32_t* rdi43;
    struct s92* rsi44;
    int64_t r9_45;
    int64_t rdx46;
    int32_t* rdi47;
    int32_t* r13_48;
    struct s93* rsi49;
    struct s94* rdi50;
    int32_t* rdi51;
    struct s95* rsi52;
    int64_t rcx53;
    int64_t* rsi54;
    int64_t* rdx55;
    struct s12* rsi56;
    int32_t* rbx57;
    int32_t* rsi58;
    int32_t* r13_59;
    signed char** v60;
    int32_t* rbx61;
    int32_t* r14_62;
    int32_t* r12_63;
    int32_t* r13_64;
    int64_t v65;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r15_4 = rax5;
    rax6 = fun_550(0x142440, 8);
    rbp7 = rax6;
    rax8 = fun_562(0xd6d80, 8);
    *reinterpret_cast<int32_t*>(&r10_9) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_9) + 4) = reinterpret_cast<int32_t>(free);
    gd6d80 = LCPI3_1;
    *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx11) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi12 = (*reinterpret_cast<int32_t*>(&rdx11) * *reinterpret_cast<int32_t*>(&rcx10) + 1) * 0x51eb851f;
            r8_13 = rdi12 >> 63;
            rdi14 = reinterpret_cast<int64_t>(rdi12) >> 40;
            *reinterpret_cast<int32_t*>(&rdi15) = (*reinterpret_cast<int32_t*>(&rdi14) + *reinterpret_cast<int32_t*>(&r8_13)) * 0x320;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi16 = reinterpret_cast<struct s84*>(r14_17 + rcx10 * 0x7d0);
            rdi15->f0 = rsi16->f0;
            ++rdx11;
        } while (rdx11 != 0x3e8);
        ++rcx10;
    } while (rcx10 != 0x320);
    *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(free);
    rdi15->f4 = rsi16->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi20 = reinterpret_cast<struct s86*>(reinterpret_cast<int64_t>(rdx19) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            rdi21 = reinterpret_cast<struct s87*>(r12_22 + r10_9 * 0x708);
            rdi21->f0 = rsi20->f0;
            rsi23 = reinterpret_cast<struct s85*>(&rsi20->f4);
            rdx19 = rsi23;
        } while (!reinterpret_cast<int1_t>(rsi23 == 0x384));
        ++r10_9;
    } while (r10_9 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(free);
    rdi21->f4 = rsi23->f0;
    do {
        *reinterpret_cast<int32_t*>(&r9_25) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_25) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi26 = static_cast<int32_t>(r9_25 + 3) * *reinterpret_cast<int32_t*>(&rcx18) * 0x77280773;
            r8_27 = rdi26 >> 63;
            rdi28 = reinterpret_cast<int64_t>(rdi26) >> 41;
            *reinterpret_cast<int32_t*>(&rdi29) = (*reinterpret_cast<int32_t*>(&rdi28) + *reinterpret_cast<int32_t*>(&r8_27)) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi30 = reinterpret_cast<struct s89*>(r15_4 + rcx18 * 0x960);
            rdi29->f0 = rsi30->f0;
            ++r9_25;
        } while (r9_25 != 0x4b0);
        ++rcx18;
    } while (rcx18 != 0x384);
    *reinterpret_cast<int32_t*>(&r9_31) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_31) + 4) = reinterpret_cast<int32_t>(free);
    rdi29->f4 = rsi30->f4;
    do {
        *reinterpret_cast<int32_t*>(&rcx32) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi33 = (static_cast<int32_t>(rcx32 + 2) * *reinterpret_cast<int32_t*>(&rdx24) + 2) * 0x10624dd3;
            r8_34 = rdi33 >> 63;
            rdi35 = reinterpret_cast<int64_t>(rdi33) >> 38;
            *reinterpret_cast<int32_t*>(&rdi36) = (*reinterpret_cast<int32_t*>(&rdi35) + *reinterpret_cast<int32_t*>(&r8_34)) * 0x3e8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            *rdi36 = rbp7[rdx24 * 0x898];
            ++rcx32;
        } while (rcx32 != 0x44c);
        ++rdx24;
    } while (rdx24 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx37) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx38) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi39 = rbx40 + r9_31 * 0x708;
            rsi41 = reinterpret_cast<struct s90*>(rdi39 + rdx38 * 2);
            rdi39[rdx38 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi42) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi42->f0 = rsi41->f0;
                rdi43 = &rdi42->f4;
                rsi44 = reinterpret_cast<struct s92*>(&rsi41->f4);
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi43 = rsi44->f0;
                rsi41 = reinterpret_cast<struct s90*>(&rsi44->f4);
                rdi42 = reinterpret_cast<struct s91*>(reinterpret_cast<int64_t>(rdi43 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi42 == 0x3e8));
            ++rdx38;
        } while (rdx38 != 0x384);
        ++r9_31;
    } while (r9_31 != 0x320);
    *reinterpret_cast<int32_t*>(&r9_45) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_45) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx46) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx46) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi47 = r13_48 + rcx37 * 0x898;
            rsi49 = reinterpret_cast<struct s93*>(rdi47 + rdx46 * 2);
            rdi47[rdx46 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi50) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi50) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi50->f0 = rsi49->f0;
                rdi51 = &rdi50->f4;
                rsi52 = reinterpret_cast<struct s95*>(&rsi49->f4);
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi51 = rsi52->f0;
                rsi49 = reinterpret_cast<struct s93*>(&rsi52->f4);
                rdi50 = reinterpret_cast<struct s94*>(reinterpret_cast<int64_t>(rdi51 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi50 == 0x4b0));
            ++rdx46;
        } while (rdx46 != 0x44c);
        ++rcx37;
    } while (rcx37 != 0x384);
    do {
        *reinterpret_cast<int32_t*>(&rcx53) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx53) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi54 = rax8 + r9_45 * 0x44c;
            rdx55 = rsi54 + rcx53;
            rsi54[rcx53] = reinterpret_cast<int64_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rsi56) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi56) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rbx57[r9_45 * 0x708] = rsi56->f0;
                rsi58 = &rsi56->f4;
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                r13_59[reinterpret_cast<int64_t>(rsi58) * 0x898] = *rsi58;
                rsi56 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rsi58 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi56 == 0x384));
            ++rcx53;
        } while (rcx53 != 0x44c);
        ++r9_45;
    } while (r9_45 != 0x320);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && reinterpret_cast<int1_t>(**v60 == free)) {
        *reinterpret_cast<int32_t*>(&rsi56) = 0x44c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi56) + 4) = reinterpret_cast<int32_t>(free);
        rdx55 = rax8;
        fun_917(0x320, 0x44c, rdx55);
    }
    fun_91f(rbx61, rsi56, rdx55);
    fun_927(r14_62, rsi56, rdx55);
    fun_92f(r12_63, rsi56, rdx55);
    fun_937(r13_64, rsi56, rdx55);
    fun_93f(r15_4, rsi56, rdx55);
    fun_947(rbp7, rsi56, rdx55);
    fun_951(rax8, rsi56, rdx55);
    goto v65;
}

void fun_947(int32_t* rdi, struct s12* rsi, int64_t* rdx) {
    int64_t* v4;
    int64_t v5;

    fun_951(v4, rsi, rdx);
    goto v5;
}

struct s96 {
    int32_t f0;
    int32_t f4;
};

struct s97 {
    int32_t f0;
    int32_t f4;
};

struct s98 {
    int32_t f0;
    int32_t f1;
};

struct s99 {
    int32_t f0;
    int32_t f4;
};

struct s100 {
    int32_t f0;
    int32_t f4;
};

struct s101 {
    int32_t f0;
    int32_t f4;
};

struct s102 {
    int32_t f0;
    int32_t f4;
};

struct s103 {
    int32_t f0;
    int32_t f4;
};

struct s104 {
    int32_t f0;
    int32_t f4;
};

struct s105 {
    int32_t f0;
    int32_t f4;
};

struct s106 {
    int32_t f0;
    int32_t f4;
};

struct s107 {
    int32_t f0;
    int32_t f4;
};

struct s108 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_550(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int32_t* rbp4;
    int32_t* rax5;
    int64_t* rax6;
    int64_t r10_7;
    int64_t rcx8;
    int64_t rdx9;
    uint64_t rdi10;
    uint64_t r8_11;
    int64_t rdi12;
    struct s96* rdi13;
    struct s97* rsi14;
    int32_t* r14_15;
    int64_t rcx16;
    struct s98* rdx17;
    struct s99* rsi18;
    struct s100* rdi19;
    int32_t* r12_20;
    struct s98* rsi21;
    int64_t rdx22;
    int64_t r9_23;
    uint64_t rdi24;
    uint64_t r8_25;
    int64_t rdi26;
    struct s101* rdi27;
    struct s102* rsi28;
    int32_t* r15_29;
    int64_t r9_30;
    int64_t rcx31;
    uint64_t rdi32;
    uint64_t r8_33;
    int64_t rdi34;
    int32_t* rdi35;
    int64_t rcx36;
    int64_t rdx37;
    int32_t* rdi38;
    int32_t* rbx39;
    struct s103* rsi40;
    struct s104* rdi41;
    int32_t* rdi42;
    struct s105* rsi43;
    int64_t r9_44;
    int64_t rdx45;
    int32_t* rdi46;
    int32_t* r13_47;
    struct s106* rsi48;
    struct s107* rdi49;
    int32_t* rdi50;
    struct s108* rsi51;
    int64_t rcx52;
    int64_t* rsi53;
    int64_t* rdx54;
    struct s12* rsi55;
    int32_t* rbx56;
    int32_t* rsi57;
    int32_t* r13_58;
    signed char** v59;
    int32_t* rbx60;
    int32_t* r14_61;
    int32_t* r12_62;
    int32_t* r13_63;
    int32_t* r15_64;
    int64_t v65;

    v3 = reinterpret_cast<int64_t>(__return_address());
    rbp4 = rax5;
    rax6 = fun_562(0xd6d80, 8);
    *reinterpret_cast<int32_t*>(&r10_7) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_7) + 4) = reinterpret_cast<int32_t>(free);
    gd6d80 = LCPI3_1;
    *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi10 = (*reinterpret_cast<int32_t*>(&rdx9) * *reinterpret_cast<int32_t*>(&rcx8) + 1) * 0x51eb851f;
            r8_11 = rdi10 >> 63;
            rdi12 = reinterpret_cast<int64_t>(rdi10) >> 40;
            *reinterpret_cast<int32_t*>(&rdi13) = (*reinterpret_cast<int32_t*>(&rdi12) + *reinterpret_cast<int32_t*>(&r8_11)) * 0x320;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi14 = reinterpret_cast<struct s97*>(r14_15 + rcx8 * 0x7d0);
            rdi13->f0 = rsi14->f0;
            ++rdx9;
        } while (rdx9 != 0x3e8);
        ++rcx8;
    } while (rcx8 != 0x320);
    *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(free);
    rdi13->f4 = rsi14->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi18 = reinterpret_cast<struct s99*>(reinterpret_cast<int64_t>(rdx17) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            rdi19 = reinterpret_cast<struct s100*>(r12_20 + r10_7 * 0x708);
            rdi19->f0 = rsi18->f0;
            rsi21 = reinterpret_cast<struct s98*>(&rsi18->f4);
            rdx17 = rsi21;
        } while (!reinterpret_cast<int1_t>(rsi21 == 0x384));
        ++r10_7;
    } while (r10_7 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rdx22) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(free);
    rdi19->f4 = rsi21->f0;
    do {
        *reinterpret_cast<int32_t*>(&r9_23) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_23) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi24 = static_cast<int32_t>(r9_23 + 3) * *reinterpret_cast<int32_t*>(&rcx16) * 0x77280773;
            r8_25 = rdi24 >> 63;
            rdi26 = reinterpret_cast<int64_t>(rdi24) >> 41;
            *reinterpret_cast<int32_t*>(&rdi27) = (*reinterpret_cast<int32_t*>(&rdi26) + *reinterpret_cast<int32_t*>(&r8_25)) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi28 = reinterpret_cast<struct s102*>(r15_29 + rcx16 * 0x960);
            rdi27->f0 = rsi28->f0;
            ++r9_23;
        } while (r9_23 != 0x4b0);
        ++rcx16;
    } while (rcx16 != 0x384);
    *reinterpret_cast<int32_t*>(&r9_30) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_30) + 4) = reinterpret_cast<int32_t>(free);
    rdi27->f4 = rsi28->f4;
    do {
        *reinterpret_cast<int32_t*>(&rcx31) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi32 = (static_cast<int32_t>(rcx31 + 2) * *reinterpret_cast<int32_t*>(&rdx22) + 2) * 0x10624dd3;
            r8_33 = rdi32 >> 63;
            rdi34 = reinterpret_cast<int64_t>(rdi32) >> 38;
            *reinterpret_cast<int32_t*>(&rdi35) = (*reinterpret_cast<int32_t*>(&rdi34) + *reinterpret_cast<int32_t*>(&r8_33)) * 0x3e8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            *rdi35 = rbp4[rdx22 * 0x898];
            ++rcx31;
        } while (rcx31 != 0x44c);
        ++rdx22;
    } while (rdx22 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx36) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx36) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx37) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi38 = rbx39 + r9_30 * 0x708;
            rsi40 = reinterpret_cast<struct s103*>(rdi38 + rdx37 * 2);
            rdi38[rdx37 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi41) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi41->f0 = rsi40->f0;
                rdi42 = &rdi41->f4;
                rsi43 = reinterpret_cast<struct s105*>(&rsi40->f4);
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi42 = rsi43->f0;
                rsi40 = reinterpret_cast<struct s103*>(&rsi43->f4);
                rdi41 = reinterpret_cast<struct s104*>(reinterpret_cast<int64_t>(rdi42 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi41 == 0x3e8));
            ++rdx37;
        } while (rdx37 != 0x384);
        ++r9_30;
    } while (r9_30 != 0x320);
    *reinterpret_cast<int32_t*>(&r9_44) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_44) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx45) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx45) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi46 = r13_47 + rcx36 * 0x898;
            rsi48 = reinterpret_cast<struct s106*>(rdi46 + rdx45 * 2);
            rdi46[rdx45 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi49) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi49->f0 = rsi48->f0;
                rdi50 = &rdi49->f4;
                rsi51 = reinterpret_cast<struct s108*>(&rsi48->f4);
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi50 = rsi51->f0;
                rsi48 = reinterpret_cast<struct s106*>(&rsi51->f4);
                rdi49 = reinterpret_cast<struct s107*>(reinterpret_cast<int64_t>(rdi50 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi49 == 0x4b0));
            ++rdx45;
        } while (rdx45 != 0x44c);
        ++rcx36;
    } while (rcx36 != 0x384);
    do {
        *reinterpret_cast<int32_t*>(&rcx52) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx52) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi53 = rax6 + r9_44 * 0x44c;
            rdx54 = rsi53 + rcx52;
            rsi53[rcx52] = reinterpret_cast<int64_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rsi55) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi55) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rbx56[r9_44 * 0x708] = rsi55->f0;
                rsi57 = &rsi55->f4;
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                r13_58[reinterpret_cast<int64_t>(rsi57) * 0x898] = *rsi57;
                rsi55 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rsi57 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi55 == 0x384));
            ++rcx52;
        } while (rcx52 != 0x44c);
        ++r9_44;
    } while (r9_44 != 0x320);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && reinterpret_cast<int1_t>(**v59 == free)) {
        *reinterpret_cast<int32_t*>(&rsi55) = 0x44c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi55) + 4) = reinterpret_cast<int32_t>(free);
        rdx54 = rax6;
        fun_917(0x320, 0x44c, rdx54);
    }
    fun_91f(rbx60, rsi55, rdx54);
    fun_927(r14_61, rsi55, rdx54);
    fun_92f(r12_62, rsi55, rdx54);
    fun_937(r13_63, rsi55, rdx54);
    fun_93f(r15_64, rsi55, rdx54);
    fun_947(rbp4, rsi55, rdx54);
    fun_951(rax6, rsi55, rdx54);
    goto v65;
}

void fun_951(int64_t* rdi, struct s12* rsi, int64_t* rdx) {
    int64_t v4;

    goto v4;
}

struct s109 {
    int32_t f0;
    int32_t f4;
};

struct s110 {
    int32_t f0;
    int32_t f4;
};

struct s111 {
    int32_t f0;
    int32_t f1;
};

struct s112 {
    int32_t f0;
    int32_t f4;
};

struct s113 {
    int32_t f0;
    int32_t f4;
};

struct s114 {
    int32_t f0;
    int32_t f4;
};

struct s115 {
    int32_t f0;
    int32_t f4;
};

struct s116 {
    int32_t f0;
    int32_t f4;
};

struct s117 {
    int32_t f0;
    int32_t f4;
};

struct s118 {
    int32_t f0;
    int32_t f4;
};

struct s119 {
    int32_t f0;
    int32_t f4;
};

struct s120 {
    int32_t f0;
    int32_t f4;
};

struct s121 {
    int32_t f0;
    int32_t f4;
};

int64_t* fun_562(int32_t* rdi, int32_t* rsi) {
    int64_t v3;
    int64_t r10_4;
    int64_t rcx5;
    int64_t rdx6;
    uint64_t rdi7;
    uint64_t r8_8;
    int64_t rdi9;
    struct s109* rdi10;
    struct s110* rsi11;
    int32_t* r14_12;
    int64_t rcx13;
    struct s111* rdx14;
    struct s112* rsi15;
    struct s113* rdi16;
    int32_t* r12_17;
    struct s111* rsi18;
    int64_t rdx19;
    int64_t r9_20;
    uint64_t rdi21;
    uint64_t r8_22;
    int64_t rdi23;
    struct s114* rdi24;
    struct s115* rsi25;
    int32_t* r15_26;
    int64_t r9_27;
    int64_t rcx28;
    uint64_t rdi29;
    uint64_t r8_30;
    int64_t rdi31;
    int32_t* rdi32;
    int32_t* rbp33;
    int64_t rcx34;
    int64_t rdx35;
    int32_t* rdi36;
    int32_t* rbx37;
    struct s116* rsi38;
    struct s117* rdi39;
    int32_t* rdi40;
    struct s118* rsi41;
    int64_t r9_42;
    int64_t rdx43;
    int32_t* rdi44;
    int32_t* r13_45;
    struct s119* rsi46;
    struct s120* rdi47;
    int32_t* rdi48;
    struct s121* rsi49;
    int64_t rcx50;
    int64_t* rsi51;
    int64_t* rax52;
    int64_t* rdx53;
    struct s12* rsi54;
    int32_t* rbx55;
    int32_t* rsi56;
    int32_t* r13_57;
    signed char** v58;
    int64_t* rax59;
    int32_t* rbx60;
    int32_t* r14_61;
    int32_t* r12_62;
    int32_t* r13_63;
    int32_t* r15_64;
    int32_t* rbp65;
    int64_t v66;

    v3 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(&r10_4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_4) + 4) = reinterpret_cast<int32_t>(free);
    *rdi = *rsi;
    *reinterpret_cast<int32_t*>(&rcx5) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx6) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi7 = (*reinterpret_cast<int32_t*>(&rdx6) * *reinterpret_cast<int32_t*>(&rcx5) + 1) * 0x51eb851f;
            r8_8 = rdi7 >> 63;
            rdi9 = reinterpret_cast<int64_t>(rdi7) >> 40;
            *reinterpret_cast<int32_t*>(&rdi10) = (*reinterpret_cast<int32_t*>(&rdi9) + *reinterpret_cast<int32_t*>(&r8_8)) * 0x320;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi11 = reinterpret_cast<struct s110*>(r14_12 + rcx5 * 0x7d0);
            rdi10->f0 = rsi11->f0;
            ++rdx6;
        } while (rdx6 != 0x3e8);
        ++rcx5;
    } while (rcx5 != 0x320);
    *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(free);
    rdi10->f4 = rsi11->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi15 = reinterpret_cast<struct s112*>(reinterpret_cast<int64_t>(rdx14) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            rdi16 = reinterpret_cast<struct s113*>(r12_17 + r10_4 * 0x708);
            rdi16->f0 = rsi15->f0;
            rsi18 = reinterpret_cast<struct s111*>(&rsi15->f4);
            rdx14 = rsi18;
        } while (!reinterpret_cast<int1_t>(rsi18 == 0x384));
        ++r10_4;
    } while (r10_4 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(free);
    rdi16->f4 = rsi18->f0;
    do {
        *reinterpret_cast<int32_t*>(&r9_20) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_20) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi21 = static_cast<int32_t>(r9_20 + 3) * *reinterpret_cast<int32_t*>(&rcx13) * 0x77280773;
            r8_22 = rdi21 >> 63;
            rdi23 = reinterpret_cast<int64_t>(rdi21) >> 41;
            *reinterpret_cast<int32_t*>(&rdi24) = (*reinterpret_cast<int32_t*>(&rdi23) + *reinterpret_cast<int32_t*>(&r8_22)) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi25 = reinterpret_cast<struct s115*>(r15_26 + rcx13 * 0x960);
            rdi24->f0 = rsi25->f0;
            ++r9_20;
        } while (r9_20 != 0x4b0);
        ++rcx13;
    } while (rcx13 != 0x384);
    *reinterpret_cast<int32_t*>(&r9_27) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_27) + 4) = reinterpret_cast<int32_t>(free);
    rdi24->f4 = rsi25->f4;
    do {
        *reinterpret_cast<int32_t*>(&rcx28) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi29 = (static_cast<int32_t>(rcx28 + 2) * *reinterpret_cast<int32_t*>(&rdx19) + 2) * 0x10624dd3;
            r8_30 = rdi29 >> 63;
            rdi31 = reinterpret_cast<int64_t>(rdi29) >> 38;
            *reinterpret_cast<int32_t*>(&rdi32) = (*reinterpret_cast<int32_t*>(&rdi31) + *reinterpret_cast<int32_t*>(&r8_30)) * 0x3e8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            *rdi32 = rbp33[rdx19 * 0x898];
            ++rcx28;
        } while (rcx28 != 0x44c);
        ++rdx19;
    } while (rdx19 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx34) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi36 = rbx37 + r9_27 * 0x708;
            rsi38 = reinterpret_cast<struct s116*>(rdi36 + rdx35 * 2);
            rdi36[rdx35 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi39) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi39->f0 = rsi38->f0;
                rdi40 = &rdi39->f4;
                rsi41 = reinterpret_cast<struct s118*>(&rsi38->f4);
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi40 = rsi41->f0;
                rsi38 = reinterpret_cast<struct s116*>(&rsi41->f4);
                rdi39 = reinterpret_cast<struct s117*>(reinterpret_cast<int64_t>(rdi40 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi39 == 0x3e8));
            ++rdx35;
        } while (rdx35 != 0x384);
        ++r9_27;
    } while (r9_27 != 0x320);
    *reinterpret_cast<int32_t*>(&r9_42) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_42) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx43) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx43) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi44 = r13_45 + rcx34 * 0x898;
            rsi46 = reinterpret_cast<struct s119*>(rdi44 + rdx43 * 2);
            rdi44[rdx43 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi47) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi47->f0 = rsi46->f0;
                rdi48 = &rdi47->f4;
                rsi49 = reinterpret_cast<struct s121*>(&rsi46->f4);
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi48 = rsi49->f0;
                rsi46 = reinterpret_cast<struct s119*>(&rsi49->f4);
                rdi47 = reinterpret_cast<struct s120*>(reinterpret_cast<int64_t>(rdi48 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rdi47 == 0x4b0));
            ++rdx43;
        } while (rdx43 != 0x44c);
        ++rcx34;
    } while (rcx34 != 0x384);
    do {
        *reinterpret_cast<int32_t*>(&rcx50) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx50) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi51 = rax52 + r9_42 * 0x44c;
            rdx53 = rsi51 + rcx50;
            rsi51[rcx50] = reinterpret_cast<int64_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rsi54) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi54) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rbx55[r9_42 * 0x708] = rsi54->f0;
                rsi56 = &rsi54->f4;
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                r13_57[reinterpret_cast<int64_t>(rsi56) * 0x898] = *rsi56;
                rsi54 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rsi56 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi54 == 0x384));
            ++rcx50;
        } while (rcx50 != 0x44c);
        ++r9_42;
    } while (r9_42 != 0x320);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && reinterpret_cast<int1_t>(**v58 == free)) {
        *reinterpret_cast<int32_t*>(&rsi54) = 0x44c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi54) + 4) = reinterpret_cast<int32_t>(free);
        rdx53 = rax59;
        fun_917(0x320, 0x44c, rdx53);
    }
    fun_91f(rbx60, rsi54, rdx53);
    fun_927(r14_61, rsi54, rdx53);
    fun_92f(r12_62, rsi54, rdx53);
    fun_937(r13_63, rsi54, rdx53);
    fun_93f(r15_64, rsi54, rdx53);
    fun_947(rbp65, rsi54, rdx53);
    fun_951(rax59, rsi54, rdx53);
    goto v66;
}

void free() {
}

void fun_f8(int32_t* rdi, int32_t* rsi) {
    int64_t rbx3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, edx");
    __asm__("divsd xmm1, xmm0");
    *rdi = *rsi;
    if (!reinterpret_cast<int1_t>(rbx3 + 1 == rdi + 1)) {
    }
}

void fun_11e() {
    int32_t r8d1;
    int32_t r8d2;
    int32_t* rsi3;
    int32_t* v4;
    int64_t r8_5;
    int32_t ecx6;
    int32_t* r9_7;
    int32_t ecx8;
    int32_t ecx9;
    int64_t r11_10;
    int32_t* rdi11;
    int64_t v12;

    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r8d1 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r8d2 == free))) {
        rsi3 = v4;
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, eax");
        *reinterpret_cast<int32_t*>(&r8_5) = ecx6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_5) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r9_7) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_7) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ecx8 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ecx9 == free))) {
                *reinterpret_cast<int32_t*>(&r11_10) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_10) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    __asm__("cdq ");
                    __asm__("xorps xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, edx");
                    __asm__("divsd xmm1, xmm0");
                    *rdi11 = *rsi3;
                    ++rdi11;
                    ++rsi3;
                    ++r11_10;
                } while (r11_10 != r8_5);
            }
            r9_7 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_7) + 1);
        } while (r9_7 != rdi11);
    }
    goto v12;
}

int64_t* g1b1 = reinterpret_cast<int64_t*>(0x3d8d48188b48);

void print_array(int32_t edi, int32_t esi, int64_t rdx) {
    int64_t* rax4;
    int64_t rcx5;
    int32_t r8d6;
    int64_t* r9_7;

    rax4 = g1b1;
    rcx5 = *rax4;
    fun_1cd(0x1bb, 22, 1, rcx5, r8d6, r9_7);
}

void submain(int32_t edi, int64_t rsi) {
    fun_4f6(0xafc80, 8);
}

