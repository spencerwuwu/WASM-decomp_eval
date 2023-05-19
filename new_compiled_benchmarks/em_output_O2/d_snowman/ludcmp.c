
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

int32_t* fun_67e(int64_t rdi, int64_t rsi);

void fun_690(int32_t* rdi);

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

void fun_96e(int32_t* rdi);

void fun_989(int64_t rdi, int64_t* rsi, int64_t rdx, int64_t* rcx, int64_t* r8);

int64_t** g9d5 = reinterpret_cast<int64_t**>(0x3d8d48288b4c);

void fun_9f1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t* rcx, int64_t* r8);

void fun_a0c(int64_t* rdi, int64_t rsi, int64_t rdx, int64_t* rcx, int64_t* r8);

void fun_a66(int64_t rdi, int64_t* rsi, int64_t rdx, int64_t* rcx, int64_t* r8);

void fun_a38(int64_t* rdi, int64_t rsi, int64_t rdx, int64_t* rcx, int64_t* r8);

void fun_a80(int64_t* rdi, int64_t rsi, int64_t rdx, int64_t* rcx, int64_t* r8);

void fun_a99(int64_t rdi, int64_t* rsi, int64_t rdx, int64_t* rcx, int64_t* r8);

void fun_9a5(int64_t* rdi, int64_t* rsi, int64_t rdx, int64_t* rcx, int64_t* r8);

void fun_9ad(int64_t rdi, int64_t* rsi, int64_t rdx, int64_t* rcx, int64_t* r8);

void fun_9b5(int64_t* rdi, int64_t* rsi, int64_t rdx, int64_t* rcx, int64_t* r8);

void fun_9bd(int64_t* rdi, int64_t* rsi, int64_t rdx, int64_t* rcx, int64_t* r8);

void fun_63d() {
    struct s0* rdi1;
    struct s1* rdi2;
    int32_t* rdi3;
    int32_t* rsi4;
    uint64_t rbp5;
    int64_t* rbx6;
    int64_t r14_7;
    uint64_t r13_8;
    uint64_t r12_9;
    uint64_t rax10;
    uint64_t rcx11;
    int64_t rbx12;
    int64_t v13;
    int64_t r15_14;
    int32_t* rax15;
    int32_t* r13_16;
    int64_t rax17;
    int64_t v18;
    uint64_t rdx19;
    int64_t rbx20;
    struct s2* rsi21;
    void* rbx22;
    struct s3* rdi23;
    int64_t r8_24;
    void* r9_25;
    uint64_t r15_26;
    struct s2* r9_27;
    int64_t r11_28;
    void* rbx29;
    int64_t rbx30;
    struct s4* rdi31;
    struct s5* rsi32;
    struct s3* rdi33;
    struct s2* rsi34;
    struct s4* rdi35;
    struct s5* rsi36;
    int64_t r10_37;
    struct s4* rdi38;
    struct s5* rsi39;
    int64_t r15_40;
    int64_t* r14_41;
    int64_t* v42;
    int64_t r8_43;
    void* rax44;
    struct s6* rdi45;
    void* rbx46;
    int64_t rsi47;
    int64_t rdx48;
    struct s7* rsi49;
    struct s8* rsi50;
    struct s9* rsi51;
    struct s10* rdi52;
    struct s11* rsi53;
    struct s12* rsi54;
    struct s13* rdi55;
    struct s14* rdi56;
    int64_t* rsi57;
    int64_t* rbx58;
    int64_t rdx59;
    int64_t* rcx60;
    int64_t* r12_61;
    int64_t* v62;
    int64_t* r8_63;
    int32_t v64;
    signed char** v65;
    int64_t** rax66;
    int64_t* r13_67;
    int64_t* rcx68;
    int64_t r14_69;
    int32_t eax70;
    int64_t* v71;
    int64_t* v72;
    int64_t* rbx73;
    int64_t v74;

    while (1) {
        __asm__("movdqa xmm6, [rip+0x0]");
        __asm__("movapd xmm5, [rip+0x0]");
        __asm__("movapd xmm4, [rip+0x0]");
        rdi1->f0 = fputc;
        rdi2 = reinterpret_cast<struct s1*>(&rdi1->f4);
        rdi2->f0 = g4;
        rdi3 = &rdi2->f4;
        rsi4 = reinterpret_cast<int32_t*>(8);
        do {
            (rbx6 + rbp5 * 0x7d0)[rbp5] = r14_7;
            ++r13_8;
            rbp5 = r12_9;
            if (r12_9 == 0x7d0) 
                goto addr_66a_9;
            r12_9 = rbp5 + 1;
            if (rbp5 == fputc) {
                *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
            } else {
                rax10 = r12_9 & 0xfffffffffffffffe;
                *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("movdqa xmm0, [rip+0x0]");
                do {
                    __asm__("xorpd xmm1, xmm1");
                    __asm__("psubd xmm1, xmm0");
                    __asm__("cvtdq2pd xmm1, xmm1");
                    __asm__("divpd xmm1, xmm4");
                    __asm__("addpd xmm1, xmm5");
                    __asm__("movupd [rdx+rcx*8], xmm1");
                    rcx11 = rcx11 + 2;
                    __asm__("paddd xmm0, xmm6");
                } while (rcx11 != rax10);
                if (r12_9 == rax10) 
                    goto addr_5b5_15;
            }
            do {
                __asm__("xorps xmm0, xmm0");
                __asm__("cvtsi2sd xmm0, ecx");
                __asm__("divsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm3");
                *rdi3 = *rsi4;
                ++rdi3;
                ++rsi4;
                ++rax10;
            } while (rax10 != r13_8);
            continue;
            addr_5b5_15:
        } while (rbp5 > 0x7ce);
        rdi1 = reinterpret_cast<struct s0*>(rbp5 * 0x3e88 + 8 + rbx12);
        fun_63d();
    }
    addr_66a_9:
    v13 = r15_14;
    rax15 = fun_67e(0x3d0900, 8);
    r13_16 = rax15;
    fun_690(rax15);
    *reinterpret_cast<int32_t*>(&rax17) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v18 = rax17 * 8;
        rdx19 = reinterpret_cast<uint64_t>(rbx20 + rax17 * 8);
        rsi21 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rbx22) + rax17 * 8 + 0x1e80988);
        rdi23 = reinterpret_cast<struct s3*>(rax17 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_25 = reinterpret_cast<void*>(r8_24 * 0x3e80);
            r15_26 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_25) + reinterpret_cast<int64_t>(r13_16) + 0x3e80);
            r9_27 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(r9_25) + reinterpret_cast<int64_t>(r13_16));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_27) < reinterpret_cast<uint64_t>(rsi21))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(rdx19 < r15_26))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_28) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_28) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_810_27;
            }
            *reinterpret_cast<int32_t*>(&r11_28) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_28) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_27) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx29) + reinterpret_cast<int64_t>(rdi23) + reinterpret_cast<int64_t>(r9_25)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx30 + v18 + reinterpret_cast<int64_t>(r9_25)) < r15_26))) == fputc)) {
                do {
                    addr_810_27:
                    rdi23->f0 = rsi21->f0;
                    rdi31 = reinterpret_cast<struct s4*>(&rdi23->f4);
                    rsi32 = reinterpret_cast<struct s5*>(&rsi21->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi31->f0 = rsi32->f0;
                    rdi33 = reinterpret_cast<struct s3*>(&rdi31->f4);
                    rsi34 = reinterpret_cast<struct s2*>(&rsi32->f4);
                    rdi33->f0 = rsi34->f0;
                    rdi35 = reinterpret_cast<struct s4*>(&rdi33->f4);
                    rsi36 = reinterpret_cast<struct s5*>(&rsi34->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi35->f0 = rsi36->f0;
                    rdi23 = reinterpret_cast<struct s3*>(&rdi35->f4);
                    rsi21 = reinterpret_cast<struct s2*>(&rsi36->f4);
                    r11_28 = r11_28 + 2;
                } while (r11_28 != 0x7d0);
            } else {
                rdi23->f0 = rsi21->f0;
                rdi23 = reinterpret_cast<struct s3*>(&rdi23->f4);
                rsi21 = reinterpret_cast<struct s2*>(&rsi21->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_37) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_37) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi23->f0 = rsi21->f0;
                    rdi38 = reinterpret_cast<struct s4*>(&rdi23->f4);
                    rsi39 = reinterpret_cast<struct s5*>(&rsi21->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi38->f0 = rsi39->f0;
                    rdi23 = reinterpret_cast<struct s3*>(&rdi38->f4);
                    rsi21 = reinterpret_cast<struct s2*>(&rsi39->f4);
                    __asm__("movhpd xmm2, [r14+rax*8]");
                    __asm__("movupd xmm3, [r9+r10*8]");
                    __asm__("movupd xmm4, [r9+r10*8+0x10]");
                    __asm__("mulpd xmm1, xmm0");
                    __asm__("addpd xmm1, xmm3");
                    __asm__("mulpd xmm2, xmm0");
                    __asm__("addpd xmm2, xmm4");
                    __asm__("movupd [r9+r10*8], xmm1");
                    __asm__("movupd [r9+r10*8+0x10], xmm2");
                    r10_37 = r10_37 + 4;
                } while (r10_37 != 0x7d0);
                continue;
            }
            ++r8_24;
        } while (r8_24 != 0x7d0);
        ++rax17;
    } while (rax17 != 0x7d0);
    r15_40 = v13;
    r14_41 = v42;
    *reinterpret_cast<int32_t*>(&r8_43) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_43) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rax44 = reinterpret_cast<void*>(r8_43 * 0x3e80);
        rdi45 = reinterpret_cast<struct s6*>(reinterpret_cast<int64_t>(rax44) + reinterpret_cast<int64_t>(rbx46) - (reinterpret_cast<int64_t>(rax44) + reinterpret_cast<int64_t>(r13_16)));
        *reinterpret_cast<int32_t*>(&rsi47) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi47) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx48) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx48) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(rdi45) >= 32) {
            do {
                __asm__("movups xmm0, [rcx+rsi*8]");
                __asm__("movups xmm1, [rcx+rsi*8+0x10]");
                __asm__("movups [rax+rsi*8], xmm0");
                __asm__("movups [rax+rsi*8+0x10], xmm1");
                __asm__("movdqu xmm0, [rdx+rcx]");
                __asm__("movupd xmm1, [rdx+rcx+0x10]");
                __asm__("movdqu [rdx+rax], xmm0");
                __asm__("movupd [rdx+rax+0x10], xmm1");
                rsi47 = rsi47 + 8;
            } while (rsi47 != 0x7d0);
        } else {
            do {
                rsi49 = reinterpret_cast<struct s7*>(rdx48 * 8);
                rdi45->f0 = rsi49->f0;
                rsi50 = reinterpret_cast<struct s8*>(&rsi49->f4);
                rdi45->f4 = rsi50->f0;
                rsi51 = reinterpret_cast<struct s9*>(&rsi50->f4);
                rdi52 = reinterpret_cast<struct s10*>(reinterpret_cast<uint64_t>(rsi51) | 8);
                rdi52->f0 = rsi51->f0;
                rsi53 = reinterpret_cast<struct s11*>(&rsi51->f4);
                rdi52->f4 = rsi53->f0;
                rsi54 = reinterpret_cast<struct s12*>(&rsi53->f4);
                rdi55 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(rsi54) | 16);
                rdi55->f0 = rsi54->f0;
                rdi56 = reinterpret_cast<struct s14*>(&rdi55->f4);
                rdi56->f0 = rsi54->f4;
                rdi45 = reinterpret_cast<struct s6*>(&rdi56->f4);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx48 = rdx48 + 4;
            } while (rdx48 != 0x7d0);
        }
        ++r8_43;
    } while (r8_43 != 0x7d0);
    fun_96e(r13_16);
    rsi57 = rbx58;
    rdx59 = r15_40;
    rcx60 = r14_41;
    r12_61 = v62;
    r8_63 = r12_61;
    fun_989(0x7d0, rsi57, rdx59, rcx60, r8_63);
    if (v64 >= 43 && **v65 == fputc) {
        rax66 = g9d5;
        r13_67 = *rax66;
        rcx68 = r13_67;
        fun_9f1(0x9df, 22, 1, rcx68, r8_63);
        *reinterpret_cast<int32_t*>(&r14_69) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_69) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_a0c(r13_67, 0x9f8, 0x9ff, rcx68, r8_63);
        do {
            eax70 = *reinterpret_cast<int32_t*>(&r14_69) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax70)) <= 0xccc) {
                fun_a66(10, r13_67, 0x9ff, rcx68, r8_63);
            }
            __asm__("movq xmm0, [rax+r14*8]");
            fun_a38(r13_67, 0xa13, 0x9ff, rcx68, r8_63);
            ++r14_69;
        } while (r14_69 != 0x7d0);
        fun_a80(r13_67, 0xa6f, 0xa76, rcx68, r8_63);
        *reinterpret_cast<int32_t*>(&rsi57) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi57) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx59) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx59) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx60 = r13_67;
        fun_a99(0xa87, 22, 1, rcx60, r8_63);
        r14_41 = v71;
        r12_61 = v72;
    }
    fun_9a5(rbx73, rsi57, rdx59, rcx60, r8_63);
    fun_9ad(r15_40, rsi57, rdx59, rcx60, r8_63);
    fun_9b5(r14_41, rsi57, rdx59, rcx60, r8_63);
    fun_9bd(r12_61, rsi57, rdx59, rcx60, r8_63);
    goto v74;
}

void fun_9a5(int64_t* rdi, int64_t* rsi, int64_t rdx, int64_t* rcx, int64_t* r8) {
    int64_t r15_6;
    int64_t* r14_7;
    int64_t* r12_8;
    int64_t v9;

    fun_9ad(r15_6, rsi, rdx, rcx, r8);
    fun_9b5(r14_7, rsi, rdx, rcx, r8);
    fun_9bd(r12_8, rsi, rdx, rcx, r8);
    goto v9;
}

void fun_a66(int64_t rdi, int64_t* rsi, int64_t rdx, int64_t* rcx, int64_t* r8) {
    int64_t* r13_6;
    int64_t rbp7;
    int64_t r14_8;
    int32_t eax9;
    int64_t* r13_10;
    int64_t* r13_11;
    int64_t* r13_12;
    int64_t* rbx13;
    int64_t r15_14;
    int64_t* v15;
    int64_t* v16;
    int64_t v17;

    while (1) {
        do {
            __asm__("movq xmm0, [rax+r14*8]");
            fun_a38(r13_6, rbp7, rdx, rcx, r8);
            ++r14_8;
            if (r14_8 == 0x7d0) 
                goto addr_a68_4;
            eax9 = *reinterpret_cast<int32_t*>(&r14_8) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax9)) > 0xccc);
        fun_a66(10, r13_10, rdx, rcx, r8);
    }
    addr_a68_4:
    fun_a80(r13_11, 0xa6f, 0xa76, rcx, r8);
    fun_a99(0xa87, 22, 1, r13_12, r8);
    fun_9a5(rbx13, 22, 1, r13_12, r8);
    fun_9ad(r15_14, 22, 1, r13_12, r8);
    fun_9b5(v15, 22, 1, r13_12, r8);
    fun_9bd(v16, 22, 1, r13_12, r8);
    goto v17;
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

