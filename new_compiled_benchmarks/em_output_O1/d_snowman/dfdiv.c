
uint176_t g6fc = 0x4c00000000258b4c;

void a_input(int64_t rdi, int32_t esi);

int64_t fun_71d(int64_t rdi, int64_t rsi);

int32_t fun_73e();

void fun_752(int32_t* rdi, int32_t* rsi);

void fun_78f(int64_t rdi, int64_t rsi);

void fun_6d0(int32_t* rdi, int32_t* rsi) {
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
    r15_4 = *reinterpret_cast<int64_t**>(&g6fc);
    r12_5 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g6fc) + 7);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi7 = r15_4[rbp6];
        rsi8 = r12_5[rbp6];
        fun_71d(rdi7, rsi8);
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        ++rbp6;
    } while (rbp6 != 22);
    rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp3) + 8);
    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
    eax11 = fun_73e();
    if (eax11 != a_input) {
        rdi9 = reinterpret_cast<int32_t*>(0x749);
        *reinterpret_cast<int32_t*>(&rsi10) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_752(0x749, rsi10);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi9 = *rsi10;
    __asm__("subsd xmm0, [r14]");
    fun_78f(0x788, rsi10 + 1);
    goto v12;
}

int64_t fun_71d(int64_t rdi, int64_t rsi) {
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
        fun_71d(rdi4, rsi6);
    }
    rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
    eax10 = fun_73e();
    if (eax10 != a_input) {
        rdi8 = reinterpret_cast<int32_t*>(0x749);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_752(0x749, rsi9);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r14]");
    fun_78f(0x788, rsi9 + 1);
    goto v11;
}

int32_t g749 = 0xc031c689;

int32_t fun_73e() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != a_input) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_752(0x749, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g749 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_78f(0x788, rsi2 + 1);
    goto v4;
}

void fun_752(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_78f(0x788, rsi + 1);
    goto v3;
}

void fun_78f(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_6bc(int32_t* rdi) {
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
        rdi = reinterpret_cast<int32_t*>(0x6c7);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_6d0(0x6c7, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    r15_6 = *reinterpret_cast<int64_t**>(&g6fc);
    r12_7 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g6fc) + 7);
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi9 = r15_6[rbp8];
        rsi10 = r12_7[rbp8];
        fun_71d(rdi9, rsi10);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
        ++rbp8;
    } while (rbp8 != 22);
    rdi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) + 8);
    *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
    eax13 = fun_73e();
    if (eax13 != a_input) {
        rdi11 = reinterpret_cast<int32_t*>(0x749);
        *reinterpret_cast<int32_t*>(&rsi12) = eax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_752(0x749, rsi12);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi11 = *rsi12;
    __asm__("subsd xmm0, [r14]");
    fun_78f(0x788, rsi12 + 1);
    goto v14;
}

void a_input(int64_t rdi, int32_t esi) {
    if (esi != a_input) {
        if (esi > 63) {
        }
    }
}

void fun_1d4(signed char* rdi) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    int64_t rcx5;
    int64_t rcx6;
    signed char al7;
    signed char cl8;
    int32_t* rax9;
    int32_t* rax10;
    int32_t eax11;
    int64_t rbp12;
    int64_t rbp13;
    signed char cl14;

    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *reinterpret_cast<signed char*>(rcx5 + 0x7fffb) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rcx6 + 0x7fffb) + al7);
    *rdi = reinterpret_cast<signed char>(*rdi + cl8);
    *rax9 = *rax10 + eax11;
    *reinterpret_cast<signed char*>(rbp12 - 0x7b) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbp13 - 0x7b) + cl14);
    __asm__("fisttp dword [rdi]");
}

unsigned char* g24a = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

