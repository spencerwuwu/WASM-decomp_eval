
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fun_163(struct s0* rdi, struct s1* rsi) {
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
}

struct s2 {
    int32_t f0;
    int32_t f4;
};

void fun_676(int64_t rdi, struct s2* rsi, uint64_t rdx, uint64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_717(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx);

void fputc(int32_t edi, int64_t rsi);

void fun_747(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx);

void fun_760(int64_t rdi, struct s2* rsi, uint64_t rdx, uint64_t rcx);

void fun_6fb(int64_t rdi, uint64_t rsi, int64_t rdx, uint64_t rcx) {
    uint64_t r14_5;
    int64_t r15_6;
    int64_t rbp7;
    int64_t r12_8;
    int64_t r13_9;
    uint64_t r14_10;
    uint64_t r14_11;
    uint64_t r14_12;
    int64_t rbx13;
    int64_t v14;

    while (1) {
        __asm__("movq xmm0, [rax+rbp*8]");
        fun_717(r14_5, r15_6, rdx, rcx);
        ++rbp7;
        if (rbp7 == 0x7d0) {
            ++r12_8;
            if (r12_8 == 0x7d0) 
                break;
            r13_9 = r12_8 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp7 + r13_9) * 0xcccccccd) > 0xccccccc) 
            continue;
        fun_6fb(10, r14_10, rdx, rcx);
    }
    fun_747(r14_11, 0x736, 0x73d, rcx);
    fun_760(0x74e, 22, 1, r14_12);
    fun_676(rbx13, 22, 1, r14_12);
    goto v14;
}

void fun_747(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx) {
    uint64_t r14_5;
    int64_t rbx6;
    int64_t v7;

    fun_760(0x74e, 22, 1, r14_5);
    fun_676(rbx6, 22, 1, r14_5);
    goto v7;
}

struct s3 {
    int32_t f0;
    int32_t f4;
};

void fun_1b1(int64_t rdi);

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

struct s16 {
    int32_t f0;
    int32_t f4;
};

void fun_488();

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

uint64_t* g68e = reinterpret_cast<uint64_t*>(0x3d8d48308b4c);

void fun_6aa(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx);

void fun_6c5(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx);

