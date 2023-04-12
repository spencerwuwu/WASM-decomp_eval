
uint176_t g5bc = 0x4c00000000258b4c;

void a_input(int64_t rdi, int32_t esi);

int64_t fun_5dd(int64_t rdi, int64_t rsi);

int32_t fun_5fe();

void fun_612(int32_t* rdi, int32_t* rsi);

void fun_64f(int64_t rdi, int64_t rsi);

void fun_590(int32_t* rdi, int32_t* rsi) {
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
    r15_4 = *reinterpret_cast<int64_t**>(&g5bc);
    r12_5 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g5bc) + 7);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi7 = r15_4[rbp6];
        rsi8 = r12_5[rbp6];
        fun_5dd(rdi7, rsi8);
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        ++rbp6;
    } while (rbp6 != 46);
    rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp3) + 8);
    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
    eax11 = fun_5fe();
    if (eax11 != a_input) {
        rdi9 = reinterpret_cast<int32_t*>(0x609);
        *reinterpret_cast<int32_t*>(&rsi10) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_612(0x609, rsi10);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi9 = *rsi10;
    __asm__("subsd xmm0, [r14]");
    fun_64f(0x648, rsi10 + 1);
    goto v12;
}

int64_t fun_5dd(int64_t rdi, int64_t rsi) {
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
        fun_5dd(rdi4, rsi6);
    }
    rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
    eax10 = fun_5fe();
    if (eax10 != a_input) {
        rdi8 = reinterpret_cast<int32_t*>(0x609);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_612(0x609, rsi9);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r14]");
    fun_64f(0x648, rsi9 + 1);
    goto v11;
}

int32_t g609 = 0xc031c689;

int32_t fun_5fe() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != a_input) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_612(0x609, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g609 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_64f(0x648, rsi2 + 1);
    goto v4;
}

void fun_612(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_64f(0x648, rsi + 1);
    goto v3;
}

void fun_64f(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_57c(int32_t* rdi) {
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
        rdi = reinterpret_cast<int32_t*>(0x587);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_590(0x587, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    r15_6 = *reinterpret_cast<int64_t**>(&g5bc);
    r12_7 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g5bc) + 7);
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi9 = r15_6[rbp8];
        rsi10 = r12_7[rbp8];
        fun_5dd(rdi9, rsi10);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
        ++rbp8;
    } while (rbp8 != 46);
    rdi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) + 8);
    *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
    eax13 = fun_5fe();
    if (eax13 != a_input) {
        rdi11 = reinterpret_cast<int32_t*>(0x609);
        *reinterpret_cast<int32_t*>(&rsi12) = eax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_612(0x609, rsi12);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi11 = *rsi12;
    __asm__("subsd xmm0, [r14]");
    fun_64f(0x648, rsi12 + 1);
    goto v14;
}

void a_input(int64_t rdi, int32_t esi) {
    if (esi != a_input) {
        if (esi > 63) {
        }
    }
}

uint32_t* g669 = reinterpret_cast<uint32_t*>(0xff831174ff85398b);

unsigned char* g6db = reinterpret_cast<unsigned char*>(0x483fe0c148090a80);

unsigned char* g738 = reinterpret_cast<unsigned char*>(0xc9314503eb040980);

unsigned char* g74c = reinterpret_cast<unsigned char*>(0xc148c2014c010980);

