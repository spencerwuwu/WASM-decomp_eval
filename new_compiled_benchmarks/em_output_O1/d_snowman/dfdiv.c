
uint176_t g78c = 0x4c00000000258b4c;

void a_input(int64_t rdi, int32_t esi);

int64_t fun_7ad(int64_t rdi, int64_t rsi);

int32_t fun_7ce();

void fun_7e2(int32_t* rdi, int32_t* rsi);

void fun_81f(int64_t rdi, int64_t rsi);

void fun_760(int32_t* rdi, int32_t* rsi) {
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
    r15_4 = *reinterpret_cast<int64_t**>(&g78c);
    r12_5 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g78c) + 7);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi7 = r15_4[rbp6];
        rsi8 = r12_5[rbp6];
        fun_7ad(rdi7, rsi8);
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        ++rbp6;
    } while (rbp6 != 22);
    rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp3) + 8);
    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
    eax11 = fun_7ce();
    if (eax11 != a_input) {
        rdi9 = reinterpret_cast<int32_t*>(0x7d9);
        *reinterpret_cast<int32_t*>(&rsi10) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_7e2(0x7d9, rsi10);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi9 = *rsi10;
    __asm__("subsd xmm0, [r14]");
    fun_81f(0x818, rsi10 + 1);
    goto v12;
}

int64_t fun_7ad(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rdi4;
    int64_t* r15_5;
    int64_t rsi6;
    int64_t* r12_7;
    int32_t* rdi8;
    int32_t* rsi9;
    int32_t eax10;
    int64_t v11;

    while (++rbp3, rbp3 != 22) {
        rdi4 = r15_5[rbp3];
        rsi6 = r12_7[rbp3];
        fun_7ad(rdi4, rsi6);
    }
    rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
    eax10 = fun_7ce();
    if (eax10 != a_input) {
        rdi8 = reinterpret_cast<int32_t*>(0x7d9);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_7e2(0x7d9, rsi9);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r14]");
    fun_81f(0x818, rsi9 + 1);
    goto v11;
}

int32_t g7d9 = 0xc031c689;

int32_t fun_7ce() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != a_input) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_7e2(0x7d9, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g7d9 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_81f(0x818, rsi2 + 1);
    goto v4;
}

void fun_7e2(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_81f(0x818, rsi + 1);
    goto v3;
}

void fun_81f(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_74c(int32_t* rdi) {
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
        rdi = reinterpret_cast<int32_t*>(0x757);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_760(0x757, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    r15_6 = *reinterpret_cast<int64_t**>(&g78c);
    r12_7 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g78c) + 7);
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi9 = r15_6[rbp8];
        rsi10 = r12_7[rbp8];
        fun_7ad(rdi9, rsi10);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
        ++rbp8;
    } while (rbp8 != 22);
    rdi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) + 8);
    *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
    eax13 = fun_7ce();
    if (eax13 != a_input) {
        rdi11 = reinterpret_cast<int32_t*>(0x7d9);
        *reinterpret_cast<int32_t*>(&rsi12) = eax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_7e2(0x7d9, rsi12);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi11 = *rsi12;
    __asm__("subsd xmm0, [r14]");
    fun_81f(0x818, rsi12 + 1);
    goto v14;
}

void a_input(int64_t rdi, int32_t esi) {
    if (esi != a_input) {
        if (esi > 63) {
        }
    }
}

unsigned char* g23b = reinterpret_cast<unsigned char*>(0x483fe0c148090a80);

unsigned char* g298 = reinterpret_cast<unsigned char*>(0xc9314503eb040980);

unsigned char* g2ac = reinterpret_cast<unsigned char*>(0xc148c2014c010980);

