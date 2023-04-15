
void fun_282();

void free();

void fun_2a4(int64_t rdi, int64_t rsi, int64_t rdx);

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

void fun_25f() {
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
    int64_t r14_17;
    int64_t r15_18;
    int64_t* r8_19;
    int64_t r13_20;
    struct s2* rdi21;
    struct s3* rsi22;
    struct s4* rdi23;
    struct s4* v24;
    int64_t r9_25;
    int64_t r11_26;
    int64_t rbx27;
    struct s5* rdi28;
    struct s3* rsi29;
    int64_t r15_30;
    struct s5* rdi31;
    struct s3* rsi32;
    int64_t v33;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = rbx3;
        rsi2 = reinterpret_cast<int32_t*>(0x27b);
        fun_282();
        ++r14_4;
        if (r14_4 == r13_5) {
            do {
                ++rbp6;
                if (rbp6 == r12_7) 
                    goto addr_28c_8;
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
        fun_25f();
    }
    addr_28c_8:
    fun_2a4(rbx12, 0x293, 0x29a);
    rdi13 = reinterpret_cast<struct s0*>(0x2ab);
    *reinterpret_cast<int32_t*>(&rsi14) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
    rcx15 = rbx16;
    if (!free) {
        *reinterpret_cast<int32_t*>(&r14_17) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_17) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi14) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi14) == free))) {
                *reinterpret_cast<int32_t*>(&r15_18) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_18) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r8_19 + r14_17 * 0x384)[r15_18] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        rdi13->f0 = rsi14->f0;
                        rdi13 = reinterpret_cast<struct s0*>(&rdi13->f4);
                        rsi14 = reinterpret_cast<struct s1*>(&rsi14->f4);
                        *reinterpret_cast<int32_t*>(&r13_20) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_20) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi13->f0 = rsi14->f0;
                            rdi21 = reinterpret_cast<struct s2*>(&rdi13->f4);
                            rsi22 = reinterpret_cast<struct s3*>(&rsi14->f4);
                            __asm__("mulsd xmm3, xmm0");
                            __asm__("mulsd xmm3, [rbp+r15*8+0x0]");
                            __asm__("addsd xmm2, xmm3");
                            rdi21->f0 = rsi22->f0;
                            rdi13 = reinterpret_cast<struct s0*>(&rdi21->f4);
                            rsi14 = reinterpret_cast<struct s1*>(&rsi22->f4);
                            ++r13_20;
                        } while (r13_20 != 1);
                    }
                    ++r15_18;
                } while (r15_18 != 22);
            }
            ++r14_17;
        } while (r14_17 != 0x2ab);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi13) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi13) == free))) {
        rdi23 = v24;
        *reinterpret_cast<int32_t*>(&r9_25) = *reinterpret_cast<int32_t*>(&rcx15);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_25) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r11_26) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_26) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rcx15) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rcx15) == free))) {
                *reinterpret_cast<int32_t*>(&rbx27) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx27) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rdi23->f0 = rsi14->f0;
                    rdi28 = reinterpret_cast<struct s5*>(&rdi23->f4);
                    rsi29 = reinterpret_cast<struct s3*>(&rsi14->f4);
                    __asm__("mulsd xmm0, xmm1");
                    rdi28->f0 = rsi29->f0;
                    rdi23 = reinterpret_cast<struct s4*>(&rdi28->f4);
                    rsi14 = reinterpret_cast<struct s1*>(&rsi29->f4);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi14) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi14) == free))) {
                        rdi23->f0 = rsi14->f0;
                        rdi23 = reinterpret_cast<struct s4*>(&rdi23->f4);
                        rsi14 = reinterpret_cast<struct s1*>(&rsi14->f4);
                        *reinterpret_cast<int32_t*>(&r15_30) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_30) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi23->f0 = rsi14->f0;
                            rdi31 = reinterpret_cast<struct s5*>(&rdi23->f4);
                            rsi32 = reinterpret_cast<struct s3*>(&rsi14->f4);
                            __asm__("mulsd xmm2, [r12+rbx*8]");
                            __asm__("addsd xmm0, xmm2");
                            rdi31->f0 = rsi32->f0;
                            rdi23 = reinterpret_cast<struct s4*>(&rdi31->f4);
                            rsi14 = reinterpret_cast<struct s1*>(&rsi32->f4);
                            ++r15_30;
                        } while (r15_30 != 22);
                    }
                    ++rbx27;
                } while (rbx27 != r9_25);
            }
            ++r11_26;
        } while (r11_26 != 0x2ab);
    }
    goto v33;
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

void fun_282() {
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
    int64_t r14_17;
    int64_t r15_18;
    int64_t* r8_19;
    int64_t r13_20;
    struct s8* rdi21;
    struct s9* rsi22;
    struct s10* rdi23;
    struct s10* v24;
    int64_t r9_25;
    int64_t r11_26;
    int64_t rbx27;
    struct s11* rdi28;
    struct s9* rsi29;
    int64_t r15_30;
    struct s11* rdi31;
    struct s9* rsi32;
    int64_t v33;

    while (1) {
        ++r14_1;
        if (r14_1 == r13_2) {
            do {
                ++rbp3;
                if (rbp3 == r12_4) 
                    goto addr_28c_4;
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
            fun_25f();
        }
        *rdi8 = *rsi9;
        rdi8 = rbx11;
        rsi9 = reinterpret_cast<int32_t*>(0x27b);
        fun_282();
    }
    addr_28c_4:
    fun_2a4(rbx12, 0x293, 0x29a);
    rdi13 = reinterpret_cast<struct s6*>(0x2ab);
    *reinterpret_cast<int32_t*>(&rsi14) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
    rcx15 = rbx16;
    if (!free) {
        *reinterpret_cast<int32_t*>(&r14_17) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_17) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi14) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi14) == free))) {
                *reinterpret_cast<int32_t*>(&r15_18) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_18) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r8_19 + r14_17 * 0x384)[r15_18] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        rdi13->f0 = rsi14->f0;
                        rdi13 = reinterpret_cast<struct s6*>(&rdi13->f4);
                        rsi14 = reinterpret_cast<struct s7*>(&rsi14->f4);
                        *reinterpret_cast<int32_t*>(&r13_20) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_20) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi13->f0 = rsi14->f0;
                            rdi21 = reinterpret_cast<struct s8*>(&rdi13->f4);
                            rsi22 = reinterpret_cast<struct s9*>(&rsi14->f4);
                            __asm__("mulsd xmm3, xmm0");
                            __asm__("mulsd xmm3, [rbp+r15*8+0x0]");
                            __asm__("addsd xmm2, xmm3");
                            rdi21->f0 = rsi22->f0;
                            rdi13 = reinterpret_cast<struct s6*>(&rdi21->f4);
                            rsi14 = reinterpret_cast<struct s7*>(&rsi22->f4);
                            ++r13_20;
                        } while (r13_20 != 1);
                    }
                    ++r15_18;
                } while (r15_18 != 22);
            }
            ++r14_17;
        } while (r14_17 != 0x2ab);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi13) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi13) == free))) {
        rdi23 = v24;
        *reinterpret_cast<int32_t*>(&r9_25) = *reinterpret_cast<int32_t*>(&rcx15);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_25) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r11_26) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_26) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rcx15) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rcx15) == free))) {
                *reinterpret_cast<int32_t*>(&rbx27) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx27) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rdi23->f0 = rsi14->f0;
                    rdi28 = reinterpret_cast<struct s11*>(&rdi23->f4);
                    rsi29 = reinterpret_cast<struct s9*>(&rsi14->f4);
                    __asm__("mulsd xmm0, xmm1");
                    rdi28->f0 = rsi29->f0;
                    rdi23 = reinterpret_cast<struct s10*>(&rdi28->f4);
                    rsi14 = reinterpret_cast<struct s7*>(&rsi29->f4);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi14) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi14) == free))) {
                        rdi23->f0 = rsi14->f0;
                        rdi23 = reinterpret_cast<struct s10*>(&rdi23->f4);
                        rsi14 = reinterpret_cast<struct s7*>(&rsi14->f4);
                        *reinterpret_cast<int32_t*>(&r15_30) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_30) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi23->f0 = rsi14->f0;
                            rdi31 = reinterpret_cast<struct s11*>(&rdi23->f4);
                            rsi32 = reinterpret_cast<struct s9*>(&rsi14->f4);
                            __asm__("mulsd xmm2, [r12+rbx*8]");
                            __asm__("addsd xmm0, xmm2");
                            rdi31->f0 = rsi32->f0;
                            rdi23 = reinterpret_cast<struct s10*>(&rdi31->f4);
                            rsi14 = reinterpret_cast<struct s7*>(&rsi32->f4);
                            ++r15_30;
                        } while (r15_30 != 22);
                    }
                    ++rbx27;
                } while (rbx27 != r9_25);
            }
            ++r11_26;
        } while (r11_26 != 0x2ab);
    }
    goto v33;
}

