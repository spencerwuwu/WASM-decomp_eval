
void printf();

int32_t* g38d = reinterpret_cast<int32_t*>(0x338bff508d001f0f);

void fun_35b() {
    int32_t* rbx1;
    int64_t rcx2;
    int64_t r14_3;
    int1_t less_or_equal4;
    int64_t rax5;
    int32_t* rcx6;
    int32_t* r15_7;
    int32_t* rdx8;
    int1_t below_or_equal9;
    int32_t eax10;
    int64_t rax11;
    int32_t* rcx12;
    int1_t less_or_equal13;
    int64_t v14;

    while (rbx1 = rbx1 + 16, *reinterpret_cast<int32_t*>(&rcx2) = static_cast<int32_t>(r14_3 - 64), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = reinterpret_cast<int32_t>(printf), less_or_equal4 = *reinterpret_cast<int32_t*>(&r14_3) <= 0x7f, *reinterpret_cast<int32_t*>(&r14_3) = *reinterpret_cast<int32_t*>(&rcx2), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = reinterpret_cast<int32_t>(printf), !less_or_equal4) {
        *reinterpret_cast<uint32_t*>(&rax5) = 16;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
        rcx6 = r15_7;
        rdx8 = rbx1;
        do {
            ++rdx8;
            *rcx6 = *rdx8;
            ++rcx6;
            below_or_equal9 = *reinterpret_cast<uint32_t*>(&rax5) <= 1;
            *reinterpret_cast<uint32_t*>(&rax5) = static_cast<uint32_t>(rax5 - 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
        } while (!below_or_equal9);
        fun_35b();
    }
    if (*reinterpret_cast<int32_t*>(&rcx2) >= 4) {
        eax10 = static_cast<int32_t>(rcx2 + 3);
        if (*reinterpret_cast<int32_t*>(&rcx2) >= reinterpret_cast<int32_t>(printf)) {
            eax10 = *reinterpret_cast<int32_t*>(&rcx2);
        }
        *reinterpret_cast<int32_t*>(&rax11) = eax10 >> 2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(printf);
        rcx12 = g38d;
        do {
            ++rbx1;
            *rcx12 = *rbx1;
            ++rcx12;
            less_or_equal13 = *reinterpret_cast<int32_t*>(&rax11) <= 1;
            *reinterpret_cast<int32_t*>(&rax11) = static_cast<int32_t>(rax11 - 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(printf);
        } while (!less_or_equal13);
    }
    goto v14;
}

int64_t fun_417();

struct s0 {
    signed char[48] pad48;
    int64_t f30;
};

struct s1 {
    signed char[56] pad56;
    int32_t f38;
};

struct s2 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s3 {
    signed char[16] pad16;
    int32_t f10;
};

struct s3* g4a9 = reinterpret_cast<struct s3*>(0xe1f01040c700290f);

uint32_t* g4ba = reinterpret_cast<uint32_t*>(0x8b4c0000000003c7);

int32_t* g4c7 = reinterpret_cast<int32_t*>(0x450000000006c741);

void fun_4f3();

struct s4 {
    int32_t f0;
    signed char[44] pad48;
    int64_t f30;
    int32_t f38;
    uint32_t f3c;
};

struct s4* g513 = reinterpret_cast<struct s4*>(0x808604c741);

void fun_5ae();

void fun_550();

void fun_555();

int32_t fun_5e5();

void fun_5f9(int32_t* rdi, int32_t* rsi, int64_t rdx);

void fun_623(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t fun_663();

void fun_677(int32_t* rdi, int32_t* rsi);

void fun_6b4(int64_t rdi, int64_t rsi);

void fun_412() {
    struct s0* r14_1;
    struct s1* r14_2;
    int32_t ebp3;
    struct s2* r14_4;
    int32_t ebx5;
    void* rsp6;
    struct s3* rax7;
    uint32_t* rbx8;
    int32_t* r14_9;
    int64_t r15_10;
    int1_t zf11;
    uint32_t ebx12;
    int32_t ebp13;
    int64_t rax14;
    struct s4* r14_15;
    uint32_t ecx16;
    uint32_t edx17;
    int32_t edx18;
    int32_t eax19;
    int64_t rdx20;
    int64_t rdx21;
    uint32_t ecx22;
    uint32_t ecx23;
    uint32_t eax24;
    int64_t rcx25;
    void* rsp26;
    int32_t* rdi27;
    int32_t* rsi28;
    int32_t eax29;
    void* rsp30;
    void* rsp31;
    int64_t rdx32;
    int32_t* rdi33;
    int32_t* rsi34;
    int32_t eax35;
    int64_t v36;

    fun_417();
    __asm__("xorps xmm0, xmm0");
    __asm__("movaps [r14+0x20], xmm0");
    __asm__("movaps [r14+0x10], xmm0");
    __asm__("movaps [r14], xmm0");
    r14_1->f30 = reinterpret_cast<int64_t>(printf);
    r14_2->f38 = ebp3;
    r14_4->f3c = ebx5;
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    __asm__("movaps xmm0, [rip+0x0]");
    rax7 = g4a9;
    __asm__("movaps [rax], xmm0");
    rax7->f10 = 0xc3d2e1f0;
    rbx8 = g4ba;
    *rbx8 = reinterpret_cast<uint32_t>(printf);
    r14_9 = g4c7;
    *r14_9 = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&r15_10) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_10) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        fun_4f3();
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        zf11 = reinterpret_cast<int1_t>(r15_10 == printf);
        ++r15_10;
    } while (zf11);
    ebx12 = *rbx8;
    ebp13 = *r14_9;
    *reinterpret_cast<uint32_t*>(&rax14) = ebx12 >> 3 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    r14_15 = g513;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_15) + rax14 * 4) = 0x80;
    if (*reinterpret_cast<uint32_t*>(&rax14) < 56) {
        if (*reinterpret_cast<uint32_t*>(&rax14) <= 51) {
            ecx16 = 55 - *reinterpret_cast<uint32_t*>(&rax14);
            edx17 = 58 - *reinterpret_cast<uint32_t*>(&rax14);
            if (reinterpret_cast<int32_t>(ecx16) >= reinterpret_cast<int32_t>(printf)) {
                edx17 = ecx16;
            }
            edx18 = reinterpret_cast<int32_t>(edx17) >> 2;
            eax19 = 1;
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edx18 < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(edx18 == printf)) {
                eax19 = edx18;
            }
            *reinterpret_cast<int32_t*>(&rdx20) = edx18 - eax19;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(printf);
            rdx21 = rdx20 * 4 + 4;
            fun_5ae();
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        }
    } else {
        ecx22 = *reinterpret_cast<uint32_t*>(&rax14) ^ 63;
        if (ecx22 >= 4) {
            ecx23 = ecx22 >> 2;
            eax24 = 1;
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(ecx23) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(ecx23 == printf)) {
                eax24 = ecx23;
            }
            *reinterpret_cast<uint32_t*>(&rcx25) = ecx23 - eax24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = reinterpret_cast<int32_t>(printf);
            rdx21 = rcx25 * 4 + 4;
            fun_550();
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        }
        fun_555();
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        __asm__("xorps xmm0, xmm0");
        __asm__("movaps [r14+0x20], xmm0");
        __asm__("movaps [r14+0x10], xmm0");
        __asm__("movaps [r14], xmm0");
        r14_15->f30 = reinterpret_cast<int64_t>(printf);
    }
    r14_15->f38 = ebp13;
    r14_15->f3c = ebx12;
    rsp26 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) + 8 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 24);
    rdi27 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp26) + 8);
    *reinterpret_cast<int32_t*>(&rsi28) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = reinterpret_cast<int32_t>(printf);
    eax29 = fun_5e5();
    rsp30 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp26) - 8 + 8);
    if (eax29 != printf) {
        rdi27 = reinterpret_cast<int32_t*>(0x5f0);
        *reinterpret_cast<int32_t*>(&rsi28) = eax29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = reinterpret_cast<int32_t>(printf);
        fun_5f9(0x5f0, rsi28, rdx21);
        rsp30 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp30) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi27 = *rsi28;
    fun_623(rdi27 + 1, rsi28 + 1, rdx21);
    rsp31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp30) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx32) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx32;
    } while (rdx32 != 5);
    rdi33 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp31) + 8);
    *reinterpret_cast<int32_t*>(&rsi34) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(printf);
    eax35 = fun_663();
    if (eax35 != printf) {
        rdi33 = reinterpret_cast<int32_t*>(0x66e);
        *reinterpret_cast<int32_t*>(&rsi34) = eax35;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(printf);
        fun_677(0x66e, rsi34);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi33 = *rsi34;
    __asm__("subsd xmm0, [r14]");
    fun_6b4(0x6ad, rsi34 + 1);
    goto v36;
}

