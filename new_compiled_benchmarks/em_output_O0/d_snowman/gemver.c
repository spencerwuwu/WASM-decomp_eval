
void fun_417(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

int32_t fun_3f9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fprintf();

void fun_420(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_429(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_432(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_43b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_444(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_44d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_456(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_462(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_3dc(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int32_t eax18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t rdi25;
    int64_t rbp26;
    int64_t rdi27;
    int64_t rbp28;
    int64_t rdi29;
    int64_t rbp30;
    int64_t rdi31;
    int64_t rbp32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t v35;
    int32_t edi36;
    int64_t rbp37;
    int64_t rbp38;

    if (*reinterpret_cast<int32_t*>(rbp13 - 28) <= 42) {
        addr_40e_2:
        rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 72);
        fun_417(rdi14, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    } else {
        rdi16 = **reinterpret_cast<int64_t**>(rbp17 - 40);
        rsi = 0x3f4;
        eax18 = fun_3f9(rdi16, 0x3f4, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
        if (!reinterpret_cast<int1_t>(eax18 == fprintf)) 
            goto addr_40e_2; else 
            goto addr_402_5;
    }
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 80);
    fun_420(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 88);
    fun_429(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 96);
    fun_432(rdi23, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 0x68);
    fun_43b(rdi25, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 0x70);
    fun_444(rdi27, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi29 = *reinterpret_cast<int64_t*>(rbp30 - 0x78);
    fun_44d(rdi29, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi31 = *reinterpret_cast<int64_t*>(rbp32 - 0x80);
    fun_456(rdi31, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 0x88);
    fun_462(rdi33, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v35;
    addr_402_5:
    edi36 = *reinterpret_cast<int32_t*>(rbp37 - 44);
    rsi = *reinterpret_cast<int64_t*>(rbp38 - 0x70);
    print_array(edi36, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto addr_40e_2;
}

int32_t fun_3f9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int32_t eax13;
    int32_t edi14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t rdi25;
    int64_t rbp26;
    int64_t rdi27;
    int64_t rbp28;
    int64_t rdi29;
    int64_t rbp30;
    int64_t rdi31;
    int64_t rbp32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t v35;

    if (reinterpret_cast<int1_t>(eax13 == fprintf)) {
        edi14 = *reinterpret_cast<int32_t*>(rbp15 - 44);
        rsi = *reinterpret_cast<int64_t*>(rbp16 - 0x70);
        print_array(edi14, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    }
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 72);
    fun_417(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 80);
    fun_420(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 88);
    fun_429(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 96);
    fun_432(rdi23, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 0x68);
    fun_43b(rdi25, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 0x70);
    fun_444(rdi27, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi29 = *reinterpret_cast<int64_t*>(rbp30 - 0x78);
    fun_44d(rdi29, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi31 = *reinterpret_cast<int64_t*>(rbp32 - 0x80);
    fun_456(rdi31, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 0x88);
    fun_462(rdi33, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v35;
}

int64_t* g676 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_687(int64_t rdi, int64_t rsi);

int64_t* g68e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_6a6(int64_t rdi);

int64_t* g6d4 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_6e5(int64_t rdi);

int32_t** g6ec = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_70a(int64_t rdi);

int64_t* g71f = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_737(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g73e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_74f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int32_t v13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t* rax16;
    int64_t rdi17;
    int32_t* rsi18;
    int32_t v19;
    int64_t* rax20;
    int64_t rdi21;
    int32_t** rax22;
    int32_t* rdi23;
    int64_t* rax24;
    int64_t rdi25;
    int64_t* rax26;
    int64_t rdi27;

    v13 = edi;
    rax14 = g676;
    rdi15 = *rax14;
    fun_687(rdi15, 0x680);
    rax16 = g68e;
    rdi17 = *rax16;
    rsi18 = reinterpret_cast<int32_t*>(0x698);
    fun_6a6(rdi17);
    v19 = reinterpret_cast<int32_t>(fprintf);
    while (v19 < v13) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v19 % 20 == fprintf)) {
            rax20 = g6d4;
            rdi21 = *rax20;
            rsi18 = reinterpret_cast<int32_t*>(0x6de);
            fun_6e5(rdi21);
        }
        rax22 = g6ec;
        rdi23 = *rax22;
        rcx = v19;
        *rdi23 = *rsi18;
        rsi18 = reinterpret_cast<int32_t*>(0x703);
        fun_70a(rdi23 + 1);
        ++v19;
    }
    rax24 = g71f;
    rdi25 = *rax24;
    fun_737(rdi25, 0x729, 0x730, rcx);
    rax26 = g73e;
    rdi27 = *rax26;
    fun_74f(rdi27, 0x748, 0x730, rcx);
    return;
}

void fun_417(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t rdi25;
    int64_t rbp26;
    int64_t rdi27;
    int64_t rbp28;
    int64_t v29;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 80);
    fun_420(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 88);
    fun_429(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 96);
    fun_432(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x68);
    fun_43b(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0x70);
    fun_444(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 0x78);
    fun_44d(rdi23, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 0x80);
    fun_456(rdi25, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 0x88);
    fun_462(rdi27, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v29;
}

void fun_6e5(int64_t rdi) {
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
        rax2 = g6ec;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 20);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x703);
        fun_70a(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 20) = *reinterpret_cast<int32_t*>(rbp8 - 20) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 20) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 20) % 20 == fprintf)) 
            continue;
        rax12 = g6d4;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x6de);
        fun_6e5(rdi13);
    }
    rax14 = g71f;
    rdi15 = *rax14;
    fun_737(rdi15, 0x729, 0x730, rcx4);
    rax16 = g73e;
    rdi17 = *rax16;
    fun_74f(rdi17, 0x748, 0x730, rcx4);
    goto v18;
}

void fun_70a(int64_t rdi) {
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
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp6 - 20) % 20 == fprintf)) {
            rax7 = g6d4;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x6de);
            fun_6e5(rdi8);
        }
        rax10 = g6ec;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 20);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x703);
        fun_70a(rdi11 + 1);
    }
    rax14 = g71f;
    rdi15 = *rax14;
    fun_737(rdi15, 0x729, 0x730, rcx12);
    rax16 = g73e;
    rdi17 = *rax16;
    fun_74f(rdi17, 0x748, 0x730, rcx12);
    goto v18;
}

void fun_687(int64_t rdi, int64_t rsi) {
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

    rax3 = g68e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x698);
    fun_6a6(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 20) % 20 == fprintf)) {
            rax10 = g6d4;
            rdi11 = *rax10;
            rsi5 = reinterpret_cast<int32_t*>(0x6de);
            fun_6e5(rdi11);
        }
        rax12 = g6ec;
        rdi13 = *rax12;
        rcx14 = *reinterpret_cast<int32_t*>(rbp15 - 20);
        *rdi13 = *rsi5;
        rsi5 = reinterpret_cast<int32_t*>(0x703);
        fun_70a(rdi13 + 1);
        *reinterpret_cast<int32_t*>(rbp16 - 20) = *reinterpret_cast<int32_t*>(rbp17 - 20) + 1;
    }
    rax18 = g71f;
    rdi19 = *rax18;
    fun_737(rdi19, 0x729, 0x730, rcx14);
    rax20 = g73e;
    rdi21 = *rax20;
    fun_74f(rdi21, 0x748, 0x730, rcx14);
    goto v22;
}

void fun_420(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t rdi25;
    int64_t rbp26;
    int64_t v27;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 88);
    fun_429(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 96);
    fun_432(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x68);
    fun_43b(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x70);
    fun_444(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0x78);
    fun_44d(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 0x80);
    fun_456(rdi23, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 0x88);
    fun_462(rdi25, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v27;
}

void fun_6a6(int64_t rdi) {
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

    *reinterpret_cast<int32_t*>(rbp2 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 20) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp5 - 20) % 20 == fprintf)) {
            rax6 = g6d4;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x6de);
            fun_6e5(rdi7);
        }
        rax9 = g6ec;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 20);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x703);
        fun_70a(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 20) = *reinterpret_cast<int32_t*>(rbp14 - 20) + 1;
    }
    rax15 = g71f;
    rdi16 = *rax15;
    fun_737(rdi16, 0x729, 0x730, rcx11);
    rax17 = g73e;
    rdi18 = *rax17;
    fun_74f(rdi18, 0x748, 0x730, rcx11);
    goto v19;
}

void fun_429(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t v25;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 96);
    fun_432(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x68);
    fun_43b(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x70);
    fun_444(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x78);
    fun_44d(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0x80);
    fun_456(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 0x88);
    fun_462(rdi23, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v25;
}

void fun_737(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g73e;
    rdi6 = *rax5;
    fun_74f(rdi6, 0x748, rdx, rcx);
    goto v7;
}

int64_t fun_2b0(int64_t rdi, int64_t rsi);

int64_t fun_2c3(int64_t rdi, int64_t rsi);

int64_t fun_2d6(int64_t rdi, int64_t rsi);

int64_t fun_2e9(int64_t rdi, int64_t rsi);

int64_t fun_2fc(int64_t rdi, int64_t rsi);

int64_t fun_30f(int64_t rdi, int64_t rsi);

int64_t fun_322(int64_t rdi, int64_t rsi);

int64_t fun_335(int64_t rdi, int64_t rsi);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

struct s2 {
    int32_t f0;
    int32_t f4;
};

