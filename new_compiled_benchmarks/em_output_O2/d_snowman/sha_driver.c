
void printf();

struct s0 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
};

struct s0* g4ed = reinterpret_cast<struct s0*>(0x708b04788b008b44);

void sha_transform() {
    void* rsp1;
    int64_t rax2;
    struct s0* rax3;
    uint32_t r8d4;
    uint32_t edi5;
    uint32_t esi6;
    uint32_t r9d7;
    uint32_t r14d8;
    int64_t r11_9;
    uint32_t v10;
    uint32_t v11;
    uint32_t ebx12;
    uint32_t ebp13;
    uint32_t r12d14;
    uint32_t r10d15;
    uint32_t r15d16;
    int64_t r12_17;
    int64_t r14_18;
    int64_t rdx19;
    int64_t rcx20;
    int64_t r14_21;
    uint32_t r15d22;
    uint32_t r11d23;
    int64_t rdx24;
    int64_t r12_25;
    int64_t r10_26;
    int64_t rcx27;
    int64_t r14_28;
    uint32_t r10d29;
    uint32_t r15d30;
    uint32_t ecx31;
    int64_t r11_32;
    int64_t rdx33;
    int64_t r14_34;
    uint32_t r15d35;
    uint32_t r11d36;
    int64_t rdx37;
    int64_t r12_38;
    int64_t r10_39;
    int64_t rcx40;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0xd8);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps xmm2, [rax+0x20]");
    __asm__("movaps xmm3, [rax+0x30]");
    __asm__("movaps [rsp-0x40], xmm3");
    __asm__("movaps [rsp-0x50], xmm2");
    __asm__("movaps [rsp-0x60], xmm1");
    __asm__("movaps [rsp-0x70], xmm0");
    *reinterpret_cast<int32_t*>(&rax2) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp1) + rax2 * 4 - 0x70) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp1) + rax2 * 4 - 0x90) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp1) + rax2 * 4 - 0x7c) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp1) + rax2 * 4 - 0xa8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp1) + rax2 * 4 - 0xb0);
        ++rax2;
    } while (rax2 != 80);
    rax3 = g4ed;
    r8d4 = rax3->f0;
    edi5 = rax3->f4;
    esi6 = rax3->f8;
    r9d7 = rax3->fc;
    r14d8 = rax3->f10;
    *reinterpret_cast<int32_t*>(&r11_9) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_9) + 4) = reinterpret_cast<int32_t>(printf);
    v10 = r14d8;
    v11 = r9d7;
    ebx12 = esi6;
    ebp13 = edi5;
    r12d14 = r8d4;
    do {
        r10d15 = ebx12;
        r15d16 = r9d7;
        r9d7 = ebp13;
        __asm__("rol r9d, 0x1e");
        __asm__("rol r12d, 0x5");
        ebx12 = r12d14;
        *reinterpret_cast<uint32_t*>(&r12_17) = (~ebp13 & r15d16) + r14d8 + ((r10d15 & ebp13) + r12d14);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_17) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r14_18) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + r11_9 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_18) + 4) = reinterpret_cast<int32_t>(printf);
        ebp13 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_18 + r12_17) + 0x5a827999);
        __asm__("rol r14d, 0x5");
        *reinterpret_cast<int32_t*>(&rdx19) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + (reinterpret_cast<uint64_t>(r11_9 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx20) = (~r12d14 & r10d15) + (r9d7 & r12d14) + r15d16 + ebp13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d14 = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdx19 + rcx20) + 0x5a827999);
        r11_9 = r11_9 + 2;
        r14d8 = r10d15;
    } while (r11_9 != 20);
    *reinterpret_cast<int32_t*>(&r14_21) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_21) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r15d22 = r9d7;
        r9d7 = ebp13;
        r11d23 = ebx12;
        ebx12 = r12d14;
        __asm__("rol r12d, 0x5");
        *reinterpret_cast<uint32_t*>(&rdx24) = (r11d23 ^ ebp13 ^ r15d22) + r12d14 + r10d15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r12_25) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + r14_21 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_25) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol r9d, 0x1e");
        ebp13 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_25 + rdx24) + 0x6ed9eba1);
        __asm__("rol edx, 0x5");
        *reinterpret_cast<int32_t*>(&r10_26) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + (reinterpret_cast<uint64_t>(r14_21 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_26) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx27) = (r12d14 ^ r11d23 ^ r9d7) + r15d22 + ebp13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d14 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r10_26 + rcx27) + 0x6ed9eba1);
        r14_21 = r14_21 + 2;
        r10d15 = r11d23;
    } while (r14_21 != 40);
    *reinterpret_cast<int32_t*>(&r14_28) = 40;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_28) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r10d29 = ebx12;
        r15d30 = r9d7;
        r9d7 = ebp13;
        __asm__("rol r9d, 0x1e");
        ecx31 = (ebx12 | r9d7) & r12d14;
        __asm__("rol edx, 0x5");
        ebx12 = r12d14;
        *reinterpret_cast<uint32_t*>(&r11_32) = (r15d30 & r10d29 | (r15d30 | r10d29) & ebp13) + (r12d14 + r11d23);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_32) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rdx33) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + r14_28 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = reinterpret_cast<int32_t>(printf);
        ebp13 = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdx33 + r11_32) - 0x70e44324);
        __asm__("rol edx, 0x5");
        __asm__("rol ebx, 0x1e");
        r12d14 = (r10d29 & r9d7 | ecx31) + r15d30 + ebp13 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + (reinterpret_cast<uint64_t>(r14_28 * 4) | 4) - 0x70) - 0x70e44324;
        r14_28 = r14_28 + 2;
        r11d23 = r10d29;
    } while (r14_28 != 60);
    *reinterpret_cast<int32_t*>(&r14_34) = 60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_34) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r15d35 = r9d7;
        r9d7 = ebp13;
        r11d36 = ebx12;
        ebx12 = r12d14;
        __asm__("rol r12d, 0x5");
        *reinterpret_cast<uint32_t*>(&rdx37) = (r11d36 ^ ebp13 ^ r15d35) + r12d14 + r10d29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r12_38) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + r14_34 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_38) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol r9d, 0x1e");
        ebp13 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_38 + rdx37) - 0x359d3e2a);
        __asm__("rol edx, 0x5");
        *reinterpret_cast<int32_t*>(&r10_39) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + (reinterpret_cast<uint64_t>(r14_34 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_39) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx40) = (r12d14 ^ r11d36 ^ r9d7) + r15d35 + ebp13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx40) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d14 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r10_39 + rcx40) - 0x359d3e2a);
        r14_34 = r14_34 + 2;
        r10d29 = r11d36;
    } while (r14_34 != 80);
    rax3->f0 = r12d14 + r8d4;
    rax3->f4 = ebp13 + edi5;
    rax3->f8 = ebx12 + esi6;
    rax3->fc = r9d7 + v11;
    rax3->f10 = r11d36 + v10;
    return;
}

