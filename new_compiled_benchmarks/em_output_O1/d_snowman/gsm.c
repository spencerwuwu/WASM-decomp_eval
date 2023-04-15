
int64_t gd58 = 0x140ba60245c8d48;

void fun_d6a(void* rdi, int64_t rsi, int64_t rdx);

void fun_d7a(void* rdi, void* rsi, int64_t rdx);

void fun_d88(void* rdi, uint16_t* rsi, int64_t rdx);

void memcpy(int64_t rdi, int64_t rsi);

void fun_e01(void* rdi);

int32_t fun_e65();

void fun_e79(int32_t* rdi, int32_t* rsi);

void fun_eb0(int64_t rdi, int64_t rsi);

void fun_d2c(int32_t* rdi, int32_t* rsi) {
    int64_t rsi3;
    void* rbx4;
    void* rsp5;
    void* r14_6;
    uint16_t* rsp7;
    void* rsp8;
    int32_t eax9;
    uint32_t edx10;
    uint16_t v11;
    int64_t rsi12;
    int32_t edi13;
    void* rsp14;
    int64_t rax15;
    int64_t rdx16;
    int32_t* rdi17;
    int32_t* rsi18;
    int32_t eax19;
    int64_t v20;

    __asm__("cvtsi2sd xmm0, qword [rsp+0x60]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x68]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi;
    rsi3 = gd58;
    rbx4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 96);
    fun_d6a(rbx4, rsi3, 0x140);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    r14_6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) + 16);
    fun_d7a(rbx4, r14_6, 0x140);
    rsp7 = reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    fun_d88(r14_6, rsp7, 0x140);
    rsp8 = reinterpret_cast<void*>(rsp7 - 4 + 4);
    eax9 = 1;
    do {
        edx10 = v11;
        *reinterpret_cast<uint32_t*>(&rsi12) = -edx10;
        if (edx10 == 0x8000) {
            *reinterpret_cast<uint32_t*>(&rsi12) = 0x7fff;
        }
        if (*reinterpret_cast<int16_t*>(&edx10) >= reinterpret_cast<int16_t>(memcpy)) {
            *reinterpret_cast<uint32_t*>(&rsi12) = edx10;
        }
        edi13 = *reinterpret_cast<int16_t*>(&rsi12);
        if (edi13 > 0x5665) {
            if (edi13 > 0x7999) {
            }
        }
        if (*reinterpret_cast<int16_t*>(&edx10) >= reinterpret_cast<int16_t>(memcpy)) {
        }
        ++eax9;
    } while (eax9 != 9);
    fun_e01(rsp8);
    rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rax15) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(memcpy);
    do {
        ++rdx16;
    } while (rdx16 != 0xa0);
    do {
        ++rax15;
    } while (rax15 != 8);
    rdi17 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp14) + 16);
    *reinterpret_cast<int32_t*>(&rsi18) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax19 = fun_e65();
    if (eax19 != memcpy) {
        rdi17 = reinterpret_cast<int32_t*>(0xe70);
        *reinterpret_cast<int32_t*>(&rsi18) = eax19;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_e79(0xe70, rsi18);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x10]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x18]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi17 = *rsi18;
    __asm__("subsd xmm0, [r15]");
    fun_eb0(0xea9, rsi18 + 1);
    goto v20;
}

void fun_d6a(void* rdi, int64_t rsi, int64_t rdx) {
    void* r14_4;
    void* rbx5;
    uint16_t* rsp6;
    void* rsp7;
    int32_t eax8;
    uint32_t edx9;
    uint16_t v10;
    int64_t rsi11;
    int32_t edi12;
    void* rsp13;
    int64_t rax14;
    int64_t rdx15;
    int32_t* rdi16;
    int32_t* rsi17;
    int32_t eax18;
    int64_t v19;

    r14_4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 16);
    fun_d7a(rbx5, r14_4, rdx);
    rsp6 = reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    fun_d88(r14_4, rsp6, rdx);
    rsp7 = reinterpret_cast<void*>(rsp6 - 4 + 4);
    eax8 = 1;
    do {
        edx9 = v10;
        *reinterpret_cast<uint32_t*>(&rsi11) = -edx9;
        if (edx9 == 0x8000) {
            *reinterpret_cast<uint32_t*>(&rsi11) = 0x7fff;
        }
        if (*reinterpret_cast<int16_t*>(&edx9) >= reinterpret_cast<int16_t>(memcpy)) {
            *reinterpret_cast<uint32_t*>(&rsi11) = edx9;
        }
        edi12 = *reinterpret_cast<int16_t*>(&rsi11);
        if (edi12 > 0x5665) {
            if (edi12 > 0x7999) {
            }
        }
        if (*reinterpret_cast<int16_t*>(&edx9) >= reinterpret_cast<int16_t>(memcpy)) {
        }
        ++eax8;
    } while (eax8 != 9);
    fun_e01(rsp7);
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(memcpy);
    do {
        ++rdx15;
    } while (rdx15 != 0xa0);
    do {
        ++rax14;
    } while (rax14 != 8);
    rdi16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp13) + 16);
    *reinterpret_cast<int32_t*>(&rsi17) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax18 = fun_e65();
    if (eax18 != memcpy) {
        rdi16 = reinterpret_cast<int32_t*>(0xe70);
        *reinterpret_cast<int32_t*>(&rsi17) = eax18;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_e79(0xe70, rsi17);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x10]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x18]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi16 = *rsi17;
    __asm__("subsd xmm0, [r15]");
    fun_eb0(0xea9, rsi17 + 1);
    goto v19;
}

int32_t ge70 = 0xc031c689;

int32_t fun_e65() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != memcpy) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_e79(0xe70, rsi2);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x10]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x18]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    ge70 = *rsi2;
    __asm__("subsd xmm0, [r15]");
    fun_eb0(0xea9, rsi2 + 1);
    goto v4;
}

void fun_e79(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("cvtsi2sd xmm1, qword [rsp+0x10]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x18]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r15]");
    fun_eb0(0xea9, rsi + 1);
    goto v3;
}