void fun_29d(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int64_t rax11;
    int64_t rbp12;
    int64_t rax13;
    int64_t rbp14;
    int64_t rax15;
    int64_t rbp16;
    int64_t rax17;
    int64_t rbp18;
    int64_t rax19;
    int64_t rbp20;
    struct s0* rdi21;
    int64_t rbp22;
    int64_t rcx23;
    int64_t rbp24;
    int64_t r8_25;
    int64_t rbp26;
    int64_t r9_27;
    int64_t rbp28;
    int64_t r14_29;
    int64_t rbp30;
    int64_t rbx31;
    int64_t rbp32;
    int64_t r11_33;
    int64_t rbp34;
    int64_t r10_35;
    int64_t rbp36;
    int64_t rax37;
    int64_t rbp38;
    struct s1* rsi39;
    int64_t rbp40;
    int64_t v41;
    int64_t rbp42;
    int64_t rbp43;
    struct s2* rdi44;
    int64_t rbp45;
    int32_t* rdi46;
    int64_t rsi47;
    int64_t rbp48;
    int64_t rdx49;
    int64_t rbp50;
    int64_t rcx51;
    int64_t rbp52;
    int64_t r8_53;
    int64_t rbp54;
    int64_t r9_55;
    int64_t rbp56;
    int64_t r11_57;
    int64_t rbp58;
    int64_t r10_59;
    int64_t rbp60;
    int64_t rax61;
    int64_t rbp62;
    int64_t v63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rdi66;
    int64_t rbp67;
    int64_t rdi68;
    int64_t rbp69;
    int32_t eax70;
    int64_t rdi71;
    int64_t rbp72;
    int64_t rdi73;
    int64_t rbp74;
    int64_t rdi75;
    int64_t rbp76;
    int64_t rdi77;
    int64_t rbp78;
    int64_t rdi79;
    int64_t rbp80;
    int64_t rdi81;
    int64_t rbp82;
    int64_t rdi83;
    int64_t rbp84;
    int64_t rdi85;
    int64_t rbp86;
    int64_t v87;
    int32_t edi88;
    int64_t rbp89;
    int64_t rbp90;

    *reinterpret_cast<int64_t*>(rbp3 - 72) = rax4;
    rax5 = fun_2b0(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 80) = rax5;
    rax7 = fun_2c3(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 88) = rax7;
    rax9 = fun_2d6(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 96) = rax9;
    rax11 = fun_2e9(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp12 - 0x68) = rax11;
    rax13 = fun_2fc(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp14 - 0x70) = rax13;
    rax15 = fun_30f(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp16 - 0x78) = rax15;
    rax17 = fun_322(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp18 - 0x80) = rax17;
    rax19 = fun_335(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp20 - 0x88) = rax19;
    *reinterpret_cast<int32_t*>(&rdi21) = *reinterpret_cast<int32_t*>(rbp22 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx23 = *reinterpret_cast<int64_t*>(rbp24 - 72);
    r8_25 = *reinterpret_cast<int64_t*>(rbp26 - 80);
    r9_27 = *reinterpret_cast<int64_t*>(rbp28 - 88);
    r14_29 = *reinterpret_cast<int64_t*>(rbp30 - 0x68);
    rbx31 = *reinterpret_cast<int64_t*>(rbp32 - 0x70);
    r11_33 = *reinterpret_cast<int64_t*>(rbp34 - 0x78);
    r10_35 = *reinterpret_cast<int64_t*>(rbp36 - 0x80);
    rax37 = *reinterpret_cast<int64_t*>(rbp38 - 0x88);
    rsi39 = reinterpret_cast<struct s1*>(rbp40 - 56);
    v41 = *reinterpret_cast<int64_t*>(rbp42 - 96);
    init_array(rdi21, rsi39, rbp43 - 64, rcx23, r8_25, r9_27, v41, r14_29, rbx31, r11_33, r10_35, rax37);
    *reinterpret_cast<int32_t*>(&rdi44) = *reinterpret_cast<int32_t*>(rbp45 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi44->f0 = rsi39->f0;
    rdi46 = &rdi44->f4;
    *rdi46 = rsi39->f4;
    rsi47 = *reinterpret_cast<int64_t*>(rbp48 - 72);
    rdx49 = *reinterpret_cast<int64_t*>(rbp50 - 80);
    rcx51 = *reinterpret_cast<int64_t*>(rbp52 - 88);
    r8_53 = *reinterpret_cast<int64_t*>(rbp54 - 96);
    r9_55 = *reinterpret_cast<int64_t*>(rbp56 - 0x68);
    r11_57 = *reinterpret_cast<int64_t*>(rbp58 - 0x78);
    r10_59 = *reinterpret_cast<int64_t*>(rbp60 - 0x80);
    rax61 = *reinterpret_cast<int64_t*>(rbp62 - 0x88);
    v63 = *reinterpret_cast<int64_t*>(rbp64 - 0x70);
    fun_3dc(rdi46 + 1, rsi47, rdx49, rcx51, r8_53, r9_55, v63, r11_57, r10_59, rax61, r10_35, rax37);
    if (*reinterpret_cast<int32_t*>(rbp65 - 28) <= 42) {
        addr_40e_17:
        rdi66 = *reinterpret_cast<int64_t*>(rbp67 - 72);
        fun_417(rdi66, rsi47, rdx49, rcx51, r8_53, r9_55, v63, r11_57, r10_59, rax61, r10_35, rax37);
    } else {
        rdi68 = **reinterpret_cast<int64_t**>(rbp69 - 40);
        rsi47 = 0x3f4;
        eax70 = fun_3f9(rdi68, 0x3f4, rdx49, rcx51, r8_53, r9_55, v63, r11_57, r10_59, rax61, r10_35, rax37);
        if (!reinterpret_cast<int1_t>(eax70 == fprintf)) 
            goto addr_40e_17; else 
            goto addr_402_20;
    }
    rdi71 = *reinterpret_cast<int64_t*>(rbp72 - 80);
    fun_420(rdi71, rsi47, rdx49, rcx51, r8_53, r9_55, v63, r11_57, r10_59, rax61, r10_35, rax37);
    rdi73 = *reinterpret_cast<int64_t*>(rbp74 - 88);
    fun_429(rdi73, rsi47, rdx49, rcx51, r8_53, r9_55, v63, r11_57, r10_59, rax61, r10_35, rax37);
    rdi75 = *reinterpret_cast<int64_t*>(rbp76 - 96);
    fun_432(rdi75, rsi47, rdx49, rcx51, r8_53, r9_55, v63, r11_57, r10_59, rax61, r10_35, rax37);
    rdi77 = *reinterpret_cast<int64_t*>(rbp78 - 0x68);
    fun_43b(rdi77, rsi47, rdx49, rcx51, r8_53, r9_55, v63, r11_57, r10_59, rax61, r10_35, rax37);
    rdi79 = *reinterpret_cast<int64_t*>(rbp80 - 0x70);
    fun_444(rdi79, rsi47, rdx49, rcx51, r8_53, r9_55, v63, r11_57, r10_59, rax61, r10_35, rax37);
    rdi81 = *reinterpret_cast<int64_t*>(rbp82 - 0x78);
    fun_44d(rdi81, rsi47, rdx49, rcx51, r8_53, r9_55, v63, r11_57, r10_59, rax61, r10_35, rax37);
    rdi83 = *reinterpret_cast<int64_t*>(rbp84 - 0x80);
    fun_456(rdi83, rsi47, rdx49, rcx51, r8_53, r9_55, v63, r11_57, r10_59, rax61, r10_35, rax37);
    rdi85 = *reinterpret_cast<int64_t*>(rbp86 - 0x88);
    fun_462(rdi85, rsi47, rdx49, rcx51, r8_53, r9_55, v63, r11_57, r10_59, rax61, r10_35, rax37);
    goto v87;
    addr_402_20:
    edi88 = *reinterpret_cast<int32_t*>(rbp89 - 44);
    rsi47 = *reinterpret_cast<int64_t*>(rbp90 - 0x70);
    print_array(edi88, rsi47, rdx49, rcx51, r8_53, r9_55, v63, r11_57, r10_59, rax61, r10_35, rax37);
    goto addr_40e_17;
}

void fun_432(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t v23;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 0x68);
    fun_43b(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x70);
    fun_444(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x78);
    fun_44d(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x80);
    fun_456(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0x88);
    fun_462(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v23;
}

void fun_74f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

struct s3 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_2b0(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int64_t rax11;
    int64_t rbp12;
    int64_t rax13;
    int64_t rbp14;
    int64_t rax15;
    int64_t rbp16;
    int64_t rax17;
    int64_t rbp18;
    struct s0* rdi19;
    int64_t rbp20;
    int64_t rcx21;
    int64_t rbp22;
    int64_t r8_23;
    int64_t rbp24;
    int64_t r9_25;
    int64_t rbp26;
    int64_t r14_27;
    int64_t rbp28;
    int64_t rbx29;
    int64_t rbp30;
    int64_t r11_31;
    int64_t rbp32;
    int64_t r10_33;
    int64_t rbp34;
    int64_t rax35;
    int64_t rbp36;
    struct s1* rsi37;
    int64_t rbp38;
    int64_t v39;
    int64_t rbp40;
    int64_t rbp41;
    struct s3* rdi42;
    int64_t rbp43;
    int32_t* rdi44;
    int64_t rsi45;
    int64_t rbp46;
    int64_t rdx47;
    int64_t rbp48;
    int64_t rcx49;
    int64_t rbp50;
    int64_t r8_51;
    int64_t rbp52;
    int64_t r9_53;
    int64_t rbp54;
    int64_t r11_55;
    int64_t rbp56;
    int64_t r10_57;
    int64_t rbp58;
    int64_t rax59;
    int64_t rbp60;
    int64_t v61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rdi64;
    int64_t rbp65;
    int64_t rdi66;
    int64_t rbp67;
    int32_t eax68;
    int64_t rdi69;
    int64_t rbp70;
    int64_t rdi71;
    int64_t rbp72;
    int64_t rdi73;
    int64_t rbp74;
    int64_t rdi75;
    int64_t rbp76;
    int64_t rdi77;
    int64_t rbp78;
    int64_t rdi79;
    int64_t rbp80;
    int64_t rdi81;
    int64_t rbp82;
    int64_t rdi83;
    int64_t rbp84;
    int64_t v85;
    int32_t edi86;
    int64_t rbp87;
    int64_t rbp88;

    *reinterpret_cast<int64_t*>(rbp3 - 80) = rax4;
    rax5 = fun_2c3(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 88) = rax5;
    rax7 = fun_2d6(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 96) = rax7;
    rax9 = fun_2e9(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 0x68) = rax9;
    rax11 = fun_2fc(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp12 - 0x70) = rax11;
    rax13 = fun_30f(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp14 - 0x78) = rax13;
    rax15 = fun_322(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp16 - 0x80) = rax15;
    rax17 = fun_335(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp18 - 0x88) = rax17;
    *reinterpret_cast<int32_t*>(&rdi19) = *reinterpret_cast<int32_t*>(rbp20 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx21 = *reinterpret_cast<int64_t*>(rbp22 - 72);
    r8_23 = *reinterpret_cast<int64_t*>(rbp24 - 80);
    r9_25 = *reinterpret_cast<int64_t*>(rbp26 - 88);
    r14_27 = *reinterpret_cast<int64_t*>(rbp28 - 0x68);
    rbx29 = *reinterpret_cast<int64_t*>(rbp30 - 0x70);
    r11_31 = *reinterpret_cast<int64_t*>(rbp32 - 0x78);
    r10_33 = *reinterpret_cast<int64_t*>(rbp34 - 0x80);
    rax35 = *reinterpret_cast<int64_t*>(rbp36 - 0x88);
    rsi37 = reinterpret_cast<struct s1*>(rbp38 - 56);
    v39 = *reinterpret_cast<int64_t*>(rbp40 - 96);
    init_array(rdi19, rsi37, rbp41 - 64, rcx21, r8_23, r9_25, v39, r14_27, rbx29, r11_31, r10_33, rax35);
    *reinterpret_cast<int32_t*>(&rdi42) = *reinterpret_cast<int32_t*>(rbp43 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi42->f0 = rsi37->f0;
    rdi44 = &rdi42->f4;
    *rdi44 = rsi37->f4;
    rsi45 = *reinterpret_cast<int64_t*>(rbp46 - 72);
    rdx47 = *reinterpret_cast<int64_t*>(rbp48 - 80);
    rcx49 = *reinterpret_cast<int64_t*>(rbp50 - 88);
    r8_51 = *reinterpret_cast<int64_t*>(rbp52 - 96);
    r9_53 = *reinterpret_cast<int64_t*>(rbp54 - 0x68);
    r11_55 = *reinterpret_cast<int64_t*>(rbp56 - 0x78);
    r10_57 = *reinterpret_cast<int64_t*>(rbp58 - 0x80);
    rax59 = *reinterpret_cast<int64_t*>(rbp60 - 0x88);
    v61 = *reinterpret_cast<int64_t*>(rbp62 - 0x70);
    fun_3dc(rdi44 + 1, rsi45, rdx47, rcx49, r8_51, r9_53, v61, r11_55, r10_57, rax59, r10_33, rax35);
    if (*reinterpret_cast<int32_t*>(rbp63 - 28) <= 42) {
        addr_40e_16:
        rdi64 = *reinterpret_cast<int64_t*>(rbp65 - 72);
        fun_417(rdi64, rsi45, rdx47, rcx49, r8_51, r9_53, v61, r11_55, r10_57, rax59, r10_33, rax35);
    } else {
        rdi66 = **reinterpret_cast<int64_t**>(rbp67 - 40);
        rsi45 = 0x3f4;
        eax68 = fun_3f9(rdi66, 0x3f4, rdx47, rcx49, r8_51, r9_53, v61, r11_55, r10_57, rax59, r10_33, rax35);
        if (!reinterpret_cast<int1_t>(eax68 == fprintf)) 
            goto addr_40e_16; else 
            goto addr_402_19;
    }
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 80);
    fun_420(rdi69, rsi45, rdx47, rcx49, r8_51, r9_53, v61, r11_55, r10_57, rax59, r10_33, rax35);
    rdi71 = *reinterpret_cast<int64_t*>(rbp72 - 88);
    fun_429(rdi71, rsi45, rdx47, rcx49, r8_51, r9_53, v61, r11_55, r10_57, rax59, r10_33, rax35);
    rdi73 = *reinterpret_cast<int64_t*>(rbp74 - 96);
    fun_432(rdi73, rsi45, rdx47, rcx49, r8_51, r9_53, v61, r11_55, r10_57, rax59, r10_33, rax35);
    rdi75 = *reinterpret_cast<int64_t*>(rbp76 - 0x68);
    fun_43b(rdi75, rsi45, rdx47, rcx49, r8_51, r9_53, v61, r11_55, r10_57, rax59, r10_33, rax35);
    rdi77 = *reinterpret_cast<int64_t*>(rbp78 - 0x70);
    fun_444(rdi77, rsi45, rdx47, rcx49, r8_51, r9_53, v61, r11_55, r10_57, rax59, r10_33, rax35);
    rdi79 = *reinterpret_cast<int64_t*>(rbp80 - 0x78);
    fun_44d(rdi79, rsi45, rdx47, rcx49, r8_51, r9_53, v61, r11_55, r10_57, rax59, r10_33, rax35);
    rdi81 = *reinterpret_cast<int64_t*>(rbp82 - 0x80);
    fun_456(rdi81, rsi45, rdx47, rcx49, r8_51, r9_53, v61, r11_55, r10_57, rax59, r10_33, rax35);
    rdi83 = *reinterpret_cast<int64_t*>(rbp84 - 0x88);
    fun_462(rdi83, rsi45, rdx47, rcx49, r8_51, r9_53, v61, r11_55, r10_57, rax59, r10_33, rax35);
    goto v85;
    addr_402_19:
    edi86 = *reinterpret_cast<int32_t*>(rbp87 - 44);
    rsi45 = *reinterpret_cast<int64_t*>(rbp88 - 0x70);
    print_array(edi86, rsi45, rdx47, rcx49, r8_51, r9_53, v61, r11_55, r10_57, rax59, r10_33, rax35);
    goto addr_40e_16;
}

void fun_43b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t v21;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 0x70);
    fun_444(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x78);
    fun_44d(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x80);
    fun_456(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x88);
    fun_462(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v21;
}

struct s4 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_2c3(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int64_t rax11;
    int64_t rbp12;
    int64_t rax13;
    int64_t rbp14;
    int64_t rax15;
    int64_t rbp16;
    struct s0* rdi17;
    int64_t rbp18;
    int64_t rcx19;
    int64_t rbp20;
    int64_t r8_21;
    int64_t rbp22;
    int64_t r9_23;
    int64_t rbp24;
    int64_t r14_25;
    int64_t rbp26;
    int64_t rbx27;
    int64_t rbp28;
    int64_t r11_29;
    int64_t rbp30;
    int64_t r10_31;
    int64_t rbp32;
    int64_t rax33;
    int64_t rbp34;
    struct s1* rsi35;
    int64_t rbp36;
    int64_t v37;
    int64_t rbp38;
    int64_t rbp39;
    struct s4* rdi40;
    int64_t rbp41;
    int32_t* rdi42;
    int64_t rsi43;
    int64_t rbp44;
    int64_t rdx45;
    int64_t rbp46;
    int64_t rcx47;
    int64_t rbp48;
    int64_t r8_49;
    int64_t rbp50;
    int64_t r9_51;
    int64_t rbp52;
    int64_t r11_53;
    int64_t rbp54;
    int64_t r10_55;
    int64_t rbp56;
    int64_t rax57;
    int64_t rbp58;
    int64_t v59;
    int64_t rbp60;
    int64_t rbp61;
    int64_t rdi62;
    int64_t rbp63;
    int64_t rdi64;
    int64_t rbp65;
    int32_t eax66;
    int64_t rdi67;
    int64_t rbp68;
    int64_t rdi69;
    int64_t rbp70;
    int64_t rdi71;
    int64_t rbp72;
    int64_t rdi73;
    int64_t rbp74;
    int64_t rdi75;
    int64_t rbp76;
    int64_t rdi77;
    int64_t rbp78;
    int64_t rdi79;
    int64_t rbp80;
    int64_t rdi81;
    int64_t rbp82;
    int64_t v83;
    int32_t edi84;
    int64_t rbp85;
    int64_t rbp86;

    *reinterpret_cast<int64_t*>(rbp3 - 88) = rax4;
    rax5 = fun_2d6(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 96) = rax5;
    rax7 = fun_2e9(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 0x68) = rax7;
    rax9 = fun_2fc(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 0x70) = rax9;
    rax11 = fun_30f(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp12 - 0x78) = rax11;
    rax13 = fun_322(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp14 - 0x80) = rax13;
    rax15 = fun_335(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp16 - 0x88) = rax15;
    *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<int32_t*>(rbp18 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx19 = *reinterpret_cast<int64_t*>(rbp20 - 72);
    r8_21 = *reinterpret_cast<int64_t*>(rbp22 - 80);
    r9_23 = *reinterpret_cast<int64_t*>(rbp24 - 88);
    r14_25 = *reinterpret_cast<int64_t*>(rbp26 - 0x68);
    rbx27 = *reinterpret_cast<int64_t*>(rbp28 - 0x70);
    r11_29 = *reinterpret_cast<int64_t*>(rbp30 - 0x78);
    r10_31 = *reinterpret_cast<int64_t*>(rbp32 - 0x80);
    rax33 = *reinterpret_cast<int64_t*>(rbp34 - 0x88);
    rsi35 = reinterpret_cast<struct s1*>(rbp36 - 56);
    v37 = *reinterpret_cast<int64_t*>(rbp38 - 96);
    init_array(rdi17, rsi35, rbp39 - 64, rcx19, r8_21, r9_23, v37, r14_25, rbx27, r11_29, r10_31, rax33);
    *reinterpret_cast<int32_t*>(&rdi40) = *reinterpret_cast<int32_t*>(rbp41 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi40->f0 = rsi35->f0;
    rdi42 = &rdi40->f4;
    *rdi42 = rsi35->f4;
    rsi43 = *reinterpret_cast<int64_t*>(rbp44 - 72);
    rdx45 = *reinterpret_cast<int64_t*>(rbp46 - 80);
    rcx47 = *reinterpret_cast<int64_t*>(rbp48 - 88);
    r8_49 = *reinterpret_cast<int64_t*>(rbp50 - 96);
    r9_51 = *reinterpret_cast<int64_t*>(rbp52 - 0x68);
    r11_53 = *reinterpret_cast<int64_t*>(rbp54 - 0x78);
    r10_55 = *reinterpret_cast<int64_t*>(rbp56 - 0x80);
    rax57 = *reinterpret_cast<int64_t*>(rbp58 - 0x88);
    v59 = *reinterpret_cast<int64_t*>(rbp60 - 0x70);
    fun_3dc(rdi42 + 1, rsi43, rdx45, rcx47, r8_49, r9_51, v59, r11_53, r10_55, rax57, r10_31, rax33);
    if (*reinterpret_cast<int32_t*>(rbp61 - 28) <= 42) {
        addr_40e_15:
        rdi62 = *reinterpret_cast<int64_t*>(rbp63 - 72);
        fun_417(rdi62, rsi43, rdx45, rcx47, r8_49, r9_51, v59, r11_53, r10_55, rax57, r10_31, rax33);
    } else {
        rdi64 = **reinterpret_cast<int64_t**>(rbp65 - 40);
        rsi43 = 0x3f4;
        eax66 = fun_3f9(rdi64, 0x3f4, rdx45, rcx47, r8_49, r9_51, v59, r11_53, r10_55, rax57, r10_31, rax33);
        if (!reinterpret_cast<int1_t>(eax66 == fprintf)) 
            goto addr_40e_15; else 
            goto addr_402_18;
    }
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 80);
    fun_420(rdi67, rsi43, rdx45, rcx47, r8_49, r9_51, v59, r11_53, r10_55, rax57, r10_31, rax33);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 88);
    fun_429(rdi69, rsi43, rdx45, rcx47, r8_49, r9_51, v59, r11_53, r10_55, rax57, r10_31, rax33);
    rdi71 = *reinterpret_cast<int64_t*>(rbp72 - 96);
    fun_432(rdi71, rsi43, rdx45, rcx47, r8_49, r9_51, v59, r11_53, r10_55, rax57, r10_31, rax33);
    rdi73 = *reinterpret_cast<int64_t*>(rbp74 - 0x68);
    fun_43b(rdi73, rsi43, rdx45, rcx47, r8_49, r9_51, v59, r11_53, r10_55, rax57, r10_31, rax33);
    rdi75 = *reinterpret_cast<int64_t*>(rbp76 - 0x70);
    fun_444(rdi75, rsi43, rdx45, rcx47, r8_49, r9_51, v59, r11_53, r10_55, rax57, r10_31, rax33);
    rdi77 = *reinterpret_cast<int64_t*>(rbp78 - 0x78);
    fun_44d(rdi77, rsi43, rdx45, rcx47, r8_49, r9_51, v59, r11_53, r10_55, rax57, r10_31, rax33);
    rdi79 = *reinterpret_cast<int64_t*>(rbp80 - 0x80);
    fun_456(rdi79, rsi43, rdx45, rcx47, r8_49, r9_51, v59, r11_53, r10_55, rax57, r10_31, rax33);
    rdi81 = *reinterpret_cast<int64_t*>(rbp82 - 0x88);
    fun_462(rdi81, rsi43, rdx45, rcx47, r8_49, r9_51, v59, r11_53, r10_55, rax57, r10_31, rax33);
    goto v83;
    addr_402_18:
    edi84 = *reinterpret_cast<int32_t*>(rbp85 - 44);
    rsi43 = *reinterpret_cast<int64_t*>(rbp86 - 0x70);
    print_array(edi84, rsi43, rdx45, rcx47, r8_49, r9_51, v59, r11_53, r10_55, rax57, r10_31, rax33);
    goto addr_40e_15;
}

void fun_444(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t v19;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 0x78);
    fun_44d(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x80);
    fun_456(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x88);
    fun_462(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v19;
}

struct s5 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_2d6(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int64_t rax11;
    int64_t rbp12;
    int64_t rax13;
    int64_t rbp14;
    struct s0* rdi15;
    int64_t rbp16;
    int64_t rcx17;
    int64_t rbp18;
    int64_t r8_19;
    int64_t rbp20;
    int64_t r9_21;
    int64_t rbp22;
    int64_t r14_23;
    int64_t rbp24;
    int64_t rbx25;
    int64_t rbp26;
    int64_t r11_27;
    int64_t rbp28;
    int64_t r10_29;
    int64_t rbp30;
    int64_t rax31;
    int64_t rbp32;
    struct s1* rsi33;
    int64_t rbp34;
    int64_t v35;
    int64_t rbp36;
    int64_t rbp37;
    struct s5* rdi38;
    int64_t rbp39;
    int32_t* rdi40;
    int64_t rsi41;
    int64_t rbp42;
    int64_t rdx43;
    int64_t rbp44;
    int64_t rcx45;
    int64_t rbp46;
    int64_t r8_47;
    int64_t rbp48;
    int64_t r9_49;
    int64_t rbp50;
    int64_t r11_51;
    int64_t rbp52;
    int64_t r10_53;
    int64_t rbp54;
    int64_t rax55;
    int64_t rbp56;
    int64_t v57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rdi60;
    int64_t rbp61;
    int64_t rdi62;
    int64_t rbp63;
    int32_t eax64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rdi67;
    int64_t rbp68;
    int64_t rdi69;
    int64_t rbp70;
    int64_t rdi71;
    int64_t rbp72;
    int64_t rdi73;
    int64_t rbp74;
    int64_t rdi75;
    int64_t rbp76;
    int64_t rdi77;
    int64_t rbp78;
    int64_t rdi79;
    int64_t rbp80;
    int64_t v81;
    int32_t edi82;
    int64_t rbp83;
    int64_t rbp84;

    *reinterpret_cast<int64_t*>(rbp3 - 96) = rax4;
    rax5 = fun_2e9(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 0x68) = rax5;
    rax7 = fun_2fc(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 0x70) = rax7;
    rax9 = fun_30f(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 0x78) = rax9;
    rax11 = fun_322(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp12 - 0x80) = rax11;
    rax13 = fun_335(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp14 - 0x88) = rax13;
    *reinterpret_cast<int32_t*>(&rdi15) = *reinterpret_cast<int32_t*>(rbp16 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx17 = *reinterpret_cast<int64_t*>(rbp18 - 72);
    r8_19 = *reinterpret_cast<int64_t*>(rbp20 - 80);
    r9_21 = *reinterpret_cast<int64_t*>(rbp22 - 88);
    r14_23 = *reinterpret_cast<int64_t*>(rbp24 - 0x68);
    rbx25 = *reinterpret_cast<int64_t*>(rbp26 - 0x70);
    r11_27 = *reinterpret_cast<int64_t*>(rbp28 - 0x78);
    r10_29 = *reinterpret_cast<int64_t*>(rbp30 - 0x80);
    rax31 = *reinterpret_cast<int64_t*>(rbp32 - 0x88);
    rsi33 = reinterpret_cast<struct s1*>(rbp34 - 56);
    v35 = *reinterpret_cast<int64_t*>(rbp36 - 96);
    init_array(rdi15, rsi33, rbp37 - 64, rcx17, r8_19, r9_21, v35, r14_23, rbx25, r11_27, r10_29, rax31);
    *reinterpret_cast<int32_t*>(&rdi38) = *reinterpret_cast<int32_t*>(rbp39 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi38->f0 = rsi33->f0;
    rdi40 = &rdi38->f4;
    *rdi40 = rsi33->f4;
    rsi41 = *reinterpret_cast<int64_t*>(rbp42 - 72);
    rdx43 = *reinterpret_cast<int64_t*>(rbp44 - 80);
    rcx45 = *reinterpret_cast<int64_t*>(rbp46 - 88);
    r8_47 = *reinterpret_cast<int64_t*>(rbp48 - 96);
    r9_49 = *reinterpret_cast<int64_t*>(rbp50 - 0x68);
    r11_51 = *reinterpret_cast<int64_t*>(rbp52 - 0x78);
    r10_53 = *reinterpret_cast<int64_t*>(rbp54 - 0x80);
    rax55 = *reinterpret_cast<int64_t*>(rbp56 - 0x88);
    v57 = *reinterpret_cast<int64_t*>(rbp58 - 0x70);
    fun_3dc(rdi40 + 1, rsi41, rdx43, rcx45, r8_47, r9_49, v57, r11_51, r10_53, rax55, r10_29, rax31);
    if (*reinterpret_cast<int32_t*>(rbp59 - 28) <= 42) {
        addr_40e_14:
        rdi60 = *reinterpret_cast<int64_t*>(rbp61 - 72);
        fun_417(rdi60, rsi41, rdx43, rcx45, r8_47, r9_49, v57, r11_51, r10_53, rax55, r10_29, rax31);
    } else {
        rdi62 = **reinterpret_cast<int64_t**>(rbp63 - 40);
        rsi41 = 0x3f4;
        eax64 = fun_3f9(rdi62, 0x3f4, rdx43, rcx45, r8_47, r9_49, v57, r11_51, r10_53, rax55, r10_29, rax31);
        if (!reinterpret_cast<int1_t>(eax64 == fprintf)) 
            goto addr_40e_14; else 
            goto addr_402_17;
    }
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 80);
    fun_420(rdi65, rsi41, rdx43, rcx45, r8_47, r9_49, v57, r11_51, r10_53, rax55, r10_29, rax31);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 88);
    fun_429(rdi67, rsi41, rdx43, rcx45, r8_47, r9_49, v57, r11_51, r10_53, rax55, r10_29, rax31);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 96);
    fun_432(rdi69, rsi41, rdx43, rcx45, r8_47, r9_49, v57, r11_51, r10_53, rax55, r10_29, rax31);
    rdi71 = *reinterpret_cast<int64_t*>(rbp72 - 0x68);
    fun_43b(rdi71, rsi41, rdx43, rcx45, r8_47, r9_49, v57, r11_51, r10_53, rax55, r10_29, rax31);
    rdi73 = *reinterpret_cast<int64_t*>(rbp74 - 0x70);
    fun_444(rdi73, rsi41, rdx43, rcx45, r8_47, r9_49, v57, r11_51, r10_53, rax55, r10_29, rax31);
    rdi75 = *reinterpret_cast<int64_t*>(rbp76 - 0x78);
    fun_44d(rdi75, rsi41, rdx43, rcx45, r8_47, r9_49, v57, r11_51, r10_53, rax55, r10_29, rax31);
    rdi77 = *reinterpret_cast<int64_t*>(rbp78 - 0x80);
    fun_456(rdi77, rsi41, rdx43, rcx45, r8_47, r9_49, v57, r11_51, r10_53, rax55, r10_29, rax31);
    rdi79 = *reinterpret_cast<int64_t*>(rbp80 - 0x88);
    fun_462(rdi79, rsi41, rdx43, rcx45, r8_47, r9_49, v57, r11_51, r10_53, rax55, r10_29, rax31);
    goto v81;
    addr_402_17:
    edi82 = *reinterpret_cast<int32_t*>(rbp83 - 44);
    rsi41 = *reinterpret_cast<int64_t*>(rbp84 - 0x70);
    print_array(edi82, rsi41, rdx43, rcx45, r8_47, r9_49, v57, r11_51, r10_53, rax55, r10_29, rax31);
    goto addr_40e_14;
}

void fun_44d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t v17;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 0x80);
    fun_456(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x88);
    fun_462(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v17;
}

