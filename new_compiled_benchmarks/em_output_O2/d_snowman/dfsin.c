
uint64_t fun_10c0(int64_t rdi);

int64_t fun_10ce(int64_t rdi, uint64_t rsi);

void test_in(int64_t rdi, int32_t esi);

unsigned char* g1107 = reinterpret_cast<unsigned char*>(0x8348f0894c100880);

int64_t fun_1057(uint64_t rdi, uint64_t rsi) {
    int64_t rdx3;
    int64_t rbp4;
    uint32_t esi5;
    int1_t cf6;
    int64_t rax7;
    uint64_t rax8;
    int64_t rax9;
    uint64_t r12_10;
    uint64_t rbx11;
    unsigned char* rax12;
    int64_t v13;

    while (1) {
        rdx3 = (rbp4 * 2 + 1) * (rbp4 * 2);
        esi5 = *reinterpret_cast<uint32_t*>(&rdx3) << 16;
        if (*reinterpret_cast<uint32_t*>(&rdx3) >= 0x10000) {
            esi5 = *reinterpret_cast<uint32_t*>(&rdx3);
        }
        cf6 = esi5 < 0x1000000;
        if (!cf6) {
        }
        if (!cf6) {
        }
        rax8 = fun_10c0(rax7);
        rax9 = fun_10ce(rax9, rax8);
        if (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rax8) == test_in)) 
            goto addr_1030_10;
        if ((rax8 & 0xfffffffffffff) != test_in) 
            break;
        addr_1030_10:
        ++rbp4;
        if ((rax8 & 0x7fffffffffffffff) <= r12_10) 
            goto addr_110a_12;
        rax7 = fun_1057(rax8, rbx11);
    }
    rax12 = g1107;
    *rax12 = reinterpret_cast<unsigned char>(*rax12 | 16);
    addr_110a_12:
    goto v13;
}

uint64_t fun_10c0(int64_t rdi) {
    int64_t rax2;
    uint64_t rax3;
    int64_t rbp4;
    uint64_t r12_5;
    uint64_t rbx6;
    int64_t rax7;
    int64_t rdx8;
    uint32_t esi9;
    int1_t cf10;
    unsigned char* rax11;
    int64_t v12;

    while (1) {
        rax2 = fun_10ce(rax2, rax3);
        if (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rax3) == test_in)) 
            goto addr_1030_3;
        if ((rax3 & 0xfffffffffffff) != test_in) 
            break;
        addr_1030_3:
        ++rbp4;
        if ((rax3 & 0x7fffffffffffffff) <= r12_5) 
            goto addr_110a_5;
        rax7 = fun_1057(rax3, rbx6);
        rdx8 = (rbp4 * 2 + 1) * (rbp4 * 2);
        esi9 = *reinterpret_cast<uint32_t*>(&rdx8) << 16;
        if (*reinterpret_cast<uint32_t*>(&rdx8) >= 0x10000) {
            esi9 = *reinterpret_cast<uint32_t*>(&rdx8);
        }
        cf10 = esi9 < 0x1000000;
        if (!cf10) {
        }
        if (!cf10) {
        }
        rax3 = fun_10c0(rax7);
    }
    rax11 = g1107;
    *rax11 = reinterpret_cast<unsigned char>(*rax11 | 16);
    addr_110a_5:
    goto v12;
}

uint120_t g1188 = 0x4500000000258b4c;

int64_t fun_11a9(int64_t rdi, int64_t rsi);

int32_t fun_11c7();

void fun_11db(int32_t* rdi, int32_t* rsi);

void fun_1217(int64_t rdi, int64_t rsi);

void fun_115d(int32_t* rdi, int32_t* rsi) {
    int32_t* rsp3;
    int64_t rsi4;
    int64_t* r15_5;
    int64_t r13_6;
    int64_t rdi7;
    int32_t* rdi8;
    int32_t* rsi9;
    int32_t eax10;
    int64_t v11;

    rsp3 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi;
    rsi4 = reinterpret_cast<int64_t>(rsi + 1);
    r15_5 = *reinterpret_cast<int64_t**>(&g1188);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(test_in);
    do {
        rdi7 = r15_5[r13_6];
        fun_11a9(rdi7, rsi4);
        rsp3 = rsp3 - 2 + 2;
        ++r13_6;
    } while (r13_6 != 36);
    rdi8 = rsp3;
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(test_in);
    eax10 = fun_11c7();
    if (eax10 != test_in) {
        rdi8 = reinterpret_cast<int32_t*>(0x11d2);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_11db(0x11d2, rsi9);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r14]");
    fun_1217(0x1210, rsi9 + 1);
    goto v11;
}

int64_t fun_11a9(int64_t rdi, int64_t rsi) {
    int64_t r13_3;
    int64_t rdi4;
    int64_t* r15_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t eax8;
    int64_t v9;

    while (++r13_3, r13_3 != 36) {
        rdi4 = r15_5[r13_3];
        fun_11a9(rdi4, rsi);
    }
    rdi6 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(test_in);
    eax8 = fun_11c7();
    if (eax8 != test_in) {
        rdi6 = reinterpret_cast<int32_t*>(0x11d2);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_11db(0x11d2, rsi7);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi6 = *rsi7;
    __asm__("subsd xmm0, [r14]");
    fun_1217(0x1210, rsi7 + 1);
    goto v9;
}

int32_t g11d2 = 0xc031c689;

int32_t fun_11c7() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != test_in) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_11db(0x11d2, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g11d2 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_1217(0x1210, rsi2 + 1);
    goto v4;
}

void fun_11db(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_1217(0x1210, rsi + 1);
    goto v3;
}

void fun_1217(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

int64_t fun_10ce(int64_t rdi, uint64_t rsi) {
    uint64_t rax3;
    int64_t rbp4;
    uint64_t r12_5;
    uint64_t rbx6;
    int64_t rax7;
    int64_t rdx8;
    uint32_t esi9;
    int1_t cf10;
    int64_t rax11;
    unsigned char* rax12;
    int64_t v13;

    while (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rax3) == test_in) || (rax3 & 0xfffffffffffff) == test_in) {
        ++rbp4;
        if ((rax3 & 0x7fffffffffffffff) <= r12_5) 
            goto addr_110a_3;
        rax7 = fun_1057(rax3, rbx6);
        rdx8 = (rbp4 * 2 + 1) * (rbp4 * 2);
        esi9 = *reinterpret_cast<uint32_t*>(&rdx8) << 16;
        if (*reinterpret_cast<uint32_t*>(&rdx8) >= 0x10000) {
            esi9 = *reinterpret_cast<uint32_t*>(&rdx8);
        }
        cf10 = esi9 < 0x1000000;
        if (!cf10) {
        }
        if (!cf10) {
        }
        rax3 = fun_10c0(rax7);
        rax11 = fun_10ce(rax11, rax3);
    }
    rax12 = g1107;
    *rax12 = reinterpret_cast<unsigned char>(*rax12 | 16);
    addr_110a_3:
    goto v13;
}