void fun_eb0(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_c70(int64_t rdi, int64_t rsi);

int32_t fun_d18();

void fun_c65() {
    int64_t r14_1;
    int64_t rbx2;
    void* rsp3;
    int32_t eax4;
    uint16_t* rdx5;
    uint16_t* rbx6;
    uint32_t esi7;
    int64_t rdi8;
    uint32_t r8d9;
    uint32_t r8d10;
    uint32_t edi11;
    void* rsp12;
    int32_t* rdi13;
    int32_t* rsi14;
    int32_t eax15;
    void* rsp16;
    int64_t rsi17;
    void* rbx18;
    void* rsp19;
    void* r14_20;
    uint16_t* rsp21;
    void* rsp22;
    int32_t eax23;
    uint32_t edx24;
    uint16_t v25;
    int64_t rsi26;
    int32_t edi27;
    void* rsp28;
    int64_t rax29;
    int64_t rdx30;
    int32_t* rdi31;
    int32_t* rsi32;
    int32_t eax33;
    int64_t v34;

    fun_c70(r14_1, rbx2);
    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    eax4 = 1;
    rdx5 = rbx6;
    do {
        esi7 = *rdx5;
        *reinterpret_cast<uint32_t*>(&rdi8) = -esi7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(memcpy);
        if (esi7 == 0x8000) {
            *reinterpret_cast<uint32_t*>(&rdi8) = 0x7fff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(memcpy);
        }
        if (*reinterpret_cast<int16_t*>(&esi7) >= reinterpret_cast<int16_t>(memcpy)) {
            *reinterpret_cast<uint32_t*>(&rdi8) = esi7;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(memcpy);
        }
        r8d9 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rdi8)));
        if (reinterpret_cast<int32_t>(r8d9) <= reinterpret_cast<int32_t>(0x5665)) {
            r8d10 = r8d9 >> 1;
        } else {
            if (reinterpret_cast<int32_t>(r8d9) > reinterpret_cast<int32_t>(0x7999)) {
                r8d10 = static_cast<uint32_t>(rdi8 * 4 + 0x6800);
            } else {
                r8d10 = *reinterpret_cast<uint32_t*>(&rdi8) + 0xffffd4cd;
            }
        }
        edi11 = -r8d10;
        if (*reinterpret_cast<int16_t*>(&esi7) >= reinterpret_cast<int16_t>(memcpy)) {
            edi11 = r8d10;
        }
        *rdx5 = *reinterpret_cast<uint16_t*>(&edi11);
        ++eax4;
        ++rdx5;
    } while (eax4 != 9);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) + 72 + 8 + 8 - 8 - 8 - 8 - 0x1a0);
    rdi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp12) + 96);
    *reinterpret_cast<int32_t*>(&rsi14) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax15 = fun_d18();
    rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
    if (eax15 != memcpy) {
        rdi13 = reinterpret_cast<int32_t*>(0xd23);
        *reinterpret_cast<int32_t*>(&rsi14) = eax15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_d2c(0xd23, rsi14);
        rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x60]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x68]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi13 = *rsi14;
    rsi17 = gd58;
    rbx18 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) + 96);
    fun_d6a(rbx18, rsi17, 0x140);
    rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
    r14_20 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) + 16);
    fun_d7a(rbx18, r14_20, 0x140);
    rsp21 = reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8);
    fun_d88(r14_20, rsp21, 0x140);
    rsp22 = reinterpret_cast<void*>(rsp21 - 4 + 4);
    eax23 = 1;
    do {
        edx24 = v25;
        *reinterpret_cast<uint32_t*>(&rsi26) = -edx24;
        if (edx24 == 0x8000) {
            *reinterpret_cast<uint32_t*>(&rsi26) = 0x7fff;
        }
        if (*reinterpret_cast<int16_t*>(&edx24) >= reinterpret_cast<int16_t>(memcpy)) {
            *reinterpret_cast<uint32_t*>(&rsi26) = edx24;
        }
        edi27 = *reinterpret_cast<int16_t*>(&rsi26);
        if (edi27 > 0x5665) {
            if (edi27 > 0x7999) {
            }
        }
        if (*reinterpret_cast<int16_t*>(&edx24) >= reinterpret_cast<int16_t>(memcpy)) {
        }
        ++eax23;
    } while (eax23 != 9);
    fun_e01(rsp22);
    rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp22) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rax29) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(&rdx30) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(memcpy);
    do {
        ++rdx30;
    } while (rdx30 != 0xa0);
    do {
        ++rax29;
    } while (rax29 != 8);
    rdi31 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp28) + 16);
    *reinterpret_cast<int32_t*>(&rsi32) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax33 = fun_e65();
    if (eax33 != memcpy) {
        rdi31 = reinterpret_cast<int32_t*>(0xe70);
        *reinterpret_cast<int32_t*>(&rsi32) = eax33;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_e79(0xe70, rsi32);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x10]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x18]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi31 = *rsi32;
    __asm__("subsd xmm0, [r15]");
    fun_eb0(0xea9, rsi32 + 1);
    goto v34;
}

void fun_d7a(void* rdi, void* rsi, int64_t rdx) {
    void* r14_4;
    void* rsp5;
    int32_t eax6;
    uint32_t edx7;
    uint16_t v8;
    int64_t rsi9;
    int32_t edi10;
    void* rsp11;
    int64_t rax12;
    int64_t rdx13;
    int32_t* rdi14;
    int32_t* rsi15;
    int32_t eax16;
    int64_t v17;

    fun_d88(r14_4, __zero_stack_offset(), rdx);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    eax6 = 1;
    do {
        edx7 = v8;
        *reinterpret_cast<uint32_t*>(&rsi9) = -edx7;
        if (edx7 == 0x8000) {
            *reinterpret_cast<uint32_t*>(&rsi9) = 0x7fff;
        }
        if (*reinterpret_cast<int16_t*>(&edx7) >= reinterpret_cast<int16_t>(memcpy)) {
            *reinterpret_cast<uint32_t*>(&rsi9) = edx7;
        }
        edi10 = *reinterpret_cast<int16_t*>(&rsi9);
        if (edi10 > 0x5665) {
            if (edi10 > 0x7999) {
            }
        }
        if (*reinterpret_cast<int16_t*>(&edx7) >= reinterpret_cast<int16_t>(memcpy)) {
        }
        ++eax6;
    } while (eax6 != 9);
    fun_e01(rsp5);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(memcpy);
    do {
        ++rdx13;
    } while (rdx13 != 0xa0);
    do {
        ++rax12;
    } while (rax12 != 8);
    rdi14 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp11) + 16);
    *reinterpret_cast<int32_t*>(&rsi15) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax16 = fun_e65();
    if (eax16 != memcpy) {
        rdi14 = reinterpret_cast<int32_t*>(0xe70);
        *reinterpret_cast<int32_t*>(&rsi15) = eax16;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_e79(0xe70, rsi15);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x10]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x18]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi14 = *rsi15;
    __asm__("subsd xmm0, [r15]");
    fun_eb0(0xea9, rsi15 + 1);
    goto v17;
}

void fun_e01(void* rdi) {
    void* rsp2;
    int64_t rax3;
    int64_t rdx4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t eax7;
    int64_t v8;

    rsp2 = __zero_stack_offset();
    *reinterpret_cast<int32_t*>(&rax3) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(&rdx4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(memcpy);
    do {
        ++rdx4;
    } while (rdx4 != 0xa0);
    do {
        ++rax3;
    } while (rax3 != 8);
    rdi5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) + 16);
    *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax7 = fun_e65();
    if (eax7 != memcpy) {
        rdi5 = reinterpret_cast<int32_t*>(0xe70);
        *reinterpret_cast<int32_t*>(&rsi6) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_e79(0xe70, rsi6);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x10]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x18]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi5 = *rsi6;
    __asm__("subsd xmm0, [r15]");
    fun_eb0(0xea9, rsi6 + 1);
    goto v8;
}

