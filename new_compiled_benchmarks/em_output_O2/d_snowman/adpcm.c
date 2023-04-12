
int32_t* g68d = reinterpret_cast<int32_t*>(0xf4cf08949316348);

int64_t h(int32_t edi);

int32_t* g6d3 = reinterpret_cast<int32_t*>(0x49d0af0f4c17634c);

int32_t* g71b = reinterpret_cast<int32_t*>(0x8141c52945068944);

int32_t* g73d = reinterpret_cast<int32_t*>(0x1024548b482a8944);

int32_t* g74c = reinterpret_cast<int32_t*>(0x158b48f401451689);

int32_t* g758 = reinterpret_cast<int32_t*>(0x158b48228944);

int32_t* g762 = reinterpret_cast<int32_t*>(0x6e3c10189228944);

void fun_66c(int64_t rdi, int64_t rsi, int64_t rdx) {
    uint64_t rdi4;
    uint64_t v5;
    int64_t rax6;
    int32_t r15d7;
    int32_t* rcx8;
    int64_t rsi9;
    uint64_t r9_10;
    uint64_t rdx11;
    int32_t edx12;
    int1_t sf13;
    uint64_t r9_14;
    int32_t* rdi15;
    uint64_t r8_16;
    int64_t v17;
    int32_t ebp18;
    int32_t r9d19;
    int32_t r8d20;
    int32_t* rsi21;
    int32_t r13d22;
    int32_t r13d23;
    int32_t r8d24;
    int32_t* rdx25;
    int64_t rdx26;
    int64_t v27;
    int32_t* rsi28;
    int32_t r12d29;
    int32_t r12d30;
    int32_t r14d31;
    int32_t* rdx32;
    int32_t* rdx33;
    int64_t v34;

    rdi4 = v5 * 4;
    rax6 = r15d7;
    rcx8 = g68d;
    rsi9 = *rcx8;
    r9_10 = -rdi4;
    rdx11 = (v5 << 8) - v5 >> 8;
    edx12 = *reinterpret_cast<int32_t*>(&rdx11) - 0xc0;
    sf13 = rsi9 * rax6 < reinterpret_cast<int64_t>(h);
    if (sf13) {
        r9_10 = rdi4;
    }
    if (!sf13) {
        edx12 = static_cast<int32_t>(rdx11 + 0xc0);
    }
    r9_14 = r9_10 >> 7;
    rdi15 = g6d3;
    r8_16 = reinterpret_cast<uint64_t>((v17 << 7) - v17) >> 7;
    if (*rdi15 * rax6 < reinterpret_cast<int64_t>(h)) {
    }
    ebp18 = 0x80 - *reinterpret_cast<int32_t*>(&r8_16) + *reinterpret_cast<int32_t*>(&r9_14);
    r9d19 = 0x3000;
    if (ebp18 < 0x3000) {
        r9d19 = ebp18;
    }
    r8d20 = 0xffffd000;
    if (r9d19 >= 0xffffd001) {
        r8d20 = r9d19;
    }
    *rdi15 = *reinterpret_cast<int32_t*>(&rsi9);
    rsi21 = g71b;
    *rsi21 = r8d20;
    r13d22 = r13d23 - r8d20;
    r8d24 = r8d20 - 0x3c00;
    if (edx12 < r13d22) {
        r13d22 = edx12;
    }
    if (r13d22 <= r8d24) {
        r13d22 = r8d24;
    }
    rdx25 = g73d;
    *rdx25 = r13d22;
    rdx26 = v27;
    rsi28 = g74c;
    *rsi28 = *reinterpret_cast<int32_t*>(&rdx26);
    r12d29 = r12d30 + r14d31;
    rdx32 = g758;
    *rdx32 = r12d29;
    rdx33 = g762;
    *rdx33 = r12d29;
    *rcx8 = *reinterpret_cast<int32_t*>(&rax6);
    goto v34;
}

int32_t* gd8e = reinterpret_cast<int32_t*>(0x4c08e2c148fa894c);

int32_t* gdd2 = reinterpret_cast<int32_t*>(0xf413a89410a634d);

int32_t* ge32 = reinterpret_cast<int32_t*>(0x3c00be068944);

int32_t* ge57 = reinterpret_cast<int32_t*>(0x158b48dd01413289);

int32_t* ge63 = reinterpret_cast<int32_t*>(0x158b482a8944);

int32_t* ge6d = reinterpret_cast<int32_t*>(0x8b48328924348b48);

int32_t* ge7a = reinterpret_cast<int32_t*>(0x158b4808892a8944);

struct s0 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
};

struct s0* ge86 = reinterpret_cast<struct s0*>(0x358b48026348);

struct s1 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
};

struct s1* ge90 = reinterpret_cast<struct s1*>(0x48c8af0f480e6348);

int32_t* gee9 = reinterpret_cast<int32_t*>(0x48240c8948086348);

int32_t* gef7 = reinterpret_cast<int32_t*>(0x3d8b48286348);

int32_t* gf01 = reinterpret_cast<int32_t*>(0x48c5af0f48c88948);

int32_t* gf15 = reinterpret_cast<int32_t*>(0x8247c89483f6348);

int32_t* gf30 = reinterpret_cast<int32_t*>(0x58b48388944);

uint32_t* gf3a = reinterpret_cast<uint32_t*>(0xc148cf8948086348);

uint32_t* gf55 = reinterpret_cast<uint32_t*>(0x58b4c883c0341);

int32_t* gf60 = reinterpret_cast<int32_t*>(0x58b4c881c6349);

int32_t* gf6b = reinterpret_cast<int32_t*>(0x49d9af0f48086349);

int32_t* gfaa = reinterpret_cast<int32_t*>(0xb10be9c14181048b);

int32_t* gfc5 = reinterpret_cast<int32_t*>(0x58b48208944);

int32_t* gfcf = reinterpret_cast<int32_t*>(0x58b48388944);

int32_t* gfd9 = reinterpret_cast<int32_t*>(0x58b48dc01411889);

int32_t* gfe5 = reinterpret_cast<int32_t*>(0x80bd41208944);

void fun_ffb(int64_t rdi);

int32_t* g1017 = reinterpret_cast<int32_t*>(0xf4cf08949316348);

int32_t* g105d = reinterpret_cast<int32_t*>(0x49d0af0f4c17634c);

int32_t* g10a6 = reinterpret_cast<int32_t*>(0x8141ee29452e8944);

int32_t* g10c8 = reinterpret_cast<int32_t*>(0x8b48df0141328944);

int32_t* g10d5 = reinterpret_cast<int32_t*>(0x4824148b483a8944);

int32_t* g10e3 = reinterpret_cast<int32_t*>(0x158b481689);

int32_t* g10ec = reinterpret_cast<int32_t*>(0x548b4801893a8944);

int32_t* g1102 = reinterpret_cast<int32_t*>(0xd8b48d701410189);

int32_t* g110e = reinterpret_cast<int32_t*>(0x148d489848398944);

struct s2 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
    int32_t f18;
    int32_t f1c;
    int32_t f20;
    int32_t f24;
    int32_t f28;
};

struct s2* g111e = reinterpret_cast<struct s2*>(0x48d4f66b48316348);

struct s3 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
    int32_t f18;
    int32_t f1c;
    int32_t f20;
    int32_t f24;
    int32_t f28;
};

struct s3* g11c2 = reinterpret_cast<struct s3*>(0x480ee8c149d00149);

int32_t* g11d0 = reinterpret_cast<int32_t*>(0x6948176348028944);

int32_t* g1277 = reinterpret_cast<int32_t*>(0x280f01280f108941);

