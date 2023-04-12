
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

void fun_67c(int64_t rdi, struct s2* rsi, uint64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_72c(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fputc(int32_t edi, int64_t rsi);

void fun_75b(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_774(int64_t rdi, struct s2* rsi, uint64_t rdx, int32_t* rcx);

void fun_70b(int64_t rdi, int32_t* rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t rbp9;
    int32_t* r14_10;
    int32_t* r14_11;
    int32_t* r14_12;
    int64_t rbx13;
    int64_t v14;

    while (1) {
        __asm__("movq xmm0, [rax+r15*8]");
        fun_72c(r14_5, 0x725, rdx, rcx);
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
        fun_70b(10, r14_10, rdx, rcx);
    }
    fun_75b(r14_11, 0x74a, 0x751, rcx);
    fun_774(0x762, 22, 1, r14_12);
    fun_67c(rbx13, 22, 1, r14_12);
    goto v14;
}

void fun_75b(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r14_5;
    int64_t rbx6;
    int64_t v7;

    fun_774(0x762, 22, 1, r14_5);
    fun_67c(rbx6, 22, 1, r14_5);
    goto v7;
}

void fun_1b1(int64_t rdi);

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

void fun_488();

struct s16 {
    int32_t f0;
    int32_t f4;
};

void fun_4a5();

int32_t** g694 = reinterpret_cast<int32_t**>(0x3d8d48308b4c);

void fun_6b6(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_6d1(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_19f(int64_t rdi, int64_t rsi) {
    int64_t v3;
    struct s2* r15_4;
    struct s2* rax5;
    int64_t rax6;
    int64_t rax7;
    int64_t v8;
    uint64_t rdx9;
    int64_t rbx10;
    struct s3* rsi11;
    void* rbx12;
    struct s4* rdi13;
    int64_t r8_14;
    void* r9_15;
    uint64_t r13_16;
    struct s3* r9_17;
    int64_t r11_18;
    void* rbx19;
    int64_t rbx20;
    struct s5* rdi21;
    struct s6* rsi22;
    struct s4* rdi23;
    struct s3* rsi24;
    struct s5* rdi25;
    struct s6* rsi26;
    int64_t r10_27;
    struct s5* rdi28;
    struct s6* rsi29;
    int64_t r8_30;
    void* rax31;
    int32_t* rcx32;
    struct s7* rdi33;
    void* rbx34;
    struct s2* rsi35;
    uint64_t rdx36;
    struct s8* rsi37;
    struct s9* rsi38;
    struct s10* rsi39;
    struct s11* rdi40;
    struct s12* rsi41;
    struct s13* rsi42;
    struct s14* rdi43;
    struct s15* rdi44;
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
    struct s16* rdi63;
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
    int64_t rbx83;
    int64_t v84;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r15_4 = rax5;
    fun_1b1(rax6);
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v8 = rax7 * 8;
        rdx9 = reinterpret_cast<uint64_t>(rbx10 + rax7 * 8);
        rsi11 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(rbx12) + rax7 * 8 + 0x1e80988);
        rdi13 = reinterpret_cast<struct s4*>(rax7 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_15 = reinterpret_cast<void*>(r8_14 * 0x3e80);
            r13_16 = reinterpret_cast<uint64_t>(r15_4) + reinterpret_cast<int64_t>(r9_15) + 0x3e80;
            r9_17 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(r9_15) + reinterpret_cast<uint64_t>(r15_4));
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
                    rdi21 = reinterpret_cast<struct s5*>(&rdi13->f4);
                    rsi22 = reinterpret_cast<struct s6*>(&rsi11->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi21->f0 = rsi22->f0;
                    rdi23 = reinterpret_cast<struct s4*>(&rdi21->f4);
                    rsi24 = reinterpret_cast<struct s3*>(&rsi22->f4);
                    rdi23->f0 = rsi24->f0;
                    rdi25 = reinterpret_cast<struct s5*>(&rdi23->f4);
                    rsi26 = reinterpret_cast<struct s6*>(&rsi24->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi25->f0 = rsi26->f0;
                    rdi13 = reinterpret_cast<struct s4*>(&rdi25->f4);
                    rsi11 = reinterpret_cast<struct s3*>(&rsi26->f4);
                    r11_18 = r11_18 + 2;
                } while (r11_18 != 0x7d0);
            } else {
                rdi13->f0 = rsi11->f0;
                rdi13 = reinterpret_cast<struct s4*>(&rdi13->f4);
                rsi11 = reinterpret_cast<struct s3*>(&rsi11->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_27) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_27) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi13->f0 = rsi11->f0;
                    rdi28 = reinterpret_cast<struct s5*>(&rdi13->f4);
                    rsi29 = reinterpret_cast<struct s6*>(&rsi11->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi28->f0 = rsi29->f0;
                    rdi13 = reinterpret_cast<struct s4*>(&rdi28->f4);
                    rsi11 = reinterpret_cast<struct s3*>(&rsi29->f4);
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
        rdi33 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rax31) + reinterpret_cast<int64_t>(rbx34) - reinterpret_cast<uint64_t>(rcx32));
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
                rsi37 = reinterpret_cast<struct s8*>(rdx36 * 8);
                rdi33->f0 = rsi37->f0;
                rsi38 = reinterpret_cast<struct s9*>(&rsi37->f4);
                rdi33->f4 = rsi38->f0;
                rsi39 = reinterpret_cast<struct s10*>(&rsi38->f4);
                rdi40 = reinterpret_cast<struct s11*>(reinterpret_cast<uint64_t>(rsi39) | 8);
                rdi40->f0 = rsi39->f0;
                rsi41 = reinterpret_cast<struct s12*>(&rsi39->f4);
                rdi40->f4 = rsi41->f0;
                rsi42 = reinterpret_cast<struct s13*>(&rsi41->f4);
                rdi43 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rsi42) | 16);
                rdi43->f0 = rsi42->f0;
                rdi44 = reinterpret_cast<struct s15*>(&rdi43->f4);
                rsi45 = &rsi42->f4;
                rdi44->f0 = *rsi45;
                rdi33 = reinterpret_cast<struct s7*>(&rdi44->f4);
                rsi35 = reinterpret_cast<struct s2*>(reinterpret_cast<uint64_t>(rsi45 + 1) | 24);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx36 = rdx36 + 4;
            } while (rdx36 != 0x7d0);
        }
        ++r8_30;
    } while (r8_30 != 0x7d0);
    rdi46 = r15_4;
    fun_488();
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
                        goto addr_520_77; else 
                        goto addr_518_78;
                }
                addr_4e4_79:
                __asm__("divsd xmm0, [rdx+rcx*8]");
                *rdi53 = *rsi54;
                rdi46 = reinterpret_cast<struct s2*>(rdi53 + 1);
                rsi35 = reinterpret_cast<struct s2*>(rsi54 + 1);
                continue;
                addr_520_77:
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
                addr_57a_95:
                if ((*reinterpret_cast<unsigned char*>(&rcx52) & 1) != fputc) {
                    *rdi53 = *rsi54;
                    rsi62 = reinterpret_cast<struct s2*>(rsi54 + 1);
                    rdi63 = reinterpret_cast<struct s16*>(rbx64 + rcx52 * 0xfa0);
                    __asm__("mulsd xmm1, [rdi+rsi*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi63->f0 = rsi62->f0;
                    rdi53 = &rdi63->f4;
                    rsi54 = &rsi62->f4;
                    goto addr_4e4_79;
                }
                addr_518_78:
                *reinterpret_cast<int32_t*>(&rsi54) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi54) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_57a_95;
                ++rcx52;
            } while (rcx52 != r15_47);
            rcx32 = rax50 + r15_47 * 2;
            rdi46->f0 = rsi35->f0;
            rdi48 = &rdi46->f4;
            rsi49 = &rsi35->f4;
            if (r15_47 != 1) 
                goto addr_5e0_108; else 
                goto addr_5c0_109;
        }
        addr_643_110:
        r14_65 = r15_47 * 0x3e80;
        __asm__("ucomisd xmm0, xmm2");
        if (r14_65 + rbx66 < r14_65) {
            fun_4a5();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        *rdi48 = *rsi49;
        rdi46 = reinterpret_cast<struct s2*>(rdi48 + 1);
        rsi35 = reinterpret_cast<struct s2*>(rsi49 + 1);
        continue;
        addr_5e0_108:
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
        addr_62c_130:
        if ((*reinterpret_cast<unsigned char*>(&r15_47) & 1) != fputc) {
            *rdi48 = *rsi49;
            rdi73 = reinterpret_cast<struct s2*>(rdi48 + 1);
            rsi74 = reinterpret_cast<struct s2*>(rsi49 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi73->f0 = rsi74->f0;
            rdi48 = &rdi73->f4;
            rsi49 = &rsi74->f4;
            goto addr_643_110;
        }
        addr_5c0_109:
        *reinterpret_cast<int32_t*>(&rdx36) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx36) + 4) = reinterpret_cast<int32_t>(fputc);
        goto addr_62c_130;
        ++r15_47;
    } while (r15_47 != 0x7d0);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && **v75 == fputc) {
        rax76 = g694;
        r14_77 = *rax76;
        *reinterpret_cast<int32_t*>(&r12_78) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_78) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx79 = r14_77;
        fun_6b6(0x69e, 22, 1, rcx79);
        *reinterpret_cast<int32_t*>(&r13_80) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_80) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_6d1(r14_77, 0x6bd, 0x6c4, rcx79);
        do {
            rbp81 = r13_80 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_82) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_82) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_82 + rbp81) * 0xcccccccd) <= 0xccccccc) {
                    fun_70b(10, r14_77, 0x6c4, rcx79);
                }
                __asm__("movq xmm0, [rax+r15*8]");
                fun_72c(r14_77, 0x725, 0x6c4, rcx79);
                ++r15_82;
            } while (r15_82 != r12_78);
            ++r13_80;
            ++r12_78;
        } while (r13_80 != 0x7d0);
        fun_75b(r14_77, 0x74a, 0x751, rcx79);
        *reinterpret_cast<int32_t*>(&rsi35) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi35) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx36) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx36) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx32 = r14_77;
        fun_774(0x762, 22, 1, rcx32);
    }
    fun_67c(rbx83, rsi35, rdx36, rcx32);
    goto v84;
}

