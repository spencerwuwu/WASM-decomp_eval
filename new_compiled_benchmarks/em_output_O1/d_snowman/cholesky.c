
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fun_e6(struct s0* rdi, struct s1* rsi) {
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
}

void fputc(int32_t edi, int64_t rsi);

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

void fun_205();

int32_t** g330 = reinterpret_cast<int32_t**>(0x3d8d48308b4c);

void fun_352(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_36d();

void fun_39b();

void fun_3bc();

void fun_3eb(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_404(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx);

void fun_318(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx);

void fun_1f7() {
    int32_t* r15_1;
    int32_t* rax2;
    struct s2* rdi3;
    int32_t* rsi4;
    struct s3* rsi5;
    struct s4* rdi6;
    int32_t* rbx7;
    int32_t* rcx8;
    int32_t* rbx9;
    struct s5* rdi10;
    struct s3* rsi11;
    int32_t* rdx12;
    struct s5* rdi13;
    struct s3* rsi14;
    uint64_t r14_15;
    struct s5* rdi16;
    struct s3* rsi17;
    int64_t rbx18;
    int32_t v19;
    signed char** v20;
    int32_t** rax21;
    int32_t* r14_22;
    int64_t r12_23;
    int32_t* rcx24;
    int32_t* rsi25;
    int64_t r13_26;
    int32_t* rdi27;
    int64_t rbp28;
    int64_t r15_29;
    int64_t rbx30;
    int64_t v31;

    *reinterpret_cast<int32_t*>(&r15_1) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_1) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        if (r15_1 != fputc) {
            *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rax2 != fputc) {
                    rdi3->f0 = *rsi4;
                    rdi3 = reinterpret_cast<struct s2*>(&rdi3->f4);
                    *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi3->f0 = *rsi4;
                        rsi5 = reinterpret_cast<struct s3*>(rsi4 + 1);
                        rdi6 = reinterpret_cast<struct s4*>(rbx7 + reinterpret_cast<int64_t>(rax2) * 0xfa0);
                        __asm__("mulsd xmm1, [rdi+rsi*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi6->f0 = rsi5->f0;
                        rdi3 = reinterpret_cast<struct s2*>(&rdi6->f4);
                        rsi4 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5->f4) + 1);
                    } while (rsi4 != rax2);
                }
                rcx8 = rbx9 + reinterpret_cast<int64_t>(r15_1) * 0xfa0;
                rdi3->f0 = *rsi4;
                rdi10 = reinterpret_cast<struct s5*>(&rdi3->f4);
                rsi11 = reinterpret_cast<struct s3*>(rsi4 + 1);
                __asm__("divsd xmm0, [rdx+rax*8]");
                rdi10->f0 = rsi11->f0;
                rdi3 = reinterpret_cast<struct s2*>(&rdi10->f4);
                rsi4 = &rsi11->f4;
                rax2 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax2) + 1);
            } while (rax2 != r15_1);
            rdi3->f0 = *rsi4;
            rdi3 = reinterpret_cast<struct s2*>(&rdi3->f4);
            ++rsi4;
            *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi3->f0 = *rsi4;
                rdi13 = reinterpret_cast<struct s5*>(&rdi3->f4);
                rsi14 = reinterpret_cast<struct s3*>(rsi4 + 1);
                __asm__("mulsd xmm1, xmm1");
                __asm__("subsd xmm0, xmm1");
                rdi13->f0 = rsi14->f0;
                rdi3 = reinterpret_cast<struct s2*>(&rdi13->f4);
                rsi4 = &rsi14->f4;
                rdx12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx12) + 1);
            } while (rdx12 != r15_1);
        }
        r14_15 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_1) * 0x3e80);
        rdi3->f0 = *rsi4;
        rdi16 = reinterpret_cast<struct s5*>(&rdi3->f4);
        rsi17 = reinterpret_cast<struct s3*>(rsi4 + 1);
        __asm__("ucomisd xmm0, xmm2");
        if (r14_15 + rbx18 < r14_15) {
            fun_205();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rdi16->f0 = rsi17->f0;
        rdi3 = reinterpret_cast<struct s2*>(&rdi16->f4);
        rsi4 = &rsi17->f4;
        r15_1 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_1) + 1);
    } while (r15_1 != 0x7d0);
    if (v19 >= 43 && **v20 == fputc) {
        rax21 = g330;
        r14_22 = *rax21;
        *reinterpret_cast<int32_t*>(&r12_23) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_23) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx24 = r14_22;
        fun_352(0x33a, 22, 1, rcx24);
        rsi25 = reinterpret_cast<int32_t*>(0x359);
        *reinterpret_cast<int32_t*>(&r13_26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_26) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi27 = r14_22;
        fun_36d();
        do {
            rbp28 = r13_26 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_29) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_29) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_29 + rbp28) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi27) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi25 = r14_22;
                    fun_39b();
                }
                *rdi27 = *rsi25;
                rdi27 = r14_22;
                rsi25 = reinterpret_cast<int32_t*>(0x3b5);
                fun_3bc();
                ++r15_29;
            } while (r15_29 != r12_23);
            ++r13_26;
            ++r12_23;
        } while (r13_26 != 0x7d0);
        fun_3eb(r14_22, 0x3da, 0x3e1, rcx24);
        *reinterpret_cast<int32_t*>(&rsi4) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx8 = r14_22;
        fun_404(0x3f2, 22, 1, rcx8);
    }
    fun_318(rbx30, rsi4, rdx12, rcx8);
    goto v31;
}