void fun_c70(int64_t rdi, int64_t rsi) {
    void* rsp3;
    int32_t eax4;
    uint16_t* rdx5;
    uint16_t* rbx6;
    uint32_t esi7;
    int64_t rdi8;
    uint32_t r8d9;
    uint32_t r8d10;
    uint32_t edi11;
    void* rsp12;
    int32_t* rdi13;
    int32_t* rsi14;
    int32_t eax15;
    void* rsp16;
    int64_t rsi17;
    void* rbx18;
    void* rsp19;
    void* r14_20;
    uint16_t* rsp21;
    void* rsp22;
    int32_t eax23;
    uint32_t edx24;
    uint16_t v25;
    int64_t rsi26;
    int32_t edi27;
    void* rsp28;
    int64_t rax29;
    int64_t rdx30;
    int32_t* rdi31;
    int32_t* rsi32;
    int32_t eax33;
    int64_t v34;

    rsp3 = __zero_stack_offset();
    eax4 = 1;
    rdx5 = rbx6;
    do {
        esi7 = *rdx5;
        *reinterpret_cast<uint32_t*>(&rdi8) = -esi7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(memcpy);
        if (esi7 == 0x8000) {
            *reinterpret_cast<uint32_t*>(&rdi8) = 0x7fff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(memcpy);
        }
        if (*reinterpret_cast<int16_t*>(&esi7) >= reinterpret_cast<int16_t>(memcpy)) {
            *reinterpret_cast<uint32_t*>(&rdi8) = esi7;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(memcpy);
        }
        r8d9 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rdi8)));
        if (reinterpret_cast<int32_t>(r8d9) <= reinterpret_cast<int32_t>(0x5665)) {
            r8d10 = r8d9 >> 1;
        } else {
            if (reinterpret_cast<int32_t>(r8d9) > reinterpret_cast<int32_t>(0x7999)) {
                r8d10 = static_cast<uint32_t>(rdi8 * 4 + 0x6800);
            } else {
                r8d10 = *reinterpret_cast<uint32_t*>(&rdi8) + 0xffffd4cd;
            }
        }
        edi11 = -r8d10;
        if (*reinterpret_cast<int16_t*>(&esi7) >= reinterpret_cast<int16_t>(memcpy)) {
            edi11 = r8d10;
        }
        *rdx5 = *reinterpret_cast<uint16_t*>(&edi11);
        ++eax4;
        ++rdx5;
    } while (eax4 != 9);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) + 72 + 8 + 8 - 8 - 8 - 8 - 0x1a0);
    rdi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp12) + 96);
    *reinterpret_cast<int32_t*>(&rsi14) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax15 = fun_d18();
    rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
    if (eax15 != memcpy) {
        rdi13 = reinterpret_cast<int32_t*>(0xd23);
        *reinterpret_cast<int32_t*>(&rsi14) = eax15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_d2c(0xd23, rsi14);
        rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x60]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x68]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi13 = *rsi14;
    rsi17 = gd58;
    rbx18 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) + 96);
    fun_d6a(rbx18, rsi17, 0x140);
    rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
    r14_20 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) + 16);
    fun_d7a(rbx18, r14_20, 0x140);
    rsp21 = reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8);
    fun_d88(r14_20, rsp21, 0x140);
    rsp22 = reinterpret_cast<void*>(rsp21 - 4 + 4);
    eax23 = 1;
    do {
        edx24 = v25;
        *reinterpret_cast<uint32_t*>(&rsi26) = -edx24;
        if (edx24 == 0x8000) {
            *reinterpret_cast<uint32_t*>(&rsi26) = 0x7fff;
        }
        if (*reinterpret_cast<int16_t*>(&edx24) >= reinterpret_cast<int16_t>(memcpy)) {
            *reinterpret_cast<uint32_t*>(&rsi26) = edx24;
        }
        edi27 = *reinterpret_cast<int16_t*>(&rsi26);
        if (edi27 > 0x5665) {
            if (edi27 > 0x7999) {
            }
        }
        if (*reinterpret_cast<int16_t*>(&edx24) >= reinterpret_cast<int16_t>(memcpy)) {
        }
        ++eax23;
    } while (eax23 != 9);
    fun_e01(rsp22);
    rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp22) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rax29) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(&rdx30) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(memcpy);
    do {
        ++rdx30;
    } while (rdx30 != 0xa0);
    do {
        ++rax29;
    } while (rax29 != 8);
    rdi31 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp28) + 16);
    *reinterpret_cast<int32_t*>(&rsi32) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax33 = fun_e65();
    if (eax33 != memcpy) {
        rdi31 = reinterpret_cast<int32_t*>(0xe70);
        *reinterpret_cast<int32_t*>(&rsi32) = eax33;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_e79(0xe70, rsi32);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x10]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x18]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi31 = *rsi32;
    __asm__("subsd xmm0, [r15]");
    fun_eb0(0xea9, rsi32 + 1);
    goto v34;
}

int32_t gd23 = 0xc031c689;

int32_t fun_d18() {
    void* rsp1;
    int32_t eax2;
    int32_t* rsi3;
    int32_t eax4;
    int64_t rsi5;
    void* rbx6;
    void* rsp7;
    void* r14_8;
    uint16_t* rsp9;
    void* rsp10;
    int32_t eax11;
    uint32_t edx12;
    uint16_t v13;
    int64_t rsi14;
    int32_t edi15;
    void* rsp16;
    int64_t rax17;
    int64_t rdx18;
    int32_t* rdi19;
    int32_t* rsi20;
    int32_t eax21;
    int64_t v22;

    rsp1 = __zero_stack_offset();
    if (eax2 != memcpy) {
        *reinterpret_cast<int32_t*>(&rsi3) = eax4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_d2c(0xd23, rsi3);
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x60]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x68]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    gd23 = *rsi3;
    rsi5 = gd58;
    rbx6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) + 96);
    fun_d6a(rbx6, rsi5, 0x140);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
    r14_8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) + 16);
    fun_d7a(rbx6, r14_8, 0x140);
    rsp9 = reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8);
    fun_d88(r14_8, rsp9, 0x140);
    rsp10 = reinterpret_cast<void*>(rsp9 - 4 + 4);
    eax11 = 1;
    do {
        edx12 = v13;
        *reinterpret_cast<uint32_t*>(&rsi14) = -edx12;
        if (edx12 == 0x8000) {
            *reinterpret_cast<uint32_t*>(&rsi14) = 0x7fff;
        }
        if (*reinterpret_cast<int16_t*>(&edx12) >= reinterpret_cast<int16_t>(memcpy)) {
            *reinterpret_cast<uint32_t*>(&rsi14) = edx12;
        }
        edi15 = *reinterpret_cast<int16_t*>(&rsi14);
        if (edi15 > 0x5665) {
            if (edi15 > 0x7999) {
            }
        }
        if (*reinterpret_cast<int16_t*>(&edx12) >= reinterpret_cast<int16_t>(memcpy)) {
        }
        ++eax11;
    } while (eax11 != 9);
    fun_e01(rsp10);
    rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rax17) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(&rdx18) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(memcpy);
    do {
        ++rdx18;
    } while (rdx18 != 0xa0);
    do {
        ++rax17;
    } while (rax17 != 8);
    rdi19 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp16) + 16);
    *reinterpret_cast<int32_t*>(&rsi20) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax21 = fun_e65();
    if (eax21 != memcpy) {
        rdi19 = reinterpret_cast<int32_t*>(0xe70);
        *reinterpret_cast<int32_t*>(&rsi20) = eax21;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_e79(0xe70, rsi20);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x10]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x18]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi19 = *rsi20;
    __asm__("subsd xmm0, [r15]");
    fun_eb0(0xea9, rsi20 + 1);
    goto v22;
}

