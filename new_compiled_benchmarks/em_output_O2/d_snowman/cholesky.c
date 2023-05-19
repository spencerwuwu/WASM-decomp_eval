
struct s0 {
    int32_t f0;
    int32_t f4;
};

int32_t fputc = 0x56415741;

struct s1 {
    int32_t f0;
    int32_t f4;
};

int32_t g4 = 0x54415541;

void fputc();

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s2* fun_39f(int64_t rdi, int64_t rsi);

void fun_3b1(struct s2* rdi);

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

struct s15 {
    int32_t f0;
    int32_t f4;
};

void fun_688();

struct s16 {
    int32_t f0;
    int32_t f4;
};

void fun_6a5();

int32_t** g894 = reinterpret_cast<int32_t**>(0x3d8d48308b4c);

void fun_8b6(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_8d1(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_90b(int64_t rdi, int32_t* rsi, int64_t rdx, int32_t* rcx);

void fun_92c(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_95b(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_974(int64_t rdi, struct s2* rsi, uint64_t rdx, int32_t* rcx);

void fun_87c(int32_t* rdi, struct s2* rsi, uint64_t rdx, int32_t* rcx);

void fun_363() {
    int64_t v1;
    struct s0* rdi2;
    struct s1* rdi3;
    int32_t* rdi4;
    int32_t* rsi5;
    uint64_t r13_6;
    int64_t* rbx7;
    int64_t r14_8;
    uint64_t r15_9;
    uint64_t rbp10;
    uint64_t rax11;
    uint64_t rcx12;
    int64_t rbx13;
    struct s2* rax14;
    struct s2* r15_15;
    int64_t rax16;
    int64_t v17;
    uint64_t rdx18;
    int64_t rbx19;
    struct s3* rsi20;
    void* rbx21;
    struct s4* rdi22;
    int64_t r8_23;
    void* r9_24;
    uint64_t r13_25;
    struct s3* r9_26;
    int64_t r11_27;
    void* rbx28;
    int64_t rbx29;
    struct s5* rdi30;
    struct s6* rsi31;
    struct s4* rdi32;
    struct s3* rsi33;
    struct s5* rdi34;
    struct s6* rsi35;
    int64_t r10_36;
    struct s5* rdi37;
    struct s6* rsi38;
    int64_t r8_39;
    void* rax40;
    int32_t* rcx41;
    struct s7* rdi42;
    void* rbx43;
    struct s2* rsi44;
    uint64_t rdx45;
    struct s8* rsi46;
    struct s9* rsi47;
    struct s10* rsi48;
    struct s11* rdi49;
    struct s12* rsi50;
    struct s13* rsi51;
    struct s14* rdi52;
    struct s15* rdi53;
    int32_t* rsi54;
    struct s2* rdi55;
    uint64_t r15_56;
    int32_t* rdi57;
    int32_t* rsi58;
    int32_t* rax59;
    int32_t* rbx60;
    uint64_t rcx61;
    int32_t* rdi62;
    int32_t* rsi63;
    int32_t* r8_64;
    struct s2* rdi65;
    struct s2* rsi66;
    int32_t* rdi67;
    int32_t* rsi68;
    struct s2* rdi69;
    struct s2* rsi70;
    struct s2* rsi71;
    struct s16* rdi72;
    int32_t* rbx73;
    uint64_t r14_74;
    int64_t rbx75;
    struct s2* rdi76;
    struct s2* rsi77;
    int32_t* rdi78;
    int32_t* rsi79;
    struct s2* rdi80;
    struct s2* rsi81;
    struct s2* rdi82;
    struct s2* rsi83;
    signed char** v84;
    int32_t** rax85;
    int32_t* r14_86;
    int64_t r12_87;
    int32_t* rcx88;
    int64_t r13_89;
    int64_t rbp90;
    int64_t r15_91;
    int32_t* rbx92;
    int64_t v93;

    while (1) {
        v1 = reinterpret_cast<int64_t>(__return_address());
        __asm__("movdqa xmm6, [rip+0x0]");
        __asm__("movapd xmm5, [rip+0x0]");
        __asm__("movapd xmm4, [rip+0x0]");
        rdi2->f0 = fputc;
        rdi3 = reinterpret_cast<struct s1*>(&rdi2->f4);
        rdi3->f0 = g4;
        rdi4 = &rdi3->f4;
        rsi5 = reinterpret_cast<int32_t*>(8);
        do {
            (rbx7 + r13_6 * 0x7d0)[r13_6] = r14_8;
            ++r15_9;
            r13_6 = rbp10;
            if (rbp10 == 0x7d0) 
                goto addr_390_9;
            rbp10 = r13_6 + 1;
            if (r13_6 == fputc) {
                *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
            } else {
                rax11 = rbp10 & 0xfffffffffffffffe;
                *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("movdqa xmm0, [rip+0x0]");
                do {
                    __asm__("pxor xmm1, xmm1");
                    __asm__("psubd xmm1, xmm0");
                    __asm__("cvtdq2pd xmm1, xmm1");
                    __asm__("divpd xmm1, xmm4");
                    __asm__("addpd xmm1, xmm5");
                    __asm__("movupd [rdx+rcx*8], xmm1");
                    rcx12 = rcx12 + 2;
                    __asm__("paddd xmm0, xmm6");
                } while (rcx12 != rax11);
                if (rbp10 == rax11) 
                    goto addr_2e5_15;
            }
            do {
                __asm__("xorps xmm0, xmm0");
                __asm__("cvtsi2sd xmm0, ecx");
                __asm__("divsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm3");
                *rdi4 = *rsi5;
                ++rdi4;
                ++rsi5;
                ++rax11;
            } while (rax11 != r15_9);
            continue;
            addr_2e5_15:
        } while (r13_6 > 0x7ce);
        rdi2 = reinterpret_cast<struct s0*>(r13_6 * 0x3e88 + 8 + rbx13);
        fun_363();
    }
    addr_390_9:
    rax14 = fun_39f(0x3d0900, 8);
    r15_15 = rax14;
    fun_3b1(rax14);
    *reinterpret_cast<int32_t*>(&rax16) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v17 = rax16 * 8;
        rdx18 = reinterpret_cast<uint64_t>(rbx19 + rax16 * 8);
        rsi20 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(rbx21) + rax16 * 8 + 0x1e80988);
        rdi22 = reinterpret_cast<struct s4*>(rax16 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_23) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_23) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_24 = reinterpret_cast<void*>(r8_23 * 0x3e80);
            r13_25 = reinterpret_cast<uint64_t>(r15_15) + reinterpret_cast<int64_t>(r9_24) + 0x3e80;
            r9_26 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(r9_24) + reinterpret_cast<uint64_t>(r15_15));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_26) < reinterpret_cast<uint64_t>(rsi20))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(rdx18 < r13_25))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_27) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_27) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_530_27;
            }
            *reinterpret_cast<int32_t*>(&r11_27) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_27) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_26) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx28) + reinterpret_cast<int64_t>(rdi22) + reinterpret_cast<int64_t>(r9_24)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx29 + v17 + reinterpret_cast<int64_t>(r9_24)) < r13_25))) == fputc)) {
                do {
                    addr_530_27:
                    rdi22->f0 = rsi20->f0;
                    rdi30 = reinterpret_cast<struct s5*>(&rdi22->f4);
                    rsi31 = reinterpret_cast<struct s6*>(&rsi20->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi30->f0 = rsi31->f0;
                    rdi32 = reinterpret_cast<struct s4*>(&rdi30->f4);
                    rsi33 = reinterpret_cast<struct s3*>(&rsi31->f4);
                    rdi32->f0 = rsi33->f0;
                    rdi34 = reinterpret_cast<struct s5*>(&rdi32->f4);
                    rsi35 = reinterpret_cast<struct s6*>(&rsi33->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi34->f0 = rsi35->f0;
                    rdi22 = reinterpret_cast<struct s4*>(&rdi34->f4);
                    rsi20 = reinterpret_cast<struct s3*>(&rsi35->f4);
                    r11_27 = r11_27 + 2;
                } while (r11_27 != 0x7d0);
            } else {
                rdi22->f0 = rsi20->f0;
                rdi22 = reinterpret_cast<struct s4*>(&rdi22->f4);
                rsi20 = reinterpret_cast<struct s3*>(&rsi20->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_36) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_36) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi22->f0 = rsi20->f0;
                    rdi37 = reinterpret_cast<struct s5*>(&rdi22->f4);
                    rsi38 = reinterpret_cast<struct s6*>(&rsi20->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi37->f0 = rsi38->f0;
                    rdi22 = reinterpret_cast<struct s4*>(&rdi37->f4);
                    rsi20 = reinterpret_cast<struct s3*>(&rsi38->f4);
                    __asm__("movhpd xmm2, [r14+rax*8]");
                    __asm__("movupd xmm3, [r9+r10*8]");
                    __asm__("movupd xmm4, [r9+r10*8+0x10]");
                    __asm__("mulpd xmm1, xmm0");
                    __asm__("addpd xmm1, xmm3");
                    __asm__("mulpd xmm2, xmm0");
                    __asm__("addpd xmm2, xmm4");
                    __asm__("movupd [r9+r10*8], xmm1");
                    __asm__("movupd [r9+r10*8+0x10], xmm2");
                    r10_36 = r10_36 + 4;
                } while (r10_36 != 0x7d0);
                continue;
            }
            ++r8_23;
        } while (r8_23 != 0x7d0);
        ++rax16;
    } while (rax16 != 0x7d0);
    *reinterpret_cast<int32_t*>(&r8_39) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_39) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rax40 = reinterpret_cast<void*>(r8_39 * 0x3e80);
        rcx41 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax40) + reinterpret_cast<uint64_t>(r15_15));
        rdi42 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rax40) + reinterpret_cast<int64_t>(rbx43) - reinterpret_cast<uint64_t>(rcx41));
        *reinterpret_cast<int32_t*>(&rsi44) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi44) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx45) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(rdi42) >= 32) {
            do {
                __asm__("movups xmm0, [rcx+rsi*8]");
                __asm__("movups xmm1, [rcx+rsi*8+0x10]");
                __asm__("movups [rax+rsi*8], xmm0");
                __asm__("movups [rax+rsi*8+0x10], xmm1");
                rdx45 = reinterpret_cast<uint64_t>(rsi44) * 8 | 32;
                __asm__("movdqu xmm0, [rdx+rcx]");
                __asm__("movupd xmm1, [rdx+rcx+0x10]");
                __asm__("movdqu [rdx+rax], xmm0");
                __asm__("movupd [rdx+rax+0x10], xmm1");
                ++rsi44;
            } while (!reinterpret_cast<int1_t>(rsi44 == 0x7d0));
        } else {
            do {
                rsi46 = reinterpret_cast<struct s8*>(rdx45 * 8);
                rdi42->f0 = rsi46->f0;
                rsi47 = reinterpret_cast<struct s9*>(&rsi46->f4);
                rdi42->f4 = rsi47->f0;
                rsi48 = reinterpret_cast<struct s10*>(&rsi47->f4);
                rdi49 = reinterpret_cast<struct s11*>(reinterpret_cast<uint64_t>(rsi48) | 8);
                rdi49->f0 = rsi48->f0;
                rsi50 = reinterpret_cast<struct s12*>(&rsi48->f4);
                rdi49->f4 = rsi50->f0;
                rsi51 = reinterpret_cast<struct s13*>(&rsi50->f4);
                rdi52 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rsi51) | 16);
                rdi52->f0 = rsi51->f0;
                rdi53 = reinterpret_cast<struct s15*>(&rdi52->f4);
                rsi54 = &rsi51->f4;
                rdi53->f0 = *rsi54;
                rdi42 = reinterpret_cast<struct s7*>(&rdi53->f4);
                rsi44 = reinterpret_cast<struct s2*>(reinterpret_cast<uint64_t>(rsi54 + 1) | 24);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx45 = rdx45 + 4;
            } while (rdx45 != 0x7d0);
        }
        ++r8_39;
    } while (r8_39 != 0x7d0);
    rdi55 = r15_15;
    fun_688();
    *reinterpret_cast<int32_t*>(&r15_56) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_56) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        if (r15_56 == fputc) {
            rdi55->f0 = rsi44->f0;
            rdi57 = &rdi55->f4;
            rsi58 = &rsi44->f4;
        } else {
            rax59 = rbx60 + r15_56 * 0xfa0;
            *reinterpret_cast<int32_t*>(&rcx61) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx61) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rcx61 == fputc) {
                    rdi55->f0 = rsi44->f0;
                    rdi62 = &rdi55->f4;
                    rsi63 = &rsi44->f4;
                } else {
                    rdi55->f0 = rsi44->f0;
                    rdi62 = &rdi55->f4;
                    if (rcx61 != 1) 
                        goto addr_720_98; else 
                        goto addr_718_99;
                }
                addr_6e4_100:
                __asm__("divsd xmm0, [rdx+rcx*8]");
                *rdi62 = *rsi63;
                rdi55 = reinterpret_cast<struct s2*>(rdi62 + 1);
                rsi44 = reinterpret_cast<struct s2*>(rsi63 + 1);
                continue;
                addr_720_98:
                rdi62 = reinterpret_cast<int32_t*>(rcx61 & 0x7ffffffffffffffe);
                *reinterpret_cast<int32_t*>(&rsi63) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi63) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r8_64) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_64) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi62 = *rsi63;
                    rdi65 = reinterpret_cast<struct s2*>(rdi62 + 1);
                    rsi66 = reinterpret_cast<struct s2*>(rsi63 + 1);
                    __asm__("mulsd xmm1, [r9+rsi*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi65->f0 = rsi66->f0;
                    rdi67 = &rdi65->f4;
                    rsi68 = &rsi66->f4;
                    *rdi67 = *rsi68;
                    rdi69 = reinterpret_cast<struct s2*>(rdi67 + 1);
                    rsi70 = reinterpret_cast<struct s2*>(rsi68 + 1);
                    __asm__("mulsd xmm1, [r10+r9]");
                    __asm__("subsd xmm0, xmm1");
                    rdi69->f0 = rsi70->f0;
                    rdi62 = &rdi69->f4;
                    rsi63 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rsi70->f4) + 2);
                    r8_64 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_64) + 2);
                } while (r8_64 != rdi62);
                addr_77a_116:
                if ((*reinterpret_cast<unsigned char*>(&rcx61) & 1) != fputc) {
                    *rdi62 = *rsi63;
                    rsi71 = reinterpret_cast<struct s2*>(rsi63 + 1);
                    rdi72 = reinterpret_cast<struct s16*>(rbx73 + rcx61 * 0xfa0);
                    __asm__("mulsd xmm1, [rdi+rsi*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi72->f0 = rsi71->f0;
                    rdi62 = &rdi72->f4;
                    rsi63 = &rsi71->f4;
                    goto addr_6e4_100;
                }
                addr_718_99:
                *reinterpret_cast<int32_t*>(&rsi63) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi63) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_77a_116;
                ++rcx61;
            } while (rcx61 != r15_56);
            rcx41 = rax59 + r15_56 * 2;
            rdi55->f0 = rsi44->f0;
            rdi57 = &rdi55->f4;
            rsi58 = &rsi44->f4;
            if (r15_56 != 1) 
                goto addr_7e0_129; else 
                goto addr_7c0_130;
        }
        addr_843_131:
        r14_74 = r15_56 * 0x3e80;
        __asm__("ucomisd xmm0, xmm2");
        if (r14_74 + rbx75 < r14_74) {
            fun_6a5();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        *rdi57 = *rsi58;
        rdi55 = reinterpret_cast<struct s2*>(rdi57 + 1);
        rsi44 = reinterpret_cast<struct s2*>(rsi58 + 1);
        continue;
        addr_7e0_129:
        rsi58 = reinterpret_cast<int32_t*>(r15_56 & 0x7ffffffffffffffe);
        *reinterpret_cast<int32_t*>(&rdx45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx45) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi57) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi57) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi57 = *rsi58;
            rdi76 = reinterpret_cast<struct s2*>(rdi57 + 1);
            rsi77 = reinterpret_cast<struct s2*>(rsi58 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi76->f0 = rsi77->f0;
            rdi78 = &rdi76->f4;
            rsi79 = &rsi77->f4;
            *rdi78 = *rsi79;
            rdi80 = reinterpret_cast<struct s2*>(rdi78 + 1);
            rsi81 = reinterpret_cast<struct s2*>(rsi79 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi80->f0 = rsi81->f0;
            rsi58 = &rsi81->f4;
            rdx45 = rdx45 + 2;
            rdi57 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rdi80->f4) + 2);
        } while (rdi57 != rsi58);
        addr_82c_151:
        if ((*reinterpret_cast<unsigned char*>(&r15_56) & 1) != fputc) {
            *rdi57 = *rsi58;
            rdi82 = reinterpret_cast<struct s2*>(rdi57 + 1);
            rsi83 = reinterpret_cast<struct s2*>(rsi58 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi82->f0 = rsi83->f0;
            rdi57 = &rdi82->f4;
            rsi58 = &rsi83->f4;
            goto addr_843_131;
        }
        addr_7c0_130:
        *reinterpret_cast<int32_t*>(&rdx45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx45) + 4) = reinterpret_cast<int32_t>(fputc);
        goto addr_82c_151;
        ++r15_56;
    } while (r15_56 != 0x7d0);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4) >= 43 && **v84 == fputc) {
        rax85 = g894;
        r14_86 = *rax85;
        *reinterpret_cast<int32_t*>(&r12_87) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_87) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx88 = r14_86;
        fun_8b6(0x89e, 22, 1, rcx88);
        *reinterpret_cast<int32_t*>(&r13_89) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_89) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_8d1(r14_86, 0x8bd, 0x8c4, rcx88);
        do {
            rbp90 = r13_89 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_91) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_91) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_91 + rbp90) * 0xcccccccd) <= 0xccccccc) {
                    fun_90b(10, r14_86, 0x8c4, rcx88);
                }
                __asm__("movq xmm0, [rax+r15*8]");
                fun_92c(r14_86, 0x925, 0x8c4, rcx88);
                ++r15_91;
            } while (r15_91 != r12_87);
            ++r13_89;
            ++r12_87;
        } while (r13_89 != 0x7d0);
        fun_95b(r14_86, 0x94a, 0x951, rcx88);
        *reinterpret_cast<int32_t*>(&rsi44) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi44) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx45) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx45) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx41 = r14_86;
        fun_974(0x962, 22, 1, rcx41);
    }
    fun_87c(rbx92, rsi44, rdx45, rcx41);
    goto v93;
}

