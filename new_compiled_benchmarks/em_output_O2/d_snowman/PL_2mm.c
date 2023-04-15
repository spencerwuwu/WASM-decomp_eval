
void fun_4b2();

void free();

void fun_4d4(int64_t rdi, int64_t rsi, int64_t rdx);

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

struct s9 {
    int32_t f0;
    int32_t f4;
};

void fun_48f() {
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
    int64_t rcx14;
    int64_t rbx15;
    int64_t v16;
    int32_t v17;
    int32_t* r10_18;
    int32_t* v19;
    int32_t* r14_20;
    int32_t* v21;
    struct s1* rsi22;
    int64_t r13_23;
    int64_t rbp24;
    int64_t* r8_25;
    uint64_t rcx26;
    int64_t rax27;
    struct s2* rsi28;
    struct s1* rsi29;
    int32_t* rdi30;
    struct s2* rsi31;
    struct s3* rdi32;
    struct s4* rdi33;
    struct s2* rsi34;
    int32_t ebp35;
    int64_t rdx36;
    struct s5* rdi37;
    int64_t r9_38;
    int64_t r14_39;
    struct s6* rdi40;
    struct s2* rsi41;
    uint64_t rcx42;
    struct s5* rax43;
    struct s7* rsi44;
    int32_t* r8_45;
    struct s6* rdi46;
    struct s8* rsi47;
    struct s5* rdi48;
    struct s6* rdi49;
    struct s9* rsi50;
    struct s6* rdi51;
    struct s2* rsi52;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = rbx3;
        rsi2 = reinterpret_cast<int32_t*>(0x4ab);
        fun_4b2();
        ++r14_4;
        if (r14_4 == r13_5) {
            do {
                ++rbp6;
                if (rbp6 == r12_7) 
                    goto addr_4bc_8;
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
        fun_48f();
    }
    addr_4bc_8:
    fun_4d4(rbx12, 0x4c3, 0x4ca);
    rdi13 = reinterpret_cast<struct s0*>(0x4db);
    rcx14 = rbx15;
    if (free) {
        addr_761_15:
        goto v16;
    } else {
        v17 = *reinterpret_cast<int32_t*>(&rcx14);
        r10_18 = v19;
        r14_20 = v21;
        *reinterpret_cast<int32_t*>(&rsi22) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_23) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_23) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!free) {
                *reinterpret_cast<int32_t*>(&rbp24) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp24) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r8_25 + r13_23 * 0x384)[rbp24] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm2, xmm2");
                        *reinterpret_cast<int32_t*>(&rcx26) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&rax27) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = reinterpret_cast<int32_t>(free);
                        if (!1) {
                            do {
                                rdi13->f0 = rsi22->f0;
                                rsi28 = reinterpret_cast<struct s2*>(&rsi22->f4);
                                __asm__("mulsd xmm3, xmm0");
                                __asm__("mulsd xmm3, [rdi+rbp*8]");
                                __asm__("addsd xmm3, xmm2");
                                r14_20[rcx26 * 0x708] = rsi28->f0;
                                rsi29 = reinterpret_cast<struct s1*>(&rsi28->f4);
                                rdi30 = reinterpret_cast<int32_t*>(rcx26 | 1);
                                *rdi30 = rsi29->f0;
                                rsi31 = reinterpret_cast<struct s2*>(&rsi29->f4);
                                __asm__("mulsd xmm2, xmm0");
                                rdi32 = reinterpret_cast<struct s3*>(r14_20 + reinterpret_cast<uint64_t>(rdi30 + 1) * 0x708);
                                __asm__("mulsd xmm2, [rdi+rbp*8]");
                                __asm__("addsd xmm2, xmm3");
                                rdi32->f0 = rsi31->f0;
                                rdi13 = reinterpret_cast<struct s0*>(&rdi32->f4);
                                rsi22 = reinterpret_cast<struct s1*>(&rsi31->f4);
                                rcx26 = rcx26 + 2;
                                rax27 = rax27 + 2;
                            } while (!reinterpret_cast<int1_t>(rax27 == free));
                        }
                        if ((*reinterpret_cast<unsigned char*>(&rsi22) & 1) != free) {
                            rdi13->f0 = rsi22->f0;
                            rdi33 = reinterpret_cast<struct s4*>(&rdi13->f4);
                            rsi34 = reinterpret_cast<struct s2*>(&rsi22->f4);
                            __asm__("mulsd xmm3, xmm0");
                            __asm__("mulsd xmm3, [rax+rbp*8]");
                            __asm__("addsd xmm3, xmm2");
                            rdi33->f0 = rsi34->f0;
                            rdi13 = reinterpret_cast<struct s0*>(&rdi33->f4);
                            rsi22 = reinterpret_cast<struct s1*>(&rsi34->f4);
                        }
                    }
                    ++rbp24;
                } while (rbp24 != 22);
            }
            ++r13_23;
        } while (r13_23 != 0x4db);
        ebp35 = v17;
        if (free) 
            goto addr_761_15;
    }
    *reinterpret_cast<int32_t*>(&rdx36) = ebp35;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx36) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<uint32_t*>(&rdi37) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r9_38) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_38) + 4) = reinterpret_cast<int32_t>(free);
    do {
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp35 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ebp35 == free))) {
            *reinterpret_cast<int32_t*>(&r14_39) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_39) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi37->f0 = rsi22->f0;
                rdi40 = reinterpret_cast<struct s6*>(&rdi37->f4);
                rsi41 = reinterpret_cast<struct s2*>(&rsi22->f4);
                __asm__("mulsd xmm0, xmm1");
                rdi40->f0 = rsi41->f0;
                rdi37 = reinterpret_cast<struct s5*>(&rdi40->f4);
                rsi22 = reinterpret_cast<struct s1*>(&rsi41->f4);
                if (!free) {
                    *reinterpret_cast<int32_t*>(&rcx42) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx42) + 4) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(&rax43) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax43) + 4) = reinterpret_cast<int32_t>(free);
                    if (!free) {
                        do {
                            rsi44 = reinterpret_cast<struct s7*>(r8_45 + r9_38 * 0x708);
                            rdi37->f0 = rsi44->f0;
                            rdi46 = reinterpret_cast<struct s6*>(&rdi37->f4);
                            rsi47 = reinterpret_cast<struct s8*>(&rsi44->f4);
                            __asm__("mulsd xmm2, [r15+r14*8]");
                            __asm__("addsd xmm2, xmm0");
                            rdi46->f0 = rsi47->f0;
                            rdi48 = reinterpret_cast<struct s5*>(&rdi46->f4);
                            rdi48->f0 = rsi47->f4;
                            rdi49 = reinterpret_cast<struct s6*>(&rdi48->f4);
                            rsi50 = reinterpret_cast<struct s9*>(r10_18 + (rcx42 | 1) * 0x960);
                            __asm__("mulsd xmm0, [rsi+r14*8]");
                            __asm__("addsd xmm0, xmm2");
                            rdi49->f0 = rsi50->f0;
                            rdi37 = reinterpret_cast<struct s5*>(&rdi49->f4);
                            rsi22 = reinterpret_cast<struct s1*>(&rsi50->f4);
                            rcx42 = rcx42 + 2;
                            rax43 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(rax43) + 2);
                        } while (rax43 != rdi37);
                    }
                    if (!1) {
                        rdi37->f0 = rsi22->f0;
                        rdi51 = reinterpret_cast<struct s6*>(&rdi37->f4);
                        rsi52 = reinterpret_cast<struct s2*>(&rsi22->f4);
                        __asm__("mulsd xmm2, [rax+r14*8]");
                        __asm__("addsd xmm2, xmm0");
                        rdi51->f0 = rsi52->f0;
                        rdi37 = reinterpret_cast<struct s5*>(&rdi51->f4);
                        rsi22 = reinterpret_cast<struct s1*>(&rsi52->f4);
                    }
                }
                ++r14_39;
            } while (r14_39 != rdx36);
        }
        ++r9_38;
    } while (r9_38 != 0x4db);
    goto addr_761_15;
}

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

