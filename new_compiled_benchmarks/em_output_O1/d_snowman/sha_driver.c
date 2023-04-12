
void sha_transform();

struct s0 {
    signed char[48] pad48;
    int64_t f30;
};

void printf();

struct s1 {
    signed char[56] pad56;
    int32_t f38;
};

struct s2 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s3 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
};

struct s3* g510 = reinterpret_cast<struct s3*>(0x708b04788b008b44);

void fun_1f2() {
    struct s0* r14_1;
    struct s1* r14_2;
    int32_t ebp3;
    struct s2* r14_4;
    int32_t ebx5;
    void* rsp6;
    int64_t rax7;
    struct s3* rax8;
    uint32_t r8d9;
    uint32_t edi10;
    uint32_t esi11;
    uint32_t edx12;
    uint32_t ecx13;
    int64_t rbx14;
    uint32_t r15d15;
    uint32_t r13d16;
    uint32_t r9d17;
    uint32_t r12d18;
    uint32_t r10d19;
    uint32_t r11d20;
    uint32_t r14d21;
    uint32_t ebp22;
    int64_t r13_23;
    uint32_t ebx24;
    uint32_t r12d25;
    uint32_t r15d26;
    int64_t r13_27;
    uint32_t r11d28;
    uint32_t r14d29;
    uint32_t ebp30;
    int64_t r15_31;
    int64_t r9_32;
    int64_t r15_33;
    uint32_t r13d34;
    uint32_t ebx35;
    uint32_t r12d36;
    int64_t v37;

    sha_transform();
    __asm__("xorps xmm0, xmm0");
    __asm__("movaps [r14+0x20], xmm0");
    __asm__("movaps [r14+0x10], xmm0");
    __asm__("movaps [r14], xmm0");
    r14_1->f30 = reinterpret_cast<int64_t>(printf);
    r14_2->f38 = ebp3;
    r14_4->f3c = ebx5;
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xc8);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps xmm2, [rax+0x20]");
    __asm__("movaps xmm3, [rax+0x30]");
    __asm__("movaps [rsp-0x50], xmm3");
    __asm__("movaps [rsp-0x60], xmm2");
    __asm__("movaps [rsp-0x70], xmm1");
    __asm__("movaps [rsp-0x80], xmm0");
    *reinterpret_cast<int32_t*>(&rax7) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp6) + rax7 * 4 - 0x80) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp6) + rax7 * 4 - 0xa0) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp6) + rax7 * 4 - 0x8c) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp6) + rax7 * 4 - 0xb8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp6) + rax7 * 4 - 0xc0);
        ++rax7;
    } while (rax7 != 80);
    rax8 = g510;
    r8d9 = rax8->f0;
    edi10 = rax8->f4;
    esi11 = rax8->f8;
    edx12 = rax8->fc;
    ecx13 = rax8->f10;
    *reinterpret_cast<int32_t*>(&rbx14) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx14) + 4) = reinterpret_cast<int32_t>(printf);
    r15d15 = ecx13;
    r13d16 = edx12;
    r9d17 = esi11;
    r12d18 = edi10;
    r10d19 = r8d9;
    do {
        r11d20 = r10d19;
        r14d21 = r9d17;
        ebp22 = r13d16;
        __asm__("rol r9d, 0x5");
        r9d17 = r12d18;
        r10d19 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + rbx14 * 4 - 0x80) + ((~r12d18 & r13d16) + r15d15 + ((r14d21 & r12d18) + r10d19)) + 0x5a827999;
        __asm__("rol r9d, 0x1e");
        ++rbx14;
        r15d15 = r13d16;
        r13d16 = r14d21;
        r12d18 = r11d20;
    } while (rbx14 != 20);
    *reinterpret_cast<int32_t*>(&r13_23) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_23) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ebx24 = r10d19;
        r12d25 = r9d17;
        __asm__("rol r9d, 0x5");
        r15d26 = r14d21;
        r10d19 = (r12d25 ^ r11d20 ^ r14d21) + r10d19 + ebp22 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + r13_23 * 4 - 0x80) + 0x6ed9eba1;
        r9d17 = r11d20;
        __asm__("rol r9d, 0x1e");
        ++r13_23;
        ebp22 = r14d21;
        r14d21 = r12d25;
        r11d20 = ebx24;
    } while (r13_23 != 40);
    *reinterpret_cast<int32_t*>(&r13_27) = 40;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_27) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r11d28 = r10d19;
        r14d29 = r9d17;
        ebp30 = r12d25;
        __asm__("rol r9d, 0x5");
        *reinterpret_cast<uint32_t*>(&r15_31) = (r12d25 & r14d29 | (r12d25 | r14d29) & ebx24) + (r10d19 + r15d26);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_31) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r9_32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + r13_27 * 4 - 0x80);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_32) + 4) = reinterpret_cast<int32_t>(printf);
        r10d19 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r9_32 + r15_31) - 0x70e44324);
        r9d17 = ebx24;
        __asm__("rol r9d, 0x1e");
        ++r13_27;
        r15d26 = r12d25;
        r12d25 = r14d29;
        ebx24 = r11d28;
    } while (r13_27 != 60);
    *reinterpret_cast<int32_t*>(&r15_33) = 60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_33) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r13d34 = r10d19;
        ebx35 = r9d17;
        __asm__("rol r9d, 0x5");
        r12d36 = r14d29;
        r10d19 = (ebx35 ^ r11d28 ^ r14d29) + r10d19 + ebp30 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + r15_33 * 4 - 0x80) - 0x359d3e2a;
        r9d17 = r11d28;
        __asm__("rol r9d, 0x1e");
        ++r15_33;
        ebp30 = r14d29;
        r14d29 = ebx35;
        r11d28 = r13d34;
    } while (r15_33 != 80);
    rax8->f0 = r10d19 + r8d9;
    rax8->f4 = r13d34 + edi10;
    rax8->f8 = r9d17 + esi11;
    rax8->fc = ebx35 + edx12;
    rax8->f10 = r12d36 + ecx13;
    goto v37;
}

