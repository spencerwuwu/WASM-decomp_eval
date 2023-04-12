
void fprintf();

void fun_2c8();

void kernel_gramschmidt(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t* rdi9;
    int32_t* rsi10;
    int32_t v11;
    int32_t* rdi12;
    int32_t* rsi13;
    int32_t* rdi14;
    int32_t* rsi15;
    int32_t* rdi16;
    int32_t* rsi17;
    int32_t* rdi18;
    int32_t* rsi19;
    int32_t v20;
    int32_t* rdi21;
    int32_t* rsi22;
    int32_t v23;
    int32_t v24;
    int32_t* rdi25;
    int32_t* rsi26;
    int32_t* rdi27;
    int32_t* rsi28;
    int32_t* rdi29;
    int32_t* rsi30;
    int32_t v31;
    int32_t* rdi32;
    int32_t* rsi33;
    int32_t* rdi34;
    int32_t* rsi35;
    int32_t* rdi36;
    int32_t* rsi37;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v6 = *reinterpret_cast<int32_t*>(&rdi1);
    v7 = *reinterpret_cast<int32_t*>(&rsi2);
    v8 = reinterpret_cast<int32_t>(fprintf);
    while (v8 < v7) {
        __asm__("xorps xmm0, xmm0");
        *rdi1 = *rsi2;
        rdi9 = rdi1 + 1;
        rsi10 = rsi2 + 1;
        v11 = reinterpret_cast<int32_t>(fprintf);
        while (v11 < v6) {
            *rdi9 = *rsi10;
            rdi12 = rdi9 + 1;
            rsi13 = rsi10 + 1;
            *rdi12 = *rsi13;
            rdi14 = rdi12 + 1;
            rsi15 = rsi13 + 1;
            *rdi14 = *rsi15;
            rdi16 = rdi14 + 1;
            rsi17 = rsi15 + 1;
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            *rdi16 = *rsi17;
            rdi9 = rdi16 + 1;
            rsi10 = rsi17 + 1;
            ++v11;
        }
        *rdi9 = *rsi10;
        rdi18 = rdi9 + 1;
        rsi19 = rsi10 + 1;
        fun_2c8();
        *rdi18 = *rsi19;
        rdi1 = rdi18 + 1;
        rsi2 = rsi19 + 1;
        v20 = reinterpret_cast<int32_t>(fprintf);
        while (v20 < v6) {
            *rdi1 = *rsi2;
            rdi21 = rdi1 + 1;
            rsi22 = rsi2 + 1;
            __asm__("divsd xmm0, [rax+rcx*8]");
            *rdi21 = *rsi22;
            rdi1 = rdi21 + 1;
            rsi2 = rsi22 + 1;
            ++v20;
        }
        v23 = v8 + 1;
        while (v23 < v7) {
            __asm__("xorps xmm0, xmm0");
            *rdi1 = *rsi2;
            ++rdi1;
            ++rsi2;
            v24 = reinterpret_cast<int32_t>(fprintf);
            while (v24 < v6) {
                *rdi1 = *rsi2;
                rdi25 = rdi1 + 1;
                rsi26 = rsi2 + 1;
                *rdi25 = *rsi26;
                rdi27 = rdi25 + 1;
                rsi28 = rsi26 + 1;
                *rdi27 = *rsi28;
                rdi29 = rdi27 + 1;
                rsi30 = rsi28 + 1;
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi29 = *rsi30;
                rdi1 = rdi29 + 1;
                rsi2 = rsi30 + 1;
                ++v24;
            }
            v31 = reinterpret_cast<int32_t>(fprintf);
            while (v31 < v6) {
                *rdi1 = *rsi2;
                rdi32 = rdi1 + 1;
                rsi33 = rsi2 + 1;
                *rdi32 = *rsi33;
                rdi34 = rdi32 + 1;
                rsi35 = rsi33 + 1;
                *rdi34 = *rsi35;
                rdi36 = rdi34 + 1;
                rsi37 = rsi35 + 1;
                __asm__("movd rax, xmm0");
                __asm__("movd xmm0, rax");
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi36 = *rsi37;
                rdi1 = rdi36 + 1;
                rsi2 = rsi37 + 1;
                ++v31;
            }
            ++v23;
        }
        ++v8;
    }
    return;
}

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_ca(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_d3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_dc(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_a1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t eax6;
    int32_t edi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t v19;

    if (reinterpret_cast<int1_t>(eax6 == fprintf)) {
        edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp9 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
        rdx = *reinterpret_cast<int64_t*>(rbp10 - 32);
        rcx = *reinterpret_cast<int64_t*>(rbp11 - 40);
        r8 = *reinterpret_cast<int64_t*>(rbp12 - 48);
        print_array(edi7, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx, r8);
    }
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 32);
    fun_ca(rdi13, rsi, rdx, rcx, r8);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 40);
    fun_d3(rdi15, rsi, rdx, rcx, r8);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 48);
    fun_dc(rdi17, rsi, rdx, rcx, r8);
    goto v19;
}

