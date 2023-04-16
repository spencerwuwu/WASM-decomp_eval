
void fprintf();

void fun_273();

void fun_1a5() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* rdi7;
    int32_t* rsi8;
    int1_t cf9;
    int32_t* rdi10;
    int32_t* rsi11;
    int32_t* rdi12;
    int32_t* rsi13;
    int32_t* rdi14;
    int32_t* rsi15;
    int32_t* rdi16;
    int32_t* rsi17;
    int32_t* rdi18;
    int32_t* rsi19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int32_t* rdi24;
    int32_t* rsi25;
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
    int32_t* rdi38;
    int32_t* rsi39;
    int32_t* rdi40;
    int32_t* rsi41;
    int32_t* rdi42;
    int32_t* rsi43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int32_t* rdi50;
    int32_t* rsi51;
    int32_t* rdi52;
    int32_t* rsi53;
    int32_t* rdi54;
    int32_t* rsi55;
    int32_t* rdi56;
    int32_t* rsi57;
    int32_t* rdi58;
    int32_t* rsi59;
    int64_t rbp60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    int32_t* rdi67;
    int32_t* rsi68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rbp71;
    int64_t rbp72;
    int32_t* rdi73;
    int32_t* rsi74;
    int64_t rbp75;
    int64_t rbp76;
    int64_t rbp77;
    int32_t* rdi78;
    int32_t* rsi79;
    int32_t* rdi80;
    int32_t* rsi81;
    int32_t* rdi82;
    int32_t* rsi83;
    int64_t rbp84;
    int64_t rbp85;
    int32_t* rdi86;
    int32_t* rsi87;
    int64_t rbp88;
    int64_t rbp89;
    int64_t rbp90;
    int64_t rbp91;
    int64_t v92;

    while (1) {
        *rdi1 = *rsi2;
        rdi3 = rdi1 + 1;
        rsi4 = rsi2 + 1;
        *rdi3 = *rsi4;
        rdi5 = rdi3 + 1;
        rsi6 = rsi4 + 1;
        *rdi5 = *rsi6;
        rdi7 = rdi5 + 1;
        rsi8 = rsi6 + 1;
        __asm__("ucomisd xmm0, xmm1");
        if (cf9) {
            *rdi7 = *rsi8;
            rdi10 = rdi7 + 1;
            rsi11 = rsi8 + 1;
            *rdi10 = *rsi11;
            rdi12 = rdi10 + 1;
            rsi13 = rsi11 + 1;
        } else {
            *rdi7 = *rsi8;
            rdi14 = rdi7 + 1;
            rsi15 = rsi8 + 1;
            *rdi14 = *rsi15;
            rdi12 = rdi14 + 1;
            rsi13 = rsi15 + 1;
        }
        *rdi12 = *rsi13;
        rdi16 = rdi12 + 1;
        rsi17 = rsi13 + 1;
        *rdi16 = *rsi17;
        rdi18 = rdi16 + 1;
        rsi19 = rsi17 + 1;
        *reinterpret_cast<int32_t*>(rbp20 - 56) = *reinterpret_cast<int32_t*>(rbp21 - 56) + 1;
        if (*reinterpret_cast<int32_t*>(rbp22 - 56) >= *reinterpret_cast<int32_t*>(rbp23 - 4)) 
            break;
        __asm__("xorps xmm0, xmm0");
        *rdi18 = *rsi19;
        rdi24 = rdi18 + 1;
        rsi25 = rsi19 + 1;
        *reinterpret_cast<int32_t*>(rbp26 - 52) = reinterpret_cast<int32_t>(fprintf);
        while (cf9 = *reinterpret_cast<uint32_t*>(rbp27 - 52) < *reinterpret_cast<uint32_t*>(rbp28 - 8), *reinterpret_cast<int32_t*>(rbp27 - 52) < *reinterpret_cast<int32_t*>(rbp29 - 8)) {
            *rdi24 = *rsi25;
            rdi30 = rdi24 + 1;
            rsi31 = rsi25 + 1;
            __asm__("subsd xmm0, [rax+rcx*8]");
            *rdi30 = *rsi31;
            rdi32 = rdi30 + 1;
            rsi33 = rsi31 + 1;
            __asm__("subsd xmm2, [rax+rcx*8]");
            *rdi32 = *rsi33;
            rdi34 = rdi32 + 1;
            rsi35 = rsi33 + 1;
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            *rdi34 = *rsi35;
            rdi24 = rdi34 + 1;
            rsi25 = rsi35 + 1;
            *reinterpret_cast<int32_t*>(rbp36 - 52) = *reinterpret_cast<int32_t*>(rbp37 - 52) + 1;
        }
        *rdi24 = *rsi25;
        rdi38 = rdi24 + 1;
        rsi39 = rsi25 + 1;
        *rdi38 = *rsi39;
        rdi40 = rdi38 + 1;
        rsi41 = rsi39 + 1;
        __asm__("divsd xmm0, xmm1");
        *rdi40 = *rsi41;
        rdi42 = rdi40 + 1;
        rsi43 = rsi41 + 1;
        *rdi42 = *rsi43;
        rdi1 = rdi42 + 1;
        rsi2 = rsi43 + 1;
        fun_1a5();
    }
    *reinterpret_cast<int32_t*>(rbp44 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp45 - 52) < *reinterpret_cast<int32_t*>(rbp46 - 8)) {
        *reinterpret_cast<int32_t*>(rbp47 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp48 - 56) < *reinterpret_cast<int32_t*>(rbp49 - 4)) {
            *rdi18 = *rsi19;
            rdi50 = rdi18 + 1;
            rsi51 = rsi19 + 1;
            *rdi50 = *rsi51;
            rdi52 = rdi50 + 1;
            rsi53 = rsi51 + 1;
            __asm__("subsd xmm0, xmm1");
            *rdi52 = *rsi53;
            rdi54 = rdi52 + 1;
            rsi55 = rsi53 + 1;
            *rdi54 = *rsi55;
            rdi56 = rdi54 + 1;
            rsi57 = rsi55 + 1;
            fun_273();
            __asm__("movaps xmm1, xmm0");
            __asm__("mulsd xmm1, [rax+rcx*8]");
            *rdi56 = *rsi57;
            rdi58 = rdi56 + 1;
            rsi59 = rsi57 + 1;
            __asm__("divsd xmm0, xmm1");
            *rdi58 = *rsi59;
            rdi18 = rdi58 + 1;
            rsi19 = rsi59 + 1;
            *reinterpret_cast<int32_t*>(rbp60 - 56) = *reinterpret_cast<int32_t*>(rbp61 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp62 - 52) = *reinterpret_cast<int32_t*>(rbp63 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp64 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp65 - 52) < *reinterpret_cast<int32_t*>(rbp66 - 4) - 1) {
        *rdi18 = *rsi19;
        rdi67 = rdi18 + 1;
        rsi68 = rsi19 + 1;
        *rdi67 = *rsi68;
        rdi18 = rdi67 + 1;
        rsi19 = rsi68 + 1;
        *reinterpret_cast<int32_t*>(rbp69 - 56) = *reinterpret_cast<int32_t*>(rbp70 - 52) + 1;
        while (*reinterpret_cast<int32_t*>(rbp71 - 56) < *reinterpret_cast<int32_t*>(rbp72 - 4)) {
            __asm__("xorps xmm0, xmm0");
            *rdi18 = *rsi19;
            rdi73 = rdi18 + 1;
            rsi74 = rsi19 + 1;
            *reinterpret_cast<int32_t*>(rbp75 - 60) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp76 - 60) < *reinterpret_cast<int32_t*>(rbp77 - 8)) {
                *rdi73 = *rsi74;
                rdi78 = rdi73 + 1;
                rsi79 = rsi74 + 1;
                *rdi78 = *rsi79;
                rdi80 = rdi78 + 1;
                rsi81 = rsi79 + 1;
                *rdi80 = *rsi81;
                rdi82 = rdi80 + 1;
                rsi83 = rsi81 + 1;
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi82 = *rsi83;
                rdi73 = rdi82 + 1;
                rsi74 = rsi83 + 1;
                *reinterpret_cast<int32_t*>(rbp84 - 60) = *reinterpret_cast<int32_t*>(rbp85 - 60) + 1;
            }
            *rdi73 = *rsi74;
            rdi86 = rdi73 + 1;
            rsi87 = rsi74 + 1;
            *rdi86 = *rsi87;
            rdi18 = rdi86 + 1;
            rsi19 = rsi87 + 1;
            *reinterpret_cast<int32_t*>(rbp88 - 56) = *reinterpret_cast<int32_t*>(rbp89 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp90 - 52) = *reinterpret_cast<int32_t*>(rbp91 - 52) + 1;
    }
    *rdi18 = *rsi19;
    rdi18[1] = rsi19[1];
    goto v92;
}