void fun_19f(int64_t rdi, int64_t rsi) {
    int64_t v3;
    struct s3* r15_4;
    struct s3* rax5;
    int64_t rax6;
    int64_t rax7;
    int64_t v8;
    uint64_t rdx9;
    int64_t rbx10;
    struct s4* rsi11;
    void* rbx12;
    struct s5* rdi13;
    int64_t r8_14;
    void* r9_15;
    uint64_t r13_16;
    struct s4* r9_17;
    int64_t r11_18;
    void* rbx19;
    int64_t rbx20;
    struct s6* rdi21;
    struct s7* rsi22;
    struct s5* rdi23;
    struct s4* rsi24;
    struct s6* rdi25;
    struct s7* rsi26;
    int64_t r10_27;
    struct s6* rdi28;
    struct s7* rsi29;
    int64_t r8_30;
    void* rax31;
    struct s8* rdi32;
    void* rbx33;
    struct s2* rsi34;
    int64_t rdx35;
    struct s9* rsi36;
    struct s10* rsi37;
    struct s11* rsi38;
    struct s12* rdi39;
    struct s13* rsi40;
    struct s14* rsi41;
    struct s15* rdi42;
    struct s16* rdi43;
    int32_t* rsi44;
    struct s3* rdi45;
    uint64_t rax46;
    int32_t* rcx47;
    int32_t* rbx48;
    uint64_t rdx49;
    int32_t* rdi50;
    struct s17* rsi51;
    struct s18* rsi52;
    struct s19* rsi53;
    int32_t* rbx54;
    uint64_t r8_55;
    uint64_t r9_56;
    struct s3* rdi57;
    struct s20* rsi58;
    int32_t* rdi59;
    struct s21* rsi60;
    struct s3* rdi61;
    struct s22* rsi62;
    struct s23* rdi63;
    int32_t* rbx64;
    uint64_t rcx65;
    uint64_t rdx66;
    struct s24* rdi67;
    int32_t* rbx68;
    struct s25* rsi69;
    int64_t r8_70;
    uint64_t r9_71;
    struct s26* rsi72;
    struct s27* rdi73;
    int32_t* rbx74;
    int32_t* rdi75;
    struct s26* rsi76;
    struct s3* rdi77;
    struct s2* rsi78;
    int32_t* rdi79;
    struct s26* rsi80;
    signed char** v81;
    uint64_t* rax82;
    uint64_t r14_83;
    uint64_t rcx84;
    int64_t r12_85;
    int64_t r13_86;
    int64_t rbp87;
    int64_t rbx88;
    int64_t v89;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r15_4 = rax5;
    fun_1b1(rax6);
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v8 = rax7 * 8;
        rdx9 = reinterpret_cast<uint64_t>(rbx10 + rax7 * 8);
        rsi11 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rbx12) + rax7 * 8 + 0x1e80988);
        rdi13 = reinterpret_cast<struct s5*>(rax7 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_15 = reinterpret_cast<void*>(r8_14 * 0x3e80);
            r13_16 = reinterpret_cast<uint64_t>(r15_4) + reinterpret_cast<int64_t>(r9_15) + 0x3e80;
            r9_17 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(r9_15) + reinterpret_cast<uint64_t>(r15_4));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_17) < reinterpret_cast<uint64_t>(rsi11))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(rdx9 < r13_16))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_18) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_18) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_330_6;
            }
            *reinterpret_cast<int32_t*>(&r11_18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_18) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_17) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx19) + reinterpret_cast<int64_t>(rdi13) + reinterpret_cast<int64_t>(r9_15)))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx20 + v8 + reinterpret_cast<int64_t>(r9_15)) < r13_16))) == fputc)) {
                do {
                    addr_330_6:
                    rdi13->f0 = rsi11->f0;
                    rdi21 = reinterpret_cast<struct s6*>(&rdi13->f4);
                    rsi22 = reinterpret_cast<struct s7*>(&rsi11->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi21->f0 = rsi22->f0;
                    rdi23 = reinterpret_cast<struct s5*>(&rdi21->f4);
                    rsi24 = reinterpret_cast<struct s4*>(&rsi22->f4);
                    rdi23->f0 = rsi24->f0;
                    rdi25 = reinterpret_cast<struct s6*>(&rdi23->f4);
                    rsi26 = reinterpret_cast<struct s7*>(&rsi24->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi25->f0 = rsi26->f0;
                    rdi13 = reinterpret_cast<struct s5*>(&rdi25->f4);
                    rsi11 = reinterpret_cast<struct s4*>(&rsi26->f4);
                    r11_18 = r11_18 + 2;
                } while (r11_18 != 0x7d0);
            } else {
                rdi13->f0 = rsi11->f0;
                rdi13 = reinterpret_cast<struct s5*>(&rdi13->f4);
                rsi11 = reinterpret_cast<struct s4*>(&rsi11->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_27) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_27) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi13->f0 = rsi11->f0;
                    rdi28 = reinterpret_cast<struct s6*>(&rdi13->f4);
                    rsi29 = reinterpret_cast<struct s7*>(&rsi11->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi28->f0 = rsi29->f0;
                    rdi13 = reinterpret_cast<struct s5*>(&rdi28->f4);
                    rsi11 = reinterpret_cast<struct s4*>(&rsi29->f4);
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
        rdi32 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(rax31) + reinterpret_cast<int64_t>(rbx33) - (reinterpret_cast<int64_t>(rax31) + reinterpret_cast<uint64_t>(r15_4)));
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
                __asm__("movdqu xmm0, [rdx+rcx]");
                __asm__("movupd xmm1, [rdx+rcx+0x10]");
                __asm__("movdqu [rdx+rax], xmm0");
                __asm__("movupd [rdx+rax+0x10], xmm1");
                ++rsi34;
            } while (!reinterpret_cast<int1_t>(rsi34 == 0x7d0));
        } else {
            do {
                rsi36 = reinterpret_cast<struct s9*>(rdx35 * 8);
                rdi32->f0 = rsi36->f0;
                rsi37 = reinterpret_cast<struct s10*>(&rsi36->f4);
                rdi32->f4 = rsi37->f0;
                rsi38 = reinterpret_cast<struct s11*>(&rsi37->f4);
                rdi39 = reinterpret_cast<struct s12*>(reinterpret_cast<uint64_t>(rsi38) | 8);
                rdi39->f0 = rsi38->f0;
                rsi40 = reinterpret_cast<struct s13*>(&rsi38->f4);
                rdi39->f4 = rsi40->f0;
                rsi41 = reinterpret_cast<struct s14*>(&rsi40->f4);
                rdi42 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsi41) | 16);
                rdi42->f0 = rsi41->f0;
                rdi43 = reinterpret_cast<struct s16*>(&rdi42->f4);
                rsi44 = &rsi41->f4;
                rdi43->f0 = *rsi44;
                rdi32 = reinterpret_cast<struct s8*>(&rdi43->f4);
                rsi34 = reinterpret_cast<struct s2*>(reinterpret_cast<uint64_t>(rsi44 + 1) | 24);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx35 = rdx35 + 4;
            } while (rdx35 != 0x7d0);
        }
        ++r8_30;
    } while (r8_30 != 0x7d0);
    rdi45 = r15_4;
    fun_488();
    *reinterpret_cast<int32_t*>(&rax46) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rax46 != fputc) {
            rcx47 = rbx48 + rax46 * 0xfa0;
            *reinterpret_cast<int32_t*>(&rdx49) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx49) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rdx49 == fputc) {
                    rdi45->f0 = rsi34->f0;
                    rdi50 = &rdi45->f4;
                } else {
                    rsi51 = reinterpret_cast<struct s17*>(rcx47 + rdx49 * 2);
                    rdi45->f0 = rsi51->f0;
                    rsi52 = reinterpret_cast<struct s18*>(&rsi51->f4);
                    if (rdx49 != 1) 
                        goto addr_500_73; else 
                        goto addr_4f8_74;
                }
                addr_4c4_75:
                rsi53 = reinterpret_cast<struct s19*>(rbx54 + rdx49 * 0xfa0);
                __asm__("divsd xmm0, [rsi+rdx*8]");
                *rdi50 = rsi53->f0;
                rdi45 = reinterpret_cast<struct s3*>(rdi50 + 1);
                rsi34 = reinterpret_cast<struct s2*>(&rsi53->f4);
                continue;
                addr_500_73:
                r8_55 = rdx49 & 0x7ffffffffffffffe;
                *reinterpret_cast<int32_t*>(&rdi50) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi50) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r9_56) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_56) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi50 = rsi52->f0;
                    rdi57 = reinterpret_cast<struct s3*>(rdi50 + 1);
                    rsi58 = reinterpret_cast<struct s20*>(&rsi52->f4);
                    __asm__("mulsd xmm1, [r10+rdx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi57->f0 = rsi58->f0;
                    rdi59 = &rdi57->f4;
                    rsi60 = reinterpret_cast<struct s21*>(&rsi58->f4);
                    *rdi59 = rsi60->f0;
                    rdi61 = reinterpret_cast<struct s3*>(rdi59 + 1);
                    rsi62 = reinterpret_cast<struct s22*>(&rsi60->f4);
                    __asm__("mulsd xmm1, [r10+rdx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi61->f0 = rsi62->f0;
                    rsi52 = reinterpret_cast<struct s18*>(&rsi62->f4);
                    rdi50 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rdi61->f4) + 2);
                    r9_56 = r9_56 + 2;
                } while (r9_56 != r8_55);
                addr_55f_91:
                if ((*reinterpret_cast<unsigned char*>(&rdx49) & 1) != fputc) {
                    *rdi50 = rsi52->f0;
                    rdi63 = reinterpret_cast<struct s23*>(rbx64 + reinterpret_cast<uint64_t>(rdi50 + 1) * 0xfa0);
                    __asm__("mulsd xmm1, [rdi+rdx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi63->f0 = rsi52->f4;
                    rdi50 = &rdi63->f4;
                    goto addr_4c4_75;
                }
                addr_4f8_74:
                *reinterpret_cast<int32_t*>(&rdi50) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi50) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_55f_91;
                ++rdx49;
            } while (rdx49 != rax46);
        }
        rcx65 = rax46 & 0x7ffffffffffffffe;
        rdx66 = rax46;
        while (1) {
            if (rax46 == fputc) {
                addr_5a0_102:
                ++rdx66;
                if (rdx66 == 0x7d0) 
                    break; else 
                    continue;
            } else {
                rdi67 = reinterpret_cast<struct s24*>(rbx68 + rax46 * 0xfa0);
                rsi69 = reinterpret_cast<struct s25*>(rdi67 + rdx66);
                rdi67->f0 = rsi69->f0;
                rdi45 = reinterpret_cast<struct s3*>(&rdi67->f4);
                rsi34 = reinterpret_cast<struct s2*>(&rsi69->f4);
                *reinterpret_cast<int32_t*>(&r8_70) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_70) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r9_71) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_71) + 4) = reinterpret_cast<int32_t>(fputc);
                if (rax46 != 1) 
                    goto addr_5da_107;
            }
            addr_630_108:
            if ((*reinterpret_cast<unsigned char*>(&rax46) & 1) != fputc) {
                rdi45->f0 = rsi34->f0;
                rsi72 = reinterpret_cast<struct s26*>(&rsi34->f4);
                rdi73 = reinterpret_cast<struct s27*>(rbx74 + r8_70 * 0xfa0);
                __asm__("mulsd xmm1, [rdi+rdx*8]");
                __asm__("subsd xmm0, xmm1");
                rdi73->f0 = rsi72->f0;
                rdi45 = reinterpret_cast<struct s3*>(&rdi73->f4);
                rsi34 = reinterpret_cast<struct s2*>(&rsi72->f4);
                goto addr_5a0_102;
            }
            addr_5da_107:
            do {
                rdi45->f0 = rsi34->f0;
                rdi75 = &rdi45->f4;
                rsi76 = reinterpret_cast<struct s26*>(&rsi34->f4);
                __asm__("mulsd xmm1, [r10+rdx*8]");
                __asm__("subsd xmm0, xmm1");
                *rdi75 = rsi76->f0;
                rdi77 = reinterpret_cast<struct s3*>(rdi75 + 1);
                rsi78 = reinterpret_cast<struct s2*>(&rsi76->f4);
                rdi77->f0 = rsi78->f0;
                rdi79 = &rdi77->f4;
                rsi80 = reinterpret_cast<struct s26*>(&rsi78->f4);
                __asm__("mulsd xmm1, [r10+rdx*8]");
                __asm__("subsd xmm0, xmm1");
                *rdi79 = rsi80->f0;
                rdi45 = reinterpret_cast<struct s3*>(rdi79 + 1);
                rsi34 = reinterpret_cast<struct s2*>(&rsi80->f4);
                r8_70 = r8_70 + 2;
                r9_71 = r9_71 + 2;
            } while (r9_71 != rcx65);
            goto addr_630_108;
        }
        ++rax46;
    } while (rax46 != 0x7d0);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && **v81 == fputc) {
        rax82 = g68e;
        r14_83 = *rax82;
        rcx84 = r14_83;
        fun_6aa(0x698, 22, 1, rcx84);
        *reinterpret_cast<int32_t*>(&r12_85) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_85) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_6c5(r14_83, 0x6b1, 0x6b8, rcx84);
        do {
            r13_86 = r12_85 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp87) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp87) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp87 + r13_86) * 0xcccccccd) <= 0xccccccc) {
                    fun_6fb(10, r14_83, 0x6b8, rcx84);
                }
                __asm__("movq xmm0, [rax+rbp*8]");
                fun_717(r14_83, 0x6cc, 0x6b8, rcx84);
                ++rbp87;
            } while (rbp87 != 0x7d0);
            ++r12_85;
        } while (r12_85 != 0x7d0);
        fun_747(r14_83, 0x736, 0x73d, rcx84);
        *reinterpret_cast<int32_t*>(&rsi34) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx66) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx66) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx65 = r14_83;
        fun_760(0x74e, 22, 1, rcx65);
    }
    fun_676(rbx88, rsi34, rdx66, rcx65);
    goto v89;
}

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