struct s6 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_2e9(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int64_t rax11;
    int64_t rbp12;
    struct s0* rdi13;
    int64_t rbp14;
    int64_t rcx15;
    int64_t rbp16;
    int64_t r8_17;
    int64_t rbp18;
    int64_t r9_19;
    int64_t rbp20;
    int64_t r14_21;
    int64_t rbp22;
    int64_t rbx23;
    int64_t rbp24;
    int64_t r11_25;
    int64_t rbp26;
    int64_t r10_27;
    int64_t rbp28;
    int64_t rax29;
    int64_t rbp30;
    struct s1* rsi31;
    int64_t rbp32;
    int64_t v33;
    int64_t rbp34;
    int64_t rbp35;
    struct s6* rdi36;
    int64_t rbp37;
    int32_t* rdi38;
    int64_t rsi39;
    int64_t rbp40;
    int64_t rdx41;
    int64_t rbp42;
    int64_t rcx43;
    int64_t rbp44;
    int64_t r8_45;
    int64_t rbp46;
    int64_t r9_47;
    int64_t rbp48;
    int64_t r11_49;
    int64_t rbp50;
    int64_t r10_51;
    int64_t rbp52;
    int64_t rax53;
    int64_t rbp54;
    int64_t v55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rdi58;
    int64_t rbp59;
    int64_t rdi60;
    int64_t rbp61;
    int32_t eax62;
    int64_t rdi63;
    int64_t rbp64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rdi67;
    int64_t rbp68;
    int64_t rdi69;
    int64_t rbp70;
    int64_t rdi71;
    int64_t rbp72;
    int64_t rdi73;
    int64_t rbp74;
    int64_t rdi75;
    int64_t rbp76;
    int64_t rdi77;
    int64_t rbp78;
    int64_t v79;
    int32_t edi80;
    int64_t rbp81;
    int64_t rbp82;

    *reinterpret_cast<int64_t*>(rbp3 - 0x68) = rax4;
    rax5 = fun_2fc(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 0x70) = rax5;
    rax7 = fun_30f(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 0x78) = rax7;
    rax9 = fun_322(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 0x80) = rax9;
    rax11 = fun_335(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp12 - 0x88) = rax11;
    *reinterpret_cast<int32_t*>(&rdi13) = *reinterpret_cast<int32_t*>(rbp14 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx15 = *reinterpret_cast<int64_t*>(rbp16 - 72);
    r8_17 = *reinterpret_cast<int64_t*>(rbp18 - 80);
    r9_19 = *reinterpret_cast<int64_t*>(rbp20 - 88);
    r14_21 = *reinterpret_cast<int64_t*>(rbp22 - 0x68);
    rbx23 = *reinterpret_cast<int64_t*>(rbp24 - 0x70);
    r11_25 = *reinterpret_cast<int64_t*>(rbp26 - 0x78);
    r10_27 = *reinterpret_cast<int64_t*>(rbp28 - 0x80);
    rax29 = *reinterpret_cast<int64_t*>(rbp30 - 0x88);
    rsi31 = reinterpret_cast<struct s1*>(rbp32 - 56);
    v33 = *reinterpret_cast<int64_t*>(rbp34 - 96);
    init_array(rdi13, rsi31, rbp35 - 64, rcx15, r8_17, r9_19, v33, r14_21, rbx23, r11_25, r10_27, rax29);
    *reinterpret_cast<int32_t*>(&rdi36) = *reinterpret_cast<int32_t*>(rbp37 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi36->f0 = rsi31->f0;
    rdi38 = &rdi36->f4;
    *rdi38 = rsi31->f4;
    rsi39 = *reinterpret_cast<int64_t*>(rbp40 - 72);
    rdx41 = *reinterpret_cast<int64_t*>(rbp42 - 80);
    rcx43 = *reinterpret_cast<int64_t*>(rbp44 - 88);
    r8_45 = *reinterpret_cast<int64_t*>(rbp46 - 96);
    r9_47 = *reinterpret_cast<int64_t*>(rbp48 - 0x68);
    r11_49 = *reinterpret_cast<int64_t*>(rbp50 - 0x78);
    r10_51 = *reinterpret_cast<int64_t*>(rbp52 - 0x80);
    rax53 = *reinterpret_cast<int64_t*>(rbp54 - 0x88);
    v55 = *reinterpret_cast<int64_t*>(rbp56 - 0x70);
    fun_3dc(rdi38 + 1, rsi39, rdx41, rcx43, r8_45, r9_47, v55, r11_49, r10_51, rax53, r10_27, rax29);
    if (*reinterpret_cast<int32_t*>(rbp57 - 28) <= 42) {
        addr_40e_13:
        rdi58 = *reinterpret_cast<int64_t*>(rbp59 - 72);
        fun_417(rdi58, rsi39, rdx41, rcx43, r8_45, r9_47, v55, r11_49, r10_51, rax53, r10_27, rax29);
    } else {
        rdi60 = **reinterpret_cast<int64_t**>(rbp61 - 40);
        rsi39 = 0x3f4;
        eax62 = fun_3f9(rdi60, 0x3f4, rdx41, rcx43, r8_45, r9_47, v55, r11_49, r10_51, rax53, r10_27, rax29);
        if (!reinterpret_cast<int1_t>(eax62 == fprintf)) 
            goto addr_40e_13; else 
            goto addr_402_16;
    }
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 80);
    fun_420(rdi63, rsi39, rdx41, rcx43, r8_45, r9_47, v55, r11_49, r10_51, rax53, r10_27, rax29);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 88);
    fun_429(rdi65, rsi39, rdx41, rcx43, r8_45, r9_47, v55, r11_49, r10_51, rax53, r10_27, rax29);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 96);
    fun_432(rdi67, rsi39, rdx41, rcx43, r8_45, r9_47, v55, r11_49, r10_51, rax53, r10_27, rax29);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 0x68);
    fun_43b(rdi69, rsi39, rdx41, rcx43, r8_45, r9_47, v55, r11_49, r10_51, rax53, r10_27, rax29);
    rdi71 = *reinterpret_cast<int64_t*>(rbp72 - 0x70);
    fun_444(rdi71, rsi39, rdx41, rcx43, r8_45, r9_47, v55, r11_49, r10_51, rax53, r10_27, rax29);
    rdi73 = *reinterpret_cast<int64_t*>(rbp74 - 0x78);
    fun_44d(rdi73, rsi39, rdx41, rcx43, r8_45, r9_47, v55, r11_49, r10_51, rax53, r10_27, rax29);
    rdi75 = *reinterpret_cast<int64_t*>(rbp76 - 0x80);
    fun_456(rdi75, rsi39, rdx41, rcx43, r8_45, r9_47, v55, r11_49, r10_51, rax53, r10_27, rax29);
    rdi77 = *reinterpret_cast<int64_t*>(rbp78 - 0x88);
    fun_462(rdi77, rsi39, rdx41, rcx43, r8_45, r9_47, v55, r11_49, r10_51, rax53, r10_27, rax29);
    goto v79;
    addr_402_16:
    edi80 = *reinterpret_cast<int32_t*>(rbp81 - 44);
    rsi39 = *reinterpret_cast<int64_t*>(rbp82 - 0x70);
    print_array(edi80, rsi39, rdx41, rcx43, r8_45, r9_47, v55, r11_49, r10_51, rax53, r10_27, rax29);
    goto addr_40e_13;
}