void fun_318(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_39b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r14_3;
    int64_t r15_4;
    int64_t r12_5;
    int64_t r13_6;
    int64_t rbp7;
    int32_t* r14_8;
    int32_t* r14_9;
    int32_t* rcx10;
    int32_t* r14_11;
    int64_t rbx12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r14_3;
        rsi2 = reinterpret_cast<int32_t*>(0x3b5);
        fun_3bc();
        ++r15_4;
        if (r15_4 == r12_5) {
            ++r13_6;
            ++r12_5;
            if (r13_6 == 0x7d0) 
                break;
            rbp7 = r13_6 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_4 + rbp7) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r14_8;
        fun_39b();
    }
    fun_3eb(r14_9, 0x3da, 0x3e1, rcx10);
    fun_404(0x3f2, 22, 1, r14_11);
    fun_318(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_3bc() {
    int64_t r15_1;
    int64_t r12_2;
    int64_t r13_3;
    int64_t rbp4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* r14_7;
    int32_t* r14_8;
    int32_t* r14_9;
    int32_t* rcx10;
    int32_t* r14_11;
    int64_t rbx12;
    int64_t v13;

    while (1) {
        ++r15_1;
        if (r15_1 == r12_2) {
            ++r13_3;
            ++r12_2;
            if (r13_3 == 0x7d0) 
                break;
            rbp4 = r13_3 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_1 + rbp4) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = r14_7;
            fun_39b();
        }
        *rdi5 = *rsi6;
        rdi5 = r14_8;
        rsi6 = reinterpret_cast<int32_t*>(0x3b5);
        fun_3bc();
    }
    fun_3eb(r14_9, 0x3da, 0x3e1, rcx10);
    fun_404(0x3f2, 22, 1, r14_11);
    fun_318(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_3eb(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r14_5;
    int64_t rbx6;
    int64_t v7;

    fun_404(0x3f2, 22, 1, r14_5);
    fun_318(rbx6, 22, 1, r14_5);
    goto v7;
}

struct s6 {
    int32_t f0;
    int32_t f4;
};

void fun_129(int64_t rdi);

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

void fun_114(int64_t rdi, int64_t rsi) {
    struct s6* r15_3;
    struct s6* rax4;
    int64_t r12_5;
    int64_t rax6;
    int64_t rax7;
    int64_t rcx8;
    int32_t* rsi9;
    int32_t* rbx10;
    int32_t* rdi11;
    struct s7* rdi12;
    struct s3* rsi13;
    int64_t rax14;
    void* rcx15;
    int32_t* rdx16;
    struct s7* rdi17;
    struct s3* rsi18;
    int32_t* rcx19;
    int32_t* rbx20;
    struct s6* rdi21;
    int32_t* r15_22;
    int32_t* rax23;
    struct s3* rsi24;
    struct s8* rdi25;
    int32_t* rbx26;
    int32_t* rbx27;
    struct s9* rdi28;
    struct s3* rsi29;
    struct s9* rdi30;
    struct s3* rsi31;
    uint64_t r14_32;
    struct s9* rdi33;
    struct s3* rsi34;
    int64_t rbx35;
    int32_t v36;
    signed char** v37;
    int32_t** rax38;
    int32_t* r14_39;
    int64_t r12_40;
    int32_t* rcx41;
    int32_t* rsi42;
    int64_t r13_43;
    int32_t* rdi44;
    int64_t rbp45;
    int64_t r15_46;
    int64_t rbx47;
    int64_t v48;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&r12_5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_5) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_129(rax6);
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi9 = rbx10 + rcx8 * 0xfa0 + rax7 * 2;
            *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi11 = *rsi9;
                rdi12 = reinterpret_cast<struct s7*>(rdi11 + 1);
                rsi13 = reinterpret_cast<struct s3*>(rsi9 + 1);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi12->f0 = rsi13->f0;
                rsi9 = &rsi13->f4;
                rdi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi11 == 0x7d0));
            ++rcx8;
        } while (rcx8 != 0x7d0);
        ++rax7;
    } while (rax7 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rcx15 = reinterpret_cast<void*>(r12_5 * 0x3e80);
            rdx16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_3) + reinterpret_cast<int64_t>(rcx15));
            *rdi11 = *rsi9;
            rdi17 = reinterpret_cast<struct s7*>(rdi11 + 1);
            rsi18 = reinterpret_cast<struct s3*>(rsi9 + 1);
            rcx19 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx15) + reinterpret_cast<int64_t>(rbx20));
            rdi17->f0 = rsi18->f0;
            rdi11 = &rdi17->f4;
            rsi9 = &rsi18->f4;
            ++rax14;
        } while (rax14 != 0x7d0);
        ++r12_5;
    } while (r12_5 != 0x7d0);
    rdi21 = r15_3;
    fun_1f7();
    *reinterpret_cast<int32_t*>(&r15_22) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_22) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        if (r15_22 != fputc) {
            *reinterpret_cast<int32_t*>(&rax23) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rax23 != fputc) {
                    rdi21->f0 = *rsi9;
                    rdi21 = reinterpret_cast<struct s6*>(&rdi21->f4);
                    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi21->f0 = *rsi9;
                        rsi24 = reinterpret_cast<struct s3*>(rsi9 + 1);
                        rdi25 = reinterpret_cast<struct s8*>(rbx26 + reinterpret_cast<int64_t>(rax23) * 0xfa0);
                        __asm__("mulsd xmm1, [rdi+rsi*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi25->f0 = rsi24->f0;
                        rdi21 = reinterpret_cast<struct s6*>(&rdi25->f4);
                        rsi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24->f4) + 1);
                    } while (rsi9 != rax23);
                }
                rcx19 = rbx27 + reinterpret_cast<int64_t>(r15_22) * 0xfa0;
                rdi21->f0 = *rsi9;
                rdi28 = reinterpret_cast<struct s9*>(&rdi21->f4);
                rsi29 = reinterpret_cast<struct s3*>(rsi9 + 1);
                __asm__("divsd xmm0, [rdx+rax*8]");
                rdi28->f0 = rsi29->f0;
                rdi21 = reinterpret_cast<struct s6*>(&rdi28->f4);
                rsi9 = &rsi29->f4;
                rax23 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax23) + 1);
            } while (rax23 != r15_22);
            rdi21->f0 = *rsi9;
            rdi21 = reinterpret_cast<struct s6*>(&rdi21->f4);
            ++rsi9;
            *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi21->f0 = *rsi9;
                rdi30 = reinterpret_cast<struct s9*>(&rdi21->f4);
                rsi31 = reinterpret_cast<struct s3*>(rsi9 + 1);
                __asm__("mulsd xmm1, xmm1");
                __asm__("subsd xmm0, xmm1");
                rdi30->f0 = rsi31->f0;
                rdi21 = reinterpret_cast<struct s6*>(&rdi30->f4);
                rsi9 = &rsi31->f4;
                rdx16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx16) + 1);
            } while (rdx16 != r15_22);
        }
        r14_32 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_22) * 0x3e80);
        rdi21->f0 = *rsi9;
        rdi33 = reinterpret_cast<struct s9*>(&rdi21->f4);
        rsi34 = reinterpret_cast<struct s3*>(rsi9 + 1);
        __asm__("ucomisd xmm0, xmm2");
        if (r14_32 + rbx35 < r14_32) {
            fun_205();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rdi33->f0 = rsi34->f0;
        rdi21 = reinterpret_cast<struct s6*>(&rdi33->f4);
        rsi9 = &rsi34->f4;
        r15_22 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_22) + 1);
    } while (r15_22 != 0x7d0);
    if (v36 >= 43 && **v37 == fputc) {
        rax38 = g330;
        r14_39 = *rax38;
        *reinterpret_cast<int32_t*>(&r12_40) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_40) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx41 = r14_39;
        fun_352(0x33a, 22, 1, rcx41);
        rsi42 = reinterpret_cast<int32_t*>(0x359);
        *reinterpret_cast<int32_t*>(&r13_43) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_43) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi44 = r14_39;
        fun_36d();
        do {
            rbp45 = r13_43 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_46) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_46) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_46 + rbp45) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi44) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi42 = r14_39;
                    fun_39b();
                }
                *rdi44 = *rsi42;
                rdi44 = r14_39;
                rsi42 = reinterpret_cast<int32_t*>(0x3b5);
                fun_3bc();
                ++r15_46;
            } while (r15_46 != r12_40);
            ++r13_43;
            ++r12_40;
        } while (r13_43 != 0x7d0);
        fun_3eb(r14_39, 0x3da, 0x3e1, rcx41);
        *reinterpret_cast<int32_t*>(&rsi9) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx16) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx19 = r14_39;
        fun_404(0x3f2, 22, 1, rcx19);
    }
    fun_318(rbx47, rsi9, rdx16, rcx19);
    goto v48;
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