void fun_488() {
    int64_t v1;
    uint64_t rax2;
    int32_t* rcx3;
    int32_t* rbx4;
    uint64_t rdx5;
    struct s28* rdi6;
    struct s2* rsi7;
    int32_t* rdi8;
    struct s29* rsi9;
    struct s30* rsi10;
    struct s31* rsi11;
    int32_t* rbx12;
    uint64_t r8_13;
    uint64_t r12_14;
    uint64_t r9_15;
    struct s28* rdi16;
    struct s32* rsi17;
    int32_t* rdi18;
    struct s33* rsi19;
    struct s28* rdi20;
    struct s34* rsi21;
    struct s35* rdi22;
    int32_t* rbx23;
    uint64_t rcx24;
    uint64_t r12_25;
    uint64_t rdx26;
    struct s36* rdi27;
    int32_t* rbx28;
    struct s37* rsi29;
    int64_t r8_30;
    uint64_t r9_31;
    struct s26* rsi32;
    struct s38* rdi33;
    int32_t* rbx34;
    int32_t* rdi35;
    struct s26* rsi36;
    struct s28* rdi37;
    struct s2* rsi38;
    int32_t* rdi39;
    struct s26* rsi40;
    signed char** v41;
    uint64_t* rax42;
    uint64_t r14_43;
    uint64_t rcx44;
    int64_t r12_45;
    int64_t r13_46;
    int64_t rbp47;
    int64_t rbx48;
    int64_t v49;

    v1 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rax2 != fputc) {
            rcx3 = rbx4 + rax2 * 0xfa0;
            *reinterpret_cast<int32_t*>(&rdx5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rdx5 == fputc) {
                    rdi6->f0 = rsi7->f0;
                    rdi8 = &rdi6->f4;
                } else {
                    rsi9 = reinterpret_cast<struct s29*>(rcx3 + rdx5 * 2);
                    rdi6->f0 = rsi9->f0;
                    rsi10 = reinterpret_cast<struct s30*>(&rsi9->f4);
                    if (rdx5 != 1) 
                        goto addr_500_12; else 
                        goto addr_4f8_13;
                }
                addr_4c4_14:
                rsi11 = reinterpret_cast<struct s31*>(rbx12 + rdx5 * 0xfa0);
                __asm__("divsd xmm0, [rsi+rdx*8]");
                *rdi8 = rsi11->f0;
                rdi6 = reinterpret_cast<struct s28*>(rdi8 + 1);
                rsi7 = reinterpret_cast<struct s2*>(&rsi11->f4);
                continue;
                addr_500_12:
                r8_13 = rdx5 & r12_14;
                *reinterpret_cast<int32_t*>(&rdi8) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r9_15) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_15) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi8 = rsi10->f0;
                    rdi16 = reinterpret_cast<struct s28*>(rdi8 + 1);
                    rsi17 = reinterpret_cast<struct s32*>(&rsi10->f4);
                    __asm__("mulsd xmm1, [r10+rdx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi16->f0 = rsi17->f0;
                    rdi18 = &rdi16->f4;
                    rsi19 = reinterpret_cast<struct s33*>(&rsi17->f4);
                    *rdi18 = rsi19->f0;
                    rdi20 = reinterpret_cast<struct s28*>(rdi18 + 1);
                    rsi21 = reinterpret_cast<struct s34*>(&rsi19->f4);
                    __asm__("mulsd xmm1, [r10+rdx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi20->f0 = rsi21->f0;
                    rsi10 = reinterpret_cast<struct s30*>(&rsi21->f4);
                    rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rdi20->f4) + 2);
                    r9_15 = r9_15 + 2;
                } while (r9_15 != r8_13);
                addr_55f_30:
                if ((*reinterpret_cast<unsigned char*>(&rdx5) & 1) != fputc) {
                    *rdi8 = rsi10->f0;
                    rdi22 = reinterpret_cast<struct s35*>(rbx23 + reinterpret_cast<uint64_t>(rdi8 + 1) * 0xfa0);
                    __asm__("mulsd xmm1, [rdi+rdx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi22->f0 = rsi10->f4;
                    rdi8 = &rdi22->f4;
                    goto addr_4c4_14;
                }
                addr_4f8_13:
                *reinterpret_cast<int32_t*>(&rdi8) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_55f_30;
                ++rdx5;
            } while (rdx5 != rax2);
        }
        rcx24 = rax2 & r12_25;
        rdx26 = rax2;
        while (1) {
            if (rax2 == fputc) {
                addr_5a0_41:
                ++rdx26;
                if (rdx26 == 0x7d0) 
                    break; else 
                    continue;
            } else {
                rdi27 = reinterpret_cast<struct s36*>(rbx28 + rax2 * 0xfa0);
                rsi29 = reinterpret_cast<struct s37*>(rdi27 + rdx26);
                rdi27->f0 = rsi29->f0;
                rdi6 = reinterpret_cast<struct s28*>(&rdi27->f4);
                rsi7 = reinterpret_cast<struct s2*>(&rsi29->f4);
                *reinterpret_cast<int32_t*>(&r8_30) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_30) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r9_31) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_31) + 4) = reinterpret_cast<int32_t>(fputc);
                if (rax2 != 1) 
                    goto addr_5da_46;
            }
            addr_630_47:
            if ((*reinterpret_cast<unsigned char*>(&rax2) & 1) != fputc) {
                rdi6->f0 = rsi7->f0;
                rsi32 = reinterpret_cast<struct s26*>(&rsi7->f4);
                rdi33 = reinterpret_cast<struct s38*>(rbx34 + r8_30 * 0xfa0);
                __asm__("mulsd xmm1, [rdi+rdx*8]");
                __asm__("subsd xmm0, xmm1");
                rdi33->f0 = rsi32->f0;
                rdi6 = reinterpret_cast<struct s28*>(&rdi33->f4);
                rsi7 = reinterpret_cast<struct s2*>(&rsi32->f4);
                goto addr_5a0_41;
            }
            addr_5da_46:
            do {
                rdi6->f0 = rsi7->f0;
                rdi35 = &rdi6->f4;
                rsi36 = reinterpret_cast<struct s26*>(&rsi7->f4);
                __asm__("mulsd xmm1, [r10+rdx*8]");
                __asm__("subsd xmm0, xmm1");
                *rdi35 = rsi36->f0;
                rdi37 = reinterpret_cast<struct s28*>(rdi35 + 1);
                rsi38 = reinterpret_cast<struct s2*>(&rsi36->f4);
                rdi37->f0 = rsi38->f0;
                rdi39 = &rdi37->f4;
                rsi40 = reinterpret_cast<struct s26*>(&rsi38->f4);
                __asm__("mulsd xmm1, [r10+rdx*8]");
                __asm__("subsd xmm0, xmm1");
                *rdi39 = rsi40->f0;
                rdi6 = reinterpret_cast<struct s28*>(rdi39 + 1);
                rsi7 = reinterpret_cast<struct s2*>(&rsi40->f4);
                r8_30 = r8_30 + 2;
                r9_31 = r9_31 + 2;
            } while (r9_31 != rcx24);
            goto addr_630_47;
        }
        ++rax2;
    } while (rax2 != 0x7d0);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4) >= 43 && **v41 == fputc) {
        rax42 = g68e;
        r14_43 = *rax42;
        rcx44 = r14_43;
        fun_6aa(0x698, 22, 1, rcx44);
        *reinterpret_cast<int32_t*>(&r12_45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_45) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_6c5(r14_43, 0x6b1, 0x6b8, rcx44);
        do {
            r13_46 = r12_45 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp47) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp47) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp47 + r13_46) * 0xcccccccd) <= 0xccccccc) {
                    fun_6fb(10, r14_43, 0x6b8, rcx44);
                }
                __asm__("movq xmm0, [rax+rbp*8]");
                fun_717(r14_43, 0x6cc, 0x6b8, rcx44);
                ++rbp47;
            } while (rbp47 != 0x7d0);
            ++r12_45;
        } while (r12_45 != 0x7d0);
        fun_747(r14_43, 0x736, 0x73d, rcx44);
        *reinterpret_cast<int32_t*>(&rsi7) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx26) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx24 = r14_43;
        fun_760(0x74e, 22, 1, rcx24);
    }
    fun_676(rbx48, rsi7, rdx26, rcx24);
    goto v49;
}

