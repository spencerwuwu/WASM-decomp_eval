
void printf(int64_t rdi);

int32_t* g285 = reinterpret_cast<int32_t*>(0x358d48d231088b);

void fun_1dd(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int32_t eax4;
    int64_t r12_5;
    int32_t r12d6;
    int64_t rax7;
    int64_t rcx8;
    int64_t rdx9;
    int64_t rdi10;
    uint32_t* rbx11;
    uint32_t* rbx12;
    uint32_t* r15_13;
    void* rbx14;
    void* rbx15;
    void* r15_16;
    void* rbx17;
    void* rbx18;
    void* r15_19;
    void* rbx20;
    void* rbx21;
    void* r15_22;
    int32_t* rax23;
    int32_t ecx24;
    int64_t rdx25;
    int32_t r8d26;
    int32_t* rbx27;
    int64_t v28;

    v3 = reinterpret_cast<int64_t>(__return_address());
    eax4 = 4;
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) > 0x2eeff) {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) != 0x2ef00 && *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) != 0x3e900) {
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) != 0x3e8c0) {
                addr_22c_4:
                *reinterpret_cast<int32_t*>(&r12_5) = r12d6 * eax4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_5) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rax7) = eax4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                addr_220_5:
                eax4 = 6;
                goto addr_22c_4;
            }
            do {
                rdx9 = rcx8 + r12_5;
                rdi10 = rcx8 << 4;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx11) + rdi10) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx12) + rdi10) ^ r15_13[rdx9];
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx14) + rdi10 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx15) + rdi10 + 4) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_16) + rdx9 * 4 + 0x1e0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx17) + rdi10 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx18) + rdi10 + 8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_19) + rdx9 * 4 + 0x3c0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx20) + rdi10 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx21) + rdi10 + 12) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_22) + rdx9 * 4 + 0x5a0);
                ++rcx8;
            } while (rcx8 != rax7);
            rax23 = g285;
            ecx24 = *rax23;
            *reinterpret_cast<int32_t*>(&rdx25) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(printf);
            do {
                r8d26 = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<unsigned char*>(&r8d26) = reinterpret_cast<uint1_t>(rbx27[rdx25] != *reinterpret_cast<int32_t*>(0x290 + rdx25 * 4));
                ecx24 = ecx24 + r8d26;
                *rax23 = ecx24;
                ++rdx25;
            } while (rdx25 != 16);
            goto v28;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) == 0x1f4c0) 
            goto addr_220_5;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) != 0x1f500) 
            goto addr_1fe_12;
    }
    eax4 = 8;
    goto addr_22c_4;
    addr_1fe_12:
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) == 0x2eec0) 
        goto addr_220_5;
    goto addr_22c_4;
}

void fun_1233(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_123f(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t* g12e1 = reinterpret_cast<int32_t*>(0x358d48d231088b);

void fun_1215(int64_t rdi, int64_t rsi) {
    int64_t r13_3;
    int32_t* r14_4;
    int32_t r14d5;
    int64_t rsi6;
    int32_t* r12_7;
    int64_t rdx8;
    int64_t rbx9;
    int64_t rsi10;
    int32_t* r12_11;
    int64_t rbx12;
    int1_t less_or_equal13;
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
    int32_t* rax33;
    int32_t ecx34;
    int64_t rdx35;
    int32_t r8d36;
    int32_t* rbx37;
    int64_t v38;
    int32_t ebp39;
    int32_t ebp40;
    int32_t ebp41;

    *reinterpret_cast<int32_t*>(&r13_3) = *r14_4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_3) + 4) = reinterpret_cast<int32_t>(printf);
    if (*reinterpret_cast<int32_t*>(&r13_3) >= 2) {
        do {
            r14d5 = static_cast<int32_t>(r13_3 - 1);
            *reinterpret_cast<int32_t*>(&rsi6) = *r12_7;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(&rdx8) = r14d5;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(printf);
            fun_1233(rbx9, rsi6, rdx8);
            *reinterpret_cast<int32_t*>(&rsi10) = *r12_11;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(printf);
            fun_123f(rbx12, rsi10, rdx8);
            less_or_equal13 = *reinterpret_cast<int32_t*>(&r13_3) <= 2;
            *reinterpret_cast<int32_t*>(&r13_3) = r14d5;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_3) + 4) = reinterpret_cast<int32_t>(printf);
        } while (!less_or_equal13);
    }
    *reinterpret_cast<int32_t*>(&rax14) = 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    if (ebp15 > 0x2eeff) {
        if (ebp16 != 0x2ef00 && ebp17 != 0x3e900) {
            if (ebp18 != 0x3e8c0) {
                addr_1293_9:
                *reinterpret_cast<int32_t*>(&rcx19) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                addr_1287_10:
                *reinterpret_cast<int32_t*>(&rax14) = 6;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
                goto addr_1293_9;
            }
            do {
                rsi20 = rcx19 << 4;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx21) + rsi20) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx22) + rsi20) ^ r15_23[rcx19];
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx24) + rsi20 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx25) + rsi20 + 4) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_26) + rcx19 * 4 + 0x1e0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx27) + rsi20 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx28) + rsi20 + 8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_29) + rcx19 * 4 + 0x3c0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx30) + rsi20 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx31) + rsi20 + 12) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_32) + rcx19 * 4 + 0x5a0);
                ++rcx19;
            } while (rcx19 != rax14);
            rax33 = g12e1;
            ecx34 = *rax33;
            *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(printf);
            do {
                r8d36 = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<unsigned char*>(&r8d36) = reinterpret_cast<uint1_t>(rbx37[rdx35] != *reinterpret_cast<int32_t*>(0x12ec + rdx35 * 4));
                ecx34 = ecx34 + r8d36;
                *rax33 = ecx34;
                ++rdx35;
            } while (rdx35 != 16);
            goto v38;
        }
    } else {
        if (ebp39 == 0x1f4c0) 
            goto addr_1287_10;
        if (ebp40 != 0x1f500) 
            goto addr_1265_17;
    }
    *reinterpret_cast<int32_t*>(&rax14) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    goto addr_1293_9;
    addr_1265_17:
    if (ebp41 == 0x2eec0) 
        goto addr_1287_10;
    goto addr_1293_9;
}

void fun_1233(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rsi4;
    int32_t* r12_5;
    int64_t rbx6;
    int1_t less_or_equal7;
    int64_t r13_8;
    int32_t r14d9;
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
    int32_t* rax33;
    int32_t ecx34;
    int64_t rdx35;
    int32_t r8d36;
    int32_t* rbx37;
    int64_t v38;
    int32_t ebp39;
    int32_t ebp40;
    int32_t ebp41;

    while (1) {
        *reinterpret_cast<int32_t*>(&rsi4) = *r12_5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
        fun_123f(rbx6, rsi4, rdx);
        less_or_equal7 = *reinterpret_cast<int32_t*>(&r13_8) <= 2;
        *reinterpret_cast<int32_t*>(&r13_8) = r14d9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_8) + 4) = reinterpret_cast<int32_t>(printf);
        if (less_or_equal7) 
            break;
        r14d9 = static_cast<int32_t>(r13_8 - 1);
        *reinterpret_cast<int32_t*>(&rsi10) = *r12_11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rdx12) = r14d9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1233(rbx13, rsi10, rdx12);
    }
    *reinterpret_cast<int32_t*>(&rax14) = 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    if (ebp15 > 0x2eeff) {
        if (ebp16 != 0x2ef00 && ebp17 != 0x3e900) {
            if (ebp18 != 0x3e8c0) {
                addr_1293_7:
                *reinterpret_cast<int32_t*>(&rcx19) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                addr_1287_8:
                *reinterpret_cast<int32_t*>(&rax14) = 6;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
                goto addr_1293_7;
            }
            do {
                rsi20 = rcx19 << 4;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx21) + rsi20) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx22) + rsi20) ^ r15_23[rcx19];
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx24) + rsi20 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx25) + rsi20 + 4) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_26) + rcx19 * 4 + 0x1e0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx27) + rsi20 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx28) + rsi20 + 8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_29) + rcx19 * 4 + 0x3c0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx30) + rsi20 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx31) + rsi20 + 12) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_32) + rcx19 * 4 + 0x5a0);
                ++rcx19;
            } while (rcx19 != rax14);
            rax33 = g12e1;
            ecx34 = *rax33;
            *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(printf);
            do {
                r8d36 = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<unsigned char*>(&r8d36) = reinterpret_cast<uint1_t>(rbx37[rdx35] != *reinterpret_cast<int32_t*>(0x12ec + rdx35 * 4));
                ecx34 = ecx34 + r8d36;
                *rax33 = ecx34;
                ++rdx35;
            } while (rdx35 != 16);
            goto v38;
        }
    } else {
        if (ebp39 == 0x1f4c0) 
            goto addr_1287_8;
        if (ebp40 != 0x1f500) 
            goto addr_1265_15;
    }
    *reinterpret_cast<int32_t*>(&rax14) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    goto addr_1293_7;
    addr_1265_15:
    if (ebp41 == 0x2eec0) 
        goto addr_1287_8;
    goto addr_1293_7;
}