void fun_d87(int64_t rdi) {
    int32_t* rax2;
    uint64_t r9_3;
    int64_t r15_4;
    int64_t rcx5;
    int32_t r12d6;
    int64_t rdi7;
    uint64_t rsi8;
    uint64_t rdx9;
    int64_t r15_10;
    int64_t r15_11;
    int32_t edx12;
    int1_t sf13;
    int32_t* r10_14;
    int64_t r9_15;
    uint64_t rsi16;
    uint64_t rdi17;
    int64_t rbp18;
    int64_t rbp19;
    int32_t r8d20;
    int32_t r8d21;
    int32_t* rsi22;
    int32_t esi23;
    int32_t r8d24;
    int32_t* rdx25;
    int32_t r13d26;
    int32_t r13d27;
    int32_t ebx28;
    int32_t* rdx29;
    int32_t* rdx30;
    int64_t rsi31;
    int32_t* rdx32;
    struct s0* rdx33;
    struct s1* rsi34;
    uint64_t r12_35;
    int32_t* rax36;
    int64_t rcx37;
    int32_t* rax38;
    uint64_t rbp39;
    int32_t* rdi40;
    uint64_t rax41;
    int64_t rcx42;
    int32_t* rdi43;
    uint64_t rdi44;
    uint64_t r15_45;
    int32_t* rax46;
    uint32_t* rax47;
    uint64_t rcx48;
    int64_t rcx49;
    int32_t r14d50;
    uint64_t rdi51;
    uint32_t* r8_52;
    uint32_t edi53;
    int32_t* r8_54;
    int32_t* r8_55;
    uint64_t r12_56;
    int32_t r15d57;
    uint64_t rbx58;
    uint32_t r9d59;
    int64_t rax60;
    int32_t* rcx61;
    uint32_t r9d62;
    int32_t* rax63;
    int32_t* rax64;
    int32_t* rax65;
    int32_t r12d66;
    int32_t* rax67;
    int32_t r13d68;
    int64_t rdi69;
    uint64_t rdi70;
    int64_t rax71;
    int32_t* rcx72;
    int64_t rsi73;
    uint64_t r9_74;
    uint64_t rdx75;
    int32_t edx76;
    int1_t sf77;
    uint64_t r9_78;
    int32_t* rdi79;
    uint64_t r8_80;
    int32_t r13d81;
    int32_t* rsi82;
    int32_t r14d83;
    int32_t r13d84;
    int32_t* rdx85;
    int32_t r15d86;
    int32_t* rdx87;
    int64_t rdx88;
    int32_t* rsi89;
    int32_t* rdx90;
    int64_t rdx91;
    int64_t v92;
    int32_t eax93;
    int32_t* rcx94;
    int32_t r15d95;
    int32_t* rcx96;
    int64_t rax97;
    struct s2* rcx98;
    int64_t rsi99;
    struct s3* rdi100;
    uint64_t r8_101;
    int32_t* rdx102;
    int64_t rdx103;
    int64_t rsi104;
    int64_t rdx105;
    uint64_t rdx106;
    int32_t* r8_107;
    int64_t v108;

    rax2 = gd8e;
    r9_3 = r15_4 * 4;
    rcx5 = r12d6;
    rdi7 = *rax2;
    rsi8 = -r9_3;
    rdx9 = reinterpret_cast<uint64_t>((r15_10 << 8) - r15_11) >> 8;
    edx12 = *reinterpret_cast<int32_t*>(&rdx9) - 0xc0;
    sf13 = rdi7 * rcx5 < reinterpret_cast<int64_t>(h);
    if (sf13) {
        rsi8 = r9_3;
    }
    r10_14 = gdd2;
    r9_15 = *r10_14;
    *r10_14 = *reinterpret_cast<int32_t*>(&rdi7);
    if (!sf13) {
        edx12 = static_cast<int32_t>(rdx9 + 0xc0);
    }
    rsi16 = rsi8 >> 7;
    rdi17 = reinterpret_cast<uint64_t>((rbp18 << 7) - rbp19) >> 7;
    r8d20 = 0x80;
    if (r9_15 * rcx5 < reinterpret_cast<int64_t>(h)) {
        r8d20 = 0xffffff80;
    }
    r8d21 = r8d20 + *reinterpret_cast<int32_t*>(&rdi17) + *reinterpret_cast<int32_t*>(&rsi16);
    if (r8d21 >= 0x3000) {
        r8d21 = 0x3000;
    }
    if (r8d21 < 0xffffd001) {
        r8d21 = 0xffffd000;
    }
    rsi22 = ge32;
    *rsi22 = r8d21;
    esi23 = 0x3c00 - r8d21;
    r8d24 = r8d21 - 0x3c00;
    if (edx12 < esi23) {
        esi23 = edx12;
    }
    if (esi23 <= r8d24) {
        esi23 = r8d24;
    }
    rdx25 = ge57;
    *rdx25 = esi23;
    r13d26 = r13d27 + ebx28;
    rdx29 = ge63;
    *rdx29 = r13d26;
    rdx30 = ge6d;
    rsi31 = reinterpret_cast<int64_t>(__return_address());
    *rdx30 = *reinterpret_cast<int32_t*>(&rsi31);
    rdx32 = ge7a;
    *rdx32 = r13d26;
    *rax2 = *reinterpret_cast<int32_t*>(&rcx5);
    rdx33 = ge86;
    rsi34 = ge90;
    r12_35 = rsi34->f14 * static_cast<int64_t>(rdx33->f14) + rsi34->f10 * static_cast<int64_t>(rdx33->f10) + (rsi34->fc * static_cast<int64_t>(rdx33->fc) + rsi34->f8 * static_cast<int64_t>(rdx33->f8) + (rsi34->f4 * static_cast<int64_t>(rdx33->f4) + rsi34->f0 * reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx33->f0))));
    rax36 = gee9;
    rcx37 = *rax36;
    rax38 = gef7;
    rbp39 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*rax38));
    rdi40 = gf01;
    rax41 = rcx37 * rbp39;
    rcx42 = *rdi40;
    rdi43 = gf15;
    rdi44 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*rdi43));
    r15_45 = rax41 + rax41 + rcx42 * rdi44 * 2 >> 15;
    rax46 = gf30;
    *rax46 = *reinterpret_cast<int32_t*>(&r15_45);
    rax47 = gf3a;
    rcx48 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*rax47)));
    rcx49 = r14d50;
    rdi51 = (rcx48 << 7) - rcx48 >> 7;
    r8_52 = gf55;
    edi53 = *reinterpret_cast<int32_t*>(&rdi51) + r8_52[rcx49];
    r8_54 = gf60;
    r8_55 = gf6b;
    r12_56 = r12_35 >> 14;
    r15d57 = *reinterpret_cast<int32_t*>(&r15_45) + *reinterpret_cast<int32_t*>(&r12_56);
    rbx58 = r8_54[rcx49] * reinterpret_cast<uint64_t>(static_cast<int64_t>(*r8_55)) >> 15;
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(edi53) < reinterpret_cast<int32_t>(h) == h)) | reinterpret_cast<uint1_t>(edi53 == h)) {
        edi53 = reinterpret_cast<uint32_t>(h);
    }
    r9d59 = 0x5800;
    if (edi53 < 0x5800) {
        r9d59 = edi53;
    }
    *rax47 = r9d59;
    *reinterpret_cast<uint32_t*>(&rax60) = r9d59 >> 6 & 31;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax60) + 4) = reinterpret_cast<int32_t>(h);
    rcx61 = gfaa;
    r9d62 = r9d59 >> 11;
    *r8_55 = rcx61[rax60] >> reinterpret_cast<signed char>(11 - *reinterpret_cast<signed char*>(&r9d62)) << 3;
    rax63 = gfc5;
    *rax63 = *reinterpret_cast<int32_t*>(&r12_56);
    rax64 = gfcf;
    *rax64 = r15d57;
    rax65 = gfd9;
    *rax65 = *reinterpret_cast<int32_t*>(&rbx58);
    r12d66 = *reinterpret_cast<int32_t*>(&r12_56) + *reinterpret_cast<int32_t*>(&rbx58);
    rax67 = gfe5;
    *rax67 = r12d66;
    r13d68 = 0x80;
    *reinterpret_cast<int32_t*>(&rdi69) = *reinterpret_cast<int32_t*>(&rbx58);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi69) + 4) = reinterpret_cast<int32_t>(h);
    fun_ffb(rdi69);
    rdi70 = rbp39 * 4;
    rax71 = r12d66;
    rcx72 = g1017;
    rsi73 = *rcx72;
    r9_74 = -rdi70;
    rdx75 = (rbp39 << 8) - rbp39 >> 8;
    edx76 = *reinterpret_cast<int32_t*>(&rdx75) - 0xc0;
    sf77 = rsi73 * rax71 < reinterpret_cast<int64_t>(h);
    if (sf77) {
        r9_74 = rdi70;
    }
    if (!sf77) {
        edx76 = static_cast<int32_t>(rdx75 + 0xc0);
    }
    r9_78 = r9_74 >> 7;
    rdi79 = g105d;
    r8_80 = (rdi44 << 7) - rdi44 >> 7;
    if (*rdi79 * rax71 < reinterpret_cast<int64_t>(h)) {
        r13d68 = 0xffffff80;
    }
    r13d81 = r13d68 + *reinterpret_cast<int32_t*>(&r8_80) + *reinterpret_cast<int32_t*>(&r9_78);
    if (r13d81 >= 0x3000) {
        r13d81 = 0x3000;
    }
    if (r13d81 < 0xffffd001) {
        r13d81 = 0xffffd000;
    }
    *rdi79 = *reinterpret_cast<int32_t*>(&rsi73);
    rsi82 = g10a6;
    *rsi82 = r13d81;
    r14d83 = 0x3c00 - r13d81;
    r13d84 = r13d81 - 0x3c00;
    if (edx76 < r14d83) {
        r14d83 = edx76;
    }
    if (r14d83 <= r13d84) {
        r14d83 = r13d84;
    }
    rdx85 = g10c8;
    *rdx85 = r14d83;
    r15d86 = r15d57 + *reinterpret_cast<int32_t*>(&rbx58);
    rdx87 = g10d5;
    *rdx87 = r15d86;
    rdx88 = rcx37;
    rsi89 = g10e3;
    *rsi89 = *reinterpret_cast<int32_t*>(&rdx88);
    rdx90 = g10ec;
    *rdx90 = r15d86;
    *rcx72 = *reinterpret_cast<int32_t*>(&rax71);
    rdx91 = v92;
    eax93 = *reinterpret_cast<int32_t*>(&rdx91) - r15d86;
    rcx94 = g1102;
    *rcx94 = eax93;
    r15d95 = r15d86 + *reinterpret_cast<int32_t*>(&rdx91);
    rcx96 = g110e;
    *rcx96 = r15d95;
    rax97 = eax93;
    rcx98 = g111e;
    rsi99 = rcx98->f4;
    rdi100 = g11c2;
    r8_101 = reinterpret_cast<uint64_t>(rcx98->f28 * 0x3fffffffffd4 + (rcx98->f24 * 0xd4 + (0x3ffffffffd90 * rcx98->f20 + (rcx98->f1c * 0x5a8 + (rcx98->f18 * 0xfffffffffffff36c + (rcx98->f14 * 0x3c90 + (rcx98->f10 * 0xedc + (rcx98->fc * 0xfffffffffffffcb8 + ((static_cast<int64_t>(rcx98->f8) << 7) + (rsi99 + rsi99 * 2 << 4))))))))) + (rcx98->f0 * -44 + (rax97 + rax97 * 2) * 4)) >> 14;
    rdx102 = g11d0;
    *rdx102 = *reinterpret_cast<int32_t*>(&r8_101);
    rdx103 = rdi100->f20;
    rsi104 = r15d95;
    rdx105 = rdi100->f28;
    rdx106 = reinterpret_cast<uint64_t>(rdi100->f24 * 0x3fffffffffd4 + ((rdx103 + rdx103 * 2 << 4) + ((static_cast<int64_t>(rdi100->f1c) << 7) + (rdi100->f18 * 0xfffffffffffffcb8 + (rdi100->f14 * 0xedc + (rdi100->f10 * 0x3c90 + (rdi100->fc * 0xfffffffffffff36c + (rdi100->f8 * 0x5a8 + (rdi100->f4 * 0xfffffffffffffd90 + rdi100->f0 * 0xd4)))))))) + rsi104 * -44 + (rdx105 + rdx105 * 2) * 4) >> 14;
    r8_107 = g1277;
    *r8_107 = *reinterpret_cast<int32_t*>(&rdx106);
    __asm__("movaps xmm0, [rcx]");
    __asm__("movaps xmm1, [rcx+0x10]");
    __asm__("movups [rcx+0x4], xmm0");
    rcx98->f24 = rcx98->f20;
    __asm__("movups [rcx+0x14], xmm1");
    rcx98->f0 = *reinterpret_cast<int32_t*>(&rax97);
    __asm__("movaps xmm0, [rdi]");
    __asm__("movaps xmm1, [rdi+0x10]");
    __asm__("movups [rdi+0x4], xmm0");
    rdi100->f24 = rdi100->f20;
    __asm__("movups [rdi+0x14], xmm1");
    rdi100->f0 = *reinterpret_cast<int32_t*>(&rsi104);
    goto v108;
}