int32_t* fun_67e(int64_t rdi, int64_t rsi) {
    int32_t* r13_3;
    int32_t* rax4;
    int32_t* rax5;
    int64_t rax6;
    int64_t v7;
    uint64_t rdx8;
    int64_t rbx9;
    struct s15* rsi10;
    void* rbx11;
    struct s16* rdi12;
    int64_t r8_13;
    void* r9_14;
    uint64_t r15_15;
    struct s15* r9_16;
    int64_t r11_17;
    void* rbx18;
    int64_t rbx19;
    struct s17* rdi20;
    struct s18* rsi21;
    struct s16* rdi22;
    struct s15* rsi23;
    struct s17* rdi24;
    struct s18* rsi25;
    int64_t r10_26;
    struct s17* rdi27;
    struct s18* rsi28;
    int64_t r15_29;
    int64_t v30;
    int64_t* r14_31;
    int64_t* v32;
    int64_t r8_33;
    void* rax34;
    struct s19* rdi35;
    void* rbx36;
    int64_t rsi37;
    int64_t rdx38;
    struct s20* rsi39;
    struct s21* rsi40;
    struct s22* rsi41;
    struct s23* rdi42;
    struct s24* rsi43;
    struct s25* rsi44;
    struct s26* rdi45;
    struct s27* rdi46;
    int64_t* rsi47;
    int64_t* rbx48;
    int64_t rdx49;
    int64_t* rcx50;
    int64_t* r12_51;
    int64_t* v52;
    int64_t* r8_53;
    int32_t v54;
    signed char** v55;
    int64_t** rax56;
    int64_t* r13_57;
    int64_t* rcx58;
    int64_t r14_59;
    int32_t eax60;
    int64_t* v61;
    int64_t* v62;
    int64_t* rbx63;
    int64_t v64;

    r13_3 = rax4;
    fun_690(rax5);
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v7 = rax6 * 8;
        rdx8 = reinterpret_cast<uint64_t>(rbx9 + rax6 * 8);
        rsi10 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(rbx11) + rax6 * 8 + 0x1e80988);
        rdi12 = reinterpret_cast<struct s16*>(rax6 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_14 = reinterpret_cast<void*>(r8_13 * 0x3e80);
            r15_15 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_14) + reinterpret_cast<int64_t>(r13_3) + 0x3e80);
            r9_16 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(r9_14) + reinterpret_cast<int64_t>(r13_3));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_16) < reinterpret_cast<uint64_t>(rsi10))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(rdx8 < r15_15))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_17) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_17) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_810_6;
            }
            *reinterpret_cast<int32_t*>(&r11_17) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_17) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_16) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx18) + reinterpret_cast<int64_t>(rdi12) + reinterpret_cast<int64_t>(r9_14)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx19 + v7 + reinterpret_cast<int64_t>(r9_14)) < r15_15))) == fputc)) {
                do {
                    addr_810_6:
                    rdi12->f0 = rsi10->f0;
                    rdi20 = reinterpret_cast<struct s17*>(&rdi12->f4);
                    rsi21 = reinterpret_cast<struct s18*>(&rsi10->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi20->f0 = rsi21->f0;
                    rdi22 = reinterpret_cast<struct s16*>(&rdi20->f4);
                    rsi23 = reinterpret_cast<struct s15*>(&rsi21->f4);
                    rdi22->f0 = rsi23->f0;
                    rdi24 = reinterpret_cast<struct s17*>(&rdi22->f4);
                    rsi25 = reinterpret_cast<struct s18*>(&rsi23->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi24->f0 = rsi25->f0;
                    rdi12 = reinterpret_cast<struct s16*>(&rdi24->f4);
                    rsi10 = reinterpret_cast<struct s15*>(&rsi25->f4);
                    r11_17 = r11_17 + 2;
                } while (r11_17 != 0x7d0);
            } else {
                rdi12->f0 = rsi10->f0;
                rdi12 = reinterpret_cast<struct s16*>(&rdi12->f4);
                rsi10 = reinterpret_cast<struct s15*>(&rsi10->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_26) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi12->f0 = rsi10->f0;
                    rdi27 = reinterpret_cast<struct s17*>(&rdi12->f4);
                    rsi28 = reinterpret_cast<struct s18*>(&rsi10->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi27->f0 = rsi28->f0;
                    rdi12 = reinterpret_cast<struct s16*>(&rdi27->f4);
                    rsi10 = reinterpret_cast<struct s15*>(&rsi28->f4);
                    __asm__("movhpd xmm2, [r14+rax*8]");
                    __asm__("movupd xmm3, [r9+r10*8]");
                    __asm__("movupd xmm4, [r9+r10*8+0x10]");
                    __asm__("mulpd xmm1, xmm0");
                    __asm__("addpd xmm1, xmm3");
                    __asm__("mulpd xmm2, xmm0");
                    __asm__("addpd xmm2, xmm4");
                    __asm__("movupd [r9+r10*8], xmm1");
                    __asm__("movupd [r9+r10*8+0x10], xmm2");
                    r10_26 = r10_26 + 4;
                } while (r10_26 != 0x7d0);
                continue;
            }
            ++r8_13;
        } while (r8_13 != 0x7d0);
        ++rax6;
    } while (rax6 != 0x7d0);
    r15_29 = v30;
    r14_31 = v32;
    *reinterpret_cast<int32_t*>(&r8_33) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_33) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rax34 = reinterpret_cast<void*>(r8_33 * 0x3e80);
        rdi35 = reinterpret_cast<struct s19*>(reinterpret_cast<int64_t>(rax34) + reinterpret_cast<int64_t>(rbx36) - (reinterpret_cast<int64_t>(rax34) + reinterpret_cast<int64_t>(r13_3)));
        *reinterpret_cast<int32_t*>(&rsi37) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi37) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx38) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(rdi35) >= 32) {
            do {
                __asm__("movups xmm0, [rcx+rsi*8]");
                __asm__("movups xmm1, [rcx+rsi*8+0x10]");
                __asm__("movups [rax+rsi*8], xmm0");
                __asm__("movups [rax+rsi*8+0x10], xmm1");
                __asm__("movdqu xmm0, [rdx+rcx]");
                __asm__("movupd xmm1, [rdx+rcx+0x10]");
                __asm__("movdqu [rdx+rax], xmm0");
                __asm__("movupd [rdx+rax+0x10], xmm1");
                rsi37 = rsi37 + 8;
            } while (rsi37 != 0x7d0);
        } else {
            do {
                rsi39 = reinterpret_cast<struct s20*>(rdx38 * 8);
                rdi35->f0 = rsi39->f0;
                rsi40 = reinterpret_cast<struct s21*>(&rsi39->f4);
                rdi35->f4 = rsi40->f0;
                rsi41 = reinterpret_cast<struct s22*>(&rsi40->f4);
                rdi42 = reinterpret_cast<struct s23*>(reinterpret_cast<uint64_t>(rsi41) | 8);
                rdi42->f0 = rsi41->f0;
                rsi43 = reinterpret_cast<struct s24*>(&rsi41->f4);
                rdi42->f4 = rsi43->f0;
                rsi44 = reinterpret_cast<struct s25*>(&rsi43->f4);
                rdi45 = reinterpret_cast<struct s26*>(reinterpret_cast<uint64_t>(rsi44) | 16);
                rdi45->f0 = rsi44->f0;
                rdi46 = reinterpret_cast<struct s27*>(&rdi45->f4);
                rdi46->f0 = rsi44->f4;
                rdi35 = reinterpret_cast<struct s19*>(&rdi46->f4);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx38 = rdx38 + 4;
            } while (rdx38 != 0x7d0);
        }
        ++r8_33;
    } while (r8_33 != 0x7d0);
    fun_96e(r13_3);
    rsi47 = rbx48;
    rdx49 = r15_29;
    rcx50 = r14_31;
    r12_51 = v52;
    r8_53 = r12_51;
    fun_989(0x7d0, rsi47, rdx49, rcx50, r8_53);
    if (v54 >= 43 && **v55 == fputc) {
        rax56 = g9d5;
        r13_57 = *rax56;
        rcx58 = r13_57;
        fun_9f1(0x9df, 22, 1, rcx58, r8_53);
        *reinterpret_cast<int32_t*>(&r14_59) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_59) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_a0c(r13_57, 0x9f8, 0x9ff, rcx58, r8_53);
        do {
            eax60 = *reinterpret_cast<int32_t*>(&r14_59) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax60)) <= 0xccc) {
                fun_a66(10, r13_57, 0x9ff, rcx58, r8_53);
            }
            __asm__("movq xmm0, [rax+r14*8]");
            fun_a38(r13_57, 0xa13, 0x9ff, rcx58, r8_53);
            ++r14_59;
        } while (r14_59 != 0x7d0);
        fun_a80(r13_57, 0xa6f, 0xa76, rcx58, r8_53);
        *reinterpret_cast<int32_t*>(&rsi47) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi47) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx49) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx49) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx50 = r13_57;
        fun_a99(0xa87, 22, 1, rcx50, r8_53);
        r14_31 = v61;
        r12_51 = v62;
    }
    fun_9a5(rbx63, rsi47, rdx49, rcx50, r8_53);
    fun_9ad(r15_29, rsi47, rdx49, rcx50, r8_53);
    fun_9b5(r14_31, rsi47, rdx49, rcx50, r8_53);
    fun_9bd(r12_51, rsi47, rdx49, rcx50, r8_53);
    goto v64;
}

void fun_96e(int32_t* rdi) {
    int64_t* rsi2;
    int64_t* rbx3;
    int64_t rdx4;
    int64_t r15_5;
    int64_t* rcx6;
    int64_t* r14_7;
    int64_t* r12_8;
    int64_t* v9;
    int64_t* r8_10;
    int32_t v11;
    signed char** v12;
    int64_t** rax13;
    int64_t* r13_14;
    int64_t* rcx15;
    int64_t r14_16;
    int32_t eax17;
    int64_t* r14_18;
    int64_t* v19;
    int64_t* v20;
    int64_t* rbx21;
    int64_t r15_22;
    int64_t v23;

    rsi2 = rbx3;
    rdx4 = r15_5;
    rcx6 = r14_7;
    r12_8 = v9;
    r8_10 = r12_8;
    fun_989(0x7d0, rsi2, rdx4, rcx6, r8_10);
    if (v11 >= 43 && **v12 == fputc) {
        rax13 = g9d5;
        r13_14 = *rax13;
        rcx15 = r13_14;
        fun_9f1(0x9df, 22, 1, rcx15, r8_10);
        *reinterpret_cast<int32_t*>(&r14_16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_a0c(r13_14, 0x9f8, 0x9ff, rcx15, r8_10);
        do {
            eax17 = *reinterpret_cast<int32_t*>(&r14_16) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax17)) <= 0xccc) {
                fun_a66(10, r13_14, 0x9ff, rcx15, r8_10);
            }
            __asm__("movq xmm0, [rax+r14*8]");
            fun_a38(r13_14, 0xa13, 0x9ff, rcx15, r8_10);
            ++r14_16;
        } while (r14_16 != 0x7d0);
        fun_a80(r13_14, 0xa6f, 0xa76, rcx15, r8_10);
        *reinterpret_cast<int32_t*>(&rsi2) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx4) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx6 = r13_14;
        fun_a99(0xa87, 22, 1, rcx6, r8_10);
        r14_18 = v19;
        r12_8 = v20;
    }
    fun_9a5(rbx21, rsi2, rdx4, rcx6, r8_10);
    fun_9ad(r15_22, rsi2, rdx4, rcx6, r8_10);
    fun_9b5(r14_18, rsi2, rdx4, rcx6, r8_10);
    fun_9bd(r12_8, rsi2, rdx4, rcx6, r8_10);
    goto v23;
}

void fun_9f1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t* rcx, int64_t* r8) {
    int64_t r14_6;
    int64_t* r13_7;
    int32_t eax8;
    int64_t* r13_9;
    int64_t* r13_10;
    int64_t* r13_11;
    int64_t* r13_12;
    int64_t* rbx13;
    int64_t r15_14;
    int64_t* v15;
    int64_t* v16;
    int64_t v17;

    *reinterpret_cast<int32_t*>(&r14_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_6) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_a0c(r13_7, 0x9f8, 0x9ff, rcx, r8);
    do {
        eax8 = *reinterpret_cast<int32_t*>(&r14_6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax8)) <= 0xccc) {
            fun_a66(10, r13_9, 0x9ff, rcx, r8);
        }
        __asm__("movq xmm0, [rax+r14*8]");
        fun_a38(r13_10, 0xa13, 0x9ff, rcx, r8);
        ++r14_6;
    } while (r14_6 != 0x7d0);
    fun_a80(r13_11, 0xa6f, 0xa76, rcx, r8);
    fun_a99(0xa87, 22, 1, r13_12, r8);
    fun_9a5(rbx13, 22, 1, r13_12, r8);
    fun_9ad(r15_14, 22, 1, r13_12, r8);
    fun_9b5(v15, 22, 1, r13_12, r8);
    fun_9bd(v16, 22, 1, r13_12, r8);
    goto v17;
}

void fun_9ad(int64_t rdi, int64_t* rsi, int64_t rdx, int64_t* rcx, int64_t* r8) {
    int64_t* r14_6;
    int64_t* r12_7;
    int64_t v8;

    fun_9b5(r14_6, rsi, rdx, rcx, r8);
    fun_9bd(r12_7, rsi, rdx, rcx, r8);
    goto v8;
}

void fun_a38(int64_t* rdi, int64_t rsi, int64_t rdx, int64_t* rcx, int64_t* r8) {
    int64_t r14_6;
    int32_t eax7;
    int64_t* r13_8;
    int64_t* r13_9;
    int64_t rbp10;
    int64_t* r13_11;
    int64_t* r13_12;
    int64_t* rbx13;
    int64_t r15_14;
    int64_t* v15;
    int64_t* v16;
    int64_t v17;

    while (++r14_6, r14_6 != 0x7d0) {
        eax7 = *reinterpret_cast<int32_t*>(&r14_6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax7)) <= 0xccc) {
            fun_a66(10, r13_8, rdx, rcx, r8);
        }
        __asm__("movq xmm0, [rax+r14*8]");
        fun_a38(r13_9, rbp10, rdx, rcx, r8);
    }
    fun_a80(r13_11, 0xa6f, 0xa76, rcx, r8);
    fun_a99(0xa87, 22, 1, r13_12, r8);
    fun_9a5(rbx13, 22, 1, r13_12, r8);
    fun_9ad(r15_14, 22, 1, r13_12, r8);
    fun_9b5(v15, 22, 1, r13_12, r8);
    fun_9bd(v16, 22, 1, r13_12, r8);
    goto v17;
}

int64_t fun_3a8(int64_t rdi, int64_t rsi);