struct s12 {
    int32_t f0;
    int32_t f4;
};

void fun_7f4(int32_t* rdi, struct s12* rsi, int32_t* rdx);

void fun_7fc(int32_t* rdi, struct s12* rsi, int32_t* rdx);

void fun_804(int32_t* rdi, struct s12* rsi, int32_t* rdx);

void fun_80c(int32_t* rdi, struct s12* rsi, int32_t* rdx);

void fun_814(int32_t* rdi, struct s12* rsi, int32_t* rdx);

void fun_7ec(int64_t rdi, struct s12* rsi, int32_t* rdx) {
    int32_t* rbx4;
    int32_t* r14_5;
    int32_t* r12_6;
    int32_t* r13_7;
    int32_t* r15_8;
    int64_t v9;

    fun_7f4(rbx4, rsi, rdx);
    fun_7fc(r14_5, rsi, rdx);
    fun_804(r12_6, rsi, rdx);
    fun_80c(r13_7, rsi, rdx);
    fun_814(r15_8, rsi, rdx);
    goto v9;
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

void fun_2a4(int64_t rdi, int64_t rsi, int64_t rdx) {
    struct s13* rdi4;
    struct s14* rsi5;
    int64_t rcx6;
    int64_t rbx7;
    int64_t r14_8;
    int64_t r15_9;
    int64_t* r8_10;
    int64_t r13_11;
    struct s15* rdi12;
    struct s16* rsi13;
    struct s17* rdi14;
    struct s17* v15;
    int64_t r9_16;
    int64_t r11_17;
    int64_t rbx18;
    struct s18* rdi19;
    struct s16* rsi20;
    int64_t r15_21;
    struct s18* rdi22;
    struct s16* rsi23;
    int64_t v24;

    rdi4 = reinterpret_cast<struct s13*>(0x2ab);
    *reinterpret_cast<int32_t*>(&rsi5) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(free);
    rcx6 = rbx7;
    if (!free) {
        *reinterpret_cast<int32_t*>(&r14_8) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_8) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi5) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi5) == free))) {
                *reinterpret_cast<int32_t*>(&r15_9) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_9) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r8_10 + r14_8 * 0x384)[r15_9] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        rdi4->f0 = rsi5->f0;
                        rdi4 = reinterpret_cast<struct s13*>(&rdi4->f4);
                        rsi5 = reinterpret_cast<struct s14*>(&rsi5->f4);
                        *reinterpret_cast<int32_t*>(&r13_11) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_11) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi4->f0 = rsi5->f0;
                            rdi12 = reinterpret_cast<struct s15*>(&rdi4->f4);
                            rsi13 = reinterpret_cast<struct s16*>(&rsi5->f4);
                            __asm__("mulsd xmm3, xmm0");
                            __asm__("mulsd xmm3, [rbp+r15*8+0x0]");
                            __asm__("addsd xmm2, xmm3");
                            rdi12->f0 = rsi13->f0;
                            rdi4 = reinterpret_cast<struct s13*>(&rdi12->f4);
                            rsi5 = reinterpret_cast<struct s14*>(&rsi13->f4);
                            ++r13_11;
                        } while (r13_11 != 1);
                    }
                    ++r15_9;
                } while (r15_9 != 22);
            }
            ++r14_8;
        } while (r14_8 != 0x2ab);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi4) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi4) == free))) {
        rdi14 = v15;
        *reinterpret_cast<int32_t*>(&r9_16) = *reinterpret_cast<int32_t*>(&rcx6);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_16) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r11_17) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_17) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rcx6) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rcx6) == free))) {
                *reinterpret_cast<int32_t*>(&rbx18) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx18) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rdi14->f0 = rsi5->f0;
                    rdi19 = reinterpret_cast<struct s18*>(&rdi14->f4);
                    rsi20 = reinterpret_cast<struct s16*>(&rsi5->f4);
                    __asm__("mulsd xmm0, xmm1");
                    rdi19->f0 = rsi20->f0;
                    rdi14 = reinterpret_cast<struct s17*>(&rdi19->f4);
                    rsi5 = reinterpret_cast<struct s14*>(&rsi20->f4);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi5) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi5) == free))) {
                        rdi14->f0 = rsi5->f0;
                        rdi14 = reinterpret_cast<struct s17*>(&rdi14->f4);
                        rsi5 = reinterpret_cast<struct s14*>(&rsi5->f4);
                        *reinterpret_cast<int32_t*>(&r15_21) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_21) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi14->f0 = rsi5->f0;
                            rdi22 = reinterpret_cast<struct s18*>(&rdi14->f4);
                            rsi23 = reinterpret_cast<struct s16*>(&rsi5->f4);
                            __asm__("mulsd xmm2, [r12+rbx*8]");
                            __asm__("addsd xmm0, xmm2");
                            rdi22->f0 = rsi23->f0;
                            rdi14 = reinterpret_cast<struct s17*>(&rdi22->f4);
                            rsi5 = reinterpret_cast<struct s14*>(&rsi23->f4);
                            ++r15_21;
                        } while (r15_21 != 22);
                    }
                    ++rbx18;
                } while (rbx18 != r9_16);
            }
            ++r11_17;
        } while (r11_17 != 0x2ab);
    }
    goto v24;
}

void fun_7f4(int32_t* rdi, struct s12* rsi, int32_t* rdx) {
    int32_t* r14_4;
    int32_t* r12_5;
    int32_t* r13_6;
    int32_t* r15_7;
    int64_t v8;

    fun_7fc(r14_4, rsi, rdx);
    fun_804(r12_5, rsi, rdx);
    fun_80c(r13_6, rsi, rdx);
    fun_814(r15_7, rsi, rdx);
    goto v8;
}

void fun_205();

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