int64_t g1eed = 0x5280f03290f;

int64_t g1f1f = 0x5280f06290f41;

void fun_1f57(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_1f67(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t fun_1f73();

void fun_1f87(int32_t* rdi, int32_t* rsi, int64_t rdx);

void fun_1fc5(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_1eb9(int32_t* rdi, int32_t* rsi) {
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
    rbx3 = g1eed;
    __asm__("movaps [rbx], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x10], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x20], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x30], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    r14_4 = g1f1f;
    __asm__("movaps [r14], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x10], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x20], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x30], xmm0");
    fun_1f57(rbx3, r14_4, 0x1f480);
    fun_1f67(rbx3, r14_4, 0x1f480);
    rdi5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 + 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
    eax7 = fun_1f73();
    if (eax7 != printf) {
        rdi5 = reinterpret_cast<int32_t*>(0x1f7e);
        *reinterpret_cast<int32_t*>(&rsi6) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1f87(0x1f7e, rsi6, 0x1f480);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi5 = *rsi6;
    __asm__("subsd xmm0, [r12]");
    fun_1fc5(0x1fbe, rsi6 + 1, 0x1f480);
    goto v8;
}

void fun_1f57(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbx4;
    int64_t r14_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t eax8;
    int64_t v9;

    fun_1f67(rbx4, r14_5, 0x1f480);
    rdi6 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
    eax8 = fun_1f73();
    if (eax8 != printf) {
        rdi6 = reinterpret_cast<int32_t*>(0x1f7e);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1f87(0x1f7e, rsi7, 0x1f480);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi6 = *rsi7;
    __asm__("subsd xmm0, [r12]");
    fun_1fc5(0x1fbe, rsi7 + 1, 0x1f480);
    goto v9;
}

void fun_1f87(int32_t* rdi, int32_t* rsi, int64_t rdx) {
    int64_t v4;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r12]");
    fun_1fc5(0x1fbe, rsi + 1, rdx);
    goto v4;
}

void fun_1fc5(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

int32_t* g1154 = reinterpret_cast<int32_t*>(0x4b9066349);

int32_t* g1142 = reinterpret_cast<int32_t*>(0xd8b480a89);

int32_t* g114b = reinterpret_cast<int32_t*>(0x358b4c0189);

uint32_t* g11b1 = reinterpret_cast<uint32_t*>(0xf2e666666666666);

int32_t* g1209 = reinterpret_cast<int32_t*>(0xe8df894824348b41);

void fun_10a7(int64_t rdi) {
    int32_t eax2;
    int32_t ebp3;
    int32_t ebp4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t* r14_7;
    int32_t ecx8;
    int32_t ebp9;
    int32_t ebp10;
    int32_t ebp11;
    int32_t ebp12;
    int32_t ecx13;
    int32_t ebp14;
    int32_t* rdx15;
    int32_t* rcx16;
    int32_t ebp17;
    int32_t ebp18;
    int32_t ebp19;
    int32_t ebp20;
    int32_t ebp21;
    int32_t ebp22;
    int32_t ebp23;
    int32_t ebp24;
    int32_t ebp25;
    int32_t ebp26;
    int64_t rcx27;
    int64_t rax28;
    int64_t rdx29;
    uint32_t* r15_30;
    int64_t rsi31;
    int64_t r8_32;
    uint32_t* rbx33;
    uint32_t* rbx34;
    void* rbx35;
    void* rbx36;
    void* rbx37;
    void* rbx38;
    void* rbx39;
    void* rbx40;
    int32_t* r12_41;
    int64_t rsi42;
    int64_t rbx43;
    int64_t r13_44;
    int32_t r14d45;
    int64_t rsi46;
    int64_t rdx47;
    int64_t rbx48;
    int64_t rsi49;
    int64_t rbx50;
    int1_t less_or_equal51;
    int64_t rax52;
    int32_t ebp53;
    int32_t ebp54;
    int32_t ebp55;
    int32_t ebp56;
    int64_t rcx57;
    int64_t rsi58;
    uint32_t* rbx59;
    uint32_t* rbx60;
    void* rbx61;
    void* rbx62;
    void* rbx63;
    void* rbx64;
    void* rbx65;
    void* rbx66;
    int32_t* rax67;
    int32_t ecx68;
    int64_t rdx69;
    int32_t r8d70;
    int32_t* rbx71;
    int64_t v72;
    int32_t ebp73;
    int32_t ebp74;
    int32_t ebp75;

    eax2 = 4;
    if (ebp3 <= 0x2eebf) {
        if (ebp4 > 0x1f4ff) {
            if (ebp5 == 0x1f500) {
                eax2 = 8;
            } else {
                if (ebp6 != 0x2ee80) {
                    addr_114d_6:
                    r14_7 = g1154;
                    ecx8 = 4;
                    if (ebp9 <= 0x2eeff) {
                        if (ebp10 == 0x1f4c0) 
                            goto addr_1196_8;
                        if (ebp11 == 0x1f500) 
                            goto addr_119d_10;
                        if (ebp12 == 0x2eec0) 
                            goto addr_1196_8;
                        goto addr_11a2_13;
                    }
                } else {
                    ecx13 = 12;
                    goto addr_113b_15;
                }
            }
        } else {
            ecx13 = 10;
            if (ebp14 == 0x1f480) {
                addr_113b_15:
                rdx15 = g1142;
                *rdx15 = ecx13;
                rcx16 = g114b;
                *rcx16 = eax2;
                goto addr_114d_6;
            } else {
                if (ebp17 != 0x1f4c0) {
                    goto addr_114d_6;
                }
            }
        }
    } else {
        if (ebp18 <= 0x3e87f) {
            if (ebp19 != 0x2eec0) {
                if (ebp20 != 0x2ef00) {
                    goto addr_114d_6;
                }
            }
        } else {
            if (ebp21 != 0x3e880) {
                if (ebp22 == 0x3e8c0) {
                    eax2 = 6;
                } else {
                    if (ebp23 != 0x3e900) {
                        goto addr_114d_6;
                    }
                }
            }
        }
    }
    ecx13 = 14;
    goto addr_113b_15;
    if (ebp24 == 0x2ef00 || ebp25 == 0x3e900) {
        addr_119d_10:
        ecx8 = 8;
        goto addr_11a2_13;
    } else {
        if (ebp26 != 0x3e8c0) {
            addr_11a2_13:
            *reinterpret_cast<int32_t*>(&rcx27) = ecx8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = reinterpret_cast<int32_t>(printf);
            rax28 = *r14_7 * rcx27;
            *reinterpret_cast<int32_t*>(&rdx29) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(printf);
            r15_30 = g11b1;
        } else {
            addr_1196_8:
            ecx8 = 6;
            goto addr_11a2_13;
        }
        do {
            rsi31 = rdx29 + rax28;
            r8_32 = rdx29 << 4;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx33) + r8_32) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx34) + r8_32) ^ r15_30[rsi31];
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx35) + r8_32 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx36) + r8_32 + 4) ^ (r15_30 + rsi31)[0x78];
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx37) + r8_32 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx38) + r8_32 + 8) ^ (r15_30 + rsi31)[0xf0];
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx39) + r8_32 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx40) + r8_32 + 12) ^ (r15_30 + rsi31)[0x168];
            ++rdx29;
        } while (rdx29 != rcx27);
        r12_41 = g1209;
        *reinterpret_cast<int32_t*>(&rsi42) = *r12_41;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi42) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1215(rbx43, rsi42);
        *reinterpret_cast<int32_t*>(&r13_44) = *r14_7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_44) + 4) = reinterpret_cast<int32_t>(printf);
        if (*reinterpret_cast<int32_t*>(&r13_44) >= 2) {
            do {
                r14d45 = static_cast<int32_t>(r13_44 - 1);
                *reinterpret_cast<int32_t*>(&rsi46) = *r12_41;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi46) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rdx47) = r14d45;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx47) + 4) = reinterpret_cast<int32_t>(printf);
                fun_1233(rbx48, rsi46, rdx47);
                *reinterpret_cast<int32_t*>(&rsi49) = *r12_41;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi49) + 4) = reinterpret_cast<int32_t>(printf);
                fun_123f(rbx50, rsi49, rdx47);
                less_or_equal51 = *reinterpret_cast<int32_t*>(&r13_44) <= 2;
                *reinterpret_cast<int32_t*>(&r13_44) = r14d45;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_44) + 4) = reinterpret_cast<int32_t>(printf);
            } while (!less_or_equal51);
        }
        *reinterpret_cast<int32_t*>(&rax52) = 4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax52) + 4) = reinterpret_cast<int32_t>(printf);
        if (ebp53 > 0x2eeff) {
            if (ebp54 != 0x2ef00 && ebp55 != 0x3e900) {
                if (ebp56 != 0x3e8c0) {
                    addr_1293_41:
                    *reinterpret_cast<int32_t*>(&rcx57) = reinterpret_cast<int32_t>(printf);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx57) + 4) = reinterpret_cast<int32_t>(printf);
                } else {
                    addr_1287_42:
                    *reinterpret_cast<int32_t*>(&rax52) = 6;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax52) + 4) = reinterpret_cast<int32_t>(printf);
                    goto addr_1293_41;
                }
                do {
                    rsi58 = rcx57 << 4;
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx59) + rsi58) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx60) + rsi58) ^ r15_30[rcx57];
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx61) + rsi58 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx62) + rsi58 + 4) ^ (r15_30 + rcx57)[0x78];
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx63) + rsi58 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx64) + rsi58 + 8) ^ (r15_30 + rcx57)[0xf0];
                    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx65) + rsi58 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx66) + rsi58 + 12) ^ (r15_30 + rcx57)[0x168];
                    ++rcx57;
                } while (rcx57 != rax52);
                rax67 = g12e1;
                ecx68 = *rax67;
                *reinterpret_cast<int32_t*>(&rdx69) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx69) + 4) = reinterpret_cast<int32_t>(printf);
                do {
                    r8d70 = reinterpret_cast<int32_t>(printf);
                    *reinterpret_cast<unsigned char*>(&r8d70) = reinterpret_cast<uint1_t>(rbx71[rdx69] != *reinterpret_cast<int32_t*>(0x12ec + rdx69 * 4));
                    ecx68 = ecx68 + r8d70;
                    *rax67 = ecx68;
                    ++rdx69;
                } while (rdx69 != 16);
                goto v72;
            }
        } else {
            if (ebp73 == 0x1f4c0) 
                goto addr_1287_42;
            if (ebp74 != 0x1f500) 
                goto addr_1265_49;
        }
    }
    *reinterpret_cast<int32_t*>(&rax52) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax52) + 4) = reinterpret_cast<int32_t>(printf);
    goto addr_1293_41;
    addr_1265_49:
    if (ebp75 == 0x2eec0) 
        goto addr_1287_42;
    goto addr_1293_41;
    eax2 = 6;
    ecx13 = 12;
    goto addr_113b_15;
}