uint64_t fun_1d4(uint32_t edi, int32_t esi, uint64_t rdx) {
    uint64_t rsi2;
    uint32_t r9d4;
    unsigned char* rdx5;
    int64_t rax6;
    uint64_t rcx7;
    int32_t ecx8;
    int32_t ecx9;
    uint64_t rcx10;
    unsigned char* rcx11;
    unsigned char* rcx12;
    int64_t rcx13;
    uint64_t rcx14;
    uint64_t rsi15;
    uint64_t rax16;

    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    r9d4 = *reinterpret_cast<uint32_t*>(&rdx) & 0x3ff;
    if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rsi2)) >= 0x7fd) {
        if (*reinterpret_cast<int32_t*>(&rsi2) > 0x7fd || *reinterpret_cast<int32_t*>(&rsi2) == 0x7fd && reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(a_input) + rdx) < reinterpret_cast<int64_t>(a_input)) {
            rdx5 = g23b;
            *rdx5 = reinterpret_cast<unsigned char>(*rdx5 | 9);
            return 0x7ff0000000000000 + (1 - (rax6 << 63));
        } else {
            if (*reinterpret_cast<int32_t*>(&rsi2) < reinterpret_cast<int32_t>(a_input)) {
                if (*reinterpret_cast<int32_t*>(&rsi2) < -63) {
                    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx7) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx == a_input));
                } else {
                    ecx8 = *reinterpret_cast<int32_t*>(&rsi2);
                    ecx9 = *reinterpret_cast<int32_t*>(&rsi2);
                    *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx10) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx << *reinterpret_cast<unsigned char*>(&ecx9) == a_input));
                    rcx7 = rcx10 | rdx >> -*reinterpret_cast<signed char*>(&ecx8);
                }
                rdx = rcx7;
                *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>(a_input);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(a_input);
                r9d4 = *reinterpret_cast<uint32_t*>(&rdx) & 0x3ff;
                if (r9d4 == a_input) {
                    r9d4 = reinterpret_cast<uint32_t>(a_input);
                } else {
                    rcx11 = g298;
                    *rcx11 = reinterpret_cast<unsigned char>(*rcx11 | 4);
                }
            }
        }
    }
    if (r9d4 != a_input) {
        rcx12 = g2ac;
        *rcx12 = reinterpret_cast<unsigned char>(*rcx12 | 1);
    }
    *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<unsigned char*>(&rcx13) = reinterpret_cast<uint1_t>((edi | r9d4 ^ 0x200) == a_input);
    rcx14 = reinterpret_cast<uint64_t>(~rcx13) & rdx + reinterpret_cast<uint64_t>(a_input) >> 10;
    rsi15 = rsi2 << 52;
    if (rcx14 == a_input) {
        rsi15 = rcx14;
    }
    return (rax16 << 63 | rcx14) + rsi15;
}

void fun_1e8() {
    goto 0x20b;
}