struct s17 {
    int32_t f0;
    int32_t f4;
};

void fun_488() {
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
    struct s17* rdi21;
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
    int64_t rbx44;
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
                        goto addr_520_16; else 
                        goto addr_518_17;
                }
                addr_4e4_18:
                __asm__("divsd xmm0, [rdx+rcx*8]");
                *rdi10 = *rsi11;
                rdi3 = reinterpret_cast<struct s2*>(rdi10 + 1);
                rsi4 = reinterpret_cast<struct s2*>(rsi11 + 1);
                continue;
                addr_520_16:
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
                addr_57a_34:
                if ((*reinterpret_cast<unsigned char*>(&rcx9) & 1) != fputc) {
                    *rdi10 = *rsi11;
                    rsi20 = reinterpret_cast<struct s2*>(rsi11 + 1);
                    rdi21 = reinterpret_cast<struct s17*>(rbx22 + rcx9 * 0xfa0);
                    __asm__("mulsd xmm1, [rdi+rsi*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi21->f0 = rsi20->f0;
                    rdi10 = &rdi21->f4;
                    rsi11 = &rsi20->f4;
                    goto addr_4e4_18;
                }
                addr_518_17:
                *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_57a_34;
                ++rcx9;
            } while (rcx9 != r15_2);
            rcx23 = rax7 + r15_2 * 2;
            rdi3->f0 = rsi4->f0;
            rdi5 = &rdi3->f4;
            rsi6 = &rsi4->f4;
            if (r15_2 != 1) 
                goto addr_5e0_47; else 
                goto addr_5c0_48;
        }
        addr_643_49:
        r14_24 = r15_2 * 0x3e80;
        __asm__("ucomisd xmm0, xmm2");
        if (r14_24 + rbx25 < r14_24) {
            fun_4a5();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        *rdi5 = *rsi6;
        rdi3 = reinterpret_cast<struct s2*>(rdi5 + 1);
        rsi4 = reinterpret_cast<struct s2*>(rsi6 + 1);
        continue;
        addr_5e0_47:
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
        addr_62c_69:
        if ((*reinterpret_cast<unsigned char*>(&r15_2) & 1) != fputc) {
            *rdi5 = *rsi6;
            rdi34 = reinterpret_cast<struct s2*>(rdi5 + 1);
            rsi35 = reinterpret_cast<struct s2*>(rsi6 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi34->f0 = rsi35->f0;
            rdi5 = &rdi34->f4;
            rsi6 = &rsi35->f4;
            goto addr_643_49;
        }
        addr_5c0_48:
        *reinterpret_cast<int32_t*>(&rdx27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
        goto addr_62c_69;
        ++r15_2;
    } while (r15_2 != 0x7d0);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4) >= 43 && **v36 == fputc) {
        rax37 = g694;
        r14_38 = *rax37;
        *reinterpret_cast<int32_t*>(&r12_39) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_39) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx40 = r14_38;
        fun_6b6(0x69e, 22, 1, rcx40);
        *reinterpret_cast<int32_t*>(&r13_41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_41) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_6d1(r14_38, 0x6bd, 0x6c4, rcx40);
        do {
            rbp42 = r13_41 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_43) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_43) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_43 + rbp42) * 0xcccccccd) <= 0xccccccc) {
                    fun_70b(10, r14_38, 0x6c4, rcx40);
                }
                __asm__("movq xmm0, [rax+r15*8]");
                fun_72c(r14_38, 0x725, 0x6c4, rcx40);
                ++r15_43;
            } while (r15_43 != r12_39);
            ++r13_41;
            ++r12_39;
        } while (r13_41 != 0x7d0);
        fun_75b(r14_38, 0x74a, 0x751, rcx40);
        *reinterpret_cast<int32_t*>(&rsi4) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx27) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx23 = r14_38;
        fun_774(0x762, 22, 1, rcx23);
    }
    fun_67c(rbx44, rsi4, rdx27, rcx23);
    goto v45;
}

