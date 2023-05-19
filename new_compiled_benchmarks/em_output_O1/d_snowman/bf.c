
void fun_15d(int64_t rdi, int64_t rsi) {
    int64_t* rbx3;
    uint64_t r12_4;
    void* rbx5;
    int64_t v6;
    int1_t cf7;
    int64_t r14_8;
    int64_t v9;

    while (rbx3[r12_4] = reinterpret_cast<int64_t>(__return_address()), *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbx5) + (r12_4 * 8 | 8)) = v6, cf7 = r12_4 < 0x3fe, r12_4 = r12_4 + 2, cf7) {
        fun_15d(r14_8, 1);
    }
    goto v9;
}

struct s0 {
    signed char[4] pad4;
    uint32_t f4;
};

void printf();

struct s1 {
    signed char[4] pad4;
    uint32_t f4;
};

void fun_a30(int64_t rdi, int64_t rsi) {
    int64_t v3;
    uint32_t* r14_4;
    struct s0* r14_5;
    int64_t v6;
    int64_t rax7;
    uint32_t ebx8;
    uint32_t ecx9;
    int64_t r14_10;
    unsigned char cl11;
    unsigned char* r13_12;
    unsigned char* r12_13;
    int64_t r14_14;
    int64_t r15_15;
    int64_t rax16;
    struct s1* r14_17;
    int64_t rbp18;
    uint32_t* v19;
    int64_t v20;

    while (1) {
        v3 = reinterpret_cast<int64_t>(__return_address());
        *r14_4 = *reinterpret_cast<uint32_t*>(&v3) >> 24 | *reinterpret_cast<uint32_t*>(&v3) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&v3) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&v3) << 24;
        r14_5->f4 = *reinterpret_cast<uint32_t*>(&v6) >> 24 | *reinterpret_cast<uint32_t*>(&v6) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&v6) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&v6) << 24;
        do {
            rax7 = reinterpret_cast<int32_t>(ebx8);
            ecx9 = *reinterpret_cast<unsigned char*>(r14_10 + rax7);
            cl11 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx9) ^ *r13_12);
            ++r13_12;
            *r12_13 = cl11;
            ++r12_13;
            *reinterpret_cast<unsigned char*>(r14_14 + rax7) = cl11;
            ebx8 = ebx8 + 1 & 7;
            if (r15_15 == printf) 
                goto addr_ab3_3;
            --r15_15;
        } while (!reinterpret_cast<int1_t>(ebx8 == printf));
        *reinterpret_cast<uint32_t*>(&rax16) = r14_17->f4 >> 24 | r14_17->f4 >> 8 & 0xff00 | r14_17->f4 << 8 & 0xff0000 | r14_17->f4 << 24;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(printf);
        v6 = rax16;
        fun_a30(rbp18, 1);
    }
    addr_ab3_3:
    __asm__("xorps xmm0, xmm0");
    __asm__("movaps [rsp], xmm0");
    *v19 = ebx8;
    goto v20;
}

struct s2 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s3 {
    signed char[4] pad4;
    uint32_t f4;
};

void fun_a9f(int64_t rdi, int64_t rsi) {
    int64_t v3;
    uint32_t* r14_4;
    struct s2* r14_5;
    int64_t v6;
    uint32_t eax7;
    unsigned char* r13_8;
    int64_t rcx9;
    uint32_t ebx10;
    uint32_t edx11;
    int64_t r14_12;
    int64_t r14_13;
    unsigned char* r12_14;
    int64_t r15_15;
    int64_t rax16;
    struct s3* r14_17;
    int64_t rbp18;
    uint32_t* v19;
    int64_t v20;

    while (1) {
        v3 = reinterpret_cast<int64_t>(__return_address());
        *r14_4 = *reinterpret_cast<uint32_t*>(&v3) >> 24 | *reinterpret_cast<uint32_t*>(&v3) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&v3) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&v3) << 24;
        r14_5->f4 = *reinterpret_cast<uint32_t*>(&v6) >> 24 | *reinterpret_cast<uint32_t*>(&v6) >> 8 & 0xff00 | *reinterpret_cast<uint32_t*>(&v6) << 8 & 0xff0000 | *reinterpret_cast<uint32_t*>(&v6) << 24;
        do {
            eax7 = *r13_8;
            ++r13_8;
            rcx9 = reinterpret_cast<int32_t>(ebx10);
            edx11 = *reinterpret_cast<unsigned char*>(r14_12 + rcx9);
            *reinterpret_cast<unsigned char*>(r14_13 + rcx9) = *reinterpret_cast<unsigned char*>(&eax7);
            *r12_14 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx11) ^ *reinterpret_cast<unsigned char*>(&eax7));
            ++r12_14;
            ebx10 = ebx10 + 1 & 7;
            if (r15_15 == printf) 
                goto addr_ab3_3;
            --r15_15;
        } while (!reinterpret_cast<int1_t>(ebx10 == printf));
        *reinterpret_cast<uint32_t*>(&rax16) = r14_17->f4 >> 24 | r14_17->f4 >> 8 & 0xff00 | r14_17->f4 << 8 & 0xff0000 | r14_17->f4 << 24;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(printf);
        v6 = rax16;
        fun_a9f(rbp18, 1);
    }
    addr_ab3_3:
    __asm__("xorps xmm0, xmm0");
    __asm__("movaps [rsp], xmm0");
    *v19 = ebx10;
    goto v20;
}