void fun_4b2() {
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
    struct s10* rdi13;
    int64_t rcx14;
    int64_t rbx15;
    int64_t v16;
    int32_t v17;
    int32_t* r10_18;
    int32_t* v19;
    int32_t* r14_20;
    int32_t* v21;
    struct s11* rsi22;
    int64_t r13_23;
    int64_t rbp24;
    int64_t* r8_25;
    uint64_t rcx26;
    int64_t rax27;
    struct s12* rsi28;
    struct s11* rsi29;
    int32_t* rdi30;
    struct s12* rsi31;
    struct s13* rdi32;
    struct s14* rdi33;
    struct s12* rsi34;
    int32_t ebp35;
    int64_t rdx36;
    struct s15* rdi37;
    int64_t r9_38;
    int64_t r14_39;
    struct s16* rdi40;
    struct s12* rsi41;
    uint64_t rcx42;
    struct s15* rax43;
    struct s17* rsi44;
    int32_t* r8_45;
    struct s16* rdi46;
    struct s18* rsi47;
    struct s15* rdi48;
    struct s16* rdi49;
    struct s19* rsi50;
    struct s16* rdi51;
    struct s12* rsi52;

    while (1) {
        ++r14_1;
        if (r14_1 == r13_2) {
            do {
                ++rbp3;
                if (rbp3 == r12_4) 
                    goto addr_4bc_4;
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
            fun_48f();
        }
        *rdi8 = *rsi9;
        rdi8 = rbx11;
        rsi9 = reinterpret_cast<int32_t*>(0x4ab);
        fun_4b2();
    }
    addr_4bc_4:
    fun_4d4(rbx12, 0x4c3, 0x4ca);
    rdi13 = reinterpret_cast<struct s10*>(0x4db);
    rcx14 = rbx15;
    if (free) {
        addr_761_15:
        goto v16;
    } else {
        v17 = *reinterpret_cast<int32_t*>(&rcx14);
        r10_18 = v19;
        r14_20 = v21;
        *reinterpret_cast<int32_t*>(&rsi22) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_23) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_23) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!free) {
                *reinterpret_cast<int32_t*>(&rbp24) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp24) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r8_25 + r13_23 * 0x384)[rbp24] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm2, xmm2");
                        *reinterpret_cast<int32_t*>(&rcx26) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&rax27) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = reinterpret_cast<int32_t>(free);
                        if (!1) {
                            do {
                                rdi13->f0 = rsi22->f0;
                                rsi28 = reinterpret_cast<struct s12*>(&rsi22->f4);
                                __asm__("mulsd xmm3, xmm0");
                                __asm__("mulsd xmm3, [rdi+rbp*8]");
                                __asm__("addsd xmm3, xmm2");
                                r14_20[rcx26 * 0x708] = rsi28->f0;
                                rsi29 = reinterpret_cast<struct s11*>(&rsi28->f4);
                                rdi30 = reinterpret_cast<int32_t*>(rcx26 | 1);
                                *rdi30 = rsi29->f0;
                                rsi31 = reinterpret_cast<struct s12*>(&rsi29->f4);
                                __asm__("mulsd xmm2, xmm0");
                                rdi32 = reinterpret_cast<struct s13*>(r14_20 + reinterpret_cast<uint64_t>(rdi30 + 1) * 0x708);
                                __asm__("mulsd xmm2, [rdi+rbp*8]");
                                __asm__("addsd xmm2, xmm3");
                                rdi32->f0 = rsi31->f0;
                                rdi13 = reinterpret_cast<struct s10*>(&rdi32->f4);
                                rsi22 = reinterpret_cast<struct s11*>(&rsi31->f4);
                                rcx26 = rcx26 + 2;
                                rax27 = rax27 + 2;
                            } while (!reinterpret_cast<int1_t>(rax27 == free));
                        }
                        if ((*reinterpret_cast<unsigned char*>(&rsi22) & 1) != free) {
                            rdi13->f0 = rsi22->f0;
                            rdi33 = reinterpret_cast<struct s14*>(&rdi13->f4);
                            rsi34 = reinterpret_cast<struct s12*>(&rsi22->f4);
                            __asm__("mulsd xmm3, xmm0");
                            __asm__("mulsd xmm3, [rax+rbp*8]");
                            __asm__("addsd xmm3, xmm2");
                            rdi33->f0 = rsi34->f0;
                            rdi13 = reinterpret_cast<struct s10*>(&rdi33->f4);
                            rsi22 = reinterpret_cast<struct s11*>(&rsi34->f4);
                        }
                    }
                    ++rbp24;
                } while (rbp24 != 22);
            }
            ++r13_23;
        } while (r13_23 != 0x4db);
        ebp35 = v17;
        if (free) 
            goto addr_761_15;
    }
    *reinterpret_cast<int32_t*>(&rdx36) = ebp35;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx36) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<uint32_t*>(&rdi37) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r9_38) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_38) + 4) = reinterpret_cast<int32_t>(free);
    do {
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp35 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ebp35 == free))) {
            *reinterpret_cast<int32_t*>(&r14_39) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_39) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi37->f0 = rsi22->f0;
                rdi40 = reinterpret_cast<struct s16*>(&rdi37->f4);
                rsi41 = reinterpret_cast<struct s12*>(&rsi22->f4);
                __asm__("mulsd xmm0, xmm1");
                rdi40->f0 = rsi41->f0;
                rdi37 = reinterpret_cast<struct s15*>(&rdi40->f4);
                rsi22 = reinterpret_cast<struct s11*>(&rsi41->f4);
                if (!free) {
                    *reinterpret_cast<int32_t*>(&rcx42) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx42) + 4) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(&rax43) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax43) + 4) = reinterpret_cast<int32_t>(free);
                    if (!free) {
                        do {
                            rsi44 = reinterpret_cast<struct s17*>(r8_45 + r9_38 * 0x708);
                            rdi37->f0 = rsi44->f0;
                            rdi46 = reinterpret_cast<struct s16*>(&rdi37->f4);
                            rsi47 = reinterpret_cast<struct s18*>(&rsi44->f4);
                            __asm__("mulsd xmm2, [r15+r14*8]");
                            __asm__("addsd xmm2, xmm0");
                            rdi46->f0 = rsi47->f0;
                            rdi48 = reinterpret_cast<struct s15*>(&rdi46->f4);
                            rdi48->f0 = rsi47->f4;
                            rdi49 = reinterpret_cast<struct s16*>(&rdi48->f4);
                            rsi50 = reinterpret_cast<struct s19*>(r10_18 + (rcx42 | 1) * 0x960);
                            __asm__("mulsd xmm0, [rsi+r14*8]");
                            __asm__("addsd xmm0, xmm2");
                            rdi49->f0 = rsi50->f0;
                            rdi37 = reinterpret_cast<struct s15*>(&rdi49->f4);
                            rsi22 = reinterpret_cast<struct s11*>(&rsi50->f4);
                            rcx42 = rcx42 + 2;
                            rax43 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(rax43) + 2);
                        } while (rax43 != rdi37);
                    }
                    if (!1) {
                        rdi37->f0 = rsi22->f0;
                        rdi51 = reinterpret_cast<struct s16*>(&rdi37->f4);
                        rsi52 = reinterpret_cast<struct s12*>(&rsi22->f4);
                        __asm__("mulsd xmm2, [rax+r14*8]");
                        __asm__("addsd xmm2, xmm0");
                        rdi51->f0 = rsi52->f0;
                        rdi37 = reinterpret_cast<struct s15*>(&rdi51->f4);
                        rsi22 = reinterpret_cast<struct s11*>(&rsi52->f4);
                    }
                }
                ++r14_39;
            } while (r14_39 != rdx36);
        }
        ++r9_38;
    } while (r9_38 != 0x4db);
    goto addr_761_15;
}

struct s20 {
    int32_t f0;
    int32_t f4;
};

void fun_de2(int32_t* rdi, struct s20* rsi, int32_t* rdx);

void fun_dea(int64_t rdi, struct s20* rsi, int32_t* rdx);

void fun_df2(int64_t rdi, struct s20* rsi, int32_t* rdx);

void fun_dfa(int32_t* rdi, struct s20* rsi, int32_t* rdx);

void fun_e02(int32_t* rdi, struct s20* rsi, int32_t* rdx);

void fun_dda(int64_t rdi, struct s20* rsi, int32_t* rdx) {
    int32_t* rbx4;
    int64_t r14_5;
    int64_t r12_6;
    int32_t* r13_7;
    int32_t* r15_8;
    int64_t v9;

    fun_de2(rbx4, rsi, rdx);
    fun_dea(r14_5, rsi, rdx);
    fun_df2(r12_6, rsi, rdx);
    fun_dfa(r13_7, rsi, rdx);
    fun_e02(r15_8, rsi, rdx);
    goto v9;
}

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

void fun_4d4(int64_t rdi, int64_t rsi, int64_t rdx) {
    struct s21* rdi4;
    int64_t rcx5;
    int64_t rbx6;
    int64_t v7;
    int32_t v8;
    int32_t* r10_9;
    int32_t* v10;
    int32_t* r14_11;
    int32_t* v12;
    struct s22* rsi13;
    int64_t r13_14;
    int64_t rbp15;
    int64_t* r8_16;
    uint64_t rcx17;
    int64_t rax18;
    struct s23* rsi19;
    struct s22* rsi20;
    int32_t* rdi21;
    struct s23* rsi22;
    struct s24* rdi23;
    struct s25* rdi24;
    struct s23* rsi25;
    int32_t ebp26;
    int64_t rdx27;
    struct s26* rdi28;
    int64_t r9_29;
    int64_t r14_30;
    struct s27* rdi31;
    struct s23* rsi32;
    uint64_t rcx33;
    struct s26* rax34;
    struct s28* rsi35;
    int32_t* r8_36;
    struct s27* rdi37;
    struct s29* rsi38;
    struct s26* rdi39;
    struct s27* rdi40;
    struct s30* rsi41;
    struct s27* rdi42;
    struct s23* rsi43;

    rdi4 = reinterpret_cast<struct s21*>(0x4db);
    rcx5 = rbx6;
    if (free) {
        addr_761_3:
        goto v7;
    } else {
        v8 = *reinterpret_cast<int32_t*>(&rcx5);
        r10_9 = v10;
        r14_11 = v12;
        *reinterpret_cast<int32_t*>(&rsi13) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_14) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_14) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!free) {
                *reinterpret_cast<int32_t*>(&rbp15) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp15) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r8_16 + r13_14 * 0x384)[rbp15] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm2, xmm2");
                        *reinterpret_cast<int32_t*>(&rcx17) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&rax18) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = reinterpret_cast<int32_t>(free);
                        if (!1) {
                            do {
                                rdi4->f0 = rsi13->f0;
                                rsi19 = reinterpret_cast<struct s23*>(&rsi13->f4);
                                __asm__("mulsd xmm3, xmm0");
                                __asm__("mulsd xmm3, [rdi+rbp*8]");
                                __asm__("addsd xmm3, xmm2");
                                r14_11[rcx17 * 0x708] = rsi19->f0;
                                rsi20 = reinterpret_cast<struct s22*>(&rsi19->f4);
                                rdi21 = reinterpret_cast<int32_t*>(rcx17 | 1);
                                *rdi21 = rsi20->f0;
                                rsi22 = reinterpret_cast<struct s23*>(&rsi20->f4);
                                __asm__("mulsd xmm2, xmm0");
                                rdi23 = reinterpret_cast<struct s24*>(r14_11 + reinterpret_cast<uint64_t>(rdi21 + 1) * 0x708);
                                __asm__("mulsd xmm2, [rdi+rbp*8]");
                                __asm__("addsd xmm2, xmm3");
                                rdi23->f0 = rsi22->f0;
                                rdi4 = reinterpret_cast<struct s21*>(&rdi23->f4);
                                rsi13 = reinterpret_cast<struct s22*>(&rsi22->f4);
                                rcx17 = rcx17 + 2;
                                rax18 = rax18 + 2;
                            } while (!reinterpret_cast<int1_t>(rax18 == free));
                        }
                        if ((*reinterpret_cast<unsigned char*>(&rsi13) & 1) != free) {
                            rdi4->f0 = rsi13->f0;
                            rdi24 = reinterpret_cast<struct s25*>(&rdi4->f4);
                            rsi25 = reinterpret_cast<struct s23*>(&rsi13->f4);
                            __asm__("mulsd xmm3, xmm0");
                            __asm__("mulsd xmm3, [rax+rbp*8]");
                            __asm__("addsd xmm3, xmm2");
                            rdi24->f0 = rsi25->f0;
                            rdi4 = reinterpret_cast<struct s21*>(&rdi24->f4);
                            rsi13 = reinterpret_cast<struct s22*>(&rsi25->f4);
                        }
                    }
                    ++rbp15;
                } while (rbp15 != 22);
            }
            ++r13_14;
        } while (r13_14 != 0x4db);
        ebp26 = v8;
        if (free) 
            goto addr_761_3;
    }
    *reinterpret_cast<int32_t*>(&rdx27) = ebp26;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<uint32_t*>(&rdi28) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r9_29) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_29) + 4) = reinterpret_cast<int32_t>(free);
    do {
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp26 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ebp26 == free))) {
            *reinterpret_cast<int32_t*>(&r14_30) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_30) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi28->f0 = rsi13->f0;
                rdi31 = reinterpret_cast<struct s27*>(&rdi28->f4);
                rsi32 = reinterpret_cast<struct s23*>(&rsi13->f4);
                __asm__("mulsd xmm0, xmm1");
                rdi31->f0 = rsi32->f0;
                rdi28 = reinterpret_cast<struct s26*>(&rdi31->f4);
                rsi13 = reinterpret_cast<struct s22*>(&rsi32->f4);
                if (!free) {
                    *reinterpret_cast<int32_t*>(&rcx33) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(&rax34) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax34) + 4) = reinterpret_cast<int32_t>(free);
                    if (!free) {
                        do {
                            rsi35 = reinterpret_cast<struct s28*>(r8_36 + r9_29 * 0x708);
                            rdi28->f0 = rsi35->f0;
                            rdi37 = reinterpret_cast<struct s27*>(&rdi28->f4);
                            rsi38 = reinterpret_cast<struct s29*>(&rsi35->f4);
                            __asm__("mulsd xmm2, [r15+r14*8]");
                            __asm__("addsd xmm2, xmm0");
                            rdi37->f0 = rsi38->f0;
                            rdi39 = reinterpret_cast<struct s26*>(&rdi37->f4);
                            rdi39->f0 = rsi38->f4;
                            rdi40 = reinterpret_cast<struct s27*>(&rdi39->f4);
                            rsi41 = reinterpret_cast<struct s30*>(r10_9 + (rcx33 | 1) * 0x960);
                            __asm__("mulsd xmm0, [rsi+r14*8]");
                            __asm__("addsd xmm0, xmm2");
                            rdi40->f0 = rsi41->f0;
                            rdi28 = reinterpret_cast<struct s26*>(&rdi40->f4);
                            rsi13 = reinterpret_cast<struct s22*>(&rsi41->f4);
                            rcx33 = rcx33 + 2;
                            rax34 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(rax34) + 2);
                        } while (rax34 != rdi28);
                    }
                    if (!1) {
                        rdi28->f0 = rsi13->f0;
                        rdi42 = reinterpret_cast<struct s27*>(&rdi28->f4);
                        rsi43 = reinterpret_cast<struct s23*>(&rsi13->f4);
                        __asm__("mulsd xmm2, [rax+r14*8]");
                        __asm__("addsd xmm2, xmm0");
                        rdi42->f0 = rsi43->f0;
                        rdi28 = reinterpret_cast<struct s26*>(&rdi42->f4);
                        rsi13 = reinterpret_cast<struct s22*>(&rsi43->f4);
                    }
                }
                ++r14_30;
            } while (r14_30 != rdx27);
        }
        ++r9_29;
    } while (r9_29 != 0x4db);
    goto addr_761_3;
}