struct s5 {
    signed char[56] pad56;
    int32_t f38;
};

struct s6 {
    signed char[60] pad60;
    int32_t f3c;
};

void fun_470() {
    struct s5* r14_1;
    int32_t ebp2;
    struct s6* r14_3;
    int32_t ebx4;
    void* rsp5;
    struct s3* rax6;
    uint32_t* rbx7;
    int32_t* r14_8;
    int64_t r15_9;
    int1_t zf10;
    uint32_t ebx11;
    int32_t ebp12;
    int64_t rax13;
    struct s4* r14_14;
    uint32_t ecx15;
    uint32_t edx16;
    int32_t edx17;
    int32_t eax18;
    int64_t rdx19;
    int64_t rdx20;
    uint32_t ecx21;
    uint32_t ecx22;
    uint32_t eax23;
    int64_t rcx24;
    void* rsp25;
    int32_t* rdi26;
    int32_t* rsi27;
    int32_t eax28;
    void* rsp29;
    void* rsp30;
    int64_t rdx31;
    int32_t* rdi32;
    int32_t* rsi33;
    int32_t eax34;
    int64_t v35;

    r14_1->f38 = ebp2;
    r14_3->f3c = ebx4;
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    __asm__("movaps xmm0, [rip+0x0]");
    rax6 = g4a9;
    __asm__("movaps [rax], xmm0");
    rax6->f10 = 0xc3d2e1f0;
    rbx7 = g4ba;
    *rbx7 = reinterpret_cast<uint32_t>(printf);
    r14_8 = g4c7;
    *r14_8 = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&r15_9) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_9) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        fun_4f3();
        rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
        zf10 = reinterpret_cast<int1_t>(r15_9 == printf);
        ++r15_9;
    } while (zf10);
    ebx11 = *rbx7;
    ebp12 = *r14_8;
    *reinterpret_cast<uint32_t*>(&rax13) = ebx11 >> 3 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(printf);
    r14_14 = g513;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_14) + rax13 * 4) = 0x80;
    if (*reinterpret_cast<uint32_t*>(&rax13) < 56) {
        if (*reinterpret_cast<uint32_t*>(&rax13) <= 51) {
            ecx15 = 55 - *reinterpret_cast<uint32_t*>(&rax13);
            edx16 = 58 - *reinterpret_cast<uint32_t*>(&rax13);
            if (reinterpret_cast<int32_t>(ecx15) >= reinterpret_cast<int32_t>(printf)) {
                edx16 = ecx15;
            }
            edx17 = reinterpret_cast<int32_t>(edx16) >> 2;
            eax18 = 1;
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edx17 < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(edx17 == printf)) {
                eax18 = edx17;
            }
            *reinterpret_cast<int32_t*>(&rdx19) = edx17 - eax18;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(printf);
            rdx20 = rdx19 * 4 + 4;
            fun_5ae();
            rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
        }
    } else {
        ecx21 = *reinterpret_cast<uint32_t*>(&rax13) ^ 63;
        if (ecx21 >= 4) {
            ecx22 = ecx21 >> 2;
            eax23 = 1;
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(ecx22) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(ecx22 == printf)) {
                eax23 = ecx22;
            }
            *reinterpret_cast<uint32_t*>(&rcx24) = ecx22 - eax23;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = reinterpret_cast<int32_t>(printf);
            rdx20 = rcx24 * 4 + 4;
            fun_550();
            rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
        }
        fun_555();
        rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
        __asm__("xorps xmm0, xmm0");
        __asm__("movaps [r14+0x20], xmm0");
        __asm__("movaps [r14+0x10], xmm0");
        __asm__("movaps [r14], xmm0");
        r14_14->f30 = reinterpret_cast<int64_t>(printf);
    }
    r14_14->f38 = ebp12;
    r14_14->f3c = ebx11;
    rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) + 8 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 24);
    rdi26 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp25) + 8);
    *reinterpret_cast<int32_t*>(&rsi27) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = reinterpret_cast<int32_t>(printf);
    eax28 = fun_5e5();
    rsp29 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) - 8 + 8);
    if (eax28 != printf) {
        rdi26 = reinterpret_cast<int32_t*>(0x5f0);
        *reinterpret_cast<int32_t*>(&rsi27) = eax28;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = reinterpret_cast<int32_t>(printf);
        fun_5f9(0x5f0, rsi27, rdx20);
        rsp29 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp29) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi26 = *rsi27;
    fun_623(rdi26 + 1, rsi27 + 1, rdx20);
    rsp30 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp29) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx31) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx31;
    } while (rdx31 != 5);
    rdi32 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp30) + 8);
    *reinterpret_cast<int32_t*>(&rsi33) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(printf);
    eax34 = fun_663();
    if (eax34 != printf) {
        rdi32 = reinterpret_cast<int32_t*>(0x66e);
        *reinterpret_cast<int32_t*>(&rsi33) = eax34;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(printf);
        fun_677(0x66e, rsi33);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi32 = *rsi33;
    __asm__("subsd xmm0, [r14]");
    fun_6b4(0x6ad, rsi33 + 1);
    goto v35;
}