void fun_1ed(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t* r8, int64_t r9) {
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
    int64_t r14_27;
    int64_t r15_28;
    int64_t r13_29;
    struct s21* rdi30;
    struct s22* rsi31;
    struct s23* rdi32;
    struct s23* v33;
    int64_t r9_34;
    int64_t r11_35;
    int64_t rbx36;
    struct s24* rdi37;
    struct s22* rsi38;
    int64_t r15_39;
    struct s24* rdi40;
    struct s22* rsi41;
    int64_t v42;

    rsi7 = reinterpret_cast<int32_t*>(0x1f4);
    rdi8 = rbx9;
    fun_205();
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
                        fun_25f();
                    }
                    *rdi8 = *rsi7;
                    rdi8 = rbx21;
                    rsi7 = reinterpret_cast<int32_t*>(0x27b);
                    fun_282();
                    ++r14_19;
                } while (r14_19 != r13_14);
            }
            ++rbp16;
        } while (rbp16 != r12_12);
    }
    fun_2a4(rbx22, 0x293, 0x29a);
    rdi23 = reinterpret_cast<struct s19*>(0x2ab);
    *reinterpret_cast<int32_t*>(&rsi24) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(free);
    rcx25 = rbx26;
    if (!free) {
        *reinterpret_cast<int32_t*>(&r14_27) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_27) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi24) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi24) == free))) {
                *reinterpret_cast<int32_t*>(&r15_28) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_28) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r8 + r14_27 * 0x384)[r15_28] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        rdi23->f0 = rsi24->f0;
                        rdi23 = reinterpret_cast<struct s19*>(&rdi23->f4);
                        rsi24 = reinterpret_cast<struct s20*>(&rsi24->f4);
                        *reinterpret_cast<int32_t*>(&r13_29) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_29) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi23->f0 = rsi24->f0;
                            rdi30 = reinterpret_cast<struct s21*>(&rdi23->f4);
                            rsi31 = reinterpret_cast<struct s22*>(&rsi24->f4);
                            __asm__("mulsd xmm3, xmm0");
                            __asm__("mulsd xmm3, [rbp+r15*8+0x0]");
                            __asm__("addsd xmm2, xmm3");
                            rdi30->f0 = rsi31->f0;
                            rdi23 = reinterpret_cast<struct s19*>(&rdi30->f4);
                            rsi24 = reinterpret_cast<struct s20*>(&rsi31->f4);
                            ++r13_29;
                        } while (r13_29 != 1);
                    }
                    ++r15_28;
                } while (r15_28 != 22);
            }
            ++r14_27;
        } while (r14_27 != 0x2ab);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi23) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi23) == free))) {
        rdi32 = v33;
        *reinterpret_cast<int32_t*>(&r9_34) = *reinterpret_cast<int32_t*>(&rcx25);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_34) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r11_35) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_35) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rcx25) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rcx25) == free))) {
                *reinterpret_cast<int32_t*>(&rbx36) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx36) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rdi32->f0 = rsi24->f0;
                    rdi37 = reinterpret_cast<struct s24*>(&rdi32->f4);
                    rsi38 = reinterpret_cast<struct s22*>(&rsi24->f4);
                    __asm__("mulsd xmm0, xmm1");
                    rdi37->f0 = rsi38->f0;
                    rdi32 = reinterpret_cast<struct s23*>(&rdi37->f4);
                    rsi24 = reinterpret_cast<struct s20*>(&rsi38->f4);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi24) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi24) == free))) {
                        rdi32->f0 = rsi24->f0;
                        rdi32 = reinterpret_cast<struct s23*>(&rdi32->f4);
                        rsi24 = reinterpret_cast<struct s20*>(&rsi24->f4);
                        *reinterpret_cast<int32_t*>(&r15_39) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_39) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi32->f0 = rsi24->f0;
                            rdi40 = reinterpret_cast<struct s24*>(&rdi32->f4);
                            rsi41 = reinterpret_cast<struct s22*>(&rsi24->f4);
                            __asm__("mulsd xmm2, [r12+rbx*8]");
                            __asm__("addsd xmm0, xmm2");
                            rdi40->f0 = rsi41->f0;
                            rdi32 = reinterpret_cast<struct s23*>(&rdi40->f4);
                            rsi24 = reinterpret_cast<struct s20*>(&rsi41->f4);
                            ++r15_39;
                        } while (r15_39 != 22);
                    }
                    ++rbx36;
                } while (rbx36 != r9_34);
            }
            ++r11_35;
        } while (r11_35 != 0x2ab);
    }
    goto v42;
}

int32_t* fun_472(int64_t rdi, int64_t rsi);

int32_t* fun_484(int64_t rdi, int64_t rsi);

int32_t* fun_496(int64_t rdi, int64_t rsi);

int32_t* fun_4a8(int32_t* rdi, int32_t* rsi);

int32_t gea600;

/* .LCPI3_1 */
int32_t LCPI3_1 = 0xb848d289;

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

struct s38 {
    int32_t f0;
    int32_t f4;
};

struct s39 {
    int32_t f0;
    int32_t f4;
};

void fun_460(int64_t rdi, int64_t rsi) {
    signed char** v3;
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
    int64_t rax14;
    int64_t rcx15;
    int64_t rdx16;
    uint64_t rdi17;
    uint64_t r8_18;
    int64_t rdi19;
    struct s25* rdi20;
    struct s26* rsi21;
    int64_t rcx22;
    struct s27* rdx23;
    struct s28* rsi24;
    struct s29* rdi25;
    struct s27* rsi26;
    int64_t rax27;
    int64_t rdx28;
    uint64_t rdi29;
    uint64_t r8_30;
    int64_t rdi31;
    struct s30* rdi32;
    struct s31* rsi33;
    int64_t rcx34;
    int64_t rdx35;
    uint64_t rdi36;
    uint64_t r8_37;
    int64_t rdi38;
    struct s32* rdi39;
    struct s33* rsi40;
    int64_t rax41;
    int64_t rdx42;
    int32_t* rdi43;
    struct s34* rsi44;
    struct s35* rdi45;
    struct s36* rdi46;
    struct s37* rsi47;
    struct s36* rdi48;
    int64_t rcx49;
    struct s38* rsi50;
    int32_t* rdx51;
    struct s12* rsi52;
    int32_t* rsi53;
    struct s39* rdi54;
    int32_t ebp55;
    int64_t v56;

    v3 = reinterpret_cast<signed char**>(__return_address());
    rbx4 = rax5;
    rax6 = fun_472(0xd6d80, 8);
    r14_7 = rax6;
    rax8 = fun_484(0xf1b30, 8);
    r12_9 = rax8;
    rax10 = fun_496(0x107ac0, 8);
    r13_11 = rax10;
    rax12 = fun_4a8(0xea600, 8);
    r15_13 = rax12;
    *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(free);
    gea600 = LCPI3_1;
    *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi17 = (*reinterpret_cast<int32_t*>(&rdx16) * *reinterpret_cast<int32_t*>(&rcx15) + 1) * 0x51eb851f;
            r8_18 = rdi17 >> 63;
            rdi19 = reinterpret_cast<int64_t>(rdi17) >> 40;
            *reinterpret_cast<int32_t*>(&rdi20) = (*reinterpret_cast<int32_t*>(&rdi19) + *reinterpret_cast<int32_t*>(&r8_18)) * 0x320;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi21 = reinterpret_cast<struct s26*>(r14_7 + rcx15 * 0x898);
            rdi20->f0 = rsi21->f0;
            ++rdx16;
        } while (rdx16 != 0x44c);
        ++rcx15;
    } while (rcx15 != 0x320);
    *reinterpret_cast<int32_t*>(&rcx22) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(free);
    rdi20->f4 = rsi21->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx23) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi24 = reinterpret_cast<struct s28*>(reinterpret_cast<int64_t>(rdx23) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi25 = reinterpret_cast<struct s29*>(r12_9 + rax14 * 0x708);
            rdi25->f0 = rsi24->f0;
            rsi26 = reinterpret_cast<struct s27*>(&rsi24->f4);
            rdx23 = rsi26;
        } while (!reinterpret_cast<int1_t>(rsi26 == 0x384));
        ++rax14;
    } while (rax14 != 0x44c);
    *reinterpret_cast<int32_t*>(&rax27) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = reinterpret_cast<int32_t>(free);
    rdi25->f4 = rsi26->f0;
    do {
        *reinterpret_cast<int32_t*>(&rdx28) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi29 = (static_cast<int32_t>(rdx28 + 3) * *reinterpret_cast<int32_t*>(&rcx22) + 1) * 0x1b4e81b5;
            r8_30 = rdi29 >> 63;
            rdi31 = reinterpret_cast<int64_t>(rdi29) >> 39;
            *reinterpret_cast<int32_t*>(&rdi32) = (*reinterpret_cast<int32_t*>(&rdi31) + *reinterpret_cast<int32_t*>(&r8_30)) * 0x4b0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi33 = reinterpret_cast<struct s31*>(r13_11 + rcx22 * 0x960);
            rdi32->f0 = rsi33->f0;
            ++rdx28;
        } while (rdx28 != 0x4b0);
        ++rcx22;
    } while (rcx22 != 0x384);
    *reinterpret_cast<int32_t*>(&rcx34) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = reinterpret_cast<int32_t>(free);
    rdi32->f4 = rsi33->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi36 = static_cast<int32_t>(rdx35 + 2) * *reinterpret_cast<int32_t*>(&rax27) * 0x77280773;
            r8_37 = rdi36 >> 63;
            rdi38 = reinterpret_cast<int64_t>(rdi36) >> 41;
            *reinterpret_cast<int32_t*>(&rdi39) = (*reinterpret_cast<int32_t*>(&rdi38) + *reinterpret_cast<int32_t*>(&r8_37)) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi40 = reinterpret_cast<struct s33*>(r15_13 + rax27 * 0x960);
            rdi39->f0 = rsi40->f0;
            ++rdx35;
        } while (rdx35 != 0x4b0);
        ++rax27;
    } while (rax27 != 0x320);
    *reinterpret_cast<int32_t*>(&rax41) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = reinterpret_cast<int32_t>(free);
    rdi39->f4 = rsi40->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx42) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx42) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi43 = rbx4 + rcx34 * 0x708;
            rsi44 = reinterpret_cast<struct s34*>(rdi43 + rdx42 * 2);
            rdi43[rdx42 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rdi45) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi45->f0 = rsi44->f0;
                rdi46 = reinterpret_cast<struct s36*>(&rdi45->f4);
                rsi47 = reinterpret_cast<struct s37*>(&rsi44->f4);
                __asm__("mulsd xmm2, xmm0");
                __asm__("mulsd xmm2, [r8+rdx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi46->f0 = rsi47->f0;
                rsi44 = reinterpret_cast<struct s34*>(&rsi47->f4);
                rdi45 = reinterpret_cast<struct s35*>(reinterpret_cast<int64_t>(&rdi46->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi45 == 0x44c));
            ++rdx42;
        } while (rdx42 != 0x384);
        ++rcx34;
    } while (rcx34 != 0x320);
    rdi45->f0 = rsi44->f0;
    rdi48 = reinterpret_cast<struct s36*>(&rdi45->f4);
    do {
        *reinterpret_cast<int32_t*>(&rcx49) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx49) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi50 = reinterpret_cast<struct s38*>(r15_13 + rax41 * 0x960);
            rdx51 = &(rsi50 + rcx49)->f0;
            rdi48->f0 = rsi50->f0;
            __asm__("mulsd xmm1, xmm0");
            rdi48->f4 = rsi50->f4;
            *reinterpret_cast<int32_t*>(&rsi52) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi52) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rbx4[rax41 * 0x708] = rsi52->f0;
                rsi53 = &rsi52->f4;
                rdi54 = reinterpret_cast<struct s39*>(r13_11 + reinterpret_cast<int64_t>(rsi53) * 0x960);
                __asm__("mulsd xmm2, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi54->f0 = *rsi53;
                rdi48 = reinterpret_cast<struct s36*>(&rdi54->f4);
                rsi52 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rsi53 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi52 == 0x384));
            ++rcx49;
        } while (rcx49 != 0x4b0);
        ++rax41;
    } while (rax41 != 0x320);
    if (ebp55 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        *reinterpret_cast<int32_t*>(&rsi52) = 0x4b0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi52) + 4) = reinterpret_cast<int32_t>(free);
        rdx51 = r15_13;
        fun_7ec(0x320, 0x4b0, rdx51);
    }
    fun_7f4(rbx4, rsi52, rdx51);
    fun_7fc(r14_7, rsi52, rdx51);
    fun_804(r12_9, rsi52, rdx51);
    fun_80c(r13_11, rsi52, rdx51);
    fun_814(r15_13, rsi52, rdx51);
    goto v56;
}