void fun_ffb(int64_t rdi) {
    uint64_t rdi2;
    int64_t rbp3;
    int64_t rax4;
    int32_t r12d5;
    int32_t* rcx6;
    int64_t rsi7;
    uint64_t r9_8;
    uint64_t rdx9;
    int64_t rbp10;
    int64_t rbp11;
    int32_t edx12;
    int1_t sf13;
    uint64_t r9_14;
    int32_t* rdi15;
    uint64_t r8_16;
    int64_t v17;
    int32_t r13d18;
    int32_t* rsi19;
    int32_t r14d20;
    int32_t r14d21;
    int32_t r13d22;
    int32_t* rdx23;
    int32_t r15d24;
    int32_t r15d25;
    int32_t ebx26;
    int32_t* rdx27;
    int64_t rdx28;
    int32_t* rsi29;
    int32_t* rdx30;
    int64_t rdx31;
    int64_t v32;
    int32_t eax33;
    int32_t* rcx34;
    int32_t r15d35;
    int32_t* rcx36;
    int64_t rax37;
    struct s2* rcx38;
    int64_t rsi39;
    struct s3* rdi40;
    uint64_t r8_41;
    int32_t* rdx42;
    int64_t rdx43;
    int64_t rsi44;
    int64_t rdx45;
    uint64_t rdx46;
    int32_t* r8_47;
    int64_t v48;

    rdi2 = rbp3 * 4;
    rax4 = r12d5;
    rcx6 = g1017;
    rsi7 = *rcx6;
    r9_8 = -rdi2;
    rdx9 = reinterpret_cast<uint64_t>((rbp10 << 8) - rbp11) >> 8;
    edx12 = *reinterpret_cast<int32_t*>(&rdx9) - 0xc0;
    sf13 = rsi7 * rax4 < reinterpret_cast<int64_t>(h);
    if (sf13) {
        r9_8 = rdi2;
    }
    if (!sf13) {
        edx12 = static_cast<int32_t>(rdx9 + 0xc0);
    }
    r9_14 = r9_8 >> 7;
    rdi15 = g105d;
    r8_16 = reinterpret_cast<uint64_t>((v17 << 7) - v17) >> 7;
    if (*rdi15 * rax4 < reinterpret_cast<int64_t>(h)) {
    }
    r13d18 = 0x80 - *reinterpret_cast<int32_t*>(&r8_16) + *reinterpret_cast<int32_t*>(&r9_14);
    if (r13d18 >= 0x3000) {
        r13d18 = 0x3000;
    }
    if (r13d18 < 0xffffd001) {
        r13d18 = 0xffffd000;
    }
    *rdi15 = *reinterpret_cast<int32_t*>(&rsi7);
    rsi19 = g10a6;
    *rsi19 = r13d18;
    r14d20 = r14d21 - r13d18;
    r13d22 = r13d18 - 0x3c00;
    if (edx12 < r14d20) {
        r14d20 = edx12;
    }
    if (r14d20 <= r13d22) {
        r14d20 = r13d22;
    }
    rdx23 = g10c8;
    *rdx23 = r14d20;
    r15d24 = r15d25 + ebx26;
    rdx27 = g10d5;
    *rdx27 = r15d24;
    rdx28 = reinterpret_cast<int64_t>(__return_address());
    rsi29 = g10e3;
    *rsi29 = *reinterpret_cast<int32_t*>(&rdx28);
    rdx30 = g10ec;
    *rdx30 = r15d24;
    *rcx6 = *reinterpret_cast<int32_t*>(&rax4);
    rdx31 = v32;
    eax33 = *reinterpret_cast<int32_t*>(&rdx31) - r15d24;
    rcx34 = g1102;
    *rcx34 = eax33;
    r15d35 = r15d24 + *reinterpret_cast<int32_t*>(&rdx31);
    rcx36 = g110e;
    *rcx36 = r15d35;
    rax37 = eax33;
    rcx38 = g111e;
    rsi39 = rcx38->f4;
    rdi40 = g11c2;
    r8_41 = reinterpret_cast<uint64_t>(rcx38->f28 * 0x3fffffffffd4 + (rcx38->f24 * 0xd4 + (0x3ffffffffd90 * rcx38->f20 + (rcx38->f1c * 0x5a8 + (rcx38->f18 * 0xfffffffffffff36c + (rcx38->f14 * 0x3c90 + (rcx38->f10 * 0xedc + (rcx38->fc * 0xfffffffffffffcb8 + ((static_cast<int64_t>(rcx38->f8) << 7) + (rsi39 + rsi39 * 2 << 4))))))))) + (rcx38->f0 * -44 + (rax37 + rax37 * 2) * 4)) >> 14;
    rdx42 = g11d0;
    *rdx42 = *reinterpret_cast<int32_t*>(&r8_41);
    rdx43 = rdi40->f20;
    rsi44 = r15d35;
    rdx45 = rdi40->f28;
    rdx46 = reinterpret_cast<uint64_t>(rdi40->f24 * 0x3fffffffffd4 + ((rdx43 + rdx43 * 2 << 4) + ((static_cast<int64_t>(rdi40->f1c) << 7) + (rdi40->f18 * 0xfffffffffffffcb8 + (rdi40->f14 * 0xedc + (rdi40->f10 * 0x3c90 + (rdi40->fc * 0xfffffffffffff36c + (rdi40->f8 * 0x5a8 + (rdi40->f4 * 0xfffffffffffffd90 + rdi40->f0 * 0xd4)))))))) + rsi44 * -44 + (rdx45 + rdx45 * 2) * 4) >> 14;
    r8_47 = g1277;
    *r8_47 = *reinterpret_cast<int32_t*>(&rdx46);
    __asm__("movaps xmm0, [rcx]");
    __asm__("movaps xmm1, [rcx+0x10]");
    __asm__("movups [rcx+0x4], xmm0");
    rcx38->f24 = rcx38->f20;
    __asm__("movups [rcx+0x14], xmm1");
    rcx38->f0 = *reinterpret_cast<int32_t*>(&rax37);
    __asm__("movaps xmm0, [rdi]");
    __asm__("movaps xmm1, [rdi+0x10]");
    __asm__("movups [rdi+0x4], xmm0");
    rdi40->f24 = rdi40->f20;
    __asm__("movups [rdi+0x14], xmm1");
    rdi40->f0 = *reinterpret_cast<int32_t*>(&rsi44);
    goto v48;
}

void fun_1829(int64_t rdi, int64_t rsi) {
    int32_t* r12_3;
    uint64_t rbx4;
    int32_t* r15_5;
    void* r12_6;
    int32_t* r13_7;
    int1_t cf8;
    int64_t rdi9;
    int32_t* r14_10;
    int64_t v11;

    while (r12_3[rbx4] = *r15_5, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r12_6) + (rbx4 * 4 | 4)) = *r13_7, cf8 = rbx4 < 98, rbx4 = rbx4 + 2, cf8) {
        *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_10) + rbx4 * 2);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(h);
        fun_1829(rdi9, rsi);
    }
    goto v11;
}

void fun_18ae(int64_t rdi, int64_t rsi);

uint120_t g19d6 = 0x6600000000158b48;

int32_t fun_1a3b();

void fun_1a4f(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx);

