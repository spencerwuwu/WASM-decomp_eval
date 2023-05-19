
void printf(int64_t rdi);

uint32_t* g2c5 = reinterpret_cast<uint32_t*>(0x4b6f0ff3036f0ff3);

void fun_21d(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int32_t eax5;
    int64_t r12_6;
    int32_t r12d7;
    int64_t rax8;
    int64_t rcx9;
    int64_t rdx10;
    int64_t rdi11;
    uint32_t* rbx12;
    uint32_t* rbx13;
    uint32_t* r15_14;
    void* rbx15;
    void* rbx16;
    void* r15_17;
    void* rbx18;
    void* rbx19;
    void* r15_20;
    void* rbx21;
    void* rbx22;
    void* r15_23;
    uint32_t* rax24;
    uint32_t ecx25;
    uint32_t ecx26;
    uint32_t edx27;
    uint32_t ecx28;
    int64_t v29;

    v4 = reinterpret_cast<int64_t>(__return_address());
    eax5 = 4;
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) > 0x2eeff) {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) != 0x2ef00 && *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) != 0x3e900) {
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) != 0x3e8c0) {
                addr_26c_4:
                *reinterpret_cast<int32_t*>(&r12_6) = r12d7 * eax5;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rax8) = eax5;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<uint32_t*>(&rcx9) = reinterpret_cast<uint32_t>(printf);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                addr_260_5:
                eax5 = 6;
                goto addr_26c_4;
            }
            do {
                rdx10 = rcx9 + r12_6;
                rdi11 = rcx9 << 4;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx12) + rdi11) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx13) + rdi11) ^ r15_14[rdx10];
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx15) + rdi11 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx16) + rdi11 + 4) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_17) + rdx10 * 4 + 0x1e0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx18) + rdi11 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx19) + rdi11 + 8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_20) + rdx10 * 4 + 0x3c0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx21) + rdi11 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx22) + rdi11 + 12) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_23) + rdx10 * 4 + 0x5a0);
                ++rcx9;
            } while (rcx9 != rax8);
            rax24 = g2c5;
            __asm__("movdqu xmm0, [rbx]");
            __asm__("movdqu xmm1, [rbx+0x10]");
            __asm__("movdqu xmm2, [rbx+0x20]");
            __asm__("movdqu xmm3, [rbx+0x30]");
            __asm__("pcmpeqd xmm3, [rip+0x0]");
            __asm__("pcmpeqd xmm4, xmm4");
            __asm__("pxor xmm3, xmm4");
            __asm__("pcmpeqd xmm2, [rip+0x0]");
            __asm__("pxor xmm2, xmm4");
            __asm__("packssdw xmm2, xmm3");
            __asm__("pcmpeqd xmm1, [rip+0x0]");
            __asm__("pxor xmm1, xmm4");
            __asm__("pcmpeqd xmm0, [rip+0x0]");
            __asm__("pxor xmm0, xmm4");
            __asm__("packssdw xmm0, xmm1");
            __asm__("packsswb xmm0, xmm2");
            __asm__("pmovmskb ecx, xmm0");
            ecx25 = *reinterpret_cast<uint32_t*>(&rcx9) - (*reinterpret_cast<uint32_t*>(&rcx9) >> 1 & 0x5555);
            ecx26 = (ecx25 >> 2 & 0x3333) + (ecx25 & 0x3333);
            edx27 = (ecx26 >> 4) + ecx26 & 0xf0f;
            ecx28 = (edx27 >> 8) + edx27;
            *rax24 = *rax24 + *reinterpret_cast<unsigned char*>(&ecx28);
            goto v29;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) == 0x1f4c0) 
            goto addr_260_5;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) != 0x1f500) 
            goto addr_23e_10;
    }
    eax5 = 8;
    goto addr_26c_4;
    addr_23e_10:
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) == 0x2eec0) 
        goto addr_260_5;
    goto addr_26c_4;
}

uint32_t* g16cc = reinterpret_cast<uint32_t*>(0x7c02fd8341288b44);

void fun_16f3(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_16ff(int64_t rdi, int64_t rsi, int64_t rdx);

uint32_t* g17a1 = reinterpret_cast<uint32_t*>(0x4b6f0ff3036f0ff3);

void fun_16c5(int64_t rdi, int64_t rsi) {
    uint32_t* rax3;
    int64_t r13_4;
    uint32_t r14d5;
    int64_t rsi6;
    int32_t* r12_7;
    int64_t rdx8;
    int64_t rbx9;
    int64_t rsi10;
    int32_t* r12_11;
    int64_t rbx12;
    int1_t below_or_equal13;
    int64_t rax14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t ebp18;
    int64_t rcx19;
    int64_t rsi20;
    uint32_t* rbx21;
    uint32_t* rbx22;
    uint32_t* r15_23;
    void* rbx24;
    void* rbx25;
    void* r15_26;
    void* rbx27;
    void* rbx28;
    void* r15_29;
    void* rbx30;
    void* rbx31;
    void* r15_32;
    uint32_t* rax33;
    uint32_t ecx34;
    uint32_t ecx35;
    uint32_t edx36;
    uint32_t ecx37;
    int64_t v38;
    int32_t ebp39;
    int32_t ebp40;
    int32_t ebp41;

    rax3 = g16cc;
    *reinterpret_cast<uint32_t*>(&r13_4) = *rax3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(printf);
    if (*reinterpret_cast<int32_t*>(&r13_4) >= reinterpret_cast<int32_t>(2)) {
        do {
            r14d5 = static_cast<uint32_t>(r13_4 - 1);
            *reinterpret_cast<int32_t*>(&rsi6) = *r12_7;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<uint32_t*>(&rdx8) = r14d5;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(printf);
            fun_16f3(rbx9, rsi6, rdx8);
            *reinterpret_cast<int32_t*>(&rsi10) = *r12_11;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(printf);
            fun_16ff(rbx12, rsi10, rdx8);
            below_or_equal13 = *reinterpret_cast<uint32_t*>(&r13_4) <= 2;
            *reinterpret_cast<uint32_t*>(&r13_4) = r14d5;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(printf);
        } while (!below_or_equal13);
    }
    *reinterpret_cast<int32_t*>(&rax14) = 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    if (ebp15 > 0x2eeff) {
        if (ebp16 != 0x2ef00 && ebp17 != 0x3e900) {
            if (ebp18 != 0x3e8c0) {
                addr_1753_9:
                *reinterpret_cast<uint32_t*>(&rcx19) = reinterpret_cast<uint32_t>(printf);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                addr_1747_10:
                *reinterpret_cast<int32_t*>(&rax14) = 6;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
                goto addr_1753_9;
            }
            do {
                rsi20 = rcx19 << 4;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx21) + rsi20) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx22) + rsi20) ^ r15_23[rcx19];
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx24) + rsi20 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx25) + rsi20 + 4) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_26) + rcx19 * 4 + 0x1e0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx27) + rsi20 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx28) + rsi20 + 8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_29) + rcx19 * 4 + 0x3c0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx30) + rsi20 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx31) + rsi20 + 12) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_32) + rcx19 * 4 + 0x5a0);
                ++rcx19;
            } while (rcx19 != rax14);
            rax33 = g17a1;
            __asm__("movdqu xmm0, [rbx]");
            __asm__("movdqu xmm1, [rbx+0x10]");
            __asm__("movdqu xmm2, [rbx+0x20]");
            __asm__("movdqu xmm3, [rbx+0x30]");
            __asm__("pcmpeqd xmm3, [rip+0x0]");
            __asm__("pcmpeqd xmm4, xmm4");
            __asm__("pxor xmm3, xmm4");
            __asm__("pcmpeqd xmm2, [rip+0x0]");
            __asm__("pxor xmm2, xmm4");
            __asm__("packssdw xmm2, xmm3");
            __asm__("pcmpeqd xmm1, [rip+0x0]");
            __asm__("pxor xmm1, xmm4");
            __asm__("pcmpeqd xmm0, [rip+0x0]");
            __asm__("pxor xmm0, xmm4");
            __asm__("packssdw xmm0, xmm1");
            __asm__("packsswb xmm0, xmm2");
            __asm__("pmovmskb ecx, xmm0");
            ecx34 = *reinterpret_cast<uint32_t*>(&rcx19) - (*reinterpret_cast<uint32_t*>(&rcx19) >> 1 & 0x5555);
            ecx35 = (ecx34 >> 2 & 0x3333) + (ecx34 & 0x3333);
            edx36 = (ecx35 >> 4) + ecx35 & 0xf0f;
            ecx37 = (edx36 >> 8) + edx36;
            *rax33 = *rax33 + *reinterpret_cast<unsigned char*>(&ecx37);
            goto v38;
        }
    } else {
        if (ebp39 == 0x1f4c0) 
            goto addr_1747_10;
        if (ebp40 != 0x1f500) 
            goto addr_1725_15;
    }
    *reinterpret_cast<int32_t*>(&rax14) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    goto addr_1753_9;
    addr_1725_15:
    if (ebp41 == 0x2eec0) 
        goto addr_1747_10;
    goto addr_1753_9;
}

void fun_16f3(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rsi4;
    int32_t* r12_5;
    int64_t rbx6;
    int1_t below_or_equal7;
    int64_t r13_8;
    uint32_t r14d9;
    int64_t rsi10;
    int32_t* r12_11;
    int64_t rdx12;
    int64_t rbx13;
    int64_t rax14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t ebp18;
    int64_t rcx19;
    int64_t rsi20;
    uint32_t* rbx21;
    uint32_t* rbx22;
    uint32_t* r15_23;
    void* rbx24;
    void* rbx25;
    void* r15_26;
    void* rbx27;
    void* rbx28;
    void* r15_29;
    void* rbx30;
    void* rbx31;
    void* r15_32;
    uint32_t* rax33;
    uint32_t ecx34;
    uint32_t ecx35;
    uint32_t edx36;
    uint32_t ecx37;
    int64_t v38;
    int32_t ebp39;
    int32_t ebp40;
    int32_t ebp41;

    while (1) {
        *reinterpret_cast<int32_t*>(&rsi4) = *r12_5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
        fun_16ff(rbx6, rsi4, rdx);
        below_or_equal7 = *reinterpret_cast<uint32_t*>(&r13_8) <= 2;
        *reinterpret_cast<uint32_t*>(&r13_8) = r14d9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_8) + 4) = reinterpret_cast<int32_t>(printf);
        if (below_or_equal7) 
            break;
        r14d9 = static_cast<uint32_t>(r13_8 - 1);
        *reinterpret_cast<int32_t*>(&rsi10) = *r12_11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx12) = r14d9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(printf);
        fun_16f3(rbx13, rsi10, rdx12);
    }
    *reinterpret_cast<int32_t*>(&rax14) = 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    if (ebp15 > 0x2eeff) {
        if (ebp16 != 0x2ef00 && ebp17 != 0x3e900) {
            if (ebp18 != 0x3e8c0) {
                addr_1753_7:
                *reinterpret_cast<uint32_t*>(&rcx19) = reinterpret_cast<uint32_t>(printf);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                addr_1747_8:
                *reinterpret_cast<int32_t*>(&rax14) = 6;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
                goto addr_1753_7;
            }
            do {
                rsi20 = rcx19 << 4;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx21) + rsi20) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx22) + rsi20) ^ r15_23[rcx19];
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx24) + rsi20 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx25) + rsi20 + 4) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_26) + rcx19 * 4 + 0x1e0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx27) + rsi20 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx28) + rsi20 + 8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_29) + rcx19 * 4 + 0x3c0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx30) + rsi20 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx31) + rsi20 + 12) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_32) + rcx19 * 4 + 0x5a0);
                ++rcx19;
            } while (rcx19 != rax14);
            rax33 = g17a1;
            __asm__("movdqu xmm0, [rbx]");
            __asm__("movdqu xmm1, [rbx+0x10]");
            __asm__("movdqu xmm2, [rbx+0x20]");
            __asm__("movdqu xmm3, [rbx+0x30]");
            __asm__("pcmpeqd xmm3, [rip+0x0]");
            __asm__("pcmpeqd xmm4, xmm4");
            __asm__("pxor xmm3, xmm4");
            __asm__("pcmpeqd xmm2, [rip+0x0]");
            __asm__("pxor xmm2, xmm4");
            __asm__("packssdw xmm2, xmm3");
            __asm__("pcmpeqd xmm1, [rip+0x0]");
            __asm__("pxor xmm1, xmm4");
            __asm__("pcmpeqd xmm0, [rip+0x0]");
            __asm__("pxor xmm0, xmm4");
            __asm__("packssdw xmm0, xmm1");
            __asm__("packsswb xmm0, xmm2");
            __asm__("pmovmskb ecx, xmm0");
            ecx34 = *reinterpret_cast<uint32_t*>(&rcx19) - (*reinterpret_cast<uint32_t*>(&rcx19) >> 1 & 0x5555);
            ecx35 = (ecx34 >> 2 & 0x3333) + (ecx34 & 0x3333);
            edx36 = (ecx35 >> 4) + ecx35 & 0xf0f;
            ecx37 = (edx36 >> 8) + edx36;
            *rax33 = *rax33 + *reinterpret_cast<unsigned char*>(&ecx37);
            goto v38;
        }
    } else {
        if (ebp39 == 0x1f4c0) 
            goto addr_1747_8;
        if (ebp40 != 0x1f500) 
            goto addr_1725_13;
    }
    *reinterpret_cast<int32_t*>(&rax14) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    goto addr_1753_7;
    addr_1725_13:
    if (ebp41 == 0x2eec0) 
        goto addr_1747_8;
    goto addr_1753_7;
}

int64_t g240d = 0x5280f03290f;

int64_t g243f = 0x5280f06290f41;

