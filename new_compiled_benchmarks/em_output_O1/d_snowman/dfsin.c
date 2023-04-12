
void test_in(int64_t rdi, int32_t esi);

uint64_t fun_10e4(int64_t rdi);

int64_t fun_10f2(int64_t rdi, uint64_t rsi);

unsigned char* g112b = reinterpret_cast<unsigned char*>(0x8348f0894c100880);

int64_t fun_1077(uint64_t rdi, uint64_t rsi) {
    uint64_t rdx3;
    int64_t rbp4;
    uint64_t rcx5;
    uint32_t esi6;
    int1_t cf7;
    int64_t rax8;
    uint64_t rax9;
    int64_t rax10;
    uint64_t r12_11;
    uint64_t rbx12;
    unsigned char* rax13;
    int64_t v14;

    while (1) {
        rdx3 = reinterpret_cast<uint64_t>((rbp4 * 2 + 1) * (rbp4 * 2));
        rcx5 = rdx3 >> 16;
        esi6 = *reinterpret_cast<uint32_t*>(&rdx3) << 16;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int16_t*>(&rcx5) == test_in)) {
            esi6 = *reinterpret_cast<uint32_t*>(&rdx3);
        }
        cf7 = esi6 < 0x1000000;
        if (!cf7) {
        }
        if (!cf7) {
        }
        rax9 = fun_10e4(rax8);
        rax10 = fun_10f2(rax10, rax9);
        if (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rax9) == test_in)) 
            goto addr_1050_10;
        if ((rax9 & 0xfffffffffffff) != test_in) 
            break;
        addr_1050_10:
        ++rbp4;
        if ((rax9 & 0x7fffffffffffffff) <= r12_11) 
            goto addr_112e_12;
        rax8 = fun_1077(rax9, rbx12);
    }
    rax13 = g112b;
    *rax13 = reinterpret_cast<unsigned char>(*rax13 | 16);
    addr_112e_12:
    goto v14;
}

uint64_t fun_10e4(int64_t rdi) {
    int64_t rax2;
    uint64_t rax3;
    int64_t rbp4;
    uint64_t r12_5;
    uint64_t rbx6;
    int64_t rax7;
    uint64_t rdx8;
    uint64_t rcx9;
    uint32_t esi10;
    int1_t cf11;
    unsigned char* rax12;
    int64_t v13;

    while (1) {
        rax2 = fun_10f2(rax2, rax3);
        if (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rax3) == test_in)) 
            goto addr_1050_3;
        if ((rax3 & 0xfffffffffffff) != test_in) 
            break;
        addr_1050_3:
        ++rbp4;
        if ((rax3 & 0x7fffffffffffffff) <= r12_5) 
            goto addr_112e_5;
        rax7 = fun_1077(rax3, rbx6);
        rdx8 = reinterpret_cast<uint64_t>((rbp4 * 2 + 1) * (rbp4 * 2));
        rcx9 = rdx8 >> 16;
        esi10 = *reinterpret_cast<uint32_t*>(&rdx8) << 16;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int16_t*>(&rcx9) == test_in)) {
            esi10 = *reinterpret_cast<uint32_t*>(&rdx8);
        }
        cf11 = esi10 < 0x1000000;
        if (!cf11) {
        }
        if (!cf11) {
        }
        rax3 = fun_10e4(rax7);
    }
    rax12 = g112b;
    *rax12 = reinterpret_cast<unsigned char>(*rax12 | 16);
    addr_112e_5:
    goto v13;
}

uint120_t g11a8 = 0x4500000000258b4c;

int64_t fun_11c9(int64_t rdi, int64_t rsi);

int32_t fun_11e7();

void fun_11fb(int32_t* rdi, int32_t* rsi);

void fun_1237(int64_t rdi, int64_t rsi);

void fun_117d(int32_t* rdi, int32_t* rsi) {
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
    r15_5 = *reinterpret_cast<int64_t**>(&g11a8);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(test_in);
    do {
        rdi7 = r15_5[r13_6];
        fun_11c9(rdi7, rsi4);
        rsp3 = rsp3 - 2 + 2;
        ++r13_6;
    } while (r13_6 != 36);
    rdi8 = rsp3;
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(test_in);
    eax10 = fun_11e7();
    if (eax10 != test_in) {
        rdi8 = reinterpret_cast<int32_t*>(0x11f2);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_11fb(0x11f2, rsi9);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r14]");
    fun_1237(0x1230, rsi9 + 1);
    goto v11;
}

int64_t fun_11c9(int64_t rdi, int64_t rsi) {
    int64_t r13_3;
    int64_t rdi4;
    int64_t* r15_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t eax8;
    int64_t v9;

    while (++r13_3, r13_3 != 36) {
        rdi4 = r15_5[r13_3];
        fun_11c9(rdi4, rsi);
    }
    rdi6 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(test_in);
    eax8 = fun_11e7();
    if (eax8 != test_in) {
        rdi6 = reinterpret_cast<int32_t*>(0x11f2);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_11fb(0x11f2, rsi7);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi6 = *rsi7;
    __asm__("subsd xmm0, [r14]");
    fun_1237(0x1230, rsi7 + 1);
    goto v9;
}

int32_t g11f2 = 0xc031c689;

int32_t fun_11e7() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != test_in) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_11fb(0x11f2, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g11f2 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_1237(0x1230, rsi2 + 1);
    goto v4;
}