void fun_1aa7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_1885(int32_t* rdi, int32_t* rsi) {
    int32_t* rsp3;
    uint64_t rax4;
    int64_t rcx5;
    int64_t rdx6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t eax9;
    int64_t v10;

    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi;
    fun_18ae(rdi + 1, rsi + 1);
    rsp3 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    __asm__("movdqa xmm0, [rax]");
    __asm__("movdqa xmm1, [rax+0x10]");
    __asm__("movdqa xmm2, [rax+0x20]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movdqa xmm3, [rax+0x30]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm1, xmm0");
    __asm__("pcmpeqd xmm2, [rip+0x0]");
    __asm__("pcmpeqd xmm3, [rip+0x0]");
    __asm__("paddd xmm3, xmm2");
    __asm__("movdqa xmm0, [rax+0x40]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("paddd xmm3, xmm1");
    __asm__("movdqa xmm1, [rax+0x50]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm1, xmm0");
    __asm__("movdqa xmm0, [rax+0x60]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("paddd xmm0, xmm1");
    __asm__("movdqa xmm1, [rax+0x70]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm0, xmm3");
    __asm__("movdqa xmm2, [rax+0x80]");
    __asm__("pcmpeqd xmm2, [rip+0x0]");
    __asm__("paddd xmm2, xmm1");
    __asm__("movdqa xmm1, [rax+0x90]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm1, xmm2");
    __asm__("movdqa xmm2, [rax+0xa0]");
    __asm__("pcmpeqd xmm2, [rip+0x0]");
    __asm__("paddd xmm2, xmm1");
    __asm__("movdqa xmm1, [rax+0xb0]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm2, xmm0");
    __asm__("paddd xmm1, xmm2");
    __asm__("paddd xmm1, [rip+0x0]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd ecx, xmm1");
    __asm__("movd xmm1, esi");
    *reinterpret_cast<int32_t*>(&rax4) = reinterpret_cast<int32_t>(h);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(h);
    rcx5 = *reinterpret_cast<int64_t*>(&g19d6);
    rdx6 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&g19d6) + 7);
    __asm__("pcmpeqd xmm0, xmm0");
    while ((rax4 | 4) != 100) {
        __asm__("movdqa xmm1, [rcx+rsi*4]");
        __asm__("pcmpeqd xmm1, [rdx+rsi*4]");
        __asm__("paddd xmm2, xmm1");
        __asm__("psubd xmm2, xmm0");
        rax4 = rax4 + 8;
        __asm__("movdqa xmm1, xmm2");
    }
    __asm__("movdqa [rsp+0x10], xmm2");
    rdi7 = rsp3;
    *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(h);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(h);
    eax9 = fun_1a3b();
    if (eax9 != h) {
        rdi7 = reinterpret_cast<int32_t*>(0x1a46);
        *reinterpret_cast<int32_t*>(&rsi8) = eax9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(h);
        fun_1a4f(0x1a46, rsi8, rdx6, rcx5);
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("xorps xmm2, xmm2");
    __asm__("cvtsi2sd xmm2, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("movd ebx, xmm1");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm2");
    *rdi7 = *rsi8;
    __asm__("subsd xmm0, [r14]");
    fun_1aa7(0x1aa0, rsi8 + 1, rdx6, rcx5);
    goto v10;
}

void fun_18ae(int64_t rdi, int64_t rsi) {
    int32_t* rsp3;
    uint64_t rax4;
    int64_t rcx5;
    int64_t rdx6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t eax9;
    int64_t v10;

    rsp3 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    __asm__("movdqa xmm0, [rax]");
    __asm__("movdqa xmm1, [rax+0x10]");
    __asm__("movdqa xmm2, [rax+0x20]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movdqa xmm3, [rax+0x30]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm1, xmm0");
    __asm__("pcmpeqd xmm2, [rip+0x0]");
    __asm__("pcmpeqd xmm3, [rip+0x0]");
    __asm__("paddd xmm3, xmm2");
    __asm__("movdqa xmm0, [rax+0x40]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("paddd xmm3, xmm1");
    __asm__("movdqa xmm1, [rax+0x50]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm1, xmm0");
    __asm__("movdqa xmm0, [rax+0x60]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("paddd xmm0, xmm1");
    __asm__("movdqa xmm1, [rax+0x70]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm0, xmm3");
    __asm__("movdqa xmm2, [rax+0x80]");
    __asm__("pcmpeqd xmm2, [rip+0x0]");
    __asm__("paddd xmm2, xmm1");
    __asm__("movdqa xmm1, [rax+0x90]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm1, xmm2");
    __asm__("movdqa xmm2, [rax+0xa0]");
    __asm__("pcmpeqd xmm2, [rip+0x0]");
    __asm__("paddd xmm2, xmm1");
    __asm__("movdqa xmm1, [rax+0xb0]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm2, xmm0");
    __asm__("paddd xmm1, xmm2");
    __asm__("paddd xmm1, [rip+0x0]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd ecx, xmm1");
    __asm__("movd xmm1, esi");
    *reinterpret_cast<int32_t*>(&rax4) = reinterpret_cast<int32_t>(h);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(h);
    rcx5 = *reinterpret_cast<int64_t*>(&g19d6);
    rdx6 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&g19d6) + 7);
    __asm__("pcmpeqd xmm0, xmm0");
    while ((rax4 | 4) != 100) {
        __asm__("movdqa xmm1, [rcx+rsi*4]");
        __asm__("pcmpeqd xmm1, [rdx+rsi*4]");
        __asm__("paddd xmm2, xmm1");
        __asm__("psubd xmm2, xmm0");
        rax4 = rax4 + 8;
        __asm__("movdqa xmm1, xmm2");
    }
    __asm__("movdqa [rsp+0x10], xmm2");
    rdi7 = rsp3;
    *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(h);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(h);
    eax9 = fun_1a3b();
    if (eax9 != h) {
        rdi7 = reinterpret_cast<int32_t*>(0x1a46);
        *reinterpret_cast<int32_t*>(&rsi8) = eax9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(h);
        fun_1a4f(0x1a46, rsi8, rdx6, rcx5);
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("xorps xmm2, xmm2");
    __asm__("cvtsi2sd xmm2, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("movd ebx, xmm1");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm2");
    *rdi7 = *rsi8;
    __asm__("subsd xmm0, [r14]");
    fun_1aa7(0x1aa0, rsi8 + 1, rdx6, rcx5);
    goto v10;
}

void fun_1a4f(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("xorps xmm2, xmm2");
    __asm__("cvtsi2sd xmm2, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("movd ebx, xmm1");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm2");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_1aa7(0x1aa0, rsi + 1, rdx, rcx);
    goto v5;
}

void fun_1aa7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_1871(int32_t* rdi) {
    void* rsp2;
    int32_t eax3;
    int32_t* rsi4;
    int32_t eax5;
    int32_t* rsp6;
    uint64_t rax7;
    int64_t rcx8;
    int64_t rdx9;
    int32_t* rdi10;
    int32_t* rsi11;
    int32_t eax12;
    int64_t v13;

    rsp2 = __zero_stack_offset();
    if (eax3 != h) {
        rdi = reinterpret_cast<int32_t*>(0x187c);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(h);
        fun_1885(0x187c, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    fun_18ae(rdi + 1, rsi4 + 1);
    rsp6 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    __asm__("movdqa xmm0, [rax]");
    __asm__("movdqa xmm1, [rax+0x10]");
    __asm__("movdqa xmm2, [rax+0x20]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movdqa xmm3, [rax+0x30]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm1, xmm0");
    __asm__("pcmpeqd xmm2, [rip+0x0]");
    __asm__("pcmpeqd xmm3, [rip+0x0]");
    __asm__("paddd xmm3, xmm2");
    __asm__("movdqa xmm0, [rax+0x40]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("paddd xmm3, xmm1");
    __asm__("movdqa xmm1, [rax+0x50]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm1, xmm0");
    __asm__("movdqa xmm0, [rax+0x60]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("paddd xmm0, xmm1");
    __asm__("movdqa xmm1, [rax+0x70]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm0, xmm3");
    __asm__("movdqa xmm2, [rax+0x80]");
    __asm__("pcmpeqd xmm2, [rip+0x0]");
    __asm__("paddd xmm2, xmm1");
    __asm__("movdqa xmm1, [rax+0x90]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm1, xmm2");
    __asm__("movdqa xmm2, [rax+0xa0]");
    __asm__("pcmpeqd xmm2, [rip+0x0]");
    __asm__("paddd xmm2, xmm1");
    __asm__("movdqa xmm1, [rax+0xb0]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("paddd xmm2, xmm0");
    __asm__("paddd xmm1, xmm2");
    __asm__("paddd xmm1, [rip+0x0]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd ecx, xmm1");
    __asm__("movd xmm1, esi");
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(h);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(h);
    rcx8 = *reinterpret_cast<int64_t*>(&g19d6);
    rdx9 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&g19d6) + 7);
    __asm__("pcmpeqd xmm0, xmm0");
    while ((rax7 | 4) != 100) {
        __asm__("movdqa xmm1, [rcx+rsi*4]");
        __asm__("pcmpeqd xmm1, [rdx+rsi*4]");
        __asm__("paddd xmm2, xmm1");
        __asm__("psubd xmm2, xmm0");
        rax7 = rax7 + 8;
        __asm__("movdqa xmm1, xmm2");
    }
    __asm__("movdqa [rsp+0x10], xmm2");
    rdi10 = rsp6;
    *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(h);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(h);
    eax12 = fun_1a3b();
    if (eax12 != h) {
        rdi10 = reinterpret_cast<int32_t*>(0x1a46);
        *reinterpret_cast<int32_t*>(&rsi11) = eax12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(h);
        fun_1a4f(0x1a46, rsi11, rdx9, rcx8);
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("xorps xmm2, xmm2");
    __asm__("cvtsi2sd xmm2, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("movd ebx, xmm1");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm2");
    *rdi10 = *rsi11;
    __asm__("subsd xmm0, [r14]");
    fun_1aa7(0x1aa0, rsi11 + 1, rdx9, rcx8);
    goto v13;
}

int32_t g1a46 = 0xc031c689;

int32_t fun_1a3b() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t rdx4;
    int64_t rcx5;
    int64_t rdx6;
    int64_t rcx7;
    int64_t v8;

    if (eax1 != h) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(h);
        fun_1a4f(0x1a46, rsi2, rdx4, rcx5);
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("xorps xmm2, xmm2");
    __asm__("cvtsi2sd xmm2, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("movd ebx, xmm1");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm2");
    g1a46 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_1aa7(0x1aa0, rsi2 + 1, rdx6, rcx7);
    goto v8;
}

uint176_t g1812 = 0x4c00000000258b4c;

int32_t fun_17f9(int64_t rdi, int64_t rsi) {
    int32_t* r14_3;
    uint64_t r12_4;
    int32_t eax5;
    int1_t cf6;
    int64_t rdi7;
    int32_t* r15_8;
    int64_t rsi9;
    void* r15_10;
    int32_t* r15_11;
    int32_t* r12_12;
    int32_t* r13_13;
    int64_t rdi14;
    int32_t* r14_15;
    uint64_t rbx16;
    int1_t cf17;
    int64_t v18;

    while (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_3) + r12_4 * 2) = eax5, cf6 = r12_4 < 98, r12_4 = r12_4 + 2, cf6) {
        *reinterpret_cast<int32_t*>(&rdi7) = r15_8[r12_4];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(h);
        *reinterpret_cast<int32_t*>(&rsi9) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_10) + (r12_4 * 4 | 4));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(h);
        eax5 = fun_17f9(rdi7, rsi9);
    }
    r15_11 = *reinterpret_cast<int32_t**>(&g1812);
    r12_12 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&g1812) + 7);
    r13_13 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&g1812) + 14);
    do {
        *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_15) + rbx16 * 2);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(h);
        fun_1829(rdi14, rsi);
        r12_12[rbx16] = *r15_11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r12_12) + (rbx16 * 4 | 4)) = *r13_13;
        cf17 = rbx16 < 98;
        rbx16 = rbx16 + 2;
    } while (cf17);
    goto v18;
}

int64_t h(int32_t edi) {
    int64_t rax2;

    *reinterpret_cast<int32_t*>(&rax2) = -edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(h);
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rax2) = edi;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(h);
    }
    return rax2;
}

int32_t* g481 = reinterpret_cast<int32_t*>(0xd8b48dc01411189);

int32_t* g48d = reinterpret_cast<int32_t*>(0x10244c8b48218944);

int32_t* g49c = reinterpret_cast<int32_t*>(0x8944006589450a89);

struct s4 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
};

struct s4* g4ac = reinterpret_cast<struct s4*>(0x158b48086348);

struct s5 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
};

struct s5* g4b6 = reinterpret_cast<struct s5*>(0x48f1af0f48326348);

int32_t* g513 = reinterpret_cast<int32_t*>(0x58b48388944);

int32_t* g51d = reinterpret_cast<int32_t*>(0x58b4800634c);

int32_t* g527 = reinterpret_cast<int32_t*>(0x58b4810634c);

int32_t* g531 = reinterpret_cast<int32_t*>(0xd8b48006348);

int32_t* g53b = reinterpret_cast<int32_t*>(0xf49c1894c09634c);

int32_t* g55b = reinterpret_cast<int32_t*>(0x8b48fc0145208944);

int32_t* g568 = reinterpret_cast<int32_t*>(0x8b48e62945208944);

int32_t* g575 = reinterpret_cast<int32_t*>(0xd3f7f38944308944);

int32_t* g58a = reinterpret_cast<int32_t*>(0x234f16948086348);

uint32_t* g5a8 = reinterpret_cast<uint32_t*>(0x4100000080bd1a89);

int32_t* g5d6 = reinterpret_cast<int32_t*>(0x358b48da89);

int32_t* g5df = reinterpret_cast<int32_t*>(0xf1af0f4c9634634c);

int32_t* g5f2 = reinterpret_cast<int32_t*>(0xd8b48318944);

uint32_t* g5fc = reinterpret_cast<uint32_t*>(0xc148f78948316348);

uint32_t* g614 = reinterpret_cast<uint32_t*>(0x4f0f44ff85963c03);

int32_t* g653 = reinterpret_cast<int32_t*>(0x358b48388944);

uint120_t g65d = 0x4400000000158b48;

