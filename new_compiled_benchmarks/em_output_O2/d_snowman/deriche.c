
void fun_62d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_635(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_63d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_625(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t v8;

    fun_62d(r14_5, rsi, rdx, rcx);
    fun_635(r15_6, rsi, rdx, rcx);
    fun_63d(r12_7, rsi, rdx, rcx);
    goto v8;
}

void fun_6ed(int64_t rdi, int64_t rsi, int64_t rdx);

void fputc();

void fun_722(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_73b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_6c6(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int64_t r13_5;
    int64_t rbp6;
    int64_t v7;
    int64_t rax8;
    int64_t v9;
    int64_t v10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r12_14;
    int64_t v15;

    while (1) {
        __asm__("movss xmm0, [rax+r13*4]");
        __asm__("cvtss2sd xmm0, xmm0");
        fun_6ed(v4, 0x6e6, rdx);
        ++r13_5;
        if (r13_5 == 0x870) {
            ++rbp6;
            if (rbp6 == 0x1000) 
                break;
            v7 = rbp6 * 0x870;
            *reinterpret_cast<int32_t*>(&r13_5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax8 = v7;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax8) + *reinterpret_cast<int32_t*>(&r13_5)) * 0xcccccccd) > 0xccccccc) 
            continue;
        fun_6c6(10, v9, rdx);
    }
    fun_722(v10, 0x70c, 0x713);
    fun_73b(0x729, 22, 1, v10);
    fun_625(rbx11, 22, 1, v10);
    fun_62d(r14_12, 22, 1, v10);
    fun_635(r15_13, 22, 1, v10);
    fun_63d(r12_14, 22, 1, v10);
    goto v15;
}

void fun_690(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int64_t rbp5;
    int64_t r13_6;
    int64_t rax7;
    int64_t v8;
    int64_t v9;
    int64_t v10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r12_14;
    int64_t v15;

    do {
        v4 = rbp5 * 0x870;
        *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax7 = v4;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax7) + *reinterpret_cast<int32_t*>(&r13_6)) * 0xcccccccd) <= 0xccccccc) {
                fun_6c6(10, v8, rdx);
            }
            __asm__("movss xmm0, [rax+r13*4]");
            __asm__("cvtss2sd xmm0, xmm0");
            fun_6ed(v9, 0x6e6, rdx);
            ++r13_6;
        } while (r13_6 != 0x870);
        ++rbp5;
    } while (rbp5 != 0x1000);
    fun_722(v10, 0x70c, 0x713);
    fun_73b(0x729, 22, 1, v10);
    fun_625(rbx11, 22, 1, v10);
    fun_62d(r14_12, 22, 1, v10);
    fun_635(r15_13, 22, 1, v10);
    fun_63d(r12_14, 22, 1, v10);
    goto v15;
}

void fun_722(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r13_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t v9;

    fun_73b(0x729, 22, 1, r13_4);
    fun_625(rbx5, 22, 1, r13_4);
    fun_62d(r14_6, 22, 1, r13_4);
    fun_635(r15_7, 22, 1, r13_4);
    fun_63d(r12_8, 22, 1, r13_4);
    goto v9;
}

void fun_671(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbp5;
    int64_t v6;
    int64_t r13_7;
    int64_t r13_8;
    int64_t v9;
    int64_t r13_10;
    int64_t rax11;
    int64_t rbx12;
    int64_t r14_13;
    int64_t r15_14;
    int64_t r12_15;
    int64_t v16;

    *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
    v6 = r13_7;
    fun_690(r13_8, 0x678, 0x67f);
    do {
        v9 = rbp5 * 0x870;
        *reinterpret_cast<int32_t*>(&r13_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax11 = v9;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax11) + *reinterpret_cast<int32_t*>(&r13_10)) * 0xcccccccd) <= 0xccccccc) {
                fun_6c6(10, v6, 0x67f);
            }
            __asm__("movss xmm0, [rax+r13*4]");
            __asm__("cvtss2sd xmm0, xmm0");
            fun_6ed(v6, 0x6e6, 0x67f);
            ++r13_10;
        } while (r13_10 != 0x870);
        ++rbp5;
    } while (rbp5 != 0x1000);
    fun_722(v6, 0x70c, 0x713);
    fun_73b(0x729, 22, 1, v6);
    fun_625(rbx12, 22, 1, v6);
    fun_62d(r14_13, 22, 1, v6);
    fun_635(r15_14, 22, 1, v6);
    fun_63d(r12_15, 22, 1, v6);
    goto v16;
}

void fun_62d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t v7;

    fun_635(r15_5, rsi, rdx, rcx);
    fun_63d(r12_6, rsi, rdx, rcx);
    goto v7;
}