void fun_273() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* rdi5;
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
    int32_t* rdi16;
    int32_t* rsi17;
    int32_t* rdi18;
    int32_t* rsi19;
    int32_t* rdi20;
    int32_t* rsi21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int32_t* rdi25;
    int32_t* rsi26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int32_t* rdi31;
    int32_t* rsi32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int32_t* rdi36;
    int32_t* rsi37;
    int32_t* rdi38;
    int32_t* rsi39;
    int32_t* rdi40;
    int32_t* rsi41;
    int64_t rbp42;
    int64_t rbp43;
    int32_t* rdi44;
    int32_t* rsi45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t v50;

    while (1) {
        __asm__("movaps xmm1, xmm0");
        __asm__("mulsd xmm1, [rax+rcx*8]");
        *rdi1 = *rsi2;
        rdi3 = rdi1 + 1;
        rsi4 = rsi2 + 1;
        __asm__("divsd xmm0, xmm1");
        *rdi3 = *rsi4;
        rdi5 = rdi3 + 1;
        rsi6 = rsi4 + 1;
        *reinterpret_cast<int32_t*>(rbp7 - 56) = *reinterpret_cast<int32_t*>(rbp8 - 56) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 56) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) {
            *reinterpret_cast<int32_t*>(rbp11 - 52) = *reinterpret_cast<int32_t*>(rbp12 - 52) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 52) >= *reinterpret_cast<int32_t*>(rbp14 - 8)) 
                goto addr_2c8_12;
            *reinterpret_cast<int32_t*>(rbp15 - 56) = reinterpret_cast<int32_t>(fprintf);
        }
        *rdi5 = *rsi6;
        rdi16 = rdi5 + 1;
        rsi17 = rsi6 + 1;
        *rdi16 = *rsi17;
        rdi18 = rdi16 + 1;
        rsi19 = rsi17 + 1;
        __asm__("subsd xmm0, xmm1");
        *rdi18 = *rsi19;
        rdi20 = rdi18 + 1;
        rsi21 = rsi19 + 1;
        *rdi20 = *rsi21;
        rdi1 = rdi20 + 1;
        rsi2 = rsi21 + 1;
        fun_273();
    }
    addr_2c8_12:
    *reinterpret_cast<int32_t*>(rbp22 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp23 - 52) < *reinterpret_cast<int32_t*>(rbp24 - 4) - 1) {
        *rdi5 = *rsi6;
        rdi25 = rdi5 + 1;
        rsi26 = rsi6 + 1;
        *rdi25 = *rsi26;
        rdi5 = rdi25 + 1;
        rsi6 = rsi26 + 1;
        *reinterpret_cast<int32_t*>(rbp27 - 56) = *reinterpret_cast<int32_t*>(rbp28 - 52) + 1;
        while (*reinterpret_cast<int32_t*>(rbp29 - 56) < *reinterpret_cast<int32_t*>(rbp30 - 4)) {
            __asm__("xorps xmm0, xmm0");
            *rdi5 = *rsi6;
            rdi31 = rdi5 + 1;
            rsi32 = rsi6 + 1;
            *reinterpret_cast<int32_t*>(rbp33 - 60) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp34 - 60) < *reinterpret_cast<int32_t*>(rbp35 - 8)) {
                *rdi31 = *rsi32;
                rdi36 = rdi31 + 1;
                rsi37 = rsi32 + 1;
                *rdi36 = *rsi37;
                rdi38 = rdi36 + 1;
                rsi39 = rsi37 + 1;
                *rdi38 = *rsi39;
                rdi40 = rdi38 + 1;
                rsi41 = rsi39 + 1;
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi40 = *rsi41;
                rdi31 = rdi40 + 1;
                rsi32 = rsi41 + 1;
                *reinterpret_cast<int32_t*>(rbp42 - 60) = *reinterpret_cast<int32_t*>(rbp43 - 60) + 1;
            }
            *rdi31 = *rsi32;
            rdi44 = rdi31 + 1;
            rsi45 = rsi32 + 1;
            *rdi44 = *rsi45;
            rdi5 = rdi44 + 1;
            rsi6 = rsi45 + 1;
            *reinterpret_cast<int32_t*>(rbp46 - 56) = *reinterpret_cast<int32_t*>(rbp47 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp48 - 52) = *reinterpret_cast<int32_t*>(rbp49 - 52) + 1;
    }
    *rdi5 = *rsi6;
    rdi5[1] = rsi6[1];
    goto v50;
}