struct s4 {
    signed char[56] pad56;
    int32_t f38;
};

struct s5 {
    signed char[60] pad60;
    int32_t f3c;
};

void fun_250() {
    struct s4* r14_1;
    int32_t ebp2;
    struct s5* r14_3;
    int32_t ebx4;
    void* rsp5;
    int64_t rax6;
    struct s3* rax7;
    uint32_t r8d8;
    uint32_t edi9;
    uint32_t esi10;
    uint32_t edx11;
    uint32_t ecx12;
    int64_t rbx13;
    uint32_t r15d14;
    uint32_t r13d15;
    uint32_t r9d16;
    uint32_t r12d17;
    uint32_t r10d18;
    uint32_t r11d19;
    uint32_t r14d20;
    uint32_t ebp21;
    int64_t r13_22;
    uint32_t ebx23;
    uint32_t r12d24;
    uint32_t r15d25;
    int64_t r13_26;
    uint32_t r11d27;
    uint32_t r14d28;
    uint32_t ebp29;
    int64_t r15_30;
    int64_t r9_31;
    int64_t r15_32;
    uint32_t r13d33;
    uint32_t ebx34;
    uint32_t r12d35;
    int64_t v36;

    r14_1->f38 = ebp2;
    r14_3->f3c = ebx4;
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xc8);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps xmm2, [rax+0x20]");
    __asm__("movaps xmm3, [rax+0x30]");
    __asm__("movaps [rsp-0x50], xmm3");
    __asm__("movaps [rsp-0x60], xmm2");
    __asm__("movaps [rsp-0x70], xmm1");
    __asm__("movaps [rsp-0x80], xmm0");
    *reinterpret_cast<int32_t*>(&rax6) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0x80) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0xa0) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0x8c) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0xb8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0xc0);
        ++rax6;
    } while (rax6 != 80);
    rax7 = g510;
    r8d8 = rax7->f0;
    edi9 = rax7->f4;
    esi10 = rax7->f8;
    edx11 = rax7->fc;
    ecx12 = rax7->f10;
    *reinterpret_cast<int32_t*>(&rbx13) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx13) + 4) = reinterpret_cast<int32_t>(printf);
    r15d14 = ecx12;
    r13d15 = edx11;
    r9d16 = esi10;
    r12d17 = edi9;
    r10d18 = r8d8;
    do {
        r11d19 = r10d18;
        r14d20 = r9d16;
        ebp21 = r13d15;
        __asm__("rol r9d, 0x5");
        r9d16 = r12d17;
        r10d18 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + rbx13 * 4 - 0x80) + ((~r12d17 & r13d15) + r15d14 + ((r14d20 & r12d17) + r10d18)) + 0x5a827999;
        __asm__("rol r9d, 0x1e");
        ++rbx13;
        r15d14 = r13d15;
        r13d15 = r14d20;
        r12d17 = r11d19;
    } while (rbx13 != 20);
    *reinterpret_cast<int32_t*>(&r13_22) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_22) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ebx23 = r10d18;
        r12d24 = r9d16;
        __asm__("rol r9d, 0x5");
        r15d25 = r14d20;
        r10d18 = (r12d24 ^ r11d19 ^ r14d20) + r10d18 + ebp21 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + r13_22 * 4 - 0x80) + 0x6ed9eba1;
        r9d16 = r11d19;
        __asm__("rol r9d, 0x1e");
        ++r13_22;
        ebp21 = r14d20;
        r14d20 = r12d24;
        r11d19 = ebx23;
    } while (r13_22 != 40);
    *reinterpret_cast<int32_t*>(&r13_26) = 40;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_26) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r11d27 = r10d18;
        r14d28 = r9d16;
        ebp29 = r12d24;
        __asm__("rol r9d, 0x5");
        *reinterpret_cast<uint32_t*>(&r15_30) = (r12d24 & r14d28 | (r12d24 | r14d28) & ebx23) + (r10d18 + r15d25);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_30) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r9_31) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + r13_26 * 4 - 0x80);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_31) + 4) = reinterpret_cast<int32_t>(printf);
        r10d18 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r9_31 + r15_30) - 0x70e44324);
        r9d16 = ebx23;
        __asm__("rol r9d, 0x1e");
        ++r13_26;
        r15d25 = r12d24;
        r12d24 = r14d28;
        ebx23 = r11d27;
    } while (r13_26 != 60);
    *reinterpret_cast<int32_t*>(&r15_32) = 60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_32) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r13d33 = r10d18;
        ebx34 = r9d16;
        __asm__("rol r9d, 0x5");
        r12d35 = r14d28;
        r10d18 = (ebx34 ^ r11d27 ^ r14d28) + r10d18 + ebp29 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + r15_32 * 4 - 0x80) - 0x359d3e2a;
        r9d16 = r11d27;
        __asm__("rol r9d, 0x1e");
        ++r15_32;
        ebp29 = r14d28;
        r14d28 = ebx34;
        r11d27 = r13d33;
    } while (r15_32 != 80);
    rax7->f0 = r10d18 + r8d8;
    rax7->f4 = r13d33 + edi9;
    rax7->f8 = r9d16 + esi10;
    rax7->fc = ebx34 + edx11;
    rax7->f10 = r12d35 + ecx12;
    goto v36;
}