void fun_11fb(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_1237(0x1230, rsi + 1);
    goto v3;
}

void fun_1237(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

int64_t fun_10f2(int64_t rdi, uint64_t rsi) {
    uint64_t rax3;
    int64_t rbp4;
    uint64_t r12_5;
    uint64_t rbx6;
    int64_t rax7;
    uint64_t rdx8;
    uint64_t rcx9;
    uint32_t esi10;
    int1_t cf11;
    int64_t rax12;
    unsigned char* rax13;
    int64_t v14;

    while (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rax3) == test_in) || (rax3 & 0xfffffffffffff) == test_in) {
        ++rbp4;
        if ((rax3 & 0x7fffffffffffffff) <= r12_5) 
            goto addr_112e_3;
        rax7 = fun_1077(rax3, rbx6);
        rdx8 = reinterpret_cast<uint64_t>((rbp4 * 2 + 1) * (rbp4 * 2));
        rcx9 = rdx8 >> 16;
        esi10 = *reinterpret_cast<uint32_t*>(&rdx8) << 16;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int16_t*>(&rcx9) == test_in)) {
            esi10 = *reinterpret_cast<uint32_t*>(&rdx8);
        }
        cf11 = esi10 < 0x1000000;
        if (!cf11) {
        }
        if (!cf11) {
        }
        rax3 = fun_10e4(rax7);
        rax12 = fun_10f2(rax12, rax3);
    }
    rax13 = g112b;
    *rax13 = reinterpret_cast<unsigned char>(*rax13 | 16);
    addr_112e_3:
    goto v14;
}

void fun_1169(int32_t* rdi) {
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
        rdi = reinterpret_cast<int32_t*>(0x1174);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_117d(0x1174, rsi4);
        rsp2 = rsp2 - 2 + 2;
    }
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    rsi6 = reinterpret_cast<int64_t>(rsi4 + 1);
    r15_7 = *reinterpret_cast<int64_t**>(&g11a8);
    *reinterpret_cast<int32_t*>(&r13_8) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_8) + 4) = reinterpret_cast<int32_t>(test_in);
    do {
        rdi9 = r15_7[r13_8];
        fun_11c9(rdi9, rsi6);
        rsp2 = rsp2 - 2 + 2;
        ++r13_8;
    } while (r13_8 != 36);
    rdi10 = rsp2;
    *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(test_in);
    eax12 = fun_11e7();
    if (eax12 != test_in) {
        rdi10 = reinterpret_cast<int32_t*>(0x11f2);
        *reinterpret_cast<int32_t*>(&rsi11) = eax12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_11fb(0x11f2, rsi11);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi10 = *rsi11;
    __asm__("subsd xmm0, [r14]");
    fun_1237(0x1230, rsi11 + 1);
    goto v13;
}

void fun_1020() {
    uint64_t rbx1;
    int64_t rbx2;
    uint64_t rax3;
    int64_t rbp4;
    int64_t r14_5;
    int64_t r15_6;
    uint64_t r15_7;
    int64_t rax8;
    uint64_t rdx9;
    uint64_t rcx10;
    uint32_t esi11;
    int1_t cf12;
    uint64_t rax13;
    int64_t rax14;
    unsigned char* rax15;
    int64_t v16;

    rbx1 = reinterpret_cast<uint64_t>(rbx2 + 1) ^ rax3;
    *reinterpret_cast<int32_t*>(&rbp4) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp4) + 4) = reinterpret_cast<int32_t>(test_in);
    r14_5 = r15_6;
    do {
        rax8 = fun_1077(r15_7, rbx1);
        rdx9 = reinterpret_cast<uint64_t>((rbp4 * 2 + 1) * (rbp4 * 2));
        rcx10 = rdx9 >> 16;
        esi11 = *reinterpret_cast<uint32_t*>(&rdx9) << 16;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int16_t*>(&rcx10) == test_in)) {
            esi11 = *reinterpret_cast<uint32_t*>(&rdx9);
        }
        cf12 = esi11 < 0x1000000;
        if (!cf12) {
        }
        if (!cf12) {
        }
        rax13 = fun_10e4(rax8);
        r15_7 = rax13;
        rax14 = fun_10f2(r14_5, rax13);
        r14_5 = rax14;
        if (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~r15_7) == test_in)) 
            continue;
        if ((r15_7 & 0xfffffffffffff) != test_in) 
            break;
        ++rbp4;
    } while ((r15_7 & 0x7fffffffffffffff) > 0x3ee4f8b588e368f0);
    goto addr_112e_14;
    rax15 = g112b;
    *rax15 = reinterpret_cast<unsigned char>(*rax15 | 16);
    addr_112e_14:
    goto v16;
}

