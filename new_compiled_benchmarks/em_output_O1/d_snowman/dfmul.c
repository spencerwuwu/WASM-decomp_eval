
uint176_t g59c = 0x4c00000000258b4c;

void a_input(int64_t rdi, int32_t esi);

int64_t fun_5bd(int64_t rdi, int64_t rsi);

int32_t fun_5de();

void fun_5f2(int32_t* rdi, int32_t* rsi);

void fun_62f(int64_t rdi, int64_t rsi);

void fun_570(int32_t* rdi, int32_t* rsi) {
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
    r15_4 = *reinterpret_cast<int64_t**>(&g59c);
    r12_5 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g59c) + 7);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi7 = r15_4[rbp6];
        rsi8 = r12_5[rbp6];
        fun_5bd(rdi7, rsi8);
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        ++rbp6;
    } while (rbp6 != 20);
    rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp3) + 8);
    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
    eax11 = fun_5de();
    if (eax11 != a_input) {
        rdi9 = reinterpret_cast<int32_t*>(0x5e9);
        *reinterpret_cast<int32_t*>(&rsi10) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_5f2(0x5e9, rsi10);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi9 = *rsi10;
    __asm__("subsd xmm0, [r14]");
    fun_62f(0x628, rsi10 + 1);
    goto v12;
}

int64_t fun_5bd(int64_t rdi, int64_t rsi) {
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
        fun_5bd(rdi4, rsi6);
    }
    rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
    eax10 = fun_5de();
    if (eax10 != a_input) {
        rdi8 = reinterpret_cast<int32_t*>(0x5e9);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_5f2(0x5e9, rsi9);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r14]");
    fun_62f(0x628, rsi9 + 1);
    goto v11;
}

int32_t g5e9 = 0xc031c689;

int32_t fun_5de() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != a_input) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_5f2(0x5e9, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g5e9 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_62f(0x628, rsi2 + 1);
    goto v4;
}

void fun_5f2(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_62f(0x628, rsi + 1);
    goto v3;
}

void fun_62f(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_55c(int32_t* rdi) {
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
        rdi = reinterpret_cast<int32_t*>(0x567);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_570(0x567, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    r15_6 = *reinterpret_cast<int64_t**>(&g59c);
    r12_7 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g59c) + 7);
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi9 = r15_6[rbp8];
        rsi10 = r12_7[rbp8];
        fun_5bd(rdi9, rsi10);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
        ++rbp8;
    } while (rbp8 != 20);
    rdi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) + 8);
    *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
    eax13 = fun_5de();
    if (eax13 != a_input) {
        rdi11 = reinterpret_cast<int32_t*>(0x5e9);
        *reinterpret_cast<int32_t*>(&rsi12) = eax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_5f2(0x5e9, rsi12);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi11 = *rsi12;
    __asm__("subsd xmm0, [r14]");
    fun_62f(0x628, rsi12 + 1);
    goto v14;
}

void a_input(int64_t rdi, int32_t esi) {
    if (esi != a_input) {
        if (esi > 63) {
        }
    }
}

unsigned char* g22c = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

void fun_1ac(int64_t rdi, uint64_t rsi, uint64_t rdx, int64_t rcx, uint64_t r8, unsigned char r9b, int64_t a7, int64_t a8, int64_t a9) {
    signed char* rax10;
    signed char* rax11;
    signed char al12;
    int64_t rax13;
    signed char al14;
    unsigned char cl15;
    unsigned char dl16;
    unsigned char* r8_17;

    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
    *reinterpret_cast<signed char*>(&rax13) = reinterpret_cast<signed char>(al14 + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&rdx) + 1));
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rax13) < reinterpret_cast<signed char>(a_input) != __intrinsic()) | reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&rax13) == a_input))) {
        cl15 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rcx << 13 == a_input))) & r9b);
        dl16 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdx & rsi) == r8)));
        if (!reinterpret_cast<int1_t>(cl15 == a_input) || dl16 != a_input) {
            r8_17 = g22c;
            *r8_17 = reinterpret_cast<unsigned char>(*r8_17 | 16);
        }
        if (rsi + rsi < 0xffe0000000000001) {
        }
        if (!reinterpret_cast<int1_t>(cl15 == a_input)) {
        }
        if (!reinterpret_cast<int1_t>(dl16 == a_input)) {
        }
    }
    goto a9;
}