void fun_205() {
    struct s10* rdi1;
    struct s3* rsi2;
    struct s11* rdi3;
    int32_t* rsi4;
    int32_t* r15_5;
    int32_t* rax6;
    struct s3* rsi7;
    struct s12* rdi8;
    int32_t* rbx9;
    int32_t* rcx10;
    int32_t* rbx11;
    struct s10* rdi12;
    struct s3* rsi13;
    int32_t* rdx14;
    struct s10* rdi15;
    struct s3* rsi16;
    uint64_t r14_17;
    int64_t rbx18;
    int32_t v19;
    signed char** v20;
    int32_t** rax21;
    int32_t* r14_22;
    int64_t r12_23;
    int32_t* rcx24;
    int32_t* rsi25;
    int64_t r13_26;
    int32_t* rdi27;
    int64_t rbp28;
    int64_t r15_29;
    int64_t rbx30;
    int64_t v31;

    while (1) {
        __asm__("xorpd xmm2, xmm2");
        while (1) {
            rdi1->f0 = rsi2->f0;
            rdi3 = reinterpret_cast<struct s11*>(&rdi1->f4);
            rsi4 = &rsi2->f4;
            r15_5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_5) + 1);
            if (r15_5 == 0x7d0) 
                goto addr_2fc_6;
            if (r15_5 != fputc) {
                *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    if (rax6 != fputc) {
                        rdi3->f0 = *rsi4;
                        rdi3 = reinterpret_cast<struct s11*>(&rdi3->f4);
                        *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
                        do {
                            rdi3->f0 = *rsi4;
                            rsi7 = reinterpret_cast<struct s3*>(rsi4 + 1);
                            rdi8 = reinterpret_cast<struct s12*>(rbx9 + reinterpret_cast<int64_t>(rax6) * 0xfa0);
                            __asm__("mulsd xmm1, [rdi+rsi*8]");
                            __asm__("subsd xmm0, xmm1");
                            rdi8->f0 = rsi7->f0;
                            rdi3 = reinterpret_cast<struct s11*>(&rdi8->f4);
                            rsi4 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7->f4) + 1);
                        } while (rsi4 != rax6);
                    }
                    rcx10 = rbx11 + reinterpret_cast<int64_t>(r15_5) * 0xfa0;
                    rdi3->f0 = *rsi4;
                    rdi12 = reinterpret_cast<struct s10*>(&rdi3->f4);
                    rsi13 = reinterpret_cast<struct s3*>(rsi4 + 1);
                    __asm__("divsd xmm0, [rdx+rax*8]");
                    rdi12->f0 = rsi13->f0;
                    rdi3 = reinterpret_cast<struct s11*>(&rdi12->f4);
                    rsi4 = &rsi13->f4;
                    rax6 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax6) + 1);
                } while (rax6 != r15_5);
                rdi3->f0 = *rsi4;
                rdi3 = reinterpret_cast<struct s11*>(&rdi3->f4);
                ++rsi4;
                *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi3->f0 = *rsi4;
                    rdi15 = reinterpret_cast<struct s10*>(&rdi3->f4);
                    rsi16 = reinterpret_cast<struct s3*>(rsi4 + 1);
                    __asm__("mulsd xmm1, xmm1");
                    __asm__("subsd xmm0, xmm1");
                    rdi15->f0 = rsi16->f0;
                    rdi3 = reinterpret_cast<struct s11*>(&rdi15->f4);
                    rsi4 = &rsi16->f4;
                    rdx14 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx14) + 1);
                } while (rdx14 != r15_5);
            }
            r14_17 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_5) * 0x3e80);
            rdi3->f0 = *rsi4;
            rdi1 = reinterpret_cast<struct s10*>(&rdi3->f4);
            rsi2 = reinterpret_cast<struct s3*>(rsi4 + 1);
            __asm__("ucomisd xmm0, xmm2");
            if (r14_17 + rbx18 < r14_17) 
                break;
            __asm__("sqrtsd xmm0, xmm0");
        }
        fun_205();
    }
    addr_2fc_6:
    if (v19 >= 43 && **v20 == fputc) {
        rax21 = g330;
        r14_22 = *rax21;
        *reinterpret_cast<int32_t*>(&r12_23) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_23) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx24 = r14_22;
        fun_352(0x33a, 22, 1, rcx24);
        rsi25 = reinterpret_cast<int32_t*>(0x359);
        *reinterpret_cast<int32_t*>(&r13_26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_26) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi27 = r14_22;
        fun_36d();
        do {
            rbp28 = r13_26 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_29) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_29) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_29 + rbp28) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi27) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi25 = r14_22;
                    fun_39b();
                }
                *rdi27 = *rsi25;
                rdi27 = r14_22;
                rsi25 = reinterpret_cast<int32_t*>(0x3b5);
                fun_3bc();
                ++r15_29;
            } while (r15_29 != r12_23);
            ++r13_26;
            ++r12_23;
        } while (r13_26 != 0x7d0);
        fun_3eb(r14_22, 0x3da, 0x3e1, rcx24);
        *reinterpret_cast<int32_t*>(&rsi4) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx14) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx10 = r14_22;
        fun_404(0x3f2, 22, 1, rcx10);
    }
    fun_318(rbx30, rsi4, rdx14, rcx10);
    goto v31;
}

