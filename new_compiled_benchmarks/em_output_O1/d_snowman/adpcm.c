
int64_t printf(int32_t edi);

void fun_1689(int64_t rdi, int64_t rsi) {
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
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1689(rdi9, rsi);
    }
    goto v11;
}

void fun_1713(int64_t rdi, int64_t rsi);

int32_t fun_1783();

void fun_1797(int32_t* rdi, int32_t* rsi);

void fun_17d3(int64_t rdi, int64_t rsi);

void fun_16ea(int32_t* rdi, int32_t* rsi) {
    int32_t* rsp3;
    int64_t rdx4;
    int64_t r15_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t eax8;
    int64_t v9;

    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi;
    fun_1713(rdi + 1, rsi + 1);
    rsp3 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx4;
    } while (rdx4 != 50);
    do {
        ++r15_5;
    } while (r15_5 != 100);
    rdi6 = rsp3;
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
    eax8 = fun_1783();
    if (eax8 != printf) {
        rdi6 = reinterpret_cast<int32_t*>(0x178e);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1797(0x178e, rsi7);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi6 = *rsi7;
    __asm__("subsd xmm0, [r14]");
    fun_17d3(0x17cc, rsi7 + 1);
    goto v9;
}

void fun_1713(int64_t rdi, int64_t rsi) {
    int32_t* rsp3;
    int64_t rdx4;
    int64_t r15_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t eax8;
    int64_t v9;

    rsp3 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    *reinterpret_cast<int32_t*>(&rdx4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx4;
    } while (rdx4 != 50);
    do {
        ++r15_5;
    } while (r15_5 != 100);
    rdi6 = rsp3;
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
    eax8 = fun_1783();
    if (eax8 != printf) {
        rdi6 = reinterpret_cast<int32_t*>(0x178e);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1797(0x178e, rsi7);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi6 = *rsi7;
    __asm__("subsd xmm0, [r14]");
    fun_17d3(0x17cc, rsi7 + 1);
    goto v9;
}

int32_t g178e = 0xc031c689;

int32_t fun_1783() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != printf) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1797(0x178e, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g178e = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_17d3(0x17cc, rsi2 + 1);
    goto v4;
}

void fun_1797(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_17d3(0x17cc, rsi + 1);
    goto v3;
}

void fun_17d3(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_16d6(int32_t* rdi) {
    void* rsp2;
    int32_t eax3;
    int32_t* rsi4;
    int32_t eax5;
    int32_t* rsp6;
    int64_t rdx7;
    int64_t r15_8;
    int32_t* rdi9;
    int32_t* rsi10;
    int32_t eax11;
    int64_t v12;

    rsp2 = __zero_stack_offset();
    if (eax3 != printf) {
        rdi = reinterpret_cast<int32_t*>(0x16e1);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
        fun_16ea(0x16e1, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    fun_1713(rdi + 1, rsi4 + 1);
    rsp6 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx7;
    } while (rdx7 != 50);
    do {
        ++r15_8;
    } while (r15_8 != 100);
    rdi9 = rsp6;
    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(printf);
    eax11 = fun_1783();
    if (eax11 != printf) {
        rdi9 = reinterpret_cast<int32_t*>(0x178e);
        *reinterpret_cast<int32_t*>(&rsi10) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1797(0x178e, rsi10);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi9 = *rsi10;
    __asm__("subsd xmm0, [r14]");
    fun_17d3(0x17cc, rsi10 + 1);
    goto v12;
}

uint176_t g1672 = 0x4c00000000258b4c;

int32_t fun_1659(int64_t rdi, int64_t rsi) {
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
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rsi9) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_10) + (r12_4 * 4 | 4));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(printf);
        eax5 = fun_1659(rdi7, rsi9);
    }
    r15_11 = *reinterpret_cast<int32_t**>(&g1672);
    r12_12 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&g1672) + 7);
    r13_13 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&g1672) + 14);
    do {
        *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_15) + rbx16 * 2);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1689(rdi14, rsi);
        r12_12[rbx16] = *r15_11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r12_12) + (rbx16 * 4 | 4)) = *r13_13;
        cf17 = rbx16 < 98;
        rbx16 = rbx16 + 2;
    } while (cf17);
    goto v18;
}

int64_t printf(int32_t edi) {
    int64_t rax2;

    *reinterpret_cast<int32_t*>(&rax2) = -edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(printf);
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rax2) = edi;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(printf);
    }
    return rax2;
}

int32_t* g47b = reinterpret_cast<int32_t*>(0xd8b483189);

int32_t* g484 = reinterpret_cast<int32_t*>(0xd8b4811634c);

int32_t* g48e = reinterpret_cast<int32_t*>(0xd8b4809634c);

int32_t* g498 = reinterpret_cast<int32_t*>(0x158b48096348);

int32_t* g4a2 = reinterpret_cast<int32_t*>(0xf49d2894c2a634c);

int32_t* g4c2 = reinterpret_cast<int32_t*>(0x2944f60141318944);

int32_t* g4d2 = reinterpret_cast<int32_t*>(0xe9c1d1f7c1890189);

int32_t* g4e5 = reinterpret_cast<int32_t*>(0x34c2694c24146349);

int32_t* g502 = reinterpret_cast<int32_t*>(0x58b48308944);

uint32_t* g50c = reinterpret_cast<uint32_t*>(0xff047ec539440889);

int32_t* g521 = reinterpret_cast<int32_t*>(0xeaaf0f48812c6348);

uint32_t* g534 = reinterpret_cast<uint32_t*>(0xc148c2894c01634c);

uint32_t* g54c = reinterpret_cast<uint32_t*>(0x85c0314580140341);

int32_t* g580 = reinterpret_cast<int32_t*>(0xd928440bb18a148b);

int32_t* g591 = reinterpret_cast<int32_t*>(0x14894103e2c12989);

int32_t* g5a3 = reinterpret_cast<int32_t*>(0x63485274ed853189);

int32_t* g602 = reinterpret_cast<int32_t*>(0x1f0f2e6666666666);

uint120_t g5b5 = 0xf00000000258b4c;

int32_t* g648 = reinterpret_cast<int32_t*>(0x894cde634c09634c);

int32_t* g67f = reinterpret_cast<int32_t*>(0x4ddbaf0f491a6348);

int32_t* g6d7 = reinterpret_cast<int32_t*>(0x3c00bb411b8941);

int32_t* g701 = reinterpret_cast<int32_t*>(0x158b481a8944);

int32_t* g70b = reinterpret_cast<int32_t*>(0x158b48128944);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s0* g715 = reinterpret_cast<struct s0*>(0x842110f0442100f);

int32_t* g72c = reinterpret_cast<int32_t*>(0x158b48328944);

int32_t* g736 = reinterpret_cast<int32_t*>(0x6e0c13189328944);