void fun_456(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t v15;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 0x88);
    fun_462(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v15;
}

struct s7 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_2fc(int64_t rdi, int64_t rsi) {
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
    int64_t rcx13;
    int64_t rbp14;
    int64_t r8_15;
    int64_t rbp16;
    int64_t r9_17;
    int64_t rbp18;
    int64_t r14_19;
    int64_t rbp20;
    int64_t rbx21;
    int64_t rbp22;
    int64_t r11_23;
    int64_t rbp24;
    int64_t r10_25;
    int64_t rbp26;
    int64_t rax27;
    int64_t rbp28;
    struct s1* rsi29;
    int64_t rbp30;
    int64_t v31;
    int64_t rbp32;
    int64_t rbp33;
    struct s7* rdi34;
    int64_t rbp35;
    int32_t* rdi36;
    int64_t rsi37;
    int64_t rbp38;
    int64_t rdx39;
    int64_t rbp40;
    int64_t rcx41;
    int64_t rbp42;
    int64_t r8_43;
    int64_t rbp44;
    int64_t r9_45;
    int64_t rbp46;
    int64_t r11_47;
    int64_t rbp48;
    int64_t r10_49;
    int64_t rbp50;
    int64_t rax51;
    int64_t rbp52;
    int64_t v53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rdi56;
    int64_t rbp57;
    int64_t rdi58;
    int64_t rbp59;
    int32_t eax60;
    int64_t rdi61;
    int64_t rbp62;
    int64_t rdi63;
    int64_t rbp64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rdi67;
    int64_t rbp68;
    int64_t rdi69;
    int64_t rbp70;
    int64_t rdi71;
    int64_t rbp72;
    int64_t rdi73;
    int64_t rbp74;
    int64_t rdi75;
    int64_t rbp76;
    int64_t v77;
    int32_t edi78;
    int64_t rbp79;
    int64_t rbp80;