void fun_7fc(int32_t* rdi, struct s12* rsi, int32_t* rdx) {
    int32_t* r12_4;
    int32_t* r13_5;
    int32_t* r15_6;
    int64_t v7;

    fun_804(r12_4, rsi, rdx);
    fun_80c(r13_5, rsi, rdx);
    fun_814(r15_6, rsi, rdx);
    goto v7;
}

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

void fun_205() {
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
    struct s40* rdi16;
    struct s41* rsi17;
    int64_t rcx18;
    int64_t rbx19;
    int64_t r14_20;
    int64_t r15_21;
    int64_t* r8_22;
    int64_t r13_23;
    struct s42* rdi24;
    struct s43* rsi25;
    struct s44* rdi26;
    struct s44* v27;
    int64_t r9_28;
    int64_t r11_29;
    int64_t rbx30;
    struct s45* rdi31;
    struct s43* rsi32;
    int64_t r15_33;
    struct s45* rdi34;
    struct s43* rsi35;
    int64_t v36;

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
                        fun_25f();
                    }
                    *rdi11 = *rsi12;
                    rdi11 = rbx14;
                    rsi12 = reinterpret_cast<int32_t*>(0x27b);
                    fun_282();
                    ++r14_10;
                } while (r14_10 != r13_5);
            }
            ++rbp7;
        } while (rbp7 != r12_3);
    }
    fun_2a4(rbx15, 0x293, 0x29a);
    rdi16 = reinterpret_cast<struct s40*>(0x2ab);
    *reinterpret_cast<int32_t*>(&rsi17) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(free);
    rcx18 = rbx19;
    if (!free) {
        *reinterpret_cast<int32_t*>(&r14_20) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_20) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi17) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi17) == free))) {
                *reinterpret_cast<int32_t*>(&r15_21) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_21) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r8_22 + r14_20 * 0x384)[r15_21] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        rdi16->f0 = rsi17->f0;
                        rdi16 = reinterpret_cast<struct s40*>(&rdi16->f4);
                        rsi17 = reinterpret_cast<struct s41*>(&rsi17->f4);
                        *reinterpret_cast<int32_t*>(&r13_23) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_23) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi16->f0 = rsi17->f0;
                            rdi24 = reinterpret_cast<struct s42*>(&rdi16->f4);
                            rsi25 = reinterpret_cast<struct s43*>(&rsi17->f4);
                            __asm__("mulsd xmm3, xmm0");
                            __asm__("mulsd xmm3, [rbp+r15*8+0x0]");
                            __asm__("addsd xmm2, xmm3");
                            rdi24->f0 = rsi25->f0;
                            rdi16 = reinterpret_cast<struct s40*>(&rdi24->f4);
                            rsi17 = reinterpret_cast<struct s41*>(&rsi25->f4);
                            ++r13_23;
                        } while (r13_23 != 1);
                    }
                    ++r15_21;
                } while (r15_21 != 22);
            }
            ++r14_20;
        } while (r14_20 != 0x2ab);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi16) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi16) == free))) {
        rdi26 = v27;
        *reinterpret_cast<int32_t*>(&r9_28) = *reinterpret_cast<int32_t*>(&rcx18);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_28) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r11_29) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_29) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rcx18) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rcx18) == free))) {
                *reinterpret_cast<int32_t*>(&rbx30) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx30) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rdi26->f0 = rsi17->f0;
                    rdi31 = reinterpret_cast<struct s45*>(&rdi26->f4);
                    rsi32 = reinterpret_cast<struct s43*>(&rsi17->f4);
                    __asm__("mulsd xmm0, xmm1");
                    rdi31->f0 = rsi32->f0;
                    rdi26 = reinterpret_cast<struct s44*>(&rdi31->f4);
                    rsi17 = reinterpret_cast<struct s41*>(&rsi32->f4);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi17) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi17) == free))) {
                        rdi26->f0 = rsi17->f0;
                        rdi26 = reinterpret_cast<struct s44*>(&rdi26->f4);
                        rsi17 = reinterpret_cast<struct s41*>(&rsi17->f4);
                        *reinterpret_cast<int32_t*>(&r15_33) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_33) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            rdi26->f0 = rsi17->f0;
                            rdi34 = reinterpret_cast<struct s45*>(&rdi26->f4);
                            rsi35 = reinterpret_cast<struct s43*>(&rsi17->f4);
                            __asm__("mulsd xmm2, [r12+rbx*8]");
                            __asm__("addsd xmm0, xmm2");
                            rdi34->f0 = rsi35->f0;
                            rdi26 = reinterpret_cast<struct s44*>(&rdi34->f4);
                            rsi17 = reinterpret_cast<struct s41*>(&rsi35->f4);
                            ++r15_33;
                        } while (r15_33 != 22);
                    }
                    ++rbx30;
                } while (rbx30 != r9_28);
            }
            ++r11_29;
        } while (r11_29 != 0x2ab);
    }
    goto v36;
}

struct s46 {
    int32_t f0;
    int32_t f4;
};

struct s47 {
    int32_t f0;
    int32_t f4;
};

struct s48 {
    int32_t f0;
    int32_t f1;
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
    int32_t f4;
};