int64_t* fun_3ba(int64_t rdi, int64_t rsi);

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s29 {
    int32_t f0;
    int32_t f4;
};

int64_t* fun_3cc();

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

void fun_396(int64_t rdi, int64_t rsi) {
    int64_t* rbx3;
    int64_t* rax4;
    int64_t rax5;
    int64_t r15_6;
    int64_t* rax7;
    int64_t* r14_8;
    struct s28* rdi9;
    struct s29* rsi10;
    int64_t* rax11;
    uint64_t rdx12;
    uint64_t rcx13;
    struct s30* rdi14;
    struct s31* rsi15;
    struct s32* rdi16;
    struct s33* rsi17;
    struct s34* rdi18;
    struct s35* rsi19;
    struct s36* rdi20;
    struct s37* rsi21;
    int64_t* v22;
    int64_t* v23;
    uint64_t r13_24;
    uint64_t rbp25;
    struct s30* rdi26;
    struct s31* rsi27;
    struct s32* rdi28;
    struct s33* rsi29;
    uint64_t r12_30;
    uint64_t rax31;
    uint64_t rcx32;
    struct s38* rdi33;
    struct s39* rdi34;
    int64_t v35;
    int32_t* rax36;
    int32_t* r13_37;
    int64_t rax38;
    void* v39;
    int64_t* rdx40;
    struct s40* rsi41;
    struct s41* rdi42;
    int64_t r8_43;
    void* r9_44;
    int64_t* r15_45;
    struct s40* r9_46;
    int64_t r11_47;
    struct s42* rdi48;
    struct s43* rsi49;
    struct s41* rdi50;
    struct s40* rsi51;
    struct s42* rdi52;
    struct s43* rsi53;
    int64_t r10_54;
    struct s42* rdi55;
    struct s43* rsi56;
    int64_t r15_57;
    int64_t* r14_58;
    int64_t r8_59;
    void* rax60;
    struct s44* rdi61;
    int64_t rsi62;
    int64_t rdx63;
    struct s45* rsi64;
    struct s46* rsi65;
    struct s47* rsi66;
    struct s48* rdi67;
    struct s49* rsi68;
    struct s50* rsi69;
    struct s51* rdi70;
    struct s52* rdi71;
    int64_t* rsi72;
    int64_t rdx73;
    int64_t* rcx74;
    int64_t* r12_75;
    int64_t* r8_76;
    int32_t v77;
    signed char** v78;
    int64_t** rax79;
    int64_t* r13_80;
    int64_t* rcx81;
    int64_t r14_82;
    int32_t eax83;
    int64_t v84;

    rbx3 = rax4;
    rax5 = fun_3a8(0x7d0, 8);
    r15_6 = rax5;
    rax7 = fun_3ba(0x7d0, 8);
    r14_8 = rax7;
    *reinterpret_cast<int32_t*>(&rdi9) = 0x7d0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi10) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
    rax11 = fun_3cc();
    *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rax11) - reinterpret_cast<int64_t>(r14_8)) < 16 || (reinterpret_cast<uint64_t>(r15_6 - reinterpret_cast<int64_t>(r14_8)) < 16 || reinterpret_cast<uint64_t>(r15_6 - reinterpret_cast<int64_t>(rax11)) < 16)) {
        do {
            r14_8[rdx12] = reinterpret_cast<int64_t>(fputc);
            rax11[rdx12] = reinterpret_cast<int64_t>(fputc);
            rcx13 = rdx12 | 1;
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, ecx");
            rdi9->f0 = rsi10->f0;
            rdi14 = reinterpret_cast<struct s30*>(&rdi9->f4);
            rsi15 = reinterpret_cast<struct s31*>(&rsi10->f4);
            __asm__("divsd xmm0, xmm1");
            rdi14->f0 = rsi15->f0;
            rdi16 = reinterpret_cast<struct s32*>(&rdi14->f4);
            rsi17 = reinterpret_cast<struct s33*>(&rsi15->f4);
            __asm__("mulsd xmm0, xmm2");
            rdi16->f0 = rsi17->f0;
            rdi18 = reinterpret_cast<struct s34*>(&rdi16->f4);
            rsi19 = reinterpret_cast<struct s35*>(&rsi17->f4);
            __asm__("addsd xmm0, xmm3");
            rdi18->f0 = rsi19->f0;
            rdi20 = reinterpret_cast<struct s36*>(&rdi18->f4);
            rsi21 = reinterpret_cast<struct s37*>(&rsi19->f4);
            r14_8[rcx13] = reinterpret_cast<int64_t>(fputc);
            rax11[rcx13] = reinterpret_cast<int64_t>(fputc);
            rdx12 = rdx12 + 2;
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("divsd xmm0, xmm1");
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm3");
            rdi20->f0 = rsi21->f0;
            rdi9 = reinterpret_cast<struct s28*>(&rdi20->f4);
            rsi10 = reinterpret_cast<struct s29*>(&rsi21->f4);
        } while (rdx12 != 0x7d0);
    } else {
        __asm__("movdqa xmm0, [rip+0x0]");
        __asm__("xorpd xmm1, xmm1");
        __asm__("pcmpeqd xmm2, xmm2");
        __asm__("movapd xmm3, [rip+0x0]");
        __asm__("movapd xmm4, [rip+0x0]");
        __asm__("movapd xmm5, [rip+0x0]");
        __asm__("movdqa xmm6, [rip+0x0]");
        do {
            __asm__("movupd [r14+rdx*8], xmm1");
            __asm__("pshufd xmm7, xmm0, 0xe8");
            __asm__("psubd xmm7, xmm2");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("movupd [rax+rdx*8], xmm1");
            __asm__("divpd xmm7, xmm3");
            __asm__("mulpd xmm7, xmm4");
            __asm__("addpd xmm7, xmm5");
            __asm__("movupd [r15+rdx*8], xmm7");
            rdx12 = rdx12 + 2;
            __asm__("paddq xmm0, xmm6");
        } while (rdx12 != 0x7d0);
    }
    v22 = rax11;
    v23 = r14_8;
    *reinterpret_cast<int32_t*>(&r13_24) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_24) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rbp25) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp25) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi9->f0 = rsi10->f0;
    rdi26 = reinterpret_cast<struct s30*>(&rdi9->f4);
    rsi27 = reinterpret_cast<struct s31*>(&rsi10->f4);
    rdi26->f0 = rsi27->f0;
    rdi28 = reinterpret_cast<struct s32*>(&rdi26->f4);
    rsi29 = reinterpret_cast<struct s33*>(&rsi27->f4);
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        r12_30 = rbp25 + 1;
        if (rbp25 == fputc) {
            *reinterpret_cast<int32_t*>(&rax31) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax31) + 4) = reinterpret_cast<int32_t>(fputc);
        } else {
            rax31 = r12_30 & 0xfffffffffffffffe;
            *reinterpret_cast<int32_t*>(&rcx32) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm0, [rip+0x0]");
            do {
                __asm__("xorpd xmm1, xmm1");
                __asm__("psubd xmm1, xmm0");
                __asm__("cvtdq2pd xmm1, xmm1");
                __asm__("divpd xmm1, xmm4");
                __asm__("addpd xmm1, xmm5");
                __asm__("movupd [rdx+rcx*8], xmm1");
                rcx32 = rcx32 + 2;
                __asm__("paddd xmm0, xmm6");
            } while (rcx32 != rax31);
            if (r12_30 == rax31) 
                goto addr_5b5_36;
        }
        do {
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, ecx");
            __asm__("divsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm3");
            rdi28->f0 = rsi29->f0;
            rdi28 = reinterpret_cast<struct s32*>(&rdi28->f4);
            rsi29 = reinterpret_cast<struct s33*>(&rsi29->f4);
            ++rax31;
        } while (rax31 != r13_24);
        addr_5fa_41:
        if (rbp25 <= 0x7ce) {
            rdi33 = reinterpret_cast<struct s38*>(rbp25 * 0x3e88 + 8 + reinterpret_cast<int64_t>(rbx3));
            fun_63d();
            __asm__("movdqa xmm6, [rip+0x0]");
            __asm__("movapd xmm5, [rip+0x0]");
            __asm__("movapd xmm4, [rip+0x0]");
            rdi33->f0 = fputc;
            rdi34 = reinterpret_cast<struct s39*>(&rdi33->f4);
            rdi34->f0 = g4;
            rdi28 = reinterpret_cast<struct s32*>(&rdi34->f4);
            rsi29 = reinterpret_cast<struct s33*>(8);
            continue;
        }
        addr_5b5_36:
        goto addr_5fa_41;
        (rbx3 + rbp25 * 0x7d0)[rbp25] = 0x3ff0000000000000;
        ++r13_24;
        rbp25 = r12_30;
    } while (r12_30 != 0x7d0);
    v35 = r15_6;
    rax36 = fun_67e(0x3d0900, 8);
    r13_37 = rax36;
    fun_690(rax36);
    *reinterpret_cast<int32_t*>(&rax38) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v39 = reinterpret_cast<void*>(rax38 * 8);
        rdx40 = rbx3 + rax38;
        rsi41 = reinterpret_cast<struct s40*>(rbx3 + rax38 + 0x3d0131);
        rdi42 = reinterpret_cast<struct s41*>(rax38 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_43) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_43) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_44 = reinterpret_cast<void*>(r8_43 * 0x3e80);
            r15_45 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r9_44) + reinterpret_cast<int64_t>(r13_37) + 0x3e80);
            r9_46 = reinterpret_cast<struct s40*>(reinterpret_cast<int64_t>(r9_44) + reinterpret_cast<int64_t>(r13_37));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_46) < reinterpret_cast<uint64_t>(rsi41))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx40) < reinterpret_cast<uint64_t>(r15_45)))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_47) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_47) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_810_57;
            }
            *reinterpret_cast<int32_t*>(&r11_47) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_47) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_46) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx3) + reinterpret_cast<int64_t>(rdi42) + reinterpret_cast<int64_t>(r9_44)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx3) + reinterpret_cast<int64_t>(v39) + reinterpret_cast<int64_t>(r9_44)) < reinterpret_cast<uint64_t>(r15_45)))) == fputc)) {
                do {
                    addr_810_57:
                    rdi42->f0 = rsi41->f0;
                    rdi48 = reinterpret_cast<struct s42*>(&rdi42->f4);
                    rsi49 = reinterpret_cast<struct s43*>(&rsi41->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi48->f0 = rsi49->f0;
                    rdi50 = reinterpret_cast<struct s41*>(&rdi48->f4);
                    rsi51 = reinterpret_cast<struct s40*>(&rsi49->f4);
                    rdi50->f0 = rsi51->f0;
                    rdi52 = reinterpret_cast<struct s42*>(&rdi50->f4);
                    rsi53 = reinterpret_cast<struct s43*>(&rsi51->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi52->f0 = rsi53->f0;
                    rdi42 = reinterpret_cast<struct s41*>(&rdi52->f4);
                    rsi41 = reinterpret_cast<struct s40*>(&rsi53->f4);
                    r11_47 = r11_47 + 2;
                } while (r11_47 != 0x7d0);
            } else {
                rdi42->f0 = rsi41->f0;
                rdi42 = reinterpret_cast<struct s41*>(&rdi42->f4);
                rsi41 = reinterpret_cast<struct s40*>(&rsi41->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_54) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_54) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi42->f0 = rsi41->f0;
                    rdi55 = reinterpret_cast<struct s42*>(&rdi42->f4);
                    rsi56 = reinterpret_cast<struct s43*>(&rsi41->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi55->f0 = rsi56->f0;
                    rdi42 = reinterpret_cast<struct s41*>(&rdi55->f4);
                    rsi41 = reinterpret_cast<struct s40*>(&rsi56->f4);
                    __asm__("movhpd xmm2, [r14+rax*8]");
                    __asm__("movupd xmm3, [r9+r10*8]");
                    __asm__("movupd xmm4, [r9+r10*8+0x10]");
                    __asm__("mulpd xmm1, xmm0");
                    __asm__("addpd xmm1, xmm3");
                    __asm__("mulpd xmm2, xmm0");
                    __asm__("addpd xmm2, xmm4");
                    __asm__("movupd [r9+r10*8], xmm1");
                    __asm__("movupd [r9+r10*8+0x10], xmm2");
                    r10_54 = r10_54 + 4;
                } while (r10_54 != 0x7d0);
                continue;
            }
            ++r8_43;
        } while (r8_43 != 0x7d0);
        ++rax38;
    } while (rax38 != 0x7d0);
    r15_57 = v35;
    r14_58 = v23;
    *reinterpret_cast<int32_t*>(&r8_59) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_59) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rax60 = reinterpret_cast<void*>(r8_59 * 0x3e80);
        rdi61 = reinterpret_cast<struct s44*>(reinterpret_cast<int64_t>(rax60) + reinterpret_cast<int64_t>(rbx3) - (reinterpret_cast<int64_t>(rax60) + reinterpret_cast<int64_t>(r13_37)));
        *reinterpret_cast<int32_t*>(&rsi62) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi62) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx63) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx63) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(rdi61) >= 32) {
            do {
                __asm__("movups xmm0, [rcx+rsi*8]");
                __asm__("movups xmm1, [rcx+rsi*8+0x10]");
                __asm__("movups [rax+rsi*8], xmm0");
                __asm__("movups [rax+rsi*8+0x10], xmm1");
                __asm__("movdqu xmm0, [rdx+rcx]");
                __asm__("movupd xmm1, [rdx+rcx+0x10]");
                __asm__("movdqu [rdx+rax], xmm0");
                __asm__("movupd [rdx+rax+0x10], xmm1");
                rsi62 = rsi62 + 8;
            } while (rsi62 != 0x7d0);
        } else {
            do {
                rsi64 = reinterpret_cast<struct s45*>(rdx63 * 8);
                rdi61->f0 = rsi64->f0;
                rsi65 = reinterpret_cast<struct s46*>(&rsi64->f4);
                rdi61->f4 = rsi65->f0;
                rsi66 = reinterpret_cast<struct s47*>(&rsi65->f4);
                rdi67 = reinterpret_cast<struct s48*>(reinterpret_cast<uint64_t>(rsi66) | 8);
                rdi67->f0 = rsi66->f0;
                rsi68 = reinterpret_cast<struct s49*>(&rsi66->f4);
                rdi67->f4 = rsi68->f0;
                rsi69 = reinterpret_cast<struct s50*>(&rsi68->f4);
                rdi70 = reinterpret_cast<struct s51*>(reinterpret_cast<uint64_t>(rsi69) | 16);
                rdi70->f0 = rsi69->f0;
                rdi71 = reinterpret_cast<struct s52*>(&rdi70->f4);
                rdi71->f0 = rsi69->f4;
                rdi61 = reinterpret_cast<struct s44*>(&rdi71->f4);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx63 = rdx63 + 4;
            } while (rdx63 != 0x7d0);
        }
        ++r8_59;
    } while (r8_59 != 0x7d0);
    fun_96e(r13_37);
    rsi72 = rbx3;
    rdx73 = r15_57;
    rcx74 = r14_58;
    r12_75 = v22;
    r8_76 = r12_75;
    fun_989(0x7d0, rsi72, rdx73, rcx74, r8_76);
    if (v77 >= 43 && **v78 == fputc) {
        rax79 = g9d5;
        r13_80 = *rax79;
        rcx81 = r13_80;
        fun_9f1(0x9df, 22, 1, rcx81, r8_76);
        *reinterpret_cast<int32_t*>(&r14_82) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_82) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_a0c(r13_80, 0x9f8, 0x9ff, rcx81, r8_76);
        do {
            eax83 = *reinterpret_cast<int32_t*>(&r14_82) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax83)) <= 0xccc) {
                fun_a66(10, r13_80, 0x9ff, rcx81, r8_76);
            }
            __asm__("movq xmm0, [rax+r14*8]");
            fun_a38(r13_80, 0xa13, 0x9ff, rcx81, r8_76);
            ++r14_82;
        } while (r14_82 != 0x7d0);
        fun_a80(r13_80, 0xa6f, 0xa76, rcx81, r8_76);
        *reinterpret_cast<int32_t*>(&rsi72) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi72) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx73) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx73) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx74 = r13_80;
        fun_a99(0xa87, 22, 1, rcx74, r8_76);
        r14_58 = v23;
        r12_75 = v22;
    }
    fun_9a5(rbx3, rsi72, rdx73, rcx74, r8_76);
    fun_9ad(r15_57, rsi72, rdx73, rcx74, r8_76);
    fun_9b5(r14_58, rsi72, rdx73, rcx74, r8_76);
    fun_9bd(r12_75, rsi72, rdx73, rcx74, r8_76);
    goto v84;
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

