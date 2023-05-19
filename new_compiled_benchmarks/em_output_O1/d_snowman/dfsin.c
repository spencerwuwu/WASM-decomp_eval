
void test_in(int64_t rdi, int32_t esi);

uint64_t fun_1254(int64_t rdi);

uint64_t fun_1285(uint64_t rdi, uint64_t rsi);

uint64_t fun_1271(uint64_t rdi, uint64_t rsi);

unsigned char* g12be = reinterpret_cast<unsigned char*>(0x8348f0894c100880);

int64_t fun_11e7(uint64_t rdi, uint64_t rsi) {
    uint64_t rdx3;
    int64_t rbp4;
    uint64_t rcx5;
    uint32_t esi6;
    int1_t cf7;
    int64_t rax8;
    uint64_t rax9;
    uint64_t rdx10;
    uint64_t rax11;
    uint64_t rax12;
    uint64_t r12_13;
    uint64_t rbx14;
    unsigned char* rax15;
    int64_t v16;

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
        rax9 = fun_1254(rax8);
        rdx10 = rax11 >> 63;
        rax12 = rax9 >> 63;
        if (*reinterpret_cast<int32_t*>(&rdx10) != *reinterpret_cast<int32_t*>(&rax12)) {
            rax11 = fun_1285(rax11, rax9);
        } else {
            rax11 = fun_1271(rax11, rax9);
        }
        if (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rax9) == test_in)) 
            goto addr_11c0_13;
        if ((rax9 & 0xfffffffffffff) != test_in) 
            break;
        addr_11c0_13:
        ++rbp4;
        if ((rax9 & 0x7fffffffffffffff) <= r12_13) 
            goto addr_12c1_15;
        rax8 = fun_11e7(rax9, rbx14);
    }
    rax15 = g12be;
    *rax15 = reinterpret_cast<unsigned char>(*rax15 | 16);
    addr_12c1_15:
    goto v16;
}

uint64_t fun_1254(int64_t rdi) {
    uint64_t rdx2;
    uint64_t rax3;
    uint64_t rax4;
    uint64_t rax5;
    int64_t rbp6;
    uint64_t r12_7;
    uint64_t rbx8;
    int64_t rax9;
    uint64_t rdx10;
    uint64_t rcx11;
    uint32_t esi12;
    int1_t cf13;
    unsigned char* rax14;
    int64_t v15;

    while (1) {
        rdx2 = rax3 >> 63;
        rax4 = rax5 >> 63;
        if (*reinterpret_cast<int32_t*>(&rdx2) != *reinterpret_cast<int32_t*>(&rax4)) {
            rax3 = fun_1285(rax3, rax5);
        } else {
            rax3 = fun_1271(rax3, rax5);
        }
        if (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rax5) == test_in)) 
            goto addr_11c0_6;
        if ((rax5 & 0xfffffffffffff) != test_in) 
            break;
        addr_11c0_6:
        ++rbp6;
        if ((rax5 & 0x7fffffffffffffff) <= r12_7) 
            goto addr_12c1_8;
        rax9 = fun_11e7(rax5, rbx8);
        rdx10 = reinterpret_cast<uint64_t>((rbp6 * 2 + 1) * (rbp6 * 2));
        rcx11 = rdx10 >> 16;
        esi12 = *reinterpret_cast<uint32_t*>(&rdx10) << 16;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int16_t*>(&rcx11) == test_in)) {
            esi12 = *reinterpret_cast<uint32_t*>(&rdx10);
        }
        cf13 = esi12 < 0x1000000;
        if (!cf13) {
        }
        if (!cf13) {
        }
        rax5 = fun_1254(rax9);
    }
    rax14 = g12be;
    *rax14 = reinterpret_cast<unsigned char>(*rax14 | 16);
    addr_12c1_8:
    goto v15;
}

uint64_t fun_1271(uint64_t rdi, uint64_t rsi) {
    uint64_t rax3;
    int64_t rbp4;
    uint64_t r12_5;
    uint64_t rbx6;
    int64_t rax7;
    uint64_t rdx8;
    uint64_t rcx9;
    uint32_t esi10;
    int1_t cf11;
    uint64_t rdx12;
    uint64_t rax13;
    uint64_t rax14;
    unsigned char* rax15;
    int64_t v16;

    while (1) {
        while (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rax3) == test_in) || (rax3 & 0xfffffffffffff) == test_in) {
            ++rbp4;
            if ((rax3 & 0x7fffffffffffffff) <= r12_5) 
                goto addr_12c1_4;
            rax7 = fun_11e7(rax3, rbx6);
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
            rax3 = fun_1254(rax7);
            rdx12 = rax13 >> 63;
            rax14 = rax3 >> 63;
            if (*reinterpret_cast<int32_t*>(&rdx12) == *reinterpret_cast<int32_t*>(&rax14)) 
                goto addr_126c_14;
            rax13 = fun_1285(rax13, rax3);
        }
        break;
        addr_126c_14:
        rax13 = fun_1271(rax13, rax3);
    }
    rax15 = g12be;
    *rax15 = reinterpret_cast<unsigned char>(*rax15 | 16);
    addr_12c1_4:
    goto v16;
}

uint120_t g1348 = 0x4500000000258b4c;

int64_t fun_1369(int64_t rdi, int64_t rsi);

int32_t fun_1387();

void fun_139b(int32_t* rdi, int32_t* rsi);

void fun_13d7(int64_t rdi, int64_t rsi);