void fun_184() {
    int32_t ecx1;
    int32_t r9d2;
    uint64_t rcx3;
    int64_t rdx4;
    uint64_t r11_5;
    uint64_t r11_6;
    uint64_t rbx7;
    uint64_t rsi8;
    int32_t ecx9;
    uint64_t rdx10;
    int1_t sf11;
    int64_t rsi12;
    int32_t r8d13;
    uint32_t* rcx14;
    uint32_t edi15;
    uint64_t r8_16;
    int32_t eax17;
    int1_t zf18;
    uint32_t r9d19;
    unsigned char* rdx20;
    int64_t v21;
    uint64_t rcx22;
    int32_t ecx23;
    int32_t ecx24;
    uint64_t rcx25;
    unsigned char* rcx26;
    unsigned char* rcx27;
    int64_t rcx28;
    int64_t v29;

    ecx1 = r9d2;
    *reinterpret_cast<int32_t*>(&rcx3) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<unsigned char*>(&rcx3) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx4 << *reinterpret_cast<unsigned char*>(&ecx1) == a_input));
    r11_5 = (r11_6 | rbx7) + (rcx3 | rsi8);
    ecx9 = reinterpret_cast<int32_t>(a_input);
    rdx10 = r11_5 + r11_5;
    sf11 = reinterpret_cast<int64_t>(rdx10) < reinterpret_cast<int64_t>(a_input);
    *reinterpret_cast<unsigned char*>(&ecx9) = reinterpret_cast<uint1_t>(!sf11);
    if (sf11) {
        rdx10 = r11_5;
    }
    *reinterpret_cast<int32_t*>(&rsi12) = r8d13 - ecx9;
    rcx14 = g669;
    edi15 = *rcx14;
    if (edi15 == a_input) {
        *reinterpret_cast<int32_t*>(&r8_16) = 0x200;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = reinterpret_cast<int32_t>(a_input);
    } else {
        if (edi15 != 1) {
            if (eax17 == a_input) {
                zf18 = edi15 == 3;
            } else {
                zf18 = edi15 == 2;
            }
            *reinterpret_cast<int32_t*>(&r8_16) = 0x3ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = reinterpret_cast<int32_t>(a_input);
            if (zf18) {
                r8_16 = reinterpret_cast<uint64_t>(a_input);
            }
        } else {
            *reinterpret_cast<int32_t*>(&r8_16) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = reinterpret_cast<int32_t>(a_input);
        }
    }
    r9d19 = *reinterpret_cast<uint32_t*>(&rdx10) & 0x3ff;
    if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rsi12)) >= 0x7fd) {
        if (*reinterpret_cast<int32_t*>(&rsi12) > 0x7fd || *reinterpret_cast<int32_t*>(&rsi12) == 0x7fd && reinterpret_cast<int64_t>(r8_16 + rdx10) < reinterpret_cast<int64_t>(a_input)) {
            rdx20 = g6db;
            *rdx20 = reinterpret_cast<unsigned char>(*rdx20 | 9);
            goto v21;
        } else {
            if (*reinterpret_cast<int32_t*>(&rsi12) < reinterpret_cast<int32_t>(a_input)) {
                if (*reinterpret_cast<int32_t*>(&rsi12) < -63) {
                    *reinterpret_cast<int32_t*>(&rcx22) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx22) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx10 == a_input));
                } else {
                    ecx23 = *reinterpret_cast<int32_t*>(&rsi12);
                    ecx24 = *reinterpret_cast<int32_t*>(&rsi12);
                    *reinterpret_cast<int32_t*>(&rcx25) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx25) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx10 << *reinterpret_cast<unsigned char*>(&ecx24) == a_input));
                    rcx22 = rcx25 | rdx10 >> -*reinterpret_cast<signed char*>(&ecx23);
                }
                rdx10 = rcx22;
                r9d19 = *reinterpret_cast<uint32_t*>(&rdx10) & 0x3ff;
                if (r9d19 == a_input) {
                    r9d19 = reinterpret_cast<uint32_t>(a_input);
                } else {
                    rcx26 = g738;
                    *rcx26 = reinterpret_cast<unsigned char>(*rcx26 | 4);
                }
            }
        }
    }
    if (r9d19 != a_input) {
        rcx27 = g74c;
        *rcx27 = reinterpret_cast<unsigned char>(*rcx27 | 1);
    }
    *reinterpret_cast<int32_t*>(&rcx28) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<unsigned char*>(&rcx28) = reinterpret_cast<uint1_t>((edi15 | r9d19 ^ 0x200) == a_input);
    if ((reinterpret_cast<uint64_t>(~rcx28) & rdx10 + r8_16 >> 10) == a_input) {
    }
    goto v29;
}

unsigned char* g23b = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