void fun_6aa(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx) {
    int64_t r12_5;
    uint64_t r14_6;
    int64_t r13_7;
    int64_t rbp8;
    uint64_t r14_9;
    uint64_t r14_10;
    uint64_t r14_11;
    uint64_t r14_12;
    int64_t rbx13;
    int64_t v14;

    *reinterpret_cast<int32_t*>(&r12_5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_5) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_6c5(r14_6, 0x6b1, 0x6b8, rcx);
    do {
        r13_7 = r12_5 * 0x7d0;
        *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp8 + r13_7) * 0xcccccccd) <= 0xccccccc) {
                fun_6fb(10, r14_9, 0x6b8, rcx);
            }
            __asm__("movq xmm0, [rax+rbp*8]");
            fun_717(r14_10, 0x6cc, 0x6b8, rcx);
            ++rbp8;
        } while (rbp8 != 0x7d0);
        ++r12_5;
    } while (r12_5 != 0x7d0);
    fun_747(r14_11, 0x736, 0x73d, rcx);
    fun_760(0x74e, 22, 1, r14_12);
    fun_676(rbx13, 22, 1, r14_12);
    goto v14;
}

void fun_717(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx) {
    int64_t rbp5;
    int64_t r12_6;
    int64_t r13_7;
    uint64_t r14_8;
    uint64_t r14_9;
    int64_t r15_10;
    uint64_t r14_11;
    uint64_t r14_12;
    int64_t rbx13;
    int64_t v14;

    while (1) {
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
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp5 + r13_7) * 0xcccccccd) <= 0xccccccc) {
            fun_6fb(10, r14_8, rdx, rcx);
        }
        __asm__("movq xmm0, [rax+rbp*8]");
        fun_717(r14_9, r15_10, rdx, rcx);
    }
    fun_747(r14_11, 0x736, 0x73d, rcx);
    fun_760(0x74e, 22, 1, r14_12);
    fun_676(rbx13, 22, 1, r14_12);
    goto v14;
}