void fun_2477(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_2487(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t fun_2493();

void fun_24a7(int32_t* rdi, int32_t* rsi, int64_t rdx);

void fun_24e5(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_23d9(int32_t* rdi, int32_t* rsi) {
    int64_t rbx3;
    int64_t r14_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t eax7;
    int64_t v8;

    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi;
    __asm__("movaps xmm0, [rip+0x0]");
    rbx3 = g240d;
    __asm__("movaps [rbx], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x10], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x20], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x30], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    r14_4 = g243f;
    __asm__("movaps [r14], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x10], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x20], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x30], xmm0");
    fun_2477(rbx3, r14_4, 0x1f480);
    fun_2487(rbx3, r14_4, 0x1f480);
    rdi5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 + 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
    eax7 = fun_2493();
    if (eax7 != printf) {
        rdi5 = reinterpret_cast<int32_t*>(0x249e);
        *reinterpret_cast<int32_t*>(&rsi6) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
        fun_24a7(0x249e, rsi6, 0x1f480);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi5 = *rsi6;
    __asm__("subsd xmm0, [r12]");
    fun_24e5(0x24de, rsi6 + 1, 0x1f480);
    goto v8;
}

void fun_2477(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbx4;
    int64_t r14_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t eax8;
    int64_t v9;

    fun_2487(rbx4, r14_5, 0x1f480);
    rdi6 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
    eax8 = fun_2493();
    if (eax8 != printf) {
        rdi6 = reinterpret_cast<int32_t*>(0x249e);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
        fun_24a7(0x249e, rsi7, 0x1f480);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi6 = *rsi7;
    __asm__("subsd xmm0, [r12]");
    fun_24e5(0x24de, rsi7 + 1, 0x1f480);
    goto v9;
}

void fun_24a7(int32_t* rdi, int32_t* rsi, int64_t rdx) {
    int64_t v4;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r12]");
    fun_24e5(0x24de, rsi + 1, rdx);
    goto v4;
}

void fun_24e5(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void fun_1f9(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t* g213 = reinterpret_cast<int32_t*>(0xe8df8948308b);

void fun_1eb(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int64_t rsi5;
    int32_t* rbp6;
    int64_t rdx7;
    int64_t r14_8;
    int64_t rbx9;
    int32_t r12d10;
    int1_t less11;
    int32_t* r13_12;
    int64_t rsi13;
    int32_t* rbp14;
    int64_t rbx15;
    int32_t* rax16;
    int64_t rsi17;
    int64_t rbx18;
    int32_t eax19;
    int64_t r12_20;
    int64_t rax21;
    int64_t rcx22;
    int64_t rdx23;
    int64_t rdi24;
    uint32_t* rbx25;
    uint32_t* rbx26;
    uint32_t* r15_27;
    void* rbx28;
    void* rbx29;
    void* r15_30;
    void* rbx31;
    void* rbx32;
    void* r15_33;
    void* rbx34;
    void* rbx35;
    void* r15_36;
    uint32_t* rax37;
    uint32_t ecx38;
    uint32_t ecx39;
    uint32_t edx40;
    uint32_t ecx41;
    int64_t v42;

    while (1) {
        v4 = reinterpret_cast<int64_t>(__return_address());
        *reinterpret_cast<int32_t*>(&rsi5) = *rbp6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rdx7) = *reinterpret_cast<int32_t*>(&r14_8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1f9(rbx9, rsi5, rdx7);
        r12d10 = static_cast<int32_t>(r14_8 + 1);
        less11 = *reinterpret_cast<int32_t*>(&r14_8) < *r13_12 + 9;
        *reinterpret_cast<int32_t*>(&r14_8) = r12d10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_8) + 4) = reinterpret_cast<int32_t>(printf);
        if (!less11) 
            break;
        *reinterpret_cast<int32_t*>(&rsi13) = *rbp14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1eb(rbx15, rsi13, rdx7);
    }
    rax16 = g213;
    *reinterpret_cast<int32_t*>(&rsi17) = *rax16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(printf);
    fun_21d(rbx18, rsi17, rdx7);
    eax19 = 4;
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) > 0x2eeff) {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) != 0x2ef00 && *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) != 0x3e900) {
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) != 0x3e8c0) {
                addr_26c_8:
                *reinterpret_cast<int32_t*>(&r12_20) = r12d10 * eax19;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rax21) = eax19;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<uint32_t*>(&rcx22) = reinterpret_cast<uint32_t>(printf);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                addr_260_9:
                eax19 = 6;
                goto addr_26c_8;
            }
            do {
                rdx23 = rcx22 + r12_20;
                rdi24 = rcx22 << 4;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx25) + rdi24) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx26) + rdi24) ^ r15_27[rdx23];
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx28) + rdi24 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx29) + rdi24 + 4) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_30) + rdx23 * 4 + 0x1e0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx31) + rdi24 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx32) + rdi24 + 8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_33) + rdx23 * 4 + 0x3c0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx34) + rdi24 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx35) + rdi24 + 12) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_36) + rdx23 * 4 + 0x5a0);
                ++rcx22;
            } while (rcx22 != rax21);
            rax37 = g2c5;
            __asm__("movdqu xmm0, [rbx]");
            __asm__("movdqu xmm1, [rbx+0x10]");
            __asm__("movdqu xmm2, [rbx+0x20]");
            __asm__("movdqu xmm3, [rbx+0x30]");
            __asm__("pcmpeqd xmm3, [rip+0x0]");
            __asm__("pcmpeqd xmm4, xmm4");
            __asm__("pxor xmm3, xmm4");
            __asm__("pcmpeqd xmm2, [rip+0x0]");
            __asm__("pxor xmm2, xmm4");
            __asm__("packssdw xmm2, xmm3");
            __asm__("pcmpeqd xmm1, [rip+0x0]");
            __asm__("pxor xmm1, xmm4");
            __asm__("pcmpeqd xmm0, [rip+0x0]");
            __asm__("pxor xmm0, xmm4");
            __asm__("packssdw xmm0, xmm1");
            __asm__("packsswb xmm0, xmm2");
            __asm__("pmovmskb ecx, xmm0");
            ecx38 = *reinterpret_cast<uint32_t*>(&rcx22) - (*reinterpret_cast<uint32_t*>(&rcx22) >> 1 & 0x5555);
            ecx39 = (ecx38 >> 2 & 0x3333) + (ecx38 & 0x3333);
            edx40 = (ecx39 >> 4) + ecx39 & 0xf0f;
            ecx41 = (edx40 >> 8) + edx40;
            *rax37 = *rax37 + *reinterpret_cast<unsigned char*>(&ecx41);
            goto v42;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) == 0x1f4c0) 
            goto addr_260_9;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) != 0x1f500) 
            goto addr_23e_14;
    }
    eax19 = 8;
    goto addr_26c_8;
    addr_23e_14:
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) == 0x2eec0) 
        goto addr_260_9;
    goto addr_26c_8;
}

int32_t* g157d = reinterpret_cast<int32_t*>(0x8b480000000e00c7);

int32_t* g158a = reinterpret_cast<int32_t*>(0xeb80000000800c7);

int32_t* g1530 = reinterpret_cast<int32_t*>(0x8b480000000c00c7);

int32_t* g153d = reinterpret_cast<int32_t*>(0x4b90000000400c7);

int32_t* g15e8 = reinterpret_cast<int32_t*>(0x8b480000000a00c7);

int32_t* g15f5 = reinterpret_cast<int32_t*>(0x4b90000000400c7);

int32_t* g1559 = reinterpret_cast<int32_t*>(0x8b480000000c00c7);

int32_t* g1566 = reinterpret_cast<int32_t*>(0xcb80000000600c7);

int32_t* g159e = reinterpret_cast<int32_t*>(0x8b480000000e00c7);

int32_t* g15ab = reinterpret_cast<int32_t*>(0x4b90000000400c7);

uint32_t* g1663 = reinterpret_cast<uint32_t*>(0x841f0f2e66666666);

int32_t* g16b9 = reinterpret_cast<int32_t*>(0xe8df894824348b41);

int32_t* g160e = reinterpret_cast<int32_t*>(0x8100000004b9008b);

int32_t* g15c7 = reinterpret_cast<int32_t*>(0x8b480000000e00c7);

int32_t* g15d4 = reinterpret_cast<int32_t*>(0xeb80000000600c7);

int32_t* g14c2 = reinterpret_cast<int32_t*>(0x8b480000000e00c7);

int32_t* g14cf = reinterpret_cast<int32_t*>(0xeb80000000800c7);

void fun_1487(int64_t rdi) {
    int32_t ebp2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t eax7;
    int32_t ebp8;
    int32_t* rax9;
    int32_t* rax10;
    int32_t ecx11;
    int32_t ebp12;
    int32_t* rax13;
    int32_t* rax14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t* rax18;
    int32_t* rax19;
    int32_t ebp20;
    int32_t ebp21;
    int32_t* rax22;
    int32_t* rax23;
    int32_t ebp24;
    int32_t ebp25;
    int32_t ebp26;
    int32_t ebp27;
    int32_t ebp28;
    int32_t ebp29;
    int32_t ebp30;
    int64_t rax31;
    int64_t rcx32;
    int64_t rdx33;
    uint32_t* r15_34;
    int64_t rsi35;
    int64_t r8_36;
    uint32_t* rbx37;
    uint32_t* rbx38;
    void* rbx39;
    void* rbx40;
    void* rbx41;
    void* rbx42;
    void* rbx43;
    void* rbx44;
    int32_t* r12_45;
    int64_t rsi46;
    int64_t rbx47;
    uint32_t* rax48;
    int64_t r13_49;
    uint32_t r14d50;
    int64_t rsi51;
    int64_t rdx52;
    int64_t rbx53;
    int64_t rsi54;
    int64_t rbx55;
    int1_t below_or_equal56;
    int64_t rax57;
    int32_t ebp58;
    int32_t ebp59;
    int32_t ebp60;
    int32_t ebp61;
    int64_t rcx62;
    int64_t rsi63;
    uint32_t* rbx64;
    uint32_t* rbx65;
    void* rbx66;
    void* rbx67;
    void* rbx68;
    void* rbx69;
    void* rbx70;
    void* rbx71;
    uint32_t* rax72;
    uint32_t ecx73;
    uint32_t ecx74;
    uint32_t edx75;
    uint32_t ecx76;
    int64_t v77;
    int32_t ebp78;
    int32_t ebp79;
    int32_t ebp80;
    int32_t* rax81;
    int32_t* rax82;
    int32_t* rax83;
    int32_t ebp84;
    int32_t* rax85;
    int32_t* rax86;

    if (ebp2 <= 0x2eebf) {
        if (ebp3 > 0x1f4ff) {
            if (ebp4 == 0x1f500) {
                addr_1576_4:
                rax5 = g157d;
                *rax5 = 14;
                rax6 = g158a;
                *rax6 = 8;
                eax7 = 14;
            } else {
                if (ebp8 == 0x2ee80) {
                    rax9 = g1530;
                    *rax9 = 12;
                    rax10 = g153d;
                    *rax10 = 4;
                    ecx11 = 4;
                    eax7 = 12;
                    goto addr_1653_7;
                }
            }
        } else {
            if (ebp12 == 0x1f480) {
                rax13 = g15e8;
                *rax13 = 10;
                rax14 = g15f5;
                *rax14 = 4;
                ecx11 = 4;
                eax7 = 10;
                goto addr_1653_7;
            }
            if (ebp15 == 0x1f4c0) 
                goto addr_1552_11; else 
                goto addr_14fb_12;
        }
    } else {
        if (ebp16 <= 0x3e87f) {
            if (ebp17 == 0x2eec0) {
                addr_1552_11:
                rax18 = g1559;
                *rax18 = 12;
                rax19 = g1566;
                *rax19 = 6;
                eax7 = 12;
            } else {
                if (ebp20 == 0x2ef00) 
                    goto addr_1576_4;
                goto addr_1607_17;
            }
        } else {
            if (ebp21 == 0x3e880) {
                rax22 = g159e;
                *rax22 = 14;
                rax23 = g15ab;
                *rax23 = 4;
                ecx11 = 4;
                eax7 = 14;
                goto addr_1653_7;
            }
            if (ebp24 == 0x3e8c0) 
                goto addr_15c0_21; else 
                goto addr_14af_22;
        }
    }
    addr_1610_23:
    ecx11 = 4;
    if (ebp25 > 0x2eebf) {
        if (ebp26 == 0x3e8c0) 
            goto addr_164e_25;
        if (ebp27 == 0x2ef00) 
            goto addr_1647_27;
        if (ebp28 == 0x2eec0) 
            goto addr_164e_25;
        goto addr_1653_7;
    }
    if (ebp29 == 0x1f4c0) {
        addr_164e_25:
        ecx11 = 6;
        goto addr_1653_7;
    } else {
        if (ebp30 != 0x1f500) {
            addr_1653_7:
            rax31 = eax7 * ecx11;
            *reinterpret_cast<int32_t*>(&rcx32) = ecx11;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(&rdx33) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = reinterpret_cast<int32_t>(printf);
            r15_34 = g1663;
        } else {
            addr_1647_27:
            ecx11 = 8;
            goto addr_1653_7;
        }
        do {
            rsi35 = rdx33 + rax31;
            r8_36 = rdx33 << 4;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx37) + r8_36) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx38) + r8_36) ^ r15_34[rsi35];
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx39) + r8_36 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx40) + r8_36 + 4) ^ (r15_34 + rsi35)[0x78];
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx41) + r8_36 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx42) + r8_36 + 8) ^ (r15_34 + rsi35)[0xf0];
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx43) + r8_36 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx44) + r8_36 + 12) ^ (r15_34 + rsi35)[0x168];
            ++rdx33;
        } while (rdx33 != rcx32);
        r12_45 = g16b9;
        *reinterpret_cast<int32_t*>(&rsi46) = *r12_45;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi46) + 4) = reinterpret_cast<int32_t>(printf);
        fun_16c5(rbx47, rsi46);
        rax48 = g16cc;
        *reinterpret_cast<uint32_t*>(&r13_49) = *rax48;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_49) + 4) = reinterpret_cast<int32_t>(printf);
        if (*reinterpret_cast<int32_t*>(&r13_49) >= reinterpret_cast<int32_t>(2)) {
            do {
                r14d50 = static_cast<uint32_t>(r13_49 - 1);
                *reinterpret_cast<int32_t*>(&rsi51) = *r12_45;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi51) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<uint32_t*>(&rdx52) = r14d50;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx52) + 4) = reinterpret_cast<int32_t>(printf);
                fun_16f3(rbx53, rsi51, rdx52);
                *reinterpret_cast<int32_t*>(&rsi54) = *r12_45;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi54) + 4) = reinterpret_cast<int32_t>(printf);
                fun_16ff(rbx55, rsi54, rdx52);
                below_or_equal56 = *reinterpret_cast<uint32_t*>(&r13_49) <= 2;
                *reinterpret_cast<uint32_t*>(&r13_49) = r14d50;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_49) + 4) = reinterpret_cast<int32_t>(printf);
            } while (!below_or_equal56);
        }
        *reinterpret_cast<int32_t*>(&rax57) = 4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax57) + 4) = reinterpret_cast<int32_t>(printf);
        if (ebp58 > 0x2eeff) {
            if (ebp59 != 0x2ef00 && ebp60 != 0x3e900) {
                if (ebp61 != 0x3e8c0) {
                    addr_1753_42:
                    *reinterpret_cast<uint32_t*>(&rcx62) = reinterpret_cast<uint32_t>(printf);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx62) + 4) = reinterpret_cast<int32_t>(printf);
                } else {
                    addr_1747_43:
                    *reinterpret_cast<int32_t*>(&rax57) = 6;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax57) + 4) = reinterpret_cast<int32_t>(printf);
                    goto addr_1753_42;
                }
                do {
                    rsi63 = rcx62 << 4;
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx64) + rsi63) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx65) + rsi63) ^ r15_34[rcx62];
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx66) + rsi63 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx67) + rsi63 + 4) ^ (r15_34 + rcx62)[0x78];
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx68) + rsi63 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx69) + rsi63 + 8) ^ (r15_34 + rcx62)[0xf0];
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx70) + rsi63 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx71) + rsi63 + 12) ^ (r15_34 + rcx62)[0x168];
                    ++rcx62;
                } while (rcx62 != rax57);
                rax72 = g17a1;
                __asm__("movdqu xmm0, [rbx]");
                __asm__("movdqu xmm1, [rbx+0x10]");
                __asm__("movdqu xmm2, [rbx+0x20]");
                __asm__("movdqu xmm3, [rbx+0x30]");
                __asm__("pcmpeqd xmm3, [rip+0x0]");
                __asm__("pcmpeqd xmm4, xmm4");
                __asm__("pxor xmm3, xmm4");
                __asm__("pcmpeqd xmm2, [rip+0x0]");
                __asm__("pxor xmm2, xmm4");
                __asm__("packssdw xmm2, xmm3");
                __asm__("pcmpeqd xmm1, [rip+0x0]");
                __asm__("pxor xmm1, xmm4");
                __asm__("pcmpeqd xmm0, [rip+0x0]");
                __asm__("pxor xmm0, xmm4");
                __asm__("packssdw xmm0, xmm1");
                __asm__("packsswb xmm0, xmm2");
                __asm__("pmovmskb ecx, xmm0");
                ecx73 = *reinterpret_cast<uint32_t*>(&rcx62) - (*reinterpret_cast<uint32_t*>(&rcx62) >> 1 & 0x5555);
                ecx74 = (ecx73 >> 2 & 0x3333) + (ecx73 & 0x3333);
                edx75 = (ecx74 >> 4) + ecx74 & 0xf0f;
                ecx76 = (edx75 >> 8) + edx75;
                *rax72 = *rax72 + *reinterpret_cast<unsigned char*>(&ecx76);
                goto v77;
            }
        } else {
            if (ebp78 == 0x1f4c0) 
                goto addr_1747_43;
            if (ebp79 != 0x1f500) 
                goto addr_1725_48;
        }
    }
    *reinterpret_cast<int32_t*>(&rax57) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax57) + 4) = reinterpret_cast<int32_t>(printf);
    goto addr_1753_42;
    addr_1725_48:
    if (ebp80 == 0x2eec0) 
        goto addr_1747_43;
    goto addr_1753_42;
    addr_1607_17:
    rax81 = g160e;
    eax7 = *rax81;
    goto addr_1610_23;
    addr_14fb_12:
    goto addr_1607_17;
    addr_15c0_21:
    rax82 = g15c7;
    *rax82 = 14;
    rax83 = g15d4;
    *rax83 = 6;
    eax7 = 14;
    goto addr_164e_25;
    addr_14af_22:
    if (ebp84 == 0x3e900) {
        rax85 = g14c2;
        *rax85 = 14;
        rax86 = g14cf;
        *rax86 = 8;
        eax7 = 14;
        goto addr_1647_27;
    }
}