void fun_123f(int64_t rdi, int64_t rsi, int64_t rdx) {
    int1_t less_or_equal4;
    int64_t r13_5;
    int32_t r14d6;
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
    int32_t* rax33;
    int32_t ecx34;
    int64_t rdx35;
    int32_t r8d36;
    int32_t* rbx37;
    int64_t v38;
    int32_t ebp39;
    int32_t ebp40;
    int32_t ebp41;

    while (less_or_equal4 = *reinterpret_cast<int32_t*>(&r13_5) <= 2, *reinterpret_cast<int32_t*>(&r13_5) = r14d6, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(printf), !less_or_equal4) {
        r14d6 = static_cast<int32_t>(r13_5 - 1);
        *reinterpret_cast<int32_t*>(&rsi7) = *r12_8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rdx9) = r14d6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1233(rbx10, rsi7, rdx9);
        *reinterpret_cast<int32_t*>(&rsi11) = *r12_12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(printf);
        fun_123f(rbx13, rsi11, rdx9);
    }
    *reinterpret_cast<int32_t*>(&rax14) = 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    if (ebp15 > 0x2eeff) {
        if (ebp16 != 0x2ef00 && ebp17 != 0x3e900) {
            if (ebp18 != 0x3e8c0) {
                addr_1293_7:
                *reinterpret_cast<int32_t*>(&rcx19) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                addr_1287_8:
                *reinterpret_cast<int32_t*>(&rax14) = 6;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
                goto addr_1293_7;
            }
            do {
                rsi20 = rcx19 << 4;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx21) + rsi20) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx22) + rsi20) ^ r15_23[rcx19];
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx24) + rsi20 + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx25) + rsi20 + 4) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_26) + rcx19 * 4 + 0x1e0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx27) + rsi20 + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx28) + rsi20 + 8) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_29) + rcx19 * 4 + 0x3c0);
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx30) + rsi20 + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbx31) + rsi20 + 12) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r15_32) + rcx19 * 4 + 0x5a0);
                ++rcx19;
            } while (rcx19 != rax14);
            rax33 = g12e1;
            ecx34 = *rax33;
            *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(printf);
            do {
                r8d36 = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<unsigned char*>(&r8d36) = reinterpret_cast<uint1_t>(rbx37[rdx35] != *reinterpret_cast<int32_t*>(0x12ec + rdx35 * 4));
                ecx34 = ecx34 + r8d36;
                *rax33 = ecx34;
                ++rdx35;
            } while (rdx35 != 16);
            goto v38;
        }
    } else {
        if (ebp39 == 0x1f4c0) 
            goto addr_1287_8;
        if (ebp40 != 0x1f500) 
            goto addr_1265_15;
    }
    *reinterpret_cast<int32_t*>(&rax14) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    goto addr_1293_7;
    addr_1265_15:
    if (ebp41 == 0x2eec0) 
        goto addr_1287_8;
    goto addr_1293_7;
}