void fun_760(int64_t rdi, struct s2* rsi, uint64_t rdx, uint64_t rcx) {
    int64_t rbx5;
    int64_t v6;

    fun_676(rbx5, rsi, rdx, rcx);
    goto v6;
}

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

void fun_1b1(int64_t rdi) {
    int64_t v2;
    int64_t rax3;
    int64_t v4;
    uint64_t rdx5;
    int64_t rbx6;
    struct s39* rsi7;
    int64_t rbx8;
    struct s40* rdi9;
    int64_t r8_10;
    int64_t r9_11;
    uint64_t r13_12;
    int64_t r15_13;
    struct s39* r9_14;
    int32_t* r15_15;
    int64_t r11_16;
    int64_t rbx17;
    int64_t rbx18;
    struct s41* rdi19;
    struct s42* rsi20;
    struct s40* rdi21;
    struct s39* rsi22;
    struct s41* rdi23;
    struct s42* rsi24;
    int64_t r10_25;
    struct s41* rdi26;
    struct s42* rsi27;
    int64_t r8_28;
    int64_t rax29;
    struct s43* rdi30;
    void* rbx31;
    int64_t r15_32;
    struct s2* rsi33;
    int64_t rdx34;
    struct s44* rsi35;
    struct s45* rsi36;
    struct s46* rsi37;
    struct s47* rdi38;
    struct s48* rsi39;
    struct s49* rsi40;
    struct s50* rdi41;
    struct s51* rdi42;
    int32_t* rsi43;
    struct s52* rdi44;
    struct s52* r15_45;
    uint64_t rax46;
    int32_t* rcx47;
    int32_t* rbx48;
    uint64_t rdx49;
    int32_t* rdi50;
    struct s53* rsi51;
    struct s54* rsi52;
    struct s55* rsi53;
    int32_t* rbx54;
    uint64_t r8_55;
    uint64_t r9_56;
    struct s52* rdi57;
    struct s56* rsi58;
    int32_t* rdi59;
    struct s57* rsi60;
    struct s52* rdi61;
    struct s58* rsi62;
    struct s59* rdi63;
    int32_t* rbx64;
    uint64_t rcx65;
    uint64_t rdx66;
    struct s60* rdi67;
    int32_t* rbx68;
    struct s61* rsi69;
    int64_t r8_70;
    uint64_t r9_71;
    struct s26* rsi72;
    struct s62* rdi73;
    int32_t* rbx74;
    int32_t* rdi75;
    struct s26* rsi76;
    struct s52* rdi77;
    struct s2* rsi78;
    int32_t* rdi79;
    struct s26* rsi80;
    signed char** v81;
    uint64_t* rax82;
    uint64_t r14_83;
    uint64_t rcx84;
    int64_t r12_85;
    int64_t r13_86;
    int64_t rbp87;
    int64_t rbx88;
    int64_t v89;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(&rax3) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v4 = rax3 * 8;
        rdx5 = reinterpret_cast<uint64_t>(rbx6 + rax3 * 8);
        rsi7 = reinterpret_cast<struct s39*>(rbx8 + rax3 * 8 + 0x1e80988);
        rdi9 = reinterpret_cast<struct s40*>(rax3 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_11 = r8_10 * 0x3e80;
            r13_12 = reinterpret_cast<uint64_t>(r15_13 + r9_11 + 0x3e80);
            r9_14 = reinterpret_cast<struct s39*>(r9_11 + reinterpret_cast<int64_t>(r15_15));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_14) < reinterpret_cast<uint64_t>(rsi7))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(rdx5 < r13_12))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r11_16) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_330_5;
            }
            *reinterpret_cast<int32_t*>(&r11_16) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r9_14) < reinterpret_cast<uint64_t>(rbx17 + reinterpret_cast<int64_t>(rdi9) + r9_11))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx18 + v4 + r9_11) < r13_12))) == fputc)) {
                do {
                    addr_330_5:
                    rdi9->f0 = rsi7->f0;
                    rdi19 = reinterpret_cast<struct s41*>(&rdi9->f4);
                    rsi20 = reinterpret_cast<struct s42*>(&rsi7->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi19->f0 = rsi20->f0;
                    rdi21 = reinterpret_cast<struct s40*>(&rdi19->f4);
                    rsi22 = reinterpret_cast<struct s39*>(&rsi20->f4);
                    rdi21->f0 = rsi22->f0;
                    rdi23 = reinterpret_cast<struct s41*>(&rdi21->f4);
                    rsi24 = reinterpret_cast<struct s42*>(&rsi22->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi23->f0 = rsi24->f0;
                    rdi9 = reinterpret_cast<struct s40*>(&rdi23->f4);
                    rsi7 = reinterpret_cast<struct s39*>(&rsi24->f4);
                    r11_16 = r11_16 + 2;
                } while (r11_16 != 0x7d0);
            } else {
                rdi9->f0 = rsi7->f0;
                rdi9 = reinterpret_cast<struct s40*>(&rdi9->f4);
                rsi7 = reinterpret_cast<struct s39*>(&rsi7->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_25) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_25) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi9->f0 = rsi7->f0;
                    rdi26 = reinterpret_cast<struct s41*>(&rdi9->f4);
                    rsi27 = reinterpret_cast<struct s42*>(&rsi7->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi26->f0 = rsi27->f0;
                    rdi9 = reinterpret_cast<struct s40*>(&rdi26->f4);
                    rsi7 = reinterpret_cast<struct s39*>(&rsi27->f4);
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
        rax29 = r8_28 * 0x3e80;
        rdi30 = reinterpret_cast<struct s43*>(rax29 + reinterpret_cast<int64_t>(rbx31) - (rax29 + r15_32));
        *reinterpret_cast<int32_t*>(&rsi33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx34) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx34) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(rdi30) >= 32) {
            do {
                __asm__("movups xmm0, [rcx+rsi*8]");
                __asm__("movups xmm1, [rcx+rsi*8+0x10]");
                __asm__("movups [rax+rsi*8], xmm0");
                __asm__("movups [rax+rsi*8+0x10], xmm1");
                __asm__("movdqu xmm0, [rdx+rcx]");
                __asm__("movupd xmm1, [rdx+rcx+0x10]");
                __asm__("movdqu [rdx+rax], xmm0");
                __asm__("movupd [rdx+rax+0x10], xmm1");
                ++rsi33;
            } while (!reinterpret_cast<int1_t>(rsi33 == 0x7d0));
        } else {
            do {
                rsi35 = reinterpret_cast<struct s44*>(rdx34 * 8);
                rdi30->f0 = rsi35->f0;
                rsi36 = reinterpret_cast<struct s45*>(&rsi35->f4);
                rdi30->f4 = rsi36->f0;
                rsi37 = reinterpret_cast<struct s46*>(&rsi36->f4);
                rdi38 = reinterpret_cast<struct s47*>(reinterpret_cast<uint64_t>(rsi37) | 8);
                rdi38->f0 = rsi37->f0;
                rsi39 = reinterpret_cast<struct s48*>(&rsi37->f4);
                rdi38->f4 = rsi39->f0;
                rsi40 = reinterpret_cast<struct s49*>(&rsi39->f4);
                rdi41 = reinterpret_cast<struct s50*>(reinterpret_cast<uint64_t>(rsi40) | 16);
                rdi41->f0 = rsi40->f0;
                rdi42 = reinterpret_cast<struct s51*>(&rdi41->f4);
                rsi43 = &rsi40->f4;
                rdi42->f0 = *rsi43;
                rdi30 = reinterpret_cast<struct s43*>(&rdi42->f4);
                rsi33 = reinterpret_cast<struct s2*>(reinterpret_cast<uint64_t>(rsi43 + 1) | 24);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx34 = rdx34 + 4;
            } while (rdx34 != 0x7d0);
        }
        ++r8_28;
    } while (r8_28 != 0x7d0);
    rdi44 = r15_45;
    fun_488();
    *reinterpret_cast<int32_t*>(&rax46) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rax46 != fputc) {
            rcx47 = rbx48 + rax46 * 0xfa0;
            *reinterpret_cast<int32_t*>(&rdx49) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx49) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rdx49 == fputc) {
                    rdi44->f0 = rsi33->f0;
                    rdi50 = &rdi44->f4;
                } else {
                    rsi51 = reinterpret_cast<struct s53*>(rcx47 + rdx49 * 2);
                    rdi44->f0 = rsi51->f0;
                    rsi52 = reinterpret_cast<struct s54*>(&rsi51->f4);
                    if (rdx49 != 1) 
                        goto addr_500_72; else 
                        goto addr_4f8_73;
                }
                addr_4c4_74:
                rsi53 = reinterpret_cast<struct s55*>(rbx54 + rdx49 * 0xfa0);
                __asm__("divsd xmm0, [rsi+rdx*8]");
                *rdi50 = rsi53->f0;
                rdi44 = reinterpret_cast<struct s52*>(rdi50 + 1);
                rsi33 = reinterpret_cast<struct s2*>(&rsi53->f4);
                continue;
                addr_500_72:
                r8_55 = rdx49 & 0x7ffffffffffffffe;
                *reinterpret_cast<int32_t*>(&rdi50) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi50) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r9_56) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_56) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi50 = rsi52->f0;
                    rdi57 = reinterpret_cast<struct s52*>(rdi50 + 1);
                    rsi58 = reinterpret_cast<struct s56*>(&rsi52->f4);
                    __asm__("mulsd xmm1, [r10+rdx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi57->f0 = rsi58->f0;
                    rdi59 = &rdi57->f4;
                    rsi60 = reinterpret_cast<struct s57*>(&rsi58->f4);
                    *rdi59 = rsi60->f0;
                    rdi61 = reinterpret_cast<struct s52*>(rdi59 + 1);
                    rsi62 = reinterpret_cast<struct s58*>(&rsi60->f4);
                    __asm__("mulsd xmm1, [r10+rdx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi61->f0 = rsi62->f0;
                    rsi52 = reinterpret_cast<struct s54*>(&rsi62->f4);
                    rdi50 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rdi61->f4) + 2);
                    r9_56 = r9_56 + 2;
                } while (r9_56 != r8_55);
                addr_55f_90:
                if ((*reinterpret_cast<unsigned char*>(&rdx49) & 1) != fputc) {
                    *rdi50 = rsi52->f0;
                    rdi63 = reinterpret_cast<struct s59*>(rbx64 + reinterpret_cast<uint64_t>(rdi50 + 1) * 0xfa0);
                    __asm__("mulsd xmm1, [rdi+rdx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi63->f0 = rsi52->f4;
                    rdi50 = &rdi63->f4;
                    goto addr_4c4_74;
                }
                addr_4f8_73:
                *reinterpret_cast<int32_t*>(&rdi50) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi50) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_55f_90;
                ++rdx49;
            } while (rdx49 != rax46);
        }
        rcx65 = rax46 & 0x7ffffffffffffffe;
        rdx66 = rax46;
        while (1) {
            if (rax46 == fputc) {
                addr_5a0_101:
                ++rdx66;
                if (rdx66 == 0x7d0) 
                    break; else 
                    continue;
            } else {
                rdi67 = reinterpret_cast<struct s60*>(rbx68 + rax46 * 0xfa0);
                rsi69 = reinterpret_cast<struct s61*>(rdi67 + rdx66);
                rdi67->f0 = rsi69->f0;
                rdi44 = reinterpret_cast<struct s52*>(&rdi67->f4);
                rsi33 = reinterpret_cast<struct s2*>(&rsi69->f4);
                *reinterpret_cast<int32_t*>(&r8_70) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_70) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r9_71) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_71) + 4) = reinterpret_cast<int32_t>(fputc);
                if (rax46 != 1) 
                    goto addr_5da_106;
            }
            addr_630_107:
            if ((*reinterpret_cast<unsigned char*>(&rax46) & 1) != fputc) {
                rdi44->f0 = rsi33->f0;
                rsi72 = reinterpret_cast<struct s26*>(&rsi33->f4);
                rdi73 = reinterpret_cast<struct s62*>(rbx74 + r8_70 * 0xfa0);
                __asm__("mulsd xmm1, [rdi+rdx*8]");
                __asm__("subsd xmm0, xmm1");
                rdi73->f0 = rsi72->f0;
                rdi44 = reinterpret_cast<struct s52*>(&rdi73->f4);
                rsi33 = reinterpret_cast<struct s2*>(&rsi72->f4);
                goto addr_5a0_101;
            }
            addr_5da_106:
            do {
                rdi44->f0 = rsi33->f0;
                rdi75 = &rdi44->f4;
                rsi76 = reinterpret_cast<struct s26*>(&rsi33->f4);
                __asm__("mulsd xmm1, [r10+rdx*8]");
                __asm__("subsd xmm0, xmm1");
                *rdi75 = rsi76->f0;
                rdi77 = reinterpret_cast<struct s52*>(rdi75 + 1);
                rsi78 = reinterpret_cast<struct s2*>(&rsi76->f4);
                rdi77->f0 = rsi78->f0;
                rdi79 = &rdi77->f4;
                rsi80 = reinterpret_cast<struct s26*>(&rsi78->f4);
                __asm__("mulsd xmm1, [r10+rdx*8]");
                __asm__("subsd xmm0, xmm1");
                *rdi79 = rsi80->f0;
                rdi44 = reinterpret_cast<struct s52*>(rdi79 + 1);
                rsi33 = reinterpret_cast<struct s2*>(&rsi80->f4);
                r8_70 = r8_70 + 2;
                r9_71 = r9_71 + 2;
            } while (r9_71 != rcx65);
            goto addr_630_107;
        }
        ++rax46;
    } while (rax46 != 0x7d0);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v2) + 4) >= 43 && **v81 == fputc) {
        rax82 = g68e;
        r14_83 = *rax82;
        rcx84 = r14_83;
        fun_6aa(0x698, 22, 1, rcx84);
        *reinterpret_cast<int32_t*>(&r12_85) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_85) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_6c5(r14_83, 0x6b1, 0x6b8, rcx84);
        do {
            r13_86 = r12_85 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp87) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp87) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp87 + r13_86) * 0xcccccccd) <= 0xccccccc) {
                    fun_6fb(10, r14_83, 0x6b8, rcx84);
                }
                __asm__("movq xmm0, [rax+rbp*8]");
                fun_717(r14_83, 0x6cc, 0x6b8, rcx84);
                ++rbp87;
            } while (rbp87 != 0x7d0);
            ++r12_85;
        } while (r12_85 != 0x7d0);
        fun_747(r14_83, 0x736, 0x73d, rcx84);
        *reinterpret_cast<int32_t*>(&rsi33) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx66) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx66) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx65 = r14_83;
        fun_760(0x74e, 22, 1, rcx65);
    }
    fun_676(rbx88, rsi33, rdx66, rcx65);
    goto v89;
}