struct s60 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_472(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int32_t* r14_4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* r12_7;
    int32_t* rax8;
    int32_t* r13_9;
    int32_t* rax10;
    int32_t* r15_11;
    int64_t rax12;
    int64_t rcx13;
    int64_t rdx14;
    uint64_t rdi15;
    uint64_t r8_16;
    int64_t rdi17;
    struct s46* rdi18;
    struct s47* rsi19;
    int64_t rcx20;
    struct s48* rdx21;
    struct s49* rsi22;
    struct s50* rdi23;
    struct s48* rsi24;
    int64_t rax25;
    int64_t rdx26;
    uint64_t rdi27;
    uint64_t r8_28;
    int64_t rdi29;
    struct s51* rdi30;
    struct s52* rsi31;
    int64_t rcx32;
    int64_t rdx33;
    uint64_t rdi34;
    uint64_t r8_35;
    int64_t rdi36;
    struct s53* rdi37;
    struct s54* rsi38;
    int64_t rax39;
    int64_t rdx40;
    int32_t* rdi41;
    int32_t* rbx42;
    struct s55* rsi43;
    struct s56* rdi44;
    struct s57* rdi45;
    struct s58* rsi46;
    struct s57* rdi47;
    int64_t rcx48;
    struct s59* rsi49;
    int32_t* rdx50;
    struct s12* rsi51;
    int32_t* rbx52;
    int32_t* rsi53;
    struct s60* rdi54;
    int32_t ebp55;
    int32_t* rbx56;
    int64_t v57;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r14_4 = rax5;
    rax6 = fun_484(0xf1b30, 8);
    r12_7 = rax6;
    rax8 = fun_496(0x107ac0, 8);
    r13_9 = rax8;
    rax10 = fun_4a8(0xea600, 8);
    r15_11 = rax10;
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(free);
    gea600 = LCPI3_1;
    *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi15 = (*reinterpret_cast<int32_t*>(&rdx14) * *reinterpret_cast<int32_t*>(&rcx13) + 1) * 0x51eb851f;
            r8_16 = rdi15 >> 63;
            rdi17 = reinterpret_cast<int64_t>(rdi15) >> 40;
            *reinterpret_cast<int32_t*>(&rdi18) = (*reinterpret_cast<int32_t*>(&rdi17) + *reinterpret_cast<int32_t*>(&r8_16)) * 0x320;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi19 = reinterpret_cast<struct s47*>(r14_4 + rcx13 * 0x898);
            rdi18->f0 = rsi19->f0;
            ++rdx14;
        } while (rdx14 != 0x44c);
        ++rcx13;
    } while (rcx13 != 0x320);
    *reinterpret_cast<int32_t*>(&rcx20) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(free);
    rdi18->f4 = rsi19->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx21) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi22 = reinterpret_cast<struct s49*>(reinterpret_cast<int64_t>(rdx21) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi23 = reinterpret_cast<struct s50*>(r12_7 + rax12 * 0x708);
            rdi23->f0 = rsi22->f0;
            rsi24 = reinterpret_cast<struct s48*>(&rsi22->f4);
            rdx21 = rsi24;
        } while (!reinterpret_cast<int1_t>(rsi24 == 0x384));
        ++rax12;
    } while (rax12 != 0x44c);
    *reinterpret_cast<int32_t*>(&rax25) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = reinterpret_cast<int32_t>(free);
    rdi23->f4 = rsi24->f0;
    do {
        *reinterpret_cast<int32_t*>(&rdx26) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi27 = (static_cast<int32_t>(rdx26 + 3) * *reinterpret_cast<int32_t*>(&rcx20) + 1) * 0x1b4e81b5;
            r8_28 = rdi27 >> 63;
            rdi29 = reinterpret_cast<int64_t>(rdi27) >> 39;
            *reinterpret_cast<int32_t*>(&rdi30) = (*reinterpret_cast<int32_t*>(&rdi29) + *reinterpret_cast<int32_t*>(&r8_28)) * 0x4b0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi30) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi31 = reinterpret_cast<struct s52*>(r13_9 + rcx20 * 0x960);
            rdi30->f0 = rsi31->f0;
            ++rdx26;
        } while (rdx26 != 0x4b0);
        ++rcx20;
    } while (rcx20 != 0x384);
    *reinterpret_cast<int32_t*>(&rcx32) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = reinterpret_cast<int32_t>(free);
    rdi30->f4 = rsi31->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx33) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi34 = static_cast<int32_t>(rdx33 + 2) * *reinterpret_cast<int32_t*>(&rax25) * 0x77280773;
            r8_35 = rdi34 >> 63;
            rdi36 = reinterpret_cast<int64_t>(rdi34) >> 41;
            *reinterpret_cast<int32_t*>(&rdi37) = (*reinterpret_cast<int32_t*>(&rdi36) + *reinterpret_cast<int32_t*>(&r8_35)) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi38 = reinterpret_cast<struct s54*>(r15_11 + rax25 * 0x960);
            rdi37->f0 = rsi38->f0;
            ++rdx33;
        } while (rdx33 != 0x4b0);
        ++rax25;
    } while (rax25 != 0x320);
    *reinterpret_cast<int32_t*>(&rax39) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = reinterpret_cast<int32_t>(free);
    rdi37->f4 = rsi38->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx40) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx40) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi41 = rbx42 + rcx32 * 0x708;
            rsi43 = reinterpret_cast<struct s55*>(rdi41 + rdx40 * 2);
            rdi41[rdx40 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rdi44) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi44->f0 = rsi43->f0;
                rdi45 = reinterpret_cast<struct s57*>(&rdi44->f4);
                rsi46 = reinterpret_cast<struct s58*>(&rsi43->f4);
                __asm__("mulsd xmm2, xmm0");
                __asm__("mulsd xmm2, [r8+rdx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi45->f0 = rsi46->f0;
                rsi43 = reinterpret_cast<struct s55*>(&rsi46->f4);
                rdi44 = reinterpret_cast<struct s56*>(reinterpret_cast<int64_t>(&rdi45->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi44 == 0x44c));
            ++rdx40;
        } while (rdx40 != 0x384);
        ++rcx32;
    } while (rcx32 != 0x320);
    rdi44->f0 = rsi43->f0;
    rdi47 = reinterpret_cast<struct s57*>(&rdi44->f4);
    do {
        *reinterpret_cast<int32_t*>(&rcx48) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx48) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi49 = reinterpret_cast<struct s59*>(r15_11 + rax39 * 0x960);
            rdx50 = &(rsi49 + rcx48)->f0;
            rdi47->f0 = rsi49->f0;
            __asm__("mulsd xmm1, xmm0");
            rdi47->f4 = rsi49->f4;
            *reinterpret_cast<int32_t*>(&rsi51) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi51) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rbx52[rax39 * 0x708] = rsi51->f0;
                rsi53 = &rsi51->f4;
                rdi54 = reinterpret_cast<struct s60*>(r13_9 + reinterpret_cast<int64_t>(rsi53) * 0x960);
                __asm__("mulsd xmm2, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi54->f0 = *rsi53;
                rdi47 = reinterpret_cast<struct s57*>(&rdi54->f4);
                rsi51 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rsi53 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi51 == 0x384));
            ++rcx48;
        } while (rcx48 != 0x4b0);
        ++rax39;
    } while (rax39 != 0x320);
    if (ebp55 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        *reinterpret_cast<int32_t*>(&rsi51) = 0x4b0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi51) + 4) = reinterpret_cast<int32_t>(free);
        rdx50 = r15_11;
        fun_7ec(0x320, 0x4b0, rdx50);
    }
    fun_7f4(rbx56, rsi51, rdx50);
    fun_7fc(r14_4, rsi51, rdx50);
    fun_804(r12_7, rsi51, rdx50);
    fun_80c(r13_9, rsi51, rdx50);
    fun_814(r15_11, rsi51, rdx50);
    goto v57;
}

void fun_804(int32_t* rdi, struct s12* rsi, int32_t* rdx) {
    int32_t* r13_4;
    int32_t* r15_5;
    int64_t v6;

    fun_80c(r13_4, rsi, rdx);
    fun_814(r15_5, rsi, rdx);
    goto v6;
}

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
    int32_t f1;
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
    int32_t f4;
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