struct s7 {
    signed char[48] pad48;
    int64_t f30;
};

struct s8 {
    signed char[56] pad56;
    int32_t f38;
};

struct s9 {
    signed char[60] pad60;
    int32_t f3c;
};

void fun_550() {
    struct s7* r14_1;
    struct s8* r14_2;
    int32_t ebp3;
    struct s9* r14_4;
    int32_t ebx5;
    void* rsp6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t eax9;
    void* rsp10;
    int64_t rdx11;
    int64_t rdx12;
    void* rsp13;
    int64_t rdx14;
    int32_t* rdi15;
    int32_t* rsi16;
    int32_t eax17;
    int64_t v18;

    fun_555();
    __asm__("xorps xmm0, xmm0");
    __asm__("movaps [r14+0x20], xmm0");
    __asm__("movaps [r14+0x10], xmm0");
    __asm__("movaps [r14], xmm0");
    r14_1->f30 = reinterpret_cast<int64_t>(printf);
    r14_2->f38 = ebp3;
    r14_4->f3c = ebx5;
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 24);
    rdi7 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + 8);
    *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(printf);
    eax9 = fun_5e5();
    rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
    if (eax9 != printf) {
        rdi7 = reinterpret_cast<int32_t*>(0x5f0);
        *reinterpret_cast<int32_t*>(&rsi8) = eax9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(printf);
        fun_5f9(0x5f0, rsi8, rdx11);
        rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi7 = *rsi8;
    fun_623(rdi7 + 1, rsi8 + 1, rdx12);
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx14;
    } while (rdx14 != 5);
    rdi15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp13) + 8);
    *reinterpret_cast<int32_t*>(&rsi16) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(printf);
    eax17 = fun_663();
    if (eax17 != printf) {
        rdi15 = reinterpret_cast<int32_t*>(0x66e);
        *reinterpret_cast<int32_t*>(&rsi16) = eax17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(printf);
        fun_677(0x66e, rsi16);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi15 = *rsi16;
    __asm__("subsd xmm0, [r14]");
    fun_6b4(0x6ad, rsi16 + 1);
    goto v18;
}