struct s6 {
    signed char[48] pad48;
    int64_t f30;
};

struct s7 {
    signed char[56] pad56;
    int32_t f38;
};

struct s8 {
    signed char[60] pad60;
    int32_t f3c;
};

void fun_330() {
    struct s6* r14_1;
    struct s7* r14_2;
    int32_t ebp3;
    struct s8* r14_4;
    int32_t ebx5;
    void* rsp6;
    int64_t rax7;
    struct s3* rax8;
    uint32_t r8d9;
    uint32_t edi10;
    uint32_t esi11;
    uint32_t edx12;
    uint32_t ecx13;
    int64_t rbx14;
    uint32_t r15d15;
    uint32_t r13d16;
    uint32_t r9d17;
    uint32_t r12d18;
    uint32_t r10d19;
    uint32_t r11d20;
    uint32_t r14d21;
    uint32_t ebp22;
    int64_t r13_23;
    uint32_t ebx24;
    uint32_t r12d25;
    uint32_t r15d26;
    int64_t r13_27;
    uint32_t r11d28;
    uint32_t r14d29;
    uint32_t ebp30;
    int64_t r15_31;
    int64_t r9_32;
    int64_t r15_33;
    uint32_t r13d34;
    uint32_t ebx35;
    uint32_t r12d36;
    int64_t v37;

    sha_transform();
    __asm__("xorps xmm0, xmm0");
    __asm__("movaps [r14+0x20], xmm0");
    __asm__("movaps [r14+0x10], xmm0");
    __asm__("movaps [r14], xmm0");
    r14_1->f30 = reinterpret_cast<int64_t>(printf);
    r14_2->f38 = ebp3;
    r14_4->f3c = ebx5;
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xc8);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps xmm2, [rax+0x20]");
    __asm__("movaps xmm3, [rax+0x30]");
    __asm__("movaps [rsp-0x50], xmm3");
    __asm__("movaps [rsp-0x60], xmm2");
    __asm__("movaps [rsp-0x70], xmm1");
    __asm__("movaps [rsp-0x80], xmm0");
    *reinterpret_cast<int32_t*>(&rax7) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp6) + rax7 * 4 - 0x80) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp6) + rax7 * 4 - 0xa0) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp6) + rax7 * 4 - 0x8c) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp6) + rax7 * 4 - 0xb8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp6) + rax7 * 4 - 0xc0);
        ++rax7;
    } while (rax7 != 80);
    rax8 = g510;
    r8d9 = rax8->f0;
    edi10 = rax8->f4;
    esi11 = rax8->f8;
    edx12 = rax8->fc;
    ecx13 = rax8->f10;
    *reinterpret_cast<int32_t*>(&rbx14) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx14) + 4) = reinterpret_cast<int32_t>(printf);
    r15d15 = ecx13;
    r13d16 = edx12;
    r9d17 = esi11;
    r12d18 = edi10;
    r10d19 = r8d9;
    do {
        r11d20 = r10d19;
        r14d21 = r9d17;
        ebp22 = r13d16;
        __asm__("rol r9d, 0x5");
        r9d17 = r12d18;
        r10d19 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + rbx14 * 4 - 0x80) + ((~r12d18 & r13d16) + r15d15 + ((r14d21 & r12d18) + r10d19)) + 0x5a827999;
        __asm__("rol r9d, 0x1e");
        ++rbx14;
        r15d15 = r13d16;
        r13d16 = r14d21;
        r12d18 = r11d20;
    } while (rbx14 != 20);
    *reinterpret_cast<int32_t*>(&r13_23) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_23) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ebx24 = r10d19;
        r12d25 = r9d17;
        __asm__("rol r9d, 0x5");
        r15d26 = r14d21;
        r10d19 = (r12d25 ^ r11d20 ^ r14d21) + r10d19 + ebp22 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + r13_23 * 4 - 0x80) + 0x6ed9eba1;
        r9d17 = r11d20;
        __asm__("rol r9d, 0x1e");
        ++r13_23;
        ebp22 = r14d21;
        r14d21 = r12d25;
        r11d20 = ebx24;
    } while (r13_23 != 40);
    *reinterpret_cast<int32_t*>(&r13_27) = 40;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_27) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r11d28 = r10d19;
        r14d29 = r9d17;
        ebp30 = r12d25;
        __asm__("rol r9d, 0x5");
        *reinterpret_cast<uint32_t*>(&r15_31) = (r12d25 & r14d29 | (r12d25 | r14d29) & ebx24) + (r10d19 + r15d26);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_31) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r9_32) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + r13_27 * 4 - 0x80);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_32) + 4) = reinterpret_cast<int32_t>(printf);
        r10d19 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r9_32 + r15_31) - 0x70e44324);
        r9d17 = ebx24;
        __asm__("rol r9d, 0x1e");
        ++r13_27;
        r15d26 = r12d25;
        r12d25 = r14d29;
        ebx24 = r11d28;
    } while (r13_27 != 60);
    *reinterpret_cast<int32_t*>(&r15_33) = 60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_33) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r13d34 = r10d19;
        ebx35 = r9d17;
        __asm__("rol r9d, 0x5");
        r12d36 = r14d29;
        r10d19 = (ebx35 ^ r11d28 ^ r14d29) + r10d19 + ebp30 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + r15_33 * 4 - 0x80) - 0x359d3e2a;
        r9d17 = r11d28;
        __asm__("rol r9d, 0x1e");
        ++r15_33;
        ebp30 = r14d29;
        r14d29 = ebx35;
        r11d28 = r13d34;
    } while (r15_33 != 80);
    rax8->f0 = r10d19 + r8d9;
    rax8->f4 = r13d34 + edi10;
    rax8->f8 = r9d17 + esi11;
    rax8->fc = ebx35 + edx12;
    rax8->f10 = r12d36 + ecx13;
    goto v37;
}