void fun_6c5(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx) {
    int64_t r13_5;
    int64_t r12_6;
    int64_t rbp7;
    uint64_t r14_8;
    uint64_t r14_9;
    uint64_t r14_10;
    uint64_t r14_11;
    int64_t rbx12;
    int64_t v13;

    do {
        r13_5 = r12_6 * 0x7d0;
        *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp7 + r13_5) * 0xcccccccd) <= 0xccccccc) {
                fun_6fb(10, r14_8, rdx, rcx);
            }
            __asm__("movq xmm0, [rax+rbp*8]");
            fun_717(r14_9, 0x6cc, rdx, rcx);
            ++rbp7;
        } while (rbp7 != 0x7d0);
        ++r12_6;
    } while (r12_6 != 0x7d0);
    fun_747(r14_10, 0x736, 0x73d, rcx);
    fun_760(0x74e, 22, 1, r14_11);
    fun_676(rbx12, 22, 1, r14_11);
    goto v13;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_7c() {
    uint64_t r15_1;
    int64_t r15_2;
    uint64_t r13_3;
    uint64_t rbp4;
    int64_t rbp5;
    uint64_t rbp6;
    uint64_t rax7;
    uint64_t rcx8;
    int32_t* rdi9;
    int32_t* rsi10;
    int64_t rbx11;

    r15_1 = reinterpret_cast<uint64_t>(r15_2 + 1);
    r13_3 = rbp4;
    if (rbp5 == 0x7d0) {
        fun_19f(0x3d0900, 8);
    }
    rbp6 = r13_3 + 1;
    if (r13_3 == fputc) {
        *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    } else {
        rax7 = rbp6 & 0xfffffffffffffffe;
        *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm0, [rip+0x0]");
        do {
            __asm__("pxor xmm1, xmm1");
            __asm__("psubd xmm1, xmm0");
            __asm__("cvtdq2pd xmm1, xmm1");
            __asm__("divpd xmm1, xmm4");
            __asm__("addpd xmm1, xmm5");
            __asm__("movupd [rdx+rcx*8], xmm1");
            rcx8 = rcx8 + 2;
            __asm__("paddd xmm0, xmm6");
        } while (rcx8 != rax7);
        if (rbp6 == rax7) 
            goto addr_e5_8;
    }
    do {
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, ecx");
        __asm__("divsd xmm0, xmm2");
        __asm__("addsd xmm0, xmm3");
        *rdi9 = *rsi10;
        ++rdi9;
        ++rsi10;
        ++rax7;
    } while (rax7 != r15_1);
    addr_12a_13:
    if (r13_3 > 0x7ce) 
        goto 0x70;
    fun_163(r13_3 * 0x3e88 + 8 + rbx11, fputc);
    addr_e5_8:
    goto addr_12a_13;
}

