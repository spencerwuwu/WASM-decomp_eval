
uint64_t fun_1250(int64_t rdi);

uint64_t fun_1275(uint64_t rdi, uint64_t rsi);

uint64_t fun_126d(uint64_t rdi, uint64_t rsi);

void test_in(int64_t rdi, int32_t esi);

unsigned char* g12ae = reinterpret_cast<unsigned char*>(0x8348f0894c100880);

int64_t fun_11e7(uint64_t rdi, uint64_t rsi) {
    int64_t rdx3;
    int64_t rbp4;
    uint32_t esi5;
    int1_t cf6;
    int64_t rax7;
    uint64_t rax8;
    uint64_t rdx9;
    uint64_t rax10;
    uint64_t rax11;
    uint64_t r12_12;
    uint64_t rbx13;
    unsigned char* rax14;
    int64_t v15;

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
        rax8 = fun_1250(rax7);
        rdx9 = rax10 >> 63;
        rax11 = rax8 >> 63;
        if (*reinterpret_cast<int32_t*>(&rdx9) != *reinterpret_cast<int32_t*>(&rax11)) {
            rax10 = fun_1275(rax10, rax8);
        } else {
            rax10 = fun_126d(rax10, rax8);
        }
        if (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rax8) == test_in)) 
            goto addr_11c0_13;
        if ((rax8 & 0xfffffffffffff) != test_in) 
            break;
        addr_11c0_13:
        ++rbp4;
        if ((rax8 & 0x7fffffffffffffff) <= r12_12) 
            goto addr_12b1_15;
        rax7 = fun_11e7(rax8, rbx13);
    }
    rax14 = g12ae;
    *rax14 = reinterpret_cast<unsigned char>(*rax14 | 16);
    addr_12b1_15:
    goto v15;
}

uint64_t fun_1250(int64_t rdi) {
    uint64_t rdx2;
    uint64_t rax3;
    uint64_t rax4;
    uint64_t rax5;
    int64_t rbp6;
    uint64_t r12_7;
    uint64_t rbx8;
    int64_t rax9;
    int64_t rdx10;
    uint32_t esi11;
    int1_t cf12;
    unsigned char* rax13;
    int64_t v14;

    while (1) {
        rdx2 = rax3 >> 63;
        rax4 = rax5 >> 63;
        if (*reinterpret_cast<int32_t*>(&rdx2) != *reinterpret_cast<int32_t*>(&rax4)) {
            rax3 = fun_1275(rax3, rax5);
        } else {
            rax3 = fun_126d(rax3, rax5);
        }
        if (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rax5) == test_in)) 
            goto addr_11c0_6;
        if ((rax5 & 0xfffffffffffff) != test_in) 
            break;
        addr_11c0_6:
        ++rbp6;
        if ((rax5 & 0x7fffffffffffffff) <= r12_7) 
            goto addr_12b1_8;
        rax9 = fun_11e7(rax5, rbx8);
        rdx10 = (rbp6 * 2 + 1) * (rbp6 * 2);
        esi11 = *reinterpret_cast<uint32_t*>(&rdx10) << 16;
        if (*reinterpret_cast<uint32_t*>(&rdx10) >= 0x10000) {
            esi11 = *reinterpret_cast<uint32_t*>(&rdx10);
        }
        cf12 = esi11 < 0x1000000;
        if (!cf12) {
        }
        if (!cf12) {
        }
        rax5 = fun_1250(rax9);
    }
    rax13 = g12ae;
    *rax13 = reinterpret_cast<unsigned char>(*rax13 | 16);
    addr_12b1_8:
    goto v14;
}

uint64_t fun_126d(uint64_t rdi, uint64_t rsi) {
    uint64_t rax3;
    int64_t rbp4;
    uint64_t r12_5;
    uint64_t rbx6;
    int64_t rax7;
    int64_t rdx8;
    uint32_t esi9;
    int1_t cf10;
    uint64_t rdx11;
    uint64_t rax12;
    uint64_t rax13;
    unsigned char* rax14;
    int64_t v15;

    while (1) {
        while (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rax3) == test_in) || (rax3 & 0xfffffffffffff) == test_in) {
            ++rbp4;
            if ((rax3 & 0x7fffffffffffffff) <= r12_5) 
                goto addr_12b1_4;
            rax7 = fun_11e7(rax3, rbx6);
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
            rax3 = fun_1250(rax7);
            rdx11 = rax12 >> 63;
            rax13 = rax3 >> 63;
            if (*reinterpret_cast<int32_t*>(&rdx11) == *reinterpret_cast<int32_t*>(&rax13)) 
                goto addr_1268_14;
            rax12 = fun_1275(rax12, rax3);
        }
        break;
        addr_1268_14:
        rax12 = fun_126d(rax12, rax3);
    }
    rax14 = g12ae;
    *rax14 = reinterpret_cast<unsigned char>(*rax14 | 16);
    addr_12b1_4:
    goto v15;
}

uint120_t g1338 = 0x4500000000258b4c;

int64_t fun_1359(int64_t rdi, int64_t rsi);

int32_t fun_1377();

void fun_138b(int32_t* rdi, int32_t* rsi);

void fun_13c7(int64_t rdi, int64_t rsi);

void fun_130d(int32_t* rdi, int32_t* rsi) {
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
    r15_5 = *reinterpret_cast<int64_t**>(&g1338);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(test_in);
    do {
        rdi7 = r15_5[r13_6];
        fun_1359(rdi7, rsi4);
        rsp3 = rsp3 - 2 + 2;
        ++r13_6;
    } while (r13_6 != 36);
    rdi8 = rsp3;
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(test_in);
    eax10 = fun_1377();
    if (eax10 != test_in) {
        rdi8 = reinterpret_cast<int32_t*>(0x1382);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_138b(0x1382, rsi9);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r14]");
    fun_13c7(0x13c0, rsi9 + 1);
    goto v11;
}