unsigned char* g410 = reinterpret_cast<unsigned char*>(0x894cc8ff49100880);

uint32_t* g3f2 = reinterpret_cast<uint32_t*>(0xff832674ff85398b);

unsigned char* g47f = reinterpret_cast<unsigned char*>(0xba48090a80);

unsigned char* g4dc = reinterpret_cast<unsigned char*>(0xc9314503eb040980);

unsigned char* g4f0 = reinterpret_cast<unsigned char*>(0xc148c6014c010980);

void fun_1b9(int64_t rdi, uint32_t esi, uint32_t edx, uint32_t ecx, uint64_t r8, int64_t r9) {
    int64_t r10_7;
    uint64_t rcx8;
    uint64_t r11_9;
    unsigned char* rax10;
    int32_t ebx11;
    int64_t r11_12;
    uint32_t ecx13;
    uint64_t rbx14;
    uint64_t r11_15;
    uint1_t zf16;
    uint32_t edi17;
    uint32_t r14d18;
    uint1_t cf19;
    int64_t r14_20;
    uint32_t r15d21;
    uint32_t ebx22;
    int1_t cf23;
    int64_t rbx24;
    int64_t r15_25;
    int32_t ecx26;
    uint64_t r11_27;
    uint64_t r11_28;
    uint32_t ebx29;
    uint64_t r11_30;
    uint64_t rcx31;
    uint64_t r10_32;
    uint64_t r10_33;
    uint64_t r8_34;
    uint64_t rsi35;
    uint64_t rdi36;
    int64_t r11_37;
    int64_t r10_38;
    uint64_t r10_39;
    int64_t rsi40;
    uint64_t tmp64_41;
    uint64_t r8_42;
    uint64_t rcx43;
    uint64_t rcx44;
    uint32_t edi45;
    uint64_t rsi46;
    int1_t sf47;
    int64_t r10_48;
    int64_t rdx49;
    uint32_t* rcx50;
    uint32_t edi51;
    uint64_t r8_52;
    int1_t zf53;
    uint32_t r9d54;
    unsigned char* rdx55;
    uint64_t rcx56;
    uint32_t ecx57;
    uint32_t ecx58;
    uint64_t rcx59;
    unsigned char* rcx60;
    unsigned char* rcx61;
    int64_t rcx62;
    uint32_t ecx63;
    uint64_t rdx64;
    uint64_t r10_65;
    uint1_t zf66;
    uint32_t esi67;
    uint32_t edi68;
    uint1_t cf69;
    int64_t rdi70;
    uint32_t r14d71;
    uint32_t edx72;
    int1_t cf73;
    int64_t rdx74;
    int64_t r14_75;
    int32_t ecx76;
    uint64_t r10_77;

    if (edx == 0x7ff) {
        if (r10_7 == a_input) {
            *reinterpret_cast<uint32_t*>(&rcx8) = ecx & 0x7ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(a_input);
            if ((rcx8 | r11_9) == a_input) {
                rax10 = g410;
                *rax10 = reinterpret_cast<unsigned char>(*rax10 | 16);
                goto 0x25f;
            } else {
                goto 0x25f;
            }
        }
    }
    if (ebx11 != a_input) {
        if (!reinterpret_cast<int1_t>(edx == a_input)) 
            goto addr_369_9;
        goto addr_301_11;
    }
    if (r11_12 == a_input) 
        goto 0x25f;
    ecx13 = reinterpret_cast<uint32_t>(a_input);
    rbx14 = r11_15 >> 32;
    zf16 = reinterpret_cast<uint1_t>(rbx14 == a_input);
    if (!zf16) 
        goto addr_2a8_14;
    *reinterpret_cast<uint32_t*>(&rbx14) = *reinterpret_cast<uint32_t*>(&rdi);
    addr_2a8_14:
    *reinterpret_cast<unsigned char*>(&ecx13) = zf16;
    edi17 = *reinterpret_cast<uint32_t*>(&rbx14) << 16;
    r14d18 = reinterpret_cast<uint32_t>(a_input);
    cf19 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rbx14) < 0x10000);
    if (!cf19) {
        edi17 = *reinterpret_cast<uint32_t*>(&rbx14);
    }
    *reinterpret_cast<unsigned char*>(&r14d18) = cf19;
    *reinterpret_cast<uint32_t*>(&r14_20) = r14d18 << 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_20) + 4) = reinterpret_cast<int32_t>(a_input);
    r15d21 = static_cast<uint32_t>(r14_20 + 8);
    ebx22 = edi17 << 8;
    cf23 = edi17 < 0x1000000;
    if (!cf23) {
        ebx22 = edi17;
    }
    if (!cf23) {
        r15d21 = *reinterpret_cast<uint32_t*>(&r14_20);
    }
    *reinterpret_cast<uint32_t*>(&rbx24) = ebx22 >> 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx24) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<uint32_t*>(&r15_25) = (r15d21 | ecx13 << 5) + *reinterpret_cast<uint32_t*>(0x2e7 + rbx24 * 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_25) + 4) = reinterpret_cast<int32_t>(a_input);
    ecx26 = static_cast<int32_t>(r15_25 - 11);
    r11_27 = r11_28 << *reinterpret_cast<unsigned char*>(&ecx26);
    ebx29 = 12 - *reinterpret_cast<uint32_t*>(&r15_25);
    if (!reinterpret_cast<int1_t>(edx == a_input)) {
        addr_369_9:
        r11_30 = r11_27 << 10;
        rcx31 = 0x4000000000000000 | r11_30;
        r10_32 = r10_33 << 11;
        r8_34 = r8 | r10_32;
        rsi35 = rcx31 >> 32;
        rdi36 = r8_34 >> 32;
        *reinterpret_cast<int32_t*>(&r11_37) = *reinterpret_cast<int32_t*>(&r11_30);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_37) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<int32_t*>(&r10_38) = *reinterpret_cast<int32_t*>(&r10_32);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_38) + 4) = reinterpret_cast<int32_t>(a_input);
        r10_39 = r10_38 * rsi35;
        *reinterpret_cast<int32_t*>(&rsi40) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi40) + 4) = reinterpret_cast<int32_t>(a_input);
        tmp64_41 = r10_39 + r11_37 * rdi36;
        *reinterpret_cast<unsigned char*>(&rsi40) = reinterpret_cast<uint1_t>(tmp64_41 < r10_39);
        r8_42 = r8_34 * rcx31;
        *reinterpret_cast<int32_t*>(&rcx43) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx43) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<unsigned char*>(&rcx43) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r8_42 == a_input));
        rcx44 = rcx43 | (tmp64_41 >> 32) + rdi36 * rsi35 + (rsi40 << 32) + reinterpret_cast<uint1_t>(r8_42 < tmp64_41 << 32);
        edi45 = reinterpret_cast<uint32_t>(a_input);
        rsi46 = rcx44 + rcx44;
        sf47 = reinterpret_cast<int64_t>(rsi46) < reinterpret_cast<int64_t>(a_input);
        *reinterpret_cast<unsigned char*>(&edi45) = reinterpret_cast<uint1_t>(!sf47);
        if (sf47) {
            rsi46 = rcx44;
        }
    } else {
        addr_301_11:
        if (r10_48 == a_input) 
            goto 0x25f; else 
            goto addr_30a_23;
    }
    *reinterpret_cast<uint32_t*>(&rdx49) = edx + ebx29 - edi45 + 0xfffffc01;
    rcx50 = g3f2;
    edi51 = *rcx50;
    if (edi51 == a_input) {
        *reinterpret_cast<int32_t*>(&r8_52) = 0x200;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_52) + 4) = reinterpret_cast<int32_t>(a_input);
    } else {
        if (edi51 != 1) {
            if (r9 < reinterpret_cast<int64_t>(a_input)) {
                zf53 = edi51 == 2;
            } else {
                zf53 = edi51 == 3;
            }
            *reinterpret_cast<int32_t*>(&r8_52) = 0x3ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_52) + 4) = reinterpret_cast<int32_t>(a_input);
            if (zf53) {
                r8_52 = reinterpret_cast<uint64_t>(a_input);
            }
        } else {
            *reinterpret_cast<int32_t*>(&r8_52) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_52) + 4) = reinterpret_cast<int32_t>(a_input);
        }
    }
    r9d54 = *reinterpret_cast<uint32_t*>(&rsi46) & 0x3ff;
    if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rdx49)) >= 0x7fd) {
        if (*reinterpret_cast<int32_t*>(&rdx49) > reinterpret_cast<int32_t>(0x7fd) || *reinterpret_cast<uint32_t*>(&rdx49) == 0x7fd && reinterpret_cast<int64_t>(r8_52 + rsi46) < reinterpret_cast<int64_t>(a_input)) {
            rdx55 = g47f;
            *rdx55 = reinterpret_cast<unsigned char>(*rdx55 | 9);
            goto 0x25f;
        } else {
            if (*reinterpret_cast<int32_t*>(&rdx49) < reinterpret_cast<int32_t>(a_input)) {
                if (*reinterpret_cast<int32_t*>(&rdx49) < reinterpret_cast<int32_t>(0xffffffc1)) {
                    *reinterpret_cast<int32_t*>(&rcx56) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx56) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx56) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi46 == a_input));
                } else {
                    ecx57 = *reinterpret_cast<uint32_t*>(&rdx49);
                    ecx58 = *reinterpret_cast<uint32_t*>(&rdx49);
                    *reinterpret_cast<int32_t*>(&rcx59) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx59) + 4) = reinterpret_cast<int32_t>(a_input);
                    *reinterpret_cast<unsigned char*>(&rcx59) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi46 << *reinterpret_cast<unsigned char*>(&ecx58) == a_input));
                    rcx56 = rcx59 | rsi46 >> -*reinterpret_cast<signed char*>(&ecx57);
                }
                rsi46 = rcx56;
                r9d54 = *reinterpret_cast<uint32_t*>(&rsi46) & 0x3ff;
                if (r9d54 == a_input) {
                    r9d54 = reinterpret_cast<uint32_t>(a_input);
                } else {
                    rcx60 = g4dc;
                    *rcx60 = reinterpret_cast<unsigned char>(*rcx60 | 4);
                }
            }
        }
    }
    if (r9d54 != a_input) {
        rcx61 = g4f0;
        *rcx61 = reinterpret_cast<unsigned char>(*rcx61 | 1);
    }
    *reinterpret_cast<int32_t*>(&rcx62) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx62) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<unsigned char*>(&rcx62) = reinterpret_cast<uint1_t>((edi51 | r9d54 ^ 0x200) == a_input);
    if ((reinterpret_cast<uint64_t>(~rcx62) & rsi46 + r8_52 >> 10) == a_input) {
    }
    goto 0x25f;
    addr_30a_23:
    ecx63 = reinterpret_cast<uint32_t>(a_input);
    rdx64 = r10_65 >> 32;
    zf66 = reinterpret_cast<uint1_t>(rdx64 == a_input);
    if (zf66) {
        *reinterpret_cast<uint32_t*>(&rdx64) = esi;
    }
    *reinterpret_cast<unsigned char*>(&ecx63) = zf66;
    esi67 = *reinterpret_cast<uint32_t*>(&rdx64) << 16;
    edi68 = reinterpret_cast<uint32_t>(a_input);
    cf69 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdx64) < 0x10000);
    if (!cf69) {
        esi67 = *reinterpret_cast<uint32_t*>(&rdx64);
    }
    *reinterpret_cast<unsigned char*>(&edi68) = cf69;
    *reinterpret_cast<uint32_t*>(&rdi70) = edi68 << 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi70) + 4) = reinterpret_cast<int32_t>(a_input);
    r14d71 = static_cast<uint32_t>(rdi70 + 8);
    edx72 = esi67 << 8;
    cf73 = esi67 < 0x1000000;
    if (!cf73) {
        edx72 = esi67;
    }
    if (!cf73) {
        r14d71 = *reinterpret_cast<uint32_t*>(&rdi70);
    }
    *reinterpret_cast<uint32_t*>(&rdx74) = edx72 >> 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx74) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<uint32_t*>(&r14_75) = (r14d71 | ecx63 << 5) + *reinterpret_cast<uint32_t*>(0x353 + rdx74 * 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_75) + 4) = reinterpret_cast<int32_t>(a_input);
    ecx76 = static_cast<int32_t>(r14_75 - 11);
    r10_33 = r10_77 << *reinterpret_cast<unsigned char*>(&ecx76);
    edx = 12 - *reinterpret_cast<uint32_t*>(&r14_75);
    goto addr_369_9;
}

void ullong_to_double() {
    return;
}

void submain() {
    fun_55c(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 24 + 8);
}