void fun_517(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

int32_t fun_4f9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_520(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_529(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_532(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_4dc(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
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

    if (*reinterpret_cast<int32_t*>(rbp8 - 4) <= 42) {
        addr_50e_2:
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
        fun_517(rdi9, rsi, rdx, rcx, r8, r9, __return_address());
    } else {
        rdi11 = **reinterpret_cast<int64_t**>(rbp12 - 16);
        rsi = 0x4f4;
        eax13 = fun_4f9(rdi11, 0x4f4, rdx, rcx, r8, r9, __return_address());
        if (!reinterpret_cast<int1_t>(eax13 == fprintf)) 
            goto addr_50e_2; else 
            goto addr_502_5;
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
    fun_520(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 56);
    fun_529(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 64);
    fun_532(rdi18, rsi, rdx, rcx, r8, r9, __return_address());
    goto v20;
    addr_502_5:
    edi21 = *reinterpret_cast<int32_t*>(rbp22 - 24);
    rsi = *reinterpret_cast<int64_t*>(rbp23 - 48);
    print_array(edi21, rsi, rdx, rcx, r8, r9, __return_address());
    goto addr_50e_2;
}

int32_t fun_4f9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t eax8;
    int32_t edi9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t v20;

    if (reinterpret_cast<int1_t>(eax8 == fprintf)) {
        edi9 = *reinterpret_cast<int32_t*>(rbp10 - 24);
        rsi = *reinterpret_cast<int64_t*>(rbp11 - 48);
        print_array(edi9, rsi, rdx, rcx, r8, r9, __return_address());
    }
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 40);
    fun_517(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
    fun_520(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 56);
    fun_529(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 64);
    fun_532(rdi18, rsi, rdx, rcx, r8, r9, __return_address());
    goto v20;
}

int64_t* g606 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_617(int64_t rdi, int64_t rsi);

int64_t* g61e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_636(int64_t rdi);

int64_t* g67e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_68f(int64_t rdi);

int32_t** g696 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_6c2(int64_t rdi);

int64_t* g6ea = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_702(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g709 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_71a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    int64_t* rax9;
    int64_t rdi10;
    int64_t* rax11;
    int64_t rdi12;
    int32_t* rsi13;
    int32_t v14;
    int32_t v15;
    int64_t* rax16;
    int64_t rdi17;
    int32_t** rax18;
    int32_t* rdi19;
    int64_t* rax20;
    int64_t rdi21;
    int64_t* rax22;
    int64_t rdi23;

    v8 = edi;
    rax9 = g606;
    rdi10 = *rax9;
    fun_617(rdi10, 0x610);
    rax11 = g61e;
    rdi12 = *rax11;
    rsi13 = reinterpret_cast<int32_t*>(0x628);
    fun_636(rdi12);
    v14 = reinterpret_cast<int32_t>(fprintf);
    while (v14 < v8) {
        v15 = reinterpret_cast<int32_t>(fprintf);
        while (v15 < v8) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v14 * v8 + v15) % 20 == fprintf)) {
                rax16 = g67e;
                rdi17 = *rax16;
                rsi13 = reinterpret_cast<int32_t*>(0x688);
                fun_68f(rdi17);
            }
            rax18 = g696;
            rdi19 = *rax18;
            rcx = v15;
            *rdi19 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x6bb);
            fun_6c2(rdi19 + 1);
            ++v15;
        }
        ++v14;
    }
    rax20 = g6ea;
    rdi21 = *rax20;
    fun_702(rdi21, 0x6f4, 0x6fb, rcx);
    rax22 = g709;
    rdi23 = *rax22;
    fun_71a(rdi23, 0x713, 0x6fb, rcx);
    return;
}