int64_t fun_1359(int64_t rdi, int64_t rsi) {
    int64_t r13_3;
    int64_t rdi4;
    int64_t* r15_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t eax8;
    int64_t v9;

    while (++r13_3, r13_3 != 36) {
        rdi4 = r15_5[r13_3];
        fun_1359(rdi4, rsi);
    }
    rdi6 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(test_in);
    eax8 = fun_1377();
    if (eax8 != test_in) {
        rdi6 = reinterpret_cast<int32_t*>(0x1382);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_138b(0x1382, rsi7);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi6 = *rsi7;
    __asm__("subsd xmm0, [r14]");
    fun_13c7(0x13c0, rsi7 + 1);
    goto v9;
}

int32_t g1382 = 0xc031c689;

int32_t fun_1377() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != test_in) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_138b(0x1382, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g1382 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_13c7(0x13c0, rsi2 + 1);
    goto v4;
}

void fun_138b(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_13c7(0x13c0, rsi + 1);
    goto v3;
}

void fun_13c7(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

uint64_t fun_1275(uint64_t rdi, uint64_t rsi) {
    uint64_t rax3;
    int64_t rbp4;
    uint64_t r12_5;
    uint64_t rbx6;
    int64_t rax7;
    int64_t rdx8;
    uint32_t esi9;
    int1_t cf10;
    uint64_t rdx11;
    uint64_t rax12;
    uint64_t rax13;
    unsigned char* rax14;
    int64_t v15;

    while (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rax3) == test_in) || (rax3 & 0xfffffffffffff) == test_in) {
        ++rbp4;
        if ((rax3 & 0x7fffffffffffffff) <= r12_5) 
            goto addr_12b1_3;
        rax7 = fun_11e7(rax3, rbx6);
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
        rax3 = fun_1250(rax7);
        rdx11 = rax12 >> 63;
        rax13 = rax3 >> 63;
        if (*reinterpret_cast<int32_t*>(&rdx11) != *reinterpret_cast<int32_t*>(&rax13)) {
            rax12 = fun_1275(rax12, rax3);
        } else {
            rax12 = fun_126d(rax12, rax3);
        }
    }
    rax14 = g12ae;
    *rax14 = reinterpret_cast<unsigned char>(*rax14 | 16);
    addr_12b1_3:
    goto v15;
}

void fun_12f9(int32_t* rdi) {
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
        rdi = reinterpret_cast<int32_t*>(0x1304);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_130d(0x1304, rsi4);
        rsp2 = rsp2 - 2 + 2;
    }
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    rsi6 = reinterpret_cast<int64_t>(rsi4 + 1);
    r15_7 = *reinterpret_cast<int64_t**>(&g1338);
    *reinterpret_cast<int32_t*>(&r13_8) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_8) + 4) = reinterpret_cast<int32_t>(test_in);
    do {
        rdi9 = r15_7[r13_8];
        fun_1359(rdi9, rsi6);
        rsp2 = rsp2 - 2 + 2;
        ++r13_8;
    } while (r13_8 != 36);
    rdi10 = rsp2;
    *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(test_in);
    eax12 = fun_1377();
    if (eax12 != test_in) {
        rdi10 = reinterpret_cast<int32_t*>(0x1382);
        *reinterpret_cast<int32_t*>(&rsi11) = eax12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_138b(0x1382, rsi11);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi10 = *rsi11;
    __asm__("subsd xmm0, [r14]");
    fun_13c7(0x13c0, rsi11 + 1);
    goto v13;
}

void fun_1190() {
    uint64_t rbx1;
    int64_t rbx2;
    uint64_t rax3;
    int64_t rbp4;
    uint64_t r14_5;
    uint64_t r15_6;
    uint64_t r15_7;
    int64_t rax8;
    int64_t rdx9;
    uint32_t esi10;
    int1_t cf11;
    uint64_t rax12;
    uint64_t rdx13;
    uint64_t rax14;
    uint64_t rax15;
    unsigned char* rax16;
    int64_t v17;

    rbx1 = reinterpret_cast<uint64_t>(rbx2 + 1) ^ rax3;
    *reinterpret_cast<int32_t*>(&rbp4) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp4) + 4) = reinterpret_cast<int32_t>(test_in);
    r14_5 = r15_6;
    do {
        rax8 = fun_11e7(r15_7, rbx1);
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
        rax12 = fun_1250(rax8);
        r15_7 = rax12;
        rdx13 = r14_5 >> 63;
        rax14 = rax12 >> 63;
        if (*reinterpret_cast<int32_t*>(&rdx13) != *reinterpret_cast<int32_t*>(&rax14)) {
            rax15 = fun_1275(r14_5, r15_7);
        } else {
            rax15 = fun_126d(r14_5, r15_7);
        }
        r14_5 = rax15;
        if (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~r15_7) == test_in)) 
            continue;
        if ((r15_7 & 0xfffffffffffff) != test_in) 
            break;
        ++rbp4;
    } while ((r15_7 & 0x7fffffffffffffff) > 0x3ee4f8b588e368f0);
    goto addr_12b1_17;
    rax16 = g12ae;
    *rax16 = reinterpret_cast<unsigned char>(*rax16 | 16);
    addr_12b1_17:
    goto v17;
}

void test_in(int64_t rdi, int32_t esi) {
    if (esi != test_in) {
        if (esi > 63) {
        }
    }
}

void fun_23c() {
}

unsigned char* g4fd = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