struct s9 {
    signed char[56] pad56;
    int32_t f38;
};

struct s10 {
    signed char[60] pad60;
    int32_t f3c;
};

void fun_38e() {
    struct s9* r14_1;
    int32_t ebp2;
    struct s10* r14_3;
    int32_t ebx4;
    void* rsp5;
    int64_t rax6;
    struct s3* rax7;
    uint32_t r8d8;
    uint32_t edi9;
    uint32_t esi10;
    uint32_t edx11;
    uint32_t ecx12;
    int64_t rbx13;
    uint32_t r15d14;
    uint32_t r13d15;
    uint32_t r9d16;
    uint32_t r12d17;
    uint32_t r10d18;
    uint32_t r11d19;
    uint32_t r14d20;
    uint32_t ebp21;
    int64_t r13_22;
    uint32_t ebx23;
    uint32_t r12d24;
    uint32_t r15d25;
    int64_t r13_26;
    uint32_t r11d27;
    uint32_t r14d28;
    uint32_t ebp29;
    int64_t r15_30;
    int64_t r9_31;
    int64_t r15_32;
    uint32_t r13d33;
    uint32_t ebx34;
    uint32_t r12d35;
    int64_t v36;

    r14_1->f38 = ebp2;
    r14_3->f3c = ebx4;
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xc8);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps xmm2, [rax+0x20]");
    __asm__("movaps xmm3, [rax+0x30]");
    __asm__("movaps [rsp-0x50], xmm3");
    __asm__("movaps [rsp-0x60], xmm2");
    __asm__("movaps [rsp-0x70], xmm1");
    __asm__("movaps [rsp-0x80], xmm0");
    *reinterpret_cast<int32_t*>(&rax6) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0x80) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0xa0) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0x8c) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0xb8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0xc0);
        ++rax6;
    } while (rax6 != 80);
    rax7 = g510;
    r8d8 = rax7->f0;
    edi9 = rax7->f4;
    esi10 = rax7->f8;
    edx11 = rax7->fc;
    ecx12 = rax7->f10;
    *reinterpret_cast<int32_t*>(&rbx13) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx13) + 4) = reinterpret_cast<int32_t>(printf);
    r15d14 = ecx12;
    r13d15 = edx11;
    r9d16 = esi10;
    r12d17 = edi9;
    r10d18 = r8d8;
    do {
        r11d19 = r10d18;
        r14d20 = r9d16;
        ebp21 = r13d15;
        __asm__("rol r9d, 0x5");
        r9d16 = r12d17;
        r10d18 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + rbx13 * 4 - 0x80) + ((~r12d17 & r13d15) + r15d14 + ((r14d20 & r12d17) + r10d18)) + 0x5a827999;
        __asm__("rol r9d, 0x1e");
        ++rbx13;
        r15d14 = r13d15;
        r13d15 = r14d20;
        r12d17 = r11d19;
    } while (rbx13 != 20);
    *reinterpret_cast<int32_t*>(&r13_22) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_22) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ebx23 = r10d18;
        r12d24 = r9d16;
        __asm__("rol r9d, 0x5");
        r15d25 = r14d20;
        r10d18 = (r12d24 ^ r11d19 ^ r14d20) + r10d18 + ebp21 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + r13_22 * 4 - 0x80) + 0x6ed9eba1;
        r9d16 = r11d19;
        __asm__("rol r9d, 0x1e");
        ++r13_22;
        ebp21 = r14d20;
        r14d20 = r12d24;
        r11d19 = ebx23;
    } while (r13_22 != 40);
    *reinterpret_cast<int32_t*>(&r13_26) = 40;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_26) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r11d27 = r10d18;
        r14d28 = r9d16;
        ebp29 = r12d24;
        __asm__("rol r9d, 0x5");
        *reinterpret_cast<uint32_t*>(&r15_30) = (r12d24 & r14d28 | (r12d24 | r14d28) & ebx23) + (r10d18 + r15d25);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_30) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r9_31) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + r13_26 * 4 - 0x80);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_31) + 4) = reinterpret_cast<int32_t>(printf);
        r10d18 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r9_31 + r15_30) - 0x70e44324);
        r9d16 = ebx23;
        __asm__("rol r9d, 0x1e");
        ++r13_26;
        r15d25 = r12d24;
        r12d24 = r14d28;
        ebx23 = r11d27;
    } while (r13_26 != 60);
    *reinterpret_cast<int32_t*>(&r15_32) = 60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_32) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r13d33 = r10d18;
        ebx34 = r9d16;
        __asm__("rol r9d, 0x5");
        r12d35 = r14d28;
        r10d18 = (ebx34 ^ r11d27 ^ r14d28) + r10d18 + ebp29 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + r15_32 * 4 - 0x80) - 0x359d3e2a;
        r9d16 = r11d27;
        __asm__("rol r9d, 0x1e");
        ++r15_32;
        ebp29 = r14d28;
        r14d28 = ebx34;
        r11d27 = r13d33;
    } while (r15_32 != 80);
    rax7->f0 = r10d18 + r8d8;
    rax7->f4 = r13d33 + edi9;
    rax7->f8 = r9d16 + esi10;
    rax7->fc = ebx34 + edx11;
    rax7->f10 = r12d35 + ecx12;
    goto v36;
}

