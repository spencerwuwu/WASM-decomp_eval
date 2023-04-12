
void fun_3a6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_3ae(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_3b6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_39e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t v8;

    fun_3a6(r14_5, rsi, rdx, rcx);
    fun_3ae(r15_6, rsi, rdx, rcx);
    fun_3b6(r12_7, rsi, rdx, rcx);
    goto v8;
}

void fun_46d(int64_t rdi, int64_t rsi, int64_t rdx);

void fputc();

void fun_4a2(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_4bb(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_446(int64_t rdi, int64_t rsi, int64_t rdx) {
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
        fun_46d(v4, 0x466, rdx);
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
        fun_446(10, v9, rdx);
    }
    fun_4a2(v10, 0x48c, 0x493);
    fun_4bb(0x4a9, 22, 1, v10);
    fun_39e(rbx11, 22, 1, v10);
    fun_3a6(r14_12, 22, 1, v10);
    fun_3ae(r15_13, 22, 1, v10);
    fun_3b6(r12_14, 22, 1, v10);
    goto v15;
}

void fun_4a2(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r13_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t v9;

    fun_4bb(0x4a9, 22, 1, r13_4);
    fun_39e(rbx5, 22, 1, r13_4);
    fun_3a6(r14_6, 22, 1, r13_4);
    fun_3ae(r15_7, 22, 1, r13_4);
    fun_3b6(r12_8, 22, 1, r13_4);
    goto v9;
}

void fun_409(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_3ea(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
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
    fun_409(r13_8, 0x3f1, 0x3f8);
    do {
        v9 = rbp5 * 0x870;
        *reinterpret_cast<int32_t*>(&r13_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax11 = v9;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax11) + *reinterpret_cast<int32_t*>(&r13_10)) * 0xcccccccd) <= 0xccccccc) {
                fun_446(10, v6, 0x3f8);
            }
            __asm__("movss xmm0, [rax+r13*4]");
            __asm__("cvtss2sd xmm0, xmm0");
            fun_46d(v6, 0x466, 0x3f8);
            ++r13_10;
        } while (r13_10 != 0x870);
        ++rbp5;
    } while (rbp5 != 0x1000);
    fun_4a2(v6, 0x48c, 0x493);
    fun_4bb(0x4a9, 22, 1, v6);
    fun_39e(rbx12, 22, 1, v6);
    fun_3a6(r14_13, 22, 1, v6);
    fun_3ae(r15_14, 22, 1, v6);
    fun_3b6(r12_15, 22, 1, v6);
    goto v16;
}

void fun_3a6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t v7;

    fun_3ae(r15_5, rsi, rdx, rcx);
    fun_3b6(r12_6, rsi, rdx, rcx);
    goto v7;
}

void fun_46d(int64_t rdi, int64_t rsi, int64_t rdx) {
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
            fun_446(10, v8, rdx);
        }
        __asm__("movss xmm0, [rax+r13*4]");
        __asm__("cvtss2sd xmm0, xmm0");
        fun_46d(v9, 0x466, rdx);
    }
    fun_4a2(v10, 0x48c, 0x493);
    fun_4bb(0x4a9, 22, 1, v10);
    fun_39e(rbx11, 22, 1, v10);
    fun_3a6(r14_12, 22, 1, v10);
    fun_3ae(r15_13, 22, 1, v10);
    fun_3b6(r12_14, 22, 1, v10);
    goto v15;
}

void fun_4bb(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t v9;

    fun_39e(rbx5, rsi, rdx, rcx);
    fun_3a6(r14_6, rsi, rdx, rcx);
    fun_3ae(r15_7, rsi, rdx, rcx);
    fun_3b6(r12_8, rsi, rdx, rcx);
    goto v9;
}

void fun_409(int64_t rdi, int64_t rsi, int64_t rdx) {
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
                fun_446(10, v8, rdx);
            }
            __asm__("movss xmm0, [rax+r13*4]");
            __asm__("cvtss2sd xmm0, xmm0");
            fun_46d(v9, 0x466, rdx);
            ++r13_6;
        } while (r13_6 != 0x870);
        ++rbp5;
    } while (rbp5 != 0x1000);
    fun_4a2(v10, 0x48c, 0x493);
    fun_4bb(0x4a9, 22, 1, v10);
    fun_39e(rbx11, 22, 1, v10);
    fun_3a6(r14_12, 22, 1, v10);
    fun_3ae(r15_13, 22, 1, v10);
    fun_3b6(r12_14, 22, 1, v10);
    goto v15;
}

void fun_3ae(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r12_5;
    int64_t v6;

    fun_3b6(r12_5, rsi, rdx, rcx);
    goto v6;
}

void fun_3b6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
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

int64_t* g3ce = reinterpret_cast<int64_t*>(0x3d8d48288b4c);