int64_t* g501 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_512(int64_t rdi, int64_t rsi);

int64_t* g519 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_531(int64_t rdi);

int64_t* g579 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_58a(int64_t rdi);

int32_t** g591 = reinterpret_cast<int32_t**>(0x48e8458b48388b48);

void fun_5bd(int64_t rdi);

int64_t* g5e5 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_5fd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g604 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_61c(int64_t rdi);

int64_t* g664 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_675(int64_t rdi);

int32_t** g67c = reinterpret_cast<int32_t**>(0x48e0458b48388b48);

void fun_6a8(int64_t rdi);

int64_t* g6d0 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_6e8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g6ef = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_700(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t v6;
    int32_t v7;
    int64_t* rax8;
    int64_t rdi9;
    int64_t* rax10;
    int64_t rdi11;
    int32_t* rsi12;
    int32_t v13;
    int32_t v14;
    int64_t* rax15;
    int64_t rdi16;
    int32_t** rax17;
    int32_t* rdi18;
    int64_t* rax19;
    int64_t rdi20;
    int64_t* rax21;
    int64_t rdi22;
    int32_t* rsi23;
    int32_t v24;
    int32_t v25;
    int64_t* rax26;
    int64_t rdi27;
    int32_t** rax28;
    int32_t* rdi29;
    int64_t* rax30;
    int64_t rdi31;
    int64_t* rax32;
    int64_t rdi33;

    v6 = edi;
    v7 = esi;
    rax8 = g501;
    rdi9 = *rax8;
    fun_512(rdi9, 0x50b);
    rax10 = g519;
    rdi11 = *rax10;
    rsi12 = reinterpret_cast<int32_t*>(0x523);
    fun_531(rdi11);
    v13 = reinterpret_cast<int32_t>(fprintf);
    while (v13 < v7) {
        v14 = reinterpret_cast<int32_t>(fprintf);
        while (v14 < v7) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v13 * v7 + v14) % 20 == fprintf)) {
                rax15 = g579;
                rdi16 = *rax15;
                rsi12 = reinterpret_cast<int32_t*>(0x583);
                fun_58a(rdi16);
            }
            rax17 = g591;
            rdi18 = *rax17;
            rcx = v14;
            *rdi18 = *rsi12;
            rsi12 = reinterpret_cast<int32_t*>(0x5b6);
            fun_5bd(rdi18 + 1);
            ++v14;
        }
        ++v13;
    }
    rax19 = g5e5;
    rdi20 = *rax19;
    fun_5fd(rdi20, 0x5ef, 0x5f6, rcx);
    rax21 = g604;
    rdi22 = *rax21;
    rsi23 = reinterpret_cast<int32_t*>(0x60e);
    fun_61c(rdi22);
    v24 = reinterpret_cast<int32_t>(fprintf);
    while (v24 < v6) {
        v25 = reinterpret_cast<int32_t>(fprintf);
        while (v25 < v7) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v24 * v7 + v25) % 20 == fprintf)) {
                rax26 = g664;
                rdi27 = *rax26;
                rsi23 = reinterpret_cast<int32_t*>(0x66e);
                fun_675(rdi27);
            }
            rax28 = g67c;
            rdi29 = *rax28;
            rcx = v25;
            *rdi29 = *rsi23;
            rsi23 = reinterpret_cast<int32_t*>(0x6a1);
            fun_6a8(rdi29 + 1);
            ++v25;
        }
        ++v24;
    }
    rax30 = g6d0;
    rdi31 = *rax30;
    fun_6e8(rdi31, 0x6da, 0x6e1, rcx);
    rax32 = g6ef;
    rdi33 = *rax32;
    fun_700(rdi33, 0x6f9, 0x6e1, rcx);
    return;
}

