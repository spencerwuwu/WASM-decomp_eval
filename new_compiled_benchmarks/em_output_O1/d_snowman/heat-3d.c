
void fun_30a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_3c8();

void fputc(int32_t edi, int64_t rsi);

void fun_3ff(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_418(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_39d() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r14_3;
    int64_t r15_4;
    int64_t rbp5;
    int64_t r12_6;
    int64_t v7;
    int64_t r13_8;
    int32_t* r14_9;
    int64_t r14_10;
    int64_t r14_11;
    int64_t rbx12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r14_3;
        rsi2 = reinterpret_cast<int32_t*>(0x3c1);
        fun_3c8();
        ++r15_4;
        if (r15_4 == 0x78) {
            ++rbp5;
            if (rbp5 == 0x78) {
                ++r12_6;
                if (r12_6 == 0x78) 
                    break;
                v7 = r12_6 * 0x3840;
                *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            r13_8 = rbp5 * 0x78 + v7;
            *reinterpret_cast<int32_t*>(&r15_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_4 + r13_8) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r14_9;
        fun_39d();
    }
    fun_3ff(r14_10, 0x3ee, 0x3f5);
    fun_418(0x406, 22, 1, r14_11);
    fun_30a(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_3c8() {
    int64_t r15_1;
    int64_t rbp2;
    int64_t r12_3;
    int64_t v4;
    int64_t r13_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t* r14_8;
    int32_t* r14_9;
    int64_t r14_10;
    int64_t r14_11;
    int64_t rbx12;
    int64_t v13;

    while (1) {
        ++r15_1;
        if (r15_1 == 0x78) {
            ++rbp2;
            if (rbp2 == 0x78) {
                ++r12_3;
                if (r12_3 == 0x78) 
                    break;
                v4 = r12_3 * 0x3840;
                *reinterpret_cast<int32_t*>(&rbp2) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp2) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            r13_5 = rbp2 * 0x78 + v4;
            *reinterpret_cast<int32_t*>(&r15_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_1 + r13_5) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi7 = r14_8;
            fun_39d();
        }
        *rdi6 = *rsi7;
        rdi6 = r14_9;
        rsi7 = reinterpret_cast<int32_t*>(0x3c1);
        fun_3c8();
    }
    fun_3ff(r14_10, 0x3ee, 0x3f5);
    fun_418(0x406, 22, 1, r14_11);
    fun_30a(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_3ff(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r14_4;
    int64_t rbx5;
    int64_t v6;

    fun_418(0x406, 22, 1, r14_4);
    fun_30a(rbx5, 22, 1, r14_4);
    goto v6;
}

void fun_359();

void fun_33e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t r12_6;
    int32_t* rdi7;
    int32_t* r14_8;
    int64_t v9;
    int64_t rbp10;
    int64_t r13_11;
    int64_t r15_12;
    int32_t* r14_13;
    int32_t* r14_14;
    int64_t r14_15;
    int64_t r14_16;
    int64_t rbx17;
    int64_t v18;

    rsi5 = reinterpret_cast<int32_t*>(0x345);
    *reinterpret_cast<int32_t*>(&r12_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r14_8;
    fun_359();
    do {
        v9 = r12_6 * 0x3840;
        *reinterpret_cast<int32_t*>(&rbp10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r13_11 = rbp10 * 0x78 + v9;
            *reinterpret_cast<int32_t*>(&r15_12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_12 + r13_11) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi7) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi5 = r14_13;
                    fun_39d();
                }
                *rdi7 = *rsi5;
                rdi7 = r14_14;
                rsi5 = reinterpret_cast<int32_t*>(0x3c1);
                fun_3c8();
                ++r15_12;
            } while (r15_12 != 0x78);
            ++rbp10;
        } while (rbp10 != 0x78);
        ++r12_6;
    } while (r12_6 != 0x78);
    fun_3ff(r14_15, 0x3ee, 0x3f5);
    fun_418(0x406, 22, 1, r14_16);
    fun_30a(rbx17, 22, 1, r14_16);
    goto v18;
}

void fun_418(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t v6;

    fun_30a(rbx5, rsi, rdx, rcx);
    goto v6;
}

void fun_359() {
    int64_t v1;
    int64_t r12_2;
    int64_t rbp3;
    int64_t r13_4;
    int64_t r15_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t* r14_8;
    int32_t* r14_9;
    int64_t r14_10;
    int64_t r14_11;
    int64_t rbx12;
    int64_t v13;

    do {
        v1 = r12_2 * 0x3840;
        *reinterpret_cast<int32_t*>(&rbp3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r13_4 = rbp3 * 0x78 + v1;
            *reinterpret_cast<int32_t*>(&r15_5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_5) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_5 + r13_4) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi6) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi7 = r14_8;
                    fun_39d();
                }
                *rdi6 = *rsi7;
                rdi6 = r14_9;
                rsi7 = reinterpret_cast<int32_t*>(0x3c1);
                fun_3c8();
                ++r15_5;
            } while (r15_5 != 0x78);
            ++rbp3;
        } while (rbp3 != 0x78);
        ++r12_2;
    } while (r12_2 != 0x78);
    fun_3ff(r14_10, 0x3ee, 0x3f5);
    fun_418(0x406, 22, 1, r14_11);
    fun_30a(rbx12, 22, 1, r14_11);
    goto v13;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_74(int32_t* rdi, int32_t* rsi) {
    __asm__("xorps xmm2, xmm2");
    __asm__("cvtsi2sd xmm2, r9d");
    __asm__("mulsd xmm2, xmm0");
    __asm__("divsd xmm2, xmm1");
    *rdi = *rsi;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    signed char[1] pad1;
    int32_t f1;
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

int64_t* g322 = reinterpret_cast<int64_t*>(0x3d8d48308b4c);

void fun_ac(struct s0* rdi, struct s1* rsi) {
    int64_t r8_3;
    struct s2* rsi4;
    int64_t rcx5;
    int32_t ecx6;
    struct s3* rsi7;
    struct s3* rdi8;
    int64_t r8_9;
    int64_t r9_10;
    int64_t r11_11;
    struct s4* rdi12;
    struct s4* rsi13;
    struct s5* rdi14;
    struct s5* rsi15;
    struct s6* rdi16;
    struct s6* rsi17;
    int64_t r14_18;
    struct s7* rdx19;
    struct s7* rsi20;
    struct s8* rdi21;
    int64_t r8_22;
    int64_t r9_23;
    int64_t r11_24;
    struct s9* rdi25;
    struct s10* rsi26;
    struct s11* rdi27;
    struct s12* rsi28;
    struct s13* rdi29;
    struct s14* rsi30;
    int64_t r14_31;
    int32_t v32;
    signed char** v33;
    int64_t* rax34;
    int64_t rcx35;

    __asm__("ror dword [rcx-0x1], 0xc0");
    if (r8_3 == 0x78) {
        rsi4 = reinterpret_cast<struct s2*>(&rsi->f1);
        if (reinterpret_cast<int1_t>(rsi4 == 0x78)) {
            if (rcx5 + 1 == 0x78) {
                ecx6 = 1;
                rdi->f0 = rsi4->f0;
                rdi->f4 = rsi4->f4;
                do {
                    *reinterpret_cast<int32_t*>(&rsi7) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi8 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(rsi7) + 1);
                        *reinterpret_cast<int32_t*>(&r8_9) = 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = reinterpret_cast<int32_t>(fputc);
                        do {
                            r9_10 = r8_9 + 1;
                            *reinterpret_cast<int32_t*>(&r11_11) = 1;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_11) + 4) = reinterpret_cast<int32_t>(fputc);
                            do {
                                rdi8->f0 = rsi7->f0;
                                rdi12 = reinterpret_cast<struct s4*>(&rdi8->f4);
                                rsi13 = reinterpret_cast<struct s4*>(&rsi7->f4);
                                __asm__("movapd xmm2, xmm3");
                                __asm__("mulsd xmm2, xmm0");
                                rdi12->f0 = rsi13->f0;
                                rdi14 = reinterpret_cast<struct s5*>(&rdi12->f4);
                                rsi15 = reinterpret_cast<struct s5*>(&rsi13->f4);
                                __asm__("addsd xmm4, xmm2");
                                __asm__("addsd xmm4, [r14+r11*8]");
                                rdi14->f0 = rsi15->f0;
                                rdi16 = reinterpret_cast<struct s6*>(&rdi14->f4);
                                rsi17 = reinterpret_cast<struct s6*>(&rsi15->f4);
                                __asm__("addsd xmm5, xmm2");
                                __asm__("addsd xmm5, [r14+r11*8]");
                                __asm__("mulsd xmm5, xmm1");
                                __asm__("mulsd xmm4, xmm1");
                                __asm__("addsd xmm2, [r13+r11*8+0x8]");
                                __asm__("addsd xmm4, xmm5");
                                __asm__("addsd xmm2, [r13+r11*8-0x8]");
                                __asm__("mulsd xmm2, xmm1");
                                __asm__("addsd xmm2, xmm4");
                                __asm__("addsd xmm2, xmm3");
                                rdi16->f0 = rsi17->f0;
                                rdi8 = reinterpret_cast<struct s3*>(&rdi16->f4);
                                rsi7 = reinterpret_cast<struct s3*>(&rsi17->f4);
                                r14_18 = r11_11 + 1;
                                r11_11 = r14_18;
                            } while (r14_18 != 0x77);
                            r8_9 = r9_10;
                        } while (r9_10 != 0x77);
                        *reinterpret_cast<int32_t*>(&rdx19) = 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
                        rsi7 = rdi8;
                    } while (!reinterpret_cast<int1_t>(rdi8 == 0x77));
                    do {
                        rsi20 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rdx19) + 1);
                        rdi21 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(rdx19) - 1);
                        *reinterpret_cast<int32_t*>(&r8_22) = 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = reinterpret_cast<int32_t>(fputc);
                        do {
                            r9_23 = r8_22 + 1;
                            *reinterpret_cast<int32_t*>(&r11_24) = 1;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_24) + 4) = reinterpret_cast<int32_t>(fputc);
                            do {
                                rdi21->f0 = rsi20->f0;
                                rdi25 = reinterpret_cast<struct s9*>(&rdi21->f4);
                                rsi26 = reinterpret_cast<struct s10*>(&rsi20->f4);
                                __asm__("movapd xmm2, xmm3");
                                __asm__("mulsd xmm2, xmm0");
                                rdi25->f0 = rsi26->f0;
                                rdi27 = reinterpret_cast<struct s11*>(&rdi25->f4);
                                rsi28 = reinterpret_cast<struct s12*>(&rsi26->f4);
                                __asm__("addsd xmm4, xmm2");
                                __asm__("addsd xmm4, [r14+r11*8]");
                                rdi27->f0 = rsi28->f0;
                                rdi29 = reinterpret_cast<struct s13*>(&rdi27->f4);
                                rsi30 = reinterpret_cast<struct s14*>(&rsi28->f4);
                                __asm__("addsd xmm5, xmm2");
                                __asm__("addsd xmm5, [r14+r11*8]");
                                __asm__("mulsd xmm5, xmm1");
                                __asm__("mulsd xmm4, xmm1");
                                __asm__("addsd xmm2, [r13+r11*8+0x8]");
                                __asm__("addsd xmm4, xmm5");
                                __asm__("addsd xmm2, [r13+r11*8-0x8]");
                                __asm__("mulsd xmm2, xmm1");
                                __asm__("addsd xmm2, xmm4");
                                __asm__("addsd xmm2, xmm3");
                                rdi29->f0 = rsi30->f0;
                                rdi21 = reinterpret_cast<struct s8*>(&rdi29->f4);
                                rsi20 = reinterpret_cast<struct s7*>(&rsi30->f4);
                                r14_31 = r11_24 + 1;
                                r11_24 = r14_31;
                            } while (r14_31 != 0x77);
                            r8_22 = r9_23;
                        } while (r9_23 != 0x77);
                        rdx19 = rsi20;
                    } while (!reinterpret_cast<int1_t>(rsi20 == 0x77));
                    ++ecx6;
                } while (ecx6 != 0x1f5);
                if (v32 < 43) 
                    goto 0x302;
                if (**v33 != fputc) 
                    goto "???";
                rax34 = g322;
                rcx35 = *rax34;
                fun_33e(0x32c, 22, 1, rcx35);
            }
        }
    }
}