void fun_460(int32_t edi, int64_t rsi) {
    int32_t r8d3;
    uint64_t rsi4;
    int64_t r10_5;
    int64_t r9_6;
    int32_t* rcx7;
    int32_t* rcx8;
    int64_t r10_9;
    int32_t* rcx10;
    uint64_t r9_11;
    int32_t* rcx12;
    int32_t* rdx13;
    uint64_t r13_14;
    uint64_t rdx15;
    uint64_t r14_16;
    int32_t* rcx17;
    int32_t r14d18;
    int32_t eax19;
    int32_t eax20;
    int32_t* rcx21;
    uint32_t ecx22;
    int32_t* r12_23;
    uint64_t rdx24;
    uint64_t r8_25;
    int32_t ebp26;
    int32_t* rax27;
    uint32_t* rax28;
    int64_t rax29;
    int32_t* rcx30;
    uint64_t rbp31;
    uint32_t* rcx32;
    uint64_t r8_33;
    uint64_t rdx34;
    uint32_t* r8_35;
    uint32_t edx36;
    int64_t r8_37;
    uint32_t r11d38;
    int64_t rcx39;
    uint32_t r11d40;
    int32_t* rdx41;
    int32_t edx42;
    int32_t* rcx43;
    int32_t esi44;
    int32_t* rcx45;
    int32_t* rcx46;
    uint64_t rdx47;
    uint64_t r11_48;
    int64_t rcx49;
    int64_t rdx50;
    int32_t* r8_51;
    int32_t* r12_52;
    int32_t ebx53;
    uint64_t r15_54;
    uint64_t r11_55;
    uint64_t rdx56;
    int32_t* rcx57;
    int64_t r9_58;
    int64_t r11_59;
    uint64_t r15_60;
    uint64_t r8_61;
    int32_t r8d62;
    int1_t sf63;
    int32_t* rdx64;
    uint64_t r15_65;
    uint64_t r11_66;
    int32_t ebx67;
    int32_t ebx68;
    int32_t r11d69;
    int32_t ebx70;
    int32_t* r11_71;
    int32_t r11d72;
    int32_t ebx73;
    int32_t* rdx74;
    int32_t* rdx75;
    struct s0* rdx76;
    int32_t r14d77;
    int32_t* rdx78;
    int32_t* rdx79;
    int64_t v80;

    if (r8d3 + 1 == 6) {
        rsi4 = reinterpret_cast<uint64_t>(rsi + r10_5 * r9_6) >> 14;
        rcx7 = g47b;
        *rcx7 = *reinterpret_cast<int32_t*>(&rsi4);
        rcx8 = g484;
        r10_9 = *rcx8;
        rcx10 = g48e;
        r9_11 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*rcx10));
        rcx12 = g498;
        rdx13 = g4a2;
        r13_14 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*rdx13));
        rdx15 = r10_9 * r9_11;
        r14_16 = rdx15 + rdx15 + *rcx12 * r13_14 * 2 >> 15;
        rcx17 = g4c2;
        *rcx17 = *reinterpret_cast<int32_t*>(&r14_16);
        r14d18 = *reinterpret_cast<int32_t*>(&r14_16) + *reinterpret_cast<int32_t*>(&rsi4);
        eax19 = eax20 - r14d18;
        rcx21 = g4d2;
        *rcx21 = eax19;
        ecx22 = reinterpret_cast<uint32_t>(~eax19) >> 30 | 1;
        r12_23 = g4e5;
        rdx24 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*r12_23));
        r8_25 = rdx24 * 0x234 >> 12;
        ebp26 = -eax19;
        if (__intrinsic()) {
            ebp26 = eax19;
        }
        rax27 = g502;
        *rax27 = r14d18;
        rax28 = g50c;
        *rax28 = ecx22;
        if (ebp26 > *reinterpret_cast<int32_t*>(&r8_25)) {
            *rax28 = ecx22 - 1;
        }
        rax29 = reinterpret_cast<int32_t>(*rax28);
        rcx30 = g521;
        rbp31 = rcx30[rax29] * rdx24 >> 15;
        rcx32 = g534;
        r8_33 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*rcx32)));
        rdx34 = (r8_33 << 7) - r8_33 >> 7;
        r8_35 = g54c;
        edx36 = *reinterpret_cast<int32_t*>(&rdx34) + r8_35[rax29];
        *reinterpret_cast<uint32_t*>(&r8_37) = reinterpret_cast<uint32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_37) + 4) = reinterpret_cast<int32_t>(printf);
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(edx36) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(edx36 == printf)) {
            edx36 = reinterpret_cast<uint32_t>(printf);
        }
        r11d38 = 0x5800;
        if (edx36 < 0x5800) {
            r11d38 = edx36;
        }
        *rcx32 = r11d38;
        *reinterpret_cast<uint32_t*>(&rcx39) = r11d38 >> 6 & 31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx39) + 4) = reinterpret_cast<int32_t>(printf);
        r11d40 = r11d38 >> 11;
        rdx41 = g580;
        edx42 = rdx41[rcx39] >> reinterpret_cast<signed char>(11 - *reinterpret_cast<signed char*>(&r11d40));
        rcx43 = g591;
        *rcx43 = *reinterpret_cast<int32_t*>(&rbp31);
        *r12_23 = edx42 << 3;
        esi44 = *reinterpret_cast<int32_t*>(&rsi4) + *reinterpret_cast<int32_t*>(&rbp31);
        rcx45 = g5a3;
        *rcx45 = esi44;
        if (*reinterpret_cast<int32_t*>(&rbp31) == printf) {
            rcx46 = g602;
            do {
                rdx47 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rcx46[r8_37]));
                r11_48 = (rdx47 << 8) - rdx47 >> 8;
                rcx46[r8_37] = *reinterpret_cast<int32_t*>(&r11_48);
                ++r8_37;
            } while (r8_37 != 6);
        } else {
            rcx49 = *reinterpret_cast<int32_t*>(&rbp31);
            *reinterpret_cast<int32_t*>(&rdx50) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx50) + 4) = reinterpret_cast<int32_t>(printf);
            r8_51 = *reinterpret_cast<int32_t**>(&g5b5);
            r12_52 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&g5b5) + 7);
            do {
                ebx53 = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<unsigned char*>(&ebx53) = reinterpret_cast<uint1_t>(r8_51[rdx50] * rcx49 >= reinterpret_cast<int64_t>(printf));
                r15_54 = reinterpret_cast<uint64_t>(static_cast<int64_t>(r12_52[rdx50]));
                r11_55 = (r15_54 << 8) - r15_54 >> 8;
                r12_52[rdx50] = *reinterpret_cast<int32_t*>(&r11_55) + (ebx53 << 8) - 0x80;
                ++rdx50;
            } while (rdx50 != 6);
        }
        rdx56 = r9_11 * 4;
        rcx57 = g648;
        r9_58 = *rcx57;
        r11_59 = esi44;
        r15_60 = -rdx56;
        r8_61 = (r9_11 << 8) - r9_11 >> 8;
        r8d62 = *reinterpret_cast<int32_t*>(&r8_61) - 0xc0;
        sf63 = r9_58 * r11_59 < reinterpret_cast<int64_t>(printf);
        if (sf63) {
            r15_60 = rdx56;
        }
        if (!sf63) {
            r8d62 = static_cast<int32_t>(r8_61 + 0xc0);
        }
        rdx64 = g67f;
        r15_65 = r15_60 >> 7;
        r11_66 = (r13_14 << 7) - r13_14 >> 7;
        ebx67 = 0x80;
        if (*rdx64 * r11_59 < reinterpret_cast<int64_t>(printf)) {
            ebx67 = 0xffffff80;
        }
        ebx68 = ebx67 + *reinterpret_cast<int32_t*>(&r11_66) + *reinterpret_cast<int32_t*>(&r15_65);
        r11d69 = 0x3000;
        if (ebx68 < 0x3000) {
            r11d69 = ebx68;
        }
        ebx70 = 0xffffd000;
        if (r11d69 >= 0xffffd001) {
            ebx70 = r11d69;
        }
        r11_71 = g6d7;
        *r11_71 = ebx70;
        r11d72 = 0x3c00 - ebx70;
        ebx73 = ebx70 - 0x3c00;
        if (r8d62 < r11d72) {
            r11d72 = r8d62;
        }
        if (r11d72 <= ebx73) {
            r11d72 = ebx73;
        }
        *rdx64 = *reinterpret_cast<int32_t*>(&r9_58);
        rdx74 = g701;
        *rdx74 = r11d72;
        rdx75 = g70b;
        *rdx75 = *reinterpret_cast<int32_t*>(&r10_9);
        rdx76 = g715;
        __asm__("movups xmm0, [rdx+0x4]");
        __asm__("movups [rdx+0x8], xmm0");
        rdx76->f4 = edi;
        rdx76->f0 = *reinterpret_cast<int32_t*>(&rbp31);
        r14d77 = r14d18 + *reinterpret_cast<int32_t*>(&rbp31);
        rdx78 = g72c;
        *rdx78 = r14d77;
        rdx79 = g736;
        *rdx79 = r14d77;
        *rcx57 = esi44;
        goto v80;
    }
}

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

uint64_t filtez(struct s1* rdi, struct s2* rsi) {
    uint64_t rax3;
    int32_t ecx4;

    rax3 = rsi->f0 * reinterpret_cast<uint64_t>(static_cast<int64_t>(rdi->f0));
    ecx4 = 1;
    do {
        rdi = reinterpret_cast<struct s1*>(&rdi->f4);
        rsi = reinterpret_cast<struct s2*>(&rsi->f4);
        rax3 = rax3 + rsi->f4 * reinterpret_cast<uint64_t>(static_cast<int64_t>(rdi->f4));
        ++ecx4;
    } while (ecx4 != 6);
    return rax3 >> 14;
}