void fun_458() {
    int32_t* rax1;
    int32_t eax2;
    uint1_t cf3;
    int32_t* rdx4;
    int32_t ecx5;
    int32_t edx6;
    int32_t ecx7;
    int32_t ecx8;
    int32_t ecx9;
    int32_t esi10;
    int32_t esi11;
    int32_t* rcx12;
    int32_t r12d13;
    int32_t r12d14;
    int32_t ebx15;
    int32_t* rcx16;
    int64_t rcx17;
    int64_t v18;
    int32_t* rdx19;
    int32_t* r13_20;
    int32_t r8d21;
    struct s4* rax22;
    struct s5* rdx23;
    uint64_t r15_24;
    int32_t* rax25;
    int32_t* rax26;
    int32_t* rax27;
    int32_t* rax28;
    int32_t* rcx29;
    int64_t rcx30;
    uint64_t r12_31;
    int32_t* rax32;
    int32_t r12d33;
    int32_t* rax34;
    int32_t r14d35;
    int32_t r14d36;
    int32_t* rax37;
    uint32_t ebx38;
    int32_t* rax39;
    uint64_t rcx40;
    uint64_t rsi41;
    int32_t edi42;
    uint32_t* rdx43;
    uint32_t r8d44;
    int32_t* r9_45;
    int64_t rdx46;
    int32_t* rsi47;
    uint64_t r14_48;
    int32_t* rcx49;
    uint32_t* rcx50;
    uint64_t rsi51;
    uint64_t rdi52;
    uint32_t* rsi53;
    uint32_t edi54;
    uint32_t edx55;
    int64_t rcx56;
    uint32_t edx57;
    int32_t* rax58;
    int64_t rsi59;
    int64_t rdx60;
    int64_t rdi61;

    __asm__("retf 0x8b48");
    *reinterpret_cast<uint32_t*>(&rax1) = eax2 + reinterpret_cast<int32_t>(h) + cf3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(h);
    *rdx4 = ecx5;
    edx6 = 0x3c00 - ecx7;
    ecx8 = ecx9 - 0x3c00;
    if (esi10 < edx6) {
        edx6 = esi11;
    }
    if (edx6 <= ecx8) {
        edx6 = ecx8;
    }
    rcx12 = g481;
    *rcx12 = edx6;
    r12d13 = r12d14 + ebx15;
    rcx16 = g48d;
    *rcx16 = r12d13;
    rcx17 = v18;
    rdx19 = g49c;
    *rdx19 = *reinterpret_cast<int32_t*>(&rcx17);
    *r13_20 = r12d13;
    *rax1 = r8d21;
    rax22 = g4ac;
    rdx23 = g4b6;
    r15_24 = rdx23->f14 * static_cast<int64_t>(rax22->f14) + rdx23->f10 * static_cast<int64_t>(rax22->f10) + (rdx23->fc * static_cast<int64_t>(rax22->fc) + rdx23->f8 * static_cast<int64_t>(rax22->f8) + (rdx23->f4 * static_cast<int64_t>(rax22->f4) + rdx23->f0 * reinterpret_cast<uint64_t>(static_cast<int64_t>(rax22->f0)))) >> 14;
    rax25 = g513;
    *rax25 = *reinterpret_cast<int32_t*>(&r15_24);
    rax26 = g51d;
    rax27 = g527;
    rax28 = g531;
    rcx29 = g53b;
    rcx30 = *rax26 * static_cast<int64_t>(*rax27);
    r12_31 = rcx30 + rcx30 + *rax28 * static_cast<int64_t>(*rcx29) * 2 >> 15;
    rax32 = g55b;
    *rax32 = *reinterpret_cast<int32_t*>(&r12_31);
    r12d33 = *reinterpret_cast<int32_t*>(&r12_31) + *reinterpret_cast<int32_t*>(&r15_24);
    rax34 = g568;
    *rax34 = r12d33;
    r14d35 = r14d36 - r12d33;
    rax37 = g575;
    *rax37 = r14d35;
    ebx38 = reinterpret_cast<uint32_t>(~r14d35) >> 30 | 1;
    rax39 = g58a;
    rcx40 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*rax39));
    rsi41 = rcx40 * 0x234 >> 12;
    edi42 = -r14d35;
    if (__intrinsic()) {
        edi42 = r14d35;
    }
    rdx43 = g5a8;
    *rdx43 = ebx38;
    if (edi42 > *reinterpret_cast<int32_t*>(&rsi41)) {
        --ebx38;
        *rdx43 = ebx38;
    }
    r8d44 = reinterpret_cast<uint32_t>(h);
    r9_45 = g5d6;
    *reinterpret_cast<uint32_t*>(&rdx46) = ebx38;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx46) + 4) = reinterpret_cast<int32_t>(h);
    rsi47 = g5df;
    r14_48 = rsi47[rdx46] * rcx40 >> 15;
    rcx49 = g5f2;
    *rcx49 = *reinterpret_cast<int32_t*>(&r14_48);
    rcx50 = g5fc;
    rsi51 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*rcx50)));
    rdi52 = (rsi51 << 7) - rsi51 >> 7;
    rsi53 = g614;
    edi54 = *reinterpret_cast<int32_t*>(&rdi52) + rsi53[rdx46];
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(edi54) < reinterpret_cast<int32_t>(h) == h)) | reinterpret_cast<uint1_t>(edi54 == h))) {
        r8d44 = edi54;
    }
    edx55 = 0x5800;
    if (r8d44 < 0x5800) {
        edx55 = r8d44;
    }
    *rcx50 = edx55;
    *reinterpret_cast<uint32_t*>(&rcx56) = edx55 >> 6 & 31;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx56) + 4) = reinterpret_cast<int32_t>(h);
    edx57 = edx55 >> 11;
    *rax39 = r9_45[rcx56] >> reinterpret_cast<signed char>(11 - *reinterpret_cast<signed char*>(&edx57)) << 3;
    rax58 = g653;
    *rax58 = *reinterpret_cast<int32_t*>(&r15_24) + *reinterpret_cast<int32_t*>(&r14_48);
    rsi59 = *reinterpret_cast<int64_t*>(&g65d);
    rdx60 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&g65d) + 7);
    *reinterpret_cast<int32_t*>(&rdi61) = *reinterpret_cast<int32_t*>(&r14_48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi61) + 4) = reinterpret_cast<int32_t>(h);
    fun_66c(rdi61, rsi59, rdx60);
}

struct s6 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
};

struct s7 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
};

uint64_t filtez(struct s6* rdi, struct s7* rsi) {
    return rsi->f14 * static_cast<int64_t>(rdi->f14) + rsi->f10 * static_cast<int64_t>(rdi->f10) + (rsi->fc * static_cast<int64_t>(rdi->fc) + rsi->f8 * static_cast<int64_t>(rdi->f8) + (rsi->f4 * static_cast<int64_t>(rdi->f4) + rsi->f0 * reinterpret_cast<uint64_t>(static_cast<int64_t>(rdi->f0)))) >> 14;
}

int32_t* g8e2 = reinterpret_cast<int32_t*>(0x14e8dfe2981048b);

int64_t scalel(uint32_t edi, int32_t esi) {
    int64_t rax3;
    int32_t* rcx4;
    int64_t rsi5;
    int32_t ecx6;
    int64_t rax7;

    *reinterpret_cast<uint32_t*>(&rax3) = edi >> 6 & 31;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = reinterpret_cast<int32_t>(h);
    rcx4 = g8e2;
    *reinterpret_cast<uint32_t*>(&rsi5) = esi - (edi >> 11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(h);
    ecx6 = static_cast<int32_t>(rsi5 + 1);
    *reinterpret_cast<int32_t*>(&rax7) = rcx4[rax3] >> *reinterpret_cast<signed char*>(&ecx6) << 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(h);
    return rax7;
}

int64_t uppol1(int32_t edi, int64_t rsi, int32_t edx, int32_t ecx) {
    uint64_t rax5;
    uint64_t rdi6;
    int32_t edi7;
    int64_t rax8;
    int32_t ecx9;

    rax5 = reinterpret_cast<uint64_t>(static_cast<int64_t>(edi));
    rdi6 = (rax5 << 8) - rax5 >> 8;
    edi7 = *reinterpret_cast<int32_t*>(&rdi6) - 0xc0;
    if (ecx * static_cast<int64_t>(edx) >= reinterpret_cast<int64_t>(h)) {
        edi7 = static_cast<int32_t>(rdi6 + 0xc0);
    }
    *reinterpret_cast<int32_t*>(&rax8) = 0x3c00 - *reinterpret_cast<int32_t*>(&rsi);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(h);
    ecx9 = static_cast<int32_t>(rsi - 0x3c00);
    if (edi7 < *reinterpret_cast<int32_t*>(&rax8)) {
        *reinterpret_cast<int32_t*>(&rax8) = edi7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(h);
    }
    if (*reinterpret_cast<int32_t*>(&rax8) <= ecx9) {
        *reinterpret_cast<int32_t*>(&rax8) = ecx9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(h);
    }
    return rax8;
}

uint32_t* gb8b = reinterpret_cast<uint32_t*>(0xfc985d231820c03);

int64_t logsch(int32_t edi, int32_t esi) {
    uint64_t rax3;
    uint64_t rcx4;
    uint32_t* rdx5;
    uint32_t ecx6;
    uint32_t edx7;
    int64_t rax8;

    rax3 = reinterpret_cast<uint64_t>(static_cast<int64_t>(esi));
    rcx4 = (rax3 << 7) - rax3 >> 7;
    rdx5 = gb8b;
    ecx6 = *reinterpret_cast<int32_t*>(&rcx4) + rdx5[edi];
    edx7 = reinterpret_cast<uint32_t>(h);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(ecx6) < reinterpret_cast<int32_t>(h) == h)) | reinterpret_cast<uint1_t>(ecx6 == h))) {
        edx7 = ecx6;
    }
    *reinterpret_cast<uint32_t*>(&rax8) = 0x5800;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(h);
    if (edx7 < 0x5800) {
        *reinterpret_cast<uint32_t*>(&rax8) = edx7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(h);
    }
    return rax8;
}

struct s8 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
};

struct s8* gbc5 = reinterpret_cast<struct s8*>(0x358b48026348);

struct s9 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
};

struct s9* gbcf = reinterpret_cast<struct s9*>(0x48c8af0f480e6348);

int32_t* gc28 = reinterpret_cast<int32_t*>(0x482404894c00634c);

int32_t* gc36 = reinterpret_cast<int32_t*>(0x58b4838634c);

int32_t* gc40 = reinterpret_cast<int32_t*>(0xd8b48006348);

int32_t* gc4a = reinterpret_cast<int32_t*>(0xf49c1894c296348);

int32_t* gc6a = reinterpret_cast<int32_t*>(0xd8b48288944);

uint32_t* gc74 = reinterpret_cast<uint32_t*>(0xc149c08949016348);

int64_t gc94 = 0xd8b4c39040345;

int64_t gc9f = 0x3d8b48391c6349;

int32_t* gcaa = reinterpret_cast<int32_t*>(0xd8b4c3f6348);