struct s1 {
    signed char[56] pad56;
    int32_t f38;
};

struct s2 {
    signed char[60] pad60;
    int32_t f3c;
};

void fun_25d() {
    struct s1* r14_1;
    int32_t ebp2;
    struct s2* r14_3;
    int32_t ebx4;
    void* rsp5;
    int64_t rax6;
    struct s0* rax7;
    uint32_t r8d8;
    uint32_t edi9;
    uint32_t esi10;
    uint32_t r9d11;
    uint32_t r14d12;
    int64_t r11_13;
    uint32_t v14;
    uint32_t v15;
    uint32_t ebx16;
    uint32_t ebp17;
    uint32_t r12d18;
    uint32_t r10d19;
    uint32_t r15d20;
    int64_t r12_21;
    int64_t r14_22;
    int64_t rdx23;
    int64_t rcx24;
    int64_t r14_25;
    uint32_t r15d26;
    uint32_t r11d27;
    int64_t rdx28;
    int64_t r12_29;
    int64_t r10_30;
    int64_t rcx31;
    int64_t r14_32;
    uint32_t r10d33;
    uint32_t r15d34;
    uint32_t ecx35;
    int64_t r11_36;
    int64_t rdx37;
    int64_t r14_38;
    uint32_t r15d39;
    uint32_t r11d40;
    int64_t rdx41;
    int64_t r12_42;
    int64_t r10_43;
    int64_t rcx44;
    int64_t v45;

    r14_1->f38 = ebp2;
    r14_3->f3c = ebx4;
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xd8);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps xmm2, [rax+0x20]");
    __asm__("movaps xmm3, [rax+0x30]");
    __asm__("movaps [rsp-0x40], xmm3");
    __asm__("movaps [rsp-0x50], xmm2");
    __asm__("movaps [rsp-0x60], xmm1");
    __asm__("movaps [rsp-0x70], xmm0");
    *reinterpret_cast<int32_t*>(&rax6) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0x70) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0x90) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0x7c) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0xa8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0xb0);
        ++rax6;
    } while (rax6 != 80);
    rax7 = g4ed;
    r8d8 = rax7->f0;
    edi9 = rax7->f4;
    esi10 = rax7->f8;
    r9d11 = rax7->fc;
    r14d12 = rax7->f10;
    *reinterpret_cast<int32_t*>(&r11_13) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_13) + 4) = reinterpret_cast<int32_t>(printf);
    v14 = r14d12;
    v15 = r9d11;
    ebx16 = esi10;
    ebp17 = edi9;
    r12d18 = r8d8;
    do {
        r10d19 = ebx16;
        r15d20 = r9d11;
        r9d11 = ebp17;
        __asm__("rol r9d, 0x1e");
        __asm__("rol r12d, 0x5");
        ebx16 = r12d18;
        *reinterpret_cast<uint32_t*>(&r12_21) = (~ebp17 & r15d20) + r14d12 + ((r10d19 & ebp17) + r12d18);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_21) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r14_22) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + r11_13 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_22) + 4) = reinterpret_cast<int32_t>(printf);
        ebp17 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_22 + r12_21) + 0x5a827999);
        __asm__("rol r14d, 0x5");
        *reinterpret_cast<int32_t*>(&rdx23) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + (reinterpret_cast<uint64_t>(r11_13 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx24) = (~r12d18 & r10d19) + (r9d11 & r12d18) + r15d20 + ebp17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d18 = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdx23 + rcx24) + 0x5a827999);
        r11_13 = r11_13 + 2;
        r14d12 = r10d19;
    } while (r11_13 != 20);
    *reinterpret_cast<int32_t*>(&r14_25) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_25) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r15d26 = r9d11;
        r9d11 = ebp17;
        r11d27 = ebx16;
        ebx16 = r12d18;
        __asm__("rol r12d, 0x5");
        *reinterpret_cast<uint32_t*>(&rdx28) = (r11d27 ^ ebp17 ^ r15d26) + r12d18 + r10d19;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r12_29) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + r14_25 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_29) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol r9d, 0x1e");
        ebp17 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_29 + rdx28) + 0x6ed9eba1);
        __asm__("rol edx, 0x5");
        *reinterpret_cast<int32_t*>(&r10_30) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + (reinterpret_cast<uint64_t>(r14_25 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_30) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx31) = (r12d18 ^ r11d27 ^ r9d11) + r15d26 + ebp17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d18 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r10_30 + rcx31) + 0x6ed9eba1);
        r14_25 = r14_25 + 2;
        r10d19 = r11d27;
    } while (r14_25 != 40);
    *reinterpret_cast<int32_t*>(&r14_32) = 40;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_32) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r10d33 = ebx16;
        r15d34 = r9d11;
        r9d11 = ebp17;
        __asm__("rol r9d, 0x1e");
        ecx35 = (ebx16 | r9d11) & r12d18;
        __asm__("rol edx, 0x5");
        ebx16 = r12d18;
        *reinterpret_cast<uint32_t*>(&r11_36) = (r15d34 & r10d33 | (r15d34 | r10d33) & ebp17) + (r12d18 + r11d27);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_36) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rdx37) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + r14_32 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = reinterpret_cast<int32_t>(printf);
        ebp17 = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdx37 + r11_36) - 0x70e44324);
        __asm__("rol edx, 0x5");
        __asm__("rol ebx, 0x1e");
        r12d18 = (r10d33 & r9d11 | ecx35) + r15d34 + ebp17 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + (reinterpret_cast<uint64_t>(r14_32 * 4) | 4) - 0x70) - 0x70e44324;
        r14_32 = r14_32 + 2;
        r11d27 = r10d33;
    } while (r14_32 != 60);
    *reinterpret_cast<int32_t*>(&r14_38) = 60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_38) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r15d39 = r9d11;
        r9d11 = ebp17;
        r11d40 = ebx16;
        ebx16 = r12d18;
        __asm__("rol r12d, 0x5");
        *reinterpret_cast<uint32_t*>(&rdx41) = (r11d40 ^ ebp17 ^ r15d39) + r12d18 + r10d33;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx41) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r12_42) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + r14_38 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_42) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol r9d, 0x1e");
        ebp17 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_42 + rdx41) - 0x359d3e2a);
        __asm__("rol edx, 0x5");
        *reinterpret_cast<int32_t*>(&r10_43) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + (reinterpret_cast<uint64_t>(r14_38 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_43) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx44) = (r12d18 ^ r11d40 ^ r9d11) + r15d39 + ebp17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx44) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d18 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r10_43 + rcx44) - 0x359d3e2a);
        r14_38 = r14_38 + 2;
        r10d33 = r11d40;
    } while (r14_38 != 80);
    rax7->f0 = r12d18 + r8d8;
    rax7->f4 = ebp17 + edi9;
    rax7->f8 = ebx16 + esi10;
    rax7->fc = r9d11 + v15;
    rax7->f10 = r11d40 + v14;
    goto v45;
}