void fun_1e6c(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_1e5c(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbx4;
    int64_t r14_5;
    int64_t v6;

    fun_1e6c(rbx4, r14_5, 0x1f480);
    goto v6;
}

void fun_1f67(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t eax6;
    int64_t v7;

    rdi4 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    *reinterpret_cast<int32_t*>(&rsi5) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(printf);
    eax6 = fun_1f73();
    if (eax6 != printf) {
        rdi4 = reinterpret_cast<int32_t*>(0x1f7e);
        *reinterpret_cast<int32_t*>(&rsi5) = eax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1f87(0x1f7e, rsi5, rdx);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi4 = *rsi5;
    __asm__("subsd xmm0, [r12]");
    fun_1fc5(0x1fbe, rsi5 + 1, rdx);
    goto v7;
}

void fun_1e6c(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

int32_t g1f7e = 0xc031c689;

int32_t fun_1f73() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t rdx4;
    int64_t rdx5;
    int64_t v6;

    if (eax1 != printf) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1f87(0x1f7e, rsi2, rdx4);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g1f7e = *rsi2;
    __asm__("subsd xmm0, [r12]");
    fun_1fc5(0x1fbe, rsi2 + 1, rdx5);
    goto v6;
}

void fun_1ea5(int32_t* rdi) {
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
        rdi = reinterpret_cast<int32_t*>(0x1eb0);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1eb9(0x1eb0, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    __asm__("movaps xmm0, [rip+0x0]");
    rbx6 = g1eed;
    __asm__("movaps [rbx], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x10], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x20], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x30], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    r14_7 = g1f1f;
    __asm__("movaps [r14], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x10], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x20], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x30], xmm0");
    fun_1f57(rbx6, r14_7, 0x1f480);
    fun_1f67(rbx6, r14_7, 0x1f480);
    rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8 - 8 + 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(printf);
    eax10 = fun_1f73();
    if (eax10 != printf) {
        rdi8 = reinterpret_cast<int32_t*>(0x1f7e);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1f87(0x1f7e, rsi9, 0x1f480);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r12]");
    fun_1fc5(0x1fbe, rsi9 + 1, 0x1f480);
    goto v11;
}

void printf(int64_t rdi) {
}

void fun_1b0() {
    __asm__("fild word [rcx+rcx*4-0xe]");
}

int32_t* g1d3 = reinterpret_cast<int32_t*>(0xe8df8948308b);

void fun_1bc() {
    int64_t rcx1;
    int64_t rcx2;
    int32_t eax3;
    int64_t r11_4;
    int64_t r11_5;
    signed char r8b6;
    int1_t less7;
    int64_t r11_8;
    int64_t rbp9;
    int32_t* rax10;
    int64_t rsi11;
    int64_t rbx12;

    *reinterpret_cast<int32_t*>(rcx1 - 0x75) = *reinterpret_cast<int32_t*>(rcx2 - 0x75) + eax3;
    *reinterpret_cast<signed char*>(r11_4 + 0x394109c0) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(r11_5 + 0x394109c0) + r8b6);
    less7 = *reinterpret_cast<signed char*>(r11_8 + 0x394109c0) < reinterpret_cast<signed char>(printf) != __intrinsic();
    *reinterpret_cast<signed char*>(rbp9 - 0x77) = -26;
    if (!less7) {
        rax10 = g1d3;
        *reinterpret_cast<int32_t*>(&rsi11) = *rax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1dd(rbx12, rsi11);
    }
}

uint32_t* g3c4 = reinterpret_cast<uint32_t*>(0x841f0f2e666666);

uint120_t g411 = 0x41000000001d8b48;

int64_t KeySchedule(int32_t edi, uint32_t* rsi) {
    int64_t rcx3;
    int64_t rax4;
    int32_t edx5;
    int64_t rdi6;
    int32_t r8d7;
    void* rsp8;
    int64_t r9_9;
    int64_t rax10;
    uint32_t* r10_11;
    int64_t rdx12;
    int64_t r11_13;
    int64_t rdi14;
    int32_t* r11_15;
    unsigned char r8b16;
    int64_t rcx17;
    uint32_t edx18;
    int64_t rax19;
    int64_t rdx20;
    uint32_t esi21;
    int64_t rax22;
    int64_t rdx23;
    uint32_t* rsi24;

    *reinterpret_cast<int32_t*>(&rcx3) = 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&rax4) = -1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(printf);
    if (edi <= 0x2eebf) {
        edx5 = 4;
        if (edi > 0x1f4ff) {
            if (edi == 0x1f500) {
                *reinterpret_cast<int32_t*>(&rdi6) = 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rcx3) = 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                if (edi != 0x2ee80) {
                    addr_5c1_6:
                    return rax4;
                } else {
                    *reinterpret_cast<int32_t*>(&rdi6) = 13;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(printf);
                    goto addr_39e_8;
                }
            }
        } else {
            if (edi == 0x1f480) {
                *reinterpret_cast<int32_t*>(&rdi6) = 11;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                if (edi != 0x1f4c0) 
                    goto addr_5c1_6;
                *reinterpret_cast<int32_t*>(&rdi6) = 13;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rcx3) = 6;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
            }
        }
    } else {
        if (edi <= 0x3e87f) {
            if (edi == 0x2eec0) {
                *reinterpret_cast<int32_t*>(&rdi6) = 13;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rcx3) = 6;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
                goto addr_39e_8;
            } else {
                if (edi != 0x2ef00) 
                    goto addr_5c1_6;
                *reinterpret_cast<int32_t*>(&rdi6) = 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rcx3) = 8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
                goto addr_39e_8;
            }
        } else {
            if (edi == 0x3e880) {
                *reinterpret_cast<int32_t*>(&rdi6) = 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                if (edi == 0x3e8c0) {
                    *reinterpret_cast<int32_t*>(&rdi6) = 15;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(printf);
                    *reinterpret_cast<int32_t*>(&rcx3) = 6;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
                } else {
                    if (edi != 0x3e900) 
                        goto addr_5c1_6;
                    *reinterpret_cast<int32_t*>(&rdi6) = 15;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(printf);
                    *reinterpret_cast<int32_t*>(&rcx3) = 8;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
                }
            }
            edx5 = 8;
            *reinterpret_cast<unsigned char*>(&r8d7) = 1;
            goto addr_3b2_25;
        }
    }
    addr_3af_26:
    r8d7 = reinterpret_cast<int32_t>(printf);
    addr_3b2_25:
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8);
    *reinterpret_cast<int32_t*>(&r9_9) = edx5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_9) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(printf);
    r10_11 = g3c4;
    do {
        rdx12 = rax10 * 4;
        *reinterpret_cast<int32_t*>(&r11_13) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_13) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            (r10_11 + r11_13 * 0x78)[rax10] = rsi[r11_13 + rdx12];
            ++r11_13;
        } while (r11_13 != 4);
        ++rax10;
    } while (rax10 != r9_9);
    rdi14 = rdi6 * rcx3;
    r11_15 = *reinterpret_cast<int32_t**>(&g411);
    r8b16 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8d7) ^ 1);
    rcx17 = r9_9;
    do {
        edx18 = *reinterpret_cast<uint32_t*>(&rcx17) % *reinterpret_cast<uint32_t*>(&r9_9);
        if (edx18 == printf) {
            if (*reinterpret_cast<int32_t*>(r10_11 + rcx17 + 0x77) >= reinterpret_cast<int32_t>(printf)) {
            }
            if (*reinterpret_cast<int32_t*>(r10_11 + rcx17 + 0xef) >= reinterpret_cast<int32_t>(printf)) {
            }
            if (*reinterpret_cast<int32_t*>(r10_11 + rcx17 + 0x167) >= reinterpret_cast<int32_t>(printf)) {
            }
            if (*reinterpret_cast<int32_t*>(r10_11 + rcx17 - 1) >= reinterpret_cast<int32_t>(printf)) {
            }
        }
        if (reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(edx18 != 4)) | r8b16) == printf)) {
            *reinterpret_cast<int32_t*>(&rax19) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(printf);
            do {
                *reinterpret_cast<uint32_t*>(&rdx20) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp8) + rax19 * 4 - 24);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(printf);
                esi21 = static_cast<uint32_t>(rdx20 + 15);
                if (*reinterpret_cast<int32_t*>(&rdx20) >= reinterpret_cast<int32_t>(printf)) {
                    esi21 = *reinterpret_cast<uint32_t*>(&rdx20);
                }
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp8) + rax19 * 4 - 24) = *reinterpret_cast<int32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(esi21) >> 4) << 6) + reinterpret_cast<int64_t>(r11_15) + (*reinterpret_cast<uint32_t*>(&rdx20) - (esi21 & 0xfffffff0)) * 4);
                ++rax19;
            } while (rax19 != 4);
        }
        rax22 = rcx17 - r9_9;
        *reinterpret_cast<int32_t*>(&rdx23) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            rsi24 = r10_11 + rdx23 * 0x78;
            rsi24[rcx17] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp8) + rdx23 * 4 - 24) ^ rsi24[rax22];
            ++rdx23;
        } while (rdx23 != 4);
        ++rcx17;
    } while (rcx17 != rdi14);
    *reinterpret_cast<int32_t*>(&rax4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(printf);
    goto addr_5c1_6;
    addr_39e_8:
    edx5 = 6;
    goto addr_3af_26;
}

struct s0 {
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
    uint32_t f40;
    uint32_t f44;
    uint32_t f48;
    uint32_t f4c;
    uint32_t f50;
    uint32_t f54;
    uint32_t f58;
    uint32_t f5c;
    uint32_t f60;
    uint32_t f64;
    uint32_t f68;
    uint32_t f6c;
    uint32_t f70;
    uint32_t f74;
    uint32_t f78;
    uint32_t f7c;
};

