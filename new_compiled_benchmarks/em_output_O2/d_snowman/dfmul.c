
uint176_t g63c = 0x4c00000000258b4c;

void a_input(int64_t rdi, int32_t esi);

int64_t fun_65d(int64_t rdi, int64_t rsi);

int32_t fun_67e();

void fun_692(int32_t* rdi, int32_t* rsi);

void fun_6cf(int64_t rdi, int64_t rsi);

void fun_610(int32_t* rdi, int32_t* rsi) {
    void* rsp3;
    int64_t* r15_4;
    int64_t* r12_5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rsi8;
    int32_t* rdi9;
    int32_t* rsi10;
    int32_t eax11;
    int64_t v12;

    rsp3 = __zero_stack_offset();
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi;
    r15_4 = *reinterpret_cast<int64_t**>(&g63c);
    r12_5 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g63c) + 7);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi7 = r15_4[rbp6];
        rsi8 = r12_5[rbp6];
        fun_65d(rdi7, rsi8);
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        ++rbp6;
    } while (rbp6 != 20);
    rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp3) + 8);
    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
    eax11 = fun_67e();
    if (eax11 != a_input) {
        rdi9 = reinterpret_cast<int32_t*>(0x689);
        *reinterpret_cast<int32_t*>(&rsi10) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_692(0x689, rsi10);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi9 = *rsi10;
    __asm__("subsd xmm0, [r14]");
    fun_6cf(0x6c8, rsi10 + 1);
    goto v12;
}

int64_t fun_65d(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rdi4;
    int64_t* r15_5;
    int64_t rsi6;
    int64_t* r12_7;
    int32_t* rdi8;
    int32_t* rsi9;
    int32_t eax10;
    int64_t v11;

    while (++rbp3, rbp3 != 20) {
        rdi4 = r15_5[rbp3];
        rsi6 = r12_7[rbp3];
        fun_65d(rdi4, rsi6);
    }
    rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
    eax10 = fun_67e();
    if (eax10 != a_input) {
        rdi8 = reinterpret_cast<int32_t*>(0x689);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_692(0x689, rsi9);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r14]");
    fun_6cf(0x6c8, rsi9 + 1);
    goto v11;
}

int32_t g689 = 0xc031c689;

int32_t fun_67e() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != a_input) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_692(0x689, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g689 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_6cf(0x6c8, rsi2 + 1);
    goto v4;
}

void fun_692(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_6cf(0x6c8, rsi + 1);
    goto v3;
}

void fun_6cf(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_5fc(int32_t* rdi) {
    void* rsp2;
    int32_t eax3;
    int32_t* rsi4;
    int32_t eax5;
    int64_t* r15_6;
    int64_t* r12_7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rsi10;
    int32_t* rdi11;
    int32_t* rsi12;
    int32_t eax13;
    int64_t v14;

    rsp2 = __zero_stack_offset();
    if (eax3 != a_input) {
        rdi = reinterpret_cast<int32_t*>(0x607);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_610(0x607, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    r15_6 = *reinterpret_cast<int64_t**>(&g63c);
    r12_7 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g63c) + 7);
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi9 = r15_6[rbp8];
        rsi10 = r12_7[rbp8];
        fun_65d(rdi9, rsi10);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
        ++rbp8;
    } while (rbp8 != 20);
    rdi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) + 8);
    *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
    eax13 = fun_67e();
    if (eax13 != a_input) {
        rdi11 = reinterpret_cast<int32_t*>(0x689);
        *reinterpret_cast<int32_t*>(&rsi12) = eax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_692(0x689, rsi12);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi11 = *rsi12;
    __asm__("subsd xmm0, [r14]");
    fun_6cf(0x6c8, rsi12 + 1);
    goto v14;
}

void a_input(int64_t rdi, int32_t esi) {
    if (esi != a_input) {
        if (esi > 63) {
        }
    }
}

void fun_1ac() {
}

uint32_t* g23e = reinterpret_cast<uint32_t*>(0x4c01c98341098b45);

unsigned char* g211 = reinterpret_cast<unsigned char*>(0x483fe0c148090a80);

uint32_t* g24c = reinterpret_cast<uint32_t*>(0x4cc93102eb0a8945);

uint32_t* g2c0 = reinterpret_cast<uint32_t*>(0x3104c983410e8b44);

