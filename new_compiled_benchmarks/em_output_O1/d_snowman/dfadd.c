
uint176_t g7ec = 0x4c00000000258b4c;

void a_input(int64_t rdi, int32_t esi);

int64_t fun_805();

int64_t fun_839();

int32_t fun_847();

void fun_85b(int32_t* rdi, int32_t* rsi);

void fun_898(int64_t rdi, int64_t rsi);

void fun_7c0(int32_t* rdi, int32_t* rsi) {
    void* rsp3;
    uint64_t* r15_4;
    uint64_t* r12_5;
    int64_t rbp6;
    uint64_t rdx7;
    uint64_t rax8;
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
    r15_4 = *reinterpret_cast<uint64_t**>(&g7ec);
    r12_5 = *reinterpret_cast<uint64_t**>(reinterpret_cast<int64_t>(&g7ec) + 7);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdx7 = r15_4[rbp6] >> 63;
        rax8 = r12_5[rbp6] >> 63;
        if (*reinterpret_cast<int32_t*>(&rdx7) != *reinterpret_cast<int32_t*>(&rax8)) {
            fun_805();
            rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        } else {
            fun_839();
            rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        }
        ++rbp6;
    } while (rbp6 != 46);
    rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp3) + 8);
    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
    eax11 = fun_847();
    if (eax11 != a_input) {
        rdi9 = reinterpret_cast<int32_t*>(0x852);
        *reinterpret_cast<int32_t*>(&rsi10) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_85b(0x852, rsi10);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi9 = *rsi10;
    __asm__("subsd xmm0, [r14]");
    fun_898(0x891, rsi10 + 1);
    goto v12;
}

int64_t fun_839() {
    void* rsp1;
    int64_t rbp2;
    uint64_t rdx3;
    uint64_t* r15_4;
    uint64_t rax5;
    uint64_t* r12_6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t eax9;
    int64_t v10;

    while (1) {
        rsp1 = __zero_stack_offset();
        while (++rbp2, rbp2 != 46) {
            rdx3 = r15_4[rbp2] >> 63;
            rax5 = r12_6[rbp2] >> 63;
            if (*reinterpret_cast<int32_t*>(&rdx3) == *reinterpret_cast<int32_t*>(&rax5)) 
                goto addr_834_4;
            fun_805();
            rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
        }
        break;
        addr_834_4:
        fun_839();
    }
    rdi7 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + 8);
    *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(a_input);
    eax9 = fun_847();
    if (eax9 != a_input) {
        rdi7 = reinterpret_cast<int32_t*>(0x852);
        *reinterpret_cast<int32_t*>(&rsi8) = eax9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_85b(0x852, rsi8);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi7 = *rsi8;
    __asm__("subsd xmm0, [r14]");
    fun_898(0x891, rsi8 + 1);
    goto v10;
}

void fun_85b(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_898(0x891, rsi + 1);
    goto v3;
}