struct s10 {
    signed char[56] pad56;
    int32_t f38;
};

struct s11 {
    signed char[60] pad60;
    int32_t f3c;
};

void fun_5ae() {
    struct s10* r14_1;
    int32_t ebp2;
    struct s11* r14_3;
    int32_t ebx4;
    void* rsp5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t eax8;
    void* rsp9;
    int64_t rdx10;
    int64_t rdx11;
    void* rsp12;
    int64_t rdx13;
    int32_t* rdi14;
    int32_t* rsi15;
    int32_t eax16;
    int64_t v17;

    r14_1->f38 = ebp2;
    r14_3->f3c = ebx4;
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 24);
    rdi6 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + 8);
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
    eax8 = fun_5e5();
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    if (eax8 != printf) {
        rdi6 = reinterpret_cast<int32_t*>(0x5f0);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
        fun_5f9(0x5f0, rsi7, rdx10);
        rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi6 = *rsi7;
    fun_623(rdi6 + 1, rsi7 + 1, rdx11);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx13;
    } while (rdx13 != 5);
    rdi14 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp12) + 8);
    *reinterpret_cast<int32_t*>(&rsi15) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(printf);
    eax16 = fun_663();
    if (eax16 != printf) {
        rdi14 = reinterpret_cast<int32_t*>(0x66e);
        *reinterpret_cast<int32_t*>(&rsi15) = eax16;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(printf);
        fun_677(0x66e, rsi15);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi14 = *rsi15;
    __asm__("subsd xmm0, [r14]");
    fun_6b4(0x6ad, rsi15 + 1);
    goto v17;
}

void fun_5f9(int32_t* rdi, int32_t* rsi, int64_t rdx) {
    void* rsp4;
    int64_t rdx5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t eax8;
    int64_t v9;

    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi;
    fun_623(rdi + 1, rsi + 1, rdx);
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx5) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx5;
    } while (rdx5 != 5);
    rdi6 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp4) + 8);
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
    eax8 = fun_663();
    if (eax8 != printf) {
        rdi6 = reinterpret_cast<int32_t*>(0x66e);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
        fun_677(0x66e, rsi7);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi6 = *rsi7;
    __asm__("subsd xmm0, [r14]");
    fun_6b4(0x6ad, rsi7 + 1);
    goto v9;
}

void fun_623(int64_t rdi, int64_t rsi, int64_t rdx) {
    void* rsp4;
    int64_t rdx5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t eax8;
    int64_t v9;

    rsp4 = __zero_stack_offset();
    *reinterpret_cast<int32_t*>(&rdx5) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx5;
    } while (rdx5 != 5);
    rdi6 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp4) + 8);
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
    eax8 = fun_663();
    if (eax8 != printf) {
        rdi6 = reinterpret_cast<int32_t*>(0x66e);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
        fun_677(0x66e, rsi7);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi6 = *rsi7;
    __asm__("subsd xmm0, [r14]");
    fun_6b4(0x6ad, rsi7 + 1);
    goto v9;
}

int32_t g66e = 0xc031c689;

int32_t fun_663() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != printf) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(printf);
        fun_677(0x66e, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g66e = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_6b4(0x6ad, rsi2 + 1);
    goto v4;
}

void fun_677(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_6b4(0x6ad, rsi + 1);
    goto v3;
}