void fun_517(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t v14;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 48);
    fun_520(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 56);
    fun_529(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 64);
    fun_532(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    goto v14;
}

void fun_68f(int64_t rdi) {
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
        rax2 = g696;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x6bb);
        fun_6c2(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_6e3_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g67e;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x688);
        fun_68f(rdi20);
    }
    addr_6e3_10:
    rax21 = g6ea;
    rdi22 = *rax21;
    fun_702(rdi22, 0x6f4, 0x6fb, rcx4);
    rax23 = g709;
    rdi24 = *rax23;
    fun_71a(rdi24, 0x713, 0x6fb, rcx4);
    goto v25;
}

void fun_6c2(int64_t rdi) {
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
        *reinterpret_cast<int32_t*>(rbp2 - 24) = *reinterpret_cast<int32_t*>(rbp3 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp4 - 24) >= *reinterpret_cast<int32_t*>(rbp5 - 4)) {
            *reinterpret_cast<int32_t*>(rbp6 - 20) = *reinterpret_cast<int32_t*>(rbp7 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp8 - 20) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
                goto addr_6e3_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g67e;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x688);
            fun_68f(rdi15);
        }
        rax17 = g696;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x6bb);
        fun_6c2(rdi18 + 1);
    }
    addr_6e3_6:
    rax21 = g6ea;
    rdi22 = *rax21;
    fun_702(rdi22, 0x6f4, 0x6fb, rcx19);
    rax23 = g709;
    rdi24 = *rax23;
    fun_71a(rdi24, 0x713, 0x6fb, rcx19);
    goto v25;
}