struct s18 {
    int32_t f0;
    int32_t f4;
};

void fun_4a5() {
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
    struct s18* rdi21;
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
    int64_t rbx44;
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
                goto addr_660_6;
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
                            goto addr_520_21; else 
                            goto addr_518_22;
                    }
                    addr_4e4_23:
                    __asm__("divsd xmm0, [rdx+rcx*8]");
                    *rdi10 = *rsi11;
                    rdi4 = reinterpret_cast<struct s2*>(rdi10 + 1);
                    rsi5 = reinterpret_cast<struct s2*>(rsi11 + 1);
                    continue;
                    addr_520_21:
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
                    addr_57a_39:
                    if ((*reinterpret_cast<unsigned char*>(&rcx9) & 1) != fputc) {
                        *rdi10 = *rsi11;
                        rsi20 = reinterpret_cast<struct s2*>(rsi11 + 1);
                        rdi21 = reinterpret_cast<struct s18*>(rbx22 + rcx9 * 0xfa0);
                        __asm__("mulsd xmm1, [rdi+rsi*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi21->f0 = rsi20->f0;
                        rdi10 = &rdi21->f4;
                        rsi11 = &rsi20->f4;
                        goto addr_4e4_23;
                    }
                    addr_518_22:
                    *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
                    goto addr_57a_39;
                    ++rcx9;
                } while (rcx9 != r15_6);
                rcx23 = rax7 + r15_6 * 2;
                rdi4->f0 = rsi5->f0;
                rdi2 = &rdi4->f4;
                rsi3 = &rsi5->f4;
                if (r15_6 != 1) 
                    goto addr_5e0_52; else 
                    goto addr_5c0_53;
            }
            addr_643_54:
            r14_24 = r15_6 * 0x3e80;
            __asm__("ucomisd xmm0, xmm2");
            if (r14_24 + rbx25 < r14_24) 
                break;
            __asm__("sqrtsd xmm0, xmm0");
            continue;
            addr_5e0_52:
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
            addr_62c_69:
            if ((*reinterpret_cast<unsigned char*>(&r15_6) & 1) != fputc) {
                *rdi2 = *rsi3;
                rdi34 = reinterpret_cast<struct s2*>(rdi2 + 1);
                rsi35 = reinterpret_cast<struct s2*>(rsi3 + 1);
                __asm__("mulsd xmm1, xmm1");
                __asm__("subsd xmm0, xmm1");
                rdi34->f0 = rsi35->f0;
                rdi2 = &rdi34->f4;
                rsi3 = &rsi35->f4;
                goto addr_643_54;
            }
            addr_5c0_53:
            *reinterpret_cast<int32_t*>(&rdx27) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_62c_69;
        }
        fun_4a5();
    }
    addr_660_6:
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4) >= 43 && **v36 == fputc) {
        rax37 = g694;
        r14_38 = *rax37;
        *reinterpret_cast<int32_t*>(&r12_39) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_39) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx40 = r14_38;
        fun_6b6(0x69e, 22, 1, rcx40);
        *reinterpret_cast<int32_t*>(&r13_41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_41) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_6d1(r14_38, 0x6bd, 0x6c4, rcx40);
        do {
            rbp42 = r13_41 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_43) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_43) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_43 + rbp42) * 0xcccccccd) <= 0xccccccc) {
                    fun_70b(10, r14_38, 0x6c4, rcx40);
                }
                __asm__("movq xmm0, [rax+r15*8]");
                fun_72c(r14_38, 0x725, 0x6c4, rcx40);
                ++r15_43;
            } while (r15_43 != r12_39);
            ++r13_41;
            ++r12_39;
        } while (r13_41 != 0x7d0);
        fun_75b(r14_38, 0x74a, 0x751, rcx40);
        *reinterpret_cast<int32_t*>(&rsi5) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx27) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx23 = r14_38;
        fun_774(0x762, 22, 1, rcx23);
    }
    fun_67c(rbx44, rsi5, rdx27, rcx23);
    goto v45;
}