void fun_468(uint64_t rdi, uint64_t rsi, int64_t rdx, int32_t ecx) {
    uint64_t rcx5;
    int64_t r10_6;
    uint64_t r9_7;
    uint64_t r9_8;
    uint64_t r11_9;
    uint32_t r8d10;
    int32_t eax11;
    uint32_t ebx12;
    int32_t ebx13;
    int32_t ebx14;
    uint32_t esi15;
    uint1_t zf16;
    int32_t eax17;
    uint64_t r10_18;
    uint32_t r8d19;
    unsigned char cl20;
    unsigned char dl21;
    unsigned char* r8_22;
    int32_t eax23;
    int32_t eax24;
    int32_t eax25;
    int32_t ebx26;
    uint64_t r10_27;
    uint64_t r10_28;
    uint64_t rcx29;
    uint32_t ecx30;
    uint32_t ecx31;
    uint64_t rcx32;
    uint32_t ecx33;
    uint64_t rax34;
    uint32_t ecx35;
    uint64_t rcx36;
    int64_t v37;

    rcx5 = reinterpret_cast<uint64_t>(r10_6 - 0x200);
    r9_7 = r9_8 & rcx5;
    r11_9 = rsi << 9 & rcx5;
    r8d10 = eax11 - ebx12;
    if (eax11 <= ebx13) {
        if (reinterpret_cast<int32_t>(r8d10) < reinterpret_cast<int32_t>(test_in)) {
            if (ebx14 != 0x7ff) {
                esi15 = reinterpret_cast<uint32_t>(test_in);
                zf16 = reinterpret_cast<uint1_t>(eax17 == test_in);
                *reinterpret_cast<unsigned char*>(&esi15) = zf16;
                if (!zf16) {
                    r9_7 = r9_7 | r10_18;
                }
                r8d19 = r8d10 + esi15;
                if (r8d19 != test_in) 
                    goto addr_625_7;
            } else {
                if (!reinterpret_cast<int1_t>(r11_9 == test_in)) {
                    addr_49f_9:
                    cl20 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdi << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdi & 0x7ff8000000000000) == 0x7ff0000000000000)));
                    dl21 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
                    if (!reinterpret_cast<int1_t>(cl20 == test_in) || dl21 != test_in) {
                        r8_22 = g4fd;
                        *r8_22 = reinterpret_cast<unsigned char>(*r8_22 | 16);
                        goto addr_501_11;
                    }
                } else {
                    goto addr_5f7_13;
                }
            }
        } else {
            if (eax23 == test_in) {
                addr_5e6_15:
                goto addr_5f7_13;
            } else {
                if (eax24 != 0x7ff) {
                    goto addr_5d9_18;
                } else {
                    if (!reinterpret_cast<int1_t>((r11_9 | r9_7) == test_in)) 
                        goto addr_49f_9;
                    goto addr_5f7_13;
                }
            }
        }
    } else {
        if (eax25 != 0x7ff) {
            if (ebx26 != test_in) {
                r11_9 = r11_9 | r10_27;
                goto addr_591_24;
            }
            --r8d10;
            if (r8d10 == test_in) {
                addr_5c1_26:
                r9_7 = (r9_7 | r10_28) + r11_9;
                if (reinterpret_cast<int64_t>(r9_7 + r9_7) < reinterpret_cast<int64_t>(test_in)) {
                    goto addr_5d7_28;
                }
            } else {
                addr_591_24:
                if (r8d10 > 63) {
                    *reinterpret_cast<int32_t*>(&rcx29) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<unsigned char*>(&rcx29) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r11_9 == test_in));
                    goto addr_5be_30;
                } else {
                    ecx30 = r8d10;
                    *reinterpret_cast<signed char*>(&r8d10) = -*reinterpret_cast<signed char*>(&r8d10);
                    ecx31 = r8d10;
                    *reinterpret_cast<int32_t*>(&rcx32) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<unsigned char*>(&rcx32) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r11_9 << *reinterpret_cast<unsigned char*>(&ecx31) == test_in));
                    rcx29 = rcx32 | r11_9 >> *reinterpret_cast<signed char*>(&ecx30);
                    goto addr_5be_30;
                }
            }
        } else {
            if (r9_7 == test_in) 
                goto addr_5f7_13; else 
                goto addr_49f_9;
        }
    }
    addr_649_33:
    goto addr_5c1_26;
    addr_625_7:
    ecx33 = -r8d19;
    if (ecx33 > 63) {
        *reinterpret_cast<int32_t*>(&rax34) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax34) + 4) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<unsigned char*>(&rax34) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r9_7 == test_in));
        r9_7 = rax34;
        goto addr_5c1_26;
    } else {
        ecx35 = r8d19;
        *reinterpret_cast<int32_t*>(&rcx36) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx36) + 4) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<unsigned char*>(&rcx36) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r9_7 << *reinterpret_cast<unsigned char*>(&ecx35) == test_in));
        r9_7 = rcx36 | r9_7 >> *reinterpret_cast<signed char*>(&ecx33);
        goto addr_649_33;
    }
    addr_501_11:
    if (rsi + rsi < 0xffe0000000000001) {
    }
    if (!reinterpret_cast<int1_t>(cl20 == test_in)) {
    }
    if (!reinterpret_cast<int1_t>(dl21 == test_in)) {
    }
    addr_5f7_13:
    goto v37;
    addr_5d9_18:
    goto addr_5e6_15;
    addr_5d7_28:
    goto addr_5d9_18;
    addr_5be_30:
    r11_9 = rcx29;
    goto addr_5c1_26;
}

void ullong_to_double() {
    return;
}

unsigned char* g730 = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

int32_t* g833 = reinterpret_cast<int32_t*>(0xffffffffffffb948);

unsigned char* g79b = reinterpret_cast<unsigned char*>(0xc98545c6eb100880);

unsigned char* g9a8 = reinterpret_cast<unsigned char*>(0xc35bc8ff48100980);

unsigned char* ga24 = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