struct s3 {
    signed char[56] pad56;
    int32_t f38;
};

struct s4 {
    signed char[60] pad60;
    int32_t f3c;
};

void fun_350() {
    struct s3* r14_1;
    int32_t ebp2;
    struct s4* r14_3;
    int32_t ebx4;
    void* rsp5;
    int64_t rax6;
    struct s0* rax7;
    uint32_t r8d8;
    uint32_t edi9;
    uint32_t esi10;
    uint32_t r9d11;
    uint32_t r14d12;
    int64_t r11_13;
    uint32_t v14;
    uint32_t v15;
    uint32_t ebx16;
    uint32_t ebp17;
    uint32_t r12d18;
    uint32_t r10d19;
    uint32_t r15d20;
    int64_t r12_21;
    int64_t r14_22;
    int64_t rdx23;
    int64_t rcx24;
    int64_t r14_25;
    uint32_t r15d26;
    uint32_t r11d27;
    int64_t rdx28;
    int64_t r12_29;
    int64_t r10_30;
    int64_t rcx31;
    int64_t r14_32;
    uint32_t r10d33;
    uint32_t r15d34;
    uint32_t ecx35;
    int64_t r11_36;
    int64_t rdx37;
    int64_t r14_38;
    uint32_t r15d39;
    uint32_t r11d40;
    int64_t rdx41;
    int64_t r12_42;
    int64_t r10_43;
    int64_t rcx44;
    int64_t v45;

    r14_1->f38 = ebp2;
    r14_3->f3c = ebx4;
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xd8);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps xmm2, [rax+0x20]");
    __asm__("movaps xmm3, [rax+0x30]");
    __asm__("movaps [rsp-0x40], xmm3");
    __asm__("movaps [rsp-0x50], xmm2");
    __asm__("movaps [rsp-0x60], xmm1");
    __asm__("movaps [rsp-0x70], xmm0");
    *reinterpret_cast<int32_t*>(&rax6) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0x70) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0x90) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0x7c) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0xa8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp5) + rax6 * 4 - 0xb0);
        ++rax6;
    } while (rax6 != 80);
    rax7 = g4ed;
    r8d8 = rax7->f0;
    edi9 = rax7->f4;
    esi10 = rax7->f8;
    r9d11 = rax7->fc;
    r14d12 = rax7->f10;
    *reinterpret_cast<int32_t*>(&r11_13) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_13) + 4) = reinterpret_cast<int32_t>(printf);
    v14 = r14d12;
    v15 = r9d11;
    ebx16 = esi10;
    ebp17 = edi9;
    r12d18 = r8d8;
    do {
        r10d19 = ebx16;
        r15d20 = r9d11;
        r9d11 = ebp17;
        __asm__("rol r9d, 0x1e");
        __asm__("rol r12d, 0x5");
        ebx16 = r12d18;
        *reinterpret_cast<uint32_t*>(&r12_21) = (~ebp17 & r15d20) + r14d12 + ((r10d19 & ebp17) + r12d18);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_21) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r14_22) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + r11_13 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_22) + 4) = reinterpret_cast<int32_t>(printf);
        ebp17 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_22 + r12_21) + 0x5a827999);
        __asm__("rol r14d, 0x5");
        *reinterpret_cast<int32_t*>(&rdx23) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + (reinterpret_cast<uint64_t>(r11_13 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx24) = (~r12d18 & r10d19) + (r9d11 & r12d18) + r15d20 + ebp17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d18 = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdx23 + rcx24) + 0x5a827999);
        r11_13 = r11_13 + 2;
        r14d12 = r10d19;
    } while (r11_13 != 20);
    *reinterpret_cast<int32_t*>(&r14_25) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_25) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r15d26 = r9d11;
        r9d11 = ebp17;
        r11d27 = ebx16;
        ebx16 = r12d18;
        __asm__("rol r12d, 0x5");
        *reinterpret_cast<uint32_t*>(&rdx28) = (r11d27 ^ ebp17 ^ r15d26) + r12d18 + r10d19;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r12_29) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + r14_25 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_29) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol r9d, 0x1e");
        ebp17 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_29 + rdx28) + 0x6ed9eba1);
        __asm__("rol edx, 0x5");
        *reinterpret_cast<int32_t*>(&r10_30) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + (reinterpret_cast<uint64_t>(r14_25 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_30) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx31) = (r12d18 ^ r11d27 ^ r9d11) + r15d26 + ebp17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d18 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r10_30 + rcx31) + 0x6ed9eba1);
        r14_25 = r14_25 + 2;
        r10d19 = r11d27;
    } while (r14_25 != 40);
    *reinterpret_cast<int32_t*>(&r14_32) = 40;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_32) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r10d33 = ebx16;
        r15d34 = r9d11;
        r9d11 = ebp17;
        __asm__("rol r9d, 0x1e");
        ecx35 = (ebx16 | r9d11) & r12d18;
        __asm__("rol edx, 0x5");
        ebx16 = r12d18;
        *reinterpret_cast<uint32_t*>(&r11_36) = (r15d34 & r10d33 | (r15d34 | r10d33) & ebp17) + (r12d18 + r11d27);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_36) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rdx37) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + r14_32 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = reinterpret_cast<int32_t>(printf);
        ebp17 = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdx37 + r11_36) - 0x70e44324);
        __asm__("rol edx, 0x5");
        __asm__("rol ebx, 0x1e");
        r12d18 = (r10d33 & r9d11 | ecx35) + r15d34 + ebp17 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + (reinterpret_cast<uint64_t>(r14_32 * 4) | 4) - 0x70) - 0x70e44324;
        r14_32 = r14_32 + 2;
        r11d27 = r10d33;
    } while (r14_32 != 60);
    *reinterpret_cast<int32_t*>(&r14_38) = 60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_38) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r15d39 = r9d11;
        r9d11 = ebp17;
        r11d40 = ebx16;
        ebx16 = r12d18;
        __asm__("rol r12d, 0x5");
        *reinterpret_cast<uint32_t*>(&rdx41) = (r11d40 ^ ebp17 ^ r15d39) + r12d18 + r10d33;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx41) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r12_42) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + r14_38 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_42) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol r9d, 0x1e");
        ebp17 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_42 + rdx41) - 0x359d3e2a);
        __asm__("rol edx, 0x5");
        *reinterpret_cast<int32_t*>(&r10_43) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + (reinterpret_cast<uint64_t>(r14_38 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_43) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx44) = (r12d18 ^ r11d40 ^ r9d11) + r15d39 + ebp17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx44) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d18 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r10_43 + rcx44) - 0x359d3e2a);
        r14_38 = r14_38 + 2;
        r10d33 = r11d40;
    } while (r14_38 != 80);
    rax7->f0 = r12d18 + r8d8;
    rax7->f4 = ebp17 + edi9;
    rax7->f8 = ebx16 + esi10;
    rax7->fc = r9d11 + v15;
    rax7->f10 = r11d40 + v14;
    goto v45;
}

