
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

int32_t** g33b = reinterpret_cast<int32_t**>(0x3d8d48308b4c);

void fun_357(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_372();

void fun_3ab();

void fun_3c7();

void fun_3f7(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_410(int64_t rdi, struct s8* rsi, int32_t* rdx, int32_t* rcx);

void fun_323(int64_t rdi, struct s8* rsi, int32_t* rdx, int32_t* rcx);

void fun_1f7() {
    int32_t* rax1;
    int32_t* rcx2;
    struct s2* rsi3;
    int32_t* rbx4;
    int32_t* rdi5;
    struct s3* rsi6;
    struct s4* rdi7;
    struct s5* rsi8;
    int32_t* rdx9;
    int32_t* rbx10;
    struct s6* rsi11;
    int32_t* rbx12;
    struct s4* rdi13;
    struct s7* rsi14;
    struct s8* rsi15;
    int32_t* rcx16;
    int32_t* rbx17;
    struct s9* rsi18;
    struct s4* rdi19;
    struct s10* rsi20;
    int32_t v21;
    signed char** v22;
    int32_t** rax23;
    int32_t* r14_24;
    int32_t* rcx25;
    int32_t* rsi26;
    int64_t r12_27;
    int32_t* rdi28;
    int64_t r13_29;
    int64_t rbp30;
    int64_t rbx31;
    int64_t v32;

    *reinterpret_cast<int32_t*>(&rax1) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rax1 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx2) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rcx2 != fputc) {
                    rsi3 = reinterpret_cast<struct s2*>(rbx4 + reinterpret_cast<int64_t>(rax1) * 0xfa0 + reinterpret_cast<int64_t>(rcx2) * 2);
                    *rdi5 = rsi3->f0;
                    rsi6 = reinterpret_cast<struct s3*>(&rsi3->f4);
                    *reinterpret_cast<int32_t*>(&rdi5) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        *rdi5 = rsi6->f0;
                        rdi7 = reinterpret_cast<struct s4*>(rdi5 + 1);
                        rsi8 = reinterpret_cast<struct s5*>(&rsi6->f4);
                        __asm__("mulsd xmm1, [r8+rcx*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi7->f0 = rsi8->f0;
                        rsi6 = reinterpret_cast<struct s3*>(&rsi8->f4);
                        rdi5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7->f4) + 1);
                    } while (rdi5 != rcx2);
                }
                rdx9 = rbx10 + reinterpret_cast<int64_t>(rcx2) * 0xfa0;
                rsi11 = reinterpret_cast<struct s6*>(rbx12 + reinterpret_cast<int64_t>(rax1) * 0xfa0);
                *rdi5 = rsi11->f0;
                rdi13 = reinterpret_cast<struct s4*>(rdi5 + 1);
                rsi14 = reinterpret_cast<struct s7*>(&rsi11->f4);
                __asm__("divsd xmm0, [rdx+rcx*8]");
                rdi13->f0 = rsi14->f0;
                rdi5 = &rdi13->f4;
                rsi15 = reinterpret_cast<struct s8*>(&rsi14->f4);
                rcx2 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx2) + 1);
            } while (rcx2 != rax1);
        }
        rcx16 = rax1;
        do {
            if (rax1 != fputc) {
                rdx9 = rbx17 + reinterpret_cast<int64_t>(rax1) * 0xfa0;
                rsi18 = reinterpret_cast<struct s9*>(rdx9 + reinterpret_cast<int64_t>(rcx16) * 2);
                *rdi5 = rsi18->f0;
                rsi15 = reinterpret_cast<struct s8*>(&rsi18->f4);
                *reinterpret_cast<int32_t*>(&rdi5) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi5 = rsi15->f0;
                    rdi19 = reinterpret_cast<struct s4*>(rdi5 + 1);
                    rsi20 = reinterpret_cast<struct s10*>(&rsi15->f4);
                    __asm__("mulsd xmm1, [r8+rcx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi19->f0 = rsi20->f0;
                    rsi15 = reinterpret_cast<struct s8*>(&rsi20->f4);
                    rdi5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19->f4) + 1);
                } while (rdi5 != rax1);
            }
            rcx16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx16) + 1);
        } while (rcx16 != 0x7d0);
        rax1 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax1) + 1);
    } while (rax1 != 0x7d0);
    if (v21 >= 43 && **v22 == fputc) {
        rax23 = g33b;
        r14_24 = *rax23;
        rcx25 = r14_24;
        fun_357(0x345, 22, 1, rcx25);
        rsi26 = reinterpret_cast<int32_t*>(0x35e);
        *reinterpret_cast<int32_t*>(&r12_27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_27) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi28 = r14_24;
        fun_372();
        do {
            r13_29 = r12_27 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp30) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp30 + r13_29) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi28) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi26 = r14_24;
                    fun_3ab();
                }
                *rdi28 = *rsi26;
                rdi28 = r14_24;
                rsi26 = reinterpret_cast<int32_t*>(0x379);
                fun_3c7();
                ++rbp30;
            } while (rbp30 != 0x7d0);
            ++r12_27;
        } while (r12_27 != 0x7d0);
        fun_3f7(r14_24, 0x3e6, 0x3ed, rcx25);
        *reinterpret_cast<int32_t*>(&rsi15) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx16 = r14_24;
        fun_410(0x3fe, 22, 1, rcx16);
    }
    fun_323(rbx31, rsi15, rdx9, rcx16);
    goto v32;
}