void fun_403(int64_t rdi, int64_t rsi);

int32_t fun_443();

void fun_457(int32_t* rdi, int32_t* rsi);

void fun_494(int64_t rdi, int64_t rsi);

void fun_3d9(int32_t* rdi, int32_t* rsi) {
    void* rsp3;
    int64_t rdx4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t eax7;
    int64_t v8;

    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi;
    fun_403(rdi + 1, rsi + 1);
    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx4;
    } while (rdx4 != 5);
    rdi5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp3) + 8);
    *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
    eax7 = fun_443();
    if (eax7 != printf) {
        rdi5 = reinterpret_cast<int32_t*>(0x44e);
        *reinterpret_cast<int32_t*>(&rsi6) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
        fun_457(0x44e, rsi6);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi5 = *rsi6;
    __asm__("subsd xmm0, [r14]");
    fun_494(0x48d, rsi6 + 1);
    goto v8;
}

void fun_403(int64_t rdi, int64_t rsi) {
    void* rsp3;
    int64_t rdx4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t eax7;
    int64_t v8;

    rsp3 = __zero_stack_offset();
    *reinterpret_cast<int32_t*>(&rdx4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx4;
    } while (rdx4 != 5);
    rdi5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp3) + 8);
    *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
    eax7 = fun_443();
    if (eax7 != printf) {
        rdi5 = reinterpret_cast<int32_t*>(0x44e);
        *reinterpret_cast<int32_t*>(&rsi6) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
        fun_457(0x44e, rsi6);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi5 = *rsi6;
    __asm__("subsd xmm0, [r14]");
    fun_494(0x48d, rsi6 + 1);
    goto v8;
}

int32_t g44e = 0xc031c689;

int32_t fun_443() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != printf) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(printf);
        fun_457(0x44e, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g44e = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_494(0x48d, rsi2 + 1);
    goto v4;
}

void fun_457(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_494(0x48d, rsi + 1);
    goto v3;
}