void test_in(int64_t rdi, int32_t esi) {
    if (esi != test_in) {
        if (esi > 63) {
        }
    }
}

void fun_244(int64_t rdi) {
    int32_t eax2;
    int32_t ecx3;

    if (eax2 != ecx3) {
    }
}

void fun_3a0(int64_t rdi) {
    int64_t rcx2;
    int64_t r9_3;
    int64_t v4;

    *reinterpret_cast<int32_t*>(rcx2 + r9_3 * 8 - 0x38baf0b8) = 0xf49d284;
    __asm__("ror byte [r8-0x77], 0xc7");
    goto v4;
}

uint32_t* g989 = reinterpret_cast<uint32_t*>(0xff831174ff85398b);

unsigned char* g9fb = reinterpret_cast<unsigned char*>(0x483fe0c148090a80);

unsigned char* ga58 = reinterpret_cast<unsigned char*>(0xc9314503eb040980);

unsigned char* ga6c = reinterpret_cast<unsigned char*>(0xc148c2014c010980);

void fun_3b6(int64_t rdi) {
    int1_t sf2;
    int32_t r10d3;
    int32_t esi4;
    uint1_t zf5;
    int32_t r8d6;
    uint64_t r11_7;
    uint64_t r11_8;
    uint64_t rbx9;
    int32_t r9d10;
    int32_t r9d11;
    int32_t r8d12;
    int32_t r10d13;
    uint64_t rcx14;
    int32_t ecx15;
    int32_t ecx16;
    uint64_t rcx17;
    int32_t r10d18;
    uint64_t r11_19;
    uint64_t rbx20;
    uint64_t rdx21;
    int32_t ecx22;
    uint64_t rdx23;
    int1_t sf24;
    int32_t r8d25;
    int64_t rdx26;
    int32_t r8d27;
    int32_t r8d28;
    int64_t rsi29;
    uint32_t* rcx30;
    uint32_t edi31;
    uint64_t r8_32;
    int32_t eax33;
    int1_t zf34;
    uint32_t r9d35;
    unsigned char* rdx36;
    int64_t v37;
    uint64_t rcx38;
    int32_t ecx39;
    int32_t ecx40;
    uint64_t rcx41;
    unsigned char* rcx42;
    unsigned char* rcx43;
    int64_t rcx44;
    int64_t v45;
    uint64_t r11_46;
    uint64_t rdx47;
    uint64_t rdx48;
    uint64_t r11_49;

    if (sf2) {
        if (r10d3 != 0x7ff) {
            esi4 = reinterpret_cast<int32_t>(test_in);
            zf5 = reinterpret_cast<uint1_t>(r8d6 == test_in);
            *reinterpret_cast<unsigned char*>(&esi4) = zf5;
            if (!zf5) {
                r11_7 = r11_8 | rbx9;
            }
            r9d10 = r9d11 + esi4;
            if (r9d10 == test_in) {
                r8d12 = r10d13;
            } else {
                if (r9d10 < -63) {
                    *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<unsigned char*>(&rcx14) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r11_7 == test_in));
                } else {
                    ecx15 = -r9d10;
                    ecx16 = r9d10;
                    *reinterpret_cast<int32_t*>(&rcx17) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<unsigned char*>(&rcx17) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r11_7 << *reinterpret_cast<unsigned char*>(&ecx16) == test_in));
                    rcx14 = rcx17 | r11_7 >> *reinterpret_cast<signed char*>(&ecx15);
                }
                r11_7 = rcx14;
                r8d12 = r10d18;
            }
            r11_19 = (r11_7 | rbx20) + rdx21;
            ecx22 = reinterpret_cast<int32_t>(test_in);
            rdx23 = r11_19 + r11_19;
            sf24 = reinterpret_cast<int64_t>(rdx23) < reinterpret_cast<int64_t>(test_in);
            *reinterpret_cast<unsigned char*>(&ecx22) = reinterpret_cast<uint1_t>(!sf24);
            if (sf24) {
                rdx23 = r11_19;
            }
            r8d25 = r8d12 - ecx22;
        } else {
            if (reinterpret_cast<int1_t>(rdx26 == test_in)) {
                goto 0x3b1;
            }
        }
    } else {
        if (r8d27 == test_in) {
            goto 0x3b1;
        }
        if (r8d28 != 0x7ff) 
            goto addr_522_19; else 
            goto addr_3d2_20;
    }
    addr_4e8_21:
    *reinterpret_cast<int32_t*>(&rsi29) = r8d25;
    rcx30 = g989;
    edi31 = *rcx30;
    if (edi31 == test_in) {
        *reinterpret_cast<int32_t*>(&r8_32) = 0x200;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_32) + 4) = reinterpret_cast<int32_t>(test_in);
    } else {
        if (edi31 != 1) {
            if (eax33 == test_in) {
                zf34 = edi31 == 3;
            } else {
                zf34 = edi31 == 2;
            }
            *reinterpret_cast<int32_t*>(&r8_32) = 0x3ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_32) + 4) = reinterpret_cast<int32_t>(test_in);
            if (zf34) {
                r8_32 = reinterpret_cast<uint64_t>(test_in);
            }
        } else {
            *reinterpret_cast<int32_t*>(&r8_32) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_32) + 4) = reinterpret_cast<int32_t>(test_in);
        }
    }
    r9d35 = *reinterpret_cast<uint32_t*>(&rdx23) & 0x3ff;
    if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rsi29)) >= 0x7fd) {
        if (*reinterpret_cast<int32_t*>(&rsi29) > 0x7fd || *reinterpret_cast<int32_t*>(&rsi29) == 0x7fd && reinterpret_cast<int64_t>(r8_32 + rdx23) < reinterpret_cast<int64_t>(test_in)) {
            rdx36 = g9fb;
            *rdx36 = reinterpret_cast<unsigned char>(*rdx36 | 9);
            goto v37;
        } else {
            if (*reinterpret_cast<int32_t*>(&rsi29) < reinterpret_cast<int32_t>(test_in)) {
                if (*reinterpret_cast<int32_t*>(&rsi29) < -63) {
                    *reinterpret_cast<int32_t*>(&rcx38) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx38) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<unsigned char*>(&rcx38) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx23 == test_in));
                } else {
                    ecx39 = *reinterpret_cast<int32_t*>(&rsi29);
                    ecx40 = *reinterpret_cast<int32_t*>(&rsi29);
                    *reinterpret_cast<int32_t*>(&rcx41) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<unsigned char*>(&rcx41) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx23 << *reinterpret_cast<unsigned char*>(&ecx40) == test_in));
                    rcx38 = rcx41 | rdx23 >> -*reinterpret_cast<signed char*>(&ecx39);
                }
                rdx23 = rcx38;
                r9d35 = *reinterpret_cast<uint32_t*>(&rdx23) & 0x3ff;
                if (r9d35 == test_in) {
                    r9d35 = reinterpret_cast<uint32_t>(test_in);
                } else {
                    rcx42 = ga58;
                    *rcx42 = reinterpret_cast<unsigned char>(*rcx42 | 4);
                }
            }
        }
    }
    if (r9d35 != test_in) {
        rcx43 = ga6c;
        *rcx43 = reinterpret_cast<unsigned char>(*rcx43 | 1);
    }
    *reinterpret_cast<int32_t*>(&rcx44) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx44) + 4) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<unsigned char*>(&rcx44) = reinterpret_cast<uint1_t>((edi31 | r9d35 ^ 0x200) == test_in);
    if ((reinterpret_cast<uint64_t>(~rcx44) & rdx23 + r8_32 >> 10) == test_in) {
    }
    goto v45;
    addr_522_19:
    rdx23 = (r11_46 | 0x4000000000000000) + rdx47;
    goto addr_4e8_21;
    addr_3d2_20:
    if (reinterpret_cast<int1_t>((rdx48 | r11_49) == test_in)) {
        goto 0x3b1;
    }
}