void fun_d88(void* rdi, uint16_t* rsi, int64_t rdx) {
    void* rsp4;
    int32_t eax5;
    uint32_t edx6;
    uint16_t* rbx7;
    int64_t rsi8;
    uint32_t edi9;
    uint32_t edi10;
    uint32_t esi11;
    void* rsp12;
    int64_t rax13;
    int64_t rdx14;
    int32_t* rdi15;
    int32_t* rsi16;
    int32_t eax17;
    int64_t v18;

    rsp4 = __zero_stack_offset();
    eax5 = 1;
    do {
        edx6 = *rbx7;
        *reinterpret_cast<uint32_t*>(&rsi8) = -edx6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(memcpy);
        if (edx6 == 0x8000) {
            *reinterpret_cast<uint32_t*>(&rsi8) = 0x7fff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(memcpy);
        }
        if (*reinterpret_cast<int16_t*>(&edx6) >= reinterpret_cast<int16_t>(memcpy)) {
            *reinterpret_cast<uint32_t*>(&rsi8) = edx6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(memcpy);
        }
        edi9 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rsi8)));
        if (reinterpret_cast<int32_t>(edi9) <= reinterpret_cast<int32_t>(0x5665)) {
            edi10 = edi9 >> 1;
        } else {
            if (reinterpret_cast<int32_t>(edi9) > reinterpret_cast<int32_t>(0x7999)) {
                edi10 = static_cast<uint32_t>(rsi8 * 4 + 0x6800);
            } else {
                edi10 = *reinterpret_cast<uint32_t*>(&rsi8) + 0xffffd4cd;
            }
        }
        esi11 = -edi10;
        if (*reinterpret_cast<int16_t*>(&edx6) >= reinterpret_cast<int16_t>(memcpy)) {
            esi11 = edi10;
        }
        *rbx7 = *reinterpret_cast<uint16_t*>(&esi11);
        ++eax5;
        ++rbx7;
    } while (eax5 != 9);
    fun_e01(rsp4);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rax13) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(memcpy);
    do {
        ++rdx14;
    } while (rdx14 != 0xa0);
    do {
        ++rax13;
    } while (rax13 != 8);
    rdi15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp12) + 16);
    *reinterpret_cast<int32_t*>(&rsi16) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax17 = fun_e65();
    if (eax17 != memcpy) {
        rdi15 = reinterpret_cast<int32_t*>(0xe70);
        *reinterpret_cast<int32_t*>(&rsi16) = eax17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_e79(0xe70, rsi16);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x10]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x18]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi15 = *rsi16;
    __asm__("subsd xmm0, [r15]");
    fun_eb0(0xea9, rsi16 + 1);
    goto v18;
}

void memcpy(int64_t rdi, int64_t rsi) {
}

void fun_12c() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    int32_t esi5;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    if (*rax4 < reinterpret_cast<signed char>(memcpy) == __intrinsic()) {
    }
    if (!reinterpret_cast<int1_t>(esi5 - 1 == memcpy)) {
    }
}

struct s0 {
    uint16_t f0;
    int16_t f2;
    int16_t f4;
    int16_t f6;
    int16_t f8;
    int16_t fa;
    int16_t fc;
    int16_t fe;
};

struct s1 {
    int64_t f0;
    int64_t f8;
    int64_t f10;
    int64_t f18;
    int64_t f20;
    int64_t f28;
    int64_t f30;
    int64_t f38;
    int64_t f40;
};

int32_t g1ce = 0x104b60f;

struct s2 {
    int16_t f0;
    int16_t f2;
};