void fun_16ff(int64_t rdi, int64_t rsi, int64_t rdx) {
    int1_t below_or_equal4;
    int64_t r13_5;
    uint32_t r14d6;
    int64_t rsi7;
    int32_t* r12_8;
    int64_t rdx9;
    int64_t rbx10;
    int64_t rsi11;
    int32_t* r12_12;
    int64_t rbx13;
    int64_t rax14;
    int32_t ebp15;
    int32_t ebp16;
    int32_t ebp17;
    int32_t ebp18;
    int64_t rcx19;
    int64_t rsi20;
    uint32_t* rbx21;
    uint32_t* rbx22;
    uint32_t* r15_23;
    void* rbx24;
    void* rbx25;
    void* r15_26;
    void* rbx27;
    void* rbx28;
    void* r15_29;
    void* rbx30;
    void* rbx31;
    void* r15_32;
    uint32_t* rax33;
    uint32_t ecx34;
    uint32_t ecx35;
    uint32_t edx36;
    uint32_t ecx37;
    int64_t v38;
    int32_t ebp39;
    int32_t ebp40;
    int32_t ebp41;

    while (below_or_equal4 = *reinterpret_cast<uint32_t*>(&r13_5) <= 2, *reinterpret_cast<uint32_t*>(&r13_5) = r14d6, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(printf), !below_or_equal4) {
        r14d6 = static_cast<uint32_t>(r13_5 - 1);
        *reinterpret_cast<int32_t*>(&rsi7) = *r12_8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx9) = r14d6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(printf);
        fun_16f3(rbx10, rsi7, rdx9);
        *reinterpret_cast<int32_t*>(&rsi11) = *r12_12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(printf);
        fun_16ff(rbx13, rsi11, rdx9);
    }
    *reinterpret_cast<int32_t*>(&rax14) = 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    if (ebp15 > 0x2eeff) {
        if (ebp16 != 0x2ef00 && ebp17 != 0x3e900) {
            if (ebp18 != 0x3e8c0) {
                addr_1753_7:
                *reinterpret_cast<uint32_t*>(&rcx19) = reinterpret_cast<uint32_t>(printf);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                addr_1747_8:
                *reinterpret_cast<int32_t*>(&rax14) = 6;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
                goto addr_1753_7;
            }
            do {
                rsi20 = rcx19 << 4;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx21) + rsi20) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx22) + rsi20) ^ r15_23[rcx19];
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx24) + rsi20 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx25) + rsi20 + 4) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_26) + rcx19 * 4 + 0x1e0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx27) + rsi20 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx28) + rsi20 + 8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_29) + rcx19 * 4 + 0x3c0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx30) + rsi20 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx31) + rsi20 + 12) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_32) + rcx19 * 4 + 0x5a0);
                ++rcx19;
            } while (rcx19 != rax14);
            rax33 = g17a1;
            __asm__("movdqu xmm0, [rbx]");
            __asm__("movdqu xmm1, [rbx+0x10]");
            __asm__("movdqu xmm2, [rbx+0x20]");
            __asm__("movdqu xmm3, [rbx+0x30]");
            __asm__("pcmpeqd xmm3, [rip+0x0]");
            __asm__("pcmpeqd xmm4, xmm4");
            __asm__("pxor xmm3, xmm4");
            __asm__("pcmpeqd xmm2, [rip+0x0]");
            __asm__("pxor xmm2, xmm4");
            __asm__("packssdw xmm2, xmm3");
            __asm__("pcmpeqd xmm1, [rip+0x0]");
            __asm__("pxor xmm1, xmm4");
            __asm__("pcmpeqd xmm0, [rip+0x0]");
            __asm__("pxor xmm0, xmm4");
            __asm__("packssdw xmm0, xmm1");
            __asm__("packsswb xmm0, xmm2");
            __asm__("pmovmskb ecx, xmm0");
            ecx34 = *reinterpret_cast<uint32_t*>(&rcx19) - (*reinterpret_cast<uint32_t*>(&rcx19) >> 1 & 0x5555);
            ecx35 = (ecx34 >> 2 & 0x3333) + (ecx34 & 0x3333);
            edx36 = (ecx35 >> 4) + ecx35 & 0xf0f;
            ecx37 = (edx36 >> 8) + edx36;
            *rax33 = *rax33 + *reinterpret_cast<unsigned char*>(&ecx37);
            goto v38;
        }
    } else {
        if (ebp39 == 0x1f4c0) 
            goto addr_1747_8;
        if (ebp40 != 0x1f500) 
            goto addr_1725_13;
    }
    *reinterpret_cast<int32_t*>(&rax14) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    goto addr_1753_7;
    addr_1725_13:
    if (ebp41 == 0x2eec0) 
        goto addr_1747_8;
    goto addr_1753_7;
}

void fun_238c(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_237c(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbx4;
    int64_t r14_5;
    int64_t v6;

    fun_238c(rbx4, r14_5, 0x1f480);
    goto v6;
}

void fun_2487(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t eax6;
    int64_t v7;

    rdi4 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    *reinterpret_cast<int32_t*>(&rsi5) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(printf);
    eax6 = fun_2493();
    if (eax6 != printf) {
        rdi4 = reinterpret_cast<int32_t*>(0x249e);
        *reinterpret_cast<int32_t*>(&rsi5) = eax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(printf);
        fun_24a7(0x249e, rsi5, rdx);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi4 = *rsi5;
    __asm__("subsd xmm0, [r12]");
    fun_24e5(0x24de, rsi5 + 1, rdx);
    goto v7;
}

void fun_1f9(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int32_t r12d5;
    int64_t r14_6;
    int1_t less7;
    int32_t* r13_8;
    int64_t rsi9;
    int32_t* rbp10;
    int64_t rbx11;
    int64_t rsi12;
    int32_t* rbp13;
    int64_t rdx14;
    int64_t rbx15;
    int32_t* rax16;
    int64_t rsi17;
    int64_t rbx18;
    int32_t eax19;
    int64_t r12_20;
    int64_t rax21;
    int64_t rcx22;
    int64_t rdx23;
    int64_t rdi24;
    uint32_t* rbx25;
    uint32_t* rbx26;
    uint32_t* r15_27;
    void* rbx28;
    void* rbx29;
    void* r15_30;
    void* rbx31;
    void* rbx32;
    void* r15_33;
    void* rbx34;
    void* rbx35;
    void* r15_36;
    uint32_t* rax37;
    uint32_t ecx38;
    uint32_t ecx39;
    uint32_t edx40;
    uint32_t ecx41;
    int64_t v42;

    while (v4 = reinterpret_cast<int64_t>(__return_address()), r12d5 = static_cast<int32_t>(r14_6 + 1), less7 = *reinterpret_cast<int32_t*>(&r14_6) < *r13_8 + 9, *reinterpret_cast<int32_t*>(&r14_6) = r12d5, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_6) + 4) = reinterpret_cast<int32_t>(printf), less7) {
        *reinterpret_cast<int32_t*>(&rsi9) = *rbp10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1eb(rbx11, rsi9, rdx);
        *reinterpret_cast<int32_t*>(&rsi12) = *rbp13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rdx14) = *reinterpret_cast<int32_t*>(&r14_6);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1f9(rbx15, rsi12, rdx14);
    }
    rax16 = g213;
    *reinterpret_cast<int32_t*>(&rsi17) = *rax16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(printf);
    fun_21d(rbx18, rsi17, rdx);
    eax19 = 4;
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) > 0x2eeff) {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) != 0x2ef00 && *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) != 0x3e900) {
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) != 0x3e8c0) {
                addr_26c_8:
                *reinterpret_cast<int32_t*>(&r12_20) = r12d5 * eax19;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rax21) = eax19;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<uint32_t*>(&rcx22) = reinterpret_cast<uint32_t>(printf);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                addr_260_9:
                eax19 = 6;
                goto addr_26c_8;
            }
            do {
                rdx23 = rcx22 + r12_20;
                rdi24 = rcx22 << 4;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx25) + rdi24) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx26) + rdi24) ^ r15_27[rdx23];
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx28) + rdi24 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx29) + rdi24 + 4) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_30) + rdx23 * 4 + 0x1e0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx31) + rdi24 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx32) + rdi24 + 8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_33) + rdx23 * 4 + 0x3c0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx34) + rdi24 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx35) + rdi24 + 12) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_36) + rdx23 * 4 + 0x5a0);
                ++rcx22;
            } while (rcx22 != rax21);
            rax37 = g2c5;
            __asm__("movdqu xmm0, [rbx]");
            __asm__("movdqu xmm1, [rbx+0x10]");
            __asm__("movdqu xmm2, [rbx+0x20]");
            __asm__("movdqu xmm3, [rbx+0x30]");
            __asm__("pcmpeqd xmm3, [rip+0x0]");
            __asm__("pcmpeqd xmm4, xmm4");
            __asm__("pxor xmm3, xmm4");
            __asm__("pcmpeqd xmm2, [rip+0x0]");
            __asm__("pxor xmm2, xmm4");
            __asm__("packssdw xmm2, xmm3");
            __asm__("pcmpeqd xmm1, [rip+0x0]");
            __asm__("pxor xmm1, xmm4");
            __asm__("pcmpeqd xmm0, [rip+0x0]");
            __asm__("pxor xmm0, xmm4");
            __asm__("packssdw xmm0, xmm1");
            __asm__("packsswb xmm0, xmm2");
            __asm__("pmovmskb ecx, xmm0");
            ecx38 = *reinterpret_cast<uint32_t*>(&rcx22) - (*reinterpret_cast<uint32_t*>(&rcx22) >> 1 & 0x5555);
            ecx39 = (ecx38 >> 2 & 0x3333) + (ecx38 & 0x3333);
            edx40 = (ecx39 >> 4) + ecx39 & 0xf0f;
            ecx41 = (edx40 >> 8) + edx40;
            *rax37 = *rax37 + *reinterpret_cast<unsigned char*>(&ecx41);
            goto v42;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) == 0x1f4c0) 
            goto addr_260_9;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) != 0x1f500) 
            goto addr_23e_14;
    }
    eax19 = 8;
    goto addr_26c_8;
    addr_23e_14:
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) == 0x2eec0) 
        goto addr_260_9;
    goto addr_26c_8;
}