unsigned char* g2c9 = reinterpret_cast<unsigned char*>(0xbf48100880);

void fun_19c(uint64_t rdi, uint64_t rsi) {
    uint64_t r11_3;
    uint64_t r11_4;
    uint64_t rdx5;
    int1_t sf6;
    int32_t r9d7;
    int32_t r9d8;
    int32_t r10d9;
    uint64_t rsi10;
    int32_t ecx11;
    uint1_t zf12;
    int32_t r8d13;
    int32_t r9d14;
    int32_t r9d15;
    uint64_t rcx16;
    int32_t ecx17;
    int32_t ecx18;
    uint64_t rcx19;
    unsigned char cl20;
    unsigned char dl21;
    unsigned char* r8_22;
    int32_t r8d23;
    int32_t r8d24;
    uint64_t rdx25;
    unsigned char* rax26;
    int32_t r8d27;
    uint64_t rsi28;
    int32_t ecx29;
    uint1_t zf30;
    int32_t r10d31;
    int32_t r9d32;
    int32_t r9d33;
    uint64_t rcx34;
    int32_t ecx35;
    int32_t ecx36;
    uint64_t rcx37;
    int64_t v38;
    uint64_t rsi39;
    uint32_t edi40;
    int1_t cf41;

    r11_3 = r11_4 << 10 & 0x3ffffffffffffc00;
    rdx5 = rsi << 10 & 0x3ffffffffffffc00;
    sf6 = r9d7 < reinterpret_cast<int32_t>(a_input);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf6 == a_input)) | reinterpret_cast<uint1_t>(r9d8 == a_input)) {
        if (sf6) {
            if (r10d9 != 0x7ff) {
                rsi10 = r11_3 | 0x4000000000000000;
                ecx11 = reinterpret_cast<int32_t>(a_input);
                zf12 = reinterpret_cast<uint1_t>(r8d13 == a_input);
                *reinterpret_cast<unsigned char*>(&ecx11) = zf12;
                if (zf12) {
                    rsi10 = r11_3;
                }
                r9d14 = r9d15 + ecx11;
                if (r9d14 != a_input) {
                    if (r9d14 < -63) {
                        *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(a_input);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(a_input);
                        *reinterpret_cast<unsigned char*>(&rcx16) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi10 == a_input));
                    } else {
                        ecx17 = -r9d14;
                        ecx18 = r9d14;
                        *reinterpret_cast<int32_t*>(&rcx19) = reinterpret_cast<int32_t>(a_input);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(a_input);
                        *reinterpret_cast<unsigned char*>(&rcx19) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi10 << *reinterpret_cast<unsigned char*>(&ecx18) == a_input));
                        rcx16 = rcx19 | rsi10 >> *reinterpret_cast<signed char*>(&ecx17);
                    }
                    rsi10 = rcx16;
                }
                rdx5 = rdx5 | 0x4000000000000000;
                r11_3 = rsi10;
                goto addr_4d8_12;
            } else {
                if (!reinterpret_cast<int1_t>(rdx5 == a_input)) {
                    addr_1dd_14:
                    cl20 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdi & 0x7ff8000000000000) == 0x7ff0000000000000)));
                    dl21 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
                    if (!reinterpret_cast<int1_t>(cl20 == a_input) || dl21 != a_input) {
                        r8_22 = g23b;
                        *r8_22 = reinterpret_cast<unsigned char>(*r8_22 | 16);
                    }
                } else {
                    goto addr_271_17;
                }
            }
        } else {
            if (r8d23 == a_input) {
                goto addr_403_20;
            }
            if (r8d24 != 0x7ff) {
                addr_403_20:
                if (rdx5 >= r11_3) {
                    if (rdx5 > r11_3) {
                        addr_4d8_12:
                        rdx25 = rdx5 - r11_3;
                        goto addr_4de_23;
                    } else {
                        goto addr_271_17;
                    }
                } else {
                    addr_408_25:
                    rdx25 = r11_3 - rdx5;
                    goto addr_4de_23;
                }
            } else {
                if (!reinterpret_cast<int1_t>((rdx5 | r11_3) == a_input)) 
                    goto addr_1dd_14;
                rax26 = g2c9;
                *rax26 = reinterpret_cast<unsigned char>(*rax26 | 16);
                goto addr_271_17;
            }
        }
    } else {
        if (r8d27 != 0x7ff) {
            rsi28 = rdx5 | 0x4000000000000000;
            ecx29 = reinterpret_cast<int32_t>(a_input);
            zf30 = reinterpret_cast<uint1_t>(r10d31 == a_input);
            *reinterpret_cast<unsigned char*>(&ecx29) = zf30;
            if (zf30) {
                rsi28 = rdx5;
            }
            r9d32 = r9d33 - ecx29;
            if (r9d32 != a_input) {
                if (r9d32 > 63) {
                    *reinterpret_cast<int32_t*>(&rcx34) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx34) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi28 == a_input));
                } else {
                    ecx35 = r9d32;
                    *reinterpret_cast<signed char*>(&r9d32) = -*reinterpret_cast<signed char*>(&r9d32);
                    ecx36 = r9d32;
                    *reinterpret_cast<int32_t*>(&rcx37) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx37) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi28 << *reinterpret_cast<unsigned char*>(&ecx36) == a_input));
                    rcx34 = rcx37 | rsi28 >> *reinterpret_cast<signed char*>(&ecx35);
                }
                rsi28 = rcx34;
            }
            r11_3 = r11_3 | 0x4000000000000000;
            rdx5 = rsi28;
            goto addr_408_25;
        } else {
            if (r11_3 == a_input) 
                goto addr_271_17; else 
                goto addr_1dd_14;
        }
    }
    if (rsi + rsi < 0xffe0000000000001) {
    }
    if (!reinterpret_cast<int1_t>(cl20 == a_input)) {
    }
    if (!reinterpret_cast<int1_t>(dl21 == a_input)) {
    }
    addr_271_17:
    goto v38;
    addr_4de_23:
    rsi39 = rdx25 >> 32;
    if (rsi39 == a_input) {
        *reinterpret_cast<uint32_t*>(&rsi39) = *reinterpret_cast<uint32_t*>(&rdx25);
    }
    edi40 = *reinterpret_cast<uint32_t*>(&rsi39) << 16;
    if (*reinterpret_cast<uint32_t*>(&rsi39) >= 0x10000) {
        edi40 = *reinterpret_cast<uint32_t*>(&rsi39);
    }
    cf41 = edi40 < 0x1000000;
    if (!cf41) {
    }
    if (!cf41) {
    }
    goto 0x660;
}