unsigned char* g409 = reinterpret_cast<unsigned char*>(0xbf48100880);

void fun_3dd() {
    int1_t sf1;
    int32_t r10d2;
    uint64_t rsi3;
    uint64_t r11_4;
    uint64_t rbx5;
    int32_t ecx6;
    uint1_t zf7;
    int32_t r8d8;
    uint64_t r11_9;
    int32_t r9d10;
    int32_t r9d11;
    uint64_t rcx12;
    int32_t ecx13;
    int32_t ecx14;
    uint64_t rcx15;
    uint64_t rdx16;
    uint64_t rdx17;
    uint64_t rbx18;
    uint64_t r11_19;
    int64_t rdx20;
    int32_t r8d21;
    int32_t r8d22;
    uint64_t rdx23;
    uint64_t r11_24;
    unsigned char* rax25;
    uint64_t rdx26;
    uint64_t r11_27;
    uint64_t rdx28;
    uint64_t rsi29;
    uint32_t edi30;
    int1_t cf31;
    uint64_t rdx32;
    uint64_t r11_33;
    int64_t r11_34;
    int64_t rdx35;

    if (sf1) {
        if (r10d2 != 0x7ff) {
            rsi3 = r11_4 | rbx5;
            ecx6 = reinterpret_cast<int32_t>(test_in);
            zf7 = reinterpret_cast<uint1_t>(r8d8 == test_in);
            *reinterpret_cast<unsigned char*>(&ecx6) = zf7;
            if (zf7) {
                rsi3 = r11_9;
            }
            r9d10 = r9d11 + ecx6;
            if (r9d10 != test_in) {
                if (r9d10 < -63) {
                    *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<unsigned char*>(&rcx12) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi3 == test_in));
                } else {
                    ecx13 = -r9d10;
                    ecx14 = r9d10;
                    *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<unsigned char*>(&rcx15) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi3 << *reinterpret_cast<unsigned char*>(&ecx14) == test_in));
                    rcx12 = rcx15 | rsi3 >> *reinterpret_cast<signed char*>(&ecx13);
                }
                rsi3 = rcx12;
            }
            rdx16 = rdx17 | rbx18;
            r11_19 = rsi3;
        } else {
            if (!reinterpret_cast<int1_t>(rdx20 == test_in)) 
                goto 0x31d;
            goto 0x3b1;
        }
    } else {
        if (r8d21 != test_in) {
            if (r8d22 == 0x7ff) {
                if (!reinterpret_cast<int1_t>((rdx23 | r11_24) == test_in)) 
                    goto 0x31d;
                rax25 = g409;
                *rax25 = reinterpret_cast<unsigned char>(*rax25 | 16);
                goto 0x3b1;
            }
        }
        if (rdx26 >= r11_27) 
            goto addr_556_19; else 
            goto addr_548_20;
    }
    rdx28 = rdx16 - r11_19;
    addr_61e_22:
    rsi29 = rdx28 >> 32;
    if (rsi29 == test_in) {
        *reinterpret_cast<uint32_t*>(&rsi29) = *reinterpret_cast<uint32_t*>(&rdx28);
    }
    edi30 = *reinterpret_cast<uint32_t*>(&rsi29) << 16;
    if (*reinterpret_cast<uint32_t*>(&rsi29) >= 0x10000) {
        edi30 = *reinterpret_cast<uint32_t*>(&rsi29);
    }
    cf31 = edi30 < 0x1000000;
    if (!cf31) {
    }
    if (!cf31) {
    }
    goto 0x980;
    addr_556_19:
    if (rdx32 <= r11_33) {
        goto 0x3b1;
    }
    addr_548_20:
    rdx28 = reinterpret_cast<uint64_t>(r11_34 - rdx35);
    goto addr_61e_22;
}

