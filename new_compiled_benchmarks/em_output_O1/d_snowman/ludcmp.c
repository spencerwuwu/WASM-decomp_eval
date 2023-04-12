
struct s0 {
    int32_t f0;
    int32_t f4;
};

int32_t fputc = 0x41574155;

int32_t g7fffffff8;

void fputc(int32_t edi, int64_t rsi);

struct s1 {
    int32_t f0;
    int32_t f1;
    int32_t f4;
};

struct s1* fun_1ae(int64_t rdi, int64_t rsi);

void fun_1c2(struct s1* rdi);

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

void fun_297();

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

int32_t** g4a9 = reinterpret_cast<int32_t**>(0x3d8d48288b4c);

void fun_4c5(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_4e0();

void fun_532();

void fun_508();

void fun_54c(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_565(int64_t rdi, struct s10* rsi, struct s5* rdx, int32_t* rcx);

void fun_479(int64_t rdi, struct s10* rsi, struct s5* rdx, int32_t* rcx);

void fun_481(int64_t rdi, struct s10* rsi, struct s5* rdx, int32_t* rcx);

void fun_489(int64_t rdi, struct s10* rsi, struct s5* rdx, int32_t* rcx);

void fun_491(int64_t rdi, struct s10* rsi, struct s5* rdx, int32_t* rcx);

void fun_176() {
    struct s0* rdi1;
    int32_t* rsi2;
    uint64_t rbp3;
    int64_t* rbx4;
    int64_t r13_5;
    uint64_t r14_6;
    int32_t* rdi7;
    int64_t rax8;
    int64_t rbx9;
    struct s1* rax10;
    struct s1* r13_11;
    int64_t rbp12;
    int64_t rax13;
    int64_t r15_14;
    int64_t v15;
    int64_t rcx16;
    struct s2* rsi17;
    int32_t* rbx18;
    int32_t* rdi19;
    struct s3* rdi20;
    struct s4* rsi21;
    int64_t rax22;
    struct s3* rdi23;
    struct s4* rsi24;
    struct s1* rdi25;
    int64_t rax26;
    struct s5* rcx27;
    int64_t r14_28;
    int64_t v29;
    struct s5* rdx30;
    struct s6* rsi31;
    int32_t* rbx32;
    int32_t* rsi33;
    struct s5* rdi34;
    struct s7* rdi35;
    int32_t* rbx36;
    struct s5* rdx37;
    struct s8* rsi38;
    int32_t* rbx39;
    struct s5* rdi40;
    int32_t* rsi41;
    struct s9* rsi42;
    struct s10* rsi43;
    struct s5* rdi44;
    struct s11* rsi45;
    int64_t rcx46;
    int32_t* rbx47;
    struct s5* rax48;
    struct s5* rdi49;
    struct s11* rsi50;
    struct s5* rcx51;
    int32_t* rcx52;
    int32_t* rbx53;
    int1_t cf54;
    int32_t v55;
    signed char** v56;
    int32_t** rax57;
    int32_t* r13_58;
    int32_t* rcx59;
    int32_t* rsi60;
    int64_t r14_61;
    int32_t* rdi62;
    int64_t v63;
    int64_t rbx64;
    int64_t r12_65;
    int64_t v66;

    while (1) {
        rdi1->f0 = fputc;
        rdi1->f4 = g7fffffff8;
        rsi2 = reinterpret_cast<int32_t*>(0x7fffffffc);
        do {
            (rbx4 + rbp3 * 0x7d0)[rbp3] = 0x3ff0000000000000;
            ++r13_5;
            if (r14_6 == 0x7d0) 
                goto addr_19f_9;
            rbp3 = r14_6;
            rdi7 = reinterpret_cast<int32_t*>(r14_6 * 0x3e88 + 8);
            *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm0, xmm0");
                __asm__("cvtsi2sd xmm0, ecx");
                __asm__("divsd xmm0, xmm3");
                __asm__("addsd xmm0, xmm1");
                *rdi7 = *rsi2;
                ++rdi7;
                ++rsi2;
                ++rax8;
            } while (rax8 != r13_5);
            r14_6 = rbp3 + 1;
        } while (rbp3 > 0x7ce);
        rdi1 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rdi7) + rbx9);
        fun_176();
    }
    addr_19f_9:
    rax10 = fun_1ae(0x3d0900, 8);
    r13_11 = rax10;
    *reinterpret_cast<int32_t*>(&rbp12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp12) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_1c2(rax10);
    *reinterpret_cast<int32_t*>(&rax13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(fputc);
    r15_14 = v15;
    do {
        *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi17 = reinterpret_cast<struct s2*>(rbx18 + rcx16 * 0xfa0 + rax13 * 2);
            *reinterpret_cast<int32_t*>(&rdi19) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi19 = rsi17->f0;
                rdi20 = reinterpret_cast<struct s3*>(rdi19 + 1);
                rsi21 = reinterpret_cast<struct s4*>(&rsi17->f4);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi20->f0 = rsi21->f0;
                rsi17 = reinterpret_cast<struct s2*>(&rsi21->f4);
                rdi19 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi19 == 0x7d0));
            ++rcx16;
        } while (rcx16 != 0x7d0);
        ++rax13;
    } while (rax13 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi19 = rsi17->f0;
            rdi23 = reinterpret_cast<struct s3*>(rdi19 + 1);
            rsi24 = reinterpret_cast<struct s4*>(&rsi17->f4);
            rdi23->f0 = rsi24->f0;
            rdi19 = &rdi23->f4;
            rsi17 = reinterpret_cast<struct s2*>(&rsi24->f4);
            ++rax22;
        } while (rax22 != 0x7d0);
        ++rbp12;
    } while (rbp12 != 0x7d0);
    rdi25 = r13_11;
    fun_297();
    *reinterpret_cast<int32_t*>(&rax26) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rcx27) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = reinterpret_cast<int32_t>(fputc);
    r14_28 = v29;
    do {
        if (rcx27 != fputc) {
            *reinterpret_cast<int32_t*>(&rdx30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rsi31 = reinterpret_cast<struct s6*>(rbx32 + reinterpret_cast<uint64_t>(rcx27) * 0xfa0);
                rdi25->f0 = rsi31->f0;
                rsi33 = &rsi31->f4;
                if (rdx30 != fputc) {
                    *reinterpret_cast<int32_t*>(&rdi34) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi34->f0 = *rsi33;
                        ++rsi33;
                        __asm__("mulsd xmm1, [r8+rdx*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi34 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(&rdi34->f4) + 1);
                    } while (rdi34 != rdx30);
                }
                rdi35 = reinterpret_cast<struct s7*>(rbx36 + reinterpret_cast<uint64_t>(rdx30) * 0xfa0);
                __asm__("divsd xmm0, [rdi+rdx*8]");
                rdi35->f0 = rsi33[reinterpret_cast<uint64_t>(rdx30) * 2];
                rdi25 = reinterpret_cast<struct s1*>(&rdi35->f4);
                rdx30 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rdx30) + 1);
            } while (rdx30 != rcx27);
        }
        rdx37 = rcx27;
        do {
            rsi38 = reinterpret_cast<struct s8*>(rbx39 + reinterpret_cast<uint64_t>(rcx27) * 0xfa0);
            rdi25->f0 = rsi38->f0;
            rdi40 = reinterpret_cast<struct s5*>(&rdi25->f1);
            rsi41 = &rsi38->f4;
            if (rcx27 != fputc) {
                *reinterpret_cast<int32_t*>(&rdi40) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi40->f0 = *rsi41;
                    ++rsi41;
                    __asm__("mulsd xmm1, [r8+rdx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi40 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(&rdi40->f4) + 1);
                } while (rdi40 != rcx27);
            }
            rsi42 = reinterpret_cast<struct s9*>(rsi41 + reinterpret_cast<uint64_t>(rdx37) * 2);
            rdi40->f0 = rsi42->f0;
            rdi25 = reinterpret_cast<struct s1*>(&rdi40->f4);
            rsi43 = reinterpret_cast<struct s10*>(&rsi42->f4);
            rdx37 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rdx37) + 1);
        } while (rdx37 != 0x7d0);
        rcx27 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rcx27) + 1);
    } while (rcx27 != 0x7d0);
    do {
        rdi25->f0 = rsi43->f0;
        rdi44 = reinterpret_cast<struct s5*>(&rdi25->f1);
        rsi45 = reinterpret_cast<struct s11*>(&rsi43->f4);
        if (rax26 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx46) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx46) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdx37 = reinterpret_cast<struct s5*>(rbx47 + rax26 * 0xfa0);
                rdi44->f0 = rsi45->f0;
                rdi44 = reinterpret_cast<struct s5*>(&rdi44->f4);
                rsi45 = reinterpret_cast<struct s11*>(&rsi45->f4);
                __asm__("mulsd xmm1, [r12+rcx*8]");
                __asm__("subsd xmm0, xmm1");
                ++rcx46;
            } while (rcx46 != rax26);
        }
        rdi44->f0 = rsi45->f0;
        rdi25 = reinterpret_cast<struct s1*>(&rdi44->f4);
        rsi43 = reinterpret_cast<struct s10*>(&rsi45->f4);
        ++rax26;
    } while (rax26 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rax48) = 0x7cf;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax48) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi25->f0 = rsi43->f0;
        rdi49 = reinterpret_cast<struct s5*>(&rdi25->f1);
        rsi50 = reinterpret_cast<struct s11*>(&rsi43->f4);
        rcx51 = rax48;
        if (reinterpret_cast<uint64_t>(rax48) <= 0x7ce) {
            do {
                rdi49->f0 = rsi50->f0;
                rdi49 = reinterpret_cast<struct s5*>(&rdi49->f4);
                rsi50 = reinterpret_cast<struct s11*>(&rsi50->f4);
                __asm__("mulsd xmm1, [r14+rcx*8+0x8]");
                rdx37 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rcx51) + 1);
                __asm__("subsd xmm0, xmm1");
                rcx51 = rdx37;
            } while (!reinterpret_cast<int1_t>(rdx37 == 0x7cf));
        }
        rcx52 = rbx53 + reinterpret_cast<uint64_t>(rax48) * 0xfa0;
        __asm__("divsd xmm0, [rcx+rax*8]");
        rdi49->f0 = rsi50->f0;
        rdi25 = reinterpret_cast<struct s1*>(&rdi49->f4);
        rsi43 = reinterpret_cast<struct s10*>(&rsi50->f4);
        cf54 = reinterpret_cast<uint64_t>(rax48) < 1;
        rax48 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rax48) - 1);
    } while (!cf54);
    if (v55 >= 43 && **v56 == fputc) {
        rax57 = g4a9;
        r13_58 = *rax57;
        rcx59 = r13_58;
        fun_4c5(0x4b3, 22, 1, rcx59);
        rsi60 = reinterpret_cast<int32_t*>(0x4cc);
        *reinterpret_cast<int32_t*>(&r14_61) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_61) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi62 = r13_58;
        fun_4e0();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_61) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi62) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi62) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi60 = r13_58;
                fun_532();
            }
            *rdi62 = *rsi60;
            rdi62 = r13_58;
            rsi60 = reinterpret_cast<int32_t*>(0x4e7);
            fun_508();
            ++r14_61;
        } while (r14_61 != 0x7d0);
        fun_54c(r13_58, 0x53b, 0x542, rcx59);
        *reinterpret_cast<int32_t*>(&rsi43) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi43) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx37) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx52 = r13_58;
        fun_565(0x553, 22, 1, rcx52);
        r14_28 = v63;
    }
    fun_479(rbx64, rsi43, rdx37, rcx52);
    fun_481(r15_14, rsi43, rdx37, rcx52);
    fun_489(r14_28, rsi43, rdx37, rcx52);
    fun_491(r12_65, rsi43, rdx37, rcx52);
    goto v66;
}

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