void fun_898(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

int64_t fun_805() {
    int64_t rbp1;
    uint64_t rdx2;
    uint64_t* r15_3;
    uint64_t rax4;
    uint64_t* r12_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t eax8;
    int64_t v9;

    while (++rbp1, rbp1 != 46) {
        rdx2 = r15_3[rbp1] >> 63;
        rax4 = r12_5[rbp1] >> 63;
        if (*reinterpret_cast<int32_t*>(&rdx2) != *reinterpret_cast<int32_t*>(&rax4)) {
            fun_805();
        } else {
            fun_839();
        }
    }
    rdi6 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(a_input);
    eax8 = fun_847();
    if (eax8 != a_input) {
        rdi6 = reinterpret_cast<int32_t*>(0x852);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_85b(0x852, rsi7);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi6 = *rsi7;
    __asm__("subsd xmm0, [r14]");
    fun_898(0x891, rsi7 + 1);
    goto v9;
}

int32_t g852 = 0xc031c689;

int32_t fun_847() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != a_input) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_85b(0x852, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g852 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_898(0x891, rsi2 + 1);
    goto v4;
}

void fun_7ac(int32_t* rdi) {
    void* rsp2;
    int32_t eax3;
    int32_t* rsi4;
    int32_t eax5;
    uint64_t* r15_6;
    uint64_t* r12_7;
    int64_t rbp8;
    uint64_t rdx9;
    uint64_t rax10;
    int32_t* rdi11;
    int32_t* rsi12;
    int32_t eax13;
    int64_t v14;

    rsp2 = __zero_stack_offset();
    if (eax3 != a_input) {
        rdi = reinterpret_cast<int32_t*>(0x7b7);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_7c0(0x7b7, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    r15_6 = *reinterpret_cast<uint64_t**>(&g7ec);
    r12_7 = *reinterpret_cast<uint64_t**>(reinterpret_cast<int64_t>(&g7ec) + 7);
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdx9 = r15_6[rbp8] >> 63;
        rax10 = r12_7[rbp8] >> 63;
        if (*reinterpret_cast<int32_t*>(&rdx9) != *reinterpret_cast<int32_t*>(&rax10)) {
            fun_805();
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
        } else {
            fun_839();
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
        }
        ++rbp8;
    } while (rbp8 != 46);
    rdi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) + 8);
    *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
    eax13 = fun_847();
    if (eax13 != a_input) {
        rdi11 = reinterpret_cast<int32_t*>(0x852);
        *reinterpret_cast<int32_t*>(&rsi12) = eax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_85b(0x852, rsi12);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi11 = *rsi12;
    __asm__("subsd xmm0, [r14]");
    fun_898(0x891, rsi12 + 1);
    goto v14;
}

void a_input(int64_t rdi, int32_t esi) {
    if (esi != a_input) {
        if (esi > 63) {
        }
    }
}

void fun_18c() {
}

unsigned char* g33d = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

void fun_238(uint64_t rdi, int32_t esi, int64_t rdx, int64_t rcx, uint32_t r8d, int64_t r9, int64_t a7) {
    int64_t rcx8;
    uint1_t zf9;
    int32_t eax10;
    uint32_t r10d11;
    int1_t cf12;
    int64_t r10_13;
    uint64_t rsi14;
    uint64_t rax15;
    uint32_t eax16;
    uint64_t r9_17;
    uint64_t r11_18;
    uint32_t r8d19;
    uint32_t esi20;
    uint1_t zf21;
    uint32_t r8d22;
    unsigned char cl23;
    unsigned char* r8_24;
    uint32_t r8d25;
    uint64_t rcx26;
    uint32_t ecx27;
    uint32_t ecx28;
    uint64_t rcx29;
    uint64_t rax30;
    int32_t ecx31;
    uint32_t ecx32;
    uint64_t rcx33;

    rcx8 = rcx - 1;
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rcx8 == a_input)) & zf9)) {
        eax10 = static_cast<int32_t>(r9 + 8);
    }
    r10d11 = r8d << 8;
    cf12 = r8d < 0x1000000;
    if (!cf12) {
        r10d11 = r8d;
    }
    if (!cf12) {
        eax10 = *reinterpret_cast<int32_t*>(&r9);
    }
    *reinterpret_cast<uint32_t*>(&r10_13) = r10d11 >> 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_13) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<uint32_t*>(&rsi14) = esi - ((reinterpret_cast<uint32_t>(-*reinterpret_cast<int32_t*>(&rcx8)) | 31) + eax10 + *reinterpret_cast<int32_t*>(0x25f + r10_13 * 4));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(a_input);
    rax15 = rdi >> 52;
    eax16 = *reinterpret_cast<uint32_t*>(&rax15) & 0x7ff;
    r9_17 = rdi << 9 & 0x1ffffffffffffe00;
    r11_18 = rsi14 << 9 & 0x1ffffffffffffe00;
    r8d19 = eax16 - reinterpret_cast<uint32_t>(a_input);
    if (reinterpret_cast<int32_t>(eax16) <= reinterpret_cast<int32_t>(a_input)) {
        if (reinterpret_cast<int32_t>(r8d19) < reinterpret_cast<int32_t>(a_input)) {
            if (1) {
                esi20 = reinterpret_cast<uint32_t>(a_input);
                zf21 = reinterpret_cast<uint1_t>(eax16 == a_input);
                *reinterpret_cast<unsigned char*>(&esi20) = zf21;
                if (!zf21) {
                    r9_17 = r9_17 | 0x2000000000000000;
                }
                r8d22 = r8d19 + esi20;
                if (r8d22 != a_input) 
                    goto addr_46a_14;
            } else {
                if (!reinterpret_cast<int1_t>(r11_18 == a_input)) {
                    addr_2df_16:
                    cl23 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdi & 0x7ff8000000000000) == 0x7ff0000000000000)));
                    if (!reinterpret_cast<int1_t>(cl23 == a_input) || !1) {
                        r8_24 = g33d;
                        *r8_24 = reinterpret_cast<unsigned char>(*r8_24 | 16);
                        goto addr_341_18;
                    }
                } else {
                    goto addr_43c_20;
                }
            }
        } else {
            if (eax16 == a_input) {
                addr_42b_22:
                goto addr_43c_20;
            } else {
                if (eax16 != 0x7ff) {
                    goto addr_41e_25;
                } else {
                    if (!reinterpret_cast<int1_t>((r11_18 | r9_17) == a_input)) 
                        goto addr_2df_16;
                    goto addr_43c_20;
                }
            }
        }
    } else {
        if (eax16 != 0x7ff) {
            if (a_input) {
                r11_18 = r11_18 | 0x2000000000000000;
            }
            r8d25 = r8d19 - 1;
            if (r8d25 != a_input) {
                if (reinterpret_cast<int32_t>(r8d25) > reinterpret_cast<int32_t>(63)) {
                    *reinterpret_cast<int32_t*>(&rcx26) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx26) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r11_18 == a_input));
                } else {
                    ecx27 = r8d25;
                    *reinterpret_cast<signed char*>(&r8d25) = -*reinterpret_cast<signed char*>(&r8d25);
                    ecx28 = r8d25;
                    *reinterpret_cast<int32_t*>(&rcx29) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx29) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r11_18 << *reinterpret_cast<unsigned char*>(&ecx28) == a_input));
                    rcx26 = rcx29 | r11_18 >> *reinterpret_cast<signed char*>(&ecx27);
                }
                r11_18 = rcx26;
                goto addr_406_36;
            }
        } else {
            if (r9_17 == a_input) 
                goto addr_43c_20; else 
                goto addr_2df_16;
        }
    }
    addr_48f_38:
    addr_406_36:
    r9_17 = (r9_17 | 0x2000000000000000) + r11_18;
    if (reinterpret_cast<int64_t>(r9_17 + r9_17) < reinterpret_cast<int64_t>(a_input)) {
    }
    addr_41e_25:
    goto addr_42b_22;
    addr_46a_14:
    if (reinterpret_cast<int32_t>(r8d22) < reinterpret_cast<int32_t>(0xffffffc1)) {
        *reinterpret_cast<int32_t*>(&rax30) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax30) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<unsigned char*>(&rax30) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r9_17 == a_input));
        r9_17 = rax30;
        goto addr_406_36;
    } else {
        ecx31 = reinterpret_cast<int32_t>(-r8d22);
        ecx32 = r8d22;
        *reinterpret_cast<int32_t*>(&rcx33) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<unsigned char*>(&rcx33) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r9_17 << *reinterpret_cast<unsigned char*>(&ecx32) == a_input));
        r9_17 = rcx33 | r9_17 >> *reinterpret_cast<signed char*>(&ecx31);
        goto addr_48f_38;
    }
    addr_341_18:
    if (rsi14 + rsi14 < 0xffe0000000000001) {
    }
    if (!reinterpret_cast<int1_t>(cl23 == a_input)) {
    }
    if (a_input) {
    }
    addr_43c_20:
    goto a7;
}