uint64_t fun_1c8(uint32_t edi, int32_t esi, uint64_t rdx, int64_t rcx, uint64_t r8) {
    uint64_t rsi2;
    uint32_t ecx6;
    uint32_t* r9_7;
    uint32_t r9d8;
    unsigned char* rdx9;
    int64_t rax10;
    int64_t r8_11;
    uint64_t r8_12;
    uint64_t rsi13;
    uint64_t rax14;
    uint32_t* r10_15;
    uint32_t ecx16;
    uint64_t rcx17;
    int32_t ecx18;
    uint64_t rcx19;
    uint32_t* rsi20;

    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rsi2)) < 0x7fd) {
        addr_22d_3:
        ecx6 = *reinterpret_cast<uint32_t*>(&rdx) & 0x3ff;
        if (ecx6 == a_input) {
            ecx6 = reinterpret_cast<uint32_t>(a_input);
        } else {
            r9_7 = g23e;
            r9d8 = *r9_7;
            goto addr_241_6;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(&rsi2) > 0x7fd || *reinterpret_cast<int32_t*>(&rsi2) == 0x7fd && reinterpret_cast<int64_t>(r8 + rdx) < reinterpret_cast<int64_t>(a_input)) {
            rdx9 = g211;
            *rdx9 = reinterpret_cast<unsigned char>(*rdx9 | 9);
            return 0x7ff0000000000000 + (rcx + (rax10 << 63));
        }
        if (*reinterpret_cast<int32_t*>(&rsi2) < reinterpret_cast<int32_t>(a_input)) 
            goto addr_285_10; else 
            goto addr_22d_3;
    }
    addr_253_11:
    *reinterpret_cast<int32_t*>(&r8_11) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<unsigned char*>(&r8_11) = reinterpret_cast<uint1_t>((edi | ecx6 ^ 0x200) == a_input);
    r8_12 = reinterpret_cast<uint64_t>(~r8_11) & rdx + r8 >> 10;
    rsi13 = rsi2 << 52;
    if (r8_12 == a_input) {
        rsi13 = r8_12;
    }
    return (rax14 << 63 | r8_12) + rsi13;
    addr_241_6:
    r10_15 = g24c;
    *r10_15 = r9d8 | 1;
    goto addr_253_11;
    addr_285_10:
    ecx16 = reinterpret_cast<uint32_t>(-*reinterpret_cast<int32_t*>(&rsi2));
    if (ecx16 > 63) {
        *reinterpret_cast<uint32_t*>(&rcx17) = reinterpret_cast<uint32_t>(a_input);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<unsigned char*>(&rcx17) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx == a_input));
    } else {
        ecx18 = *reinterpret_cast<int32_t*>(&rsi2);
        *reinterpret_cast<int32_t*>(&rcx19) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<unsigned char*>(&rcx19) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx << *reinterpret_cast<unsigned char*>(&ecx18) == a_input));
        rcx17 = rcx19 | rdx >> *reinterpret_cast<signed char*>(&ecx16);
    }
    rdx = rcx17;
    ecx6 = *reinterpret_cast<uint32_t*>(&rcx17) & 0x3ff;
    if (ecx6 != a_input) 
        goto addr_2b9_17;
    ecx6 = reinterpret_cast<uint32_t>(a_input);
    *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(a_input);
    goto addr_253_11;
    addr_2b9_17:
    rsi20 = g2c0;
    r9d8 = *rsi20 | 4;
    *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(a_input);
    goto addr_241_6;
}

void fun_1ca(int32_t edi) {
    int32_t eax2;
    int1_t zf3;

    if (eax2 == a_input) {
        zf3 = edi == 3;
    } else {
        zf3 = edi == 2;
    }
    if (zf3) {
    }
}

unsigned char* g358 = reinterpret_cast<unsigned char*>(0xc35bc8ff48100980);

unsigned char* g3d4 = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

