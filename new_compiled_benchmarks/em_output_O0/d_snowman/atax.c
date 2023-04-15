
int32_t** g16c = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_18a(int64_t rdi);

void free(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx);

int64_t* g154 = reinterpret_cast<int64_t*>(0x358d48388b48);

int64_t* g19f = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_1b7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g1be = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_1cf(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_165(int64_t rdi) {
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
    int64_t* rax12;
    int64_t rdi13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t v18;

    while (1) {
        rax2 = g16c;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 20);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x183);
        fun_18a(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 20) = *reinterpret_cast<int32_t*>(rbp8 - 20) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 20) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 20) % 20 == free)) 
            continue;
        rax12 = g154;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x15e);
        fun_165(rdi13);
    }
    rax14 = g19f;
    rdi15 = *rax14;
    fun_1b7(rdi15, 0x1a9, 0x1b0, rcx4);
    rax16 = g1be;
    rdi17 = *rax16;
    fun_1cf(rdi17, 0x1c8, 0x1b0, rcx4);
    goto v18;
}

void fun_18a(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t* rax7;
    int64_t rdi8;
    int32_t* rsi9;
    int32_t** rax10;
    int32_t* rdi11;
    int64_t rcx12;
    int64_t rbp13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t v18;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 20) = *reinterpret_cast<int32_t*>(rbp3 - 20) + 1;
        if (*reinterpret_cast<int32_t*>(rbp4 - 20) >= *reinterpret_cast<int32_t*>(rbp5 - 4)) 
            break;
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp6 - 20) % 20 == free)) {
            rax7 = g154;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x15e);
            fun_165(rdi8);
        }
        rax10 = g16c;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 20);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x183);
        fun_18a(rdi11 + 1);
    }
    rax14 = g19f;
    rdi15 = *rax14;
    fun_1b7(rdi15, 0x1a9, 0x1b0, rcx12);
    rax16 = g1be;
    rdi17 = *rax16;
    fun_1cf(rdi17, 0x1c8, 0x1b0, rcx12);
    goto v18;
}

void fun_409(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_412(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_41b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_424(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_42d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

int32_t fun_3f4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t eax8;
    int64_t rdi9;
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

    if (reinterpret_cast<int1_t>(eax8 == free)) {
        *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(free);
        rsi = *reinterpret_cast<int64_t*>(rbp11 - 48);
        fun_409(rdi9, rsi, rdx, rcx, r8, r9, __return_address());
    }
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 32);
    fun_412(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 40);
    fun_41b(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 48);
    fun_424(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 56);
    fun_42d(rdi18, rsi, rdx, rcx, r8, r9, __return_address());
    goto v20;
}

void fun_409(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t v16;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 32);
    fun_412(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 40);
    fun_41b(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 48);
    fun_424(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 56);
    fun_42d(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    goto v16;
}

void fun_412(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t v14;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 40);
    fun_41b(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 48);
    fun_424(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 56);
    fun_42d(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    goto v14;
}

int64_t* g10e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_126(int64_t rdi);

void fun_107(int64_t rdi, int64_t rsi) {
    int64_t* rax3;
    int64_t rdi4;
    int32_t* rsi5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t* rax10;
    int64_t rdi11;
    int32_t** rax12;
    int32_t* rdi13;
    int64_t rcx14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t* rax18;
    int64_t rdi19;
    int64_t* rax20;
    int64_t rdi21;
    int64_t v22;

    rax3 = g10e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x118);
    fun_126(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(free);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 20) % 20 == free)) {
            rax10 = g154;
            rdi11 = *rax10;
            rsi5 = reinterpret_cast<int32_t*>(0x15e);
            fun_165(rdi11);
        }
        rax12 = g16c;
        rdi13 = *rax12;
        rcx14 = *reinterpret_cast<int32_t*>(rbp15 - 20);
        *rdi13 = *rsi5;
        rsi5 = reinterpret_cast<int32_t*>(0x183);
        fun_18a(rdi13 + 1);
        *reinterpret_cast<int32_t*>(rbp16 - 20) = *reinterpret_cast<int32_t*>(rbp17 - 20) + 1;
    }
    rax18 = g19f;
    rdi19 = *rax18;
    fun_1b7(rdi19, 0x1a9, 0x1b0, rcx14);
    rax20 = g1be;
    rdi21 = *rax20;
    fun_1cf(rdi21, 0x1c8, 0x1b0, rcx14);
    goto v22;
}