void fun_131d(int32_t* rdi, int32_t* rsi) {
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
    r15_5 = *reinterpret_cast<int64_t**>(&g1348);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(test_in);
    do {
        rdi7 = r15_5[r13_6];
        fun_1369(rdi7, rsi4);
        rsp3 = rsp3 - 2 + 2;
        ++r13_6;
    } while (r13_6 != 36);
    rdi8 = rsp3;
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(test_in);
    eax10 = fun_1387();
    if (eax10 != test_in) {
        rdi8 = reinterpret_cast<int32_t*>(0x1392);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_139b(0x1392, rsi9);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r14]");
    fun_13d7(0x13d0, rsi9 + 1);
    goto v11;
}

int64_t fun_1369(int64_t rdi, int64_t rsi) {
    int64_t r13_3;
    int64_t rdi4;
    int64_t* r15_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t eax8;
    int64_t v9;

    while (++r13_3, r13_3 != 36) {
        rdi4 = r15_5[r13_3];
        fun_1369(rdi4, rsi);
    }
    rdi6 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(test_in);
    eax8 = fun_1387();
    if (eax8 != test_in) {
        rdi6 = reinterpret_cast<int32_t*>(0x1392);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_139b(0x1392, rsi7);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi6 = *rsi7;
    __asm__("subsd xmm0, [r14]");
    fun_13d7(0x13d0, rsi7 + 1);
    goto v9;
}

int32_t g1392 = 0xc031c689;

int32_t fun_1387() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != test_in) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_139b(0x1392, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g1392 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_13d7(0x13d0, rsi2 + 1);
    goto v4;
}

void fun_139b(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_13d7(0x13d0, rsi + 1);
    goto v3;
}

void fun_13d7(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

uint64_t fun_1285(uint64_t rdi, uint64_t rsi) {
    uint64_t rax3;
    int64_t rbp4;
    uint64_t r12_5;
    uint64_t rbx6;
    int64_t rax7;
    uint64_t rdx8;
    uint64_t rcx9;
    uint32_t esi10;
    int1_t cf11;
    uint64_t rdx12;
    uint64_t rax13;
    uint64_t rax14;
    unsigned char* rax15;
    int64_t v16;

    while (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rax3) == test_in) || (rax3 & 0xfffffffffffff) == test_in) {
        ++rbp4;
        if ((rax3 & 0x7fffffffffffffff) <= r12_5) 
            goto addr_12c1_3;
        rax7 = fun_11e7(rax3, rbx6);
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
        rax3 = fun_1254(rax7);
        rdx12 = rax13 >> 63;
        rax14 = rax3 >> 63;
        if (*reinterpret_cast<int32_t*>(&rdx12) != *reinterpret_cast<int32_t*>(&rax14)) {
            rax13 = fun_1285(rax13, rax3);
        } else {
            rax13 = fun_1271(rax13, rax3);
        }
    }
    rax15 = g12be;
    *rax15 = reinterpret_cast<unsigned char>(*rax15 | 16);
    addr_12c1_3:
    goto v16;
}

void fun_1309(int32_t* rdi) {
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
        rdi = reinterpret_cast<int32_t*>(0x1314);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_131d(0x1314, rsi4);
        rsp2 = rsp2 - 2 + 2;
    }
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    rsi6 = reinterpret_cast<int64_t>(rsi4 + 1);
    r15_7 = *reinterpret_cast<int64_t**>(&g1348);
    *reinterpret_cast<int32_t*>(&r13_8) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_8) + 4) = reinterpret_cast<int32_t>(test_in);
    do {
        rdi9 = r15_7[r13_8];
        fun_1369(rdi9, rsi6);
        rsp2 = rsp2 - 2 + 2;
        ++r13_8;
    } while (r13_8 != 36);
    rdi10 = rsp2;
    *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(test_in);
    eax12 = fun_1387();
    if (eax12 != test_in) {
        rdi10 = reinterpret_cast<int32_t*>(0x1392);
        *reinterpret_cast<int32_t*>(&rsi11) = eax12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(test_in);
        fun_139b(0x1392, rsi11);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi10 = *rsi11;
    __asm__("subsd xmm0, [r14]");
    fun_13d7(0x13d0, rsi11 + 1);
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
    uint64_t rdx9;
    uint64_t rcx10;
    uint32_t esi11;
    int1_t cf12;
    uint64_t rax13;
    uint64_t rdx14;
    uint64_t rax15;
    uint64_t rax16;
    unsigned char* rax17;
    int64_t v18;

    rbx1 = reinterpret_cast<uint64_t>(rbx2 + 1) ^ rax3;
    *reinterpret_cast<int32_t*>(&rbp4) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp4) + 4) = reinterpret_cast<int32_t>(test_in);
    r14_5 = r15_6;
    do {
        rax8 = fun_11e7(r15_7, rbx1);
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
        rax13 = fun_1254(rax8);
        r15_7 = rax13;
        rdx14 = r14_5 >> 63;
        rax15 = rax13 >> 63;
        if (*reinterpret_cast<int32_t*>(&rdx14) != *reinterpret_cast<int32_t*>(&rax15)) {
            rax16 = fun_1285(r14_5, r15_7);
        } else {
            rax16 = fun_1271(r14_5, r15_7);
        }
        r14_5 = rax16;
        if (!reinterpret_cast<int1_t>((0x7ff0000000000000 & ~r15_7) == test_in)) 
            continue;
        if ((r15_7 & 0xfffffffffffff) != test_in) 
            break;
        ++rbp4;
    } while ((r15_7 & 0x7fffffffffffffff) > 0x3ee4f8b588e368f0);
    goto addr_12c1_17;
    rax17 = g12be;
    *rax17 = reinterpret_cast<unsigned char>(*rax17 | 16);
    addr_12c1_17:
    goto v18;
}