void fun_de2(int32_t* rdi, struct s20* rsi, int32_t* rdx) {
    int64_t r14_4;
    int64_t r12_5;
    int32_t* r13_6;
    int32_t* r15_7;
    int64_t v8;

    fun_dea(r14_4, rsi, rdx);
    fun_df2(r12_5, rsi, rdx);
    fun_dfa(r13_6, rsi, rdx);
    fun_e02(r15_7, rsi, rdx);
    goto v8;
}

void fun_435();

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

struct s40 {
    int32_t f0;
    int32_t f4;
};

void fun_41d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int32_t* r8, int64_t r9) {
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
    struct s31* rdi23;
    int64_t rcx24;
    int64_t rbx25;
    int64_t v26;
    int32_t v27;
    int32_t* r10_28;
    int32_t* v29;
    int32_t* r14_30;
    int32_t* v31;
    struct s32* rsi32;
    int64_t r13_33;
    int64_t rbp34;
    uint64_t rcx35;
    int64_t rax36;
    struct s33* rsi37;
    struct s32* rsi38;
    int32_t* rdi39;
    struct s33* rsi40;
    struct s34* rdi41;
    struct s35* rdi42;
    struct s33* rsi43;
    int32_t ebp44;
    int64_t rdx45;
    struct s36* rdi46;
    int64_t r9_47;
    int64_t r14_48;
    struct s37* rdi49;
    struct s33* rsi50;
    uint64_t rcx51;
    struct s36* rax52;
    struct s38* rsi53;
    struct s37* rdi54;
    struct s39* rsi55;
    struct s36* rdi56;
    struct s37* rdi57;
    struct s40* rsi58;
    struct s37* rdi59;
    struct s33* rsi60;

    rsi7 = reinterpret_cast<int32_t*>(0x424);
    rdi8 = rbx9;
    fun_435();
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
                        fun_48f();
                    }
                    *rdi8 = *rsi7;
                    rdi8 = rbx21;
                    rsi7 = reinterpret_cast<int32_t*>(0x4ab);
                    fun_4b2();
                    ++r14_19;
                } while (r14_19 != r13_14);
            }
            ++rbp16;
        } while (rbp16 != r12_12);
    }
    fun_4d4(rbx22, 0x4c3, 0x4ca);
    rdi23 = reinterpret_cast<struct s31*>(0x4db);
    rcx24 = rbx25;
    if (free) {
        addr_761_18:
        goto v26;
    } else {
        v27 = *reinterpret_cast<int32_t*>(&rcx24);
        r10_28 = v29;
        r14_30 = v31;
        *reinterpret_cast<int32_t*>(&rsi32) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_33) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_33) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!free) {
                *reinterpret_cast<int32_t*>(&rbp34) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp34) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r8 + r13_33 * 0x708)[rbp34 * 2] = reinterpret_cast<int32_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm2, xmm2");
                        *reinterpret_cast<int32_t*>(&rcx35) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&rax36) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax36) + 4) = reinterpret_cast<int32_t>(free);
                        if (!1) {
                            do {
                                rdi23->f0 = rsi32->f0;
                                rsi37 = reinterpret_cast<struct s33*>(&rsi32->f4);
                                __asm__("mulsd xmm3, xmm0");
                                __asm__("mulsd xmm3, [rdi+rbp*8]");
                                __asm__("addsd xmm3, xmm2");
                                r14_30[rcx35 * 0x708] = rsi37->f0;
                                rsi38 = reinterpret_cast<struct s32*>(&rsi37->f4);
                                rdi39 = reinterpret_cast<int32_t*>(rcx35 | 1);
                                *rdi39 = rsi38->f0;
                                rsi40 = reinterpret_cast<struct s33*>(&rsi38->f4);
                                __asm__("mulsd xmm2, xmm0");
                                rdi41 = reinterpret_cast<struct s34*>(r14_30 + reinterpret_cast<uint64_t>(rdi39 + 1) * 0x708);
                                __asm__("mulsd xmm2, [rdi+rbp*8]");
                                __asm__("addsd xmm2, xmm3");
                                rdi41->f0 = rsi40->f0;
                                rdi23 = reinterpret_cast<struct s31*>(&rdi41->f4);
                                rsi32 = reinterpret_cast<struct s32*>(&rsi40->f4);
                                rcx35 = rcx35 + 2;
                                rax36 = rax36 + 2;
                            } while (!reinterpret_cast<int1_t>(rax36 == free));
                        }
                        if ((*reinterpret_cast<unsigned char*>(&rsi32) & 1) != free) {
                            rdi23->f0 = rsi32->f0;
                            rdi42 = reinterpret_cast<struct s35*>(&rdi23->f4);
                            rsi43 = reinterpret_cast<struct s33*>(&rsi32->f4);
                            __asm__("mulsd xmm3, xmm0");
                            __asm__("mulsd xmm3, [rax+rbp*8]");
                            __asm__("addsd xmm3, xmm2");
                            rdi42->f0 = rsi43->f0;
                            rdi23 = reinterpret_cast<struct s31*>(&rdi42->f4);
                            rsi32 = reinterpret_cast<struct s32*>(&rsi43->f4);
                        }
                    }
                    ++rbp34;
                } while (rbp34 != 22);
            }
            ++r13_33;
        } while (r13_33 != 0x4db);
        ebp44 = v27;
        if (free) 
            goto addr_761_18;
    }
    *reinterpret_cast<int32_t*>(&rdx45) = ebp44;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx45) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<uint32_t*>(&rdi46) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi46) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r9_47) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_47) + 4) = reinterpret_cast<int32_t>(free);
    do {
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp44 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ebp44 == free))) {
            *reinterpret_cast<int32_t*>(&r14_48) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_48) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi46->f0 = rsi32->f0;
                rdi49 = reinterpret_cast<struct s37*>(&rdi46->f4);
                rsi50 = reinterpret_cast<struct s33*>(&rsi32->f4);
                __asm__("mulsd xmm0, xmm1");
                rdi49->f0 = rsi50->f0;
                rdi46 = reinterpret_cast<struct s36*>(&rdi49->f4);
                rsi32 = reinterpret_cast<struct s32*>(&rsi50->f4);
                if (!free) {
                    *reinterpret_cast<int32_t*>(&rcx51) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx51) + 4) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(&rax52) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax52) + 4) = reinterpret_cast<int32_t>(free);
                    if (!free) {
                        do {
                            rsi53 = reinterpret_cast<struct s38*>(r8 + r9_47 * 0x708);
                            rdi46->f0 = rsi53->f0;
                            rdi54 = reinterpret_cast<struct s37*>(&rdi46->f4);
                            rsi55 = reinterpret_cast<struct s39*>(&rsi53->f4);
                            __asm__("mulsd xmm2, [r15+r14*8]");
                            __asm__("addsd xmm2, xmm0");
                            rdi54->f0 = rsi55->f0;
                            rdi56 = reinterpret_cast<struct s36*>(&rdi54->f4);
                            rdi56->f0 = rsi55->f4;
                            rdi57 = reinterpret_cast<struct s37*>(&rdi56->f4);
                            rsi58 = reinterpret_cast<struct s40*>(r10_28 + (rcx51 | 1) * 0x960);
                            __asm__("mulsd xmm0, [rsi+r14*8]");
                            __asm__("addsd xmm0, xmm2");
                            rdi57->f0 = rsi58->f0;
                            rdi46 = reinterpret_cast<struct s36*>(&rdi57->f4);
                            rsi32 = reinterpret_cast<struct s32*>(&rsi58->f4);
                            rcx51 = rcx51 + 2;
                            rax52 = reinterpret_cast<struct s36*>(reinterpret_cast<int64_t>(rax52) + 2);
                        } while (rax52 != rdi46);
                    }
                    if (!1) {
                        rdi46->f0 = rsi32->f0;
                        rdi59 = reinterpret_cast<struct s37*>(&rdi46->f4);
                        rsi60 = reinterpret_cast<struct s33*>(&rsi32->f4);
                        __asm__("mulsd xmm2, [rax+r14*8]");
                        __asm__("addsd xmm2, xmm0");
                        rdi59->f0 = rsi60->f0;
                        rdi46 = reinterpret_cast<struct s36*>(&rdi59->f4);
                        rsi32 = reinterpret_cast<struct s32*>(&rsi60->f4);
                    }
                }
                ++r14_48;
            } while (r14_48 != rdx45);
        }
        ++r9_47;
    } while (r9_47 != 0x4db);
    goto addr_761_18;
}

int64_t fun_7a2(int64_t rdi, int64_t rsi);

int64_t fun_7b4(int64_t rdi, int64_t rsi);

int32_t* fun_7c6(int64_t rdi, int64_t rsi);

int32_t* fun_7d8(int32_t* rdi, int64_t rsi);

int32_t gea600;

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