uint32_t* g863 = reinterpret_cast<uint32_t*>(0x778b96148bc60148);

uint32_t* gbcb = reinterpret_cast<uint32_t*>(0x778b96148bc60148);

uint32_t* g6b7 = reinterpret_cast<uint32_t*>(0x778b96148bc60148);

uint32_t* ge4c = reinterpret_cast<uint32_t*>(0x6666c3078981048b);

void ByteSub_ShiftRow(struct s0* rdi, int32_t esi) {
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
    int64_t rcx39;
    int64_t rcx40;
    int64_t rcx41;
    uint32_t* rdi42;
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
    int64_t rcx71;
    int64_t rcx72;
    int64_t rcx73;
    uint32_t ecx74;
    int64_t rdx75;
    uint32_t* rax76;
    uint32_t edx77;
    int64_t rsi78;
    int64_t rsi79;
    int64_t rsi80;
    int64_t rcx81;
    uint32_t ecx82;
    int64_t rdx83;
    int64_t rcx84;
    uint32_t ecx85;
    int64_t rdx86;
    int64_t rcx87;
    uint32_t ecx88;
    int64_t rdx89;
    int64_t rdx90;
    int64_t rdx91;
    int64_t rcx92;
    int64_t rcx93;
    int64_t rcx94;
    int64_t rax95;
    uint32_t* tmp64_96;

    if (esi == 8) {
        ecx3 = rdi->f8;
        *reinterpret_cast<uint32_t*>(&rdx4) = rdi->f4 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(printf);
        rax5 = g863;
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
        *reinterpret_cast<uint32_t*>(&rcx39) = rdi->f40 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx39) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f40 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f40) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rcx39 * 4);
        *reinterpret_cast<uint32_t*>(&rcx40) = rdi->f50 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx40) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f50 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f50) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rcx40 * 4);
        *reinterpret_cast<uint32_t*>(&rcx41) = rdi->f60 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f60 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f60) >> 4) << 6) + reinterpret_cast<int64_t>(rax5) + rcx41 * 4);
        rdi42 = &rdi->f70;
    } else {
        if (esi == 6) {
            ecx43 = rdi->f8;
            *reinterpret_cast<uint32_t*>(&rdx44) = rdi->f4 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx44) + 4) = reinterpret_cast<int32_t>(printf);
            rax45 = gbcb;
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
            *reinterpret_cast<uint32_t*>(&rcx71) = rdi->f20 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx71) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f20 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f20) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rcx71 * 4);
            *reinterpret_cast<uint32_t*>(&rcx72) = rdi->f30 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx72) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f30 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f30) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rcx72 * 4);
            *reinterpret_cast<uint32_t*>(&rcx73) = rdi->f40 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx73) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f40 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f40) >> 4) << 6) + reinterpret_cast<int64_t>(rax45) + rcx73 * 4);
            rdi42 = &rdi->f50;
        } else {
            if (esi != 4) {
                addr_e51_6:
                return;
            } else {
                ecx74 = rdi->f8;
                *reinterpret_cast<uint32_t*>(&rdx75) = rdi->f4 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx75) + 4) = reinterpret_cast<int32_t>(printf);
                rax76 = g6b7;
                edx77 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rdx75 * 4);
                *reinterpret_cast<uint32_t*>(&rsi78) = rdi->f14 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi78) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f4 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f14) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rsi78 * 4);
                *reinterpret_cast<uint32_t*>(&rsi79) = rdi->f24 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi79) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f14 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f24) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rsi79 * 4);
                *reinterpret_cast<uint32_t*>(&rsi80) = rdi->f34 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi80) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f24 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f34) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rsi80 * 4);
                rdi->f34 = edx77;
                *reinterpret_cast<uint32_t*>(&rcx81) = ecx74 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx81) + 4) = reinterpret_cast<int32_t>(printf);
                ecx82 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(ecx74) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rcx81 * 4);
                *reinterpret_cast<uint32_t*>(&rdx83) = rdi->f28 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx83) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f8 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f28) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rdx83 * 4);
                rdi->f28 = ecx82;
                *reinterpret_cast<uint32_t*>(&rcx84) = rdi->f18 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx84) + 4) = reinterpret_cast<int32_t>(printf);
                ecx85 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rcx84 * 4);
                *reinterpret_cast<uint32_t*>(&rdx86) = rdi->f38 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx86) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f18 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f38) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rdx86 * 4);
                rdi->f38 = ecx85;
                *reinterpret_cast<uint32_t*>(&rcx87) = rdi->fc & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx87) + 4) = reinterpret_cast<int32_t>(printf);
                ecx88 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->fc) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rcx87 * 4);
                *reinterpret_cast<uint32_t*>(&rdx89) = rdi->f3c & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx89) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->fc = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f3c) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rdx89 * 4);
                *reinterpret_cast<uint32_t*>(&rdx90) = rdi->f2c & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx90) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f3c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f2c) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rdx90 * 4);
                *reinterpret_cast<uint32_t*>(&rdx91) = rdi->f1c & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx91) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f2c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f1c) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rdx91 * 4);
                rdi->f1c = ecx88;
                *reinterpret_cast<uint32_t*>(&rcx92) = rdi->f0 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx92) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f0 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f0) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rcx92 * 4);
                *reinterpret_cast<uint32_t*>(&rcx93) = rdi->f10 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx93) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f10 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f10) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rcx93 * 4);
                *reinterpret_cast<uint32_t*>(&rcx94) = rdi->f20 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx94) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f20 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f20) >> 4) << 6) + reinterpret_cast<int64_t>(rax76) + rcx94 * 4);
                rdi42 = &rdi->f30;
            }
        }
    }
    *reinterpret_cast<uint32_t*>(&rax95) = *rdi42 & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax95) + 4) = reinterpret_cast<int32_t>(printf);
    tmp64_96 = reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(*rdi42) >> 4) << 6) + reinterpret_cast<int64_t>(ge4c));
    *rdi42 = tmp64_96[rax95];
    goto addr_e51_6;
}

void decrypt(int64_t rdi) {
    int64_t rdi2;
    int32_t edx3;

    *reinterpret_cast<int32_t*>(&rdi2) = edx3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(printf);
    fun_10a7(rdi2);
}

struct s1 {
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
    uint32_t f40;
    uint32_t f44;
    uint32_t f48;
    uint32_t f4c;
    uint32_t f50;
    uint32_t f54;
    uint32_t f58;
    uint32_t f5c;
    uint32_t f60;
    uint32_t f64;
    uint32_t f68;
    uint32_t f6c;
    uint32_t f70;
    uint32_t f74;
    uint32_t f78;
    uint32_t f7c;
};

uint32_t* g14fd = reinterpret_cast<uint32_t*>(0x578b8a0c8bc20148);

uint32_t* g1853 = reinterpret_cast<uint32_t*>(0x578b8a0c8bc20148);

uint32_t* g1354 = reinterpret_cast<uint32_t*>(0x4f8b8a148bc20148);

uint32_t* g1acb = reinterpret_cast<uint32_t*>(0x6666c3078981048b);

