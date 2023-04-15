
int32_t fun_142();

int32_t fun_194();

int32_t fun_1ea();

void fun_225();

int32_t fun_23f();

void fprintf(int32_t edi, int32_t esi);

void fun_ef() {
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
    fun_142();
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
    fun_194();
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
    fun_1ea();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x98]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x84], xmm0");
    __asm__("movss [rbp-0x74], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm1, eax");
    __asm__("movss xmm0, [rip+0x0]");
    fun_225();
    __asm__("movss [rbp-0x88], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_23f();
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

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_91e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_927(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_930(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_939(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

int32_t fun_8fd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t eax8;
    int32_t edi9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t v21;

    if (reinterpret_cast<int1_t>(eax8 == fprintf)) {
        edi9 = *reinterpret_cast<int32_t*>(rbp10 - 20);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp11 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
        rdx = *reinterpret_cast<int64_t*>(rbp12 - 48);
        print_array(edi9, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx, r8, r9, __return_address());
    }
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 40);
    fun_91e(rdi13, rsi, rdx, rcx, r8, r9, __return_address());
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 48);
    fun_927(rdi15, rsi, rdx, rcx, r8, r9, __return_address());
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 56);
    fun_930(rdi17, rsi, rdx, rcx, r8, r9, __return_address());
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 64);
    fun_939(rdi19, rsi, rdx, rcx, r8, r9, __return_address());
    goto v21;
}

int64_t* ga29 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_a3a(int64_t rdi, int64_t rsi);

int64_t* ga41 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_a59(int64_t rdi, int64_t rsi, int64_t rdx);

int64_t* gaa1 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_ab2(int64_t rdi, int64_t rsi);

int64_t* gab9 = reinterpret_cast<int64_t*>(0x48f0458b48388b48);

void fun_ae9(int64_t rdi, int64_t rsi);

int64_t* gb11 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_b29(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* gb30 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_b41(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    int32_t v9;
    int64_t* rax10;
    int64_t rdi11;
    int64_t* rax12;
    int64_t rdi13;
    int32_t v14;
    int32_t v15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t* rax18;
    int64_t rdi19;
    int64_t* rax20;
    int64_t rdi21;
    int64_t* rax22;
    int64_t rdi23;

    v8 = edi;
    v9 = esi;
    rax10 = ga29;
    rdi11 = *rax10;
    fun_a3a(rdi11, 0xa33);
    rax12 = ga41;
    rdi13 = *rax12;
    fun_a59(rdi13, 0xa4b, 0xa52);
    v14 = reinterpret_cast<int32_t>(fprintf);
    while (v14 < v8) {
        v15 = reinterpret_cast<int32_t>(fprintf);
        while (v15 < v9) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v14 * v9 + v15) % 20 == fprintf)) {
                rax16 = gaa1;
                rdi17 = *rax16;
                fun_ab2(rdi17, 0xaab);
            }
            rax18 = gab9;
            rdi19 = *rax18;
            rcx = v15;
            __asm__("movss xmm0, [rax+rcx*4]");
            __asm__("cvtss2sd xmm0, xmm0");
            fun_ae9(rdi19, 0xae2);
            ++v15;
        }
        ++v14;
    }
    rax20 = gb11;
    rdi21 = *rax20;
    fun_b29(rdi21, 0xb1b, 0xb22, rcx);
    rax22 = gb30;
    rdi23 = *rax22;
    fun_b41(rdi23, 0xb3a, 0xb22, rcx);
    return;
}