void fun_1149(int32_t* rdi) {
    int32_t* rsp2;
    int32_t eax3;
    int32_t* rsi4;
    int32_t eax5;
    int64_t rsi6;
    int64_t* r15_7;
    int64_t r13_8;
    int64_t rdi9;
    int32_t* rdi10;
    int32_t* rsi11;
    int32_t eax12;
    int64_t v13;

    rsp2 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    if (eax3 != test_in) {
        rdi = reinterpret_cast<int32_t*>(0x1154);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_115d(0x1154, rsi4);
        rsp2 = rsp2 - 2 + 2;
    }
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    rsi6 = reinterpret_cast<int64_t>(rsi4 + 1);
    r15_7 = *reinterpret_cast<int64_t**>(&g1188);
    *reinterpret_cast<int32_t*>(&r13_8) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_8) + 4) = reinterpret_cast<int32_t>(test_in);
    do {
        rdi9 = r15_7[r13_8];
        fun_11a9(rdi9, rsi6);
        rsp2 = rsp2 - 2 + 2;
        ++r13_8;
    } while (r13_8 != 36);
    rdi10 = rsp2;
    *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(test_in);
    eax12 = fun_11c7();
    if (eax12 != test_in) {
        rdi10 = reinterpret_cast<int32_t*>(0x11d2);
        *reinterpret_cast<int32_t*>(&rsi11) = eax12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_11db(0x11d2, rsi11);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi10 = *rsi11;
    __asm__("subsd xmm0, [r14]");
    fun_1217(0x1210, rsi11 + 1);
    goto v13;
}

void fun_1000() {
    uint64_t rbx1;
    int64_t rbx2;
    uint64_t rax3;
    int64_t rbp4;
    int64_t r14_5;
    int64_t r15_6;
    uint64_t r15_7;
    int64_t rax8;
    int64_t rdx9;
    uint32_t esi10;
    int1_t cf11;
    uint64_t rax12;
    int64_t rax13;
    unsigned char* rax14;
    int64_t v15;

    rbx1 = reinterpret_cast<uint64_t>(rbx2 + 1) ^ rax3;
    *reinterpret_cast<int32_t*>(&rbp4) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp4) + 4) = reinterpret_cast<int32_t>(test_in);
    r14_5 = r15_6;
    do {
        rax8 = fun_1057(r15_7, rbx1);
        rdx9 = (rbp4 * 2 + 1) * (rbp4 * 2);
        esi10 = *reinterpret_cast<uint32_t*>(&rdx9) << 16;
        if (*reinterpret_cast<uint32_t*>(&rdx9) >= 0x10000) {
            esi10 = *reinterpret_cast<uint32_t*>(&rdx9);
        }
        cf11 = esi10 < 0x1000000;
        if (!cf11) {
        }
        if (!cf11) {
        }
        rax12 = fun_10c0(rax8);
        r15_7 = rax12;
        rax13 = fun_10ce(r14_5, rax12);
        r14_5 = rax13;
        if (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~r15_7) == test_in)) 
            continue;
        if ((r15_7 & 0xfffffffffffff) != test_in) 
            break;
        ++rbp4;
    } while ((r15_7 & 0x7fffffffffffffff) > 0x3ee4f8b588e368f0);
    goto addr_110a_14;
    rax14 = g1107;
    *rax14 = reinterpret_cast<unsigned char>(*rax14 | 16);
    addr_110a_14:
    goto v15;
}

void test_in(int64_t rdi, int32_t esi) {
    if (esi != test_in) {
        if (esi > 63) {
        }
    }
}

void fun_244() {
}

void fun_25c() {
}

void fun_3ba() {
    int64_t rax1;
    int64_t rax2;
    unsigned char* rax3;
    int32_t eax4;
    int64_t v5;

    *reinterpret_cast<int32_t*>(rax1 - 0x75) = *reinterpret_cast<int32_t*>(rax2 - 0x75) - 1;
    *reinterpret_cast<int32_t*>(&rax3) = eax4 + reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = reinterpret_cast<int32_t>(test_in);
    *rax3 = reinterpret_cast<unsigned char>(*rax3 | 16);
    goto v5;
}

uint32_t* g959 = reinterpret_cast<uint32_t*>(0xff831174ff85398b);

uint32_t* g9ee = reinterpret_cast<uint32_t*>(0x4c01c98341098b45);

unsigned char* g9c1 = reinterpret_cast<unsigned char*>(0x483fe0c148090a80);

uint32_t* g9fc = reinterpret_cast<uint32_t*>(0x4cc93102eb0a8945);

uint32_t* ga70 = reinterpret_cast<uint32_t*>(0x3104c983410e8b44);

