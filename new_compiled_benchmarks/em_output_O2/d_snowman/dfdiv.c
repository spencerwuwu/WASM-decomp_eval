
uint176_t g6ec = 0x4c00000000258b4c;

void a_input(int64_t rdi, int32_t esi);

int64_t fun_70d(int64_t rdi, int64_t rsi);

int32_t fun_72e();

void fun_742(int32_t* rdi, int32_t* rsi);

void fun_77f(int64_t rdi, int64_t rsi);

void fun_6c0(int32_t* rdi, int32_t* rsi) {
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
    r15_4 = *reinterpret_cast<int64_t**>(&g6ec);
    r12_5 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g6ec) + 7);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi7 = r15_4[rbp6];
        rsi8 = r12_5[rbp6];
        fun_70d(rdi7, rsi8);
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        ++rbp6;
    } while (rbp6 != 22);
    rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp3) + 8);
    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
    eax11 = fun_72e();
    if (eax11 != a_input) {
        rdi9 = reinterpret_cast<int32_t*>(0x739);
        *reinterpret_cast<int32_t*>(&rsi10) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_742(0x739, rsi10);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi9 = *rsi10;
    __asm__("subsd xmm0, [r14]");
    fun_77f(0x778, rsi10 + 1);
    goto v12;
}

int64_t fun_70d(int64_t rdi, int64_t rsi) {
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
        fun_70d(rdi4, rsi6);
    }
    rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
    eax10 = fun_72e();
    if (eax10 != a_input) {
        rdi8 = reinterpret_cast<int32_t*>(0x739);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_742(0x739, rsi9);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r14]");
    fun_77f(0x778, rsi9 + 1);
    goto v11;
}

int32_t g739 = 0xc031c689;

int32_t fun_72e() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != a_input) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_742(0x739, rsi2);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g739 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_77f(0x778, rsi2 + 1);
    goto v4;
}

void fun_742(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_77f(0x778, rsi + 1);
    goto v3;
}

void fun_77f(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_6ac(int32_t* rdi) {
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
        rdi = reinterpret_cast<int32_t*>(0x6b7);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_6c0(0x6b7, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x8]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x10]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    r15_6 = *reinterpret_cast<int64_t**>(&g6ec);
    r12_7 = *reinterpret_cast<int64_t**>(reinterpret_cast<int64_t>(&g6ec) + 7);
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(a_input);
    do {
        rdi9 = r15_6[rbp8];
        rsi10 = r12_7[rbp8];
        fun_70d(rdi9, rsi10);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
        ++rbp8;
    } while (rbp8 != 22);
    rdi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) + 8);
    *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
    eax13 = fun_72e();
    if (eax13 != a_input) {
        rdi11 = reinterpret_cast<int32_t*>(0x739);
        *reinterpret_cast<int32_t*>(&rsi12) = eax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(a_input);
        fun_742(0x739, rsi12);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x8]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x10]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi11 = *rsi12;
    __asm__("subsd xmm0, [r14]");
    fun_77f(0x778, rsi12 + 1);
    goto v14;
}

void a_input(int64_t rdi, int32_t esi) {
    if (esi != a_input) {
        if (esi > 63) {
        }
    }
}

uint32_t* g3f2 = reinterpret_cast<uint32_t*>(0x8902ca831774108b);

unsigned char* g251 = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

uint32_t* g53d = reinterpret_cast<uint32_t*>(0xfe831074f685318b);

unsigned char* g5a8 = reinterpret_cast<unsigned char*>(0xb848090880);

uint32_t* g5d2 = reinterpret_cast<uint32_t*>(0x4c01c98341098b45);

uint32_t* g65f = reinterpret_cast<uint32_t*>(0x3104c983410a8b44);

uint32_t* g5e0 = reinterpret_cast<uint32_t*>(0x48c93102eb0a8945);