int64_t fun_47f(int64_t rdi, int64_t rsi);

int64_t fun_492(int64_t rdi, int64_t rsi);

int64_t fun_4a5(int64_t rdi, int64_t rsi);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

int64_t init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx);

void fun_46c(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    struct s0* rdi11;
    int64_t rbp12;
    struct s1* rsi13;
    int64_t rbp14;
    int64_t rcx15;
    int64_t rbp16;
    int64_t rbp17;
    int32_t* rdi18;
    int64_t rbp19;
    int32_t* rsi20;
    int64_t rbp21;
    int64_t rsi22;
    int64_t rdx23;
    int64_t rbp24;
    int64_t rcx25;
    int64_t rbp26;
    int64_t r8_27;
    int64_t rbp28;
    int64_t r9_29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rdi32;
    int64_t rbp33;
    int64_t rdi34;
    int64_t rbp35;
    int32_t eax36;
    int64_t rdi37;
    int64_t rbp38;
    int64_t rdi39;
    int64_t rbp40;
    int64_t rdi41;
    int64_t rbp42;
    int64_t v43;
    int32_t edi44;
    int64_t rbp45;
    int64_t rbp46;

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    rax5 = fun_47f(0x15f900, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 48) = rax5;
    rax7 = fun_492(0x4b0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 56) = rax7;
    rax9 = fun_4a5(0x4b0, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 64) = rax9;
    *reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<int32_t*>(rbp12 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi13) = *reinterpret_cast<int32_t*>(rbp14 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx15 = *reinterpret_cast<int64_t*>(rbp16 - 40);
    init_array(rdi11, rsi13, rbp17 - 32, rcx15);
    *reinterpret_cast<int32_t*>(&rdi18) = *reinterpret_cast<int32_t*>(rbp19 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi20) = *reinterpret_cast<int32_t*>(rbp21 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(fprintf);
    *rdi18 = *rsi20;
    rsi22 = reinterpret_cast<int64_t>(rsi20 + 1);
    rdx23 = *reinterpret_cast<int64_t*>(rbp24 - 40);
    rcx25 = *reinterpret_cast<int64_t*>(rbp26 - 48);
    r8_27 = *reinterpret_cast<int64_t*>(rbp28 - 56);
    r9_29 = *reinterpret_cast<int64_t*>(rbp30 - 64);
    fun_4dc(rdi18 + 1, rsi22, rdx23, rcx25, r8_27, r9_29, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp31 - 4) <= 42) {
        addr_50e_9:
        rdi32 = *reinterpret_cast<int64_t*>(rbp33 - 40);
        fun_517(rdi32, rsi22, rdx23, rcx25, r8_27, r9_29, __return_address());
    } else {
        rdi34 = **reinterpret_cast<int64_t**>(rbp35 - 16);
        rsi22 = 0x4f4;
        eax36 = fun_4f9(rdi34, 0x4f4, rdx23, rcx25, r8_27, r9_29, __return_address());
        if (!reinterpret_cast<int1_t>(eax36 == fprintf)) 
            goto addr_50e_9; else 
            goto addr_502_12;
    }
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 48);
    fun_520(rdi37, rsi22, rdx23, rcx25, r8_27, r9_29, __return_address());
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 56);
    fun_529(rdi39, rsi22, rdx23, rcx25, r8_27, r9_29, __return_address());
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 64);
    fun_532(rdi41, rsi22, rdx23, rcx25, r8_27, r9_29, __return_address());
    goto v43;
    addr_502_12:
    edi44 = *reinterpret_cast<int32_t*>(rbp45 - 24);
    rsi22 = *reinterpret_cast<int64_t*>(rbp46 - 48);
    print_array(edi44, rsi22, rdx23, rcx25, r8_27, r9_29, __return_address());
    goto addr_50e_9;
}

void fun_617(int64_t rdi, int64_t rsi) {
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
    int64_t v29;

    rax3 = g61e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x628);
    fun_636(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g67e;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x688);
                fun_68f(rdi16);
            }
            rax17 = g696;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x6bb);
            fun_6c2(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g6ea;
    rdi26 = *rax25;
    fun_702(rdi26, 0x6f4, 0x6fb, rcx19);
    rax27 = g709;
    rdi28 = *rax27;
    fun_71a(rdi28, 0x713, 0x6fb, rcx19);
    goto v29;
}