void fun_3d4(int32_t edi) {
    int32_t r10d2;
    uint64_t rdx3;
    uint64_t rdx4;
    uint64_t rbx5;
    uint32_t r9d6;
    int32_t r9d7;
    uint64_t rax8;
    uint64_t rdx9;
    uint32_t ecx10;
    uint32_t ecx11;
    uint64_t rcx12;
    uint64_t rdx13;
    uint64_t r11_14;
    uint64_t rbx15;
    int32_t ecx16;
    uint64_t rax17;
    int1_t zf18;
    uint32_t esi19;
    int32_t r8d20;
    uint1_t cf21;
    int64_t r8_22;
    int32_t eax23;
    uint32_t r9d24;
    int1_t cf25;
    int64_t r9_26;
    uint32_t ecx27;
    uint64_t rdx28;
    int64_t rsi29;
    int32_t r8d30;
    uint32_t* rcx31;
    uint32_t edi32;
    uint64_t r8_33;
    int1_t zf34;
    uint32_t ecx35;
    uint32_t* r9_36;
    uint32_t r9d37;
    unsigned char* rdx38;
    int64_t v39;
    int64_t r8_40;
    int64_t v41;
    uint32_t* r10_42;
    uint32_t ecx43;
    uint64_t rcx44;
    int32_t ecx45;
    uint64_t rcx46;
    uint32_t* rsi47;

    if (r10d2 != test_in) {
        rdx3 = rdx4 | rbx5;
        goto addr_4a0_3;
    }
    r9d6 = reinterpret_cast<uint32_t>(r9d7 - 1);
    if (r9d6 == test_in) {
        addr_4d3_5:
    } else {
        addr_4a0_3:
        if (r9d6 > 63) {
            *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<unsigned char*>(&rax8) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx3 == test_in));
            rdx9 = rax8;
            goto addr_4d3_5;
        } else {
            ecx10 = r9d6;
            *reinterpret_cast<signed char*>(&r9d6) = -*reinterpret_cast<signed char*>(&r9d6);
            ecx11 = r9d6;
            *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<unsigned char*>(&rcx12) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx3 << *reinterpret_cast<unsigned char*>(&ecx11) == test_in));
            rdx9 = rcx12 | rdx3 >> *reinterpret_cast<signed char*>(&ecx10);
            goto addr_4d3_5;
        }
    }
    rdx13 = (r11_14 | rbx15) - rdx9;
    ecx16 = reinterpret_cast<int32_t>(test_in);
    rax17 = rdx13 >> 32;
    zf18 = reinterpret_cast<int1_t>(rax17 == test_in);
    *reinterpret_cast<unsigned char*>(&ecx16) = reinterpret_cast<uint1_t>(!zf18);
    if (zf18) {
        *reinterpret_cast<uint32_t*>(&rax17) = *reinterpret_cast<uint32_t*>(&rdx13);
    }
    esi19 = *reinterpret_cast<uint32_t*>(&rax17) << 16;
    r8d20 = reinterpret_cast<int32_t>(test_in);
    cf21 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax17) < 0x10000);
    if (!cf21) {
        esi19 = *reinterpret_cast<uint32_t*>(&rax17);
    }
    *reinterpret_cast<unsigned char*>(&r8d20) = cf21;
    *reinterpret_cast<int32_t*>(&r8_22) = r8d20 << 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = reinterpret_cast<int32_t>(test_in);
    eax23 = static_cast<int32_t>(r8_22 + 8);
    r9d24 = esi19 << 8;
    cf25 = esi19 < 0x1000000;
    if (!cf25) {
        r9d24 = esi19;
    }
    if (!cf25) {
        eax23 = *reinterpret_cast<int32_t*>(&r8_22);
    }
    *reinterpret_cast<uint32_t*>(&r9_26) = r9d24 >> 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_26) + 4) = reinterpret_cast<int32_t>(test_in);
    ecx27 = (reinterpret_cast<uint32_t>(-ecx16) | 31) + *reinterpret_cast<int32_t*>(0x63a + r9_26 * 4) + eax23;
    rdx28 = rdx13 << *reinterpret_cast<unsigned char*>(&ecx27);
    *reinterpret_cast<int32_t*>(&rsi29) = reinterpret_cast<int32_t>(~ecx27) + r8d30;
    rcx31 = g959;
    edi32 = *rcx31;
    if (edi32 == test_in) {
        *reinterpret_cast<int32_t*>(&r8_33) = 0x200;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_33) + 4) = reinterpret_cast<int32_t>(test_in);
    } else {
        if (edi32 != 1) {
            if (edi == test_in) {
                zf34 = edi32 == 3;
            } else {
                zf34 = edi32 == 2;
            }
            *reinterpret_cast<int32_t*>(&r8_33) = 0x3ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_33) + 4) = reinterpret_cast<int32_t>(test_in);
            if (zf34) {
                r8_33 = reinterpret_cast<uint64_t>(test_in);
            }
        } else {
            *reinterpret_cast<int32_t*>(&r8_33) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_33) + 4) = reinterpret_cast<int32_t>(test_in);
        }
    }
    if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rsi29)) < 0x7fd) {
        addr_9dd_29:
        ecx35 = *reinterpret_cast<uint32_t*>(&rdx28) & 0x3ff;
        if (ecx35 == test_in) {
            ecx35 = reinterpret_cast<uint32_t>(test_in);
        } else {
            r9_36 = g9ee;
            r9d37 = *r9_36;
            goto addr_9f1_32;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(&rsi29) > 0x7fd || *reinterpret_cast<int32_t*>(&rsi29) == 0x7fd && reinterpret_cast<int64_t>(r8_33 + rdx28) < reinterpret_cast<int64_t>(test_in)) {
            rdx38 = g9c1;
            *rdx38 = reinterpret_cast<unsigned char>(*rdx38 | 9);
            goto v39;
        }
        if (*reinterpret_cast<int32_t*>(&rsi29) < reinterpret_cast<int32_t>(test_in)) 
            goto addr_a35_36; else 
            goto addr_9dd_29;
    }
    addr_a03_37:
    *reinterpret_cast<int32_t*>(&r8_40) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_40) + 4) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<unsigned char*>(&r8_40) = reinterpret_cast<uint1_t>((edi32 | ecx35 ^ 0x200) == test_in);
    if ((reinterpret_cast<uint64_t>(~r8_40) & rdx28 + r8_33 >> 10) == test_in) {
    }
    goto v41;
    addr_9f1_32:
    r10_42 = g9fc;
    *r10_42 = r9d37 | 1;
    goto addr_a03_37;
    addr_a35_36:
    ecx43 = reinterpret_cast<uint32_t>(-*reinterpret_cast<int32_t*>(&rsi29));
    if (ecx43 > 63) {
        *reinterpret_cast<uint32_t*>(&rcx44) = reinterpret_cast<uint32_t>(test_in);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx44) + 4) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<unsigned char*>(&rcx44) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx28 == test_in));
    } else {
        ecx45 = *reinterpret_cast<int32_t*>(&rsi29);
        *reinterpret_cast<int32_t*>(&rcx46) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx46) + 4) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<unsigned char*>(&rcx46) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx28 << *reinterpret_cast<unsigned char*>(&ecx45) == test_in));
        rcx44 = rcx46 | rdx28 >> *reinterpret_cast<signed char*>(&ecx43);
    }
    rdx28 = rcx44;
    ecx35 = *reinterpret_cast<uint32_t*>(&rcx44) & 0x3ff;
    if (ecx35 != test_in) 
        goto addr_a69_43;
    ecx35 = reinterpret_cast<uint32_t>(test_in);
    goto addr_a03_37;
    addr_a69_43:
    rsi47 = ga70;
    r9d37 = *rsi47 | 4;
    goto addr_9f1_32;
}

