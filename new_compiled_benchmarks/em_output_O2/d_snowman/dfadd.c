
uint176_t g58c = 0x4c00000000258b4c;

void a_input(int64_t rdi, int32_t esi);

int64_t fun_5ad(int64_t rdi, int64_t rsi);

int32_t fun_5ce();

void fun_5e2(int32_t* rdi, int32_t* rsi);

void fun_61f(int64_t rdi, int64_t rsi);

void fun_560(int32_t* rdi, int32_t* rsi) {
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
    r15_4 = *reinterpret_cast<int64_t**>(&g58c);
    r12_5 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g58c) + 7);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi7 = r15_4[rbp6];
        rsi8 = r12_5[rbp6];
        fun_5ad(rdi7, rsi8);
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        ++rbp6;
    } while (rbp6 != 46);
    rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp3) + 8);
    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
    eax11 = fun_5ce();
    if (eax11 != a_input) {
        rdi9 = reinterpret_cast<int32_t*>(0x5d9);
        *reinterpret_cast<int32_t*>(&rsi10) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_5e2(0x5d9, rsi10);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi9 = *rsi10;
    __asm__("subsd xmm0, [r14]");
    fun_61f(0x618, rsi10 + 1);
    goto v12;
}

int64_t fun_5ad(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rdi4;
    int64_t* r15_5;
    int64_t rsi6;
    int64_t* r12_7;
    int32_t* rdi8;
    int32_t* rsi9;
    int32_t eax10;
    int64_t v11;

    while (++rbp3, rbp3 != 46) {
        rdi4 = r15_5[rbp3];
        rsi6 = r12_7[rbp3];
        fun_5ad(rdi4, rsi6);
    }
    rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
    eax10 = fun_5ce();
    if (eax10 != a_input) {
        rdi8 = reinterpret_cast<int32_t*>(0x5d9);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_5e2(0x5d9, rsi9);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r14]");
    fun_61f(0x618, rsi9 + 1);
    goto v11;
}

int32_t g5d9 = 0xc031c689;

int32_t fun_5ce() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != a_input) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_5e2(0x5d9, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g5d9 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_61f(0x618, rsi2 + 1);
    goto v4;
}

void fun_5e2(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_61f(0x618, rsi + 1);
    goto v3;
}

void fun_61f(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_54c(int32_t* rdi) {
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
        rdi = reinterpret_cast<int32_t*>(0x557);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_560(0x557, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    r15_6 = *reinterpret_cast<int64_t**>(&g58c);
    r12_7 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g58c) + 7);
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi9 = r15_6[rbp8];
        rsi10 = r12_7[rbp8];
        fun_5ad(rdi9, rsi10);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
        ++rbp8;
    } while (rbp8 != 46);
    rdi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) + 8);
    *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
    eax13 = fun_5ce();
    if (eax13 != a_input) {
        rdi11 = reinterpret_cast<int32_t*>(0x5d9);
        *reinterpret_cast<int32_t*>(&rsi12) = eax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_5e2(0x5d9, rsi12);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi11 = *rsi12;
    __asm__("subsd xmm0, [r14]");
    fun_61f(0x618, rsi12 + 1);
    goto v14;
}

void a_input(int64_t rdi, int32_t esi) {
    if (esi != a_input) {
        if (esi > 63) {
        }
    }
}

void fun_184() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    __asm__("rol byte [rax], cl");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
}

unsigned char* g1fe = reinterpret_cast<unsigned char*>(0x49c1ff4810088041);

void fun_1b0(uint64_t rdi, uint64_t rsi) {
    int1_t less_or_equal3;
    unsigned char* r8_4;
    int64_t v5;

    if (!less_or_equal3) {
        addr_1fb_2:
        *r8_4 = reinterpret_cast<unsigned char>(*r8_4 | 16);
        goto addr_202_3;
    } else {
        *reinterpret_cast<unsigned char*>(&rdi) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdi & rsi) == 0x7ff0000000000000)));
        if (a_input || *reinterpret_cast<unsigned char*>(&rdi) != a_input) {
            r8_4 = g1fe;
            goto addr_1fb_2;
        } else {
            addr_202_3:
            if (rsi + rsi < 0xffe0000000000001) {
            }
        }
    }
    if (a_input) {
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rdi) == a_input)) {
    }
    goto v5;
}