void fun_520(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    fun_529(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 64);
    fun_532(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    goto v12;
}

int64_t fun_47f(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    struct s0* rdi9;
    int64_t rbp10;
    struct s1* rsi11;
    int64_t rbp12;
    int64_t rcx13;
    int64_t rbp14;
    int64_t rbp15;
    int32_t* rdi16;
    int64_t rbp17;
    int32_t* rsi18;
    int64_t rbp19;
    int64_t rsi20;
    int64_t rdx21;
    int64_t rbp22;
    int64_t rcx23;
    int64_t rbp24;
    int64_t r8_25;
    int64_t rbp26;
    int64_t r9_27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rdi30;
    int64_t rbp31;
    int64_t rdi32;
    int64_t rbp33;
    int32_t eax34;
    int64_t rdi35;
    int64_t rbp36;
    int64_t rdi37;
    int64_t rbp38;
    int64_t rdi39;
    int64_t rbp40;
    int64_t v41;
    int32_t edi42;
    int64_t rbp43;
    int64_t rbp44;

    *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
    rax5 = fun_492(0x4b0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 56) = rax5;
    rax7 = fun_4a5(0x4b0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 64) = rax7;
    *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi11) = *reinterpret_cast<int32_t*>(rbp12 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx13 = *reinterpret_cast<int64_t*>(rbp14 - 40);
    init_array(rdi9, rsi11, rbp15 - 32, rcx13);
    *reinterpret_cast<int32_t*>(&rdi16) = *reinterpret_cast<int32_t*>(rbp17 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi18) = *reinterpret_cast<int32_t*>(rbp19 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fprintf);
    *rdi16 = *rsi18;
    rsi20 = reinterpret_cast<int64_t>(rsi18 + 1);
    rdx21 = *reinterpret_cast<int64_t*>(rbp22 - 40);
    rcx23 = *reinterpret_cast<int64_t*>(rbp24 - 48);
    r8_25 = *reinterpret_cast<int64_t*>(rbp26 - 56);
    r9_27 = *reinterpret_cast<int64_t*>(rbp28 - 64);
    fun_4dc(rdi16 + 1, rsi20, rdx21, rcx23, r8_25, r9_27, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp29 - 4) <= 42) {
        addr_50e_8:
        rdi30 = *reinterpret_cast<int64_t*>(rbp31 - 40);
        fun_517(rdi30, rsi20, rdx21, rcx23, r8_25, r9_27, __return_address());
    } else {
        rdi32 = **reinterpret_cast<int64_t**>(rbp33 - 16);
        rsi20 = 0x4f4;
        eax34 = fun_4f9(rdi32, 0x4f4, rdx21, rcx23, r8_25, r9_27, __return_address());
        if (!reinterpret_cast<int1_t>(eax34 == fprintf)) 
            goto addr_50e_8; else 
            goto addr_502_11;
    }
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 48);
    fun_520(rdi35, rsi20, rdx21, rcx23, r8_25, r9_27, __return_address());
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 56);
    fun_529(rdi37, rsi20, rdx21, rcx23, r8_25, r9_27, __return_address());
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 64);
    fun_532(rdi39, rsi20, rdx21, rcx23, r8_25, r9_27, __return_address());
    goto v41;
    addr_502_11:
    edi42 = *reinterpret_cast<int32_t*>(rbp43 - 24);
    rsi20 = *reinterpret_cast<int64_t*>(rbp44 - 48);
    print_array(edi42, rsi20, rdx21, rcx23, r8_25, r9_27, __return_address());
    goto addr_50e_8;
}

void fun_636(int64_t rdi) {
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

    *reinterpret_cast<int32_t*>(rbp2 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 20) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        *reinterpret_cast<int32_t*>(rbp5 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp6 - 24) < *reinterpret_cast<int32_t*>(rbp7 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp8 - 20) * *reinterpret_cast<int32_t*>(rbp9 - 4) + *reinterpret_cast<int32_t*>(rbp10 - 24)) % 20 == fprintf)) {
                rax11 = g67e;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x688);
                fun_68f(rdi12);
            }
            rax14 = g696;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x6bb);
            fun_6c2(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g6ea;
    rdi23 = *rax22;
    fun_702(rdi23, 0x6f4, 0x6fb, rcx16);
    rax24 = g709;
    rdi25 = *rax24;
    fun_71a(rdi25, 0x713, 0x6fb, rcx16);
    goto v26;
}

void fun_529(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 64);
    fun_532(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v10;
}