void fun_3be(int64_t rdi, int64_t rsi);

int32_t fun_3da();

void fun_3ee(int32_t* rdi, int32_t* rsi);

void fun_46e(int64_t rdi, int64_t rsi);

void fun_395(int32_t* rdi, int32_t* rsi) {
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t eax5;
    int64_t v6;

    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi;
    fun_3be(rdi + 1, rsi + 1);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps [rsp+0x10], xmm0");
    rdi3 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
    eax5 = fun_3da();
    if (eax5 != printf) {
        rdi3 = reinterpret_cast<int32_t*>(0x3e5);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
        fun_3ee(0x3e5, rsi4);
    }
    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi3 = *rsi4;
    __asm__("subsd xmm0, [r14]");
    fun_46e(0x467, rsi4 + 1);
    goto v6;
}

void fun_3be(int64_t rdi, int64_t rsi) {
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t eax5;
    int64_t v6;

    __asm__("movaps xmm0, [rax]");
    __asm__("movaps [rsp+0x10], xmm0");
    rdi3 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
    eax5 = fun_3da();
    if (eax5 != printf) {
        rdi3 = reinterpret_cast<int32_t*>(0x3e5);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
        fun_3ee(0x3e5, rsi4);
    }
    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi3 = *rsi4;
    __asm__("subsd xmm0, [r14]");
    fun_46e(0x467, rsi4 + 1);
    goto v6;
}

void fun_3ee(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_46e(0x467, rsi + 1);
    goto v3;
}

void fun_46e(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

int32_t g3e5 = 0xc031c689;

int32_t fun_3da() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != printf) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(printf);
        fun_3ee(0x3e5, rsi2);
    }
    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g3e5 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_46e(0x467, rsi2 + 1);
    goto v4;
}

void fun_2d3(int64_t rdi, int64_t rsi);