void fun_297() {
    int64_t rax1;
    struct s5* rcx2;
    int64_t r14_3;
    int64_t v4;
    struct s5* rdx5;
    struct s12* rsi6;
    int32_t* rbx7;
    struct s1* rdi8;
    int32_t* rsi9;
    struct s5* rdi10;
    struct s13* rdi11;
    int32_t* rbx12;
    struct s5* rdx13;
    struct s14* rsi14;
    int32_t* rbx15;
    struct s5* rdi16;
    int32_t* rsi17;
    struct s15* rsi18;
    struct s10* rsi19;
    struct s5* rdi20;
    struct s11* rsi21;
    int64_t rcx22;
    int32_t* rbx23;
    struct s5* rax24;
    struct s5* rdi25;
    struct s11* rsi26;
    struct s5* rcx27;
    int32_t* rcx28;
    int32_t* rbx29;
    int1_t cf30;
    int32_t v31;
    signed char** v32;
    int32_t** rax33;
    int32_t* r13_34;
    int32_t* rcx35;
    int32_t* rsi36;
    int64_t r14_37;
    int32_t* rdi38;
    int64_t v39;
    int64_t rbx40;
    int64_t r15_41;
    int64_t r12_42;
    int64_t v43;

    *reinterpret_cast<int32_t*>(&rax1) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rcx2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = reinterpret_cast<int32_t>(fputc);
    r14_3 = v4;
    do {
        if (rcx2 != fputc) {
            *reinterpret_cast<int32_t*>(&rdx5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rsi6 = reinterpret_cast<struct s12*>(rbx7 + reinterpret_cast<uint64_t>(rcx2) * 0xfa0);
                rdi8->f0 = rsi6->f0;
                rsi9 = &rsi6->f4;
                if (rdx5 != fputc) {
                    *reinterpret_cast<int32_t*>(&rdi10) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi10->f0 = *rsi9;
                        ++rsi9;
                        __asm__("mulsd xmm1, [r8+rdx*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi10 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(&rdi10->f4) + 1);
                    } while (rdi10 != rdx5);
                }
                rdi11 = reinterpret_cast<struct s13*>(rbx12 + reinterpret_cast<uint64_t>(rdx5) * 0xfa0);
                __asm__("divsd xmm0, [rdi+rdx*8]");
                rdi11->f0 = rsi9[reinterpret_cast<uint64_t>(rdx5) * 2];
                rdi8 = reinterpret_cast<struct s1*>(&rdi11->f4);
                rdx5 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rdx5) + 1);
            } while (rdx5 != rcx2);
        }
        rdx13 = rcx2;
        do {
            rsi14 = reinterpret_cast<struct s14*>(rbx15 + reinterpret_cast<uint64_t>(rcx2) * 0xfa0);
            rdi8->f0 = rsi14->f0;
            rdi16 = reinterpret_cast<struct s5*>(&rdi8->f1);
            rsi17 = &rsi14->f4;
            if (rcx2 != fputc) {
                *reinterpret_cast<int32_t*>(&rdi16) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi16->f0 = *rsi17;
                    ++rsi17;
                    __asm__("mulsd xmm1, [r8+rdx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi16 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(&rdi16->f4) + 1);
                } while (rdi16 != rcx2);
            }
            rsi18 = reinterpret_cast<struct s15*>(rsi17 + reinterpret_cast<uint64_t>(rdx13) * 2);
            rdi16->f0 = rsi18->f0;
            rdi8 = reinterpret_cast<struct s1*>(&rdi16->f4);
            rsi19 = reinterpret_cast<struct s10*>(&rsi18->f4);
            rdx13 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rdx13) + 1);
        } while (rdx13 != 0x7d0);
        rcx2 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rcx2) + 1);
    } while (rcx2 != 0x7d0);
    do {
        rdi8->f0 = rsi19->f0;
        rdi20 = reinterpret_cast<struct s5*>(&rdi8->f1);
        rsi21 = reinterpret_cast<struct s11*>(&rsi19->f4);
        if (rax1 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx22) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdx13 = reinterpret_cast<struct s5*>(rbx23 + rax1 * 0xfa0);
                rdi20->f0 = rsi21->f0;
                rdi20 = reinterpret_cast<struct s5*>(&rdi20->f4);
                rsi21 = reinterpret_cast<struct s11*>(&rsi21->f4);
                __asm__("mulsd xmm1, [r12+rcx*8]");
                __asm__("subsd xmm0, xmm1");
                ++rcx22;
            } while (rcx22 != rax1);
        }
        rdi20->f0 = rsi21->f0;
        rdi8 = reinterpret_cast<struct s1*>(&rdi20->f4);
        rsi19 = reinterpret_cast<struct s10*>(&rsi21->f4);
        ++rax1;
    } while (rax1 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rax24) = 0x7cf;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi8->f0 = rsi19->f0;
        rdi25 = reinterpret_cast<struct s5*>(&rdi8->f1);
        rsi26 = reinterpret_cast<struct s11*>(&rsi19->f4);
        rcx27 = rax24;
        if (reinterpret_cast<uint64_t>(rax24) <= 0x7ce) {
            do {
                rdi25->f0 = rsi26->f0;
                rdi25 = reinterpret_cast<struct s5*>(&rdi25->f4);
                rsi26 = reinterpret_cast<struct s11*>(&rsi26->f4);
                __asm__("mulsd xmm1, [r14+rcx*8+0x8]");
                rdx13 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rcx27) + 1);
                __asm__("subsd xmm0, xmm1");
                rcx27 = rdx13;
            } while (!reinterpret_cast<int1_t>(rdx13 == 0x7cf));
        }
        rcx28 = rbx29 + reinterpret_cast<uint64_t>(rax24) * 0xfa0;
        __asm__("divsd xmm0, [rcx+rax*8]");
        rdi25->f0 = rsi26->f0;
        rdi8 = reinterpret_cast<struct s1*>(&rdi25->f4);
        rsi19 = reinterpret_cast<struct s10*>(&rsi26->f4);
        cf30 = reinterpret_cast<uint64_t>(rax24) < 1;
        rax24 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rax24) - 1);
    } while (!cf30);
    if (v31 >= 43 && **v32 == fputc) {
        rax33 = g4a9;
        r13_34 = *rax33;
        rcx35 = r13_34;
        fun_4c5(0x4b3, 22, 1, rcx35);
        rsi36 = reinterpret_cast<int32_t*>(0x4cc);
        *reinterpret_cast<int32_t*>(&r14_37) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_37) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi38 = r13_34;
        fun_4e0();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_37) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi38) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi36 = r13_34;
                fun_532();
            }
            *rdi38 = *rsi36;
            rdi38 = r13_34;
            rsi36 = reinterpret_cast<int32_t*>(0x4e7);
            fun_508();
            ++r14_37;
        } while (r14_37 != 0x7d0);
        fun_54c(r13_34, 0x53b, 0x542, rcx35);
        *reinterpret_cast<int32_t*>(&rsi19) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx13) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx28 = r13_34;
        fun_565(0x553, 22, 1, rcx28);
        r14_3 = v39;
    }
    fun_479(rbx40, rsi19, rdx13, rcx28);
    fun_481(r15_41, rsi19, rdx13, rcx28);
    fun_489(r14_3, rsi19, rdx13, rcx28);
    fun_491(r12_42, rsi19, rdx13, rcx28);
    goto v43;
}