void fun_238c(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

int32_t g249e = 0xc031c689;

int32_t fun_2493() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t rdx4;
    int64_t rdx5;
    int64_t v6;

    if (eax1 != printf) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(printf);
        fun_24a7(0x249e, rsi2, rdx4);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g249e = *rsi2;
    __asm__("subsd xmm0, [r12]");
    fun_24e5(0x24de, rsi2 + 1, rdx5);
    goto v6;
}

void fun_23c5(int32_t* rdi) {
    void* rsp2;
    int32_t eax3;
    int32_t* rsi4;
    int32_t eax5;
    int64_t rbx6;
    int64_t r14_7;
    int32_t* rdi8;
    int32_t* rsi9;
    int32_t eax10;
    int64_t v11;

    rsp2 = __zero_stack_offset();
    if (eax3 != printf) {
        rdi = reinterpret_cast<int32_t*>(0x23d0);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
        fun_23d9(0x23d0, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    __asm__("movaps xmm0, [rip+0x0]");
    rbx6 = g240d;
    __asm__("movaps [rbx], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x10], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x20], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x30], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    r14_7 = g243f;
    __asm__("movaps [r14], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x10], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x20], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x30], xmm0");
    fun_2477(rbx6, r14_7, 0x1f480);
    fun_2487(rbx6, r14_7, 0x1f480);
    rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8 - 8 + 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(printf);
    eax10 = fun_2493();
    if (eax10 != printf) {
        rdi8 = reinterpret_cast<int32_t*>(0x249e);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(printf);
        fun_24a7(0x249e, rsi9, 0x1f480);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r12]");
    fun_24e5(0x24de, rsi9 + 1, 0x1f480);
    goto v11;
}

void printf(int64_t rdi) {
}

int32_t* g1b5 = reinterpret_cast<int32_t*>(0x834100000001be41);

void fun_1a8() {
    int1_t zf1;
    int32_t* r13_2;

    if (zf1) {
        r13_2 = g1b5;
        if (*r13_2 < -8) {
            goto 0x20c;
        }
    }
}

struct s0 {
    uint32_t f0;
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
    int32_t f2c;
    int32_t f30;
    int32_t f34;
    int32_t f38;
    int32_t f3c;
    int32_t f40;
    int32_t f44;
    int32_t f48;
    int32_t f4c;
    int32_t f50;
    int32_t f54;
    int32_t f58;
    int32_t f5c;
    int32_t f60;
    int32_t f64;
    int32_t f68;
    int32_t f6c;
    int32_t f70;
    int32_t f74;
    int32_t f78;
    int32_t f7c;
};

struct s1 {
    uint32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
    int32_t f18;
    int32_t f1c;
    signed char[448] pad480;
    int32_t f1e0;
    int32_t f1e4;
    int32_t f1e8;
    int32_t f1ec;
    int32_t f1f0;
    int32_t f1f4;
    int32_t f1f8;
    int32_t f1fc;
    signed char[448] pad960;
    int32_t f3c0;
    int32_t f3c4;
    int32_t f3c8;
    int32_t f3cc;
    int32_t f3d0;
    int32_t f3d4;
    int32_t f3d8;
    int32_t f3dc;
    signed char[448] pad1440;
    int32_t f5a0;
    int32_t f5a4;
    int32_t f5a8;
    int32_t f5ac;
    int32_t f5b0;
    int32_t f5b4;
    int32_t f5b8;
    int32_t f5bc;
};

struct s1* g48a = reinterpret_cast<struct s1*>(0x45045e8b441a8945);

uint120_t g5d4 = 0x41000000001d8b4c;

int64_t KeySchedule(int32_t edi, struct s0* rsi) {
    int64_t rcx3;
    int64_t rax4;
    int32_t r9d5;
    int32_t edx6;
    int64_t rdi7;
    int32_t r8d8;
    int32_t eax9;
    int64_t r9_10;
    struct s1* r10_11;
    int64_t rdi12;
    uint32_t* rsi13;
    int64_t r11_14;
    unsigned char r8b15;
    int64_t rcx16;
    uint32_t edx17;
    int64_t rdx18;
    uint32_t ebx19;
    int64_t rax20;
    int64_t rdx21;
    uint32_t ebp22;
    int64_t rbx23;
    uint32_t* rdx24;
    int64_t r14_25;
    int64_t r15_26;
    int64_t rdx27;
    uint32_t edx28;
    uint32_t edx29;
    uint32_t ebp30;
    uint32_t edx31;

    *reinterpret_cast<int32_t*>(&rcx3) = 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&rax4) = -1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(printf);
    if (edi <= 0x2eebf) {
        r9d5 = 4;
        *reinterpret_cast<signed char*>(&edx6) = 1;
        if (edi > 0x1f4ff) {
            if (edi == 0x1f500) {
                *reinterpret_cast<int32_t*>(&rdi7) = 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rcx3) = 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                if (edi != 0x2ee80) {
                    addr_78b_6:
                    return rax4;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi7) = 13;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(printf);
                    goto addr_457_8;
                }
            }
        } else {
            if (edi == 0x1f480) {
                *reinterpret_cast<int32_t*>(&rdi7) = 11;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                if (edi != 0x1f4c0) 
                    goto addr_78b_6;
                *reinterpret_cast<int32_t*>(&rdi7) = 13;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rcx3) = 6;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
            }
        }
    } else {
        if (edi <= 0x3e87f) {
            if (edi == 0x2eec0) {
                *reinterpret_cast<int32_t*>(&rdi7) = 13;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rcx3) = 6;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
                goto addr_457_8;
            } else {
                if (edi != 0x2ef00) 
                    goto addr_78b_6;
                *reinterpret_cast<int32_t*>(&rdi7) = 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rcx3) = 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
                goto addr_457_8;
            }
        } else {
            if (edi == 0x3e880) {
                *reinterpret_cast<int32_t*>(&rdi7) = 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                if (edi == 0x3e8c0) {
                    *reinterpret_cast<int32_t*>(&rdi7) = 15;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(printf);
                    *reinterpret_cast<int32_t*>(&rcx3) = 6;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
                } else {
                    if (edi != 0x3e900) 
                        goto addr_78b_6;
                    *reinterpret_cast<int32_t*>(&rdi7) = 15;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(printf);
                    *reinterpret_cast<int32_t*>(&rcx3) = 8;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
                }
            }
            r9d5 = 8;
            *reinterpret_cast<unsigned char*>(&r8d8) = 1;
            edx6 = reinterpret_cast<int32_t>(printf);
            goto addr_473_25;
        }
    }
    r8d8 = reinterpret_cast<int32_t>(printf);
    addr_473_25:
    eax9 = reinterpret_cast<int32_t>(printf);
    addr_475_27:
    *reinterpret_cast<int32_t*>(&r9_10) = r9d5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_10) + 4) = reinterpret_cast<int32_t>(printf);
    r10_11 = g48a;
    r10_11->f0 = rsi->f0;
    r10_11->f1e0 = rsi->f4;
    r10_11->f3c0 = rsi->f8;
    r10_11->f5a0 = rsi->fc;
    r10_11->f4 = rsi->f10;
    r10_11->f1e4 = rsi->f14;
    r10_11->f3c4 = rsi->f18;
    r10_11->f5a4 = rsi->f1c;
    r10_11->f8 = rsi->f20;
    r10_11->f1e8 = rsi->f24;
    r10_11->f3c8 = rsi->f28;
    r10_11->f5a8 = rsi->f2c;
    r10_11->fc = rsi->f30;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r10_11) + reinterpret_cast<int64_t>("u")) = rsi->f34;
    r10_11->f3cc = rsi->f38;
    r10_11->f5ac = rsi->f3c;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<signed char*>(&edx6) == printf) && (r10_11->f10 = rsi->f40, r10_11->f1f0 = rsi->f44, r10_11->f3d0 = rsi->f48, r10_11->f5b0 = rsi->f4c, r10_11->f14 = rsi->f50, r10_11->f1f4 = rsi->f54, r10_11->f3d4 = rsi->f58, r10_11->f5b4 = rsi->f5c, reinterpret_cast<int1_t>(*reinterpret_cast<signed char*>(&eax9) == printf))) {
        r10_11->f18 = rsi->f60;
        r10_11->f1f8 = rsi->f64;
        r10_11->f3d8 = rsi->f68;
        r10_11->f5b8 = rsi->f6c;
        r10_11->f1c = rsi->f70;
        r10_11->f1fc = rsi->f74;
        r10_11->f3dc = rsi->f78;
        r10_11->f5bc = rsi->f7c;
    }
    rdi12 = rdi7 * rcx3;
    rsi13 = *reinterpret_cast<uint32_t**>(&g5d4);
    r11_14 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&g5d4) + 7);
    r8b15 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8d8) ^ 1);
    rcx16 = r9_10;
    while (1) {
        edx17 = *reinterpret_cast<uint32_t*>(&rcx16) % *reinterpret_cast<uint32_t*>(&r9_10);
        if (edx17 == printf) {
            *reinterpret_cast<uint32_t*>(&rdx18) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rcx16 * 4 + 0x1dc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(printf);
            ebx19 = static_cast<uint32_t>(rdx18 + 15);
            if (*reinterpret_cast<int32_t*>(&rdx18) >= reinterpret_cast<int32_t>(printf)) {
                ebx19 = *reinterpret_cast<uint32_t*>(&rdx18);
            }
            *reinterpret_cast<uint32_t*>(&rax20) = *reinterpret_cast<uint32_t*>(r11_14 + *reinterpret_cast<uint32_t*>(&rcx16) / *reinterpret_cast<uint32_t*>(&r9_10) * 4 - 4) ^ *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(ebx19) >> 4) << 6) + reinterpret_cast<int64_t>(rsi13) + (*reinterpret_cast<uint32_t*>(&rdx18) - (ebx19 & 0xfffffff0)) * 4);
            *reinterpret_cast<uint32_t*>(&rdx21) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rcx16 * 4 + 0x3bc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(printf);
            ebp22 = static_cast<uint32_t>(rdx21 + 15);
            if (*reinterpret_cast<int32_t*>(&rdx21) >= reinterpret_cast<int32_t>(printf)) {
                ebp22 = *reinterpret_cast<uint32_t*>(&rdx21);
            }
            *reinterpret_cast<uint32_t*>(&rbx23) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rcx16 * 4 - 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx23) + 4) = reinterpret_cast<int32_t>(printf);
            rdx24 = reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(ebp22) >> 4) << 6) + reinterpret_cast<int64_t>(rsi13) + reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rdx21) - (ebp22 & 0xfffffff0)) * 4);
            *reinterpret_cast<uint32_t*>(&r14_25) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rcx16 * 4 + 0x59c);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_25) + 4) = reinterpret_cast<int32_t>(printf);
        } else {
            *reinterpret_cast<uint32_t*>(&rax20) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rcx16 * 4 - 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<uint32_t*>(&r15_26) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rcx16 * 4 + 0x1dc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_26) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<uint32_t*>(&r14_25) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rcx16 * 4 + 0x3bc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_25) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<uint32_t*>(&rbx23) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rcx16 * 4 + 0x59c);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx23) + 4) = reinterpret_cast<int32_t>(printf);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx17 != 4)) | r8b15) == printf)) {
                addr_6ae_37:
                rdx27 = rcx16 - r9_10;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rcx16 * 4) = *reinterpret_cast<uint32_t*>(&rax20) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rdx27 * 4);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rcx16 * 4 + 0x1e0) = *reinterpret_cast<uint32_t*>(&r15_26) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rdx27 * 4 + 0x1e0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rcx16 * 4 + 0x3c0) = *reinterpret_cast<uint32_t*>(&r14_25) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rdx27 * 4 + 0x3c0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rcx16 * 4 + 0x5a0) = *reinterpret_cast<uint32_t*>(&rbx23) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_11) + rdx27 * 4 + 0x5a0);
                ++rcx16;
                if (rcx16 == rdi12) 
                    break; else 
                    continue;
            } else {
                edx28 = static_cast<uint32_t>(rax20 + 15);
                if (*reinterpret_cast<int32_t*>(&rax20) >= reinterpret_cast<int32_t>(printf)) {
                    edx28 = *reinterpret_cast<uint32_t*>(&rax20);
                }
                *reinterpret_cast<uint32_t*>(&rax20) = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(edx28) >> 4) << 6) + reinterpret_cast<int64_t>(rsi13) + (*reinterpret_cast<uint32_t*>(&rax20) - (edx28 & 0xfffffff0)) * 4);
                edx29 = static_cast<uint32_t>(r15_26 + 15);
                if (*reinterpret_cast<int32_t*>(&r15_26) >= reinterpret_cast<int32_t>(printf)) {
                    edx29 = *reinterpret_cast<uint32_t*>(&r15_26);
                }
                rdx24 = reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(edx29) >> 4) << 6) + reinterpret_cast<int64_t>(rsi13) + reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&r15_26) - (edx29 & 0xfffffff0)) * 4);
            }
        }
        ebp30 = static_cast<uint32_t>(r14_25 + 15);
        if (*reinterpret_cast<int32_t*>(&r14_25) >= reinterpret_cast<int32_t>(printf)) {
            ebp30 = *reinterpret_cast<uint32_t*>(&r14_25);
        }
        *reinterpret_cast<uint32_t*>(&r15_26) = *rdx24;
        *reinterpret_cast<uint32_t*>(&r14_25) = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(ebp30) >> 4) << 6) + reinterpret_cast<int64_t>(rsi13) + (*reinterpret_cast<uint32_t*>(&r14_25) - (ebp30 & 0xfffffff0)) * 4);
        edx31 = static_cast<uint32_t>(rbx23 + 15);
        if (*reinterpret_cast<int32_t*>(&rbx23) >= reinterpret_cast<int32_t>(printf)) {
            edx31 = *reinterpret_cast<uint32_t*>(&rbx23);
        }
        *reinterpret_cast<uint32_t*>(&rbx23) = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(edx31) >> 4) << 6) + reinterpret_cast<int64_t>(rsi13) + (*reinterpret_cast<uint32_t*>(&rbx23) - (edx31 & 0xfffffff0)) * 4);
        goto addr_6ae_37;
    }
    *reinterpret_cast<int32_t*>(&rax4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(printf);
    goto addr_78b_6;
    addr_457_8:
    r9d5 = 6;
    *reinterpret_cast<signed char*>(&eax9) = 1;
    r8d8 = reinterpret_cast<int32_t>(printf);
    edx6 = reinterpret_cast<int32_t>(printf);
    goto addr_475_27;
}