void fun_d4() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    int64_t rdx4;
    int64_t rcx5;
    int64_t rcx6;
    uint64_t rdx7;
    int1_t cf8;
    int64_t rax9;
    int64_t rdx10;
    int64_t rax11;
    int64_t rax12;
    int64_t rcx13;
    int64_t rcx14;
    uint64_t rdx15;
    int1_t cf16;
    int64_t rax17;
    int32_t ebp18;
    signed char** r13_19;
    int64_t* rax20;
    int64_t rcx21;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    __asm__("movss xmm1, [rip+0x0]");
    do {
        __asm__("xorps xmm5, xmm5");
        *reinterpret_cast<int32_t*>(&rdx4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorps xmm6, xmm6");
        __asm__("xorps xmm4, xmm4");
        do {
            __asm__("movaps xmm7, xmm6");
            __asm__("mulss xmm5, xmm2");
            __asm__("movss xmm6, [rdi+rdx*4]");
            __asm__("mulss xmm6, xmm3");
            __asm__("addss xmm6, xmm5");
            __asm__("movaps xmm5, xmm7");
            __asm__("mulss xmm5, xmm0");
            __asm__("addss xmm5, xmm6");
            __asm__("mulss xmm4, xmm1");
            __asm__("addss xmm4, xmm5");
            __asm__("movss [rsi+rdx*4], xmm4");
            __asm__("movss xmm5, [rdi+rdx*4]");
            ++rdx4;
            __asm__("movaps xmm6, xmm4");
            __asm__("movaps xmm4, xmm7");
        } while (rdx4 != 0x870);
        ++rcx5;
    } while (rcx5 != 0x1000);
    __asm__("movss xmm4, [rip+0x0]");
    __asm__("movss xmm5, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm8, xmm8");
        *reinterpret_cast<int32_t*>(&rdx7) = 0x86f;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorps xmm7, xmm7");
        __asm__("xorps xmm9, xmm9");
        __asm__("xorps xmm6, xmm6");
        do {
            __asm__("movaps xmm10, xmm9");
            __asm__("mulss xmm7, xmm4");
            __asm__("movaps xmm9, xmm8");
            __asm__("mulss xmm9, xmm5");
            __asm__("addss xmm9, xmm7");
            __asm__("movaps xmm7, xmm10");
            __asm__("mulss xmm7, xmm0");
            __asm__("addss xmm7, xmm9");
            __asm__("mulss xmm6, xmm1");
            __asm__("addss xmm6, xmm7");
            __asm__("movss [rdi+rdx*4], xmm6");
            __asm__("movaps xmm7, xmm8");
            __asm__("movss xmm8, [rsi+rdx*4]");
            __asm__("movaps xmm9, xmm6");
            __asm__("movaps xmm6, xmm10");
            cf8 = rdx7 < 1;
            --rdx7;
        } while (!cf8);
        ++rax9;
    } while (rax9 != 0x1000);
    *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("movss xmm6, [rdi+rax*4]");
            __asm__("addss xmm6, [rdi+rax*4]");
            __asm__("movss [rsi+rax*4], xmm6");
            ++rax11;
        } while (rax11 != 0x870);
        ++rcx6;
    } while (rcx6 != 0x1000);
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm7, xmm7");
        *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorps xmm8, xmm8");
        __asm__("xorps xmm6, xmm6");
        do {
            __asm__("movaps xmm9, xmm8");
            __asm__("mulss xmm7, xmm2");
            __asm__("movss xmm8, [rdi+rdx*4]");
            __asm__("mulss xmm8, xmm3");
            __asm__("addss xmm8, xmm7");
            __asm__("movaps xmm7, xmm9");
            __asm__("mulss xmm7, xmm0");
            __asm__("addss xmm7, xmm8");
            __asm__("mulss xmm6, xmm1");
            __asm__("addss xmm6, xmm7");
            __asm__("movss [rsi+rdx*4], xmm6");
            __asm__("movss xmm7, [rdi+rdx*4]");
            ++rcx13;
            __asm__("movaps xmm8, xmm6");
            __asm__("movaps xmm6, xmm9");
        } while (rcx13 != 0x1000);
        ++rdx10;
    } while (rdx10 != 0x870);
    *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm6, xmm6");
        *reinterpret_cast<int32_t*>(&rdx15) = 0xfff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorps xmm3, xmm3");
        __asm__("xorps xmm7, xmm7");
        __asm__("xorps xmm2, xmm2");
        do {
            __asm__("movaps xmm8, xmm7");
            __asm__("mulss xmm3, xmm4");
            __asm__("movaps xmm7, xmm6");
            __asm__("mulss xmm7, xmm5");
            __asm__("addss xmm7, xmm3");
            __asm__("movaps xmm3, xmm8");
            __asm__("mulss xmm3, xmm0");
            __asm__("addss xmm3, xmm7");
            __asm__("mulss xmm2, xmm1");
            __asm__("addss xmm2, xmm3");
            __asm__("movss [rdi+rax*4], xmm2");
            __asm__("movaps xmm3, xmm6");
            __asm__("movss xmm6, [rsi+rax*4]");
            __asm__("movaps xmm7, xmm2");
            __asm__("movaps xmm2, xmm8");
            cf16 = rdx15 < 1;
            --rdx15;
        } while (!cf16);
        ++rax12;
    } while (rax12 != 0x870);
    do {
        *reinterpret_cast<int32_t*>(&rax17) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("movss xmm0, [rsi+rax*4]");
            __asm__("addss xmm0, [rsi+rax*4]");
            __asm__("movss [rdx+rax*4], xmm0");
            ++rax17;
        } while (rax17 != 0x870);
        ++rcx14;
    } while (rcx14 != 0x1000);
    if (ebp18 < 43) 
        goto 0x396;
    if (**r13_19 != fputc) 
        goto "???";
    rax20 = g3ce;
    rcx21 = *rax20;
    fun_3ea(0x3d8, 22, 1, rcx21);
}