void fun_6ed(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r13_4;
    int64_t rbp5;
    int64_t v6;
    int64_t rax7;
    int64_t v8;
    int64_t v9;
    int64_t v10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r12_14;
    int64_t v15;

    while (1) {
        ++r13_4;
        if (r13_4 == 0x870) {
            ++rbp5;
            if (rbp5 == 0x1000) 
                break;
            v6 = rbp5 * 0x870;
            *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax7 = v6;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax7) + *reinterpret_cast<int32_t*>(&r13_4)) * 0xcccccccd) <= 0xccccccc) {
            fun_6c6(10, v8, rdx);
        }
        __asm__("movss xmm0, [rax+r13*4]");
        __asm__("cvtss2sd xmm0, xmm0");
        fun_6ed(v9, 0x6e6, rdx);
    }
    fun_722(v10, 0x70c, 0x713);
    fun_73b(0x729, 22, 1, v10);
    fun_625(rbx11, 22, 1, v10);
    fun_62d(r14_12, 22, 1, v10);
    fun_635(r15_13, 22, 1, v10);
    fun_63d(r12_14, 22, 1, v10);
    goto v15;
}

void fun_73b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t v9;

    fun_625(rbx5, rsi, rdx, rcx);
    fun_62d(r14_6, rsi, rdx, rcx);
    fun_635(r15_7, rsi, rdx, rcx);
    fun_63d(r12_8, rsi, rdx, rcx);
    goto v9;
}

void fun_635(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r12_5;
    int64_t v6;

    fun_63d(r12_5, rsi, rdx, rcx);
    goto v6;
}

void fun_63d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fputc() {
}

void fun_22();

void fun_19() {
    signed char* rax1;
    signed char al2;

    *reinterpret_cast<signed char*>(&rax1) = reinterpret_cast<signed char>(al2 + reinterpret_cast<signed char>(fputc));
    *rax1 = reinterpret_cast<signed char>(*rax1 + *reinterpret_cast<signed char*>(&rax1));
    fun_22();
}

void fun_32() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
}

int64_t* g655 = reinterpret_cast<int64_t*>(0x3d8d48288b4c);