void InversShiftRow_ByteSub(struct s1* rdi, int32_t esi) {
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
    int64_t rcx39;
    int64_t rcx40;
    int64_t rcx41;
    uint32_t* rdi42;
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
    int64_t rcx72;
    int64_t rcx73;
    int64_t rcx74;
    uint32_t* rax75;
    uint32_t edx76;
    int64_t rcx77;
    int64_t rcx78;
    uint32_t ecx79;
    int64_t rsi80;
    int64_t rdx81;
    uint32_t edx82;
    int64_t rsi83;
    int64_t rcx84;
    uint32_t ecx85;
    int64_t rdx86;
    int64_t rcx87;
    uint32_t ecx88;
    int64_t rdx89;
    int64_t rdx90;
    int64_t rdx91;
    int64_t rcx92;
    int64_t rcx93;
    int64_t rcx94;
    int64_t rax95;
    uint32_t* tmp64_96;

    if (esi == 8) {
        *reinterpret_cast<uint32_t*>(&rcx3) = rdi->f74 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
        rax4 = g14fd;
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
        *reinterpret_cast<uint32_t*>(&rcx39) = rdi->f40 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx39) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f40 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f40) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rcx39 * 4);
        *reinterpret_cast<uint32_t*>(&rcx40) = rdi->f50 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx40) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f50 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f50) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rcx40 * 4);
        *reinterpret_cast<uint32_t*>(&rcx41) = rdi->f60 & 15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = reinterpret_cast<int32_t>(printf);
        rdi->f60 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f60) >> 4) << 6) + reinterpret_cast<int64_t>(rax4) + rcx41 * 4);
        rdi42 = &rdi->f70;
    } else {
        if (esi == 6) {
            *reinterpret_cast<uint32_t*>(&rcx43) = rdi->f54 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx43) + 4) = reinterpret_cast<int32_t>(printf);
            rax44 = g1853;
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
            *reinterpret_cast<uint32_t*>(&rcx71) = rdi->f20 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx71) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f20 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f20) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rcx71 * 4);
            *reinterpret_cast<uint32_t*>(&rcx72) = rdi->f30 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx72) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f30 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f30) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rcx72 * 4);
            *reinterpret_cast<uint32_t*>(&rcx73) = rdi->f40 & 15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx73) + 4) = reinterpret_cast<int32_t>(printf);
            rdi->f40 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f40) >> 4) << 6) + reinterpret_cast<int64_t>(rax44) + rcx73 * 4);
            rdi42 = &rdi->f50;
        } else {
            if (esi != 4) {
                addr_1ad0_6:
                return;
            } else {
                *reinterpret_cast<uint32_t*>(&rcx74) = rdi->f34 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx74) + 4) = reinterpret_cast<int32_t>(printf);
                rax75 = g1354;
                edx76 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f34) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rcx74 * 4);
                *reinterpret_cast<uint32_t*>(&rcx77) = rdi->f24 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx77) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f34 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f24) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rcx77 * 4);
                *reinterpret_cast<uint32_t*>(&rcx78) = rdi->f14 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx78) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f24 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f14) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rcx78 * 4);
                ecx79 = rdi->f8;
                *reinterpret_cast<uint32_t*>(&rsi80) = rdi->f4 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi80) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f14 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rsi80 * 4);
                rdi->f4 = edx76;
                *reinterpret_cast<uint32_t*>(&rdx81) = rdi->f38 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx81) + 4) = reinterpret_cast<int32_t>(printf);
                edx82 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f38) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rdx81 * 4);
                *reinterpret_cast<uint32_t*>(&rsi83) = rdi->f18 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi83) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f38 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rsi83 * 4);
                rdi->f18 = edx82;
                *reinterpret_cast<uint32_t*>(&rcx84) = ecx79 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx84) + 4) = reinterpret_cast<int32_t>(printf);
                ecx85 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(ecx79) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rcx84 * 4);
                *reinterpret_cast<uint32_t*>(&rdx86) = rdi->f28 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx86) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f8 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f28) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rdx86 * 4);
                rdi->f28 = ecx85;
                *reinterpret_cast<uint32_t*>(&rcx87) = rdi->f3c & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx87) + 4) = reinterpret_cast<int32_t>(printf);
                ecx88 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f3c) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rcx87 * 4);
                *reinterpret_cast<uint32_t*>(&rdx89) = rdi->fc & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx89) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f3c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->fc) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rdx89 * 4);
                *reinterpret_cast<uint32_t*>(&rdx90) = rdi->f1c & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx90) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->fc = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f1c) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rdx90 * 4);
                *reinterpret_cast<uint32_t*>(&rdx91) = rdi->f2c & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx91) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f1c = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f2c) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rdx91 * 4);
                rdi->f2c = ecx88;
                *reinterpret_cast<uint32_t*>(&rcx92) = rdi->f0 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx92) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f0 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f0) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rcx92 * 4);
                *reinterpret_cast<uint32_t*>(&rcx93) = rdi->f10 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx93) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f10 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f10) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rcx93 * 4);
                *reinterpret_cast<uint32_t*>(&rcx94) = rdi->f20 & 15;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx94) + 4) = reinterpret_cast<int32_t>(printf);
                rdi->f20 = *reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f20) >> 4) << 6) + reinterpret_cast<int64_t>(rax75) + rcx94 * 4);
                rdi42 = &rdi->f30;
            }
        }
    }
    *reinterpret_cast<uint32_t*>(&rax95) = *rdi42 & 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax95) + 4) = reinterpret_cast<int32_t>(printf);
    tmp64_96 = reinterpret_cast<uint32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(*rdi42) >> 4) << 6) + reinterpret_cast<int64_t>(g1acb));
    *rdi42 = tmp64_96[rax95];
    goto addr_1ad0_6;
}

int32_t* g1dd3 = reinterpret_cast<int32_t*>(0x841f0f66c381048b);

int64_t SubByte(int64_t rdi) {
    uint32_t eax2;
    int32_t* tmp64_3;
    int64_t rax4;

    eax2 = static_cast<uint32_t>(rdi + 15);
    if (*reinterpret_cast<int32_t*>(&rdi) >= reinterpret_cast<int32_t>(printf)) {
        eax2 = *reinterpret_cast<uint32_t*>(&rdi);
    }
    tmp64_3 = reinterpret_cast<int32_t*>((static_cast<int64_t>(reinterpret_cast<int32_t>(eax2) >> 4) << 6) + reinterpret_cast<int64_t>(g1dd3));
    *reinterpret_cast<int32_t*>(&rax4) = tmp64_3[*reinterpret_cast<uint32_t*>(&rdi) - (eax2 & 0xfffffff0)];
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(printf);
    return rax4;
}

int64_t g1df2 = 0x5280f03290f;

int64_t g1e24 = 0x5280f06290f41;

void aes_main() {
    int64_t rbx1;
    int64_t r14_2;

    __asm__("movaps xmm0, [rip+0x0]");
    rbx1 = g1df2;
    __asm__("movaps [rbx], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x10], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x20], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbx+0x30], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    r14_2 = g1e24;
    __asm__("movaps [r14], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x10], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x20], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [r14+0x30], xmm0");
    fun_1e5c(rbx1, r14_2, 0x1f480);
}

uint32_t* g62c = reinterpret_cast<uint32_t*>(0xa048d4c00401f0f);

int64_t AddRoundKey(uint32_t* rdi, int32_t esi, int32_t edx) {
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
                addr_61b_4:
                rcx5 = edx * eax4;
                *reinterpret_cast<int32_t*>(&rax6) = eax4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(printf);
                rsi8 = g62c;
            } else {
                addr_60f_5:
                eax4 = 6;
                goto addr_61b_4;
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
            goto addr_60f_5;
        if (esi != 0x1f500) 
            goto addr_5ed_10;
    }
    eax4 = 8;
    goto addr_61b_4;
    addr_5ed_10:
    if (esi == 0x2eec0) 
        goto addr_60f_5;
    goto addr_61b_4;
}

uint32_t* gf1e = reinterpret_cast<uint32_t*>(0x44f53144b82c8b42);

void* gf73 = reinterpret_cast<void*>(0x1e0b8ac8b46);

void* gfd2 = reinterpret_cast<void*>(0x3c0bd943346);