struct s2 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
    uint32_t f38;
    uint32_t f3c;
    signed char[4] pad68;
    uint32_t f44;
    uint32_t f48;
    uint32_t f4c;
    signed char[4] pad84;
    uint32_t f54;
    uint32_t f58;
    uint32_t f5c;
    signed char[4] pad100;
    uint32_t f64;
    uint32_t f68;
    uint32_t f6c;
    signed char[4] pad116;
    uint32_t f74;
    uint32_t f78;
    uint32_t f7c;
};

uint32_t* g9e2 = reinterpret_cast<uint32_t*>(0x778b96148bc60148);

uint32_t* gd08 = reinterpret_cast<uint32_t*>(0x778b96148bc60148);

uint32_t* g877 = reinterpret_cast<uint32_t*>(0x778b96148bc60148);

uint32_t* gf4a = reinterpret_cast<uint32_t*>(0x458a0c8b47f20149);

void ByteSub_ShiftRow(struct s2* rdi, int32_t esi) {
    uint32_t ecx3;
    int64_t rdx4;
    uint32_t* rax5;
    uint32_t edx6;
    int64_t rsi7;
    int64_t rsi8;
    int64_t rsi9;
    int64_t rsi10;
    int64_t rsi11;
    int64_t rsi12;
    int64_t rsi13;
    int64_t rcx14;
    uint32_t ecx15;
    int64_t rdx16;
    int64_t rdx17;
    int64_t rdx18;
    int64_t rdx19;
    int64_t rdx20;
    int64_t rdx21;
    int64_t rdx22;
    int64_t rcx23;
    uint32_t ecx24;
    int64_t rdx25;
    int64_t rcx26;
    uint32_t ecx27;
    int64_t rdx28;
    int64_t rcx29;
    uint32_t ecx30;
    int64_t rdx31;
    int64_t rcx32;
    uint32_t ecx33;
    int64_t rdx34;
    int64_t rcx35;
    int64_t rcx36;
    int64_t rcx37;
    int64_t rcx38;
    struct s2* r8_39;
    int64_t rax40;
    int64_t rcx41;
    int64_t rdx42;
    uint32_t ecx43;
    int64_t rdx44;
    uint32_t* rax45;
    uint32_t edx46;
    int64_t rsi47;
    int64_t rsi48;
    int64_t rsi49;
    int64_t rsi50;
    int64_t rsi51;
    int64_t rcx52;
    uint32_t ecx53;
    int64_t rdx54;
    int64_t rdx55;
    int64_t rcx56;
    uint32_t ecx57;
    int64_t rdx58;
    int64_t rdx59;
    int64_t rcx60;
    uint32_t ecx61;
    int64_t rdx62;
    int64_t rcx63;
    uint32_t ecx64;
    int64_t rdx65;
    int64_t rcx66;
    uint32_t ecx67;
    int64_t rdx68;
    int64_t rcx69;
    int64_t rcx70;
    uint32_t ecx71;
    int64_t rdx72;
    uint32_t* rax73;
    uint32_t edx74;
    int64_t rsi75;
    int64_t rsi76;
    int64_t rsi77;
    int64_t rcx78;
    uint32_t ecx79;
    int64_t rdx80;
    int64_t rcx81;
    uint32_t ecx82;
    int64_t rdx83;
    int64_t rcx84;
    uint32_t ecx85;
    int64_t rdx86;
    int64_t rdx87;
    int64_t rdx88;
    int64_t r9_89;
    uint32_t* rsi90;
    int64_t r8_91;
    int64_t rdx92;
    int64_t rcx93;

    if (esi == 8) {
        ecx3 = rdi->f8;
        *reinterpret_cast<uint32_t*>(&rdx4) = rdi->f4 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(printf);
        rax5 = g9e2;
        edx6 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rdx4 * 4);
        *reinterpret_cast<uint32_t*>(&rsi7) = rdi->f14 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f4 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f14) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rsi7 * 4);
        *reinterpret_cast<uint32_t*>(&rsi8) = rdi->f24 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f14 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f24) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rsi8 * 4);
        *reinterpret_cast<uint32_t*>(&rsi9) = rdi->f34 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f24 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f34) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rsi9 * 4);
        *reinterpret_cast<uint32_t*>(&rsi10) = rdi->f44 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f34 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f44) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rsi10 * 4);
        *reinterpret_cast<uint32_t*>(&rsi11) = rdi->f54 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f44 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f54) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rsi11 * 4);
        *reinterpret_cast<uint32_t*>(&rsi12) = rdi->f64 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f54 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f64) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rsi12 * 4);
        *reinterpret_cast<uint32_t*>(&rsi13) = rdi->f74 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f64 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f74) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rsi13 * 4);
        rdi->f74 = edx6;
        *reinterpret_cast<uint32_t*>(&rcx14) = ecx3 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(printf);
        ecx15 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(ecx3) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rcx14 * 4);
        *reinterpret_cast<uint32_t*>(&rdx16) = rdi->f38 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f8 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f38) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rdx16 * 4);
        *reinterpret_cast<uint32_t*>(&rdx17) = rdi->f68 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f38 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f68) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rdx17 * 4);
        *reinterpret_cast<uint32_t*>(&rdx18) = rdi->f18 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f68 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rdx18 * 4);
        *reinterpret_cast<uint32_t*>(&rdx19) = rdi->f48 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f18 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f48) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rdx19 * 4);
        *reinterpret_cast<uint32_t*>(&rdx20) = rdi->f78 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f48 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f78) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rdx20 * 4);
        *reinterpret_cast<uint32_t*>(&rdx21) = rdi->f28 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f78 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f28) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rdx21 * 4);
        *reinterpret_cast<uint32_t*>(&rdx22) = rdi->f58 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f28 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f58) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rdx22 * 4);
        rdi->f58 = ecx15;
        *reinterpret_cast<uint32_t*>(&rcx23) = rdi->fc & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(printf);
        ecx24 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->fc) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rcx23 * 4);
        *reinterpret_cast<uint32_t*>(&rdx25) = rdi->f4c & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->fc = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4c) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rdx25 * 4);
        rdi->f4c = ecx24;
        *reinterpret_cast<uint32_t*>(&rcx26) = rdi->f1c & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = reinterpret_cast<int32_t>(printf);
        ecx27 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f1c) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rcx26 * 4);
        *reinterpret_cast<uint32_t*>(&rdx28) = rdi->f5c & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f1c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f5c) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rdx28 * 4);
        rdi->f5c = ecx27;
        *reinterpret_cast<uint32_t*>(&rcx29) = rdi->f2c & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(printf);
        ecx30 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f2c) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rcx29 * 4);
        *reinterpret_cast<uint32_t*>(&rdx31) = rdi->f6c & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f2c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f6c) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rdx31 * 4);
        rdi->f6c = ecx30;
        *reinterpret_cast<uint32_t*>(&rcx32) = rdi->f3c & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = reinterpret_cast<int32_t>(printf);
        ecx33 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f3c) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rcx32 * 4);
        *reinterpret_cast<uint32_t*>(&rdx34) = rdi->f7c & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx34) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f3c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f7c) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rdx34 * 4);
        rdi->f7c = ecx33;
        *reinterpret_cast<uint32_t*>(&rcx35) = rdi->f0 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f0 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f0) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rcx35 * 4);
        *reinterpret_cast<uint32_t*>(&rcx36) = rdi->f10 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx36) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f10 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f10) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rcx36 * 4);
        *reinterpret_cast<uint32_t*>(&rcx37) = rdi->f20 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f20 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f20) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rcx37 * 4);
        *reinterpret_cast<uint32_t*>(&rcx38) = rdi->f30 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx38) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f30 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f30) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rcx38 * 4);
        r8_39 = reinterpret_cast<struct s2*>(&rdi->pad68);
        *reinterpret_cast<int32_t*>(&rax40) = 28;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax40) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rcx41) = 24;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rdx42) = 20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx42) + 4) = reinterpret_cast<int32_t>(printf);
    } else {
        if (esi == 6) {
            ecx43 = rdi->f8;
            *reinterpret_cast<uint32_t*>(&rdx44) = rdi->f4 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx44) + 4) = reinterpret_cast<int32_t>(printf);
            rax45 = gd08;
            edx46 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rdx44 * 4);
            *reinterpret_cast<uint32_t*>(&rsi47) = rdi->f14 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi47) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f4 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f14) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rsi47 * 4);
            *reinterpret_cast<uint32_t*>(&rsi48) = rdi->f24 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi48) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f14 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f24) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rsi48 * 4);
            *reinterpret_cast<uint32_t*>(&rsi49) = rdi->f34 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi49) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f24 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f34) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rsi49 * 4);
            *reinterpret_cast<uint32_t*>(&rsi50) = rdi->f44 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi50) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f34 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f44) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rsi50 * 4);
            *reinterpret_cast<uint32_t*>(&rsi51) = rdi->f54 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi51) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f44 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f54) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rsi51 * 4);
            rdi->f54 = edx46;
            *reinterpret_cast<uint32_t*>(&rcx52) = ecx43 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx52) + 4) = reinterpret_cast<int32_t>(printf);
            ecx53 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(ecx43) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rcx52 * 4);
            *reinterpret_cast<uint32_t*>(&rdx54) = rdi->f28 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx54) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f8 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f28) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rdx54 * 4);
            *reinterpret_cast<uint32_t*>(&rdx55) = rdi->f48 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx55) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f28 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f48) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rdx55 * 4);
            rdi->f48 = ecx53;
            *reinterpret_cast<uint32_t*>(&rcx56) = rdi->f18 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx56) + 4) = reinterpret_cast<int32_t>(printf);
            ecx57 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rcx56 * 4);
            *reinterpret_cast<uint32_t*>(&rdx58) = rdi->f38 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx58) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f18 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f38) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rdx58 * 4);
            *reinterpret_cast<uint32_t*>(&rdx59) = rdi->f58 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx59) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f38 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f58) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rdx59 * 4);
            rdi->f58 = ecx57;
            *reinterpret_cast<uint32_t*>(&rcx60) = rdi->fc & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx60) + 4) = reinterpret_cast<int32_t>(printf);
            ecx61 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->fc) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rcx60 * 4);
            *reinterpret_cast<uint32_t*>(&rdx62) = rdi->f3c & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx62) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->fc = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f3c) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rdx62 * 4);
            rdi->f3c = ecx61;
            *reinterpret_cast<uint32_t*>(&rcx63) = rdi->f1c & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx63) + 4) = reinterpret_cast<int32_t>(printf);
            ecx64 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f1c) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rcx63 * 4);
            *reinterpret_cast<uint32_t*>(&rdx65) = rdi->f4c & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx65) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f1c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4c) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rdx65 * 4);
            rdi->f4c = ecx64;
            *reinterpret_cast<uint32_t*>(&rcx66) = rdi->f2c & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx66) + 4) = reinterpret_cast<int32_t>(printf);
            ecx67 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f2c) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rcx66 * 4);
            *reinterpret_cast<uint32_t*>(&rdx68) = rdi->f5c & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx68) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f2c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f5c) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rdx68 * 4);
            rdi->f5c = ecx67;
            *reinterpret_cast<uint32_t*>(&rcx69) = rdi->f0 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx69) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f0 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f0) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rcx69 * 4);
            *reinterpret_cast<uint32_t*>(&rcx70) = rdi->f10 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx70) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f10 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f10) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rcx70 * 4);
            r8_39 = reinterpret_cast<struct s2*>(&rdi->f20);
            *reinterpret_cast<int32_t*>(&rax40) = 20;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax40) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(&rcx41) = 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(&rdx42) = 12;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx42) + 4) = reinterpret_cast<int32_t>(printf);
        } else {
            if (esi != 4) {
                addr_fae_6:
                return;
            } else {
                ecx71 = rdi->f8;
                *reinterpret_cast<uint32_t*>(&rdx72) = rdi->f4 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx72) + 4) = reinterpret_cast<int32_t>(printf);
                rax73 = g877;
                edx74 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4) >> 4) << 6) + reinterpret_cast<int64_t>(rax73) + rdx72 * 4);
                *reinterpret_cast<uint32_t*>(&rsi75) = rdi->f14 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi75) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f4 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f14) >> 4) << 6) + reinterpret_cast<int64_t>(rax73) + rsi75 * 4);
                *reinterpret_cast<uint32_t*>(&rsi76) = rdi->f24 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi76) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f14 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f24) >> 4) << 6) + reinterpret_cast<int64_t>(rax73) + rsi76 * 4);
                *reinterpret_cast<uint32_t*>(&rsi77) = rdi->f34 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi77) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f24 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f34) >> 4) << 6) + reinterpret_cast<int64_t>(rax73) + rsi77 * 4);
                rdi->f34 = edx74;
                *reinterpret_cast<uint32_t*>(&rcx78) = ecx71 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx78) + 4) = reinterpret_cast<int32_t>(printf);
                ecx79 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(ecx71) >> 4) << 6) + reinterpret_cast<int64_t>(rax73) + rcx78 * 4);
                *reinterpret_cast<uint32_t*>(&rdx80) = rdi->f28 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx80) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f8 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f28) >> 4) << 6) + reinterpret_cast<int64_t>(rax73) + rdx80 * 4);
                rdi->f28 = ecx79;
                *reinterpret_cast<uint32_t*>(&rcx81) = rdi->f18 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx81) + 4) = reinterpret_cast<int32_t>(printf);
                ecx82 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18) >> 4) << 6) + reinterpret_cast<int64_t>(rax73) + rcx81 * 4);
                *reinterpret_cast<uint32_t*>(&rdx83) = rdi->f38 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx83) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f18 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f38) >> 4) << 6) + reinterpret_cast<int64_t>(rax73) + rdx83 * 4);
                rdi->f38 = ecx82;
                *reinterpret_cast<uint32_t*>(&rcx84) = rdi->fc & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx84) + 4) = reinterpret_cast<int32_t>(printf);
                ecx85 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->fc) >> 4) << 6) + reinterpret_cast<int64_t>(rax73) + rcx84 * 4);
                *reinterpret_cast<uint32_t*>(&rdx86) = rdi->f3c & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx86) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->fc = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f3c) >> 4) << 6) + reinterpret_cast<int64_t>(rax73) + rdx86 * 4);
                *reinterpret_cast<uint32_t*>(&rdx87) = rdi->f2c & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx87) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f3c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f2c) >> 4) << 6) + reinterpret_cast<int64_t>(rax73) + rdx87 * 4);
                *reinterpret_cast<uint32_t*>(&rdx88) = rdi->f1c & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx88) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f2c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f1c) >> 4) << 6) + reinterpret_cast<int64_t>(rax73) + rdx88 * 4);
                rdi->f1c = ecx85;
                *reinterpret_cast<int32_t*>(&rax40) = 12;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax40) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rcx41) = 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rdx42) = 4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx42) + 4) = reinterpret_cast<int32_t>(printf);
                r8_39 = rdi;
            }
        }
    }
    *reinterpret_cast<uint32_t*>(&r9_89) = r8_39->f0 & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_89) + 4) = reinterpret_cast<int32_t>(printf);
    rsi90 = gf4a;
    r8_39->f0 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(r8_39->f0) >> 4) << 6) + reinterpret_cast<int64_t>(rsi90) + r9_89 * 4);
    *reinterpret_cast<uint32_t*>(&r8_91) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rdx42 * 4) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_91) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rdx42 * 4) = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + rdx42 * 4) >> 4) << 6) + reinterpret_cast<int64_t>(rsi90) + r8_91 * 4);
    *reinterpret_cast<uint32_t*>(&rdx92) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rcx41 * 4) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx92) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rcx41 * 4) = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + rcx41 * 4) >> 4) << 6) + reinterpret_cast<int64_t>(rsi90) + rdx92 * 4);
    *reinterpret_cast<uint32_t*>(&rcx93) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rax40 * 4) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx93) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rax40 * 4) = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + rax40 * 4) >> 4) << 6) + reinterpret_cast<int64_t>(rsi90) + rcx93 * 4);
    goto addr_fae_6;
}