void test_in(int64_t rdi, int32_t esi) {
    if (esi != test_in) {
        if (esi > 63) {
        }
    }
}

void fun_23c() {
}

unsigned char* g4ed = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

void fun_458(uint64_t rdi, uint64_t rsi, int64_t rdx, int32_t ecx) {
    uint64_t rcx5;
    int64_t r10_6;
    uint64_t r9_7;
    uint64_t r9_8;
    uint64_t r11_9;
    int32_t r8d10;
    int32_t eax11;
    int32_t ebx12;
    int32_t ebx13;
    int32_t ebx14;
    int32_t esi15;
    uint1_t zf16;
    int32_t eax17;
    uint64_t r10_18;
    int32_t r8d19;
    unsigned char cl20;
    unsigned char dl21;
    unsigned char* r8_22;
    int32_t eax23;
    int32_t eax24;
    int32_t eax25;
    int32_t esi26;
    uint1_t zf27;
    int32_t ebx28;
    uint64_t r10_29;
    int32_t r8d30;
    uint64_t rcx31;
    int32_t ecx32;
    int32_t ecx33;
    uint64_t rcx34;
    uint64_t r10_35;
    uint64_t rax36;
    int32_t ecx37;
    int32_t ecx38;
    uint64_t rcx39;
    int64_t v40;

    rcx5 = reinterpret_cast<uint64_t>(r10_6 - 0x200);
    r9_7 = r9_8 & rcx5;
    r11_9 = rsi << 9 & rcx5;
    r8d10 = eax11 - ebx12;
    if (eax11 <= ebx13) {
        if (r8d10 < reinterpret_cast<int32_t>(test_in)) {
            if (ebx14 != 0x7ff) {
                esi15 = reinterpret_cast<int32_t>(test_in);
                zf16 = reinterpret_cast<uint1_t>(eax17 == test_in);
                *reinterpret_cast<unsigned char*>(&esi15) = zf16;
                if (!zf16) {
                    r9_7 = r9_7 | r10_18;
                }
                r8d19 = r8d10 + esi15;
                if (r8d19 != test_in) 
                    goto addr_61a_7;
            } else {
                if (!reinterpret_cast<int1_t>(r11_9 == test_in)) {
                    addr_48f_9:
                    cl20 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdi << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdi & 0x7ff8000000000000) == 0x7ff0000000000000)));
                    dl21 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
                    if (!reinterpret_cast<int1_t>(cl20 == test_in) || dl21 != test_in) {
                        r8_22 = g4ed;
                        *r8_22 = reinterpret_cast<unsigned char>(*r8_22 | 16);
                        goto addr_4f1_11;
                    }
                } else {
                    goto addr_5ec_13;
                }
            }
        } else {
            if (eax23 == test_in) {
                addr_5db_15:
                goto addr_5ec_13;
            } else {
                if (eax24 != 0x7ff) {
                    goto addr_5ce_18;
                } else {
                    if (!reinterpret_cast<int1_t>((r11_9 | r9_7) == test_in)) 
                        goto addr_48f_9;
                    goto addr_5ec_13;
                }
            }
        }
    } else {
        if (eax25 != 0x7ff) {
            esi26 = reinterpret_cast<int32_t>(test_in);
            zf27 = reinterpret_cast<uint1_t>(ebx28 == test_in);
            *reinterpret_cast<unsigned char*>(&esi26) = zf27;
            if (!zf27) {
                r11_9 = r11_9 | r10_29;
            }
            r8d30 = r8d10 - esi26;
            if (r8d30 != test_in) {
                if (r8d30 > 63) {
                    *reinterpret_cast<int32_t*>(&rcx31) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<unsigned char*>(&rcx31) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r11_9 == test_in));
                } else {
                    ecx32 = r8d30;
                    *reinterpret_cast<signed char*>(&r8d30) = -*reinterpret_cast<signed char*>(&r8d30);
                    ecx33 = r8d30;
                    *reinterpret_cast<int32_t*>(&rcx34) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<unsigned char*>(&rcx34) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r11_9 << *reinterpret_cast<unsigned char*>(&ecx33) == test_in));
                    rcx31 = rcx34 | r11_9 >> *reinterpret_cast<signed char*>(&ecx32);
                }
                r11_9 = rcx31;
                goto addr_5b6_29;
            }
        } else {
            if (r9_7 == test_in) 
                goto addr_5ec_13; else 
                goto addr_48f_9;
        }
    }
    addr_63f_31:
    addr_5b6_29:
    r9_7 = (r9_7 | r10_35) + r11_9;
    if (reinterpret_cast<int64_t>(r9_7 + r9_7) < reinterpret_cast<int64_t>(test_in)) {
    }
    addr_5ce_18:
    goto addr_5db_15;
    addr_61a_7:
    if (r8d19 < -63) {
        *reinterpret_cast<int32_t*>(&rax36) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax36) + 4) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<unsigned char*>(&rax36) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r9_7 == test_in));
        r9_7 = rax36;
        goto addr_5b6_29;
    } else {
        ecx37 = -r8d19;
        ecx38 = r8d19;
        *reinterpret_cast<int32_t*>(&rcx39) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx39) + 4) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<unsigned char*>(&rcx39) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r9_7 << *reinterpret_cast<unsigned char*>(&ecx38) == test_in));
        r9_7 = rcx39 | r9_7 >> *reinterpret_cast<signed char*>(&ecx37);
        goto addr_63f_31;
    }
    addr_4f1_11:
    if (rsi + rsi < 0xffe0000000000001) {
    }
    if (!reinterpret_cast<int1_t>(cl20 == test_in)) {
    }
    if (!reinterpret_cast<int1_t>(dl21 == test_in)) {
    }
    addr_5ec_13:
    goto v40;
}