uint32_t* g639 = reinterpret_cast<uint32_t*>(0xff831174ff85398b);

uint32_t* g6ce = reinterpret_cast<uint32_t*>(0x4c01c98341098b45);

unsigned char* g6a1 = reinterpret_cast<unsigned char*>(0x483fe0c148090a80);

uint32_t* g6dc = reinterpret_cast<uint32_t*>(0x4cc93102eb0a8945);

uint32_t* g750 = reinterpret_cast<uint32_t*>(0x3104c983410e8b44);

void fun_237(int32_t edi) {
    int1_t sf2;
    int32_t r10d3;
    int32_t ecx4;
    uint1_t zf5;
    int32_t r8d6;
    uint64_t r11_7;
    uint64_t r11_8;
    uint64_t rbx9;
    int32_t r9d10;
    int32_t r9d11;
    int32_t r8d12;
    int32_t r10d13;
    uint32_t ecx14;
    uint64_t rax15;
    int32_t r10d16;
    int32_t ecx17;
    uint64_t rcx18;
    int32_t r10d19;
    uint64_t r11_20;
    uint64_t rbx21;
    uint64_t rdx22;
    int32_t eax23;
    uint64_t rdx24;
    int1_t sf25;
    int32_t r8d26;
    int64_t rdx27;
    int64_t v28;
    int32_t r8d29;
    int64_t v30;
    int32_t r8d31;
    int64_t rsi32;
    uint32_t* rcx33;
    uint32_t edi34;
    uint64_t r8_35;
    int1_t zf36;
    uint32_t ecx37;
    uint32_t* r9_38;
    uint32_t r9d39;
    unsigned char* rdx40;
    int64_t v41;
    int64_t r8_42;
    int64_t v43;
    uint32_t* r10_44;
    uint32_t ecx45;
    uint64_t rcx46;
    int32_t ecx47;
    uint64_t rcx48;
    uint32_t* rsi49;
    uint64_t r11_50;
    uint64_t rdx51;
    uint64_t rdx52;
    uint64_t r11_53;
    int64_t v54;

    if (sf2) {
        if (r10d3 != 0x7ff) {
            ecx4 = reinterpret_cast<int32_t>(a_input);
            zf5 = reinterpret_cast<uint1_t>(r8d6 == a_input);
            *reinterpret_cast<unsigned char*>(&ecx4) = zf5;
            if (!zf5) {
                r11_7 = r11_8 | rbx9;
            }
            r9d10 = r9d11 + ecx4;
            if (r9d10 == a_input) {
                r8d12 = r10d13;
            } else {
                ecx14 = reinterpret_cast<uint32_t>(-r9d10);
                if (ecx14 > 63) {
                    *reinterpret_cast<int32_t*>(&rax15) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rax15) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r11_7 == a_input));
                    r11_7 = rax15;
                    r8d12 = r10d16;
                } else {
                    ecx17 = r9d10;
                    *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx18) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r11_7 << *reinterpret_cast<unsigned char*>(&ecx17) == a_input));
                    r11_7 = rcx18 | r11_7 >> *reinterpret_cast<signed char*>(&ecx14);
                    r8d12 = r10d19;
                }
            }
            r11_20 = (r11_7 | rbx21) + rdx22;
            eax23 = reinterpret_cast<int32_t>(a_input);
            rdx24 = r11_20 + r11_20;
            sf25 = reinterpret_cast<int64_t>(rdx24) < reinterpret_cast<int64_t>(a_input);
            *reinterpret_cast<unsigned char*>(&eax23) = reinterpret_cast<uint1_t>(!sf25);
            if (sf25) {
                rdx24 = r11_20;
            }
            r8d26 = r8d12 - eax23;
        } else {
            if (reinterpret_cast<int1_t>(rdx27 == a_input)) {
                goto v28;
            }
        }
    } else {
        if (r8d29 == a_input) {
            goto v30;
        }
        if (r8d31 != 0x7ff) 
            goto addr_3b1_18; else 
            goto addr_24f_19;
    }
    addr_352_20:
    *reinterpret_cast<int32_t*>(&rsi32) = r8d26;
    rcx33 = g639;
    edi34 = *rcx33;
    if (edi34 == a_input) {
        *reinterpret_cast<int32_t*>(&r8_35) = 0x200;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_35) + 4) = reinterpret_cast<int32_t>(a_input);
    } else {
        if (edi34 != 1) {
            if (edi == a_input) {
                zf36 = edi34 == 3;
            } else {
                zf36 = edi34 == 2;
            }
            *reinterpret_cast<int32_t*>(&r8_35) = 0x3ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_35) + 4) = reinterpret_cast<int32_t>(a_input);
            if (zf36) {
                r8_35 = reinterpret_cast<uint64_t>(a_input);
            }
        } else {
            *reinterpret_cast<int32_t*>(&r8_35) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_35) + 4) = reinterpret_cast<int32_t>(a_input);
        }
    }
    if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rsi32)) < 0x7fd) {
        addr_6bd_32:
        ecx37 = *reinterpret_cast<uint32_t*>(&rdx24) & 0x3ff;
        if (ecx37 == a_input) {
            ecx37 = reinterpret_cast<uint32_t>(a_input);
        } else {
            r9_38 = g6ce;
            r9d39 = *r9_38;
            goto addr_6d1_35;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(&rsi32) > 0x7fd || *reinterpret_cast<int32_t*>(&rsi32) == 0x7fd && reinterpret_cast<int64_t>(r8_35 + rdx24) < reinterpret_cast<int64_t>(a_input)) {
            rdx40 = g6a1;
            *rdx40 = reinterpret_cast<unsigned char>(*rdx40 | 9);
            goto v41;
        }
        if (*reinterpret_cast<int32_t*>(&rsi32) < reinterpret_cast<int32_t>(a_input)) 
            goto addr_715_39; else 
            goto addr_6bd_32;
    }
    addr_6e3_40:
    *reinterpret_cast<int32_t*>(&r8_42) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_42) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<unsigned char*>(&r8_42) = reinterpret_cast<uint1_t>((edi34 | ecx37 ^ 0x200) == a_input);
    if ((reinterpret_cast<uint64_t>(~r8_42) & rdx24 + r8_35 >> 10) == a_input) {
    }
    goto v43;
    addr_6d1_35:
    r10_44 = g6dc;
    *r10_44 = r9d39 | 1;
    goto addr_6e3_40;
    addr_715_39:
    ecx45 = reinterpret_cast<uint32_t>(-*reinterpret_cast<int32_t*>(&rsi32));
    if (ecx45 > 63) {
        *reinterpret_cast<uint32_t*>(&rcx46) = reinterpret_cast<uint32_t>(a_input);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx46) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<unsigned char*>(&rcx46) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx24 == a_input));
    } else {
        ecx47 = *reinterpret_cast<int32_t*>(&rsi32);
        *reinterpret_cast<int32_t*>(&rcx48) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx48) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<unsigned char*>(&rcx48) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx24 << *reinterpret_cast<unsigned char*>(&ecx47) == a_input));
        rcx46 = rcx48 | rdx24 >> *reinterpret_cast<signed char*>(&ecx45);
    }
    rdx24 = rcx46;
    ecx37 = *reinterpret_cast<uint32_t*>(&rcx46) & 0x3ff;
    if (ecx37 != a_input) 
        goto addr_749_46;
    ecx37 = reinterpret_cast<uint32_t>(a_input);
    goto addr_6e3_40;
    addr_749_46:
    rsi49 = g750;
    r9d39 = *rsi49 | 4;
    goto addr_6d1_35;
    addr_3b1_18:
    rdx24 = (r11_50 | 0x4000000000000000) + rdx51;
    goto addr_352_20;
    addr_24f_19:
    if (reinterpret_cast<int1_t>((rdx52 | r11_53) == a_input)) {
        goto v54;
    }
}