uint64_t float64_mul(uint64_t rdi, uint64_t rsi) {
    uint64_t rcx3;
    uint64_t r8_4;
    uint64_t r9_5;
    uint32_t r10d6;
    uint64_t rdx7;
    uint64_t r11_8;
    uint32_t eax9;
    uint64_t rdi10;
    uint64_t r11_11;
    uint64_t r9_12;
    unsigned char* rcx13;
    int64_t v14;
    int64_t v15;
    unsigned char dl16;
    unsigned char dil17;
    unsigned char* r8_18;
    uint64_t r8_19;
    uint64_t rcx20;
    uint64_t rax21;
    uint64_t r8_22;
    uint64_t rcx23;
    uint64_t rdx24;
    uint64_t r9_25;
    uint64_t rsi26;
    uint64_t r10_27;
    int64_t r8_28;
    int64_t rdx29;
    uint64_t rdx30;
    int64_t rsi31;
    uint64_t tmp64_32;
    uint64_t rcx33;
    uint64_t rcx34;
    uint64_t rdi35;
    uint32_t eax36;
    uint64_t rcx37;
    uint1_t zf38;
    uint32_t esi39;
    uint32_t r11d40;
    uint1_t cf41;
    int64_t r11_42;
    uint32_t ebx43;
    uint32_t ecx44;
    int1_t cf45;
    int64_t rcx46;
    int64_t rbx47;
    int32_t ecx48;
    uint32_t r9d49;
    uint64_t r10_50;
    uint1_t zf51;
    uint32_t ecx52;
    uint32_t r11d53;
    uint1_t cf54;
    int64_t r11_55;
    uint32_t ebx56;
    uint32_t r10d57;
    int1_t cf58;
    int64_t r10_59;
    int64_t rbx60;
    int32_t ecx61;

    rcx3 = rdi;
    r8_4 = rdi & 0xfffffffffffff;
    r9_5 = rdi >> 52;
    r10d6 = *reinterpret_cast<uint32_t*>(&r9_5) & 0x7ff;
    rdx7 = 0xfffffffffffff & rsi;
    r11_8 = rsi >> 52;
    eax9 = *reinterpret_cast<uint32_t*>(&r11_8) & 0x7ff;
    rdi10 = rsi ^ rcx3;
    if (r10d6 == 0x7ff) {
        if (reinterpret_cast<int1_t>(r8_4 == a_input) && (rdx7 == a_input || eax9 != 0x7ff)) {
            *reinterpret_cast<uint32_t*>(&r11_11) = *reinterpret_cast<uint32_t*>(&r11_8) & 0x7ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_11) + 4) = reinterpret_cast<int32_t>(a_input);
            if (!reinterpret_cast<int1_t>((r11_11 | rdx7) == a_input)) 
                goto addr_59f_4; else 
                goto addr_351_5;
        }
    }
    if (eax9 == 0x7ff) {
        if (rdx7 == a_input) {
            addr_585_8:
            *reinterpret_cast<uint32_t*>(&r9_12) = *reinterpret_cast<uint32_t*>(&r9_5) & 0x7ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_12) + 4) = reinterpret_cast<int32_t>(a_input);
            if ((r9_12 | r8_4) == a_input) {
                addr_351_5:
                rcx13 = g358;
                *rcx13 = reinterpret_cast<unsigned char>(*rcx13 | 16);
                goto v14;
            } else {
                addr_59f_4:
                goto v15;
            }
        } else {
            dl16 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rcx3 << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rcx3 & 0x7ff8000000000000) == 0x7ff0000000000000)));
            dil17 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
            if (!reinterpret_cast<int1_t>(dl16 == a_input) || dil17 != a_input) {
                r8_18 = g3d4;
                *r8_18 = reinterpret_cast<unsigned char>(*r8_18 | 16);
            }
        }
        r8_19 = rsi | 0x8000000000000;
        rcx20 = rcx3 | 0x8000000000000;
        rax21 = r8_19;
        if (rsi + rsi < 0xffe0000000000001) {
            rax21 = rcx20;
        }
        if (!reinterpret_cast<int1_t>(dl16 == a_input)) {
            rax21 = rcx20;
        }
        if (!reinterpret_cast<int1_t>(dil17 == a_input)) {
            rax21 = r8_19;
        }
        return rax21;
    }
    if (!reinterpret_cast<int1_t>(r10d6 == a_input)) {
        addr_484_19:
        if (!reinterpret_cast<int1_t>(eax9 == a_input)) {
            addr_4f8_20:
            r8_22 = r8_4 << 10;
            rcx23 = 0x4000000000000000 | r8_22;
            rdx24 = rdx7 << 11;
            r9_25 = 0x8000000000000000 | rdx24;
            rsi26 = rcx23 >> 32;
            r10_27 = r9_25 >> 32;
            *reinterpret_cast<int32_t*>(&r8_28) = *reinterpret_cast<int32_t*>(&r8_22);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_28) + 4) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<int32_t*>(&rdx29) = *reinterpret_cast<int32_t*>(&rdx24);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(a_input);
            rdx30 = rdx29 * rsi26;
            *reinterpret_cast<int32_t*>(&rsi31) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(a_input);
            tmp64_32 = rdx30 + r8_28 * r10_27;
            *reinterpret_cast<unsigned char*>(&rsi31) = reinterpret_cast<uint1_t>(tmp64_32 < rdx30);
            r9_5 = r9_25 * rcx23;
            r8_4 = (tmp64_32 >> 32) + r10_27 * rsi26 + (rsi31 << 32) + reinterpret_cast<uint1_t>(r9_5 < tmp64_32 << 32);
            *reinterpret_cast<int32_t*>(&rcx33) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<unsigned char*>(&rcx33) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r9_5 == a_input));
            rcx34 = rcx33 | r8_4;
            if (reinterpret_cast<int64_t>(rcx34 + rcx34) < reinterpret_cast<int64_t>(a_input)) {
            }
        } else {
            if (rdx7 == a_input) {
                rdi35 = rdi10 & 0x8000000000000000;
                goto addr_5c3_24;
            } else {
                eax36 = reinterpret_cast<uint32_t>(a_input);
                rcx37 = rdx7 >> 32;
                zf38 = reinterpret_cast<uint1_t>(rcx37 == a_input);
                if (zf38) {
                    *reinterpret_cast<uint32_t*>(&rcx37) = *reinterpret_cast<uint32_t*>(&rsi);
                }
                *reinterpret_cast<unsigned char*>(&eax36) = zf38;
                esi39 = *reinterpret_cast<uint32_t*>(&rcx37) << 16;
                r11d40 = reinterpret_cast<uint32_t>(a_input);
                cf41 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx37) < 0x10000);
                if (!cf41) {
                    esi39 = *reinterpret_cast<uint32_t*>(&rcx37);
                }
                *reinterpret_cast<unsigned char*>(&r11d40) = cf41;
                *reinterpret_cast<uint32_t*>(&r11_42) = r11d40 << 4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_42) + 4) = reinterpret_cast<int32_t>(a_input);
                ebx43 = static_cast<uint32_t>(r11_42 + 8);
                ecx44 = esi39 << 8;
                cf45 = esi39 < 0x1000000;
                if (!cf45) {
                    ecx44 = esi39;
                }
                if (!cf45) {
                    ebx43 = *reinterpret_cast<uint32_t*>(&r11_42);
                }
                *reinterpret_cast<uint32_t*>(&rcx46) = ecx44 >> 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx46) + 4) = reinterpret_cast<int32_t>(a_input);
                *reinterpret_cast<uint32_t*>(&rbx47) = (ebx43 | eax36 << 5) + *reinterpret_cast<int32_t*>(0x4e6 + rcx46 * 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx47) + 4) = reinterpret_cast<int32_t>(a_input);
                ecx48 = static_cast<int32_t>(rbx47 - 11);
                rdx7 = rdx7 << *reinterpret_cast<unsigned char*>(&ecx48);
                goto addr_4f8_20;
            }
        }
    } else {
        if (r8_4 == a_input) {
            rdi35 = rdi10 & 0x8000000000000000;
            goto addr_5c3_24;
        } else {
            r9d49 = reinterpret_cast<uint32_t>(a_input);
            r10_50 = r8_4 >> 32;
            zf51 = reinterpret_cast<uint1_t>(r10_50 == a_input);
            if (zf51) {
                *reinterpret_cast<uint32_t*>(&r10_50) = *reinterpret_cast<uint32_t*>(&rcx3);
            }
            *reinterpret_cast<unsigned char*>(&r9d49) = zf51;
            ecx52 = *reinterpret_cast<uint32_t*>(&r10_50) << 16;
            r11d53 = reinterpret_cast<uint32_t>(a_input);
            cf54 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r10_50) < 0x10000);
            if (!cf54) {
                ecx52 = *reinterpret_cast<uint32_t*>(&r10_50);
            }
            *reinterpret_cast<unsigned char*>(&r11d53) = cf54;
            *reinterpret_cast<uint32_t*>(&r11_55) = r11d53 << 4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_55) + 4) = reinterpret_cast<int32_t>(a_input);
            ebx56 = static_cast<uint32_t>(r11_55 + 8);
            r10d57 = ecx52 << 8;
            cf58 = ecx52 < 0x1000000;
            if (!cf58) {
                r10d57 = ecx52;
            }
            if (!cf58) {
                ebx56 = *reinterpret_cast<uint32_t*>(&r11_55);
            }
            *reinterpret_cast<uint32_t*>(&r10_59) = r10d57 >> 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_59) + 4) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<uint32_t*>(&rbx60) = (ebx56 | r9d49 << 5) + *reinterpret_cast<int32_t*>(0x46e + r10_59 * 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx60) + 4) = reinterpret_cast<int32_t>(a_input);
            ecx61 = static_cast<int32_t>(rbx60 - 11);
            r8_4 = r8_4 << *reinterpret_cast<unsigned char*>(&ecx61);
            goto addr_484_19;
        }
    }
    goto addr_585_8;
    addr_5c3_24:
    return rdi35;
}

void ullong_to_double() {
    return;
}

void submain() {
    fun_5fc(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 24 + 8);
}