void fun_690(int32_t* rdi) {
    int64_t rax2;
    int64_t v3;
    uint64_t rdx4;
    int64_t rbx5;
    struct s53* rsi6;
    int64_t rbx7;
    struct s54* rdi8;
    int64_t r8_9;
    int64_t r9_10;
    uint64_t r15_11;
    int64_t r13_12;
    struct s53* r9_13;
    int32_t* r13_14;
    int64_t r11_15;
    int64_t rbx16;
    int64_t rbx17;
    struct s55* rdi18;
    struct s56* rsi19;
    struct s54* rdi20;
    struct s53* rsi21;
    struct s55* rdi22;
    struct s56* rsi23;
    int64_t r10_24;
    struct s55* rdi25;
    struct s56* rsi26;
    int64_t r15_27;
    int64_t v28;
    int64_t* r14_29;
    int64_t* v30;
    int64_t r8_31;
    int64_t rax32;
    struct s57* rdi33;
    void* rbx34;
    int64_t r13_35;
    int64_t rsi36;
    int64_t rdx37;
    struct s58* rsi38;
    struct s59* rsi39;
    struct s60* rsi40;
    struct s61* rdi41;
    struct s62* rsi42;
    struct s63* rsi43;
    struct s64* rdi44;
    struct s65* rdi45;
    int32_t* r13_46;
    int64_t* rsi47;
    int64_t* rbx48;
    int64_t rdx49;
    int64_t* rcx50;
    int64_t* r12_51;
    int64_t* v52;
    int64_t* r8_53;
    int32_t v54;
    signed char** v55;
    int64_t** rax56;
    int64_t* r13_57;
    int64_t* rcx58;
    int64_t r14_59;
    int32_t eax60;
    int64_t* v61;
    int64_t* v62;
    int64_t* rbx63;
    int64_t v64;

    *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v3 = rax2 * 8;
        rdx4 = reinterpret_cast<uint64_t>(rbx5 + rax2 * 8);
        rsi6 = reinterpret_cast<struct s53*>(rbx7 + rax2 * 8 + 0x1e80988);
        rdi8 = reinterpret_cast<struct s54*>(rax2 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_10 = r8_9 * 0x3e80;
            r15_11 = reinterpret_cast<uint64_t>(r9_10 + r13_12 + 0x3e80);
            r9_13 = reinterpret_cast<struct s53*>(r9_10 + reinterpret_cast<int64_t>(r13_14));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_13) < reinterpret_cast<uint64_t>(rsi6))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(rdx4 < r15_11))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_15) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_15) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_810_5;
            }
            *reinterpret_cast<int32_t*>(&r11_15) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_15) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_13) < reinterpret_cast<uint64_t>(rbx16 + reinterpret_cast<int64_t>(rdi8) + r9_10))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx17 + v3 + r9_10) < r15_11))) == fputc)) {
                do {
                    addr_810_5:
                    rdi8->f0 = rsi6->f0;
                    rdi18 = reinterpret_cast<struct s55*>(&rdi8->f4);
                    rsi19 = reinterpret_cast<struct s56*>(&rsi6->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi18->f0 = rsi19->f0;
                    rdi20 = reinterpret_cast<struct s54*>(&rdi18->f4);
                    rsi21 = reinterpret_cast<struct s53*>(&rsi19->f4);
                    rdi20->f0 = rsi21->f0;
                    rdi22 = reinterpret_cast<struct s55*>(&rdi20->f4);
                    rsi23 = reinterpret_cast<struct s56*>(&rsi21->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi22->f0 = rsi23->f0;
                    rdi8 = reinterpret_cast<struct s54*>(&rdi22->f4);
                    rsi6 = reinterpret_cast<struct s53*>(&rsi23->f4);
                    r11_15 = r11_15 + 2;
                } while (r11_15 != 0x7d0);
            } else {
                rdi8->f0 = rsi6->f0;
                rdi8 = reinterpret_cast<struct s54*>(&rdi8->f4);
                rsi6 = reinterpret_cast<struct s53*>(&rsi6->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_24) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_24) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi8->f0 = rsi6->f0;
                    rdi25 = reinterpret_cast<struct s55*>(&rdi8->f4);
                    rsi26 = reinterpret_cast<struct s56*>(&rsi6->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi25->f0 = rsi26->f0;
                    rdi8 = reinterpret_cast<struct s54*>(&rdi25->f4);
                    rsi6 = reinterpret_cast<struct s53*>(&rsi26->f4);
                    __asm__("movhpd xmm2, [r14+rax*8]");
                    __asm__("movupd xmm3, [r9+r10*8]");
                    __asm__("movupd xmm4, [r9+r10*8+0x10]");
                    __asm__("mulpd xmm1, xmm0");
                    __asm__("addpd xmm1, xmm3");
                    __asm__("mulpd xmm2, xmm0");
                    __asm__("addpd xmm2, xmm4");
                    __asm__("movupd [r9+r10*8], xmm1");
                    __asm__("movupd [r9+r10*8+0x10], xmm2");
                    r10_24 = r10_24 + 4;
                } while (r10_24 != 0x7d0);
                continue;
            }
            ++r8_9;
        } while (r8_9 != 0x7d0);
        ++rax2;
    } while (rax2 != 0x7d0);
    r15_27 = v28;
    r14_29 = v30;
    *reinterpret_cast<int32_t*>(&r8_31) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_31) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rax32 = r8_31 * 0x3e80;
        rdi33 = reinterpret_cast<struct s57*>(rax32 + reinterpret_cast<int64_t>(rbx34) - (rax32 + r13_35));
        *reinterpret_cast<int32_t*>(&rsi36) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi36) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx37) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(rdi33) >= 32) {
            do {
                __asm__("movups xmm0, [rcx+rsi*8]");
                __asm__("movups xmm1, [rcx+rsi*8+0x10]");
                __asm__("movups [rax+rsi*8], xmm0");
                __asm__("movups [rax+rsi*8+0x10], xmm1");
                __asm__("movdqu xmm0, [rdx+rcx]");
                __asm__("movupd xmm1, [rdx+rcx+0x10]");
                __asm__("movdqu [rdx+rax], xmm0");
                __asm__("movupd [rdx+rax+0x10], xmm1");
                rsi36 = rsi36 + 8;
            } while (rsi36 != 0x7d0);
        } else {
            do {
                rsi38 = reinterpret_cast<struct s58*>(rdx37 * 8);
                rdi33->f0 = rsi38->f0;
                rsi39 = reinterpret_cast<struct s59*>(&rsi38->f4);
                rdi33->f4 = rsi39->f0;
                rsi40 = reinterpret_cast<struct s60*>(&rsi39->f4);
                rdi41 = reinterpret_cast<struct s61*>(reinterpret_cast<uint64_t>(rsi40) | 8);
                rdi41->f0 = rsi40->f0;
                rsi42 = reinterpret_cast<struct s62*>(&rsi40->f4);
                rdi41->f4 = rsi42->f0;
                rsi43 = reinterpret_cast<struct s63*>(&rsi42->f4);
                rdi44 = reinterpret_cast<struct s64*>(reinterpret_cast<uint64_t>(rsi43) | 16);
                rdi44->f0 = rsi43->f0;
                rdi45 = reinterpret_cast<struct s65*>(&rdi44->f4);
                rdi45->f0 = rsi43->f4;
                rdi33 = reinterpret_cast<struct s57*>(&rdi45->f4);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx37 = rdx37 + 4;
            } while (rdx37 != 0x7d0);
        }
        ++r8_31;
    } while (r8_31 != 0x7d0);
    fun_96e(r13_46);
    rsi47 = rbx48;
    rdx49 = r15_27;
    rcx50 = r14_29;
    r12_51 = v52;
    r8_53 = r12_51;
    fun_989(0x7d0, rsi47, rdx49, rcx50, r8_53);
    if (v54 >= 43 && **v55 == fputc) {
        rax56 = g9d5;
        r13_57 = *rax56;
        rcx58 = r13_57;
        fun_9f1(0x9df, 22, 1, rcx58, r8_53);
        *reinterpret_cast<int32_t*>(&r14_59) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_59) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_a0c(r13_57, 0x9f8, 0x9ff, rcx58, r8_53);
        do {
            eax60 = *reinterpret_cast<int32_t*>(&r14_59) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax60)) <= 0xccc) {
                fun_a66(10, r13_57, 0x9ff, rcx58, r8_53);
            }
            __asm__("movq xmm0, [rax+r14*8]");
            fun_a38(r13_57, 0xa13, 0x9ff, rcx58, r8_53);
            ++r14_59;
        } while (r14_59 != 0x7d0);
        fun_a80(r13_57, 0xa6f, 0xa76, rcx58, r8_53);
        *reinterpret_cast<int32_t*>(&rsi47) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi47) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx49) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx49) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx50 = r13_57;
        fun_a99(0xa87, 22, 1, rcx50, r8_53);
        r14_29 = v61;
        r12_51 = v62;
    }
    fun_9a5(rbx63, rsi47, rdx49, rcx50, r8_53);
    fun_9ad(r15_27, rsi47, rdx49, rcx50, r8_53);
    fun_9b5(r14_29, rsi47, rdx49, rcx50, r8_53);
    fun_9bd(r12_51, rsi47, rdx49, rcx50, r8_53);
    goto v64;
}

void fun_989(int64_t rdi, int64_t* rsi, int64_t rdx, int64_t* rcx, int64_t* r8) {
    int32_t v6;
    signed char** v7;
    int64_t** rax8;
    int64_t* r13_9;
    int64_t* rcx10;
    int64_t r14_11;
    int32_t eax12;
    int64_t* r14_13;
    int64_t* v14;
    int64_t* r12_15;
    int64_t* v16;
    int64_t* rbx17;
    int64_t r15_18;
    int64_t v19;

    if (v6 >= 43 && **v7 == fputc) {
        rax8 = g9d5;
        r13_9 = *rax8;
        rcx10 = r13_9;
        fun_9f1(0x9df, 22, 1, rcx10, r8);
        *reinterpret_cast<int32_t*>(&r14_11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_11) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_a0c(r13_9, 0x9f8, 0x9ff, rcx10, r8);
        do {
            eax12 = *reinterpret_cast<int32_t*>(&r14_11) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax12)) <= 0xccc) {
                fun_a66(10, r13_9, 0x9ff, rcx10, r8);
            }
            __asm__("movq xmm0, [rax+r14*8]");
            fun_a38(r13_9, 0xa13, 0x9ff, rcx10, r8);
            ++r14_11;
        } while (r14_11 != 0x7d0);
        fun_a80(r13_9, 0xa6f, 0xa76, rcx10, r8);
        *reinterpret_cast<int32_t*>(&rsi) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx = r13_9;
        fun_a99(0xa87, 22, 1, rcx, r8);
        r14_13 = v14;
        r12_15 = v16;
    }
    fun_9a5(rbx17, rsi, rdx, rcx, r8);
    fun_9ad(r15_18, rsi, rdx, rcx, r8);
    fun_9b5(r14_13, rsi, rdx, rcx, r8);
    fun_9bd(r12_15, rsi, rdx, rcx, r8);
    goto v19;
}

void fun_a0c(int64_t* rdi, int64_t rsi, int64_t rdx, int64_t* rcx, int64_t* r8) {
    int32_t eax6;
    int64_t r14_7;
    int64_t* r13_8;
    int64_t* r13_9;
    int64_t* r13_10;
    int64_t* r13_11;
    int64_t* rbx12;
    int64_t r15_13;
    int64_t* v14;
    int64_t* v15;
    int64_t v16;

    do {
        eax6 = *reinterpret_cast<int32_t*>(&r14_7) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax6)) <= 0xccc) {
            fun_a66(10, r13_8, rdx, rcx, r8);
        }
        __asm__("movq xmm0, [rax+r14*8]");
        fun_a38(r13_9, 0xa13, rdx, rcx, r8);
        ++r14_7;
    } while (r14_7 != 0x7d0);
    fun_a80(r13_10, 0xa6f, 0xa76, rcx, r8);
    fun_a99(0xa87, 22, 1, r13_11, r8);
    fun_9a5(rbx12, 22, 1, r13_11, r8);
    fun_9ad(r15_13, 22, 1, r13_11, r8);
    fun_9b5(v14, 22, 1, r13_11, r8);
    fun_9bd(v15, 22, 1, r13_11, r8);
    goto v16;
}

void fun_9b5(int64_t* rdi, int64_t* rsi, int64_t rdx, int64_t* rcx, int64_t* r8) {
    int64_t* r12_6;
    int64_t v7;

    fun_9bd(r12_6, rsi, rdx, rcx, r8);
    goto v7;
}

void fun_a80(int64_t* rdi, int64_t rsi, int64_t rdx, int64_t* rcx, int64_t* r8) {
    int64_t* r13_6;
    int64_t* rbx7;
    int64_t r15_8;
    int64_t* v9;
    int64_t* v10;
    int64_t v11;

    fun_a99(0xa87, 22, 1, r13_6, r8);
    fun_9a5(rbx7, 22, 1, r13_6, r8);
    fun_9ad(r15_8, 22, 1, r13_6, r8);
    fun_9b5(v9, 22, 1, r13_6, r8);
    fun_9bd(v10, 22, 1, r13_6, r8);
    goto v11;
}

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