void fun_2c8() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* rdi3;
    int32_t* rsi4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int32_t* rdi8;
    int32_t* rsi9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int32_t* rdi19;
    int32_t* rsi20;
    int32_t* rdi21;
    int32_t* rsi22;
    int32_t* rdi23;
    int32_t* rsi24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int32_t* rdi30;
    int32_t* rsi31;
    int32_t* rdi32;
    int32_t* rsi33;
    int32_t* rdi34;
    int32_t* rsi35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int32_t* rdi44;
    int32_t* rsi45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int32_t* rdi49;
    int32_t* rsi50;
    int32_t* rdi51;
    int32_t* rsi52;
    int32_t* rdi53;
    int32_t* rsi54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t v57;

    while (1) {
        *rdi1 = *rsi2;
        rdi3 = rdi1 + 1;
        rsi4 = rsi2 + 1;
        *reinterpret_cast<int32_t*>(rbp5 - 36) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp6 - 36) < *reinterpret_cast<int32_t*>(rbp7 - 4)) {
            *rdi3 = *rsi4;
            rdi8 = rdi3 + 1;
            rsi9 = rsi4 + 1;
            __asm__("divsd xmm0, [rax+rcx*8]");
            *rdi8 = *rsi9;
            rdi3 = rdi8 + 1;
            rsi4 = rsi9 + 1;
            *reinterpret_cast<int32_t*>(rbp10 - 36) = *reinterpret_cast<int32_t*>(rbp11 - 36) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp12 - 40) = *reinterpret_cast<int32_t*>(rbp13 - 44) + 1;
        while (*reinterpret_cast<int32_t*>(rbp14 - 40) < *reinterpret_cast<int32_t*>(rbp15 - 8)) {
            __asm__("xorps xmm0, xmm0");
            *rdi3 = *rsi4;
            ++rdi3;
            ++rsi4;
            *reinterpret_cast<int32_t*>(rbp16 - 36) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp17 - 36) < *reinterpret_cast<int32_t*>(rbp18 - 4)) {
                *rdi3 = *rsi4;
                rdi19 = rdi3 + 1;
                rsi20 = rsi4 + 1;
                *rdi19 = *rsi20;
                rdi21 = rdi19 + 1;
                rsi22 = rsi20 + 1;
                *rdi21 = *rsi22;
                rdi23 = rdi21 + 1;
                rsi24 = rsi22 + 1;
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi23 = *rsi24;
                rdi3 = rdi23 + 1;
                rsi4 = rsi24 + 1;
                *reinterpret_cast<int32_t*>(rbp25 - 36) = *reinterpret_cast<int32_t*>(rbp26 - 36) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp27 - 36) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp28 - 36) < *reinterpret_cast<int32_t*>(rbp29 - 4)) {
                *rdi3 = *rsi4;
                rdi30 = rdi3 + 1;
                rsi31 = rsi4 + 1;
                *rdi30 = *rsi31;
                rdi32 = rdi30 + 1;
                rsi33 = rsi31 + 1;
                *rdi32 = *rsi33;
                rdi34 = rdi32 + 1;
                rsi35 = rsi33 + 1;
                __asm__("movd rax, xmm0");
                __asm__("movd xmm0, rax");
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi34 = *rsi35;
                rdi3 = rdi34 + 1;
                rsi4 = rsi35 + 1;
                *reinterpret_cast<int32_t*>(rbp36 - 36) = *reinterpret_cast<int32_t*>(rbp37 - 36) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp38 - 40) = *reinterpret_cast<int32_t*>(rbp39 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp40 - 44) = *reinterpret_cast<int32_t*>(rbp41 - 44) + 1;
        if (*reinterpret_cast<int32_t*>(rbp42 - 44) >= *reinterpret_cast<int32_t*>(rbp43 - 8)) 
            break;
        __asm__("xorps xmm0, xmm0");
        *rdi3 = *rsi4;
        rdi44 = rdi3 + 1;
        rsi45 = rsi4 + 1;
        *reinterpret_cast<int32_t*>(rbp46 - 36) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp47 - 36) < *reinterpret_cast<int32_t*>(rbp48 - 4)) {
            *rdi44 = *rsi45;
            rdi49 = rdi44 + 1;
            rsi50 = rsi45 + 1;
            *rdi49 = *rsi50;
            rdi51 = rdi49 + 1;
            rsi52 = rsi50 + 1;
            *rdi51 = *rsi52;
            rdi53 = rdi51 + 1;
            rsi54 = rsi52 + 1;
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            *rdi53 = *rsi54;
            rdi44 = rdi53 + 1;
            rsi45 = rsi54 + 1;
            *reinterpret_cast<int32_t*>(rbp55 - 36) = *reinterpret_cast<int32_t*>(rbp56 - 36) + 1;
        }
        *rdi44 = *rsi45;
        rdi1 = rdi44 + 1;
        rsi2 = rsi45 + 1;
        fun_2c8();
    }
    goto v57;
}