int64_t fun_492(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    struct s0* rdi7;
    int64_t rbp8;
    struct s1* rsi9;
    int64_t rbp10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t rbp13;
    int32_t* rdi14;
    int64_t rbp15;
    int32_t* rsi16;
    int64_t rbp17;
    int64_t rsi18;
    int64_t rdx19;
    int64_t rbp20;
    int64_t rcx21;
    int64_t rbp22;
    int64_t r8_23;
    int64_t rbp24;
    int64_t r9_25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rdi28;
    int64_t rbp29;
    int64_t rdi30;
    int64_t rbp31;
    int32_t eax32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t rdi35;
    int64_t rbp36;
    int64_t rdi37;
    int64_t rbp38;
    int64_t v39;
    int32_t edi40;
    int64_t rbp41;
    int64_t rbp42;

    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    rax5 = fun_4a5(0x4b0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 64) = rax5;
    *reinterpret_cast<int32_t*>(&rdi7) = *reinterpret_cast<int32_t*>(rbp8 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi9) = *reinterpret_cast<int32_t*>(rbp10 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    init_array(rdi7, rsi9, rbp13 - 32, rcx11);
    *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(rbp15 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi16) = *reinterpret_cast<int32_t*>(rbp17 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fprintf);
    *rdi14 = *rsi16;
    rsi18 = reinterpret_cast<int64_t>(rsi16 + 1);
    rdx19 = *reinterpret_cast<int64_t*>(rbp20 - 40);
    rcx21 = *reinterpret_cast<int64_t*>(rbp22 - 48);
    r8_23 = *reinterpret_cast<int64_t*>(rbp24 - 56);
    r9_25 = *reinterpret_cast<int64_t*>(rbp26 - 64);
    fun_4dc(rdi14 + 1, rsi18, rdx19, rcx21, r8_23, r9_25, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp27 - 4) <= 42) {
        addr_50e_7:
        rdi28 = *reinterpret_cast<int64_t*>(rbp29 - 40);
        fun_517(rdi28, rsi18, rdx19, rcx21, r8_23, r9_25, __return_address());
    } else {
        rdi30 = **reinterpret_cast<int64_t**>(rbp31 - 16);
        rsi18 = 0x4f4;
        eax32 = fun_4f9(rdi30, 0x4f4, rdx19, rcx21, r8_23, r9_25, __return_address());
        if (!reinterpret_cast<int1_t>(eax32 == fprintf)) 
            goto addr_50e_7; else 
            goto addr_502_10;
    }
    rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 48);
    fun_520(rdi33, rsi18, rdx19, rcx21, r8_23, r9_25, __return_address());
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 56);
    fun_529(rdi35, rsi18, rdx19, rcx21, r8_23, r9_25, __return_address());
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 64);
    fun_532(rdi37, rsi18, rdx19, rcx21, r8_23, r9_25, __return_address());
    goto v39;
    addr_502_10:
    edi40 = *reinterpret_cast<int32_t*>(rbp41 - 24);
    rsi18 = *reinterpret_cast<int64_t*>(rbp42 - 48);
    print_array(edi40, rsi18, rdx19, rcx21, r8_23, r9_25, __return_address());
    goto addr_50e_7;
}

void fun_532(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t v8;

    goto v8;
}

void fun_702(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g709;
    rdi6 = *rax5;
    fun_71a(rdi6, 0x713, rdx, rcx);
    goto v7;
}

int64_t fun_4a5(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    struct s0* rdi5;
    int64_t rbp6;
    struct s1* rsi7;
    int64_t rbp8;
    int64_t rcx9;
    int64_t rbp10;
    int64_t rbp11;
    int32_t* rdi12;
    int64_t rbp13;
    int32_t* rsi14;
    int64_t rbp15;
    int64_t rsi16;
    int64_t rdx17;
    int64_t rbp18;
    int64_t rcx19;
    int64_t rbp20;
    int64_t r8_21;
    int64_t rbp22;
    int64_t r9_23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rdi26;
    int64_t rbp27;
    int64_t rdi28;
    int64_t rbp29;
    int32_t eax30;
    int64_t rdi31;
    int64_t rbp32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t rdi35;
    int64_t rbp36;
    int64_t v37;
    int32_t edi38;
    int64_t rbp39;
    int64_t rbp40;

    *reinterpret_cast<int64_t*>(rbp3 - 64) = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(rbp6 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi7) = *reinterpret_cast<int32_t*>(rbp8 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
    init_array(rdi5, rsi7, rbp11 - 32, rcx9);
    *reinterpret_cast<int32_t*>(&rdi12) = *reinterpret_cast<int32_t*>(rbp13 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi14) = *reinterpret_cast<int32_t*>(rbp15 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fprintf);
    *rdi12 = *rsi14;
    rsi16 = reinterpret_cast<int64_t>(rsi14 + 1);
    rdx17 = *reinterpret_cast<int64_t*>(rbp18 - 40);
    rcx19 = *reinterpret_cast<int64_t*>(rbp20 - 48);
    r8_21 = *reinterpret_cast<int64_t*>(rbp22 - 56);
    r9_23 = *reinterpret_cast<int64_t*>(rbp24 - 64);
    fun_4dc(rdi12 + 1, rsi16, rdx17, rcx19, r8_21, r9_23, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp25 - 4) <= 42) {
        addr_50e_6:
        rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 40);
        fun_517(rdi26, rsi16, rdx17, rcx19, r8_21, r9_23, __return_address());
    } else {
        rdi28 = **reinterpret_cast<int64_t**>(rbp29 - 16);
        rsi16 = 0x4f4;
        eax30 = fun_4f9(rdi28, 0x4f4, rdx17, rcx19, r8_21, r9_23, __return_address());
        if (!reinterpret_cast<int1_t>(eax30 == fprintf)) 
            goto addr_50e_6; else 
            goto addr_502_9;
    }
    rdi31 = *reinterpret_cast<int64_t*>(rbp32 - 48);
    fun_520(rdi31, rsi16, rdx17, rcx19, r8_21, r9_23, __return_address());
    rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 56);
    fun_529(rdi33, rsi16, rdx17, rcx19, r8_21, r9_23, __return_address());
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 64);
    fun_532(rdi35, rsi16, rdx17, rcx19, r8_21, r9_23, __return_address());
    goto v37;
    addr_502_9:
    edi38 = *reinterpret_cast<int32_t*>(rbp39 - 24);
    rsi16 = *reinterpret_cast<int64_t*>(rbp40 - 48);
    print_array(edi38, rsi16, rdx17, rcx19, r8_21, r9_23, __return_address());
    goto addr_50e_6;
}