void fun_87c(int32_t* rdi, struct s2* rsi, uint64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_90b(int64_t rdi, int32_t* rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t rbp9;
    int32_t* r14_10;
    int32_t* r14_11;
    int32_t* r14_12;
    int32_t* rbx13;
    int64_t v14;

    while (1) {
        __asm__("movq xmm0, [rax+r15*8]");
        fun_92c(r14_5, 0x925, rdx, rcx);
        ++r15_6;
        if (r15_6 == r12_7) {
            ++r13_8;
            ++r12_7;
            if (r13_8 == 0x7d0) 
                break;
            rbp9 = r13_8 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_6) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_6) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_6 + rbp9) * 0xcccccccd) > 0xccccccc) 
            continue;
        fun_90b(10, r14_10, rdx, rcx);
    }
    fun_95b(r14_11, 0x94a, 0x951, rcx);
    fun_974(0x962, 22, 1, r14_12);
    fun_87c(rbx13, 22, 1, r14_12);
    goto v14;
}

void fun_95b(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r14_5;
    int32_t* rbx6;
    int64_t v7;

    fun_974(0x962, 22, 1, r14_5);
    fun_87c(rbx6, 22, 1, r14_5);
    goto v7;
}

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

struct s2* fun_39f(int64_t rdi, int64_t rsi) {
    int64_t v3;
    struct s2* r15_4;
    struct s2* rax5;
    struct s2* rax6;
    int64_t rax7;
    int64_t v8;
    uint64_t rdx9;
    int64_t rbx10;
    struct s17* rsi11;
    void* rbx12;
    struct s18* rdi13;
    int64_t r8_14;
    void* r9_15;
    uint64_t r13_16;
    struct s17* r9_17;
    int64_t r11_18;
    void* rbx19;
    int64_t rbx20;
    struct s19* rdi21;
    struct s20* rsi22;
    struct s18* rdi23;
    struct s17* rsi24;
    struct s19* rdi25;
    struct s20* rsi26;
    int64_t r10_27;
    struct s19* rdi28;
    struct s20* rsi29;
    int64_t r8_30;
    void* rax31;
    int32_t* rcx32;
    struct s21* rdi33;
    void* rbx34;
    struct s2* rsi35;
    uint64_t rdx36;
    struct s22* rsi37;
    struct s23* rsi38;
    struct s24* rsi39;
    struct s25* rdi40;
    struct s26* rsi41;
    struct s27* rsi42;
    struct s28* rdi43;
    struct s29* rdi44;
    int32_t* rsi45;
    struct s2* rdi46;
    uint64_t r15_47;
    int32_t* rdi48;
    int32_t* rsi49;
    int32_t* rax50;
    int32_t* rbx51;
    uint64_t rcx52;
    int32_t* rdi53;
    int32_t* rsi54;
    int32_t* r8_55;
    struct s2* rdi56;
    struct s2* rsi57;
    int32_t* rdi58;
    int32_t* rsi59;
    struct s2* rdi60;
    struct s2* rsi61;
    struct s2* rsi62;
    struct s30* rdi63;
    int32_t* rbx64;
    uint64_t r14_65;
    int64_t rbx66;
    struct s2* rdi67;
    struct s2* rsi68;
    int32_t* rdi69;
    int32_t* rsi70;
    struct s2* rdi71;
    struct s2* rsi72;
    struct s2* rdi73;
    struct s2* rsi74;
    signed char** v75;
    int32_t** rax76;
    int32_t* r14_77;
    int64_t r12_78;
    int32_t* rcx79;
    int64_t r13_80;
    int64_t rbp81;
    int64_t r15_82;
    int32_t* rbx83;
    int64_t v84;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r15_4 = rax5;
    fun_3b1(rax6);
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v8 = rax7 * 8;
        rdx9 = reinterpret_cast<uint64_t>(rbx10 + rax7 * 8);
        rsi11 = reinterpret_cast<struct s17*>(reinterpret_cast<int64_t>(rbx12) + rax7 * 8 + 0x1e80988);
        rdi13 = reinterpret_cast<struct s18*>(rax7 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_15 = reinterpret_cast<void*>(r8_14 * 0x3e80);
            r13_16 = reinterpret_cast<uint64_t>(r15_4) + reinterpret_cast<int64_t>(r9_15) + 0x3e80;
            r9_17 = reinterpret_cast<struct s17*>(reinterpret_cast<int64_t>(r9_15) + reinterpret_cast<uint64_t>(r15_4));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_17) < reinterpret_cast<uint64_t>(rsi11))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(rdx9 < r13_16))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_18) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_18) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_530_6;
            }
            *reinterpret_cast<int32_t*>(&r11_18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_18) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_17) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx19) + reinterpret_cast<int64_t>(rdi13) + reinterpret_cast<int64_t>(r9_15)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx20 + v8 + reinterpret_cast<int64_t>(r9_15)) < r13_16))) == fputc)) {
                do {
                    addr_530_6:
                    rdi13->f0 = rsi11->f0;
                    rdi21 = reinterpret_cast<struct s19*>(&rdi13->f4);
                    rsi22 = reinterpret_cast<struct s20*>(&rsi11->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi21->f0 = rsi22->f0;
                    rdi23 = reinterpret_cast<struct s18*>(&rdi21->f4);
                    rsi24 = reinterpret_cast<struct s17*>(&rsi22->f4);
                    rdi23->f0 = rsi24->f0;
                    rdi25 = reinterpret_cast<struct s19*>(&rdi23->f4);
                    rsi26 = reinterpret_cast<struct s20*>(&rsi24->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi25->f0 = rsi26->f0;
                    rdi13 = reinterpret_cast<struct s18*>(&rdi25->f4);
                    rsi11 = reinterpret_cast<struct s17*>(&rsi26->f4);
                    r11_18 = r11_18 + 2;
                } while (r11_18 != 0x7d0);
            } else {
                rdi13->f0 = rsi11->f0;
                rdi13 = reinterpret_cast<struct s18*>(&rdi13->f4);
                rsi11 = reinterpret_cast<struct s17*>(&rsi11->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_27) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_27) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi13->f0 = rsi11->f0;
                    rdi28 = reinterpret_cast<struct s19*>(&rdi13->f4);
                    rsi29 = reinterpret_cast<struct s20*>(&rsi11->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi28->f0 = rsi29->f0;
                    rdi13 = reinterpret_cast<struct s18*>(&rdi28->f4);
                    rsi11 = reinterpret_cast<struct s17*>(&rsi29->f4);
                    __asm__("movhpd xmm2, [r14+rax*8]");
                    __asm__("movupd xmm3, [r9+r10*8]");
                    __asm__("movupd xmm4, [r9+r10*8+0x10]");
                    __asm__("mulpd xmm1, xmm0");
                    __asm__("addpd xmm1, xmm3");
                    __asm__("mulpd xmm2, xmm0");
                    __asm__("addpd xmm2, xmm4");
                    __asm__("movupd [r9+r10*8], xmm1");
                    __asm__("movupd [r9+r10*8+0x10], xmm2");
                    r10_27 = r10_27 + 4;
                } while (r10_27 != 0x7d0);
                continue;
            }
            ++r8_14;
        } while (r8_14 != 0x7d0);
        ++rax7;
    } while (rax7 != 0x7d0);
    *reinterpret_cast<int32_t*>(&r8_30) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_30) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rax31 = reinterpret_cast<void*>(r8_30 * 0x3e80);
        rcx32 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax31) + reinterpret_cast<uint64_t>(r15_4));
        rdi33 = reinterpret_cast<struct s21*>(reinterpret_cast<int64_t>(rax31) + reinterpret_cast<int64_t>(rbx34) - reinterpret_cast<uint64_t>(rcx32));
        *reinterpret_cast<int32_t*>(&rsi35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi35) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx36) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx36) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(rdi33) >= 32) {
            do {
                __asm__("movups xmm0, [rcx+rsi*8]");
                __asm__("movups xmm1, [rcx+rsi*8+0x10]");
                __asm__("movups [rax+rsi*8], xmm0");
                __asm__("movups [rax+rsi*8+0x10], xmm1");
                rdx36 = reinterpret_cast<uint64_t>(rsi35) * 8 | 32;
                __asm__("movdqu xmm0, [rdx+rcx]");
                __asm__("movupd xmm1, [rdx+rcx+0x10]");
                __asm__("movdqu [rdx+rax], xmm0");
                __asm__("movupd [rdx+rax+0x10], xmm1");
                ++rsi35;
            } while (!reinterpret_cast<int1_t>(rsi35 == 0x7d0));
        } else {
            do {
                rsi37 = reinterpret_cast<struct s22*>(rdx36 * 8);
                rdi33->f0 = rsi37->f0;
                rsi38 = reinterpret_cast<struct s23*>(&rsi37->f4);
                rdi33->f4 = rsi38->f0;
                rsi39 = reinterpret_cast<struct s24*>(&rsi38->f4);
                rdi40 = reinterpret_cast<struct s25*>(reinterpret_cast<uint64_t>(rsi39) | 8);
                rdi40->f0 = rsi39->f0;
                rsi41 = reinterpret_cast<struct s26*>(&rsi39->f4);
                rdi40->f4 = rsi41->f0;
                rsi42 = reinterpret_cast<struct s27*>(&rsi41->f4);
                rdi43 = reinterpret_cast<struct s28*>(reinterpret_cast<uint64_t>(rsi42) | 16);
                rdi43->f0 = rsi42->f0;
                rdi44 = reinterpret_cast<struct s29*>(&rdi43->f4);
                rsi45 = &rsi42->f4;
                rdi44->f0 = *rsi45;
                rdi33 = reinterpret_cast<struct s21*>(&rdi44->f4);
                rsi35 = reinterpret_cast<struct s2*>(reinterpret_cast<uint64_t>(rsi45 + 1) | 24);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx36 = rdx36 + 4;
            } while (rdx36 != 0x7d0);
        }
        ++r8_30;
    } while (r8_30 != 0x7d0);
    rdi46 = r15_4;
    fun_688();
    *reinterpret_cast<int32_t*>(&r15_47) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_47) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        if (r15_47 == fputc) {
            rdi46->f0 = rsi35->f0;
            rdi48 = &rdi46->f4;
            rsi49 = &rsi35->f4;
        } else {
            rax50 = rbx51 + r15_47 * 0xfa0;
            *reinterpret_cast<int32_t*>(&rcx52) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx52) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rcx52 == fputc) {
                    rdi46->f0 = rsi35->f0;
                    rdi53 = &rdi46->f4;
                    rsi54 = &rsi35->f4;
                } else {
                    rdi46->f0 = rsi35->f0;
                    rdi53 = &rdi46->f4;
                    if (rcx52 != 1) 
                        goto addr_720_77; else 
                        goto addr_718_78;
                }
                addr_6e4_79:
                __asm__("divsd xmm0, [rdx+rcx*8]");
                *rdi53 = *rsi54;
                rdi46 = reinterpret_cast<struct s2*>(rdi53 + 1);
                rsi35 = reinterpret_cast<struct s2*>(rsi54 + 1);
                continue;
                addr_720_77:
                rdi53 = reinterpret_cast<int32_t*>(rcx52 & 0x7ffffffffffffffe);
                *reinterpret_cast<int32_t*>(&rsi54) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi54) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r8_55) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_55) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi53 = *rsi54;
                    rdi56 = reinterpret_cast<struct s2*>(rdi53 + 1);
                    rsi57 = reinterpret_cast<struct s2*>(rsi54 + 1);
                    __asm__("mulsd xmm1, [r9+rsi*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi56->f0 = rsi57->f0;
                    rdi58 = &rdi56->f4;
                    rsi59 = &rsi57->f4;
                    *rdi58 = *rsi59;
                    rdi60 = reinterpret_cast<struct s2*>(rdi58 + 1);
                    rsi61 = reinterpret_cast<struct s2*>(rsi59 + 1);
                    __asm__("mulsd xmm1, [r10+r9]");
                    __asm__("subsd xmm0, xmm1");
                    rdi60->f0 = rsi61->f0;
                    rdi53 = &rdi60->f4;
                    rsi54 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rsi61->f4) + 2);
                    r8_55 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_55) + 2);
                } while (r8_55 != rdi53);
                addr_77a_95:
                if ((*reinterpret_cast<unsigned char*>(&rcx52) & 1) != fputc) {
                    *rdi53 = *rsi54;
                    rsi62 = reinterpret_cast<struct s2*>(rsi54 + 1);
                    rdi63 = reinterpret_cast<struct s30*>(rbx64 + rcx52 * 0xfa0);
                    __asm__("mulsd xmm1, [rdi+rsi*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi63->f0 = rsi62->f0;
                    rdi53 = &rdi63->f4;
                    rsi54 = &rsi62->f4;
                    goto addr_6e4_79;
                }
                addr_718_78:
                *reinterpret_cast<int32_t*>(&rsi54) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi54) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_77a_95;
                ++rcx52;
            } while (rcx52 != r15_47);
            rcx32 = rax50 + r15_47 * 2;
            rdi46->f0 = rsi35->f0;
            rdi48 = &rdi46->f4;
            rsi49 = &rsi35->f4;
            if (r15_47 != 1) 
                goto addr_7e0_108; else 
                goto addr_7c0_109;
        }
        addr_843_110:
        r14_65 = r15_47 * 0x3e80;
        __asm__("ucomisd xmm0, xmm2");
        if (r14_65 + rbx66 < r14_65) {
            fun_6a5();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        *rdi48 = *rsi49;
        rdi46 = reinterpret_cast<struct s2*>(rdi48 + 1);
        rsi35 = reinterpret_cast<struct s2*>(rsi49 + 1);
        continue;
        addr_7e0_108:
        rsi49 = reinterpret_cast<int32_t*>(r15_47 & 0x7ffffffffffffffe);
        *reinterpret_cast<int32_t*>(&rdx36) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx36) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi48) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi48) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi48 = *rsi49;
            rdi67 = reinterpret_cast<struct s2*>(rdi48 + 1);
            rsi68 = reinterpret_cast<struct s2*>(rsi49 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi67->f0 = rsi68->f0;
            rdi69 = &rdi67->f4;
            rsi70 = &rsi68->f4;
            *rdi69 = *rsi70;
            rdi71 = reinterpret_cast<struct s2*>(rdi69 + 1);
            rsi72 = reinterpret_cast<struct s2*>(rsi70 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi71->f0 = rsi72->f0;
            rsi49 = &rsi72->f4;
            rdx36 = rdx36 + 2;
            rdi48 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rdi71->f4) + 2);
        } while (rdi48 != rsi49);
        addr_82c_130:
        if ((*reinterpret_cast<unsigned char*>(&r15_47) & 1) != fputc) {
            *rdi48 = *rsi49;
            rdi73 = reinterpret_cast<struct s2*>(rdi48 + 1);
            rsi74 = reinterpret_cast<struct s2*>(rsi49 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi73->f0 = rsi74->f0;
            rdi48 = &rdi73->f4;
            rsi49 = &rsi74->f4;
            goto addr_843_110;
        }
        addr_7c0_109:
        *reinterpret_cast<int32_t*>(&rdx36) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx36) + 4) = reinterpret_cast<int32_t>(fputc);
        goto addr_82c_130;
        ++r15_47;
    } while (r15_47 != 0x7d0);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && **v75 == fputc) {
        rax76 = g894;
        r14_77 = *rax76;
        *reinterpret_cast<int32_t*>(&r12_78) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_78) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx79 = r14_77;
        fun_8b6(0x89e, 22, 1, rcx79);
        *reinterpret_cast<int32_t*>(&r13_80) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_80) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_8d1(r14_77, 0x8bd, 0x8c4, rcx79);
        do {
            rbp81 = r13_80 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_82) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_82) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_82 + rbp81) * 0xcccccccd) <= 0xccccccc) {
                    fun_90b(10, r14_77, 0x8c4, rcx79);
                }
                __asm__("movq xmm0, [rax+r15*8]");
                fun_92c(r14_77, 0x925, 0x8c4, rcx79);
                ++r15_82;
            } while (r15_82 != r12_78);
            ++r13_80;
            ++r12_78;
        } while (r13_80 != 0x7d0);
        fun_95b(r14_77, 0x94a, 0x951, rcx79);
        *reinterpret_cast<int32_t*>(&rsi35) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi35) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx36) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx36) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx32 = r14_77;
        fun_974(0x962, 22, 1, rcx32);
    }
    fun_87c(rbx83, rsi35, rdx36, rcx32);
    goto v84;
}

