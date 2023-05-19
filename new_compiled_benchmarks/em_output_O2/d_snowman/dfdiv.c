
uint176_t g79c = 0x4c00000000258b4c;

void a_input(int64_t rdi, int32_t esi);

int64_t fun_7bd(int64_t rdi, int64_t rsi);

int32_t fun_7de();

void fun_7f2(int32_t* rdi, int32_t* rsi);

void fun_82f(int64_t rdi, int64_t rsi);

void fun_770(int32_t* rdi, int32_t* rsi) {
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
    r15_4 = *reinterpret_cast<int64_t**>(&g79c);
    r12_5 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g79c) + 7);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi7 = r15_4[rbp6];
        rsi8 = r12_5[rbp6];
        fun_7bd(rdi7, rsi8);
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        ++rbp6;
    } while (rbp6 != 22);
    rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp3) + 8);
    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
    eax11 = fun_7de();
    if (eax11 != a_input) {
        rdi9 = reinterpret_cast<int32_t*>(0x7e9);
        *reinterpret_cast<int32_t*>(&rsi10) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_7f2(0x7e9, rsi10);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi9 = *rsi10;
    __asm__("subsd xmm0, [r14]");
    fun_82f(0x828, rsi10 + 1);
    goto v12;
}

int64_t fun_7bd(int64_t rdi, int64_t rsi) {
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
        fun_7bd(rdi4, rsi6);
    }
    rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
    eax10 = fun_7de();
    if (eax10 != a_input) {
        rdi8 = reinterpret_cast<int32_t*>(0x7e9);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_7f2(0x7e9, rsi9);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r14]");
    fun_82f(0x828, rsi9 + 1);
    goto v11;
}

int32_t g7e9 = 0xc031c689;

int32_t fun_7de() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != a_input) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_7f2(0x7e9, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g7e9 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_82f(0x828, rsi2 + 1);
    goto v4;
}

void fun_7f2(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_82f(0x828, rsi + 1);
    goto v3;
}

void fun_82f(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_75c(int32_t* rdi) {
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
        rdi = reinterpret_cast<int32_t*>(0x767);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_770(0x767, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    r15_6 = *reinterpret_cast<int64_t**>(&g79c);
    r12_7 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g79c) + 7);
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi9 = r15_6[rbp8];
        rsi10 = r12_7[rbp8];
        fun_7bd(rdi9, rsi10);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
        ++rbp8;
    } while (rbp8 != 22);
    rdi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) + 8);
    *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
    eax13 = fun_7de();
    if (eax13 != a_input) {
        rdi11 = reinterpret_cast<int32_t*>(0x7e9);
        *reinterpret_cast<int32_t*>(&rsi12) = eax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_7f2(0x7e9, rsi12);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi11 = *rsi12;
    __asm__("subsd xmm0, [r14]");
    fun_82f(0x828, rsi12 + 1);
    goto v14;
}

void a_input(int64_t rdi, int32_t esi) {
    if (esi != a_input) {
        if (esi > 63) {
        }
    }
}

uint32_t* g25e = reinterpret_cast<uint32_t*>(0x4c01c98341098b45);

unsigned char* g231 = reinterpret_cast<unsigned char*>(0x483fe0c148090a80);

uint32_t* g26c = reinterpret_cast<uint32_t*>(0x4cc93102eb0a8945);

uint32_t* g2e0 = reinterpret_cast<uint32_t*>(0x3104c983410e8b44);