uint64_t subFloat64Sigs(uint64_t rdi, uint64_t rsi, uint32_t edx) {
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
    uint32_t ecx15;
    uint64_t rcx16;
    uint32_t ecx17;
    uint64_t rcx18;
    unsigned char cl19;
    unsigned char dl20;
    unsigned char* r8_21;
    uint64_t rdx22;
    uint64_t rax23;
    int32_t* rax24;
    unsigned char* rax25;
    uint64_t rcx26;
    uint32_t ecx27;
    uint32_t ecx28;
    uint64_t rcx29;
    uint64_t r8_30;
    uint64_t rdi31;
    uint64_t rax32;
    int32_t ecx33;
    uint64_t rsi34;
    int1_t zf35;
    uint32_t edi36;
    int32_t r8d37;
    uint1_t cf38;
    int64_t r8_39;
    int32_t esi40;
    uint32_t r10d41;
    int1_t cf42;
    int64_t r10_43;
    uint64_t rsi44;
    uint64_t rdi45;
    uint64_t rcx46;
    uint64_t r8_47;
    uint64_t r9_48;
    uint64_t rdx49;
    uint64_t r9_50;
    unsigned char* rcx51;
    int64_t v52;
    int64_t v53;
    unsigned char* r8_54;
    uint64_t r8_55;
    uint64_t rcx56;
    uint64_t rax57;
    uint64_t r8_58;
    uint64_t rcx59;
    uint64_t rdx60;
    uint64_t r9_61;
    uint64_t rsi62;
    uint64_t r10_63;
    int64_t r8_64;
    int64_t rdx65;
    uint64_t rdx66;
    int64_t rsi67;
    uint64_t tmp64_68;
    uint64_t rcx69;
    uint64_t rcx70;
    uint64_t rcx71;
    uint32_t esi72;
    uint32_t r11d73;
    uint1_t cf74;
    int64_t r11_75;
    uint32_t ebx76;
    uint32_t ecx77;
    int1_t cf78;
    int64_t rcx79;
    int64_t rbx80;
    int32_t ecx81;
    uint64_t r10_82;
    uint32_t ecx83;
    uint32_t r11d84;
    uint1_t cf85;
    int64_t r11_86;
    uint32_t ebx87;
    uint32_t r10d88;
    int1_t cf89;
    int64_t r10_90;
    int64_t rbx91;
    int32_t ecx92;

    rbx4 = rdi >> 52;
    ebx5 = *reinterpret_cast<uint32_t*>(&rbx4) & 0x7ff;
    r9_6 = rsi >> 52;
    r9d7 = *reinterpret_cast<uint32_t*>(&r9_6) & 0x7ff;
    r11_8 = rdi << 10 & 0x3ffffffffffffc00;
    rax9 = rsi << 10 & 0x3ffffffffffffc00;
    r8d10 = ebx5 - r9d7;
    if (reinterpret_cast<int32_t>(ebx5) <= reinterpret_cast<int32_t>(r9d7)) {
        if (reinterpret_cast<int32_t>(r8d10) < reinterpret_cast<int32_t>(test_in)) {
            if (r9d7 != 0x7ff) {
                rsi11 = r11_8 | 0x4000000000000000;
                ecx12 = reinterpret_cast<uint32_t>(test_in);
                zf13 = reinterpret_cast<uint1_t>(ebx5 == test_in);
                *reinterpret_cast<unsigned char*>(&ecx12) = zf13;
                if (zf13) {
                    rsi11 = r11_8;
                }
                r8d14 = r8d10 + ecx12;
                if (r8d14 != test_in) {
                    ecx15 = -r8d14;
                    if (ecx15 > 63) {
                        *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<unsigned char*>(&rcx16) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi11 == test_in));
                    } else {
                        ecx17 = r8d14;
                        *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<unsigned char*>(&rcx18) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi11 << *reinterpret_cast<unsigned char*>(&ecx17) == test_in));
                        rcx16 = rcx18 | rsi11 >> *reinterpret_cast<signed char*>(&ecx15);
                    }
                    rsi11 = rcx16;
                }
                rax9 = rax9 | 0x4000000000000000;
                r11_8 = rsi11;
                goto addr_898_12;
            } else {
                if (!reinterpret_cast<int1_t>(rax9 == test_in)) {
                    addr_6d2_14:
                    cl19 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdi << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdi & 0x7ff8000000000000) == 0x7ff0000000000000)));
                    dl20 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
                    if (!reinterpret_cast<int1_t>(cl19 == test_in) || dl20 != test_in) {
                        r8_21 = g730;
                        *r8_21 = reinterpret_cast<unsigned char>(*r8_21 | 16);
                    }
                } else {
                    *reinterpret_cast<int32_t*>(&rdx22) = reinterpret_cast<int32_t>(~edx);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(test_in);
                    rdi = 0x7ff0000000000000 | rdx22 << 63;
                    goto addr_766_17;
                }
            }
        } else {
            if (ebx5 == test_in) {
                ebx5 = 1;
                r9d7 = 1;
                goto addr_81a_20;
            }
            if (ebx5 != 0x7ff) {
                addr_81a_20:
                if (rax9 >= r11_8) {
                    if (rax9 > r11_8) {
                        addr_898_12:
                        rax23 = rax9 - r11_8;
                        edx = edx ^ 1;
                        goto addr_89e_23;
                    } else {
                        rax24 = g833;
                        *reinterpret_cast<int32_t*>(&rdi) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi) + 4) = reinterpret_cast<int32_t>(test_in);
                        if (*rax24 == 3) {
                            rdi = 0x8000000000000000;
                        }
                        goto addr_766_17;
                    }
                } else {
                    addr_81f_27:
                    r9d7 = ebx5;
                    rax23 = r11_8 - rax9;
                    goto addr_89e_23;
                }
            } else {
                if (!reinterpret_cast<int1_t>((rax9 | r11_8) == test_in)) 
                    goto addr_6d2_14;
                rdi = 0x7fffffffffffffff;
                rax25 = g79b;
                *rax25 = reinterpret_cast<unsigned char>(*rax25 | 16);
                goto addr_766_17;
            }
        }
    } else {
        if (ebx5 != 0x7ff) {
            if (r9d7 == test_in) {
                --r8d10;
                if (r8d10 == test_in) {
                    addr_80a_33:
                    r11_8 = r11_8 | 0x4000000000000000;
                    goto addr_81f_27;
                } else {
                    addr_7da_34:
                    if (r8d10 > 63) {
                        *reinterpret_cast<int32_t*>(&rcx26) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<unsigned char*>(&rcx26) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rax9 == test_in));
                    } else {
                        ecx27 = r8d10;
                        *reinterpret_cast<signed char*>(&r8d10) = -*reinterpret_cast<signed char*>(&r8d10);
                        ecx28 = r8d10;
                        *reinterpret_cast<int32_t*>(&rcx29) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<unsigned char*>(&rcx29) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rax9 << *reinterpret_cast<unsigned char*>(&ecx28) == test_in));
                        rcx26 = rcx29 | rax9 >> *reinterpret_cast<signed char*>(&ecx27);
                    }
                }
                rax9 = rcx26;
                goto addr_80a_33;
            } else {
                rax9 = rax9 | 0x4000000000000000;
                goto addr_7da_34;
            }
        } else {
            if (r11_8 == test_in) 
                goto addr_766_17; else 
                goto addr_6d2_14;
        }
    }
    r8_30 = rsi | 0x8000000000000;
    rdi31 = rdi | 0x8000000000000;
    rax32 = r8_30;
    if (rsi + rsi < 0xffe0000000000001) {
        rax32 = rdi31;
    }
    if (!reinterpret_cast<int1_t>(cl19 == test_in)) {
        rax32 = rdi31;
    }
    if (!reinterpret_cast<int1_t>(dl20 == test_in)) {
        rax32 = r8_30;
    }
    rdi = rax32;
    addr_766_17:
    return rdi;
    addr_89e_23:
    ecx33 = reinterpret_cast<int32_t>(test_in);
    rsi34 = rax23 >> 32;
    zf35 = reinterpret_cast<int1_t>(rsi34 == test_in);
    *reinterpret_cast<unsigned char*>(&ecx33) = reinterpret_cast<uint1_t>(!zf35);
    if (zf35) {
        *reinterpret_cast<uint32_t*>(&rsi34) = *reinterpret_cast<uint32_t*>(&rax23);
    }
    edi36 = *reinterpret_cast<uint32_t*>(&rsi34) << 16;
    r8d37 = reinterpret_cast<int32_t>(test_in);
    cf38 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi34) < 0x10000);
    if (!cf38) {
        edi36 = *reinterpret_cast<uint32_t*>(&rsi34);
    }
    *reinterpret_cast<unsigned char*>(&r8d37) = cf38;
    *reinterpret_cast<int32_t*>(&r8_39) = r8d37 << 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_39) + 4) = reinterpret_cast<int32_t>(test_in);
    esi40 = static_cast<int32_t>(r8_39 + 8);
    r10d41 = edi36 << 8;
    cf42 = edi36 < 0x1000000;
    if (!cf42) {
        r10d41 = edi36;
    }
    if (!cf42) {
        esi40 = *reinterpret_cast<int32_t*>(&r8_39);
    }
    *reinterpret_cast<uint32_t*>(&r10_43) = r10d41 >> 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_43) + 4) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<uint32_t*>(&rsi44) = ~((reinterpret_cast<uint32_t>(-ecx33) | 31) + *reinterpret_cast<int32_t*>(0x8ea + r10_43 * 4) + esi40) + r9d7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi44) + 4) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<uint32_t*>(&rdi45) = edx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(test_in);
    if (!test_in) {
    }
    rcx46 = rdi45;
    r8_47 = rdi45 & 0xfffffffffffff;
    r9_48 = reinterpret_cast<uint64_t>(test_in);
    rdx49 = 0xfffffffffffff & rsi44;
    if (!1) {
        if (reinterpret_cast<int1_t>(r8_47 == test_in) && (rdx49 == test_in || !test_in)) {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(test_in) | rdx49) == test_in)) 
                goto addr_bef_61; else 
                goto addr_9a1_62;
        }
    }
    if (!1) {
        if (rdx49 == test_in) {
            addr_bd5_65:
            *reinterpret_cast<uint32_t*>(&r9_50) = *reinterpret_cast<uint32_t*>(&r9_48) & 0x7ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_50) + 4) = reinterpret_cast<int32_t>(test_in);
            if ((r9_50 | r8_47) == test_in) {
                addr_9a1_62:
                rcx51 = g9a8;
                *rcx51 = reinterpret_cast<unsigned char>(*rcx51 | 16);
                goto v52;
            } else {
                addr_bef_61:
                goto v53;
            }
        } else {
            if (test_in || !1) {
                r8_54 = ga24;
                *r8_54 = reinterpret_cast<unsigned char>(*r8_54 | 16);
            }
        }
        r8_55 = rsi44 | 0x8000000000000;
        rcx56 = rcx46 | 0x8000000000000;
        rax57 = r8_55;
        if (rsi44 + rsi44 < 0xffe0000000000001) {
            rax57 = rcx56;
        }
        if (test_in) {
            rax57 = rcx56;
        }
        if (test_in) {
            rax57 = r8_55;
        }
        return rax57;
    }
    if (test_in) {
        addr_ad4_76:
        if (test_in) {
            addr_b48_77:
            r8_58 = r8_47 << 10;
            rcx59 = 0x4000000000000000 | r8_58;
            rdx60 = rdx49 << 11;
            r9_61 = 0x8000000000000000 | rdx60;
            rsi62 = rcx59 >> 32;
            r10_63 = r9_61 >> 32;
            *reinterpret_cast<int32_t*>(&r8_64) = *reinterpret_cast<int32_t*>(&r8_58);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_64) + 4) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<int32_t*>(&rdx65) = *reinterpret_cast<int32_t*>(&rdx60);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx65) + 4) = reinterpret_cast<int32_t>(test_in);
            rdx66 = rdx65 * rsi62;
            *reinterpret_cast<int32_t*>(&rsi67) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi67) + 4) = reinterpret_cast<int32_t>(test_in);
            tmp64_68 = rdx66 + r8_64 * r10_63;
            *reinterpret_cast<unsigned char*>(&rsi67) = reinterpret_cast<uint1_t>(tmp64_68 < rdx66);
            r9_48 = r9_61 * rcx59;
            r8_47 = (tmp64_68 >> 32) + r10_63 * rsi62 + (rsi67 << 32) + reinterpret_cast<uint1_t>(r9_48 < tmp64_68 << 32);
            *reinterpret_cast<int32_t*>(&rcx69) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx69) + 4) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<unsigned char*>(&rcx69) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r9_48 == test_in));
            rcx70 = rcx69 | r8_47;
            if (reinterpret_cast<int64_t>(rcx70 + rcx70) < reinterpret_cast<int64_t>(test_in)) {
            }
        } else {
            if (rdx49 == test_in) {
                goto addr_c13_81;
            } else {
                rcx71 = reinterpret_cast<uint64_t>(test_in);
                if (1) {
                    *reinterpret_cast<uint32_t*>(&rcx71) = *reinterpret_cast<uint32_t*>(&rsi44);
                }
                esi72 = *reinterpret_cast<uint32_t*>(&rcx71) << 16;
                r11d73 = reinterpret_cast<uint32_t>(test_in);
                cf74 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx71) < 0x10000);
                if (!cf74) {
                    esi72 = *reinterpret_cast<uint32_t*>(&rcx71);
                }
                *reinterpret_cast<unsigned char*>(&r11d73) = cf74;
                *reinterpret_cast<uint32_t*>(&r11_75) = r11d73 << 4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_75) + 4) = reinterpret_cast<int32_t>(test_in);
                ebx76 = static_cast<uint32_t>(r11_75 + 8);
                ecx77 = esi72 << 8;
                cf78 = esi72 < 0x1000000;
                if (!cf78) {
                    ecx77 = esi72;
                }
                if (!cf78) {
                    ebx76 = *reinterpret_cast<uint32_t*>(&r11_75);
                }
                *reinterpret_cast<uint32_t*>(&rcx79) = ecx77 >> 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx79) + 4) = reinterpret_cast<int32_t>(test_in);
                *reinterpret_cast<uint32_t*>(&rbx80) = (ebx76 | 32) + *reinterpret_cast<int32_t*>(0xb36 + rcx79 * 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx80) + 4) = reinterpret_cast<int32_t>(test_in);
                ecx81 = static_cast<int32_t>(rbx80 - 11);
                rdx49 = rdx49 << *reinterpret_cast<unsigned char*>(&ecx81);
                goto addr_b48_77;
            }
        }
    } else {
        if (r8_47 == test_in) {
            goto addr_c13_81;
        } else {
            r10_82 = reinterpret_cast<uint64_t>(test_in);
            if (1) {
                *reinterpret_cast<uint32_t*>(&r10_82) = *reinterpret_cast<uint32_t*>(&rcx46);
            }
            ecx83 = *reinterpret_cast<uint32_t*>(&r10_82) << 16;
            r11d84 = reinterpret_cast<uint32_t>(test_in);
            cf85 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r10_82) < 0x10000);
            if (!cf85) {
                ecx83 = *reinterpret_cast<uint32_t*>(&r10_82);
            }
            *reinterpret_cast<unsigned char*>(&r11d84) = cf85;
            *reinterpret_cast<uint32_t*>(&r11_86) = r11d84 << 4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_86) + 4) = reinterpret_cast<int32_t>(test_in);
            ebx87 = static_cast<uint32_t>(r11_86 + 8);
            r10d88 = ecx83 << 8;
            cf89 = ecx83 < 0x1000000;
            if (!cf89) {
                r10d88 = ecx83;
            }
            if (!cf89) {
                ebx87 = *reinterpret_cast<uint32_t*>(&r11_86);
            }
            *reinterpret_cast<uint32_t*>(&r10_90) = r10d88 >> 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_90) + 4) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<uint32_t*>(&rbx91) = (ebx87 | 32) + *reinterpret_cast<int32_t*>(0xabe + r10_90 * 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx91) + 4) = reinterpret_cast<int32_t>(test_in);
            ecx92 = static_cast<int32_t>(rbx91 - 11);
            r8_47 = r8_47 << *reinterpret_cast<unsigned char*>(&ecx92);
            goto addr_ad4_76;
        }
    }
    goto addr_bd5_65;
    addr_c13_81:
    return test_in;
}