void fun_3e5() {
    int32_t r10d1;
    int32_t ecx2;
    uint1_t zf3;
    int32_t r8d4;
    uint64_t r11_5;
    uint64_t r11_6;
    uint64_t rbx7;
    int32_t r9d8;
    int32_t r9d9;
    uint32_t ecx10;
    uint64_t rax11;
    int32_t ecx12;
    uint64_t rcx13;
    uint64_t r11_14;
    uint64_t rbx15;
    uint64_t rdx16;
    int64_t rdx17;
    int64_t v18;

    if (r10d1 != 0x7ff) {
        ecx2 = reinterpret_cast<int32_t>(test_in);
        zf3 = reinterpret_cast<uint1_t>(r8d4 == test_in);
        *reinterpret_cast<unsigned char*>(&ecx2) = zf3;
        if (!zf3) {
            r11_5 = r11_6 | rbx7;
        }
        r9d8 = r9d9 + ecx2;
        if (r9d8 != test_in) {
            ecx10 = reinterpret_cast<uint32_t>(-r9d8);
            if (ecx10 > 63) {
                *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(test_in);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(test_in);
                *reinterpret_cast<unsigned char*>(&rax11) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r11_5 == test_in));
                r11_5 = rax11;
            } else {
                ecx12 = r9d8;
                *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(test_in);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(test_in);
                *reinterpret_cast<unsigned char*>(&rcx13) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r11_5 << *reinterpret_cast<unsigned char*>(&ecx12) == test_in));
                r11_5 = rcx13 | r11_5 >> *reinterpret_cast<signed char*>(&ecx10);
            }
        }
        r11_14 = (r11_5 | rbx15) + rdx16;
        if (reinterpret_cast<int64_t>(r11_14 + r11_14) < reinterpret_cast<int64_t>(test_in)) {
        }
        goto 0x950;
    } else {
        if (reinterpret_cast<int1_t>(rdx17 == test_in)) {
            goto v18;
        }
    }
}