void fun_323(int64_t rdi, struct s8* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_3ab() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r14_3;
    int32_t* r15_4;
    int64_t rbp5;
    int64_t r12_6;
    int64_t r13_7;
    int32_t* r14_8;
    int32_t* r14_9;
    int32_t* rcx10;
    int32_t* r14_11;
    int64_t rbx12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r14_3;
        rsi2 = r15_4;
        fun_3c7();
        ++rbp5;
        if (rbp5 == 0x7d0) {
            ++r12_6;
            if (r12_6 == 0x7d0) 
                break;
            r13_7 = r12_6 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp5 + r13_7) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r14_8;
        fun_3ab();
    }
    fun_3f7(r14_9, 0x3e6, 0x3ed, rcx10);
    fun_410(0x3fe, 22, 1, r14_11);
    fun_323(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_3c7() {
    int64_t rbp1;
    int64_t r12_2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r14_6;
    int32_t* r14_7;
    int32_t* r15_8;
    int32_t* r14_9;
    int32_t* rcx10;
    int32_t* r14_11;
    int64_t rbx12;
    int64_t v13;

    while (1) {
        ++rbp1;
        if (rbp1 == 0x7d0) {
            ++r12_2;
            if (r12_2 == 0x7d0) 
                break;
            r13_3 = r12_2 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r14_6;
            fun_3ab();
        }
        *rdi4 = *rsi5;
        rdi4 = r14_7;
        rsi5 = r15_8;
        fun_3c7();
    }
    fun_3f7(r14_9, 0x3e6, 0x3ed, rcx10);
    fun_410(0x3fe, 22, 1, r14_11);
    fun_323(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_3f7(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r14_5;
    int64_t rbx6;
    int64_t v7;

    fun_410(0x3fe, 22, 1, r14_5);
    fun_323(rbx6, 22, 1, r14_5);
    goto v7;
}

void fun_129(int64_t rdi);

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

void fun_114(int64_t rdi, int64_t rsi) {
    int32_t* r15_3;
    int32_t* rax4;
    int64_t r12_5;
    int64_t rax6;
    int64_t rax7;
    int64_t rcx8;
    struct s8* rsi9;
    int32_t* rbx10;
    int32_t* rdi11;
    struct s11* rdi12;
    struct s10* rsi13;
    int64_t rax14;
    int32_t* rdx15;
    struct s11* rdi16;
    struct s10* rsi17;
    int32_t* rdi18;
    int32_t* rax19;
    int32_t* rcx20;
    struct s12* rsi21;
    int32_t* rbx22;
    struct s13* rsi23;
    struct s4* rdi24;
    struct s14* rsi25;
    int32_t* rbx26;
    struct s15* rsi27;
    int32_t* rbx28;
    struct s4* rdi29;
    struct s16* rsi30;
    int32_t* rcx31;
    int32_t* rbx32;
    struct s17* rsi33;
    struct s4* rdi34;
    struct s10* rsi35;
    int32_t v36;
    signed char** v37;
    int32_t** rax38;
    int32_t* r14_39;
    int32_t* rcx40;
    int32_t* rsi41;
    int64_t r12_42;
    int32_t* rdi43;
    int64_t r13_44;
    int64_t rbp45;
    int64_t rbx46;
    int64_t v47;

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
            rsi9 = reinterpret_cast<struct s8*>(rbx10 + rcx8 * 0xfa0 + rax7 * 2);
            *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi11 = rsi9->f0;
                rdi12 = reinterpret_cast<struct s11*>(rdi11 + 1);
                rsi13 = reinterpret_cast<struct s10*>(&rsi9->f4);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi12->f0 = rsi13->f0;
                rsi9 = reinterpret_cast<struct s8*>(&rsi13->f4);
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
            rdx15 = r15_3 + r12_5 * 0xfa0;
            *rdi11 = rsi9->f0;
            rdi16 = reinterpret_cast<struct s11*>(rdi11 + 1);
            rsi17 = reinterpret_cast<struct s10*>(&rsi9->f4);
            rdi16->f0 = rsi17->f0;
            rdi11 = &rdi16->f4;
            rsi9 = reinterpret_cast<struct s8*>(&rsi17->f4);
            ++rax14;
        } while (rax14 != 0x7d0);
        ++r12_5;
    } while (r12_5 != 0x7d0);
    rdi18 = r15_3;
    fun_1f7();
    *reinterpret_cast<int32_t*>(&rax19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rax19 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx20) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rcx20 != fputc) {
                    rsi21 = reinterpret_cast<struct s12*>(rbx22 + reinterpret_cast<int64_t>(rax19) * 0xfa0 + reinterpret_cast<int64_t>(rcx20) * 2);
                    *rdi18 = rsi21->f0;
                    rsi23 = reinterpret_cast<struct s13*>(&rsi21->f4);
                    *reinterpret_cast<int32_t*>(&rdi18) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        *rdi18 = rsi23->f0;
                        rdi24 = reinterpret_cast<struct s4*>(rdi18 + 1);
                        rsi25 = reinterpret_cast<struct s14*>(&rsi23->f4);
                        __asm__("mulsd xmm1, [r8+rcx*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi24->f0 = rsi25->f0;
                        rsi23 = reinterpret_cast<struct s13*>(&rsi25->f4);
                        rdi18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24->f4) + 1);
                    } while (rdi18 != rcx20);
                }
                rdx15 = rbx26 + reinterpret_cast<int64_t>(rcx20) * 0xfa0;
                rsi27 = reinterpret_cast<struct s15*>(rbx28 + reinterpret_cast<int64_t>(rax19) * 0xfa0);
                *rdi18 = rsi27->f0;
                rdi29 = reinterpret_cast<struct s4*>(rdi18 + 1);
                rsi30 = reinterpret_cast<struct s16*>(&rsi27->f4);
                __asm__("divsd xmm0, [rdx+rcx*8]");
                rdi29->f0 = rsi30->f0;
                rdi18 = &rdi29->f4;
                rsi9 = reinterpret_cast<struct s8*>(&rsi30->f4);
                rcx20 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx20) + 1);
            } while (rcx20 != rax19);
        }
        rcx31 = rax19;
        do {
            if (rax19 != fputc) {
                rdx15 = rbx32 + reinterpret_cast<int64_t>(rax19) * 0xfa0;
                rsi33 = reinterpret_cast<struct s17*>(rdx15 + reinterpret_cast<int64_t>(rcx31) * 2);
                *rdi18 = rsi33->f0;
                rsi9 = reinterpret_cast<struct s8*>(&rsi33->f4);
                *reinterpret_cast<int32_t*>(&rdi18) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi18 = rsi9->f0;
                    rdi34 = reinterpret_cast<struct s4*>(rdi18 + 1);
                    rsi35 = reinterpret_cast<struct s10*>(&rsi9->f4);
                    __asm__("mulsd xmm1, [r8+rcx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi34->f0 = rsi35->f0;
                    rsi9 = reinterpret_cast<struct s8*>(&rsi35->f4);
                    rdi18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34->f4) + 1);
                } while (rdi18 != rax19);
            }
            rcx31 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx31) + 1);
        } while (rcx31 != 0x7d0);
        rax19 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax19) + 1);
    } while (rax19 != 0x7d0);
    if (v36 >= 43 && **v37 == fputc) {
        rax38 = g33b;
        r14_39 = *rax38;
        rcx40 = r14_39;
        fun_357(0x345, 22, 1, rcx40);
        rsi41 = reinterpret_cast<int32_t*>(0x35e);
        *reinterpret_cast<int32_t*>(&r12_42) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_42) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi43 = r14_39;
        fun_372();
        do {
            r13_44 = r12_42 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp45) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp45) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp45 + r13_44) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi43) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi41 = r14_39;
                    fun_3ab();
                }
                *rdi43 = *rsi41;
                rdi43 = r14_39;
                rsi41 = reinterpret_cast<int32_t*>(0x379);
                fun_3c7();
                ++rbp45;
            } while (rbp45 != 0x7d0);
            ++r12_42;
        } while (r12_42 != 0x7d0);
        fun_3f7(r14_39, 0x3e6, 0x3ed, rcx40);
        *reinterpret_cast<int32_t*>(&rsi9) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx15) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx31 = r14_39;
        fun_410(0x3fe, 22, 1, rcx31);
    }
    fun_323(rbx46, rsi9, rdx15, rcx31);
    goto v47;
}