void decrypt(int64_t rdi) {
    int64_t rdi2;
    int32_t edx3;

    *reinterpret_cast<int32_t*>(&rdi2) = edx3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(printf);
    fun_1487(rdi2);
}

struct s3 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
    uint32_t f38;
    uint32_t f3c;
    signed char[4] pad68;
    uint32_t f44;
    uint32_t f48;
    uint32_t f4c;
    signed char[4] pad84;
    uint32_t f54;
    uint32_t f58;
    uint32_t f5c;
    signed char[4] pad100;
    uint32_t f64;
    uint32_t f68;
    uint32_t f6c;
    signed char[4] pad116;
    uint32_t f74;
    uint32_t f78;
    uint32_t f7c;
};

uint32_t* g19ec = reinterpret_cast<uint32_t*>(0x578b8a0c8bc20148);

uint32_t* g1d00 = reinterpret_cast<uint32_t*>(0x578b8a0c8bc20148);

uint32_t* g1884 = reinterpret_cast<uint32_t*>(0x4f8b8a148bc20148);

uint32_t* g1f39 = reinterpret_cast<uint32_t*>(0x458a0c8b47f20149);

void InversShiftRow_ByteSub(struct s3* rdi, int32_t esi) {
    int64_t rcx3;
    uint32_t* rax4;
    uint32_t ecx5;
    int64_t rdx6;
    int64_t rdx7;
    int64_t rdx8;
    int64_t rdx9;
    int64_t rdx10;
    uint32_t edx11;
    int64_t rsi12;
    int64_t rdx13;
    int64_t rcx14;
    uint32_t ecx15;
    int64_t rdx16;
    int64_t rdx17;
    int64_t rdx18;
    int64_t rdx19;
    int64_t rdx20;
    int64_t rdx21;
    int64_t rdx22;
    int64_t rdx23;
    uint32_t edx24;
    int64_t rcx25;
    int64_t rdx26;
    uint32_t edx27;
    int64_t rcx28;
    int64_t rdx29;
    uint32_t edx30;
    int64_t rcx31;
    int64_t rdx32;
    uint32_t edx33;
    int64_t rcx34;
    int64_t rcx35;
    int64_t rcx36;
    int64_t rcx37;
    int64_t rcx38;
    struct s3* r8_39;
    int64_t rax40;
    int64_t rcx41;
    int64_t rdx42;
    int64_t rcx43;
    uint32_t* rax44;
    uint32_t ecx45;
    int64_t rdx46;
    int64_t rdx47;
    int64_t rdx48;
    uint32_t edx49;
    int64_t rsi50;
    int64_t rdx51;
    int64_t rcx52;
    uint32_t ecx53;
    int64_t rdx54;
    int64_t rdx55;
    int64_t rdx56;
    uint32_t edx57;
    int64_t rcx58;
    int64_t rcx59;
    int64_t rdx60;
    uint32_t edx61;
    int64_t rcx62;
    int64_t rdx63;
    uint32_t edx64;
    int64_t rcx65;
    int64_t rdx66;
    uint32_t edx67;
    int64_t rcx68;
    int64_t rcx69;
    int64_t rcx70;
    int64_t rcx71;
    uint32_t* rax72;
    uint32_t edx73;
    int64_t rcx74;
    int64_t rcx75;
    uint32_t ecx76;
    int64_t rsi77;
    int64_t rdx78;
    uint32_t edx79;
    int64_t rsi80;
    int64_t rcx81;
    uint32_t ecx82;
    int64_t rdx83;
    int64_t rcx84;
    uint32_t ecx85;
    int64_t rdx86;
    int64_t rdx87;
    int64_t rdx88;
    int64_t r9_89;
    uint32_t* rsi90;
    int64_t r8_91;
    int64_t rdx92;
    int64_t rcx93;

    if (esi == 8) {
        *reinterpret_cast<uint32_t*>(&rcx3) = rdi->f74 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
        rax4 = g19ec;
        ecx5 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f74) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rcx3 * 4);
        *reinterpret_cast<uint32_t*>(&rdx6) = rdi->f64 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f74 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f64) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx6 * 4);
        *reinterpret_cast<uint32_t*>(&rdx7) = rdi->f54 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f64 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f54) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx7 * 4);
        *reinterpret_cast<uint32_t*>(&rdx8) = rdi->f44 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f54 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f44) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx8 * 4);
        *reinterpret_cast<uint32_t*>(&rdx9) = rdi->f34 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f44 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f34) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx9 * 4);
        *reinterpret_cast<uint32_t*>(&rdx10) = rdi->f24 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f34 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f24) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx10 * 4);
        edx11 = rdi->f4;
        *reinterpret_cast<uint32_t*>(&rsi12) = rdi->f14 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f24 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f14) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rsi12 * 4);
        *reinterpret_cast<uint32_t*>(&rdx13) = edx11 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f14 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(edx11) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx13 * 4);
        rdi->f4 = ecx5;
        *reinterpret_cast<uint32_t*>(&rcx14) = rdi->f78 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(printf);
        ecx15 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f78) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rcx14 * 4);
        *reinterpret_cast<uint32_t*>(&rdx16) = rdi->f48 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f78 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f48) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx16 * 4);
        *reinterpret_cast<uint32_t*>(&rdx17) = rdi->f18 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f48 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx17 * 4);
        *reinterpret_cast<uint32_t*>(&rdx18) = rdi->f68 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f18 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f68) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx18 * 4);
        *reinterpret_cast<uint32_t*>(&rdx19) = rdi->f38 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f68 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f38) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx19 * 4);
        *reinterpret_cast<uint32_t*>(&rdx20) = rdi->f8 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f38 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f8) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx20 * 4);
        *reinterpret_cast<uint32_t*>(&rdx21) = rdi->f58 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f8 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f58) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx21 * 4);
        *reinterpret_cast<uint32_t*>(&rdx22) = rdi->f28 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f58 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f28) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx22 * 4);
        rdi->f28 = ecx15;
        *reinterpret_cast<uint32_t*>(&rdx23) = rdi->f7c & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(printf);
        edx24 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f7c) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx23 * 4);
        *reinterpret_cast<uint32_t*>(&rcx25) = rdi->f3c & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f7c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f3c) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rcx25 * 4);
        rdi->f3c = edx24;
        *reinterpret_cast<uint32_t*>(&rdx26) = rdi->f6c & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(printf);
        edx27 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f6c) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx26 * 4);
        *reinterpret_cast<uint32_t*>(&rcx28) = rdi->f2c & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f6c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f2c) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rcx28 * 4);
        rdi->f2c = edx27;
        *reinterpret_cast<uint32_t*>(&rdx29) = rdi->f5c & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(printf);
        edx30 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f5c) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx29 * 4);
        *reinterpret_cast<uint32_t*>(&rcx31) = rdi->f1c & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f5c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f1c) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rcx31 * 4);
        rdi->f1c = edx30;
        *reinterpret_cast<uint32_t*>(&rdx32) = rdi->f4c & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(printf);
        edx33 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4c) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rdx32 * 4);
        *reinterpret_cast<uint32_t*>(&rcx34) = rdi->fc & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f4c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->fc) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rcx34 * 4);
        rdi->fc = edx33;
        *reinterpret_cast<uint32_t*>(&rcx35) = rdi->f0 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f0 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f0) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rcx35 * 4);
        *reinterpret_cast<uint32_t*>(&rcx36) = rdi->f10 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx36) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f10 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f10) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rcx36 * 4);
        *reinterpret_cast<uint32_t*>(&rcx37) = rdi->f20 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f20 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f20) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rcx37 * 4);
        *reinterpret_cast<uint32_t*>(&rcx38) = rdi->f30 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx38) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f30 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f30) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rcx38 * 4);
        r8_39 = reinterpret_cast<struct s3*>(&rdi->pad68);
        *reinterpret_cast<int32_t*>(&rax40) = 28;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax40) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rcx41) = 24;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rdx42) = 20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx42) + 4) = reinterpret_cast<int32_t>(printf);
    } else {
        if (esi == 6) {
            *reinterpret_cast<uint32_t*>(&rcx43) = rdi->f54 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx43) + 4) = reinterpret_cast<int32_t>(printf);
            rax44 = g1d00;
            ecx45 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f54) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rcx43 * 4);
            *reinterpret_cast<uint32_t*>(&rdx46) = rdi->f44 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx46) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f54 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f44) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rdx46 * 4);
            *reinterpret_cast<uint32_t*>(&rdx47) = rdi->f34 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx47) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f44 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f34) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rdx47 * 4);
            *reinterpret_cast<uint32_t*>(&rdx48) = rdi->f24 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx48) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f34 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f24) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rdx48 * 4);
            edx49 = rdi->f4;
            *reinterpret_cast<uint32_t*>(&rsi50) = rdi->f14 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi50) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f24 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f14) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rsi50 * 4);
            *reinterpret_cast<uint32_t*>(&rdx51) = edx49 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx51) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f14 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(edx49) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rdx51 * 4);
            rdi->f4 = ecx45;
            *reinterpret_cast<uint32_t*>(&rcx52) = rdi->f58 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx52) + 4) = reinterpret_cast<int32_t>(printf);
            ecx53 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f58) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rcx52 * 4);
            *reinterpret_cast<uint32_t*>(&rdx54) = rdi->f38 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx54) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f58 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f38) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rdx54 * 4);
            *reinterpret_cast<uint32_t*>(&rdx55) = rdi->f18 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx55) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f38 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rdx55 * 4);
            rdi->f18 = ecx53;
            *reinterpret_cast<uint32_t*>(&rdx56) = rdi->f48 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx56) + 4) = reinterpret_cast<int32_t>(printf);
            edx57 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f48) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rdx56 * 4);
            *reinterpret_cast<uint32_t*>(&rcx58) = rdi->f28 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx58) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f48 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f28) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rcx58 * 4);
            *reinterpret_cast<uint32_t*>(&rcx59) = rdi->f8 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx59) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f28 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f8) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rcx59 * 4);
            rdi->f8 = edx57;
            *reinterpret_cast<uint32_t*>(&rdx60) = rdi->f3c & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx60) + 4) = reinterpret_cast<int32_t>(printf);
            edx61 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f3c) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rdx60 * 4);
            *reinterpret_cast<uint32_t*>(&rcx62) = rdi->fc & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx62) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f3c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->fc) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rcx62 * 4);
            rdi->fc = edx61;
            *reinterpret_cast<uint32_t*>(&rdx63) = rdi->f4c & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx63) + 4) = reinterpret_cast<int32_t>(printf);
            edx64 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4c) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rdx63 * 4);
            *reinterpret_cast<uint32_t*>(&rcx65) = rdi->f1c & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx65) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f4c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f1c) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rcx65 * 4);
            rdi->f1c = edx64;
            *reinterpret_cast<uint32_t*>(&rdx66) = rdi->f5c & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx66) + 4) = reinterpret_cast<int32_t>(printf);
            edx67 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f5c) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rdx66 * 4);
            *reinterpret_cast<uint32_t*>(&rcx68) = rdi->f2c & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx68) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f5c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f2c) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rcx68 * 4);
            rdi->f2c = edx67;
            *reinterpret_cast<uint32_t*>(&rcx69) = rdi->f0 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx69) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f0 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f0) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rcx69 * 4);
            *reinterpret_cast<uint32_t*>(&rcx70) = rdi->f10 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx70) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f10 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f10) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rcx70 * 4);
            r8_39 = reinterpret_cast<struct s3*>(&rdi->f20);
            *reinterpret_cast<int32_t*>(&rax40) = 20;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax40) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(&rcx41) = 16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(&rdx42) = 12;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx42) + 4) = reinterpret_cast<int32_t>(printf);
        } else {
            if (esi != 4) {
                addr_1f9d_6:
                return;
            } else {
                *reinterpret_cast<uint32_t*>(&rcx71) = rdi->f34 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx71) + 4) = reinterpret_cast<int32_t>(printf);
                rax72 = g1884;
                edx73 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f34) >> 4) << 6) + reinterpret_cast<int64_t>(rax72) + rcx71 * 4);
                *reinterpret_cast<uint32_t*>(&rcx74) = rdi->f24 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx74) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f34 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f24) >> 4) << 6) + reinterpret_cast<int64_t>(rax72) + rcx74 * 4);
                *reinterpret_cast<uint32_t*>(&rcx75) = rdi->f14 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx75) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f24 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f14) >> 4) << 6) + reinterpret_cast<int64_t>(rax72) + rcx75 * 4);
                ecx76 = rdi->f8;
                *reinterpret_cast<uint32_t*>(&rsi77) = rdi->f4 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi77) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f14 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4) >> 4) << 6) + reinterpret_cast<int64_t>(rax72) + rsi77 * 4);
                rdi->f4 = edx73;
                *reinterpret_cast<uint32_t*>(&rdx78) = rdi->f38 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx78) + 4) = reinterpret_cast<int32_t>(printf);
                edx79 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f38) >> 4) << 6) + reinterpret_cast<int64_t>(rax72) + rdx78 * 4);
                *reinterpret_cast<uint32_t*>(&rsi80) = rdi->f18 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi80) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f38 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18) >> 4) << 6) + reinterpret_cast<int64_t>(rax72) + rsi80 * 4);
                rdi->f18 = edx79;
                *reinterpret_cast<uint32_t*>(&rcx81) = ecx76 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx81) + 4) = reinterpret_cast<int32_t>(printf);
                ecx82 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(ecx76) >> 4) << 6) + reinterpret_cast<int64_t>(rax72) + rcx81 * 4);
                *reinterpret_cast<uint32_t*>(&rdx83) = rdi->f28 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx83) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f8 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f28) >> 4) << 6) + reinterpret_cast<int64_t>(rax72) + rdx83 * 4);
                rdi->f28 = ecx82;
                *reinterpret_cast<uint32_t*>(&rcx84) = rdi->f3c & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx84) + 4) = reinterpret_cast<int32_t>(printf);
                ecx85 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f3c) >> 4) << 6) + reinterpret_cast<int64_t>(rax72) + rcx84 * 4);
                *reinterpret_cast<uint32_t*>(&rdx86) = rdi->fc & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx86) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f3c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->fc) >> 4) << 6) + reinterpret_cast<int64_t>(rax72) + rdx86 * 4);
                *reinterpret_cast<uint32_t*>(&rdx87) = rdi->f1c & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx87) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->fc = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f1c) >> 4) << 6) + reinterpret_cast<int64_t>(rax72) + rdx87 * 4);
                *reinterpret_cast<uint32_t*>(&rdx88) = rdi->f2c & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx88) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f1c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f2c) >> 4) << 6) + reinterpret_cast<int64_t>(rax72) + rdx88 * 4);
                rdi->f2c = ecx85;
                *reinterpret_cast<int32_t*>(&rax40) = 12;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax40) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rcx41) = 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rdx42) = 4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx42) + 4) = reinterpret_cast<int32_t>(printf);
                r8_39 = rdi;
            }
        }
    }
    *reinterpret_cast<uint32_t*>(&r9_89) = r8_39->f0 & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_89) + 4) = reinterpret_cast<int32_t>(printf);
    rsi90 = g1f39;
    r8_39->f0 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(r8_39->f0) >> 4) << 6) + reinterpret_cast<int64_t>(rsi90) + r9_89 * 4);
    *reinterpret_cast<uint32_t*>(&r8_91) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rdx42 * 4) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_91) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rdx42 * 4) = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + rdx42 * 4) >> 4) << 6) + reinterpret_cast<int64_t>(rsi90) + r8_91 * 4);
    *reinterpret_cast<uint32_t*>(&rdx92) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rcx41 * 4) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx92) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rcx41 * 4) = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + rcx41 * 4) >> 4) << 6) + reinterpret_cast<int64_t>(rsi90) + rdx92 * 4);
    *reinterpret_cast<uint32_t*>(&rcx93) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rax40 * 4) & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx93) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + rax40 * 4) = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + rax40 * 4) >> 4) << 6) + reinterpret_cast<int64_t>(rsi90) + rcx93 * 4);
    goto addr_1f9d_6;
}