void ullong_to_double() {
    return;
}

unsigned char* g720 = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

int32_t* g830 = reinterpret_cast<int32_t*>(0xffffffffffffb948);

unsigned char* g78b = reinterpret_cast<unsigned char*>(0xc68948c6eb100880);

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
    int32_t ecx37;
    uint64_t rsi38;
    int1_t zf39;
    uint32_t edi40;
    int32_t r8d41;
    uint1_t cf42;
    int64_t r8_43;
    int32_t esi44;
    uint32_t r10d45;
    int1_t cf46;
    int64_t r10_47;
    uint64_t rsi48;
    uint64_t rdi49;
    uint64_t rcx50;
    uint64_t r8_51;
    uint64_t r9_52;
    uint64_t rdx53;
    uint64_t r9_54;
    unsigned char* rcx55;
    int64_t v56;
    int64_t v57;
    unsigned char* r8_58;
    uint64_t r8_59;
    uint64_t rcx60;
    uint64_t rax61;
    uint64_t r8_62;
    uint64_t rcx63;
    uint64_t rdx64;
    uint64_t r9_65;
    uint64_t rsi66;
    uint64_t r10_67;
    int64_t r8_68;
    int64_t rdx69;
    uint64_t rdx70;
    int64_t rsi71;
    uint64_t tmp64_72;
    uint64_t rcx73;
    uint64_t rcx74;
    uint64_t rcx75;
    uint32_t esi76;
    uint32_t r11d77;
    uint1_t cf78;
    int64_t r11_79;
    uint32_t ebx80;
    uint32_t ecx81;
    int1_t cf82;
    int64_t rcx83;
    int64_t rbx84;
    int32_t ecx85;
    uint64_t r10_86;
    uint32_t ecx87;
    uint32_t r11d88;
    uint1_t cf89;
    int64_t r11_90;
    uint32_t ebx91;
    uint32_t r10d92;
    int1_t cf93;
    int64_t r10_94;
    int64_t rbx95;
    int32_t ecx96;

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
                    if (reinterpret_cast<int32_t>(r8d14) < reinterpret_cast<int32_t>(0xffffffc1)) {
                        *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<unsigned char*>(&rcx15) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi11 == test_in));
                    } else {
                        ecx16 = reinterpret_cast<int32_t>(-r8d14);
                        ecx17 = r8d14;
                        *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<unsigned char*>(&rcx18) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi11 << *reinterpret_cast<unsigned char*>(&ecx17) == test_in));
                        rcx15 = rcx18 | rsi11 >> *reinterpret_cast<signed char*>(&ecx16);
                    }
                    rsi11 = rcx15;
                }
                rax9 = rax9 | 0x4000000000000000;
                r11_8 = rsi11;
                goto addr_896_12;
            } else {
                if (!reinterpret_cast<int1_t>(rax9 == test_in)) {
                    addr_6c2_14:
                    cl19 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdi << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdi & 0x7ff8000000000000) == 0x7ff0000000000000)));
                    dl20 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
                    if (!reinterpret_cast<int1_t>(cl19 == test_in) || dl20 != test_in) {
                        r8_21 = g720;
                        *r8_21 = reinterpret_cast<unsigned char>(*r8_21 | 16);
                    }
                } else {
                    *reinterpret_cast<int32_t*>(&rdx22) = reinterpret_cast<int32_t>(~edx);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(test_in);
                    rdi = 0x7ff0000000000000 | rdx22 << 63;
                    goto addr_756_17;
                }
            }
        } else {
            if (ebx5 == test_in) {
                ebx5 = 1;
                r9d7 = 1;
                goto addr_817_20;
            }
            if (ebx5 != 0x7ff) {
                addr_817_20:
                if (rax9 >= r11_8) {
                    if (rax9 > r11_8) {
                        addr_896_12:
                        rax23 = rax9 - r11_8;
                        edx = edx ^ 1;
                        goto addr_89c_23;
                    } else {
                        rax24 = g830;
                        *reinterpret_cast<int32_t*>(&rdi) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi) + 4) = reinterpret_cast<int32_t>(test_in);
                        if (*rax24 == 3) {
                            rdi = 0x8000000000000000;
                        }
                        goto addr_756_17;
                    }
                } else {
                    addr_81c_27:
                    r9d7 = ebx5;
                    rax23 = r11_8 - rax9;
                    goto addr_89c_23;
                }
            } else {
                if (!reinterpret_cast<int1_t>((rax9 | r11_8) == test_in)) 
                    goto addr_6c2_14;
                rdi = 0x7fffffffffffffff;
                rax25 = g78b;
                *rax25 = reinterpret_cast<unsigned char>(*rax25 | 16);
                goto addr_756_17;
            }
        }
    } else {
        if (ebx5 != 0x7ff) {
            rsi26 = rax9 | 0x4000000000000000;
            ecx27 = reinterpret_cast<uint32_t>(test_in);
            zf28 = reinterpret_cast<uint1_t>(r9d7 == test_in);
            *reinterpret_cast<unsigned char*>(&ecx27) = zf28;
            if (zf28) {
                rsi26 = rax9;
            }
            r8d29 = r8d10 - ecx27;
            if (r8d29 != test_in) {
                if (reinterpret_cast<int32_t>(r8d29) > reinterpret_cast<int32_t>(63)) {
                    *reinterpret_cast<int32_t*>(&rax30) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax30) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<unsigned char*>(&rax30) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi26 == test_in));
                    rsi26 = rax30;
                } else {
                    ecx31 = r8d29;
                    *reinterpret_cast<signed char*>(&r8d29) = -*reinterpret_cast<signed char*>(&r8d29);
                    ecx32 = r8d29;
                    *reinterpret_cast<int32_t*>(&rcx33) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<unsigned char*>(&rcx33) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi26 << *reinterpret_cast<unsigned char*>(&ecx32) == test_in));
                    rsi26 = rcx33 | rsi26 >> *reinterpret_cast<signed char*>(&ecx31);
                }
            }
            r11_8 = r11_8 | 0x4000000000000000;
            rax9 = rsi26;
            goto addr_81c_27;
        } else {
            if (r11_8 == test_in) 
                goto addr_756_17; else 
                goto addr_6c2_14;
        }
    }
    r8_34 = rsi | 0x8000000000000;
    rdi35 = rdi | 0x8000000000000;
    rax36 = r8_34;
    if (rsi + rsi < 0xffe0000000000001) {
        rax36 = rdi35;
    }
    if (!reinterpret_cast<int1_t>(cl19 == test_in)) {
        rax36 = rdi35;
    }
    if (!reinterpret_cast<int1_t>(dl20 == test_in)) {
        rax36 = r8_34;
    }
    rdi = rax36;
    addr_756_17:
    return rdi;
    addr_89c_23:
    ecx37 = reinterpret_cast<int32_t>(test_in);
    rsi38 = rax23 >> 32;
    zf39 = reinterpret_cast<int1_t>(rsi38 == test_in);
    *reinterpret_cast<unsigned char*>(&ecx37) = reinterpret_cast<uint1_t>(!zf39);
    if (zf39) {
        *reinterpret_cast<uint32_t*>(&rsi38) = *reinterpret_cast<uint32_t*>(&rax23);
    }
    edi40 = *reinterpret_cast<uint32_t*>(&rsi38) << 16;
    r8d41 = reinterpret_cast<int32_t>(test_in);
    cf42 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi38) < 0x10000);
    if (!cf42) {
        edi40 = *reinterpret_cast<uint32_t*>(&rsi38);
    }
    *reinterpret_cast<unsigned char*>(&r8d41) = cf42;
    *reinterpret_cast<int32_t*>(&r8_43) = r8d41 << 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_43) + 4) = reinterpret_cast<int32_t>(test_in);
    esi44 = static_cast<int32_t>(r8_43 + 8);
    r10d45 = edi40 << 8;
    cf46 = edi40 < 0x1000000;
    if (!cf46) {
        r10d45 = edi40;
    }
    if (!cf46) {
        esi44 = *reinterpret_cast<int32_t*>(&r8_43);
    }
    *reinterpret_cast<uint32_t*>(&r10_47) = r10d45 >> 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_47) + 4) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<uint32_t*>(&rsi48) = ~((reinterpret_cast<uint32_t>(-ecx37) | 31) + *reinterpret_cast<int32_t*>(0x8e8 + r10_47 * 4) + esi44) + r9d7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi48) + 4) = reinterpret_cast<int32_t>(test_in);
    *reinterpret_cast<uint32_t*>(&rdi49) = edx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(test_in);
    if (!test_in) {
    }
    rcx50 = rdi49;
    r8_51 = rdi49 & 0xfffffffffffff;
    r9_52 = reinterpret_cast<uint64_t>(test_in);
    rdx53 = 0xfffffffffffff & rsi48;
    if (!1) {
        if (reinterpret_cast<int1_t>(r8_51 == test_in) && (rdx53 == test_in || !test_in)) {
            if (!reinterpret_cast<int1_t>((reinterpret_cast<uint64_t>(test_in) | rdx53) == test_in)) 
                goto addr_bef_60; else 
                goto addr_9a1_61;
        }
    }
    if (!1) {
        if (rdx53 == test_in) {
            addr_bd5_64:
            *reinterpret_cast<uint32_t*>(&r9_54) = *reinterpret_cast<uint32_t*>(&r9_52) & 0x7ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_54) + 4) = reinterpret_cast<int32_t>(test_in);
            if ((r9_54 | r8_51) == test_in) {
                addr_9a1_61:
                rcx55 = g9a8;
                *rcx55 = reinterpret_cast<unsigned char>(*rcx55 | 16);
                goto v56;
            } else {
                addr_bef_60:
                goto v57;
            }
        } else {
            if (test_in || !1) {
                r8_58 = ga24;
                *r8_58 = reinterpret_cast<unsigned char>(*r8_58 | 16);
            }
        }
        r8_59 = rsi48 | 0x8000000000000;
        rcx60 = rcx50 | 0x8000000000000;
        rax61 = r8_59;
        if (rsi48 + rsi48 < 0xffe0000000000001) {
            rax61 = rcx60;
        }
        if (test_in) {
            rax61 = rcx60;
        }
        if (test_in) {
            rax61 = r8_59;
        }
        return rax61;
    }
    if (test_in) {
        addr_ad4_75:
        if (test_in) {
            addr_b48_76:
            r8_62 = r8_51 << 10;
            rcx63 = 0x4000000000000000 | r8_62;
            rdx64 = rdx53 << 11;
            r9_65 = 0x8000000000000000 | rdx64;
            rsi66 = rcx63 >> 32;
            r10_67 = r9_65 >> 32;
            *reinterpret_cast<int32_t*>(&r8_68) = *reinterpret_cast<int32_t*>(&r8_62);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_68) + 4) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<int32_t*>(&rdx69) = *reinterpret_cast<int32_t*>(&rdx64);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx69) + 4) = reinterpret_cast<int32_t>(test_in);
            rdx70 = rdx69 * rsi66;
            *reinterpret_cast<int32_t*>(&rsi71) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi71) + 4) = reinterpret_cast<int32_t>(test_in);
            tmp64_72 = rdx70 + r8_68 * r10_67;
            *reinterpret_cast<unsigned char*>(&rsi71) = reinterpret_cast<uint1_t>(tmp64_72 < rdx70);
            r9_52 = r9_65 * rcx63;
            r8_51 = (tmp64_72 >> 32) + r10_67 * rsi66 + (rsi71 << 32) + reinterpret_cast<uint1_t>(r9_52 < tmp64_72 << 32);
            *reinterpret_cast<int32_t*>(&rcx73) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx73) + 4) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<unsigned char*>(&rcx73) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r9_52 == test_in));
            rcx74 = rcx73 | r8_51;
            if (reinterpret_cast<int64_t>(rcx74 + rcx74) < reinterpret_cast<int64_t>(test_in)) {
            }
        } else {
            if (rdx53 == test_in) {
                goto addr_c13_80;
            } else {
                rcx75 = reinterpret_cast<uint64_t>(test_in);
                if (1) {
                    *reinterpret_cast<uint32_t*>(&rcx75) = *reinterpret_cast<uint32_t*>(&rsi48);
                }
                esi76 = *reinterpret_cast<uint32_t*>(&rcx75) << 16;
                r11d77 = reinterpret_cast<uint32_t>(test_in);
                cf78 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx75) < 0x10000);
                if (!cf78) {
                    esi76 = *reinterpret_cast<uint32_t*>(&rcx75);
                }
                *reinterpret_cast<unsigned char*>(&r11d77) = cf78;
                *reinterpret_cast<uint32_t*>(&r11_79) = r11d77 << 4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_79) + 4) = reinterpret_cast<int32_t>(test_in);
                ebx80 = static_cast<uint32_t>(r11_79 + 8);
                ecx81 = esi76 << 8;
                cf82 = esi76 < 0x1000000;
                if (!cf82) {
                    ecx81 = esi76;
                }
                if (!cf82) {
                    ebx80 = *reinterpret_cast<uint32_t*>(&r11_79);
                }
                *reinterpret_cast<uint32_t*>(&rcx83) = ecx81 >> 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx83) + 4) = reinterpret_cast<int32_t>(test_in);
                *reinterpret_cast<uint32_t*>(&rbx84) = (ebx80 | 32) + *reinterpret_cast<int32_t*>(0xb36 + rcx83 * 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx84) + 4) = reinterpret_cast<int32_t>(test_in);
                ecx85 = static_cast<int32_t>(rbx84 - 11);
                rdx53 = rdx53 << *reinterpret_cast<unsigned char*>(&ecx85);
                goto addr_b48_76;
            }
        }
    } else {
        if (r8_51 == test_in) {
            goto addr_c13_80;
        } else {
            r10_86 = reinterpret_cast<uint64_t>(test_in);
            if (1) {
                *reinterpret_cast<uint32_t*>(&r10_86) = *reinterpret_cast<uint32_t*>(&rcx50);
            }
            ecx87 = *reinterpret_cast<uint32_t*>(&r10_86) << 16;
            r11d88 = reinterpret_cast<uint32_t>(test_in);
            cf89 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r10_86) < 0x10000);
            if (!cf89) {
                ecx87 = *reinterpret_cast<uint32_t*>(&r10_86);
            }
            *reinterpret_cast<unsigned char*>(&r11d88) = cf89;
            *reinterpret_cast<uint32_t*>(&r11_90) = r11d88 << 4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_90) + 4) = reinterpret_cast<int32_t>(test_in);
            ebx91 = static_cast<uint32_t>(r11_90 + 8);
            r10d92 = ecx87 << 8;
            cf93 = ecx87 < 0x1000000;
            if (!cf93) {
                r10d92 = ecx87;
            }
            if (!cf93) {
                ebx91 = *reinterpret_cast<uint32_t*>(&r11_90);
            }
            *reinterpret_cast<uint32_t*>(&r10_94) = r10d92 >> 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_94) + 4) = reinterpret_cast<int32_t>(test_in);
            *reinterpret_cast<uint32_t*>(&rbx95) = (ebx91 | 32) + *reinterpret_cast<int32_t*>(0xabe + r10_94 * 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx95) + 4) = reinterpret_cast<int32_t>(test_in);
            ecx96 = static_cast<int32_t>(rbx95 - 11);
            r8_51 = r8_51 << *reinterpret_cast<unsigned char*>(&ecx96);
            goto addr_ad4_75;
        }
    }
    goto addr_bd5_64;
    addr_c13_80:
    return test_in;
}