void fun_790(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int32_t* rbx4;
    int32_t* rax5;
    int64_t rax6;
    int64_t r14_7;
    int64_t rax8;
    int64_t r12_9;
    int32_t* rax10;
    int32_t* r13_11;
    int32_t* rax12;
    int32_t* r15_13;
    int64_t rax14;
    int64_t rcx15;
    int64_t rdx16;
    int64_t rcx17;
    int64_t rdx18;
    int64_t rax19;
    int64_t rdx20;
    int64_t rcx21;
    int64_t rdx22;
    int32_t* rsi23;
    int64_t rax24;
    int64_t rdx25;
    int32_t* rdi26;
    struct s41* rsi27;
    struct s42* rdi28;
    struct s43* rdi29;
    struct s44* rsi30;
    struct s45* rdi31;
    struct s46* rsi32;
    int32_t* rdi33;
    struct s47* rsi34;
    struct s43* rdi35;
    int64_t rcx36;
    struct s48* rsi37;
    int32_t* rdx38;
    struct s20* rsi39;
    struct s49* rdi40;
    struct s50* rdi41;
    struct s51* rsi42;
    struct s52* rsi43;
    int32_t* rsi44;
    struct s53* rdi45;
    int32_t ebp46;
    int64_t v47;

    v3 = reinterpret_cast<signed char**>(__return_address());
    rbx4 = rax5;
    rax6 = fun_7a2(0xd6d80, 8);
    r14_7 = rax6;
    rax8 = fun_7b4(0xf1b30, 8);
    r12_9 = rax8;
    rax10 = fun_7c6(0x107ac0, 8);
    r13_11 = rax10;
    rax12 = fun_7d8(0xea600, 8);
    r15_13 = rax12;
    *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pshufd xmm10, xmm7, 0xf5");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x8");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx16 = rdx16 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx16 != 0x44c);
        ++rcx15;
    } while (rcx15 != 0x320);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx17) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, eax");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx18) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("pshufd xmm10, xmm8, 0xe8");
            __asm__("psubd xmm10, xmm2");
            __asm__("pshufd xmm9, xmm10, 0x55");
            __asm__("pmuludq xmm10, xmm7");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pmuludq xmm11, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("pshufd xmm12, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm12");
            __asm__("pxor xmm12, xmm12");
            __asm__("pcmpgtd xmm12, xmm9");
            __asm__("pand xmm12, xmm3");
            __asm__("paddd xmm12, xmm9");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm10, xmm12");
            __asm__("paddd xmm10, xmm9");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psrad xmm10, 0x9");
            __asm__("psrld xmm11, 0x1f");
            __asm__("paddd xmm10, xmm11");
            __asm__("pshufd xmm11, xmm10, 0xf5");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm9, xmm10");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx18 = rdx18 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rdx18 != 0x384);
        ++rax14;
    } while (rax14 != 0x44c);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax19) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("pcmpeqd xmm3, xmm3");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movapd xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, ecx");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx20) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("movdqa xmm9, xmm8");
            __asm__("paddd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("pshufd xmm9, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm3");
            __asm__("movdqa xmm10, xmm9");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pshufd xmm11, xmm9, 0xf5");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pxor xmm12, xmm12");
            __asm__("pcmpgtd xmm12, xmm9");
            __asm__("pand xmm12, xmm4");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm10, xmm12");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psrad xmm10, 0x7");
            __asm__("psrld xmm11, 0x1f");
            __asm__("paddd xmm10, xmm11");
            __asm__("pshufd xmm11, xmm10, 0xf5");
            __asm__("pmuludq xmm10, xmm5");
            __asm__("pmuludq xmm11, xmm5");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm9, xmm10");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm6");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx20 = rdx20 + 2;
            __asm__("paddd xmm8, xmm0");
        } while (rdx20 != 0x4b0);
        ++rcx17;
    } while (rcx17 != 0x384);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx21) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, eax");
        __asm__("pshufd xmm5, xmm5, 0x50");
        *reinterpret_cast<int32_t*>(&rdx22) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddd xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm8, xmm5, 0xf5");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pshufd xmm8, xmm7, 0xe8");
            __asm__("pshufd xmm10, xmm9, 0xe8");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("pmuludq xmm7, xmm2");
            __asm__("pshufd xmm7, xmm7, 0xed");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pxor xmm10, xmm10");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("pcmpgtd xmm10, xmm8");
            __asm__("pand xmm10, xmm2");
            __asm__("psubd xmm7, xmm10");
            __asm__("movdqa xmm9, xmm7");
            __asm__("psrld xmm9, 0x1f");
            __asm__("psrad xmm7, 0x9");
            __asm__("paddd xmm7, xmm9");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pmuludq xmm7, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("psubd xmm8, xmm7");
            __asm__("cvtdq2pd xmm7, xmm8");
            __asm__("divpd xmm7, xmm4");
            rsi23 = r15_13 + rax19 * 0x960;
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx22 = rdx22 + 2;
        } while (rdx22 != 0x4b0);
        ++rax19;
    } while (rax19 != 0x320);
    *reinterpret_cast<int32_t*>(&rax24) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(free);
    gea600 = *rsi23;
    do {
        *reinterpret_cast<int32_t*>(&rdx25) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi26 = rbx4 + rcx21 * 0x708;
            rsi27 = reinterpret_cast<struct s41*>(rdi26 + rdx25 * 2);
            rdi26[rdx25 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("pxor xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rdi28) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi28->f0 = rsi27->f0;
                rdi29 = reinterpret_cast<struct s43*>(&rdi28->f4);
                rsi30 = reinterpret_cast<struct s44*>(&rsi27->f4);
                __asm__("mulsd xmm2, xmm0");
                __asm__("mulsd xmm2, [r9+rdx*8]");
                __asm__("addsd xmm2, xmm1");
                rdi29->f0 = rsi30->f0;
                rdi31 = reinterpret_cast<struct s45*>(&rdi29->f4);
                rsi32 = reinterpret_cast<struct s46*>(&rsi30->f4);
                rdi31->f0 = rsi32->f0;
                rdi33 = &rdi31->f4;
                rsi34 = reinterpret_cast<struct s47*>(&rsi32->f4);
                __asm__("mulsd xmm1, xmm0");
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm1, xmm2");
                *rdi33 = rsi34->f0;
                rsi27 = reinterpret_cast<struct s41*>(&rsi34->f4);
                rdi28 = reinterpret_cast<struct s42*>(reinterpret_cast<uint64_t>(rdi33 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi28 == 0x44c));
            ++rdx25;
        } while (rdx25 != 0x384);
        ++rcx21;
    } while (rcx21 != 0x320);
    rdi28->f0 = rsi27->f0;
    rdi35 = reinterpret_cast<struct s43*>(&rdi28->f4);
    do {
        *reinterpret_cast<int32_t*>(&rcx36) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx36) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi37 = reinterpret_cast<struct s48*>(r15_13 + rax24 * 0x960);
            rdx38 = &(rsi37 + rcx36)->f0;
            rdi35->f0 = rsi37->f0;
            __asm__("mulsd xmm1, xmm0");
            rdi35->f4 = rsi37->f4;
            *reinterpret_cast<int32_t*>(&rsi39) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi39) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi40 = reinterpret_cast<struct s49*>(rbx4 + rax24 * 0x708);
                rdi40->f0 = rsi39->f0;
                rdi41 = reinterpret_cast<struct s50*>(&rdi40->f4);
                rsi42 = reinterpret_cast<struct s51*>(&rsi39->f4);
                __asm__("mulsd xmm2, [r8+rcx*8]");
                __asm__("addsd xmm2, xmm1");
                rdi41->f0 = rsi42->f0;
                rsi43 = reinterpret_cast<struct s52*>(&rsi42->f4);
                rdi41->f4 = rsi43->f0;
                rsi44 = &rsi43->f4;
                rdi45 = reinterpret_cast<struct s53*>(r13_11 + (reinterpret_cast<uint64_t>(rsi43) | 1) * 0x960);
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi45->f0 = *rsi44;
                rdi35 = reinterpret_cast<struct s43*>(&rdi45->f4);
                rsi39 = reinterpret_cast<struct s20*>(reinterpret_cast<uint64_t>(rsi44 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi39 == 0x384));
            ++rcx36;
        } while (rcx36 != 0x4b0);
        ++rax24;
    } while (rax24 != 0x320);
    if (ebp46 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        *reinterpret_cast<int32_t*>(&rsi39) = 0x4b0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi39) + 4) = reinterpret_cast<int32_t>(free);
        rdx38 = r15_13;
        fun_dda(0x320, 0x4b0, rdx38);
    }
    fun_de2(rbx4, rsi39, rdx38);
    fun_dea(r14_7, rsi39, rdx38);
    fun_df2(r12_9, rsi39, rdx38);
    fun_dfa(r13_11, rsi39, rdx38);
    fun_e02(r15_13, rsi39, rdx38);
    goto v47;
}

void fun_dea(int64_t rdi, struct s20* rsi, int32_t* rdx) {
    int64_t r12_4;
    int32_t* r13_5;
    int32_t* r15_6;
    int64_t v7;

    fun_df2(r12_4, rsi, rdx);
    fun_dfa(r13_5, rsi, rdx);
    fun_e02(r15_6, rsi, rdx);
    goto v7;
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

void fun_435() {
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
    struct s54* rdi16;
    int64_t rcx17;
    int64_t rbx18;
    int64_t v19;
    int32_t v20;
    int32_t* r10_21;
    int32_t* v22;
    int32_t* r14_23;
    int32_t* v24;
    struct s55* rsi25;
    int64_t r13_26;
    int64_t rbp27;
    int64_t* r8_28;
    uint64_t rcx29;
    int64_t rax30;
    struct s56* rsi31;
    struct s55* rsi32;
    int32_t* rdi33;
    struct s56* rsi34;
    struct s57* rdi35;
    struct s58* rdi36;
    struct s56* rsi37;
    int32_t ebp38;
    int64_t rdx39;
    struct s59* rdi40;
    int64_t r9_41;
    int64_t r14_42;
    struct s60* rdi43;
    struct s56* rsi44;
    uint64_t rcx45;
    struct s59* rax46;
    struct s61* rsi47;
    int32_t* r8_48;
    struct s60* rdi49;
    struct s62* rsi50;
    struct s59* rdi51;
    struct s60* rdi52;
    struct s63* rsi53;
    struct s60* rdi54;
    struct s56* rsi55;

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
                        fun_48f();
                    }
                    *rdi11 = *rsi12;
                    rdi11 = rbx14;
                    rsi12 = reinterpret_cast<int32_t*>(0x4ab);
                    fun_4b2();
                    ++r14_10;
                } while (r14_10 != r13_5);
            }
            ++rbp7;
        } while (rbp7 != r12_3);
    }
    fun_4d4(rbx15, 0x4c3, 0x4ca);
    rdi16 = reinterpret_cast<struct s54*>(0x4db);
    rcx17 = rbx18;
    if (free) {
        addr_761_17:
        goto v19;
    } else {
        v20 = *reinterpret_cast<int32_t*>(&rcx17);
        r10_21 = v22;
        r14_23 = v24;
        *reinterpret_cast<int32_t*>(&rsi25) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_26) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_26) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!free) {
                *reinterpret_cast<int32_t*>(&rbp27) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp27) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r8_28 + r13_26 * 0x384)[rbp27] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm2, xmm2");
                        *reinterpret_cast<int32_t*>(&rcx29) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&rax30) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax30) + 4) = reinterpret_cast<int32_t>(free);
                        if (!1) {
                            do {
                                rdi16->f0 = rsi25->f0;
                                rsi31 = reinterpret_cast<struct s56*>(&rsi25->f4);
                                __asm__("mulsd xmm3, xmm0");
                                __asm__("mulsd xmm3, [rdi+rbp*8]");
                                __asm__("addsd xmm3, xmm2");
                                r14_23[rcx29 * 0x708] = rsi31->f0;
                                rsi32 = reinterpret_cast<struct s55*>(&rsi31->f4);
                                rdi33 = reinterpret_cast<int32_t*>(rcx29 | 1);
                                *rdi33 = rsi32->f0;
                                rsi34 = reinterpret_cast<struct s56*>(&rsi32->f4);
                                __asm__("mulsd xmm2, xmm0");
                                rdi35 = reinterpret_cast<struct s57*>(r14_23 + reinterpret_cast<uint64_t>(rdi33 + 1) * 0x708);
                                __asm__("mulsd xmm2, [rdi+rbp*8]");
                                __asm__("addsd xmm2, xmm3");
                                rdi35->f0 = rsi34->f0;
                                rdi16 = reinterpret_cast<struct s54*>(&rdi35->f4);
                                rsi25 = reinterpret_cast<struct s55*>(&rsi34->f4);
                                rcx29 = rcx29 + 2;
                                rax30 = rax30 + 2;
                            } while (!reinterpret_cast<int1_t>(rax30 == free));
                        }
                        if ((*reinterpret_cast<unsigned char*>(&rsi25) & 1) != free) {
                            rdi16->f0 = rsi25->f0;
                            rdi36 = reinterpret_cast<struct s58*>(&rdi16->f4);
                            rsi37 = reinterpret_cast<struct s56*>(&rsi25->f4);
                            __asm__("mulsd xmm3, xmm0");
                            __asm__("mulsd xmm3, [rax+rbp*8]");
                            __asm__("addsd xmm3, xmm2");
                            rdi36->f0 = rsi37->f0;
                            rdi16 = reinterpret_cast<struct s54*>(&rdi36->f4);
                            rsi25 = reinterpret_cast<struct s55*>(&rsi37->f4);
                        }
                    }
                    ++rbp27;
                } while (rbp27 != 22);
            }
            ++r13_26;
        } while (r13_26 != 0x4db);
        ebp38 = v20;
        if (free) 
            goto addr_761_17;
    }
    *reinterpret_cast<int32_t*>(&rdx39) = ebp38;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<uint32_t*>(&rdi40) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r9_41) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_41) + 4) = reinterpret_cast<int32_t>(free);
    do {
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp38 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ebp38 == free))) {
            *reinterpret_cast<int32_t*>(&r14_42) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_42) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi40->f0 = rsi25->f0;
                rdi43 = reinterpret_cast<struct s60*>(&rdi40->f4);
                rsi44 = reinterpret_cast<struct s56*>(&rsi25->f4);
                __asm__("mulsd xmm0, xmm1");
                rdi43->f0 = rsi44->f0;
                rdi40 = reinterpret_cast<struct s59*>(&rdi43->f4);
                rsi25 = reinterpret_cast<struct s55*>(&rsi44->f4);
                if (!free) {
                    *reinterpret_cast<int32_t*>(&rcx45) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx45) + 4) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(&rax46) = reinterpret_cast<int32_t>(free);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = reinterpret_cast<int32_t>(free);
                    if (!free) {
                        do {
                            rsi47 = reinterpret_cast<struct s61*>(r8_48 + r9_41 * 0x708);
                            rdi40->f0 = rsi47->f0;
                            rdi49 = reinterpret_cast<struct s60*>(&rdi40->f4);
                            rsi50 = reinterpret_cast<struct s62*>(&rsi47->f4);
                            __asm__("mulsd xmm2, [r15+r14*8]");
                            __asm__("addsd xmm2, xmm0");
                            rdi49->f0 = rsi50->f0;
                            rdi51 = reinterpret_cast<struct s59*>(&rdi49->f4);
                            rdi51->f0 = rsi50->f4;
                            rdi52 = reinterpret_cast<struct s60*>(&rdi51->f4);
                            rsi53 = reinterpret_cast<struct s63*>(r10_21 + (rcx45 | 1) * 0x960);
                            __asm__("mulsd xmm0, [rsi+r14*8]");
                            __asm__("addsd xmm0, xmm2");
                            rdi52->f0 = rsi53->f0;
                            rdi40 = reinterpret_cast<struct s59*>(&rdi52->f4);
                            rsi25 = reinterpret_cast<struct s55*>(&rsi53->f4);
                            rcx45 = rcx45 + 2;
                            rax46 = reinterpret_cast<struct s59*>(reinterpret_cast<int64_t>(rax46) + 2);
                        } while (rax46 != rdi40);
                    }
                    if (!1) {
                        rdi40->f0 = rsi25->f0;
                        rdi54 = reinterpret_cast<struct s60*>(&rdi40->f4);
                        rsi55 = reinterpret_cast<struct s56*>(&rsi25->f4);
                        __asm__("mulsd xmm2, [rax+r14*8]");
                        __asm__("addsd xmm2, xmm0");
                        rdi54->f0 = rsi55->f0;
                        rdi40 = reinterpret_cast<struct s59*>(&rdi54->f4);
                        rsi25 = reinterpret_cast<struct s55*>(&rsi55->f4);
                    }
                }
                ++r14_42;
            } while (r14_42 != rdx39);
        }
        ++r9_41;
    } while (r9_41 != 0x4db);
    goto addr_761_17;
}

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