struct s5 {
    int32_t f0;
    signed char[44] pad48;
    int64_t f30;
    int32_t f38;
    uint32_t f3c;
};

struct s5* g2e8 = reinterpret_cast<struct s5*>(0x808604c741);

void fun_2bf(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    void* rsp4;
    uint32_t ebx5;
    uint32_t* r14_6;
    int32_t ebp7;
    int32_t* r15_8;
    int64_t rax9;
    struct s5* r14_10;
    void* rsp11;
    int64_t rax12;
    struct s0* rax13;
    uint32_t r8d14;
    uint32_t edi15;
    uint32_t esi16;
    uint32_t r9d17;
    uint32_t r14d18;
    int64_t r11_19;
    uint32_t v20;
    uint32_t v21;
    uint32_t ebx22;
    uint32_t ebp23;
    uint32_t r12d24;
    uint32_t r10d25;
    uint32_t r15d26;
    int64_t r12_27;
    int64_t r14_28;
    int64_t rdx29;
    int64_t rcx30;
    int64_t r14_31;
    uint32_t r15d32;
    uint32_t r11d33;
    int64_t rdx34;
    int64_t r12_35;
    int64_t r10_36;
    int64_t rcx37;
    int64_t r14_38;
    uint32_t r10d39;
    uint32_t r15d40;
    uint32_t ecx41;
    int64_t r11_42;
    int64_t rdx43;
    int64_t r14_44;
    uint32_t r15d45;
    uint32_t r11d46;
    int64_t rdx47;
    int64_t r12_48;
    int64_t r10_49;
    int64_t rcx50;
    int64_t v51;

    fun_2d3(rbx3 + reinterpret_cast<int64_t>("thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen"), "thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen");
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    ebx5 = *r14_6;
    ebp7 = *r15_8;
    *reinterpret_cast<uint32_t*>(&rax9) = ebx5 >> 3 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(printf);
    r14_10 = g2e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_10) + rax9 * 4) = 0x80;
    if (*reinterpret_cast<uint32_t*>(&rax9) < 56) {
        if (*reinterpret_cast<uint32_t*>(&rax9) <= 51) {
            fun_350();
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        }
    } else {
        if ((*reinterpret_cast<uint32_t*>(&rax9) ^ 60) >= 4) {
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_10) + rax9 * 4 + 4) = reinterpret_cast<int32_t>(printf);
        }
        sha_transform();
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        __asm__("xorps xmm0, xmm0");
        __asm__("movaps [r14+0x20], xmm0");
        __asm__("movaps [r14+0x10], xmm0");
        __asm__("movaps [r14], xmm0");
        r14_10->f30 = reinterpret_cast<int64_t>(printf);
    }
    r14_10->f38 = ebp7;
    r14_10->f3c = ebx5;
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xd8);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps xmm2, [rax+0x20]");
    __asm__("movaps xmm3, [rax+0x30]");
    __asm__("movaps [rsp-0x40], xmm3");
    __asm__("movaps [rsp-0x50], xmm2");
    __asm__("movaps [rsp-0x60], xmm1");
    __asm__("movaps [rsp-0x70], xmm0");
    *reinterpret_cast<int32_t*>(&rax12) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp11) + rax12 * 4 - 0x70) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp11) + rax12 * 4 - 0x90) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp11) + rax12 * 4 - 0x7c) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp11) + rax12 * 4 - 0xa8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp11) + rax12 * 4 - 0xb0);
        ++rax12;
    } while (rax12 != 80);
    rax13 = g4ed;
    r8d14 = rax13->f0;
    edi15 = rax13->f4;
    esi16 = rax13->f8;
    r9d17 = rax13->fc;
    r14d18 = rax13->f10;
    *reinterpret_cast<int32_t*>(&r11_19) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_19) + 4) = reinterpret_cast<int32_t>(printf);
    v20 = r14d18;
    v21 = r9d17;
    ebx22 = esi16;
    ebp23 = edi15;
    r12d24 = r8d14;
    do {
        r10d25 = ebx22;
        r15d26 = r9d17;
        r9d17 = ebp23;
        __asm__("rol r9d, 0x1e");
        __asm__("rol r12d, 0x5");
        ebx22 = r12d24;
        *reinterpret_cast<uint32_t*>(&r12_27) = (~ebp23 & r15d26) + r14d18 + ((r10d25 & ebp23) + r12d24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_27) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r14_28) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp11) + r11_19 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_28) + 4) = reinterpret_cast<int32_t>(printf);
        ebp23 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_28 + r12_27) + 0x5a827999);
        __asm__("rol r14d, 0x5");
        *reinterpret_cast<int32_t*>(&rdx29) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp11) + (reinterpret_cast<uint64_t>(r11_19 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx30) = (~r12d24 & r10d25) + (r9d17 & r12d24) + r15d26 + ebp23;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx30) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d24 = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdx29 + rcx30) + 0x5a827999);
        r11_19 = r11_19 + 2;
        r14d18 = r10d25;
    } while (r11_19 != 20);
    *reinterpret_cast<int32_t*>(&r14_31) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_31) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r15d32 = r9d17;
        r9d17 = ebp23;
        r11d33 = ebx22;
        ebx22 = r12d24;
        __asm__("rol r12d, 0x5");
        *reinterpret_cast<uint32_t*>(&rdx34) = (r11d33 ^ ebp23 ^ r15d32) + r12d24 + r10d25;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx34) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r12_35) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp11) + r14_31 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_35) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol r9d, 0x1e");
        ebp23 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_35 + rdx34) + 0x6ed9eba1);
        __asm__("rol edx, 0x5");
        *reinterpret_cast<int32_t*>(&r10_36) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp11) + (reinterpret_cast<uint64_t>(r14_31 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_36) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx37) = (r12d24 ^ r11d33 ^ r9d17) + r15d32 + ebp23;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d24 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r10_36 + rcx37) + 0x6ed9eba1);
        r14_31 = r14_31 + 2;
        r10d25 = r11d33;
    } while (r14_31 != 40);
    *reinterpret_cast<int32_t*>(&r14_38) = 40;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_38) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r10d39 = ebx22;
        r15d40 = r9d17;
        r9d17 = ebp23;
        __asm__("rol r9d, 0x1e");
        ecx41 = (ebx22 | r9d17) & r12d24;
        __asm__("rol edx, 0x5");
        ebx22 = r12d24;
        *reinterpret_cast<uint32_t*>(&r11_42) = (r15d40 & r10d39 | (r15d40 | r10d39) & ebp23) + (r12d24 + r11d33);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_42) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rdx43) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp11) + r14_38 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx43) + 4) = reinterpret_cast<int32_t>(printf);
        ebp23 = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdx43 + r11_42) - 0x70e44324);
        __asm__("rol edx, 0x5");
        __asm__("rol ebx, 0x1e");
        r12d24 = (r10d39 & r9d17 | ecx41) + r15d40 + ebp23 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp11) + (reinterpret_cast<uint64_t>(r14_38 * 4) | 4) - 0x70) - 0x70e44324;
        r14_38 = r14_38 + 2;
        r11d33 = r10d39;
    } while (r14_38 != 60);
    *reinterpret_cast<int32_t*>(&r14_44) = 60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_44) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r15d45 = r9d17;
        r9d17 = ebp23;
        r11d46 = ebx22;
        ebx22 = r12d24;
        __asm__("rol r12d, 0x5");
        *reinterpret_cast<uint32_t*>(&rdx47) = (r11d46 ^ ebp23 ^ r15d45) + r12d24 + r10d39;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx47) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r12_48) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp11) + r14_44 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_48) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol r9d, 0x1e");
        ebp23 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_48 + rdx47) - 0x359d3e2a);
        __asm__("rol edx, 0x5");
        *reinterpret_cast<int32_t*>(&r10_49) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp11) + (reinterpret_cast<uint64_t>(r14_44 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_49) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx50) = (r12d24 ^ r11d46 ^ r9d17) + r15d45 + ebp23;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx50) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d24 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r10_49 + rcx50) - 0x359d3e2a);
        r14_44 = r14_44 + 2;
        r10d39 = r11d46;
    } while (r14_44 != 80);
    rax13->f0 = r12d24 + r8d14;
    rax13->f4 = ebp23 + edi15;
    rax13->f8 = ebx22 + esi16;
    rax13->fc = r9d17 + v21;
    rax13->f10 = r11d46 + v20;
    goto v51;
}