void fun_357(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r12_6;
    int32_t* rdi7;
    int32_t* r14_8;
    int64_t r13_9;
    int64_t rbp10;
    int32_t* r14_11;
    int32_t* r14_12;
    int32_t* r14_13;
    int32_t* r14_14;
    int64_t rbx15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x35e);
    *reinterpret_cast<int32_t*>(&r12_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r14_8;
    fun_372();
    do {
        r13_9 = r12_6 * 0x7d0;
        *reinterpret_cast<int32_t*>(&rbp10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp10 + r13_9) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r14_11;
                fun_3ab();
            }
            *rdi7 = *rsi5;
            rdi7 = r14_12;
            rsi5 = reinterpret_cast<int32_t*>(0x379);
            fun_3c7();
            ++rbp10;
        } while (rbp10 != 0x7d0);
        ++r12_6;
    } while (r12_6 != 0x7d0);
    fun_3f7(r14_13, 0x3e6, 0x3ed, rcx);
    fun_410(0x3fe, 22, 1, r14_14);
    fun_323(rbx15, 22, 1, r14_14);
    goto v16;
}

void fun_410(int64_t rdi, struct s8* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t v6;

    fun_323(rbx5, rsi, rdx, rcx);
    goto v6;
}

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

void fun_129(int64_t rdi) {
    int64_t rax2;
    int64_t rcx3;
    struct s8* rsi4;
    int32_t* rbx5;
    int32_t* rdi6;
    struct s18* rdi7;
    struct s10* rsi8;
    int64_t rax9;
    int32_t* rdx10;
    int32_t* r15_11;
    int64_t r12_12;
    struct s18* rdi13;
    struct s10* rsi14;
    int32_t* rdi15;
    int32_t* r15_16;
    int32_t* rax17;
    int32_t* rcx18;
    struct s19* rsi19;
    int32_t* rbx20;
    struct s20* rsi21;
    struct s4* rdi22;
    struct s21* rsi23;
    int32_t* rbx24;
    struct s22* rsi25;
    int32_t* rbx26;
    struct s4* rdi27;
    struct s23* rsi28;
    int32_t* rcx29;
    int32_t* rbx30;
    struct s24* rsi31;
    struct s4* rdi32;
    struct s10* rsi33;
    int32_t v34;
    signed char** v35;
    int32_t** rax36;
    int32_t* r14_37;
    int32_t* rcx38;
    int32_t* rsi39;
    int64_t r12_40;
    int32_t* rdi41;
    int64_t r13_42;
    int64_t rbp43;
    int64_t rbx44;
    int64_t v45;

    *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rcx3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi4 = reinterpret_cast<struct s8*>(rbx5 + rcx3 * 0xfa0 + rax2 * 2);
            *reinterpret_cast<int32_t*>(&rdi6) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi6 = rsi4->f0;
                rdi7 = reinterpret_cast<struct s18*>(rdi6 + 1);
                rsi8 = reinterpret_cast<struct s10*>(&rsi4->f4);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi7->f0 = rsi8->f0;
                rsi4 = reinterpret_cast<struct s8*>(&rsi8->f4);
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
            rdx10 = r15_11 + r12_12 * 0xfa0;
            *rdi6 = rsi4->f0;
            rdi13 = reinterpret_cast<struct s18*>(rdi6 + 1);
            rsi14 = reinterpret_cast<struct s10*>(&rsi4->f4);
            rdi13->f0 = rsi14->f0;
            rdi6 = &rdi13->f4;
            rsi4 = reinterpret_cast<struct s8*>(&rsi14->f4);
            ++rax9;
        } while (rax9 != 0x7d0);
        ++r12_12;
    } while (r12_12 != 0x7d0);
    rdi15 = r15_16;
    fun_1f7();
    *reinterpret_cast<int32_t*>(&rax17) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rax17 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rcx18 != fputc) {
                    rsi19 = reinterpret_cast<struct s19*>(rbx20 + reinterpret_cast<int64_t>(rax17) * 0xfa0 + reinterpret_cast<int64_t>(rcx18) * 2);
                    *rdi15 = rsi19->f0;
                    rsi21 = reinterpret_cast<struct s20*>(&rsi19->f4);
                    *reinterpret_cast<int32_t*>(&rdi15) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        *rdi15 = rsi21->f0;
                        rdi22 = reinterpret_cast<struct s4*>(rdi15 + 1);
                        rsi23 = reinterpret_cast<struct s21*>(&rsi21->f4);
                        __asm__("mulsd xmm1, [r8+rcx*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi22->f0 = rsi23->f0;
                        rsi21 = reinterpret_cast<struct s20*>(&rsi23->f4);
                        rdi15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22->f4) + 1);
                    } while (rdi15 != rcx18);
                }
                rdx10 = rbx24 + reinterpret_cast<int64_t>(rcx18) * 0xfa0;
                rsi25 = reinterpret_cast<struct s22*>(rbx26 + reinterpret_cast<int64_t>(rax17) * 0xfa0);
                *rdi15 = rsi25->f0;
                rdi27 = reinterpret_cast<struct s4*>(rdi15 + 1);
                rsi28 = reinterpret_cast<struct s23*>(&rsi25->f4);
                __asm__("divsd xmm0, [rdx+rcx*8]");
                rdi27->f0 = rsi28->f0;
                rdi15 = &rdi27->f4;
                rsi4 = reinterpret_cast<struct s8*>(&rsi28->f4);
                rcx18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx18) + 1);
            } while (rcx18 != rax17);
        }
        rcx29 = rax17;
        do {
            if (rax17 != fputc) {
                rdx10 = rbx30 + reinterpret_cast<int64_t>(rax17) * 0xfa0;
                rsi31 = reinterpret_cast<struct s24*>(rdx10 + reinterpret_cast<int64_t>(rcx29) * 2);
                *rdi15 = rsi31->f0;
                rsi4 = reinterpret_cast<struct s8*>(&rsi31->f4);
                *reinterpret_cast<int32_t*>(&rdi15) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi15 = rsi4->f0;
                    rdi32 = reinterpret_cast<struct s4*>(rdi15 + 1);
                    rsi33 = reinterpret_cast<struct s10*>(&rsi4->f4);
                    __asm__("mulsd xmm1, [r8+rcx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi32->f0 = rsi33->f0;
                    rsi4 = reinterpret_cast<struct s8*>(&rsi33->f4);
                    rdi15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32->f4) + 1);
                } while (rdi15 != rax17);
            }
            rcx29 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx29) + 1);
        } while (rcx29 != 0x7d0);
        rax17 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax17) + 1);
    } while (rax17 != 0x7d0);
    if (v34 >= 43 && **v35 == fputc) {
        rax36 = g33b;
        r14_37 = *rax36;
        rcx38 = r14_37;
        fun_357(0x345, 22, 1, rcx38);
        rsi39 = reinterpret_cast<int32_t*>(0x35e);
        *reinterpret_cast<int32_t*>(&r12_40) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_40) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi41 = r14_37;
        fun_372();
        do {
            r13_42 = r12_40 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp43) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp43) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp43 + r13_42) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi41) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi39 = r14_37;
                    fun_3ab();
                }
                *rdi41 = *rsi39;
                rdi41 = r14_37;
                rsi39 = reinterpret_cast<int32_t*>(0x379);
                fun_3c7();
                ++rbp43;
            } while (rbp43 != 0x7d0);
            ++r12_40;
        } while (r12_40 != 0x7d0);
        fun_3f7(r14_37, 0x3e6, 0x3ed, rcx38);
        *reinterpret_cast<int32_t*>(&rsi4) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx10) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx29 = r14_37;
        fun_410(0x3fe, 22, 1, rcx29);
    }
    fun_323(rbx44, rsi4, rdx10, rcx29);
    goto v45;
}