uint64_t fun_1d4(uint32_t edi, int32_t esi, uint64_t rdx) {
    uint64_t rsi2;
    uint32_t ecx4;
    uint32_t* r9_5;
    uint32_t r9d6;
    unsigned char* rdx7;
    int64_t rax8;
    int64_t r8_9;
    uint64_t r8_10;
    uint64_t rsi11;
    uint64_t rax12;
    uint32_t* r10_13;
    uint32_t ecx14;
    uint64_t rcx15;
    int32_t ecx16;
    uint64_t rcx17;
    uint32_t* rsi18;

    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rsi2)) < 0x7fd) {
        addr_24d_3:
        ecx4 = *reinterpret_cast<uint32_t*>(&rdx) & 0x3ff;
        if (ecx4 == a_input) {
            ecx4 = reinterpret_cast<uint32_t>(a_input);
        } else {
            r9_5 = g25e;
            r9d6 = *r9_5;
            goto addr_261_6;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(&rsi2) > 0x7fd || *reinterpret_cast<int32_t*>(&rsi2) == 0x7fd && reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(a_input) + rdx) < reinterpret_cast<int64_t>(a_input)) {
            rdx7 = g231;
            *rdx7 = reinterpret_cast<unsigned char>(*rdx7 | 9);
            return 0x7ff0000000000000 + (1 - (rax8 << 63));
        }
        if (*reinterpret_cast<int32_t*>(&rsi2) < reinterpret_cast<int32_t>(a_input)) 
            goto addr_2a5_10; else 
            goto addr_24d_3;
    }
    addr_273_11:
    *reinterpret_cast<int32_t*>(&r8_9) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<unsigned char*>(&r8_9) = reinterpret_cast<uint1_t>((edi | ecx4 ^ 0x200) == a_input);
    r8_10 = reinterpret_cast<uint64_t>(~r8_9) & rdx + reinterpret_cast<uint64_t>(a_input) >> 10;
    rsi11 = rsi2 << 52;
    if (r8_10 == a_input) {
        rsi11 = r8_10;
    }
    return (rax12 << 63 | r8_10) + rsi11;
    addr_261_6:
    r10_13 = g26c;
    *r10_13 = r9d6 | 1;
    goto addr_273_11;
    addr_2a5_10:
    ecx14 = reinterpret_cast<uint32_t>(-*reinterpret_cast<int32_t*>(&rsi2));
    if (ecx14 > 63) {
        *reinterpret_cast<uint32_t*>(&rcx15) = reinterpret_cast<uint32_t>(a_input);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<unsigned char*>(&rcx15) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx == a_input));
    } else {
        ecx16 = *reinterpret_cast<int32_t*>(&rsi2);
        *reinterpret_cast<int32_t*>(&rcx17) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<unsigned char*>(&rcx17) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx << *reinterpret_cast<unsigned char*>(&ecx16) == a_input));
        rcx15 = rcx17 | rdx >> *reinterpret_cast<signed char*>(&ecx14);
    }
    rdx = rcx15;
    ecx4 = *reinterpret_cast<uint32_t*>(&rcx15) & 0x3ff;
    if (ecx4 != a_input) 
        goto addr_2d9_17;
    ecx4 = reinterpret_cast<uint32_t>(a_input);
    *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(a_input);
    goto addr_273_11;
    addr_2d9_17:
    rsi18 = g2e0;
    r9d6 = *rsi18 | 4;
    *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(a_input);
    goto addr_261_6;
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

uint32_t* g5d6 = reinterpret_cast<uint32_t*>(0xaf840f118b);

unsigned char* g3fb = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