uint64_t filtep(int32_t edi, int32_t esi, int32_t edx, int32_t ecx) {
    return ecx * static_cast<int64_t>(edx + edx) + esi * reinterpret_cast<uint64_t>(static_cast<int64_t>(edi + edi)) >> 15;
}

int32_t* g862 = reinterpret_cast<int32_t*>(0x14e8dfe2981048b);

int64_t scalel(uint32_t edi, int32_t esi) {
    int64_t rax3;
    int32_t* rcx4;
    int64_t rsi5;
    int32_t ecx6;
    int64_t rax7;

    *reinterpret_cast<uint32_t*>(&rax3) = edi >> 6 & 31;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = reinterpret_cast<int32_t>(printf);
    rcx4 = g862;
    *reinterpret_cast<uint32_t*>(&rsi5) = esi - (edi >> 11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(printf);
    ecx6 = static_cast<int32_t>(rsi5 + 1);
    *reinterpret_cast<int32_t*>(&rax7) = rcx4[rax3] >> *reinterpret_cast<signed char*>(&ecx6) << 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(printf);
    return rax7;
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
    if (ecx * rdx7 < reinterpret_cast<int64_t>(printf)) {
        rdi8 = rax6;
    }
    ecx9 = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<unsigned char*>(&ecx9) = reinterpret_cast<uint1_t>(r8d * rdx7 >= reinterpret_cast<int64_t>(printf));
    rax10 = reinterpret_cast<uint64_t>(static_cast<int64_t>(esi));
    rdx11 = (rax10 << 7) - rax10 >> 7;
    *reinterpret_cast<int32_t*>(&rcx12) = (ecx9 << 8) + *reinterpret_cast<int32_t*>(&rdx11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(printf);
    eax13 = static_cast<int32_t>((rdi8 >> 7) + rcx12) - 0x80;
    ecx14 = 0x3000;
    if (eax13 < 0x3000) {
        ecx14 = eax13;
    }
    *reinterpret_cast<int32_t*>(&rax15) = 0xffffd000;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(printf);
    if (ecx14 >= 0xffffd001) {
        *reinterpret_cast<int32_t*>(&rax15) = ecx14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(printf);
    }
    return rax15;
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
    if (ecx * static_cast<int64_t>(edx) >= reinterpret_cast<int64_t>(printf)) {
        edi7 = static_cast<int32_t>(rdi6 + 0xc0);
    }
    *reinterpret_cast<int32_t*>(&rax8) = 0x3c00 - *reinterpret_cast<int32_t*>(&rsi);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(printf);
    ecx9 = static_cast<int32_t>(rsi - 0x3c00);
    if (edi7 < *reinterpret_cast<int32_t*>(&rax8)) {
        *reinterpret_cast<int32_t*>(&rax8) = edi7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(printf);
    }
    if (*reinterpret_cast<int32_t*>(&rax8) <= ecx9) {
        *reinterpret_cast<int32_t*>(&rax8) = ecx9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(printf);
    }
    return rax8;
}

uint32_t* g9eb = reinterpret_cast<uint32_t*>(0xfc985d231820c03);

int64_t logsch(int32_t edi, int32_t esi) {
    uint64_t rax3;
    uint64_t rcx4;
    uint32_t* rdx5;
    uint32_t ecx6;
    uint32_t edx7;
    int64_t rax8;

    rax3 = reinterpret_cast<uint64_t>(static_cast<int64_t>(esi));
    rcx4 = (rax3 << 7) - rax3 >> 7;
    rdx5 = g9eb;
    ecx6 = *reinterpret_cast<int32_t*>(&rcx4) + rdx5[edi];
    edx7 = reinterpret_cast<uint32_t>(printf);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(ecx6) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(ecx6 == printf))) {
        edx7 = ecx6;
    }
    *reinterpret_cast<uint32_t*>(&rax8) = 0x5800;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(printf);
    if (edx7 < 0x5800) {
        *reinterpret_cast<uint32_t*>(&rax8) = edx7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(printf);
    }
    return rax8;
}

uint32_t* ga26 = reinterpret_cast<uint32_t*>(0x58b4806ffc10889);

int32_t* ga32 = reinterpret_cast<int32_t*>(0x58b483889);

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s3* ga3b = reinterpret_cast<struct s3*>(0x358b48106348);

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s4* ga45 = reinterpret_cast<struct s4*>(0x894cc8894d0e634c);

int32_t* ga8b = reinterpret_cast<int32_t*>(0x58b4810634c);

int32_t* ga95 = reinterpret_cast<int32_t*>(0x58b4800634c);

int32_t* ga9f = reinterpret_cast<int32_t*>(0x358b48006348);

int32_t* gaa9 = reinterpret_cast<int32_t*>(0xf49d6894c26634c);

int32_t* gac9 = reinterpret_cast<int32_t*>(0x8b4cd60141308944);

int32_t* gad6 = reinterpret_cast<int32_t*>(0x8b48fce183316349);

int64_t gae3 = 0xeeaf0f4c082c634c;

int32_t* gaf6 = reinterpret_cast<int32_t*>(0x1d8b4c006348);

int32_t* gb00 = reinterpret_cast<int32_t*>(0xc6af0f4883046349);

int32_t* gb13 = reinterpret_cast<int32_t*>(0x358b48f001440689);

uint32_t* gb1f = reinterpret_cast<uint32_t*>(0xc148db894c1e634c);

int64_t gb37 = 0x85db31450b1c0341;

int32_t* gb6b = reinterpret_cast<int32_t*>(0x3e6c1fed3b3348b);

int32_t* gb7d = reinterpret_cast<int32_t*>(0xd8b481189);

int32_t* gb86 = reinterpret_cast<int32_t*>(0xd8b48318944);

int32_t* gb90 = reinterpret_cast<int32_t*>(0xd8b48298944);

int32_t* gb9a = reinterpret_cast<int32_t*>(0xd8b48ea01440189);

int32_t* gba6 = reinterpret_cast<int32_t*>(0x495174ed85451189);

int32_t* gc05 = reinterpret_cast<int32_t*>(0x841f0f2e6666);

uint120_t gbb9 = 0x49000000001d8b4c;

int32_t* gc36 = reinterpret_cast<int32_t*>(0x85348d4a09634c);

int32_t* gc79 = reinterpret_cast<int32_t*>(0x490f0e89443e634c);

int32_t* gcd8 = reinterpret_cast<int32_t*>(0x3c00be068944);

int32_t* gcfd = reinterpret_cast<int32_t*>(0x358b48308941);

int32_t* gd07 = reinterpret_cast<int32_t*>(0x358b48168944);

struct s5 {
    int32_t f0;
    int32_t f4;
};

struct s5* gd11 = reinterpret_cast<struct s5*>(0x846110f0446100f);

int32_t* gd2f = reinterpret_cast<int32_t*>(0x358b48368944);

int32_t* gd39 = reinterpret_cast<int32_t*>(0xd8b481189368944);

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s6* gd45 = reinterpret_cast<struct s6*>(0x158b48316348);

struct s7 {
    int32_t f0;
    int32_t f4;
};

struct s7* gd4f = reinterpret_cast<struct s7*>(0x41f1af0f490a634c);

int32_t* gd8b = reinterpret_cast<int32_t*>(0xd8b4819634c);

int32_t* gd95 = reinterpret_cast<int32_t*>(0xd8b4811634c);

int32_t* gd9f = reinterpret_cast<int32_t*>(0x158b48096348);

int32_t* gda9 = reinterpret_cast<int32_t*>(0xf49da894c2a634c);

int32_t* gdc9 = reinterpret_cast<int32_t*>(0x2d8b48f2011189);

int32_t* gdd4 = reinterpret_cast<int32_t*>(0x48c7634c004d6348);

int32_t* gde2 = reinterpret_cast<int32_t*>(0xf9af0f48873c634a);

uint32_t* gdf5 = reinterpret_cast<uint32_t*>(0xc149dc8949196348);

uint32_t* ge0d = reinterpret_cast<uint32_t*>(0x45c0314583240346);

int32_t* ge3c = reinterpret_cast<int32_t*>(0xb10bebc18e248b45);

int32_t* ge59 = reinterpret_cast<int32_t*>(0xd8b483189);

int32_t* ge62 = reinterpret_cast<int32_t*>(0xd8b481189);

int32_t* ge6b = reinterpret_cast<int32_t*>(0xd8b48fe013989);