void fun_d4() {
    int64_t rdx1;
    int64_t rcx2;
    int64_t rcx3;
    int64_t rdx4;
    int64_t rax5;
    int64_t rax6;
    int64_t rdx7;
    int64_t r8_8;
    int64_t rcx9;
    int64_t rdx10;
    int64_t rdx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r9_14;
    int64_t r8_15;
    int64_t r12_16;
    int64_t rdx17;
    int64_t rax18;
    int64_t rax19;
    int64_t rcx20;
    int1_t zf21;
    int64_t rcx22;
    int64_t rcx23;
    int64_t r14_24;
    int64_t r15_25;
    int64_t r8_26;
    int64_t rdi27;
    int64_t r12_28;
    int32_t ebp29;
    signed char** r13_30;
    int64_t* rax31;
    int64_t rcx32;

    __asm__("andps xmm2, xmm3");
    __asm__("cvtdq2ps xmm9, xmm10");
    __asm__("divps xmm9, xmm4");
    __asm__("movups [rsi+rdx*4], xmm9");
    __asm__("paddq xmm7, xmm5");
    __asm__("paddq xmm8, xmm5");
    if (rdx1 + 4 == 0x870) {
        if (rcx2 + 1 == 0x1000) {
            *reinterpret_cast<int32_t*>(&rcx3) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movss xmm4, [rip+0x0]");
            __asm__("movss xmm5, [rip+0x0]");
            __asm__("movss xmm0, [rip+0x0]");
            __asm__("movss xmm1, [rip+0x0]");
            do {
                __asm__("xorps xmm3, xmm3");
                *reinterpret_cast<int32_t*>(&rdx4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("pxor xmm6, xmm6");
                __asm__("pxor xmm2, xmm2");
                do {
                    __asm__("movdqa xmm7, xmm6");
                    __asm__("mulss xmm3, xmm4");
                    __asm__("movss xmm6, [rdi+rdx*4]");
                    __asm__("mulss xmm6, xmm5");
                    __asm__("addss xmm6, xmm3");
                    __asm__("movdqa xmm3, xmm7");
                    __asm__("mulss xmm3, xmm0");
                    __asm__("addss xmm3, xmm6");
                    __asm__("mulss xmm2, xmm1");
                    __asm__("addss xmm2, xmm3");
                    __asm__("movss [rsi+rdx*4], xmm2");
                    __asm__("movss xmm3, [rdi+rdx*4]");
                    ++rdx4;
                    __asm__("movaps xmm6, xmm2");
                    __asm__("movdqa xmm2, xmm7");
                } while (rdx4 != 0x870);
                ++rax5;
            } while (rax5 != 0x1000);
            __asm__("movss xmm2, [rip+0x0]");
            __asm__("movss xmm3, [rip+0x0]");
            *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("pxor xmm8, xmm8");
                *reinterpret_cast<int32_t*>(&rdx7) = 0x86f;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm9, xmm9");
                __asm__("xorps xmm6, xmm6");
                __asm__("pxor xmm7, xmm7");
                do {
                    __asm__("mulss xmm9, xmm2");
                    __asm__("movdqa xmm10, xmm8");
                    __asm__("mulss xmm10, xmm3");
                    __asm__("addss xmm10, xmm9");
                    __asm__("movaps xmm9, xmm6");
                    __asm__("mulss xmm9, xmm0");
                    __asm__("addss xmm9, xmm10");
                    __asm__("mulss xmm7, xmm1");
                    __asm__("addss xmm7, xmm9");
                    __asm__("movss [rdi+rdx*4], xmm7");
                    __asm__("movss xmm9, [rsi+rdx*4]");
                    r8_8 = rdx7 - 1;
                    __asm__("mulss xmm8, xmm2");
                    __asm__("movaps xmm10, xmm9");
                    __asm__("mulss xmm10, xmm3");
                    __asm__("addss xmm10, xmm8");
                    __asm__("movaps xmm8, xmm7");
                    __asm__("mulss xmm8, xmm0");
                    __asm__("addss xmm8, xmm10");
                    __asm__("mulss xmm6, xmm1");
                    __asm__("addss xmm6, xmm8");
                    __asm__("movss [rdi+rdx*4-0x4], xmm6");
                    __asm__("movd xmm8, dword [rsi+rdx*4-0x4]");
                    rdx7 = rdx7 - 2;
                } while (!reinterpret_cast<int1_t>(r8_8 == fputc));
                ++rcx3;
            } while (rcx3 != 0x1000);
            *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdx10 = rax6 * 0x21c0;
                rdx11 = rdx10 + r14_12;
                if (reinterpret_cast<uint64_t>(rdx11 - (rdx10 + r15_13)) < 32) {
                    *reinterpret_cast<int32_t*>(&r9_14) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_14) + 4) = reinterpret_cast<int32_t>(fputc);
                    goto addr_360_16;
                }
                *reinterpret_cast<int32_t*>(&r8_15) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_15) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r9_14) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_14) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(rdx11 - (rdx10 + r12_16)) < 32) {
                    do {
                        addr_360_16:
                        __asm__("movss xmm6, [rdi+r9*4]");
                        __asm__("addss xmm6, [rsi+r9*4]");
                        __asm__("movss [rdx+r9*4], xmm6");
                        __asm__("movss xmm6, [r8+rdi]");
                        __asm__("addss xmm6, [r8+rsi]");
                        __asm__("movss [r8+rdx], xmm6");
                        r9_14 = r9_14 + 2;
                    } while (r9_14 != 0x870);
                } else {
                    do {
                        __asm__("movups xmm6, [rdi+r8*4]");
                        __asm__("movups xmm7, [rdi+r8*4+0x10]");
                        __asm__("movups xmm8, [rsi+r8*4]");
                        __asm__("addps xmm8, xmm6");
                        __asm__("movups xmm6, [rsi+r8*4+0x10]");
                        __asm__("addps xmm6, xmm7");
                        __asm__("movups [rdx+r8*4], xmm8");
                        __asm__("movups [rdx+r8*4+0x10], xmm6");
                        __asm__("movups xmm6, [r9+rdi]");
                        __asm__("movups xmm7, [r9+rdi+0x10]");
                        __asm__("movups xmm8, [r9+rsi]");
                        __asm__("addps xmm8, xmm6");
                        __asm__("movups xmm6, [r9+rsi+0x10]");
                        __asm__("addps xmm6, xmm7");
                        __asm__("movups [r9+rdx], xmm8");
                        __asm__("movups [r9+rdx+0x10], xmm6");
                        r8_15 = r8_15 + 16;
                    } while (r8_15 != 0x870);
                    continue;
                }
                ++rax6;
            } while (rax6 != 0x1000);
            *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm7, xmm7");
                *reinterpret_cast<int32_t*>(&rax18) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm8, xmm8");
                __asm__("xorps xmm6, xmm6");
                do {
                    __asm__("movaps xmm9, xmm8");
                    __asm__("mulss xmm7, xmm4");
                    __asm__("movss xmm8, [rdi+rcx*4]");
                    __asm__("mulss xmm8, xmm5");
                    __asm__("addss xmm8, xmm7");
                    __asm__("movaps xmm7, xmm9");
                    __asm__("mulss xmm7, xmm0");
                    __asm__("addss xmm7, xmm8");
                    __asm__("mulss xmm6, xmm1");
                    __asm__("addss xmm6, xmm7");
                    __asm__("movss [rsi+rcx*4], xmm6");
                    __asm__("movss xmm7, [rdi+rcx*4]");
                    ++rax18;
                    __asm__("movaps xmm8, xmm6");
                    __asm__("movaps xmm6, xmm9");
                } while (rax18 != 0x1000);
                ++rcx9;
            } while (rcx9 != 0x870);
            *reinterpret_cast<int32_t*>(&rax19) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm6, xmm6");
                *reinterpret_cast<int32_t*>(&rcx20) = 0xfff;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm7, xmm7");
                __asm__("xorps xmm4, xmm4");
                __asm__("xorps xmm5, xmm5");
                do {
                    __asm__("mulss xmm7, xmm2");
                    __asm__("movaps xmm8, xmm6");
                    __asm__("mulss xmm8, xmm3");
                    __asm__("addss xmm8, xmm7");
                    __asm__("movaps xmm7, xmm4");
                    __asm__("mulss xmm7, xmm0");
                    __asm__("addss xmm7, xmm8");
                    __asm__("mulss xmm5, xmm1");
                    __asm__("addss xmm5, xmm7");
                    __asm__("movss [rdi+rdx*4], xmm5");
                    __asm__("movss xmm7, [rdi+rdx*4]");
                    __asm__("mulss xmm6, xmm2");
                    __asm__("movaps xmm8, xmm7");
                    __asm__("mulss xmm8, xmm3");
                    __asm__("addss xmm8, xmm6");
                    __asm__("movaps xmm6, xmm5");
                    __asm__("mulss xmm6, xmm0");
                    __asm__("addss xmm6, xmm8");
                    __asm__("mulss xmm4, xmm1");
                    __asm__("addss xmm4, xmm6");
                    __asm__("movss [rdi+rdx*4], xmm4");
                    __asm__("movss xmm6, [rsi+rdx*4]");
                    zf21 = rcx20 == 1;
                    rcx20 = rcx20 - 2;
                } while (!zf21);
                ++rdx17;
            } while (rdx17 != 0x870);
            do {
                rcx22 = rax19 * 0x21c0;
                rcx23 = rcx22 + r14_24;
                if (reinterpret_cast<uint64_t>(rcx23 - (rcx22 + r15_25)) < 32) {
                    *reinterpret_cast<int32_t*>(&r8_26) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_26) + 4) = reinterpret_cast<int32_t>(fputc);
                    goto addr_5d0_34;
                }
                *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r8_26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_26) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(rcx23 - (rcx22 + r12_28)) < 32) {
                    do {
                        addr_5d0_34:
                        __asm__("movss xmm0, [rsi+r8*4]");
                        __asm__("addss xmm0, [rdx+r8*4]");
                        __asm__("movss [rcx+r8*4], xmm0");
                        __asm__("movss xmm0, [rdi+rsi]");
                        __asm__("addss xmm0, [rdi+rdx]");
                        __asm__("movss [rdi+rcx], xmm0");
                        r8_26 = r8_26 + 2;
                    } while (r8_26 != 0x870);
                } else {
                    do {
                        __asm__("movups xmm0, [rsi+rdi*4]");
                        __asm__("movups xmm1, [rsi+rdi*4+0x10]");
                        __asm__("movups xmm2, [rdx+rdi*4]");
                        __asm__("addps xmm2, xmm0");
                        __asm__("movups xmm0, [rdx+rdi*4+0x10]");
                        __asm__("addps xmm0, xmm1");
                        __asm__("movups [rcx+rdi*4], xmm2");
                        __asm__("movups [rcx+rdi*4+0x10], xmm0");
                        __asm__("movups xmm0, [r8+rsi]");
                        __asm__("movups xmm1, [r8+rsi+0x10]");
                        __asm__("movups xmm2, [r8+rdx]");
                        __asm__("addps xmm2, xmm0");
                        __asm__("movups xmm0, [r8+rdx+0x10]");
                        __asm__("addps xmm0, xmm1");
                        __asm__("movups [r8+rcx], xmm2");
                        __asm__("movups [r8+rcx+0x10], xmm0");
                        rdi27 = rdi27 + 16;
                    } while (rdi27 != 0x870);
                    continue;
                }
                ++rax19;
            } while (rax19 != 0x1000);
            if (ebp29 < 43) 
                goto 0x61d;
            if (**r13_30 != fputc) 
                goto "???";
            rax31 = g655;
            rcx32 = *rax31;
            fun_671(0x65f, 22, 1, rcx32);
        }
    }
}

