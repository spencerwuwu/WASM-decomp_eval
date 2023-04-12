
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

unsigned char* g1b3 = reinterpret_cast<unsigned char*>(0xa6e9100980);

unsigned char* g22e = reinterpret_cast<unsigned char*>(0x49c0ff4810088041);

uint32_t* g3f0 = reinterpret_cast<uint32_t*>(0xff831074ff85388b);

unsigned char* g463 = reinterpret_cast<unsigned char*>(0xb848090880);

uint32_t* g493 = reinterpret_cast<uint32_t*>(0x4c01c98341098b45);

uint32_t* g513 = reinterpret_cast<uint32_t*>(0x3104c983410a8b44);

uint32_t* g4a1 = reinterpret_cast<uint32_t*>(0x48c93102eb0a8945);

void fun_1bb(uint64_t rdi, uint64_t rsi, uint32_t edx, uint32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int32_t ebp11;
    int64_t rbx12;
    uint32_t eax13;
    uint64_t rcx14;
    uint64_t rbx15;
    uint1_t zf16;
    uint32_t edi17;
    uint32_t r14d18;
    uint1_t cf19;
    int64_t r14_20;
    uint32_t r15d21;
    uint32_t ecx22;
    int1_t cf23;
    int64_t rcx24;
    int64_t r15_25;
    int32_t ecx26;
    uint64_t rbx27;
    uint64_t rbx28;
    uint32_t ebp29;
    uint64_t rbx30;
    uint64_t rax31;
    uint64_t r10_32;
    uint64_t r10_33;
    uint64_t r11_34;
    uint64_t r11_35;
    uint64_t rcx36;
    uint64_t rsi37;
    int64_t rdi38;
    int64_t r10_39;
    uint64_t r10_40;
    int64_t rcx41;
    uint64_t tmp64_42;
    uint64_t r11_43;
    uint64_t rax44;
    uint64_t rax45;
    uint32_t ecx46;
    uint64_t rsi47;
    int1_t sf48;
    int64_t r10_49;
    uint64_t rcx50;
    uint64_t rbx51;
    unsigned char* rcx52;
    unsigned char cl53;
    unsigned char dl54;
    unsigned char* r8_55;
    int64_t r10_56;
    uint32_t eax57;
    uint64_t rcx58;
    uint64_t r10_59;
    uint1_t zf60;
    uint32_t edx61;
    uint32_t esi62;
    uint1_t cf63;
    int64_t rsi64;
    uint32_t edi65;
    uint32_t ecx66;
    int1_t cf67;
    int64_t rcx68;
    int64_t rdi69;
    int32_t ecx70;
    uint64_t r10_71;
    int64_t rdx72;
    uint32_t* rax73;
    uint32_t edi74;
    uint64_t rax75;
    int1_t zf76;
    unsigned char* rax77;
    uint32_t ecx78;
    uint64_t rcx79;
    uint32_t ecx80;
    uint64_t rcx81;
    uint32_t ecx82;
    uint32_t* r9_83;
    uint32_t r9d84;
    int64_t rax85;
    uint32_t* rdx86;
    uint32_t* r10_87;

    if (edx != 0x7ff) {
        if (ebp11 == a_input) {
            if (rbx12 == a_input) 
                goto addr_40f_4;
            eax13 = reinterpret_cast<uint32_t>(a_input);
            rcx14 = rbx15 >> 32;
            zf16 = reinterpret_cast<uint1_t>(rcx14 == a_input);
            if (zf16) {
                *reinterpret_cast<uint32_t*>(&rcx14) = *reinterpret_cast<uint32_t*>(&rdi);
            }
            *reinterpret_cast<unsigned char*>(&eax13) = zf16;
            edi17 = *reinterpret_cast<uint32_t*>(&rcx14) << 16;
            r14d18 = reinterpret_cast<uint32_t>(a_input);
            cf19 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx14) < 0x10000);
            if (!cf19) {
                edi17 = *reinterpret_cast<uint32_t*>(&rcx14);
            }
            *reinterpret_cast<unsigned char*>(&r14d18) = cf19;
            *reinterpret_cast<uint32_t*>(&r14_20) = r14d18 << 4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_20) + 4) = reinterpret_cast<int32_t>(a_input);
            r15d21 = static_cast<uint32_t>(r14_20 + 8);
            ecx22 = edi17 << 8;
            cf23 = edi17 < 0x1000000;
            if (!cf23) {
                ecx22 = edi17;
            }
            if (!cf23) {
                r15d21 = *reinterpret_cast<uint32_t*>(&r14_20);
            }
            *reinterpret_cast<uint32_t*>(&rcx24) = ecx22 >> 24;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<uint32_t*>(&r15_25) = (r15d21 | eax13 << 5) + *reinterpret_cast<uint32_t*>(0x2ee + rcx24 * 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_25) + 4) = reinterpret_cast<int32_t>(a_input);
            ecx26 = static_cast<int32_t>(r15_25 - 11);
            rbx27 = rbx28 << *reinterpret_cast<unsigned char*>(&ecx26);
            ebp29 = 12 - *reinterpret_cast<uint32_t*>(&r15_25);
            if (!reinterpret_cast<int1_t>(edx == a_input)) 
                goto addr_36a_14;
        } else {
            if (!reinterpret_cast<int1_t>(edx == a_input)) {
                addr_36a_14:
                rbx30 = rbx27 << 10;
                rax31 = 0x4000000000000000 | rbx30;
                r10_32 = r10_33 << 11;
                r11_34 = r11_35 | r10_32;
                rcx36 = rax31 >> 32;
                rsi37 = r11_34 >> 32;
                *reinterpret_cast<int32_t*>(&rdi38) = *reinterpret_cast<int32_t*>(&rbx30);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = reinterpret_cast<int32_t>(a_input);
                *reinterpret_cast<int32_t*>(&r10_39) = *reinterpret_cast<int32_t*>(&r10_32);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_39) + 4) = reinterpret_cast<int32_t>(a_input);
                r10_40 = r10_39 * rcx36;
                *reinterpret_cast<int32_t*>(&rcx41) = reinterpret_cast<int32_t>(a_input);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = reinterpret_cast<int32_t>(a_input);
                tmp64_42 = r10_40 + rdi38 * rsi37;
                *reinterpret_cast<unsigned char*>(&rcx41) = reinterpret_cast<uint1_t>(tmp64_42 < r10_40);
                r11_43 = r11_34 * rax31;
                *reinterpret_cast<int32_t*>(&rax44) = reinterpret_cast<int32_t>(a_input);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax44) + 4) = reinterpret_cast<int32_t>(a_input);
                *reinterpret_cast<unsigned char*>(&rax44) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r11_43 == a_input));
                rax45 = rax44 | (tmp64_42 >> 32) + rsi37 * rcx36 + (rcx41 << 32) + reinterpret_cast<uint1_t>(r11_43 < tmp64_42 << 32);
                ecx46 = reinterpret_cast<uint32_t>(a_input);
                rsi47 = rax45 + rax45;
                sf48 = reinterpret_cast<int64_t>(rsi47) < reinterpret_cast<int64_t>(a_input);
                *reinterpret_cast<unsigned char*>(&ecx46) = reinterpret_cast<uint1_t>(!sf48);
                if (sf48) {
                    rsi47 = rax45;
                    goto addr_3e1_17;
                }
            }
        }
    } else {
        if (r10_49 == a_input) {
            *reinterpret_cast<uint32_t*>(&rcx50) = ecx & 0x7ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx50) + 4) = reinterpret_cast<int32_t>(a_input);
            if ((rcx50 | rbx51) == a_input) {
                rcx52 = g1b3;
                *rcx52 = reinterpret_cast<unsigned char>(*rcx52 | 16);
                goto addr_261_22;
            } else {
                goto addr_261_22;
            }
        } else {
            cl53 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rdi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((rdi & 0x7ff8000000000000) == 0x7ff0000000000000)));
            dl54 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi << 13 == a_input))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>((0x7ff8000000000000 & rsi) == 0x7ff0000000000000)));
            if (!reinterpret_cast<int1_t>(cl53 == a_input) || dl54 != a_input) {
                r8_55 = g22e;
                *r8_55 = reinterpret_cast<unsigned char>(*r8_55 | 16);
            }
            if (rsi + rsi < 0xffe0000000000001) {
            }
            if (!reinterpret_cast<int1_t>(cl53 == a_input)) {
            }
            if (!reinterpret_cast<int1_t>(dl54 == a_input)) {
                goto addr_261_22;
            }
        }
    }
    if (r10_56 == a_input) {
        addr_40f_4:
    } else {
        eax57 = reinterpret_cast<uint32_t>(a_input);
        rcx58 = r10_59 >> 32;
        zf60 = reinterpret_cast<uint1_t>(rcx58 == a_input);
        if (zf60) {
            *reinterpret_cast<uint32_t*>(&rcx58) = *reinterpret_cast<uint32_t*>(&rsi);
        }
        *reinterpret_cast<unsigned char*>(&eax57) = zf60;
        edx61 = *reinterpret_cast<uint32_t*>(&rcx58) << 16;
        esi62 = reinterpret_cast<uint32_t>(a_input);
        cf63 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rcx58) < 0x10000);
        if (!cf63) {
            edx61 = *reinterpret_cast<uint32_t*>(&rcx58);
        }
        *reinterpret_cast<unsigned char*>(&esi62) = cf63;
        *reinterpret_cast<uint32_t*>(&rsi64) = esi62 << 4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi64) + 4) = reinterpret_cast<int32_t>(a_input);
        edi65 = static_cast<uint32_t>(rsi64 + 8);
        ecx66 = edx61 << 8;
        cf67 = edx61 < 0x1000000;
        if (!cf67) {
            ecx66 = edx61;
        }
        if (!cf67) {
            edi65 = *reinterpret_cast<uint32_t*>(&rsi64);
        }
        *reinterpret_cast<uint32_t*>(&rcx68) = ecx66 >> 24;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx68) + 4) = reinterpret_cast<int32_t>(a_input);
        *reinterpret_cast<uint32_t*>(&rdi69) = (edi65 | eax57 << 5) + *reinterpret_cast<uint32_t*>(0x358 + rcx68 * 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi69) + 4) = reinterpret_cast<int32_t>(a_input);
        ecx70 = static_cast<int32_t>(rdi69 - 11);
        r10_33 = r10_71 << *reinterpret_cast<unsigned char*>(&ecx70);
        edx = 12 - *reinterpret_cast<uint32_t*>(&rdi69);
        goto addr_36a_14;
    }
    addr_261_22:
    goto a10;
    addr_3e1_17:
    *reinterpret_cast<uint32_t*>(&rdx72) = edx + ebp29 - ecx46 + 0xfffffc01;
    rax73 = g3f0;
    edi74 = *rax73;
    if (edi74 == a_input) {
        *reinterpret_cast<int32_t*>(&rax75) = 0x200;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax75) + 4) = reinterpret_cast<int32_t>(a_input);
    } else {
        if (edi74 != 1) {
            if (r9 < reinterpret_cast<int64_t>(a_input)) {
                zf76 = edi74 == 2;
            } else {
                zf76 = edi74 == 3;
            }
            *reinterpret_cast<int32_t*>(&rax75) = 0x3ff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax75) + 4) = reinterpret_cast<int32_t>(a_input);
            if (zf76) {
                rax75 = reinterpret_cast<uint64_t>(a_input);
            }
        } else {
            *reinterpret_cast<int32_t*>(&rax75) = reinterpret_cast<int32_t>(a_input);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax75) + 4) = reinterpret_cast<int32_t>(a_input);
        }
    }
    if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rdx72)) < 0x7fd) 
        goto addr_482_52;
    if (*reinterpret_cast<int32_t*>(&rdx72) > reinterpret_cast<int32_t>(0x7fd) || *reinterpret_cast<uint32_t*>(&rdx72) == 0x7fd && reinterpret_cast<int64_t>(rax75 + rsi47) < reinterpret_cast<int64_t>(a_input)) {
        rax77 = g463;
        *rax77 = reinterpret_cast<unsigned char>(*rax77 | 9);
        goto addr_261_22;
    } else {
        if (*reinterpret_cast<int32_t*>(&rdx72) < reinterpret_cast<int32_t>(a_input)) {
            ecx78 = -*reinterpret_cast<uint32_t*>(&rdx72);
            if (ecx78 > 63) {
                *reinterpret_cast<uint32_t*>(&rcx79) = reinterpret_cast<uint32_t>(a_input);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx79) + 4) = reinterpret_cast<int32_t>(a_input);
                *reinterpret_cast<unsigned char*>(&rcx79) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi47 == a_input));
            } else {
                ecx80 = *reinterpret_cast<uint32_t*>(&rdx72);
                *reinterpret_cast<int32_t*>(&rcx81) = reinterpret_cast<int32_t>(a_input);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx81) + 4) = reinterpret_cast<int32_t>(a_input);
                *reinterpret_cast<unsigned char*>(&rcx81) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rsi47 << *reinterpret_cast<unsigned char*>(&ecx80) == a_input));
                rcx79 = rcx81 | rsi47 >> *reinterpret_cast<signed char*>(&ecx78);
            }
            rsi47 = rcx79;
            ecx82 = *reinterpret_cast<uint32_t*>(&rcx79) & 0x3ff;
            if (ecx82 != a_input) 
                goto addr_50c_60;
        } else {
            addr_482_52:
            ecx82 = *reinterpret_cast<uint32_t*>(&rsi47) & 0x3ff;
            if (ecx82 == a_input) {
                ecx82 = reinterpret_cast<uint32_t>(a_input);
                goto addr_4a8_62;
            } else {
                r9_83 = g493;
                r9d84 = *r9_83;
                goto addr_496_64;
            }
        }
    }
    ecx82 = reinterpret_cast<uint32_t>(a_input);
    addr_4a8_62:
    *reinterpret_cast<int32_t*>(&rax85) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax85) + 4) = reinterpret_cast<int32_t>(a_input);
    *reinterpret_cast<unsigned char*>(&rax85) = reinterpret_cast<uint1_t>((edi74 | ecx82 ^ 0x200) == a_input);
    if ((reinterpret_cast<uint64_t>(~rax85) & rsi47 + rax75 >> 10) == a_input) {
    }
    goto addr_261_22;
    addr_50c_60:
    rdx86 = g513;
    r9d84 = *rdx86 | 4;
    addr_496_64:
    r10_87 = g4a1;
    *r10_87 = r9d84 | 1;
    goto addr_4a8_62;
}

void ullong_to_double() {
    return;
}

void submain() {
    fun_55c(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 24 + 8);
}