void fun_58a(int64_t rdi) {
    int32_t** rax2;
    int32_t* rdi3;
    int64_t rcx4;
    int64_t rbp5;
    int32_t* rsi6;
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
    int32_t* rsi25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t* rax35;
    int64_t rdi36;
    int32_t** rax37;
    int32_t* rdi38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t* rax44;
    int64_t rdi45;
    int64_t* rax46;
    int64_t rdi47;
    int64_t v48;

    while (1) {
        rax2 = g591;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 40);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x5b6);
        fun_5bd(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 40) = *reinterpret_cast<int32_t*>(rbp8 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 40) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 36) = *reinterpret_cast<int32_t*>(rbp12 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 36) >= *reinterpret_cast<int32_t*>(rbp14 - 8)) 
                goto addr_5de_10;
            *reinterpret_cast<int32_t*>(rbp15 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 36) * *reinterpret_cast<int32_t*>(rbp17 - 8) + *reinterpret_cast<int32_t*>(rbp18 - 40)) % 20 == fprintf)) 
            continue;
        rax19 = g579;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x583);
        fun_58a(rdi20);
    }
    addr_5de_10:
    rax21 = g5e5;
    rdi22 = *rax21;
    fun_5fd(rdi22, 0x5ef, 0x5f6, rcx4);
    rax23 = g604;
    rdi24 = *rax23;
    rsi25 = reinterpret_cast<int32_t*>(0x60e);
    fun_61c(rdi24);
    *reinterpret_cast<int32_t*>(rbp26 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp27 - 36) < *reinterpret_cast<int32_t*>(rbp28 - 4)) {
        *reinterpret_cast<int32_t*>(rbp29 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp30 - 40) < *reinterpret_cast<int32_t*>(rbp31 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp32 - 36) * *reinterpret_cast<int32_t*>(rbp33 - 8) + *reinterpret_cast<int32_t*>(rbp34 - 40)) % 20 == fprintf)) {
                rax35 = g664;
                rdi36 = *rax35;
                rsi25 = reinterpret_cast<int32_t*>(0x66e);
                fun_675(rdi36);
            }
            rax37 = g67c;
            rdi38 = *rax37;
            rcx4 = *reinterpret_cast<int32_t*>(rbp39 - 40);
            *rdi38 = *rsi25;
            rsi25 = reinterpret_cast<int32_t*>(0x6a1);
            fun_6a8(rdi38 + 1);
            *reinterpret_cast<int32_t*>(rbp40 - 40) = *reinterpret_cast<int32_t*>(rbp41 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp42 - 36) = *reinterpret_cast<int32_t*>(rbp43 - 36) + 1;
    }
    rax44 = g6d0;
    rdi45 = *rax44;
    fun_6e8(rdi45, 0x6da, 0x6e1, rcx4);
    rax46 = g6ef;
    rdi47 = *rax46;
    fun_700(rdi47, 0x6f9, 0x6e1, rcx4);
    goto v48;
}

