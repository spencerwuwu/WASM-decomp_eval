
void fputc(int32_t edi, int64_t rsi);

uint64_t* g303 = reinterpret_cast<uint64_t*>(0x3d8d48388b4c);

void fun_31f(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx);

void fun_33c(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx);

void fun_37f(int64_t rdi, uint64_t rsi, int64_t rdx, uint64_t rcx);

void fun_3a0(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx);

void fun_3e0(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx);

void fun_3f9(int64_t rdi, int32_t* rsi, uint64_t rdx, uint64_t rcx);

void fun_2e3(int64_t rdi, int32_t* rsi, uint64_t rdx, uint64_t rcx);

void fun_2eb(int64_t rdi, int32_t* rsi, uint64_t rdx, uint64_t rcx);

void fun_174(int64_t rdi) {
    uint64_t rax2;
    uint64_t rcx3;
    uint64_t rdx4;
    int32_t* rsi5;
    int32_t* r14_6;
    int32_t* rdi7;
    uint64_t r8_8;
    int64_t r9_9;
    uint64_t r10_10;
    int32_t r13d11;
    int32_t* r11_12;
    int32_t* r14_13;
    int32_t r11d14;
    int32_t r12d15;
    void* rbx16;
    void* rbx17;
    int32_t* r12_18;
    int32_t r15d19;
    int32_t* r14_20;
    uint64_t r13_21;
    uint64_t r15_22;
    int64_t r14_23;
    int32_t ebp24;
    int1_t cf25;
    int32_t v26;
    signed char** v27;
    uint64_t* rax28;
    uint64_t r15_29;
    uint64_t rcx30;
    int64_t rdx31;
    uint64_t v32;
    int32_t eax33;
    int64_t r15_34;
    int32_t ebp35;
    int32_t v36;
    int64_t r13_37;
    int32_t r12d38;
    int32_t* r14_39;
    int64_t rbx40;
    int64_t r14_41;
    int64_t v42;

    *reinterpret_cast<int32_t*>(&rax2) = 0x9c4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rcx3) = 0x9c3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rcx3 <= 0x9c2) {
            rdx4 = rcx3 + 1;
            rsi5 = r14_6 + rcx3 * 0x9c4;
            rdi7 = rsi5 + rax2;
            r8_8 = rax2 + 1;
            *reinterpret_cast<int32_t*>(&r9_9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_9) + 4) = reinterpret_cast<int32_t>(fputc);
            r10_10 = rax2;
            while (1) {
                r13d11 = *(rsi5 + r10_10 - 1);
                if (rsi5[r10_10] > r13d11) {
                    r13d11 = rsi5[r10_10];
                }
                r11_12 = r14_13 + rdx4 * 0x9c4;
                if (r13d11 <= r11_12[r10_10]) {
                    r13d11 = r11_12[r10_10];
                }
                rsi5[r10_10] = r13d11;
                r11d14 = *(r11_12 + r10_10 - 1);
                if (rcx3 < r10_10 - 1) {
                    r12d15 = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<unsigned char*>(&r12d15) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbx16) + r10_10) + *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbx17) + rcx3) == 3);
                    r11d14 = r11d14 + r12d15;
                }
                r12_18 = rsi5 + r10_10;
                if (r13d11 > r11d14) {
                    r11d14 = r13d11;
                }
                *r12_18 = r11d14;
                if (rdx4 >= r10_10) {
                    addr_1c0_13:
                    ++r10_10;
                    ++r9_9;
                    if (r10_10 == 0x9c4) 
                        break; else 
                        continue;
                } else {
                    if (!reinterpret_cast<int1_t>((*reinterpret_cast<unsigned char*>(&r9_9) & 1) == fputc)) {
                        r15d19 = (r14_20 + r8_8 * 0x9c4)[r10_10] + *rdi7;
                        if (r11d14 <= r15d19) {
                            r11d14 = r15d19;
                        }
                        *r12_18 = r11d14;
                        r13_21 = r8_8;
                        if (r9_9 == 1) 
                            goto addr_1c0_13;
                    } else {
                        r13_21 = rax2;
                        if (r9_9 != 1) {
                            do {
                                addr_280_19:
                                r15_22 = r13_21 * 0x2710 + r14_23;
                                ebp24 = *reinterpret_cast<int32_t*>(r15_22 + r10_10 * 4 + 0x2710) + rsi5[r13_21];
                                if (r11d14 > ebp24) {
                                    ebp24 = r11d14;
                                }
                                *r12_18 = ebp24;
                                r11d14 = *reinterpret_cast<int32_t*>(r15_22 + r10_10 * 4 + 0x4e20) + (rsi5 + r13_21)[1];
                                r13_21 = r13_21 + 2;
                                if (ebp24 > r11d14) {
                                    r11d14 = ebp24;
                                }
                                *r12_18 = r11d14;
                            } while (r13_21 != r10_10);
                            goto addr_2c2_24;
                        } else {
                            goto addr_1c0_13;
                        }
                    }
                }
                goto addr_280_19;
                addr_2c2_24:
                goto addr_1c0_13;
            }
        }
        --rax2;
        cf25 = rcx3 < 1;
        --rcx3;
    } while (!cf25);
    if (v26 >= reinterpret_cast<int32_t>("^_") && **v27 == fputc) {
        rax28 = g303;
        r15_29 = *rax28;
        rcx30 = r15_29;
        fun_31f(0x30d, 22, 1, rcx30);
        rdx31 = 0x32d;
        v32 = r15_29;
        fun_33c(r15_29, 0x326, 0x32d, rcx30);
        eax33 = 0x9c4;
        *reinterpret_cast<int32_t*>(&r15_34) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_34) + 4) = reinterpret_cast<int32_t>(fputc);
        ebp35 = reinterpret_cast<int32_t>(fputc);
        do {
            v36 = eax33;
            r13_37 = r15_34;
            r12d38 = ebp35;
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(r12d38 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                    fun_37f(10, v32, rdx31, rcx30);
                }
                *reinterpret_cast<int32_t*>(&rdx31) = (r14_39 + r15_34 * 0x9c4)[r13_37];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(fputc);
                fun_3a0(v32, 0x399, rdx31, rcx30);
                ++r12d38;
                ++r13_37;
            } while (r13_37 != 0x9c4);
            ebp35 = ebp35 + v36;
            ++r15_34;
            eax33 = v36 - 1;
        } while (r15_34 != 0x9c4);
        fun_3e0(v32, 0x3ca, 0x3d1, rcx30);
        *reinterpret_cast<int32_t*>(&rsi5) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx4) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx3 = v32;
        fun_3f9(0x3e7, 22, 1, rcx3);
    }
    fun_2e3(rbx40, rsi5, rdx4, rcx3);
    fun_2eb(r14_41, rsi5, rdx4, rcx3);
    goto v42;
}