void fun_381(int32_t* rdi) {
    void* rsp2;
    int32_t eax3;
    int32_t* rsi4;
    int32_t eax5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t eax8;
    int64_t v9;

    rsp2 = __zero_stack_offset();
    if (eax3 != printf) {
        rdi = reinterpret_cast<int32_t*>(0x38c);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
        fun_395(0x38c, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    fun_3be(rdi + 1, rsi4 + 1);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps [rsp+0x10], xmm0");
    rdi6 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
    eax8 = fun_3da();
    if (eax8 != printf) {
        rdi6 = reinterpret_cast<int32_t*>(0x3e5);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
        fun_3ee(0x3e5, rsi7);
    }
    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi6 = *rsi7;
    __asm__("subsd xmm0, [r14]");
    fun_46e(0x467, rsi7 + 1);
    goto v9;
}

void fun_2d3(int64_t rdi, int64_t rsi) {
    void* rsp3;
    uint32_t ebx4;
    uint32_t* r14_5;
    int32_t ebp6;
    int32_t* r15_7;
    int64_t rax8;
    struct s5* r14_9;
    void* rsp10;
    int64_t rax11;
    struct s0* rax12;
    uint32_t r8d13;
    uint32_t edi14;
    uint32_t esi15;
    uint32_t r9d16;
    uint32_t r14d17;
    int64_t r11_18;
    uint32_t v19;
    uint32_t v20;
    uint32_t ebx21;
    uint32_t ebp22;
    uint32_t r12d23;
    uint32_t r10d24;
    uint32_t r15d25;
    int64_t r12_26;
    int64_t r14_27;
    int64_t rdx28;
    int64_t rcx29;
    int64_t r14_30;
    uint32_t r15d31;
    uint32_t r11d32;
    int64_t rdx33;
    int64_t r12_34;
    int64_t r10_35;
    int64_t rcx36;
    int64_t r14_37;
    uint32_t r10d38;
    uint32_t r15d39;
    uint32_t ecx40;
    int64_t r11_41;
    int64_t rdx42;
    int64_t r14_43;
    uint32_t r15d44;
    uint32_t r11d45;
    int64_t rdx46;
    int64_t r12_47;
    int64_t r10_48;
    int64_t rcx49;
    int64_t v50;

    rsp3 = __zero_stack_offset();
    ebx4 = *r14_5;
    ebp6 = *r15_7;
    *reinterpret_cast<uint32_t*>(&rax8) = ebx4 >> 3 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(printf);
    r14_9 = g2e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_9) + rax8 * 4) = 0x80;
    if (*reinterpret_cast<uint32_t*>(&rax8) < 56) {
        if (*reinterpret_cast<uint32_t*>(&rax8) <= 51) {
            fun_350();
            rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        }
    } else {
        if ((*reinterpret_cast<uint32_t*>(&rax8) ^ 60) >= 4) {
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_9) + rax8 * 4 + 4) = reinterpret_cast<int32_t>(printf);
        }
        sha_transform();
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        __asm__("xorps xmm0, xmm0");
        __asm__("movaps [r14+0x20], xmm0");
        __asm__("movaps [r14+0x10], xmm0");
        __asm__("movaps [r14], xmm0");
        r14_9->f30 = reinterpret_cast<int64_t>(printf);
    }
    r14_9->f38 = ebp6;
    r14_9->f3c = ebx4;
    rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xd8);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps xmm2, [rax+0x20]");
    __asm__("movaps xmm3, [rax+0x30]");
    __asm__("movaps [rsp-0x40], xmm3");
    __asm__("movaps [rsp-0x50], xmm2");
    __asm__("movaps [rsp-0x60], xmm1");
    __asm__("movaps [rsp-0x70], xmm0");
    *reinterpret_cast<int32_t*>(&rax11) = 16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp10) + rax11 * 4 - 0x70) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp10) + rax11 * 4 - 0x90) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp10) + rax11 * 4 - 0x7c) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp10) + rax11 * 4 - 0xa8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp10) + rax11 * 4 - 0xb0);
        ++rax11;
    } while (rax11 != 80);
    rax12 = g4ed;
    r8d13 = rax12->f0;
    edi14 = rax12->f4;
    esi15 = rax12->f8;
    r9d16 = rax12->fc;
    r14d17 = rax12->f10;
    *reinterpret_cast<int32_t*>(&r11_18) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_18) + 4) = reinterpret_cast<int32_t>(printf);
    v19 = r14d17;
    v20 = r9d16;
    ebx21 = esi15;
    ebp22 = edi14;
    r12d23 = r8d13;
    do {
        r10d24 = ebx21;
        r15d25 = r9d16;
        r9d16 = ebp22;
        __asm__("rol r9d, 0x1e");
        __asm__("rol r12d, 0x5");
        ebx21 = r12d23;
        *reinterpret_cast<uint32_t*>(&r12_26) = (~ebp22 & r15d25) + r14d17 + ((r10d24 & ebp22) + r12d23);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_26) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r14_27) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp10) + r11_18 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_27) + 4) = reinterpret_cast<int32_t>(printf);
        ebp22 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_27 + r12_26) + 0x5a827999);
        __asm__("rol r14d, 0x5");
        *reinterpret_cast<int32_t*>(&rdx28) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp10) + (reinterpret_cast<uint64_t>(r11_18 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx29) = (~r12d23 & r10d24) + (r9d16 & r12d23) + r15d25 + ebp22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d23 = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdx28 + rcx29) + 0x5a827999);
        r11_18 = r11_18 + 2;
        r14d17 = r10d24;
    } while (r11_18 != 20);
    *reinterpret_cast<int32_t*>(&r14_30) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_30) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r15d31 = r9d16;
        r9d16 = ebp22;
        r11d32 = ebx21;
        ebx21 = r12d23;
        __asm__("rol r12d, 0x5");
        *reinterpret_cast<uint32_t*>(&rdx33) = (r11d32 ^ ebp22 ^ r15d31) + r12d23 + r10d24;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r12_34) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp10) + r14_30 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_34) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol r9d, 0x1e");
        ebp22 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_34 + rdx33) + 0x6ed9eba1);
        __asm__("rol edx, 0x5");
        *reinterpret_cast<int32_t*>(&r10_35) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp10) + (reinterpret_cast<uint64_t>(r14_30 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_35) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx36) = (r12d23 ^ r11d32 ^ r9d16) + r15d31 + ebp22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx36) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d23 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r10_35 + rcx36) + 0x6ed9eba1);
        r14_30 = r14_30 + 2;
        r10d24 = r11d32;
    } while (r14_30 != 40);
    *reinterpret_cast<int32_t*>(&r14_37) = 40;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_37) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r10d38 = ebx21;
        r15d39 = r9d16;
        r9d16 = ebp22;
        __asm__("rol r9d, 0x1e");
        ecx40 = (ebx21 | r9d16) & r12d23;
        __asm__("rol edx, 0x5");
        ebx21 = r12d23;
        *reinterpret_cast<uint32_t*>(&r11_41) = (r15d39 & r10d38 | (r15d39 | r10d38) & ebp22) + (r12d23 + r11d32);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_41) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rdx42) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp10) + r14_37 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx42) + 4) = reinterpret_cast<int32_t>(printf);
        ebp22 = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdx42 + r11_41) - 0x70e44324);
        __asm__("rol edx, 0x5");
        __asm__("rol ebx, 0x1e");
        r12d23 = (r10d38 & r9d16 | ecx40) + r15d39 + ebp22 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp10) + (reinterpret_cast<uint64_t>(r14_37 * 4) | 4) - 0x70) - 0x70e44324;
        r14_37 = r14_37 + 2;
        r11d32 = r10d38;
    } while (r14_37 != 60);
    *reinterpret_cast<int32_t*>(&r14_43) = 60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_43) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r15d44 = r9d16;
        r9d16 = ebp22;
        r11d45 = ebx21;
        ebx21 = r12d23;
        __asm__("rol r12d, 0x5");
        *reinterpret_cast<uint32_t*>(&rdx46) = (r11d45 ^ ebp22 ^ r15d44) + r12d23 + r10d38;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx46) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r12_47) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp10) + r14_43 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_47) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol r9d, 0x1e");
        ebp22 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_47 + rdx46) - 0x359d3e2a);
        __asm__("rol edx, 0x5");
        *reinterpret_cast<int32_t*>(&r10_48) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp10) + (reinterpret_cast<uint64_t>(r14_43 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_48) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx49) = (r12d23 ^ r11d45 ^ r9d16) + r15d44 + ebp22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx49) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d23 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r10_48 + rcx49) - 0x359d3e2a);
        r14_43 = r14_43 + 2;
        r10d38 = r11d45;
    } while (r14_43 != 80);
    rax12->f0 = r12d23 + r8d13;
    rax12->f4 = ebp22 + edi14;
    rax12->f8 = ebx21 + esi15;
    rax12->fc = r9d16 + v20;
    rax12->f10 = r11d45 + v19;
    goto v50;
}