int32_t* gcb4 = reinterpret_cast<int32_t*>(0x3d8b48b914634d);

int32_t* gcbf = reinterpret_cast<int32_t*>(0x4dd9af0f490f634c);

int32_t* gcd5 = reinterpret_cast<int32_t*>(0xc1413fe083118945);

int32_t* gd2b = reinterpret_cast<int32_t*>(0x48f8d34181048b47);

uint32_t* gd39 = reinterpret_cast<uint32_t*>(0x894403e0c1410189);

int32_t* gd49 = reinterpret_cast<int32_t*>(0x58b48308944);

int32_t* gd53 = reinterpret_cast<int32_t*>(0x58b48208944);

int32_t* gd5d = reinterpret_cast<int32_t*>(0x58b48288944);

int32_t* gd67 = reinterpret_cast<int32_t*>(0x58b481889);

int32_t* gd70 = reinterpret_cast<int32_t*>(0x8b48dc0141108944);

int32_t* gd7d = reinterpret_cast<int32_t*>(0xe8df89208944);

void decode(uint32_t edi) {
    struct s8* rdx2;
    struct s9* rsi3;
    uint64_t r12_4;
    int32_t* rax5;
    int64_t r8_6;
    int32_t* rax7;
    int32_t* rax8;
    int32_t* rcx9;
    int64_t rcx10;
    uint64_t r13_11;
    int32_t* rax12;
    uint32_t* rcx13;
    uint64_t rax14;
    int64_t rdi15;
    uint64_t r8_16;
    int64_t r9_17;
    uint32_t r8d18;
    int64_t r9_19;
    int32_t* rdi20;
    int32_t* r9_21;
    int32_t* rdi22;
    uint64_t r9_23;
    uint64_t rbx24;
    uint64_t r10_25;
    int32_t* r9_26;
    uint64_t r12_27;
    int32_t r13d28;
    uint64_t rbx29;
    uint32_t r9d30;
    uint32_t r9d31;
    int64_t r8_32;
    int32_t* r9_33;
    int32_t r8d34;
    uint32_t* rcx35;
    int32_t* rax36;
    int32_t* rax37;
    int32_t* rax38;
    int32_t* rax39;
    int32_t* rax40;
    int32_t* rax41;
    int64_t rdi42;

    rdx2 = gbc5;
    rsi3 = gbcf;
    r12_4 = rsi3->f14 * static_cast<int64_t>(rdx2->f14) + rsi3->f10 * static_cast<int64_t>(rdx2->f10) + (rsi3->fc * static_cast<int64_t>(rdx2->fc) + rsi3->f8 * static_cast<int64_t>(rdx2->f8) + (rsi3->f4 * static_cast<int64_t>(rdx2->f4) + rsi3->f0 * reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx2->f0))));
    rax5 = gc28;
    r8_6 = *rax5;
    rax7 = gc36;
    rax8 = gc40;
    rcx9 = gc4a;
    rcx10 = r8_6 * *rax7;
    r13_11 = rcx10 + rcx10 + *rax8 * static_cast<int64_t>(*rcx9) * 2 >> 15;
    rax12 = gc6a;
    *rax12 = *reinterpret_cast<int32_t*>(&r13_11);
    rcx13 = gc74;
    rax14 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*rcx13)));
    *reinterpret_cast<uint32_t*>(&rdi15) = edi & 60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(h);
    r8_16 = (rax14 << 7) - rax14 >> 7;
    r9_17 = gc94;
    r8d18 = *reinterpret_cast<int32_t*>(&r8_16) + *reinterpret_cast<uint32_t*>(r9_17 + rdi15);
    r9_19 = gc9f;
    rdi20 = gcaa;
    r9_21 = gcb4;
    rdi22 = gcbf;
    r9_23 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*rdi22));
    rbx24 = *reinterpret_cast<int32_t*>(r9_19 + rdi15) * r9_23;
    r10_25 = r9_21[*rdi20] * r9_23 >> 15;
    r9_26 = gcd5;
    *r9_26 = *reinterpret_cast<int32_t*>(&r10_25);
    r12_27 = r12_4 >> 14;
    r13d28 = *reinterpret_cast<int32_t*>(&r13_11) + *reinterpret_cast<int32_t*>(&r12_27);
    rbx29 = rbx24 >> 15;
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(r8d18) < reinterpret_cast<int32_t>(h) == h)) | reinterpret_cast<uint1_t>(r8d18 == h)) {
        r8d18 = reinterpret_cast<uint32_t>(h);
    }
    r9d30 = 0x4800;
    if (r8d18 < 0x4800) {
        r9d30 = r8d18;
    }
    *rcx13 = r9d30;
    r9d31 = r9d30 >> 11;
    *reinterpret_cast<uint32_t*>(&r8_32) = r9d30 >> 6 & 31;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_32) + 4) = reinterpret_cast<int32_t>(h);
    r9_33 = gd2b;
    r8d34 = r9_33[r8_32] >> reinterpret_cast<signed char>(9 - *reinterpret_cast<signed char*>(&r9d31));
    rcx35 = gd39;
    *rcx35 = edi & 63;
    *rdi22 = r8d34 << 3;
    rax36 = gd49;
    *rax36 = reinterpret_cast<int32_t>(edi) >> 6;
    rax37 = gd53;
    *rax37 = *reinterpret_cast<int32_t*>(&r12_27);
    rax38 = gd5d;
    *rax38 = r13d28;
    rax39 = gd67;
    *rax39 = *reinterpret_cast<int32_t*>(&rbx29);
    rax40 = gd70;
    *rax40 = *reinterpret_cast<int32_t*>(&r10_25) + r13d28;
    rax41 = gd7d;
    *rax41 = *reinterpret_cast<int32_t*>(&r12_27) + *reinterpret_cast<int32_t*>(&rbx29);
    *reinterpret_cast<int32_t*>(&rdi42) = *reinterpret_cast<int32_t*>(&rbx29);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(h);
    fun_d87(rdi42);
}

int32_t* g12c7 = reinterpret_cast<int32_t*>(0x8b480000002000c7);

int32_t* g12d4 = reinterpret_cast<int32_t*>(0x8b480000002000c7);

int32_t* g12e1 = reinterpret_cast<int32_t*>(0x8b480000000800c7);

int32_t* g12ee = reinterpret_cast<int32_t*>(0x8b480000000800c7);

int32_t* g12fb = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1308 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1315 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1322 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g132f = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g133c = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1349 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1356 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1363 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1370 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g137d = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g138a = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1397 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g13a4 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g13b1 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g13be = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g13cb = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g13d8 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g13e5 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g13f2 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g13ff = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g140c = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1419 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1426 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1433 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1440 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g144d = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g145a = reinterpret_cast<int32_t*>(0x570f0000000000c7);

struct s10 {
    signed char[16] pad16;
    int64_t f10;
};

struct s10* g146a = reinterpret_cast<struct s10*>(0x1040c74800290f);

struct s11 {
    signed char[16] pad16;
    int64_t f10;
};

struct s11* g147c = reinterpret_cast<struct s11*>(0x1040c74800290f);

struct s12 {
    signed char[16] pad16;
    int64_t f10;
};

struct s12* g148e = reinterpret_cast<struct s12*>(0x1040c74800290f);

struct s13 {
    signed char[16] pad16;
    int64_t f10;
};

struct s13* g14a0 = reinterpret_cast<struct s13*>(0x1040c74800290f);

struct s14 {
    signed char[16] pad16;
    int64_t f10;
};

struct s14* g14b2 = reinterpret_cast<struct s14*>(0x1040c74800290f);

struct s15 {
    signed char[16] pad16;
    int64_t f10;
};

struct s15* g14c4 = reinterpret_cast<struct s15*>(0x1040c74800290f);

struct s16 {
    signed char[16] pad16;
    int64_t f10;
};

struct s16* g14d6 = reinterpret_cast<struct s16*>(0x1040c74800290f);

struct s17 {
    signed char[16] pad16;
    int64_t f10;
};

struct s17* g14e8 = reinterpret_cast<struct s17*>(0x1040c74800290f);

int64_t g152a = 0x1040290f1c40110f;