void fun_6b4(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

struct s12 {
    signed char[48] pad48;
    int64_t f30;
};

struct s13 {
    signed char[56] pad56;
    int32_t f38;
};

struct s14 {
    signed char[60] pad60;
    int32_t f3c;
};

int64_t fun_417() {
    struct s12* r14_1;
    struct s13* r14_2;
    int32_t ebp3;
    struct s14* r14_4;
    int32_t ebx5;
    void* rsp6;
    struct s3* rax7;
    uint32_t* rbx8;
    int32_t* r14_9;
    int64_t r15_10;
    int1_t zf11;
    uint32_t ebx12;
    int32_t ebp13;
    int64_t rax14;
    struct s4* r14_15;
    uint32_t ecx16;
    uint32_t edx17;
    int32_t edx18;
    int32_t eax19;
    int64_t rdx20;
    int64_t rdx21;
    uint32_t ecx22;
    uint32_t ecx23;
    uint32_t eax24;
    int64_t rcx25;
    void* rsp26;
    int32_t* rdi27;
    int32_t* rsi28;
    int32_t eax29;
    void* rsp30;
    void* rsp31;
    int64_t rdx32;
    int32_t* rdi33;
    int32_t* rsi34;
    int32_t eax35;
    int64_t v36;

    __asm__("xorps xmm0, xmm0");
    __asm__("movaps [r14+0x20], xmm0");
    __asm__("movaps [r14+0x10], xmm0");
    __asm__("movaps [r14], xmm0");
    r14_1->f30 = reinterpret_cast<int64_t>(printf);
    r14_2->f38 = ebp3;
    r14_4->f3c = ebx5;
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    __asm__("movaps xmm0, [rip+0x0]");
    rax7 = g4a9;
    __asm__("movaps [rax], xmm0");
    rax7->f10 = 0xc3d2e1f0;
    rbx8 = g4ba;
    *rbx8 = reinterpret_cast<uint32_t>(printf);
    r14_9 = g4c7;
    *r14_9 = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&r15_10) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_10) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        fun_4f3();
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        zf11 = reinterpret_cast<int1_t>(r15_10 == printf);
        ++r15_10;
    } while (zf11);
    ebx12 = *rbx8;
    ebp13 = *r14_9;
    *reinterpret_cast<uint32_t*>(&rax14) = ebx12 >> 3 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    r14_15 = g513;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_15) + rax14 * 4) = 0x80;
    if (*reinterpret_cast<uint32_t*>(&rax14) < 56) {
        if (*reinterpret_cast<uint32_t*>(&rax14) <= 51) {
            ecx16 = 55 - *reinterpret_cast<uint32_t*>(&rax14);
            edx17 = 58 - *reinterpret_cast<uint32_t*>(&rax14);
            if (reinterpret_cast<int32_t>(ecx16) >= reinterpret_cast<int32_t>(printf)) {
                edx17 = ecx16;
            }
            edx18 = reinterpret_cast<int32_t>(edx17) >> 2;
            eax19 = 1;
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edx18 < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(edx18 == printf)) {
                eax19 = edx18;
            }
            *reinterpret_cast<int32_t*>(&rdx20) = edx18 - eax19;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(printf);
            rdx21 = rdx20 * 4 + 4;
            fun_5ae();
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        }
    } else {
        ecx22 = *reinterpret_cast<uint32_t*>(&rax14) ^ 63;
        if (ecx22 >= 4) {
            ecx23 = ecx22 >> 2;
            eax24 = 1;
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(ecx23) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(ecx23 == printf)) {
                eax24 = ecx23;
            }
            *reinterpret_cast<uint32_t*>(&rcx25) = ecx23 - eax24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = reinterpret_cast<int32_t>(printf);
            rdx21 = rcx25 * 4 + 4;
            fun_550();
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        }
        fun_555();
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        __asm__("xorps xmm0, xmm0");
        __asm__("movaps [r14+0x20], xmm0");
        __asm__("movaps [r14+0x10], xmm0");
        __asm__("movaps [r14], xmm0");
        r14_15->f30 = reinterpret_cast<int64_t>(printf);
    }
    r14_15->f38 = ebp13;
    r14_15->f3c = ebx12;
    rsp26 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) + 8 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 24);
    rdi27 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp26) + 8);
    *reinterpret_cast<int32_t*>(&rsi28) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = reinterpret_cast<int32_t>(printf);
    eax29 = fun_5e5();
    rsp30 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp26) - 8 + 8);
    if (eax29 != printf) {
        rdi27 = reinterpret_cast<int32_t*>(0x5f0);
        *reinterpret_cast<int32_t*>(&rsi28) = eax29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = reinterpret_cast<int32_t>(printf);
        fun_5f9(0x5f0, rsi28, rdx21);
        rsp30 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp30) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi27 = *rsi28;
    fun_623(rdi27 + 1, rsi28 + 1, rdx21);
    rsp31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp30) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx32) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx32;
    } while (rdx32 != 5);
    rdi33 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp31) + 8);
    *reinterpret_cast<int32_t*>(&rsi34) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(printf);
    eax35 = fun_663();
    if (eax35 != printf) {
        rdi33 = reinterpret_cast<int32_t*>(0x66e);
        *reinterpret_cast<int32_t*>(&rsi34) = eax35;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(printf);
        fun_677(0x66e, rsi34);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi33 = *rsi34;
    __asm__("subsd xmm0, [r14]");
    fun_6b4(0x6ad, rsi34 + 1);
    goto v36;
}

struct s15 {
    signed char[48] pad48;
    int64_t f30;
};