void fun_479(int64_t rdi, struct s10* rsi, struct s5* rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r14_6;
    int64_t r12_7;
    int64_t v8;

    fun_481(r15_5, rsi, rdx, rcx);
    fun_489(r14_6, rsi, rdx, rcx);
    fun_491(r12_7, rsi, rdx, rcx);
    goto v8;
}

void fun_508() {
    int64_t r14_1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r13_4;
    int32_t* r13_5;
    int32_t* rbp6;
    int32_t* r13_7;
    int32_t* rcx8;
    int32_t* r13_9;
    int64_t rbx10;
    int64_t r15_11;
    int64_t v12;
    int64_t r12_13;
    int64_t v14;

    while (++r14_1, r14_1 != 0x7d0) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r13_4;
            fun_532();
        }
        *rdi2 = *rsi3;
        rdi2 = r13_5;
        rsi3 = rbp6;
        fun_508();
    }
    fun_54c(r13_7, 0x53b, 0x542, rcx8);
    fun_565(0x553, 22, 1, r13_9);
    fun_479(rbx10, 22, 1, r13_9);
    fun_481(r15_11, 22, 1, r13_9);
    fun_489(v12, 22, 1, r13_9);
    fun_491(r12_13, 22, 1, r13_9);
    goto v14;
}