int32_t* ge76 = reinterpret_cast<int32_t*>(0x63485274ff853189);

int32_t* ged5 = reinterpret_cast<int32_t*>(0x841f0f2e6666);

uint120_t ge89 = 0x4a00000000258b4c;

int32_t* gf06 = reinterpret_cast<int32_t*>(0xc148d5894c01634c);

int32_t* gf4e = reinterpret_cast<int32_t*>(0x4cf3af0f4c32634d);

int32_t* gfaa = reinterpret_cast<int32_t*>(0x3c00b841308945);

int32_t* gfd2 = reinterpret_cast<int32_t*>(0x58b4c028945);

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s8* gfdc = reinterpret_cast<struct s8*>(0x110f410440100f41);

int32_t* gff6 = reinterpret_cast<int32_t*>(0x3d8b481789);

int32_t* gfff = reinterpret_cast<int32_t*>(0x3d8b481f8944);

int32_t* g1009 = reinterpret_cast<int32_t*>(0xd129c18931891789);

int32_t* g1018 = reinterpret_cast<int32_t*>(0x58b48c2010e89);

int32_t* g1023 = reinterpret_cast<int32_t*>(0xe0c148c163481089);

struct s9 {
    signed char[8] pad8;
    int32_t f8;
};

struct s9* g103e = reinterpret_cast<struct s9*>(0x4cc0314508c78348);

struct s10 {
    int32_t f0;
    int32_t f4;
};

uint120_t g104c = 0x6600000000158b4c;

struct s11 {
    int32_t f0;
    signed char[28] pad32;
    int64_t f20;
    int64_t f24;
    int32_t f28;
};

struct s11* g1097 = reinterpret_cast<struct s11*>(0xffd4b9492847634c);

struct s12 {
    int32_t f0;
    signed char[28] pad32;
    int64_t f20;
    int64_t f24;
    int32_t f28;
};

struct s12* g10b3 = reinterpret_cast<struct s12*>(0x40048d4f2846634c);

int32_t* g10ca = reinterpret_cast<int32_t*>(0x4c0ee8c148088945);

int32_t* g10d8 = reinterpret_cast<int32_t*>(0x280f07280f008941);