void fun_494(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void sha_transform() {
    void* rsp1;
    int64_t rax2;
    struct s3* rax3;
    uint32_t r8d4;
    uint32_t edi5;
    uint32_t esi6;
    uint32_t edx7;
    uint32_t ecx8;
    int64_t rbx9;
    uint32_t r15d10;
    uint32_t r13d11;
    uint32_t r9d12;
    uint32_t r12d13;
    uint32_t r10d14;
    uint32_t r11d15;
    uint32_t r14d16;
    uint32_t ebp17;
    int64_t r13_18;
    uint32_t ebx19;
    uint32_t r12d20;
    uint32_t r15d21;
    int64_t r13_22;
    uint32_t r11d23;
    uint32_t r14d24;
    uint32_t ebp25;
    int64_t r15_26;
    int64_t r9_27;
    int64_t r15_28;
    uint32_t r13d29;
    uint32_t ebx30;
    uint32_t r12d31;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0xc8);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps xmm2, [rax+0x20]");
    __asm__("movaps xmm3, [rax+0x30]");
    __asm__("movaps [rsp-0x50], xmm3");
    __asm__("movaps [rsp-0x60], xmm2");
    __asm__("movaps [rsp-0x70], xmm1");
    __asm__("movaps [rsp-0x80], xmm0");
    *reinterpret_cast<int32_t*>(&rax2) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp1) + rax2 * 4 - 0x80) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp1) + rax2 * 4 - 0xa0) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp1) + rax2 * 4 - 0x8c) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp1) + rax2 * 4 - 0xb8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp1) + rax2 * 4 - 0xc0);
        ++rax2;
    } while (rax2 != 80);
    rax3 = g510;
    r8d4 = rax3->f0;
    edi5 = rax3->f4;
    esi6 = rax3->f8;
    edx7 = rax3->fc;
    ecx8 = rax3->f10;
    *reinterpret_cast<int32_t*>(&rbx9) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx9) + 4) = reinterpret_cast<int32_t>(printf);
    r15d10 = ecx8;
    r13d11 = edx7;
    r9d12 = esi6;
    r12d13 = edi5;
    r10d14 = r8d4;
    do {
        r11d15 = r10d14;
        r14d16 = r9d12;
        ebp17 = r13d11;
        __asm__("rol r9d, 0x5");
        r9d12 = r12d13;
        r10d14 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + rbx9 * 4 - 0x80) + ((~r12d13 & r13d11) + r15d10 + ((r14d16 & r12d13) + r10d14)) + 0x5a827999;
        __asm__("rol r9d, 0x1e");
        ++rbx9;
        r15d10 = r13d11;
        r13d11 = r14d16;
        r12d13 = r11d15;
    } while (rbx9 != 20);
    *reinterpret_cast<int32_t*>(&r13_18) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ebx19 = r10d14;
        r12d20 = r9d12;
        __asm__("rol r9d, 0x5");
        r15d21 = r14d16;
        r10d14 = (r12d20 ^ r11d15 ^ r14d16) + r10d14 + ebp17 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + r13_18 * 4 - 0x80) + 0x6ed9eba1;
        r9d12 = r11d15;
        __asm__("rol r9d, 0x1e");
        ++r13_18;
        ebp17 = r14d16;
        r14d16 = r12d20;
        r11d15 = ebx19;
    } while (r13_18 != 40);
    *reinterpret_cast<int32_t*>(&r13_22) = 40;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_22) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r11d23 = r10d14;
        r14d24 = r9d12;
        ebp25 = r12d20;
        __asm__("rol r9d, 0x5");
        *reinterpret_cast<uint32_t*>(&r15_26) = (r12d20 & r14d24 | (r12d20 | r14d24) & ebx19) + (r10d14 + r15d21);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_26) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r9_27) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + r13_22 * 4 - 0x80);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_27) + 4) = reinterpret_cast<int32_t>(printf);
        r10d14 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r9_27 + r15_26) - 0x70e44324);
        r9d12 = ebx19;
        __asm__("rol r9d, 0x1e");
        ++r13_22;
        r15d21 = r12d20;
        r12d20 = r14d24;
        ebx19 = r11d23;
    } while (r13_22 != 60);
    *reinterpret_cast<int32_t*>(&r15_28) = 60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_28) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r13d29 = r10d14;
        ebx30 = r9d12;
        __asm__("rol r9d, 0x5");
        r12d31 = r14d24;
        r10d14 = (ebx30 ^ r11d23 ^ r14d24) + r10d14 + ebp25 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + r15_28 * 4 - 0x80) - 0x359d3e2a;
        r9d12 = r11d23;
        __asm__("rol r9d, 0x1e");
        ++r15_28;
        ebp25 = r14d24;
        r14d24 = ebx30;
        r11d23 = r13d29;
    } while (r15_28 != 80);
    rax3->f0 = r10d14 + r8d4;
    rax3->f4 = r13d29 + edi5;
    rax3->f8 = r9d12 + esi6;
    rax3->fc = ebx30 + edx7;
    rax3->f10 = r12d31 + ecx8;
    return;
}

struct s11 {
    int32_t f0;
    signed char[44] pad48;
    int64_t f30;
    int32_t f38;
    uint32_t f3c;
};

struct s11* g2f3 = reinterpret_cast<struct s11*>(0x808604c741);