void fun_532() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r13_3;
    int32_t* rbp4;
    int64_t r14_5;
    int32_t* r13_6;
    int32_t* r13_7;
    int32_t* rcx8;
    int32_t* r13_9;
    int64_t rbx10;
    int64_t r15_11;
    int64_t v12;
    int64_t r12_13;
    int64_t v14;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = r13_3;
            rsi2 = rbp4;
            fun_508();
            ++r14_5;
            if (r14_5 == 0x7d0) 
                goto addr_534_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_5) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r13_6;
        fun_532();
    }
    addr_534_7:
    fun_54c(r13_7, 0x53b, 0x542, rcx8);
    fun_565(0x553, 22, 1, r13_9);
    fun_479(rbx10, 22, 1, r13_9);
    fun_481(r15_11, 22, 1, r13_9);
    fun_489(v12, 22, 1, r13_9);
    fun_491(r12_13, 22, 1, r13_9);
    goto v14;
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

struct s1* fun_1ae(int64_t rdi, int64_t rsi) {
    struct s1* r13_3;
    struct s1* rax4;
    int64_t rbp5;
    struct s1* rax6;
    int64_t rax7;
    int64_t r15_8;
    int64_t v9;
    int64_t rcx10;
    struct s16* rsi11;
    int32_t* rbx12;
    int32_t* rdi13;
    struct s17* rdi14;
    struct s18* rsi15;
    int64_t rax16;
    struct s17* rdi17;
    struct s18* rsi18;
    struct s1* rdi19;
    int64_t rax20;
    struct s5* rcx21;
    int64_t r14_22;
    int64_t v23;
    struct s5* rdx24;
    struct s19* rsi25;
    int32_t* rbx26;
    int32_t* rsi27;
    struct s5* rdi28;
    struct s20* rdi29;
    int32_t* rbx30;
    struct s5* rdx31;
    struct s21* rsi32;
    int32_t* rbx33;
    struct s5* rdi34;
    int32_t* rsi35;
    struct s22* rsi36;
    struct s10* rsi37;
    struct s5* rdi38;
    struct s11* rsi39;
    int64_t rcx40;
    int32_t* rbx41;
    struct s5* rax42;
    struct s5* rdi43;
    struct s11* rsi44;
    struct s5* rcx45;
    int32_t* rcx46;
    int32_t* rbx47;
    int1_t cf48;
    int32_t v49;
    signed char** v50;
    int32_t** rax51;
    int32_t* r13_52;
    int32_t* rcx53;
    int32_t* rsi54;
    int64_t r14_55;
    int32_t* rdi56;
    int64_t v57;
    int64_t rbx58;
    int64_t r12_59;
    int64_t v60;