void fun_1b7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g1be;
    rdi6 = *rax5;
    fun_1cf(rdi6, 0x1c8, rdx, rcx);
    goto v7;
}

void fun_41b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 48);
    fun_424(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 56);
    fun_42d(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    goto v12;
}

void fun_126(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t* rax6;
    int64_t rdi7;
    int32_t* rsi8;
    int32_t** rax9;
    int32_t* rdi10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t* rax17;
    int64_t rdi18;
    int64_t v19;

    *reinterpret_cast<int32_t*>(rbp2 - 20) = reinterpret_cast<int32_t>(free);
    while (*reinterpret_cast<int32_t*>(rbp3 - 20) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp5 - 20) % 20 == free)) {
            rax6 = g154;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x15e);
            fun_165(rdi7);
        }
        rax9 = g16c;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 20);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x183);
        fun_18a(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 20) = *reinterpret_cast<int32_t*>(rbp14 - 20) + 1;
    }
    rax15 = g19f;
    rdi16 = *rax15;
    fun_1b7(rdi16, 0x1a9, 0x1b0, rcx11);
    rax17 = g1be;
    rdi18 = *rax17;
    fun_1cf(rdi18, 0x1c8, 0x1b0, rcx11);
    goto v19;
}

void fun_1cf(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int64_t fun_37f(int64_t rdi, int64_t rsi);

int64_t fun_392(int64_t rdi, int64_t rsi);

int64_t fun_3a5(int64_t rdi, int64_t rsi);

void fun_3bc(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_3d7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_36c(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rsi13;
    int64_t rbp14;
    int64_t rdx15;
    int64_t rbp16;
    int64_t rcx17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rsi21;
    int64_t rbp22;
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
    int64_t rdi44;
    int64_t rbp45;
    int64_t rbp46;

    *reinterpret_cast<int64_t*>(rbp3 - 32) = rax4;
    rax5 = fun_37f(0x834, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 40) = rax5;
    rax7 = fun_392(0x834, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 48) = rax7;
    rax9 = fun_3a5(0x76c, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 56) = rax9;
    *reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<int32_t*>(rbp12 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi13) = *reinterpret_cast<int32_t*>(rbp14 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(free);
    rdx15 = *reinterpret_cast<int64_t*>(rbp16 - 32);
    rcx17 = *reinterpret_cast<int64_t*>(rbp18 - 40);
    fun_3bc(rdi11, rsi13, rdx15, rcx17);
    *reinterpret_cast<int32_t*>(&rdi19) = *reinterpret_cast<int32_t*>(rbp20 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi21) = *reinterpret_cast<int32_t*>(rbp22 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(free);
    rdx23 = *reinterpret_cast<int64_t*>(rbp24 - 32);
    rcx25 = *reinterpret_cast<int64_t*>(rbp26 - 40);
    r8_27 = *reinterpret_cast<int64_t*>(rbp28 - 48);
    r9_29 = *reinterpret_cast<int64_t*>(rbp30 - 56);
    fun_3d7(rdi19, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp31 - 4) <= 42) {
        addr_409_7:
        rdi32 = *reinterpret_cast<int64_t*>(rbp33 - 32);
        fun_412(rdi32, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    } else {
        rdi34 = **reinterpret_cast<int64_t**>(rbp35 - 16);
        rsi21 = 0x3ef;
        eax36 = fun_3f4(rdi34, 0x3ef, rdx23, rcx25, r8_27, r9_29, __return_address());
        if (!reinterpret_cast<int1_t>(eax36 == free)) 
            goto addr_409_7; else 
            goto addr_3fd_10;
    }
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 40);
    fun_41b(rdi37, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 48);
    fun_424(rdi39, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 56);
    fun_42d(rdi41, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    goto v43;
    addr_3fd_10:
    *reinterpret_cast<int32_t*>(&rdi44) = *reinterpret_cast<int32_t*>(rbp45 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(free);
    rsi21 = *reinterpret_cast<int64_t*>(rbp46 - 48);
    fun_409(rdi44, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    goto addr_409_7;
}

void fun_424(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    fun_42d(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v10;
}

int64_t fun_37f(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rsi11;
    int64_t rbp12;
    int64_t rdx13;
    int64_t rbp14;
    int64_t rcx15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rsi19;
    int64_t rbp20;
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
    int64_t rdi42;
    int64_t rbp43;
    int64_t rbp44;

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    rax5 = fun_392(0x834, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 48) = rax5;
    rax7 = fun_3a5(0x76c, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 56) = rax7;
    *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi11) = *reinterpret_cast<int32_t*>(rbp12 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(free);
    rdx13 = *reinterpret_cast<int64_t*>(rbp14 - 32);
    rcx15 = *reinterpret_cast<int64_t*>(rbp16 - 40);
    fun_3bc(rdi9, rsi11, rdx13, rcx15);
    *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<int32_t*>(rbp18 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi19) = *reinterpret_cast<int32_t*>(rbp20 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(free);
    rdx21 = *reinterpret_cast<int64_t*>(rbp22 - 32);
    rcx23 = *reinterpret_cast<int64_t*>(rbp24 - 40);
    r8_25 = *reinterpret_cast<int64_t*>(rbp26 - 48);
    r9_27 = *reinterpret_cast<int64_t*>(rbp28 - 56);
    fun_3d7(rdi17, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp29 - 4) <= 42) {
        addr_409_6:
        rdi30 = *reinterpret_cast<int64_t*>(rbp31 - 32);
        fun_412(rdi30, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    } else {
        rdi32 = **reinterpret_cast<int64_t**>(rbp33 - 16);
        rsi19 = 0x3ef;
        eax34 = fun_3f4(rdi32, 0x3ef, rdx21, rcx23, r8_25, r9_27, __return_address());
        if (!reinterpret_cast<int1_t>(eax34 == free)) 
            goto addr_409_6; else 
            goto addr_3fd_9;
    }
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 40);
    fun_41b(rdi35, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 48);
    fun_424(rdi37, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 56);
    fun_42d(rdi39, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    goto v41;
    addr_3fd_9:
    *reinterpret_cast<int32_t*>(&rdi42) = *reinterpret_cast<int32_t*>(rbp43 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(free);
    rsi19 = *reinterpret_cast<int64_t*>(rbp44 - 48);
    fun_409(rdi42, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    goto addr_409_6;
}

void fun_42d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t v8;

    goto v8;
}

int64_t fun_392(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t rsi9;
    int64_t rbp10;
    int64_t rdx11;
    int64_t rbp12;
    int64_t rcx13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rsi17;
    int64_t rbp18;
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
    int64_t rdi40;
    int64_t rbp41;
    int64_t rbp42;

    *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
    rax5 = fun_3a5(0x76c, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 56) = rax5;
    *reinterpret_cast<int32_t*>(&rdi7) = *reinterpret_cast<int32_t*>(rbp8 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi9) = *reinterpret_cast<int32_t*>(rbp10 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(free);
    rdx11 = *reinterpret_cast<int64_t*>(rbp12 - 32);
    rcx13 = *reinterpret_cast<int64_t*>(rbp14 - 40);
    fun_3bc(rdi7, rsi9, rdx11, rcx13);
    *reinterpret_cast<int32_t*>(&rdi15) = *reinterpret_cast<int32_t*>(rbp16 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi17) = *reinterpret_cast<int32_t*>(rbp18 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(free);
    rdx19 = *reinterpret_cast<int64_t*>(rbp20 - 32);
    rcx21 = *reinterpret_cast<int64_t*>(rbp22 - 40);
    r8_23 = *reinterpret_cast<int64_t*>(rbp24 - 48);
    r9_25 = *reinterpret_cast<int64_t*>(rbp26 - 56);
    fun_3d7(rdi15, rsi17, rdx19, rcx21, r8_23, r9_25, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp27 - 4) <= 42) {
        addr_409_5:
        rdi28 = *reinterpret_cast<int64_t*>(rbp29 - 32);
        fun_412(rdi28, rsi17, rdx19, rcx21, r8_23, r9_25, __return_address());
    } else {
        rdi30 = **reinterpret_cast<int64_t**>(rbp31 - 16);
        rsi17 = 0x3ef;
        eax32 = fun_3f4(rdi30, 0x3ef, rdx19, rcx21, r8_23, r9_25, __return_address());
        if (!reinterpret_cast<int1_t>(eax32 == free)) 
            goto addr_409_5; else 
            goto addr_3fd_8;
    }
    rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 40);
    fun_41b(rdi33, rsi17, rdx19, rcx21, r8_23, r9_25, __return_address());
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 48);
    fun_424(rdi35, rsi17, rdx19, rcx21, r8_23, r9_25, __return_address());
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 56);
    fun_42d(rdi37, rsi17, rdx19, rcx21, r8_23, r9_25, __return_address());
    goto v39;
    addr_3fd_8:
    *reinterpret_cast<int32_t*>(&rdi40) = *reinterpret_cast<int32_t*>(rbp41 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(free);
    rsi17 = *reinterpret_cast<int64_t*>(rbp42 - 48);
    fun_409(rdi40, rsi17, rdx19, rcx21, r8_23, r9_25, __return_address());
    goto addr_409_5;
}

int64_t fun_3a5(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rsi7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t rbp10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rsi15;
    int64_t rbp16;
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
    int64_t rdi38;
    int64_t rbp39;
    int64_t rbp40;

    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(rbp6 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi7) = *reinterpret_cast<int32_t*>(rbp8 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(free);
    rdx9 = *reinterpret_cast<int64_t*>(rbp10 - 32);
    rcx11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    fun_3bc(rdi5, rsi7, rdx9, rcx11);
    *reinterpret_cast<int32_t*>(&rdi13) = *reinterpret_cast<int32_t*>(rbp14 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi15) = *reinterpret_cast<int32_t*>(rbp16 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(free);
    rdx17 = *reinterpret_cast<int64_t*>(rbp18 - 32);
    rcx19 = *reinterpret_cast<int64_t*>(rbp20 - 40);
    r8_21 = *reinterpret_cast<int64_t*>(rbp22 - 48);
    r9_23 = *reinterpret_cast<int64_t*>(rbp24 - 56);
    fun_3d7(rdi13, rsi15, rdx17, rcx19, r8_21, r9_23, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp25 - 4) <= 42) {
        addr_409_4:
        rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 32);
        fun_412(rdi26, rsi15, rdx17, rcx19, r8_21, r9_23, __return_address());
    } else {
        rdi28 = **reinterpret_cast<int64_t**>(rbp29 - 16);
        rsi15 = 0x3ef;
        eax30 = fun_3f4(rdi28, 0x3ef, rdx17, rcx19, r8_21, r9_23, __return_address());
        if (!reinterpret_cast<int1_t>(eax30 == free)) 
            goto addr_409_4; else 
            goto addr_3fd_7;
    }
    rdi31 = *reinterpret_cast<int64_t*>(rbp32 - 40);
    fun_41b(rdi31, rsi15, rdx17, rcx19, r8_21, r9_23, __return_address());
    rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 48);
    fun_424(rdi33, rsi15, rdx17, rcx19, r8_21, r9_23, __return_address());
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 56);
    fun_42d(rdi35, rsi15, rdx17, rcx19, r8_21, r9_23, __return_address());
    goto v37;
    addr_3fd_7:
    *reinterpret_cast<int32_t*>(&rdi38) = *reinterpret_cast<int32_t*>(rbp39 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = reinterpret_cast<int32_t>(free);
    rsi15 = *reinterpret_cast<int64_t*>(rbp40 - 48);
    fun_409(rdi38, rsi15, rdx17, rcx19, r8_21, r9_23, __return_address());
    goto addr_409_4;
}

void fun_3bc(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdi5;
    int64_t rbp6;
    int64_t rsi7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t rbp10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t r8_13;
    int64_t rbp14;
    int64_t r9_15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int32_t eax22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t rdi25;
    int64_t rbp26;
    int64_t rdi27;
    int64_t rbp28;
    int64_t v29;
    int64_t rdi30;
    int64_t rbp31;
    int64_t rbp32;

    *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(rbp6 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi7) = *reinterpret_cast<int32_t*>(rbp8 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(free);
    rdx9 = *reinterpret_cast<int64_t*>(rbp10 - 32);
    rcx11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    r8_13 = *reinterpret_cast<int64_t*>(rbp14 - 48);
    r9_15 = *reinterpret_cast<int64_t*>(rbp16 - 56);
    fun_3d7(rdi5, rsi7, rdx9, rcx11, r8_13, r9_15, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp17 - 4) <= 42) {
        addr_409_3:
        rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 32);
        fun_412(rdi18, rsi7, rdx9, rcx11, r8_13, r9_15, __return_address());
    } else {
        rdi20 = **reinterpret_cast<int64_t**>(rbp21 - 16);
        rsi7 = 0x3ef;
        eax22 = fun_3f4(rdi20, 0x3ef, rdx9, rcx11, r8_13, r9_15, __return_address());
        if (!reinterpret_cast<int1_t>(eax22 == free)) 
            goto addr_409_3; else 
            goto addr_3fd_6;
    }
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 40);
    fun_41b(rdi23, rsi7, rdx9, rcx11, r8_13, r9_15, __return_address());
    rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 48);
    fun_424(rdi25, rsi7, rdx9, rcx11, r8_13, r9_15, __return_address());
    rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 56);
    fun_42d(rdi27, rsi7, rdx9, rcx11, r8_13, r9_15, __return_address());
    goto v29;
    addr_3fd_6:
    *reinterpret_cast<int32_t*>(&rdi30) = *reinterpret_cast<int32_t*>(rbp31 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi30) + 4) = reinterpret_cast<int32_t>(free);
    rsi7 = *reinterpret_cast<int64_t*>(rbp32 - 48);
    fun_409(rdi30, rsi7, rdx9, rcx11, r8_13, r9_15, __return_address());
    goto addr_409_3;
}

void fun_3d7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
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
    int64_t rdi21;
    int64_t rbp22;
    int64_t rbp23;

    if (*reinterpret_cast<int32_t*>(rbp8 - 4) <= 42) {
        addr_409_2:
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 32);
        fun_412(rdi9, rsi, rdx, rcx, r8, r9, __return_address());
    } else {
        rdi11 = **reinterpret_cast<int64_t**>(rbp12 - 16);
        rsi = 0x3ef;
        eax13 = fun_3f4(rdi11, 0x3ef, rdx, rcx, r8, r9, __return_address());
        if (!reinterpret_cast<int1_t>(eax13 == free)) 
            goto addr_409_2; else 
            goto addr_3fd_5;
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 40);
    fun_41b(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 48);
    fun_424(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 56);
    fun_42d(rdi18, rsi, rdx, rcx, r8, r9, __return_address());
    goto v20;
    addr_3fd_5:
    *reinterpret_cast<int32_t*>(&rdi21) = *reinterpret_cast<int32_t*>(rbp22 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(free);
    rsi = *reinterpret_cast<int64_t*>(rbp23 - 48);
    fun_409(rdi21, rsi, rdx, rcx, r8, r9, __return_address());
    goto addr_409_2;
}

void free(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx) {
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi = *rsi;
}

void fun_64() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    int64_t rbx4;
    int64_t rbx5;
    signed char cl6;
    int64_t rbx7;
    int64_t v8;
    int64_t rbp9;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *reinterpret_cast<signed char*>(rbx4 + 0x453be445) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbx5 + 0x453be445) + cl6);
    if (*reinterpret_cast<signed char*>(rbx7 + 0x453be445) < reinterpret_cast<signed char>(free) == __intrinsic()) {
        goto v8;
    } else {
        *reinterpret_cast<int32_t*>(rbp9 - 32) = reinterpret_cast<int32_t>(free);
    }
}