void fun_2d3() {
    void* rsp1;
    int1_t zf2;
    int64_t r15_3;
    uint32_t ebx4;
    uint32_t* rbx5;
    int32_t ebp6;
    int32_t* r14_7;
    int64_t rax8;
    struct s11* r14_9;
    uint32_t ecx10;
    uint32_t edx11;
    int32_t edx12;
    uint32_t ecx13;
    uint32_t ecx14;
    void* rsp15;
    int64_t rax16;
    struct s3* rax17;
    uint32_t r8d18;
    uint32_t edi19;
    uint32_t esi20;
    uint32_t edx21;
    uint32_t ecx22;
    int64_t rbx23;
    uint32_t r15d24;
    uint32_t r13d25;
    uint32_t r9d26;
    uint32_t r12d27;
    uint32_t r10d28;
    uint32_t r11d29;
    uint32_t r14d30;
    uint32_t ebp31;
    int64_t r13_32;
    uint32_t ebx33;
    uint32_t r12d34;
    uint32_t r15d35;
    int64_t r13_36;
    uint32_t r11d37;
    uint32_t r14d38;
    uint32_t ebp39;
    int64_t r15_40;
    int64_t r9_41;
    int64_t r15_42;
    uint32_t r13d43;
    uint32_t ebx44;
    uint32_t r12d45;
    int64_t v46;

    while (rsp1 = __zero_stack_offset(), zf2 = reinterpret_cast<int1_t>(r15_3 == printf), ++r15_3, zf2) {
        fun_2d3();
    }
    ebx4 = *rbx5;
    ebp6 = *r14_7;
    *reinterpret_cast<uint32_t*>(&rax8) = ebx4 >> 3 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(printf);
    r14_9 = g2f3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_9) + rax8 * 4) = 0x80;
    if (*reinterpret_cast<uint32_t*>(&rax8) < 56) {
        if (*reinterpret_cast<uint32_t*>(&rax8) <= 51) {
            ecx10 = 55 - *reinterpret_cast<uint32_t*>(&rax8);
            edx11 = 58 - *reinterpret_cast<uint32_t*>(&rax8);
            if (reinterpret_cast<int32_t>(ecx10) >= reinterpret_cast<int32_t>(printf)) {
                edx11 = ecx10;
            }
            edx12 = reinterpret_cast<int32_t>(edx11) >> 2;
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edx12 < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(edx12 == printf)) {
            }
            fun_38e();
            rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        }
    } else {
        ecx13 = *reinterpret_cast<uint32_t*>(&rax8) ^ 63;
        if (ecx13 >= 4) {
            ecx14 = ecx13 >> 2;
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(ecx14) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(ecx14 == printf)) {
            }
            fun_330();
            rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        }
        sha_transform();
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        __asm__("xorps xmm0, xmm0");
        __asm__("movaps [r14+0x20], xmm0");
        __asm__("movaps [r14+0x10], xmm0");
        __asm__("movaps [r14], xmm0");
        r14_9->f30 = reinterpret_cast<int64_t>(printf);
    }
    r14_9->f38 = ebp6;
    r14_9->f3c = ebx4;
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) + 8 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xc8);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps xmm2, [rax+0x20]");
    __asm__("movaps xmm3, [rax+0x30]");
    __asm__("movaps [rsp-0x50], xmm3");
    __asm__("movaps [rsp-0x60], xmm2");
    __asm__("movaps [rsp-0x70], xmm1");
    __asm__("movaps [rsp-0x80], xmm0");
    *reinterpret_cast<int32_t*>(&rax16) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp15) + rax16 * 4 - 0x80) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp15) + rax16 * 4 - 0xa0) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp15) + rax16 * 4 - 0x8c) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp15) + rax16 * 4 - 0xb8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp15) + rax16 * 4 - 0xc0);
        ++rax16;
    } while (rax16 != 80);
    rax17 = g510;
    r8d18 = rax17->f0;
    edi19 = rax17->f4;
    esi20 = rax17->f8;
    edx21 = rax17->fc;
    ecx22 = rax17->f10;
    *reinterpret_cast<int32_t*>(&rbx23) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx23) + 4) = reinterpret_cast<int32_t>(printf);
    r15d24 = ecx22;
    r13d25 = edx21;
    r9d26 = esi20;
    r12d27 = edi19;
    r10d28 = r8d18;
    do {
        r11d29 = r10d28;
        r14d30 = r9d26;
        ebp31 = r13d25;
        __asm__("rol r9d, 0x5");
        r9d26 = r12d27;
        r10d28 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp15) + rbx23 * 4 - 0x80) + ((~r12d27 & r13d25) + r15d24 + ((r14d30 & r12d27) + r10d28)) + 0x5a827999;
        __asm__("rol r9d, 0x1e");
        ++rbx23;
        r15d24 = r13d25;
        r13d25 = r14d30;
        r12d27 = r11d29;
    } while (rbx23 != 20);
    *reinterpret_cast<int32_t*>(&r13_32) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_32) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ebx33 = r10d28;
        r12d34 = r9d26;
        __asm__("rol r9d, 0x5");
        r15d35 = r14d30;
        r10d28 = (r12d34 ^ r11d29 ^ r14d30) + r10d28 + ebp31 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp15) + r13_32 * 4 - 0x80) + 0x6ed9eba1;
        r9d26 = r11d29;
        __asm__("rol r9d, 0x1e");
        ++r13_32;
        ebp31 = r14d30;
        r14d30 = r12d34;
        r11d29 = ebx33;
    } while (r13_32 != 40);
    *reinterpret_cast<int32_t*>(&r13_36) = 40;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_36) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r11d37 = r10d28;
        r14d38 = r9d26;
        ebp39 = r12d34;
        __asm__("rol r9d, 0x5");
        *reinterpret_cast<uint32_t*>(&r15_40) = (r12d34 & r14d38 | (r12d34 | r14d38) & ebx33) + (r10d28 + r15d35);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_40) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r9_41) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp15) + r13_36 * 4 - 0x80);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_41) + 4) = reinterpret_cast<int32_t>(printf);
        r10d28 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r9_41 + r15_40) - 0x70e44324);
        r9d26 = ebx33;
        __asm__("rol r9d, 0x1e");
        ++r13_36;
        r15d35 = r12d34;
        r12d34 = r14d38;
        ebx33 = r11d37;
    } while (r13_36 != 60);
    *reinterpret_cast<int32_t*>(&r15_42) = 60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_42) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r13d43 = r10d28;
        ebx44 = r9d26;
        __asm__("rol r9d, 0x5");
        r12d45 = r14d38;
        r10d28 = (ebx44 ^ r11d37 ^ r14d38) + r10d28 + ebp39 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp15) + r15_42 * 4 - 0x80) - 0x359d3e2a;
        r9d26 = r11d37;
        __asm__("rol r9d, 0x1e");
        ++r15_42;
        ebp39 = r14d38;
        r14d38 = ebx44;
        r11d37 = r13d43;
    } while (r15_42 != 80);
    rax17->f0 = r10d28 + r8d18;
    rax17->f4 = r13d43 + edi19;
    rax17->f8 = r9d26 + esi20;
    rax17->fc = ebx44 + edx21;
    rax17->f10 = r12d45 + ecx22;
    goto v46;
}