    r13_3 = rax4;
    *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_1c2(rax6);
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    r15_8 = v9;
    do {
        *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi11 = reinterpret_cast<struct s16*>(rbx12 + rcx10 * 0xfa0 + rax7 * 2);
            *reinterpret_cast<int32_t*>(&rdi13) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi13 = rsi11->f0;
                rdi14 = reinterpret_cast<struct s17*>(rdi13 + 1);
                rsi15 = reinterpret_cast<struct s18*>(&rsi11->f4);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi14->f0 = rsi15->f0;
                rsi11 = reinterpret_cast<struct s16*>(&rsi15->f4);
                rdi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi13 == 0x7d0));
            ++rcx10;
        } while (rcx10 != 0x7d0);
        ++rax7;
    } while (rax7 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi13 = rsi11->f0;
            rdi17 = reinterpret_cast<struct s17*>(rdi13 + 1);
            rsi18 = reinterpret_cast<struct s18*>(&rsi11->f4);
            rdi17->f0 = rsi18->f0;
            rdi13 = &rdi17->f4;
            rsi11 = reinterpret_cast<struct s16*>(&rsi18->f4);
            ++rax16;
        } while (rax16 != 0x7d0);
        ++rbp5;
    } while (rbp5 != 0x7d0);
    rdi19 = r13_3;
    fun_297();
    *reinterpret_cast<int32_t*>(&rax20) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rcx21) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = reinterpret_cast<int32_t>(fputc);
    r14_22 = v23;
    do {
        if (rcx21 != fputc) {
            *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rsi25 = reinterpret_cast<struct s19*>(rbx26 + reinterpret_cast<uint64_t>(rcx21) * 0xfa0);
                rdi19->f0 = rsi25->f0;
                rsi27 = &rsi25->f4;
                if (rdx24 != fputc) {
                    *reinterpret_cast<int32_t*>(&rdi28) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi28->f0 = *rsi27;
                        ++rsi27;
                        __asm__("mulsd xmm1, [r8+rdx*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi28 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(&rdi28->f4) + 1);
                    } while (rdi28 != rdx24);
                }
                rdi29 = reinterpret_cast<struct s20*>(rbx30 + reinterpret_cast<uint64_t>(rdx24) * 0xfa0);
                __asm__("divsd xmm0, [rdi+rdx*8]");
                rdi29->f0 = rsi27[reinterpret_cast<uint64_t>(rdx24) * 2];
                rdi19 = reinterpret_cast<struct s1*>(&rdi29->f4);
                rdx24 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rdx24) + 1);
            } while (rdx24 != rcx21);
        }
        rdx31 = rcx21;
        do {
            rsi32 = reinterpret_cast<struct s21*>(rbx33 + reinterpret_cast<uint64_t>(rcx21) * 0xfa0);
            rdi19->f0 = rsi32->f0;
            rdi34 = reinterpret_cast<struct s5*>(&rdi19->f1);
            rsi35 = &rsi32->f4;
            if (rcx21 != fputc) {
                *reinterpret_cast<int32_t*>(&rdi34) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi34->f0 = *rsi35;
                    ++rsi35;
                    __asm__("mulsd xmm1, [r8+rdx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi34 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(&rdi34->f4) + 1);
                } while (rdi34 != rcx21);
            }
            rsi36 = reinterpret_cast<struct s22*>(rsi35 + reinterpret_cast<uint64_t>(rdx31) * 2);
            rdi34->f0 = rsi36->f0;
            rdi19 = reinterpret_cast<struct s1*>(&rdi34->f4);
            rsi37 = reinterpret_cast<struct s10*>(&rsi36->f4);
            rdx31 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rdx31) + 1);
        } while (rdx31 != 0x7d0);
        rcx21 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rcx21) + 1);
    } while (rcx21 != 0x7d0);
    do {
        rdi19->f0 = rsi37->f0;
        rdi38 = reinterpret_cast<struct s5*>(&rdi19->f1);
        rsi39 = reinterpret_cast<struct s11*>(&rsi37->f4);
        if (rax20 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx40) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx40) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdx31 = reinterpret_cast<struct s5*>(rbx41 + rax20 * 0xfa0);
                rdi38->f0 = rsi39->f0;
                rdi38 = reinterpret_cast<struct s5*>(&rdi38->f4);
                rsi39 = reinterpret_cast<struct s11*>(&rsi39->f4);
                __asm__("mulsd xmm1, [r12+rcx*8]");
                __asm__("subsd xmm0, xmm1");
                ++rcx40;
            } while (rcx40 != rax20);
        }
        rdi38->f0 = rsi39->f0;
        rdi19 = reinterpret_cast<struct s1*>(&rdi38->f4);
        rsi37 = reinterpret_cast<struct s10*>(&rsi39->f4);
        ++rax20;
    } while (rax20 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rax42) = 0x7cf;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax42) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi19->f0 = rsi37->f0;
        rdi43 = reinterpret_cast<struct s5*>(&rdi19->f1);
        rsi44 = reinterpret_cast<struct s11*>(&rsi37->f4);
        rcx45 = rax42;
        if (reinterpret_cast<uint64_t>(rax42) <= 0x7ce) {
            do {
                rdi43->f0 = rsi44->f0;
                rdi43 = reinterpret_cast<struct s5*>(&rdi43->f4);
                rsi44 = reinterpret_cast<struct s11*>(&rsi44->f4);
                __asm__("mulsd xmm1, [r14+rcx*8+0x8]");
                rdx31 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rcx45) + 1);
                __asm__("subsd xmm0, xmm1");
                rcx45 = rdx31;
            } while (!reinterpret_cast<int1_t>(rdx31 == 0x7cf));
        }
        rcx46 = rbx47 + reinterpret_cast<uint64_t>(rax42) * 0xfa0;
        __asm__("divsd xmm0, [rcx+rax*8]");
        rdi43->f0 = rsi44->f0;
        rdi19 = reinterpret_cast<struct s1*>(&rdi43->f4);
        rsi37 = reinterpret_cast<struct s10*>(&rsi44->f4);
        cf48 = reinterpret_cast<uint64_t>(rax42) < 1;
        rax42 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rax42) - 1);
    } while (!cf48);
    if (v49 >= 43 && **v50 == fputc) {
        rax51 = g4a9;
        r13_52 = *rax51;
        rcx53 = r13_52;
        fun_4c5(0x4b3, 22, 1, rcx53);
        rsi54 = reinterpret_cast<int32_t*>(0x4cc);
        *reinterpret_cast<int32_t*>(&r14_55) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_55) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi56 = r13_52;
        fun_4e0();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_55) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi56) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi56) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi54 = r13_52;
                fun_532();
            }
            *rdi56 = *rsi54;
            rdi56 = r13_52;
            rsi54 = reinterpret_cast<int32_t*>(0x4e7);
            fun_508();
            ++r14_55;
        } while (r14_55 != 0x7d0);
        fun_54c(r13_52, 0x53b, 0x542, rcx53);
        *reinterpret_cast<int32_t*>(&rsi37) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi37) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx31) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx46 = r13_52;
        fun_565(0x553, 22, 1, rcx46);
        r14_22 = v57;
    }
    fun_479(rbx58, rsi37, rdx31, rcx46);
    fun_481(r15_8, rsi37, rdx31, rcx46);
    fun_489(r14_22, rsi37, rdx31, rcx46);
    fun_491(r12_59, rsi37, rdx31, rcx46);
    goto v60;
}