struct s31 {
    int32_t f0;
    int32_t f4;
};

void fun_688() {
    int64_t v1;
    uint64_t r15_2;
    struct s2* rdi3;
    struct s2* rsi4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* rax7;
    int32_t* rbx8;
    uint64_t rcx9;
    int32_t* rdi10;
    int32_t* rsi11;
    uint64_t r12_12;
    int32_t* r8_13;
    struct s2* rdi14;
    struct s2* rsi15;
    int32_t* rdi16;
    int32_t* rsi17;
    struct s2* rdi18;
    struct s2* rsi19;
    struct s2* rsi20;
    struct s31* rdi21;
    int32_t* rbx22;
    int32_t* rcx23;
    uint64_t r14_24;
    int64_t rbx25;
    uint64_t r12_26;
    uint64_t rdx27;
    struct s2* rdi28;
    struct s2* rsi29;
    int32_t* rdi30;
    int32_t* rsi31;
    struct s2* rdi32;
    struct s2* rsi33;
    struct s2* rdi34;
    struct s2* rsi35;
    signed char** v36;
    int32_t** rax37;
    int32_t* r14_38;
    int64_t r12_39;
    int32_t* rcx40;
    int64_t r13_41;
    int64_t rbp42;
    int64_t r15_43;
    int32_t* rbx44;
    int64_t v45;

    v1 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(&r15_2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_2) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        if (r15_2 == fputc) {
            rdi3->f0 = rsi4->f0;
            rdi5 = &rdi3->f4;
            rsi6 = &rsi4->f4;
        } else {
            rax7 = rbx8 + r15_2 * 0xfa0;
            *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rcx9 == fputc) {
                    rdi3->f0 = rsi4->f0;
                    rdi10 = &rdi3->f4;
                    rsi11 = &rsi4->f4;
                } else {
                    rdi3->f0 = rsi4->f0;
                    rdi10 = &rdi3->f4;
                    if (rcx9 != 1) 
                        goto addr_720_16; else 
                        goto addr_718_17;
                }
                addr_6e4_18:
                __asm__("divsd xmm0, [rdx+rcx*8]");
                *rdi10 = *rsi11;
                rdi3 = reinterpret_cast<struct s2*>(rdi10 + 1);
                rsi4 = reinterpret_cast<struct s2*>(rsi11 + 1);
                continue;
                addr_720_16:
                rdi10 = reinterpret_cast<int32_t*>(rcx9 & r12_12);
                *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r8_13) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi10 = *rsi11;
                    rdi14 = reinterpret_cast<struct s2*>(rdi10 + 1);
                    rsi15 = reinterpret_cast<struct s2*>(rsi11 + 1);
                    __asm__("mulsd xmm1, [r9+rsi*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi14->f0 = rsi15->f0;
                    rdi16 = &rdi14->f4;
                    rsi17 = &rsi15->f4;
                    *rdi16 = *rsi17;
                    rdi18 = reinterpret_cast<struct s2*>(rdi16 + 1);
                    rsi19 = reinterpret_cast<struct s2*>(rsi17 + 1);
                    __asm__("mulsd xmm1, [r10+r9]");
                    __asm__("subsd xmm0, xmm1");
                    rdi18->f0 = rsi19->f0;
                    rdi10 = &rdi18->f4;
                    rsi11 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rsi19->f4) + 2);
                    r8_13 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_13) + 2);
                } while (r8_13 != rdi10);
                addr_77a_34:
                if ((*reinterpret_cast<unsigned char*>(&rcx9) & 1) != fputc) {
                    *rdi10 = *rsi11;
                    rsi20 = reinterpret_cast<struct s2*>(rsi11 + 1);
                    rdi21 = reinterpret_cast<struct s31*>(rbx22 + rcx9 * 0xfa0);
                    __asm__("mulsd xmm1, [rdi+rsi*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi21->f0 = rsi20->f0;
                    rdi10 = &rdi21->f4;
                    rsi11 = &rsi20->f4;
                    goto addr_6e4_18;
                }
                addr_718_17:
                *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_77a_34;
                ++rcx9;
            } while (rcx9 != r15_2);
            rcx23 = rax7 + r15_2 * 2;
            rdi3->f0 = rsi4->f0;
            rdi5 = &rdi3->f4;
            rsi6 = &rsi4->f4;
            if (r15_2 != 1) 
                goto addr_7e0_47; else 
                goto addr_7c0_48;
        }
        addr_843_49:
        r14_24 = r15_2 * 0x3e80;
        __asm__("ucomisd xmm0, xmm2");
        if (r14_24 + rbx25 < r14_24) {
            fun_6a5();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        *rdi5 = *rsi6;
        rdi3 = reinterpret_cast<struct s2*>(rdi5 + 1);
        rsi4 = reinterpret_cast<struct s2*>(rsi6 + 1);
        continue;
        addr_7e0_47:
        rsi6 = reinterpret_cast<int32_t*>(r15_2 & r12_26);
        *reinterpret_cast<int32_t*>(&rdx27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi5) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi5 = *rsi6;
            rdi28 = reinterpret_cast<struct s2*>(rdi5 + 1);
            rsi29 = reinterpret_cast<struct s2*>(rsi6 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi28->f0 = rsi29->f0;
            rdi30 = &rdi28->f4;
            rsi31 = &rsi29->f4;
            *rdi30 = *rsi31;
            rdi32 = reinterpret_cast<struct s2*>(rdi30 + 1);
            rsi33 = reinterpret_cast<struct s2*>(rsi31 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi32->f0 = rsi33->f0;
            rsi6 = &rsi33->f4;
            rdx27 = rdx27 + 2;
            rdi5 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rdi32->f4) + 2);
        } while (rdi5 != rsi6);
        addr_82c_69:
        if ((*reinterpret_cast<unsigned char*>(&r15_2) & 1) != fputc) {
            *rdi5 = *rsi6;
            rdi34 = reinterpret_cast<struct s2*>(rdi5 + 1);
            rsi35 = reinterpret_cast<struct s2*>(rsi6 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi34->f0 = rsi35->f0;
            rdi5 = &rdi34->f4;
            rsi6 = &rsi35->f4;
            goto addr_843_49;
        }
        addr_7c0_48:
        *reinterpret_cast<int32_t*>(&rdx27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
        goto addr_82c_69;
        ++r15_2;
    } while (r15_2 != 0x7d0);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4) >= 43 && **v36 == fputc) {
        rax37 = g894;
        r14_38 = *rax37;
        *reinterpret_cast<int32_t*>(&r12_39) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_39) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx40 = r14_38;
        fun_8b6(0x89e, 22, 1, rcx40);
        *reinterpret_cast<int32_t*>(&r13_41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_41) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_8d1(r14_38, 0x8bd, 0x8c4, rcx40);
        do {
            rbp42 = r13_41 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_43) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_43) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_43 + rbp42) * 0xcccccccd) <= 0xccccccc) {
                    fun_90b(10, r14_38, 0x8c4, rcx40);
                }
                __asm__("movq xmm0, [rax+r15*8]");
                fun_92c(r14_38, 0x925, 0x8c4, rcx40);
                ++r15_43;
            } while (r15_43 != r12_39);
            ++r13_41;
            ++r12_39;
        } while (r13_41 != 0x7d0);
        fun_95b(r14_38, 0x94a, 0x951, rcx40);
        *reinterpret_cast<int32_t*>(&rsi4) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx27) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx23 = r14_38;
        fun_974(0x962, 22, 1, rcx23);
    }
    fun_87c(rbx44, rsi4, rdx27, rcx23);
    goto v45;
}