int64_t fun_3a8(int64_t rdi, int64_t rsi) {
    int64_t r15_3;
    int64_t rax4;
    int64_t* rax5;
    int64_t* r14_6;
    struct s66* rdi7;
    struct s67* rsi8;
    int64_t* rax9;
    uint64_t rdx10;
    uint64_t rcx11;
    struct s68* rdi12;
    struct s69* rsi13;
    struct s70* rdi14;
    struct s71* rsi15;
    struct s72* rdi16;
    struct s73* rsi17;
    struct s74* rdi18;
    struct s75* rsi19;
    int64_t* v20;
    int64_t* v21;
    uint64_t r13_22;
    uint64_t rbp23;
    struct s68* rdi24;
    struct s69* rsi25;
    struct s70* rdi26;
    struct s71* rsi27;
    uint64_t r12_28;
    uint64_t rax29;
    uint64_t rcx30;
    struct s76* rdi31;
    void* rbx32;
    struct s77* rdi33;
    int64_t* rbx34;
    int64_t v35;
    int32_t* rax36;
    int32_t* r13_37;
    int64_t rax38;
    int64_t v39;
    uint64_t rdx40;
    int64_t rbx41;
    struct s78* rsi42;
    void* rbx43;
    struct s79* rdi44;
    int64_t r8_45;
    void* r9_46;
    uint64_t r15_47;
    struct s78* r9_48;
    int64_t r11_49;
    void* rbx50;
    int64_t rbx51;
    struct s80* rdi52;
    struct s81* rsi53;
    struct s79* rdi54;
    struct s78* rsi55;
    struct s80* rdi56;
    struct s81* rsi57;
    int64_t r10_58;
    struct s80* rdi59;
    struct s81* rsi60;
    int64_t r15_61;
    int64_t* r14_62;
    int64_t r8_63;
    void* rax64;
    struct s82* rdi65;
    void* rbx66;
    int64_t rsi67;
    int64_t rdx68;
    struct s83* rsi69;
    struct s84* rsi70;
    struct s85* rsi71;
    struct s86* rdi72;
    struct s87* rsi73;
    struct s88* rsi74;
    struct s89* rdi75;
    struct s90* rdi76;
    int64_t* rsi77;
    int64_t* rbx78;
    int64_t rdx79;
    int64_t* rcx80;
    int64_t* r12_81;
    int64_t* r8_82;
    int32_t v83;
    signed char** v84;
    int64_t** rax85;
    int64_t* r13_86;
    int64_t* rcx87;
    int64_t r14_88;
    int32_t eax89;
    int64_t* rbx90;
    int64_t v91;

    r15_3 = rax4;
    rax5 = fun_3ba(0x7d0, 8);
    r14_6 = rax5;
    *reinterpret_cast<int32_t*>(&rdi7) = 0x7d0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi8) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
    rax9 = fun_3cc();
    *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rax9) - reinterpret_cast<int64_t>(r14_6)) < 16 || (reinterpret_cast<uint64_t>(r15_3 - reinterpret_cast<int64_t>(r14_6)) < 16 || reinterpret_cast<uint64_t>(r15_3 - reinterpret_cast<int64_t>(rax9)) < 16)) {
        do {
            r14_6[rdx10] = reinterpret_cast<int64_t>(fputc);
            rax9[rdx10] = reinterpret_cast<int64_t>(fputc);
            rcx11 = rdx10 | 1;
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, ecx");
            rdi7->f0 = rsi8->f0;
            rdi12 = reinterpret_cast<struct s68*>(&rdi7->f4);
            rsi13 = reinterpret_cast<struct s69*>(&rsi8->f4);
            __asm__("divsd xmm0, xmm1");
            rdi12->f0 = rsi13->f0;
            rdi14 = reinterpret_cast<struct s70*>(&rdi12->f4);
            rsi15 = reinterpret_cast<struct s71*>(&rsi13->f4);
            __asm__("mulsd xmm0, xmm2");
            rdi14->f0 = rsi15->f0;
            rdi16 = reinterpret_cast<struct s72*>(&rdi14->f4);
            rsi17 = reinterpret_cast<struct s73*>(&rsi15->f4);
            __asm__("addsd xmm0, xmm3");
            rdi16->f0 = rsi17->f0;
            rdi18 = reinterpret_cast<struct s74*>(&rdi16->f4);
            rsi19 = reinterpret_cast<struct s75*>(&rsi17->f4);
            r14_6[rcx11] = reinterpret_cast<int64_t>(fputc);
            rax9[rcx11] = reinterpret_cast<int64_t>(fputc);
            rdx10 = rdx10 + 2;
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("divsd xmm0, xmm1");
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm3");
            rdi18->f0 = rsi19->f0;
            rdi7 = reinterpret_cast<struct s66*>(&rdi18->f4);
            rsi8 = reinterpret_cast<struct s67*>(&rsi19->f4);
        } while (rdx10 != 0x7d0);
    } else {
        __asm__("movdqa xmm0, [rip+0x0]");
        __asm__("xorpd xmm1, xmm1");
        __asm__("pcmpeqd xmm2, xmm2");
        __asm__("movapd xmm3, [rip+0x0]");
        __asm__("movapd xmm4, [rip+0x0]");
        __asm__("movapd xmm5, [rip+0x0]");
        __asm__("movdqa xmm6, [rip+0x0]");
        do {
            __asm__("movupd [r14+rdx*8], xmm1");
            __asm__("pshufd xmm7, xmm0, 0xe8");
            __asm__("psubd xmm7, xmm2");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("movupd [rax+rdx*8], xmm1");
            __asm__("divpd xmm7, xmm3");
            __asm__("mulpd xmm7, xmm4");
            __asm__("addpd xmm7, xmm5");
            __asm__("movupd [r15+rdx*8], xmm7");
            rdx10 = rdx10 + 2;
            __asm__("paddq xmm0, xmm6");
        } while (rdx10 != 0x7d0);
    }
    v20 = rax9;
    v21 = r14_6;
    *reinterpret_cast<int32_t*>(&r13_22) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_22) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rbp23) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp23) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7->f0 = rsi8->f0;
    rdi24 = reinterpret_cast<struct s68*>(&rdi7->f4);
    rsi25 = reinterpret_cast<struct s69*>(&rsi8->f4);
    rdi24->f0 = rsi25->f0;
    rdi26 = reinterpret_cast<struct s70*>(&rdi24->f4);
    rsi27 = reinterpret_cast<struct s71*>(&rsi25->f4);
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        r12_28 = rbp23 + 1;
        if (rbp23 == fputc) {
            *reinterpret_cast<int32_t*>(&rax29) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = reinterpret_cast<int32_t>(fputc);
        } else {
            rax29 = r12_28 & 0xfffffffffffffffe;
            *reinterpret_cast<int32_t*>(&rcx30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx30) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm0, [rip+0x0]");
            do {
                __asm__("xorpd xmm1, xmm1");
                __asm__("psubd xmm1, xmm0");
                __asm__("cvtdq2pd xmm1, xmm1");
                __asm__("divpd xmm1, xmm4");
                __asm__("addpd xmm1, xmm5");
                __asm__("movupd [rdx+rcx*8], xmm1");
                rcx30 = rcx30 + 2;
                __asm__("paddd xmm0, xmm6");
            } while (rcx30 != rax29);
            if (r12_28 == rax29) 
                goto addr_5b5_35;
        }
        do {
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, ecx");
            __asm__("divsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm3");
            rdi26->f0 = rsi27->f0;
            rdi26 = reinterpret_cast<struct s70*>(&rdi26->f4);
            rsi27 = reinterpret_cast<struct s71*>(&rsi27->f4);
            ++rax29;
        } while (rax29 != r13_22);
        addr_5fa_40:
        if (rbp23 <= 0x7ce) {
            rdi31 = reinterpret_cast<struct s76*>(rbp23 * 0x3e88 + 8 + reinterpret_cast<int64_t>(rbx32));
            fun_63d();
            __asm__("movdqa xmm6, [rip+0x0]");
            __asm__("movapd xmm5, [rip+0x0]");
            __asm__("movapd xmm4, [rip+0x0]");
            rdi31->f0 = fputc;
            rdi33 = reinterpret_cast<struct s77*>(&rdi31->f4);
            rdi33->f0 = g4;
            rdi26 = reinterpret_cast<struct s70*>(&rdi33->f4);
            rsi27 = reinterpret_cast<struct s71*>(8);
            continue;
        }
        addr_5b5_35:
        goto addr_5fa_40;
        (rbx34 + rbp23 * 0x7d0)[rbp23] = 0x3ff0000000000000;
        ++r13_22;
        rbp23 = r12_28;
    } while (r12_28 != 0x7d0);
    v35 = r15_3;
    rax36 = fun_67e(0x3d0900, 8);
    r13_37 = rax36;
    fun_690(rax36);
    *reinterpret_cast<int32_t*>(&rax38) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v39 = rax38 * 8;
        rdx40 = reinterpret_cast<uint64_t>(rbx41 + rax38 * 8);
        rsi42 = reinterpret_cast<struct s78*>(reinterpret_cast<int64_t>(rbx43) + rax38 * 8 + 0x1e80988);
        rdi44 = reinterpret_cast<struct s79*>(rax38 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_45) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_46 = reinterpret_cast<void*>(r8_45 * 0x3e80);
            r15_47 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_46) + reinterpret_cast<int64_t>(r13_37) + 0x3e80);
            r9_48 = reinterpret_cast<struct s78*>(reinterpret_cast<int64_t>(r9_46) + reinterpret_cast<int64_t>(r13_37));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_48) < reinterpret_cast<uint64_t>(rsi42))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(rdx40 < r15_47))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_49) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_49) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_810_56;
            }
            *reinterpret_cast<int32_t*>(&r11_49) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_49) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_48) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx50) + reinterpret_cast<int64_t>(rdi44) + reinterpret_cast<int64_t>(r9_46)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx51 + v39 + reinterpret_cast<int64_t>(r9_46)) < r15_47))) == fputc)) {
                do {
                    addr_810_56:
                    rdi44->f0 = rsi42->f0;
                    rdi52 = reinterpret_cast<struct s80*>(&rdi44->f4);
                    rsi53 = reinterpret_cast<struct s81*>(&rsi42->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi52->f0 = rsi53->f0;
                    rdi54 = reinterpret_cast<struct s79*>(&rdi52->f4);
                    rsi55 = reinterpret_cast<struct s78*>(&rsi53->f4);
                    rdi54->f0 = rsi55->f0;
                    rdi56 = reinterpret_cast<struct s80*>(&rdi54->f4);
                    rsi57 = reinterpret_cast<struct s81*>(&rsi55->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi56->f0 = rsi57->f0;
                    rdi44 = reinterpret_cast<struct s79*>(&rdi56->f4);
                    rsi42 = reinterpret_cast<struct s78*>(&rsi57->f4);
                    r11_49 = r11_49 + 2;
                } while (r11_49 != 0x7d0);
            } else {
                rdi44->f0 = rsi42->f0;
                rdi44 = reinterpret_cast<struct s79*>(&rdi44->f4);
                rsi42 = reinterpret_cast<struct s78*>(&rsi42->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_58) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_58) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi44->f0 = rsi42->f0;
                    rdi59 = reinterpret_cast<struct s80*>(&rdi44->f4);
                    rsi60 = reinterpret_cast<struct s81*>(&rsi42->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi59->f0 = rsi60->f0;
                    rdi44 = reinterpret_cast<struct s79*>(&rdi59->f4);
                    rsi42 = reinterpret_cast<struct s78*>(&rsi60->f4);
                    __asm__("movhpd xmm2, [r14+rax*8]");
                    __asm__("movupd xmm3, [r9+r10*8]");
                    __asm__("movupd xmm4, [r9+r10*8+0x10]");
                    __asm__("mulpd xmm1, xmm0");
                    __asm__("addpd xmm1, xmm3");
                    __asm__("mulpd xmm2, xmm0");
                    __asm__("addpd xmm2, xmm4");
                    __asm__("movupd [r9+r10*8], xmm1");
                    __asm__("movupd [r9+r10*8+0x10], xmm2");
                    r10_58 = r10_58 + 4;
                } while (r10_58 != 0x7d0);
                continue;
            }
            ++r8_45;
        } while (r8_45 != 0x7d0);
        ++rax38;
    } while (rax38 != 0x7d0);
    r15_61 = v35;
    r14_62 = v21;
    *reinterpret_cast<int32_t*>(&r8_63) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_63) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rax64 = reinterpret_cast<void*>(r8_63 * 0x3e80);
        rdi65 = reinterpret_cast<struct s82*>(reinterpret_cast<int64_t>(rax64) + reinterpret_cast<int64_t>(rbx66) - (reinterpret_cast<int64_t>(rax64) + reinterpret_cast<int64_t>(r13_37)));
        *reinterpret_cast<int32_t*>(&rsi67) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi67) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx68) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx68) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(rdi65) >= 32) {
            do {
                __asm__("movups xmm0, [rcx+rsi*8]");
                __asm__("movups xmm1, [rcx+rsi*8+0x10]");
                __asm__("movups [rax+rsi*8], xmm0");
                __asm__("movups [rax+rsi*8+0x10], xmm1");
                __asm__("movdqu xmm0, [rdx+rcx]");
                __asm__("movupd xmm1, [rdx+rcx+0x10]");
                __asm__("movdqu [rdx+rax], xmm0");
                __asm__("movupd [rdx+rax+0x10], xmm1");
                rsi67 = rsi67 + 8;
            } while (rsi67 != 0x7d0);
        } else {
            do {
                rsi69 = reinterpret_cast<struct s83*>(rdx68 * 8);
                rdi65->f0 = rsi69->f0;
                rsi70 = reinterpret_cast<struct s84*>(&rsi69->f4);
                rdi65->f4 = rsi70->f0;
                rsi71 = reinterpret_cast<struct s85*>(&rsi70->f4);
                rdi72 = reinterpret_cast<struct s86*>(reinterpret_cast<uint64_t>(rsi71) | 8);
                rdi72->f0 = rsi71->f0;
                rsi73 = reinterpret_cast<struct s87*>(&rsi71->f4);
                rdi72->f4 = rsi73->f0;
                rsi74 = reinterpret_cast<struct s88*>(&rsi73->f4);
                rdi75 = reinterpret_cast<struct s89*>(reinterpret_cast<uint64_t>(rsi74) | 16);
                rdi75->f0 = rsi74->f0;
                rdi76 = reinterpret_cast<struct s90*>(&rdi75->f4);
                rdi76->f0 = rsi74->f4;
                rdi65 = reinterpret_cast<struct s82*>(&rdi76->f4);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx68 = rdx68 + 4;
            } while (rdx68 != 0x7d0);
        }
        ++r8_63;
    } while (r8_63 != 0x7d0);
    fun_96e(r13_37);
    rsi77 = rbx78;
    rdx79 = r15_61;
    rcx80 = r14_62;
    r12_81 = v20;
    r8_82 = r12_81;
    fun_989(0x7d0, rsi77, rdx79, rcx80, r8_82);
    if (v83 >= 43 && **v84 == fputc) {
        rax85 = g9d5;
        r13_86 = *rax85;
        rcx87 = r13_86;
        fun_9f1(0x9df, 22, 1, rcx87, r8_82);
        *reinterpret_cast<int32_t*>(&r14_88) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_88) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_a0c(r13_86, 0x9f8, 0x9ff, rcx87, r8_82);
        do {
            eax89 = *reinterpret_cast<int32_t*>(&r14_88) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax89)) <= 0xccc) {
                fun_a66(10, r13_86, 0x9ff, rcx87, r8_82);
            }
            __asm__("movq xmm0, [rax+r14*8]");
            fun_a38(r13_86, 0xa13, 0x9ff, rcx87, r8_82);
            ++r14_88;
        } while (r14_88 != 0x7d0);
        fun_a80(r13_86, 0xa6f, 0xa76, rcx87, r8_82);
        *reinterpret_cast<int32_t*>(&rsi77) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi77) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx79) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx79) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx80 = r13_86;
        fun_a99(0xa87, 22, 1, rcx80, r8_82);
        r14_62 = v21;
        r12_81 = v20;
    }
    fun_9a5(rbx90, rsi77, rdx79, rcx80, r8_82);
    fun_9ad(r15_61, rsi77, rdx79, rcx80, r8_82);
    fun_9b5(r14_62, rsi77, rdx79, rcx80, r8_82);
    fun_9bd(r12_81, rsi77, rdx79, rcx80, r8_82);
    goto v91;
}

