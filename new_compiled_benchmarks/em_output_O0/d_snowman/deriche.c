
int64_t* ga29 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_a3a(int64_t rdi, int64_t rsi);

int64_t* ga41 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_a59(int64_t rdi, int64_t rsi, int64_t rdx);

void fprintf();

int64_t* gaa1 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_ab2(int64_t rdi, int64_t rsi);

int64_t* gab9 = reinterpret_cast<int64_t*>(0x48f0458b48388b48);

void fun_ae9(int64_t rdi, int64_t rsi);

int64_t* gb11 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_b29(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* gb30 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_b41(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int32_t esi, int64_t rdx) {
    int32_t v4;
    int32_t v5;
    int64_t* rax6;
    int64_t rdi7;
    int64_t* rax8;
    int64_t rdi9;
    int32_t v10;
    int32_t v11;
    int64_t* rax12;
    int64_t rdi13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t rcx16;
    int64_t* rax17;
    int64_t rdi18;
    int64_t* rax19;
    int64_t rdi20;

    v4 = edi;
    v5 = esi;
    rax6 = ga29;
    rdi7 = *rax6;
    fun_a3a(rdi7, 0xa33);
    rax8 = ga41;
    rdi9 = *rax8;
    fun_a59(rdi9, 0xa4b, 0xa52);
    v10 = reinterpret_cast<int32_t>(fprintf);
    while (v10 < v4) {
        v11 = reinterpret_cast<int32_t>(fprintf);
        while (v11 < v5) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v10 * v5 + v11) % 20 == fprintf)) {
                rax12 = gaa1;
                rdi13 = *rax12;
                fun_ab2(rdi13, 0xaab);
            }
            rax14 = gab9;
            rdi15 = *rax14;
            rcx16 = v11;
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("cvtss2sd xmm0, xmm0");
            fun_ae9(rdi15, 0xae2);
            ++v11;
        }
        ++v10;
    }
    rax17 = gb11;
    rdi18 = *rax17;
    fun_b29(rdi18, 0xb1b, 0xb22, rcx16);
    rax19 = gb30;
    rdi20 = *rax19;
    fun_b41(rdi20, 0xb3a, 0xb22, rcx16);
    return;
}

void fun_ab2(int64_t rdi, int64_t rsi) {
    int64_t* rax3;
    int64_t rdi4;
    int64_t rcx5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t* rax19;
    int64_t rdi20;
    int64_t* rax21;
    int64_t rdi22;
    int64_t* rax23;
    int64_t rdi24;
    int64_t v25;

    while (1) {
        rax3 = gab9;
        rdi4 = *rax3;
        rcx5 = *reinterpret_cast<int32_t*>(rbp6 - 24);
        __asm__("movss xmm0, [rax+rcx*4]");
        __asm__("cvtss2sd xmm0, xmm0");
        fun_ae9(rdi4, 0xae2);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_b0a_7;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 8) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = gaa1;
        rdi20 = *rax19;
        fun_ab2(rdi20, 0xaab);
    }
    addr_b0a_7:
    rax21 = gb11;
    rdi22 = *rax21;
    fun_b29(rdi22, 0xb1b, 0xb22, rcx5);
    rax23 = gb30;
    rdi24 = *rax23;
    fun_b41(rdi24, 0xb3a, 0xb22, rcx5);
    goto v25;
}

void fun_e7(int64_t rdi);

void fun_f0(int64_t rdi);

void fun_f9(int64_t rdi);

void fun_de(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 48);
    fun_e7(rdi4);
    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 56);
    fun_f0(rdi6);
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 64);
    fun_f9(rdi8);
    goto v10;
}

void fun_a3a(int64_t rdi, int64_t rsi) {
    int64_t* rax3;
    int64_t rdi4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t rcx18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t* rax24;
    int64_t rdi25;
    int64_t* rax26;
    int64_t rdi27;
    int64_t v28;

    rax3 = ga41;
    rdi4 = *rax3;
    fun_a59(rdi4, 0xa4b, 0xa52);
    *reinterpret_cast<int32_t*>(rbp5 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp6 - 20) < *reinterpret_cast<int32_t*>(rbp7 - 4)) {
        *reinterpret_cast<int32_t*>(rbp8 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) < *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 8) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
                rax14 = gaa1;
                rdi15 = *rax14;
                fun_ab2(rdi15, 0xaab);
            }
            rax16 = gab9;
            rdi17 = *rax16;
            rcx18 = *reinterpret_cast<int32_t*>(rbp19 - 24);
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("cvtss2sd xmm0, xmm0");
            fun_ae9(rdi17, 0xae2);
            *reinterpret_cast<int32_t*>(rbp20 - 24) = *reinterpret_cast<int32_t*>(rbp21 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp22 - 20) = *reinterpret_cast<int32_t*>(rbp23 - 20) + 1;
    }
    rax24 = gb11;
    rdi25 = *rax24;
    fun_b29(rdi25, 0xb1b, 0xb22, rcx18);
    rax26 = gb30;
    rdi27 = *rax26;
    fun_b41(rdi27, 0xb3a, 0xb22, rcx18);
    goto v28;
}

void fun_ae9(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t* rax17;
    int64_t rdi18;
    int64_t rcx19;
    int64_t rbp20;
    int64_t* rax21;
    int64_t rdi22;
    int64_t* rax23;
    int64_t rdi24;
    int64_t v25;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp3 - 24) = *reinterpret_cast<int32_t*>(rbp4 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp5 - 24) >= *reinterpret_cast<int32_t*>(rbp6 - 8)) {
            *reinterpret_cast<int32_t*>(rbp7 - 20) = *reinterpret_cast<int32_t*>(rbp8 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp9 - 20) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) 
                goto addr_b0a_6;
            *reinterpret_cast<int32_t*>(rbp11 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 8) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
            rax15 = gaa1;
            rdi16 = *rax15;
            fun_ab2(rdi16, 0xaab);
        }
        rax17 = gab9;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        __asm__("movss xmm0, [rax+rcx*4]");
        __asm__("cvtss2sd xmm0, xmm0");
        fun_ae9(rdi18, 0xae2);
    }
    addr_b0a_6:
    rax21 = gb11;
    rdi22 = *rax21;
    fun_b29(rdi22, 0xb1b, 0xb22, rcx19);
    rax23 = gb30;
    rdi24 = *rax23;
    fun_b41(rdi24, 0xb3a, 0xb22, rcx19);
    goto v25;
}

void fun_e7(int64_t rdi) {
    int64_t rdi2;
    int64_t rbp3;
    int64_t rdi4;
    int64_t rbp5;
    int64_t v6;

    rdi2 = *reinterpret_cast<int64_t*>(rbp3 - 56);
    fun_f0(rdi2);
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 64);
    fun_f9(rdi4);
    goto v6;
}