struct s32 {
    int32_t f0;
    int32_t f4;
};

void fun_6a5() {
    int64_t v1;
    int32_t* rdi2;
    int32_t* rsi3;
    struct s2* rdi4;
    struct s2* rsi5;
    uint64_t r15_6;
    int32_t* rax7;
    int32_t* rbx8;
    uint64_t rcx9;
    int32_t* rdi10;
    int32_t* rsi11;
    uint64_t r12_12;
    int32_t* r8_13;
    struct s2* rdi14;
    struct s2* rsi15;
    int32_t* rdi16;
    int32_t* rsi17;
    struct s2* rdi18;
    struct s2* rsi19;
    struct s2* rsi20;
    struct s32* rdi21;
    int32_t* rbx22;
    int32_t* rcx23;
    uint64_t r14_24;
    int64_t rbx25;
    uint64_t r12_26;
    uint64_t rdx27;
    struct s2* rdi28;
    struct s2* rsi29;
    int32_t* rdi30;
    int32_t* rsi31;
    struct s2* rdi32;
    struct s2* rsi33;
    struct s2* rdi34;
    struct s2* rsi35;
    signed char** v36;
    int32_t** rax37;
    int32_t* r14_38;
    int64_t r12_39;
    int32_t* rcx40;
    int64_t r13_41;
    int64_t rbp42;
    int64_t r15_43;
    int32_t* rbx44;
    int64_t v45;

    while (1) {
        v1 = reinterpret_cast<int64_t>(__return_address());
        __asm__("xorpd xmm2, xmm2");
        while (1) {
            *rdi2 = *rsi3;
            rdi4 = reinterpret_cast<struct s2*>(rdi2 + 1);
            rsi5 = reinterpret_cast<struct s2*>(rsi3 + 1);
            ++r15_6;
            if (r15_6 == 0x7d0) 
                goto addr_860_6;
            if (r15_6 == fputc) {
                rdi4->f0 = rsi5->f0;
                rdi2 = &rdi4->f4;
                rsi3 = &rsi5->f4;
            } else {
                rax7 = rbx8 + r15_6 * 0xfa0;
                *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    if (rcx9 == fputc) {
                        rdi4->f0 = rsi5->f0;
                        rdi10 = &rdi4->f4;
                        rsi11 = &rsi5->f4;
                    } else {
                        rdi4->f0 = rsi5->f0;
                        rdi10 = &rdi4->f4;
                        if (rcx9 != 1) 
                            goto addr_720_21; else 
                            goto addr_718_22;
                    }
                    addr_6e4_23:
                    __asm__("divsd xmm0, [rdx+rcx*8]");
                    *rdi10 = *rsi11;
                    rdi4 = reinterpret_cast<struct s2*>(rdi10 + 1);
                    rsi5 = reinterpret_cast<struct s2*>(rsi11 + 1);
                    continue;
                    addr_720_21:
                    rdi10 = reinterpret_cast<int32_t*>(rcx9 & r12_12);
                    *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(&r8_13) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        *rdi10 = *rsi11;
                        rdi14 = reinterpret_cast<struct s2*>(rdi10 + 1);
                        rsi15 = reinterpret_cast<struct s2*>(rsi11 + 1);
                        __asm__("mulsd xmm1, [r9+rsi*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi14->f0 = rsi15->f0;
                        rdi16 = &rdi14->f4;
                        rsi17 = &rsi15->f4;
                        *rdi16 = *rsi17;
                        rdi18 = reinterpret_cast<struct s2*>(rdi16 + 1);
                        rsi19 = reinterpret_cast<struct s2*>(rsi17 + 1);
                        __asm__("mulsd xmm1, [r10+r9]");
                        __asm__("subsd xmm0, xmm1");
                        rdi18->f0 = rsi19->f0;
                        rdi10 = &rdi18->f4;
                        rsi11 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rsi19->f4) + 2);
                        r8_13 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_13) + 2);
                    } while (r8_13 != rdi10);
                    addr_77a_39:
                    if ((*reinterpret_cast<unsigned char*>(&rcx9) & 1) != fputc) {
                        *rdi10 = *rsi11;
                        rsi20 = reinterpret_cast<struct s2*>(rsi11 + 1);
                        rdi21 = reinterpret_cast<struct s32*>(rbx22 + rcx9 * 0xfa0);
                        __asm__("mulsd xmm1, [rdi+rsi*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi21->f0 = rsi20->f0;
                        rdi10 = &rdi21->f4;
                        rsi11 = &rsi20->f4;
                        goto addr_6e4_23;
                    }
                    addr_718_22:
                    *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
                    goto addr_77a_39;
                    ++rcx9;
                } while (rcx9 != r15_6);
                rcx23 = rax7 + r15_6 * 2;
                rdi4->f0 = rsi5->f0;
                rdi2 = &rdi4->f4;
                rsi3 = &rsi5->f4;
                if (r15_6 != 1) 
                    goto addr_7e0_52; else 
                    goto addr_7c0_53;
            }
            addr_843_54:
            r14_24 = r15_6 * 0x3e80;
            __asm__("ucomisd xmm0, xmm2");
            if (r14_24 + rbx25 < r14_24) 
                break;
            __asm__("sqrtsd xmm0, xmm0");
            continue;
            addr_7e0_52:
            rsi3 = reinterpret_cast<int32_t*>(r15_6 & r12_26);
            *reinterpret_cast<int32_t*>(&rdx27) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&rdi2) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi2 = *rsi3;
                rdi28 = reinterpret_cast<struct s2*>(rdi2 + 1);
                rsi29 = reinterpret_cast<struct s2*>(rsi3 + 1);
                __asm__("mulsd xmm1, xmm1");
                __asm__("subsd xmm0, xmm1");
                rdi28->f0 = rsi29->f0;
                rdi30 = &rdi28->f4;
                rsi31 = &rsi29->f4;
                *rdi30 = *rsi31;
                rdi32 = reinterpret_cast<struct s2*>(rdi30 + 1);
                rsi33 = reinterpret_cast<struct s2*>(rsi31 + 1);
                __asm__("mulsd xmm1, xmm1");
                __asm__("subsd xmm0, xmm1");
                rdi32->f0 = rsi33->f0;
                rsi3 = &rsi33->f4;
                rdx27 = rdx27 + 2;
                rdi2 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rdi32->f4) + 2);
            } while (rdi2 != rsi3);
            addr_82c_69:
            if ((*reinterpret_cast<unsigned char*>(&r15_6) & 1) != fputc) {
                *rdi2 = *rsi3;
                rdi34 = reinterpret_cast<struct s2*>(rdi2 + 1);
                rsi35 = reinterpret_cast<struct s2*>(rsi3 + 1);
                __asm__("mulsd xmm1, xmm1");
                __asm__("subsd xmm0, xmm1");
                rdi34->f0 = rsi35->f0;
                rdi2 = &rdi34->f4;
                rsi3 = &rsi35->f4;
                goto addr_843_54;
            }
            addr_7c0_53:
            *reinterpret_cast<int32_t*>(&rdx27) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_82c_69;
        }
        fun_6a5();
    }
    addr_860_6:
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4) >= 43 && **v36 == fputc) {
        rax37 = g894;
        r14_38 = *rax37;
        *reinterpret_cast<int32_t*>(&r12_39) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_39) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx40 = r14_38;
        fun_8b6(0x89e, 22, 1, rcx40);
        *reinterpret_cast<int32_t*>(&r13_41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_41) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_8d1(r14_38, 0x8bd, 0x8c4, rcx40);
        do {
            rbp42 = r13_41 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_43) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_43) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_43 + rbp42) * 0xcccccccd) <= 0xccccccc) {
                    fun_90b(10, r14_38, 0x8c4, rcx40);
                }
                __asm__("movq xmm0, [rax+r15*8]");
                fun_92c(r14_38, 0x925, 0x8c4, rcx40);
                ++r15_43;
            } while (r15_43 != r12_39);
            ++r13_41;
            ++r12_39;
        } while (r13_41 != 0x7d0);
        fun_95b(r14_38, 0x94a, 0x951, rcx40);
        *reinterpret_cast<int32_t*>(&rsi5) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx27) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx23 = r14_38;
        fun_974(0x962, 22, 1, rcx23);
    }
    fun_87c(rbx44, rsi5, rdx27, rcx23);
    goto v45;
}