void fun_5bd(int64_t rdi) {
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
    int64_t* rax14;
    int64_t rdi15;
    int32_t* rsi16;
    int32_t** rax17;
    int32_t* rdi18;
    int64_t rcx19;
    int64_t rbp20;
    int64_t* rax21;
    int64_t rdi22;
    int64_t* rax23;
    int64_t rdi24;
    int32_t* rsi25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t* rax35;
    int64_t rdi36;
    int32_t** rax37;
    int32_t* rdi38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t* rax44;
    int64_t rdi45;
    int64_t* rax46;
    int64_t rdi47;
    int64_t v48;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 40) = *reinterpret_cast<int32_t*>(rbp3 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp4 - 40) >= *reinterpret_cast<int32_t*>(rbp5 - 8)) {
            *reinterpret_cast<int32_t*>(rbp6 - 36) = *reinterpret_cast<int32_t*>(rbp7 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp8 - 36) >= *reinterpret_cast<int32_t*>(rbp9 - 8)) 
                goto addr_5de_6;
            *reinterpret_cast<int32_t*>(rbp10 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 36) * *reinterpret_cast<int32_t*>(rbp12 - 8) + *reinterpret_cast<int32_t*>(rbp13 - 40)) % 20 == fprintf)) {
            rax14 = g579;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x583);
            fun_58a(rdi15);
        }
        rax17 = g591;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 40);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x5b6);
        fun_5bd(rdi18 + 1);
    }
    addr_5de_6:
    rax21 = g5e5;
    rdi22 = *rax21;
    fun_5fd(rdi22, 0x5ef, 0x5f6, rcx19);
    rax23 = g604;
    rdi24 = *rax23;
    rsi25 = reinterpret_cast<int32_t*>(0x60e);
    fun_61c(rdi24);
    *reinterpret_cast<int32_t*>(rbp26 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp27 - 36) < *reinterpret_cast<int32_t*>(rbp28 - 4)) {
        *reinterpret_cast<int32_t*>(rbp29 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp30 - 40) < *reinterpret_cast<int32_t*>(rbp31 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp32 - 36) * *reinterpret_cast<int32_t*>(rbp33 - 8) + *reinterpret_cast<int32_t*>(rbp34 - 40)) % 20 == fprintf)) {
                rax35 = g664;
                rdi36 = *rax35;
                rsi25 = reinterpret_cast<int32_t*>(0x66e);
                fun_675(rdi36);
            }
            rax37 = g67c;
            rdi38 = *rax37;
            rcx19 = *reinterpret_cast<int32_t*>(rbp39 - 40);
            *rdi38 = *rsi25;
            rsi25 = reinterpret_cast<int32_t*>(0x6a1);
            fun_6a8(rdi38 + 1);
            *reinterpret_cast<int32_t*>(rbp40 - 40) = *reinterpret_cast<int32_t*>(rbp41 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp42 - 36) = *reinterpret_cast<int32_t*>(rbp43 - 36) + 1;
    }
    rax44 = g6d0;
    rdi45 = *rax44;
    fun_6e8(rdi45, 0x6da, 0x6e1, rcx19);
    rax46 = g6ef;
    rdi47 = *rax46;
    fun_700(rdi47, 0x6f9, 0x6e1, rcx19);
    goto v48;
}

void fun_675(int64_t rdi) {
    int32_t** rax2;
    int32_t* rdi3;
    int64_t rcx4;
    int64_t rbp5;
    int32_t* rsi6;
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
        rax2 = g67c;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 40);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x6a1);
        fun_6a8(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 40) = *reinterpret_cast<int32_t*>(rbp8 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 40) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 36) = *reinterpret_cast<int32_t*>(rbp12 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 36) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_6c9_10;
            *reinterpret_cast<int32_t*>(rbp15 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 36) * *reinterpret_cast<int32_t*>(rbp17 - 8) + *reinterpret_cast<int32_t*>(rbp18 - 40)) % 20 == fprintf)) 
            continue;
        rax19 = g664;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x66e);
        fun_675(rdi20);
    }
    addr_6c9_10:
    rax21 = g6d0;
    rdi22 = *rax21;
    fun_6e8(rdi22, 0x6da, 0x6e1, rcx4);
    rax23 = g6ef;
    rdi24 = *rax23;
    fun_700(rdi24, 0x6f9, 0x6e1, rcx4);
    goto v25;
}

void fun_6a8(int64_t rdi) {
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
    int64_t* rax14;
    int64_t rdi15;
    int32_t* rsi16;
    int32_t** rax17;
    int32_t* rdi18;
    int64_t rcx19;
    int64_t rbp20;
    int64_t* rax21;
    int64_t rdi22;
    int64_t* rax23;
    int64_t rdi24;
    int64_t v25;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 40) = *reinterpret_cast<int32_t*>(rbp3 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp4 - 40) >= *reinterpret_cast<int32_t*>(rbp5 - 8)) {
            *reinterpret_cast<int32_t*>(rbp6 - 36) = *reinterpret_cast<int32_t*>(rbp7 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp8 - 36) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
                goto addr_6c9_6;
            *reinterpret_cast<int32_t*>(rbp10 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 36) * *reinterpret_cast<int32_t*>(rbp12 - 8) + *reinterpret_cast<int32_t*>(rbp13 - 40)) % 20 == fprintf)) {
            rax14 = g664;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x66e);
            fun_675(rdi15);
        }
        rax17 = g67c;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 40);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x6a1);
        fun_6a8(rdi18 + 1);
    }
    addr_6c9_6:
    rax21 = g6d0;
    rdi22 = *rax21;
    fun_6e8(rdi22, 0x6da, 0x6e1, rcx19);
    rax23 = g6ef;
    rdi24 = *rax23;
    fun_700(rdi24, 0x6f9, 0x6e1, rcx19);
    goto v25;
}