void fun_1f3(int32_t* rdi, uint64_t rsi, uint64_t rdx, unsigned char cl) {
    int64_t rax5;
    int64_t rax6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    signed char* rax10;
    signed char* rax11;
    signed char al12;
    signed char* rax13;
    signed char* rax14;
    signed char al15;
    signed char* rax16;
    signed char* rax17;
    unsigned char* r8_18;
    int64_t v19;

    *rdi = *rdi + 1;
    *reinterpret_cast<unsigned char*>(rax5 - 70) = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(rax6 - 70) + cl);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
    *rax13 = reinterpret_cast<signed char>(*rax14 + al15);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*rax16 < reinterpret_cast<signed char>(a_input) != __intrinsic()) | reinterpret_cast<uint1_t>(*rax17 == a_input))) {
        addr_249_2:
        *r8_18 = reinterpret_cast<unsigned char>(*r8_18 | 16);
        goto addr_24e_3;
    } else {
        cl = reinterpret_cast<unsigned char>(a_input);
        *reinterpret_cast<unsigned char*>(&rdx) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdx & rsi) == 0x7ff0000000000000)));
        if (a_input || *reinterpret_cast<unsigned char*>(&rdx) != a_input) {
            r8_18 = g24a;
            goto addr_249_2;
        } else {
            addr_24e_3:
            if (rsi + rsi < 0xffe0000000000001) {
            }
        }
    }
    if (!reinterpret_cast<int1_t>(cl == a_input)) {
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rdx) == a_input)) {
    }
    goto v19;
}

uint32_t* g559 = reinterpret_cast<uint32_t*>(0xa0840f088b);

uint32_t* g509 = reinterpret_cast<uint32_t*>(0xfe832274f685318b);

unsigned char* g5c1 = reinterpret_cast<unsigned char*>(0xb848e1214d090880);

unsigned char* g62e = reinterpret_cast<unsigned char*>(0xd2314503eb040980);

unsigned char* g642 = reinterpret_cast<unsigned char*>(0xc148f80148010980);