void fun_417(int32_t edi) {
    int32_t r10d2;
    int32_t ecx3;
    uint1_t zf4;
    int32_t r8d5;
    int32_t r9d6;
    int32_t r9d7;
    int64_t rdx8;
    int64_t v9;

    if (r10d2 != 0x7ff) {
        ecx3 = reinterpret_cast<int32_t>(test_in);
        zf4 = reinterpret_cast<uint1_t>(r8d5 == test_in);
        *reinterpret_cast<unsigned char*>(&ecx3) = zf4;
        if (zf4) {
        }
        r9d6 = r9d7 + ecx3;
        if (r9d6 != test_in) {
            if (reinterpret_cast<uint32_t>(-r9d6) > 63) {
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(rdx8 == test_in)) 
            goto 0x2de;
        goto v9;
    }
}

void fun_442() {
    uint32_t r9d1;
    int32_t r9d2;

    r9d1 = reinterpret_cast<uint32_t>(r9d2 - 1);
    if (r9d1 == test_in) 
        goto 0x47a;
    if (r9d1 <= 63) {
        goto 0x47a;
    }
}

unsigned char* g6d8 = reinterpret_cast<unsigned char*>(0xc35bc8ff48100980);

unsigned char* g754 = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

uint64_t float64_mul(uint64_t rdi, uint64_t rsi) {
    uint64_t rcx3;
    uint64_t r8_4;
    uint64_t r9_5;
    uint32_t r10d6;
    uint64_t rdx7;
    uint64_t r11_8;
    uint32_t eax9;
    uint64_t rdi10;
    uint64_t r8_11;
    uint64_t rcx12;
    uint64_t rdx13;
    uint64_t r9_14;
    uint64_t rsi15;
    uint64_t r10_16;
    int64_t r8_17;
    int64_t rdx18;
    uint64_t rdx19;
    int64_t rsi20;
    uint64_t tmp64_21;
    uint64_t r9_22;
    uint64_t rcx23;
    uint64_t rcx24;
    uint64_t rdi25;
    uint32_t eax26;
    uint64_t rcx27;
    uint1_t zf28;
    uint32_t esi29;
    uint32_t r11d30;
    uint1_t cf31;
    int64_t r11_32;
    uint32_t ebx33;
    uint32_t ecx34;
    int1_t cf35;
    int64_t rcx36;
    int64_t rbx37;
    int32_t ecx38;
    uint32_t r9d39;
    uint64_t r10_40;
    uint1_t zf41;
    uint32_t ecx42;
    uint32_t r11d43;
    uint1_t cf44;
    int64_t r11_45;
    uint32_t ebx46;
    uint32_t r10d47;
    int1_t cf48;
    int64_t r10_49;
    int64_t rbx50;
    int32_t ecx51;
    uint64_t r9_52;
    unsigned char* rcx53;
    uint64_t r11_54;
    unsigned char dl55;
    unsigned char dil56;
    unsigned char* r8_57;
    uint64_t r8_58;
    uint64_t rcx59;
    uint64_t rax60;

    rcx3 = rdi;
    r8_4 = rdi & 0xfffffffffffff;
    r9_5 = rdi >> 52;
    r10d6 = *reinterpret_cast<uint32_t*>(&r9_5) & 0x7ff;
    rdx7 = 0xfffffffffffff & rsi;
    r11_8 = rsi >> 52;
    eax9 = *reinterpret_cast<uint32_t*>(&r11_8) & 0x7ff;
    rdi10 = rsi ^ rcx3;
    if (r10d6 != 0x7ff) {
        if (eax9 != 0x7ff) {
            if (!reinterpret_cast<int1_t>(r10d6 == test_in)) {
                addr_804_4:
                if (!reinterpret_cast<int1_t>(eax9 == test_in)) {
                    addr_878_5:
                    r8_11 = r8_4 << 10;
                    rcx12 = 0x4000000000000000 | r8_11;
                    rdx13 = rdx7 << 11;
                    r9_14 = 0x8000000000000000 | rdx13;
                    rsi15 = rcx12 >> 32;
                    r10_16 = r9_14 >> 32;
                    *reinterpret_cast<int32_t*>(&r8_17) = *reinterpret_cast<int32_t*>(&r8_11);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_17) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(&rdx18) = *reinterpret_cast<int32_t*>(&rdx13);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(test_in);
                    rdx19 = rdx18 * rsi15;
                    *reinterpret_cast<int32_t*>(&rsi20) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(test_in);
                    tmp64_21 = rdx19 + r8_17 * r10_16;
                    *reinterpret_cast<unsigned char*>(&rsi20) = reinterpret_cast<uint1_t>(tmp64_21 < rdx19);
                    r9_22 = r9_14 * rcx12;
                    *reinterpret_cast<int32_t*>(&rcx23) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<unsigned char*>(&rcx23) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r9_22 == test_in));
                    rcx24 = rcx23 | (tmp64_21 >> 32) + r10_16 * rsi15 + (rsi20 << 32) + reinterpret_cast<uint1_t>(r9_22 < tmp64_21 << 32);
                    if (reinterpret_cast<int64_t>(rcx24 + rcx24) < reinterpret_cast<int64_t>(test_in)) {
                    }
                } else {
                    if (rdx7 == test_in) {
                        rdi25 = rdi10 & 0x8000000000000000;
                        goto addr_940_9;
                    } else {
                        eax26 = reinterpret_cast<uint32_t>(test_in);
                        rcx27 = rdx7 >> 32;
                        zf28 = reinterpret_cast<uint1_t>(rcx27 == test_in);
                        if (zf28) {
                            *reinterpret_cast<uint32_t*>(&rcx27) = *reinterpret_cast<uint32_t*>(&rsi);
                        }
                        *reinterpret_cast<unsigned char*>(&eax26) = zf28;
                        esi29 = *reinterpret_cast<uint32_t*>(&rcx27) << 16;
                        r11d30 = reinterpret_cast<uint32_t>(test_in);
                        cf31 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx27) < 0x10000);
                        if (!cf31) {
                            esi29 = *reinterpret_cast<uint32_t*>(&rcx27);
                        }
                        *reinterpret_cast<unsigned char*>(&r11d30) = cf31;
                        *reinterpret_cast<uint32_t*>(&r11_32) = r11d30 << 4;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_32) + 4) = reinterpret_cast<int32_t>(test_in);
                        ebx33 = static_cast<uint32_t>(r11_32 + 8);
                        ecx34 = esi29 << 8;
                        cf35 = esi29 < 0x1000000;
                        if (!cf35) {
                            ecx34 = esi29;
                        }
                        if (!cf35) {
                            ebx33 = *reinterpret_cast<uint32_t*>(&r11_32);
                        }
                        *reinterpret_cast<uint32_t*>(&rcx36) = ecx34 >> 24;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx36) + 4) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<uint32_t*>(&rbx37) = (ebx33 | eax26 << 5) + *reinterpret_cast<int32_t*>(0x866 + rcx36 * 4);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx37) + 4) = reinterpret_cast<int32_t>(test_in);
                        ecx38 = static_cast<int32_t>(rbx37 - 11);
                        rdx7 = rdx7 << *reinterpret_cast<unsigned char*>(&ecx38);
                        goto addr_878_5;
                    }
                }
            } else {
                if (r8_4 == test_in) {
                    rdi25 = rdi10 & 0x8000000000000000;
                    goto addr_940_9;
                } else {
                    r9d39 = reinterpret_cast<uint32_t>(test_in);
                    r10_40 = r8_4 >> 32;
                    zf41 = reinterpret_cast<uint1_t>(r10_40 == test_in);
                    if (zf41) {
                        *reinterpret_cast<uint32_t*>(&r10_40) = *reinterpret_cast<uint32_t*>(&rcx3);
                    }
                    *reinterpret_cast<unsigned char*>(&r9d39) = zf41;
                    ecx42 = *reinterpret_cast<uint32_t*>(&r10_40) << 16;
                    r11d43 = reinterpret_cast<uint32_t>(test_in);
                    cf44 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r10_40) < 0x10000);
                    if (!cf44) {
                        ecx42 = *reinterpret_cast<uint32_t*>(&r10_40);
                    }
                    *reinterpret_cast<unsigned char*>(&r11d43) = cf44;
                    *reinterpret_cast<uint32_t*>(&r11_45) = r11d43 << 4;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_45) + 4) = reinterpret_cast<int32_t>(test_in);
                    ebx46 = static_cast<uint32_t>(r11_45 + 8);
                    r10d47 = ecx42 << 8;
                    cf48 = ecx42 < 0x1000000;
                    if (!cf48) {
                        r10d47 = ecx42;
                    }
                    if (!cf48) {
                        ebx46 = *reinterpret_cast<uint32_t*>(&r11_45);
                    }
                    *reinterpret_cast<uint32_t*>(&r10_49) = r10d47 >> 24;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_49) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<uint32_t*>(&rbx50) = (ebx46 | r9d39 << 5) + *reinterpret_cast<int32_t*>(0x7ee + r10_49 * 4);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx50) + 4) = reinterpret_cast<int32_t>(test_in);
                    ecx51 = static_cast<int32_t>(rbx50 - 11);
                    r8_4 = r8_4 << *reinterpret_cast<unsigned char*>(&ecx51);
                    goto addr_804_4;
                }
            }
        } else {
            if (rdx7 == test_in) {
                *reinterpret_cast<uint32_t*>(&r9_52) = *reinterpret_cast<uint32_t*>(&r9_5) & 0x7ff;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_52) + 4) = reinterpret_cast<int32_t>(test_in);
                if ((r9_52 | r8_4) == test_in) {
                    addr_6d1_32:
                    rcx53 = g6d8;
                    *rcx53 = reinterpret_cast<unsigned char>(*rcx53 | 16);
                    return 0x7fffffffffffffff;
                } else {
                    addr_91c_33:
                    return 0x7ff0000000000000 | rdi10 & 0x8000000000000000;
                }
            }
        }
    } else {
        if (reinterpret_cast<int1_t>(r8_4 == test_in) && (rdx7 == test_in || eax9 != 0x7ff)) {
            *reinterpret_cast<uint32_t*>(&r11_54) = *reinterpret_cast<uint32_t*>(&r11_8) & 0x7ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_54) + 4) = reinterpret_cast<int32_t>(test_in);
            if (!reinterpret_cast<int1_t>((r11_54 | rdx7) == test_in)) 
                goto addr_91c_33; else 
                goto addr_6d1_32;
        }
    }
    goto 0x950;
    addr_940_9:
    return rdi25;
    dl55 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rcx3 << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rcx3 & 0x7ff8000000000000) == 0x7ff0000000000000)));
    dil56 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
    if (!reinterpret_cast<int1_t>(dl55 == test_in) || dil56 != test_in) {
        r8_57 = g754;
        *r8_57 = reinterpret_cast<unsigned char>(*r8_57 | 16);
    }
    r8_58 = rsi | 0x8000000000000;
    rcx59 = rcx3 | 0x8000000000000;
    rax60 = r8_58;
    if (rsi + rsi < 0xffe0000000000001) {
        rax60 = rcx59;
    }
    if (!reinterpret_cast<int1_t>(dl55 == test_in)) {
        rax60 = rcx59;
    }
    if (!reinterpret_cast<int1_t>(dil56 == test_in)) {
        rax60 = r8_58;
    }
    return rax60;
}