void fun_9bd(int64_t* rdi, int64_t* rsi, int64_t rdx, int64_t* rcx, int64_t* r8) {
    int64_t v6;

    goto v6;
}

void fun_a99(int64_t rdi, int64_t* rsi, int64_t rdx, int64_t* rcx, int64_t* r8) {
    int64_t* rbx6;
    int64_t r15_7;
    int64_t* v8;
    int64_t* v9;
    int64_t v10;

    fun_9a5(rbx6, rsi, rdx, rcx, r8);
    fun_9ad(r15_7, rsi, rdx, rcx, r8);
    fun_9b5(v8, rsi, rdx, rcx, r8);
    fun_9bd(v9, rsi, rdx, rcx, r8);
    goto v10;
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

int64_t* fun_3ba(int64_t rdi, int64_t rsi) {
    int64_t* r14_3;
    int64_t* rax4;
    struct s91* rdi5;
    struct s92* rsi6;
    int64_t* rax7;
    uint64_t rdx8;
    int64_t r15_9;
    int64_t r15_10;
    uint64_t rcx11;
    struct s93* rdi12;
    struct s94* rsi13;
    struct s95* rdi14;
    struct s96* rsi15;
    struct s97* rdi16;
    struct s98* rsi17;
    struct s99* rdi18;
    struct s100* rsi19;
    int64_t* v20;
    int64_t* v21;
    uint64_t r13_22;
    uint64_t rbp23;
    struct s93* rdi24;
    struct s94* rsi25;
    struct s95* rdi26;
    struct s96* rsi27;
    uint64_t r12_28;
    uint64_t rax29;
    uint64_t rcx30;
    struct s101* rdi31;
    void* rbx32;
    struct s102* rdi33;
    int64_t* rbx34;
    int64_t v35;
    int64_t r15_36;
    int32_t* rax37;
    int32_t* r13_38;
    int64_t rax39;
    int64_t v40;
    uint64_t rdx41;
    int64_t rbx42;
    struct s103* rsi43;
    void* rbx44;
    struct s104* rdi45;
    int64_t r8_46;
    void* r9_47;
    uint64_t r15_48;
    struct s103* r9_49;
    int64_t r11_50;
    void* rbx51;
    int64_t rbx52;
    struct s105* rdi53;
    struct s106* rsi54;
    struct s104* rdi55;
    struct s103* rsi56;
    struct s105* rdi57;
    struct s106* rsi58;
    int64_t r10_59;
    struct s105* rdi60;
    struct s106* rsi61;
    int64_t r15_62;
    int64_t* r14_63;
    int64_t r8_64;
    void* rax65;
    struct s107* rdi66;
    void* rbx67;
    int64_t rsi68;
    int64_t rdx69;
    struct s108* rsi70;
    struct s109* rsi71;
    struct s110* rsi72;
    struct s111* rdi73;
    struct s112* rsi74;
    struct s113* rsi75;
    struct s114* rdi76;
    struct s115* rdi77;
    int64_t* rsi78;
    int64_t* rbx79;
    int64_t rdx80;
    int64_t* rcx81;
    int64_t* r12_82;
    int64_t* r8_83;
    int32_t v84;
    signed char** v85;
    int64_t** rax86;
    int64_t* r13_87;
    int64_t* rcx88;
    int64_t r14_89;
    int32_t eax90;
    int64_t* rbx91;
    int64_t v92;

    r14_3 = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = 0x7d0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi6) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(fputc);
    rax7 = fun_3cc();
    *reinterpret_cast<int32_t*>(&rdx8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rax7) - reinterpret_cast<int64_t>(r14_3)) < 16 || (reinterpret_cast<uint64_t>(r15_9 - reinterpret_cast<int64_t>(r14_3)) < 16 || reinterpret_cast<uint64_t>(r15_10 - reinterpret_cast<int64_t>(rax7)) < 16)) {
        do {
            r14_3[rdx8] = reinterpret_cast<int64_t>(fputc);
            rax7[rdx8] = reinterpret_cast<int64_t>(fputc);
            rcx11 = rdx8 | 1;
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, ecx");
            rdi5->f0 = rsi6->f0;
            rdi12 = reinterpret_cast<struct s93*>(&rdi5->f4);
            rsi13 = reinterpret_cast<struct s94*>(&rsi6->f4);
            __asm__("divsd xmm0, xmm1");
            rdi12->f0 = rsi13->f0;
            rdi14 = reinterpret_cast<struct s95*>(&rdi12->f4);
            rsi15 = reinterpret_cast<struct s96*>(&rsi13->f4);
            __asm__("mulsd xmm0, xmm2");
            rdi14->f0 = rsi15->f0;
            rdi16 = reinterpret_cast<struct s97*>(&rdi14->f4);
            rsi17 = reinterpret_cast<struct s98*>(&rsi15->f4);
            __asm__("addsd xmm0, xmm3");
            rdi16->f0 = rsi17->f0;
            rdi18 = reinterpret_cast<struct s99*>(&rdi16->f4);
            rsi19 = reinterpret_cast<struct s100*>(&rsi17->f4);
            r14_3[rcx11] = reinterpret_cast<int64_t>(fputc);
            rax7[rcx11] = reinterpret_cast<int64_t>(fputc);
            rdx8 = rdx8 + 2;
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("divsd xmm0, xmm1");
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm3");
            rdi18->f0 = rsi19->f0;
            rdi5 = reinterpret_cast<struct s91*>(&rdi18->f4);
            rsi6 = reinterpret_cast<struct s92*>(&rsi19->f4);
        } while (rdx8 != 0x7d0);
    } else {
        __asm__("movdqa xmm0, [rip+0x0]");
        __asm__("xorpd xmm1, xmm1");
        __asm__("pcmpeqd xmm2, xmm2");
        __asm__("movapd xmm3, [rip+0x0]");
        __asm__("movapd xmm4, [rip+0x0]");
        __asm__("movapd xmm5, [rip+0x0]");
        __asm__("movdqa xmm6, [rip+0x0]");
        do {
            __asm__("movupd [r14+rdx*8], xmm1");
            __asm__("pshufd xmm7, xmm0, 0xe8");
            __asm__("psubd xmm7, xmm2");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("movupd [rax+rdx*8], xmm1");
            __asm__("divpd xmm7, xmm3");
            __asm__("mulpd xmm7, xmm4");
            __asm__("addpd xmm7, xmm5");
            __asm__("movupd [r15+rdx*8], xmm7");
            rdx8 = rdx8 + 2;
            __asm__("paddq xmm0, xmm6");
        } while (rdx8 != 0x7d0);
    }
    v20 = rax7;
    v21 = r14_3;
    *reinterpret_cast<int32_t*>(&r13_22) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_22) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rbp23) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp23) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi5->f0 = rsi6->f0;
    rdi24 = reinterpret_cast<struct s93*>(&rdi5->f4);
    rsi25 = reinterpret_cast<struct s94*>(&rsi6->f4);
    rdi24->f0 = rsi25->f0;
    rdi26 = reinterpret_cast<struct s95*>(&rdi24->f4);
    rsi27 = reinterpret_cast<struct s96*>(&rsi25->f4);
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        r12_28 = rbp23 + 1;
        if (rbp23 == fputc) {
            *reinterpret_cast<int32_t*>(&rax29) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = reinterpret_cast<int32_t>(fputc);
        } else {
            rax29 = r12_28 & 0xfffffffffffffffe;
            *reinterpret_cast<int32_t*>(&rcx30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx30) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm0, [rip+0x0]");
            do {
                __asm__("xorpd xmm1, xmm1");
                __asm__("psubd xmm1, xmm0");
                __asm__("cvtdq2pd xmm1, xmm1");
                __asm__("divpd xmm1, xmm4");
                __asm__("addpd xmm1, xmm5");
                __asm__("movupd [rdx+rcx*8], xmm1");
                rcx30 = rcx30 + 2;
                __asm__("paddd xmm0, xmm6");
            } while (rcx30 != rax29);
            if (r12_28 == rax29) 
                goto addr_5b5_34;
        }
        do {
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, ecx");
            __asm__("divsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm3");
            rdi26->f0 = rsi27->f0;
            rdi26 = reinterpret_cast<struct s95*>(&rdi26->f4);
            rsi27 = reinterpret_cast<struct s96*>(&rsi27->f4);
            ++rax29;
        } while (rax29 != r13_22);
        addr_5fa_39:
        if (rbp23 <= 0x7ce) {
            rdi31 = reinterpret_cast<struct s101*>(rbp23 * 0x3e88 + 8 + reinterpret_cast<int64_t>(rbx32));
            fun_63d();
            __asm__("movdqa xmm6, [rip+0x0]");
            __asm__("movapd xmm5, [rip+0x0]");
            __asm__("movapd xmm4, [rip+0x0]");
            rdi31->f0 = fputc;
            rdi33 = reinterpret_cast<struct s102*>(&rdi31->f4);
            rdi33->f0 = g4;
            rdi26 = reinterpret_cast<struct s95*>(&rdi33->f4);
            rsi27 = reinterpret_cast<struct s96*>(8);
            continue;
        }
        addr_5b5_34:
        goto addr_5fa_39;
        (rbx34 + rbp23 * 0x7d0)[rbp23] = 0x3ff0000000000000;
        ++r13_22;
        rbp23 = r12_28;
    } while (r12_28 != 0x7d0);
    v35 = r15_36;
    rax37 = fun_67e(0x3d0900, 8);
    r13_38 = rax37;
    fun_690(rax37);
    *reinterpret_cast<int32_t*>(&rax39) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v40 = rax39 * 8;
        rdx41 = reinterpret_cast<uint64_t>(rbx42 + rax39 * 8);
        rsi43 = reinterpret_cast<struct s103*>(reinterpret_cast<int64_t>(rbx44) + rax39 * 8 + 0x1e80988);
        rdi45 = reinterpret_cast<struct s104*>(rax39 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_46) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_46) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_47 = reinterpret_cast<void*>(r8_46 * 0x3e80);
            r15_48 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_47) + reinterpret_cast<int64_t>(r13_38) + 0x3e80);
            r9_49 = reinterpret_cast<struct s103*>(reinterpret_cast<int64_t>(r9_47) + reinterpret_cast<int64_t>(r13_38));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_49) < reinterpret_cast<uint64_t>(rsi43))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(rdx41 < r15_48))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_50) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_50) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_810_55;
            }
            *reinterpret_cast<int32_t*>(&r11_50) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_50) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_49) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx51) + reinterpret_cast<int64_t>(rdi45) + reinterpret_cast<int64_t>(r9_47)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx52 + v40 + reinterpret_cast<int64_t>(r9_47)) < r15_48))) == fputc)) {
                do {
                    addr_810_55:
                    rdi45->f0 = rsi43->f0;
                    rdi53 = reinterpret_cast<struct s105*>(&rdi45->f4);
                    rsi54 = reinterpret_cast<struct s106*>(&rsi43->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi53->f0 = rsi54->f0;
                    rdi55 = reinterpret_cast<struct s104*>(&rdi53->f4);
                    rsi56 = reinterpret_cast<struct s103*>(&rsi54->f4);
                    rdi55->f0 = rsi56->f0;
                    rdi57 = reinterpret_cast<struct s105*>(&rdi55->f4);
                    rsi58 = reinterpret_cast<struct s106*>(&rsi56->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi57->f0 = rsi58->f0;
                    rdi45 = reinterpret_cast<struct s104*>(&rdi57->f4);
                    rsi43 = reinterpret_cast<struct s103*>(&rsi58->f4);
                    r11_50 = r11_50 + 2;
                } while (r11_50 != 0x7d0);
            } else {
                rdi45->f0 = rsi43->f0;
                rdi45 = reinterpret_cast<struct s104*>(&rdi45->f4);
                rsi43 = reinterpret_cast<struct s103*>(&rsi43->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_59) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_59) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi45->f0 = rsi43->f0;
                    rdi60 = reinterpret_cast<struct s105*>(&rdi45->f4);
                    rsi61 = reinterpret_cast<struct s106*>(&rsi43->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi60->f0 = rsi61->f0;
                    rdi45 = reinterpret_cast<struct s104*>(&rdi60->f4);
                    rsi43 = reinterpret_cast<struct s103*>(&rsi61->f4);
                    __asm__("movhpd xmm2, [r14+rax*8]");
                    __asm__("movupd xmm3, [r9+r10*8]");
                    __asm__("movupd xmm4, [r9+r10*8+0x10]");
                    __asm__("mulpd xmm1, xmm0");
                    __asm__("addpd xmm1, xmm3");
                    __asm__("mulpd xmm2, xmm0");
                    __asm__("addpd xmm2, xmm4");
                    __asm__("movupd [r9+r10*8], xmm1");
                    __asm__("movupd [r9+r10*8+0x10], xmm2");
                    r10_59 = r10_59 + 4;
                } while (r10_59 != 0x7d0);
                continue;
            }
            ++r8_46;
        } while (r8_46 != 0x7d0);
        ++rax39;
    } while (rax39 != 0x7d0);
    r15_62 = v35;
    r14_63 = v21;
    *reinterpret_cast<int32_t*>(&r8_64) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_64) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rax65 = reinterpret_cast<void*>(r8_64 * 0x3e80);
        rdi66 = reinterpret_cast<struct s107*>(reinterpret_cast<int64_t>(rax65) + reinterpret_cast<int64_t>(rbx67) - (reinterpret_cast<int64_t>(rax65) + reinterpret_cast<int64_t>(r13_38)));
        *reinterpret_cast<int32_t*>(&rsi68) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi68) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx69) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx69) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(rdi66) >= 32) {
            do {
                __asm__("movups xmm0, [rcx+rsi*8]");
                __asm__("movups xmm1, [rcx+rsi*8+0x10]");
                __asm__("movups [rax+rsi*8], xmm0");
                __asm__("movups [rax+rsi*8+0x10], xmm1");
                __asm__("movdqu xmm0, [rdx+rcx]");
                __asm__("movupd xmm1, [rdx+rcx+0x10]");
                __asm__("movdqu [rdx+rax], xmm0");
                __asm__("movupd [rdx+rax+0x10], xmm1");
                rsi68 = rsi68 + 8;
            } while (rsi68 != 0x7d0);
        } else {
            do {
                rsi70 = reinterpret_cast<struct s108*>(rdx69 * 8);
                rdi66->f0 = rsi70->f0;
                rsi71 = reinterpret_cast<struct s109*>(&rsi70->f4);
                rdi66->f4 = rsi71->f0;
                rsi72 = reinterpret_cast<struct s110*>(&rsi71->f4);
                rdi73 = reinterpret_cast<struct s111*>(reinterpret_cast<uint64_t>(rsi72) | 8);
                rdi73->f0 = rsi72->f0;
                rsi74 = reinterpret_cast<struct s112*>(&rsi72->f4);
                rdi73->f4 = rsi74->f0;
                rsi75 = reinterpret_cast<struct s113*>(&rsi74->f4);
                rdi76 = reinterpret_cast<struct s114*>(reinterpret_cast<uint64_t>(rsi75) | 16);
                rdi76->f0 = rsi75->f0;
                rdi77 = reinterpret_cast<struct s115*>(&rdi76->f4);
                rdi77->f0 = rsi75->f4;
                rdi66 = reinterpret_cast<struct s107*>(&rdi77->f4);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx69 = rdx69 + 4;
            } while (rdx69 != 0x7d0);
        }
        ++r8_64;
    } while (r8_64 != 0x7d0);
    fun_96e(r13_38);
    rsi78 = rbx79;
    rdx80 = r15_62;
    rcx81 = r14_63;
    r12_82 = v20;
    r8_83 = r12_82;
    fun_989(0x7d0, rsi78, rdx80, rcx81, r8_83);
    if (v84 >= 43 && **v85 == fputc) {
        rax86 = g9d5;
        r13_87 = *rax86;
        rcx88 = r13_87;
        fun_9f1(0x9df, 22, 1, rcx88, r8_83);
        *reinterpret_cast<int32_t*>(&r14_89) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_89) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_a0c(r13_87, 0x9f8, 0x9ff, rcx88, r8_83);
        do {
            eax90 = *reinterpret_cast<int32_t*>(&r14_89) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax90)) <= 0xccc) {
                fun_a66(10, r13_87, 0x9ff, rcx88, r8_83);
            }
            __asm__("movq xmm0, [rax+r14*8]");
            fun_a38(r13_87, 0xa13, 0x9ff, rcx88, r8_83);
            ++r14_89;
        } while (r14_89 != 0x7d0);
        fun_a80(r13_87, 0xa6f, 0xa76, rcx88, r8_83);
        *reinterpret_cast<int32_t*>(&rsi78) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi78) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx80) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx80) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx81 = r13_87;
        fun_a99(0xa87, 22, 1, rcx81, r8_83);
        r14_63 = v21;
        r12_82 = v20;
    }
    fun_9a5(rbx91, rsi78, rdx80, rcx81, r8_83);
    fun_9ad(r15_62, rsi78, rdx80, rcx81, r8_83);
    fun_9b5(r14_63, rsi78, rdx80, rcx81, r8_83);
    fun_9bd(r12_82, rsi78, rdx80, rcx81, r8_83);
    goto v92;
}

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