void fun_41b() {
    int32_t ecx1;
    uint1_t zf2;
    int32_t r10d3;
    int32_t r9d4;
    int32_t r9d5;

    ecx1 = reinterpret_cast<int32_t>(test_in);
    zf2 = reinterpret_cast<uint1_t>(r10d3 == test_in);
    *reinterpret_cast<unsigned char*>(&ecx1) = zf2;
    if (zf2) {
    }
    r9d4 = r9d5 - ecx1;
    if (r9d4 != test_in) {
        if (r9d4 > 63) {
        }
    }
    goto 0x548;
}

void fun_4c5() {
}

unsigned char* g708 = reinterpret_cast<unsigned char*>(0xc35bc8ff48100980);

unsigned char* g784 = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

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
                addr_834_4:
                if (!reinterpret_cast<int1_t>(eax9 == test_in)) {
                    addr_8a8_5:
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
                        goto addr_970_9;
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
                        *reinterpret_cast<uint32_t*>(&rbx37) = (ebx33 | eax26 << 5) + *reinterpret_cast<int32_t*>(0x896 + rcx36 * 4);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx37) + 4) = reinterpret_cast<int32_t>(test_in);
                        ecx38 = static_cast<int32_t>(rbx37 - 11);
                        rdx7 = rdx7 << *reinterpret_cast<unsigned char*>(&ecx38);
                        goto addr_8a8_5;
                    }
                }
            } else {
                if (r8_4 == test_in) {
                    rdi25 = rdi10 & 0x8000000000000000;
                    goto addr_970_9;
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
                    *reinterpret_cast<uint32_t*>(&rbx50) = (ebx46 | r9d39 << 5) + *reinterpret_cast<int32_t*>(0x81e + r10_49 * 4);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx50) + 4) = reinterpret_cast<int32_t>(test_in);
                    ecx51 = static_cast<int32_t>(rbx50 - 11);
                    r8_4 = r8_4 << *reinterpret_cast<unsigned char*>(&ecx51);
                    goto addr_834_4;
                }
            }
        } else {
            if (rdx7 == test_in) {
                *reinterpret_cast<uint32_t*>(&r9_52) = *reinterpret_cast<uint32_t*>(&r9_5) & 0x7ff;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_52) + 4) = reinterpret_cast<int32_t>(test_in);
                if ((r9_52 | r8_4) == test_in) {
                    addr_701_32:
                    rcx53 = g708;
                    *rcx53 = reinterpret_cast<unsigned char>(*rcx53 | 16);
                    return 0x7fffffffffffffff;
                } else {
                    addr_94c_33:
                    return 0x7ff0000000000000 | rdi10 & 0x8000000000000000;
                }
            }
        }
    } else {
        if (reinterpret_cast<int1_t>(r8_4 == test_in) && (rdx7 == test_in || eax9 != 0x7ff)) {
            *reinterpret_cast<uint32_t*>(&r11_54) = *reinterpret_cast<uint32_t*>(&r11_8) & 0x7ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_54) + 4) = reinterpret_cast<int32_t>(test_in);
            if (!reinterpret_cast<int1_t>((r11_54 | rdx7) == test_in)) 
                goto addr_94c_33; else 
                goto addr_701_32;
        }
    }
    goto 0x980;
    addr_970_9:
    return rdi25;
    dl55 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rcx3 << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rcx3 & 0x7ff8000000000000) == 0x7ff0000000000000)));
    dil56 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
    if (!reinterpret_cast<int1_t>(dl55 == test_in) || dil56 != test_in) {
        r8_57 = g784;
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

uint32_t* gdba = reinterpret_cast<uint32_t*>(0x104840f118b);

unsigned char* gba9 = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

unsigned char* gb18 = reinterpret_cast<unsigned char*>(0xb848100880);

uint64_t float64_div(uint64_t rdi, uint64_t rsi) {
    uint64_t rdx3;
    uint64_t r11_4;
    uint64_t rcx5;
    uint32_t r10d6;
    uint64_t r9_7;
    uint64_t rax8;
    uint32_t eax9;
    uint64_t rdi10;
    uint64_t rcx11;
    uint32_t* rcx12;
    uint64_t rax13;
    uint32_t eax14;
    uint64_t rcx15;
    uint1_t zf16;
    uint32_t esi17;
    uint32_t r8d18;
    uint1_t cf19;
    int64_t r8_20;
    uint32_t ebx21;
    uint32_t ecx22;
    int1_t cf23;
    int64_t rcx24;
    int64_t rbx25;
    int32_t ecx26;
    uint64_t r8_27;
    uint64_t rbx28;
    uint64_t r11_29;
    uint64_t r8_30;
    uint64_t rdx31;
    uint64_t r14_32;
    uint64_t rax33;
    uint64_t rsi34;
    uint64_t rax35;
    int64_t r13_36;
    uint64_t r13_37;
    uint64_t rbp38;
    uint64_t r15_39;
    uint64_t rax40;
    uint64_t rdx41;
    uint1_t cf42;
    uint64_t rdx43;
    uint64_t r9_44;
    uint64_t r15_45;
    uint64_t tmp64_46;
    uint1_t cf47;
    uint64_t rdx48;
    uint32_t ecx49;
    uint64_t rsi50;
    uint1_t zf51;
    uint32_t edx52;
    uint32_t r8d53;
    uint1_t cf54;
    int64_t r8_55;
    uint32_t esi56;
    uint32_t r10d57;
    int1_t cf58;
    int64_t r10_59;
    int64_t rsi60;
    int32_t ecx61;
    uint64_t rax62;
    uint64_t r9_63;
    int64_t rbx64;
    int64_t rcx65;
    uint64_t rcx66;
    uint64_t r10_67;
    uint64_t tmp64_68;
    uint64_t r14_69;
    uint64_t rax70;
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
        if (eax9 == test_in) {
            if (r9_7 == test_in) {
                *reinterpret_cast<uint32_t*>(&rcx11) = *reinterpret_cast<uint32_t*>(&rcx5) & 0x7ff;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(test_in);
                rcx12 = gdba;
                if ((rcx11 | r11_4) == test_in) {
                    *rcx12 = *rcx12 | 16;
                    rax13 = 0x7fffffffffffffff;
                } else {
                    *rcx12 = *rcx12 | 2;
                    goto addr_dc7_7;
                }
            } else {
                eax14 = reinterpret_cast<uint32_t>(test_in);
                rcx15 = r9_7 >> 32;
                zf16 = reinterpret_cast<uint1_t>(rcx15 == test_in);
                if (zf16) {
                    *reinterpret_cast<uint32_t*>(&rcx15) = *reinterpret_cast<uint32_t*>(&rsi);
                }
                *reinterpret_cast<unsigned char*>(&eax14) = zf16;
                esi17 = *reinterpret_cast<uint32_t*>(&rcx15) << 16;
                r8d18 = reinterpret_cast<uint32_t>(test_in);
                cf19 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx15) < 0x10000);
                if (!cf19) {
                    esi17 = *reinterpret_cast<uint32_t*>(&rcx15);
                }
                *reinterpret_cast<unsigned char*>(&r8d18) = cf19;
                *reinterpret_cast<uint32_t*>(&r8_20) = r8d18 << 4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_20) + 4) = reinterpret_cast<int32_t>(test_in);
                ebx21 = static_cast<uint32_t>(r8_20 + 8);
                ecx22 = esi17 << 8;
                cf23 = esi17 < 0x1000000;
                if (!cf23) {
                    ecx22 = esi17;
                }
                if (!cf23) {
                    ebx21 = *reinterpret_cast<uint32_t*>(&r8_20);
                }
                *reinterpret_cast<uint32_t*>(&rcx24) = ecx22 >> 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = reinterpret_cast<int32_t>(test_in);
                *reinterpret_cast<uint32_t*>(&rbx25) = (ebx21 | eax14 << 5) + *reinterpret_cast<int32_t*>(0xc36 + rcx24 * 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx25) + 4) = reinterpret_cast<int32_t>(test_in);
                ecx26 = static_cast<int32_t>(rbx25 - 11);
                r9_7 = r9_7 << *reinterpret_cast<unsigned char*>(&ecx26);
                goto addr_c48_17;
            }
        } else {
            if (eax9 != 0x7ff) {
                addr_c48_17:
                if (!reinterpret_cast<int1_t>(r10d6 == test_in)) {
                    addr_cba_19:
                    r8_27 = 0x4000000000000000 | r11_4 << 10;
                    rbx28 = r9_7 << 11;
                    r11_29 = 0x8000000000000000 | rbx28;
                    r8_30 = r8_27 >> static_cast<unsigned char>(reinterpret_cast<uint1_t>(r11_29 <= r8_27 + r8_27));
                    rdx31 = 0xffffffffffffffff;
                    if (r11_29 > r8_30) {
                        r14_32 = r11_29 >> 32;
                        rax33 = r11_29 & 0xffffffff00000000;
                        rsi34 = 0xffffffff00000000;
                        if (rax33 > r8_30) {
                            rsi34 = r8_30 / r14_32 << 32;
                        }
                        rax35 = rsi34 >> 32;
                        *reinterpret_cast<uint32_t*>(&r13_36) = *reinterpret_cast<uint32_t*>(&rbx28) & 0xfffff800;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_36) + 4) = reinterpret_cast<int32_t>(test_in);
                        r13_37 = r13_36 * rax35;
                        rbp38 = (r13_37 >> 32) + rax35 * r14_32;
                        r15_39 = rsi34 * r11_29;
                        rax40 = -r15_39;
                        rdx41 = r8_30 - (rbp38 + reinterpret_cast<uint1_t>(r8_30 < rbp38 + reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r15_39 == test_in))));
                        cf42 = reinterpret_cast<uint1_t>(rdx41 < reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r15_39 < r13_37 << 32)));
                        rdx43 = rdx41 - (reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf42));
                        if (reinterpret_cast<int64_t>(rdx43) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf42))) {
                            r9_44 = r9_7 << 43;
                            r15_45 = rax33;
                            do {
                                rsi34 = rsi34 + 0xffffffff00000000;
                                tmp64_46 = rax40 + r9_44;
                                cf47 = reinterpret_cast<uint1_t>(tmp64_46 < rax40);
                                rax40 = tmp64_46;
                                rdx43 = rdx43 + r14_32 + cf47;
                            } while (reinterpret_cast<int64_t>(rdx43) < reinterpret_cast<int64_t>(test_in));
                        } else {
                            r15_45 = rax33;
                        }
                        __asm__("shrd rax, rdx, 0x20");
                        *reinterpret_cast<int32_t*>(&rdx48) = -1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx48) + 4) = reinterpret_cast<int32_t>(test_in);
                        if (r15_45 > rax40) {
                            rdx48 = rax40 / r14_32;
                        }
                        rdx31 = rdx48 | rsi34;
                        goto addr_e15_29;
                    }
                } else {
                    if (r11_4 == test_in) {
                        addr_d82_31:
                        rax13 = rdi10 & 0x8000000000000000;
                    } else {
                        ecx49 = reinterpret_cast<uint32_t>(test_in);
                        rsi50 = r11_4 >> 32;
                        zf51 = reinterpret_cast<uint1_t>(rsi50 == test_in);
                        if (zf51) {
                            *reinterpret_cast<uint32_t*>(&rsi50) = *reinterpret_cast<uint32_t*>(&rdx3);
                        }
                        *reinterpret_cast<unsigned char*>(&ecx49) = zf51;
                        edx52 = *reinterpret_cast<uint32_t*>(&rsi50) << 16;
                        r8d53 = reinterpret_cast<uint32_t>(test_in);
                        cf54 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi50) < 0x10000);
                        if (!cf54) {
                            edx52 = *reinterpret_cast<uint32_t*>(&rsi50);
                        }
                        *reinterpret_cast<unsigned char*>(&r8d53) = cf54;
                        *reinterpret_cast<uint32_t*>(&r8_55) = r8d53 << 4;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_55) + 4) = reinterpret_cast<int32_t>(test_in);
                        esi56 = static_cast<uint32_t>(r8_55 + 8);
                        r10d57 = edx52 << 8;
                        cf58 = edx52 < 0x1000000;
                        if (!cf58) {
                            r10d57 = edx52;
                        }
                        if (!cf58) {
                            esi56 = *reinterpret_cast<uint32_t*>(&r8_55);
                        }
                        *reinterpret_cast<uint32_t*>(&r10_59) = r10d57 >> 24;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_59) + 4) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<uint32_t*>(&rsi60) = (esi56 | ecx49 << 5) + *reinterpret_cast<int32_t*>(0xca5 + r10_59 * 4);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi60) + 4) = reinterpret_cast<int32_t>(test_in);
                        ecx61 = static_cast<int32_t>(rsi60 - 11);
                        r11_4 = r11_4 << *reinterpret_cast<unsigned char*>(&ecx61);
                        goto addr_cba_19;
                    }
                }
            } else {
                if (r9_7 == test_in) 
                    goto addr_d82_31; else 
                    goto addr_b49_42;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(r11_4 == test_in)) 
            goto addr_b49_42;
        if (eax9 != 0x7ff) 
            goto addr_d94_45; else 
            goto addr_b0c_46;
    }
    addr_dd7_47:
    return rax13;
    addr_dc7_7:
    rax13 = 0x7ff0000000000000 | rdi10 & 0x8000000000000000;
    goto addr_dd7_47;
    addr_e15_29:
    if ((*reinterpret_cast<uint32_t*>(&rdx31) & 0x1ff) <= 2) {
        rax62 = r11_29 >> 32;
        r9_63 = rdx31 >> 32;
        *reinterpret_cast<uint32_t*>(&rbx64) = *reinterpret_cast<uint32_t*>(&rbx28) & 0xfffff800;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx64) + 4) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<uint32_t*>(&rcx65) = *reinterpret_cast<uint32_t*>(&rdx31);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx65) + 4) = reinterpret_cast<int32_t>(test_in);
        rcx66 = rcx65 * rax62;
        *reinterpret_cast<int32_t*>(&r10_67) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_67) + 4) = reinterpret_cast<int32_t>(test_in);
        tmp64_68 = rcx66 + rbx64 * r9_63;
        *reinterpret_cast<unsigned char*>(&r10_67) = reinterpret_cast<uint1_t>(tmp64_68 >= rcx66);
        r14_69 = rdx31 * r11_29;
        rax70 = -r14_69;
        r9_71 = 0x100000000 - (r8_30 - (reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r8_30 < reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r14_69 == test_in)))))) - ((tmp64_68 >> 32) + r9_63 * rax62) + (r10_67 << 32));
        cf72 = reinterpret_cast<uint1_t>(r9_71 < reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_69 < tmp64_68 << 32)));
        r9_73 = r9_71 - (reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf72));
        if (reinterpret_cast<int64_t>(r9_73) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf72))) {
            do {
                tmp64_74 = rax70 + r11_29;
                cf75 = reinterpret_cast<uint1_t>(tmp64_74 < rax70);
                rax70 = tmp64_74;
                r9_73 = r9_73 + reinterpret_cast<uint64_t>(test_in) + cf75;
            } while (reinterpret_cast<int64_t>(r9_73) < reinterpret_cast<int64_t>(test_in));
        }
    }
    goto 0x980;
    addr_d94_45:
    goto addr_dc7_7;
    addr_b0c_46:
    if (!reinterpret_cast<int1_t>(r9_7 == test_in)) {
        addr_b49_42:
        cl76 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx3 << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdx3 & 0x7ff8000000000000) == 0x7ff0000000000000)));
        dil77 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
        if (!reinterpret_cast<int1_t>(cl76 == test_in) || dil77 != test_in) {
            r8_78 = gba9;
            *r8_78 = reinterpret_cast<unsigned char>(*r8_78 | 16);
        }
    } else {
        rax79 = gb18;
        *rax79 = reinterpret_cast<unsigned char>(*rax79 | 16);
        rax13 = 0x7fffffffffffffff;
        goto addr_dd7_47;
    }
    r8_80 = rsi | 0x8000000000000;
    rdx81 = rdx3 | 0x8000000000000;
    rax13 = r8_80;
    if (rsi + rsi < 0xffe0000000000001) {
        rax13 = rdx81;
    }
    if (!reinterpret_cast<int1_t>(cl76 == test_in)) {
        rax13 = rdx81;
    }
    if (!reinterpret_cast<int1_t>(dil77 == test_in)) {
        rax13 = r8_80;
    }
    goto addr_dd7_47;
}