void fun_1c8(struct s0* rdi, struct s1* rsi, int32_t edx) {
    int64_t rcx4;
    uint32_t ecx5;
    int64_t rax6;
    int64_t rax7;
    int64_t v8;
    uint32_t ecx9;
    uint32_t eax10;
    int64_t rcx11;
    uint32_t edx12;
    int64_t r8_13;
    int64_t rax14;
    int64_t rdx15;
    int64_t rcx16;
    int64_t rax17;
    int64_t r10_18;
    int64_t r9_19;
    int64_t rcx20;
    int64_t rax21;
    int64_t r8_22;
    int64_t r10_23;
    int64_t r11_24;
    int64_t rcx25;
    int64_t rax26;
    int64_t r9_27;
    int64_t rbx28;
    int64_t r14_29;
    int64_t r15_30;
    int64_t r12_31;
    int64_t r13_32;
    int64_t r10_33;
    int64_t rax34;
    int64_t rcx35;
    int64_t r11_36;
    int64_t r14_37;
    int64_t r15_38;
    int64_t r12_39;
    int64_t rbp40;
    int64_t rbx41;
    int64_t r13_42;
    int64_t rbx43;
    int64_t rax44;
    int64_t r11_45;
    int64_t rcx46;
    int64_t rcx47;
    int64_t rcx48;
    int64_t r15_49;
    int64_t rbp50;
    int64_t r10_51;
    int64_t r9_52;
    int64_t r13_53;
    int64_t r14_54;
    int64_t rbx55;
    int64_t r15_56;
    int64_t v57;
    int64_t rax58;
    int64_t rdx59;
    int64_t rcx60;
    struct s0* v61;
    struct s2* r12_62;
    int64_t rdi63;
    struct s1* v64;
    int64_t r11_65;
    int32_t ebp66;
    int64_t r13_67;
    int64_t rdi68;
    int64_t rdx69;
    int64_t r8_70;
    int64_t r9_71;
    int64_t r10_72;
    struct s1* rcx73;
    uint64_t rax74;
    int1_t cf75;
    int64_t rcx76;
    struct s0* rsi77;
    uint32_t eax78;
    uint32_t edx79;
    int1_t cf80;
    int64_t v81;

    *reinterpret_cast<int32_t*>(&rcx4) = g1ce;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = reinterpret_cast<int32_t>(memcpy);
    ecx5 = 4 - (*reinterpret_cast<unsigned char*>(rcx4 + rax6) + edx);
    *reinterpret_cast<int32_t*>(&rax7) = *reinterpret_cast<int16_t*>(&ecx5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(memcpy);
    v8 = rax7;
    ecx9 = static_cast<uint32_t>(rax7 - 1);
    if (ecx9 <= 3) {
        eax10 = 0x4000 >> *reinterpret_cast<signed char*>(&ecx9);
        *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(memcpy);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(memcpy);
        do {
            edx12 = *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi) + rcx11 * 2) * eax10 + 0x4000 >> 15;
            *reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(rdi) + rcx11 * 2) = *reinterpret_cast<uint16_t*>(&edx12);
            ++rcx11;
        } while (rcx11 != 0xa0);
    }
    r8_13 = reinterpret_cast<int16_t>(rdi->f0);
    __asm__("xorps xmm0, xmm0");
    __asm__("movups [rsi], xmm0");
    __asm__("movups [rsi+0x30], xmm0");
    __asm__("movups [rsi+0x20], xmm0");
    __asm__("movups [rsi+0x10], xmm0");
    rsi->f40 = reinterpret_cast<int64_t>(memcpy);
    rax14 = r8_13 * r8_13;
    rsi->f0 = rax14;
    rdx15 = rdi->f2;
    rcx16 = rdx15 * rdx15 + rax14;
    rsi->f0 = rcx16;
    rax17 = rdx15 * r8_13 + rsi->f8;
    rsi->f8 = rax17;
    r10_18 = rdi->f4;
    r9_19 = r10_18 * r10_18 + rcx16;
    rsi->f0 = r9_19;
    rcx20 = r10_18 * rdx15 + rax17;
    rsi->f8 = rcx20;
    rax21 = r10_18 * r8_13 + rsi->f10;
    rsi->f10 = rax21;
    r8_22 = rdi->f6;
    r10_23 = r8_22 * r8_22 + r9_19;
    rsi->f0 = r10_23;
    r11_24 = r8_22 * r10_18 + rcx20;
    rsi->f8 = r11_24;
    rcx25 = r8_22 * rdx15 + rax21;
    rsi->f10 = rcx25;
    rax26 = r8_22 * r8_13 + rsi->f18;
    rsi->f18 = rax26;
    r9_27 = rdi->f8;
    rbx28 = r9_27 * r9_27 + r10_23;
    rsi->f0 = rbx28;
    r14_29 = r9_27 * r8_22 + r11_24;
    rsi->f8 = r14_29;
    r15_30 = r9_27 * r10_18 + rcx25;
    rsi->f10 = r15_30;
    r12_31 = r9_27 * rdx15 + rax26;
    rsi->f18 = r12_31;
    r13_32 = r9_27 * r8_13 + rsi->f20;
    rsi->f20 = r13_32;
    r10_33 = rdi->fa;
    rax34 = r10_33 * r10_33 + rbx28;
    rsi->f0 = rax34;
    rcx35 = r10_33 * r9_27 + r14_29;
    rsi->f8 = rcx35;
    r11_36 = r10_33 * r8_22 + r15_30;
    rsi->f10 = r11_36;
    r14_37 = r10_33 * r10_18 + r12_31;
    rsi->f18 = r14_37;
    r15_38 = r10_33 * rdx15 + r13_32;
    rsi->f20 = r15_38;
    r12_39 = r10_33 * r8_13 + rsi->f28;
    rsi->f28 = r12_39;
    rbp40 = rdi->fc;
    rbx41 = rbp40 * rbp40 + rax34;
    rsi->f0 = rbx41;
    r13_42 = rbp40 * r10_33 + rcx35;
    rsi->f8 = r13_42;
    rbx43 = rbp40 * r9_27 + r11_36;
    rsi->f10 = rbx43;
    rax44 = rbp40 * r8_22 + r14_37;
    rsi->f18 = rax44;
    r11_45 = rbp40 * r10_18 + r15_38;
    rsi->f20 = r11_45;
    rcx46 = rbp40 * rdx15 + r12_39;
    rsi->f28 = rcx46;
    rcx47 = rbp40 * r8_13 + rsi->f30;
    rsi->f30 = rcx47;
    rcx48 = rdi->fe;
    r15_49 = rcx48 * rcx48 + rbx41;
    rbp50 = rbp40 * rcx48 + r13_42;
    r10_51 = r10_33 * rcx48 + rbx43;
    r9_52 = r9_27 * rcx48 + rax44;
    r13_53 = r8_22 * rcx48 + r11_45;
    r14_54 = r15_49;
    rsi->f0 = r15_49;
    rbx55 = rbp50;
    rsi->f8 = rbp50;
    r15_56 = r10_51;
    rsi->f10 = r10_51;
    v57 = r9_52;
    rsi->f18 = r9_52;
    rsi->f20 = r13_53;
    rax58 = r10_18 * rcx48 + rcx46;
    rsi->f28 = rax58;
    rdx59 = rdx15 * rcx48 + rcx47;
    rsi->f30 = rdx59;
    rcx60 = rcx48 * r8_13 + *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsi) + reinterpret_cast<int64_t>(""));
    v61 = rdi;
    r12_62 = reinterpret_cast<struct s2*>(&rdi->fe);
    rdi63 = rcx60;
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsi) + reinterpret_cast<int64_t>("")) = rcx60;
    v64 = rsi;
    r11_65 = rsi->f40;
    ebp66 = 8;
    do {
        r13_67 = r12_62->f2;
        rdi68 = *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(r12_62) - 6) * r13_67;
        rdx69 = (r12_62 - 2)->f0 * r13_67;
        r8_70 = *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(r12_62) - 10) * r13_67;
        r9_71 = (r12_62 - 3)->f0 * r13_67;
        r10_72 = *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(r12_62) - 14) * r13_67;
        r14_54 = r14_54 + r13_67 * r13_67;
        rbx55 = rbx55 + r12_62->f0 * r13_67;
        r15_56 = r15_56 + *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(r12_62) - 2) * r13_67;
        v57 = v57 + (r12_62 - 1)->f0 * r13_67;
        r13_53 = r13_53 + rdi68;
        rax58 = rax58 + rdx69;
        r12_62 = reinterpret_cast<struct s2*>(&r12_62->f2);
        rdx59 = rdx59 + r8_70;
        rdi63 = rdi63 + r9_71;
        r11_65 = r11_65 + r10_72;
        ++ebp66;
    } while (ebp66 != 0xa0);
    rcx73 = v64;
    rcx73->f0 = r14_54;
    rcx73->f8 = rbx55;
    rcx73->f10 = r15_56;
    rcx73->f18 = v57;
    rcx73->f20 = r13_53;
    rcx73->f28 = rax58;
    rcx73->f30 = rdx59;
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rcx73) + reinterpret_cast<int64_t>("")) = rdi63;
    rcx73->f40 = r11_65;
    *reinterpret_cast<int32_t*>(&rax74) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax74) + 4) = reinterpret_cast<int32_t>(memcpy);
    do {
        *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rcx73) + rax74 * 8) = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rcx73) + rax74 * 8) << 1;
        cf75 = rax74 < 1;
        --rax74;
    } while (!cf75);
    rcx76 = v8;
    rsi77 = v61;
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rcx76) < reinterpret_cast<int32_t>(memcpy) == memcpy)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rcx76) == memcpy))) {
        eax78 = 0x9f;
        do {
            edx79 = static_cast<uint32_t>(rsi77->f0) << *reinterpret_cast<unsigned char*>(&rcx76);
            rsi77->f0 = *reinterpret_cast<uint16_t*>(&edx79);
            rsi77 = reinterpret_cast<struct s0*>(&rsi77->f2);
            cf80 = eax78 < 1;
            --eax78;
        } while (!cf80);
    }
    goto v81;
}

void fun_1e0() {
}

int64_t g65c = 0xc031c1010204b60f;