void fun_6b6(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int32_t* r14_6;
    int64_t rbp7;
    int64_t r15_8;
    int32_t* r14_9;
    int32_t* r14_10;
    int64_t r12_11;
    int32_t* r14_12;
    int32_t* r14_13;
    int64_t rbx14;
    int64_t v15;

    *reinterpret_cast<int32_t*>(&r13_5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_6d1(r14_6, 0x6bd, 0x6c4, rcx);
    do {
        rbp7 = r13_5 * 0x7d0;
        *reinterpret_cast<int32_t*>(&r15_8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_8) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_8 + rbp7) * 0xcccccccd) <= 0xccccccc) {
                fun_70b(10, r14_9, 0x6c4, rcx);
            }
            __asm__("movq xmm0, [rax+r15*8]");
            fun_72c(r14_10, 0x725, 0x6c4, rcx);
            ++r15_8;
        } while (r15_8 != r12_11);
        ++r13_5;
        ++r12_11;
    } while (r13_5 != 0x7d0);
    fun_75b(r14_12, 0x74a, 0x751, rcx);
    fun_774(0x762, 22, 1, r14_13);
    fun_67c(rbx14, 22, 1, r14_13);
    goto v15;
}

void fun_72c(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t rbp8;
    int32_t* r14_9;
    int32_t* r14_10;
    int32_t* r14_11;
    int32_t* r14_12;
    int64_t rbx13;
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
            fun_70b(10, r14_9, rdx, rcx);
        }
        __asm__("movq xmm0, [rax+r15*8]");
        fun_72c(r14_10, 0x725, rdx, rcx);
    }
    fun_75b(r14_11, 0x74a, 0x751, rcx);
    fun_774(0x762, 22, 1, r14_12);
    fun_67c(rbx13, 22, 1, r14_12);
    goto v14;
}