void fun_a59(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t* rax13;
    int64_t rdi14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t rcx17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t* rax23;
    int64_t rdi24;
    int64_t* rax25;
    int64_t rdi26;
    int64_t v27;

    *reinterpret_cast<int32_t*>(rbp4 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp5 - 20) < *reinterpret_cast<int32_t*>(rbp6 - 4)) {
        *reinterpret_cast<int32_t*>(rbp7 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp8 - 24) < *reinterpret_cast<int32_t*>(rbp9 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp10 - 20) * *reinterpret_cast<int32_t*>(rbp11 - 8) + *reinterpret_cast<int32_t*>(rbp12 - 24)) % 20 == fprintf)) {
                rax13 = gaa1;
                rdi14 = *rax13;
                fun_ab2(rdi14, 0xaab);
            }
            rax15 = gab9;
            rdi16 = *rax15;
            rcx17 = *reinterpret_cast<int32_t*>(rbp18 - 24);
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("cvtss2sd xmm0, xmm0");
            fun_ae9(rdi16, 0xae2);
            *reinterpret_cast<int32_t*>(rbp19 - 24) = *reinterpret_cast<int32_t*>(rbp20 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp21 - 20) = *reinterpret_cast<int32_t*>(rbp22 - 20) + 1;
    }
    rax23 = gb11;
    rdi24 = *rax23;
    fun_b29(rdi24, 0xb1b, 0xb22, rcx17);
    rax25 = gb30;
    rdi26 = *rax25;
    fun_b41(rdi26, 0xb3a, 0xb22, rcx17);
    goto v27;
}

void fun_f0(int64_t rdi) {
    int64_t rdi2;
    int64_t rbp3;
    int64_t v4;

    rdi2 = *reinterpret_cast<int64_t*>(rbp3 - 64);
    fun_f9(rdi2);
    goto v4;
}

void fun_b29(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = gb30;
    rdi6 = *rax5;
    fun_b41(rdi6, 0xb3a, rdx, rcx);
    goto v7;
}

void fun_f9(int64_t rdi) {
    int64_t v2;

    goto v2;
}

int32_t fun_23b();

void fun_28a();

int32_t fun_2bf();

int32_t fun_312();

int32_t fun_364();

int32_t fun_3ba();

void fun_3f5();

int32_t fun_40f();