int64_t MixColumn_AddRoundKey(uint32_t* rdi, int32_t esi, int32_t edx) {
    void* rsp4;
    int64_t r8_5;
    int32_t v6;
    int64_t v7;
    int64_t rdx8;
    int64_t v9;
    void* r9_10;
    int64_t r10_11;
    uint32_t r11d12;
    uint32_t ebp13;
    int64_t rbx14;
    uint32_t esi15;
    uint32_t r14d16;
    uint32_t r14d17;
    uint32_t ecx18;
    int64_t r14_19;
    int64_t r12_20;
    int64_t r15_21;
    uint32_t* rax22;
    uint32_t r13d23;
    uint32_t ecx24;
    uint32_t esi25;
    uint32_t esi26;
    uint32_t r8d27;
    void* rax28;
    uint32_t r13d29;
    uint32_t esi30;
    uint32_t eax31;
    uint32_t ecx32;
    uint32_t ecx33;
    uint32_t esi34;
    uint32_t r11d35;
    void* rbp36;
    uint32_t r10d37;
    uint32_t ecx38;
    uint32_t ecx39;
    uint32_t eax40;
    int64_t rcx41;
    void* rax42;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 40);
    *reinterpret_cast<int32_t*>(&r8_5) = esi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_5) + 4) = reinterpret_cast<int32_t>(printf);
    v6 = esi;
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(esi < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(esi == printf))) {
        v7 = edx * v6;
        *reinterpret_cast<int32_t*>(&rdx8) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(printf);
        v9 = r8_5;
        do {
            r9_10 = reinterpret_cast<void*>(rdx8 << 4);
            *reinterpret_cast<uint32_t*>(&r10_11) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r9_10));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_11) + 4) = reinterpret_cast<int32_t>(printf);
            r11d12 = static_cast<uint32_t>(r10_11 + r10_11);
            ebp13 = r11d12 ^ 0x11b;
            if ((*reinterpret_cast<uint32_t*>(&r10_11) & 0x7fffff80) != 0x80) {
                ebp13 = r11d12;
            }
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp4) + reinterpret_cast<int64_t>(r9_10) - 96) = ebp13;
            *reinterpret_cast<uint32_t*>(&rbx14) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r9_10) + 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx14) + 4) = reinterpret_cast<int32_t>(printf);
            esi15 = static_cast<uint32_t>(rbx14 + rbx14);
            r14d16 = esi15 ^ *reinterpret_cast<uint32_t*>(&rbx14);
            r14d17 = r14d16 ^ ebp13;
            ecx18 = r14d17 ^ 0x11b;
            if ((r14d16 & 0xffffff00) != 0x100) {
                ecx18 = r14d17;
            }
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp4) + reinterpret_cast<int64_t>(r9_10) - 96) = ecx18;
            *reinterpret_cast<uint32_t*>(&r14_19) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r9_10) + 8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_19) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<uint32_t*>(&r12_20) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r9_10) + 12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(printf);
            r15_21 = rdx8 + v7;
            rax22 = gf1e;
            r13d23 = esi15 ^ 0x11b;
            if ((*reinterpret_cast<uint32_t*>(&rbx14) & 0x7fffff80) != 0x80) {
                r13d23 = esi15;
            }
            ecx24 = static_cast<uint32_t>(r14_19 + r14_19);
            esi25 = ecx24 ^ *reinterpret_cast<uint32_t*>(&r14_19);
            esi26 = esi25 ^ r13d23;
            r8d27 = esi26 ^ 0x11b;
            if ((esi25 & 0xffffff00) != 0x100) {
                r8d27 = esi26;
            }
            rax28 = gf73;
            r13d29 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax28) + r15_21 * 4 + 0x1e0) ^ *reinterpret_cast<uint32_t*>(&r10_11) ^ *reinterpret_cast<uint32_t*>(&r12_20) ^ r8d27;
            esi30 = ecx24 ^ 0x11b;
            if ((*reinterpret_cast<uint32_t*>(&r14_19) & 0x7fffff80) != 0x80) {
                esi30 = ecx24;
            }
            eax31 = static_cast<uint32_t>(r12_20 + r12_20);
            ecx32 = eax31 ^ *reinterpret_cast<uint32_t*>(&r12_20);
            ecx33 = ecx32 ^ esi30;
            esi34 = ecx33 ^ 0x11b;
            if ((ecx32 & 0xffffff00) != 0x100) {
                esi34 = ecx33;
            }
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp4) + reinterpret_cast<int64_t>(r9_10) - 96) = rax22[r15_21] ^ *reinterpret_cast<uint32_t*>(&r14_19) ^ *reinterpret_cast<uint32_t*>(&r12_20) ^ ecx18;
            r11d35 = r11d12 ^ *reinterpret_cast<uint32_t*>(&r10_11);
            rbp36 = gfd2;
            r10d37 = *reinterpret_cast<uint32_t*>(&r10_11) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp36) + r15_21 * 4 + 0x3c0) ^ *reinterpret_cast<uint32_t*>(&rbx14) ^ esi34;
            r8_5 = v9;
            ecx38 = eax31 ^ 0x11b;
            if ((*reinterpret_cast<uint32_t*>(&r12_20) & 0x7fffff80) != 0x80) {
                ecx38 = eax31;
            }
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp4) + reinterpret_cast<int64_t>(r9_10) - 92) = r13d29;
            ecx39 = ecx38 ^ r11d35;
            eax40 = ecx39 ^ 0x11b;
            if ((r11d35 & 0xffffff00) != 0x100) {
                eax40 = ecx39;
            }
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp4) + reinterpret_cast<int64_t>(r9_10) - 88) = r10d37;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp4) + reinterpret_cast<int64_t>(r9_10) - 84) = *reinterpret_cast<uint32_t*>(&rbx14) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp36) + r15_21 * 4 + 0x5a0) ^ *reinterpret_cast<uint32_t*>(&r14_19) ^ eax40;
            ++rdx8;
        } while (rdx8 != r8_5);
    }
    if (v6 > reinterpret_cast<int32_t>(printf)) {
        *reinterpret_cast<int32_t*>(&rcx41) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            rax42 = reinterpret_cast<void*>(rcx41 << 4);
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(rax42)) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp4) + reinterpret_cast<int64_t>(rax42) - 96);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(rax42) + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp4) + reinterpret_cast<int64_t>(rax42) - 92);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(rax42) + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp4) + reinterpret_cast<int64_t>(rax42) - 88);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(rax42) + 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp4) + reinterpret_cast<int64_t>(rax42) - 84);
            ++rcx41;
        } while (rcx41 != r8_5);
    }
    return printf;
}

uint32_t* g1afd = reinterpret_cast<uint32_t*>(0x470a0c8d4c001f0f);