void fun_ca(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 40);
    fun_d3(rdi6, rsi, rdx, rcx, r8);
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 48);
    fun_dc(rdi8, rsi, rdx, rcx, r8);
    goto v10;
}

void fun_512(int64_t rdi, int64_t rsi) {
    int64_t* rax3;
    int64_t rdi4;
    int32_t* rsi5;
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
    int32_t** rax17;
    int32_t* rdi18;
    int64_t rcx19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t* rax25;
    int64_t rdi26;
    int64_t* rax27;
    int64_t rdi28;
    int32_t* rsi29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t* rax39;
    int64_t rdi40;
    int32_t** rax41;
    int32_t* rdi42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t* rax48;
    int64_t rdi49;
    int64_t* rax50;
    int64_t rdi51;
    int64_t v52;

    rax3 = g519;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x523);
    fun_531(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 36) < *reinterpret_cast<int32_t*>(rbp8 - 8)) {
        *reinterpret_cast<int32_t*>(rbp9 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 40) < *reinterpret_cast<int32_t*>(rbp11 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 36) * *reinterpret_cast<int32_t*>(rbp13 - 8) + *reinterpret_cast<int32_t*>(rbp14 - 40)) % 20 == fprintf)) {
                rax15 = g579;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x583);
                fun_58a(rdi16);
            }
            rax17 = g591;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 40);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x5b6);
            fun_5bd(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 40) = *reinterpret_cast<int32_t*>(rbp22 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 36) = *reinterpret_cast<int32_t*>(rbp24 - 36) + 1;
    }
    rax25 = g5e5;
    rdi26 = *rax25;
    fun_5fd(rdi26, 0x5ef, 0x5f6, rcx19);
    rax27 = g604;
    rdi28 = *rax27;
    rsi29 = reinterpret_cast<int32_t*>(0x60e);
    fun_61c(rdi28);
    *reinterpret_cast<int32_t*>(rbp30 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp31 - 36) < *reinterpret_cast<int32_t*>(rbp32 - 4)) {
        *reinterpret_cast<int32_t*>(rbp33 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp34 - 40) < *reinterpret_cast<int32_t*>(rbp35 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp36 - 36) * *reinterpret_cast<int32_t*>(rbp37 - 8) + *reinterpret_cast<int32_t*>(rbp38 - 40)) % 20 == fprintf)) {
                rax39 = g664;
                rdi40 = *rax39;
                rsi29 = reinterpret_cast<int32_t*>(0x66e);
                fun_675(rdi40);
            }
            rax41 = g67c;
            rdi42 = *rax41;
            rcx19 = *reinterpret_cast<int32_t*>(rbp43 - 40);
            *rdi42 = *rsi29;
            rsi29 = reinterpret_cast<int32_t*>(0x6a1);
            fun_6a8(rdi42 + 1);
            *reinterpret_cast<int32_t*>(rbp44 - 40) = *reinterpret_cast<int32_t*>(rbp45 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp46 - 36) = *reinterpret_cast<int32_t*>(rbp47 - 36) + 1;
    }
    rax48 = g6d0;
    rdi49 = *rax48;
    fun_6e8(rdi49, 0x6da, 0x6e1, rcx19);
    rax50 = g6ef;
    rdi51 = *rax50;
    fun_700(rdi51, 0x6f9, 0x6e1, rcx19);
    goto v52;
}

void fun_d3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rdi6;
    int64_t rbp7;
    int64_t v8;

    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 48);
    fun_dc(rdi6, rsi, rdx, rcx, r8);
    goto v8;
}