void fun_4c5(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r14_6;
    int32_t* rdi7;
    int32_t* r13_8;
    int32_t* r13_9;
    int32_t* r13_10;
    int32_t* r13_11;
    int32_t* r13_12;
    int64_t rbx13;
    int64_t r15_14;
    int64_t v15;
    int64_t r12_16;
    int64_t v17;

    rsi5 = reinterpret_cast<int32_t*>(0x4cc);
    *reinterpret_cast<int32_t*>(&r14_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r13_8;
    fun_4e0();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r13_9;
            fun_532();
        }
        *rdi7 = *rsi5;
        rdi7 = r13_10;
        rsi5 = reinterpret_cast<int32_t*>(0x4e7);
        fun_508();
        ++r14_6;
    } while (r14_6 != 0x7d0);
    fun_54c(r13_11, 0x53b, 0x542, rcx);
    fun_565(0x553, 22, 1, r13_12);
    fun_479(rbx13, 22, 1, r13_12);
    fun_481(r15_14, 22, 1, r13_12);
    fun_489(v15, 22, 1, r13_12);
    fun_491(r12_16, 22, 1, r13_12);
    goto v17;
}

void fun_481(int64_t rdi, struct s10* rsi, struct s5* rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r12_6;
    int64_t v7;

    fun_489(r14_5, rsi, rdx, rcx);
    fun_491(r12_6, rsi, rdx, rcx);
    goto v7;
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
    int32_t f4;
};