void fun_1ea(int32_t edi) {
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

uint32_t* g5fa = reinterpret_cast<uint32_t*>(0x104840f118b);

unsigned char* g3e9 = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

unsigned char* g358 = reinterpret_cast<unsigned char*>(0xb848100880);

uint64_t float64_div(uint64_t rdi, uint64_t rsi) {
    uint64_t rdx3;
    uint64_t r11_4;
    uint64_t rcx5;
    uint32_t r10d6;
    uint64_t r9_7;
    uint64_t rax8;
    uint32_t eax9;
    uint64_t rdi10;
    uint64_t rax11;
    uint64_t rcx12;
    uint32_t* rcx13;
    uint64_t rdx14;
    uint64_t rax15;
    uint32_t eax16;
    uint64_t rcx17;
    uint1_t zf18;
    uint32_t esi19;
    uint32_t r8d20;
    uint1_t cf21;
    int64_t r8_22;
    uint32_t ebx23;
    uint32_t ecx24;
    int1_t cf25;
    int64_t rcx26;
    int64_t rbx27;
    int32_t ecx28;
    uint64_t r8_29;
    uint64_t rbx30;
    uint64_t r11_31;
    uint64_t r8_32;
    uint64_t r14_33;
    uint64_t rax34;
    uint64_t rsi35;
    uint64_t rax36;
    int64_t r13_37;
    uint64_t r13_38;
    uint64_t rbp39;
    uint64_t r15_40;
    uint64_t rax41;
    uint64_t rdx42;
    uint1_t cf43;
    uint64_t rdx44;
    uint64_t r9_45;
    uint64_t r15_46;
    uint64_t tmp64_47;
    uint1_t cf48;
    uint64_t rdx49;
    uint32_t ecx50;
    uint64_t rsi51;
    uint1_t zf52;
    uint32_t edx53;
    uint32_t r8d54;
    uint1_t cf55;
    int64_t r8_56;
    uint32_t esi57;
    uint32_t r10d58;
    int1_t cf59;
    int64_t r10_60;
    int64_t rsi61;
    int32_t ecx62;
    uint64_t rax63;
    uint64_t r9_64;
    int64_t rbx65;
    int64_t rcx66;
    uint64_t rcx67;
    uint64_t r10_68;
    uint64_t tmp64_69;
    uint64_t r14_70;
    uint64_t r9_71;
    uint1_t cf72;
    uint64_t r9_73;
    uint64_t tmp64_74;
    uint1_t cf75;
    unsigned char cl76;
    unsigned char dil77;
    unsigned char* r8_78;
    unsigned char* rax79;
    uint64_t r8_80;
    uint64_t rdx81;

    rdx3 = rdi;
    r11_4 = rdi & 0xfffffffffffff;
    rcx5 = rdi >> 52;
    r10d6 = *reinterpret_cast<uint32_t*>(&rcx5) & 0x7ff;
    r9_7 = 0xfffffffffffff & rsi;
    rax8 = rsi >> 52;
    eax9 = *reinterpret_cast<uint32_t*>(&rax8) & 0x7ff;
    rdi10 = rsi ^ rdx3;
    if (r10d6 != 0x7ff) {
        if (eax9 == a_input) {
            if (r9_7 == a_input) {
                rax11 = 0x8000000000000000;
                *reinterpret_cast<uint32_t*>(&rcx12) = *reinterpret_cast<uint32_t*>(&rcx5) & 0x7ff;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(a_input);
                rcx13 = g5fa;
                *reinterpret_cast<uint32_t*>(&rdx14) = *rcx13;
                if ((rcx12 | r11_4) == a_input) {
                    addr_706_5:
                    *rcx13 = *reinterpret_cast<uint32_t*>(&rdx14) | 16;
                    rax15 = rax11 - 1;
                } else {
                    *rcx13 = *reinterpret_cast<uint32_t*>(&rdx14) | 2;
                    goto addr_607_7;
                }
            } else {
                eax16 = reinterpret_cast<uint32_t>(a_input);
                rcx17 = r9_7 >> 32;
                zf18 = reinterpret_cast<uint1_t>(rcx17 == a_input);
                if (zf18) {
                    *reinterpret_cast<uint32_t*>(&rcx17) = *reinterpret_cast<uint32_t*>(&rsi);
                }
                *reinterpret_cast<unsigned char*>(&eax16) = zf18;
                esi19 = *reinterpret_cast<uint32_t*>(&rcx17) << 16;
                r8d20 = reinterpret_cast<uint32_t>(a_input);
                cf21 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx17) < 0x10000);
                if (!cf21) {
                    esi19 = *reinterpret_cast<uint32_t*>(&rcx17);
                }
                *reinterpret_cast<unsigned char*>(&r8d20) = cf21;
                *reinterpret_cast<uint32_t*>(&r8_22) = r8d20 << 4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = reinterpret_cast<int32_t>(a_input);
                ebx23 = static_cast<uint32_t>(r8_22 + 8);
                ecx24 = esi19 << 8;
                cf25 = esi19 < 0x1000000;
                if (!cf25) {
                    ecx24 = esi19;
                }
                if (!cf25) {
                    ebx23 = *reinterpret_cast<uint32_t*>(&r8_22);
                }
                *reinterpret_cast<uint32_t*>(&rcx26) = ecx24 >> 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = reinterpret_cast<int32_t>(a_input);
                *reinterpret_cast<uint32_t*>(&rbx27) = (ebx23 | eax16 << 5) + *reinterpret_cast<int32_t*>(0x476 + rcx26 * 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx27) + 4) = reinterpret_cast<int32_t>(a_input);
                ecx28 = static_cast<int32_t>(rbx27 - 11);
                r9_7 = r9_7 << *reinterpret_cast<unsigned char*>(&ecx28);
                goto addr_488_17;
            }
        } else {
            if (eax9 != 0x7ff) {
                addr_488_17:
                if (!reinterpret_cast<int1_t>(r10d6 == a_input)) {
                    addr_4fa_19:
                    r8_29 = 0x4000000000000000 | r11_4 << 10;
                    rbx30 = r9_7 << 11;
                    r11_31 = 0x8000000000000000 | rbx30;
                    *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx13) = reinterpret_cast<uint1_t>(r11_31 <= r8_29 + r8_29);
                    r8_32 = r8_29 >> *reinterpret_cast<unsigned char*>(&rcx13);
                    rdx14 = 0xffffffffffffffff;
                    if (r11_31 > r8_32) {
                        r14_33 = r11_31 >> 32;
                        rax34 = r11_31 & 0xffffffff00000000;
                        rsi35 = 0xffffffff00000000;
                        if (rax34 > r8_32) {
                            rsi35 = r8_32 / r14_33 << 32;
                        }
                        rax36 = rsi35 >> 32;
                        *reinterpret_cast<uint32_t*>(&r13_37) = *reinterpret_cast<uint32_t*>(&rbx30) & 0xfffff800;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_37) + 4) = reinterpret_cast<int32_t>(a_input);
                        r13_38 = r13_37 * rax36;
                        rbp39 = (r13_38 >> 32) + rax36 * r14_33;
                        r15_40 = rsi35 * r11_31;
                        rax41 = -r15_40;
                        rdx42 = r8_32 - (rbp39 + reinterpret_cast<uint1_t>(r8_32 < rbp39 + reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r15_40 == a_input))));
                        cf43 = reinterpret_cast<uint1_t>(rdx42 < reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r15_40 < r13_38 << 32)));
                        rdx44 = rdx42 - (reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf43));
                        if (reinterpret_cast<int64_t>(rdx44) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf43))) {
                            r9_45 = r9_7 << 43;
                            r15_46 = rax34;
                            do {
                                rsi35 = rsi35 + 0xffffffff00000000;
                                tmp64_47 = rax41 + r9_45;
                                cf48 = reinterpret_cast<uint1_t>(tmp64_47 < rax41);
                                rax41 = tmp64_47;
                                rdx44 = rdx44 + r14_33 + cf48;
                            } while (reinterpret_cast<int64_t>(rdx44) < reinterpret_cast<int64_t>(a_input));
                        } else {
                            r15_46 = rax34;
                        }
                        __asm__("shrd rax, rdx, 0x20");
                        *reinterpret_cast<int32_t*>(&rdx49) = -1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx49) + 4) = reinterpret_cast<int32_t>(a_input);
                        if (r15_46 > rax41) {
                            rdx49 = rax41 / r14_33;
                        }
                        rdx14 = rdx49 | rsi35;
                        goto addr_655_29;
                    }
                } else {
                    if (r11_4 == a_input) {
                        addr_5c2_31:
                        rax15 = rdi10 & 0x8000000000000000;
                    } else {
                        ecx50 = reinterpret_cast<uint32_t>(a_input);
                        rsi51 = r11_4 >> 32;
                        zf52 = reinterpret_cast<uint1_t>(rsi51 == a_input);
                        if (zf52) {
                            *reinterpret_cast<uint32_t*>(&rsi51) = *reinterpret_cast<uint32_t*>(&rdx3);
                        }
                        *reinterpret_cast<unsigned char*>(&ecx50) = zf52;
                        edx53 = *reinterpret_cast<uint32_t*>(&rsi51) << 16;
                        r8d54 = reinterpret_cast<uint32_t>(a_input);
                        cf55 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi51) < 0x10000);
                        if (!cf55) {
                            edx53 = *reinterpret_cast<uint32_t*>(&rsi51);
                        }
                        *reinterpret_cast<unsigned char*>(&r8d54) = cf55;
                        *reinterpret_cast<uint32_t*>(&r8_56) = r8d54 << 4;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_56) + 4) = reinterpret_cast<int32_t>(a_input);
                        esi57 = static_cast<uint32_t>(r8_56 + 8);
                        r10d58 = edx53 << 8;
                        cf59 = edx53 < 0x1000000;
                        if (!cf59) {
                            r10d58 = edx53;
                        }
                        if (!cf59) {
                            esi57 = *reinterpret_cast<uint32_t*>(&r8_56);
                        }
                        *reinterpret_cast<uint32_t*>(&r10_60) = r10d58 >> 24;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_60) + 4) = reinterpret_cast<int32_t>(a_input);
                        *reinterpret_cast<uint32_t*>(&rsi61) = (esi57 | ecx50 << 5) + *reinterpret_cast<int32_t*>(0x4e5 + r10_60 * 4);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi61) + 4) = reinterpret_cast<int32_t>(a_input);
                        ecx62 = static_cast<int32_t>(rsi61 - 11);
                        r11_4 = r11_4 << *reinterpret_cast<unsigned char*>(&ecx62);
                        goto addr_4fa_19;
                    }
                }
            } else {
                if (r9_7 == a_input) 
                    goto addr_5c2_31; else 
                    goto addr_389_42;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(r11_4 == a_input)) 
            goto addr_389_42;
        if (eax9 != 0x7ff) 
            goto addr_5d4_45; else 
            goto addr_34c_46;
    }
    addr_617_47:
    return rax15;
    addr_607_7:
    rax15 = 0x7ff0000000000000 | rdi10 & 0x8000000000000000;
    goto addr_617_47;
    addr_655_29:
    *reinterpret_cast<uint32_t*>(&rax11) = *reinterpret_cast<uint32_t*>(&rdx14) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(a_input);
    if (*reinterpret_cast<uint32_t*>(&rax11) <= 2) {
        rax63 = r11_31 >> 32;
        r9_64 = rdx14 >> 32;
        *reinterpret_cast<uint32_t*>(&rbx65) = *reinterpret_cast<uint32_t*>(&rbx30) & 0xfffff800;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx65) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<uint32_t*>(&rcx66) = *reinterpret_cast<uint32_t*>(&rdx14);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx66) + 4) = reinterpret_cast<int32_t>(a_input);
        rcx67 = rcx66 * rax63;
        *reinterpret_cast<int32_t*>(&r10_68) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_68) + 4) = reinterpret_cast<int32_t>(a_input);
        tmp64_69 = rcx67 + rbx65 * r9_64;
        *reinterpret_cast<unsigned char*>(&r10_68) = reinterpret_cast<uint1_t>(tmp64_69 >= rcx67);
        r14_70 = rdx14 * r11_31;
        rax11 = -r14_70;
        r9_71 = 0x100000000 - (r8_32 - (reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r8_32 < reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r14_70 == a_input)))))) - ((tmp64_69 >> 32) + r9_64 * rax63) + (r10_68 << 32));
        cf72 = reinterpret_cast<uint1_t>(r9_71 < reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_70 < tmp64_69 << 32)));
        r9_73 = r9_71 - (reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf72));
        if (reinterpret_cast<int64_t>(r9_73) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf72))) {
            do {
                --rdx14;
                tmp64_74 = rax11 + r11_31;
                cf75 = reinterpret_cast<uint1_t>(tmp64_74 < rax11);
                rax11 = tmp64_74;
                r9_73 = r9_73 + reinterpret_cast<uint64_t>(a_input) + cf75;
            } while (reinterpret_cast<int64_t>(r9_73) < reinterpret_cast<int64_t>(a_input));
        }
        *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<unsigned char*>(&rcx13) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rax11 == a_input));
        rdx14 = rdx14 | reinterpret_cast<uint64_t>(rcx13);
    }
    goto addr_706_5;
    addr_5d4_45:
    goto addr_607_7;
    addr_34c_46:
    if (!reinterpret_cast<int1_t>(r9_7 == a_input)) {
        addr_389_42:
        cl76 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx3 << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdx3 & 0x7ff8000000000000) == 0x7ff0000000000000)));
        dil77 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
        if (!reinterpret_cast<int1_t>(cl76 == a_input) || dil77 != a_input) {
            r8_78 = g3e9;
            *r8_78 = reinterpret_cast<unsigned char>(*r8_78 | 16);
        }
    } else {
        rax79 = g358;
        *rax79 = reinterpret_cast<unsigned char>(*rax79 | 16);
        rax15 = 0x7fffffffffffffff;
        goto addr_617_47;
    }
    r8_80 = rsi | 0x8000000000000;
    rdx81 = rdx3 | 0x8000000000000;
    rax15 = r8_80;
    if (rsi + rsi < 0xffe0000000000001) {
        rax15 = rdx81;
    }
    if (!reinterpret_cast<int1_t>(cl76 == a_input)) {
        rax15 = rdx81;
    }
    if (!reinterpret_cast<int1_t>(dil77 == a_input)) {
        rax15 = r8_80;
    }
    goto addr_617_47;
}

void ullong_to_double() {
    return;
}

void submain() {
    fun_74c(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 24 + 8);
}