int64_t fun_7a2(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t r14_4;
    int64_t rax5;
    int64_t rax6;
    int64_t r12_7;
    int32_t* rax8;
    int32_t* r13_9;
    int32_t* rax10;
    int32_t* r15_11;
    int64_t rax12;
    int64_t rcx13;
    int64_t rdx14;
    int64_t rcx15;
    int64_t rdx16;
    int64_t rax17;
    int64_t rdx18;
    int64_t rcx19;
    int64_t rdx20;
    int32_t* rsi21;
    int64_t rax22;
    int64_t rdx23;
    int32_t* rdi24;
    int32_t* rbx25;
    struct s64* rsi26;
    struct s65* rdi27;
    struct s66* rdi28;
    struct s67* rsi29;
    struct s68* rdi30;
    struct s69* rsi31;
    int32_t* rdi32;
    struct s70* rsi33;
    struct s66* rdi34;
    int64_t rcx35;
    struct s71* rsi36;
    int32_t* rdx37;
    struct s20* rsi38;
    struct s72* rdi39;
    int32_t* rbx40;
    struct s73* rdi41;
    struct s51* rsi42;
    struct s52* rsi43;
    int32_t* rsi44;
    struct s74* rdi45;
    int32_t ebp46;
    int32_t* rbx47;
    int64_t v48;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r14_4 = rax5;
    rax6 = fun_7b4(0xf1b30, 8);
    r12_7 = rax6;
    rax8 = fun_7c6(0x107ac0, 8);
    r13_9 = rax8;
    rax10 = fun_7d8(0xea600, 8);
    r15_11 = rax10;
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pshufd xmm10, xmm7, 0xf5");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x8");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx14 = rdx14 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx14 != 0x44c);
        ++rcx13;
    } while (rcx13 != 0x320);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, eax");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("pshufd xmm10, xmm8, 0xe8");
            __asm__("psubd xmm10, xmm2");
            __asm__("pshufd xmm9, xmm10, 0x55");
            __asm__("pmuludq xmm10, xmm7");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pmuludq xmm11, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("pshufd xmm12, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm12");
            __asm__("pxor xmm12, xmm12");
            __asm__("pcmpgtd xmm12, xmm9");
            __asm__("pand xmm12, xmm3");
            __asm__("paddd xmm12, xmm9");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm10, xmm12");
            __asm__("paddd xmm10, xmm9");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psrad xmm10, 0x9");
            __asm__("psrld xmm11, 0x1f");
            __asm__("paddd xmm10, xmm11");
            __asm__("pshufd xmm11, xmm10, 0xf5");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm9, xmm10");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx16 = rdx16 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rdx16 != 0x384);
        ++rax12;
    } while (rax12 != 0x44c);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax17) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("pcmpeqd xmm3, xmm3");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movapd xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, ecx");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx18) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("movdqa xmm9, xmm8");
            __asm__("paddd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("pshufd xmm9, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm3");
            __asm__("movdqa xmm10, xmm9");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pshufd xmm11, xmm9, 0xf5");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pxor xmm12, xmm12");
            __asm__("pcmpgtd xmm12, xmm9");
            __asm__("pand xmm12, xmm4");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm10, xmm12");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psrad xmm10, 0x7");
            __asm__("psrld xmm11, 0x1f");
            __asm__("paddd xmm10, xmm11");
            __asm__("pshufd xmm11, xmm10, 0xf5");
            __asm__("pmuludq xmm10, xmm5");
            __asm__("pmuludq xmm11, xmm5");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm9, xmm10");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm6");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx18 = rdx18 + 2;
            __asm__("paddd xmm8, xmm0");
        } while (rdx18 != 0x4b0);
        ++rcx15;
    } while (rcx15 != 0x384);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx19) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, eax");
        __asm__("pshufd xmm5, xmm5, 0x50");
        *reinterpret_cast<int32_t*>(&rdx20) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddd xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm8, xmm5, 0xf5");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pshufd xmm8, xmm7, 0xe8");
            __asm__("pshufd xmm10, xmm9, 0xe8");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("pmuludq xmm7, xmm2");
            __asm__("pshufd xmm7, xmm7, 0xed");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pxor xmm10, xmm10");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("pcmpgtd xmm10, xmm8");
            __asm__("pand xmm10, xmm2");
            __asm__("psubd xmm7, xmm10");
            __asm__("movdqa xmm9, xmm7");
            __asm__("psrld xmm9, 0x1f");
            __asm__("psrad xmm7, 0x9");
            __asm__("paddd xmm7, xmm9");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pmuludq xmm7, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("psubd xmm8, xmm7");
            __asm__("cvtdq2pd xmm7, xmm8");
            __asm__("divpd xmm7, xmm4");
            rsi21 = r15_11 + rax17 * 0x960;
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx20 = rdx20 + 2;
        } while (rdx20 != 0x4b0);
        ++rax17;
    } while (rax17 != 0x320);
    *reinterpret_cast<int32_t*>(&rax22) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = reinterpret_cast<int32_t>(free);
    gea600 = *rsi21;
    do {
        *reinterpret_cast<int32_t*>(&rdx23) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi24 = rbx25 + rcx19 * 0x708;
            rsi26 = reinterpret_cast<struct s64*>(rdi24 + rdx23 * 2);
            rdi24[rdx23 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("pxor xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi27->f0 = rsi26->f0;
                rdi28 = reinterpret_cast<struct s66*>(&rdi27->f4);
                rsi29 = reinterpret_cast<struct s67*>(&rsi26->f4);
                __asm__("mulsd xmm2, xmm0");
                __asm__("mulsd xmm2, [r9+rdx*8]");
                __asm__("addsd xmm2, xmm1");
                rdi28->f0 = rsi29->f0;
                rdi30 = reinterpret_cast<struct s68*>(&rdi28->f4);
                rsi31 = reinterpret_cast<struct s69*>(&rsi29->f4);
                rdi30->f0 = rsi31->f0;
                rdi32 = &rdi30->f4;
                rsi33 = reinterpret_cast<struct s70*>(&rsi31->f4);
                __asm__("mulsd xmm1, xmm0");
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm1, xmm2");
                *rdi32 = rsi33->f0;
                rsi26 = reinterpret_cast<struct s64*>(&rsi33->f4);
                rdi27 = reinterpret_cast<struct s65*>(reinterpret_cast<uint64_t>(rdi32 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi27 == 0x44c));
            ++rdx23;
        } while (rdx23 != 0x384);
        ++rcx19;
    } while (rcx19 != 0x320);
    rdi27->f0 = rsi26->f0;
    rdi34 = reinterpret_cast<struct s66*>(&rdi27->f4);
    do {
        *reinterpret_cast<int32_t*>(&rcx35) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi36 = reinterpret_cast<struct s71*>(r15_11 + rax22 * 0x960);
            rdx37 = &(rsi36 + rcx35)->f0;
            rdi34->f0 = rsi36->f0;
            __asm__("mulsd xmm1, xmm0");
            rdi34->f4 = rsi36->f4;
            *reinterpret_cast<int32_t*>(&rsi38) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi38) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi39 = reinterpret_cast<struct s72*>(rbx40 + rax22 * 0x708);
                rdi39->f0 = rsi38->f0;
                rdi41 = reinterpret_cast<struct s73*>(&rdi39->f4);
                rsi42 = reinterpret_cast<struct s51*>(&rsi38->f4);
                __asm__("mulsd xmm2, [r8+rcx*8]");
                __asm__("addsd xmm2, xmm1");
                rdi41->f0 = rsi42->f0;
                rsi43 = reinterpret_cast<struct s52*>(&rsi42->f4);
                rdi41->f4 = rsi43->f0;
                rsi44 = &rsi43->f4;
                rdi45 = reinterpret_cast<struct s74*>(r13_9 + (reinterpret_cast<uint64_t>(rsi43) | 1) * 0x960);
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi45->f0 = *rsi44;
                rdi34 = reinterpret_cast<struct s66*>(&rdi45->f4);
                rsi38 = reinterpret_cast<struct s20*>(reinterpret_cast<uint64_t>(rsi44 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi38 == 0x384));
            ++rcx35;
        } while (rcx35 != 0x4b0);
        ++rax22;
    } while (rax22 != 0x320);
    if (ebp46 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        *reinterpret_cast<int32_t*>(&rsi38) = 0x4b0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi38) + 4) = reinterpret_cast<int32_t>(free);
        rdx37 = r15_11;
        fun_dda(0x320, 0x4b0, rdx37);
    }
    fun_de2(rbx47, rsi38, rdx37);
    fun_dea(r14_4, rsi38, rdx37);
    fun_df2(r12_7, rsi38, rdx37);
    fun_dfa(r13_9, rsi38, rdx37);
    fun_e02(r15_11, rsi38, rdx37);
    goto v48;
}