int32_t* fun_484(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int32_t* r12_4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* r13_7;
    int32_t* rax8;
    int32_t* r15_9;
    int64_t rax10;
    int64_t rcx11;
    int64_t rdx12;
    uint64_t rdi13;
    uint64_t r8_14;
    int64_t rdi15;
    struct s61* rdi16;
    struct s62* rsi17;
    int32_t* r14_18;
    int64_t rcx19;
    struct s63* rdx20;
    struct s64* rsi21;
    struct s65* rdi22;
    struct s63* rsi23;
    int64_t rax24;
    int64_t rdx25;
    uint64_t rdi26;
    uint64_t r8_27;
    int64_t rdi28;
    struct s66* rdi29;
    struct s67* rsi30;
    int64_t rcx31;
    int64_t rdx32;
    uint64_t rdi33;
    uint64_t r8_34;
    int64_t rdi35;
    struct s68* rdi36;
    struct s69* rsi37;
    int64_t rax38;
    int64_t rdx39;
    int32_t* rdi40;
    int32_t* rbx41;
    struct s70* rsi42;
    struct s71* rdi43;
    struct s72* rdi44;
    struct s73* rsi45;
    struct s72* rdi46;
    int64_t rcx47;
    struct s74* rsi48;
    int32_t* rdx49;
    struct s12* rsi50;
    int32_t* rbx51;
    int32_t* rsi52;
    struct s75* rdi53;
    int32_t ebp54;
    int32_t* rbx55;
    int32_t* r14_56;
    int64_t v57;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r12_4 = rax5;
    rax6 = fun_496(0x107ac0, 8);
    r13_7 = rax6;
    rax8 = fun_4a8(0xea600, 8);
    r15_9 = rax8;
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(free);
    gea600 = LCPI3_1;
    *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi13 = (*reinterpret_cast<int32_t*>(&rdx12) * *reinterpret_cast<int32_t*>(&rcx11) + 1) * 0x51eb851f;
            r8_14 = rdi13 >> 63;
            rdi15 = reinterpret_cast<int64_t>(rdi13) >> 40;
            *reinterpret_cast<int32_t*>(&rdi16) = (*reinterpret_cast<int32_t*>(&rdi15) + *reinterpret_cast<int32_t*>(&r8_14)) * 0x320;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi17 = reinterpret_cast<struct s62*>(r14_18 + rcx11 * 0x898);
            rdi16->f0 = rsi17->f0;
            ++rdx12;
        } while (rdx12 != 0x44c);
        ++rcx11;
    } while (rcx11 != 0x320);
    *reinterpret_cast<int32_t*>(&rcx19) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(free);
    rdi16->f4 = rsi17->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx20) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi21 = reinterpret_cast<struct s64*>(reinterpret_cast<int64_t>(rdx20) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi22 = reinterpret_cast<struct s65*>(r12_4 + rax10 * 0x708);
            rdi22->f0 = rsi21->f0;
            rsi23 = reinterpret_cast<struct s63*>(&rsi21->f4);
            rdx20 = rsi23;
        } while (!reinterpret_cast<int1_t>(rsi23 == 0x384));
        ++rax10;
    } while (rax10 != 0x44c);
    *reinterpret_cast<int32_t*>(&rax24) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(free);
    rdi22->f4 = rsi23->f0;
    do {
        *reinterpret_cast<int32_t*>(&rdx25) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi26 = (static_cast<int32_t>(rdx25 + 3) * *reinterpret_cast<int32_t*>(&rcx19) + 1) * 0x1b4e81b5;
            r8_27 = rdi26 >> 63;
            rdi28 = reinterpret_cast<int64_t>(rdi26) >> 39;
            *reinterpret_cast<int32_t*>(&rdi29) = (*reinterpret_cast<int32_t*>(&rdi28) + *reinterpret_cast<int32_t*>(&r8_27)) * 0x4b0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi30 = reinterpret_cast<struct s67*>(r13_7 + rcx19 * 0x960);
            rdi29->f0 = rsi30->f0;
            ++rdx25;
        } while (rdx25 != 0x4b0);
        ++rcx19;
    } while (rcx19 != 0x384);
    *reinterpret_cast<int32_t*>(&rcx31) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(free);
    rdi29->f4 = rsi30->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx32) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi33 = static_cast<int32_t>(rdx32 + 2) * *reinterpret_cast<int32_t*>(&rax24) * 0x77280773;
            r8_34 = rdi33 >> 63;
            rdi35 = reinterpret_cast<int64_t>(rdi33) >> 41;
            *reinterpret_cast<int32_t*>(&rdi36) = (*reinterpret_cast<int32_t*>(&rdi35) + *reinterpret_cast<int32_t*>(&r8_34)) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi37 = reinterpret_cast<struct s69*>(r15_9 + rax24 * 0x960);
            rdi36->f0 = rsi37->f0;
            ++rdx32;
        } while (rdx32 != 0x4b0);
        ++rax24;
    } while (rax24 != 0x320);
    *reinterpret_cast<int32_t*>(&rax38) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = reinterpret_cast<int32_t>(free);
    rdi36->f4 = rsi37->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx39) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi40 = rbx41 + rcx31 * 0x708;
            rsi42 = reinterpret_cast<struct s70*>(rdi40 + rdx39 * 2);
            rdi40[rdx39 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rdi43) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi43->f0 = rsi42->f0;
                rdi44 = reinterpret_cast<struct s72*>(&rdi43->f4);
                rsi45 = reinterpret_cast<struct s73*>(&rsi42->f4);
                __asm__("mulsd xmm2, xmm0");
                __asm__("mulsd xmm2, [r8+rdx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi44->f0 = rsi45->f0;
                rsi42 = reinterpret_cast<struct s70*>(&rsi45->f4);
                rdi43 = reinterpret_cast<struct s71*>(reinterpret_cast<int64_t>(&rdi44->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi43 == 0x44c));
            ++rdx39;
        } while (rdx39 != 0x384);
        ++rcx31;
    } while (rcx31 != 0x320);
    rdi43->f0 = rsi42->f0;
    rdi46 = reinterpret_cast<struct s72*>(&rdi43->f4);
    do {
        *reinterpret_cast<int32_t*>(&rcx47) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx47) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi48 = reinterpret_cast<struct s74*>(r15_9 + rax38 * 0x960);
            rdx49 = &(rsi48 + rcx47)->f0;
            rdi46->f0 = rsi48->f0;
            __asm__("mulsd xmm1, xmm0");
            rdi46->f4 = rsi48->f4;
            *reinterpret_cast<int32_t*>(&rsi50) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi50) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rbx51[rax38 * 0x708] = rsi50->f0;
                rsi52 = &rsi50->f4;
                rdi53 = reinterpret_cast<struct s75*>(r13_7 + reinterpret_cast<int64_t>(rsi52) * 0x960);
                __asm__("mulsd xmm2, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi53->f0 = *rsi52;
                rdi46 = reinterpret_cast<struct s72*>(&rdi53->f4);
                rsi50 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rsi52 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi50 == 0x384));
            ++rcx47;
        } while (rcx47 != 0x4b0);
        ++rax38;
    } while (rax38 != 0x320);
    if (ebp54 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        *reinterpret_cast<int32_t*>(&rsi50) = 0x4b0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi50) + 4) = reinterpret_cast<int32_t>(free);
        rdx49 = r15_9;
        fun_7ec(0x320, 0x4b0, rdx49);
    }
    fun_7f4(rbx55, rsi50, rdx49);
    fun_7fc(r14_56, rsi50, rdx49);
    fun_804(r12_4, rsi50, rdx49);
    fun_80c(r13_7, rsi50, rdx49);
    fun_814(r15_9, rsi50, rdx49);
    goto v57;
}

void fun_80c(int32_t* rdi, struct s12* rsi, int32_t* rdx) {
    int32_t* r15_4;
    int64_t v5;

    fun_814(r15_4, rsi, rdx);
    goto v5;
}

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
    int32_t f1;
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
    int32_t f4;
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