void fun_88(int32_t* rdi, int32_t* rsi) {
    int64_t rcx3;
    int1_t zf4;
    int64_t rbp5;
    int64_t rbp6;

    __asm__("in al, 0x3");
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rcx3 - 1 == free)) & reinterpret_cast<uint1_t>(!zf4))) {
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, eax");
        __asm__("divsd xmm0, xmm1");
        *rdi = *rsi;
        *reinterpret_cast<int32_t*>(rbp5 - 32) = *reinterpret_cast<int32_t*>(rbp6 - 32) + 1;
        goto 0x7a;
    }
}

void fun_c9() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 28) = *reinterpret_cast<int32_t*>(rbp2 - 28) + 1;
    goto 0x67;
}

int64_t* gf6 = reinterpret_cast<int64_t*>(0x358d48388b48);

void print_array(int32_t edi, int64_t rsi) {
    int64_t* rax3;
    int64_t rdi4;

    rax3 = gf6;
    rdi4 = *rax3;
    fun_107(rdi4, 0x100);
}

void submain(int32_t edi, int64_t rsi) {
    fun_36c(0x3ce1f0, 8);
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

void kernel_atax(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    struct s0* rdi1;
    struct s1* rsi2;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    struct s2* rdi12;
    struct s3* rsi13;
    struct s4* rdi14;
    struct s5* rsi15;
    struct s6* rdi16;
    struct s7* rsi17;
    int32_t v18;
    struct s2* rdi19;
    struct s3* rsi20;
    struct s4* rdi21;
    struct s5* rsi22;
    struct s6* rdi23;
    struct s7* rsi24;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v7 = *reinterpret_cast<int32_t*>(&rdi1);
    v8 = *reinterpret_cast<int32_t*>(&rsi2);
    v9 = reinterpret_cast<int32_t>(free);
    while (v9 < v8) {
        __asm__("xorps xmm0, xmm0");
        rdi1->f0 = rsi2->f0;
        rdi1 = reinterpret_cast<struct s0*>(&rdi1->f4);
        rsi2 = reinterpret_cast<struct s1*>(&rsi2->f4);
        ++v9;
    }
    v10 = reinterpret_cast<int32_t>(free);
    while (v10 < v7) {
        __asm__("xorps xmm0, xmm0");
        rdi1->f0 = rsi2->f0;
        rdi1 = reinterpret_cast<struct s0*>(&rdi1->f4);
        rsi2 = reinterpret_cast<struct s1*>(&rsi2->f4);
        v11 = reinterpret_cast<int32_t>(free);
        while (v11 < v8) {
            rdi1->f0 = rsi2->f0;
            rdi12 = reinterpret_cast<struct s2*>(&rdi1->f4);
            rsi13 = reinterpret_cast<struct s3*>(&rsi2->f4);
            rdi12->f0 = rsi13->f0;
            rdi14 = reinterpret_cast<struct s4*>(&rdi12->f4);
            rsi15 = reinterpret_cast<struct s5*>(&rsi13->f4);
            rdi14->f0 = rsi15->f0;
            rdi16 = reinterpret_cast<struct s6*>(&rdi14->f4);
            rsi17 = reinterpret_cast<struct s7*>(&rsi15->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi16->f0 = rsi17->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi16->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi17->f4);
            ++v11;
        }
        v18 = reinterpret_cast<int32_t>(free);
        while (v18 < v8) {
            rdi1->f0 = rsi2->f0;
            rdi19 = reinterpret_cast<struct s2*>(&rdi1->f4);
            rsi20 = reinterpret_cast<struct s3*>(&rsi2->f4);
            rdi19->f0 = rsi20->f0;
            rdi21 = reinterpret_cast<struct s4*>(&rdi19->f4);
            rsi22 = reinterpret_cast<struct s5*>(&rsi20->f4);
            rdi21->f0 = rsi22->f0;
            rdi23 = reinterpret_cast<struct s6*>(&rdi21->f4);
            rsi24 = reinterpret_cast<struct s7*>(&rsi22->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi23->f0 = rsi24->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi23->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi24->f4);
            ++v18;
        }
        ++v10;
    }
    return;
}