void ullong_to_double() {
    return;
}

unsigned char* gf1e = reinterpret_cast<unsigned char*>(0xc0b60fc031100880);

int64_t float64_le(uint64_t rdi, uint64_t rsi) {
    unsigned char* rax3;
    uint64_t rax4;
    uint64_t rcx5;
    unsigned char cl6;
    unsigned char al7;
    uint1_t cf8;
    int64_t rax9;

    if (reinterpret_cast<int1_t>((~rdi & 0x7ff0000000000000) == test_in) && !reinterpret_cast<int1_t>((rdi & 0xfffffffffffff) == test_in) || reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rsi) == test_in) && (0xfffffffffffff & rsi) != test_in) {
        rax3 = gf1e;
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

unsigned char* gf9e = reinterpret_cast<unsigned char*>(0xc0b60fc031100880);

int64_t float64_ge(uint64_t rdi, uint64_t rsi) {
    unsigned char* rax3;
    uint64_t rax4;
    uint64_t rcx5;
    unsigned char cl6;
    unsigned char al7;
    uint1_t cf8;
    int64_t rax9;

    if (reinterpret_cast<int1_t>((~rsi & 0x7ff0000000000000) == test_in) && !reinterpret_cast<int1_t>((rsi & 0xfffffffffffff) == test_in) || reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rdi) == test_in) && (0xfffffffffffff & rdi) != test_in) {
        rax3 = gf9e;
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
    fun_1169(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 16);
}

uint64_t float64_abs(uint64_t rdi) {
    return 0x7fffffffffffffff & rdi;
}

void local_sin(int64_t rdi) {
    fun_1020();
}