void fun_20d() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t v61;

    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("subss xmm0, xmm1");
    __asm__("movss [rbp-0xb0], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    fun_23b();
    __asm__("movaps xmm2, xmm0");
    __asm__("movss xmm0, [rbp-0xb0]");
    __asm__("movss xmm1, [rip+0x0]");
    __asm__("subss xmm1, xmm2");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0xa4], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    __asm__("movss [rbp-0xac], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    fun_28a();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0xac]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss xmm1, [rip+0x0]");
    __asm__("addss xmm0, xmm1");
    __asm__("movss [rbp-0xa8], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_2bf();
    __asm__("movss xmm1, [rbp-0xa8]");
    __asm__("movaps xmm2, xmm0");
    __asm__("movss xmm0, [rbp-0xa4]");
    __asm__("subss xmm1, xmm2");
    __asm__("divss xmm0, xmm1");
    __asm__("movss [rbp-0x64], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movss [rbp-0x78], xmm0");
    __asm__("movss [rbp-0x68], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movss [rbp-0xa0], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    fun_312();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0xa0]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss xmm1, [rbp-0xc]");
    __asm__("movss xmm2, [rip+0x0]");
    __asm__("subss xmm1, xmm2");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x7c], xmm0");
    __asm__("movss [rbp-0x6c], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movss [rbp-0x9c], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    fun_364();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x9c]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss xmm1, [rip+0x0]");
    __asm__("addss xmm1, [rbp-0xc]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x80], xmm0");
    __asm__("movss [rbp-0x70], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x98], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_3ba();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x98]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x84], xmm0");
    __asm__("movss [rbp-0x74], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm1, eax");
    __asm__("movss xmm0, [rip+0x0]");
    fun_3f5();
    __asm__("movss [rbp-0x88], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_40f();
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x8c], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x94], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x90], xmm0");
    *reinterpret_cast<int32_t*>(rbp1 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 52) < *reinterpret_cast<int32_t*>(rbp3 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x3c], xmm0");
        *reinterpret_cast<int32_t*>(rbp4 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp5 - 56) < *reinterpret_cast<int32_t*>(rbp6 - 8)) {
            __asm__("movss xmm0, [rbp-0x68]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x6c]");
            __asm__("mulss xmm1, [rbp-0x3c]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x3c], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp7 - 56) = *reinterpret_cast<int32_t*>(rbp8 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp9 - 52) = *reinterpret_cast<int32_t*>(rbp10 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp11 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp12 - 52) < *reinterpret_cast<int32_t*>(rbp13 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x4c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x50], xmm0");
        *reinterpret_cast<int32_t*>(rbp14 - 56) = *reinterpret_cast<int32_t*>(rbp15 - 8) - 1;
        while (*reinterpret_cast<int32_t*>(rbp16 - 56) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x70]");
            __asm__("movss xmm2, [rbp-0x4c]");
            __asm__("movss xmm1, [rbp-0x74]");
            __asm__("mulss xmm1, [rbp-0x50]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x4c]");
            __asm__("movss [rbp-0x50], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x4c], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp17 - 56) = *reinterpret_cast<int32_t*>(rbp18 - 56) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp19 - 52) = *reinterpret_cast<int32_t*>(rbp20 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp21 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp22 - 52) < *reinterpret_cast<int32_t*>(rbp23 - 4)) {
        *reinterpret_cast<int32_t*>(rbp24 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp25 - 56) < *reinterpret_cast<int32_t*>(rbp26 - 8)) {
            __asm__("movss xmm0, [rbp-0x90]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp27 - 56) = *reinterpret_cast<int32_t*>(rbp28 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp29 - 52) = *reinterpret_cast<int32_t*>(rbp30 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp31 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp32 - 56) < *reinterpret_cast<int32_t*>(rbp33 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x40], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        *reinterpret_cast<int32_t*>(rbp34 - 52) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp35 - 52) < *reinterpret_cast<int32_t*>(rbp36 - 4)) {
            __asm__("movss xmm0, [rbp-0x78]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x7c]");
            __asm__("mulss xmm1, [rbp-0x40]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x40], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp37 - 52) = *reinterpret_cast<int32_t*>(rbp38 - 52) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp39 - 56) = *reinterpret_cast<int32_t*>(rbp40 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp41 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp42 - 56) < *reinterpret_cast<int32_t*>(rbp43 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x54], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x58], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        *reinterpret_cast<int32_t*>(rbp44 - 52) = *reinterpret_cast<int32_t*>(rbp45 - 4) - 1;
        while (*reinterpret_cast<int32_t*>(rbp46 - 52) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x80]");
            __asm__("movss xmm2, [rbp-0x54]");
            __asm__("movss xmm1, [rbp-0x84]");
            __asm__("mulss xmm1, [rbp-0x58]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x54]");
            __asm__("movss [rbp-0x58], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x54], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp47 - 52) = *reinterpret_cast<int32_t*>(rbp48 - 52) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp49 - 56) = *reinterpret_cast<int32_t*>(rbp50 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp51 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp52 - 52) < *reinterpret_cast<int32_t*>(rbp53 - 4)) {
        *reinterpret_cast<int32_t*>(rbp54 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp55 - 56) < *reinterpret_cast<int32_t*>(rbp56 - 8)) {
            __asm__("movss xmm0, [rbp-0x94]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp57 - 56) = *reinterpret_cast<int32_t*>(rbp58 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp59 - 52) = *reinterpret_cast<int32_t*>(rbp60 - 52) + 1;
    }
    goto v61;
}

void fun_b41(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int32_t fun_23b() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t v61;

    __asm__("movaps xmm2, xmm0");
    __asm__("movss xmm0, [rbp-0xb0]");
    __asm__("movss xmm1, [rip+0x0]");
    __asm__("subss xmm1, xmm2");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0xa4], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    __asm__("movss [rbp-0xac], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    fun_28a();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0xac]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss xmm1, [rip+0x0]");
    __asm__("addss xmm0, xmm1");
    __asm__("movss [rbp-0xa8], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_2bf();
    __asm__("movss xmm1, [rbp-0xa8]");
    __asm__("movaps xmm2, xmm0");
    __asm__("movss xmm0, [rbp-0xa4]");
    __asm__("subss xmm1, xmm2");
    __asm__("divss xmm0, xmm1");
    __asm__("movss [rbp-0x64], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movss [rbp-0x78], xmm0");
    __asm__("movss [rbp-0x68], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movss [rbp-0xa0], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    fun_312();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0xa0]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss xmm1, [rbp-0xc]");
    __asm__("movss xmm2, [rip+0x0]");
    __asm__("subss xmm1, xmm2");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x7c], xmm0");
    __asm__("movss [rbp-0x6c], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movss [rbp-0x9c], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    fun_364();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x9c]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss xmm1, [rip+0x0]");
    __asm__("addss xmm1, [rbp-0xc]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x80], xmm0");
    __asm__("movss [rbp-0x70], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x98], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_3ba();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x98]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x84], xmm0");
    __asm__("movss [rbp-0x74], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm1, eax");
    __asm__("movss xmm0, [rip+0x0]");
    fun_3f5();
    __asm__("movss [rbp-0x88], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_40f();
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x8c], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x94], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x90], xmm0");
    *reinterpret_cast<int32_t*>(rbp1 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 52) < *reinterpret_cast<int32_t*>(rbp3 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x3c], xmm0");
        *reinterpret_cast<int32_t*>(rbp4 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp5 - 56) < *reinterpret_cast<int32_t*>(rbp6 - 8)) {
            __asm__("movss xmm0, [rbp-0x68]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x6c]");
            __asm__("mulss xmm1, [rbp-0x3c]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x3c], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp7 - 56) = *reinterpret_cast<int32_t*>(rbp8 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp9 - 52) = *reinterpret_cast<int32_t*>(rbp10 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp11 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp12 - 52) < *reinterpret_cast<int32_t*>(rbp13 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x4c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x50], xmm0");
        *reinterpret_cast<int32_t*>(rbp14 - 56) = *reinterpret_cast<int32_t*>(rbp15 - 8) - 1;
        while (*reinterpret_cast<int32_t*>(rbp16 - 56) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x70]");
            __asm__("movss xmm2, [rbp-0x4c]");
            __asm__("movss xmm1, [rbp-0x74]");
            __asm__("mulss xmm1, [rbp-0x50]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x4c]");
            __asm__("movss [rbp-0x50], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x4c], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp17 - 56) = *reinterpret_cast<int32_t*>(rbp18 - 56) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp19 - 52) = *reinterpret_cast<int32_t*>(rbp20 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp21 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp22 - 52) < *reinterpret_cast<int32_t*>(rbp23 - 4)) {
        *reinterpret_cast<int32_t*>(rbp24 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp25 - 56) < *reinterpret_cast<int32_t*>(rbp26 - 8)) {
            __asm__("movss xmm0, [rbp-0x90]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp27 - 56) = *reinterpret_cast<int32_t*>(rbp28 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp29 - 52) = *reinterpret_cast<int32_t*>(rbp30 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp31 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp32 - 56) < *reinterpret_cast<int32_t*>(rbp33 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x40], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        *reinterpret_cast<int32_t*>(rbp34 - 52) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp35 - 52) < *reinterpret_cast<int32_t*>(rbp36 - 4)) {
            __asm__("movss xmm0, [rbp-0x78]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x7c]");
            __asm__("mulss xmm1, [rbp-0x40]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x40], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp37 - 52) = *reinterpret_cast<int32_t*>(rbp38 - 52) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp39 - 56) = *reinterpret_cast<int32_t*>(rbp40 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp41 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp42 - 56) < *reinterpret_cast<int32_t*>(rbp43 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x54], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x58], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        *reinterpret_cast<int32_t*>(rbp44 - 52) = *reinterpret_cast<int32_t*>(rbp45 - 4) - 1;
        while (*reinterpret_cast<int32_t*>(rbp46 - 52) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x80]");
            __asm__("movss xmm2, [rbp-0x54]");
            __asm__("movss xmm1, [rbp-0x84]");
            __asm__("mulss xmm1, [rbp-0x58]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x54]");
            __asm__("movss [rbp-0x58], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x54], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp47 - 52) = *reinterpret_cast<int32_t*>(rbp48 - 52) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp49 - 56) = *reinterpret_cast<int32_t*>(rbp50 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp51 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp52 - 52) < *reinterpret_cast<int32_t*>(rbp53 - 4)) {
        *reinterpret_cast<int32_t*>(rbp54 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp55 - 56) < *reinterpret_cast<int32_t*>(rbp56 - 8)) {
            __asm__("movss xmm0, [rbp-0x94]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp57 - 56) = *reinterpret_cast<int32_t*>(rbp58 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp59 - 52) = *reinterpret_cast<int32_t*>(rbp60 - 52) + 1;
    }
    goto v61;
}

void fun_28a() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t v61;

    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0xac]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss xmm1, [rip+0x0]");
    __asm__("addss xmm0, xmm1");
    __asm__("movss [rbp-0xa8], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_2bf();
    __asm__("movss xmm1, [rbp-0xa8]");
    __asm__("movaps xmm2, xmm0");
    __asm__("movss xmm0, [rbp-0xa4]");
    __asm__("subss xmm1, xmm2");
    __asm__("divss xmm0, xmm1");
    __asm__("movss [rbp-0x64], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movss [rbp-0x78], xmm0");
    __asm__("movss [rbp-0x68], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movss [rbp-0xa0], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    fun_312();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0xa0]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss xmm1, [rbp-0xc]");
    __asm__("movss xmm2, [rip+0x0]");
    __asm__("subss xmm1, xmm2");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x7c], xmm0");
    __asm__("movss [rbp-0x6c], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movss [rbp-0x9c], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    fun_364();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x9c]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss xmm1, [rip+0x0]");
    __asm__("addss xmm1, [rbp-0xc]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x80], xmm0");
    __asm__("movss [rbp-0x70], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x98], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_3ba();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x98]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x84], xmm0");
    __asm__("movss [rbp-0x74], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm1, eax");
    __asm__("movss xmm0, [rip+0x0]");
    fun_3f5();
    __asm__("movss [rbp-0x88], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_40f();
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x8c], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x94], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x90], xmm0");
    *reinterpret_cast<int32_t*>(rbp1 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 52) < *reinterpret_cast<int32_t*>(rbp3 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x3c], xmm0");
        *reinterpret_cast<int32_t*>(rbp4 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp5 - 56) < *reinterpret_cast<int32_t*>(rbp6 - 8)) {
            __asm__("movss xmm0, [rbp-0x68]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x6c]");
            __asm__("mulss xmm1, [rbp-0x3c]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x3c], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp7 - 56) = *reinterpret_cast<int32_t*>(rbp8 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp9 - 52) = *reinterpret_cast<int32_t*>(rbp10 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp11 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp12 - 52) < *reinterpret_cast<int32_t*>(rbp13 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x4c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x50], xmm0");
        *reinterpret_cast<int32_t*>(rbp14 - 56) = *reinterpret_cast<int32_t*>(rbp15 - 8) - 1;
        while (*reinterpret_cast<int32_t*>(rbp16 - 56) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x70]");
            __asm__("movss xmm2, [rbp-0x4c]");
            __asm__("movss xmm1, [rbp-0x74]");
            __asm__("mulss xmm1, [rbp-0x50]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x4c]");
            __asm__("movss [rbp-0x50], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x4c], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp17 - 56) = *reinterpret_cast<int32_t*>(rbp18 - 56) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp19 - 52) = *reinterpret_cast<int32_t*>(rbp20 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp21 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp22 - 52) < *reinterpret_cast<int32_t*>(rbp23 - 4)) {
        *reinterpret_cast<int32_t*>(rbp24 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp25 - 56) < *reinterpret_cast<int32_t*>(rbp26 - 8)) {
            __asm__("movss xmm0, [rbp-0x90]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp27 - 56) = *reinterpret_cast<int32_t*>(rbp28 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp29 - 52) = *reinterpret_cast<int32_t*>(rbp30 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp31 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp32 - 56) < *reinterpret_cast<int32_t*>(rbp33 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x40], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        *reinterpret_cast<int32_t*>(rbp34 - 52) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp35 - 52) < *reinterpret_cast<int32_t*>(rbp36 - 4)) {
            __asm__("movss xmm0, [rbp-0x78]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x7c]");
            __asm__("mulss xmm1, [rbp-0x40]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x40], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp37 - 52) = *reinterpret_cast<int32_t*>(rbp38 - 52) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp39 - 56) = *reinterpret_cast<int32_t*>(rbp40 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp41 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp42 - 56) < *reinterpret_cast<int32_t*>(rbp43 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x54], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x58], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        *reinterpret_cast<int32_t*>(rbp44 - 52) = *reinterpret_cast<int32_t*>(rbp45 - 4) - 1;
        while (*reinterpret_cast<int32_t*>(rbp46 - 52) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x80]");
            __asm__("movss xmm2, [rbp-0x54]");
            __asm__("movss xmm1, [rbp-0x84]");
            __asm__("mulss xmm1, [rbp-0x58]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x54]");
            __asm__("movss [rbp-0x58], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x54], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp47 - 52) = *reinterpret_cast<int32_t*>(rbp48 - 52) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp49 - 56) = *reinterpret_cast<int32_t*>(rbp50 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp51 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp52 - 52) < *reinterpret_cast<int32_t*>(rbp53 - 4)) {
        *reinterpret_cast<int32_t*>(rbp54 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp55 - 56) < *reinterpret_cast<int32_t*>(rbp56 - 8)) {
            __asm__("movss xmm0, [rbp-0x94]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp57 - 56) = *reinterpret_cast<int32_t*>(rbp58 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp59 - 52) = *reinterpret_cast<int32_t*>(rbp60 - 52) + 1;
    }
    goto v61;
}

int32_t fun_2bf() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t v61;

    __asm__("movss xmm1, [rbp-0xa8]");
    __asm__("movaps xmm2, xmm0");
    __asm__("movss xmm0, [rbp-0xa4]");
    __asm__("subss xmm1, xmm2");
    __asm__("divss xmm0, xmm1");
    __asm__("movss [rbp-0x64], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movss [rbp-0x78], xmm0");
    __asm__("movss [rbp-0x68], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movss [rbp-0xa0], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    fun_312();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0xa0]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss xmm1, [rbp-0xc]");
    __asm__("movss xmm2, [rip+0x0]");
    __asm__("subss xmm1, xmm2");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x7c], xmm0");
    __asm__("movss [rbp-0x6c], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movss [rbp-0x9c], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    fun_364();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x9c]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss xmm1, [rip+0x0]");
    __asm__("addss xmm1, [rbp-0xc]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x80], xmm0");
    __asm__("movss [rbp-0x70], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x98], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_3ba();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x98]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x84], xmm0");
    __asm__("movss [rbp-0x74], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm1, eax");
    __asm__("movss xmm0, [rip+0x0]");
    fun_3f5();
    __asm__("movss [rbp-0x88], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_40f();
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x8c], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x94], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x90], xmm0");
    *reinterpret_cast<int32_t*>(rbp1 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 52) < *reinterpret_cast<int32_t*>(rbp3 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x3c], xmm0");
        *reinterpret_cast<int32_t*>(rbp4 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp5 - 56) < *reinterpret_cast<int32_t*>(rbp6 - 8)) {
            __asm__("movss xmm0, [rbp-0x68]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x6c]");
            __asm__("mulss xmm1, [rbp-0x3c]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x3c], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp7 - 56) = *reinterpret_cast<int32_t*>(rbp8 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp9 - 52) = *reinterpret_cast<int32_t*>(rbp10 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp11 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp12 - 52) < *reinterpret_cast<int32_t*>(rbp13 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x4c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x50], xmm0");
        *reinterpret_cast<int32_t*>(rbp14 - 56) = *reinterpret_cast<int32_t*>(rbp15 - 8) - 1;
        while (*reinterpret_cast<int32_t*>(rbp16 - 56) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x70]");
            __asm__("movss xmm2, [rbp-0x4c]");
            __asm__("movss xmm1, [rbp-0x74]");
            __asm__("mulss xmm1, [rbp-0x50]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x4c]");
            __asm__("movss [rbp-0x50], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x4c], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp17 - 56) = *reinterpret_cast<int32_t*>(rbp18 - 56) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp19 - 52) = *reinterpret_cast<int32_t*>(rbp20 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp21 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp22 - 52) < *reinterpret_cast<int32_t*>(rbp23 - 4)) {
        *reinterpret_cast<int32_t*>(rbp24 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp25 - 56) < *reinterpret_cast<int32_t*>(rbp26 - 8)) {
            __asm__("movss xmm0, [rbp-0x90]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp27 - 56) = *reinterpret_cast<int32_t*>(rbp28 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp29 - 52) = *reinterpret_cast<int32_t*>(rbp30 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp31 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp32 - 56) < *reinterpret_cast<int32_t*>(rbp33 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x40], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        *reinterpret_cast<int32_t*>(rbp34 - 52) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp35 - 52) < *reinterpret_cast<int32_t*>(rbp36 - 4)) {
            __asm__("movss xmm0, [rbp-0x78]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x7c]");
            __asm__("mulss xmm1, [rbp-0x40]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x40], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp37 - 52) = *reinterpret_cast<int32_t*>(rbp38 - 52) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp39 - 56) = *reinterpret_cast<int32_t*>(rbp40 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp41 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp42 - 56) < *reinterpret_cast<int32_t*>(rbp43 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x54], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x58], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        *reinterpret_cast<int32_t*>(rbp44 - 52) = *reinterpret_cast<int32_t*>(rbp45 - 4) - 1;
        while (*reinterpret_cast<int32_t*>(rbp46 - 52) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x80]");
            __asm__("movss xmm2, [rbp-0x54]");
            __asm__("movss xmm1, [rbp-0x84]");
            __asm__("mulss xmm1, [rbp-0x58]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x54]");
            __asm__("movss [rbp-0x58], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x54], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp47 - 52) = *reinterpret_cast<int32_t*>(rbp48 - 52) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp49 - 56) = *reinterpret_cast<int32_t*>(rbp50 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp51 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp52 - 52) < *reinterpret_cast<int32_t*>(rbp53 - 4)) {
        *reinterpret_cast<int32_t*>(rbp54 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp55 - 56) < *reinterpret_cast<int32_t*>(rbp56 - 8)) {
            __asm__("movss xmm0, [rbp-0x94]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp57 - 56) = *reinterpret_cast<int32_t*>(rbp58 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp59 - 52) = *reinterpret_cast<int32_t*>(rbp60 - 52) + 1;
    }
    goto v61;
}

int32_t fun_312() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t v61;

    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0xa0]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss xmm1, [rbp-0xc]");
    __asm__("movss xmm2, [rip+0x0]");
    __asm__("subss xmm1, xmm2");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x7c], xmm0");
    __asm__("movss [rbp-0x6c], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movss [rbp-0x9c], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    fun_364();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x9c]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss xmm1, [rip+0x0]");
    __asm__("addss xmm1, [rbp-0xc]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x80], xmm0");
    __asm__("movss [rbp-0x70], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x98], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_3ba();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x98]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x84], xmm0");
    __asm__("movss [rbp-0x74], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm1, eax");
    __asm__("movss xmm0, [rip+0x0]");
    fun_3f5();
    __asm__("movss [rbp-0x88], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_40f();
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x8c], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x94], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x90], xmm0");
    *reinterpret_cast<int32_t*>(rbp1 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 52) < *reinterpret_cast<int32_t*>(rbp3 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x3c], xmm0");
        *reinterpret_cast<int32_t*>(rbp4 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp5 - 56) < *reinterpret_cast<int32_t*>(rbp6 - 8)) {
            __asm__("movss xmm0, [rbp-0x68]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x6c]");
            __asm__("mulss xmm1, [rbp-0x3c]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x3c], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp7 - 56) = *reinterpret_cast<int32_t*>(rbp8 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp9 - 52) = *reinterpret_cast<int32_t*>(rbp10 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp11 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp12 - 52) < *reinterpret_cast<int32_t*>(rbp13 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x4c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x50], xmm0");
        *reinterpret_cast<int32_t*>(rbp14 - 56) = *reinterpret_cast<int32_t*>(rbp15 - 8) - 1;
        while (*reinterpret_cast<int32_t*>(rbp16 - 56) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x70]");
            __asm__("movss xmm2, [rbp-0x4c]");
            __asm__("movss xmm1, [rbp-0x74]");
            __asm__("mulss xmm1, [rbp-0x50]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x4c]");
            __asm__("movss [rbp-0x50], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x4c], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp17 - 56) = *reinterpret_cast<int32_t*>(rbp18 - 56) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp19 - 52) = *reinterpret_cast<int32_t*>(rbp20 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp21 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp22 - 52) < *reinterpret_cast<int32_t*>(rbp23 - 4)) {
        *reinterpret_cast<int32_t*>(rbp24 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp25 - 56) < *reinterpret_cast<int32_t*>(rbp26 - 8)) {
            __asm__("movss xmm0, [rbp-0x90]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp27 - 56) = *reinterpret_cast<int32_t*>(rbp28 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp29 - 52) = *reinterpret_cast<int32_t*>(rbp30 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp31 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp32 - 56) < *reinterpret_cast<int32_t*>(rbp33 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x40], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        *reinterpret_cast<int32_t*>(rbp34 - 52) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp35 - 52) < *reinterpret_cast<int32_t*>(rbp36 - 4)) {
            __asm__("movss xmm0, [rbp-0x78]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x7c]");
            __asm__("mulss xmm1, [rbp-0x40]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x40], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp37 - 52) = *reinterpret_cast<int32_t*>(rbp38 - 52) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp39 - 56) = *reinterpret_cast<int32_t*>(rbp40 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp41 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp42 - 56) < *reinterpret_cast<int32_t*>(rbp43 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x54], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x58], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        *reinterpret_cast<int32_t*>(rbp44 - 52) = *reinterpret_cast<int32_t*>(rbp45 - 4) - 1;
        while (*reinterpret_cast<int32_t*>(rbp46 - 52) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x80]");
            __asm__("movss xmm2, [rbp-0x54]");
            __asm__("movss xmm1, [rbp-0x84]");
            __asm__("mulss xmm1, [rbp-0x58]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x54]");
            __asm__("movss [rbp-0x58], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x54], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp47 - 52) = *reinterpret_cast<int32_t*>(rbp48 - 52) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp49 - 56) = *reinterpret_cast<int32_t*>(rbp50 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp51 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp52 - 52) < *reinterpret_cast<int32_t*>(rbp53 - 4)) {
        *reinterpret_cast<int32_t*>(rbp54 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp55 - 56) < *reinterpret_cast<int32_t*>(rbp56 - 8)) {
            __asm__("movss xmm0, [rbp-0x94]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp57 - 56) = *reinterpret_cast<int32_t*>(rbp58 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp59 - 52) = *reinterpret_cast<int32_t*>(rbp60 - 52) + 1;
    }
    goto v61;
}

int32_t fun_364() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t v61;

    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x9c]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss xmm1, [rip+0x0]");
    __asm__("addss xmm1, [rbp-0xc]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x80], xmm0");
    __asm__("movss [rbp-0x70], xmm0");
    __asm__("movss xmm0, [rbp-0x64]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x98], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_3ba();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x98]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x84], xmm0");
    __asm__("movss [rbp-0x74], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm1, eax");
    __asm__("movss xmm0, [rip+0x0]");
    fun_3f5();
    __asm__("movss [rbp-0x88], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_40f();
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x8c], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x94], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x90], xmm0");
    *reinterpret_cast<int32_t*>(rbp1 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 52) < *reinterpret_cast<int32_t*>(rbp3 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x3c], xmm0");
        *reinterpret_cast<int32_t*>(rbp4 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp5 - 56) < *reinterpret_cast<int32_t*>(rbp6 - 8)) {
            __asm__("movss xmm0, [rbp-0x68]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x6c]");
            __asm__("mulss xmm1, [rbp-0x3c]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x3c], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp7 - 56) = *reinterpret_cast<int32_t*>(rbp8 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp9 - 52) = *reinterpret_cast<int32_t*>(rbp10 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp11 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp12 - 52) < *reinterpret_cast<int32_t*>(rbp13 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x4c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x50], xmm0");
        *reinterpret_cast<int32_t*>(rbp14 - 56) = *reinterpret_cast<int32_t*>(rbp15 - 8) - 1;
        while (*reinterpret_cast<int32_t*>(rbp16 - 56) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x70]");
            __asm__("movss xmm2, [rbp-0x4c]");
            __asm__("movss xmm1, [rbp-0x74]");
            __asm__("mulss xmm1, [rbp-0x50]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x4c]");
            __asm__("movss [rbp-0x50], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x4c], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp17 - 56) = *reinterpret_cast<int32_t*>(rbp18 - 56) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp19 - 52) = *reinterpret_cast<int32_t*>(rbp20 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp21 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp22 - 52) < *reinterpret_cast<int32_t*>(rbp23 - 4)) {
        *reinterpret_cast<int32_t*>(rbp24 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp25 - 56) < *reinterpret_cast<int32_t*>(rbp26 - 8)) {
            __asm__("movss xmm0, [rbp-0x90]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp27 - 56) = *reinterpret_cast<int32_t*>(rbp28 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp29 - 52) = *reinterpret_cast<int32_t*>(rbp30 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp31 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp32 - 56) < *reinterpret_cast<int32_t*>(rbp33 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x40], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        *reinterpret_cast<int32_t*>(rbp34 - 52) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp35 - 52) < *reinterpret_cast<int32_t*>(rbp36 - 4)) {
            __asm__("movss xmm0, [rbp-0x78]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x7c]");
            __asm__("mulss xmm1, [rbp-0x40]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x40], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp37 - 52) = *reinterpret_cast<int32_t*>(rbp38 - 52) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp39 - 56) = *reinterpret_cast<int32_t*>(rbp40 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp41 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp42 - 56) < *reinterpret_cast<int32_t*>(rbp43 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x54], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x58], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        *reinterpret_cast<int32_t*>(rbp44 - 52) = *reinterpret_cast<int32_t*>(rbp45 - 4) - 1;
        while (*reinterpret_cast<int32_t*>(rbp46 - 52) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x80]");
            __asm__("movss xmm2, [rbp-0x54]");
            __asm__("movss xmm1, [rbp-0x84]");
            __asm__("mulss xmm1, [rbp-0x58]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x54]");
            __asm__("movss [rbp-0x58], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x54], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp47 - 52) = *reinterpret_cast<int32_t*>(rbp48 - 52) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp49 - 56) = *reinterpret_cast<int32_t*>(rbp50 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp51 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp52 - 52) < *reinterpret_cast<int32_t*>(rbp53 - 4)) {
        *reinterpret_cast<int32_t*>(rbp54 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp55 - 56) < *reinterpret_cast<int32_t*>(rbp56 - 8)) {
            __asm__("movss xmm0, [rbp-0x94]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp57 - 56) = *reinterpret_cast<int32_t*>(rbp58 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp59 - 52) = *reinterpret_cast<int32_t*>(rbp60 - 52) + 1;
    }
    goto v61;
}

int32_t fun_3ba() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t v61;

    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x98]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x84], xmm0");
    __asm__("movss [rbp-0x74], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm1, eax");
    __asm__("movss xmm0, [rip+0x0]");
    fun_3f5();
    __asm__("movss [rbp-0x88], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_40f();
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x8c], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x94], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x90], xmm0");
    *reinterpret_cast<int32_t*>(rbp1 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 52) < *reinterpret_cast<int32_t*>(rbp3 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x3c], xmm0");
        *reinterpret_cast<int32_t*>(rbp4 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp5 - 56) < *reinterpret_cast<int32_t*>(rbp6 - 8)) {
            __asm__("movss xmm0, [rbp-0x68]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x6c]");
            __asm__("mulss xmm1, [rbp-0x3c]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x3c], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp7 - 56) = *reinterpret_cast<int32_t*>(rbp8 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp9 - 52) = *reinterpret_cast<int32_t*>(rbp10 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp11 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp12 - 52) < *reinterpret_cast<int32_t*>(rbp13 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x4c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x50], xmm0");
        *reinterpret_cast<int32_t*>(rbp14 - 56) = *reinterpret_cast<int32_t*>(rbp15 - 8) - 1;
        while (*reinterpret_cast<int32_t*>(rbp16 - 56) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x70]");
            __asm__("movss xmm2, [rbp-0x4c]");
            __asm__("movss xmm1, [rbp-0x74]");
            __asm__("mulss xmm1, [rbp-0x50]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x4c]");
            __asm__("movss [rbp-0x50], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x4c], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp17 - 56) = *reinterpret_cast<int32_t*>(rbp18 - 56) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp19 - 52) = *reinterpret_cast<int32_t*>(rbp20 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp21 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp22 - 52) < *reinterpret_cast<int32_t*>(rbp23 - 4)) {
        *reinterpret_cast<int32_t*>(rbp24 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp25 - 56) < *reinterpret_cast<int32_t*>(rbp26 - 8)) {
            __asm__("movss xmm0, [rbp-0x90]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp27 - 56) = *reinterpret_cast<int32_t*>(rbp28 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp29 - 52) = *reinterpret_cast<int32_t*>(rbp30 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp31 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp32 - 56) < *reinterpret_cast<int32_t*>(rbp33 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x40], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        *reinterpret_cast<int32_t*>(rbp34 - 52) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp35 - 52) < *reinterpret_cast<int32_t*>(rbp36 - 4)) {
            __asm__("movss xmm0, [rbp-0x78]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x7c]");
            __asm__("mulss xmm1, [rbp-0x40]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x40], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp37 - 52) = *reinterpret_cast<int32_t*>(rbp38 - 52) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp39 - 56) = *reinterpret_cast<int32_t*>(rbp40 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp41 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp42 - 56) < *reinterpret_cast<int32_t*>(rbp43 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x54], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x58], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        *reinterpret_cast<int32_t*>(rbp44 - 52) = *reinterpret_cast<int32_t*>(rbp45 - 4) - 1;
        while (*reinterpret_cast<int32_t*>(rbp46 - 52) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x80]");
            __asm__("movss xmm2, [rbp-0x54]");
            __asm__("movss xmm1, [rbp-0x84]");
            __asm__("mulss xmm1, [rbp-0x58]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x54]");
            __asm__("movss [rbp-0x58], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x54], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp47 - 52) = *reinterpret_cast<int32_t*>(rbp48 - 52) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp49 - 56) = *reinterpret_cast<int32_t*>(rbp50 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp51 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp52 - 52) < *reinterpret_cast<int32_t*>(rbp53 - 4)) {
        *reinterpret_cast<int32_t*>(rbp54 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp55 - 56) < *reinterpret_cast<int32_t*>(rbp56 - 8)) {
            __asm__("movss xmm0, [rbp-0x94]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp57 - 56) = *reinterpret_cast<int32_t*>(rbp58 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp59 - 52) = *reinterpret_cast<int32_t*>(rbp60 - 52) + 1;
    }
    goto v61;
}

void fun_3f5() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t v61;

    __asm__("movss [rbp-0x88], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_40f();
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x8c], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x94], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x90], xmm0");
    *reinterpret_cast<int32_t*>(rbp1 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 52) < *reinterpret_cast<int32_t*>(rbp3 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x3c], xmm0");
        *reinterpret_cast<int32_t*>(rbp4 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp5 - 56) < *reinterpret_cast<int32_t*>(rbp6 - 8)) {
            __asm__("movss xmm0, [rbp-0x68]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x6c]");
            __asm__("mulss xmm1, [rbp-0x3c]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x3c], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp7 - 56) = *reinterpret_cast<int32_t*>(rbp8 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp9 - 52) = *reinterpret_cast<int32_t*>(rbp10 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp11 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp12 - 52) < *reinterpret_cast<int32_t*>(rbp13 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x4c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x50], xmm0");
        *reinterpret_cast<int32_t*>(rbp14 - 56) = *reinterpret_cast<int32_t*>(rbp15 - 8) - 1;
        while (*reinterpret_cast<int32_t*>(rbp16 - 56) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x70]");
            __asm__("movss xmm2, [rbp-0x4c]");
            __asm__("movss xmm1, [rbp-0x74]");
            __asm__("mulss xmm1, [rbp-0x50]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x4c]");
            __asm__("movss [rbp-0x50], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x4c], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp17 - 56) = *reinterpret_cast<int32_t*>(rbp18 - 56) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp19 - 52) = *reinterpret_cast<int32_t*>(rbp20 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp21 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp22 - 52) < *reinterpret_cast<int32_t*>(rbp23 - 4)) {
        *reinterpret_cast<int32_t*>(rbp24 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp25 - 56) < *reinterpret_cast<int32_t*>(rbp26 - 8)) {
            __asm__("movss xmm0, [rbp-0x90]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp27 - 56) = *reinterpret_cast<int32_t*>(rbp28 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp29 - 52) = *reinterpret_cast<int32_t*>(rbp30 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp31 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp32 - 56) < *reinterpret_cast<int32_t*>(rbp33 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x40], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        *reinterpret_cast<int32_t*>(rbp34 - 52) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp35 - 52) < *reinterpret_cast<int32_t*>(rbp36 - 4)) {
            __asm__("movss xmm0, [rbp-0x78]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x7c]");
            __asm__("mulss xmm1, [rbp-0x40]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x40], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp37 - 52) = *reinterpret_cast<int32_t*>(rbp38 - 52) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp39 - 56) = *reinterpret_cast<int32_t*>(rbp40 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp41 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp42 - 56) < *reinterpret_cast<int32_t*>(rbp43 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x54], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x58], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        *reinterpret_cast<int32_t*>(rbp44 - 52) = *reinterpret_cast<int32_t*>(rbp45 - 4) - 1;
        while (*reinterpret_cast<int32_t*>(rbp46 - 52) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x80]");
            __asm__("movss xmm2, [rbp-0x54]");
            __asm__("movss xmm1, [rbp-0x84]");
            __asm__("mulss xmm1, [rbp-0x58]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x54]");
            __asm__("movss [rbp-0x58], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x54], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp47 - 52) = *reinterpret_cast<int32_t*>(rbp48 - 52) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp49 - 56) = *reinterpret_cast<int32_t*>(rbp50 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp51 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp52 - 52) < *reinterpret_cast<int32_t*>(rbp53 - 4)) {
        *reinterpret_cast<int32_t*>(rbp54 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp55 - 56) < *reinterpret_cast<int32_t*>(rbp56 - 8)) {
            __asm__("movss xmm0, [rbp-0x94]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp57 - 56) = *reinterpret_cast<int32_t*>(rbp58 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp59 - 52) = *reinterpret_cast<int32_t*>(rbp60 - 52) + 1;
    }
    goto v61;
}

int32_t fun_40f() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t v61;

    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    __asm__("movss [rbp-0x8c], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x94], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rbp-0x90], xmm0");
    *reinterpret_cast<int32_t*>(rbp1 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 52) < *reinterpret_cast<int32_t*>(rbp3 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x3c], xmm0");
        *reinterpret_cast<int32_t*>(rbp4 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp5 - 56) < *reinterpret_cast<int32_t*>(rbp6 - 8)) {
            __asm__("movss xmm0, [rbp-0x68]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x6c]");
            __asm__("mulss xmm1, [rbp-0x3c]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x3c], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp7 - 56) = *reinterpret_cast<int32_t*>(rbp8 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp9 - 52) = *reinterpret_cast<int32_t*>(rbp10 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp11 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp12 - 52) < *reinterpret_cast<int32_t*>(rbp13 - 4)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x4c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x50], xmm0");
        *reinterpret_cast<int32_t*>(rbp14 - 56) = *reinterpret_cast<int32_t*>(rbp15 - 8) - 1;
        while (*reinterpret_cast<int32_t*>(rbp16 - 56) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x70]");
            __asm__("movss xmm2, [rbp-0x4c]");
            __asm__("movss xmm1, [rbp-0x74]");
            __asm__("mulss xmm1, [rbp-0x50]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x4c]");
            __asm__("movss [rbp-0x50], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x4c], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp17 - 56) = *reinterpret_cast<int32_t*>(rbp18 - 56) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp19 - 52) = *reinterpret_cast<int32_t*>(rbp20 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp21 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp22 - 52) < *reinterpret_cast<int32_t*>(rbp23 - 4)) {
        *reinterpret_cast<int32_t*>(rbp24 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp25 - 56) < *reinterpret_cast<int32_t*>(rbp26 - 8)) {
            __asm__("movss xmm0, [rbp-0x90]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp27 - 56) = *reinterpret_cast<int32_t*>(rbp28 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp29 - 52) = *reinterpret_cast<int32_t*>(rbp30 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp31 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp32 - 56) < *reinterpret_cast<int32_t*>(rbp33 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x40], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x44], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x48], xmm0");
        *reinterpret_cast<int32_t*>(rbp34 - 52) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp35 - 52) < *reinterpret_cast<int32_t*>(rbp36 - 4)) {
            __asm__("movss xmm0, [rbp-0x78]");
            __asm__("movss xmm2, [rax+rcx*4]");
            __asm__("movss xmm1, [rbp-0x7c]");
            __asm__("mulss xmm1, [rbp-0x40]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x44]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x48]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x40], xmm0");
            __asm__("movss xmm0, [rbp-0x44]");
            __asm__("movss [rbp-0x48], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x44], xmm0");
            *reinterpret_cast<int32_t*>(rbp37 - 52) = *reinterpret_cast<int32_t*>(rbp38 - 52) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp39 - 56) = *reinterpret_cast<int32_t*>(rbp40 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp41 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp42 - 56) < *reinterpret_cast<int32_t*>(rbp43 - 8)) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x54], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x58], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x5c], xmm0");
        __asm__("xorps xmm0, xmm0");
        __asm__("movss [rbp-0x60], xmm0");
        *reinterpret_cast<int32_t*>(rbp44 - 52) = *reinterpret_cast<int32_t*>(rbp45 - 4) - 1;
        while (*reinterpret_cast<int32_t*>(rbp46 - 52) >= reinterpret_cast<int32_t>(fprintf)) {
            __asm__("movss xmm0, [rbp-0x80]");
            __asm__("movss xmm2, [rbp-0x54]");
            __asm__("movss xmm1, [rbp-0x84]");
            __asm__("mulss xmm1, [rbp-0x58]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss xmm1, [rbp-0x88]");
            __asm__("movss xmm2, [rbp-0x5c]");
            __asm__("mulss xmm1, xmm2");
            __asm__("addss xmm1, xmm0");
            __asm__("movss xmm0, [rbp-0x8c]");
            __asm__("movss xmm2, [rbp-0x60]");
            __asm__("mulss xmm0, xmm2");
            __asm__("addss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            __asm__("movss xmm0, [rbp-0x54]");
            __asm__("movss [rbp-0x58], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x54], xmm0");
            __asm__("movss xmm0, [rbp-0x5c]");
            __asm__("movss [rbp-0x60], xmm0");
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("movss [rbp-0x5c], xmm0");
            *reinterpret_cast<int32_t*>(rbp47 - 52) = *reinterpret_cast<int32_t*>(rbp48 - 52) - 1;
        }
        *reinterpret_cast<int32_t*>(rbp49 - 56) = *reinterpret_cast<int32_t*>(rbp50 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp51 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp52 - 52) < *reinterpret_cast<int32_t*>(rbp53 - 4)) {
        *reinterpret_cast<int32_t*>(rbp54 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp55 - 56) < *reinterpret_cast<int32_t*>(rbp56 - 8)) {
            __asm__("movss xmm0, [rbp-0x94]");
            __asm__("movss xmm1, [rax+rcx*4]");
            __asm__("addss xmm1, [rax+rcx*4]");
            __asm__("mulss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            *reinterpret_cast<int32_t*>(rbp57 - 56) = *reinterpret_cast<int32_t*>(rbp58 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp59 - 52) = *reinterpret_cast<int32_t*>(rbp60 - 52) + 1;
    }
    goto v61;
}