int32_t* fun_496(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int32_t* r13_4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* r15_7;
    int64_t rax8;
    int64_t rcx9;
    int64_t rdx10;
    uint64_t rdi11;
    uint64_t r8_12;
    int64_t rdi13;
    struct s76* rdi14;
    struct s77* rsi15;
    int32_t* r14_16;
    int64_t rcx17;
    struct s78* rdx18;
    struct s79* rsi19;
    struct s80* rdi20;
    int32_t* r12_21;
    struct s78* rsi22;
    int64_t rax23;
    int64_t rdx24;
    uint64_t rdi25;
    uint64_t r8_26;
    int64_t rdi27;
    struct s81* rdi28;
    struct s82* rsi29;
    int64_t rcx30;
    int64_t rdx31;
    uint64_t rdi32;
    uint64_t r8_33;
    int64_t rdi34;
    struct s83* rdi35;
    struct s84* rsi36;
    int64_t rax37;
    int64_t rdx38;
    int32_t* rdi39;
    int32_t* rbx40;
    struct s85* rsi41;
    struct s86* rdi42;
    struct s87* rdi43;
    struct s88* rsi44;
    struct s87* rdi45;
    int64_t rcx46;
    struct s89* rsi47;
    int32_t* rdx48;
    struct s12* rsi49;
    int32_t* rbx50;
    int32_t* rsi51;
    struct s90* rdi52;
    int32_t ebp53;
    int32_t* rbx54;
    int32_t* r14_55;
    int32_t* r12_56;
    int64_t v57;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r13_4 = rax5;
    rax6 = fun_4a8(0xea600, 8);
    r15_7 = rax6;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(free);
    gea600 = LCPI3_1;
    *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi11 = (*reinterpret_cast<int32_t*>(&rdx10) * *reinterpret_cast<int32_t*>(&rcx9) + 1) * 0x51eb851f;
            r8_12 = rdi11 >> 63;
            rdi13 = reinterpret_cast<int64_t>(rdi11) >> 40;
            *reinterpret_cast<int32_t*>(&rdi14) = (*reinterpret_cast<int32_t*>(&rdi13) + *reinterpret_cast<int32_t*>(&r8_12)) * 0x320;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi15 = reinterpret_cast<struct s77*>(r14_16 + rcx9 * 0x898);
            rdi14->f0 = rsi15->f0;
            ++rdx10;
        } while (rdx10 != 0x44c);
        ++rcx9;
    } while (rcx9 != 0x320);
    *reinterpret_cast<int32_t*>(&rcx17) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(free);
    rdi14->f4 = rsi15->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx18) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi19 = reinterpret_cast<struct s79*>(reinterpret_cast<int64_t>(rdx18) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi20 = reinterpret_cast<struct s80*>(r12_21 + rax8 * 0x708);
            rdi20->f0 = rsi19->f0;
            rsi22 = reinterpret_cast<struct s78*>(&rsi19->f4);
            rdx18 = rsi22;
        } while (!reinterpret_cast<int1_t>(rsi22 == 0x384));
        ++rax8;
    } while (rax8 != 0x44c);
    *reinterpret_cast<int32_t*>(&rax23) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = reinterpret_cast<int32_t>(free);
    rdi20->f4 = rsi22->f0;
    do {
        *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi25 = (static_cast<int32_t>(rdx24 + 3) * *reinterpret_cast<int32_t*>(&rcx17) + 1) * 0x1b4e81b5;
            r8_26 = rdi25 >> 63;
            rdi27 = reinterpret_cast<int64_t>(rdi25) >> 39;
            *reinterpret_cast<int32_t*>(&rdi28) = (*reinterpret_cast<int32_t*>(&rdi27) + *reinterpret_cast<int32_t*>(&r8_26)) * 0x4b0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi29 = reinterpret_cast<struct s82*>(r13_4 + rcx17 * 0x960);
            rdi28->f0 = rsi29->f0;
            ++rdx24;
        } while (rdx24 != 0x4b0);
        ++rcx17;
    } while (rcx17 != 0x384);
    *reinterpret_cast<int32_t*>(&rcx30) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx30) + 4) = reinterpret_cast<int32_t>(free);
    rdi28->f4 = rsi29->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx31) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi32 = static_cast<int32_t>(rdx31 + 2) * *reinterpret_cast<int32_t*>(&rax23) * 0x77280773;
            r8_33 = rdi32 >> 63;
            rdi34 = reinterpret_cast<int64_t>(rdi32) >> 41;
            *reinterpret_cast<int32_t*>(&rdi35) = (*reinterpret_cast<int32_t*>(&rdi34) + *reinterpret_cast<int32_t*>(&r8_33)) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi36 = reinterpret_cast<struct s84*>(r15_7 + rax23 * 0x960);
            rdi35->f0 = rsi36->f0;
            ++rdx31;
        } while (rdx31 != 0x4b0);
        ++rax23;
    } while (rax23 != 0x320);
    *reinterpret_cast<int32_t*>(&rax37) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax37) + 4) = reinterpret_cast<int32_t>(free);
    rdi35->f4 = rsi36->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx38) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi39 = rbx40 + rcx30 * 0x708;
            rsi41 = reinterpret_cast<struct s85*>(rdi39 + rdx38 * 2);
            rdi39[rdx38 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rdi42) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi42->f0 = rsi41->f0;
                rdi43 = reinterpret_cast<struct s87*>(&rdi42->f4);
                rsi44 = reinterpret_cast<struct s88*>(&rsi41->f4);
                __asm__("mulsd xmm2, xmm0");
                __asm__("mulsd xmm2, [r8+rdx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi43->f0 = rsi44->f0;
                rsi41 = reinterpret_cast<struct s85*>(&rsi44->f4);
                rdi42 = reinterpret_cast<struct s86*>(reinterpret_cast<int64_t>(&rdi43->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi42 == 0x44c));
            ++rdx38;
        } while (rdx38 != 0x384);
        ++rcx30;
    } while (rcx30 != 0x320);
    rdi42->f0 = rsi41->f0;
    rdi45 = reinterpret_cast<struct s87*>(&rdi42->f4);
    do {
        *reinterpret_cast<int32_t*>(&rcx46) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx46) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi47 = reinterpret_cast<struct s89*>(r15_7 + rax37 * 0x960);
            rdx48 = &(rsi47 + rcx46)->f0;
            rdi45->f0 = rsi47->f0;
            __asm__("mulsd xmm1, xmm0");
            rdi45->f4 = rsi47->f4;
            *reinterpret_cast<int32_t*>(&rsi49) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi49) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rbx50[rax37 * 0x708] = rsi49->f0;
                rsi51 = &rsi49->f4;
                rdi52 = reinterpret_cast<struct s90*>(r13_4 + reinterpret_cast<int64_t>(rsi51) * 0x960);
                __asm__("mulsd xmm2, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi52->f0 = *rsi51;
                rdi45 = reinterpret_cast<struct s87*>(&rdi52->f4);
                rsi49 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rsi51 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi49 == 0x384));
            ++rcx46;
        } while (rcx46 != 0x4b0);
        ++rax37;
    } while (rax37 != 0x320);
    if (ebp53 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        *reinterpret_cast<int32_t*>(&rsi49) = 0x4b0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi49) + 4) = reinterpret_cast<int32_t>(free);
        rdx48 = r15_7;
        fun_7ec(0x320, 0x4b0, rdx48);
    }
    fun_7f4(rbx54, rsi49, rdx48);
    fun_7fc(r14_55, rsi49, rdx48);
    fun_804(r12_56, rsi49, rdx48);
    fun_80c(r13_4, rsi49, rdx48);
    fun_814(r15_7, rsi49, rdx48);
    goto v57;
}

void fun_814(int32_t* rdi, struct s12* rsi, int32_t* rdx) {
    int64_t v4;

    goto v4;
}

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
    int32_t f1;
};

struct s94 {
    int32_t f0;
    int32_t f4;
};

struct s95 {
    int32_t f0;
    int32_t f4;
};

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
    int32_t f4;
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