void fun_df2(int64_t rdi, struct s20* rsi, int32_t* rdx) {
    int32_t* r13_4;
    int32_t* r15_5;
    int64_t v6;

    fun_dfa(r13_4, rsi, rdx);
    fun_e02(r15_5, rsi, rdx);
    goto v6;
}

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

int64_t fun_7b4(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t r12_4;
    int64_t rax5;
    int32_t* rax6;
    int32_t* r13_7;
    int32_t* rax8;
    int32_t* r15_9;
    int64_t rax10;
    int64_t rcx11;
    int64_t rdx12;
    int64_t rcx13;
    int64_t rdx14;
    int64_t rax15;
    int64_t rdx16;
    int64_t rcx17;
    int64_t rdx18;
    int32_t* rsi19;
    int64_t rax20;
    int64_t rdx21;
    int32_t* rdi22;
    int32_t* rbx23;
    struct s75* rsi24;
    struct s76* rdi25;
    struct s77* rdi26;
    struct s78* rsi27;
    struct s79* rdi28;
    struct s80* rsi29;
    int32_t* rdi30;
    struct s81* rsi31;
    struct s77* rdi32;
    int64_t rcx33;
    struct s82* rsi34;
    int32_t* rdx35;
    struct s20* rsi36;
    struct s83* rdi37;
    int32_t* rbx38;
    struct s84* rdi39;
    struct s51* rsi40;
    struct s52* rsi41;
    int32_t* rsi42;
    struct s85* rdi43;
    int32_t ebp44;
    int32_t* rbx45;
    int64_t r14_46;
    int64_t v47;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r12_4 = rax5;
    rax6 = fun_7c6(0x107ac0, 8);
    r13_7 = rax6;
    rax8 = fun_7d8(0xea600, 8);
    r15_9 = rax8;
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pshufd xmm10, xmm7, 0xf5");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x8");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx12 = rdx12 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx12 != 0x44c);
        ++rcx11;
    } while (rcx11 != 0x320);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, eax");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("pshufd xmm10, xmm8, 0xe8");
            __asm__("psubd xmm10, xmm2");
            __asm__("pshufd xmm9, xmm10, 0x55");
            __asm__("pmuludq xmm10, xmm7");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pmuludq xmm11, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("pshufd xmm12, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm12");
            __asm__("pxor xmm12, xmm12");
            __asm__("pcmpgtd xmm12, xmm9");
            __asm__("pand xmm12, xmm3");
            __asm__("paddd xmm12, xmm9");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm10, xmm12");
            __asm__("paddd xmm10, xmm9");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psrad xmm10, 0x9");
            __asm__("psrld xmm11, 0x1f");
            __asm__("paddd xmm10, xmm11");
            __asm__("pshufd xmm11, xmm10, 0xf5");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm9, xmm10");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx14 = rdx14 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rdx14 != 0x384);
        ++rax10;
    } while (rax10 != 0x44c);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax15) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("pcmpeqd xmm3, xmm3");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movapd xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, ecx");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("movdqa xmm9, xmm8");
            __asm__("paddd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("pshufd xmm9, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm3");
            __asm__("movdqa xmm10, xmm9");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pshufd xmm11, xmm9, 0xf5");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pxor xmm12, xmm12");
            __asm__("pcmpgtd xmm12, xmm9");
            __asm__("pand xmm12, xmm4");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm10, xmm12");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psrad xmm10, 0x7");
            __asm__("psrld xmm11, 0x1f");
            __asm__("paddd xmm10, xmm11");
            __asm__("pshufd xmm11, xmm10, 0xf5");
            __asm__("pmuludq xmm10, xmm5");
            __asm__("pmuludq xmm11, xmm5");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm9, xmm10");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm6");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx16 = rdx16 + 2;
            __asm__("paddd xmm8, xmm0");
        } while (rdx16 != 0x4b0);
        ++rcx13;
    } while (rcx13 != 0x384);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx17) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, eax");
        __asm__("pshufd xmm5, xmm5, 0x50");
        *reinterpret_cast<int32_t*>(&rdx18) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddd xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm8, xmm5, 0xf5");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pshufd xmm8, xmm7, 0xe8");
            __asm__("pshufd xmm10, xmm9, 0xe8");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("pmuludq xmm7, xmm2");
            __asm__("pshufd xmm7, xmm7, 0xed");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pxor xmm10, xmm10");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("pcmpgtd xmm10, xmm8");
            __asm__("pand xmm10, xmm2");
            __asm__("psubd xmm7, xmm10");
            __asm__("movdqa xmm9, xmm7");
            __asm__("psrld xmm9, 0x1f");
            __asm__("psrad xmm7, 0x9");
            __asm__("paddd xmm7, xmm9");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pmuludq xmm7, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("psubd xmm8, xmm7");
            __asm__("cvtdq2pd xmm7, xmm8");
            __asm__("divpd xmm7, xmm4");
            rsi19 = r15_9 + rax15 * 0x960;
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx18 = rdx18 + 2;
        } while (rdx18 != 0x4b0);
        ++rax15;
    } while (rax15 != 0x320);
    *reinterpret_cast<int32_t*>(&rax20) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = reinterpret_cast<int32_t>(free);
    gea600 = *rsi19;
    do {
        *reinterpret_cast<int32_t*>(&rdx21) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi22 = rbx23 + rcx17 * 0x708;
            rsi24 = reinterpret_cast<struct s75*>(rdi22 + rdx21 * 2);
            rdi22[rdx21 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("pxor xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rdi25) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi25->f0 = rsi24->f0;
                rdi26 = reinterpret_cast<struct s77*>(&rdi25->f4);
                rsi27 = reinterpret_cast<struct s78*>(&rsi24->f4);
                __asm__("mulsd xmm2, xmm0");
                __asm__("mulsd xmm2, [r9+rdx*8]");
                __asm__("addsd xmm2, xmm1");
                rdi26->f0 = rsi27->f0;
                rdi28 = reinterpret_cast<struct s79*>(&rdi26->f4);
                rsi29 = reinterpret_cast<struct s80*>(&rsi27->f4);
                rdi28->f0 = rsi29->f0;
                rdi30 = &rdi28->f4;
                rsi31 = reinterpret_cast<struct s81*>(&rsi29->f4);
                __asm__("mulsd xmm1, xmm0");
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm1, xmm2");
                *rdi30 = rsi31->f0;
                rsi24 = reinterpret_cast<struct s75*>(&rsi31->f4);
                rdi25 = reinterpret_cast<struct s76*>(reinterpret_cast<uint64_t>(rdi30 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi25 == 0x44c));
            ++rdx21;
        } while (rdx21 != 0x384);
        ++rcx17;
    } while (rcx17 != 0x320);
    rdi25->f0 = rsi24->f0;
    rdi32 = reinterpret_cast<struct s77*>(&rdi25->f4);
    do {
        *reinterpret_cast<int32_t*>(&rcx33) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi34 = reinterpret_cast<struct s82*>(r15_9 + rax20 * 0x960);
            rdx35 = &(rsi34 + rcx33)->f0;
            rdi32->f0 = rsi34->f0;
            __asm__("mulsd xmm1, xmm0");
            rdi32->f4 = rsi34->f4;
            *reinterpret_cast<int32_t*>(&rsi36) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi36) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi37 = reinterpret_cast<struct s83*>(rbx38 + rax20 * 0x708);
                rdi37->f0 = rsi36->f0;
                rdi39 = reinterpret_cast<struct s84*>(&rdi37->f4);
                rsi40 = reinterpret_cast<struct s51*>(&rsi36->f4);
                __asm__("mulsd xmm2, [r8+rcx*8]");
                __asm__("addsd xmm2, xmm1");
                rdi39->f0 = rsi40->f0;
                rsi41 = reinterpret_cast<struct s52*>(&rsi40->f4);
                rdi39->f4 = rsi41->f0;
                rsi42 = &rsi41->f4;
                rdi43 = reinterpret_cast<struct s85*>(r13_7 + (reinterpret_cast<uint64_t>(rsi41) | 1) * 0x960);
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi43->f0 = *rsi42;
                rdi32 = reinterpret_cast<struct s77*>(&rdi43->f4);
                rsi36 = reinterpret_cast<struct s20*>(reinterpret_cast<uint64_t>(rsi42 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi36 == 0x384));
            ++rcx33;
        } while (rcx33 != 0x4b0);
        ++rax20;
    } while (rax20 != 0x320);
    if (ebp44 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        *reinterpret_cast<int32_t*>(&rsi36) = 0x4b0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi36) + 4) = reinterpret_cast<int32_t>(free);
        rdx35 = r15_9;
        fun_dda(0x320, 0x4b0, rdx35);
    }
    fun_de2(rbx45, rsi36, rdx35);
    fun_dea(r14_46, rsi36, rdx35);
    fun_df2(r12_4, rsi36, rdx35);
    fun_dfa(r13_7, rsi36, rdx35);
    fun_e02(r15_9, rsi36, rdx35);
    goto v47;
}

void fun_dfa(int32_t* rdi, struct s20* rsi, int32_t* rdx) {
    int32_t* r15_4;
    int64_t v5;

    fun_e02(r15_4, rsi, rdx);
    goto v5;
}

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