struct s16 {
    signed char[56] pad56;
    int32_t f38;
};

struct s17 {
    signed char[60] pad60;
    int32_t f3c;
};

void fun_555() {
    struct s15* r14_1;
    struct s16* r14_2;
    int32_t ebp3;
    struct s17* r14_4;
    int32_t ebx5;
    void* rsp6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t eax9;
    void* rsp10;
    int64_t rdx11;
    int64_t rdx12;
    void* rsp13;
    int64_t rdx14;
    int32_t* rdi15;
    int32_t* rsi16;
    int32_t eax17;
    int64_t v18;

    __asm__("xorps xmm0, xmm0");
    __asm__("movaps [r14+0x20], xmm0");
    __asm__("movaps [r14+0x10], xmm0");
    __asm__("movaps [r14], xmm0");
    r14_1->f30 = reinterpret_cast<int64_t>(printf);
    r14_2->f38 = ebp3;
    r14_4->f3c = ebx5;
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 24);
    rdi7 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + 8);
    *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(printf);
    eax9 = fun_5e5();
    rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
    if (eax9 != printf) {
        rdi7 = reinterpret_cast<int32_t*>(0x5f0);
        *reinterpret_cast<int32_t*>(&rsi8) = eax9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(printf);
        fun_5f9(0x5f0, rsi8, rdx11);
        rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi7 = *rsi8;
    fun_623(rdi7 + 1, rsi8 + 1, rdx12);
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx14;
    } while (rdx14 != 5);
    rdi15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp13) + 8);
    *reinterpret_cast<int32_t*>(&rsi16) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(printf);
    eax17 = fun_663();
    if (eax17 != printf) {
        rdi15 = reinterpret_cast<int32_t*>(0x66e);
        *reinterpret_cast<int32_t*>(&rsi16) = eax17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(printf);
        fun_677(0x66e, rsi16);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi15 = *rsi16;
    __asm__("subsd xmm0, [r14]");
    fun_6b4(0x6ad, rsi16 + 1);
    goto v18;
}

void fun_4f3() {
    void* rsp1;
    int1_t zf2;
    int64_t r15_3;
    uint32_t ebx4;
    uint32_t* rbx5;
    int32_t ebp6;
    int32_t* r14_7;
    int64_t rax8;
    struct s4* r14_9;
    uint32_t ecx10;
    uint32_t edx11;
    int32_t edx12;
    int32_t eax13;
    int64_t rdx14;
    int64_t rdx15;
    uint32_t ecx16;
    uint32_t ecx17;
    uint32_t eax18;
    int64_t rcx19;
    void* rsp20;
    int32_t* rdi21;
    int32_t* rsi22;
    int32_t eax23;
    void* rsp24;
    void* rsp25;
    int64_t rdx26;
    int32_t* rdi27;
    int32_t* rsi28;
    int32_t eax29;
    int64_t v30;

    while (rsp1 = __zero_stack_offset(), zf2 = reinterpret_cast<int1_t>(r15_3 == printf), ++r15_3, zf2) {
        fun_4f3();
    }
    ebx4 = *rbx5;
    ebp6 = *r14_7;
    *reinterpret_cast<uint32_t*>(&rax8) = ebx4 >> 3 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(printf);
    r14_9 = g513;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_9) + rax8 * 4) = 0x80;
    if (*reinterpret_cast<uint32_t*>(&rax8) < 56) {
        if (*reinterpret_cast<uint32_t*>(&rax8) <= 51) {
            ecx10 = 55 - *reinterpret_cast<uint32_t*>(&rax8);
            edx11 = 58 - *reinterpret_cast<uint32_t*>(&rax8);
            if (reinterpret_cast<int32_t>(ecx10) >= reinterpret_cast<int32_t>(printf)) {
                edx11 = ecx10;
            }
            edx12 = reinterpret_cast<int32_t>(edx11) >> 2;
            eax13 = 1;
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edx12 < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(edx12 == printf)) {
                eax13 = edx12;
            }
            *reinterpret_cast<int32_t*>(&rdx14) = edx12 - eax13;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(printf);
            rdx15 = rdx14 * 4 + 4;
            fun_5ae();
            rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        }
    } else {
        ecx16 = *reinterpret_cast<uint32_t*>(&rax8) ^ 63;
        if (ecx16 >= 4) {
            ecx17 = ecx16 >> 2;
            eax18 = 1;
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(ecx17) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(ecx17 == printf)) {
                eax18 = ecx17;
            }
            *reinterpret_cast<uint32_t*>(&rcx19) = ecx17 - eax18;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(printf);
            rdx15 = rcx19 * 4 + 4;
            fun_550();
            rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        }
        fun_555();
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        __asm__("xorps xmm0, xmm0");
        __asm__("movaps [r14+0x20], xmm0");
        __asm__("movaps [r14+0x10], xmm0");
        __asm__("movaps [r14], xmm0");
        r14_9->f30 = reinterpret_cast<int64_t>(printf);
    }
    r14_9->f38 = ebp6;
    r14_9->f3c = ebx4;
    rsp20 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) + 8 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 24);
    rdi21 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp20) + 8);
    *reinterpret_cast<int32_t*>(&rsi22) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(printf);
    eax23 = fun_5e5();
    rsp24 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp20) - 8 + 8);
    if (eax23 != printf) {
        rdi21 = reinterpret_cast<int32_t*>(0x5f0);
        *reinterpret_cast<int32_t*>(&rsi22) = eax23;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(printf);
        fun_5f9(0x5f0, rsi22, rdx15);
        rsp24 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp24) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi21 = *rsi22;
    fun_623(rdi21 + 1, rsi22 + 1, rdx15);
    rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp24) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx26) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx26;
    } while (rdx26 != 5);
    rdi27 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp25) + 8);
    *reinterpret_cast<int32_t*>(&rsi28) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = reinterpret_cast<int32_t>(printf);
    eax29 = fun_663();
    if (eax29 != printf) {
        rdi27 = reinterpret_cast<int32_t*>(0x66e);
        *reinterpret_cast<int32_t*>(&rsi28) = eax29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = reinterpret_cast<int32_t>(printf);
        fun_677(0x66e, rsi28);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi27 = *rsi28;
    __asm__("subsd xmm0, [r14]");
    fun_6b4(0x6ad, rsi28 + 1);
    goto v30;
}