void Reflection_coefficients(uint64_t* rdi) {
    void* rsp2;
    uint64_t rax3;
    uint64_t rdx4;
    int64_t rdx5;
    uint1_t zf6;
    int64_t rcx7;
    uint32_t ecx8;
    int64_t rax9;
    int64_t rdx10;
    int64_t rax11;
    uint64_t rdx12;
    int64_t rax13;
    uint16_t v14;
    uint32_t r8d15;
    uint16_t v16;
    uint32_t r10d17;
    uint1_t zf18;
    unsigned char r9b19;
    uint64_t rdx20;
    int64_t r10_21;
    int64_t r11_22;
    int64_t rbx23;
    int32_t ebp24;
    int64_t rbx25;
    int64_t r14_26;
    int1_t less27;
    int64_t r15_28;
    int32_t r11d29;
    int16_t* rsi30;
    int32_t r10d31;
    uint32_t r8d32;
    int64_t r11_33;
    int32_t r8d34;
    int64_t r8_35;
    uint64_t r9_36;
    uint64_t r11_37;
    int64_t rbx38;
    uint32_t ebp39;
    int64_t r15_40;
    int64_t r14_41;
    uint32_t r12d42;
    int64_t r13_43;
    int1_t zf44;
    int32_t ebp45;
    uint32_t ebx46;
    int32_t ebp47;
    uint32_t r14d48;
    int1_t cf49;
    uint16_t v50;
    uint1_t zf51;
    unsigned char cl52;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8);
    rax3 = *rdi;
    if (rax3 == memcpy) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movups [rsi], xmm0");
        goto addr_8ea_3;
    }
    if (reinterpret_cast<int64_t>(rax3) >= reinterpret_cast<int64_t>(memcpy)) {
        addr_60e_5:
        rdx4 = rax3 >> 16;
        if (*reinterpret_cast<int16_t*>(&rdx4) == memcpy) {
            *reinterpret_cast<int32_t*>(&rdx5) = reinterpret_cast<int32_t>(memcpy);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(memcpy);
            zf6 = reinterpret_cast<uint1_t>((*reinterpret_cast<uint32_t*>(&rax3) & 0xff00) == memcpy);
            *reinterpret_cast<unsigned char*>(&rdx5) = zf6;
            if (!zf6) {
                rax3 = rax3 >> 8;
            }
            rcx7 = rdx5 * 8 + 15;
        } else {
            rax3 = rax3 >> 24;
            if (*reinterpret_cast<unsigned char*>(&rax3) == memcpy) {
                *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>("5");
                rax3 = rdx4;
            } else {
                rcx7 = -1;
            }
        }
    } else {
        if (reinterpret_cast<int64_t>(rax3) >= reinterpret_cast<int64_t>(0xffffffffc0000001)) {
            rax3 = ~rax3;
            goto addr_60e_5;
        } else {
            ecx8 = reinterpret_cast<uint32_t>(memcpy);
            goto addr_662_15;
        }
    }
    *reinterpret_cast<uint32_t*>(&rax9) = *reinterpret_cast<unsigned char*>(&rax3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(memcpy);
    rdx10 = g65c;
    ecx8 = *reinterpret_cast<int32_t*>(&rcx7) + *reinterpret_cast<unsigned char*>(rdx10 + rax9);
    addr_662_15:
    *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(memcpy);
    do {
        rdx12 = rdi[rax11] << *reinterpret_cast<unsigned char*>(&ecx8) >> 16;
        *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rsp2) + rax11 * 2 - 56) = *reinterpret_cast<int16_t*>(&rdx12);
        ++rax11;
    } while (rax11 != 9);
    __asm__("movaps xmm0, [rsp-0x38]");
    __asm__("movaps [rsp-0x58], xmm0");
    *reinterpret_cast<uint32_t*>(&rax13) = v14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(memcpy);
    r8d15 = v16;
    r10d17 = -r8d15;
    zf18 = reinterpret_cast<uint1_t>(r8d15 == 0x8000);
    r9b19 = zf18;
    if (zf18) {
        r10d17 = 0x7fff;
    }
    if (*reinterpret_cast<int16_t*>(&r8d15) >= reinterpret_cast<int16_t>(memcpy)) {
        r10d17 = r8d15;
    }
    if (*reinterpret_cast<int16_t*>(&rax13) >= *reinterpret_cast<int16_t*>(&r10d17)) {
        *reinterpret_cast<uint32_t*>(&rdx20) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(memcpy);
        do {
            if (*reinterpret_cast<int16_t*>(&r10d17) == memcpy) {
                *reinterpret_cast<int32_t*>(&r10_21) = reinterpret_cast<int32_t>(memcpy);
            } else {
                r11_22 = *reinterpret_cast<int16_t*>(&rax13);
                rbx23 = *reinterpret_cast<int16_t*>(&r10d17);
                ebp24 = 15;
                *reinterpret_cast<int32_t*>(&r10_21) = reinterpret_cast<int32_t>(memcpy);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_21) + 4) = reinterpret_cast<int32_t>(memcpy);
                do {
                    rbx25 = rbx23 + rbx23;
                    *reinterpret_cast<int32_t*>(&r14_26) = reinterpret_cast<int32_t>(memcpy);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_26) + 4) = reinterpret_cast<int32_t>(memcpy);
                    less27 = rbx25 < r11_22;
                    *reinterpret_cast<int32_t*>(&r15_28) = reinterpret_cast<int32_t>(memcpy);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_28) + 4) = reinterpret_cast<int32_t>(memcpy);
                    if (!less27) {
                        r15_28 = r11_22;
                    }
                    *reinterpret_cast<unsigned char*>(&r14_26) = reinterpret_cast<uint1_t>(!less27);
                    rbx23 = rbx25 - r15_28;
                    *reinterpret_cast<int32_t*>(&r10_21) = static_cast<int32_t>(r14_26 + r10_21 * 2);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_21) + 4) = reinterpret_cast<int32_t>(memcpy);
                    --ebp24;
                } while (!reinterpret_cast<int1_t>(ebp24 == memcpy));
            }
            r11d29 = -*reinterpret_cast<int32_t*>(&r10_21);
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int16_t*>(&r8d15) < reinterpret_cast<int16_t>(memcpy) == memcpy)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&r8d15) == memcpy)) {
                r11d29 = *reinterpret_cast<int32_t*>(&r10_21);
            }
            *rsi30 = *reinterpret_cast<int16_t*>(&r11d29);
            if (rdx20 == 8) 
                break;
            r10d31 = *rsi30;
            r8d32 = *reinterpret_cast<int16_t*>(&r8d15) * r10d31 + 0x4000 >> 15;
            *reinterpret_cast<uint32_t*>(&r11_33) = r8d32;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_33) + 4) = reinterpret_cast<int32_t>(memcpy);
            if (r10d31 == 0xffff8000) {
                *reinterpret_cast<uint32_t*>(&r11_33) = 0x7fff;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_33) + 4) = reinterpret_cast<int32_t>(memcpy);
            }
            if ((r9b19 & 1) == memcpy) {
                *reinterpret_cast<uint32_t*>(&r11_33) = r8d32;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_33) + 4) = reinterpret_cast<int32_t>(memcpy);
            }
            r8d34 = static_cast<int32_t>(rax13 + r11_33);
            *reinterpret_cast<int16_t*>(&rax13) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax13) + *reinterpret_cast<int16_t*>(&r11_33));
            if (__intrinsic()) {
                *reinterpret_cast<uint32_t*>(&rax13) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r8d34)) >> 15) ^ 0xffff8000;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(memcpy);
            }
            if (rdx20 <= reinterpret_cast<uint64_t>("5")) {
                r8_35 = r10d31;
                r9_36 = 8 - rdx20;
                *reinterpret_cast<int32_t*>(&r11_37) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_37) + 4) = reinterpret_cast<int32_t>(memcpy);
                do {
                    *reinterpret_cast<int32_t*>(&rbx38) = *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rsp2) + r11_37 * 2 - 24);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx38) + 4) = reinterpret_cast<int32_t>(memcpy);
                    ebp39 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbx38) * *reinterpret_cast<int32_t*>(&r8_35) + 0x4000) >> 15;
                    *reinterpret_cast<uint32_t*>(&r15_40) = ebp39;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_40) + 4) = reinterpret_cast<int32_t>(memcpy);
                    if (*reinterpret_cast<int32_t*>(&rbx38) == 0xffff8000) {
                        *reinterpret_cast<uint32_t*>(&r15_40) = 0x7fff;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_40) + 4) = reinterpret_cast<int32_t>(memcpy);
                    }
                    *reinterpret_cast<int32_t*>(&r14_41) = *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rsp2) + r11_37 * 2 - 86);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_41) + 4) = reinterpret_cast<int32_t>(memcpy);
                    r12d42 = *reinterpret_cast<int32_t*>(&r14_41) * r10d31 + 0x4000 >> 15;
                    *reinterpret_cast<uint32_t*>(&r13_43) = r12d42;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_43) + 4) = reinterpret_cast<int32_t>(memcpy);
                    if (*reinterpret_cast<int32_t*>(&r14_41) == 0xffff8000) {
                        *reinterpret_cast<uint32_t*>(&r13_43) = 0x7fff;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_43) + 4) = reinterpret_cast<int32_t>(memcpy);
                    }
                    zf44 = *reinterpret_cast<int32_t*>(&r8_35) == 0xffff8000;
                    if (!zf44) {
                        *reinterpret_cast<uint32_t*>(&r15_40) = ebp39;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_40) + 4) = reinterpret_cast<int32_t>(memcpy);
                    }
                    if (!zf44) {
                        *reinterpret_cast<uint32_t*>(&r13_43) = r12d42;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_43) + 4) = reinterpret_cast<int32_t>(memcpy);
                    }
                    ebp45 = static_cast<int32_t>(rbx38 + r13_43);
                    *reinterpret_cast<int16_t*>(&ebx46) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rbx38) + *reinterpret_cast<int16_t*>(&r13_43));
                    if (__intrinsic()) {
                        ebx46 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&ebp45)) >> 15) ^ 0xffff8000;
                    }
                    ebp47 = static_cast<int32_t>(r14_41 + r15_40);
                    *reinterpret_cast<int16_t*>(&r14d48) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r14_41) + *reinterpret_cast<int16_t*>(&r15_40));
                    if (__intrinsic()) {
                        r14d48 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&ebp47)) >> 15) ^ 0xffff8000;
                    }
                    *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rsp2) + r11_37 * 2 - 88) = *reinterpret_cast<int16_t*>(&r14d48);
                    *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rsp2) + r11_37 * 2 - 24) = *reinterpret_cast<int16_t*>(&ebx46);
                    cf49 = r11_37 < r9_36;
                    ++r11_37;
                } while (cf49);
            }
            ++rdx20;
            ++rsi30;
            r8d15 = v50;
            r10d17 = -r8d15;
            zf51 = reinterpret_cast<uint1_t>(r8d15 == 0x8000);
            r9b19 = zf51;
            if (zf51) {
                r10d17 = 0x7fff;
            }
            if (*reinterpret_cast<int16_t*>(&r8d15) >= reinterpret_cast<int16_t>(memcpy)) {
                r10d17 = r8d15;
            }
        } while (*reinterpret_cast<int16_t*>(&rax13) >= *reinterpret_cast<int16_t*>(&r10d17));
        goto addr_8b7_61;
    } else {
        cl52 = 1;
        goto addr_8c8_63;
    }
    addr_8e5_64:
    goto addr_8ea_3;
    addr_8b7_61:
    cl52 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdx20) < 9);
    addr_8c8_63:
    if (cl52 == memcpy) {
        addr_8ea_3:
        return;
    } else {
        goto addr_8e5_64;
    }
}