unsigned char* g367 = reinterpret_cast<unsigned char*>(0xb848100880);

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
    uint64_t rax27;
    uint64_t r8_28;
    uint64_t r11_29;
    uint64_t r10_30;
    uint64_t r8_31;
    uint64_t r14_32;
    uint64_t r15_33;
    uint64_t rcx34;
    uint64_t rcx35;
    uint64_t rax36;
    uint64_t r11_37;
    uint64_t r12_38;
    uint64_t r13_39;
    uint64_t rbp40;
    uint64_t rax41;
    uint64_t rdx42;
    uint1_t cf43;
    uint64_t rdx44;
    uint64_t r9_45;
    uint64_t tmp64_46;
    uint1_t cf47;
    uint64_t rdx48;
    uint64_t rdx49;
    uint64_t rcx50;
    int64_t r9_51;
    uint64_t r9_52;
    uint64_t r14_53;
    uint64_t tmp64_54;
    uint64_t rbx55;
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
        if (r8d9 == a_input) {
            if (r9_7 == a_input) {
                *reinterpret_cast<uint32_t*>(&rcx11) = *reinterpret_cast<uint32_t*>(&rcx5) & 0x7ff;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(a_input);
                rcx12 = g5d6;
                if ((rcx11 | r10_4) == a_input) {
                    *rcx12 = *rcx12 | 16;
                    rax13 = 0x7fffffffffffffff;
                } else {
                    *rcx12 = *rcx12 | 2;
                    goto addr_5e3_7;
                }
            } else {
                ecx14 = reinterpret_cast<uint32_t>(a_input);
                r8_15 = r9_7 >> 32;
                zf16 = reinterpret_cast<uint1_t>(r8_15 == a_input);
                if (zf16) {
                    *reinterpret_cast<uint32_t*>(&r8_15) = *reinterpret_cast<uint32_t*>(&rsi);
                }
                *reinterpret_cast<unsigned char*>(&ecx14) = zf16;
                esi17 = *reinterpret_cast<uint32_t*>(&r8_15) << 16;
                r11d18 = reinterpret_cast<uint32_t>(a_input);
                cf19 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r8_15) < 0x10000);
                if (!cf19) {
                    esi17 = *reinterpret_cast<uint32_t*>(&r8_15);
                }
                *reinterpret_cast<unsigned char*>(&r11d18) = cf19;
                *reinterpret_cast<uint32_t*>(&r11_20) = r11d18 << 4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_20) + 4) = reinterpret_cast<int32_t>(a_input);
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
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = reinterpret_cast<int32_t>(a_input);
                *reinterpret_cast<uint32_t*>(&rbx25) = (ebx21 | ecx14 << 5) + *reinterpret_cast<int32_t*>(0x490 + r8_24 * 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx25) + 4) = reinterpret_cast<int32_t>(a_input);
                ecx26 = static_cast<int32_t>(rbx25 - 11);
                r9_7 = r9_7 << *reinterpret_cast<unsigned char*>(&ecx26);
                r8d9 = 12 - *reinterpret_cast<uint32_t*>(&rbx25);
                goto addr_4a5_17;
            }
        } else {
            if (r8d9 != 0x7ff) {
                addr_4a5_17:
                if (!reinterpret_cast<int1_t>(eax6 == a_input)) {
                    addr_511_19:
                    *reinterpret_cast<uint32_t*>(&rax27) = eax6 - r8d9;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = reinterpret_cast<int32_t>(a_input);
                    r8_28 = 0x4000000000000000 | r10_4 << 10;
                    r11_29 = r9_7 << 11;
                    r10_30 = 0x8000000000000000 | r11_29;
                    r8_31 = r8_28 >> static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10_30 <= r8_28 + r8_28));
                    if (r10_30 > r8_31) {
                        r14_32 = r10_30 >> 32;
                        r15_33 = r10_30 & 0xffffffff00000000;
                        rcx34 = 0xffffffff00000000;
                        if (r15_33 > r8_31) {
                            if (r8_31 >> 32 == a_input) {
                                *reinterpret_cast<uint32_t*>(&rcx35) = *reinterpret_cast<uint32_t*>(&r8_31) / *reinterpret_cast<uint32_t*>(&r14_32);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(a_input);
                            } else {
                                rcx35 = r8_31 / r14_32;
                            }
                            rcx34 = rcx35 << 32;
                        }
                        rax36 = rcx34 >> 32;
                        *reinterpret_cast<uint32_t*>(&r11_37) = *reinterpret_cast<uint32_t*>(&r11_29) & 0xfffff800;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_37) + 4) = reinterpret_cast<int32_t>(a_input);
                        r12_38 = rax36 * r11_37;
                        r13_39 = (r12_38 >> 32) + rax36 * r14_32;
                        rbp40 = rcx34 * r10_30;
                        rax41 = -rbp40;
                        rdx42 = r8_31 - (r13_39 + reinterpret_cast<uint1_t>(r8_31 < r13_39 + reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rbp40 == a_input))));
                        cf43 = reinterpret_cast<uint1_t>(rdx42 < reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbp40 < r12_38 << 32)));
                        rdx44 = rdx42 - (reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf43));
                        if (reinterpret_cast<int64_t>(rdx44) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf43))) {
                            r9_45 = r9_7 << 43;
                            do {
                                rcx34 = rcx34 + 0xffffffff00000000;
                                tmp64_46 = rax41 + r9_45;
                                cf47 = reinterpret_cast<uint1_t>(tmp64_46 < rax41);
                                rax41 = tmp64_46;
                                rdx44 = rdx44 + r14_32 + cf47;
                            } while (reinterpret_cast<int64_t>(rdx44) < reinterpret_cast<int64_t>(a_input));
                        }
                        __asm__("shrd rax, rdx, 0x20");
                        *reinterpret_cast<uint32_t*>(&rdx48) = 0xffffffff;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx48) + 4) = reinterpret_cast<int32_t>(a_input);
                        if (r15_33 > rax41) {
                            if (rax41 >> 32 == a_input) {
                                *reinterpret_cast<uint32_t*>(&rdx48) = *reinterpret_cast<uint32_t*>(&rax41) / *reinterpret_cast<uint32_t*>(&r14_32);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx48) + 4) = reinterpret_cast<int32_t>(a_input);
                            } else {
                                rdx48 = rax41 / r14_32;
                            }
                        }
                        rdx49 = rdx48 | rcx34;
                        *reinterpret_cast<uint32_t*>(&rax27) = *reinterpret_cast<uint32_t*>(&rdx49) & 0x1ff;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = reinterpret_cast<int32_t>(a_input);
                        if (*reinterpret_cast<uint32_t*>(&rax27) <= 2) {
                            rcx50 = rdx49 >> 32;
                            *reinterpret_cast<uint32_t*>(&r9_51) = *reinterpret_cast<uint32_t*>(&rdx49);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_51) + 4) = reinterpret_cast<int32_t>(a_input);
                            r9_52 = r9_51 * r14_32;
                            *reinterpret_cast<int32_t*>(&r14_53) = reinterpret_cast<int32_t>(a_input);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_53) + 4) = reinterpret_cast<int32_t>(a_input);
                            tmp64_54 = r9_52 + r11_37 * rcx50;
                            if (tmp64_54 < r9_52) {
                                r14_53 = 0xffffffff00000000;
                            }
                            rbx55 = rdx49 * r10_30;
                            rax27 = -rbx55;
                            r8_56 = r8_31 - (reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r8_31 < reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rbx55 == a_input)))))) - ((tmp64_54 >> 32) + rcx50 * r14_32) + r14_53;
                            cf57 = reinterpret_cast<uint1_t>(r8_56 < reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbx55 < tmp64_54 << 32)));
                            r8_58 = r8_56 - (reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf57));
                            if (reinterpret_cast<int64_t>(r8_58) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf57))) {
                                do {
                                    tmp64_59 = rax27 + r10_30;
                                    cf60 = reinterpret_cast<uint1_t>(tmp64_59 < rax27);
                                    rax27 = tmp64_59;
                                    r8_58 = r8_58 + reinterpret_cast<uint64_t>(a_input) + cf60;
                                } while (reinterpret_cast<int64_t>(r8_58) < reinterpret_cast<int64_t>(a_input));
                            }
                            goto addr_717_39;
                        }
                    }
                } else {
                    if (r10_4 == a_input) {
                        addr_59e_41:
                        rax13 = rdi10 & 0x8000000000000000;
                    } else {
                        eax61 = reinterpret_cast<uint32_t>(a_input);
                        rcx62 = r10_4 >> 32;
                        zf63 = reinterpret_cast<uint1_t>(rcx62 == a_input);
                        if (zf63) {
                            *reinterpret_cast<uint32_t*>(&rcx62) = *reinterpret_cast<uint32_t*>(&rdx3);
                        }
                        *reinterpret_cast<unsigned char*>(&eax61) = zf63;
                        edx64 = *reinterpret_cast<uint32_t*>(&rcx62) << 16;
                        esi65 = reinterpret_cast<uint32_t>(a_input);
                        cf66 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx62) < 0x10000);
                        if (!cf66) {
                            edx64 = *reinterpret_cast<uint32_t*>(&rcx62);
                        }
                        *reinterpret_cast<unsigned char*>(&esi65) = cf66;
                        *reinterpret_cast<uint32_t*>(&rsi67) = esi65 << 4;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi67) + 4) = reinterpret_cast<int32_t>(a_input);
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
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx71) + 4) = reinterpret_cast<int32_t>(a_input);
                        *reinterpret_cast<uint32_t*>(&r11_72) = (r11d68 | eax61 << 5) + *reinterpret_cast<int32_t*>(0x4fb + rcx71 * 4);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_72) + 4) = reinterpret_cast<int32_t>(a_input);
                        ecx73 = static_cast<int32_t>(r11_72 - 11);
                        r10_4 = r10_4 << *reinterpret_cast<unsigned char*>(&ecx73);
                        eax6 = 12 - *reinterpret_cast<uint32_t*>(&r11_72);
                        goto addr_511_19;
                    }
                }
            } else {
                if (r9_7 == a_input) 
                    goto addr_59e_41; else 
                    goto addr_39b_52;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(r10_4 == a_input)) 
            goto addr_39b_52;
        if (r8d9 != 0x7ff) 
            goto addr_5b0_55; else 
            goto addr_35b_56;
    }
    addr_5f3_57:
    return rax13;
    addr_5e3_7:
    rax13 = 0x7ff0000000000000 | rdi10 & 0x8000000000000000;
    goto addr_5f3_57;
    addr_717_39:
    return rax27;
    addr_5b0_55:
    goto addr_5e3_7;
    addr_35b_56:
    if (!reinterpret_cast<int1_t>(r9_7 == a_input)) {
        addr_39b_52:
        cl74 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx3 << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdx3 & 0x7ff8000000000000) == 0x7ff0000000000000)));
        dil75 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
        if (!reinterpret_cast<int1_t>(cl74 == a_input) || dil75 != a_input) {
            r8_76 = g3fb;
            *r8_76 = reinterpret_cast<unsigned char>(*r8_76 | 16);
        }
    } else {
        rax77 = g367;
        *rax77 = reinterpret_cast<unsigned char>(*rax77 | 16);
        rax13 = 0x7fffffffffffffff;
        goto addr_5f3_57;
    }
    r8_78 = rsi | 0x8000000000000;
    rdx79 = rdx3 | 0x8000000000000;
    rax13 = r8_78;
    if (rsi + rsi < 0xffe0000000000001) {
        rax13 = rdx79;
    }
    if (!reinterpret_cast<int1_t>(cl74 == a_input)) {
        rax13 = rdx79;
    }
    if (!reinterpret_cast<int1_t>(dil75 == a_input)) {
        rax13 = r8_78;
    }
    goto addr_5f3_57;
}

void submain() {
    fun_75c(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 24 + 8);
}