void fun_531(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t* rax11;
    int64_t rdi12;
    int32_t* rsi13;
    int32_t** rax14;
    int32_t* rdi15;
    int64_t rcx16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t* rax22;
    int64_t rdi23;
    int64_t* rax24;
    int64_t rdi25;
    int32_t* rsi26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t* rax36;
    int64_t rdi37;
    int32_t** rax38;
    int32_t* rdi39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t* rax45;
    int64_t rdi46;
    int64_t* rax47;
    int64_t rdi48;
    int64_t v49;

    *reinterpret_cast<int32_t*>(rbp2 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 36) < *reinterpret_cast<int32_t*>(rbp4 - 8)) {
        *reinterpret_cast<int32_t*>(rbp5 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp6 - 40) < *reinterpret_cast<int32_t*>(rbp7 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp8 - 36) * *reinterpret_cast<int32_t*>(rbp9 - 8) + *reinterpret_cast<int32_t*>(rbp10 - 40)) % 20 == fprintf)) {
                rax11 = g579;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x583);
                fun_58a(rdi12);
            }
            rax14 = g591;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 40);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x5b6);
            fun_5bd(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 40) = *reinterpret_cast<int32_t*>(rbp19 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 36) = *reinterpret_cast<int32_t*>(rbp21 - 36) + 1;
    }
    rax22 = g5e5;
    rdi23 = *rax22;
    fun_5fd(rdi23, 0x5ef, 0x5f6, rcx16);
    rax24 = g604;
    rdi25 = *rax24;
    rsi26 = reinterpret_cast<int32_t*>(0x60e);
    fun_61c(rdi25);
    *reinterpret_cast<int32_t*>(rbp27 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp28 - 36) < *reinterpret_cast<int32_t*>(rbp29 - 4)) {
        *reinterpret_cast<int32_t*>(rbp30 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp31 - 40) < *reinterpret_cast<int32_t*>(rbp32 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp33 - 36) * *reinterpret_cast<int32_t*>(rbp34 - 8) + *reinterpret_cast<int32_t*>(rbp35 - 40)) % 20 == fprintf)) {
                rax36 = g664;
                rdi37 = *rax36;
                rsi26 = reinterpret_cast<int32_t*>(0x66e);
                fun_675(rdi37);
            }
            rax38 = g67c;
            rdi39 = *rax38;
            rcx16 = *reinterpret_cast<int32_t*>(rbp40 - 40);
            *rdi39 = *rsi26;
            rsi26 = reinterpret_cast<int32_t*>(0x6a1);
            fun_6a8(rdi39 + 1);
            *reinterpret_cast<int32_t*>(rbp41 - 40) = *reinterpret_cast<int32_t*>(rbp42 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp43 - 36) = *reinterpret_cast<int32_t*>(rbp44 - 36) + 1;
    }
    rax45 = g6d0;
    rdi46 = *rax45;
    fun_6e8(rdi46, 0x6da, 0x6e1, rcx16);
    rax47 = g6ef;
    rdi48 = *rax47;
    fun_700(rdi48, 0x6f9, 0x6e1, rcx16);
    goto v49;
}

void fun_dc(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t v6;

    goto v6;
}

void fun_5fd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int32_t* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t* rax17;
    int64_t rdi18;
    int32_t** rax19;
    int32_t* rdi20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t* rax26;
    int64_t rdi27;
    int64_t* rax28;
    int64_t rdi29;
    int64_t v30;

    rax5 = g604;
    rdi6 = *rax5;
    rsi7 = reinterpret_cast<int32_t*>(0x60e);
    fun_61c(rdi6);
    *reinterpret_cast<int32_t*>(rbp8 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp9 - 36) < *reinterpret_cast<int32_t*>(rbp10 - 4)) {
        *reinterpret_cast<int32_t*>(rbp11 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp12 - 40) < *reinterpret_cast<int32_t*>(rbp13 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp14 - 36) * *reinterpret_cast<int32_t*>(rbp15 - 8) + *reinterpret_cast<int32_t*>(rbp16 - 40)) % 20 == fprintf)) {
                rax17 = g664;
                rdi18 = *rax17;
                rsi7 = reinterpret_cast<int32_t*>(0x66e);
                fun_675(rdi18);
            }
            rax19 = g67c;
            rdi20 = *rax19;
            rcx = *reinterpret_cast<int32_t*>(rbp21 - 40);
            *rdi20 = *rsi7;
            rsi7 = reinterpret_cast<int32_t*>(0x6a1);
            fun_6a8(rdi20 + 1);
            *reinterpret_cast<int32_t*>(rbp22 - 40) = *reinterpret_cast<int32_t*>(rbp23 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp24 - 36) = *reinterpret_cast<int32_t*>(rbp25 - 36) + 1;
    }
    rax26 = g6d0;
    rdi27 = *rax26;
    fun_6e8(rdi27, 0x6da, 0x6e1, rcx);
    rax28 = g6ef;
    rdi29 = *rax28;
    fun_700(rdi29, 0x6f9, 0x6e1, rcx);
    goto v30;
}