int64_t reset() {
    int32_t* rax1;
    int32_t* rax2;
    int32_t* rax3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* rax7;
    int32_t* rax8;
    int32_t* rax9;
    int32_t* rax10;
    int32_t* rax11;
    int32_t* rax12;
    int32_t* rax13;
    int32_t* rax14;
    int32_t* rax15;
    int32_t* rax16;
    int32_t* rax17;
    int32_t* rax18;
    int32_t* rax19;
    int32_t* rax20;
    int32_t* rax21;
    int32_t* rax22;
    int32_t* rax23;
    int32_t* rax24;
    int32_t* rax25;
    int32_t* rax26;
    int32_t* rax27;
    int32_t* rax28;
    int32_t* rax29;
    int32_t* rax30;
    int32_t* rax31;
    int32_t* rax32;
    struct s10* rax33;
    struct s11* rax34;
    struct s12* rax35;
    struct s13* rax36;
    struct s14* rax37;
    struct s15* rax38;
    struct s16* rax39;
    struct s17* rax40;
    int64_t rax41;

    rax1 = g12c7;
    *rax1 = 32;
    rax2 = g12d4;
    *rax2 = 32;
    rax3 = g12e1;
    *rax3 = 8;
    rax4 = g12ee;
    *rax4 = 8;
    rax5 = g12fb;
    *rax5 = reinterpret_cast<int32_t>(h);
    rax6 = g1308;
    *rax6 = reinterpret_cast<int32_t>(h);
    rax7 = g1315;
    *rax7 = reinterpret_cast<int32_t>(h);
    rax8 = g1322;
    *rax8 = reinterpret_cast<int32_t>(h);
    rax9 = g132f;
    *rax9 = reinterpret_cast<int32_t>(h);
    rax10 = g133c;
    *rax10 = reinterpret_cast<int32_t>(h);
    rax11 = g1349;
    *rax11 = reinterpret_cast<int32_t>(h);
    rax12 = g1356;
    *rax12 = reinterpret_cast<int32_t>(h);
    rax13 = g1363;
    *rax13 = reinterpret_cast<int32_t>(h);
    rax14 = g1370;
    *rax14 = reinterpret_cast<int32_t>(h);
    rax15 = g137d;
    *rax15 = reinterpret_cast<int32_t>(h);
    rax16 = g138a;
    *rax16 = reinterpret_cast<int32_t>(h);
    rax17 = g1397;
    *rax17 = reinterpret_cast<int32_t>(h);
    rax18 = g13a4;
    *rax18 = reinterpret_cast<int32_t>(h);
    rax19 = g13b1;
    *rax19 = reinterpret_cast<int32_t>(h);
    rax20 = g13be;
    *rax20 = reinterpret_cast<int32_t>(h);
    rax21 = g13cb;
    *rax21 = reinterpret_cast<int32_t>(h);
    rax22 = g13d8;
    *rax22 = reinterpret_cast<int32_t>(h);
    rax23 = g13e5;
    *rax23 = reinterpret_cast<int32_t>(h);
    rax24 = g13f2;
    *rax24 = reinterpret_cast<int32_t>(h);
    rax25 = g13ff;
    *rax25 = reinterpret_cast<int32_t>(h);
    rax26 = g140c;
    *rax26 = reinterpret_cast<int32_t>(h);
    rax27 = g1419;
    *rax27 = reinterpret_cast<int32_t>(h);
    rax28 = g1426;
    *rax28 = reinterpret_cast<int32_t>(h);
    rax29 = g1433;
    *rax29 = reinterpret_cast<int32_t>(h);
    rax30 = g1440;
    *rax30 = reinterpret_cast<int32_t>(h);
    rax31 = g144d;
    *rax31 = reinterpret_cast<int32_t>(h);
    rax32 = g145a;
    *rax32 = reinterpret_cast<int32_t>(h);
    __asm__("xorps xmm0, xmm0");
    rax33 = g146a;
    __asm__("movaps [rax], xmm0");
    rax33->f10 = reinterpret_cast<int64_t>(h);
    rax34 = g147c;
    __asm__("movaps [rax], xmm0");
    rax34->f10 = reinterpret_cast<int64_t>(h);
    rax35 = g148e;
    __asm__("movaps [rax], xmm0");
    rax35->f10 = reinterpret_cast<int64_t>(h);
    rax36 = g14a0;
    __asm__("movaps [rax], xmm0");
    rax36->f10 = reinterpret_cast<int64_t>(h);
    rax37 = g14b2;
    __asm__("movaps [rax], xmm0");
    rax37->f10 = reinterpret_cast<int64_t>(h);
    rax38 = g14c4;
    __asm__("movaps [rax], xmm0");
    rax38->f10 = reinterpret_cast<int64_t>(h);
    rax39 = g14d6;
    __asm__("movaps [rax], xmm0");
    rax39->f10 = reinterpret_cast<int64_t>(h);
    rax40 = g14e8;
    __asm__("movaps [rax], xmm0");
    rax40->f10 = reinterpret_cast<int64_t>(h);
    __asm__("movaps [rax+0x50], xmm0");
    __asm__("movaps [rax+0x40], xmm0");
    __asm__("movaps [rax+0x30], xmm0");
    __asm__("movaps [rax+0x20], xmm0");
    __asm__("movaps [rax+0x10], xmm0");
    __asm__("movaps [rax], xmm0");
    __asm__("movups [rax+0x1c], xmm0");
    __asm__("movaps [rax+0x10], xmm0");
    __asm__("movaps [rax], xmm0");
    rax41 = g152a;
    __asm__("movups [rax+0x1c], xmm0");
    __asm__("movaps [rax+0x10], xmm0");
    __asm__("movaps [rax], xmm0");
    return rax41;
}

void submain() {
    fun_1871(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 40);
}

uint64_t filtep(int32_t edi, int32_t esi, int32_t edx, int32_t ecx) {
    return ecx * static_cast<int64_t>(edx + edx) + esi * reinterpret_cast<uint64_t>(static_cast<int64_t>(edi + edi)) >> 15;
}

uint32_t* g8ae = reinterpret_cast<uint32_t*>(0xfc985d231820c03);

int64_t logscl(int32_t edi, int32_t esi) {
    uint64_t rax3;
    uint64_t rcx4;
    uint32_t* rdx5;
    uint32_t ecx6;
    uint32_t edx7;
    int64_t rax8;

    rax3 = reinterpret_cast<uint64_t>(static_cast<int64_t>(esi));
    rcx4 = (rax3 << 7) - rax3 >> 7;
    rdx5 = g8ae;
    ecx6 = *reinterpret_cast<int32_t*>(&rcx4) + rdx5[edi >> 2];
    edx7 = reinterpret_cast<uint32_t>(h);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(ecx6) < reinterpret_cast<int32_t>(h) == h)) | reinterpret_cast<uint1_t>(ecx6 == h))) {
        edx7 = ecx6;
    }
    *reinterpret_cast<uint32_t*>(&rax8) = 0x4800;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(h);
    if (edx7 < 0x4800) {
        *reinterpret_cast<uint32_t*>(&rax8) = edx7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(h);
    }
    return rax8;
}

struct s18 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
};

struct s19 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
};

void upzero(int32_t edi, struct s18* rsi, struct s19* rdx) {
    uint64_t rax4;
    uint64_t rcx5;
    uint64_t rax6;
    uint64_t rcx7;
    uint64_t rax8;
    uint64_t rcx9;
    uint64_t rax10;
    uint64_t rcx11;
    uint64_t rax12;
    uint64_t rcx13;
    uint64_t rax14;
    uint64_t rcx15;
    int64_t rax16;
    int32_t r8d17;
    int64_t r8_18;
    uint64_t rcx19;
    int32_t r8d20;
    int64_t r8_21;
    uint64_t rcx22;
    int32_t r8d23;
    int64_t r8_24;
    uint64_t rcx25;
    int32_t r8d26;
    int64_t r8_27;
    uint64_t rcx28;
    int32_t r8d29;
    int64_t r8_30;
    uint64_t rcx31;
    int32_t eax32;
    uint64_t rcx33;
    uint64_t r8_34;

    if (edi == h) {
        rax4 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx->f0));
        rcx5 = (rax4 << 8) - rax4 >> 8;
        rdx->f0 = *reinterpret_cast<int32_t*>(&rcx5);
        rax6 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx->f4));
        rcx7 = (rax6 << 8) - rax6 >> 8;
        rdx->f4 = *reinterpret_cast<int32_t*>(&rcx7);
        rax8 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx->f8));
        rcx9 = (rax8 << 8) - rax8 >> 8;
        rdx->f8 = *reinterpret_cast<int32_t*>(&rcx9);
        rax10 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx->fc));
        rcx11 = (rax10 << 8) - rax10 >> 8;
        rdx->fc = *reinterpret_cast<int32_t*>(&rcx11);
        rax12 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx->f10));
        rcx13 = (rax12 << 8) - rax12 >> 8;
        rdx->f10 = *reinterpret_cast<int32_t*>(&rcx13);
        rax14 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx->f14));
        rcx15 = (rax14 << 8) - rax14 >> 8;
        rdx->f14 = *reinterpret_cast<int32_t*>(&rcx15);
    } else {
        rax16 = edi;
        r8d17 = reinterpret_cast<int32_t>(h);
        *reinterpret_cast<unsigned char*>(&r8d17) = reinterpret_cast<uint1_t>(rsi->f0 * rax16 >= reinterpret_cast<int64_t>(h));
        *reinterpret_cast<int32_t*>(&r8_18) = r8d17 << 8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_18) + 4) = reinterpret_cast<int32_t>(h);
        rcx19 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx->f0));
        rdx->f0 = static_cast<int32_t>(r8_18 + ((rcx19 << 8) - rcx19 >> 8)) - 0x80;
        r8d20 = reinterpret_cast<int32_t>(h);
        *reinterpret_cast<unsigned char*>(&r8d20) = reinterpret_cast<uint1_t>(rsi->f4 * rax16 >= reinterpret_cast<int64_t>(h));
        *reinterpret_cast<int32_t*>(&r8_21) = r8d20 << 8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_21) + 4) = reinterpret_cast<int32_t>(h);
        rcx22 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx->f4));
        rdx->f4 = static_cast<int32_t>(r8_21 + ((rcx22 << 8) - rcx22 >> 8)) - 0x80;
        r8d23 = reinterpret_cast<int32_t>(h);
        *reinterpret_cast<unsigned char*>(&r8d23) = reinterpret_cast<uint1_t>(rsi->f8 * rax16 >= reinterpret_cast<int64_t>(h));
        *reinterpret_cast<int32_t*>(&r8_24) = r8d23 << 8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = reinterpret_cast<int32_t>(h);
        rcx25 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx->f8));
        rdx->f8 = static_cast<int32_t>(r8_24 + ((rcx25 << 8) - rcx25 >> 8)) - 0x80;
        r8d26 = reinterpret_cast<int32_t>(h);
        *reinterpret_cast<unsigned char*>(&r8d26) = reinterpret_cast<uint1_t>(rsi->fc * rax16 >= reinterpret_cast<int64_t>(h));
        *reinterpret_cast<int32_t*>(&r8_27) = r8d26 << 8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_27) + 4) = reinterpret_cast<int32_t>(h);
        rcx28 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx->fc));
        rdx->fc = static_cast<int32_t>(r8_27 + ((rcx28 << 8) - rcx28 >> 8)) - 0x80;
        r8d29 = reinterpret_cast<int32_t>(h);
        *reinterpret_cast<unsigned char*>(&r8d29) = reinterpret_cast<uint1_t>(rsi->f10 * rax16 >= reinterpret_cast<int64_t>(h));
        *reinterpret_cast<int32_t*>(&r8_30) = r8d29 << 8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_30) + 4) = reinterpret_cast<int32_t>(h);
        rcx31 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx->f10));
        rdx->f10 = static_cast<int32_t>(r8_30 + ((rcx31 << 8) - rcx31 >> 8)) - 0x80;
        eax32 = reinterpret_cast<int32_t>(h);
        *reinterpret_cast<unsigned char*>(&eax32) = reinterpret_cast<uint1_t>(rsi->f14 * rax16 >= reinterpret_cast<int64_t>(h));
        rcx33 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx->f14));
        r8_34 = (rcx33 << 8) - rcx33 >> 8;
        rdx->f14 = (eax32 << 8) + *reinterpret_cast<int32_t*>(&r8_34) - 0x80;
    }
    rsi->f14 = rsi->f10;
    __asm__("movups xmm0, [rsi]");
    __asm__("movups [rsi+0x4], xmm0");
    rsi->f0 = edi;
    return;
}