struct s96 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_7c6(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int32_t* r13_4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* r15_7;
    int64_t rax8;
    int64_t rcx9;
    int64_t rdx10;
    int64_t rcx11;
    int64_t rdx12;
    int64_t rax13;
    int64_t rdx14;
    int64_t rcx15;
    int64_t rdx16;
    int32_t* rsi17;
    int64_t rax18;
    int64_t rdx19;
    int32_t* rdi20;
    int32_t* rbx21;
    struct s86* rsi22;
    struct s87* rdi23;
    struct s88* rdi24;
    struct s89* rsi25;
    struct s90* rdi26;
    struct s91* rsi27;
    int32_t* rdi28;
    struct s92* rsi29;
    struct s88* rdi30;
    int64_t rcx31;
    struct s93* rsi32;
    int32_t* rdx33;
    struct s20* rsi34;
    struct s94* rdi35;
    int32_t* rbx36;
    struct s95* rdi37;
    struct s51* rsi38;
    struct s52* rsi39;
    int32_t* rsi40;
    struct s96* rdi41;
    int32_t ebp42;
    int32_t* rbx43;
    int64_t r14_44;
    int64_t r12_45;
    int64_t v46;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r13_4 = rax5;
    rax6 = fun_7d8(0xea600, 8);
    r15_7 = rax6;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pshufd xmm10, xmm7, 0xf5");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x8");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx10 = rdx10 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx10 != 0x44c);
        ++rcx9;
    } while (rcx9 != 0x320);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, eax");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("pshufd xmm10, xmm8, 0xe8");
            __asm__("psubd xmm10, xmm2");
            __asm__("pshufd xmm9, xmm10, 0x55");
            __asm__("pmuludq xmm10, xmm7");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pmuludq xmm11, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("pshufd xmm12, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm12");
            __asm__("pxor xmm12, xmm12");
            __asm__("pcmpgtd xmm12, xmm9");
            __asm__("pand xmm12, xmm3");
            __asm__("paddd xmm12, xmm9");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm10, xmm12");
            __asm__("paddd xmm10, xmm9");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psrad xmm10, 0x9");
            __asm__("psrld xmm11, 0x1f");
            __asm__("paddd xmm10, xmm11");
            __asm__("pshufd xmm11, xmm10, 0xf5");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm9, xmm10");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx12 = rdx12 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rdx12 != 0x384);
        ++rax8;
    } while (rax8 != 0x44c);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax13) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("pcmpeqd xmm3, xmm3");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movapd xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, ecx");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("movdqa xmm9, xmm8");
            __asm__("paddd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("pshufd xmm9, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm3");
            __asm__("movdqa xmm10, xmm9");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pshufd xmm11, xmm9, 0xf5");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pxor xmm12, xmm12");
            __asm__("pcmpgtd xmm12, xmm9");
            __asm__("pand xmm12, xmm4");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm10, xmm12");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psrad xmm10, 0x7");
            __asm__("psrld xmm11, 0x1f");
            __asm__("paddd xmm10, xmm11");
            __asm__("pshufd xmm11, xmm10, 0xf5");
            __asm__("pmuludq xmm10, xmm5");
            __asm__("pmuludq xmm11, xmm5");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm9, xmm10");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm6");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx14 = rdx14 + 2;
            __asm__("paddd xmm8, xmm0");
        } while (rdx14 != 0x4b0);
        ++rcx11;
    } while (rcx11 != 0x384);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, eax");
        __asm__("pshufd xmm5, xmm5, 0x50");
        *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddd xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm8, xmm5, 0xf5");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pshufd xmm8, xmm7, 0xe8");
            __asm__("pshufd xmm10, xmm9, 0xe8");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("pmuludq xmm7, xmm2");
            __asm__("pshufd xmm7, xmm7, 0xed");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pxor xmm10, xmm10");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("pcmpgtd xmm10, xmm8");
            __asm__("pand xmm10, xmm2");
            __asm__("psubd xmm7, xmm10");
            __asm__("movdqa xmm9, xmm7");
            __asm__("psrld xmm9, 0x1f");
            __asm__("psrad xmm7, 0x9");
            __asm__("paddd xmm7, xmm9");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pmuludq xmm7, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("psubd xmm8, xmm7");
            __asm__("cvtdq2pd xmm7, xmm8");
            __asm__("divpd xmm7, xmm4");
            rsi17 = r15_7 + rax13 * 0x960;
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx16 = rdx16 + 2;
        } while (rdx16 != 0x4b0);
        ++rax13;
    } while (rax13 != 0x320);
    *reinterpret_cast<int32_t*>(&rax18) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = reinterpret_cast<int32_t>(free);
    gea600 = *rsi17;
    do {
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi20 = rbx21 + rcx15 * 0x708;
            rsi22 = reinterpret_cast<struct s86*>(rdi20 + rdx19 * 2);
            rdi20[rdx19 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("pxor xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rdi23) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi23->f0 = rsi22->f0;
                rdi24 = reinterpret_cast<struct s88*>(&rdi23->f4);
                rsi25 = reinterpret_cast<struct s89*>(&rsi22->f4);
                __asm__("mulsd xmm2, xmm0");
                __asm__("mulsd xmm2, [r9+rdx*8]");
                __asm__("addsd xmm2, xmm1");
                rdi24->f0 = rsi25->f0;
                rdi26 = reinterpret_cast<struct s90*>(&rdi24->f4);
                rsi27 = reinterpret_cast<struct s91*>(&rsi25->f4);
                rdi26->f0 = rsi27->f0;
                rdi28 = &rdi26->f4;
                rsi29 = reinterpret_cast<struct s92*>(&rsi27->f4);
                __asm__("mulsd xmm1, xmm0");
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm1, xmm2");
                *rdi28 = rsi29->f0;
                rsi22 = reinterpret_cast<struct s86*>(&rsi29->f4);
                rdi23 = reinterpret_cast<struct s87*>(reinterpret_cast<uint64_t>(rdi28 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi23 == 0x44c));
            ++rdx19;
        } while (rdx19 != 0x384);
        ++rcx15;
    } while (rcx15 != 0x320);
    rdi23->f0 = rsi22->f0;
    rdi30 = reinterpret_cast<struct s88*>(&rdi23->f4);
    do {
        *reinterpret_cast<int32_t*>(&rcx31) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi32 = reinterpret_cast<struct s93*>(r15_7 + rax18 * 0x960);
            rdx33 = &(rsi32 + rcx31)->f0;
            rdi30->f0 = rsi32->f0;
            __asm__("mulsd xmm1, xmm0");
            rdi30->f4 = rsi32->f4;
            *reinterpret_cast<int32_t*>(&rsi34) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi35 = reinterpret_cast<struct s94*>(rbx36 + rax18 * 0x708);
                rdi35->f0 = rsi34->f0;
                rdi37 = reinterpret_cast<struct s95*>(&rdi35->f4);
                rsi38 = reinterpret_cast<struct s51*>(&rsi34->f4);
                __asm__("mulsd xmm2, [r8+rcx*8]");
                __asm__("addsd xmm2, xmm1");
                rdi37->f0 = rsi38->f0;
                rsi39 = reinterpret_cast<struct s52*>(&rsi38->f4);
                rdi37->f4 = rsi39->f0;
                rsi40 = &rsi39->f4;
                rdi41 = reinterpret_cast<struct s96*>(r13_4 + (reinterpret_cast<uint64_t>(rsi39) | 1) * 0x960);
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi41->f0 = *rsi40;
                rdi30 = reinterpret_cast<struct s88*>(&rdi41->f4);
                rsi34 = reinterpret_cast<struct s20*>(reinterpret_cast<uint64_t>(rsi40 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi34 == 0x384));
            ++rcx31;
        } while (rcx31 != 0x4b0);
        ++rax18;
    } while (rax18 != 0x320);
    if (ebp42 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        *reinterpret_cast<int32_t*>(&rsi34) = 0x4b0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(free);
        rdx33 = r15_7;
        fun_dda(0x320, 0x4b0, rdx33);
    }
    fun_de2(rbx43, rsi34, rdx33);
    fun_dea(r14_44, rsi34, rdx33);
    fun_df2(r12_45, rsi34, rdx33);
    fun_dfa(r13_4, rsi34, rdx33);
    fun_e02(r15_7, rsi34, rdx33);
    goto v46;
}

void fun_e02(int32_t* rdi, struct s20* rsi, int32_t* rdx) {
    int64_t v4;

    goto v4;
}

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

struct s106 {
    int32_t f0;
    int32_t f4;
};

struct s107 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_7d8(int32_t* rdi, int64_t rsi) {
    signed char** v3;
    int32_t* r15_4;
    int32_t* rax5;
    int64_t rax6;
    int64_t rcx7;
    int64_t rdx8;
    int64_t rcx9;
    int64_t rdx10;
    int64_t rax11;
    int64_t rdx12;
    int64_t rcx13;
    int64_t rdx14;
    int32_t* rsi15;
    int64_t rax16;
    int64_t rdx17;
    int32_t* rdi18;
    int32_t* rbx19;
    struct s97* rsi20;
    struct s98* rdi21;
    struct s99* rdi22;
    struct s100* rsi23;
    struct s101* rdi24;
    struct s102* rsi25;
    int32_t* rdi26;
    struct s103* rsi27;
    struct s99* rdi28;
    int64_t rcx29;
    struct s104* rsi30;
    int32_t* rdx31;
    struct s20* rsi32;
    struct s105* rdi33;
    int32_t* rbx34;
    struct s106* rdi35;
    struct s51* rsi36;
    struct s52* rsi37;
    int32_t* rsi38;
    struct s107* rdi39;
    int32_t* r13_40;
    int32_t ebp41;
    int32_t* rbx42;
    int64_t r14_43;
    int64_t r12_44;
    int32_t* r13_45;
    int64_t v46;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r15_4 = rax5;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx8) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pshufd xmm10, xmm7, 0xf5");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x8");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx8 = rdx8 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx8 != 0x44c);
        ++rcx7;
    } while (rcx7 != 0x320);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, eax");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("pshufd xmm10, xmm8, 0xe8");
            __asm__("psubd xmm10, xmm2");
            __asm__("pshufd xmm9, xmm10, 0x55");
            __asm__("pmuludq xmm10, xmm7");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pmuludq xmm11, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("pshufd xmm12, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm12");
            __asm__("pxor xmm12, xmm12");
            __asm__("pcmpgtd xmm12, xmm9");
            __asm__("pand xmm12, xmm3");
            __asm__("paddd xmm12, xmm9");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm10, xmm12");
            __asm__("paddd xmm10, xmm9");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psrad xmm10, 0x9");
            __asm__("psrld xmm11, 0x1f");
            __asm__("paddd xmm10, xmm11");
            __asm__("pshufd xmm11, xmm10, 0xf5");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm9, xmm10");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx10 = rdx10 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rdx10 != 0x384);
        ++rax6;
    } while (rax6 != 0x44c);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("pcmpeqd xmm3, xmm3");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movapd xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, ecx");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("movdqa xmm9, xmm8");
            __asm__("paddd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("pshufd xmm9, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm3");
            __asm__("movdqa xmm10, xmm9");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pshufd xmm11, xmm9, 0xf5");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pxor xmm12, xmm12");
            __asm__("pcmpgtd xmm12, xmm9");
            __asm__("pand xmm12, xmm4");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm10, xmm12");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psrad xmm10, 0x7");
            __asm__("psrld xmm11, 0x1f");
            __asm__("paddd xmm10, xmm11");
            __asm__("pshufd xmm11, xmm10, 0xf5");
            __asm__("pmuludq xmm10, xmm5");
            __asm__("pmuludq xmm11, xmm5");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psubd xmm9, xmm10");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm6");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx12 = rdx12 + 2;
            __asm__("paddd xmm8, xmm0");
        } while (rdx12 != 0x4b0);
        ++rcx9;
    } while (rcx9 != 0x384);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, eax");
        __asm__("pshufd xmm5, xmm5, 0x50");
        *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddd xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm8, xmm5, 0xf5");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pshufd xmm8, xmm7, 0xe8");
            __asm__("pshufd xmm10, xmm9, 0xe8");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("pmuludq xmm7, xmm2");
            __asm__("pshufd xmm7, xmm7, 0xed");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pxor xmm10, xmm10");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("pcmpgtd xmm10, xmm8");
            __asm__("pand xmm10, xmm2");
            __asm__("psubd xmm7, xmm10");
            __asm__("movdqa xmm9, xmm7");
            __asm__("psrld xmm9, 0x1f");
            __asm__("psrad xmm7, 0x9");
            __asm__("paddd xmm7, xmm9");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pmuludq xmm7, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm7, xmm9");
            __asm__("psubd xmm8, xmm7");
            __asm__("cvtdq2pd xmm7, xmm8");
            __asm__("divpd xmm7, xmm4");
            rsi15 = r15_4 + rax11 * 0x960;
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx14 = rdx14 + 2;
        } while (rdx14 != 0x4b0);
        ++rax11;
    } while (rax11 != 0x320);
    *reinterpret_cast<int32_t*>(&rax16) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(free);
    *rdi = *rsi15;
    do {
        *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi18 = rbx19 + rcx13 * 0x708;
            rsi20 = reinterpret_cast<struct s97*>(rdi18 + rdx17 * 2);
            rdi18[rdx17 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("pxor xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rdi21) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi21->f0 = rsi20->f0;
                rdi22 = reinterpret_cast<struct s99*>(&rdi21->f4);
                rsi23 = reinterpret_cast<struct s100*>(&rsi20->f4);
                __asm__("mulsd xmm2, xmm0");
                __asm__("mulsd xmm2, [r9+rdx*8]");
                __asm__("addsd xmm2, xmm1");
                rdi22->f0 = rsi23->f0;
                rdi24 = reinterpret_cast<struct s101*>(&rdi22->f4);
                rsi25 = reinterpret_cast<struct s102*>(&rsi23->f4);
                rdi24->f0 = rsi25->f0;
                rdi26 = &rdi24->f4;
                rsi27 = reinterpret_cast<struct s103*>(&rsi25->f4);
                __asm__("mulsd xmm1, xmm0");
                __asm__("mulsd xmm1, [r8+rdx*8]");
                __asm__("addsd xmm1, xmm2");
                *rdi26 = rsi27->f0;
                rsi20 = reinterpret_cast<struct s97*>(&rsi27->f4);
                rdi21 = reinterpret_cast<struct s98*>(reinterpret_cast<uint64_t>(rdi26 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi21 == 0x44c));
            ++rdx17;
        } while (rdx17 != 0x384);
        ++rcx13;
    } while (rcx13 != 0x320);
    rdi21->f0 = rsi20->f0;
    rdi28 = reinterpret_cast<struct s99*>(&rdi21->f4);
    do {
        *reinterpret_cast<int32_t*>(&rcx29) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi30 = reinterpret_cast<struct s104*>(r15_4 + rax16 * 0x960);
            rdx31 = &(rsi30 + rcx29)->f0;
            rdi28->f0 = rsi30->f0;
            __asm__("mulsd xmm1, xmm0");
            rdi28->f4 = rsi30->f4;
            *reinterpret_cast<int32_t*>(&rsi32) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi33 = reinterpret_cast<struct s105*>(rbx34 + rax16 * 0x708);
                rdi33->f0 = rsi32->f0;
                rdi35 = reinterpret_cast<struct s106*>(&rdi33->f4);
                rsi36 = reinterpret_cast<struct s51*>(&rsi32->f4);
                __asm__("mulsd xmm2, [r8+rcx*8]");
                __asm__("addsd xmm2, xmm1");
                rdi35->f0 = rsi36->f0;
                rsi37 = reinterpret_cast<struct s52*>(&rsi36->f4);
                rdi35->f4 = rsi37->f0;
                rsi38 = &rsi37->f4;
                rdi39 = reinterpret_cast<struct s107*>(r13_40 + (reinterpret_cast<uint64_t>(rsi37) | 1) * 0x960);
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi39->f0 = *rsi38;
                rdi28 = reinterpret_cast<struct s99*>(&rdi39->f4);
                rsi32 = reinterpret_cast<struct s20*>(reinterpret_cast<uint64_t>(rsi38 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi32 == 0x384));
            ++rcx29;
        } while (rcx29 != 0x4b0);
        ++rax16;
    } while (rax16 != 0x320);
    if (ebp41 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        *reinterpret_cast<int32_t*>(&rsi32) = 0x4b0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32) + 4) = reinterpret_cast<int32_t>(free);
        rdx31 = r15_4;
        fun_dda(0x320, 0x4b0, rdx31);
    }
    fun_de2(rbx42, rsi32, rdx31);
    fun_dea(r14_43, rsi32, rdx31);
    fun_df2(r12_44, rsi32, rdx31);
    fun_dfa(r13_45, rsi32, rdx31);
    fun_e02(r15_4, rsi32, rdx31);
    goto v46;
}