unsigned char* g570 = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

int32_t* g680 = reinterpret_cast<int32_t*>(0xffffffffffffb948);

unsigned char* g5db = reinterpret_cast<unsigned char*>(0xc68948c6eb100880);

uint64_t subFloat64Sigs(uint64_t rdi, uint64_t rsi, int32_t edx) {
    uint64_t rbx4;
    uint32_t ebx5;
    uint64_t r9_6;
    uint32_t r9d7;
    uint64_t r11_8;
    uint64_t rax9;
    uint32_t r8d10;
    uint64_t rsi11;
    uint32_t ecx12;
    uint1_t zf13;
    uint32_t r8d14;
    uint64_t rcx15;
    int32_t ecx16;
    uint32_t ecx17;
    uint64_t rcx18;
    unsigned char cl19;
    unsigned char dl20;
    unsigned char* r8_21;
    uint64_t rdx22;
    uint64_t rax23;
    int32_t* rax24;
    unsigned char* rax25;
    uint64_t rsi26;
    uint32_t ecx27;
    uint1_t zf28;
    uint32_t r8d29;
    uint64_t rax30;
    uint32_t ecx31;
    uint32_t ecx32;
    uint64_t rcx33;
    uint64_t r8_34;
    uint64_t rdi35;
    uint64_t rax36;
    uint64_t rsi37;
    uint32_t edi38;
    int1_t cf39;

    rbx4 = rdi >> 52;
    ebx5 = *reinterpret_cast<uint32_t*>(&rbx4) & 0x7ff;
    r9_6 = rsi >> 52;
    r9d7 = *reinterpret_cast<uint32_t*>(&r9_6) & 0x7ff;
    r11_8 = rdi << 10 & 0x3ffffffffffffc00;
    rax9 = rsi << 10 & 0x3ffffffffffffc00;
    r8d10 = ebx5 - r9d7;
    if (reinterpret_cast<int32_t>(ebx5) <= reinterpret_cast<int32_t>(r9d7)) {
        if (reinterpret_cast<int32_t>(r8d10) < reinterpret_cast<int32_t>(a_input)) {
            if (r9d7 != 0x7ff) {
                rsi11 = r11_8 | 0x4000000000000000;
                ecx12 = reinterpret_cast<uint32_t>(a_input);
                zf13 = reinterpret_cast<uint1_t>(ebx5 == a_input);
                *reinterpret_cast<unsigned char*>(&ecx12) = zf13;
                if (zf13) {
                    rsi11 = r11_8;
                }
                r8d14 = r8d10 + ecx12;
                if (r8d14 != a_input) {
                    if (reinterpret_cast<int32_t>(r8d14) < reinterpret_cast<int32_t>(0xffffffc1)) {
                        *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(a_input);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(a_input);
                        *reinterpret_cast<unsigned char*>(&rcx15) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi11 == a_input));
                    } else {
                        ecx16 = reinterpret_cast<int32_t>(-r8d14);
                        ecx17 = r8d14;
                        *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(a_input);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(a_input);
                        *reinterpret_cast<unsigned char*>(&rcx18) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi11 << *reinterpret_cast<unsigned char*>(&ecx17) == a_input));
                        rcx15 = rcx18 | rsi11 >> *reinterpret_cast<signed char*>(&ecx16);
                    }
                    rsi11 = rcx15;
                }
                rax9 = rax9 | 0x4000000000000000;
                r11_8 = rsi11;
                goto addr_6e6_12;
            } else {
                if (!reinterpret_cast<int1_t>(rax9 == a_input)) {
                    addr_512_14:
                    cl19 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdi & 0x7ff8000000000000) == 0x7ff0000000000000)));
                    dl20 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
                    if (!reinterpret_cast<int1_t>(cl19 == a_input) || dl20 != a_input) {
                        r8_21 = g570;
                        *r8_21 = reinterpret_cast<unsigned char>(*r8_21 | 16);
                    }
                } else {
                    *reinterpret_cast<int32_t*>(&rdx22) = ~edx;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(a_input);
                    rdi = 0x7ff0000000000000 | rdx22 << 63;
                    goto addr_5a6_17;
                }
            }
        } else {
            if (ebx5 == a_input) {
                goto addr_667_20;
            }
            if (ebx5 != 0x7ff) {
                addr_667_20:
                if (rax9 >= r11_8) {
                    if (rax9 > r11_8) {
                        addr_6e6_12:
                        rax23 = rax9 - r11_8;
                        goto addr_6ec_23;
                    } else {
                        rax24 = g680;
                        *reinterpret_cast<int32_t*>(&rdi) = reinterpret_cast<int32_t>(a_input);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi) + 4) = reinterpret_cast<int32_t>(a_input);
                        if (*rax24 == 3) {
                            rdi = 0x8000000000000000;
                        }
                        goto addr_5a6_17;
                    }
                } else {
                    addr_66c_27:
                    rax23 = r11_8 - rax9;
                    goto addr_6ec_23;
                }
            } else {
                if (!reinterpret_cast<int1_t>((rax9 | r11_8) == a_input)) 
                    goto addr_512_14;
                rdi = 0x7fffffffffffffff;
                rax25 = g5db;
                *rax25 = reinterpret_cast<unsigned char>(*rax25 | 16);
                goto addr_5a6_17;
            }
        }
    } else {
        if (ebx5 != 0x7ff) {
            rsi26 = rax9 | 0x4000000000000000;
            ecx27 = reinterpret_cast<uint32_t>(a_input);
            zf28 = reinterpret_cast<uint1_t>(r9d7 == a_input);
            *reinterpret_cast<unsigned char*>(&ecx27) = zf28;
            if (zf28) {
                rsi26 = rax9;
            }
            r8d29 = r8d10 - ecx27;
            if (r8d29 != a_input) {
                if (reinterpret_cast<int32_t>(r8d29) > reinterpret_cast<int32_t>(63)) {
                    *reinterpret_cast<int32_t*>(&rax30) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax30) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rax30) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi26 == a_input));
                    rsi26 = rax30;
                } else {
                    ecx31 = r8d29;
                    *reinterpret_cast<signed char*>(&r8d29) = -*reinterpret_cast<signed char*>(&r8d29);
                    ecx32 = r8d29;
                    *reinterpret_cast<int32_t*>(&rcx33) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx33) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi26 << *reinterpret_cast<unsigned char*>(&ecx32) == a_input));
                    rsi26 = rcx33 | rsi26 >> *reinterpret_cast<signed char*>(&ecx31);
                }
            }
            r11_8 = r11_8 | 0x4000000000000000;
            rax9 = rsi26;
            goto addr_66c_27;
        } else {
            if (r11_8 == a_input) 
                goto addr_5a6_17; else 
                goto addr_512_14;
        }
    }
    r8_34 = rsi | 0x8000000000000;
    rdi35 = rdi | 0x8000000000000;
    rax36 = r8_34;
    if (rsi + rsi < 0xffe0000000000001) {
        rax36 = rdi35;
    }
    if (!reinterpret_cast<int1_t>(cl19 == a_input)) {
        rax36 = rdi35;
    }
    if (!reinterpret_cast<int1_t>(dl20 == a_input)) {
        rax36 = r8_34;
    }
    rdi = rax36;
    addr_5a6_17:
    return rdi;
    addr_6ec_23:
    rsi37 = rax23 >> 32;
    if (rsi37 == a_input) {
        *reinterpret_cast<uint32_t*>(&rsi37) = *reinterpret_cast<uint32_t*>(&rax23);
    }
    edi38 = *reinterpret_cast<uint32_t*>(&rsi37) << 16;
    if (*reinterpret_cast<uint32_t*>(&rsi37) >= 0x10000) {
        edi38 = *reinterpret_cast<uint32_t*>(&rsi37);
    }
    cf39 = edi38 < 0x1000000;
    if (!cf39) {
    }
    if (!cf39) {
    }
    if (!a_input) {
    }
    return a_input;
}

void submain() {
    fun_7ac(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 24 + 8);
}