void fun_372() {
    int64_t r13_1;
    int64_t r12_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r14_6;
    int32_t* r14_7;
    int32_t* r14_8;
    int32_t* rcx9;
    int32_t* r14_10;
    int64_t rbx11;
    int64_t v12;

    do {
        r13_1 = r12_2 * 0x7d0;
        *reinterpret_cast<int32_t*>(&rbp3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp3 + r13_1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r14_6;
                fun_3ab();
            }
            *rdi4 = *rsi5;
            rdi4 = r14_7;
            rsi5 = reinterpret_cast<int32_t*>(0x379);
            fun_3c7();
            ++rbp3;
        } while (rbp3 != 0x7d0);
        ++r12_2;
    } while (r12_2 != 0x7d0);
    fun_3f7(r14_8, 0x3e6, 0x3ed, rcx9);
    fun_410(0x3fe, 22, 1, r14_10);
    fun_323(rbx11, 22, 1, r14_10);
    goto v12;
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
}

void fun_ac(int32_t* rdi, int32_t* rsi, int64_t rdx) {
    int64_t rax4;
    int64_t r15_5;
    uint64_t r14_6;
    int64_t rbx7;

    __asm__("divps xmm0, xmm1");
    __asm__("addsd xmm0, xmm2");
    *rdi = *rsi;
    if (rax4 + 1 != r15_5) 
        goto 0xa0;
    if (r14_6 > 0x7ce) 
        goto 96;
    fun_e6(reinterpret_cast<int64_t>(rdi + 1) + rbx7, fputc);
}

void fun_105() {
    fun_114(0x3d0900, 8);
}