void fprintf() {
}

void fun_c0() {
    int1_t zf1;
    int32_t edi2;
    int64_t rbp3;
    int64_t rsi4;
    int64_t rbp5;
    int64_t rdx6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;

    if (zf1) {
        edi2 = *reinterpret_cast<int32_t*>(rbp3 - 20);
        *reinterpret_cast<int32_t*>(&rsi4) = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fprintf);
        rdx6 = *reinterpret_cast<int64_t*>(rbp7 - 48);
        print_array(edi2, *reinterpret_cast<int32_t*>(&rsi4), rdx6);
    }
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 40);
    fun_de(rdi8, rsi4, rdx6);
}

void kernel_deriche(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    __asm__("movss [rbp-0xc], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm0, eax");
    fun_20d();
}

void init_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;

    v6 = edi;
    v7 = esi;
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("movss [rax], xmm0");
    v8 = reinterpret_cast<int32_t>(fprintf);
    while (v8 < v6) {
        v9 = reinterpret_cast<int32_t>(fprintf);
        while (v9 < v7) {
            __asm__("cdq ");
            __asm__("cvtsi2ss xmm0, edx");
            __asm__("movss xmm1, [rip+0x0]");
            __asm__("divss xmm0, xmm1");
            __asm__("movss [rax+rcx*4], xmm0");
            ++v9;
        }
        ++v8;
    }
    return;
}