void fun_b9c(void* rdi, void* rsi, int64_t rdx, void* rcx, void* r8, int64_t r9, int64_t a7);

int64_t gb2a = 0x50fd814128348d4a;

void fun_b58(void* rdi, int64_t rsi) {
    void* rsp3;
    int64_t v4;
    uint64_t rax5;
    uint64_t r14_6;
    int64_t r15_7;
    int64_t r13_8;
    int64_t rdx9;
    void* rsp10;
    uint64_t rax11;
    uint64_t rcx12;
    int1_t cf13;
    int64_t rax14;
    uint32_t edx15;
    int64_t v16;

    while (1) {
        rsp3 = __zero_stack_offset();
        v4 = reinterpret_cast<int64_t>(__return_address());
        *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            r14_6 = rax5;
            r15_7 = r13_8;
            ++r13_8;
            ++rax5;
            if (r15_7 > 0x144e) 
                break;
        } while (r14_6 < 39);
        *reinterpret_cast<int32_t*>(&rdx9) = *reinterpret_cast<int32_t*>(&rax5);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(printf);
        fun_b9c(reinterpret_cast<int64_t>(rsp3) + 80, reinterpret_cast<int64_t>(rsp3) + 32, rdx9, reinterpret_cast<int64_t>(rsp3) + 16, reinterpret_cast<int64_t>(rsp3) + 12, 1, v4);
        rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        *reinterpret_cast<int32_t*>(&rax11) = *reinterpret_cast<int32_t*>(&r14_6);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            cf13 = rcx12 < rax11;
            ++rcx12;
        } while (cf13);
        if (*reinterpret_cast<int32_t*>(&r15_7) > 0x144e) 
            break;
        r13_8 = *reinterpret_cast<int32_t*>(&r13_8);
        rax14 = gb2a;
        edx15 = 0x144f;
        if (*reinterpret_cast<int32_t*>(&r13_8) >= reinterpret_cast<int32_t>(0x1450)) {
            edx15 = *reinterpret_cast<uint32_t*>(&r13_8);
        }
        if (edx15 - *reinterpret_cast<uint32_t*>(&r13_8) >= 39) {
        }
        fun_b58(reinterpret_cast<int64_t>(rsp10) + 80, rax14 + r13_8);
    }
    goto v16;
}

void fun_b9c(void* rdi, void* rsi, int64_t rdx, void* rcx, void* r8, int64_t r9, int64_t a7) {
    void* rsp8;
    int64_t v9;
    uint64_t rax10;
    uint64_t r14_11;
    uint64_t rcx12;
    int1_t cf13;
    int64_t r15_14;
    int64_t r13_15;
    int64_t rax16;
    uint32_t edx17;
    void* rsp18;
    uint64_t rax19;
    int64_t rdx20;
    int64_t v21;

    while (1) {
        rsp8 = __zero_stack_offset();
        v9 = reinterpret_cast<int64_t>(__return_address());
        *reinterpret_cast<int32_t*>(&rax10) = *reinterpret_cast<int32_t*>(&r14_11);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            cf13 = rcx12 < rax10;
            ++rcx12;
        } while (cf13);
        if (*reinterpret_cast<int32_t*>(&r15_14) > 0x144e) 
            break;
        r13_15 = *reinterpret_cast<int32_t*>(&r13_15);
        rax16 = gb2a;
        edx17 = 0x144f;
        if (*reinterpret_cast<int32_t*>(&r13_15) >= reinterpret_cast<int32_t>(0x1450)) {
            edx17 = *reinterpret_cast<uint32_t*>(&r13_15);
        }
        if (edx17 - *reinterpret_cast<uint32_t*>(&r13_15) >= 39) {
        }
        fun_b58(reinterpret_cast<int64_t>(rsp8) + 80, rax16 + r13_15);
        rsp18 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
        *reinterpret_cast<int32_t*>(&rax19) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            r14_11 = rax19;
            r15_14 = r13_15;
            ++r13_15;
            ++rax19;
            if (r15_14 > 0x144e) 
                break;
        } while (r14_11 < 39);
        *reinterpret_cast<int32_t*>(&rdx20) = *reinterpret_cast<int32_t*>(&rax19);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(printf);
        fun_b9c(reinterpret_cast<int64_t>(rsp18) + 80, reinterpret_cast<int64_t>(rsp18) + 32, rdx20, reinterpret_cast<int64_t>(rsp18) + 16, reinterpret_cast<int64_t>(rsp18) + 12, 1, v9);
    }
    goto v21;
}

int32_t fun_c51(int64_t rdi, int64_t rsi);

int32_t fun_c5f();

void fun_c73(int32_t* rdi, int32_t* rsi);

void fun_cb0(int64_t rdi, int64_t rsi);