void decode(uint32_t edi) {
    uint32_t ecx2;
    uint32_t* rax3;
    int32_t edi4;
    int32_t* rax5;
    struct s3* rax6;
    int64_t rdx7;
    struct s4* rsi8;
    uint64_t r9_9;
    uint64_t v10;
    uint64_t rdx11;
    int32_t r8d12;
    uint64_t rdx13;
    int32_t* rax14;
    int64_t r10_15;
    int32_t* rax16;
    uint64_t r8_17;
    int32_t* rax18;
    int32_t* rsi19;
    uint64_t r12_20;
    uint64_t rsi21;
    uint64_t r14_22;
    int32_t* rax23;
    int32_t r14d24;
    int32_t* r9_25;
    uint64_t rsi26;
    int64_t rcx27;
    int64_t rax28;
    uint64_t r13_29;
    int32_t* rax30;
    int32_t* r11_31;
    uint64_t rax32;
    int32_t* rsi33;
    int32_t eax34;
    uint32_t* rsi35;
    uint64_t r11_36;
    uint64_t rbx37;
    int64_t r11_38;
    uint32_t ebx39;
    int64_t r11_40;
    uint32_t ebp41;
    int64_t rsi42;
    uint32_t ebp43;
    int32_t* rbx44;
    int32_t* rcx45;
    int32_t* rcx46;
    int32_t* rcx47;
    int32_t* rcx48;
    int32_t edx49;
    int32_t* rcx50;
    int32_t* rcx51;
    uint64_t rsi52;
    uint64_t r9_53;
    int64_t rcx54;
    int64_t rsi55;
    int32_t* r9_56;
    int32_t* r11_57;
    int32_t r15d58;
    int64_t r15_59;
    uint64_t rbx60;
    int32_t* rcx61;
    int64_t r9_62;
    uint64_t rsi63;
    int64_t r11_64;
    uint64_t r8_65;
    uint64_t rbp66;
    int32_t ebp67;
    int1_t sf68;
    int32_t* rsi69;
    int64_t r15_70;
    uint64_t r8_71;
    uint64_t rsi72;
    int32_t r9d73;
    int32_t r9d74;
    int32_t esi75;
    int32_t r8d76;
    int32_t* rsi77;
    int32_t esi78;
    int32_t r8d79;
    int32_t* r8_80;
    int32_t* rsi81;
    struct s5* rsi82;
    uint64_t r8_83;
    int32_t r14d84;
    int32_t* rsi85;
    int32_t* rsi86;
    struct s6* rcx87;
    struct s7* rdx88;
    uint64_t r9_89;
    uint64_t rsi90;
    int32_t r8d91;
    uint64_t rsi92;
    int32_t* rcx93;
    int64_t r11_94;
    int32_t* rcx95;
    uint64_t r10_96;
    int32_t* rcx97;
    int32_t* rdx98;
    uint64_t r13_99;
    uint64_t rdx100;
    uint64_t rdx101;
    int32_t* rcx102;
    int32_t edx103;
    int32_t* rbp104;
    int64_t r8_105;
    int32_t* rdi106;
    uint64_t rdi107;
    uint32_t* rcx108;
    uint64_t rbx109;
    uint64_t r12_110;
    uint32_t* rbx111;
    uint32_t r12d112;
    int64_t r8_113;
    uint32_t ebx114;
    int64_t rcx115;
    int32_t* r14_116;
    uint32_t ebx117;
    int32_t* rcx118;
    int32_t* rcx119;
    int32_t* rcx120;
    int32_t esi121;
    int32_t* rcx122;
    int32_t* rcx123;
    uint64_t rbx124;
    uint64_t r12_125;
    int64_t rcx126;
    int64_t r8_127;
    int32_t* rbp128;
    int32_t* r12_129;
    int32_t r14d130;
    uint64_t r15_131;
    uint64_t rbx132;
    int32_t* rcx133;
    int64_t r8_134;
    uint64_t r10_135;
    int64_t rbx136;
    uint64_t r12_137;
    uint64_t rbp138;
    int32_t ebp139;
    int1_t sf140;
    int32_t* r10_141;
    uint64_t r12_142;
    uint64_t rbx143;
    int32_t r14d144;
    int32_t r14d145;
    int32_t ebx146;
    int32_t r14d147;
    int32_t* r8_148;
    int32_t r8d149;
    int32_t r14d150;
    int32_t* r10_151;
    struct s8* r8_152;
    int32_t edx153;
    int32_t* rdi154;
    int32_t* rdi155;
    int32_t* rdi156;
    int32_t ecx157;
    int32_t* rsi158;
    int32_t edx159;
    int32_t* rax160;
    int64_t rax161;
    int64_t rsi162;
    int64_t rax163;
    struct s9* rdi164;
    struct s10* rdi165;
    int32_t r8d166;
    int32_t* r9_167;
    int32_t* r10_168;
    struct s11* rdi169;
    struct s12* rsi170;
    int64_t r8_171;
    uint64_t r9_172;
    int32_t* r8_173;
    uint64_t rax174;
    int32_t* r8_175;

    ecx2 = edi & 63;
    rax3 = ga26;
    *rax3 = ecx2;
    edi4 = reinterpret_cast<int32_t>(edi) >> 6;
    rax5 = ga32;
    *rax5 = edi4;
    rax6 = ga3b;
    rdx7 = rax6->f0;
    rsi8 = ga45;
    r9_9 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rsi8->f0));
    v10 = r9_9;
    rdx11 = rdx7 * r9_9;
    r8d12 = 1;
    do {
        rax6 = reinterpret_cast<struct s3*>(&rax6->f4);
        rsi8 = reinterpret_cast<struct s4*>(&rsi8->f4);
        rdx11 = rdx11 + rsi8->f4 * reinterpret_cast<uint64_t>(static_cast<int64_t>(rax6->f4));
        ++r8d12;
    } while (r8d12 != 6);
    rdx13 = rdx11 >> 14;
    rax14 = ga8b;
    r10_15 = *rax14;
    rax16 = ga95;
    r8_17 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*rax16));
    rax18 = ga9f;
    rsi19 = gaa9;
    r12_20 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*rsi19));
    rsi21 = r10_15 * r8_17;
    r14_22 = rsi21 + rsi21 + *rax18 * r12_20 * 2 >> 15;
    rax23 = gac9;
    *rax23 = *reinterpret_cast<int32_t*>(&r14_22);
    r14d24 = *reinterpret_cast<int32_t*>(&r14_22) + *reinterpret_cast<int32_t*>(&rdx13);
    r9_25 = gad6;
    rsi26 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*r9_25));
    *reinterpret_cast<uint32_t*>(&rcx27) = ecx2 & 0xfffffffc;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = reinterpret_cast<int32_t>(printf);
    rax28 = gae3;
    r13_29 = *reinterpret_cast<int32_t*>(rax28 + rcx27) * rsi26 >> 15;
    rax30 = gaf6;
    r11_31 = gb00;
    rax32 = r11_31[*rax30] * rsi26 >> 15;
    rsi33 = gb13;
    *rsi33 = *reinterpret_cast<int32_t*>(&rax32);
    eax34 = *reinterpret_cast<int32_t*>(&rax32) + r14d24;
    rsi35 = gb1f;
    r11_36 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*rsi35)));
    rbx37 = (r11_36 << 7) - r11_36 >> 7;
    r11_38 = gb37;
    ebx39 = *reinterpret_cast<int32_t*>(&rbx37) + *reinterpret_cast<uint32_t*>(r11_38 + rcx27);
    *reinterpret_cast<uint32_t*>(&r11_40) = reinterpret_cast<uint32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_40) + 4) = reinterpret_cast<int32_t>(printf);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(ebx39) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(ebx39 == printf)) {
        ebx39 = reinterpret_cast<uint32_t>(printf);
    }
    ebp41 = 0x4800;
    if (ebx39 < 0x4800) {
        ebp41 = ebx39;
    }
    *rsi35 = ebp41;
    *reinterpret_cast<uint32_t*>(&rsi42) = ebp41 >> 6 & 31;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi42) + 4) = reinterpret_cast<int32_t>(printf);
    ebp43 = ebp41 >> 11;
    rbx44 = gb6b;
    *r9_25 = rbx44[rsi42] >> reinterpret_cast<signed char>(9 - *reinterpret_cast<signed char*>(&ebp43)) << 3;
    rcx45 = gb7d;
    *rcx45 = *reinterpret_cast<int32_t*>(&rdx13);
    rcx46 = gb86;
    *rcx46 = r14d24;
    rcx47 = gb90;
    *rcx47 = *reinterpret_cast<int32_t*>(&r13_29);
    rcx48 = gb9a;
    *rcx48 = eax34;
    edx49 = *reinterpret_cast<int32_t*>(&rdx13) + *reinterpret_cast<int32_t*>(&r13_29);
    rcx50 = gba6;
    *rcx50 = edx49;
    if (*reinterpret_cast<int32_t*>(&r13_29) == printf) {
        rcx51 = gc05;
        do {
            rsi52 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rcx51[r11_40]));
            r9_53 = (rsi52 << 8) - rsi52 >> 8;
            rcx51[r11_40] = *reinterpret_cast<int32_t*>(&r9_53);
            ++r11_40;
        } while (r11_40 != 6);
    } else {
        rcx54 = *reinterpret_cast<int32_t*>(&r13_29);
        *reinterpret_cast<int32_t*>(&rsi55) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi55) + 4) = reinterpret_cast<int32_t>(printf);
        r9_56 = *reinterpret_cast<int32_t**>(&gbb9);
        r11_57 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&gbb9) + 7);
        do {
            r15d58 = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<unsigned char*>(&r15d58) = reinterpret_cast<uint1_t>(r9_56[rsi55] * rcx54 >= reinterpret_cast<int64_t>(printf));
            *reinterpret_cast<int32_t*>(&r15_59) = r15d58 << 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_59) + 4) = reinterpret_cast<int32_t>(printf);
            rbx60 = reinterpret_cast<uint64_t>(static_cast<int64_t>(r11_57[rsi55]));
            r11_57[rsi55] = static_cast<int32_t>(r15_59 + ((rbx60 << 8) - rbx60 >> 8)) - 0x80;
            ++rsi55;
        } while (rsi55 != 6);
    }
    rcx61 = gc36;
    r9_62 = *rcx61;
    rsi63 = r8_17 * 4;
    r11_64 = edx49;
    r8_65 = -rsi63;
    rbp66 = (r8_17 << 8) - r8_17 >> 8;
    ebp67 = *reinterpret_cast<int32_t*>(&rbp66) - 0xc0;
    sf68 = r9_62 * r11_64 < reinterpret_cast<int64_t>(printf);
    if (sf68) {
        r8_65 = rsi63;
    }
    rsi69 = gc79;
    r15_70 = *rsi69;
    *rsi69 = *reinterpret_cast<int32_t*>(&r9_62);
    if (!sf68) {
        ebp67 = static_cast<int32_t>(rbp66 + 0xc0);
    }
    r8_71 = r8_65 >> 7;
    rsi72 = (r12_20 << 7) - r12_20 >> 7;
    r9d73 = 0x80;
    if (r15_70 * r11_64 < reinterpret_cast<int64_t>(printf)) {
        r9d73 = 0xffffff80;
    }
    r9d74 = r9d73 + *reinterpret_cast<int32_t*>(&rsi72) + *reinterpret_cast<int32_t*>(&r8_71);
    esi75 = 0x3000;
    if (r9d74 < 0x3000) {
        esi75 = r9d74;
    }
    r8d76 = 0xffffd000;
    if (esi75 >= 0xffffd001) {
        r8d76 = esi75;
    }
    rsi77 = gcd8;
    *rsi77 = r8d76;
    esi78 = 0x3c00 - r8d76;
    r8d79 = r8d76 - 0x3c00;
    if (ebp67 < esi78) {
        esi78 = ebp67;
    }
    if (esi78 <= r8d79) {
        esi78 = r8d79;
    }
    r8_80 = gcfd;
    *r8_80 = esi78;
    rsi81 = gd07;
    *rsi81 = *reinterpret_cast<int32_t*>(&r10_15);
    rsi82 = gd11;
    __asm__("movups xmm0, [rsi+0x4]");
    __asm__("movups [rsi+0x8], xmm0");
    r8_83 = v10;
    rsi82->f4 = *reinterpret_cast<int32_t*>(&r8_83);
    rsi82->f0 = *reinterpret_cast<int32_t*>(&r13_29);
    r14d84 = r14d24 + *reinterpret_cast<int32_t*>(&r13_29);
    rsi85 = gd2f;
    *rsi85 = r14d84;
    rsi86 = gd39;
    *rsi86 = r14d84;
    *rcx61 = edx49;
    rcx87 = gd45;
    rdx88 = gd4f;
    r9_89 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx88->f0));
    rsi90 = rcx87->f0 * r9_89;
    r8d91 = 1;
    do {
        rcx87 = reinterpret_cast<struct s6*>(&rcx87->f4);
        rdx88 = reinterpret_cast<struct s7*>(&rdx88->f4);
        rsi90 = rsi90 + rdx88->f4 * reinterpret_cast<uint64_t>(static_cast<int64_t>(rcx87->f4));
        ++r8d91;
    } while (r8d91 != 6);
    rsi92 = rsi90 >> 14;
    rcx93 = gd8b;
    r11_94 = *rcx93;
    rcx95 = gd95;
    r10_96 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*rcx95));
    rcx97 = gd9f;
    rdx98 = gda9;
    r13_99 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*rdx98));
    rdx100 = r11_94 * r10_96;
    rdx101 = rdx100 + rdx100 + *rcx97 * r13_99 * 2 >> 15;
    rcx102 = gdc9;
    *rcx102 = *reinterpret_cast<int32_t*>(&rdx101);
    edx103 = *reinterpret_cast<int32_t*>(&rdx101) + *reinterpret_cast<int32_t*>(&rsi92);
    rbp104 = gdd4;
    r8_105 = edi4;
    rdi106 = gde2;
    rdi107 = rdi106[r8_105] * reinterpret_cast<uint64_t>(static_cast<int64_t>(*rbp104)) >> 15;
    rcx108 = gdf5;
    rbx109 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*rcx108)));
    r12_110 = (rbx109 << 7) - rbx109 >> 7;
    rbx111 = ge0d;
    r12d112 = *reinterpret_cast<int32_t*>(&r12_110) + rbx111[r8_105];
    *reinterpret_cast<uint32_t*>(&r8_113) = reinterpret_cast<uint32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_113) + 4) = reinterpret_cast<int32_t>(printf);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(r12d112) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(r12d112 == printf)) {
        r12d112 = reinterpret_cast<uint32_t>(printf);
    }
    ebx114 = 0x5800;
    if (r12d112 < 0x5800) {
        ebx114 = r12d112;
    }
    *rcx108 = ebx114;
    *reinterpret_cast<uint32_t*>(&rcx115) = ebx114 >> 6 & 31;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx115) + 4) = reinterpret_cast<int32_t>(printf);
    r14_116 = ge3c;
    ebx117 = ebx114 >> 11;
    *rbp104 = r14_116[rcx115] >> reinterpret_cast<signed char>(11 - *reinterpret_cast<signed char*>(&ebx117)) << 3;
    rcx118 = ge59;
    *rcx118 = *reinterpret_cast<int32_t*>(&rsi92);
    rcx119 = ge62;
    *rcx119 = edx103;
    rcx120 = ge6b;
    *rcx120 = *reinterpret_cast<int32_t*>(&rdi107);
    esi121 = *reinterpret_cast<int32_t*>(&rsi92) + *reinterpret_cast<int32_t*>(&rdi107);
    rcx122 = ge76;
    *rcx122 = esi121;
    if (*reinterpret_cast<int32_t*>(&rdi107) == printf) {
        rcx123 = ged5;
        do {
            rbx124 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rcx123[r8_113]));
            r12_125 = (rbx124 << 8) - rbx124 >> 8;
            rcx123[r8_113] = *reinterpret_cast<int32_t*>(&r12_125);
            ++r8_113;
        } while (r8_113 != 6);
    } else {
        rcx126 = *reinterpret_cast<int32_t*>(&rdi107);
        *reinterpret_cast<int32_t*>(&r8_127) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_127) + 4) = reinterpret_cast<int32_t>(printf);
        rbp128 = *reinterpret_cast<int32_t**>(&ge89);
        r12_129 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&ge89) + 7);
        do {
            r14d130 = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<unsigned char*>(&r14d130) = reinterpret_cast<uint1_t>(rbp128[r8_127] * rcx126 >= reinterpret_cast<int64_t>(printf));
            r15_131 = reinterpret_cast<uint64_t>(static_cast<int64_t>(r12_129[r8_127]));
            rbx132 = (r15_131 << 8) - r15_131 >> 8;
            r12_129[r8_127] = *reinterpret_cast<int32_t*>(&rbx132) + (r14d130 << 8) - 0x80;
            ++r8_127;
        } while (r8_127 != 6);
    }
    rcx133 = gf06;
    r8_134 = *rcx133;
    r10_135 = r10_96 * 4;
    rbx136 = esi121;
    r12_137 = -r10_135;
    rbp138 = (r10_96 << 8) - r10_96 >> 8;
    ebp139 = *reinterpret_cast<int32_t*>(&rbp138) - 0xc0;
    sf140 = r8_134 * rbx136 < reinterpret_cast<int64_t>(printf);
    if (sf140) {
        r12_137 = r10_135;
    }
    if (!sf140) {
        ebp139 = static_cast<int32_t>(rbp138 + 0xc0);
    }
    r10_141 = gf4e;
    r12_142 = r12_137 >> 7;
    rbx143 = (r13_99 << 7) - r13_99 >> 7;
    r14d144 = 0x80;
    if (*r10_141 * rbx136 < reinterpret_cast<int64_t>(printf)) {
        r14d144 = 0xffffff80;
    }
    r14d145 = r14d144 + *reinterpret_cast<int32_t*>(&rbx143) + *reinterpret_cast<int32_t*>(&r12_142);
    ebx146 = 0x3000;
    if (r14d145 < 0x3000) {
        ebx146 = r14d145;
    }
    r14d147 = 0xffffd000;
    if (ebx146 >= 0xffffd001) {
        r14d147 = ebx146;
    }
    *r10_141 = *reinterpret_cast<int32_t*>(&r8_134);
    r8_148 = gfaa;
    *r8_148 = r14d147;
    r8d149 = 0x3c00 - r14d147;
    r14d150 = r14d147 - 0x3c00;
    if (ebp139 < r8d149) {
        r8d149 = ebp139;
    }
    if (r8d149 <= r14d150) {
        r8d149 = r14d150;
    }
    r10_151 = gfd2;
    *r10_151 = r8d149;
    r8_152 = gfdc;
    __asm__("movups xmm0, [r8+0x4]");
    __asm__("movups [r8+0x8], xmm0");
    r8_152->f4 = *reinterpret_cast<int32_t*>(&r9_89);
    r8_152->f0 = *reinterpret_cast<int32_t*>(&rdi107);
    edx153 = edx103 + *reinterpret_cast<int32_t*>(&rdi107);
    rdi154 = gff6;
    *rdi154 = edx153;
    rdi155 = gfff;
    *rdi155 = *reinterpret_cast<int32_t*>(&r11_94);
    rdi156 = g1009;
    *rdi156 = edx153;
    *rcx133 = esi121;
    ecx157 = eax34 - edx153;
    rsi158 = g1018;
    *rsi158 = ecx157;
    edx159 = edx153 + eax34;
    rax160 = g1023;
    *rax160 = edx159;
    rax161 = static_cast<int64_t>(ecx157) << 2;
    rsi162 = rax161 + rax161 * 2;
    rax163 = edx159 * -44;
    rdi164 = g103e;
    rdi165 = reinterpret_cast<struct s10*>(&rdi164->f8);
    r8d166 = reinterpret_cast<int32_t>(printf);
    r9_167 = *reinterpret_cast<int32_t**>(&g104c);
    r10_168 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&g104c) + 7);
    do {
        ++r9_167;
        rsi162 = rsi162 + rdi165->f0 * static_cast<int64_t>(*r9_167);
        ++r10_168;
        ++rdi165;
        rax163 = rax163 + rdi165->f4 * static_cast<int64_t>(*r10_168);
        ++r8d166;
    } while (r8d166 != 10);
    rdi169 = g1097;
    rsi170 = g10b3;
    r8_171 = *reinterpret_cast<int32_t*>(&rsi170->f24);
    r9_172 = reinterpret_cast<uint64_t>(0x3fffffffffd4 * *reinterpret_cast<int32_t*>(&rdi169->f24) + rsi162) >> 14;
    r8_173 = g10ca;
    *r8_173 = *reinterpret_cast<int32_t*>(&r9_172);
    rax174 = reinterpret_cast<uint64_t>(rax163 + (r8_171 + r8_171 * 2) * 4) >> 14;
    r8_175 = g10d8;
    *r8_175 = *reinterpret_cast<int32_t*>(&rax174);
    __asm__("movaps xmm0, [rdi]");
    __asm__("movaps xmm1, [rdi+0x10]");
    __asm__("movups [rdi+0x4], xmm0");
    __asm__("movups [rdi+0x14], xmm1");
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rdi169) + 36) = rdi169->f20;
    __asm__("movaps xmm0, [rsi]");
    __asm__("movaps xmm1, [rsi+0x10]");
    __asm__("movups [rsi+0x4], xmm0");
    __asm__("movups [rsi+0x14], xmm1");
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsi170) + 36) = rsi170->f20;
    rdi169->f0 = ecx157;
    rsi170->f0 = edx159;
    return;
}