int64_t uppol2(int32_t edi, int32_t esi, int32_t edx, int32_t ecx, int32_t r8d) {
    uint64_t rax6;
    int64_t rdx7;
    uint64_t rdi8;
    int32_t ecx9;
    uint64_t rax10;
    uint64_t rdx11;
    int64_t rcx12;
    int32_t eax13;
    int32_t ecx14;
    int64_t rax15;

    rax6 = reinterpret_cast<uint64_t>(static_cast<int64_t>(edi)) << 2;
    rdx7 = edx;
    rdi8 = -rax6;
    if (ecx * rdx7 < reinterpret_cast<int64_t>(h)) {
        rdi8 = rax6;
    }
    ecx9 = reinterpret_cast<int32_t>(h);
    *reinterpret_cast<unsigned char*>(&ecx9) = reinterpret_cast<uint1_t>(r8d * rdx7 >= reinterpret_cast<int64_t>(h));
    rax10 = reinterpret_cast<uint64_t>(static_cast<int64_t>(esi));
    rdx11 = (rax10 << 7) - rax10 >> 7;
    *reinterpret_cast<int32_t*>(&rcx12) = (ecx9 << 8) + *reinterpret_cast<int32_t*>(&rdx11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(h);
    eax13 = static_cast<int32_t>((rdi8 >> 7) + rcx12) - 0x80;
    ecx14 = 0x3000;
    if (eax13 < 0x3000) {
        ecx14 = eax13;
    }
    *reinterpret_cast<int32_t*>(&rax15) = 0xffffd000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(h);
    if (ecx14 >= 0xffffd001) {
        *reinterpret_cast<int32_t*>(&rax15) = ecx14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(h);
    }
    return rax15;
}

int32_t* g1550 = reinterpret_cast<int32_t*>(0x8b480000002000c7);

int32_t* g155d = reinterpret_cast<int32_t*>(0x8b480000002000c7);

int32_t* g156a = reinterpret_cast<int32_t*>(0x8b480000000800c7);

int32_t* g1577 = reinterpret_cast<int32_t*>(0x8b480000000800c7);

int32_t* g1584 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1591 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g159e = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g15ab = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g15b8 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g15c5 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g15d2 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g15df = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g15ec = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g15f9 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1606 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1613 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1620 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g162d = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g163a = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1647 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1654 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1661 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g166e = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g167b = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1688 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1695 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g16a2 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g16af = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g16bc = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g16c9 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g16d6 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g16e3 = reinterpret_cast<int32_t*>(0x570f0000000000c7);

struct s20 {
    signed char[16] pad16;
    int64_t f10;
};

struct s20* g16f3 = reinterpret_cast<struct s20*>(0x1040c74800290f);

struct s21 {
    signed char[16] pad16;
    int64_t f10;
};

struct s21* g1705 = reinterpret_cast<struct s21*>(0x1040c74800290f);

struct s22 {
    signed char[16] pad16;
    int64_t f10;
};

struct s22* g1717 = reinterpret_cast<struct s22*>(0x1040c74800290f);

struct s23 {
    signed char[16] pad16;
    int64_t f10;
};

struct s23* g1729 = reinterpret_cast<struct s23*>(0x1040c74800290f);

struct s24 {
    signed char[16] pad16;
    int64_t f10;
};

struct s24* g173b = reinterpret_cast<struct s24*>(0x1040c74800290f);

struct s25 {
    signed char[16] pad16;
    int64_t f10;
};

struct s25* g174d = reinterpret_cast<struct s25*>(0x1040c74800290f);

struct s26 {
    signed char[16] pad16;
    int64_t f10;
};

struct s26* g175f = reinterpret_cast<struct s26*>(0x1040c74800290f);

struct s27 {
    signed char[16] pad16;
    int64_t f10;
};

struct s27* g1771 = reinterpret_cast<struct s27*>(0x1040c74800290f);

void adpcm_main() {
    int32_t* rax1;
    int32_t* rax2;
    int32_t* rax3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* rax7;
    int32_t* rax8;
    int32_t* rax9;
    int32_t* rax10;
    int32_t* rax11;
    int32_t* rax12;
    int32_t* rax13;
    int32_t* rax14;
    int32_t* rax15;
    int32_t* rax16;
    int32_t* rax17;
    int32_t* rax18;
    int32_t* rax19;
    int32_t* rax20;
    int32_t* rax21;
    int32_t* rax22;
    int32_t* rax23;
    int32_t* rax24;
    int32_t* rax25;
    int32_t* rax26;
    int32_t* rax27;
    int32_t* rax28;
    int32_t* rax29;
    int32_t* rax30;
    int32_t* rax31;
    int32_t* rax32;
    struct s20* rax33;
    struct s21* rax34;
    struct s22* rax35;
    struct s23* rax36;
    struct s24* rax37;
    struct s25* rax38;
    struct s26* rax39;
    struct s27* rax40;

    rax1 = g1550;
    *rax1 = 32;
    rax2 = g155d;
    *rax2 = 32;
    rax3 = g156a;
    *rax3 = 8;
    rax4 = g1577;
    *rax4 = 8;
    rax5 = g1584;
    *rax5 = reinterpret_cast<int32_t>(h);
    rax6 = g1591;
    *rax6 = reinterpret_cast<int32_t>(h);
    rax7 = g159e;
    *rax7 = reinterpret_cast<int32_t>(h);
    rax8 = g15ab;
    *rax8 = reinterpret_cast<int32_t>(h);
    rax9 = g15b8;
    *rax9 = reinterpret_cast<int32_t>(h);
    rax10 = g15c5;
    *rax10 = reinterpret_cast<int32_t>(h);
    rax11 = g15d2;
    *rax11 = reinterpret_cast<int32_t>(h);
    rax12 = g15df;
    *rax12 = reinterpret_cast<int32_t>(h);
    rax13 = g15ec;
    *rax13 = reinterpret_cast<int32_t>(h);
    rax14 = g15f9;
    *rax14 = reinterpret_cast<int32_t>(h);
    rax15 = g1606;
    *rax15 = reinterpret_cast<int32_t>(h);
    rax16 = g1613;
    *rax16 = reinterpret_cast<int32_t>(h);
    rax17 = g1620;
    *rax17 = reinterpret_cast<int32_t>(h);
    rax18 = g162d;
    *rax18 = reinterpret_cast<int32_t>(h);
    rax19 = g163a;
    *rax19 = reinterpret_cast<int32_t>(h);
    rax20 = g1647;
    *rax20 = reinterpret_cast<int32_t>(h);
    rax21 = g1654;
    *rax21 = reinterpret_cast<int32_t>(h);
    rax22 = g1661;
    *rax22 = reinterpret_cast<int32_t>(h);
    rax23 = g166e;
    *rax23 = reinterpret_cast<int32_t>(h);
    rax24 = g167b;
    *rax24 = reinterpret_cast<int32_t>(h);
    rax25 = g1688;
    *rax25 = reinterpret_cast<int32_t>(h);
    rax26 = g1695;
    *rax26 = reinterpret_cast<int32_t>(h);
    rax27 = g16a2;
    *rax27 = reinterpret_cast<int32_t>(h);
    rax28 = g16af;
    *rax28 = reinterpret_cast<int32_t>(h);
    rax29 = g16bc;
    *rax29 = reinterpret_cast<int32_t>(h);
    rax30 = g16c9;
    *rax30 = reinterpret_cast<int32_t>(h);
    rax31 = g16d6;
    *rax31 = reinterpret_cast<int32_t>(h);
    rax32 = g16e3;
    *rax32 = reinterpret_cast<int32_t>(h);
    __asm__("xorps xmm0, xmm0");
    rax33 = g16f3;
    __asm__("movaps [rax], xmm0");
    rax33->f10 = reinterpret_cast<int64_t>(h);
    rax34 = g1705;
    __asm__("movaps [rax], xmm0");
    rax34->f10 = reinterpret_cast<int64_t>(h);
    rax35 = g1717;
    __asm__("movaps [rax], xmm0");
    rax35->f10 = reinterpret_cast<int64_t>(h);
    rax36 = g1729;
    __asm__("movaps [rax], xmm0");
    rax36->f10 = reinterpret_cast<int64_t>(h);
    rax37 = g173b;
    __asm__("movaps [rax], xmm0");
    rax37->f10 = reinterpret_cast<int64_t>(h);
    rax38 = g174d;
    __asm__("movaps [rax], xmm0");
    rax38->f10 = reinterpret_cast<int64_t>(h);
    rax39 = g175f;
    __asm__("movaps [rax], xmm0");
    rax39->f10 = reinterpret_cast<int64_t>(h);
    rax40 = g1771;
    __asm__("movaps [rax], xmm0");
    rax40->f10 = reinterpret_cast<int64_t>(h);
    __asm__("movaps [rax+0x50], xmm0");
    __asm__("movaps [rax+0x40], xmm0");
    __asm__("movaps [rax+0x30], xmm0");
    __asm__("movaps [rax+0x20], xmm0");
    __asm__("movaps [rax+0x10], xmm0");
    __asm__("movaps [rax], xmm0");
    __asm__("movups [rax+0x1c], xmm0");
    __asm__("movaps [rax+0x10], xmm0");
    __asm__("movaps [rax], xmm0");
    __asm__("movups [rax+0x1c], xmm0");
    __asm__("movaps [rax+0x10], xmm0");
    __asm__("movaps [rax], xmm0");
}

int32_t* g813 = reinterpret_cast<int32_t*>(0x841f0f2e66666666);

int32_t* g887 = reinterpret_cast<int32_t*>(0x441f0fc381048b);

int32_t* g87c = reinterpret_cast<int32_t*>(0xd8b48c381048b);

int64_t quantl(int32_t edi, int32_t esi) {
    int64_t rcx3;
    int64_t rdx4;
    int64_t rax5;
    int32_t* rsi6;
    int64_t rax7;
    int32_t* rcx8;
    int64_t rax9;
    int32_t* rcx10;
    int64_t rax11;

    *reinterpret_cast<int32_t*>(&rcx3) = -edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(h);
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rcx3) = edi;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(h);
    }
    rdx4 = esi;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(h);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(h);
    rsi6 = g813;
    do {
        if (rsi6[rax5] * rdx4 >> 15 >= rcx3) 
            break;
        if ((rsi6 + rax5)[1] * rdx4 >> 15 >= rcx3) 
            goto addr_866_6;
        if ((rsi6 + rax5)[2] * rdx4 >> 15 >= rcx3) 
            goto addr_86b_8;
        rax5 = rax5 + 3;
    } while (rax5 != 30);
    goto addr_85f_10;
    addr_86f_11:
    *reinterpret_cast<int32_t*>(&rax7) = *reinterpret_cast<int32_t*>(&rax5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(h);
    if (edi >= reinterpret_cast<int32_t>(h)) {
        rcx8 = g887;
        *reinterpret_cast<int32_t*>(&rax9) = rcx8[rax7];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(h);
        return rax9;
    } else {
        rcx10 = g87c;
        *reinterpret_cast<int32_t*>(&rax11) = rcx10[rax7];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(h);
        return rax11;
    }
    addr_866_6:
    ++rax5;
    goto addr_86f_11;
    addr_86b_8:
    rax5 = rax5 + 2;
    goto addr_86f_11;
    addr_85f_10:
    *reinterpret_cast<int32_t*>(&rax5) = 30;
    goto addr_86f_11;
}