void fun_c27(int32_t* rdi, int32_t* rsi) {
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t eax5;
    int64_t v6;

    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi;
    fun_c51(rdi + 1, rsi + 1);
    rdi3 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
    eax5 = fun_c5f();
    if (eax5 != printf) {
        rdi3 = reinterpret_cast<int32_t*>(0xc6a);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
        fun_c73(0xc6a, rsi4);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi3 = *rsi4;
    __asm__("subsd xmm0, [r14]");
    fun_cb0(0xca9, rsi4 + 1);
    goto v6;
}

int32_t fun_c51(int64_t rdi, int64_t rsi) {
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t eax5;
    int64_t v6;

    rdi3 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
    eax5 = fun_c5f();
    if (eax5 != printf) {
        rdi3 = reinterpret_cast<int32_t*>(0xc6a);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
        fun_c73(0xc6a, rsi4);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi3 = *rsi4;
    __asm__("subsd xmm0, [r14]");
    fun_cb0(0xca9, rsi4 + 1);
    goto v6;
}

void fun_c73(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_cb0(0xca9, rsi + 1);
    goto v3;
}

void fun_cb0(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_c13(int32_t* rdi) {
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
        rdi = reinterpret_cast<int32_t*>(0xc1e);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
        fun_c27(0xc1e, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    fun_c51(rdi + 1, rsi4 + 1);
    rdi6 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
    eax8 = fun_c5f();
    if (eax8 != printf) {
        rdi6 = reinterpret_cast<int32_t*>(0xc6a);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
        fun_c73(0xc6a, rsi7);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi6 = *rsi7;
    __asm__("subsd xmm0, [r14]");
    fun_cb0(0xca9, rsi7 + 1);
    goto v9;
}

int32_t gc6a = 0xc031c689;

int32_t fun_c5f() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != printf) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(printf);
        fun_c73(0xc6a, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    gc6a = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_cb0(0xca9, rsi2 + 1);
    goto v4;
}

void fun_b07(int64_t rdi, void* rsi) {
    void* rsp3;
    int64_t v4;
    int64_t r13_5;
    int64_t rax6;
    uint32_t edx7;
    void* rsp8;
    uint64_t rax9;
    uint64_t r14_10;
    int64_t r15_11;
    int64_t rdx12;
    uint64_t rax13;
    uint64_t rcx14;
    int1_t cf15;
    int64_t v16;

    rsp3 = __zero_stack_offset();
    v4 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<uint32_t*>(&r13_5) = reinterpret_cast<uint32_t>(printf);
    do {
        r13_5 = *reinterpret_cast<int32_t*>(&r13_5);
        rax6 = gb2a;
        edx7 = 0x144f;
        if (*reinterpret_cast<int32_t*>(&r13_5) >= reinterpret_cast<int32_t>(0x1450)) {
            edx7 = *reinterpret_cast<uint32_t*>(&r13_5);
        }
        if (edx7 - *reinterpret_cast<uint32_t*>(&r13_5) >= 39) {
        }
        fun_b58(reinterpret_cast<int64_t>(rsp3) + 80, rax6 + r13_5);
        rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            r14_10 = rax9;
            r15_11 = r13_5;
            ++r13_5;
            ++rax9;
            if (r15_11 > 0x144e) 
                break;
        } while (r14_10 < 39);
        *reinterpret_cast<int32_t*>(&rdx12) = *reinterpret_cast<int32_t*>(&rax9);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(printf);
        fun_b9c(reinterpret_cast<int64_t>(rsp8) + 80, reinterpret_cast<int64_t>(rsp8) + 32, rdx12, reinterpret_cast<int64_t>(rsp8) + 16, reinterpret_cast<int64_t>(rsp8) + 12, 1, v4);
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
        *reinterpret_cast<int32_t*>(&rax13) = *reinterpret_cast<int32_t*>(&r14_10);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            cf15 = rcx14 < rax13;
            ++rcx14;
        } while (cf15);
    } while (*reinterpret_cast<int32_t*>(&r15_11) <= 0x144e);
    goto v16;
}

void printf() {
    int32_t edx1;
    int32_t edx2;

    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edx1 < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(edx2 == printf)) {
    }
}

void fun_128() {
    uint64_t rax1;
    unsigned char al2;
    int64_t rdx3;
    int32_t v4;
    int64_t* r14_5;
    int64_t r13_6;
    int64_t rcx7;
    void* r14_8;
    uint64_t r13_9;

    *reinterpret_cast<unsigned char*>(&rax1) = reinterpret_cast<unsigned char>(al2 & 72);
    *reinterpret_cast<int32_t*>(&rdx3) = v4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx3) + 4) = reinterpret_cast<int32_t>(printf);
    r14_5[r13_6] = rcx7;
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r14_8) + (rax1 | 8)) = rdx3;
    if (r13_9 < 16) {
    }
}

struct s4 {
    uint64_t f0;
    uint64_t f8;
};

struct s5 {
    uint64_t f0;
    uint64_t f8;
    uint64_t f10;
    uint64_t f18;
    uint64_t f20;
    uint64_t f28;
    uint64_t f30;
    uint64_t f38;
    uint64_t f40;
    uint64_t f48;
    uint64_t f50;
    uint64_t f58;
    uint64_t f60;
    uint64_t f68;
    uint64_t f70;
    uint64_t f78;
    uint64_t f80;
    uint64_t f88;
};

struct s5* g5a8 = reinterpret_cast<struct s5*>(0x48000000888e3348);

int32_t* g5bd = reinterpret_cast<int32_t*>(0x410de8c149c88949);