void fun_774(int64_t rdi, struct s2* rsi, uint64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t v6;

    fun_67c(rbx5, rsi, rdx, rcx);
    goto v6;
}

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

struct s31 {
    int32_t f0;
    int32_t f4;
};

struct s32 {
    int32_t f0;
    int32_t f4;
};

void fun_1b1(int64_t rdi) {
    int64_t v2;
    int64_t rax3;
    int64_t v4;
    uint64_t rdx5;
    int64_t rbx6;
    struct s19* rsi7;
    int64_t rbx8;
    struct s20* rdi9;
    int64_t r8_10;
    int64_t r9_11;
    uint64_t r13_12;
    int64_t r15_13;
    struct s19* r9_14;
    int32_t* r15_15;
    int64_t r11_16;
    int64_t rbx17;
    int64_t rbx18;
    struct s21* rdi19;
    struct s22* rsi20;
    struct s20* rdi21;
    struct s19* rsi22;
    struct s21* rdi23;
    struct s22* rsi24;
    int64_t r10_25;
    struct s21* rdi26;
    struct s22* rsi27;
    int64_t r8_28;
    void* rax29;
    int32_t* rcx30;
    int32_t* r15_31;
    struct s23* rdi32;
    void* rbx33;
    struct s2* rsi34;
    uint64_t rdx35;
    struct s24* rsi36;
    struct s25* rsi37;
    struct s26* rsi38;
    struct s27* rdi39;
    struct s28* rsi40;
    struct s29* rsi41;
    struct s30* rdi42;
    struct s31* rdi43;
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
    struct s32* rdi63;
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
    int64_t rbx83;
    int64_t v84;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(&rax3) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v4 = rax3 * 8;
        rdx5 = reinterpret_cast<uint64_t>(rbx6 + rax3 * 8);
        rsi7 = reinterpret_cast<struct s19*>(rbx8 + rax3 * 8 + 0x1e80988);
        rdi9 = reinterpret_cast<struct s20*>(rax3 * 8 + 8);
        *reinterpret_cast<int32_t*>(&r8_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_11 = r8_10 * 0x3e80;
            r13_12 = reinterpret_cast<uint64_t>(r15_13 + r9_11 + 0x3e80);
            r9_14 = reinterpret_cast<struct s19*>(r9_11 + reinterpret_cast<int64_t>(r15_15));
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
                    rdi19 = reinterpret_cast<struct s21*>(&rdi9->f4);
                    rsi20 = reinterpret_cast<struct s22*>(&rsi7->f4);
                    __asm__("mulsd xmm0, [rcx+rax*8]");
                    __asm__("addsd xmm0, [r9+r11*8]");
                    rdi19->f0 = rsi20->f0;
                    rdi21 = reinterpret_cast<struct s20*>(&rdi19->f4);
                    rsi22 = reinterpret_cast<struct s19*>(&rsi20->f4);
                    rdi21->f0 = rsi22->f0;
                    rdi23 = reinterpret_cast<struct s21*>(&rdi21->f4);
                    rsi24 = reinterpret_cast<struct s22*>(&rsi22->f4);
                    __asm__("mulsd xmm0, [r14+rax*8]");
                    __asm__("addsd xmm0, [r9+rcx*8]");
                    rdi23->f0 = rsi24->f0;
                    rdi9 = reinterpret_cast<struct s20*>(&rdi23->f4);
                    rsi7 = reinterpret_cast<struct s19*>(&rsi24->f4);
                    r11_16 = r11_16 + 2;
                } while (r11_16 != 0x7d0);
            } else {
                rdi9->f0 = rsi7->f0;
                rdi9 = reinterpret_cast<struct s20*>(&rdi9->f4);
                rsi7 = reinterpret_cast<struct s19*>(&rsi7->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&r10_25) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_25) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi9->f0 = rsi7->f0;
                    rdi26 = reinterpret_cast<struct s21*>(&rdi9->f4);
                    rsi27 = reinterpret_cast<struct s22*>(&rsi7->f4);
                    __asm__("movhpd xmm1, [rcx+rax*8]");
                    rdi26->f0 = rsi27->f0;
                    rdi9 = reinterpret_cast<struct s20*>(&rdi26->f4);
                    rsi7 = reinterpret_cast<struct s19*>(&rsi27->f4);
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
        rdi32 = reinterpret_cast<struct s23*>(reinterpret_cast<int64_t>(rax29) + reinterpret_cast<int64_t>(rbx33) - reinterpret_cast<uint64_t>(rcx30));
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
                rsi36 = reinterpret_cast<struct s24*>(rdx35 * 8);
                rdi32->f0 = rsi36->f0;
                rsi37 = reinterpret_cast<struct s25*>(&rsi36->f4);
                rdi32->f4 = rsi37->f0;
                rsi38 = reinterpret_cast<struct s26*>(&rsi37->f4);
                rdi39 = reinterpret_cast<struct s27*>(reinterpret_cast<uint64_t>(rsi38) | 8);
                rdi39->f0 = rsi38->f0;
                rsi40 = reinterpret_cast<struct s28*>(&rsi38->f4);
                rdi39->f4 = rsi40->f0;
                rsi41 = reinterpret_cast<struct s29*>(&rsi40->f4);
                rdi42 = reinterpret_cast<struct s30*>(reinterpret_cast<uint64_t>(rsi41) | 16);
                rdi42->f0 = rsi41->f0;
                rdi43 = reinterpret_cast<struct s31*>(&rdi42->f4);
                rsi44 = &rsi41->f4;
                rdi43->f0 = *rsi44;
                rdi32 = reinterpret_cast<struct s23*>(&rdi43->f4);
                rsi34 = reinterpret_cast<struct s2*>(reinterpret_cast<uint64_t>(rsi44 + 1) | 24);
                __asm__("movq xmm0, [rsi+rcx]");
                __asm__("movq [rsi+rax], xmm0");
                rdx35 = rdx35 + 4;
            } while (rdx35 != 0x7d0);
        }
        ++r8_28;
    } while (r8_28 != 0x7d0);
    rdi45 = r15_46;
    fun_488();
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
                        goto addr_520_76; else 
                        goto addr_518_77;
                }
                addr_4e4_78:
                __asm__("divsd xmm0, [rdx+rcx*8]");
                *rdi53 = *rsi54;
                rdi45 = reinterpret_cast<struct s2*>(rdi53 + 1);
                rsi34 = reinterpret_cast<struct s2*>(rsi54 + 1);
                continue;
                addr_520_76:
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
                addr_57a_94:
                if ((*reinterpret_cast<unsigned char*>(&rcx52) & 1) != fputc) {
                    *rdi53 = *rsi54;
                    rsi62 = reinterpret_cast<struct s2*>(rsi54 + 1);
                    rdi63 = reinterpret_cast<struct s32*>(rbx64 + rcx52 * 0xfa0);
                    __asm__("mulsd xmm1, [rdi+rsi*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi63->f0 = rsi62->f0;
                    rdi53 = &rdi63->f4;
                    rsi54 = &rsi62->f4;
                    goto addr_4e4_78;
                }
                addr_518_77:
                *reinterpret_cast<int32_t*>(&rsi54) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi54) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_57a_94;
                ++rcx52;
            } while (rcx52 != r15_47);
            rcx30 = rax50 + r15_47 * 2;
            rdi45->f0 = rsi34->f0;
            rdi48 = &rdi45->f4;
            rsi49 = &rsi34->f4;
            if (r15_47 != 1) 
                goto addr_5e0_107; else 
                goto addr_5c0_108;
        }
        addr_643_109:
        r14_65 = r15_47 * 0x3e80;
        __asm__("ucomisd xmm0, xmm2");
        if (r14_65 + rbx66 < r14_65) {
            fun_4a5();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        *rdi48 = *rsi49;
        rdi45 = reinterpret_cast<struct s2*>(rdi48 + 1);
        rsi34 = reinterpret_cast<struct s2*>(rsi49 + 1);
        continue;
        addr_5e0_107:
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
        addr_62c_129:
        if ((*reinterpret_cast<unsigned char*>(&r15_47) & 1) != fputc) {
            *rdi48 = *rsi49;
            rdi73 = reinterpret_cast<struct s2*>(rdi48 + 1);
            rsi74 = reinterpret_cast<struct s2*>(rsi49 + 1);
            __asm__("mulsd xmm1, xmm1");
            __asm__("subsd xmm0, xmm1");
            rdi73->f0 = rsi74->f0;
            rdi48 = &rdi73->f4;
            rsi49 = &rsi74->f4;
            goto addr_643_109;
        }
        addr_5c0_108:
        *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
        goto addr_62c_129;
        ++r15_47;
    } while (r15_47 != 0x7d0);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v2) + 4) >= 43 && **v75 == fputc) {
        rax76 = g694;
        r14_77 = *rax76;
        *reinterpret_cast<int32_t*>(&r12_78) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_78) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx79 = r14_77;
        fun_6b6(0x69e, 22, 1, rcx79);
        *reinterpret_cast<int32_t*>(&r13_80) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_80) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_6d1(r14_77, 0x6bd, 0x6c4, rcx79);
        do {
            rbp81 = r13_80 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_82) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_82) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_82 + rbp81) * 0xcccccccd) <= 0xccccccc) {
                    fun_70b(10, r14_77, 0x6c4, rcx79);
                }
                __asm__("movq xmm0, [rax+r15*8]");
                fun_72c(r14_77, 0x725, 0x6c4, rcx79);
                ++r15_82;
            } while (r15_82 != r12_78);
            ++r13_80;
            ++r12_78;
        } while (r13_80 != 0x7d0);
        fun_75b(r14_77, 0x74a, 0x751, rcx79);
        *reinterpret_cast<int32_t*>(&rsi34) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx35) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx30 = r14_77;
        fun_774(0x762, 22, 1, rcx30);
    }
    fun_67c(rbx83, rsi34, rdx35, rcx30);
    goto v84;
}

void fun_6d1(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbp5;
    int64_t r13_6;
    int64_t r15_7;
    int32_t* r14_8;
    int32_t* r14_9;
    int64_t r12_10;
    int32_t* r14_11;
    int32_t* r14_12;
    int64_t rbx13;
    int64_t v14;

    do {
        rbp5 = r13_6 * 0x7d0;
        *reinterpret_cast<int32_t*>(&r15_7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_7 + rbp5) * 0xcccccccd) <= 0xccccccc) {
                fun_70b(10, r14_8, rdx, rcx);
            }
            __asm__("movq xmm0, [rax+r15*8]");
            fun_72c(r14_9, 0x725, rdx, rcx);
            ++r15_7;
        } while (r15_7 != r12_10);
        ++r13_6;
        ++r12_10;
    } while (r13_6 != 0x7d0);
    fun_75b(r14_11, 0x74a, 0x751, rcx);
    fun_774(0x762, 22, 1, r14_12);
    fun_67c(rbx13, 22, 1, r14_12);
    goto v14;
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