void ullong_to_double() {
    return;
}

void fun_4d8() {
    int64_t v1;

    goto v1;
}

uint32_t* gd66 = reinterpret_cast<uint32_t*>(0xaf840f118b);

unsigned char* gb8b = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

unsigned char* gaf7 = reinterpret_cast<unsigned char*>(0xb848100880);

uint64_t float64_div(uint64_t rdi, uint64_t rsi) {
    uint64_t rdx3;
    uint64_t r10_4;
    uint64_t rcx5;
    uint32_t eax6;
    uint64_t r9_7;
    uint64_t r8_8;
    uint32_t r8d9;
    uint64_t rdi10;
    uint64_t rcx11;
    uint32_t* rcx12;
    uint64_t rax13;
    uint32_t ecx14;
    uint64_t r8_15;
    uint1_t zf16;
    uint32_t esi17;
    uint32_t r11d18;
    uint1_t cf19;
    int64_t r11_20;
    uint32_t ebx21;
    uint32_t r8d22;
    int1_t cf23;
    int64_t r8_24;
    int64_t rbx25;
    int32_t ecx26;
    uint64_t r8_27;
    uint64_t r11_28;
    uint64_t r10_29;
    uint64_t r8_30;
    uint64_t r14_31;
    uint64_t r15_32;
    uint64_t rcx33;
    uint64_t rcx34;
    uint64_t rax35;
    uint64_t r11_36;
    uint64_t r12_37;
    uint64_t r13_38;
    uint64_t rbp39;
    uint64_t rax40;
    uint64_t rdx41;
    uint1_t cf42;
    uint64_t rdx43;
    uint64_t r9_44;
    uint64_t tmp64_45;
    uint1_t cf46;
    uint64_t rdx47;
    uint64_t rdx48;
    uint64_t rcx49;
    int64_t r9_50;
    uint64_t r9_51;
    uint64_t r14_52;
    uint64_t tmp64_53;
    uint64_t rbx54;
    uint64_t rax55;
    uint64_t r8_56;
    uint1_t cf57;
    uint64_t r8_58;
    uint64_t tmp64_59;
    uint1_t cf60;
    uint32_t eax61;
    uint64_t rcx62;
    uint1_t zf63;
    uint32_t edx64;
    uint32_t esi65;
    uint1_t cf66;
    int64_t rsi67;
    uint32_t r11d68;
    uint32_t ecx69;
    int1_t cf70;
    int64_t rcx71;
    int64_t r11_72;
    int32_t ecx73;
    unsigned char cl74;
    unsigned char dil75;
    unsigned char* r8_76;
    unsigned char* rax77;
    uint64_t r8_78;
    uint64_t rdx79;

    rdx3 = rdi;
    r10_4 = rdi & 0xfffffffffffff;
    rcx5 = rdi >> 52;
    eax6 = *reinterpret_cast<uint32_t*>(&rcx5) & 0x7ff;
    r9_7 = 0xfffffffffffff & rsi;
    r8_8 = rsi >> 52;
    r8d9 = *reinterpret_cast<uint32_t*>(&r8_8) & 0x7ff;
    rdi10 = rsi ^ rdx3;
    if (eax6 != 0x7ff) {
        if (r8d9 == test_in) {
            if (r9_7 == test_in) {
                *reinterpret_cast<uint32_t*>(&rcx11) = *reinterpret_cast<uint32_t*>(&rcx5) & 0x7ff;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(test_in);
                rcx12 = gd66;
                if ((rcx11 | r10_4) == test_in) {
                    *rcx12 = *rcx12 | 16;
                    rax13 = 0x7fffffffffffffff;
                } else {
                    *rcx12 = *rcx12 | 2;
                    goto addr_d73_7;
                }
            } else {
                ecx14 = reinterpret_cast<uint32_t>(test_in);
                r8_15 = r9_7 >> 32;
                zf16 = reinterpret_cast<uint1_t>(r8_15 == test_in);
                if (zf16) {
                    *reinterpret_cast<uint32_t*>(&r8_15) = *reinterpret_cast<uint32_t*>(&rsi);
                }
                *reinterpret_cast<unsigned char*>(&ecx14) = zf16;
                esi17 = *reinterpret_cast<uint32_t*>(&r8_15) << 16;
                r11d18 = reinterpret_cast<uint32_t>(test_in);
                cf19 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r8_15) < 0x10000);
                if (!cf19) {
                    esi17 = *reinterpret_cast<uint32_t*>(&r8_15);
                }
                *reinterpret_cast<unsigned char*>(&r11d18) = cf19;
                *reinterpret_cast<uint32_t*>(&r11_20) = r11d18 << 4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_20) + 4) = reinterpret_cast<int32_t>(test_in);
                ebx21 = static_cast<uint32_t>(r11_20 + 8);
                r8d22 = esi17 << 8;
                cf23 = esi17 < 0x1000000;
                if (!cf23) {
                    r8d22 = esi17;
                }
                if (!cf23) {
                    ebx21 = *reinterpret_cast<uint32_t*>(&r11_20);
                }
                *reinterpret_cast<uint32_t*>(&r8_24) = r8d22 >> 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = reinterpret_cast<int32_t>(test_in);
                *reinterpret_cast<uint32_t*>(&rbx25) = (ebx21 | ecx14 << 5) + *reinterpret_cast<int32_t*>(0xc20 + r8_24 * 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx25) + 4) = reinterpret_cast<int32_t>(test_in);
                ecx26 = static_cast<int32_t>(rbx25 - 11);
                r9_7 = r9_7 << *reinterpret_cast<unsigned char*>(&ecx26);
                goto addr_c35_17;
            }
        } else {
            if (r8d9 != 0x7ff) {
                addr_c35_17:
                if (!reinterpret_cast<int1_t>(eax6 == test_in)) {
                    addr_ca1_19:
                    r8_27 = 0x4000000000000000 | r10_4 << 10;
                    r11_28 = r9_7 << 11;
                    r10_29 = 0x8000000000000000 | r11_28;
                    r8_30 = r8_27 >> static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10_29 <= r8_27 + r8_27));
                    if (r10_29 > r8_30) {
                        r14_31 = r10_29 >> 32;
                        r15_32 = r10_29 & 0xffffffff00000000;
                        rcx33 = 0xffffffff00000000;
                        if (r15_32 > r8_30) {
                            if (r8_30 >> 32 == test_in) {
                                *reinterpret_cast<uint32_t*>(&rcx34) = *reinterpret_cast<uint32_t*>(&r8_30) / *reinterpret_cast<uint32_t*>(&r14_31);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = reinterpret_cast<int32_t>(test_in);
                            } else {
                                rcx34 = r8_30 / r14_31;
                            }
                            rcx33 = rcx34 << 32;
                        }
                        rax35 = rcx33 >> 32;
                        *reinterpret_cast<uint32_t*>(&r11_36) = *reinterpret_cast<uint32_t*>(&r11_28) & 0xfffff800;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_36) + 4) = reinterpret_cast<int32_t>(test_in);
                        r12_37 = rax35 * r11_36;
                        r13_38 = (r12_37 >> 32) + rax35 * r14_31;
                        rbp39 = rcx33 * r10_29;
                        rax40 = -rbp39;
                        rdx41 = r8_30 - (r13_38 + reinterpret_cast<uint1_t>(r8_30 < r13_38 + reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rbp39 == test_in))));
                        cf42 = reinterpret_cast<uint1_t>(rdx41 < reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbp39 < r12_37 << 32)));
                        rdx43 = rdx41 - (reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf42));
                        if (reinterpret_cast<int64_t>(rdx43) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf42))) {
                            r9_44 = r9_7 << 43;
                            do {
                                rcx33 = rcx33 + 0xffffffff00000000;
                                tmp64_45 = rax40 + r9_44;
                                cf46 = reinterpret_cast<uint1_t>(tmp64_45 < rax40);
                                rax40 = tmp64_45;
                                rdx43 = rdx43 + r14_31 + cf46;
                            } while (reinterpret_cast<int64_t>(rdx43) < reinterpret_cast<int64_t>(test_in));
                        }
                        __asm__("shrd rax, rdx, 0x20");
                        *reinterpret_cast<uint32_t*>(&rdx47) = 0xffffffff;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx47) + 4) = reinterpret_cast<int32_t>(test_in);
                        if (r15_32 > rax40) {
                            if (rax40 >> 32 == test_in) {
                                *reinterpret_cast<uint32_t*>(&rdx47) = *reinterpret_cast<uint32_t*>(&rax40) / *reinterpret_cast<uint32_t*>(&r14_31);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx47) + 4) = reinterpret_cast<int32_t>(test_in);
                            } else {
                                rdx47 = rax40 / r14_31;
                            }
                        }
                        rdx48 = rdx47 | rcx33;
                        if ((*reinterpret_cast<uint32_t*>(&rdx48) & 0x1ff) <= 2) {
                            rcx49 = rdx48 >> 32;
                            *reinterpret_cast<uint32_t*>(&r9_50) = *reinterpret_cast<uint32_t*>(&rdx48);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_50) + 4) = reinterpret_cast<int32_t>(test_in);
                            r9_51 = r9_50 * r14_31;
                            *reinterpret_cast<int32_t*>(&r14_52) = reinterpret_cast<int32_t>(test_in);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_52) + 4) = reinterpret_cast<int32_t>(test_in);
                            tmp64_53 = r9_51 + r11_36 * rcx49;
                            if (tmp64_53 < r9_51) {
                                r14_52 = 0xffffffff00000000;
                            }
                            rbx54 = rdx48 * r10_29;
                            rax55 = -rbx54;
                            r8_56 = r8_30 - (reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r8_30 < reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rbx54 == test_in)))))) - ((tmp64_53 >> 32) + rcx49 * r14_31) + r14_52;
                            cf57 = reinterpret_cast<uint1_t>(r8_56 < reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbx54 < tmp64_53 << 32)));
                            r8_58 = r8_56 - (reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf57));
                            if (reinterpret_cast<int64_t>(r8_58) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf57))) {
                                do {
                                    tmp64_59 = rax55 + r10_29;
                                    cf60 = reinterpret_cast<uint1_t>(tmp64_59 < rax55);
                                    rax55 = tmp64_59;
                                    r8_58 = r8_58 + reinterpret_cast<uint64_t>(test_in) + cf60;
                                } while (reinterpret_cast<int64_t>(r8_58) < reinterpret_cast<int64_t>(test_in));
                            }
                            goto addr_ea7_39;
                        }
                    }
                } else {
                    if (r10_4 == test_in) {
                        addr_d2e_41:
                        rax13 = rdi10 & 0x8000000000000000;
                    } else {
                        eax61 = reinterpret_cast<uint32_t>(test_in);
                        rcx62 = r10_4 >> 32;
                        zf63 = reinterpret_cast<uint1_t>(rcx62 == test_in);
                        if (zf63) {
                            *reinterpret_cast<uint32_t*>(&rcx62) = *reinterpret_cast<uint32_t*>(&rdx3);
                        }
                        *reinterpret_cast<unsigned char*>(&eax61) = zf63;
                        edx64 = *reinterpret_cast<uint32_t*>(&rcx62) << 16;
                        esi65 = reinterpret_cast<uint32_t>(test_in);
                        cf66 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx62) < 0x10000);
                        if (!cf66) {
                            edx64 = *reinterpret_cast<uint32_t*>(&rcx62);
                        }
                        *reinterpret_cast<unsigned char*>(&esi65) = cf66;
                        *reinterpret_cast<uint32_t*>(&rsi67) = esi65 << 4;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi67) + 4) = reinterpret_cast<int32_t>(test_in);
                        r11d68 = static_cast<uint32_t>(rsi67 + 8);
                        ecx69 = edx64 << 8;
                        cf70 = edx64 < 0x1000000;
                        if (!cf70) {
                            ecx69 = edx64;
                        }
                        if (!cf70) {
                            r11d68 = *reinterpret_cast<uint32_t*>(&rsi67);
                        }
                        *reinterpret_cast<uint32_t*>(&rcx71) = ecx69 >> 24;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx71) + 4) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<uint32_t*>(&r11_72) = (r11d68 | eax61 << 5) + *reinterpret_cast<int32_t*>(0xc8b + rcx71 * 4);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_72) + 4) = reinterpret_cast<int32_t>(test_in);
                        ecx73 = static_cast<int32_t>(r11_72 - 11);
                        r10_4 = r10_4 << *reinterpret_cast<unsigned char*>(&ecx73);
                        goto addr_ca1_19;
                    }
                }
            } else {
                if (r9_7 == test_in) 
                    goto addr_d2e_41; else 
                    goto addr_b2b_52;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(r10_4 == test_in)) 
            goto addr_b2b_52;
        if (r8d9 != 0x7ff) 
            goto addr_d40_55; else 
            goto addr_aeb_56;
    }
    addr_d83_57:
    return rax13;
    addr_d73_7:
    rax13 = 0x7ff0000000000000 | rdi10 & 0x8000000000000000;
    goto addr_d83_57;
    addr_ea7_39:
    goto 0x950;
    addr_d40_55:
    goto addr_d73_7;
    addr_aeb_56:
    if (!reinterpret_cast<int1_t>(r9_7 == test_in)) {
        addr_b2b_52:
        cl74 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx3 << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdx3 & 0x7ff8000000000000) == 0x7ff0000000000000)));
        dil75 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
        if (!reinterpret_cast<int1_t>(cl74 == test_in) || dil75 != test_in) {
            r8_76 = gb8b;
            *r8_76 = reinterpret_cast<unsigned char>(*r8_76 | 16);
        }
    } else {
        rax77 = gaf7;
        *rax77 = reinterpret_cast<unsigned char>(*rax77 | 16);
        rax13 = 0x7fffffffffffffff;
        goto addr_d83_57;
    }
    r8_78 = rsi | 0x8000000000000;
    rdx79 = rdx3 | 0x8000000000000;
    rax13 = r8_78;
    if (rsi + rsi < 0xffe0000000000001) {
        rax13 = rdx79;
    }
    if (!reinterpret_cast<int1_t>(cl74 == test_in)) {
        rax13 = rdx79;
    }
    if (!reinterpret_cast<int1_t>(dil75 == test_in)) {
        rax13 = r8_78;
    }
    goto addr_d83_57;
}