void free() {
    int64_t* r8_1;

    *r8_1 = 0x3ff8000000000000;
}

void fun_8c(int32_t* rdi) {
    *rdi = *rdi - 1;
}

void fun_d8(int32_t edi) {
    int1_t zf2;
    unsigned char r9b3;

    if (zf2) {
        if ((r9b3 & 1) != free) {
            __asm__("cdq ");
        }
    }
}

void fun_f8(int32_t* rdi, int32_t* rsi) {
    __asm__("divps xmm1, xmm0");
    *rdi = *rsi;
    goto 80;
}

struct s108 {
    int32_t f0;
    int32_t f4;
};

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
    int32_t f4;
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

void fun_110() {
    int64_t r11_1;
    uint32_t esi2;
    int32_t r10d3;
    int32_t r10d4;
    int64_t r14_5;
    int64_t r15_6;
    struct s108* rsi7;
    int64_t r13_8;
    struct s109* rdi9;
    struct s110* rdi10;
    struct s111* rsi11;
    int64_t r9_12;
    uint32_t r9d13;
    uint32_t ecx14;
    struct s112* rsi15;
    struct s112* v16;
    int64_t rbx17;
    int64_t r14_18;
    int32_t ecx19;
    int32_t ecx20;
    int64_t r12_21;
    int32_t ecx22;
    struct s110* rdi23;
    struct s113* rsi24;
    struct s114* rsi25;
    struct s114* v26;
    struct s115* rdi27;
    int64_t r11_28;
    int32_t ecx29;
    int32_t ecx30;
    struct s115* r14_31;
    int32_t ecx32;
    struct s116* rdi33;
    struct s117* rsi34;
    int64_t v35;
    int64_t v36;

    *reinterpret_cast<uint32_t*>(&r11_1) = esi2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_1) + 4) = reinterpret_cast<int32_t>(free);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r10d3 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r10d4 == free))) {
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, esi");
        *reinterpret_cast<uint32_t*>(&r14_5) = *reinterpret_cast<uint32_t*>(&r11_1) & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_5) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r15_6) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_6) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi7) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi7) == free))) {
                *reinterpret_cast<int32_t*>(&r13_8) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_8) + 4) = reinterpret_cast<int32_t>(free);
                if (*reinterpret_cast<int32_t*>(&rsi7) != 1) {
                    do {
                        __asm__("cdq ");
                        __asm__("xorps xmm1, xmm1");
                        __asm__("cvtsi2sd xmm1, edx");
                        __asm__("divsd xmm1, xmm0");
                        rdi9->f0 = rsi7->f0;
                        rdi10 = reinterpret_cast<struct s110*>(&rdi9->f4);
                        rsi11 = reinterpret_cast<struct s111*>(&rsi7->f4);
                        __asm__("cdq ");
                        __asm__("xorps xmm1, xmm1");
                        __asm__("cvtsi2sd xmm1, edx");
                        __asm__("divsd xmm1, xmm0");
                        rdi10->f0 = rsi11->f0;
                        rdi9 = reinterpret_cast<struct s109*>(&rdi10->f4);
                        rsi7 = reinterpret_cast<struct s108*>(&rsi11->f4);
                        r13_8 = r13_8 + 2;
                    } while (r13_8 != r14_5);
                }
                if ((*reinterpret_cast<unsigned char*>(&r11_1) & 1) != free) {
                    __asm__("cdq ");
                    __asm__("xorps xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, edx");
                    __asm__("divsd xmm1, xmm0");
                    rdi9->f0 = rsi7->f0;
                    rdi9 = reinterpret_cast<struct s109*>(&rdi9->f4);
                    rsi7 = reinterpret_cast<struct s108*>(&rsi7->f4);
                }
            }
            ++r15_6;
        } while (r15_6 != r9_12);
    }
    r9d13 = ecx14;
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi7) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi7) == free))) {
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, ecx");
        rsi15 = v16;
        *reinterpret_cast<uint32_t*>(&rbx17) = r9d13 & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx17) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r14_18) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_18) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ecx19 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ecx20 == free))) {
                *reinterpret_cast<int32_t*>(&r12_21) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_21) + 4) = reinterpret_cast<int32_t>(free);
                if (ecx22 != 1) {
                    do {
                        __asm__("cdq ");
                        __asm__("xorps xmm1, xmm1");
                        __asm__("cvtsi2sd xmm1, edx");
                        __asm__("divsd xmm1, xmm0");
                        rdi9->f0 = rsi15->f0;
                        rdi23 = reinterpret_cast<struct s110*>(&rdi9->f4);
                        rsi24 = reinterpret_cast<struct s113*>(&rsi15->f4);
                        __asm__("cdq ");
                        __asm__("xorps xmm1, xmm1");
                        __asm__("cvtsi2sd xmm1, edx");
                        __asm__("divsd xmm1, xmm0");
                        rdi23->f0 = rsi24->f0;
                        rdi9 = reinterpret_cast<struct s109*>(&rdi23->f4);
                        rsi15 = reinterpret_cast<struct s112*>(&rsi24->f4);
                        r12_21 = r12_21 + 2;
                    } while (r12_21 != rbx17);
                }
                if ((*reinterpret_cast<unsigned char*>(&r9d13) & 1) != free) {
                    __asm__("cdq ");
                    __asm__("xorps xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, edx");
                    __asm__("divsd xmm1, xmm0");
                    rdi9->f0 = rsi15->f0;
                    rdi9 = reinterpret_cast<struct s109*>(&rdi9->f4);
                    rsi15 = reinterpret_cast<struct s112*>(&rsi15->f4);
                }
            }
            ++r14_18;
        } while (r14_18 != r11_1);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi9) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi9) == free))) {
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, r10d");
        rsi25 = v26;
        *reinterpret_cast<uint32_t*>(&rdi27) = r9d13 & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r11_28) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_28) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ecx29 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ecx30 == free))) {
                *reinterpret_cast<int32_t*>(&r14_31) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_31) + 4) = reinterpret_cast<int32_t>(free);
                if (ecx32 != 1) {
                    do {
                        __asm__("cdq ");
                        __asm__("xorps xmm1, xmm1");
                        __asm__("cvtsi2sd xmm1, edx");
                        __asm__("divsd xmm1, xmm0");
                        rdi27->f0 = rsi25->f0;
                        rdi33 = reinterpret_cast<struct s116*>(&rdi27->f4);
                        rsi34 = reinterpret_cast<struct s117*>(&rsi25->f4);
                        __asm__("cdq ");
                        __asm__("xorps xmm1, xmm1");
                        __asm__("cvtsi2sd xmm1, edx");
                        __asm__("divsd xmm1, xmm0");
                        rdi33->f0 = rsi34->f0;
                        rdi27 = reinterpret_cast<struct s115*>(&rdi33->f4);
                        rsi25 = reinterpret_cast<struct s114*>(&rsi34->f4);
                        r14_31 = reinterpret_cast<struct s115*>(reinterpret_cast<int64_t>(r14_31) + 2);
                    } while (r14_31 != rdi27);
                }
                if ((*reinterpret_cast<unsigned char*>(&r9d13) & 1) != free) {
                    __asm__("cdq ");
                    __asm__("xorps xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, edx");
                    __asm__("divsd xmm1, xmm0");
                    rdi27->f0 = rsi25->f0;
                    rdi27 = reinterpret_cast<struct s115*>(&rdi27->f4);
                    rsi25 = reinterpret_cast<struct s114*>(&rsi25->f4);
                }
            }
            ++r11_28;
        } while (r11_28 != v35);
    }
    goto v36;
}

int64_t* g401 = reinterpret_cast<int64_t*>(0x3d8d48188b48);

void print_array(int32_t edi, int32_t esi, int64_t rdx) {
    int64_t* rax4;
    int64_t rcx5;
    int32_t* r8_6;
    int64_t r9_7;

    rax4 = g401;
    rcx5 = *rax4;
    fun_41d(0x40b, 22, 1, rcx5, r8_6, r9_7);
}

void submain(int32_t edi, int64_t rsi) {
    fun_790(0xafc80, 8);
}