void fun_3c5(int32_t* rdi) {
    void* rsp2;
    int32_t eax3;
    int32_t* rsi4;
    int32_t eax5;
    void* rsp6;
    int64_t rdx7;
    int32_t* rdi8;
    int32_t* rsi9;
    int32_t eax10;
    int64_t v11;

    rsp2 = __zero_stack_offset();
    if (eax3 != printf) {
        rdi = reinterpret_cast<int32_t*>(0x3d0);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
        fun_3d9(0x3d0, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    fun_403(rdi + 1, rsi4 + 1);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx7;
    } while (rdx7 != 5);
    rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + 8);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(printf);
    eax10 = fun_443();
    if (eax10 != printf) {
        rdi8 = reinterpret_cast<int32_t*>(0x44e);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(printf);
        fun_457(0x44e, rsi9);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r14]");
    fun_494(0x48d, rsi9 + 1);
    goto v11;
}

void printf() {
    int32_t edx1;

    if (edx1 < 4) {
    }
}

void fun_138() {
    int64_t rax1;
    int32_t eax2;
    int32_t* rax3;
    signed char cl4;

    *reinterpret_cast<int32_t*>(&rax1) = eax2 + *rax3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<signed char*>(rax1 - 0x7d) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax1 - 0x7d) + cl4);
    return;
}

int32_t* g16d = reinterpret_cast<int32_t*>(0x338bff508d001f0f);

void fun_13e() {
    int64_t rcx1;
    int64_t r14_2;
    int32_t r14d3;
    int32_t eax4;
    int64_t rax5;
    int32_t* rcx6;
    int32_t* rbx7;
    int1_t less_or_equal8;
    int64_t v9;

    *reinterpret_cast<int32_t*>(&rcx1) = static_cast<int32_t>(r14_2 - 64);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = reinterpret_cast<int32_t>(printf);
    if (r14d3 <= 0x7f) {
        if (*reinterpret_cast<int32_t*>(&rcx1) >= 4) {
            eax4 = static_cast<int32_t>(rcx1 + 3);
            if (*reinterpret_cast<int32_t*>(&rcx1) >= reinterpret_cast<int32_t>(printf)) {
                eax4 = *reinterpret_cast<int32_t*>(&rcx1);
            }
            *reinterpret_cast<int32_t*>(&rax5) = eax4 >> 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
            rcx6 = g16d;
            do {
                ++rbx7;
                *rcx6 = *rbx7;
                ++rcx6;
                less_or_equal8 = *reinterpret_cast<int32_t*>(&rax5) <= 1;
                *reinterpret_cast<int32_t*>(&rax5) = static_cast<int32_t>(rax5 - 1);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
            } while (!less_or_equal8);
        }
        goto v9;
    }
}

void fun_153() {
    int32_t r14d1;

    if (r14d1 < 4) 
        goto 0x186; else 
        goto "???";
}

uint32_t* g19b = reinterpret_cast<uint32_t*>(0x58b48188b);

int32_t* g1b7 = reinterpret_cast<int32_t*>(0x808e04c741);

void sha_final() {
    uint32_t* rax1;
    uint32_t eax2;
    int64_t rcx3;
    int32_t* r14_4;
    uint32_t edx5;
    uint32_t esi6;
    uint32_t eax7;
    uint32_t eax8;
    int32_t esi9;

    rax1 = g19b;
    eax2 = *rax1 >> 3 & 63;
    *reinterpret_cast<uint32_t*>(&rcx3) = eax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
    r14_4 = g1b7;
    r14_4[rcx3] = 0x80;
    if (eax2 < 56) {
        if (eax2 > 51) 
            goto fun_250;
        edx5 = 55 - eax2;
        esi6 = 58 - eax2;
        if (reinterpret_cast<int32_t>(edx5) < reinterpret_cast<int32_t>(printf)) 
            goto addr_22a_4;
    } else {
        eax7 = eax2 ^ 63;
        if (eax7 < 4) 
            goto fun_1f2;
        eax8 = eax7 >> 2;
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(eax8) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(eax8 == printf)) 
            goto label_7; else 
            goto addr_1e1_8;
    }
    esi6 = edx5;
    addr_22a_4:
    esi9 = reinterpret_cast<int32_t>(esi6) >> 2;
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(esi9 < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(esi9 == printf)) {
    }
    fun_250();
    label_7:
    addr_1e1_8:
    fun_1f2();
}

struct s12 {
    signed char[16] pad16;
    int32_t f10;
};

struct s12* g289 = reinterpret_cast<struct s12*>(0xe1f01040c700290f);

int32_t* g29a = reinterpret_cast<int32_t*>(0x8b4c0000000003c7);

int32_t* g2a7 = reinterpret_cast<int32_t*>(0x450000000006c741);

void sha_stream() {
    struct s12* rax1;
    int32_t* rbx2;
    int32_t* r14_3;

    __asm__("movaps xmm0, [rip+0x0]");
    rax1 = g289;
    __asm__("movaps [rax], xmm0");
    rax1->f10 = 0xc3d2e1f0;
    rbx2 = g29a;
    *rbx2 = reinterpret_cast<int32_t>(printf);
    r14_3 = g2a7;
    *r14_3 = reinterpret_cast<int32_t>(printf);
}

void submain() {
    fun_3c5(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 24 + 8);
}