void fun_8b6(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int32_t* r14_6;
    int64_t rbp7;
    int64_t r15_8;
    int32_t* r14_9;
    int32_t* r14_10;
    int64_t r12_11;
    int32_t* r14_12;
    int32_t* r14_13;
    int32_t* rbx14;
    int64_t v15;

    *reinterpret_cast<int32_t*>(&r13_5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_8d1(r14_6, 0x8bd, 0x8c4, rcx);
    do {
        rbp7 = r13_5 * 0x7d0;
        *reinterpret_cast<int32_t*>(&r15_8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_8) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_8 + rbp7) * 0xcccccccd) <= 0xccccccc) {
                fun_90b(10, r14_9, 0x8c4, rcx);
            }
            __asm__("movq xmm0, [rax+r15*8]");
            fun_92c(r14_10, 0x925, 0x8c4, rcx);
            ++r15_8;
        } while (r15_8 != r12_11);
        ++r13_5;
        ++r12_11;
    } while (r13_5 != 0x7d0);
    fun_95b(r14_12, 0x94a, 0x951, rcx);
    fun_974(0x962, 22, 1, r14_13);
    fun_87c(rbx14, 22, 1, r14_13);
    goto v15;
}

void fun_92c(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t rbp8;
    int32_t* r14_9;
    int32_t* r14_10;
    int32_t* r14_11;
    int32_t* r14_12;
    int32_t* rbx13;
    int64_t v14;

    while (1) {
        ++r15_5;
        if (r15_5 == r12_6) {
            ++r13_7;
            ++r12_6;
            if (r13_7 == 0x7d0) 
                break;
            rbp8 = r13_7 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_5) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_5 + rbp8) * 0xcccccccd) <= 0xccccccc) {
            fun_90b(10, r14_9, rdx, rcx);
        }
        __asm__("movq xmm0, [rax+r15*8]");
        fun_92c(r14_10, 0x925, rdx, rcx);
    }
    fun_95b(r14_11, 0x94a, 0x951, rcx);
    fun_974(0x962, 22, 1, r14_12);
    fun_87c(rbx13, 22, 1, r14_12);
    goto v14;
}

void fun_974(int64_t rdi, struct s2* rsi, uint64_t rdx, int32_t* rcx) {
    int32_t* rbx5;
    int64_t v6;

    fun_87c(rbx5, rsi, rdx, rcx);
    goto v6;
}

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