int64_t AddRoundKey_InversMixColumn(uint32_t* rdi, int32_t esi, int32_t edx) {
    void* rsp4;
    int64_t rax5;
    int64_t rcx6;
    int64_t rdx7;
    uint32_t* r8_8;
    int64_t r9_9;
    void* r11_10;
    int64_t rcx11;
    int64_t rdx12;
    uint64_t r8_13;
    int64_t r10_14;
    int64_t r9_15;
    int64_t r11_16;
    uint32_t ebx17;
    uint32_t r14d18;
    int64_t r14_19;
    uint32_t ebx20;
    uint32_t r15d21;
    int64_t r15_22;
    uint32_t r11d23;
    uint32_t ebx24;
    int64_t r11_25;
    uint64_t r14_26;
    int64_t r14_27;
    uint32_t ebp28;
    int64_t r12_29;
    uint32_t ebp30;
    uint32_t r15d31;
    int64_t r15_32;
    uint32_t ebp33;
    uint32_t r12d34;
    uint32_t ebx35;
    uint64_t r14_36;
    int64_t r14_37;
    uint32_t ebp38;
    uint32_t r12d39;
    int64_t r12_40;
    uint32_t ebp41;
    int64_t r15_42;
    uint32_t r12d43;
    uint32_t ebp44;
    uint32_t ebp45;
    uint64_t r10_46;
    int64_t r10_47;
    uint32_t ebx48;
    int64_t r15_49;
    uint32_t ebx50;
    int64_t r14_51;
    uint32_t ebx52;
    uint32_t r15d53;
    int64_t rcx54;
    void* rdx55;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8);
    *reinterpret_cast<int32_t*>(&rax5) = esi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(esi < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(esi == printf))) {
        rcx6 = edx * esi;
        *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(printf);
        r8_8 = g1afd;
        do {
            r9_9 = rdx7 + rcx6;
            r11_10 = reinterpret_cast<void*>(rdx7 << 4);
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r11_10)) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r11_10)) ^ r8_8[r9_9];
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r11_10) + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r11_10) + 4) ^ (r8_8 + r9_9)[0x78];
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r11_10) + 8) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r11_10) + 8) ^ (r8_8 + r9_9)[0xf0];
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r11_10) + 12) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r11_10) + 12) ^ (r8_8 + r9_9)[0x168];
            ++rdx7;
        } while (rdx7 != rax5);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(esi < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(esi == printf))) {
        *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            rdx12 = rcx11 * 4;
            *reinterpret_cast<int32_t*>(&r8_13) = *reinterpret_cast<int32_t*>(&rdx12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(&r10_14) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_14) + 4) = reinterpret_cast<int32_t>(printf);
            do {
                r9_15 = r10_14 + rdx12;
                *reinterpret_cast<uint32_t*>(&r11_16) = rdi[r9_15];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_16) + 4) = reinterpret_cast<int32_t>(printf);
                ebx17 = static_cast<uint32_t>(r11_16 + r11_16);
                r14d18 = ebx17 ^ 0x11b;
                if ((*reinterpret_cast<uint32_t*>(&r11_16) & 0x7fffff80) != 0x80) {
                    r14d18 = ebx17;
                }
                *reinterpret_cast<uint32_t*>(&r14_19) = r14d18 ^ *reinterpret_cast<uint32_t*>(&r11_16);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_19) + 4) = reinterpret_cast<int32_t>(printf);
                ebx20 = static_cast<uint32_t>(r14_19 + r14_19);
                r15d21 = ebx20 ^ 0x11b;
                if ((*reinterpret_cast<uint32_t*>(&r14_19) & 0x7fffff80) != 0x80) {
                    r15d21 = ebx20;
                }
                *reinterpret_cast<uint32_t*>(&r15_22) = r15d21 ^ *reinterpret_cast<uint32_t*>(&r11_16);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_22) + 4) = reinterpret_cast<int32_t>(printf);
                r11d23 = static_cast<uint32_t>(r15_22 + r15_22);
                ebx24 = r11d23 ^ 0x11b;
                if ((*reinterpret_cast<uint32_t*>(&r15_22) & 0x7fffff80) != 0x80) {
                    ebx24 = r11d23;
                }
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp4) + r9_15 * 4 - 0x80) = ebx24;
                r11_25 = r10_14 + 1;
                *reinterpret_cast<uint32_t*>(&r14_26) = *reinterpret_cast<uint32_t*>(&r11_25) & 3;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_26) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<uint32_t*>(&r14_27) = rdi[r14_26 | r8_13];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_27) + 4) = reinterpret_cast<int32_t>(printf);
                ebp28 = static_cast<uint32_t>(r14_27 + r14_27);
                *reinterpret_cast<uint32_t*>(&r12_29) = ebp28 ^ 0x11b;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_29) + 4) = reinterpret_cast<int32_t>(printf);
                if ((*reinterpret_cast<uint32_t*>(&r14_27) & 0x7fffff80) != 0x80) {
                    *reinterpret_cast<uint32_t*>(&r12_29) = ebp28;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_29) + 4) = reinterpret_cast<int32_t>(printf);
                }
                ebp30 = static_cast<uint32_t>(r12_29 + r12_29);
                r15d31 = ebp30 ^ 0x11b;
                if ((*reinterpret_cast<uint32_t*>(&r12_29) & 0x7fffff80) != 0x80) {
                    r15d31 = ebp30;
                }
                *reinterpret_cast<uint32_t*>(&r15_32) = r15d31 ^ *reinterpret_cast<uint32_t*>(&r14_27);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_32) + 4) = reinterpret_cast<int32_t>(printf);
                ebp33 = static_cast<uint32_t>(r15_32 + r15_32);
                r12d34 = ebp33 ^ 0x11b;
                if ((*reinterpret_cast<uint32_t*>(&r15_32) & 0x7fffff80) != 0x80) {
                    r12d34 = ebp33;
                }
                ebx35 = ebx24 ^ *reinterpret_cast<uint32_t*>(&r14_27) ^ r12d34;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp4) + r9_15 * 4 - 0x80) = ebx35;
                *reinterpret_cast<uint32_t*>(&r14_36) = static_cast<uint32_t>(r10_14 + 2) & 3;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_36) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<uint32_t*>(&r14_37) = rdi[r14_36 | r8_13];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_37) + 4) = reinterpret_cast<int32_t>(printf);
                ebp38 = static_cast<uint32_t>(r14_37 + r14_37);
                r12d39 = ebp38 ^ 0x11b;
                if ((*reinterpret_cast<uint32_t*>(&r14_37) & 0x7fffff80) != 0x80) {
                    r12d39 = ebp38;
                }
                *reinterpret_cast<uint32_t*>(&r12_40) = r12d39 ^ *reinterpret_cast<uint32_t*>(&r14_37);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_40) + 4) = reinterpret_cast<int32_t>(printf);
                ebp41 = static_cast<uint32_t>(r12_40 + r12_40);
                *reinterpret_cast<uint32_t*>(&r15_42) = ebp41 ^ 0x11b;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_42) + 4) = reinterpret_cast<int32_t>(printf);
                if ((*reinterpret_cast<uint32_t*>(&r12_40) & 0x7fffff80) != 0x80) {
                    *reinterpret_cast<uint32_t*>(&r15_42) = ebp41;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_42) + 4) = reinterpret_cast<int32_t>(printf);
                }
                r12d43 = static_cast<uint32_t>(r15_42 + r15_42);
                ebp44 = r12d43 ^ 0x11b;
                if ((*reinterpret_cast<uint32_t*>(&r15_42) & 0x7fffff80) != 0x80) {
                    ebp44 = r12d43;
                }
                ebp45 = ebp44 ^ *reinterpret_cast<uint32_t*>(&r14_37) ^ ebx35;
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp4) + r9_15 * 4 - 0x80) = ebp45;
                *reinterpret_cast<uint32_t*>(&r10_46) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r10_14) - 1) & 3;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_46) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<uint32_t*>(&r10_47) = rdi[r10_46 | r8_13];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_47) + 4) = reinterpret_cast<int32_t>(printf);
                ebx48 = static_cast<uint32_t>(r10_47 + r10_47);
                *reinterpret_cast<uint32_t*>(&r15_49) = ebx48 ^ 0x11b;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_49) + 4) = reinterpret_cast<int32_t>(printf);
                if ((*reinterpret_cast<uint32_t*>(&r10_47) & 0x7fffff80) != 0x80) {
                    *reinterpret_cast<uint32_t*>(&r15_49) = ebx48;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_49) + 4) = reinterpret_cast<int32_t>(printf);
                }
                ebx50 = static_cast<uint32_t>(r15_49 + r15_49);
                *reinterpret_cast<uint32_t*>(&r14_51) = ebx50 ^ 0x11b;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_51) + 4) = reinterpret_cast<int32_t>(printf);
                if ((*reinterpret_cast<uint32_t*>(&r15_49) & 0x7fffff80) != 0x80) {
                    *reinterpret_cast<uint32_t*>(&r14_51) = ebx50;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_51) + 4) = reinterpret_cast<int32_t>(printf);
                }
                ebx52 = static_cast<uint32_t>(r14_51 + r14_51);
                r15d53 = ebx52 ^ 0x11b;
                if ((*reinterpret_cast<uint32_t*>(&r14_51) & 0x7fffff80) != 0x80) {
                    r15d53 = ebx52;
                }
                *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp4) + r9_15 * 4 - 0x80) = r15d53 ^ *reinterpret_cast<uint32_t*>(&r10_47) ^ ebp45;
                r10_14 = r11_25;
            } while (r11_25 != 4);
            ++rcx11;
        } while (rcx11 != rax5);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(esi < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(esi == printf))) {
        *reinterpret_cast<int32_t*>(&rcx54) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx54) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            rdx55 = reinterpret_cast<void*>(rcx54 << 4);
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(rdx55)) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp4) + reinterpret_cast<int64_t>(rdx55) - 0x80);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(rdx55) + 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp4) + reinterpret_cast<int64_t>(rdx55) - 0x7c);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(rdx55) + 8) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp4) + reinterpret_cast<int64_t>(rdx55) - 0x78);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(rdx55) + 12) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp4) + reinterpret_cast<int64_t>(rdx55) - 0x74);
            ++rcx54;
        } while (rcx54 != rax5);
    }
    return printf;
}

int32_t* g1e92 = reinterpret_cast<int32_t*>(0x480000000007c741);

void submain() {
    int32_t* r15_1;

    r15_1 = g1e92;
    *r15_1 = reinterpret_cast<int32_t>(printf);
    fun_1ea5(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 24 + 8);
}