void fun_352(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r14_8;
    int64_t rbp9;
    int64_t r15_10;
    int32_t* r14_11;
    int32_t* r14_12;
    int64_t r12_13;
    int32_t* r14_14;
    int32_t* r14_15;
    int64_t rbx16;
    int64_t v17;

    rsi5 = reinterpret_cast<int32_t*>(0x359);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r14_8;
    fun_36d();
    do {
        rbp9 = r13_6 * 0x7d0;
        *reinterpret_cast<int32_t*>(&r15_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_10 + rbp9) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r14_11;
                fun_39b();
            }
            *rdi7 = *rsi5;
            rdi7 = r14_12;
            rsi5 = reinterpret_cast<int32_t*>(0x3b5);
            fun_3bc();
            ++r15_10;
        } while (r15_10 != r12_13);
        ++r13_6;
        ++r12_13;
    } while (r13_6 != 0x7d0);
    fun_3eb(r14_14, 0x3da, 0x3e1, rcx);
    fun_404(0x3f2, 22, 1, r14_15);
    fun_318(rbx16, 22, 1, r14_15);
    goto v17;
}

void fun_404(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t v6;

    fun_318(rbx5, rsi, rdx, rcx);
    goto v6;
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

void fun_129(int64_t rdi) {
    int64_t rax2;
    int64_t rcx3;
    int32_t* rsi4;
    int32_t* rbx5;
    int32_t* rdi6;
    struct s13* rdi7;
    struct s3* rsi8;
    int64_t rax9;
    void* rcx10;
    int64_t r12_11;
    int32_t* rdx12;
    int32_t* r15_13;
    struct s13* rdi14;
    struct s3* rsi15;
    int32_t* rcx16;
    int32_t* rbx17;
    struct s14* rdi18;
    struct s14* r15_19;
    int32_t* r15_20;
    int32_t* rax21;
    struct s3* rsi22;
    struct s15* rdi23;
    int32_t* rbx24;
    int32_t* rbx25;
    struct s16* rdi26;
    struct s3* rsi27;
    struct s16* rdi28;
    struct s3* rsi29;
    uint64_t r14_30;
    struct s16* rdi31;
    struct s3* rsi32;
    int64_t rbx33;
    int32_t v34;
    signed char** v35;
    int32_t** rax36;
    int32_t* r14_37;
    int64_t r12_38;
    int32_t* rcx39;
    int32_t* rsi40;
    int64_t r13_41;
    int32_t* rdi42;
    int64_t rbp43;
    int64_t r15_44;
    int64_t rbx45;
    int64_t v46;

    *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rcx3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi4 = rbx5 + rcx3 * 0xfa0 + rax2 * 2;
            *reinterpret_cast<int32_t*>(&rdi6) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi6 = *rsi4;
                rdi7 = reinterpret_cast<struct s13*>(rdi6 + 1);
                rsi8 = reinterpret_cast<struct s3*>(rsi4 + 1);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi7->f0 = rsi8->f0;
                rsi4 = &rsi8->f4;
                rdi6 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi6 == 0x7d0));
            ++rcx3;
        } while (rcx3 != 0x7d0);
        ++rax2;
    } while (rax2 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rcx10 = reinterpret_cast<void*>(r12_11 * 0x3e80);
            rdx12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_13) + reinterpret_cast<int64_t>(rcx10));
            *rdi6 = *rsi4;
            rdi14 = reinterpret_cast<struct s13*>(rdi6 + 1);
            rsi15 = reinterpret_cast<struct s3*>(rsi4 + 1);
            rcx16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx10) + reinterpret_cast<int64_t>(rbx17));
            rdi14->f0 = rsi15->f0;
            rdi6 = &rdi14->f4;
            rsi4 = &rsi15->f4;
            ++rax9;
        } while (rax9 != 0x7d0);
        ++r12_11;
    } while (r12_11 != 0x7d0);
    rdi18 = r15_19;
    fun_1f7();
    *reinterpret_cast<int32_t*>(&r15_20) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_20) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        if (r15_20 != fputc) {
            *reinterpret_cast<int32_t*>(&rax21) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rax21 != fputc) {
                    rdi18->f0 = *rsi4;
                    rdi18 = reinterpret_cast<struct s14*>(&rdi18->f4);
                    *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi18->f0 = *rsi4;
                        rsi22 = reinterpret_cast<struct s3*>(rsi4 + 1);
                        rdi23 = reinterpret_cast<struct s15*>(rbx24 + reinterpret_cast<int64_t>(rax21) * 0xfa0);
                        __asm__("mulsd xmm1, [rdi+rsi*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi23->f0 = rsi22->f0;
                        rdi18 = reinterpret_cast<struct s14*>(&rdi23->f4);
                        rsi4 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22->f4) + 1);
                    } while (rsi4 != rax21);
                }
                rcx16 = rbx25 + reinterpret_cast<int64_t>(r15_20) * 0xfa0;
                rdi18->f0 = *rsi4;
                rdi26 = reinterpret_cast<struct s16*>(&rdi18->f4);
                rsi27 = reinterpret_cast<struct s3*>(rsi4 + 1);
                __asm__("divsd xmm0, [rdx+rax*8]");
                rdi26->f0 = rsi27->f0;
                rdi18 = reinterpret_cast<struct s14*>(&rdi26->f4);
                rsi4 = &rsi27->f4;
                rax21 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax21) + 1);
            } while (rax21 != r15_20);
            rdi18->f0 = *rsi4;
            rdi18 = reinterpret_cast<struct s14*>(&rdi18->f4);
            ++rsi4;
            *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi18->f0 = *rsi4;
                rdi28 = reinterpret_cast<struct s16*>(&rdi18->f4);
                rsi29 = reinterpret_cast<struct s3*>(rsi4 + 1);
                __asm__("mulsd xmm1, xmm1");
                __asm__("subsd xmm0, xmm1");
                rdi28->f0 = rsi29->f0;
                rdi18 = reinterpret_cast<struct s14*>(&rdi28->f4);
                rsi4 = &rsi29->f4;
                rdx12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx12) + 1);
            } while (rdx12 != r15_20);
        }
        r14_30 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_20) * 0x3e80);
        rdi18->f0 = *rsi4;
        rdi31 = reinterpret_cast<struct s16*>(&rdi18->f4);
        rsi32 = reinterpret_cast<struct s3*>(rsi4 + 1);
        __asm__("ucomisd xmm0, xmm2");
        if (r14_30 + rbx33 < r14_30) {
            fun_205();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rdi31->f0 = rsi32->f0;
        rdi18 = reinterpret_cast<struct s14*>(&rdi31->f4);
        rsi4 = &rsi32->f4;
        r15_20 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_20) + 1);
    } while (r15_20 != 0x7d0);
    if (v34 >= 43 && **v35 == fputc) {
        rax36 = g330;
        r14_37 = *rax36;
        *reinterpret_cast<int32_t*>(&r12_38) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_38) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx39 = r14_37;
        fun_352(0x33a, 22, 1, rcx39);
        rsi40 = reinterpret_cast<int32_t*>(0x359);
        *reinterpret_cast<int32_t*>(&r13_41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_41) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi42 = r14_37;
        fun_36d();
        do {
            rbp43 = r13_41 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_44) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_44 + rbp43) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi42) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi40 = r14_37;
                    fun_39b();
                }
                *rdi42 = *rsi40;
                rdi42 = r14_37;
                rsi40 = reinterpret_cast<int32_t*>(0x3b5);
                fun_3bc();
                ++r15_44;
            } while (r15_44 != r12_38);
            ++r13_41;
            ++r12_38;
        } while (r13_41 != 0x7d0);
        fun_3eb(r14_37, 0x3da, 0x3e1, rcx39);
        *reinterpret_cast<int32_t*>(&rsi4) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx16 = r14_37;
        fun_404(0x3f2, 22, 1, rcx16);
    }
    fun_318(rbx45, rsi4, rdx12, rcx16);
    goto v46;
}