void fun_226(struct s33* rdi, struct s34* rsi) {
    int64_t v3;
    int32_t* rbx4;
    int32_t* rax5;
    uint64_t r15_6;
    uint64_t r13_7;
    struct s35* rdi8;
    struct s36* rsi9;
    int32_t* rdi10;
    int32_t* rsi11;
    uint64_t rbp12;
    uint64_t rax13;
    uint64_t rcx14;
    struct s37* rdi15;
    struct s38* rdi16;
    struct s2* rax17;
    struct s2* r15_18;
    int64_t rax19;
    void* v20;
    int32_t* rdx21;
    struct s39* rsi22;
    struct s40* rdi23;
    int64_t r8_24;
    void* r9_25;
    int32_t* r13_26;
    struct s39* r9_27;
    int64_t r11_28;
    struct s41* rdi29;
    struct s42* rsi30;
    struct s40* rdi31;
    struct s39* rsi32;
    struct s41* rdi33;
    struct s42* rsi34;
    int64_t r10_35;
    struct s41* rdi36;
    struct s42* rsi37;
    int64_t r8_38;
    void* rax39;
    int32_t* rcx40;
    struct s43* rdi41;
    struct s2* rsi42;
    uint64_t rdx43;
    struct s44* rsi44;
    struct s45* rsi45;
    struct s46* rsi46;
    struct s47* rdi47;
    struct s48* rsi48;
    struct s49* rsi49;
    struct s50* rdi50;
    struct s51* rdi51;
    int32_t* rsi52;
    struct s2* rdi53;
    uint64_t r15_54;
    int32_t* rdi55;
    int32_t* rsi56;
    int32_t* rax57;
    uint64_t rcx58;
    int32_t* rdi59;
    int32_t* rsi60;
    int32_t* r8_61;
    struct s2* rdi62;
    struct s2* rsi63;
    int32_t* rdi64;
    int32_t* rsi65;
    struct s2* rdi66;
    struct s2* rsi67;
    struct s2* rsi68;
    struct s52* rdi69;
    int32_t* r14_70;
    struct s2* rdi71;
    struct s2* rsi72;
    int32_t* rdi73;
    int32_t* rsi74;
    struct s2* rdi75;
    struct s2* rsi76;
    struct s2* rdi77;
    struct s2* rsi78;
    signed char** v79;
    int32_t** rax80;
    int32_t* r14_81;
    int64_t r12_82;
    int32_t* rcx83;
    int64_t r13_84;
    int64_t rbp85;
    int64_t r15_86;
    int64_t v87;

    v3 = reinterpret_cast<int64_t>(__return_address());
    rbx4 = rax5;
    *reinterpret_cast<int32_t*>(&r15_6) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_6) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&r13_7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_7) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi8 = reinterpret_cast<struct s35*>(&rdi->f4);
    rsi9 = reinterpret_cast<struct s36*>(&rsi->f4);
    rdi8->f0 = rsi9->f0;
    rdi10 = &rdi8->f4;
    rsi11 = &rsi9->f4;
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        rbp12 = r13_7 + 1;
        if (r13_7 == fputc) {
            *reinterpret_cast<int32_t*>(&rax13) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(fputc);
        } else {
            rax13 = rbp12 & 0xfffffffffffffffe;
            *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm0, [rip+0x0]");
            do {
                __asm__("pxor xmm1, xmm1");
                __asm__("psubd xmm1, xmm0");
                __asm__("cvtdq2pd xmm1, xmm1");
                __asm__("divpd xmm1, xmm4");
                __asm__("addpd xmm1, xmm5");
                __asm__("movupd [rdx+rcx*8], xmm1");
                rcx14 = rcx14 + 2;
                __asm__("paddd xmm0, xmm6");
            } while (rcx14 != rax13);
            if (rbp12 == rax13) 
                goto addr_2e5_13;
        }
        do {
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, ecx");
            __asm__("divsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm3");
            *rdi10 = *rsi11;
            ++rdi10;
            ++rsi11;
            ++rax13;
        } while (rax13 != r15_6);
        addr_32a_18:
        if (r13_7 <= 0x7ce) {
            rdi15 = reinterpret_cast<struct s37*>(r13_7 * 0x3e88 + 8 + reinterpret_cast<int64_t>(rbx4));
            fun_363();
            __asm__("movdqa xmm6, [rip+0x0]");
            __asm__("movapd xmm5, [rip+0x0]");
            __asm__("movapd xmm4, [rip+0x0]");
            rdi15->f0 = fputc;
            rdi16 = reinterpret_cast<struct s38*>(&rdi15->f4);
            rdi16->f0 = g4;
            rdi10 = &rdi16->f4;
            rsi11 = reinterpret_cast<int32_t*>(8);
            continue;
        }
        addr_2e5_13:
        goto addr_32a_18;
        (rbx4 + r13_7 * 0xfa0)[r13_7 * 2] = reinterpret_cast<int32_t>(0x3ff0000000000000);
        ++r15_6;
        r13_7 = rbp12;
    } while (rbp12 != 0x7d0);
    rax17 = fun_39f(0x3d0900, 8);
    r15_18 = rax17;
    fun_3b1(rax17);
    *reinterpret_cast<int32_t*>(&rax19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v20 = reinterpret_cast<void*>(rax19 * 8);
        rdx21 = rbx4 + rax19 * 2;
        rsi22 = reinterpret_cast<struct s39*>(rbx4 + rax19 * 2 + 0x7a0262);
        rdi23 = reinterpret_cast<struct s40*>(rax19 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_25 = reinterpret_cast<void*>(r8_24 * 0x3e80);
            r13_26 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r15_18) + reinterpret_cast<int64_t>(r9_25) + 0x3e80);
            r9_27 = reinterpret_cast<struct s39*>(reinterpret_cast<int64_t>(r9_25) + reinterpret_cast<uint64_t>(r15_18));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_27) < reinterpret_cast<uint64_t>(rsi22))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx21) < reinterpret_cast<uint64_t>(r13_26)))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_28) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_28) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_530_34;
            }
            *reinterpret_cast<int32_t*>(&r11_28) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_28) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_27) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<int64_t>(rdi23) + reinterpret_cast<int64_t>(r9_25)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<int64_t>(v20) + reinterpret_cast<int64_t>(r9_25)) < reinterpret_cast<uint64_t>(r13_26)))) == fputc)) {
                do {
                    addr_530_34:
                    rdi23->f0 = rsi22->f0;
                    rdi29 = reinterpret_cast<struct s41*>(&rdi23->f4);
                    rsi30 = reinterpret_cast<struct s42*>(&rsi22->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi29->f0 = rsi30->f0;
                    rdi31 = reinterpret_cast<struct s40*>(&rdi29->f4);
                    rsi32 = reinterpret_cast<struct s39*>(&rsi30->f4);
                    rdi31->f0 = rsi32->f0;
                    rdi33 = reinterpret_cast<struct s41*>(&rdi31->f4);
                    rsi34 = reinterpret_cast<struct s42*>(&rsi32->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi33->f0 = rsi34->f0;
                    rdi23 = reinterpret_cast<struct s40*>(&rdi33->f4);
                    rsi22 = reinterpret_cast<struct s39*>(&rsi34->f4);
                    r11_28 = r11_28 + 2;
                } while (r11_28 != 0x7d0);
            } else {
                rdi23->f0 = rsi22->f0;
                rdi23 = reinterpret_cast<struct s40*>(&rdi23->f4);
                rsi22 = reinterpret_cast<struct s39*>(&rsi22->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_35) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_35) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi23->f0 = rsi22->f0;
                    rdi36 = reinterpret_cast<struct s41*>(&rdi23->f4);
                    rsi37 = reinterpret_cast<struct s42*>(&rsi22->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi36->f0 = rsi37->f0;
                    rdi23 = reinterpret_cast<struct s40*>(&rdi36->f4);
                    rsi22 = reinterpret_cast<struct s39*>(&rsi37->f4);
                    __asm__("movhpd xmm2, [r14+rax*8]");
                    __asm__("movupd xmm3, [r9+r10*8]");
                    __asm__("movupd xmm4, [r9+r10*8+0x10]");
                    __asm__("mulpd xmm1, xmm0");
                    __asm__("addpd xmm1, xmm3");
                    __asm__("mulpd xmm2, xmm0");
                    __asm__("addpd xmm2, xmm4");
                    __asm__("movupd [r9+r10*8], xmm1");
                    __asm__("movupd [r9+r10*8+0x10], xmm2");
                    r10_35 = r10_35 + 4;
                } while (r10_35 != 0x7d0);
                continue;
            }
            ++r8_24;
        } while (r8_24 != 0x7d0);
        ++rax19;
    } while (rax19 != 0x7d0);
    *reinterpret_cast<int32_t*>(&r8_38) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_38) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rax39 = reinterpret_cast<void*>(r8_38 * 0x3e80);
        rcx40 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax39) + reinterpret_cast<uint64_t>(r15_18));
        rdi41 = reinterpret_cast<struct s43*>(reinterpret_cast<int64_t>(rax39) + reinterpret_cast<int64_t>(rbx4) - reinterpret_cast<uint64_t>(rcx40));
        *reinterpret_cast<int32_t*>(&rsi42) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi42) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx43) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx43) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(rdi41) >= 32) {
            do {
                __asm__("movups xmm0, [rcx+rsi*8]");
                __asm__("movups xmm1, [rcx+rsi*8+0x10]");
                __asm__("movups [rax+rsi*8], xmm0");
                __asm__("movups [rax+rsi*8+0x10], xmm1");
                rdx43 = reinterpret_cast<uint64_t>(rsi42) * 8 | 32;
                __asm__("movdqu xmm0, [rdx+rcx]");
                __asm__("movupd xmm1, [rdx+rcx+0x10]");
                __asm__("movdqu [rdx+rax], xmm0");
                __asm__("movupd [rdx+rax+0x10], xmm1");
                ++rsi42;
            } while (!reinterpret_cast<int1_t>(rsi42 == 0x7d0));
        } else {
            do {
                rsi44 = reinterpret_cast<struct s44*>(rdx43 * 8);
                rdi41->f0 = rsi44->f0;
                rsi45 = reinterpret_cast<struct s45*>(&rsi44->f4);
                rdi41->f4 = rsi45->f0;
                rsi46 = reinterpret_cast<struct s46*>(&rsi45->f4);
                rdi47 = reinterpret_cast<struct s47*>(reinterpret_cast<uint64_t>(rsi46) | 8);
                rdi47->f0 = rsi46->f0;
                rsi48 = reinterpret_cast<struct s48*>(&rsi46->f4);
                rdi47->f4 = rsi48->f0;
                rsi49 = reinterpret_cast<struct s49*>(&rsi48->f4);
                rdi50 = reinterpret_cast<struct s50*>(reinterpret_cast<uint64_t>(rsi49) | 16);
                rdi50->f0 = rsi49->f0;
                rdi51 = reinterpret_cast<struct s51*>(&rdi50->f4);
                rsi52 = &rsi49->f4;
                rdi51->f0 = *rsi52;
                rdi41 = reinterpret_cast<struct s43*>(&rdi51->f4);
                rsi42 = reinterpret_cast<struct s2*>(reinterpret_cast<uint64_t>(rsi52 + 1) | 24);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx43 = rdx43 + 4;
            } while (rdx43 != 0x7d0);
        }
        ++r8_38;
    } while (r8_38 != 0x7d0);
    rdi53 = r15_18;
    fun_688();
    *reinterpret_cast<int32_t*>(&r15_54) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_54) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        if (r15_54 == fputc) {
            rdi53->f0 = rsi42->f0;
            rdi55 = &rdi53->f4;
            rsi56 = &rsi42->f4;
        } else {
            rax57 = rbx4 + r15_54 * 0xfa0;
            *reinterpret_cast<int32_t*>(&rcx58) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx58) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rcx58 == fputc) {
                    rdi53->f0 = rsi42->f0;
                    rdi59 = &rdi53->f4;
                    rsi60 = &rsi42->f4;
                } else {
                    rdi53->f0 = rsi42->f0;
                    rdi59 = &rdi53->f4;
                    if (rcx58 != 1) 
                        goto addr_720_105; else 
                        goto addr_718_106;
                }
                addr_6e4_107:
                __asm__("divsd xmm0, [rdx+rcx*8]");
                *rdi59 = *rsi60;
                rdi53 = reinterpret_cast<struct s2*>(rdi59 + 1);
                rsi42 = reinterpret_cast<struct s2*>(rsi60 + 1);
                continue;
                addr_720_105:
                rdi59 = reinterpret_cast<int32_t*>(rcx58 & 0x7ffffffffffffffe);
                *reinterpret_cast<int32_t*>(&rsi60) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi60) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r8_61) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_61) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi59 = *rsi60;
                    rdi62 = reinterpret_cast<struct s2*>(rdi59 + 1);
                    rsi63 = reinterpret_cast<struct s2*>(rsi60 + 1);
                    __asm__("mulsd xmm1, [r9+rsi*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi62->f0 = rsi63->f0;
                    rdi64 = &rdi62->f4;
                    rsi65 = &rsi63->f4;
                    *rdi64 = *rsi65;
                    rdi66 = reinterpret_cast<struct s2*>(rdi64 + 1);
                    rsi67 = reinterpret_cast<struct s2*>(rsi65 + 1);
                    __asm__("mulsd xmm1, [r10+r9]");
                    __asm__("subsd xmm0, xmm1");
                    rdi66->f0 = rsi67->f0;
                    rdi59 = &rdi66->f4;
                    rsi60 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rsi67->f4) + 2);
                    r8_61 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_61) + 2);
                } while (r8_61 != rdi59);
                addr_77a_123:
                if ((*reinterpret_cast<unsigned char*>(&rcx58) & 1) != fputc) {
                    *rdi59 = *rsi60;
                    rsi68 = reinterpret_cast<struct s2*>(rsi60 + 1);
                    rdi69 = reinterpret_cast<struct s52*>(rbx4 + rcx58 * 0xfa0);
                    __asm__("mulsd xmm1, [rdi+rsi*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi69->f0 = rsi68->f0;
                    rdi59 = &rdi69->f4;
                    rsi60 = &rsi68->f4;
                    goto addr_6e4_107;
                }
                addr_718_106:
                *reinterpret_cast<int32_t*>(&rsi60) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi60) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_77a_123;
                ++rcx58;
            } while (rcx58 != r15_54);
            rcx40 = rax57 + r15_54 * 2;
            rdi53->f0 = rsi42->f0;
            rdi55 = &rdi53->f4;
            rsi56 = &rsi42->f4;
            if (r15_54 != 1) 
                goto addr_7e0_136; else 
                goto addr_7c0_137;
        }
        addr_843_138:
        r14_70 = reinterpret_cast<int32_t*>(r15_54 * 0x3e80);
        __asm__("ucomisd xmm0, xmm2");
        if (reinterpret_cast<uint64_t>(r14_70) + reinterpret_cast<int64_t>(rbx4) < reinterpret_cast<uint64_t>(r14_70)) {
            fun_6a5();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        *rdi55 = *rsi56;
        rdi53 = reinterpret_cast<struct s2*>(rdi55 + 1);
        rsi42 = reinterpret_cast<struct s2*>(rsi56 + 1);
        continue;
        addr_7e0_136:
        rsi56 = reinterpret_cast<int32_t*>(r15_54 & 0x7ffffffffffffffe);
        *reinterpret_cast<int32_t*>(&rdx43) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx43) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi55) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi55) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi55 = *rsi56;
            rdi71 = reinterpret_cast<struct s2*>(rdi55 + 1);
            rsi72 = reinterpret_cast<struct s2*>(rsi56 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi71->f0 = rsi72->f0;
            rdi73 = &rdi71->f4;
            rsi74 = &rsi72->f4;
            *rdi73 = *rsi74;
            rdi75 = reinterpret_cast<struct s2*>(rdi73 + 1);
            rsi76 = reinterpret_cast<struct s2*>(rsi74 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi75->f0 = rsi76->f0;
            rsi56 = &rsi76->f4;
            rdx43 = rdx43 + 2;
            rdi55 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rdi75->f4) + 2);
        } while (rdi55 != rsi56);
        addr_82c_158:
        if ((*reinterpret_cast<unsigned char*>(&r15_54) & 1) != fputc) {
            *rdi55 = *rsi56;
            rdi77 = reinterpret_cast<struct s2*>(rdi55 + 1);
            rsi78 = reinterpret_cast<struct s2*>(rsi56 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi77->f0 = rsi78->f0;
            rdi55 = &rdi77->f4;
            rsi56 = &rsi78->f4;
            goto addr_843_138;
        }
        addr_7c0_137:
        *reinterpret_cast<int32_t*>(&rdx43) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx43) + 4) = reinterpret_cast<int32_t>(fputc);
        goto addr_82c_158;
        ++r15_54;
    } while (r15_54 != 0x7d0);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && **v79 == fputc) {
        rax80 = g894;
        r14_81 = *rax80;
        *reinterpret_cast<int32_t*>(&r12_82) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_82) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx83 = r14_81;
        fun_8b6(0x89e, 22, 1, rcx83);
        *reinterpret_cast<int32_t*>(&r13_84) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_84) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_8d1(r14_81, 0x8bd, 0x8c4, rcx83);
        do {
            rbp85 = r13_84 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_86) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_86) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_86 + rbp85) * 0xcccccccd) <= 0xccccccc) {
                    fun_90b(10, r14_81, 0x8c4, rcx83);
                }
                __asm__("movq xmm0, [rax+r15*8]");
                fun_92c(r14_81, 0x925, 0x8c4, rcx83);
                ++r15_86;
            } while (r15_86 != r12_82);
            ++r13_84;
            ++r12_82;
        } while (r13_84 != 0x7d0);
        fun_95b(r14_81, 0x94a, 0x951, rcx83);
        *reinterpret_cast<int32_t*>(&rsi42) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi42) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx43) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx43) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx40 = r14_81;
        fun_974(0x962, 22, 1, rcx40);
    }
    fun_87c(rbx4, rsi42, rdx43, rcx40);
    goto v87;
}

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