struct s122 {
    int32_t f0;
    int32_t f4;
};

struct s123 {
    int32_t f0;
    int32_t f4;
};

struct s124 {
    int32_t f0;
    int32_t f4;
};

struct s125 {
    int32_t f0;
    int32_t f4;
};

struct s126 {
    int32_t f0;
    int32_t f4;
};

struct s127 {
    int32_t f0;
    int32_t f4;
};

struct s128 {
    int32_t f0;
    int32_t f4;
};

struct s129 {
    int32_t f0;
    int32_t f4;
};

struct s130 {
    int32_t f0;
    int32_t f4;
};

struct s131 {
    int32_t f0;
    int32_t f4;
};

struct s132 {
    int32_t f0;
    int32_t f4;
};

struct s133 {
    int32_t f0;
    int32_t f4;
};

struct s134 {
    int32_t f0;
    int32_t f4;
};

struct s135 {
    int32_t f0;
    int32_t f4;
};

struct s136 {
    int32_t f0;
    int32_t f4;
};

struct s137 {
    int32_t f0;
    int32_t f4;
};

struct s138 {
    int32_t f0;
    int32_t f4;
};

struct s139 {
    int32_t f0;
    int32_t f4;
};

struct s140 {
    int32_t f0;
    int32_t f4;
};

int64_t* fun_3cc() {
    uint64_t rdx1;
    int64_t rax2;
    int64_t r14_3;
    int64_t r15_4;
    int64_t r14_5;
    int64_t r15_6;
    int64_t rax7;
    int64_t* r14_8;
    int64_t* rax9;
    uint64_t rcx10;
    struct s116* rdi11;
    struct s117* rsi12;
    struct s118* rdi13;
    struct s119* rsi14;
    struct s120* rdi15;
    struct s121* rsi16;
    struct s122* rdi17;
    struct s123* rsi18;
    struct s124* rdi19;
    struct s125* rsi20;
    int64_t* r14_21;
    int64_t* rax22;
    int64_t* v23;
    int64_t* rax24;
    int64_t* v25;
    int64_t* r14_26;
    uint64_t r13_27;
    uint64_t rbp28;
    struct s118* rdi29;
    struct s119* rsi30;
    struct s120* rdi31;
    struct s121* rsi32;
    uint64_t r12_33;
    uint64_t rax34;
    uint64_t rcx35;
    struct s126* rdi36;
    void* rbx37;
    struct s127* rdi38;
    int64_t* rbx39;
    int64_t v40;
    int64_t r15_41;
    int32_t* rax42;
    int32_t* r13_43;
    int64_t rax44;
    int64_t v45;
    uint64_t rdx46;
    int64_t rbx47;
    struct s128* rsi48;
    void* rbx49;
    struct s129* rdi50;
    int64_t r8_51;
    void* r9_52;
    uint64_t r15_53;
    struct s128* r9_54;
    int64_t r11_55;
    void* rbx56;
    int64_t rbx57;
    struct s130* rdi58;
    struct s131* rsi59;
    struct s129* rdi60;
    struct s128* rsi61;
    struct s130* rdi62;
    struct s131* rsi63;
    int64_t r10_64;
    struct s130* rdi65;
    struct s131* rsi66;
    int64_t r15_67;
    int64_t* r14_68;
    int64_t r8_69;
    void* rax70;
    struct s132* rdi71;
    void* rbx72;
    int64_t rsi73;
    int64_t rdx74;
    struct s133* rsi75;
    struct s134* rsi76;
    struct s135* rsi77;
    struct s136* rdi78;
    struct s137* rsi79;
    struct s138* rsi80;
    struct s139* rdi81;
    struct s140* rdi82;
    int64_t* rsi83;
    int64_t* rbx84;
    int64_t rdx85;
    int64_t* rcx86;
    int64_t* r12_87;
    int64_t* r8_88;
    int32_t v89;
    signed char** v90;
    int64_t** rax91;
    int64_t* r13_92;
    int64_t* rcx93;
    int64_t r14_94;
    int32_t eax95;
    int64_t* rbx96;
    int64_t v97;

    *reinterpret_cast<int32_t*>(&rdx1) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(rax2 - r14_3) < 16 || (reinterpret_cast<uint64_t>(r15_4 - r14_5) < 16 || reinterpret_cast<uint64_t>(r15_6 - rax7) < 16)) {
        do {
            r14_8[rdx1] = reinterpret_cast<int64_t>(fputc);
            rax9[rdx1] = reinterpret_cast<int64_t>(fputc);
            rcx10 = rdx1 | 1;
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, ecx");
            rdi11->f0 = rsi12->f0;
            rdi13 = reinterpret_cast<struct s118*>(&rdi11->f4);
            rsi14 = reinterpret_cast<struct s119*>(&rsi12->f4);
            __asm__("divsd xmm0, xmm1");
            rdi13->f0 = rsi14->f0;
            rdi15 = reinterpret_cast<struct s120*>(&rdi13->f4);
            rsi16 = reinterpret_cast<struct s121*>(&rsi14->f4);
            __asm__("mulsd xmm0, xmm2");
            rdi15->f0 = rsi16->f0;
            rdi17 = reinterpret_cast<struct s122*>(&rdi15->f4);
            rsi18 = reinterpret_cast<struct s123*>(&rsi16->f4);
            __asm__("addsd xmm0, xmm3");
            rdi17->f0 = rsi18->f0;
            rdi19 = reinterpret_cast<struct s124*>(&rdi17->f4);
            rsi20 = reinterpret_cast<struct s125*>(&rsi18->f4);
            r14_21[rcx10] = reinterpret_cast<int64_t>(fputc);
            rax22[rcx10] = reinterpret_cast<int64_t>(fputc);
            rdx1 = rdx1 + 2;
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("divsd xmm0, xmm1");
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm3");
            rdi19->f0 = rsi20->f0;
            rdi11 = reinterpret_cast<struct s116*>(&rdi19->f4);
            rsi12 = reinterpret_cast<struct s117*>(&rsi20->f4);
        } while (rdx1 != 0x7d0);
    } else {
        __asm__("movdqa xmm0, [rip+0x0]");
        __asm__("xorpd xmm1, xmm1");
        __asm__("pcmpeqd xmm2, xmm2");
        __asm__("movapd xmm3, [rip+0x0]");
        __asm__("movapd xmm4, [rip+0x0]");
        __asm__("movapd xmm5, [rip+0x0]");
        __asm__("movdqa xmm6, [rip+0x0]");
        do {
            __asm__("movupd [r14+rdx*8], xmm1");
            __asm__("pshufd xmm7, xmm0, 0xe8");
            __asm__("psubd xmm7, xmm2");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("movupd [rax+rdx*8], xmm1");
            __asm__("divpd xmm7, xmm3");
            __asm__("mulpd xmm7, xmm4");
            __asm__("addpd xmm7, xmm5");
            __asm__("movupd [r15+rdx*8], xmm7");
            rdx1 = rdx1 + 2;
            __asm__("paddq xmm0, xmm6");
        } while (rdx1 != 0x7d0);
    }
    v23 = rax24;
    v25 = r14_26;
    *reinterpret_cast<int32_t*>(&r13_27) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_27) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rbp28) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp28) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi11->f0 = rsi12->f0;
    rdi29 = reinterpret_cast<struct s118*>(&rdi11->f4);
    rsi30 = reinterpret_cast<struct s119*>(&rsi12->f4);
    rdi29->f0 = rsi30->f0;
    rdi31 = reinterpret_cast<struct s120*>(&rdi29->f4);
    rsi32 = reinterpret_cast<struct s121*>(&rsi30->f4);
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        r12_33 = rbp28 + 1;
        if (rbp28 == fputc) {
            *reinterpret_cast<int32_t*>(&rax34) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax34) + 4) = reinterpret_cast<int32_t>(fputc);
        } else {
            rax34 = r12_33 & 0xfffffffffffffffe;
            *reinterpret_cast<int32_t*>(&rcx35) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm0, [rip+0x0]");
            do {
                __asm__("xorpd xmm1, xmm1");
                __asm__("psubd xmm1, xmm0");
                __asm__("cvtdq2pd xmm1, xmm1");
                __asm__("divpd xmm1, xmm4");
                __asm__("addpd xmm1, xmm5");
                __asm__("movupd [rdx+rcx*8], xmm1");
                rcx35 = rcx35 + 2;
                __asm__("paddd xmm0, xmm6");
            } while (rcx35 != rax34);
            if (r12_33 == rax34) 
                goto addr_5b5_33;
        }
        do {
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, ecx");
            __asm__("divsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm3");
            rdi31->f0 = rsi32->f0;
            rdi31 = reinterpret_cast<struct s120*>(&rdi31->f4);
            rsi32 = reinterpret_cast<struct s121*>(&rsi32->f4);
            ++rax34;
        } while (rax34 != r13_27);
        addr_5fa_38:
        if (rbp28 <= 0x7ce) {
            rdi36 = reinterpret_cast<struct s126*>(rbp28 * 0x3e88 + 8 + reinterpret_cast<int64_t>(rbx37));
            fun_63d();
            __asm__("movdqa xmm6, [rip+0x0]");
            __asm__("movapd xmm5, [rip+0x0]");
            __asm__("movapd xmm4, [rip+0x0]");
            rdi36->f0 = fputc;
            rdi38 = reinterpret_cast<struct s127*>(&rdi36->f4);
            rdi38->f0 = g4;
            rdi31 = reinterpret_cast<struct s120*>(&rdi38->f4);
            rsi32 = reinterpret_cast<struct s121*>(8);
            continue;
        }
        addr_5b5_33:
        goto addr_5fa_38;
        (rbx39 + rbp28 * 0x7d0)[rbp28] = 0x3ff0000000000000;
        ++r13_27;
        rbp28 = r12_33;
    } while (r12_33 != 0x7d0);
    v40 = r15_41;
    rax42 = fun_67e(0x3d0900, 8);
    r13_43 = rax42;
    fun_690(rax42);
    *reinterpret_cast<int32_t*>(&rax44) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax44) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v45 = rax44 * 8;
        rdx46 = reinterpret_cast<uint64_t>(rbx47 + rax44 * 8);
        rsi48 = reinterpret_cast<struct s128*>(reinterpret_cast<int64_t>(rbx49) + rax44 * 8 + 0x1e80988);
        rdi50 = reinterpret_cast<struct s129*>(rax44 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_51) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_51) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_52 = reinterpret_cast<void*>(r8_51 * 0x3e80);
            r15_53 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_52) + reinterpret_cast<int64_t>(r13_43) + 0x3e80);
            r9_54 = reinterpret_cast<struct s128*>(reinterpret_cast<int64_t>(r9_52) + reinterpret_cast<int64_t>(r13_43));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_54) < reinterpret_cast<uint64_t>(rsi48))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(rdx46 < r15_53))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_55) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_55) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_810_54;
            }
            *reinterpret_cast<int32_t*>(&r11_55) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_55) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_54) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx56) + reinterpret_cast<int64_t>(rdi50) + reinterpret_cast<int64_t>(r9_52)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx57 + v45 + reinterpret_cast<int64_t>(r9_52)) < r15_53))) == fputc)) {
                do {
                    addr_810_54:
                    rdi50->f0 = rsi48->f0;
                    rdi58 = reinterpret_cast<struct s130*>(&rdi50->f4);
                    rsi59 = reinterpret_cast<struct s131*>(&rsi48->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi58->f0 = rsi59->f0;
                    rdi60 = reinterpret_cast<struct s129*>(&rdi58->f4);
                    rsi61 = reinterpret_cast<struct s128*>(&rsi59->f4);
                    rdi60->f0 = rsi61->f0;
                    rdi62 = reinterpret_cast<struct s130*>(&rdi60->f4);
                    rsi63 = reinterpret_cast<struct s131*>(&rsi61->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi62->f0 = rsi63->f0;
                    rdi50 = reinterpret_cast<struct s129*>(&rdi62->f4);
                    rsi48 = reinterpret_cast<struct s128*>(&rsi63->f4);
                    r11_55 = r11_55 + 2;
                } while (r11_55 != 0x7d0);
            } else {
                rdi50->f0 = rsi48->f0;
                rdi50 = reinterpret_cast<struct s129*>(&rdi50->f4);
                rsi48 = reinterpret_cast<struct s128*>(&rsi48->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_64) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_64) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi50->f0 = rsi48->f0;
                    rdi65 = reinterpret_cast<struct s130*>(&rdi50->f4);
                    rsi66 = reinterpret_cast<struct s131*>(&rsi48->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi65->f0 = rsi66->f0;
                    rdi50 = reinterpret_cast<struct s129*>(&rdi65->f4);
                    rsi48 = reinterpret_cast<struct s128*>(&rsi66->f4);
                    __asm__("movhpd xmm2, [r14+rax*8]");
                    __asm__("movupd xmm3, [r9+r10*8]");
                    __asm__("movupd xmm4, [r9+r10*8+0x10]");
                    __asm__("mulpd xmm1, xmm0");
                    __asm__("addpd xmm1, xmm3");
                    __asm__("mulpd xmm2, xmm0");
                    __asm__("addpd xmm2, xmm4");
                    __asm__("movupd [r9+r10*8], xmm1");
                    __asm__("movupd [r9+r10*8+0x10], xmm2");
                    r10_64 = r10_64 + 4;
                } while (r10_64 != 0x7d0);
                continue;
            }
            ++r8_51;
        } while (r8_51 != 0x7d0);
        ++rax44;
    } while (rax44 != 0x7d0);
    r15_67 = v40;
    r14_68 = v25;
    *reinterpret_cast<int32_t*>(&r8_69) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_69) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rax70 = reinterpret_cast<void*>(r8_69 * 0x3e80);
        rdi71 = reinterpret_cast<struct s132*>(reinterpret_cast<int64_t>(rax70) + reinterpret_cast<int64_t>(rbx72) - (reinterpret_cast<int64_t>(rax70) + reinterpret_cast<int64_t>(r13_43)));
        *reinterpret_cast<int32_t*>(&rsi73) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi73) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx74) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx74) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(rdi71) >= 32) {
            do {
                __asm__("movups xmm0, [rcx+rsi*8]");
                __asm__("movups xmm1, [rcx+rsi*8+0x10]");
                __asm__("movups [rax+rsi*8], xmm0");
                __asm__("movups [rax+rsi*8+0x10], xmm1");
                __asm__("movdqu xmm0, [rdx+rcx]");
                __asm__("movupd xmm1, [rdx+rcx+0x10]");
                __asm__("movdqu [rdx+rax], xmm0");
                __asm__("movupd [rdx+rax+0x10], xmm1");
                rsi73 = rsi73 + 8;
            } while (rsi73 != 0x7d0);
        } else {
            do {
                rsi75 = reinterpret_cast<struct s133*>(rdx74 * 8);
                rdi71->f0 = rsi75->f0;
                rsi76 = reinterpret_cast<struct s134*>(&rsi75->f4);
                rdi71->f4 = rsi76->f0;
                rsi77 = reinterpret_cast<struct s135*>(&rsi76->f4);
                rdi78 = reinterpret_cast<struct s136*>(reinterpret_cast<uint64_t>(rsi77) | 8);
                rdi78->f0 = rsi77->f0;
                rsi79 = reinterpret_cast<struct s137*>(&rsi77->f4);
                rdi78->f4 = rsi79->f0;
                rsi80 = reinterpret_cast<struct s138*>(&rsi79->f4);
                rdi81 = reinterpret_cast<struct s139*>(reinterpret_cast<uint64_t>(rsi80) | 16);
                rdi81->f0 = rsi80->f0;
                rdi82 = reinterpret_cast<struct s140*>(&rdi81->f4);
                rdi82->f0 = rsi80->f4;
                rdi71 = reinterpret_cast<struct s132*>(&rdi82->f4);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx74 = rdx74 + 4;
            } while (rdx74 != 0x7d0);
        }
        ++r8_69;
    } while (r8_69 != 0x7d0);
    fun_96e(r13_43);
    rsi83 = rbx84;
    rdx85 = r15_67;
    rcx86 = r14_68;
    r12_87 = v23;
    r8_88 = r12_87;
    fun_989(0x7d0, rsi83, rdx85, rcx86, r8_88);
    if (v89 >= 43 && **v90 == fputc) {
        rax91 = g9d5;
        r13_92 = *rax91;
        rcx93 = r13_92;
        fun_9f1(0x9df, 22, 1, rcx93, r8_88);
        *reinterpret_cast<int32_t*>(&r14_94) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_94) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_a0c(r13_92, 0x9f8, 0x9ff, rcx93, r8_88);
        do {
            eax95 = *reinterpret_cast<int32_t*>(&r14_94) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax95)) <= 0xccc) {
                fun_a66(10, r13_92, 0x9ff, rcx93, r8_88);
            }
            __asm__("movq xmm0, [rax+r14*8]");
            fun_a38(r13_92, 0xa13, 0x9ff, rcx93, r8_88);
            ++r14_94;
        } while (r14_94 != 0x7d0);
        fun_a80(r13_92, 0xa6f, 0xa76, rcx93, r8_88);
        *reinterpret_cast<int32_t*>(&rsi83) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi83) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx85) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx85) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx86 = r13_92;
        fun_a99(0xa87, 22, 1, rcx86, r8_88);
        r14_68 = v25;
        r12_87 = v23;
    }
    fun_9a5(rbx96, rsi83, rdx85, rcx86, r8_88);
    fun_9ad(r15_67, rsi83, rdx85, rcx86, r8_88);
    fun_9b5(r14_68, rsi83, rdx85, rcx86, r8_88);
    fun_9bd(r12_87, rsi83, rdx85, rcx86, r8_88);
    goto v97;
}