void fun_2e3(int64_t rdi, int32_t* rsi, uint64_t rdx, uint64_t rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_2eb(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_37f(int64_t rdi, uint64_t rsi, int64_t rdx, uint64_t rcx) {
    int64_t rdx5;
    int64_t r15_6;
    int32_t* r14_7;
    int64_t r13_8;
    uint64_t v9;
    int32_t r12d10;
    int32_t ebp11;
    int32_t v12;
    uint64_t v13;
    uint64_t v14;
    int64_t rbx15;
    int64_t r14_16;
    int64_t v17;

    while (1) {
        *reinterpret_cast<int32_t*>(&rdx5) = (r14_7 + r15_6 * 0x9c4)[r13_8];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_3a0(v9, 0x399, rdx5, rcx);
        ++r12d10;
        ++r13_8;
        if (r13_8 == 0x9c4) {
            ebp11 = ebp11 + v12;
            ++r15_6;
            if (r15_6 == 0x9c4) 
                break;
            --v12;
            r13_8 = r15_6;
            r12d10 = ebp11;
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(r12d10 * 0xcccccccd + 0x19999998) > 0xccccccc) 
            continue;
        fun_37f(10, v13, rdx5, rcx);
    }
    fun_3e0(v14, 0x3ca, 0x3d1, rcx);
    fun_3f9(0x3e7, 22, 1, v14);
    fun_2e3(rbx15, 22, 1, v14);
    fun_2eb(r14_16, 22, 1, v14);
    goto v17;
}

void fun_3e0(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx) {
    uint64_t r15_5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t v8;

    fun_3f9(0x3e7, 22, 1, r15_5);
    fun_2e3(rbx6, 22, 1, r15_5);
    fun_2eb(r14_7, 22, 1, r15_5);
    goto v8;
}

void fun_31f(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx) {
    int64_t rdx5;
    uint64_t v6;
    uint64_t r15_7;
    uint64_t r15_8;
    int32_t eax9;
    int64_t r15_10;
    int32_t ebp11;
    int32_t v12;
    int64_t r13_13;
    int32_t r12d14;
    int32_t* r14_15;
    int64_t rbx16;
    int64_t r14_17;
    int64_t v18;

    rdx5 = 0x32d;
    v6 = r15_7;
    fun_33c(r15_8, 0x326, 0x32d, rcx);
    eax9 = 0x9c4;
    *reinterpret_cast<int32_t*>(&r15_10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_10) + 4) = reinterpret_cast<int32_t>(fputc);
    ebp11 = reinterpret_cast<int32_t>(fputc);
    do {
        v12 = eax9;
        r13_13 = r15_10;
        r12d14 = ebp11;
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(r12d14 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                fun_37f(10, v6, rdx5, rcx);
            }
            *reinterpret_cast<int32_t*>(&rdx5) = (r14_15 + r15_10 * 0x9c4)[r13_13];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_3a0(v6, 0x399, rdx5, rcx);
            ++r12d14;
            ++r13_13;
        } while (r13_13 != 0x9c4);
        ebp11 = ebp11 + v12;
        ++r15_10;
        eax9 = v12 - 1;
    } while (r15_10 != 0x9c4);
    fun_3e0(v6, 0x3ca, 0x3d1, rcx);
    fun_3f9(0x3e7, 22, 1, v6);
    fun_2e3(rbx16, 22, 1, v6);
    fun_2eb(r14_17, 22, 1, v6);
    goto v18;
}