int32_t* g22f3 = reinterpret_cast<int32_t*>(0x841f0f66c381048b);

int64_t SubByte(int64_t rdi) {
    uint32_t eax2;
    int32_t* tmp64_3;
    int64_t rax4;

    eax2 = static_cast<uint32_t>(rdi + 15);
    if (*reinterpret_cast<int32_t*>(&rdi) >= reinterpret_cast<int32_t>(printf)) {
        eax2 = *reinterpret_cast<uint32_t*>(&rdi);
    }
    tmp64_3 = reinterpret_cast<int32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(eax2) >> 4) << 6) + reinterpret_cast<int64_t>(g22f3));
    *reinterpret_cast<int32_t*>(&rax4) = tmp64_3[*reinterpret_cast<uint32_t*>(&rdi) - (eax2 & 0xfffffff0)];
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(printf);
    return rax4;
}

int64_t g2312 = 0x5280f03290f;

int64_t g2344 = 0x5280f06290f41;

void aes_main() {
    int64_t rbx1;
    int64_t r14_2;

    __asm__("movaps xmm0, [rip+0x0]");
    rbx1 = g2312;
    __asm__("movaps [rbx], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x10], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x20], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x30], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    r14_2 = g2344;
    __asm__("movaps [r14], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x10], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x20], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x30], xmm0");
    fun_237c(rbx1, r14_2, 0x1f480);
}

uint32_t* g7ec = reinterpret_cast<uint32_t*>(0xa048d4c00401f0f);

int64_t statemt(uint32_t* rdi, int32_t esi, int32_t edx) {
    int32_t eax4;
    int64_t rcx5;
    int64_t rax6;
    int64_t rdx7;
    uint32_t* rsi8;
    int64_t r8_9;
    int64_t r10_10;

    eax4 = 4;
    if (esi > 0x2eeff) {
        if (esi != 0x2ef00 && esi != 0x3e900) {
            if (esi != 0x3e8c0) {
                addr_7db_4:
                rcx5 = edx * eax4;
                *reinterpret_cast<int32_t*>(&rax6) = eax4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(printf);
                rsi8 = g7ec;
            } else {
                addr_7cf_5:
                eax4 = 6;
                goto addr_7db_4;
            }
            do {
                r8_9 = rdx7 + rcx5;
                r10_10 = rdx7 << 4;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r10_10) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r10_10) ^ rsi8[r8_9];
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r10_10 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r10_10 + 4) ^ (rsi8 + r8_9)[0x78];
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r10_10 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r10_10 + 8) ^ (rsi8 + r8_9)[0xf0];
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r10_10 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r10_10 + 12) ^ (rsi8 + r8_9)[0x168];
                ++rdx7;
            } while (rdx7 != rax6);
            return printf;
        }
    } else {
        if (esi == 0x1f4c0) 
            goto addr_7cf_5;
        if (esi != 0x1f500) 
            goto addr_7ad_10;
    }
    eax4 = 8;
    goto addr_7db_4;
    addr_7ad_10:
    if (esi == 0x2eec0) 
        goto addr_7cf_5;
    goto addr_7db_4;
}