struct s6 {
    uint64_t f0;
    uint64_t f8;
    uint64_t f10;
    uint64_t f18;
    uint64_t f20;
    uint64_t f28;
    uint64_t f30;
    uint64_t f38;
    uint64_t f40;
    uint64_t f48;
    uint64_t f50;
    uint64_t f58;
    uint64_t f60;
    uint64_t f68;
    uint64_t f70;
    uint64_t f78;
    uint64_t f80;
    uint64_t f88;
};

struct s6* g1b7 = reinterpret_cast<struct s6*>(0xc148ca89480e3348);

int32_t* g1c8 = reinterpret_cast<int32_t*>(0x410de8c149c88949);

void BF_encrypt(struct s4* rdi, int32_t esi) {
    struct s5* rsi3;
    uint64_t rcx4;
    int32_t* r9_5;
    uint64_t r8_6;
    void* r8_7;
    int64_t rdx8;
    int64_t rdx9;
    uint64_t rbx10;
    uint64_t rbx11;
    uint64_t rax12;
    void* rax13;
    int64_t rdx14;
    int64_t rdx15;
    uint64_t rax16;
    uint64_t rax17;
    uint64_t rdx18;
    void* rdx19;
    int64_t rcx20;
    int64_t rcx21;
    uint64_t rdx22;
    uint64_t rdx23;
    uint64_t r8_24;
    void* r8_25;
    int64_t rcx26;
    int64_t rcx27;
    uint64_t rbx28;
    uint64_t rbx29;
    uint64_t rax30;
    void* rax31;
    int64_t rcx32;
    int64_t rcx33;
    uint64_t rax34;
    uint64_t rax35;
    uint64_t rdx36;
    void* rdx37;
    int64_t rcx38;
    int64_t rcx39;
    uint64_t rdx40;
    uint64_t rdx41;
    uint64_t r8_42;
    void* r8_43;
    int64_t rcx44;
    int64_t rcx45;
    uint64_t rbx46;
    uint64_t rbx47;
    uint64_t rax48;
    void* rax49;
    int64_t rcx50;
    int64_t rcx51;
    uint64_t rax52;
    uint64_t rax53;
    uint64_t rdx54;
    void* rdx55;
    int64_t rcx56;
    int64_t rcx57;
    uint64_t rdx58;
    uint64_t rdx59;
    uint64_t r8_60;
    void* r8_61;
    int64_t rcx62;
    int64_t rcx63;
    uint64_t rbx64;
    uint64_t rbx65;
    uint64_t rax66;
    void* rax67;
    int64_t rcx68;
    int64_t rcx69;
    uint64_t rax70;
    uint64_t rax71;
    uint64_t rdx72;
    void* rdx73;
    int64_t rcx74;
    int64_t rcx75;
    uint64_t rdx76;
    uint64_t rdx77;
    uint64_t r8_78;
    void* r8_79;
    int64_t rcx80;
    int64_t rcx81;
    uint64_t rbx82;
    uint64_t rbx83;
    uint64_t rax84;
    void* rax85;
    int64_t rcx86;
    int64_t rcx87;
    uint64_t rax88;
    uint64_t rax89;
    uint64_t rdx90;
    void* rdx91;
    int64_t rcx92;
    int64_t rcx93;
    uint64_t rdx94;
    uint64_t rdx95;
    uint64_t r8_96;
    void* r8_97;
    int64_t rcx98;
    int64_t rcx99;
    uint64_t r8_100;
    uint64_t r8_101;
    uint64_t rdx102;
    struct s6* rsi103;
    uint64_t rcx104;
    int32_t* r9_105;
    uint64_t r8_106;
    void* r8_107;
    int64_t rdx108;
    int64_t rdx109;
    uint64_t rbx110;
    uint64_t rbx111;
    uint64_t rax112;
    void* rax113;
    int64_t rdx114;
    int64_t rdx115;
    uint64_t rax116;
    uint64_t rax117;
    uint64_t rdx118;
    void* rdx119;
    int64_t rcx120;
    int64_t rcx121;
    uint64_t rdx122;
    uint64_t rdx123;
    uint64_t r8_124;
    void* r8_125;
    int64_t rcx126;
    int64_t rcx127;
    uint64_t rbx128;
    uint64_t rbx129;
    uint64_t rax130;
    void* rax131;
    int64_t rcx132;
    int64_t rcx133;
    uint64_t rax134;
    uint64_t rax135;
    uint64_t rdx136;
    void* rdx137;
    int64_t rcx138;
    int64_t rcx139;
    uint64_t rdx140;
    uint64_t rdx141;
    uint64_t r8_142;
    void* r8_143;
    int64_t rcx144;
    int64_t rcx145;
    uint64_t rbx146;
    uint64_t rbx147;
    uint64_t rax148;
    void* rax149;
    int64_t rcx150;
    int64_t rcx151;
    uint64_t rax152;
    uint64_t rax153;
    uint64_t rdx154;
    void* rdx155;
    int64_t rcx156;
    int64_t rcx157;
    uint64_t rdx158;
    uint64_t rdx159;
    uint64_t r8_160;
    void* r8_161;
    int64_t rcx162;
    int64_t rcx163;
    uint64_t rbx164;
    uint64_t rbx165;
    uint64_t rax166;
    void* rax167;
    int64_t rcx168;
    int64_t rcx169;
    uint64_t rax170;
    uint64_t rax171;
    uint64_t rdx172;
    void* rdx173;
    int64_t rcx174;
    int64_t rcx175;
    uint64_t rdx176;
    uint64_t rdx177;
    uint64_t r8_178;
    void* r8_179;
    int64_t rcx180;
    int64_t rcx181;
    uint64_t rbx182;
    uint64_t rbx183;
    uint64_t rax184;
    void* rax185;
    int64_t rcx186;
    int64_t rcx187;
    uint64_t rax188;
    uint64_t rax189;
    uint64_t rdx190;
    void* rdx191;
    int64_t rcx192;
    int64_t rcx193;
    uint64_t rdx194;
    uint64_t rdx195;
    uint64_t r8_196;
    void* r8_197;
    int64_t rcx198;
    int64_t rcx199;
    uint64_t r8_200;
    uint64_t rax201;
    uint64_t rax202;

    if (esi == printf) {
        rsi3 = g5a8;
        rcx4 = rdi->f0 ^ rsi3->f88;
        r9_5 = g5bd;
        r8_6 = rcx4 >> 13;
        *reinterpret_cast<uint32_t*>(&r8_7) = *reinterpret_cast<uint32_t*>(&r8_6) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_7) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx8) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx4) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx9) = *reinterpret_cast<unsigned char*>(&rcx4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rbx10) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(r8_7) + 0x800) + r9_5[(rcx4 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rdx8 * 2 + 0x400)) + (r9_5 + rdx9 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx10) + 4) = reinterpret_cast<int32_t>(printf);
        rbx11 = rbx10 ^ rsi3->f80 ^ rdi->f8;
        rax12 = rbx11 >> 13;
        *reinterpret_cast<uint32_t*>(&rax13) = *reinterpret_cast<uint32_t*>(&rax12) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx14) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx11) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx15) = *reinterpret_cast<unsigned char*>(&rbx11);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rax16) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(rax13) + 0x800) + r9_5[(rbx11 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rdx14 * 2 + 0x400)) + (r9_5 + rdx15 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(printf);
        rax17 = rax16 ^ rsi3->f78 ^ rcx4;
        rdx18 = rax17 >> 13;
        *reinterpret_cast<uint32_t*>(&rdx19) = *reinterpret_cast<uint32_t*>(&rdx18) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx20) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax17) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx21) = *reinterpret_cast<unsigned char*>(&rax17);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx22) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(rdx19) + 0x800) + r9_5[(rax17 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rcx20 * 2 + 0x400)) + (r9_5 + rcx21 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(printf);
        rdx23 = rdx22 ^ rsi3->f70 ^ rbx11;
        r8_24 = rdx23 >> 13;
        *reinterpret_cast<uint32_t*>(&r8_25) = *reinterpret_cast<uint32_t*>(&r8_24) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_25) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx26) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx23) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx27) = *reinterpret_cast<unsigned char*>(&rdx23);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rbx28) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(r8_25) + 0x800) + r9_5[(rdx23 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rcx26 * 2 + 0x400)) + (r9_5 + rcx27 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx28) + 4) = reinterpret_cast<int32_t>(printf);
        rbx29 = rbx28 ^ rsi3->f68 ^ rax17;
        rax30 = rbx29 >> 13;
        *reinterpret_cast<uint32_t*>(&rax31) = *reinterpret_cast<uint32_t*>(&rax30) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax31) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx32) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx29) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx33) = *reinterpret_cast<unsigned char*>(&rbx29);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rax34) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(rax31) + 0x800) + r9_5[(rbx29 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rcx32 * 2 + 0x400)) + (r9_5 + rcx33 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax34) + 4) = reinterpret_cast<int32_t>(printf);
        rax35 = rax34 ^ rsi3->f60 ^ rdx23;
        rdx36 = rax35 >> 13;
        *reinterpret_cast<uint32_t*>(&rdx37) = *reinterpret_cast<uint32_t*>(&rdx36) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx38) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax35) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx38) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx39) = *reinterpret_cast<unsigned char*>(&rax35);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx39) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx40) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(rdx37) + 0x800) + r9_5[(rax35 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rcx38 * 2 + 0x400)) + (r9_5 + rcx39 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx40) + 4) = reinterpret_cast<int32_t>(printf);
        rdx41 = rdx40 ^ rsi3->f58 ^ rbx29;
        r8_42 = rdx41 >> 13;
        *reinterpret_cast<uint32_t*>(&r8_43) = *reinterpret_cast<uint32_t*>(&r8_42) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_43) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx44) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx41) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx44) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx45) = *reinterpret_cast<unsigned char*>(&rdx41);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx45) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rbx46) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(r8_43) + 0x800) + r9_5[(rdx41 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rcx44 * 2 + 0x400)) + (r9_5 + rcx45 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx46) + 4) = reinterpret_cast<int32_t>(printf);
        rbx47 = rbx46 ^ rsi3->f50 ^ rax35;
        rax48 = rbx47 >> 13;
        *reinterpret_cast<uint32_t*>(&rax49) = *reinterpret_cast<uint32_t*>(&rax48) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax49) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx50) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx47) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx50) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx51) = *reinterpret_cast<unsigned char*>(&rbx47);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx51) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rax52) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(rax49) + 0x800) + r9_5[(rbx47 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rcx50 * 2 + 0x400)) + (r9_5 + rcx51 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax52) + 4) = reinterpret_cast<int32_t>(printf);
        rax53 = rax52 ^ rsi3->f48 ^ rdx41;
        rdx54 = rax53 >> 13;
        *reinterpret_cast<uint32_t*>(&rdx55) = *reinterpret_cast<uint32_t*>(&rdx54) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx55) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx56) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax53) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx56) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx57) = *reinterpret_cast<unsigned char*>(&rax53);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx57) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx58) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(rdx55) + 0x800) + r9_5[(rax53 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rcx56 * 2 + 0x400)) + (r9_5 + rcx57 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx58) + 4) = reinterpret_cast<int32_t>(printf);
        rdx59 = rdx58 ^ rsi3->f40 ^ rbx47;
        r8_60 = rdx59 >> 13;
        *reinterpret_cast<uint32_t*>(&r8_61) = *reinterpret_cast<uint32_t*>(&r8_60) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_61) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx62) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx59) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx62) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx63) = *reinterpret_cast<unsigned char*>(&rdx59);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx63) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rbx64) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(r8_61) + 0x800) + r9_5[(rdx59 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rcx62 * 2 + 0x400)) + (r9_5 + rcx63 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx64) + 4) = reinterpret_cast<int32_t>(printf);
        rbx65 = rbx64 ^ rsi3->f38 ^ rax53;
        rax66 = rbx65 >> 13;
        *reinterpret_cast<uint32_t*>(&rax67) = *reinterpret_cast<uint32_t*>(&rax66) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax67) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx68) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx65) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx68) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx69) = *reinterpret_cast<unsigned char*>(&rbx65);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx69) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rax70) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(rax67) + 0x800) + r9_5[(rbx65 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rcx68 * 2 + 0x400)) + (r9_5 + rcx69 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax70) + 4) = reinterpret_cast<int32_t>(printf);
        rax71 = rax70 ^ rsi3->f30 ^ rdx59;
        rdx72 = rax71 >> 13;
        *reinterpret_cast<uint32_t*>(&rdx73) = *reinterpret_cast<uint32_t*>(&rdx72) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx73) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx74) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax71) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx74) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx75) = *reinterpret_cast<unsigned char*>(&rax71);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx75) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx76) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(rdx73) + 0x800) + r9_5[(rax71 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rcx74 * 2 + 0x400)) + (r9_5 + rcx75 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx76) + 4) = reinterpret_cast<int32_t>(printf);
        rdx77 = rdx76 ^ rsi3->f28 ^ rbx65;
        r8_78 = rdx77 >> 13;
        *reinterpret_cast<uint32_t*>(&r8_79) = *reinterpret_cast<uint32_t*>(&r8_78) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_79) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx80) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx77) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx80) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx81) = *reinterpret_cast<unsigned char*>(&rdx77);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx81) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rbx82) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(r8_79) + 0x800) + r9_5[(rdx77 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rcx80 * 2 + 0x400)) + (r9_5 + rcx81 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx82) + 4) = reinterpret_cast<int32_t>(printf);
        rbx83 = rbx82 ^ rsi3->f20 ^ rax71;
        rax84 = rbx83 >> 13;
        *reinterpret_cast<uint32_t*>(&rax85) = *reinterpret_cast<uint32_t*>(&rax84) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax85) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx86) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx83) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx86) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx87) = *reinterpret_cast<unsigned char*>(&rbx83);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx87) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rax88) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(rax85) + 0x800) + r9_5[(rbx83 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rcx86 * 2 + 0x400)) + (r9_5 + rcx87 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax88) + 4) = reinterpret_cast<int32_t>(printf);
        rax89 = rax88 ^ rsi3->f18 ^ rdx77;
        rdx90 = rax89 >> 13;
        *reinterpret_cast<uint32_t*>(&rdx91) = *reinterpret_cast<uint32_t*>(&rdx90) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx91) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx92) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax89) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx92) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx93) = *reinterpret_cast<unsigned char*>(&rax89);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx93) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx94) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(rdx91) + 0x800) + r9_5[(rax89 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rcx92 * 2 + 0x400)) + (r9_5 + rcx93 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx94) + 4) = reinterpret_cast<int32_t>(printf);
        rdx95 = rdx94 ^ rsi3->f10 ^ rbx83;
        r8_96 = rdx95 >> 13;
        *reinterpret_cast<uint32_t*>(&r8_97) = *reinterpret_cast<uint32_t*>(&r8_96) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_97) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx98) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx95) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx98) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx99) = *reinterpret_cast<unsigned char*>(&rdx95);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx99) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&r8_100) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_5) + reinterpret_cast<int64_t>(r8_97) + 0x800) + r9_5[(rdx95 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_5 + rcx98 * 2 + 0x400)) + (r9_5 + rcx99 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_100) + 4) = reinterpret_cast<int32_t>(printf);
        r8_101 = r8_100 ^ rsi3->f8 ^ rax89;
        rdx102 = rdx95 ^ rsi3->f0;
    } else {
        rsi103 = g1b7;
        rcx104 = rdi->f0 ^ rsi103->f0;
        r9_105 = g1c8;
        r8_106 = rcx104 >> 13;
        *reinterpret_cast<uint32_t*>(&r8_107) = *reinterpret_cast<uint32_t*>(&r8_106) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_107) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx108) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx104) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx108) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx109) = *reinterpret_cast<unsigned char*>(&rcx104);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx109) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rbx110) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(r8_107) + 0x800) + r9_105[(rcx104 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rdx108 * 2 + 0x400)) + (r9_105 + rdx109 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx110) + 4) = reinterpret_cast<int32_t>(printf);
        rbx111 = rbx110 ^ rsi103->f8 ^ rdi->f8;
        rax112 = rbx111 >> 13;
        *reinterpret_cast<uint32_t*>(&rax113) = *reinterpret_cast<uint32_t*>(&rax112) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax113) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx114) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx111) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx114) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx115) = *reinterpret_cast<unsigned char*>(&rbx111);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx115) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rax116) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(rax113) + 0x800) + r9_105[(rbx111 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rdx114 * 2 + 0x400)) + (r9_105 + rdx115 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax116) + 4) = reinterpret_cast<int32_t>(printf);
        rax117 = rax116 ^ rsi103->f10 ^ rcx104;
        rdx118 = rax117 >> 13;
        *reinterpret_cast<uint32_t*>(&rdx119) = *reinterpret_cast<uint32_t*>(&rdx118) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx119) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx120) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax117) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx120) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx121) = *reinterpret_cast<unsigned char*>(&rax117);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx121) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx122) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(rdx119) + 0x800) + r9_105[(rax117 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rcx120 * 2 + 0x400)) + (r9_105 + rcx121 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx122) + 4) = reinterpret_cast<int32_t>(printf);
        rdx123 = rdx122 ^ rsi103->f18 ^ rbx111;
        r8_124 = rdx123 >> 13;
        *reinterpret_cast<uint32_t*>(&r8_125) = *reinterpret_cast<uint32_t*>(&r8_124) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_125) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx126) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx123) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx126) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx127) = *reinterpret_cast<unsigned char*>(&rdx123);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx127) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rbx128) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(r8_125) + 0x800) + r9_105[(rdx123 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rcx126 * 2 + 0x400)) + (r9_105 + rcx127 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx128) + 4) = reinterpret_cast<int32_t>(printf);
        rbx129 = rbx128 ^ rsi103->f20 ^ rax117;
        rax130 = rbx129 >> 13;
        *reinterpret_cast<uint32_t*>(&rax131) = *reinterpret_cast<uint32_t*>(&rax130) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax131) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx132) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx129) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx132) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx133) = *reinterpret_cast<unsigned char*>(&rbx129);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx133) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rax134) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(rax131) + 0x800) + r9_105[(rbx129 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rcx132 * 2 + 0x400)) + (r9_105 + rcx133 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax134) + 4) = reinterpret_cast<int32_t>(printf);
        rax135 = rax134 ^ rsi103->f28 ^ rdx123;
        rdx136 = rax135 >> 13;
        *reinterpret_cast<uint32_t*>(&rdx137) = *reinterpret_cast<uint32_t*>(&rdx136) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx137) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx138) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax135) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx138) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx139) = *reinterpret_cast<unsigned char*>(&rax135);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx139) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx140) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(rdx137) + 0x800) + r9_105[(rax135 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rcx138 * 2 + 0x400)) + (r9_105 + rcx139 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx140) + 4) = reinterpret_cast<int32_t>(printf);
        rdx141 = rdx140 ^ rsi103->f30 ^ rbx129;
        r8_142 = rdx141 >> 13;
        *reinterpret_cast<uint32_t*>(&r8_143) = *reinterpret_cast<uint32_t*>(&r8_142) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_143) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx144) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx141) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx144) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx145) = *reinterpret_cast<unsigned char*>(&rdx141);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx145) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rbx146) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(r8_143) + 0x800) + r9_105[(rdx141 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rcx144 * 2 + 0x400)) + (r9_105 + rcx145 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx146) + 4) = reinterpret_cast<int32_t>(printf);
        rbx147 = rbx146 ^ rsi103->f38 ^ rax135;
        rax148 = rbx147 >> 13;
        *reinterpret_cast<uint32_t*>(&rax149) = *reinterpret_cast<uint32_t*>(&rax148) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax149) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx150) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx147) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx150) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx151) = *reinterpret_cast<unsigned char*>(&rbx147);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx151) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rax152) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(rax149) + 0x800) + r9_105[(rbx147 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rcx150 * 2 + 0x400)) + (r9_105 + rcx151 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax152) + 4) = reinterpret_cast<int32_t>(printf);
        rax153 = rax152 ^ rsi103->f40 ^ rdx141;
        rdx154 = rax153 >> 13;
        *reinterpret_cast<uint32_t*>(&rdx155) = *reinterpret_cast<uint32_t*>(&rdx154) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx155) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx156) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax153) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx156) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx157) = *reinterpret_cast<unsigned char*>(&rax153);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx157) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx158) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(rdx155) + 0x800) + r9_105[(rax153 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rcx156 * 2 + 0x400)) + (r9_105 + rcx157 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx158) + 4) = reinterpret_cast<int32_t>(printf);
        rdx159 = rdx158 ^ rsi103->f48 ^ rbx147;
        r8_160 = rdx159 >> 13;
        *reinterpret_cast<uint32_t*>(&r8_161) = *reinterpret_cast<uint32_t*>(&r8_160) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_161) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx162) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx159) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx162) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx163) = *reinterpret_cast<unsigned char*>(&rdx159);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx163) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rbx164) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(r8_161) + 0x800) + r9_105[(rdx159 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rcx162 * 2 + 0x400)) + (r9_105 + rcx163 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx164) + 4) = reinterpret_cast<int32_t>(printf);
        rbx165 = rbx164 ^ rsi103->f50 ^ rax153;
        rax166 = rbx165 >> 13;
        *reinterpret_cast<uint32_t*>(&rax167) = *reinterpret_cast<uint32_t*>(&rax166) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax167) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx168) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx165) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx168) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx169) = *reinterpret_cast<unsigned char*>(&rbx165);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx169) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rax170) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(rax167) + 0x800) + r9_105[(rbx165 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rcx168 * 2 + 0x400)) + (r9_105 + rcx169 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax170) + 4) = reinterpret_cast<int32_t>(printf);
        rax171 = rax170 ^ rsi103->f58 ^ rdx159;
        rdx172 = rax171 >> 13;
        *reinterpret_cast<uint32_t*>(&rdx173) = *reinterpret_cast<uint32_t*>(&rdx172) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx173) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx174) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax171) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx174) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx175) = *reinterpret_cast<unsigned char*>(&rax171);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx175) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx176) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(rdx173) + 0x800) + r9_105[(rax171 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rcx174 * 2 + 0x400)) + (r9_105 + rcx175 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx176) + 4) = reinterpret_cast<int32_t>(printf);
        rdx177 = rdx176 ^ rsi103->f60 ^ rbx165;
        r8_178 = rdx177 >> 13;
        *reinterpret_cast<uint32_t*>(&r8_179) = *reinterpret_cast<uint32_t*>(&r8_178) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_179) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx180) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx177) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx180) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx181) = *reinterpret_cast<unsigned char*>(&rdx177);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx181) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rbx182) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(r8_179) + 0x800) + r9_105[(rdx177 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rcx180 * 2 + 0x400)) + (r9_105 + rcx181 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx182) + 4) = reinterpret_cast<int32_t>(printf);
        rbx183 = rbx182 ^ rsi103->f68 ^ rax171;
        rax184 = rbx183 >> 13;
        *reinterpret_cast<uint32_t*>(&rax185) = *reinterpret_cast<uint32_t*>(&rax184) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax185) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx186) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rbx183) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx186) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx187) = *reinterpret_cast<unsigned char*>(&rbx183);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx187) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rax188) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(rax185) + 0x800) + r9_105[(rbx183 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rcx186 * 2 + 0x400)) + (r9_105 + rcx187 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax188) + 4) = reinterpret_cast<int32_t>(printf);
        rax189 = rax188 ^ rsi103->f70 ^ rdx177;
        rdx190 = rax189 >> 13;
        *reinterpret_cast<uint32_t*>(&rdx191) = *reinterpret_cast<uint32_t*>(&rdx190) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx191) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx192) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax189) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx192) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx193) = *reinterpret_cast<unsigned char*>(&rax189);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx193) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rdx194) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(rdx191) + 0x800) + r9_105[(rax189 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rcx192 * 2 + 0x400)) + (r9_105 + rcx193 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx194) + 4) = reinterpret_cast<int32_t>(printf);
        rdx195 = rdx194 ^ rsi103->f78 ^ rbx183;
        r8_196 = rdx195 >> 13;
        *reinterpret_cast<uint32_t*>(&r8_197) = *reinterpret_cast<uint32_t*>(&r8_196) & 0x7f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_197) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx198) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rdx195) + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx198) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx199) = *reinterpret_cast<unsigned char*>(&rdx195);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx199) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&r8_200) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_105) + reinterpret_cast<int64_t>(r8_197) + 0x800) + r9_105[(rdx195 >> 24) * 2]) ^ *reinterpret_cast<uint32_t*>(r9_105 + rcx198 * 2 + 0x400)) + (r9_105 + rcx199 * 2)[0x600];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_200) + 4) = reinterpret_cast<int32_t>(printf);
        r8_101 = r8_200 ^ rsi103->f80 ^ rax189;
        rdx102 = rdx195 ^ rsi103->f88;
    }
    *reinterpret_cast<int32_t*>(&rax201) = *reinterpret_cast<int32_t*>(&r8_101);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax201) + 4) = reinterpret_cast<int32_t>(printf);
    rdi->f8 = rax201;
    *reinterpret_cast<int32_t*>(&rax202) = *reinterpret_cast<int32_t*>(&rdx102);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax202) + 4) = reinterpret_cast<int32_t>(printf);
    rdi->f0 = rax202;
    return;
}

void submain() {
    fun_c13(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 24 + 8);
}

void BF_cfb64_encrypt(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int32_t r9d) {
    if (r9d == printf) {
        if (rdx == printf) 
            goto 0xab3;
        goto 0xa77;
    } else {
        if (rdx == printf) 
            goto 0xab3;
        goto 0xa08;
    }
}

void blowfish_main() {
    fun_b07(8, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x78 + 24);
}