void fun_964() {
    uint32_t r8d1;
    int64_t rsi2;
    uint32_t esi3;
    uint32_t edx4;
    uint16_t* rdi5;
    int32_t eax6;
    uint32_t ecx7;
    uint32_t r8d8;

    while (1) {
        r8d1 = static_cast<uint32_t>(rsi2 * 4 + 0x6800);
        while (1) {
            esi3 = -r8d1;
            if (*reinterpret_cast<int16_t*>(&edx4) >= reinterpret_cast<int16_t>(memcpy)) {
                esi3 = r8d1;
            }
            *rdi5 = *reinterpret_cast<uint16_t*>(&esi3);
            ++eax6;
            ++rdi5;
            if (eax6 == 9) 
                goto addr_97a_6;
            edx4 = *rdi5;
            *reinterpret_cast<uint32_t*>(&rsi2) = -edx4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(memcpy);
            if (edx4 == 0x8000) {
                *reinterpret_cast<uint32_t*>(&rsi2) = ecx7;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(memcpy);
            }
            if (*reinterpret_cast<int16_t*>(&edx4) >= reinterpret_cast<int16_t>(memcpy)) {
                *reinterpret_cast<uint32_t*>(&rsi2) = edx4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(memcpy);
            }
            r8d8 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rsi2)));
            if (reinterpret_cast<int32_t>(r8d8) <= reinterpret_cast<int32_t>(0x5665)) {
                r8d1 = r8d8 >> 1;
            } else {
                if (reinterpret_cast<int32_t>(r8d8) > reinterpret_cast<int32_t>(0x7999)) 
                    break;
                r8d1 = *reinterpret_cast<uint32_t*>(&rsi2) + 0xffffd4cd;
            }
        }
    }
    addr_97a_6:
    return;
}

void Gsm_LPC_Analysis() {
    fun_c65();
}

struct s3 {
    int16_t f0;
    int16_t f2;
    int16_t f4;
    int16_t f6;
    int16_t f8;
    int16_t fa;
    int16_t fc;
    int16_t fe;
};

void Transformation_to_Log_Area_Ratios();