void fun_385() {
}

void ullong_to_double() {
    return;
}

void fun_276(int64_t rdi) {
    int1_t sf2;
    int32_t r10d3;
    int32_t esi4;
    uint1_t zf5;
    int32_t r8d6;
    int32_t r9d7;
    int32_t r9d8;
    int64_t rdx9;
    int32_t r8d10;
    int32_t r8d11;
    uint64_t rdx12;
    uint64_t r11_13;

    if (sf2) {
        if (r10d3 != 0x7ff) {
            esi4 = reinterpret_cast<int32_t>(a_input);
            zf5 = reinterpret_cast<uint1_t>(r8d6 == a_input);
            *reinterpret_cast<unsigned char*>(&esi4) = zf5;
            if (!zf5) {
            }
            r9d7 = r9d8 + esi4;
            if (r9d7 == a_input) {
                goto 0x390;
            } else {
                if (r9d7 < -63) {
                }
                goto 0x390;
            }
        } else {
            if (!reinterpret_cast<int1_t>(rdx9 == a_input)) 
                goto 0x1dd;
            goto 0x271;
        }
    } else {
        if (r8d10 == a_input) {
            goto 0x271;
        } else {
            if (r8d11 != 0x7ff) {
                goto 0x3a8;
            } else {
                if (!reinterpret_cast<int1_t>((rdx12 | r11_13) == a_input)) 
                    goto 0x1dd;
                goto 0x271;
            }
        }
    }
}

void submain() {
    fun_57c(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 24 + 8);
}