void fun_282(uint32_t edi, uint32_t esi, uint64_t rdx, uint32_t ecx) {
    int64_t r11_5;
    uint64_t rcx6;
    uint32_t* rax7;
    uint32_t ecx8;
    uint64_t rbx9;
    uint64_t r11_10;
    uint1_t zf11;
    uint32_t esi12;
    uint32_t r14d13;
    uint1_t cf14;
    int64_t r14_15;
    uint32_t r15d16;
    uint32_t ebx17;
    int1_t cf18;
    int64_t rbx19;
    int64_t r15_20;
    int32_t ecx21;
    uint64_t r11_22;
    uint64_t r11_23;
    int32_t r10d24;
    int64_t r10_25;
    uint32_t r10d26;
    uint64_t rsi27;
    uint64_t r14_28;
    uint64_t rbx29;
    uint64_t r12_30;
    int64_t rcx31;
    uint64_t rsi32;
    uint64_t rax33;
    int64_t v34;
    uint64_t r15_35;
    uint64_t rcx36;
    uint64_t rdi37;
    uint64_t rax38;
    int64_t rbp39;
    uint64_t rbp40;
    uint64_t r8_41;
    uint64_t r12_42;
    uint64_t rdx43;
    uint64_t rax44;
    uint1_t cf45;
    uint64_t rax46;
    uint64_t r11_47;
    uint64_t tmp64_48;
    uint1_t cf49;
    uint64_t rax50;
    uint64_t rdx51;
    uint64_t r11_52;
    int64_t r14_53;
    int64_t rdi54;
    uint64_t rdi55;
    uint64_t r15_56;
    uint64_t tmp64_57;
    uint64_t r14_58;
    uint64_t rdx59;
    uint64_t r11_60;
    uint1_t cf61;
    uint64_t r11_62;
    uint64_t tmp64_63;
    uint1_t cf64;
    uint64_t rsi65;
    int64_t rdx66;
    uint32_t* rcx67;
    uint32_t esi68;
    uint64_t rdi69;
    int64_t r9_70;
    int1_t zf71;
    uint32_t r10d72;
    unsigned char* rax73;
    uint64_t rcx74;
    int32_t ecx75;
    int32_t ecx76;
    uint64_t rcx77;
    unsigned char* rcx78;
    unsigned char* rcx79;
    int64_t rcx80;
    uint32_t eax81;
    uint64_t rcx82;
    uint1_t zf83;
    uint32_t esi84;
    uint32_t edi85;
    uint1_t cf86;
    int64_t rdi87;
    uint32_t r14d88;
    uint32_t ecx89;
    int1_t cf90;
    int64_t rcx91;
    int64_t r14_92;
    int32_t ecx93;

    if (r11_5 == a_input) {
        *reinterpret_cast<uint32_t*>(&rcx6) = ecx & 0x7ff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = reinterpret_cast<int32_t>(a_input);
        rax7 = g559;
        if ((rcx6 | rdx) == a_input) {
            *rax7 = *rax7 | 16;
            goto 0x678;
        } else {
            *rax7 = *rax7 | 2;
            goto 0x678;
        }
    }
    ecx8 = reinterpret_cast<uint32_t>(a_input);
    rbx9 = r11_10 >> 32;
    zf11 = reinterpret_cast<uint1_t>(rbx9 == a_input);
    if (zf11) {
        *reinterpret_cast<uint32_t*>(&rbx9) = esi;
    }
    *reinterpret_cast<unsigned char*>(&ecx8) = zf11;
    esi12 = *reinterpret_cast<uint32_t*>(&rbx9) << 16;
    r14d13 = reinterpret_cast<uint32_t>(a_input);
    cf14 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbx9) < 0x10000);
    if (!cf14) {
        esi12 = *reinterpret_cast<uint32_t*>(&rbx9);
    }
    *reinterpret_cast<unsigned char*>(&r14d13) = cf14;
    *reinterpret_cast<uint32_t*>(&r14_15) = r14d13 << 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_15) + 4) = reinterpret_cast<int32_t>(a_input);
    r15d16 = static_cast<uint32_t>(r14_15 + 8);
    ebx17 = esi12 << 8;
    cf18 = esi12 < 0x1000000;
    if (!cf18) {
        ebx17 = esi12;
    }
    if (!cf18) {
        r15d16 = *reinterpret_cast<uint32_t*>(&r14_15);
    }
    *reinterpret_cast<uint32_t*>(&rbx19) = ebx17 >> 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx19) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<uint32_t*>(&r15_20) = (r15d16 | ecx8 << 5) + *reinterpret_cast<int32_t*>(0x2d6 + rbx19 * 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_20) + 4) = reinterpret_cast<int32_t>(a_input);
    ecx21 = static_cast<int32_t>(r15_20 - 11);
    r11_22 = r11_23 << *reinterpret_cast<unsigned char*>(&ecx21);
    if (reinterpret_cast<int1_t>(r10d24 == a_input)) 
        goto addr_2f1_14;
    addr_35a_15:
    *reinterpret_cast<uint32_t*>(&r10_25) = r10d26 - (12 - *reinterpret_cast<uint32_t*>(&r15_20));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_25) + 4) = reinterpret_cast<int32_t>(a_input);
    rsi27 = 0x4000000000000000 | rdx << 10;
    r14_28 = r11_22 << 11;
    rbx29 = r14_28 | r12_30;
    *reinterpret_cast<int32_t*>(&rcx31) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<unsigned char*>(&rcx31) = reinterpret_cast<uint1_t>(rbx29 <= rsi27 + rsi27);
    rsi32 = rsi27 >> *reinterpret_cast<unsigned char*>(&rcx31);
    rax33 = 0xffffffffffffffff;
    if (rbx29 > rsi32) {
        v34 = rcx31;
        r15_35 = rbx29 >> 32;
        rcx36 = rbx29 & 0xffffffff00000000;
        rdi37 = 0xffffffff00000000;
        if (rcx36 > rsi32) {
            rdi37 = rsi32 / r15_35 << 32;
        }
        rax38 = rdi37 >> 32;
        *reinterpret_cast<uint32_t*>(&rbp39) = *reinterpret_cast<uint32_t*>(&r14_28) & 0xfffff800;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = reinterpret_cast<int32_t>(a_input);
        rbp40 = rbp39 * rax38;
        r8_41 = (rbp40 >> 32) + rax38 * r15_35;
        r12_42 = rdi37 * rbx29;
        rdx43 = -r12_42;
        rax44 = rsi32 - (r8_41 + reinterpret_cast<uint1_t>(rsi32 < r8_41 + reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12_42 == a_input))));
        cf45 = reinterpret_cast<uint1_t>(rax44 < reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r12_42 < rbp40 << 32)));
        rax46 = rax44 - (reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf45));
        if (reinterpret_cast<int64_t>(rax46) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf45))) {
            r11_47 = r11_22 << 43;
            do {
                rdi37 = rdi37 + 0xffffffff00000000;
                tmp64_48 = rdx43 + r11_47;
                cf49 = reinterpret_cast<uint1_t>(tmp64_48 < rdx43);
                rdx43 = tmp64_48;
                rax46 = rax46 + r15_35 + cf49;
            } while (reinterpret_cast<int64_t>(rax46) < reinterpret_cast<int64_t>(a_input));
        }
        __asm__("shrd rdx, rax, 0x20");
        *reinterpret_cast<int32_t*>(&rax50) = -1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax50) + 4) = reinterpret_cast<int32_t>(a_input);
        if (rcx36 > rdx43) {
            rax50 = rdx43 / r15_35;
        }
        rax33 = rax50 | rdi37;
        rcx31 = v34;
    }
    if ((*reinterpret_cast<uint32_t*>(&rax33) & 0x1ff) <= 2) {
        rdx51 = rbx29 >> 32;
        r11_52 = rax33 >> 32;
        *reinterpret_cast<uint32_t*>(&r14_53) = *reinterpret_cast<uint32_t*>(&r14_28) & 0xfffff800;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_53) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<uint32_t*>(&rdi54) = *reinterpret_cast<uint32_t*>(&rax33);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi54) + 4) = reinterpret_cast<int32_t>(a_input);
        rdi55 = rdi54 * rdx51;
        *reinterpret_cast<int32_t*>(&r15_56) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_56) + 4) = reinterpret_cast<int32_t>(a_input);
        tmp64_57 = rdi55 + r14_53 * r11_52;
        *reinterpret_cast<unsigned char*>(&r15_56) = reinterpret_cast<uint1_t>(tmp64_57 >= rdi55);
        r14_58 = rax33 * rbx29;
        rdx59 = -r14_58;
        r11_60 = 0x100000000 - (rsi32 - (reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rsi32 < reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r14_58 == a_input)))))) - ((tmp64_57 >> 32) + r11_52 * rdx51) + (r15_56 << 32));
        cf61 = reinterpret_cast<uint1_t>(r11_60 < reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r14_58 < tmp64_57 << 32)));
        r11_62 = r11_60 - (reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf61));
        if (reinterpret_cast<int64_t>(r11_62) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf61))) {
            do {
                --rax33;
                tmp64_63 = rdx59 + rbx29;
                cf64 = reinterpret_cast<uint1_t>(tmp64_63 < rdx59);
                rdx59 = tmp64_63;
                r11_62 = r11_62 + reinterpret_cast<uint64_t>(a_input) + cf64;
            } while (reinterpret_cast<int64_t>(r11_62) < reinterpret_cast<int64_t>(a_input));
        }
        *reinterpret_cast<int32_t*>(&rsi65) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi65) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<unsigned char*>(&rsi65) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx59 == a_input));
        rax33 = rax33 | rsi65;
    }
    *reinterpret_cast<int32_t*>(&rdx66) = static_cast<int32_t>(rcx31 + r10_25) + 0x3fd;
    rcx67 = g509;
    esi68 = *rcx67;
    if (esi68 == a_input) {
        *reinterpret_cast<int32_t*>(&rdi69) = 0x200;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi69) + 4) = reinterpret_cast<int32_t>(a_input);
    } else {
        if (esi68 != 1) {
            if (r9_70 < reinterpret_cast<int64_t>(a_input)) {
                zf71 = esi68 == 2;
            } else {
                zf71 = esi68 == 3;
            }
            *reinterpret_cast<int32_t*>(&rdi69) = 0x3ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi69) + 4) = reinterpret_cast<int32_t>(a_input);
            if (zf71) {
                rdi69 = reinterpret_cast<uint64_t>(a_input);
            }
        } else {
            *reinterpret_cast<int32_t*>(&rdi69) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi69) + 4) = reinterpret_cast<int32_t>(a_input);
        }
    }
    r10d72 = *reinterpret_cast<uint32_t*>(&rax33) & 0x3ff;
    if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rdx66)) >= 0x7fd) {
        if (*reinterpret_cast<int32_t*>(&rdx66) > 0x7fd || *reinterpret_cast<int32_t*>(&rdx66) == 0x7fd && reinterpret_cast<int64_t>(rdi69 + rax33) < reinterpret_cast<int64_t>(a_input)) {
            rax73 = g5c1;
            *rax73 = reinterpret_cast<unsigned char>(*rax73 | 9);
            goto 0x678;
        } else {
            if (*reinterpret_cast<int32_t*>(&rdx66) < reinterpret_cast<int32_t>(a_input)) {
                if (*reinterpret_cast<int32_t*>(&rdx66) < -63) {
                    *reinterpret_cast<int32_t*>(&rcx74) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx74) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx74) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rax33 == a_input));
                } else {
                    ecx75 = *reinterpret_cast<int32_t*>(&rdx66);
                    ecx76 = *reinterpret_cast<int32_t*>(&rdx66);
                    *reinterpret_cast<int32_t*>(&rcx77) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx77) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx77) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rax33 << *reinterpret_cast<unsigned char*>(&ecx76) == a_input));
                    rcx74 = rcx77 | rax33 >> -*reinterpret_cast<signed char*>(&ecx75);
                }
                rax33 = rcx74;
                r10d72 = *reinterpret_cast<uint32_t*>(&rax33) & 0x3ff;
                if (r10d72 == a_input) {
                    r10d72 = reinterpret_cast<uint32_t>(a_input);
                } else {
                    rcx78 = g62e;
                    *rcx78 = reinterpret_cast<unsigned char>(*rcx78 | 4);
                }
            }
        }
    }
    if (r10d72 != a_input) {
        rcx79 = g642;
        *rcx79 = reinterpret_cast<unsigned char>(*rcx79 | 1);
    }
    *reinterpret_cast<int32_t*>(&rcx80) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx80) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<unsigned char*>(&rcx80) = reinterpret_cast<uint1_t>((esi68 | r10d72 ^ 0x200) == a_input);
    if ((reinterpret_cast<uint64_t>(~rcx80) & rax33 + rdi69 >> 10) == a_input) {
    }
    addr_2f1_14:
    if (rdx == a_input) 
        goto 0x678;
    eax81 = reinterpret_cast<uint32_t>(a_input);
    rcx82 = rdx >> 32;
    zf83 = reinterpret_cast<uint1_t>(rcx82 == a_input);
    if (!zf83) 
        goto addr_306_55;
    *reinterpret_cast<uint32_t*>(&rcx82) = edi;
    addr_306_55:
    *reinterpret_cast<unsigned char*>(&eax81) = zf83;
    esi84 = *reinterpret_cast<uint32_t*>(&rcx82) << 16;
    edi85 = reinterpret_cast<uint32_t>(a_input);
    cf86 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx82) < 0x10000);
    if (!cf86) {
        esi84 = *reinterpret_cast<uint32_t*>(&rcx82);
    }
    *reinterpret_cast<unsigned char*>(&edi85) = cf86;
    *reinterpret_cast<uint32_t*>(&rdi87) = edi85 << 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi87) + 4) = reinterpret_cast<int32_t>(a_input);
    r14d88 = static_cast<uint32_t>(rdi87 + 8);
    ecx89 = esi84 << 8;
    cf90 = esi84 < 0x1000000;
    if (!cf90) {
        ecx89 = esi84;
    }
    if (!cf90) {
        r14d88 = *reinterpret_cast<uint32_t*>(&rdi87);
    }
    *reinterpret_cast<uint32_t*>(&rcx91) = ecx89 >> 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx91) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<uint32_t*>(&r14_92) = (r14d88 | eax81 << 5) + *reinterpret_cast<int32_t*>(0x343 + rcx91 * 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_92) + 4) = reinterpret_cast<int32_t>(a_input);
    ecx93 = static_cast<int32_t>(r14_92 - 11);
    rdx = rdx << *reinterpret_cast<unsigned char*>(&ecx93);
    r10d26 = 12 - *reinterpret_cast<uint32_t*>(&r14_92);
    goto addr_35a_15;
}

void fun_51f() {
    goto 0x678;
}

void ullong_to_double() {
    return;
}

void submain() {
    fun_6bc(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 24 + 8);
}