void fun_6e8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g6ef;
    rdi6 = *rax5;
    fun_700(rdi6, 0x6f9, rdx, rcx);
    goto v7;
}

void fun_61c(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t* rax11;
    int64_t rdi12;
    int32_t* rsi13;
    int32_t** rax14;
    int32_t* rdi15;
    int64_t rcx16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t* rax22;
    int64_t rdi23;
    int64_t* rax24;
    int64_t rdi25;
    int64_t v26;

    *reinterpret_cast<int32_t*>(rbp2 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 36) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        *reinterpret_cast<int32_t*>(rbp5 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp6 - 40) < *reinterpret_cast<int32_t*>(rbp7 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp8 - 36) * *reinterpret_cast<int32_t*>(rbp9 - 8) + *reinterpret_cast<int32_t*>(rbp10 - 40)) % 20 == fprintf)) {
                rax11 = g664;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x66e);
                fun_675(rdi12);
            }
            rax14 = g67c;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 40);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x6a1);
            fun_6a8(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 40) = *reinterpret_cast<int32_t*>(rbp19 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 36) = *reinterpret_cast<int32_t*>(rbp21 - 36) + 1;
    }
    rax22 = g6d0;
    rdi23 = *rax22;
    fun_6e8(rdi23, 0x6da, 0x6e1, rcx16);
    rax24 = g6ef;
    rdi25 = *rax24;
    fun_700(rdi25, 0x6f9, 0x6e1, rcx16);
    goto v26;
}

void fun_700(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fprintf() {
}

void fun_70(int32_t edi) {
    int32_t esi2;
    int64_t rbp3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rcx6;
    int64_t rbp7;
    int64_t r8_8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;

    esi2 = *reinterpret_cast<int32_t*>(rbp3 - 24);
    rdx4 = *reinterpret_cast<int64_t*>(rbp5 - 32);
    rcx6 = *reinterpret_cast<int64_t*>(rbp7 - 40);
    r8_8 = *reinterpret_cast<int64_t*>(rbp9 - 48);
    kernel_gramschmidt(edi, esi2, rdx4, rcx6, r8_8);
    if (*reinterpret_cast<int32_t*>(rbp10 - 4) <= 42) 
        goto 0xc1;
    rdi11 = **reinterpret_cast<int64_t**>(rbp12 - 16);
    fun_a1(rdi11, 0x9c, rdx4, rcx6, r8_8);
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    int32_t f4;
};

void init_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8) {
    struct s0* rdi1;
    struct s1* rsi2;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    struct s2* rdi10;
    struct s3* rsi11;
    struct s4* rdi12;
    struct s5* rsi13;
    struct s6* rdi14;
    struct s7* rsi15;
    int32_t v16;
    int32_t v17;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v6 = *reinterpret_cast<int32_t*>(&rdi1);
    v7 = *reinterpret_cast<int32_t*>(&rsi2);
    v8 = reinterpret_cast<int32_t>(fprintf);
    while (v8 < v6) {
        v9 = reinterpret_cast<int32_t>(fprintf);
        while (v9 < v7) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi1->f0 = rsi2->f0;
            rdi10 = reinterpret_cast<struct s2*>(&rdi1->f4);
            rsi11 = reinterpret_cast<struct s3*>(&rsi2->f4);
            __asm__("mulsd xmm0, xmm1");
            rdi10->f0 = rsi11->f0;
            rdi12 = reinterpret_cast<struct s4*>(&rdi10->f4);
            rsi13 = reinterpret_cast<struct s5*>(&rsi11->f4);
            __asm__("addsd xmm0, xmm1");
            rdi12->f0 = rsi13->f0;
            rdi14 = reinterpret_cast<struct s6*>(&rdi12->f4);
            rsi15 = reinterpret_cast<struct s7*>(&rsi13->f4);
            __asm__("xorps xmm0, xmm0");
            rdi14->f0 = rsi15->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi14->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi15->f4);
            ++v9;
        }
        ++v8;
    }
    v16 = reinterpret_cast<int32_t>(fprintf);
    while (v16 < v7) {
        v17 = reinterpret_cast<int32_t>(fprintf);
        while (v17 < v7) {
            __asm__("xorps xmm0, xmm0");
            rdi1->f0 = rsi2->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi1->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi2->f4);
            ++v17;
        }
        ++v16;
    }
    return;
}