int32_t* g1127 = reinterpret_cast<int32_t*>(0x8b480000002000c7);

int32_t* g1134 = reinterpret_cast<int32_t*>(0x8b480000002000c7);

int32_t* g1141 = reinterpret_cast<int32_t*>(0x8b480000000800c7);

int32_t* g114e = reinterpret_cast<int32_t*>(0x8b480000000800c7);

int32_t* g115b = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1168 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1175 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1182 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g118f = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g119c = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g11a9 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g11b6 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g11c3 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g11d0 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g11dd = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g11ea = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g11f7 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1204 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1211 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g121e = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g122b = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1238 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1245 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1252 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g125f = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g126c = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1279 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1286 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1293 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g12a0 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g12ad = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g12ba = reinterpret_cast<int32_t*>(0x570f0000000000c7);

struct s13 {
    signed char[16] pad16;
    int64_t f10;
};

struct s13* g12ca = reinterpret_cast<struct s13*>(0x1040c74800290f);

struct s14 {
    signed char[16] pad16;
    int64_t f10;
};

struct s14* g12dc = reinterpret_cast<struct s14*>(0x1040c74800290f);

struct s15 {
    signed char[16] pad16;
    int64_t f10;
};

struct s15* g12ee = reinterpret_cast<struct s15*>(0x1040c74800290f);