unsigned char* g282 = reinterpret_cast<unsigned char*>(0xb848100880);

void fun_25a(int32_t edi) {
    int1_t sf2;
    int32_t r10d3;
    uint64_t rax4;
    uint64_t r11_5;
    uint64_t rbx6;
    int32_t ecx7;
    uint1_t zf8;
    int32_t r8d9;
    uint64_t r11_10;
    int32_t r9d11;
    int32_t r9d12;
    uint32_t ecx13;
    uint64_t rcx14;
    int32_t ecx15;
    uint64_t rcx16;
    uint64_t rdx17;
    uint64_t rdx18;
    uint64_t rbx19;
    uint64_t r11_20;
    int64_t rdx21;
    int64_t v22;
    int32_t r8d23;
    int32_t r8d24;
    uint64_t rdx25;
    uint64_t r11_26;
    unsigned char* rax27;
    uint64_t rdx28;
    uint64_t r11_29;
    uint64_t rdx30;
    uint64_t rax31;
    uint32_t esi32;
    int1_t cf33;
    uint64_t rdx34;
    uint64_t r11_35;
    int64_t v36;
    int64_t r11_37;
    int64_t rdx38;

    if (sf2) {
        if (r10d3 != 0x7ff) {
            rax4 = r11_5 | rbx6;
            ecx7 = reinterpret_cast<int32_t>(a_input);
            zf8 = reinterpret_cast<uint1_t>(r8d9 == a_input);
            *reinterpret_cast<unsigned char*>(&ecx7) = zf8;
            if (zf8) {
                rax4 = r11_10;
            }
            r9d11 = r9d12 + ecx7;
            if (r9d11 != a_input) {
                ecx13 = reinterpret_cast<uint32_t>(-r9d11);
                if (ecx13 > 63) {
                    *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx14) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rax4 == a_input));
                } else {
                    ecx15 = r9d11;
                    *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx16) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rax4 << *reinterpret_cast<unsigned char*>(&ecx15) == a_input));
                    rcx14 = rcx16 | rax4 >> *reinterpret_cast<signed char*>(&ecx13);
                }
                rax4 = rcx14;
            }
            rdx17 = rdx18 | rbx19;
            r11_20 = rax4;
        } else {
            if (!reinterpret_cast<int1_t>(rdx21 == a_input)) 
                goto 0x19e;
            goto v22;
        }
    } else {
        if (r8d23 != a_input) {
            if (r8d24 == 0x7ff) {
                if (!reinterpret_cast<int1_t>((rdx25 | r11_26) == a_input)) 
                    goto 0x19e;
                rax27 = g282;
                *rax27 = reinterpret_cast<unsigned char>(*rax27 | 16);
            }
        }
        if (rdx28 >= r11_29) 
            goto addr_3e5_19; else 
            goto addr_3d7_20;
    }
    rdx30 = rdx17 - r11_20;
    addr_4af_22:
    rax31 = rdx30 >> 32;
    if (rax31 == a_input) {
        *reinterpret_cast<uint32_t*>(&rax31) = *reinterpret_cast<uint32_t*>(&rdx30);
    }
    esi32 = *reinterpret_cast<uint32_t*>(&rax31) << 16;
    if (*reinterpret_cast<uint32_t*>(&rax31) >= 0x10000) {
        esi32 = *reinterpret_cast<uint32_t*>(&rax31);
    }
    cf33 = esi32 < 0x1000000;
    if (!cf33) {
    }
    if (!cf33) {
    }
    goto 0x630;
    addr_3e5_19:
    if (rdx34 <= r11_35) {
        goto v36;
    }
    addr_3d7_20:
    rdx30 = reinterpret_cast<uint64_t>(r11_37 - rdx38);
    goto addr_4af_22;
}

void fun_302() {
    uint32_t r9d1;
    int32_t r9d2;

    r9d1 = reinterpret_cast<uint32_t>(r9d2 - 1);
    if (r9d1 == a_input) 
        goto 0x33a;
    if (r9d1 <= 63) {
        goto 0x33a;
    }
}

void ullong_to_double() {
    return;
}

void fun_294() {
    int32_t r10d1;
    uint32_t r9d2;
    int32_t r9d3;

    if (r10d1 == a_input) {
        r9d2 = reinterpret_cast<uint32_t>(r9d3 - 1);
        if (r9d2 == a_input) {
            addr_393_3:
            goto 0x3d7;
        } else {
            addr_360_4:
            if (r9d2 > 63) {
                goto addr_393_3;
            } else {
                goto addr_393_3;
            }
        }
    } else {
        goto addr_360_4;
    }
}

void submain() {
    fun_54c(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 24 + 8);
}