void fputc() {
}

struct s141 {
    int32_t f0;
    int32_t f4;
};

struct s142 {
    int32_t f0;
    int32_t f4;
};

void fun_c0(struct s141* rdi, struct s142* rsi) {
    int64_t r12_3;
    int64_t r15_4;
    unsigned char r11b5;

    __asm__("mulsd xmm1, [r13+r11*8+0x0]");
    __asm__("subsd xmm0, xmm1");
    rdi->f0 = rsi->f0;
    __asm__("mulsd xmm1, [r13+r11*8+0x0]");
    __asm__("subsd xmm0, xmm1");
    if (r12_3 + 2 == r15_4) {
        if ((r11b5 & 1) != fputc) {
            rdi->f4 = rsi->f4;
            __asm__("mulsd xmm1, [r14+r11*8]");
            __asm__("subsd xmm0, xmm1");
        }
    }
}

struct s143 {
    int32_t f0;
    int32_t f4;
};

struct s144 {
    int32_t f0;
    int32_t f4;
};

struct s145 {
    int32_t f0;
    int32_t f4;
};

struct s146 {
    int32_t f0;
    int32_t f4;
};

void fun_130() {
    uint64_t r11_1;
    uint64_t r10_2;
    uint64_t r9_3;
    int64_t rbx4;
    int64_t r10_5;
    struct s143* rdi6;
    struct s144* rsi7;
    struct s145* rdi8;
    struct s146* rsi9;
    int64_t r10_10;
    uint64_t r12_11;
    int64_t r10_12;
    struct s143* rdi13;
    struct s144* rsi14;
    unsigned char r10b15;
    int64_t rax16;

    r11_1 = r10_2 & r9_3;
    rbx4 = r10_5;
    do {
        rdi6->f0 = rsi7->f0;
        rdi8 = reinterpret_cast<struct s145*>(&rdi6->f4);
        rsi9 = reinterpret_cast<struct s146*>(&rsi7->f4);
        if (r10_10 != fputc) {
            *reinterpret_cast<int32_t*>(&r12_11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_11) + 4) = reinterpret_cast<int32_t>(fputc);
            if (r10_12 != 1) {
                do {
                    rdi8->f0 = rsi9->f0;
                    rdi13 = reinterpret_cast<struct s143*>(&rdi8->f4);
                    rsi14 = reinterpret_cast<struct s144*>(&rsi9->f4);
                    __asm__("mulsd xmm1, [r13+rbx*8+0x0]");
                    __asm__("subsd xmm0, xmm1");
                    rdi13->f0 = rsi14->f0;
                    rdi8 = reinterpret_cast<struct s145*>(&rdi13->f4);
                    rsi9 = reinterpret_cast<struct s146*>(&rsi14->f4);
                    __asm__("mulsd xmm1, [r13+rbx*8+0x0]");
                    __asm__("subsd xmm0, xmm1");
                    r12_11 = r12_11 + 2;
                } while (r12_11 != r11_1);
            }
            if ((r10b15 & 1) != fputc) {
                rdi8->f0 = rsi9->f0;
                rdi8 = reinterpret_cast<struct s145*>(&rdi8->f4);
                rsi9 = reinterpret_cast<struct s146*>(&rsi9->f4);
                __asm__("mulsd xmm1, [r15+rbx*8]");
                __asm__("subsd xmm0, xmm1");
            }
        }
        rdi8->f0 = rsi9->f0;
        rdi6 = reinterpret_cast<struct s143*>(&rdi8->f4);
        rsi7 = reinterpret_cast<struct s144*>(&rsi9->f4);
        ++rbx4;
    } while (rbx4 != rax16);
}

struct s147 {
    int32_t f0;
    int32_t f4;
};

struct s148 {
    int32_t f0;
    int32_t f4;
};

struct s149 {
    int32_t f0;
    int32_t f4;
};

struct s150 {
    int32_t f0;
    int32_t f4;
};

void fun_1f3(int32_t edi) {
    struct s147* rdi1;
    int64_t v2;
    uint64_t r10_3;
    struct s148* rsi4;
    struct s149* rdi5;
    struct s150* rsi6;
    uint64_t rbx7;
    uint64_t r9_8;
    uint64_t r14_9;
    struct s147* rdi10;
    struct s148* rsi11;
    uint64_t rax12;
    int32_t edx13;
    int64_t r9_14;
    int64_t rax15;
    int64_t r10_16;
    int64_t rax17;
    int64_t rbx18;
    struct s149* rdi19;
    struct s150* rsi20;
    int64_t rax21;
    struct s147* rdi22;
    struct s148* rsi23;
    int1_t less_or_equal24;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi1) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi1) == fputc)) {
        addr_357_2:
        goto v2;
    } else {
        *reinterpret_cast<int32_t*>(&r10_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi1->f0 = rsi4->f0;
            rdi5 = reinterpret_cast<struct s149*>(&rdi1->f4);
            rsi6 = reinterpret_cast<struct s150*>(&rsi4->f4);
            if (r10_3 != fputc) {
                if (r10_3 != 1) {
                    rbx7 = r10_3 & r9_8;
                    *reinterpret_cast<int32_t*>(&r14_9) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_9) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi5->f0 = rsi6->f0;
                        rdi10 = reinterpret_cast<struct s147*>(&rdi5->f4);
                        rsi11 = reinterpret_cast<struct s148*>(&rsi6->f4);
                        __asm__("mulsd xmm1, [r8+r11*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi10->f0 = rsi11->f0;
                        rdi5 = reinterpret_cast<struct s149*>(&rdi10->f4);
                        rsi6 = reinterpret_cast<struct s150*>(&rsi11->f4);
                        __asm__("mulsd xmm1, [r8+r12]");
                        __asm__("subsd xmm0, xmm1");
                        r14_9 = r14_9 + 2;
                    } while (r14_9 != rbx7);
                }
                if ((*reinterpret_cast<unsigned char*>(&r10_3) & 1) != fputc) {
                    rdi5->f0 = rsi6->f0;
                    rdi5 = reinterpret_cast<struct s149*>(&rdi5->f4);
                    rsi6 = reinterpret_cast<struct s150*>(&rsi6->f4);
                    __asm__("mulsd xmm1, [r8+r11*8]");
                    __asm__("subsd xmm0, xmm1");
                }
            }
            rdi5->f0 = rsi6->f0;
            rdi1 = reinterpret_cast<struct s147*>(&rdi5->f4);
            rsi4 = reinterpret_cast<struct s148*>(&rsi6->f4);
            ++r10_3;
        } while (r10_3 != rax12);
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi1) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi1) == fputc)) 
            goto addr_357_2;
    }
    edx13 = reinterpret_cast<int32_t>(fputc);
    r9_14 = rax15;
    r10_16 = rax17;
    do {
        rbx18 = r10_16;
        --r10_16;
        rdi1->f0 = rsi4->f0;
        rdi19 = reinterpret_cast<struct s149*>(&rdi1->f4);
        rsi20 = reinterpret_cast<struct s150*>(&rsi4->f4);
        if (r9_14 < rax21) {
            if ((*reinterpret_cast<unsigned char*>(&edx13) & 1) != fputc) {
                rdi19->f0 = rsi20->f0;
                rdi19 = reinterpret_cast<struct s149*>(&rdi19->f4);
                rsi20 = reinterpret_cast<struct s150*>(&rsi20->f4);
                __asm__("mulsd xmm1, [rcx+rbx*8]");
                __asm__("subsd xmm0, xmm1");
                ++rbx18;
            }
            if (edx13 != 1) {
                do {
                    rdi19->f0 = rsi20->f0;
                    rdi22 = reinterpret_cast<struct s147*>(&rdi19->f4);
                    rsi23 = reinterpret_cast<struct s148*>(&rsi20->f4);
                    rdi22->f0 = rsi23->f0;
                    rdi19 = reinterpret_cast<struct s149*>(&rdi22->f4);
                    rsi20 = reinterpret_cast<struct s150*>(&rsi23->f4);
                    __asm__("mulsd xmm1, [rcx+rbx*8]");
                    __asm__("mulsd xmm2, [rcx+rbx*8+0x8]");
                    __asm__("subsd xmm0, xmm1");
                    __asm__("subsd xmm0, xmm2");
                    rbx18 = rbx18 + 2;
                } while (*reinterpret_cast<int32_t*>(&rbx18) != *reinterpret_cast<int32_t*>(&rdi19));
            }
        }
        __asm__("divsd xmm0, [rbx+r11*8]");
        rdi19->f0 = rsi20->f0;
        rdi1 = reinterpret_cast<struct s147*>(&rdi19->f4);
        rsi4 = reinterpret_cast<struct s148*>(&rsi20->f4);
        ++edx13;
        less_or_equal24 = r9_14 <= 1;
        --r9_14;
    } while (!less_or_equal24);
    goto addr_357_2;
}

void submain(int32_t edi, int64_t rsi) {
    fun_396(0x3d0900, 8);
}