int64_t MixColumn_AddRoundKey() {
    int32_t esi1;
    int32_t esi2;
    int64_t rax3;
    uint32_t esi4;
    uint32_t esi5;
    int64_t rdx6;
    int64_t r8_7;
    int32_t esi8;
    int32_t esi9;
    int64_t rcx10;
    uint32_t esi11;
    int64_t rax12;
    int64_t rsi13;
    int64_t rax14;

    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(esi1 < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(esi2 == printf)) {
        addr_145d_2:
        return printf;
    } else {
        *reinterpret_cast<uint32_t*>(&rax3) = esi4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = reinterpret_cast<int32_t>(printf);
        if (esi5 >= 4) {
            *reinterpret_cast<uint32_t*>(&rdx6) = *reinterpret_cast<uint32_t*>(&rax3) & 0xfffffffc;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(&r8_7) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_7) + 4) = reinterpret_cast<int32_t>(printf);
            __asm__("movdqa xmm0, [rip+0x0]");
            __asm__("movdqa xmm1, [rip+0x0]");
            __asm__("movdqa xmm2, [rip+0x0]");
            __asm__("movdqa xmm3, [rip+0x0]");
            __asm__("movdqa xmm4, [rip+0x0]");
            do {
                __asm__("movdqu xmm5, [rdi+r10]");
                __asm__("movdqu xmm7, [rdi+r10+0x10]");
                __asm__("movdqu xmm10, [rdi+r10+0x20]");
                __asm__("movdqu xmm8, [rdi+r10+0x30]");
                __asm__("movdqa xmm11, xmm10");
                __asm__("punpckldq xmm11, xmm8");
                __asm__("movdqa xmm9, xmm5");
                __asm__("punpckldq xmm9, xmm7");
                __asm__("movdqa xmm6, xmm9");
                __asm__("punpcklqdq xmm6, xmm11");
                __asm__("punpckhqdq xmm9, xmm11");
                __asm__("punpckhdq xmm10, xmm8");
                __asm__("punpckhdq xmm5, xmm7");
                __asm__("movdqa xmm8, xmm5");
                __asm__("punpcklqdq xmm8, xmm10");
                __asm__("punpckhqdq xmm5, xmm10");
                __asm__("movdqa xmm7, xmm6");
                __asm__("paddd xmm7, xmm6");
                __asm__("movdqa xmm10, xmm6");
                __asm__("pand xmm10, xmm0");
                __asm__("pcmpeqd xmm10, xmm1");
                __asm__("movdqa xmm11, xmm7");
                __asm__("pxor xmm11, xmm2");
                __asm__("pand xmm11, xmm10");
                __asm__("pandn xmm10, xmm7");
                __asm__("por xmm10, xmm11");
                __asm__("movdqa xmm11, xmm9");
                __asm__("paddd xmm11, xmm9");
                __asm__("movdqa xmm12, xmm11");
                __asm__("pxor xmm12, xmm9");
                __asm__("movdqa xmm13, xmm12");
                __asm__("pand xmm13, xmm3");
                __asm__("pcmpeqd xmm13, xmm4");
                __asm__("pxor xmm12, xmm10");
                __asm__("movdqa xmm10, xmm13");
                __asm__("pandn xmm10, xmm12");
                __asm__("pxor xmm12, xmm2");
                __asm__("pand xmm12, xmm13");
                __asm__("por xmm12, xmm10");
                __asm__("movdqu xmm10, [r9+r11*4]");
                __asm__("pxor xmm10, xmm8");
                __asm__("pxor xmm10, xmm5");
                __asm__("pxor xmm10, xmm12");
                __asm__("movdqu xmm12, [r9+r11*4+0x3c0]");
                __asm__("pxor xmm12, xmm6");
                __asm__("pxor xmm12, xmm9");
                __asm__("movdqu xmm13, [r9+r11*4+0x5a0]");
                __asm__("pxor xmm13, xmm9");
                __asm__("pand xmm9, xmm0");
                __asm__("pcmpeqd xmm9, xmm1");
                __asm__("movdqa xmm14, xmm9");
                __asm__("pandn xmm14, xmm11");
                __asm__("pxor xmm11, xmm2");
                __asm__("pand xmm11, xmm9");
                __asm__("por xmm11, xmm14");
                __asm__("movdqa xmm9, xmm8");
                __asm__("paddd xmm9, xmm8");
                __asm__("movdqa xmm14, xmm9");
                __asm__("pxor xmm14, xmm8");
                __asm__("movdqa xmm15, xmm14");
                __asm__("pand xmm15, xmm3");
                __asm__("pcmpeqd xmm15, xmm4");
                __asm__("pxor xmm14, xmm11");
                __asm__("movdqa xmm11, xmm15");
                __asm__("pandn xmm11, xmm14");
                __asm__("pxor xmm14, xmm2");
                __asm__("pand xmm14, xmm15");
                __asm__("movdqu xmm15, [r9+r11*4+0x1e0]");
                __asm__("por xmm14, xmm11");
                __asm__("pxor xmm15, xmm6");
                __asm__("pxor xmm15, xmm5");
                __asm__("pxor xmm15, xmm14");
                __asm__("pxor xmm13, xmm8");
                __asm__("pand xmm8, xmm0");
                __asm__("pcmpeqd xmm8, xmm1");
                __asm__("movdqa xmm11, xmm8");
                __asm__("pandn xmm11, xmm9");
                __asm__("pxor xmm9, xmm2");
                __asm__("pand xmm9, xmm8");
                __asm__("por xmm9, xmm11");
                __asm__("movdqa xmm8, xmm5");
                __asm__("paddd xmm8, xmm5");
                __asm__("movdqa xmm11, xmm8");
                __asm__("pxor xmm11, xmm5");
                __asm__("movdqa xmm14, xmm11");
                __asm__("pand xmm14, xmm3");
                __asm__("pcmpeqd xmm14, xmm4");
                __asm__("pxor xmm11, xmm9");
                __asm__("movdqa xmm9, xmm14");
                __asm__("pandn xmm9, xmm11");
                __asm__("pxor xmm11, xmm2");
                __asm__("pand xmm11, xmm14");
                __asm__("por xmm11, xmm9");
                __asm__("pxor xmm12, xmm11");
                __asm__("pand xmm5, xmm0");
                __asm__("pcmpeqd xmm5, xmm1");
                __asm__("movdqa xmm9, xmm5");
                __asm__("pandn xmm9, xmm8");
                __asm__("pxor xmm8, xmm2");
                __asm__("pand xmm8, xmm5");
                __asm__("por xmm8, xmm9");
                __asm__("pxor xmm7, xmm6");
                __asm__("pxor xmm8, xmm7");
                __asm__("pand xmm7, xmm3");
                __asm__("pcmpeqd xmm7, xmm4");
                __asm__("movdqa xmm5, xmm7");
                __asm__("pandn xmm5, xmm8");
                __asm__("pxor xmm8, xmm2");
                __asm__("pand xmm8, xmm7");
                __asm__("por xmm8, xmm5");
                __asm__("pxor xmm13, xmm8");
                __asm__("movdqa xmm5, xmm12");
                __asm__("punpckldq xmm5, xmm13");
                __asm__("movdqa xmm6, xmm10");
                __asm__("punpckldq xmm6, xmm15");
                __asm__("movdqa xmm7, xmm6");
                __asm__("punpckhqdq xmm7, xmm5");
                __asm__("punpcklqdq xmm6, xmm5");
                __asm__("punpckhdq xmm12, xmm13");
                __asm__("punpckhdq xmm10, xmm15");
                __asm__("movdqa xmm5, xmm10");
                __asm__("punpckhqdq xmm5, xmm12");
                __asm__("punpcklqdq xmm10, xmm12");
                __asm__("movdqa [rsp+r10-0x60], xmm10");
                __asm__("movdqa [rsp+r10-0x50], xmm5");
                __asm__("movdqa [rsp+r10-0x80], xmm6");
                __asm__("movdqa [rsp+r10-0x70], xmm7");
                r8_7 = r8_7 + 4;
            } while (r8_7 != rdx6);
            if (rdx6 != rax3) 
                goto addr_12bf_7;
        } else {
            *reinterpret_cast<uint32_t*>(&rdx6) = reinterpret_cast<uint32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(printf);
            goto addr_12bf_7;
        }
    }
    addr_13bc_9:
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(esi8 < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(esi9 == printf))) {
        *reinterpret_cast<uint32_t*>(&rcx10) = *reinterpret_cast<uint32_t*>(&rax3) & 3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(printf);
        if (esi11 >= 4) {
            *reinterpret_cast<uint32_t*>(&rax12) = *reinterpret_cast<uint32_t*>(&rax3) & 0xfffffffc;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(printf);
            do {
                __asm__("movaps xmm0, [rsp+r8-0x80]");
                __asm__("movups [rdi+r8], xmm0");
                __asm__("movaps xmm0, [rsp+r9-0x80]");
                __asm__("movups [rdi+r9], xmm0");
                __asm__("movaps xmm0, [rsp+r9-0x80]");
                __asm__("movups [rdi+r9], xmm0");
                __asm__("movdqa xmm0, [rsp+r8-0x80]");
                __asm__("movdqu [rdi+r8], xmm0");
                rsi13 = rsi13 + 4;
            } while (rsi13 != rax12);
        }
        if (rcx10 != printf) {
            *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
            do {
                __asm__("movdqa xmm0, [rsp+rsi-0x80]");
                __asm__("movdqu [rdi+rsi], xmm0");
                ++rax14;
            } while (rax14 != rcx10);
            goto addr_145d_2;
        }
    }
    addr_12bf_7:
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    do {
        __asm__("movdqu xmm7, [rdi+r9]");
        __asm__("pshufd xmm6, xmm7, 0x39");
        __asm__("movdqa xmm5, xmm6");
        __asm__("paddd xmm5, xmm6");
        __asm__("pshufd xmm8, xmm7, 0x42");
        __asm__("pshufd xmm9, xmm7, 0x9f");
        __asm__("pand xmm7, xmm0");
        __asm__("pcmpeqd xmm7, xmm1");
        __asm__("pshufd xmm10, xmm5, 0x93");
        __asm__("movdqa xmm11, xmm7");
        __asm__("pandn xmm11, xmm10");
        __asm__("pxor xmm10, xmm2");
        __asm__("pand xmm10, xmm7");
        __asm__("por xmm10, xmm11");
        __asm__("pxor xmm5, xmm6");
        __asm__("pxor xmm10, xmm5");
        __asm__("pand xmm5, xmm3");
        __asm__("pcmpeqd xmm5, xmm4");
        __asm__("movdqa xmm6, xmm5");
        __asm__("pandn xmm6, xmm10");
        __asm__("pxor xmm10, xmm2");
        __asm__("pand xmm10, xmm5");
        __asm__("por xmm10, xmm6");
        __asm__("movd xmm5, dword [r8+r10*4+0x5a0]");
        __asm__("movd xmm6, dword [r8+r10*4+0x3c0]");
        __asm__("punpckldq xmm6, xmm5");
        __asm__("movd xmm5, dword [r8+r10*4+0x1e0]");
        __asm__("movd xmm7, dword [r8+r10*4]");
        __asm__("punpckldq xmm7, xmm5");
        __asm__("punpcklqdq xmm7, xmm6");
        __asm__("pxor xmm8, xmm7");
        __asm__("pxor xmm9, xmm8");
        __asm__("pxor xmm9, xmm10");
        __asm__("movdqa [rsp+r9-0x80], xmm9");
        ++rdx6;
    } while (rdx6 != rax3);
    goto addr_13bc_9;
}

uint32_t* g1fc4 = reinterpret_cast<uint32_t*>(0x841f0f2e666666);

int64_t AddRoundKey_InversMixColumn(uint32_t* rdi, uint32_t esi, int32_t edx) {
    void* rsp4;
    int64_t rcx5;
    int64_t rax6;
    int64_t rdx7;
    uint32_t* r8_8;
    int64_t r9_9;
    int64_t r11_10;
    int64_t rcx11;
    int64_t rdx12;
    uint64_t r8_13;
    int64_t rbx14;
    int64_t r10_15;
    int64_t r9_16;
    uint64_t r11_17;
    uint64_t r14_18;
    uint64_t rbx19;
    int64_t rbx20;
    int64_t rcx21;
    int64_t rax22;
    int64_t rsi23;
    int64_t rax24;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(esi) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(esi == printf)) {
        addr_22bd_2:
        return printf;
    } else {
        rcx5 = reinterpret_cast<int32_t>(edx * esi);
        *reinterpret_cast<uint32_t*>(&rax6) = esi;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(printf);
        r8_8 = g1fc4;
        do {
            r9_9 = rdx7 + rcx5;
            r11_10 = rdx7 << 4;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r11_10) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r11_10) ^ r8_8[r9_9];
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r11_10 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r11_10 + 4) ^ (r8_8 + r9_9)[0x78];
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r11_10 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r11_10 + 8) ^ (r8_8 + r9_9)[0xf0];
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r11_10 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + r11_10 + 12) ^ (r8_8 + r9_9)[0x168];
            ++rdx7;
        } while (rdx7 != rax6);
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(esi) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(esi == printf)) 
            goto addr_22bd_2;
    }
    *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(printf);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        rdx12 = rcx11 * 4;
        *reinterpret_cast<int32_t*>(&r8_13) = *reinterpret_cast<int32_t*>(&rdx12);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rbx14) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx14) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            r10_15 = rbx14 + rdx12;
            r9_16 = rbx14 + 1;
            *reinterpret_cast<uint32_t*>(&r11_17) = *reinterpret_cast<uint32_t*>(&r9_16) & 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_17) + 4) = reinterpret_cast<int32_t>(printf);
            if ((rdi[r10_15] & 0x7fffff80) != 0x80) {
            }
            if ((rdi[r11_17 | r8_13] & 0x7fffff80) != 0x80) {
            }
            __asm__("movd xmm8, r12d");
            __asm__("movd xmm6, r13d");
            __asm__("punpckldq xmm8, xmm6");
            __asm__("movdqa xmm7, xmm8");
            __asm__("pand xmm8, xmm0");
            __asm__("paddd xmm7, xmm7");
            __asm__("movd xmm6, r14d");
            __asm__("movd xmm9, r11d");
            __asm__("punpckldq xmm6, xmm9");
            __asm__("pcmpeqd xmm8, xmm1");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pandn xmm9, xmm7");
            __asm__("pxor xmm7, xmm2");
            *reinterpret_cast<uint32_t*>(&r14_18) = static_cast<uint32_t>(rbx14 + 2) & 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_18) + 4) = reinterpret_cast<int32_t>(printf);
            __asm__("pand xmm7, xmm8");
            __asm__("por xmm7, xmm9");
            __asm__("pxor xmm6, xmm7");
            if ((rdi[r14_18 | r8_13] & 0x7fffff80) != 0x80) {
            }
            *reinterpret_cast<uint32_t*>(&rbx19) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbx14) - 1) & 3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx19) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<uint32_t*>(&rbx20) = rdi[rbx19 | r8_13];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx20) + 4) = reinterpret_cast<int32_t>(printf);
            if ((*reinterpret_cast<uint32_t*>(&rbx20) & 0x7fffff80) != 0x80) {
            }
            __asm__("movd xmm7, r13d");
            __asm__("movd xmm8, r12d");
            __asm__("punpckldq xmm8, xmm7");
            __asm__("movdqa xmm7, xmm8");
            __asm__("paddd xmm7, xmm8");
            __asm__("pand xmm8, xmm0");
            __asm__("pcmpeqd xmm8, xmm1");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pandn xmm9, xmm7");
            __asm__("pxor xmm7, xmm2");
            __asm__("pand xmm7, xmm8");
            __asm__("por xmm7, xmm9");
            __asm__("punpcklqdq xmm6, xmm7");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pand xmm6, xmm3");
            __asm__("pcmpeqd xmm6, xmm4");
            __asm__("paddd xmm7, xmm7");
            __asm__("movdqa xmm8, xmm6");
            __asm__("pandn xmm8, xmm7");
            __asm__("pxor xmm7, xmm5");
            __asm__("pand xmm7, xmm6");
            __asm__("por xmm7, xmm8");
            __asm__("pshufd xmm6, xmm7, 0xee");
            __asm__("pxor xmm6, xmm7");
            __asm__("pshufd xmm7, xmm6, 0x55");
            __asm__("pxor xmm7, xmm6");
            __asm__("movd ebp, xmm7");
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp4) + r10_15 * 4 - 0x80) = rdi[r11_17 | r8_13] ^ rdi[r14_18 | r8_13] ^ *reinterpret_cast<uint32_t*>(&rbx20) ^ static_cast<uint32_t>(rbx20 + rbx20);
            rbx14 = r9_16;
        } while (r9_16 != 4);
        ++rcx11;
    } while (rcx11 != rax6);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(esi) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(esi == printf)) 
        goto addr_22bd_2;
    *reinterpret_cast<uint32_t*>(&rcx21) = *reinterpret_cast<uint32_t*>(&rax6) & 3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = reinterpret_cast<int32_t>(printf);
    if (esi >= 4) {
        *reinterpret_cast<uint32_t*>(&rax22) = *reinterpret_cast<uint32_t*>(&rax6) & 0xfffffffc;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rsi23) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            __asm__("movaps xmm0, [rsp+r8-0x80]");
            __asm__("movups [rdi+r8], xmm0");
            __asm__("movaps xmm0, [rsp+r9-0x80]");
            __asm__("movups [rdi+r9], xmm0");
            __asm__("movaps xmm0, [rsp+r9-0x80]");
            __asm__("movups [rdi+r9], xmm0");
            __asm__("movdqa xmm0, [rsp+r8-0x80]");
            __asm__("movdqu [rdi+r8], xmm0");
            rsi23 = rsi23 + 4;
        } while (rsi23 != rax22);
    }
    if (rcx21 != printf) {
        *reinterpret_cast<int32_t*>(&rax24) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            __asm__("movdqa xmm0, [rsp+rsi-0x80]");
            __asm__("movdqu [rdi+rsi], xmm0");
            ++rax24;
        } while (rax24 != rcx21);
        goto addr_22bd_2;
    }
}

int32_t* g23b2 = reinterpret_cast<int32_t*>(0x480000000007c741);

void submain() {
    int32_t* r15_1;

    r15_1 = g23b2;
    *r15_1 = reinterpret_cast<int32_t>(printf);
    fun_23c5(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 24 + 8);
}