unsigned char* gefe = reinterpret_cast<unsigned char*>(0xc0b60fc031100880);

int64_t float64_le(uint64_t rdi, uint64_t rsi) {
    unsigned char* rax3;
    uint64_t rax4;
    uint64_t rcx5;
    unsigned char cl6;
    unsigned char al7;
    uint1_t cf8;
    int64_t rax9;

    if (reinterpret_cast<int1_t>((~rdi & 0x7ff0000000000000) == test_in) && !reinterpret_cast<int1_t>((rdi & 0xfffffffffffff) == test_in) || reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rsi) == test_in) && (0xfffffffffffff & rsi) != test_in) {
        rax3 = gefe;
        *rax3 = reinterpret_cast<unsigned char>(*rax3 | 16);
        return test_in;
    } else {
        rax4 = rdi >> 63;
        rcx5 = rsi >> 63;
        if (*reinterpret_cast<uint32_t*>(&rax4) != *reinterpret_cast<uint32_t*>(&rcx5)) {
            cl6 = reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rdi) < reinterpret_cast<int64_t>(test_in));
            al7 = reinterpret_cast<uint1_t>((rsi | rdi) << 1 == test_in);
        } else {
            cl6 = reinterpret_cast<uint1_t>(rdi == rsi);
            cf8 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax4) < reinterpret_cast<int32_t>(test_in) + reinterpret_cast<uint1_t>(rdi < rsi));
            al7 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax4) - (reinterpret_cast<int32_t>(test_in) + cf8) != reinterpret_cast<int32_t>(test_in) + cf8);
        }
        *reinterpret_cast<uint32_t*>(&rax9) = al7 | cl6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(test_in);
        return rax9;
    }
}