void fun_71a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

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

int64_t init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx) {
    int64_t rax5;
    struct s2* rdi6;
    struct s3* rsi7;
    struct s4* rdi8;
    struct s5* rsi9;
    int32_t v10;
    int32_t v11;
    struct s6* rdi12;
    struct s7* rsi13;

    rax5 = rdx;
    rdi->f0 = rsi->f0;
    rdi6 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi7 = reinterpret_cast<struct s3*>(&rsi->f4);
    rdi6->f0 = rsi7->f0;
    rdi8 = reinterpret_cast<struct s4*>(&rdi6->f4);
    rsi9 = reinterpret_cast<struct s5*>(&rsi7->f4);
    v10 = reinterpret_cast<int32_t>(fprintf);
    while (v10 < 0x578) {
        v11 = reinterpret_cast<int32_t>(fprintf);
        while (v11 < 0x4b0) {
            __asm__("cvtsi2sd xmm0, eax");
            rdi8->f0 = rsi9->f0;
            rdi12 = reinterpret_cast<struct s6*>(&rdi8->f4);
            rsi13 = reinterpret_cast<struct s7*>(&rsi9->f4);
            __asm__("divsd xmm0, xmm1");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x1c]");
            __asm__("addsd xmm0, xmm1");
            rdi12->f0 = rsi13->f0;
            rdi8 = reinterpret_cast<struct s4*>(&rdi12->f4);
            rsi9 = reinterpret_cast<struct s5*>(&rsi13->f4);
            ++v11;
        }
        *reinterpret_cast<int32_t*>(&rax5) = v10 + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fprintf);
        v10 = *reinterpret_cast<int32_t*>(&rax5);
    }
    return rax5;
}

void fprintf() {
}

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_ffffffffcc4d63b6();

void fun_68(struct s8* rdi, struct s9* rsi) {
    int64_t rbp3;
    int64_t rbp4;

    fun_ffffffffcc4d63b6();
    rdi->f0 = rsi->f0;
    __asm__("addsd xmm0, [rax+rcx*8]");
    rdi->f4 = rsi->f4;
    *reinterpret_cast<int32_t*>(rbp3 - 52) = *reinterpret_cast<int32_t*>(rbp4 - 52) + 1;
}

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    int32_t f0;
    int32_t f4;
};

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

void fun_a1(struct s10* rdi, struct s11* rsi) {
    struct s12* rdi3;
    struct s13* rsi4;
    int64_t rbp5;
    int64_t rbp6;

    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s12*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s13*>(&rsi->f4);
    rdi3->f0 = rsi4->f0;
    __asm__("divsd xmm0, xmm1");
    rdi3->f4 = rsi4->f4;
    *reinterpret_cast<int32_t*>(rbp5 - 56) = *reinterpret_cast<int32_t*>(rbp6 - 56) + 1;
}

void fun_ca() {
    int64_t rbp1;

    *reinterpret_cast<int32_t*>(rbp1 - 56) = reinterpret_cast<int32_t>(fprintf);
}

void submain(int32_t edi, int64_t rsi) {
    fun_46c(0x19a280, 8);
}