struct s16 {
    signed char[16] pad16;
    int64_t f10;
};

struct s16* g1300 = reinterpret_cast<struct s16*>(0x1040c74800290f);

struct s17 {
    signed char[16] pad16;
    int64_t f10;
};

struct s17* g1312 = reinterpret_cast<struct s17*>(0x1040c74800290f);

struct s18 {
    signed char[16] pad16;
    int64_t f10;
};

struct s18* g1324 = reinterpret_cast<struct s18*>(0x1040c74800290f);

struct s19 {
    signed char[16] pad16;
    int64_t f10;
};

struct s19* g1336 = reinterpret_cast<struct s19*>(0x1040c74800290f);

struct s20 {
    signed char[16] pad16;
    int64_t f10;
};

struct s20* g1348 = reinterpret_cast<struct s20*>(0x1040c74800290f);

int64_t g138a = 0x1040290f1c40110f;

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
    struct s13* rax33;
    struct s14* rax34;
    struct s15* rax35;
    struct s16* rax36;
    struct s17* rax37;
    struct s18* rax38;
    struct s19* rax39;
    struct s20* rax40;
    int64_t rax41;

    rax1 = g1127;
    *rax1 = 32;
    rax2 = g1134;
    *rax2 = 32;
    rax3 = g1141;
    *rax3 = 8;
    rax4 = g114e;
    *rax4 = 8;
    rax5 = g115b;
    *rax5 = reinterpret_cast<int32_t>(printf);
    rax6 = g1168;
    *rax6 = reinterpret_cast<int32_t>(printf);
    rax7 = g1175;
    *rax7 = reinterpret_cast<int32_t>(printf);
    rax8 = g1182;
    *rax8 = reinterpret_cast<int32_t>(printf);
    rax9 = g118f;
    *rax9 = reinterpret_cast<int32_t>(printf);
    rax10 = g119c;
    *rax10 = reinterpret_cast<int32_t>(printf);
    rax11 = g11a9;
    *rax11 = reinterpret_cast<int32_t>(printf);
    rax12 = g11b6;
    *rax12 = reinterpret_cast<int32_t>(printf);
    rax13 = g11c3;
    *rax13 = reinterpret_cast<int32_t>(printf);
    rax14 = g11d0;
    *rax14 = reinterpret_cast<int32_t>(printf);
    rax15 = g11dd;
    *rax15 = reinterpret_cast<int32_t>(printf);
    rax16 = g11ea;
    *rax16 = reinterpret_cast<int32_t>(printf);
    rax17 = g11f7;
    *rax17 = reinterpret_cast<int32_t>(printf);
    rax18 = g1204;
    *rax18 = reinterpret_cast<int32_t>(printf);
    rax19 = g1211;
    *rax19 = reinterpret_cast<int32_t>(printf);
    rax20 = g121e;
    *rax20 = reinterpret_cast<int32_t>(printf);
    rax21 = g122b;
    *rax21 = reinterpret_cast<int32_t>(printf);
    rax22 = g1238;
    *rax22 = reinterpret_cast<int32_t>(printf);
    rax23 = g1245;
    *rax23 = reinterpret_cast<int32_t>(printf);
    rax24 = g1252;
    *rax24 = reinterpret_cast<int32_t>(printf);
    rax25 = g125f;
    *rax25 = reinterpret_cast<int32_t>(printf);
    rax26 = g126c;
    *rax26 = reinterpret_cast<int32_t>(printf);
    rax27 = g1279;
    *rax27 = reinterpret_cast<int32_t>(printf);
    rax28 = g1286;
    *rax28 = reinterpret_cast<int32_t>(printf);
    rax29 = g1293;
    *rax29 = reinterpret_cast<int32_t>(printf);
    rax30 = g12a0;
    *rax30 = reinterpret_cast<int32_t>(printf);
    rax31 = g12ad;
    *rax31 = reinterpret_cast<int32_t>(printf);
    rax32 = g12ba;
    *rax32 = reinterpret_cast<int32_t>(printf);
    __asm__("xorps xmm0, xmm0");
    rax33 = g12ca;
    __asm__("movaps [rax], xmm0");
    rax33->f10 = reinterpret_cast<int64_t>(printf);
    rax34 = g12dc;
    __asm__("movaps [rax], xmm0");
    rax34->f10 = reinterpret_cast<int64_t>(printf);
    rax35 = g12ee;
    __asm__("movaps [rax], xmm0");
    rax35->f10 = reinterpret_cast<int64_t>(printf);
    rax36 = g1300;
    __asm__("movaps [rax], xmm0");
    rax36->f10 = reinterpret_cast<int64_t>(printf);
    rax37 = g1312;
    __asm__("movaps [rax], xmm0");
    rax37->f10 = reinterpret_cast<int64_t>(printf);
    rax38 = g1324;
    __asm__("movaps [rax], xmm0");
    rax38->f10 = reinterpret_cast<int64_t>(printf);
    rax39 = g1336;
    __asm__("movaps [rax], xmm0");
    rax39->f10 = reinterpret_cast<int64_t>(printf);
    rax40 = g1348;
    __asm__("movaps [rax], xmm0");
    rax40->f10 = reinterpret_cast<int64_t>(printf);
    __asm__("movaps [rax+0x50], xmm0");
    __asm__("movaps [rax+0x40], xmm0");
    __asm__("movaps [rax+0x30], xmm0");
    __asm__("movaps [rax+0x20], xmm0");
    __asm__("movaps [rax+0x10], xmm0");
    __asm__("movaps [rax], xmm0");
    __asm__("movups [rax+0x1c], xmm0");
    __asm__("movaps [rax+0x10], xmm0");
    __asm__("movaps [rax], xmm0");
    rax41 = g138a;
    __asm__("movups [rax+0x1c], xmm0");
    __asm__("movaps [rax+0x10], xmm0");
    __asm__("movaps [rax], xmm0");
    return rax41;
}

void submain() {
    fun_16d6(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 16);
}

int32_t* g7c3 = reinterpret_cast<int32_t*>(0x841f0f2e66666666);

int32_t* g807 = reinterpret_cast<int32_t*>(0x441f0fc381048b);

int32_t* g7fc = reinterpret_cast<int32_t*>(0xd8b48c381048b);

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
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
    if (__intrinsic()) {
        *reinterpret_cast<int32_t*>(&rcx3) = edi;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
    }
    rdx4 = esi;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
    rsi6 = g7c3;
    do {
        if (rsi6[rax5] * rdx4 >> 15 >= rcx3) 
            break;
        ++rax5;
    } while (rax5 != 30);
    goto addr_7ea_6;
    addr_7ef_7:
    *reinterpret_cast<int32_t*>(&rax7) = *reinterpret_cast<int32_t*>(&rax5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(printf);
    if (edi >= reinterpret_cast<int32_t>(printf)) {
        rcx8 = g807;
        *reinterpret_cast<int32_t*>(&rax9) = rcx8[rax7];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(printf);
        return rax9;
    } else {
        rcx10 = g7fc;
        *reinterpret_cast<int32_t*>(&rax11) = rcx10[rax7];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(printf);
        return rax11;
    }
    addr_7ea_6:
    *reinterpret_cast<int32_t*>(&rax5) = 30;
    goto addr_7ef_7;
}

uint32_t* g82e = reinterpret_cast<uint32_t*>(0xfc985d231820c03);

int64_t logscl(int32_t edi, int32_t esi) {
    uint64_t rax3;
    uint64_t rcx4;
    uint32_t* rdx5;
    uint32_t ecx6;
    uint32_t edx7;
    int64_t rax8;

    rax3 = reinterpret_cast<uint64_t>(static_cast<int64_t>(esi));
    rcx4 = (rax3 << 7) - rax3 >> 7;
    rdx5 = g82e;
    ecx6 = *reinterpret_cast<int32_t*>(&rcx4) + rdx5[edi >> 2];
    edx7 = reinterpret_cast<uint32_t>(printf);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(ecx6) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(ecx6 == printf))) {
        edx7 = ecx6;
    }
    *reinterpret_cast<uint32_t*>(&rax8) = 0x4800;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(printf);
    if (edx7 < 0x4800) {
        *reinterpret_cast<uint32_t*>(&rax8) = edx7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(printf);
    }
    return rax8;
}