void fun_91e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t v14;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 48);
    fun_927(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 56);
    fun_930(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 64);
    fun_939(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    goto v14;
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

int32_t fun_142() {
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
    fun_194();
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
    fun_1ea();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x98]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x84], xmm0");
    __asm__("movss [rbp-0x74], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm1, eax");
    __asm__("movss xmm0, [rip+0x0]");
    fun_225();
    __asm__("movss [rbp-0x88], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_23f();
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

void fun_927(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    fun_930(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 64);
    fun_939(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    goto v12;
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

int32_t fun_194() {
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
    fun_1ea();
    __asm__("movaps xmm1, xmm0");
    __asm__("movss xmm0, [rbp-0x98]");
    __asm__("mulss xmm0, xmm1");
    __asm__("movss [rbp-0x84], xmm0");
    __asm__("movss [rbp-0x74], xmm0");
    __asm__("movss xmm0, [rbp-0xc]");
    __asm__("movd eax, xmm0");
    __asm__("movd xmm1, eax");
    __asm__("movss xmm0, [rip+0x0]");
    fun_225();
    __asm__("movss [rbp-0x88], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_23f();
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

void fun_930(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 64);
    fun_939(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v10;
}

int32_t fun_1ea() {
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
    fun_225();
    __asm__("movss [rbp-0x88], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_23f();
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

void fun_939(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t v8;

    goto v8;
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

void fun_225() {
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
    fun_23f();
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

int64_t fun_87f(int64_t rdi, int64_t rsi);

int64_t fun_892(int64_t rdi, int64_t rsi);

int64_t fun_8a5(int64_t rdi, int64_t rsi);

void init_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_8e0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_2a();

void fun_86c(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int32_t edi11;
    int64_t rbp12;
    int32_t esi13;
    int64_t rbp14;
    int64_t rcx15;
    int64_t rbp16;
    int64_t r8_17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int64_t rsi22;
    int64_t rbp23;
    int64_t rdx24;
    int64_t rbp25;
    int64_t rcx26;
    int64_t rbp27;
    int64_t r8_28;
    int64_t rbp29;
    int64_t r9_30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t rdi35;
    int64_t rbp36;
    int32_t eax37;
    int64_t rdi38;
    int64_t rbp39;
    int64_t rdi40;
    int64_t rbp41;
    int64_t rdi42;
    int64_t rbp43;
    int64_t v44;
    int32_t edi45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    rax5 = fun_87f(0x870000, 4);
    *reinterpret_cast<int64_t*>(rbp6 - 48) = rax5;
    rax7 = fun_892(0x870000, 4);
    *reinterpret_cast<int64_t*>(rbp8 - 56) = rax7;
    rax9 = fun_8a5(0x870000, 4);
    *reinterpret_cast<int64_t*>(rbp10 - 64) = rax9;
    edi11 = *reinterpret_cast<int32_t*>(rbp12 - 20);
    esi13 = *reinterpret_cast<int32_t*>(rbp14 - 24);
    rcx15 = *reinterpret_cast<int64_t*>(rbp16 - 40);
    r8_17 = *reinterpret_cast<int64_t*>(rbp18 - 48);
    init_array(edi11, esi13, rbp19 - 28, rcx15, r8_17);
    *reinterpret_cast<int32_t*>(&rdi20) = *reinterpret_cast<int32_t*>(rbp21 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi22) = *reinterpret_cast<int32_t*>(rbp23 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fprintf);
    __asm__("movss xmm0, [rbp-0x1c]");
    rdx24 = *reinterpret_cast<int64_t*>(rbp25 - 40);
    rcx26 = *reinterpret_cast<int64_t*>(rbp27 - 48);
    r8_28 = *reinterpret_cast<int64_t*>(rbp29 - 56);
    r9_30 = *reinterpret_cast<int64_t*>(rbp31 - 64);
    fun_8e0(rdi20, rsi22, rdx24, rcx26, r8_28, r9_30, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp32 - 4) <= reinterpret_cast<int32_t>(fun_2a)) {
        addr_915_6:
        rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 40);
        fun_91e(rdi33, rsi22, rdx24, rcx26, r8_28, r9_30, __return_address());
    } else {
        rdi35 = **reinterpret_cast<int64_t**>(rbp36 - 16);
        rsi22 = 0x8f8;
        eax37 = fun_8fd(rdi35, 0x8f8, rdx24, rcx26, r8_28, r9_30, __return_address());
        if (!reinterpret_cast<int1_t>(eax37 == fprintf)) 
            goto addr_915_6; else 
            goto addr_906_9;
    }
    rdi38 = *reinterpret_cast<int64_t*>(rbp39 - 48);
    fun_927(rdi38, rsi22, rdx24, rcx26, r8_28, r9_30, __return_address());
    rdi40 = *reinterpret_cast<int64_t*>(rbp41 - 56);
    fun_930(rdi40, rsi22, rdx24, rcx26, r8_28, r9_30, __return_address());
    rdi42 = *reinterpret_cast<int64_t*>(rbp43 - 64);
    fun_939(rdi42, rsi22, rdx24, rcx26, r8_28, r9_30, __return_address());
    goto v44;
    addr_906_9:
    edi45 = *reinterpret_cast<int32_t*>(rbp46 - 20);
    *reinterpret_cast<int32_t*>(&rsi22) = *reinterpret_cast<int32_t*>(rbp47 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx24 = *reinterpret_cast<int64_t*>(rbp48 - 48);
    print_array(edi45, *reinterpret_cast<int32_t*>(&rsi22), rdx24, rcx26, r8_28, r9_30, __return_address());
    goto addr_915_6;
}

void fun_b41(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int32_t fun_23f() {
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

int64_t fun_87f(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int32_t edi9;
    int64_t rbp10;
    int32_t esi11;
    int64_t rbp12;
    int64_t rcx13;
    int64_t rbp14;
    int64_t r8_15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rsi20;
    int64_t rbp21;
    int64_t rdx22;
    int64_t rbp23;
    int64_t rcx24;
    int64_t rbp25;
    int64_t r8_26;
    int64_t rbp27;
    int64_t r9_28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rdi31;
    int64_t rbp32;
    int64_t rdi33;
    int64_t rbp34;
    int32_t eax35;
    int64_t rdi36;
    int64_t rbp37;
    int64_t rdi38;
    int64_t rbp39;
    int64_t rdi40;
    int64_t rbp41;
    int64_t v42;
    int32_t edi43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;

    *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
    rax5 = fun_892(0x870000, 4);
    *reinterpret_cast<int64_t*>(rbp6 - 56) = rax5;
    rax7 = fun_8a5(0x870000, 4);
    *reinterpret_cast<int64_t*>(rbp8 - 64) = rax7;
    edi9 = *reinterpret_cast<int32_t*>(rbp10 - 20);
    esi11 = *reinterpret_cast<int32_t*>(rbp12 - 24);
    rcx13 = *reinterpret_cast<int64_t*>(rbp14 - 40);
    r8_15 = *reinterpret_cast<int64_t*>(rbp16 - 48);
    init_array(edi9, esi11, rbp17 - 28, rcx13, r8_15);
    *reinterpret_cast<int32_t*>(&rdi18) = *reinterpret_cast<int32_t*>(rbp19 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi20) = *reinterpret_cast<int32_t*>(rbp21 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(fprintf);
    __asm__("movss xmm0, [rbp-0x1c]");
    rdx22 = *reinterpret_cast<int64_t*>(rbp23 - 40);
    rcx24 = *reinterpret_cast<int64_t*>(rbp25 - 48);
    r8_26 = *reinterpret_cast<int64_t*>(rbp27 - 56);
    r9_28 = *reinterpret_cast<int64_t*>(rbp29 - 64);
    fun_8e0(rdi18, rsi20, rdx22, rcx24, r8_26, r9_28, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp30 - 4) <= reinterpret_cast<int32_t>(fun_2a)) {
        addr_915_5:
        rdi31 = *reinterpret_cast<int64_t*>(rbp32 - 40);
        fun_91e(rdi31, rsi20, rdx22, rcx24, r8_26, r9_28, __return_address());
    } else {
        rdi33 = **reinterpret_cast<int64_t**>(rbp34 - 16);
        rsi20 = 0x8f8;
        eax35 = fun_8fd(rdi33, 0x8f8, rdx22, rcx24, r8_26, r9_28, __return_address());
        if (!reinterpret_cast<int1_t>(eax35 == fprintf)) 
            goto addr_915_5; else 
            goto addr_906_8;
    }
    rdi36 = *reinterpret_cast<int64_t*>(rbp37 - 48);
    fun_927(rdi36, rsi20, rdx22, rcx24, r8_26, r9_28, __return_address());
    rdi38 = *reinterpret_cast<int64_t*>(rbp39 - 56);
    fun_930(rdi38, rsi20, rdx22, rcx24, r8_26, r9_28, __return_address());
    rdi40 = *reinterpret_cast<int64_t*>(rbp41 - 64);
    fun_939(rdi40, rsi20, rdx22, rcx24, r8_26, r9_28, __return_address());
    goto v42;
    addr_906_8:
    edi43 = *reinterpret_cast<int32_t*>(rbp44 - 20);
    *reinterpret_cast<int32_t*>(&rsi20) = *reinterpret_cast<int32_t*>(rbp45 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx22 = *reinterpret_cast<int64_t*>(rbp46 - 48);
    print_array(edi43, *reinterpret_cast<int32_t*>(&rsi20), rdx22, rcx24, r8_26, r9_28, __return_address());
    goto addr_915_5;
}

int64_t fun_892(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int32_t edi7;
    int64_t rbp8;
    int32_t esi9;
    int64_t rbp10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t r8_13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rsi18;
    int64_t rbp19;
    int64_t rdx20;
    int64_t rbp21;
    int64_t rcx22;
    int64_t rbp23;
    int64_t r8_24;
    int64_t rbp25;
    int64_t r9_26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rdi29;
    int64_t rbp30;
    int64_t rdi31;
    int64_t rbp32;
    int32_t eax33;
    int64_t rdi34;
    int64_t rbp35;
    int64_t rdi36;
    int64_t rbp37;
    int64_t rdi38;
    int64_t rbp39;
    int64_t v40;
    int32_t edi41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;

    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    rax5 = fun_8a5(0x870000, 4);
    *reinterpret_cast<int64_t*>(rbp6 - 64) = rax5;
    edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
    esi9 = *reinterpret_cast<int32_t*>(rbp10 - 24);
    rcx11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    r8_13 = *reinterpret_cast<int64_t*>(rbp14 - 48);
    init_array(edi7, esi9, rbp15 - 28, rcx11, r8_13);
    *reinterpret_cast<int32_t*>(&rdi16) = *reinterpret_cast<int32_t*>(rbp17 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi18) = *reinterpret_cast<int32_t*>(rbp19 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fprintf);
    __asm__("movss xmm0, [rbp-0x1c]");
    rdx20 = *reinterpret_cast<int64_t*>(rbp21 - 40);
    rcx22 = *reinterpret_cast<int64_t*>(rbp23 - 48);
    r8_24 = *reinterpret_cast<int64_t*>(rbp25 - 56);
    r9_26 = *reinterpret_cast<int64_t*>(rbp27 - 64);
    fun_8e0(rdi16, rsi18, rdx20, rcx22, r8_24, r9_26, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp28 - 4) <= reinterpret_cast<int32_t>(fun_2a)) {
        addr_915_4:
        rdi29 = *reinterpret_cast<int64_t*>(rbp30 - 40);
        fun_91e(rdi29, rsi18, rdx20, rcx22, r8_24, r9_26, __return_address());
    } else {
        rdi31 = **reinterpret_cast<int64_t**>(rbp32 - 16);
        rsi18 = 0x8f8;
        eax33 = fun_8fd(rdi31, 0x8f8, rdx20, rcx22, r8_24, r9_26, __return_address());
        if (!reinterpret_cast<int1_t>(eax33 == fprintf)) 
            goto addr_915_4; else 
            goto addr_906_7;
    }
    rdi34 = *reinterpret_cast<int64_t*>(rbp35 - 48);
    fun_927(rdi34, rsi18, rdx20, rcx22, r8_24, r9_26, __return_address());
    rdi36 = *reinterpret_cast<int64_t*>(rbp37 - 56);
    fun_930(rdi36, rsi18, rdx20, rcx22, r8_24, r9_26, __return_address());
    rdi38 = *reinterpret_cast<int64_t*>(rbp39 - 64);
    fun_939(rdi38, rsi18, rdx20, rcx22, r8_24, r9_26, __return_address());
    goto v40;
    addr_906_7:
    edi41 = *reinterpret_cast<int32_t*>(rbp42 - 20);
    *reinterpret_cast<int32_t*>(&rsi18) = *reinterpret_cast<int32_t*>(rbp43 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx20 = *reinterpret_cast<int64_t*>(rbp44 - 48);
    print_array(edi41, *reinterpret_cast<int32_t*>(&rsi18), rdx20, rcx22, r8_24, r9_26, __return_address());
    goto addr_915_4;
}

int64_t fun_8a5(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int32_t edi5;
    int64_t rbp6;
    int32_t esi7;
    int64_t rbp8;
    int64_t rcx9;
    int64_t rbp10;
    int64_t r8_11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rsi16;
    int64_t rbp17;
    int64_t rdx18;
    int64_t rbp19;
    int64_t rcx20;
    int64_t rbp21;
    int64_t r8_22;
    int64_t rbp23;
    int64_t r9_24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rdi27;
    int64_t rbp28;
    int64_t rdi29;
    int64_t rbp30;
    int32_t eax31;
    int64_t rdi32;
    int64_t rbp33;
    int64_t rdi34;
    int64_t rbp35;
    int64_t rdi36;
    int64_t rbp37;
    int64_t v38;
    int32_t edi39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;

    *reinterpret_cast<int64_t*>(rbp3 - 64) = rax4;
    edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
    esi7 = *reinterpret_cast<int32_t*>(rbp8 - 24);
    rcx9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
    r8_11 = *reinterpret_cast<int64_t*>(rbp12 - 48);
    init_array(edi5, esi7, rbp13 - 28, rcx9, r8_11);
    *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(rbp15 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi16) = *reinterpret_cast<int32_t*>(rbp17 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fprintf);
    __asm__("movss xmm0, [rbp-0x1c]");
    rdx18 = *reinterpret_cast<int64_t*>(rbp19 - 40);
    rcx20 = *reinterpret_cast<int64_t*>(rbp21 - 48);
    r8_22 = *reinterpret_cast<int64_t*>(rbp23 - 56);
    r9_24 = *reinterpret_cast<int64_t*>(rbp25 - 64);
    fun_8e0(rdi14, rsi16, rdx18, rcx20, r8_22, r9_24, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp26 - 4) <= reinterpret_cast<int32_t>(fun_2a)) {
        addr_915_3:
        rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 40);
        fun_91e(rdi27, rsi16, rdx18, rcx20, r8_22, r9_24, __return_address());
    } else {
        rdi29 = **reinterpret_cast<int64_t**>(rbp30 - 16);
        rsi16 = 0x8f8;
        eax31 = fun_8fd(rdi29, 0x8f8, rdx18, rcx20, r8_22, r9_24, __return_address());
        if (!reinterpret_cast<int1_t>(eax31 == fprintf)) 
            goto addr_915_3; else 
            goto addr_906_6;
    }
    rdi32 = *reinterpret_cast<int64_t*>(rbp33 - 48);
    fun_927(rdi32, rsi16, rdx18, rcx20, r8_22, r9_24, __return_address());
    rdi34 = *reinterpret_cast<int64_t*>(rbp35 - 56);
    fun_930(rdi34, rsi16, rdx18, rcx20, r8_22, r9_24, __return_address());
    rdi36 = *reinterpret_cast<int64_t*>(rbp37 - 64);
    fun_939(rdi36, rsi16, rdx18, rcx20, r8_22, r9_24, __return_address());
    goto v38;
    addr_906_6:
    edi39 = *reinterpret_cast<int32_t*>(rbp40 - 20);
    *reinterpret_cast<int32_t*>(&rsi16) = *reinterpret_cast<int32_t*>(rbp41 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx18 = *reinterpret_cast<int64_t*>(rbp42 - 48);
    print_array(edi39, *reinterpret_cast<int32_t*>(&rsi16), rdx18, rcx20, r8_22, r9_24, __return_address());
    goto addr_915_3;
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

void fun_8e0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int32_t eax13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t v20;
    int32_t edi21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;

    if (*reinterpret_cast<int32_t*>(rbp8 - 4) <= reinterpret_cast<int32_t>(fun_2a)) {
        addr_915_2:
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
        fun_91e(rdi9, rsi, rdx, rcx, r8, r9, __return_address());
    } else {
        rdi11 = **reinterpret_cast<int64_t**>(rbp12 - 16);
        rsi = 0x8f8;
        eax13 = fun_8fd(rdi11, 0x8f8, rdx, rcx, r8, r9, __return_address());
        if (!reinterpret_cast<int1_t>(eax13 == fprintf)) 
            goto addr_915_2; else 
            goto addr_906_5;
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
    fun_927(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 56);
    fun_930(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 64);
    fun_939(rdi18, rsi, rdx, rcx, r8, r9, __return_address());
    goto v20;
    addr_906_5:
    edi21 = *reinterpret_cast<int32_t*>(rbp22 - 20);
    *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp23 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx = *reinterpret_cast<int64_t*>(rbp24 - 48);
    print_array(edi21, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx, r8, r9, __return_address());
    goto addr_915_2;
}

void fprintf(int32_t edi, int32_t esi) {
}

void fun_ffffffffe04d8966();

void fun_19() {
    int64_t rbp1;
    int64_t r8_2;

    fun_ffffffffe04d8966();
    *reinterpret_cast<int64_t*>(rbp1 - 40) = r8_2;
}

void fun_2a() {
    __asm__("hlt ");
}

void fun_bc(int64_t rdi) {
    __asm__("enter 0xff3, 0x10");
    __asm__("mulps xmm0, xmm1");
    __asm__("movss xmm1, [rip+0x0]");
    __asm__("addss xmm0, xmm1");
    __asm__("movss [rbp-0xa8], xmm0");
    __asm__("movss xmm0, [rip+0x0]");
    __asm__("mulss xmm0, [rbp-0xc]");
    fun_ef();
}

void fun_2b() {
    __asm__("movd eax, xmm0");
}

void submain(int32_t edi, int64_t rsi) {
    fun_86c(0x870000, 4);
}