int32_t* fun_4a8(int32_t* rdi, int32_t* rsi) {
    signed char** v3;
    int32_t* r15_4;
    int32_t* rax5;
    int64_t rax6;
    int64_t rcx7;
    int64_t rdx8;
    uint64_t rdi9;
    uint64_t r8_10;
    int64_t rdi11;
    struct s91* rdi12;
    struct s92* rsi13;
    int32_t* r14_14;
    int64_t rcx15;
    struct s93* rdx16;
    struct s94* rsi17;
    struct s95* rdi18;
    int32_t* r12_19;
    struct s93* rsi20;
    int64_t rax21;
    int64_t rdx22;
    uint64_t rdi23;
    uint64_t r8_24;
    int64_t rdi25;
    struct s96* rdi26;
    struct s97* rsi27;
    int32_t* r13_28;
    int64_t rcx29;
    int64_t rdx30;
    uint64_t rdi31;
    uint64_t r8_32;
    int64_t rdi33;
    struct s98* rdi34;
    struct s99* rsi35;
    int64_t rax36;
    int64_t rdx37;
    int32_t* rdi38;
    int32_t* rbx39;
    struct s100* rsi40;
    struct s101* rdi41;
    struct s102* rdi42;
    struct s103* rsi43;
    struct s102* rdi44;
    int64_t rcx45;
    struct s104* rsi46;
    int32_t* rdx47;
    struct s12* rsi48;
    int32_t* rbx49;
    int32_t* rsi50;
    struct s105* rdi51;
    int32_t* r13_52;
    int32_t ebp53;
    int32_t* rbx54;
    int32_t* r14_55;
    int32_t* r12_56;
    int32_t* r13_57;
    int64_t v58;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r15_4 = rax5;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(free);
    *rdi = *rsi;
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rdx8) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi9 = (*reinterpret_cast<int32_t*>(&rdx8) * *reinterpret_cast<int32_t*>(&rcx7) + 1) * 0x51eb851f;
            r8_10 = rdi9 >> 63;
            rdi11 = reinterpret_cast<int64_t>(rdi9) >> 40;
            *reinterpret_cast<int32_t*>(&rdi12) = (*reinterpret_cast<int32_t*>(&rdi11) + *reinterpret_cast<int32_t*>(&r8_10)) * 0x320;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi13 = reinterpret_cast<struct s92*>(r14_14 + rcx7 * 0x898);
            rdi12->f0 = rsi13->f0;
            ++rdx8;
        } while (rdx8 != 0x44c);
        ++rcx7;
    } while (rcx7 != 0x320);
    *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(free);
    rdi12->f4 = rsi13->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi17 = reinterpret_cast<struct s94*>(reinterpret_cast<int64_t>(rdx16) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi18 = reinterpret_cast<struct s95*>(r12_19 + rax6 * 0x708);
            rdi18->f0 = rsi17->f0;
            rsi20 = reinterpret_cast<struct s93*>(&rsi17->f4);
            rdx16 = rsi20;
        } while (!reinterpret_cast<int1_t>(rsi20 == 0x384));
        ++rax6;
    } while (rax6 != 0x44c);
    *reinterpret_cast<int32_t*>(&rax21) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = reinterpret_cast<int32_t>(free);
    rdi18->f4 = rsi20->f0;
    do {
        *reinterpret_cast<int32_t*>(&rdx22) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi23 = (static_cast<int32_t>(rdx22 + 3) * *reinterpret_cast<int32_t*>(&rcx15) + 1) * 0x1b4e81b5;
            r8_24 = rdi23 >> 63;
            rdi25 = reinterpret_cast<int64_t>(rdi23) >> 39;
            *reinterpret_cast<int32_t*>(&rdi26) = (*reinterpret_cast<int32_t*>(&rdi25) + *reinterpret_cast<int32_t*>(&r8_24)) * 0x4b0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi26) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi27 = reinterpret_cast<struct s97*>(r13_28 + rcx15 * 0x960);
            rdi26->f0 = rsi27->f0;
            ++rdx22;
        } while (rdx22 != 0x4b0);
        ++rcx15;
    } while (rcx15 != 0x384);
    *reinterpret_cast<int32_t*>(&rcx29) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(free);
    rdi26->f4 = rsi27->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx30) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi31 = static_cast<int32_t>(rdx30 + 2) * *reinterpret_cast<int32_t*>(&rax21) * 0x77280773;
            r8_32 = rdi31 >> 63;
            rdi33 = reinterpret_cast<int64_t>(rdi31) >> 41;
            *reinterpret_cast<int32_t*>(&rdi34) = (*reinterpret_cast<int32_t*>(&rdi33) + *reinterpret_cast<int32_t*>(&r8_32)) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi35 = reinterpret_cast<struct s99*>(r15_4 + rax21 * 0x960);
            rdi34->f0 = rsi35->f0;
            ++rdx30;
        } while (rdx30 != 0x4b0);
        ++rax21;
    } while (rax21 != 0x320);
    *reinterpret_cast<int32_t*>(&rax36) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax36) + 4) = reinterpret_cast<int32_t>(free);
    rdi34->f4 = rsi35->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx37) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi38 = rbx39 + rcx29 * 0x708;
            rsi40 = reinterpret_cast<struct s100*>(rdi38 + rdx37 * 2);
            rdi38[rdx37 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rdi41) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi41->f0 = rsi40->f0;
                rdi42 = reinterpret_cast<struct s102*>(&rdi41->f4);
                rsi43 = reinterpret_cast<struct s103*>(&rsi40->f4);
                __asm__("mulsd xmm2, xmm0");
                __asm__("mulsd xmm2, [r8+rdx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi42->f0 = rsi43->f0;
                rsi40 = reinterpret_cast<struct s100*>(&rsi43->f4);
                rdi41 = reinterpret_cast<struct s101*>(reinterpret_cast<int64_t>(&rdi42->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi41 == 0x44c));
            ++rdx37;
        } while (rdx37 != 0x384);
        ++rcx29;
    } while (rcx29 != 0x320);
    rdi41->f0 = rsi40->f0;
    rdi44 = reinterpret_cast<struct s102*>(&rdi41->f4);
    do {
        *reinterpret_cast<int32_t*>(&rcx45) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx45) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi46 = reinterpret_cast<struct s104*>(r15_4 + rax36 * 0x960);
            rdx47 = &(rsi46 + rcx45)->f0;
            rdi44->f0 = rsi46->f0;
            __asm__("mulsd xmm1, xmm0");
            rdi44->f4 = rsi46->f4;
            *reinterpret_cast<int32_t*>(&rsi48) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi48) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rbx49[rax36 * 0x708] = rsi48->f0;
                rsi50 = &rsi48->f4;
                rdi51 = reinterpret_cast<struct s105*>(r13_52 + reinterpret_cast<int64_t>(rsi50) * 0x960);
                __asm__("mulsd xmm2, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi51->f0 = *rsi50;
                rdi44 = reinterpret_cast<struct s102*>(&rdi51->f4);
                rsi48 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rsi50 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi48 == 0x384));
            ++rcx45;
        } while (rcx45 != 0x4b0);
        ++rax36;
    } while (rax36 != 0x320);
    if (ebp53 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        *reinterpret_cast<int32_t*>(&rsi48) = 0x4b0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi48) + 4) = reinterpret_cast<int32_t>(free);
        rdx47 = r15_4;
        fun_7ec(0x320, 0x4b0, rdx47);
    }
    fun_7f4(rbx54, rsi48, rdx47);
    fun_7fc(r14_55, rsi48, rdx47);
    fun_804(r12_56, rsi48, rdx47);
    fun_80c(r13_57, rsi48, rdx47);
    fun_814(r15_4, rsi48, rdx47);
    goto v58;
}

void free() {
}

void fun_8c(unsigned char* rdi) {
    unsigned char cl2;

    *rdi = reinterpret_cast<unsigned char>(*rdi ^ cl2);
}

void fun_d8() {
    int64_t r12_1;
    int64_t r11_2;

    if (r12_1 != r11_2) {
    }
}

void fun_e3() {
    int64_t r9_1;
    int32_t ecx2;
    int32_t esi3;
    int32_t esi4;
    int32_t* rsi5;
    int32_t* v6;
    int64_t rbx7;
    int32_t ecx8;
    int32_t ecx9;
    int64_t r14_10;
    int32_t* rdi11;
    int64_t r11_12;
    int32_t* rsi13;
    int32_t* v14;
    int32_t* rdi15;
    int32_t ecx16;
    int32_t ecx17;
    int64_t r11_18;
    int32_t* r8_19;
    int64_t v20;

    *reinterpret_cast<int32_t*>(&r9_1) = ecx2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_1) + 4) = reinterpret_cast<int32_t>(free);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(esi3 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(esi4 == free))) {
        rsi5 = v6;
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, ecx");
        *reinterpret_cast<int32_t*>(&rbx7) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ecx8 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ecx9 == free))) {
                *reinterpret_cast<int32_t*>(&r14_10) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_10) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    __asm__("cdq ");
                    __asm__("xorps xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, edx");
                    __asm__("divsd xmm1, xmm0");
                    *rdi11 = *rsi5;
                    ++rdi11;
                    ++rsi5;
                    ++r14_10;
                } while (r14_10 != r9_1);
            }
            ++rbx7;
        } while (rbx7 != r11_12);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi11) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi11) == free))) {
        rsi13 = v14;
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, r10d");
        *reinterpret_cast<int32_t*>(&rdi15) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ecx16 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ecx17 == free))) {
                *reinterpret_cast<int32_t*>(&r11_18) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_18) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    __asm__("cdq ");
                    __asm__("xorps xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, edx");
                    __asm__("divsd xmm1, xmm0");
                    *rdi15 = *rsi13;
                    ++rdi15;
                    ++rsi13;
                    ++r11_18;
                } while (r11_18 != r9_1);
            }
            rdi15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi15) + 1);
        } while (rdi15 != r8_19);
    }
    goto v20;
}

int64_t* g1d1 = reinterpret_cast<int64_t*>(0x3d8d48188b48);

void print_array(int32_t edi, int32_t esi, int64_t rdx) {
    int64_t* rax4;
    int64_t rcx5;
    int64_t* r8_6;
    int64_t r9_7;

    rax4 = g1d1;
    rcx5 = *rax4;
    fun_1ed(0x1db, 22, 1, rcx5, r8_6, r9_7);
}

void submain(int32_t edi, int64_t rsi) {
    fun_460(0xafc80, 8);
}