void fun_3b1(struct s2* rdi) {
    int64_t v2;
    int64_t rax3;
    int64_t v4;
    uint64_t rdx5;
    int64_t rbx6;
    struct s53* rsi7;
    int64_t rbx8;
    struct s54* rdi9;
    int64_t r8_10;
    int64_t r9_11;
    uint64_t r13_12;
    int64_t r15_13;
    struct s53* r9_14;
    int32_t* r15_15;
    int64_t r11_16;
    int64_t rbx17;
    int64_t rbx18;
    struct s55* rdi19;
    struct s56* rsi20;
    struct s54* rdi21;
    struct s53* rsi22;
    struct s55* rdi23;
    struct s56* rsi24;
    int64_t r10_25;
    struct s55* rdi26;
    struct s56* rsi27;
    int64_t r8_28;
    void* rax29;
    int32_t* rcx30;
    int32_t* r15_31;
    struct s57* rdi32;
    void* rbx33;
    struct s2* rsi34;
    uint64_t rdx35;
    struct s58* rsi36;
    struct s59* rsi37;
    struct s60* rsi38;
    struct s61* rdi39;
    struct s62* rsi40;
    struct s63* rsi41;
    struct s64* rdi42;
    struct s65* rdi43;
    int32_t* rsi44;
    struct s2* rdi45;
    struct s2* r15_46;
    uint64_t r15_47;
    int32_t* rdi48;
    int32_t* rsi49;
    int32_t* rax50;
    int32_t* rbx51;
    uint64_t rcx52;
    int32_t* rdi53;
    int32_t* rsi54;
    int32_t* r8_55;
    struct s2* rdi56;
    struct s2* rsi57;
    int32_t* rdi58;
    int32_t* rsi59;
    struct s2* rdi60;
    struct s2* rsi61;
    struct s2* rsi62;
    struct s66* rdi63;
    int32_t* rbx64;
    uint64_t r14_65;
    int64_t rbx66;
    struct s2* rdi67;
    struct s2* rsi68;
    int32_t* rdi69;
    int32_t* rsi70;
    struct s2* rdi71;
    struct s2* rsi72;
    struct s2* rdi73;
    struct s2* rsi74;
    signed char** v75;
    int32_t** rax76;
    int32_t* r14_77;
    int64_t r12_78;
    int32_t* rcx79;
    int64_t r13_80;
    int64_t rbp81;
    int64_t r15_82;
    int32_t* rbx83;
    int64_t v84;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(&rax3) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v4 = rax3 * 8;
        rdx5 = reinterpret_cast<uint64_t>(rbx6 + rax3 * 8);
        rsi7 = reinterpret_cast<struct s53*>(rbx8 + rax3 * 8 + 0x1e80988);
        rdi9 = reinterpret_cast<struct s54*>(rax3 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_11 = r8_10 * 0x3e80;
            r13_12 = reinterpret_cast<uint64_t>(r15_13 + r9_11 + 0x3e80);
            r9_14 = reinterpret_cast<struct s53*>(r9_11 + reinterpret_cast<int64_t>(r15_15));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_14) < reinterpret_cast<uint64_t>(rsi7))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(rdx5 < r13_12))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_16) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_530_5;
            }
            *reinterpret_cast<int32_t*>(&r11_16) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_14) < reinterpret_cast<uint64_t>(rbx17 + reinterpret_cast<int64_t>(rdi9) + r9_11))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx18 + v4 + r9_11) < r13_12))) == fputc)) {
                do {
                    addr_530_5:
                    rdi9->f0 = rsi7->f0;
                    rdi19 = reinterpret_cast<struct s55*>(&rdi9->f4);
                    rsi20 = reinterpret_cast<struct s56*>(&rsi7->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi19->f0 = rsi20->f0;
                    rdi21 = reinterpret_cast<struct s54*>(&rdi19->f4);
                    rsi22 = reinterpret_cast<struct s53*>(&rsi20->f4);
                    rdi21->f0 = rsi22->f0;
                    rdi23 = reinterpret_cast<struct s55*>(&rdi21->f4);
                    rsi24 = reinterpret_cast<struct s56*>(&rsi22->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi23->f0 = rsi24->f0;
                    rdi9 = reinterpret_cast<struct s54*>(&rdi23->f4);
                    rsi7 = reinterpret_cast<struct s53*>(&rsi24->f4);
                    r11_16 = r11_16 + 2;
                } while (r11_16 != 0x7d0);
            } else {
                rdi9->f0 = rsi7->f0;
                rdi9 = reinterpret_cast<struct s54*>(&rdi9->f4);
                rsi7 = reinterpret_cast<struct s53*>(&rsi7->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_25) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_25) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi9->f0 = rsi7->f0;
                    rdi26 = reinterpret_cast<struct s55*>(&rdi9->f4);
                    rsi27 = reinterpret_cast<struct s56*>(&rsi7->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi26->f0 = rsi27->f0;
                    rdi9 = reinterpret_cast<struct s54*>(&rdi26->f4);
                    rsi7 = reinterpret_cast<struct s53*>(&rsi27->f4);
                    __asm__("movhpd xmm2, [r14+rax*8]");
                    __asm__("movupd xmm3, [r9+r10*8]");
                    __asm__("movupd xmm4, [r9+r10*8+0x10]");
                    __asm__("mulpd xmm1, xmm0");
                    __asm__("addpd xmm1, xmm3");
                    __asm__("mulpd xmm2, xmm0");
                    __asm__("addpd xmm2, xmm4");
                    __asm__("movupd [r9+r10*8], xmm1");
                    __asm__("movupd [r9+r10*8+0x10], xmm2");
                    r10_25 = r10_25 + 4;
                } while (r10_25 != 0x7d0);
                continue;
            }
            ++r8_10;
        } while (r8_10 != 0x7d0);
        ++rax3;
    } while (rax3 != 0x7d0);
    *reinterpret_cast<int32_t*>(&r8_28) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_28) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rax29 = reinterpret_cast<void*>(r8_28 * 0x3e80);
        rcx30 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax29) + reinterpret_cast<int64_t>(r15_31));
        rdi32 = reinterpret_cast<struct s57*>(reinterpret_cast<int64_t>(rax29) + reinterpret_cast<int64_t>(rbx33) - reinterpret_cast<uint64_t>(rcx30));
        *reinterpret_cast<int32_t*>(&rsi34) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(rdi32) >= 32) {
            do {
                __asm__("movups xmm0, [rcx+rsi*8]");
                __asm__("movups xmm1, [rcx+rsi*8+0x10]");
                __asm__("movups [rax+rsi*8], xmm0");
                __asm__("movups [rax+rsi*8+0x10], xmm1");
                rdx35 = reinterpret_cast<uint64_t>(rsi34) * 8 | 32;
                __asm__("movdqu xmm0, [rdx+rcx]");
                __asm__("movupd xmm1, [rdx+rcx+0x10]");
                __asm__("movdqu [rdx+rax], xmm0");
                __asm__("movupd [rdx+rax+0x10], xmm1");
                ++rsi34;
            } while (!reinterpret_cast<int1_t>(rsi34 == 0x7d0));
        } else {
            do {
                rsi36 = reinterpret_cast<struct s58*>(rdx35 * 8);
                rdi32->f0 = rsi36->f0;
                rsi37 = reinterpret_cast<struct s59*>(&rsi36->f4);
                rdi32->f4 = rsi37->f0;
                rsi38 = reinterpret_cast<struct s60*>(&rsi37->f4);
                rdi39 = reinterpret_cast<struct s61*>(reinterpret_cast<uint64_t>(rsi38) | 8);
                rdi39->f0 = rsi38->f0;
                rsi40 = reinterpret_cast<struct s62*>(&rsi38->f4);
                rdi39->f4 = rsi40->f0;
                rsi41 = reinterpret_cast<struct s63*>(&rsi40->f4);
                rdi42 = reinterpret_cast<struct s64*>(reinterpret_cast<uint64_t>(rsi41) | 16);
                rdi42->f0 = rsi41->f0;
                rdi43 = reinterpret_cast<struct s65*>(&rdi42->f4);
                rsi44 = &rsi41->f4;
                rdi43->f0 = *rsi44;
                rdi32 = reinterpret_cast<struct s57*>(&rdi43->f4);
                rsi34 = reinterpret_cast<struct s2*>(reinterpret_cast<uint64_t>(rsi44 + 1) | 24);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx35 = rdx35 + 4;
            } while (rdx35 != 0x7d0);
        }
        ++r8_28;
    } while (r8_28 != 0x7d0);
    rdi45 = r15_46;
    fun_688();
    *reinterpret_cast<int32_t*>(&r15_47) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_47) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        if (r15_47 == fputc) {
            rdi45->f0 = rsi34->f0;
            rdi48 = &rdi45->f4;
            rsi49 = &rsi34->f4;
        } else {
            rax50 = rbx51 + r15_47 * 0xfa0;
            *reinterpret_cast<int32_t*>(&rcx52) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx52) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rcx52 == fputc) {
                    rdi45->f0 = rsi34->f0;
                    rdi53 = &rdi45->f4;
                    rsi54 = &rsi34->f4;
                } else {
                    rdi45->f0 = rsi34->f0;
                    rdi53 = &rdi45->f4;
                    if (rcx52 != 1) 
                        goto addr_720_76; else 
                        goto addr_718_77;
                }
                addr_6e4_78:
                __asm__("divsd xmm0, [rdx+rcx*8]");
                *rdi53 = *rsi54;
                rdi45 = reinterpret_cast<struct s2*>(rdi53 + 1);
                rsi34 = reinterpret_cast<struct s2*>(rsi54 + 1);
                continue;
                addr_720_76:
                rdi53 = reinterpret_cast<int32_t*>(rcx52 & 0x7ffffffffffffffe);
                *reinterpret_cast<int32_t*>(&rsi54) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi54) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r8_55) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_55) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi53 = *rsi54;
                    rdi56 = reinterpret_cast<struct s2*>(rdi53 + 1);
                    rsi57 = reinterpret_cast<struct s2*>(rsi54 + 1);
                    __asm__("mulsd xmm1, [r9+rsi*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi56->f0 = rsi57->f0;
                    rdi58 = &rdi56->f4;
                    rsi59 = &rsi57->f4;
                    *rdi58 = *rsi59;
                    rdi60 = reinterpret_cast<struct s2*>(rdi58 + 1);
                    rsi61 = reinterpret_cast<struct s2*>(rsi59 + 1);
                    __asm__("mulsd xmm1, [r10+r9]");
                    __asm__("subsd xmm0, xmm1");
                    rdi60->f0 = rsi61->f0;
                    rdi53 = &rdi60->f4;
                    rsi54 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rsi61->f4) + 2);
                    r8_55 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_55) + 2);
                } while (r8_55 != rdi53);
                addr_77a_94:
                if ((*reinterpret_cast<unsigned char*>(&rcx52) & 1) != fputc) {
                    *rdi53 = *rsi54;
                    rsi62 = reinterpret_cast<struct s2*>(rsi54 + 1);
                    rdi63 = reinterpret_cast<struct s66*>(rbx64 + rcx52 * 0xfa0);
                    __asm__("mulsd xmm1, [rdi+rsi*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi63->f0 = rsi62->f0;
                    rdi53 = &rdi63->f4;
                    rsi54 = &rsi62->f4;
                    goto addr_6e4_78;
                }
                addr_718_77:
                *reinterpret_cast<int32_t*>(&rsi54) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi54) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_77a_94;
                ++rcx52;
            } while (rcx52 != r15_47);
            rcx30 = rax50 + r15_47 * 2;
            rdi45->f0 = rsi34->f0;
            rdi48 = &rdi45->f4;
            rsi49 = &rsi34->f4;
            if (r15_47 != 1) 
                goto addr_7e0_107; else 
                goto addr_7c0_108;
        }
        addr_843_109:
        r14_65 = r15_47 * 0x3e80;
        __asm__("ucomisd xmm0, xmm2");
        if (r14_65 + rbx66 < r14_65) {
            fun_6a5();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        *rdi48 = *rsi49;
        rdi45 = reinterpret_cast<struct s2*>(rdi48 + 1);
        rsi34 = reinterpret_cast<struct s2*>(rsi49 + 1);
        continue;
        addr_7e0_107:
        rsi49 = reinterpret_cast<int32_t*>(r15_47 & 0x7ffffffffffffffe);
        *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi48) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi48) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi48 = *rsi49;
            rdi67 = reinterpret_cast<struct s2*>(rdi48 + 1);
            rsi68 = reinterpret_cast<struct s2*>(rsi49 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi67->f0 = rsi68->f0;
            rdi69 = &rdi67->f4;
            rsi70 = &rsi68->f4;
            *rdi69 = *rsi70;
            rdi71 = reinterpret_cast<struct s2*>(rdi69 + 1);
            rsi72 = reinterpret_cast<struct s2*>(rsi70 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi71->f0 = rsi72->f0;
            rsi49 = &rsi72->f4;
            rdx35 = rdx35 + 2;
            rdi48 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rdi71->f4) + 2);
        } while (rdi48 != rsi49);
        addr_82c_129:
        if ((*reinterpret_cast<unsigned char*>(&r15_47) & 1) != fputc) {
            *rdi48 = *rsi49;
            rdi73 = reinterpret_cast<struct s2*>(rdi48 + 1);
            rsi74 = reinterpret_cast<struct s2*>(rsi49 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi73->f0 = rsi74->f0;
            rdi48 = &rdi73->f4;
            rsi49 = &rsi74->f4;
            goto addr_843_109;
        }
        addr_7c0_108:
        *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
        goto addr_82c_129;
        ++r15_47;
    } while (r15_47 != 0x7d0);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v2) + 4) >= 43 && **v75 == fputc) {
        rax76 = g894;
        r14_77 = *rax76;
        *reinterpret_cast<int32_t*>(&r12_78) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_78) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx79 = r14_77;
        fun_8b6(0x89e, 22, 1, rcx79);
        *reinterpret_cast<int32_t*>(&r13_80) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_80) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_8d1(r14_77, 0x8bd, 0x8c4, rcx79);
        do {
            rbp81 = r13_80 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_82) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_82) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_82 + rbp81) * 0xcccccccd) <= 0xccccccc) {
                    fun_90b(10, r14_77, 0x8c4, rcx79);
                }
                __asm__("movq xmm0, [rax+r15*8]");
                fun_92c(r14_77, 0x925, 0x8c4, rcx79);
                ++r15_82;
            } while (r15_82 != r12_78);
            ++r13_80;
            ++r12_78;
        } while (r13_80 != 0x7d0);
        fun_95b(r14_77, 0x94a, 0x951, rcx79);
        *reinterpret_cast<int32_t*>(&rsi34) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx35) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx30 = r14_77;
        fun_974(0x962, 22, 1, rcx30);
    }
    fun_87c(rbx83, rsi34, rdx35, rcx30);
    goto v84;
}