void fun_36d() {
    int64_t rbp1;
    int64_t r13_2;
    int64_t r15_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r14_6;
    int32_t* r14_7;
    int64_t r12_8;
    int32_t* r14_9;
    int32_t* rcx10;
    int32_t* r14_11;
    int64_t rbx12;
    int64_t v13;

    do {
        rbp1 = r13_2 * 0x7d0;
        *reinterpret_cast<int32_t*>(&r15_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_3 + rbp1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r14_6;
                fun_39b();
            }
            *rdi4 = *rsi5;
            rdi4 = r14_7;
            rsi5 = reinterpret_cast<int32_t*>(0x3b5);
            fun_3bc();
            ++r15_3;
        } while (r15_3 != r12_8);
        ++r13_2;
        ++r12_8;
    } while (r13_2 != 0x7d0);
    fun_3eb(r14_9, 0x3da, 0x3e1, rcx10);
    fun_404(0x3f2, 22, 1, r14_11);
    fun_318(rbx12, 22, 1, r14_11);
    goto v13;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_7c(int64_t rdi) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;

    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
}

void fun_92() {
    int64_t rax1;
    int32_t* rdi2;
    int32_t* rsi3;
    int64_t r15_4;
    uint64_t r14_5;
    int64_t rbx6;

    *reinterpret_cast<int32_t*>(&rax1) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, ecx");
        __asm__("divsd xmm0, xmm1");
        __asm__("addsd xmm0, xmm2");
        *rdi2 = *rsi3;
        ++rdi2;
        ++rsi3;
        ++rax1;
    } while (rax1 != r15_4);
    if (r14_5 > 0x7ce) 
        goto 96;
    fun_e6(reinterpret_cast<int64_t>(rdi2) + rbx6, fputc);
}

void fun_105() {
    fun_114(0x3d0900, 8);
}