    *reinterpret_cast<int64_t*>(rbp3 - 0x70) = rax4;
    rax5 = fun_30f(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 0x78) = rax5;
    rax7 = fun_322(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 0x80) = rax7;
    rax9 = fun_335(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 0x88) = rax9;
    *reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<int32_t*>(rbp12 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx13 = *reinterpret_cast<int64_t*>(rbp14 - 72);
    r8_15 = *reinterpret_cast<int64_t*>(rbp16 - 80);
    r9_17 = *reinterpret_cast<int64_t*>(rbp18 - 88);
    r14_19 = *reinterpret_cast<int64_t*>(rbp20 - 0x68);
    rbx21 = *reinterpret_cast<int64_t*>(rbp22 - 0x70);
    r11_23 = *reinterpret_cast<int64_t*>(rbp24 - 0x78);
    r10_25 = *reinterpret_cast<int64_t*>(rbp26 - 0x80);
    rax27 = *reinterpret_cast<int64_t*>(rbp28 - 0x88);
    rsi29 = reinterpret_cast<struct s1*>(rbp30 - 56);
    v31 = *reinterpret_cast<int64_t*>(rbp32 - 96);
    init_array(rdi11, rsi29, rbp33 - 64, rcx13, r8_15, r9_17, v31, r14_19, rbx21, r11_23, r10_25, rax27);
    *reinterpret_cast<int32_t*>(&rdi34) = *reinterpret_cast<int32_t*>(rbp35 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi34->f0 = rsi29->f0;
    rdi36 = &rdi34->f4;
    *rdi36 = rsi29->f4;
    rsi37 = *reinterpret_cast<int64_t*>(rbp38 - 72);
    rdx39 = *reinterpret_cast<int64_t*>(rbp40 - 80);
    rcx41 = *reinterpret_cast<int64_t*>(rbp42 - 88);
    r8_43 = *reinterpret_cast<int64_t*>(rbp44 - 96);
    r9_45 = *reinterpret_cast<int64_t*>(rbp46 - 0x68);
    r11_47 = *reinterpret_cast<int64_t*>(rbp48 - 0x78);
    r10_49 = *reinterpret_cast<int64_t*>(rbp50 - 0x80);
    rax51 = *reinterpret_cast<int64_t*>(rbp52 - 0x88);
    v53 = *reinterpret_cast<int64_t*>(rbp54 - 0x70);
    fun_3dc(rdi36 + 1, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    if (*reinterpret_cast<int32_t*>(rbp55 - 28) <= 42) {
        addr_40e_12:
        rdi56 = *reinterpret_cast<int64_t*>(rbp57 - 72);
        fun_417(rdi56, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    } else {
        rdi58 = **reinterpret_cast<int64_t**>(rbp59 - 40);
        rsi37 = 0x3f4;
        eax60 = fun_3f9(rdi58, 0x3f4, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
        if (!reinterpret_cast<int1_t>(eax60 == fprintf)) 
            goto addr_40e_12; else 
            goto addr_402_15;
    }
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 80);
    fun_420(rdi61, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 88);
    fun_429(rdi63, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 96);
    fun_432(rdi65, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 0x68);
    fun_43b(rdi67, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 0x70);
    fun_444(rdi69, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    rdi71 = *reinterpret_cast<int64_t*>(rbp72 - 0x78);
    fun_44d(rdi71, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    rdi73 = *reinterpret_cast<int64_t*>(rbp74 - 0x80);
    fun_456(rdi73, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    rdi75 = *reinterpret_cast<int64_t*>(rbp76 - 0x88);
    fun_462(rdi75, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    goto v77;
    addr_402_15:
    edi78 = *reinterpret_cast<int32_t*>(rbp79 - 44);
    rsi37 = *reinterpret_cast<int64_t*>(rbp80 - 0x70);
    print_array(edi78, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    goto addr_40e_12;
}

void fun_462(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t v13;

    goto v13;
}

struct s8 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_30f(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    struct s0* rdi9;
    int64_t rbp10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t r8_13;
    int64_t rbp14;
    int64_t r9_15;
    int64_t rbp16;
    int64_t r14_17;
    int64_t rbp18;
    int64_t rbx19;
    int64_t rbp20;
    int64_t r11_21;
    int64_t rbp22;
    int64_t r10_23;
    int64_t rbp24;
    int64_t rax25;
    int64_t rbp26;
    struct s1* rsi27;
    int64_t rbp28;
    int64_t v29;
    int64_t rbp30;
    int64_t rbp31;
    struct s8* rdi32;
    int64_t rbp33;
    int32_t* rdi34;
    int64_t rsi35;
    int64_t rbp36;
    int64_t rdx37;
    int64_t rbp38;
    int64_t rcx39;
    int64_t rbp40;
    int64_t r8_41;
    int64_t rbp42;
    int64_t r9_43;
    int64_t rbp44;
    int64_t r11_45;
    int64_t rbp46;
    int64_t r10_47;
    int64_t rbp48;
    int64_t rax49;
    int64_t rbp50;
    int64_t v51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rdi54;
    int64_t rbp55;
    int64_t rdi56;
    int64_t rbp57;
    int32_t eax58;
    int64_t rdi59;
    int64_t rbp60;
    int64_t rdi61;
    int64_t rbp62;
    int64_t rdi63;
    int64_t rbp64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rdi67;
    int64_t rbp68;
    int64_t rdi69;
    int64_t rbp70;
    int64_t rdi71;
    int64_t rbp72;
    int64_t rdi73;
    int64_t rbp74;
    int64_t v75;
    int32_t edi76;
    int64_t rbp77;
    int64_t rbp78;

    *reinterpret_cast<int64_t*>(rbp3 - 0x78) = rax4;
    rax5 = fun_322(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 0x80) = rax5;
    rax7 = fun_335(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 0x88) = rax7;
    *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx11 = *reinterpret_cast<int64_t*>(rbp12 - 72);
    r8_13 = *reinterpret_cast<int64_t*>(rbp14 - 80);
    r9_15 = *reinterpret_cast<int64_t*>(rbp16 - 88);
    r14_17 = *reinterpret_cast<int64_t*>(rbp18 - 0x68);
    rbx19 = *reinterpret_cast<int64_t*>(rbp20 - 0x70);
    r11_21 = *reinterpret_cast<int64_t*>(rbp22 - 0x78);
    r10_23 = *reinterpret_cast<int64_t*>(rbp24 - 0x80);
    rax25 = *reinterpret_cast<int64_t*>(rbp26 - 0x88);
    rsi27 = reinterpret_cast<struct s1*>(rbp28 - 56);
    v29 = *reinterpret_cast<int64_t*>(rbp30 - 96);
    init_array(rdi9, rsi27, rbp31 - 64, rcx11, r8_13, r9_15, v29, r14_17, rbx19, r11_21, r10_23, rax25);
    *reinterpret_cast<int32_t*>(&rdi32) = *reinterpret_cast<int32_t*>(rbp33 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi32->f0 = rsi27->f0;
    rdi34 = &rdi32->f4;
    *rdi34 = rsi27->f4;
    rsi35 = *reinterpret_cast<int64_t*>(rbp36 - 72);
    rdx37 = *reinterpret_cast<int64_t*>(rbp38 - 80);
    rcx39 = *reinterpret_cast<int64_t*>(rbp40 - 88);
    r8_41 = *reinterpret_cast<int64_t*>(rbp42 - 96);
    r9_43 = *reinterpret_cast<int64_t*>(rbp44 - 0x68);
    r11_45 = *reinterpret_cast<int64_t*>(rbp46 - 0x78);
    r10_47 = *reinterpret_cast<int64_t*>(rbp48 - 0x80);
    rax49 = *reinterpret_cast<int64_t*>(rbp50 - 0x88);
    v51 = *reinterpret_cast<int64_t*>(rbp52 - 0x70);
    fun_3dc(rdi34 + 1, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    if (*reinterpret_cast<int32_t*>(rbp53 - 28) <= 42) {
        addr_40e_11:
        rdi54 = *reinterpret_cast<int64_t*>(rbp55 - 72);
        fun_417(rdi54, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    } else {
        rdi56 = **reinterpret_cast<int64_t**>(rbp57 - 40);
        rsi35 = 0x3f4;
        eax58 = fun_3f9(rdi56, 0x3f4, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
        if (!reinterpret_cast<int1_t>(eax58 == fprintf)) 
            goto addr_40e_11; else 
            goto addr_402_14;
    }
    rdi59 = *reinterpret_cast<int64_t*>(rbp60 - 80);
    fun_420(rdi59, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 88);
    fun_429(rdi61, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 96);
    fun_432(rdi63, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 0x68);
    fun_43b(rdi65, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 0x70);
    fun_444(rdi67, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 0x78);
    fun_44d(rdi69, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    rdi71 = *reinterpret_cast<int64_t*>(rbp72 - 0x80);
    fun_456(rdi71, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    rdi73 = *reinterpret_cast<int64_t*>(rbp74 - 0x88);
    fun_462(rdi73, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    goto v75;
    addr_402_14:
    edi76 = *reinterpret_cast<int32_t*>(rbp77 - 44);
    rsi35 = *reinterpret_cast<int64_t*>(rbp78 - 0x70);
    print_array(edi76, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    goto addr_40e_11;
}

struct s9 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_322(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    struct s0* rdi7;
    int64_t rbp8;
    int64_t rcx9;
    int64_t rbp10;
    int64_t r8_11;
    int64_t rbp12;
    int64_t r9_13;
    int64_t rbp14;
    int64_t r14_15;
    int64_t rbp16;
    int64_t rbx17;
    int64_t rbp18;
    int64_t r11_19;
    int64_t rbp20;
    int64_t r10_21;
    int64_t rbp22;
    int64_t rax23;
    int64_t rbp24;
    struct s1* rsi25;
    int64_t rbp26;
    int64_t v27;
    int64_t rbp28;
    int64_t rbp29;
    struct s9* rdi30;
    int64_t rbp31;
    int32_t* rdi32;
    int64_t rsi33;
    int64_t rbp34;
    int64_t rdx35;
    int64_t rbp36;
    int64_t rcx37;
    int64_t rbp38;
    int64_t r8_39;
    int64_t rbp40;
    int64_t r9_41;
    int64_t rbp42;
    int64_t r11_43;
    int64_t rbp44;
    int64_t r10_45;
    int64_t rbp46;
    int64_t rax47;
    int64_t rbp48;
    int64_t v49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rdi52;
    int64_t rbp53;
    int64_t rdi54;
    int64_t rbp55;
    int32_t eax56;
    int64_t rdi57;
    int64_t rbp58;
    int64_t rdi59;
    int64_t rbp60;
    int64_t rdi61;
    int64_t rbp62;
    int64_t rdi63;
    int64_t rbp64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rdi67;
    int64_t rbp68;
    int64_t rdi69;
    int64_t rbp70;
    int64_t rdi71;
    int64_t rbp72;
    int64_t v73;
    int32_t edi74;
    int64_t rbp75;
    int64_t rbp76;

    *reinterpret_cast<int64_t*>(rbp3 - 0x80) = rax4;
    rax5 = fun_335(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 0x88) = rax5;
    *reinterpret_cast<int32_t*>(&rdi7) = *reinterpret_cast<int32_t*>(rbp8 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx9 = *reinterpret_cast<int64_t*>(rbp10 - 72);
    r8_11 = *reinterpret_cast<int64_t*>(rbp12 - 80);
    r9_13 = *reinterpret_cast<int64_t*>(rbp14 - 88);
    r14_15 = *reinterpret_cast<int64_t*>(rbp16 - 0x68);
    rbx17 = *reinterpret_cast<int64_t*>(rbp18 - 0x70);
    r11_19 = *reinterpret_cast<int64_t*>(rbp20 - 0x78);
    r10_21 = *reinterpret_cast<int64_t*>(rbp22 - 0x80);
    rax23 = *reinterpret_cast<int64_t*>(rbp24 - 0x88);
    rsi25 = reinterpret_cast<struct s1*>(rbp26 - 56);
    v27 = *reinterpret_cast<int64_t*>(rbp28 - 96);
    init_array(rdi7, rsi25, rbp29 - 64, rcx9, r8_11, r9_13, v27, r14_15, rbx17, r11_19, r10_21, rax23);
    *reinterpret_cast<int32_t*>(&rdi30) = *reinterpret_cast<int32_t*>(rbp31 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi30) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi30->f0 = rsi25->f0;
    rdi32 = &rdi30->f4;
    *rdi32 = rsi25->f4;
    rsi33 = *reinterpret_cast<int64_t*>(rbp34 - 72);
    rdx35 = *reinterpret_cast<int64_t*>(rbp36 - 80);
    rcx37 = *reinterpret_cast<int64_t*>(rbp38 - 88);
    r8_39 = *reinterpret_cast<int64_t*>(rbp40 - 96);
    r9_41 = *reinterpret_cast<int64_t*>(rbp42 - 0x68);
    r11_43 = *reinterpret_cast<int64_t*>(rbp44 - 0x78);
    r10_45 = *reinterpret_cast<int64_t*>(rbp46 - 0x80);
    rax47 = *reinterpret_cast<int64_t*>(rbp48 - 0x88);
    v49 = *reinterpret_cast<int64_t*>(rbp50 - 0x70);
    fun_3dc(rdi32 + 1, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    if (*reinterpret_cast<int32_t*>(rbp51 - 28) <= 42) {
        addr_40e_10:
        rdi52 = *reinterpret_cast<int64_t*>(rbp53 - 72);
        fun_417(rdi52, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    } else {
        rdi54 = **reinterpret_cast<int64_t**>(rbp55 - 40);
        rsi33 = 0x3f4;
        eax56 = fun_3f9(rdi54, 0x3f4, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
        if (!reinterpret_cast<int1_t>(eax56 == fprintf)) 
            goto addr_40e_10; else 
            goto addr_402_13;
    }
    rdi57 = *reinterpret_cast<int64_t*>(rbp58 - 80);
    fun_420(rdi57, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    rdi59 = *reinterpret_cast<int64_t*>(rbp60 - 88);
    fun_429(rdi59, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 96);
    fun_432(rdi61, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 0x68);
    fun_43b(rdi63, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 0x70);
    fun_444(rdi65, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 0x78);
    fun_44d(rdi67, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 0x80);
    fun_456(rdi69, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    rdi71 = *reinterpret_cast<int64_t*>(rbp72 - 0x88);
    fun_462(rdi71, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    goto v73;
    addr_402_13:
    edi74 = *reinterpret_cast<int32_t*>(rbp75 - 44);
    rsi33 = *reinterpret_cast<int64_t*>(rbp76 - 0x70);
    print_array(edi74, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    goto addr_40e_10;
}

struct s10 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_335(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    struct s0* rdi5;
    int64_t rbp6;
    int64_t rcx7;
    int64_t rbp8;
    int64_t r8_9;
    int64_t rbp10;
    int64_t r9_11;
    int64_t rbp12;
    int64_t r14_13;
    int64_t rbp14;
    int64_t rbx15;
    int64_t rbp16;
    int64_t r11_17;
    int64_t rbp18;
    int64_t r10_19;
    int64_t rbp20;
    int64_t rax21;
    int64_t rbp22;
    struct s1* rsi23;
    int64_t rbp24;
    int64_t v25;
    int64_t rbp26;
    int64_t rbp27;
    struct s10* rdi28;
    int64_t rbp29;
    int32_t* rdi30;
    int64_t rsi31;
    int64_t rbp32;
    int64_t rdx33;
    int64_t rbp34;
    int64_t rcx35;
    int64_t rbp36;
    int64_t r8_37;
    int64_t rbp38;
    int64_t r9_39;
    int64_t rbp40;
    int64_t r11_41;
    int64_t rbp42;
    int64_t r10_43;
    int64_t rbp44;
    int64_t rax45;
    int64_t rbp46;
    int64_t v47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rdi50;
    int64_t rbp51;
    int64_t rdi52;
    int64_t rbp53;
    int32_t eax54;
    int64_t rdi55;
    int64_t rbp56;
    int64_t rdi57;
    int64_t rbp58;
    int64_t rdi59;
    int64_t rbp60;
    int64_t rdi61;
    int64_t rbp62;
    int64_t rdi63;
    int64_t rbp64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rdi67;
    int64_t rbp68;
    int64_t rdi69;
    int64_t rbp70;
    int64_t v71;
    int32_t edi72;
    int64_t rbp73;
    int64_t rbp74;

    *reinterpret_cast<int64_t*>(rbp3 - 0x88) = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(rbp6 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx7 = *reinterpret_cast<int64_t*>(rbp8 - 72);
    r8_9 = *reinterpret_cast<int64_t*>(rbp10 - 80);
    r9_11 = *reinterpret_cast<int64_t*>(rbp12 - 88);
    r14_13 = *reinterpret_cast<int64_t*>(rbp14 - 0x68);
    rbx15 = *reinterpret_cast<int64_t*>(rbp16 - 0x70);
    r11_17 = *reinterpret_cast<int64_t*>(rbp18 - 0x78);
    r10_19 = *reinterpret_cast<int64_t*>(rbp20 - 0x80);
    rax21 = *reinterpret_cast<int64_t*>(rbp22 - 0x88);
    rsi23 = reinterpret_cast<struct s1*>(rbp24 - 56);
    v25 = *reinterpret_cast<int64_t*>(rbp26 - 96);
    init_array(rdi5, rsi23, rbp27 - 64, rcx7, r8_9, r9_11, v25, r14_13, rbx15, r11_17, r10_19, rax21);
    *reinterpret_cast<int32_t*>(&rdi28) = *reinterpret_cast<int32_t*>(rbp29 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi28->f0 = rsi23->f0;
    rdi30 = &rdi28->f4;
    *rdi30 = rsi23->f4;
    rsi31 = *reinterpret_cast<int64_t*>(rbp32 - 72);
    rdx33 = *reinterpret_cast<int64_t*>(rbp34 - 80);
    rcx35 = *reinterpret_cast<int64_t*>(rbp36 - 88);
    r8_37 = *reinterpret_cast<int64_t*>(rbp38 - 96);
    r9_39 = *reinterpret_cast<int64_t*>(rbp40 - 0x68);
    r11_41 = *reinterpret_cast<int64_t*>(rbp42 - 0x78);
    r10_43 = *reinterpret_cast<int64_t*>(rbp44 - 0x80);
    rax45 = *reinterpret_cast<int64_t*>(rbp46 - 0x88);
    v47 = *reinterpret_cast<int64_t*>(rbp48 - 0x70);
    fun_3dc(rdi30 + 1, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    if (*reinterpret_cast<int32_t*>(rbp49 - 28) <= 42) {
        addr_40e_9:
        rdi50 = *reinterpret_cast<int64_t*>(rbp51 - 72);
        fun_417(rdi50, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    } else {
        rdi52 = **reinterpret_cast<int64_t**>(rbp53 - 40);
        rsi31 = 0x3f4;
        eax54 = fun_3f9(rdi52, 0x3f4, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
        if (!reinterpret_cast<int1_t>(eax54 == fprintf)) 
            goto addr_40e_9; else 
            goto addr_402_12;
    }
    rdi55 = *reinterpret_cast<int64_t*>(rbp56 - 80);
    fun_420(rdi55, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    rdi57 = *reinterpret_cast<int64_t*>(rbp58 - 88);
    fun_429(rdi57, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    rdi59 = *reinterpret_cast<int64_t*>(rbp60 - 96);
    fun_432(rdi59, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 0x68);
    fun_43b(rdi61, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 0x70);
    fun_444(rdi63, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 0x78);
    fun_44d(rdi65, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 0x80);
    fun_456(rdi67, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 0x88);
    fun_462(rdi69, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    goto v71;
    addr_402_12:
    edi72 = *reinterpret_cast<int32_t*>(rbp73 - 44);
    rsi31 = *reinterpret_cast<int64_t*>(rbp74 - 0x70);
    print_array(edi72, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    goto addr_40e_9;
}

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

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f4;
};

struct s18 {
    int32_t f0;
    int32_t f4;
};

struct s19 {
    int32_t f0;
    int32_t f4;
};

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    int32_t f0;
    int32_t f4;
};

struct s22 {
    int32_t f0;
    int32_t f4;
};

struct s23 {
    int32_t f0;
    int32_t f4;
};

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s25 {
    int32_t f0;
    int32_t f4;
};

struct s26 {
    int32_t f0;
    int32_t f4;
};

struct s27 {
    int32_t f0;
    int32_t f4;
};

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s29 {
    int32_t f0;
    int32_t f4;
};

struct s30 {
    int32_t f0;
    int32_t f4;
};

struct s31 {
    int32_t f0;
    int32_t f4;
};

struct s32 {
    int32_t f0;
    int32_t f4;
};

struct s33 {
    int32_t f0;
    int32_t f4;
};

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

struct s36 {
    int32_t f0;
    int32_t f4;
};

struct s37 {
    int32_t f0;
    int32_t f4;
};

struct s38 {
    int32_t f0;
    int32_t f4;
};

struct s39 {
    int32_t f0;
    int32_t f4;
};

struct s40 {
    int32_t f0;
    int32_t f4;
};

struct s41 {
    int32_t f0;
    int32_t f4;
};

struct s42 {
    int32_t f0;
    int32_t f4;
};

struct s43 {
    int32_t f0;
    int32_t f4;
};

struct s44 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int32_t v13;
    struct s11* rdi14;
    struct s12* rsi15;
    struct s13* rdi16;
    struct s14* rsi17;
    struct s15* rdi18;
    struct s16* rsi19;
    struct s17* rdi20;
    struct s18* rsi21;
    struct s19* rdi22;
    struct s20* rsi23;
    int32_t v24;
    struct s21* rdi25;
    struct s22* rsi26;
    struct s23* rdi27;
    struct s24* rsi28;
    struct s25* rdi29;
    struct s26* rsi30;
    struct s27* rdi31;
    struct s28* rsi32;
    struct s29* rdi33;
    struct s30* rsi34;
    struct s31* rdi35;
    struct s32* rsi36;
    struct s33* rdi37;
    struct s34* rsi38;
    struct s35* rdi39;
    struct s36* rsi40;
    struct s37* rdi41;
    struct s38* rsi42;
    struct s39* rdi43;
    struct s40* rsi44;
    struct s41* rdi45;
    struct s42* rsi46;
    struct s43* rdi47;
    struct s44* rsi48;
    int32_t v49;

    v13 = *reinterpret_cast<int32_t*>(&rdi);
    rdi->f0 = rsi->f0;
    rdi14 = reinterpret_cast<struct s11*>(&rdi->f4);
    rsi15 = reinterpret_cast<struct s12*>(&rsi->f4);
    rdi14->f0 = rsi15->f0;
    rdi16 = reinterpret_cast<struct s13*>(&rdi14->f4);
    rsi17 = reinterpret_cast<struct s14*>(&rsi15->f4);
    rdi16->f0 = rsi17->f0;
    rdi18 = reinterpret_cast<struct s15*>(&rdi16->f4);
    rsi19 = reinterpret_cast<struct s16*>(&rsi17->f4);
    rdi18->f0 = rsi19->f0;
    rdi20 = reinterpret_cast<struct s17*>(&rdi18->f4);
    rsi21 = reinterpret_cast<struct s18*>(&rsi19->f4);
    __asm__("cvtsi2sd xmm0, dword [rbp-0x4]");
    rdi20->f0 = rsi21->f0;
    rdi22 = reinterpret_cast<struct s19*>(&rdi20->f4);
    rsi23 = reinterpret_cast<struct s20*>(&rsi21->f4);
    v24 = reinterpret_cast<int32_t>(fprintf);
    while (v24 < v13) {
        __asm__("cvtsi2sd xmm0, dword [rbp-0x34]");
        rdi22->f0 = rsi23->f0;
        rdi25 = reinterpret_cast<struct s21*>(&rdi22->f4);
        rsi26 = reinterpret_cast<struct s22*>(&rsi23->f4);
        __asm__("cvtsi2sd xmm0, eax");
        __asm__("divsd xmm0, [rbp-0x40]");
        rdi25->f0 = rsi26->f0;
        rdi27 = reinterpret_cast<struct s23*>(&rdi25->f4);
        rsi28 = reinterpret_cast<struct s24*>(&rsi26->f4);
        __asm__("divsd xmm0, xmm1");
        rdi27->f0 = rsi28->f0;
        rdi29 = reinterpret_cast<struct s25*>(&rdi27->f4);
        rsi30 = reinterpret_cast<struct s26*>(&rsi28->f4);
        __asm__("cvtsi2sd xmm0, eax");
        __asm__("divsd xmm0, [rbp-0x40]");
        rdi29->f0 = rsi30->f0;
        rdi31 = reinterpret_cast<struct s27*>(&rdi29->f4);
        rsi32 = reinterpret_cast<struct s28*>(&rsi30->f4);
        __asm__("divsd xmm0, xmm1");
        rdi31->f0 = rsi32->f0;
        rdi33 = reinterpret_cast<struct s29*>(&rdi31->f4);
        rsi34 = reinterpret_cast<struct s30*>(&rsi32->f4);
        __asm__("cvtsi2sd xmm0, eax");
        __asm__("divsd xmm0, [rbp-0x40]");
        rdi33->f0 = rsi34->f0;
        rdi35 = reinterpret_cast<struct s31*>(&rdi33->f4);
        rsi36 = reinterpret_cast<struct s32*>(&rsi34->f4);
        __asm__("divsd xmm0, xmm1");
        rdi35->f0 = rsi36->f0;
        rdi37 = reinterpret_cast<struct s33*>(&rdi35->f4);
        rsi38 = reinterpret_cast<struct s34*>(&rsi36->f4);
        __asm__("cvtsi2sd xmm0, eax");
        __asm__("divsd xmm0, [rbp-0x40]");
        rdi37->f0 = rsi38->f0;
        rdi39 = reinterpret_cast<struct s35*>(&rdi37->f4);
        rsi40 = reinterpret_cast<struct s36*>(&rsi38->f4);
        __asm__("divsd xmm0, xmm1");
        rdi39->f0 = rsi40->f0;
        rdi41 = reinterpret_cast<struct s37*>(&rdi39->f4);
        rsi42 = reinterpret_cast<struct s38*>(&rsi40->f4);
        __asm__("cvtsi2sd xmm0, eax");
        __asm__("divsd xmm0, [rbp-0x40]");
        rdi41->f0 = rsi42->f0;
        rdi43 = reinterpret_cast<struct s39*>(&rdi41->f4);
        rsi44 = reinterpret_cast<struct s40*>(&rsi42->f4);
        __asm__("divsd xmm0, xmm1");
        rdi43->f0 = rsi44->f0;
        rdi45 = reinterpret_cast<struct s41*>(&rdi43->f4);
        rsi46 = reinterpret_cast<struct s42*>(&rsi44->f4);
        __asm__("xorps xmm0, xmm0");
        rdi45->f0 = rsi46->f0;
        rdi47 = reinterpret_cast<struct s43*>(&rdi45->f4);
        rsi48 = reinterpret_cast<struct s44*>(&rsi46->f4);
        __asm__("xorps xmm0, xmm0");
        rdi47->f0 = rsi48->f0;
        rdi22 = reinterpret_cast<struct s19*>(&rdi47->f4);
        rsi23 = reinterpret_cast<struct s20*>(&rsi48->f4);
        v49 = reinterpret_cast<int32_t>(fprintf);
        while (v49 < v13) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi22->f0 = rsi23->f0;
            rdi22 = reinterpret_cast<struct s19*>(&rdi22->f4);
            rsi23 = reinterpret_cast<struct s20*>(&rsi23->f4);
            ++v49;
        }
        ++v24;
    }
    return;
}

void fprintf() {
}

int64_t g4100ff2;

void fun_78() {
    int64_t rip1;

    __asm__("fmul dword [r8+0x63]");
    __asm__("ror byte [rax+0x63], 1");
    __asm__("retf 0xff2");
    __asm__("enter 0x8b48, 0x45");
    __asm__("enter 0x6348, 0x4d");
    __asm__("enter 0x8b48, 0x45");
    __asm__("ror byte [rax+0x63], 0x4d");
    __asm__("enter 0xff2, 0x59");
    rip1 = g4100ff2;
    goto rip1;
}

struct s45 {
    int32_t f0;
    int32_t f4;
};

struct s46 {
    int32_t f0;
    int32_t f4;
};

struct s47 {
    int32_t f0;
    int32_t f4;
};

struct s48 {
    int32_t f0;
    int32_t f4;
};

void fun_b8(struct s45* rdi, struct s46* rsi) {
    int64_t rcx3;
    int1_t zf4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    struct s47* rdi8;
    struct s48* rsi9;
    struct s45* rdi10;
    struct s46* rsi11;
    struct s47* rdi12;
    struct s48* rsi13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    struct s47* rdi23;
    struct s48* rsi24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    struct s47* rdi33;
    struct s48* rsi34;
    struct s45* rdi35;
    struct s46* rsi36;
    struct s47* rdi37;
    struct s48* rsi38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t v43;
    int64_t rbp44;
    int64_t rbp45;

    __asm__("ror dword [rax-0x75], 0x45");
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rcx3 - 1 == fprintf)) & reinterpret_cast<uint1_t>(!zf4)) {
        do {
            *reinterpret_cast<int32_t*>(rbp5 - 72) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp6 - 72) < *reinterpret_cast<int32_t*>(rbp7 - 4)) {
                rdi->f0 = rsi->f0;
                rdi8 = reinterpret_cast<struct s47*>(&rdi->f4);
                rsi9 = reinterpret_cast<struct s48*>(&rsi->f4);
                rdi8->f0 = rsi9->f0;
                rdi10 = reinterpret_cast<struct s45*>(&rdi8->f4);
                rsi11 = reinterpret_cast<struct s46*>(&rsi9->f4);
                __asm__("mulsd xmm0, [rax+rcx*8]");
                rdi10->f0 = rsi11->f0;
                rdi12 = reinterpret_cast<struct s47*>(&rdi10->f4);
                rsi13 = reinterpret_cast<struct s48*>(&rsi11->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi12->f0 = rsi13->f0;
                rdi = reinterpret_cast<struct s45*>(&rdi12->f4);
                rsi = reinterpret_cast<struct s46*>(&rsi13->f4);
                *reinterpret_cast<int32_t*>(rbp14 - 72) = *reinterpret_cast<int32_t*>(rbp15 - 72) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp16 - 68) = *reinterpret_cast<int32_t*>(rbp17 - 68) + 1;
        } while (*reinterpret_cast<int32_t*>(rbp18 - 68) < *reinterpret_cast<int32_t*>(rbp19 - 4));
        *reinterpret_cast<int32_t*>(rbp20 - 68) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp21 - 68) < *reinterpret_cast<int32_t*>(rbp22 - 4)) {
            rdi->f0 = rsi->f0;
            rdi23 = reinterpret_cast<struct s47*>(&rdi->f4);
            rsi24 = reinterpret_cast<struct s48*>(&rsi->f4);
            __asm__("addsd xmm0, [rax+rcx*8]");
            rdi23->f0 = rsi24->f0;
            rdi = reinterpret_cast<struct s45*>(&rdi23->f4);
            rsi = reinterpret_cast<struct s46*>(&rsi24->f4);
            *reinterpret_cast<int32_t*>(rbp25 - 68) = *reinterpret_cast<int32_t*>(rbp26 - 68) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp27 - 68) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp28 - 68) < *reinterpret_cast<int32_t*>(rbp29 - 4)) {
            *reinterpret_cast<int32_t*>(rbp30 - 72) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp31 - 72) < *reinterpret_cast<int32_t*>(rbp32 - 4)) {
                rdi->f0 = rsi->f0;
                rdi33 = reinterpret_cast<struct s47*>(&rdi->f4);
                rsi34 = reinterpret_cast<struct s48*>(&rsi->f4);
                rdi33->f0 = rsi34->f0;
                rdi35 = reinterpret_cast<struct s45*>(&rdi33->f4);
                rsi36 = reinterpret_cast<struct s46*>(&rsi34->f4);
                __asm__("mulsd xmm0, [rax+rcx*8]");
                rdi35->f0 = rsi36->f0;
                rdi37 = reinterpret_cast<struct s47*>(&rdi35->f4);
                rsi38 = reinterpret_cast<struct s48*>(&rsi36->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi37->f0 = rsi38->f0;
                rdi = reinterpret_cast<struct s45*>(&rdi37->f4);
                rsi = reinterpret_cast<struct s46*>(&rsi38->f4);
                *reinterpret_cast<int32_t*>(rbp39 - 72) = *reinterpret_cast<int32_t*>(rbp40 - 72) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp41 - 68) = *reinterpret_cast<int32_t*>(rbp42 - 68) + 1;
        }
        goto v43;
    } else {
        rdi->f0 = rsi->f0;
        *reinterpret_cast<int32_t*>(rbp44 - 72) = *reinterpret_cast<int32_t*>(rbp45 - 72) + 1;
    }
}

void fun_e3() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 68) = *reinterpret_cast<int32_t*>(rbp2 - 68) + 1;
}

void fun_f6() {
    int64_t rbp1;

    *reinterpret_cast<int32_t*>(rbp1 - 68) = reinterpret_cast<int32_t>(fprintf);
}

void submain(int32_t edi, int64_t rsi) {
    fun_29d(0x3d0900, 8);
}