unsigned char* g110e = reinterpret_cast<unsigned char*>(0xc0b60fc031100880);

int64_t float64_ge(uint64_t rdi, uint64_t rsi) {
    unsigned char* rax3;
    uint64_t rax4;
    uint64_t rcx5;
    unsigned char cl6;
    unsigned char al7;
    uint1_t cf8;
    int64_t rax9;

    if (reinterpret_cast<int1_t>((~rsi & 0x7ff0000000000000) == test_in) && !reinterpret_cast<int1_t>((rsi & 0xfffffffffffff) == test_in) || reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rdi) == test_in) && (0xfffffffffffff & rdi) != test_in) {
        rax3 = g110e;
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
    fun_12f9(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 16);
}

uint32_t* gef6 = reinterpret_cast<uint32_t*>(0xaf840f118b);

unsigned char* g108e = reinterpret_cast<unsigned char*>(0xc0b60fc031100880);

unsigned char* gd1b = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

unsigned char* gc87 = reinterpret_cast<unsigned char*>(0xb848100880);

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
    int64_t rax27;
    uint64_t rdi28;
    uint64_t r8_29;
    uint64_t r11_30;
    uint64_t r10_31;
    int64_t rcx32;
    uint64_t r8_33;
    uint64_t rsi34;
    uint64_t r14_35;
    uint64_t r15_36;
    uint64_t rcx37;
    uint64_t rcx38;
    uint64_t rax39;
    uint64_t r11_40;
    uint64_t r12_41;
    uint64_t r13_42;
    uint64_t rbp43;
    uint64_t rax44;
    uint64_t rdx45;
    uint1_t cf46;
    uint64_t rdx47;
    uint64_t r9_48;
    uint64_t tmp64_49;
    uint1_t cf50;
    uint64_t rdx51;
    uint64_t rdx52;
    uint64_t rcx53;
    int64_t r9_54;
    uint64_t r9_55;
    uint64_t r14_56;
    uint64_t tmp64_57;
    uint64_t rbx58;
    uint64_t rax59;
    uint64_t r8_60;
    uint1_t cf61;
    uint64_t r8_62;
    uint64_t tmp64_63;
    uint1_t cf64;
    uint32_t eax65;
    uint64_t rcx66;
    uint1_t zf67;
    uint32_t edx68;
    uint32_t esi69;
    uint1_t cf70;
    int64_t rsi71;
    uint32_t r11d72;
    uint32_t ecx73;
    int1_t cf74;
    int64_t rcx75;
    int64_t r11_76;
    int32_t ecx77;
    unsigned char* rax78;
    unsigned char cl79;
    unsigned char al80;
    uint1_t cf81;
    uint64_t rax82;
    unsigned char cl83;
    unsigned char dil84;
    unsigned char* r8_85;
    unsigned char* rax86;
    uint64_t r8_87;
    uint64_t rdx88;

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
                rcx12 = gef6;
                if ((rcx11 | r10_4) == test_in) {
                    *rcx12 = *rcx12 | 16;
                    rax13 = 0x7fffffffffffffff;
                } else {
                    *rcx12 = *rcx12 | 2;
                    goto addr_f03_7;
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
                *reinterpret_cast<uint32_t*>(&rbx25) = (ebx21 | ecx14 << 5) + *reinterpret_cast<int32_t*>(0xdb0 + r8_24 * 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx25) + 4) = reinterpret_cast<int32_t>(test_in);
                ecx26 = static_cast<int32_t>(rbx25 - 11);
                r9_7 = r9_7 << *reinterpret_cast<unsigned char*>(&ecx26);
                r8d9 = 12 - *reinterpret_cast<uint32_t*>(&rbx25);
                goto addr_dc5_17;
            }
        } else {
            if (r8d9 != 0x7ff) {
                addr_dc5_17:
                if (!reinterpret_cast<int1_t>(eax6 == test_in)) {
                    addr_e31_19:
                    *reinterpret_cast<uint32_t*>(&rax27) = eax6 - r8d9;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = reinterpret_cast<int32_t>(test_in);
                    rdi28 = rdi10 >> 63;
                    r8_29 = 0x4000000000000000 | r10_4 << 10;
                    r11_30 = r9_7 << 11;
                    r10_31 = 0x8000000000000000 | r11_30;
                    *reinterpret_cast<int32_t*>(&rcx32) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<unsigned char*>(&rcx32) = reinterpret_cast<uint1_t>(r10_31 <= r8_29 + r8_29);
                    r8_33 = r8_29 >> *reinterpret_cast<unsigned char*>(&rcx32);
                    *reinterpret_cast<int32_t*>(&rsi34) = static_cast<int32_t>(rcx32 + rax27) + 0x3fd;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(test_in);
                    if (r10_31 > r8_33) {
                        r14_35 = r10_31 >> 32;
                        r15_36 = r10_31 & 0xffffffff00000000;
                        rcx37 = 0xffffffff00000000;
                        if (r15_36 > r8_33) {
                            if (r8_33 >> 32 == test_in) {
                                *reinterpret_cast<uint32_t*>(&rcx38) = *reinterpret_cast<uint32_t*>(&r8_33) / *reinterpret_cast<uint32_t*>(&r14_35);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx38) + 4) = reinterpret_cast<int32_t>(test_in);
                            } else {
                                rcx38 = r8_33 / r14_35;
                            }
                            rcx37 = rcx38 << 32;
                        }
                        rax39 = rcx37 >> 32;
                        *reinterpret_cast<uint32_t*>(&r11_40) = *reinterpret_cast<uint32_t*>(&r11_30) & 0xfffff800;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_40) + 4) = reinterpret_cast<int32_t>(test_in);
                        r12_41 = rax39 * r11_40;
                        r13_42 = (r12_41 >> 32) + rax39 * r14_35;
                        rbp43 = rcx37 * r10_31;
                        rax44 = -rbp43;
                        rdx45 = r8_33 - (r13_42 + reinterpret_cast<uint1_t>(r8_33 < r13_42 + reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rbp43 == test_in))));
                        cf46 = reinterpret_cast<uint1_t>(rdx45 < reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbp43 < r12_41 << 32)));
                        rdx47 = rdx45 - (reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf46));
                        if (reinterpret_cast<int64_t>(rdx47) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf46))) {
                            r9_48 = r9_7 << 43;
                            do {
                                rcx37 = rcx37 + 0xffffffff00000000;
                                tmp64_49 = rax44 + r9_48;
                                cf50 = reinterpret_cast<uint1_t>(tmp64_49 < rax44);
                                rax44 = tmp64_49;
                                rdx47 = rdx47 + r14_35 + cf50;
                            } while (reinterpret_cast<int64_t>(rdx47) < reinterpret_cast<int64_t>(test_in));
                        }
                        __asm__("shrd rax, rdx, 0x20");
                        *reinterpret_cast<uint32_t*>(&rdx51) = 0xffffffff;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx51) + 4) = reinterpret_cast<int32_t>(test_in);
                        if (r15_36 > rax44) {
                            if (rax44 >> 32 == test_in) {
                                *reinterpret_cast<uint32_t*>(&rdx51) = *reinterpret_cast<uint32_t*>(&rax44) / *reinterpret_cast<uint32_t*>(&r14_35);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx51) + 4) = reinterpret_cast<int32_t>(test_in);
                            } else {
                                rdx51 = rax44 / r14_35;
                            }
                        }
                        rdx52 = rdx51 | rcx37;
                        if ((*reinterpret_cast<uint32_t*>(&rdx52) & 0x1ff) <= 2) {
                            rcx53 = rdx52 >> 32;
                            *reinterpret_cast<uint32_t*>(&r9_54) = *reinterpret_cast<uint32_t*>(&rdx52);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_54) + 4) = reinterpret_cast<int32_t>(test_in);
                            r9_55 = r9_54 * r14_35;
                            *reinterpret_cast<int32_t*>(&r14_56) = reinterpret_cast<int32_t>(test_in);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_56) + 4) = reinterpret_cast<int32_t>(test_in);
                            tmp64_57 = r9_55 + r11_40 * rcx53;
                            if (tmp64_57 < r9_55) {
                                r14_56 = 0xffffffff00000000;
                            }
                            rbx58 = rdx52 * r10_31;
                            rax59 = -rbx58;
                            r8_60 = r8_33 - (reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r8_33 < reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rbx58 == test_in)))))) - ((tmp64_57 >> 32) + rcx53 * r14_35) + r14_56;
                            cf61 = reinterpret_cast<uint1_t>(r8_60 < reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rbx58 < tmp64_57 << 32)));
                            r8_62 = r8_60 - (reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf61));
                            if (reinterpret_cast<int64_t>(r8_62) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf61))) {
                                do {
                                    tmp64_63 = rax59 + r10_31;
                                    cf64 = reinterpret_cast<uint1_t>(tmp64_63 < rax59);
                                    rax59 = tmp64_63;
                                    r8_62 = r8_62 + reinterpret_cast<uint64_t>(test_in) + cf64;
                                } while (reinterpret_cast<int64_t>(r8_62) < reinterpret_cast<int64_t>(test_in));
                            }
                            goto addr_1037_39;
                        }
                    }
                } else {
                    if (r10_4 == test_in) {
                        addr_ebe_41:
                        rax13 = rdi10 & 0x8000000000000000;
                    } else {
                        eax65 = reinterpret_cast<uint32_t>(test_in);
                        rcx66 = r10_4 >> 32;
                        zf67 = reinterpret_cast<uint1_t>(rcx66 == test_in);
                        if (zf67) {
                            *reinterpret_cast<uint32_t*>(&rcx66) = *reinterpret_cast<uint32_t*>(&rdx3);
                        }
                        *reinterpret_cast<unsigned char*>(&eax65) = zf67;
                        edx68 = *reinterpret_cast<uint32_t*>(&rcx66) << 16;
                        esi69 = reinterpret_cast<uint32_t>(test_in);
                        cf70 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx66) < 0x10000);
                        if (!cf70) {
                            edx68 = *reinterpret_cast<uint32_t*>(&rcx66);
                        }
                        *reinterpret_cast<unsigned char*>(&esi69) = cf70;
                        *reinterpret_cast<uint32_t*>(&rsi71) = esi69 << 4;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi71) + 4) = reinterpret_cast<int32_t>(test_in);
                        r11d72 = static_cast<uint32_t>(rsi71 + 8);
                        ecx73 = edx68 << 8;
                        cf74 = edx68 < 0x1000000;
                        if (!cf74) {
                            ecx73 = edx68;
                        }
                        if (!cf74) {
                            r11d72 = *reinterpret_cast<uint32_t*>(&rsi71);
                        }
                        *reinterpret_cast<uint32_t*>(&rcx75) = ecx73 >> 24;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx75) + 4) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<uint32_t*>(&r11_76) = (r11d72 | eax65 << 5) + *reinterpret_cast<int32_t*>(0xe1b + rcx75 * 4);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_76) + 4) = reinterpret_cast<int32_t>(test_in);
                        ecx77 = static_cast<int32_t>(r11_76 - 11);
                        r10_4 = r10_4 << *reinterpret_cast<unsigned char*>(&ecx77);
                        eax6 = 12 - *reinterpret_cast<uint32_t*>(&r11_76);
                        goto addr_e31_19;
                    }
                }
            } else {
                if (r9_7 == test_in) 
                    goto addr_ebe_41; else 
                    goto addr_cbb_52;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(r10_4 == test_in)) 
            goto addr_cbb_52;
        if (r8d9 != 0x7ff) 
            goto addr_ed0_55; else 
            goto addr_c7b_56;
    }
    addr_f13_57:
    return rax13;
    addr_f03_7:
    rax13 = 0x7ff0000000000000 | rdi10 & 0x8000000000000000;
    goto addr_f13_57;
    addr_1037_39:
    if (!1 && !reinterpret_cast<int1_t>((rdi28 & 0xfffffffffffff) == test_in) || !1 && (0xfffffffffffff & rsi34) != test_in) {
        rax78 = g108e;
        *rax78 = reinterpret_cast<unsigned char>(*rax78 | 16);
        return test_in;
    } else {
        if (test_in) {
            cl79 = reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rdi28) < reinterpret_cast<int64_t>(test_in));
            al80 = reinterpret_cast<uint1_t>((rsi34 | rdi28) << 1 == test_in);
        } else {
            cl79 = reinterpret_cast<uint1_t>(rdi28 == rsi34);
            cf81 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(test_in) < reinterpret_cast<int32_t>(test_in) + reinterpret_cast<uint1_t>(rdi28 < rsi34));
            al80 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(test_in) - (reinterpret_cast<int32_t>(test_in) + cf81) != reinterpret_cast<int32_t>(test_in) + cf81);
        }
        *reinterpret_cast<uint32_t*>(&rax82) = al80 | cl79;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax82) + 4) = reinterpret_cast<int32_t>(test_in);
        return rax82;
    }
    addr_ed0_55:
    goto addr_f03_7;
    addr_c7b_56:
    if (!reinterpret_cast<int1_t>(r9_7 == test_in)) {
        addr_cbb_52:
        cl83 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx3 << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdx3 & 0x7ff8000000000000) == 0x7ff0000000000000)));
        dil84 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
        if (!reinterpret_cast<int1_t>(cl83 == test_in) || dil84 != test_in) {
            r8_85 = gd1b;
            *r8_85 = reinterpret_cast<unsigned char>(*r8_85 | 16);
        }
    } else {
        rax86 = gc87;
        *rax86 = reinterpret_cast<unsigned char>(*rax86 | 16);
        rax13 = 0x7fffffffffffffff;
        goto addr_f13_57;
    }
    r8_87 = rsi | 0x8000000000000;
    rdx88 = rdx3 | 0x8000000000000;
    rax13 = r8_87;
    if (rsi + rsi < 0xffe0000000000001) {
        rax13 = rdx88;
    }
    if (!reinterpret_cast<int1_t>(cl83 == test_in)) {
        rax13 = rdx88;
    }
    if (!reinterpret_cast<int1_t>(dil84 == test_in)) {
        rax13 = r8_87;
    }
    goto addr_f13_57;
}

uint64_t float64_abs(uint64_t rdi) {
    return 0x7fffffffffffffff & rdi;
}

void local_sin(int64_t rdi) {
    fun_1190();
}