void printf() {
    int32_t edx1;

    if (edx1 >= reinterpret_cast<int32_t>(printf)) {
    }
}

int32_t* g1ab = reinterpret_cast<int32_t*>(0xff508d0000441f0f);

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    int32_t f4;
};

struct s7* g145 = reinterpret_cast<struct s7*>(0x841f0f2e6666);

void fun_138() {
    int32_t r14d1;
    uint32_t eax2;
    uint32_t r14d3;
    int64_t v4;
    int64_t rax5;
    int32_t* rcx6;
    struct s6* rbx7;
    int1_t below_or_equal8;
    struct s7* r15_9;
    int64_t rax10;
    struct s7* rcx11;
    struct s6* rdx12;
    int1_t zf13;
    int64_t r14_14;
    int1_t less_or_equal15;

    if (r14d1 < 64) {
        eax2 = r14d3;
        if (reinterpret_cast<int32_t>(eax2) < reinterpret_cast<int32_t>(4)) {
            addr_1c6_3:
            goto v4;
        } else {
            addr_1a1_4:
            *reinterpret_cast<uint32_t*>(&rax5) = eax2 >> 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
            rcx6 = g1ab;
        }
        do {
            rbx7 = reinterpret_cast<struct s6*>(&rbx7->f4);
            *rcx6 = rbx7->f0;
            ++rcx6;
            below_or_equal8 = *reinterpret_cast<uint32_t*>(&rax5) <= 1;
            *reinterpret_cast<uint32_t*>(&rax5) = static_cast<uint32_t>(rax5 - 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
        } while (!below_or_equal8);
        goto addr_1c6_3;
    } else {
        r15_9 = g145;
        do {
            *reinterpret_cast<int32_t*>(&rax10) = 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(printf);
            rcx11 = r15_9;
            rdx12 = rbx7;
            do {
                rcx11->f0 = rdx12->f0;
                ++rdx12;
                rcx11->f4 = rdx12->f4;
                ++rcx11;
                zf13 = *reinterpret_cast<int32_t*>(&rax10) == 2;
                *reinterpret_cast<int32_t*>(&rax10) = static_cast<int32_t>(rax10 - 2);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(printf);
            } while (!zf13);
            sha_transform();
            rbx7 = rbx7 + 8;
            eax2 = static_cast<uint32_t>(r14_14 - 64);
            less_or_equal15 = *reinterpret_cast<int32_t*>(&r14_14) <= reinterpret_cast<int32_t>(0x7f);
            *reinterpret_cast<uint32_t*>(&r14_14) = eax2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_14) + 4) = reinterpret_cast<int32_t>(printf);
        } while (!less_or_equal15);
        if (reinterpret_cast<int32_t>(eax2) >= reinterpret_cast<int32_t>(4)) 
            goto addr_1a1_4;
        goto addr_1c6_3;
    }
}