void fun_1c2(struct s1* rdi) {
    int64_t rax2;
    int64_t r15_3;
    int64_t v4;
    int64_t rcx5;
    struct s23* rsi6;
    int32_t* rbx7;
    int32_t* rdi8;
    struct s24* rdi9;
    struct s25* rsi10;
    int64_t rax11;
    struct s24* rdi12;
    struct s25* rsi13;
    int64_t rbp14;
    struct s1* rdi15;
    struct s1* r13_16;
    int64_t rax17;
    struct s5* rcx18;
    int64_t r14_19;
    int64_t v20;
    struct s5* rdx21;
    struct s26* rsi22;
    int32_t* rbx23;
    int32_t* rsi24;
    struct s5* rdi25;
    struct s27* rdi26;
    int32_t* rbx27;
    struct s5* rdx28;
    struct s28* rsi29;
    int32_t* rbx30;
    struct s5* rdi31;
    int32_t* rsi32;
    struct s29* rsi33;
    struct s10* rsi34;
    struct s5* rdi35;
    struct s11* rsi36;
    int64_t rcx37;
    int32_t* rbx38;
    struct s5* rax39;
    struct s5* rdi40;
    struct s11* rsi41;
    struct s5* rcx42;
    int32_t* rcx43;
    int32_t* rbx44;
    int1_t cf45;
    int32_t v46;
    signed char** v47;
    int32_t** rax48;
    int32_t* r13_49;
    int32_t* rcx50;
    int32_t* rsi51;
    int64_t r14_52;
    int32_t* rdi53;
    int64_t v54;
    int64_t rbx55;
    int64_t r12_56;
    int64_t v57;

    *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
    r15_3 = v4;
    do {
        *reinterpret_cast<int32_t*>(&rcx5) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi6 = reinterpret_cast<struct s23*>(rbx7 + rcx5 * 0xfa0 + rax2 * 2);
            *reinterpret_cast<int32_t*>(&rdi8) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi8 = rsi6->f0;
                rdi9 = reinterpret_cast<struct s24*>(rdi8 + 1);
                rsi10 = reinterpret_cast<struct s25*>(&rsi6->f4);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi9->f0 = rsi10->f0;
                rsi6 = reinterpret_cast<struct s23*>(&rsi10->f4);
                rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi8 == 0x7d0));
            ++rcx5;
        } while (rcx5 != 0x7d0);
        ++rax2;
    } while (rax2 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi8 = rsi6->f0;
            rdi12 = reinterpret_cast<struct s24*>(rdi8 + 1);
            rsi13 = reinterpret_cast<struct s25*>(&rsi6->f4);
            rdi12->f0 = rsi13->f0;
            rdi8 = &rdi12->f4;
            rsi6 = reinterpret_cast<struct s23*>(&rsi13->f4);
            ++rax11;
        } while (rax11 != 0x7d0);
        ++rbp14;
    } while (rbp14 != 0x7d0);
    rdi15 = r13_16;
    fun_297();
    *reinterpret_cast<int32_t*>(&rax17) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(fputc);
    r14_19 = v20;
    do {
        if (rcx18 != fputc) {
            *reinterpret_cast<int32_t*>(&rdx21) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rsi22 = reinterpret_cast<struct s26*>(rbx23 + reinterpret_cast<uint64_t>(rcx18) * 0xfa0);
                rdi15->f0 = rsi22->f0;
                rsi24 = &rsi22->f4;
                if (rdx21 != fputc) {
                    *reinterpret_cast<int32_t*>(&rdi25) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi25->f0 = *rsi24;
                        ++rsi24;
                        __asm__("mulsd xmm1, [r8+rdx*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi25 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(&rdi25->f4) + 1);
                    } while (rdi25 != rdx21);
                }
                rdi26 = reinterpret_cast<struct s27*>(rbx27 + reinterpret_cast<uint64_t>(rdx21) * 0xfa0);
                __asm__("divsd xmm0, [rdi+rdx*8]");
                rdi26->f0 = rsi24[reinterpret_cast<uint64_t>(rdx21) * 2];
                rdi15 = reinterpret_cast<struct s1*>(&rdi26->f4);
                rdx21 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rdx21) + 1);
            } while (rdx21 != rcx18);
        }
        rdx28 = rcx18;
        do {
            rsi29 = reinterpret_cast<struct s28*>(rbx30 + reinterpret_cast<uint64_t>(rcx18) * 0xfa0);
            rdi15->f0 = rsi29->f0;
            rdi31 = reinterpret_cast<struct s5*>(&rdi15->f1);
            rsi32 = &rsi29->f4;
            if (rcx18 != fputc) {
                *reinterpret_cast<int32_t*>(&rdi31) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi31->f0 = *rsi32;
                    ++rsi32;
                    __asm__("mulsd xmm1, [r8+rdx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi31 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(&rdi31->f4) + 1);
                } while (rdi31 != rcx18);
            }
            rsi33 = reinterpret_cast<struct s29*>(rsi32 + reinterpret_cast<uint64_t>(rdx28) * 2);
            rdi31->f0 = rsi33->f0;
            rdi15 = reinterpret_cast<struct s1*>(&rdi31->f4);
            rsi34 = reinterpret_cast<struct s10*>(&rsi33->f4);
            rdx28 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rdx28) + 1);
        } while (rdx28 != 0x7d0);
        rcx18 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rcx18) + 1);
    } while (rcx18 != 0x7d0);
    do {
        rdi15->f0 = rsi34->f0;
        rdi35 = reinterpret_cast<struct s5*>(&rdi15->f1);
        rsi36 = reinterpret_cast<struct s11*>(&rsi34->f4);
        if (rax17 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx37) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdx28 = reinterpret_cast<struct s5*>(rbx38 + rax17 * 0xfa0);
                rdi35->f0 = rsi36->f0;
                rdi35 = reinterpret_cast<struct s5*>(&rdi35->f4);
                rsi36 = reinterpret_cast<struct s11*>(&rsi36->f4);
                __asm__("mulsd xmm1, [r12+rcx*8]");
                __asm__("subsd xmm0, xmm1");
                ++rcx37;
            } while (rcx37 != rax17);
        }
        rdi35->f0 = rsi36->f0;
        rdi15 = reinterpret_cast<struct s1*>(&rdi35->f4);
        rsi34 = reinterpret_cast<struct s10*>(&rsi36->f4);
        ++rax17;
    } while (rax17 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rax39) = 0x7cf;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi15->f0 = rsi34->f0;
        rdi40 = reinterpret_cast<struct s5*>(&rdi15->f1);
        rsi41 = reinterpret_cast<struct s11*>(&rsi34->f4);
        rcx42 = rax39;
        if (reinterpret_cast<uint64_t>(rax39) <= 0x7ce) {
            do {
                rdi40->f0 = rsi41->f0;
                rdi40 = reinterpret_cast<struct s5*>(&rdi40->f4);
                rsi41 = reinterpret_cast<struct s11*>(&rsi41->f4);
                __asm__("mulsd xmm1, [r14+rcx*8+0x8]");
                rdx28 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rcx42) + 1);
                __asm__("subsd xmm0, xmm1");
                rcx42 = rdx28;
            } while (!reinterpret_cast<int1_t>(rdx28 == 0x7cf));
        }
        rcx43 = rbx44 + reinterpret_cast<uint64_t>(rax39) * 0xfa0;
        __asm__("divsd xmm0, [rcx+rax*8]");
        rdi40->f0 = rsi41->f0;
        rdi15 = reinterpret_cast<struct s1*>(&rdi40->f4);
        rsi34 = reinterpret_cast<struct s10*>(&rsi41->f4);
        cf45 = reinterpret_cast<uint64_t>(rax39) < 1;
        rax39 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rax39) - 1);
    } while (!cf45);
    if (v46 >= 43 && **v47 == fputc) {
        rax48 = g4a9;
        r13_49 = *rax48;
        rcx50 = r13_49;
        fun_4c5(0x4b3, 22, 1, rcx50);
        rsi51 = reinterpret_cast<int32_t*>(0x4cc);
        *reinterpret_cast<int32_t*>(&r14_52) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_52) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi53 = r13_49;
        fun_4e0();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_52) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi53) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi53) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi51 = r13_49;
                fun_532();
            }
            *rdi53 = *rsi51;
            rdi53 = r13_49;
            rsi51 = reinterpret_cast<int32_t*>(0x4e7);
            fun_508();
            ++r14_52;
        } while (r14_52 != 0x7d0);
        fun_54c(r13_49, 0x53b, 0x542, rcx50);
        *reinterpret_cast<int32_t*>(&rsi34) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx28) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx43 = r13_49;
        fun_565(0x553, 22, 1, rcx43);
        r14_19 = v54;
    }
    fun_479(rbx55, rsi34, rdx28, rcx43);
    fun_481(r15_3, rsi34, rdx28, rcx43);
    fun_489(r14_19, rsi34, rdx28, rcx43);
    fun_491(r12_56, rsi34, rdx28, rcx43);
    goto v57;
}