void Quantization_and_coding(struct s3* rdi) {
    int64_t rax2;
    int32_t ecx3;
    int64_t rcx4;
    int32_t edx5;
    int64_t rdx6;
    int32_t esi7;
    int64_t rsi8;
    int32_t r8d9;
    uint32_t esi10;
    int64_t r9_11;
    int64_t r8_12;
    int32_t r9d13;
    int64_t r10_14;
    int64_t r10_15;
    int32_t r9d16;
    uint32_t r10d17;
    int64_t r11_18;
    int64_t r11_19;
    int32_t r9d20;
    uint32_t r11d21;
    int64_t r9_22;
    int64_t r9_23;
    int32_t ebx24;
    uint32_t r9d25;
    int32_t ebx26;
    int32_t ebp27;
    int32_t r11d28;
    int32_t ebp29;
    int32_t r10d30;
    int32_t r11d31;
    int32_t r11d32;
    int32_t r8d33;
    int32_t r11d34;
    int32_t esi35;
    int32_t r8d36;
    int32_t r8d37;
    int32_t edx38;
    int32_t r8d39;
    int32_t edx40;
    int32_t ecx41;
    int32_t edx42;
    int32_t edx43;
    int32_t eax44;
    int32_t edx45;

    *reinterpret_cast<uint32_t*>(&rax2) = rdi->fe * 0x234c >> 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(memcpy);
    ecx3 = static_cast<int32_t>(rax2 - 0x478);
    *reinterpret_cast<int16_t*>(&rax2) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rax2) - 0x478);
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rax2) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&ecx3)) >> 15) ^ 0xffff8000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    *reinterpret_cast<uint32_t*>(&rcx4) = rdi->fc * 0x2156 >> 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = reinterpret_cast<int32_t>(memcpy);
    edx5 = static_cast<int32_t>(rcx4 - 0x155);
    *reinterpret_cast<int16_t*>(&rcx4) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rcx4) - 0x155);
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rcx4) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&edx5)) >> 15) ^ 0xffff8000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    *reinterpret_cast<uint32_t*>(&rdx6) = rdi->fa * 0x3c00 >> 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(memcpy);
    esi7 = static_cast<int32_t>(rdx6 - 0x700);
    *reinterpret_cast<int16_t*>(&rdx6) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdx6) - 0x700);
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&rdx6) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&esi7)) >> 15) ^ 0xffff8000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    *reinterpret_cast<uint32_t*>(&rsi8) = rdi->f8 * 0x368c >> 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(memcpy);
    r8d9 = static_cast<int32_t>(rsi8 + reinterpret_cast<int64_t>(""));
    *reinterpret_cast<int16_t*>(&esi10) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rsi8) + reinterpret_cast<int16_t>(""));
    if (__intrinsic()) {
        esi10 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r8d9)) >> 15) ^ 0xffff8000;
    }
    *reinterpret_cast<int32_t*>(&r9_11) = static_cast<int32_t>(rdi->f6) << 12;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_11) + 4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<uint32_t*>(&r8_12) = static_cast<uint32_t>(r9_11 + r9_11 * 4) >> 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = reinterpret_cast<int32_t>(memcpy);
    r9d13 = static_cast<int32_t>(r8_12 - 0xa00);
    *reinterpret_cast<int16_t*>(&r8_12) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r8_12) - 0xa00);
    if (__intrinsic()) {
        *reinterpret_cast<uint32_t*>(&r8_12) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r9d13)) >> 15) ^ 0xffff8000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    *reinterpret_cast<int32_t*>(&r10_14) = static_cast<int32_t>(rdi->f4) << 12;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_14) + 4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<uint32_t*>(&r10_15) = static_cast<uint32_t>(r10_14 + r10_14 * 4) >> 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_15) + 4) = reinterpret_cast<int32_t>(memcpy);
    r9d16 = static_cast<int32_t>(r10_15 + reinterpret_cast<int64_t>(Transformation_to_Log_Area_Ratios));
    *reinterpret_cast<int16_t*>(&r10d17) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r10_15) + reinterpret_cast<int16_t>(Transformation_to_Log_Area_Ratios));
    if (__intrinsic()) {
        r10d17 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r9d16)) >> 15) ^ 0xffff8000;
    }
    *reinterpret_cast<int32_t*>(&r11_18) = static_cast<int32_t>(rdi->f2) << 12;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_18) + 4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<uint32_t*>(&r11_19) = static_cast<uint32_t>(r11_18 + r11_18 * 4) >> 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_19) + 4) = reinterpret_cast<int32_t>(memcpy);
    r9d20 = static_cast<int32_t>(r11_19 + 0x100);
    *reinterpret_cast<int16_t*>(&r11d21) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r11_19) + 0x100);
    if (__intrinsic()) {
        r11d21 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r9d20)) >> 15) ^ 0xffff8000;
    }
    *reinterpret_cast<int32_t*>(&r9_22) = static_cast<int32_t>(rdi->f0) << 12;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_22) + 4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<uint32_t*>(&r9_23) = static_cast<uint32_t>(r9_22 + r9_22 * 4) >> 15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_23) + 4) = reinterpret_cast<int32_t>(memcpy);
    ebx24 = static_cast<int32_t>(r9_23 + 0x100);
    *reinterpret_cast<int16_t*>(&r9d25) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r9_23) + 0x100);
    if (__intrinsic()) {
        r9d25 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&ebx24)) >> 15) ^ 0xffff8000;
    }
    ebx26 = *reinterpret_cast<int16_t*>(&r9d25);
    ebp27 = (ebx26 >> 9) + 32;
    if (ebx26 < 0xffffc000) {
        ebp27 = reinterpret_cast<int32_t>(memcpy);
    }
    if (ebx26 >= 0x4000) {
        ebp27 = 63;
    }
    rdi->f0 = *reinterpret_cast<int16_t*>(&ebp27);
    r11d28 = *reinterpret_cast<int16_t*>(&r11d21);
    ebp29 = (r11d28 >> 9) + 32;
    if (r11d28 < 0xffffc000) {
        ebp29 = reinterpret_cast<int32_t>(memcpy);
    }
    if (r11d28 >= 0x4000) {
        ebp29 = 63;
    }
    rdi->f2 = *reinterpret_cast<int16_t*>(&ebp29);
    r10d30 = *reinterpret_cast<int16_t*>(&r10d17);
    r11d31 = (r10d30 >> 9) + 16;
    if (r10d30 < 0xffffe000) {
        r11d31 = reinterpret_cast<int32_t>(memcpy);
    }
    if (r10d30 >= 0x2000) {
        r11d31 = 31;
    }
    rdi->f4 = *reinterpret_cast<int16_t*>(&r11d31);
    r11d32 = static_cast<int32_t>(r8_12 + 0x100);
    r8d33 = *reinterpret_cast<int16_t*>(&r8_12);
    r11d34 = (static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r11d32)) >> 9) + 16;
    if (r8d33 < 0xffffdf00) {
        r11d34 = reinterpret_cast<int32_t>(memcpy);
    }
    if (r8d33 >= 0x1f00) {
        r11d34 = 31;
    }
    rdi->f6 = *reinterpret_cast<int16_t*>(&r11d34);
    esi35 = *reinterpret_cast<int16_t*>(&esi10);
    r8d36 = (esi35 >> 9) + 8;
    if (esi35 < 0xfffff000) {
        r8d36 = reinterpret_cast<int32_t>(memcpy);
    }
    if (esi35 >= 0x1000) {
        r8d36 = 15;
    }
    rdi->f8 = *reinterpret_cast<int16_t*>(&r8d36);
    r8d37 = static_cast<int32_t>(rdx6 + 0x100);
    edx38 = *reinterpret_cast<int16_t*>(&rdx6);
    r8d39 = (static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r8d37)) >> 9) + 8;
    if (edx38 < 0xffffef00) {
        r8d39 = reinterpret_cast<int32_t>(memcpy);
    }
    if (edx38 >= 0xf00) {
        r8d39 = 15;
    }
    rdi->fa = *reinterpret_cast<int16_t*>(&r8d39);
    edx40 = static_cast<int32_t>(rcx4 + 0x100);
    ecx41 = *reinterpret_cast<int16_t*>(&rcx4);
    edx42 = (static_cast<int32_t>(*reinterpret_cast<int16_t*>(&edx40)) >> 9) + 4;
    if (ecx41 < 0xfffff700) {
        edx42 = reinterpret_cast<int32_t>(memcpy);
    }
    if (ecx41 >= 0x700) {
        edx42 = reinterpret_cast<int32_t>("5");
    }
    rdi->fc = *reinterpret_cast<int16_t*>(&edx42);
    edx43 = static_cast<int32_t>(rax2 + 0x100);
    eax44 = *reinterpret_cast<int16_t*>(&rax2);
    edx45 = (static_cast<int32_t>(*reinterpret_cast<int16_t*>(&edx43)) >> 9) + 4;
    if (eax44 < 0xfffff700) {
        edx45 = reinterpret_cast<int32_t>(memcpy);
    }
    if (eax44 >= 0x700) {
        edx45 = reinterpret_cast<int32_t>("5");
    }
    rdi->fe = *reinterpret_cast<int16_t*>(&edx45);
    return;
}

void Transformation_to_Log_Area_Ratios() {
    goto 0x92d;
}