struct s21 {
    int32_t f0;
    int32_t f4;
    int64_t f8;
    int64_t fc;
    int32_t f10;
    int32_t f14;
};

void upzero(int32_t edi, struct s21* rsi, int32_t* rdx) {
    int64_t rax4;
    uint64_t rcx5;
    uint64_t r8_6;
    int64_t rax7;
    int64_t rcx8;
    int32_t r9d9;
    int64_t r9_10;
    uint64_t r8_11;
    int32_t rax12;

    if (edi == printf) {
        *reinterpret_cast<int32_t*>(&rax4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            rcx5 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx[rax4]));
            r8_6 = (rcx5 << 8) - rcx5 >> 8;
            rdx[rax4] = *reinterpret_cast<int32_t*>(&r8_6);
            ++rax4;
        } while (rax4 != 6);
    } else {
        rax7 = edi;
        *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            r9d9 = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<unsigned char*>(&r9d9) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi) + rcx8 * 4) * rax7 >= reinterpret_cast<int64_t>(printf));
            *reinterpret_cast<int32_t*>(&r9_10) = r9d9 << 8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_10) + 4) = reinterpret_cast<int32_t>(printf);
            r8_11 = reinterpret_cast<uint64_t>(static_cast<int64_t>(rdx[rcx8]));
            rdx[rcx8] = static_cast<int32_t>(r9_10 + ((r8_11 << 8) - r8_11 >> 8)) - 0x80;
            ++rcx8;
        } while (rcx8 != 6);
    }
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi) + 20) = *reinterpret_cast<int32_t*>(&rsi->fc);
    rax12 = rsi->f0;
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsi) + 12) = rsi->f8;
    rsi->f4 = rax12;
    rsi->f0 = edi;
    return;
}

int32_t* g13b0 = reinterpret_cast<int32_t*>(0x8b480000002000c7);

int32_t* g13bd = reinterpret_cast<int32_t*>(0x8b480000002000c7);

int32_t* g13ca = reinterpret_cast<int32_t*>(0x8b480000000800c7);

int32_t* g13d7 = reinterpret_cast<int32_t*>(0x8b480000000800c7);

int32_t* g13e4 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g13f1 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g13fe = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g140b = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1418 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1425 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1432 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g143f = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g144c = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1459 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1466 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1473 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1480 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g148d = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g149a = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g14a7 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g14b4 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g14c1 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g14ce = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g14db = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g14e8 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g14f5 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1502 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g150f = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g151c = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1529 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1536 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1543 = reinterpret_cast<int32_t*>(0x570f0000000000c7);

struct s22 {
    signed char[16] pad16;
    int64_t f10;
};

struct s22* g1553 = reinterpret_cast<struct s22*>(0x1040c74800290f);

struct s23 {
    signed char[16] pad16;
    int64_t f10;
};

struct s23* g1565 = reinterpret_cast<struct s23*>(0x1040c74800290f);

struct s24 {
    signed char[16] pad16;
    int64_t f10;
};

struct s24* g1577 = reinterpret_cast<struct s24*>(0x1040c74800290f);

struct s25 {
    signed char[16] pad16;
    int64_t f10;
};

struct s25* g1589 = reinterpret_cast<struct s25*>(0x1040c74800290f);

struct s26 {
    signed char[16] pad16;
    int64_t f10;
};

struct s26* g159b = reinterpret_cast<struct s26*>(0x1040c74800290f);

struct s27 {
    signed char[16] pad16;
    int64_t f10;
};

struct s27* g15ad = reinterpret_cast<struct s27*>(0x1040c74800290f);

struct s28 {
    signed char[16] pad16;
    int64_t f10;
};

struct s28* g15bf = reinterpret_cast<struct s28*>(0x1040c74800290f);

struct s29 {
    signed char[16] pad16;
    int64_t f10;
};

struct s29* g15d1 = reinterpret_cast<struct s29*>(0x1040c74800290f);

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
    struct s22* rax33;
    struct s23* rax34;
    struct s24* rax35;
    struct s25* rax36;
    struct s26* rax37;
    struct s27* rax38;
    struct s28* rax39;
    struct s29* rax40;

    rax1 = g13b0;
    *rax1 = 32;
    rax2 = g13bd;
    *rax2 = 32;
    rax3 = g13ca;
    *rax3 = 8;
    rax4 = g13d7;
    *rax4 = 8;
    rax5 = g13e4;
    *rax5 = reinterpret_cast<int32_t>(printf);
    rax6 = g13f1;
    *rax6 = reinterpret_cast<int32_t>(printf);
    rax7 = g13fe;
    *rax7 = reinterpret_cast<int32_t>(printf);
    rax8 = g140b;
    *rax8 = reinterpret_cast<int32_t>(printf);
    rax9 = g1418;
    *rax9 = reinterpret_cast<int32_t>(printf);
    rax10 = g1425;
    *rax10 = reinterpret_cast<int32_t>(printf);
    rax11 = g1432;
    *rax11 = reinterpret_cast<int32_t>(printf);
    rax12 = g143f;
    *rax12 = reinterpret_cast<int32_t>(printf);
    rax13 = g144c;
    *rax13 = reinterpret_cast<int32_t>(printf);
    rax14 = g1459;
    *rax14 = reinterpret_cast<int32_t>(printf);
    rax15 = g1466;
    *rax15 = reinterpret_cast<int32_t>(printf);
    rax16 = g1473;
    *rax16 = reinterpret_cast<int32_t>(printf);
    rax17 = g1480;
    *rax17 = reinterpret_cast<int32_t>(printf);
    rax18 = g148d;
    *rax18 = reinterpret_cast<int32_t>(printf);
    rax19 = g149a;
    *rax19 = reinterpret_cast<int32_t>(printf);
    rax20 = g14a7;
    *rax20 = reinterpret_cast<int32_t>(printf);
    rax21 = g14b4;
    *rax21 = reinterpret_cast<int32_t>(printf);
    rax22 = g14c1;
    *rax22 = reinterpret_cast<int32_t>(printf);
    rax23 = g14ce;
    *rax23 = reinterpret_cast<int32_t>(printf);
    rax24 = g14db;
    *rax24 = reinterpret_cast<int32_t>(printf);
    rax25 = g14e8;
    *rax25 = reinterpret_cast<int32_t>(printf);
    rax26 = g14f5;
    *rax26 = reinterpret_cast<int32_t>(printf);
    rax27 = g1502;
    *rax27 = reinterpret_cast<int32_t>(printf);
    rax28 = g150f;
    *rax28 = reinterpret_cast<int32_t>(printf);
    rax29 = g151c;
    *rax29 = reinterpret_cast<int32_t>(printf);
    rax30 = g1529;
    *rax30 = reinterpret_cast<int32_t>(printf);
    rax31 = g1536;
    *rax31 = reinterpret_cast<int32_t>(printf);
    rax32 = g1543;
    *rax32 = reinterpret_cast<int32_t>(printf);
    __asm__("xorps xmm0, xmm0");
    rax33 = g1553;
    __asm__("movaps [rax], xmm0");
    rax33->f10 = reinterpret_cast<int64_t>(printf);
    rax34 = g1565;
    __asm__("movaps [rax], xmm0");
    rax34->f10 = reinterpret_cast<int64_t>(printf);
    rax35 = g1577;
    __asm__("movaps [rax], xmm0");
    rax35->f10 = reinterpret_cast<int64_t>(printf);
    rax36 = g1589;
    __asm__("movaps [rax], xmm0");
    rax36->f10 = reinterpret_cast<int64_t>(printf);
    rax37 = g159b;
    __asm__("movaps [rax], xmm0");
    rax37->f10 = reinterpret_cast<int64_t>(printf);
    rax38 = g15ad;
    __asm__("movaps [rax], xmm0");
    rax38->f10 = reinterpret_cast<int64_t>(printf);
    rax39 = g15bf;
    __asm__("movaps [rax], xmm0");
    rax39->f10 = reinterpret_cast<int64_t>(printf);
    rax40 = g15d1;
    __asm__("movaps [rax], xmm0");
    rax40->f10 = reinterpret_cast<int64_t>(printf);
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