unsigned char* g108e = reinterpret_cast<unsigned char*>(0xc0b60fc031100880);

int64_t float64_le(uint64_t rdi, uint64_t rsi) {
    unsigned char* rax3;
    uint64_t rax4;
    uint64_t rcx5;
    unsigned char cl6;
    unsigned char al7;
    uint1_t cf8;
    int64_t rax9;

    if (reinterpret_cast<int1_t>((~rdi & 0x7ff0000000000000) == test_in) && !reinterpret_cast<int1_t>((rdi & 0xfffffffffffff) == test_in) || reinterpret_cast<int1_t>((0x7ff0000000000000 & ~rsi) == test_in) && (0xfffffffffffff & rsi) != test_in) {
        rax3 = g108e;
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
    fun_1309(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 16);
}

uint32_t* gf2a = reinterpret_cast<uint32_t*>(0x104840f118b);

unsigned char* gd19 = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

unsigned char* gc88 = reinterpret_cast<unsigned char*>(0xb848100880);

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
        if (eax9 == test_in) {
            if (r9_7 == test_in) {
                rax11 = 0x8000000000000000;
                *reinterpret_cast<uint32_t*>(&rcx12) = *reinterpret_cast<uint32_t*>(&rcx5) & 0x7ff;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(test_in);
                rcx13 = gf2a;
                *reinterpret_cast<uint32_t*>(&rdx14) = *rcx13;
                if ((rcx12 | r11_4) == test_in) {
                    addr_1036_5:
                    *rcx13 = *reinterpret_cast<uint32_t*>(&rdx14) | 16;
                    rax15 = rax11 - 1;
                } else {
                    *rcx13 = *reinterpret_cast<uint32_t*>(&rdx14) | 2;
                    goto addr_f37_7;
                }
            } else {
                eax16 = reinterpret_cast<uint32_t>(test_in);
                rcx17 = r9_7 >> 32;
                zf18 = reinterpret_cast<uint1_t>(rcx17 == test_in);
                if (zf18) {
                    *reinterpret_cast<uint32_t*>(&rcx17) = *reinterpret_cast<uint32_t*>(&rsi);
                }
                *reinterpret_cast<unsigned char*>(&eax16) = zf18;
                esi19 = *reinterpret_cast<uint32_t*>(&rcx17) << 16;
                r8d20 = reinterpret_cast<uint32_t>(test_in);
                cf21 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx17) < 0x10000);
                if (!cf21) {
                    esi19 = *reinterpret_cast<uint32_t*>(&rcx17);
                }
                *reinterpret_cast<unsigned char*>(&r8d20) = cf21;
                *reinterpret_cast<uint32_t*>(&r8_22) = r8d20 << 4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = reinterpret_cast<int32_t>(test_in);
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
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = reinterpret_cast<int32_t>(test_in);
                *reinterpret_cast<uint32_t*>(&rbx27) = (ebx23 | eax16 << 5) + *reinterpret_cast<int32_t*>(0xda6 + rcx26 * 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx27) + 4) = reinterpret_cast<int32_t>(test_in);
                ecx28 = static_cast<int32_t>(rbx27 - 11);
                r9_7 = r9_7 << *reinterpret_cast<unsigned char*>(&ecx28);
                goto addr_db8_17;
            }
        } else {
            if (eax9 != 0x7ff) {
                addr_db8_17:
                if (!reinterpret_cast<int1_t>(r10d6 == test_in)) {
                    addr_e2a_19:
                    r8_29 = 0x4000000000000000 | r11_4 << 10;
                    rbx30 = r9_7 << 11;
                    r11_31 = 0x8000000000000000 | rbx30;
                    *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(test_in);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(test_in);
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
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_37) + 4) = reinterpret_cast<int32_t>(test_in);
                        r13_38 = r13_37 * rax36;
                        rbp39 = (r13_38 >> 32) + rax36 * r14_33;
                        r15_40 = rsi35 * r11_31;
                        rax41 = -r15_40;
                        rdx42 = r8_32 - (rbp39 + reinterpret_cast<uint1_t>(r8_32 < rbp39 + reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r15_40 == test_in))));
                        cf43 = reinterpret_cast<uint1_t>(rdx42 < reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r15_40 < r13_38 << 32)));
                        rdx44 = rdx42 - (reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf43));
                        if (reinterpret_cast<int64_t>(rdx44) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf43))) {
                            r9_45 = r9_7 << 43;
                            r15_46 = rax34;
                            do {
                                rsi35 = rsi35 + 0xffffffff00000000;
                                tmp64_47 = rax41 + r9_45;
                                cf48 = reinterpret_cast<uint1_t>(tmp64_47 < rax41);
                                rax41 = tmp64_47;
                                rdx44 = rdx44 + r14_33 + cf48;
                            } while (reinterpret_cast<int64_t>(rdx44) < reinterpret_cast<int64_t>(test_in));
                        } else {
                            r15_46 = rax34;
                        }
                        __asm__("shrd rax, rdx, 0x20");
                        *reinterpret_cast<int32_t*>(&rdx49) = -1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx49) + 4) = reinterpret_cast<int32_t>(test_in);
                        if (r15_46 > rax41) {
                            rdx49 = rax41 / r14_33;
                        }
                        rdx14 = rdx49 | rsi35;
                        goto addr_f85_29;
                    }
                } else {
                    if (r11_4 == test_in) {
                        addr_ef2_31:
                        rax15 = rdi10 & 0x8000000000000000;
                    } else {
                        ecx50 = reinterpret_cast<uint32_t>(test_in);
                        rsi51 = r11_4 >> 32;
                        zf52 = reinterpret_cast<uint1_t>(rsi51 == test_in);
                        if (zf52) {
                            *reinterpret_cast<uint32_t*>(&rsi51) = *reinterpret_cast<uint32_t*>(&rdx3);
                        }
                        *reinterpret_cast<unsigned char*>(&ecx50) = zf52;
                        edx53 = *reinterpret_cast<uint32_t*>(&rsi51) << 16;
                        r8d54 = reinterpret_cast<uint32_t>(test_in);
                        cf55 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi51) < 0x10000);
                        if (!cf55) {
                            edx53 = *reinterpret_cast<uint32_t*>(&rsi51);
                        }
                        *reinterpret_cast<unsigned char*>(&r8d54) = cf55;
                        *reinterpret_cast<uint32_t*>(&r8_56) = r8d54 << 4;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_56) + 4) = reinterpret_cast<int32_t>(test_in);
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
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_60) + 4) = reinterpret_cast<int32_t>(test_in);
                        *reinterpret_cast<uint32_t*>(&rsi61) = (esi57 | ecx50 << 5) + *reinterpret_cast<int32_t*>(0xe15 + r10_60 * 4);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi61) + 4) = reinterpret_cast<int32_t>(test_in);
                        ecx62 = static_cast<int32_t>(rsi61 - 11);
                        r11_4 = r11_4 << *reinterpret_cast<unsigned char*>(&ecx62);
                        goto addr_e2a_19;
                    }
                }
            } else {
                if (r9_7 == test_in) 
                    goto addr_ef2_31; else 
                    goto addr_cb9_42;
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(r11_4 == test_in)) 
            goto addr_cb9_42;
        if (eax9 != 0x7ff) 
            goto addr_f04_45; else 
            goto addr_c7c_46;
    }
    addr_f47_47:
    return rax15;
    addr_f37_7:
    rax15 = 0x7ff0000000000000 | rdi10 & 0x8000000000000000;
    goto addr_f47_47;
    addr_f85_29:
    *reinterpret_cast<uint32_t*>(&rax11) = *reinterpret_cast<uint32_t*>(&rdx14) & 0x1ff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(test_in);
    if (*reinterpret_cast<uint32_t*>(&rax11) <= 2) {
        rax63 = r11_31 >> 32;
        r9_64 = rdx14 >> 32;
        *reinterpret_cast<uint32_t*>(&rbx65) = *reinterpret_cast<uint32_t*>(&rbx30) & 0xfffff800;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx65) + 4) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<uint32_t*>(&rcx66) = *reinterpret_cast<uint32_t*>(&rdx14);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx66) + 4) = reinterpret_cast<int32_t>(test_in);
        rcx67 = rcx66 * rax63;
        *reinterpret_cast<int32_t*>(&r10_68) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_68) + 4) = reinterpret_cast<int32_t>(test_in);
        tmp64_69 = rcx67 + rbx65 * r9_64;
        *reinterpret_cast<unsigned char*>(&r10_68) = reinterpret_cast<uint1_t>(tmp64_69 >= rcx67);
        r14_70 = rdx14 * r11_31;
        rax11 = -r14_70;
        r9_71 = 0x100000000 - (r8_32 - (reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r8_32 < reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r14_70 == test_in)))))) - ((tmp64_69 >> 32) + r9_64 * rax63) + (r10_68 << 32));
        cf72 = reinterpret_cast<uint1_t>(r9_71 < reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_70 < tmp64_69 << 32)));
        r9_73 = r9_71 - (reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf72));
        if (reinterpret_cast<int64_t>(r9_73) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(test_in) + static_cast<uint64_t>(cf72))) {
            do {
                --rdx14;
                tmp64_74 = rax11 + r11_31;
                cf75 = reinterpret_cast<uint1_t>(tmp64_74 < rax11);
                rax11 = tmp64_74;
                r9_73 = r9_73 + reinterpret_cast<uint64_t>(test_in) + cf75;
            } while (reinterpret_cast<int64_t>(r9_73) < reinterpret_cast<int64_t>(test_in));
        }
        *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(test_in);
        *reinterpret_cast<unsigned char*>(&rcx13) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rax11 == test_in));
        rdx14 = rdx14 | reinterpret_cast<uint64_t>(rcx13);
    }
    goto addr_1036_5;
    addr_f04_45:
    goto addr_f37_7;
    addr_c7c_46:
    if (!reinterpret_cast<int1_t>(r9_7 == test_in)) {
        addr_cb9_42:
        cl76 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx3 << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdx3 & 0x7ff8000000000000) == 0x7ff0000000000000)));
        dil77 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == test_in))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
        if (!reinterpret_cast<int1_t>(cl76 == test_in) || dil77 != test_in) {
            r8_78 = gd19;
            *r8_78 = reinterpret_cast<unsigned char>(*r8_78 | 16);
        }
    } else {
        rax79 = gc88;
        *rax79 = reinterpret_cast<unsigned char>(*rax79 | 16);
        rax15 = 0x7fffffffffffffff;
        goto addr_f47_47;
    }
    r8_80 = rsi | 0x8000000000000;
    rdx81 = rdx3 | 0x8000000000000;
    rax15 = r8_80;
    if (rsi + rsi < 0xffe0000000000001) {
        rax15 = rdx81;
    }
    if (!reinterpret_cast<int1_t>(cl76 == test_in)) {
        rax15 = rdx81;
    }
    if (!reinterpret_cast<int1_t>(dil77 == test_in)) {
        rax15 = r8_80;
    }
    goto addr_f47_47;
}

uint64_t float64_abs(uint64_t rdi) {
    return 0x7fffffffffffffff & rdi;
}

void local_sin(int64_t rdi) {
    fun_1190();
}