int32_t g5f0 = 0xc031c689;

int32_t fun_5e5() {
    void* rsp1;
    int32_t eax2;
    int32_t* rsi3;
    int32_t eax4;
    int64_t rdx5;
    int64_t rdx6;
    void* rsp7;
    int64_t rdx8;
    int32_t* rdi9;
    int32_t* rsi10;
    int32_t eax11;
    int64_t v12;

    rsp1 = __zero_stack_offset();
    if (eax2 != printf) {
        *reinterpret_cast<int32_t*>(&rsi3) = eax4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = reinterpret_cast<int32_t>(printf);
        fun_5f9(0x5f0, rsi3, rdx5);
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    g5f0 = *rsi3;
    fun_623(0x5f4, rsi3 + 1, rdx6);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdx8) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        ++rdx8;
    } while (rdx8 != 5);
    rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp7) + 8);
    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(printf);
    eax11 = fun_663();
    if (eax11 != printf) {
        rdi9 = reinterpret_cast<int32_t*>(0x66e);
        *reinterpret_cast<int32_t*>(&rsi10) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(printf);
        fun_677(0x66e, rsi10);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi9 = *rsi10;
    __asm__("subsd xmm0, [r14]");
    fun_6b4(0x6ad, rsi10 + 1);
    goto v12;
}

void printf() {
    int32_t edx1;

    if (edx1 < 4) {
    }
}

struct s18 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s19 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s20 {
    signed char[12] pad12;
    uint32_t fc;
};

struct s21 {
    signed char[16] pad16;
    uint32_t f10;
};

void fun_138(int32_t edi, int32_t esi, int32_t edx, int32_t ecx, int32_t r8d) {
    void* rsp6;
    uint32_t r10d7;
    int64_t rbx8;
    int32_t r12d9;
    int64_t rbx10;
    int64_t r13_11;
    uint32_t ebx12;
    uint32_t r12d13;
    uint32_t r9d14;
    uint32_t r15d15;
    uint32_t r14d16;
    uint32_t r11d17;
    uint32_t ebp18;
    int64_t r13_19;
    uint32_t r11d20;
    uint32_t r14d21;
    uint32_t ebp22;
    int64_t r15_23;
    int64_t r9_24;
    int64_t r15_25;
    uint32_t r13d26;
    uint32_t ebx27;
    uint32_t r12d28;
    uint32_t* rax29;
    struct s18* rax30;
    struct s19* rax31;
    struct s20* rax32;
    struct s21* rax33;
    int64_t v34;

    rsp6 = __zero_stack_offset();
    r10d7 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + rbx8 * 4 - 0x80) + r12d9 + 0x5a827999);
    __asm__("rol r9d, 0x1e");
    if (rbx10 + 1 == 20) {
        *reinterpret_cast<int32_t*>(&r13_11) = 20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_11) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            ebx12 = r10d7;
            r12d13 = r9d14;
            __asm__("rol r9d, 0x5");
            r15d15 = r14d16;
            r10d7 = (r12d13 ^ r11d17 ^ r14d16) + r10d7 + ebp18 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + r13_11 * 4 - 0x80) + 0x6ed9eba1;
            r9d14 = r11d17;
            __asm__("rol r9d, 0x1e");
            ++r13_11;
            ebp18 = r14d16;
            r14d16 = r12d13;
            r11d17 = ebx12;
        } while (r13_11 != 40);
        *reinterpret_cast<int32_t*>(&r13_19) = 40;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_19) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            r11d20 = r10d7;
            r14d21 = r9d14;
            ebp22 = r12d13;
            __asm__("rol r9d, 0x5");
            *reinterpret_cast<uint32_t*>(&r15_23) = (r12d13 & r14d21 | (r12d13 | r14d21) & ebx12) + (r10d7 + r15d15);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_23) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(&r9_24) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + r13_19 * 4 - 0x80);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_24) + 4) = reinterpret_cast<int32_t>(printf);
            r10d7 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r9_24 + r15_23) - 0x70e44324);
            r9d14 = ebx12;
            __asm__("rol r9d, 0x1e");
            ++r13_19;
            r15d15 = r12d13;
            r12d13 = r14d21;
            ebx12 = r11d20;
        } while (r13_19 != 60);
        *reinterpret_cast<int32_t*>(&r15_25) = 60;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_25) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            r13d26 = r10d7;
            ebx27 = r9d14;
            __asm__("rol r9d, 0x5");
            r12d28 = r14d21;
            r10d7 = (ebx27 ^ r11d20 ^ r14d21) + r10d7 + ebp22 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + r15_25 * 4 - 0x80) - 0x359d3e2a;
            r9d14 = r11d20;
            __asm__("rol r9d, 0x1e");
            ++r15_25;
            ebp22 = r14d21;
            r14d21 = ebx27;
            r11d20 = r13d26;
        } while (r15_25 != 80);
        *rax29 = r10d7 + r8d;
        rax30->f4 = r13d26 + edi;
        rax31->f8 = r9d14 + esi;
        rax32->fc = ebx27 + edx;
        rax33->f10 = r12d28 + ecx;
        goto v34;
    }
}