uint32_t* g1db = reinterpret_cast<uint32_t*>(0x58b48188b);

struct s8 {
    int32_t f0;
    signed char[44] pad48;
    int64_t f30;
};

struct s8* g1f5 = reinterpret_cast<struct s8*>(0x808604c741);

void sha_final() {
    uint32_t* rax1;
    int64_t rax2;
    struct s8* r14_3;

    rax1 = g1db;
    *reinterpret_cast<uint32_t*>(&rax2) = *rax1 >> 3 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(printf);
    r14_3 = g1f5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_3) + rax2 * 4) = 0x80;
    if (*reinterpret_cast<uint32_t*>(&rax2) < 56) {
        if (*reinterpret_cast<uint32_t*>(&rax2) > 51) 
            goto fun_25d;
        fun_25d();
    } else {
        if ((*reinterpret_cast<uint32_t*>(&rax2) ^ 60) >= 4) {
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_3) + rax2 * 4 + 4) = reinterpret_cast<int32_t>(printf);
        }
        sha_transform();
        __asm__("xorps xmm0, xmm0");
        __asm__("movaps [r14+0x20], xmm0");
        __asm__("movaps [r14+0x10], xmm0");
        __asm__("movaps [r14], xmm0");
        r14_3->f30 = reinterpret_cast<int64_t>(printf);
        goto fun_25d;
    }
}

struct s9 {
    signed char[16] pad16;
    int32_t f10;
};

struct s9* g285 = reinterpret_cast<struct s9*>(0xe1f01040c700290f);

int32_t* g296 = reinterpret_cast<int32_t*>(0x4c0000000006c741);

int32_t* g2a4 = reinterpret_cast<int32_t*>(0x480000000007c741);

int64_t g2b2 = 0x2000bedf8948;

void sha_stream() {
    struct s9* rax1;
    int32_t* r14_2;
    int32_t* r15_3;
    int64_t rbx4;

    __asm__("movaps xmm0, [rip+0x0]");
    rax1 = g285;
    __asm__("movaps [rax], xmm0");
    rax1->f10 = 0xc3d2e1f0;
    r14_2 = g296;
    *r14_2 = reinterpret_cast<int32_t>(printf);
    r15_3 = g2a4;
    *r15_3 = reinterpret_cast<int32_t>(printf);
    rbx4 = g2b2;
    fun_2bf(rbx4, "thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen");
}

void submain() {
    fun_381(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 40);
}