void fun_8d1(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbp5;
    int64_t r13_6;
    int64_t r15_7;
    int32_t* r14_8;
    int32_t* r14_9;
    int64_t r12_10;
    int32_t* r14_11;
    int32_t* r14_12;
    int32_t* rbx13;
    int64_t v14;

    do {
        rbp5 = r13_6 * 0x7d0;
        *reinterpret_cast<int32_t*>(&r15_7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_7 + rbp5) * 0xcccccccd) <= 0xccccccc) {
                fun_90b(10, r14_8, rdx, rcx);
            }
            __asm__("movq xmm0, [rax+r15*8]");
            fun_92c(r14_9, 0x925, rdx, rcx);
            ++r15_7;
        } while (r15_7 != r12_10);
        ++r13_6;
        ++r12_10;
    } while (r13_6 != 0x7d0);
    fun_95b(r14_11, 0x94a, 0x951, rcx);
    fun_974(0x962, 22, 1, r14_12);
    fun_87c(rbx13, 22, 1, r14_12);
    goto v14;
}

void fputc() {
}

void fun_a8(int32_t* rdi) {
    unsigned char cl2;
    int64_t rcx3;
    int32_t* rbx4;

    if ((cl2 & 1) != fputc) {
        *rdi = fputc;
        __asm__("mulsd xmm1, [rdi+rsi*8]");
        __asm__("subsd xmm0, xmm1");
        rbx4[rcx3 * 0xfa0] = g4;
    }
}

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

void fun_b0() {
    struct s67* rdi1;
    uint64_t rcx2;
    uint64_t r14_3;
    struct s68* rsi4;
    struct s67* r8_5;
    struct s69* rdi6;
    struct s70* rsi7;
    struct s71* rdi8;
    struct s72* rsi9;
    struct s73* rdi10;
    int32_t* rsi11;

    rdi1 = reinterpret_cast<struct s67*>(rcx2 & r14_3);
    *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&r8_5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_5) + 4) = reinterpret_cast<int32_t>(fputc);
    while (1) {
        rdi1->f0 = rsi4->f0;
        rdi6 = reinterpret_cast<struct s69*>(&rdi1->f4);
        rsi7 = reinterpret_cast<struct s70*>(&rsi4->f4);
        __asm__("mulsd xmm1, [r9+rsi*8]");
        __asm__("subsd xmm0, xmm1");
        rdi6->f0 = rsi7->f0;
        rdi8 = reinterpret_cast<struct s71*>(&rdi6->f4);
        rsi9 = reinterpret_cast<struct s72*>(&rsi7->f4);
        rdi8->f0 = rsi9->f0;
        rdi10 = reinterpret_cast<struct s73*>(&rdi8->f4);
        rsi11 = &rsi9->f4;
        __asm__("mulsd xmm1, [r10+r9]");
        __asm__("subsd xmm0, xmm1");
        rdi10->f0 = *rsi11;
        rdi1 = reinterpret_cast<struct s67*>(&rdi10->f4);
        rsi4 = reinterpret_cast<struct s68*>(reinterpret_cast<int64_t>(rsi11 + 1) + 2);
        r8_5 = reinterpret_cast<struct s67*>(reinterpret_cast<uint64_t>(r8_5) + 2);
        if (r8_5 == rdi1) 
            goto "???";
    }
}

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

void fun_140(struct s74* rdi, struct s75* rsi) {
    int64_t r12_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int64_t r12_6;
    uint64_t r13_7;
    int64_t r12_8;
    int64_t rbx9;
    uint64_t r12_10;
    uint64_t r14_11;
    struct s76* rdi12;
    struct s76* rsi13;
    struct s77* rdi14;
    struct s77* rsi15;
    struct s78* rdi16;
    struct s78* rsi17;
    unsigned char r12b18;

    if (r12_3 == fputc) {
        rdi->f0 = rsi->f0;
    } else {
        rdi->f0 = rsi->f0;
        rdi4 = &rdi->f4;
        rsi5 = &rsi->f4;
        if (r12_6 != 1) 
            goto addr_166_10; else 
            goto addr_155_11;
    }
    addr_1d0_12:
    r13_7 = reinterpret_cast<uint64_t>(r12_8 * 0x3e80);
    __asm__("ucomisd xmm0, xmm2");
    if (r13_7 + rbx9 >= r13_7) {
        __asm__("sqrtsd xmm0, xmm0");
    }
    addr_166_10:
    rsi5 = reinterpret_cast<int32_t*>(r12_10 & r14_11);
    *reinterpret_cast<int32_t*>(&rdi4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *rdi4 = *rsi5;
        rdi12 = reinterpret_cast<struct s76*>(rdi4 + 1);
        rsi13 = reinterpret_cast<struct s76*>(rsi5 + 1);
        __asm__("mulsd xmm1, xmm1");
        __asm__("subsd xmm0, xmm1");
        rdi12->f0 = rsi13->f0;
        rdi14 = reinterpret_cast<struct s77*>(&rdi12->f4);
        rsi15 = reinterpret_cast<struct s77*>(&rsi13->f4);
        rdi14->f0 = rsi15->f0;
        rdi16 = reinterpret_cast<struct s78*>(&rdi14->f4);
        rsi17 = reinterpret_cast<struct s78*>(&rsi15->f4);
        __asm__("mulsd xmm1, xmm1");
        __asm__("subsd xmm0, xmm1");
        rdi16->f0 = rsi17->f0;
        rsi5 = &rsi17->f4;
        rdi4 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rdi16->f4) + 2);
    } while (rdi4 != rsi5);
    addr_1ac_29:
    if ((r12b18 & 1) != fputc) {
        *rdi4 = *rsi5;
        __asm__("mulsd xmm1, xmm1");
        __asm__("subsd xmm0, xmm1");
        rdi4[1] = rsi5[1];
        goto addr_1d0_12;
    }
    addr_155_11:
    goto addr_1ac_29;
}

void fun_1ed() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_226(0x3d0900, 8);
}