void fun_2eb(int64_t rdi, int32_t* rsi, uint64_t rdx, uint64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_3a0(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx) {
    int32_t r12d5;
    int64_t r13_6;
    int32_t ebp7;
    int32_t tmp32_8;
    int64_t r15_9;
    int32_t v10;
    uint64_t v11;
    int64_t rdx12;
    int32_t* r14_13;
    uint64_t v14;
    uint64_t v15;
    int64_t rbx16;
    int64_t r14_17;
    int64_t v18;

    while (1) {
        ++r12d5;
        ++r13_6;
        if (r13_6 == 0x9c4) {
            ebp7 = tmp32_8;
            ++r15_9;
            if (r15_9 == 0x9c4) 
                break;
            --v10;
            r13_6 = r15_9;
            r12d5 = ebp7;
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(r12d5 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
            fun_37f(10, v11, rdx, rcx);
        }
        *reinterpret_cast<int32_t*>(&rdx12) = (r14_13 + r15_9 * 0x9c4)[r13_6];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_3a0(v14, 0x399, rdx12, rcx);
    }
    fun_3e0(v15, 0x3ca, 0x3d1, rcx);
    fun_3f9(0x3e7, 22, 1, v15);
    fun_2e3(rbx16, 22, 1, v15);
    fun_2eb(r14_17, 22, 1, v15);
    goto v18;
}

void fun_3f9(int64_t rdi, int32_t* rsi, uint64_t rdx, uint64_t rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_2e3(rbx5, rsi, rdx, rcx);
    fun_2eb(r14_6, rsi, rdx, rcx);
    goto v7;
}

void fun_33c(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx) {
    int32_t eax5;
    int64_t r15_6;
    int32_t ebp7;
    int32_t v8;
    int64_t r13_9;
    int32_t r12d10;
    uint64_t v11;
    int32_t* r14_12;
    uint64_t v13;
    uint64_t v14;
    int64_t rbx15;
    int64_t r14_16;
    int64_t v17;

    eax5 = 0x9c4;
    *reinterpret_cast<int32_t*>(&r15_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_6) + 4) = reinterpret_cast<int32_t>(fputc);
    ebp7 = reinterpret_cast<int32_t>(fputc);
    do {
        v8 = eax5;
        r13_9 = r15_6;
        r12d10 = ebp7;
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(r12d10 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                fun_37f(10, v11, rdx, rcx);
            }
            *reinterpret_cast<int32_t*>(&rdx) = (r14_12 + r15_6 * 0x9c4)[r13_9];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_3a0(v13, 0x399, rdx, rcx);
            ++r12d10;
            ++r13_9;
        } while (r13_9 != 0x9c4);
        ebp7 = ebp7 + v8;
        ++r15_6;
        eax5 = v8 - 1;
    } while (r15_6 != 0x9c4);
    fun_3e0(v14, 0x3ca, 0x3d1, rcx);
    fun_3f9(0x3e7, 22, 1, v14);
    fun_2e3(rbx15, 22, 1, v14);
    fun_2eb(r14_16, 22, 1, v14);
    goto v17;
}