void fun_1d4(uint64_t rdi, uint64_t rsi, uint32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    signed char* rax13;
    signed char* rax14;
    signed char al15;
    int64_t rbx16;
    uint64_t r14_17;
    uint32_t r14d18;
    uint32_t* rax19;
    uint64_t rax20;
    uint32_t ecx21;
    uint64_t rdx22;
    uint64_t rbx23;
    uint1_t zf24;
    uint32_t esi25;
    uint32_t r14d26;
    uint1_t cf27;
    int64_t r14_28;
    uint32_t r15d29;
    uint32_t edx30;
    int1_t cf31;
    int64_t rdx32;
    int64_t r15_33;
    int32_t ecx34;
    uint64_t rbx35;
    uint64_t rbx36;
    int64_t rbx37;
    unsigned char cl38;
    unsigned char dl39;
    unsigned char* r8_40;
    int32_t r11d41;
    int64_t rax42;
    uint32_t ecx43;
    uint64_t rsi44;
    uint64_t rax45;
    uint1_t zf46;
    uint32_t edi47;
    uint32_t r11d48;
    uint1_t cf49;
    int64_t r11_50;
    uint32_t esi51;
    uint32_t r14d52;
    int1_t cf53;
    int64_t r14_54;
    int64_t rsi55;
    int32_t ecx56;
    uint64_t rax57;
    uint64_t rax58;
    uint32_t r11d59;
    int64_t r11_60;
    uint64_t rdi61;
    uint64_t r14_62;
    uint64_t r10_63;
    uint64_t r10_64;
    int64_t rcx65;
    uint64_t rdi66;
    uint64_t rax67;
    int64_t v68;
    uint64_t r12_69;
    uint64_t rax70;
    uint64_t rsi71;
    uint64_t v72;
    uint64_t rsi73;
    uint64_t rax74;
    uint64_t r14_75;
    uint64_t rbp76;
    uint64_t r13_77;
    uint64_t rcx78;
    uint64_t rdx79;
    uint64_t rax80;
    uint1_t cf81;
    uint64_t rax82;
    uint64_t rbx83;
    uint64_t tmp64_84;
    uint1_t cf85;
    uint64_t rax86;
    uint64_t rcx87;
    int64_t rsi88;
    uint64_t rsi89;
    uint64_t rbx90;
    uint64_t tmp64_91;
    uint64_t r15_92;
    uint64_t rdx93;
    uint64_t rdi94;
    uint1_t cf95;
    uint64_t rdi96;
    uint64_t tmp64_97;
    uint1_t cf98;
    uint64_t rcx99;
    int64_t rdx100;
    uint32_t* rcx101;
    uint32_t esi102;
    uint64_t rdi103;
    int1_t zf104;
    unsigned char* rax105;
    uint32_t ecx106;
    uint64_t rcx107;
    int32_t ecx108;
    uint64_t rcx109;
    uint32_t ecx110;
    uint32_t* r9_111;
    uint32_t r9d112;
    int64_t rdi113;
    uint32_t* rdx114;
    uint32_t* r10_115;

    *rax13 = reinterpret_cast<signed char>(*rax14 + al15);
    if (edx == a_input) {
        if (rbx16 == a_input) {
            *reinterpret_cast<uint32_t*>(&r14_17) = r14d18 & 0x7ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_17) + 4) = reinterpret_cast<int32_t>(a_input);
            rax19 = g3f2;
            if ((r14_17 | rax20) == a_input) {
                *rax19 = *rax19 | 16;
                goto addr_616_5;
            } else {
                *rax19 = *rax19 | 2;
                goto addr_616_5;
            }
        } else {
            ecx21 = reinterpret_cast<uint32_t>(a_input);
            rdx22 = rbx23 >> 32;
            zf24 = reinterpret_cast<uint1_t>(rdx22 == a_input);
            if (zf24) {
                *reinterpret_cast<uint32_t*>(&rdx22) = *reinterpret_cast<uint32_t*>(&rsi);
            }
            *reinterpret_cast<unsigned char*>(&ecx21) = zf24;
            esi25 = *reinterpret_cast<uint32_t*>(&rdx22) << 16;
            r14d26 = reinterpret_cast<uint32_t>(a_input);
            cf27 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdx22) < 0x10000);
            if (!cf27) {
                esi25 = *reinterpret_cast<uint32_t*>(&rdx22);
            }
            *reinterpret_cast<unsigned char*>(&r14d26) = cf27;
            *reinterpret_cast<uint32_t*>(&r14_28) = r14d26 << 4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_28) + 4) = reinterpret_cast<int32_t>(a_input);
            r15d29 = static_cast<uint32_t>(r14_28 + 8);
            edx30 = esi25 << 8;
            cf31 = esi25 < 0x1000000;
            if (!cf31) {
                edx30 = esi25;
            }
            if (!cf31) {
                r15d29 = *reinterpret_cast<uint32_t*>(&r14_28);
            }
            *reinterpret_cast<uint32_t*>(&rdx32) = edx30 >> 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<uint32_t*>(&r15_33) = (r15d29 | ecx21 << 5) + *reinterpret_cast<int32_t*>(0x2dd + rdx32 * 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_33) + 4) = reinterpret_cast<int32_t>(a_input);
            ecx34 = static_cast<int32_t>(r15_33 - 11);
            rbx35 = rbx36 << *reinterpret_cast<unsigned char*>(&ecx34);
            edx = 12 - *reinterpret_cast<uint32_t*>(&r15_33);
        }
    } else {
        if (edx == 0x7ff) {
            if (rbx37 != a_input) {
                cl38 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdi & 0x7ff8000000000000) == 0x7ff0000000000000)));
                dl39 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
                if (!reinterpret_cast<int1_t>(cl38 == a_input) || dl39 != a_input) {
                    r8_40 = g251;
                    *r8_40 = reinterpret_cast<unsigned char>(*r8_40 | 16);
                }
                if (rsi + rsi < 0xffe0000000000001) {
                }
                if (!reinterpret_cast<int1_t>(cl38 == a_input)) {
                }
                if (!reinterpret_cast<int1_t>(dl39 == a_input)) {
                }
                goto addr_616_5;
            }
        }
    }
    if (reinterpret_cast<int1_t>(r11d41 == a_input)) {
        if (rax42 == a_input) {
            addr_616_5:
            goto a12;
        } else {
            ecx43 = reinterpret_cast<uint32_t>(a_input);
            rsi44 = rax45 >> 32;
            zf46 = reinterpret_cast<uint1_t>(rsi44 == a_input);
            if (zf46) {
                *reinterpret_cast<uint32_t*>(&rsi44) = *reinterpret_cast<uint32_t*>(&rdi);
            }
            *reinterpret_cast<unsigned char*>(&ecx43) = zf46;
            edi47 = *reinterpret_cast<uint32_t*>(&rsi44) << 16;
            r11d48 = reinterpret_cast<uint32_t>(a_input);
            cf49 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi44) < 0x10000);
            if (!cf49) {
                edi47 = *reinterpret_cast<uint32_t*>(&rsi44);
            }
            *reinterpret_cast<unsigned char*>(&r11d48) = cf49;
            *reinterpret_cast<uint32_t*>(&r11_50) = r11d48 << 4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_50) + 4) = reinterpret_cast<int32_t>(a_input);
            esi51 = static_cast<uint32_t>(r11_50 + 8);
            r14d52 = edi47 << 8;
            cf53 = edi47 < 0x1000000;
            if (!cf53) {
                r14d52 = edi47;
            }
            if (!cf53) {
                esi51 = *reinterpret_cast<uint32_t*>(&r11_50);
            }
            *reinterpret_cast<uint32_t*>(&r14_54) = r14d52 >> 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_54) + 4) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<uint32_t*>(&rsi55) = (esi51 | ecx43 << 5) + *reinterpret_cast<int32_t*>(0x350 + r14_54 * 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi55) + 4) = reinterpret_cast<int32_t>(a_input);
            ecx56 = static_cast<int32_t>(rsi55 - 11);
            rax57 = rax58 << *reinterpret_cast<unsigned char*>(&ecx56);
            r11d59 = 12 - *reinterpret_cast<uint32_t*>(&rsi55);
        }
    }
    *reinterpret_cast<uint32_t*>(&r11_60) = r11d59 - edx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_60) + 4) = reinterpret_cast<int32_t>(a_input);
    rdi61 = 0x4000000000000000 | rax57 << 10;
    r14_62 = rbx35 << 11;
    r10_63 = r10_64 | r14_62;
    *reinterpret_cast<int32_t*>(&rcx65) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx65) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<unsigned char*>(&rcx65) = reinterpret_cast<uint1_t>(r10_63 <= rdi61 + rdi61);
    rdi66 = rdi61 >> *reinterpret_cast<unsigned char*>(&rcx65);
    rax67 = 0xffffffffffffffff;
    if (r10_63 > rdi66) {
        v68 = rcx65;
        r12_69 = r10_63 >> 32;
        rax70 = r10_63 & 0xffffffff00000000;
        rsi71 = 0xffffffff00000000;
        v72 = rax70;
        if (rax70 > rdi66) {
            if (rdi66 >> 32 == a_input) {
                *reinterpret_cast<uint32_t*>(&rsi73) = *reinterpret_cast<uint32_t*>(&rdi66) / *reinterpret_cast<uint32_t*>(&r12_69);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi73) + 4) = reinterpret_cast<int32_t>(a_input);
            } else {
                rsi73 = rdi66 / r12_69;
            }
            rsi71 = rsi73 << 32;
        }
        rax74 = rsi71 >> 32;
        *reinterpret_cast<uint32_t*>(&r14_75) = *reinterpret_cast<uint32_t*>(&r14_62) & 0xfffff800;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_75) + 4) = reinterpret_cast<int32_t>(a_input);
        rbp76 = rax74 * r14_75;
        r13_77 = (rbp76 >> 32) + rax74 * r12_69;
        rcx78 = rsi71 * r10_63;
        rdx79 = -rcx78;
        rax80 = rdi66 - (r13_77 + reinterpret_cast<uint1_t>(rdi66 < r13_77 + reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rcx78 == a_input))));
        cf81 = reinterpret_cast<uint1_t>(rax80 < reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rcx78 < rbp76 << 32)));
        rax82 = rax80 - (reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf81));
        if (reinterpret_cast<int64_t>(rax82) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf81))) {
            rbx83 = rbx35 << 43;
            do {
                rsi71 = rsi71 + 0xffffffff00000000;
                tmp64_84 = rdx79 + rbx83;
                cf85 = reinterpret_cast<uint1_t>(tmp64_84 < rdx79);
                rdx79 = tmp64_84;
                rax82 = rax82 + r12_69 + cf85;
            } while (reinterpret_cast<int64_t>(rax82) < reinterpret_cast<int64_t>(a_input));
        }
        __asm__("shrd rdx, rax, 0x20");
        *reinterpret_cast<uint32_t*>(&rax86) = 0xffffffff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax86) + 4) = reinterpret_cast<int32_t>(a_input);
        if (v72 > rdx79) {
            if (rdx79 >> 32 == a_input) {
                *reinterpret_cast<uint32_t*>(&rax86) = *reinterpret_cast<uint32_t*>(&rdx79) / *reinterpret_cast<uint32_t*>(&r12_69);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax86) + 4) = reinterpret_cast<int32_t>(a_input);
            } else {
                rax86 = rdx79 / r12_69;
            }
        }
        rax67 = rax86 | rsi71;
        if ((*reinterpret_cast<uint32_t*>(&rax67) & 0x1ff) <= 2) {
            rcx87 = rax67 >> 32;
            *reinterpret_cast<uint32_t*>(&rsi88) = *reinterpret_cast<uint32_t*>(&rax67);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi88) + 4) = reinterpret_cast<int32_t>(a_input);
            rsi89 = rsi88 * r12_69;
            *reinterpret_cast<int32_t*>(&rbx90) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx90) + 4) = reinterpret_cast<int32_t>(a_input);
            tmp64_91 = rsi89 + r14_75 * rcx87;
            if (tmp64_91 < rsi89) {
                rbx90 = 0xffffffff00000000;
            }
            r15_92 = rax67 * r10_63;
            rdx93 = -r15_92;
            rdi94 = rdi66 - (reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(rdi66 < reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r15_92 == a_input)))))) - ((tmp64_91 >> 32) + rcx87 * r12_69) + rbx90;
            cf95 = reinterpret_cast<uint1_t>(rdi94 < reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(reinterpret_cast<uint1_t>(r15_92 < tmp64_91 << 32)));
            rdi96 = rdi94 - (reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf95));
            if (reinterpret_cast<int64_t>(rdi96) < reinterpret_cast<int64_t>(reinterpret_cast<int64_t>(a_input) + static_cast<uint64_t>(cf95))) {
                do {
                    --rax67;
                    tmp64_97 = rdx93 + r10_63;
                    cf98 = reinterpret_cast<uint1_t>(tmp64_97 < rdx93);
                    rdx93 = tmp64_97;
                    rdi96 = rdi96 + reinterpret_cast<uint64_t>(a_input) + cf98;
                } while (reinterpret_cast<int64_t>(rdi96) < reinterpret_cast<int64_t>(a_input));
            }
            *reinterpret_cast<int32_t*>(&rcx99) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx99) + 4) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<unsigned char*>(&rcx99) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdx93 == a_input));
            rax67 = rax67 | rcx99;
        }
        rcx65 = v68;
    }
    *reinterpret_cast<int32_t*>(&rdx100) = static_cast<int32_t>(rcx65 + r11_60) + 0x3fd;
    rcx101 = g53d;
    esi102 = *rcx101;
    if (esi102 == a_input) {
        *reinterpret_cast<int32_t*>(&rdi103) = 0x200;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi103) + 4) = reinterpret_cast<int32_t>(a_input);
    } else {
        if (esi102 != 1) {
            if (r9 < reinterpret_cast<int64_t>(a_input)) {
                zf104 = esi102 == 2;
            } else {
                zf104 = esi102 == 3;
            }
            *reinterpret_cast<int32_t*>(&rdi103) = 0x3ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi103) + 4) = reinterpret_cast<int32_t>(a_input);
            if (zf104) {
                rdi103 = reinterpret_cast<uint64_t>(a_input);
            }
        } else {
            *reinterpret_cast<int32_t*>(&rdi103) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi103) + 4) = reinterpret_cast<int32_t>(a_input);
        }
    }
    if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rdx100)) < 0x7fd) 
        goto addr_5c1_70;
    if (*reinterpret_cast<int32_t*>(&rdx100) > 0x7fd || *reinterpret_cast<int32_t*>(&rdx100) == 0x7fd && reinterpret_cast<int64_t>(rdi103 + rax67) < reinterpret_cast<int64_t>(a_input)) {
        rax105 = g5a8;
        *rax105 = reinterpret_cast<unsigned char>(*rax105 | 9);
        goto addr_616_5;
    } else {
        if (*reinterpret_cast<int32_t*>(&rdx100) < reinterpret_cast<int32_t>(a_input)) {
            ecx106 = reinterpret_cast<uint32_t>(-*reinterpret_cast<int32_t*>(&rdx100));
            if (ecx106 > 63) {
                *reinterpret_cast<uint32_t*>(&rcx107) = reinterpret_cast<uint32_t>(a_input);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx107) + 4) = reinterpret_cast<int32_t>(a_input);
                *reinterpret_cast<unsigned char*>(&rcx107) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rax67 == a_input));
            } else {
                ecx108 = *reinterpret_cast<int32_t*>(&rdx100);
                *reinterpret_cast<int32_t*>(&rcx109) = reinterpret_cast<int32_t>(a_input);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx109) + 4) = reinterpret_cast<int32_t>(a_input);
                *reinterpret_cast<unsigned char*>(&rcx109) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rax67 << *reinterpret_cast<unsigned char*>(&ecx108) == a_input));
                rcx107 = rcx109 | rax67 >> *reinterpret_cast<signed char*>(&ecx106);
            }
            rax67 = rcx107;
            ecx110 = *reinterpret_cast<uint32_t*>(&rcx107) & 0x3ff;
            if (ecx110 != a_input) 
                goto addr_658_78;
        } else {
            addr_5c1_70:
            ecx110 = *reinterpret_cast<uint32_t*>(&rax67) & 0x3ff;
            if (ecx110 == a_input) {
                ecx110 = reinterpret_cast<uint32_t>(a_input);
                goto addr_5e7_80;
            } else {
                r9_111 = g5d2;
                r9d112 = *r9_111;
                goto addr_5d5_82;
            }
        }
    }
    ecx110 = reinterpret_cast<uint32_t>(a_input);
    addr_5e7_80:
    *reinterpret_cast<int32_t*>(&rdi113) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi113) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<unsigned char*>(&rdi113) = reinterpret_cast<uint1_t>((esi102 | ecx110 ^ 0x200) == a_input);
    if ((reinterpret_cast<uint64_t>(~rdi113) & rax67 + rdi103 >> 10) == a_input) {
    }
    goto addr_616_5;
    addr_658_78:
    rdx114 = g65f;
    r9d112 = *rdx114 | 4;
    addr_5d5_82:
    r10_115 = g5e0;
    *r10_115 = r9d112 | 1;
    goto addr_5e7_80;
}

void ullong_to_double() {
    return;
}

void submain() {
    fun_6ac(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 24 + 8);
}