unsigned char* gf7e = reinterpret_cast<unsigned char*>(0xc0b60fc031100880);

int64_t float64_ge(uint64_t rdi, uint64_t rsi) {
    unsigned char* rax3;
    uint64_t rax4;
    uint64_t rcx5;
    unsigned char cl6;
    unsigned char al7;
    uint1_t cf8;
    int64_t rax9;

    if (reinterpret_cast<int1_t>((~rsi & 0x7ff0000000000000) == test_in) && !reinterpret_cast<int1_t>((rsi & 0xfffffffffffff) == test_in) || reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rdi) == test_in) && (0xfffffffffffff & rdi) != test_in) {
        rax3 = gf7e;
        *rax3 = reinterpret_cast<unsigned char>(*rax3 | 16);
        return test_in;
    } else {
        rax4 = rsi >> 63;
        rcx5 = rdi >> 63;
        if (*reinterpret_cast<uint32_t*>(&rax4) != *reinterpret_cast<uint32_t*>(&rcx5)) {
            cl6 = reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rsi) < reinterpret_cast<int64_t>(test_in));
            al7 = reinterpret_cast<uint1_t>((rdi | rsi) << 1 == test_in);
        } else {
            cl6 = reinterpret_cast<uint1_t>(rsi == rdi);
            cf8 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax4) < reinterpret_cast<int32_t>(test_in) + reinterpret_cast<uint1_t>(rsi < rdi));
            al7 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax4) - (reinterpret_cast<int32_t>(test_in) + cf8) != reinterpret_cast<int32_t>(test_in) + cf8);
        }
        *reinterpret_cast<uint32_t*>(&rax9) = al7 | cl6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(test_in);
        return rax9;
    }
}

uint64_t float64_neg(uint64_t rdi) {
    return 0x8000000000000000 ^ rdi;
}

void submain() {
    fun_1149(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 16);
}

void fun_4f1() {
    goto 0x492;
}

uint64_t float64_abs(uint64_t rdi) {
    return 0x7fffffffffffffff & rdi;
}

void fun_506() {
    uint64_t rdx1;
    uint64_t r11_2;
    uint64_t rdx3;
    uint64_t r11_4;
    int64_t v5;

    if (rdx1 < r11_2) 
        goto "???";
    if (rdx3 > r11_4) 
        goto 0x5e9;
    goto v5;
}

void local_sin(int64_t rdi) {
    fun_1000();
}