struct s22 {
    signed char[16] pad16;
    int32_t f10;
};

struct s22* g2ae = reinterpret_cast<struct s22*>(0xe1f01040c700290f);

int32_t* g2bf = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g2cc = reinterpret_cast<int32_t*>(0x66c30000000000c7);

void sha_init() {
    struct s22* rax1;
    int32_t* rax2;
    int32_t* rax3;

    __asm__("movaps xmm0, [rip+0x0]");
    rax1 = g2ae;
    __asm__("movaps [rax], xmm0");
    rax1->f10 = 0xc3d2e1f0;
    rax2 = g2bf;
    *rax2 = reinterpret_cast<int32_t>(printf);
    rax3 = g2cc;
    *rax3 = reinterpret_cast<int32_t>(printf);
    return;
}

uint32_t* g3bb = reinterpret_cast<uint32_t*>(0x58b48188b);

int32_t* g3d7 = reinterpret_cast<int32_t*>(0x808e04c741);

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

    rax1 = g3bb;
    eax2 = *rax1 >> 3 & 63;
    *reinterpret_cast<uint32_t*>(&rcx3) = eax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(printf);
    r14_4 = g3d7;
    r14_4[rcx3] = 0x80;
    if (eax2 < 56) {
        if (eax2 > 51) 
            goto fun_470;
        edx5 = 55 - eax2;
        esi6 = 58 - eax2;
        if (reinterpret_cast<int32_t>(edx5) < reinterpret_cast<int32_t>(printf)) 
            goto addr_44a_4;
    } else {
        eax7 = eax2 ^ 63;
        if (eax7 < 4) 
            goto fun_412;
        eax8 = eax7 >> 2;
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(eax8) < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(eax8 == printf)) 
            goto label_7; else 
            goto addr_401_8;
    }
    esi6 = edx5;
    addr_44a_4:
    esi9 = reinterpret_cast<int32_t>(esi6) >> 2;
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(esi9 < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(esi9 == printf)) {
    }
    fun_470();
    label_7:
    addr_401_8:
    fun_412();
}

uint32_t* g2f2 = reinterpret_cast<uint32_t*>(0xf50c8d42);

int32_t* g305 = reinterpret_cast<int32_t*>(0xc1f08944088902ff);

uint32_t* g316 = reinterpret_cast<uint32_t*>(0x557c40fe83410101);

void sha_update(int64_t rdi, uint32_t esi) {
    int64_t r14_3;
    uint32_t* rax4;
    uint32_t ecx5;
    uint32_t tmp32_6;
    int32_t* rdx7;
    uint32_t* rcx8;

    *reinterpret_cast<uint32_t*>(&r14_3) = esi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = reinterpret_cast<int32_t>(printf);
    rax4 = g2f2;
    ecx5 = static_cast<uint32_t>(r14_3 * 8);
    tmp32_6 = ecx5 + *rax4;
    if (tmp32_6 < ecx5) {
        rdx7 = g305;
        *rdx7 = *rdx7 + 1;
    }
    *rax4 = tmp32_6;
    rcx8 = g316;
    *rcx8 = *rcx8 + (*reinterpret_cast<uint32_t*>(&r14_3) >> 29);
    if (*reinterpret_cast<int32_t*>(&r14_3) < reinterpret_cast<int32_t>(64)) {
        if (*reinterpret_cast<int32_t*>(&r14_3) < reinterpret_cast<int32_t>(4)) 
            goto 0x3a6; else 
            goto "???";
    }
}