void fputc(int32_t edi, int64_t rsi) {
}

struct s0 {
    signed char[2496] pad2496;
    int32_t f9c0;
};

void fun_74() {
    int64_t rax1;
    struct s0* rbx2;
    int64_t r14_3;

    __asm__("movq mm7, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax1) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("pcmpeqd xmm9, xmm9");
    __asm__("movdqa xmm10, [rip+0x0]");
    __asm__("movdqa xmm11, [rip+0x0]");
    do {
        __asm__("movdqa xmm12, xmm7");
        __asm__("pand xmm12, xmm8");
        __asm__("movdqa xmm13, xmm6");
        __asm__("pand xmm13, xmm8");
        __asm__("packuswb xmm12, xmm13");
        __asm__("movdqa xmm13, xmm5");
        __asm__("pand xmm13, xmm8");
        __asm__("movdqa xmm14, xmm4");
        __asm__("pand xmm14, xmm8");
        __asm__("packuswb xmm13, xmm14");
        __asm__("packuswb xmm12, xmm13");
        __asm__("movdqa xmm13, xmm3");
        __asm__("pand xmm13, xmm8");
        __asm__("movdqa xmm14, xmm2");
        __asm__("pand xmm14, xmm8");
        __asm__("packuswb xmm13, xmm14");
        __asm__("movdqa xmm14, xmm1");
        __asm__("pand xmm14, xmm8");
        __asm__("movdqa xmm15, xmm0");
        __asm__("pand xmm15, xmm8");
        __asm__("packuswb xmm14, xmm15");
        __asm__("packuswb xmm13, xmm14");
        __asm__("packuswb xmm12, xmm13");
        __asm__("psubb xmm12, xmm9");
        __asm__("pand xmm12, xmm10");
        __asm__("movdqu [rbx+rax], xmm12");
        rax1 = rax1 + 16;
        __asm__("paddq xmm7, xmm11");
        __asm__("paddq xmm6, xmm11");
        __asm__("paddq xmm5, xmm11");
        __asm__("paddq xmm4, xmm11");
        __asm__("paddq xmm3, xmm11");
        __asm__("paddq xmm2, xmm11");
        __asm__("paddq xmm1, xmm11");
        __asm__("paddq xmm0, xmm11");
    } while (rax1 != 0x9c0);
    rbx2->f9c0 = 0x30201;
    fun_174(r14_3);
}