void fun_4e0() {
    int64_t r14_1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r13_4;
    int32_t* r13_5;
    int32_t* r13_6;
    int32_t* rcx7;
    int32_t* r13_8;
    int64_t rbx9;
    int64_t r15_10;
    int64_t v11;
    int64_t r12_12;
    int64_t v13;

    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r14_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r13_4;
            fun_532();
        }
        *rdi2 = *rsi3;
        rdi2 = r13_5;
        rsi3 = reinterpret_cast<int32_t*>(0x4e7);
        fun_508();
        ++r14_1;
    } while (r14_1 != 0x7d0);
    fun_54c(r13_6, 0x53b, 0x542, rcx7);
    fun_565(0x553, 22, 1, r13_8);
    fun_479(rbx9, 22, 1, r13_8);
    fun_481(r15_10, 22, 1, r13_8);
    fun_489(v11, 22, 1, r13_8);
    fun_491(r12_12, 22, 1, r13_8);
    goto v13;
}

void fun_489(int64_t rdi, struct s10* rsi, struct s5* rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t v6;

    fun_491(r12_5, rsi, rdx, rcx);
    goto v6;
}

void fun_54c(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r13_5;
    int64_t rbx6;
    int64_t r15_7;
    int64_t v8;
    int64_t r12_9;
    int64_t v10;

    fun_565(0x553, 22, 1, r13_5);
    fun_479(rbx6, 22, 1, r13_5);
    fun_481(r15_7, 22, 1, r13_5);
    fun_489(v8, 22, 1, r13_5);
    fun_491(r12_9, 22, 1, r13_5);
    goto v10;
}

void fun_491(int64_t rdi, struct s10* rsi, struct s5* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_565(int64_t rdi, struct s10* rsi, struct s5* rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r15_6;
    int64_t v7;
    int64_t r12_8;
    int64_t v9;

    fun_479(rbx5, rsi, rdx, rcx);
    fun_481(r15_6, rsi, rdx, rcx);
    fun_489(v7, rsi, rdx, rcx);
    fun_491(r12_8, rsi, rdx, rcx);
    goto v9;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_8d() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    __asm__("xorps xmm2, xmm2");
}

void fun_c0(int32_t* rdi) {
    *rdi = g7fffffff8;
    goto 0x104;
}

