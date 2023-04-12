
int64_t fun_95(int64_t rdi, int64_t rsi);

int64_t fun_a8(int64_t rdi, int64_t rsi);

int64_t fun_bb(int64_t rdi, int64_t rsi);

void init_array(int32_t edi, int32_t esi, int32_t edx, int32_t ecx, int32_t r8d, int64_t r9, int64_t a7, int64_t a8, int64_t a9);

void fprintf();

void kernel_3mm(int32_t edi, int32_t esi, int32_t edx, int32_t ecx, int32_t r8d, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_17e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

int32_t fun_15d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_187(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_190(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_199(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_1a2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_1ab(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_1b4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_82() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rax3;
    int64_t rbp4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int32_t edi9;
    int64_t rbp10;
    int32_t esi11;
    int64_t rbp12;
    int32_t edx13;
    int64_t rbp14;
    int32_t ecx15;
    int64_t rbp16;
    int32_t r8d17;
    int64_t rbp18;
    int64_t r9_19;
    int64_t rbp20;
    int64_t r10_21;
    int64_t rbp22;
    int64_t rax23;
    int64_t rbp24;
    int64_t v25;
    int64_t rbp26;
    int32_t edi27;
    int64_t rbp28;
    int64_t rsi29;
    int64_t rbp30;
    int64_t rdx31;
    int64_t rbp32;
    int64_t rcx33;
    int64_t rbp34;
    int64_t r8_35;
    int64_t rbp36;
    int64_t r9_37;
    int64_t rbp38;
    int64_t r14_39;
    int64_t rbp40;
    int64_t rbx41;
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
    int64_t v69;
    int32_t edi70;
    int64_t rbp71;
    int64_t rbp72;
    int64_t rbp73;

    *reinterpret_cast<int64_t*>(rbp1 - 96) = rax2;
    rax3 = fun_95(0x107ac0, 8);
    *reinterpret_cast<int64_t*>(rbp4 - 0x68) = rax3;
    rax5 = fun_a8(0x142440, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 0x70) = rax5;
    rax7 = fun_bb(0xd6d80, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 0x78) = rax7;
    edi9 = *reinterpret_cast<int32_t*>(rbp10 - 44);
    esi11 = *reinterpret_cast<int32_t*>(rbp12 - 48);
    edx13 = *reinterpret_cast<int32_t*>(rbp14 - 52);
    ecx15 = *reinterpret_cast<int32_t*>(rbp16 - 56);
    r8d17 = *reinterpret_cast<int32_t*>(rbp18 - 60);
    r9_19 = *reinterpret_cast<int64_t*>(rbp20 - 80);
    r10_21 = *reinterpret_cast<int64_t*>(rbp22 - 0x68);
    rax23 = *reinterpret_cast<int64_t*>(rbp24 - 0x70);
    v25 = *reinterpret_cast<int64_t*>(rbp26 - 88);
    init_array(edi9, esi11, edx13, ecx15, r8d17, r9_19, v25, r10_21, rax23);
    edi27 = *reinterpret_cast<int32_t*>(rbp28 - 44);
    *reinterpret_cast<int32_t*>(&rsi29) = *reinterpret_cast<int32_t*>(rbp30 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx31) = *reinterpret_cast<int32_t*>(rbp32 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rcx33) = *reinterpret_cast<int32_t*>(rbp34 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&r8_35) = *reinterpret_cast<int32_t*>(rbp36 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_35) + 4) = reinterpret_cast<int32_t>(fprintf);
    r9_37 = *reinterpret_cast<int64_t*>(rbp38 - 72);
    r14_39 = *reinterpret_cast<int64_t*>(rbp40 - 88);
    rbx41 = *reinterpret_cast<int64_t*>(rbp42 - 96);
    r11_43 = *reinterpret_cast<int64_t*>(rbp44 - 0x68);
    r10_45 = *reinterpret_cast<int64_t*>(rbp46 - 0x70);
    rax47 = *reinterpret_cast<int64_t*>(rbp48 - 0x78);
    v49 = *reinterpret_cast<int64_t*>(rbp50 - 80);
    kernel_3mm(edi27, *reinterpret_cast<int32_t*>(&rsi29), *reinterpret_cast<int32_t*>(&rdx31), *reinterpret_cast<int32_t*>(&rcx33), *reinterpret_cast<int32_t*>(&r8_35), r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    if (*reinterpret_cast<int32_t*>(rbp51 - 28) <= 42) {
        addr_175_5:
        rdi52 = *reinterpret_cast<int64_t*>(rbp53 - 72);
        fun_17e(rdi52, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    } else {
        rdi54 = **reinterpret_cast<int64_t**>(rbp55 - 40);
        rsi29 = 0x158;
        eax56 = fun_15d(rdi54, 0x158, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
        if (!reinterpret_cast<int1_t>(eax56 == fprintf)) 
            goto addr_175_5; else 
            goto addr_166_8;
    }
    rdi57 = *reinterpret_cast<int64_t*>(rbp58 - 80);
    fun_187(rdi57, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi59 = *reinterpret_cast<int64_t*>(rbp60 - 88);
    fun_190(rdi59, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 96);
    fun_199(rdi61, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 0x68);
    fun_1a2(rdi63, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 0x70);
    fun_1ab(rdi65, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 0x78);
    fun_1b4(rdi67, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    goto v69;
    addr_166_8:
    edi70 = *reinterpret_cast<int32_t*>(rbp71 - 44);
    *reinterpret_cast<int32_t*>(&rsi29) = *reinterpret_cast<int32_t*>(rbp72 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx31 = *reinterpret_cast<int64_t*>(rbp73 - 0x78);
    print_array(edi70, *reinterpret_cast<int32_t*>(&rsi29), rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    goto addr_175_5;
}

int32_t fun_15d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int32_t eax13;
    int32_t edi14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int64_t rdi22;
    int64_t rbp23;
    int64_t rdi24;
    int64_t rbp25;
    int64_t rdi26;
    int64_t rbp27;
    int64_t rdi28;
    int64_t rbp29;
    int64_t rdi30;
    int64_t rbp31;
    int64_t v32;

    if (reinterpret_cast<int1_t>(eax13 == fprintf)) {
        edi14 = *reinterpret_cast<int32_t*>(rbp15 - 44);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp16 - 56);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
        rdx = *reinterpret_cast<int64_t*>(rbp17 - 0x78);
        print_array(edi14, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    }
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 72);
    fun_17e(rdi18, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 80);
    fun_187(rdi20, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 88);
    fun_190(rdi22, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi24 = *reinterpret_cast<int64_t*>(rbp25 - 96);
    fun_199(rdi24, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 0x68);
    fun_1a2(rdi26, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi28 = *reinterpret_cast<int64_t*>(rbp29 - 0x70);
    fun_1ab(rdi28, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi30 = *reinterpret_cast<int64_t*>(rbp31 - 0x78);
    fun_1b4(rdi30, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v32;
}

int64_t* g719 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_72a(int64_t rdi, int64_t rsi);

int64_t* g731 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_749(int64_t rdi);

int64_t* g791 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_7a2(int64_t rdi);

int32_t** g7a9 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_7d5(int64_t rdi);

int64_t* g7fd = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_815(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g81c = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_82d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int32_t v13;
    int32_t v14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t* rax17;
    int64_t rdi18;
    int32_t* rsi19;
    int32_t v20;
    int32_t v21;
    int64_t* rax22;
    int64_t rdi23;
    int32_t** rax24;
    int32_t* rdi25;
    int64_t* rax26;
    int64_t rdi27;
    int64_t* rax28;
    int64_t rdi29;

    v13 = edi;
    v14 = esi;
    rax15 = g719;
    rdi16 = *rax15;
    fun_72a(rdi16, 0x723);
    rax17 = g731;
    rdi18 = *rax17;
    rsi19 = reinterpret_cast<int32_t*>(0x73b);
    fun_749(rdi18);
    v20 = reinterpret_cast<int32_t>(fprintf);
    while (v20 < v13) {
        v21 = reinterpret_cast<int32_t>(fprintf);
        while (v21 < v14) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v20 * v13 + v21) % 20 == fprintf)) {
                rax22 = g791;
                rdi23 = *rax22;
                rsi19 = reinterpret_cast<int32_t*>(0x79b);
                fun_7a2(rdi23);
            }
            rax24 = g7a9;
            rdi25 = *rax24;
            rcx = v21;
            *rdi25 = *rsi19;
            rsi19 = reinterpret_cast<int32_t*>(0x7ce);
            fun_7d5(rdi25 + 1);
            ++v21;
        }
        ++v20;
    }
    rax26 = g7fd;
    rdi27 = *rax26;
    fun_815(rdi27, 0x807, 0x80e, rcx);
    rax28 = g81c;
    rdi29 = *rax28;
    fun_82d(rdi29, 0x826, 0x80e, rcx);
    return;
}

void fun_17e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
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

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 80);
    fun_187(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 88);
    fun_190(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 96);
    fun_199(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x68);
    fun_1a2(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0x70);
    fun_1ab(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 0x78);
    fun_1b4(rdi23, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v25;
}

void fun_7a2(int64_t rdi) {
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
        rax2 = g7a9;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x7ce);
        fun_7d5(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_7f6_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g791;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x79b);
        fun_7a2(rdi20);
    }
    addr_7f6_10:
    rax21 = g7fd;
    rdi22 = *rax21;
    fun_815(rdi22, 0x807, 0x80e, rcx4);
    rax23 = g81c;
    rdi24 = *rax23;
    fun_82d(rdi24, 0x826, 0x80e, rcx4);
    goto v25;
}

void fun_7d5(int64_t rdi) {
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
        while (*reinterpret_cast<int32_t*>(rbp4 - 24) >= *reinterpret_cast<int32_t*>(rbp5 - 8)) {
            *reinterpret_cast<int32_t*>(rbp6 - 20) = *reinterpret_cast<int32_t*>(rbp7 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp8 - 20) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
                goto addr_7f6_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g791;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x79b);
            fun_7a2(rdi15);
        }
        rax17 = g7a9;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x7ce);
        fun_7d5(rdi18 + 1);
    }
    addr_7f6_6:
    rax21 = g7fd;
    rdi22 = *rax21;
    fun_815(rdi22, 0x807, 0x80e, rcx19);
    rax23 = g81c;
    rdi24 = *rax23;
    fun_82d(rdi24, 0x826, 0x80e, rcx19);
    goto v25;
}

int64_t fun_95(int64_t rdi, int64_t rsi) {
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
    int32_t edx13;
    int64_t rbp14;
    int32_t ecx15;
    int64_t rbp16;
    int32_t r8d17;
    int64_t rbp18;
    int64_t r9_19;
    int64_t rbp20;
    int64_t r10_21;
    int64_t rbp22;
    int64_t rax23;
    int64_t rbp24;
    int64_t v25;
    int64_t rbp26;
    int32_t edi27;
    int64_t rbp28;
    int64_t rsi29;
    int64_t rbp30;
    int64_t rdx31;
    int64_t rbp32;
    int64_t rcx33;
    int64_t rbp34;
    int64_t r8_35;
    int64_t rbp36;
    int64_t r9_37;
    int64_t rbp38;
    int64_t r14_39;
    int64_t rbp40;
    int64_t rbx41;
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
    int64_t v69;
    int32_t edi70;
    int64_t rbp71;
    int64_t rbp72;
    int64_t rbp73;

    *reinterpret_cast<int64_t*>(rbp3 - 0x68) = rax4;
    rax5 = fun_a8(0x142440, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 0x70) = rax5;
    rax7 = fun_bb(0xd6d80, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 0x78) = rax7;
    edi9 = *reinterpret_cast<int32_t*>(rbp10 - 44);
    esi11 = *reinterpret_cast<int32_t*>(rbp12 - 48);
    edx13 = *reinterpret_cast<int32_t*>(rbp14 - 52);
    ecx15 = *reinterpret_cast<int32_t*>(rbp16 - 56);
    r8d17 = *reinterpret_cast<int32_t*>(rbp18 - 60);
    r9_19 = *reinterpret_cast<int64_t*>(rbp20 - 80);
    r10_21 = *reinterpret_cast<int64_t*>(rbp22 - 0x68);
    rax23 = *reinterpret_cast<int64_t*>(rbp24 - 0x70);
    v25 = *reinterpret_cast<int64_t*>(rbp26 - 88);
    init_array(edi9, esi11, edx13, ecx15, r8d17, r9_19, v25, r10_21, rax23);
    edi27 = *reinterpret_cast<int32_t*>(rbp28 - 44);
    *reinterpret_cast<int32_t*>(&rsi29) = *reinterpret_cast<int32_t*>(rbp30 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx31) = *reinterpret_cast<int32_t*>(rbp32 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rcx33) = *reinterpret_cast<int32_t*>(rbp34 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&r8_35) = *reinterpret_cast<int32_t*>(rbp36 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_35) + 4) = reinterpret_cast<int32_t>(fprintf);
    r9_37 = *reinterpret_cast<int64_t*>(rbp38 - 72);
    r14_39 = *reinterpret_cast<int64_t*>(rbp40 - 88);
    rbx41 = *reinterpret_cast<int64_t*>(rbp42 - 96);
    r11_43 = *reinterpret_cast<int64_t*>(rbp44 - 0x68);
    r10_45 = *reinterpret_cast<int64_t*>(rbp46 - 0x70);
    rax47 = *reinterpret_cast<int64_t*>(rbp48 - 0x78);
    v49 = *reinterpret_cast<int64_t*>(rbp50 - 80);
    kernel_3mm(edi27, *reinterpret_cast<int32_t*>(&rsi29), *reinterpret_cast<int32_t*>(&rdx31), *reinterpret_cast<int32_t*>(&rcx33), *reinterpret_cast<int32_t*>(&r8_35), r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    if (*reinterpret_cast<int32_t*>(rbp51 - 28) <= 42) {
        addr_175_4:
        rdi52 = *reinterpret_cast<int64_t*>(rbp53 - 72);
        fun_17e(rdi52, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    } else {
        rdi54 = **reinterpret_cast<int64_t**>(rbp55 - 40);
        rsi29 = 0x158;
        eax56 = fun_15d(rdi54, 0x158, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
        if (!reinterpret_cast<int1_t>(eax56 == fprintf)) 
            goto addr_175_4; else 
            goto addr_166_7;
    }
    rdi57 = *reinterpret_cast<int64_t*>(rbp58 - 80);
    fun_187(rdi57, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi59 = *reinterpret_cast<int64_t*>(rbp60 - 88);
    fun_190(rdi59, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 96);
    fun_199(rdi61, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 0x68);
    fun_1a2(rdi63, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 0x70);
    fun_1ab(rdi65, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 0x78);
    fun_1b4(rdi67, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    goto v69;
    addr_166_7:
    edi70 = *reinterpret_cast<int32_t*>(rbp71 - 44);
    *reinterpret_cast<int32_t*>(&rsi29) = *reinterpret_cast<int32_t*>(rbp72 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx31 = *reinterpret_cast<int64_t*>(rbp73 - 0x78);
    print_array(edi70, *reinterpret_cast<int32_t*>(&rsi29), rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    goto addr_175_4;
}

void fun_72a(int64_t rdi, int64_t rsi) {
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

    rax3 = g731;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x73b);
    fun_749(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g791;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x79b);
                fun_7a2(rdi16);
            }
            rax17 = g7a9;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x7ce);
            fun_7d5(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g7fd;
    rdi26 = *rax25;
    fun_815(rdi26, 0x807, 0x80e, rcx19);
    rax27 = g81c;
    rdi28 = *rax27;
    fun_82d(rdi28, 0x826, 0x80e, rcx19);
    goto v29;
}

void fun_187(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
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

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 88);
    fun_190(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 96);
    fun_199(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x68);
    fun_1a2(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x70);
    fun_1ab(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0x78);
    fun_1b4(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v23;
}

int64_t fun_a8(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int32_t edi7;
    int64_t rbp8;
    int32_t esi9;
    int64_t rbp10;
    int32_t edx11;
    int64_t rbp12;
    int32_t ecx13;
    int64_t rbp14;
    int32_t r8d15;
    int64_t rbp16;
    int64_t r9_17;
    int64_t rbp18;
    int64_t r10_19;
    int64_t rbp20;
    int64_t rax21;
    int64_t rbp22;
    int64_t v23;
    int64_t rbp24;
    int32_t edi25;
    int64_t rbp26;
    int64_t rsi27;
    int64_t rbp28;
    int64_t rdx29;
    int64_t rbp30;
    int64_t rcx31;
    int64_t rbp32;
    int64_t r8_33;
    int64_t rbp34;
    int64_t r9_35;
    int64_t rbp36;
    int64_t r14_37;
    int64_t rbp38;
    int64_t rbx39;
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
    int64_t v67;
    int32_t edi68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rbp71;

    *reinterpret_cast<int64_t*>(rbp3 - 0x70) = rax4;
    rax5 = fun_bb(0xd6d80, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 0x78) = rax5;
    edi7 = *reinterpret_cast<int32_t*>(rbp8 - 44);
    esi9 = *reinterpret_cast<int32_t*>(rbp10 - 48);
    edx11 = *reinterpret_cast<int32_t*>(rbp12 - 52);
    ecx13 = *reinterpret_cast<int32_t*>(rbp14 - 56);
    r8d15 = *reinterpret_cast<int32_t*>(rbp16 - 60);
    r9_17 = *reinterpret_cast<int64_t*>(rbp18 - 80);
    r10_19 = *reinterpret_cast<int64_t*>(rbp20 - 0x68);
    rax21 = *reinterpret_cast<int64_t*>(rbp22 - 0x70);
    v23 = *reinterpret_cast<int64_t*>(rbp24 - 88);
    init_array(edi7, esi9, edx11, ecx13, r8d15, r9_17, v23, r10_19, rax21);
    edi25 = *reinterpret_cast<int32_t*>(rbp26 - 44);
    *reinterpret_cast<int32_t*>(&rsi27) = *reinterpret_cast<int32_t*>(rbp28 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx29) = *reinterpret_cast<int32_t*>(rbp30 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rcx31) = *reinterpret_cast<int32_t*>(rbp32 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&r8_33) = *reinterpret_cast<int32_t*>(rbp34 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_33) + 4) = reinterpret_cast<int32_t>(fprintf);
    r9_35 = *reinterpret_cast<int64_t*>(rbp36 - 72);
    r14_37 = *reinterpret_cast<int64_t*>(rbp38 - 88);
    rbx39 = *reinterpret_cast<int64_t*>(rbp40 - 96);
    r11_41 = *reinterpret_cast<int64_t*>(rbp42 - 0x68);
    r10_43 = *reinterpret_cast<int64_t*>(rbp44 - 0x70);
    rax45 = *reinterpret_cast<int64_t*>(rbp46 - 0x78);
    v47 = *reinterpret_cast<int64_t*>(rbp48 - 80);
    kernel_3mm(edi25, *reinterpret_cast<int32_t*>(&rsi27), *reinterpret_cast<int32_t*>(&rdx29), *reinterpret_cast<int32_t*>(&rcx31), *reinterpret_cast<int32_t*>(&r8_33), r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    if (*reinterpret_cast<int32_t*>(rbp49 - 28) <= 42) {
        addr_175_3:
        rdi50 = *reinterpret_cast<int64_t*>(rbp51 - 72);
        fun_17e(rdi50, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    } else {
        rdi52 = **reinterpret_cast<int64_t**>(rbp53 - 40);
        rsi27 = 0x158;
        eax54 = fun_15d(rdi52, 0x158, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
        if (!reinterpret_cast<int1_t>(eax54 == fprintf)) 
            goto addr_175_3; else 
            goto addr_166_6;
    }
    rdi55 = *reinterpret_cast<int64_t*>(rbp56 - 80);
    fun_187(rdi55, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    rdi57 = *reinterpret_cast<int64_t*>(rbp58 - 88);
    fun_190(rdi57, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    rdi59 = *reinterpret_cast<int64_t*>(rbp60 - 96);
    fun_199(rdi59, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 0x68);
    fun_1a2(rdi61, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 0x70);
    fun_1ab(rdi63, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 0x78);
    fun_1b4(rdi65, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    goto v67;
    addr_166_6:
    edi68 = *reinterpret_cast<int32_t*>(rbp69 - 44);
    *reinterpret_cast<int32_t*>(&rsi27) = *reinterpret_cast<int32_t*>(rbp70 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx29 = *reinterpret_cast<int64_t*>(rbp71 - 0x78);
    print_array(edi68, *reinterpret_cast<int32_t*>(&rsi27), rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    goto addr_175_3;
}

void fun_749(int64_t rdi) {
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
        while (*reinterpret_cast<int32_t*>(rbp6 - 24) < *reinterpret_cast<int32_t*>(rbp7 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp8 - 20) * *reinterpret_cast<int32_t*>(rbp9 - 4) + *reinterpret_cast<int32_t*>(rbp10 - 24)) % 20 == fprintf)) {
                rax11 = g791;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x79b);
                fun_7a2(rdi12);
            }
            rax14 = g7a9;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x7ce);
            fun_7d5(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g7fd;
    rdi23 = *rax22;
    fun_815(rdi23, 0x807, 0x80e, rcx16);
    rax24 = g81c;
    rdi25 = *rax24;
    fun_82d(rdi25, 0x826, 0x80e, rcx16);
    goto v26;
}

void fun_190(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t v21;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 96);
    fun_199(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x68);
    fun_1a2(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x70);
    fun_1ab(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x78);
    fun_1b4(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v21;
}

int64_t fun_bb(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int32_t edi5;
    int64_t rbp6;
    int32_t esi7;
    int64_t rbp8;
    int32_t edx9;
    int64_t rbp10;
    int32_t ecx11;
    int64_t rbp12;
    int32_t r8d13;
    int64_t rbp14;
    int64_t r9_15;
    int64_t rbp16;
    int64_t r10_17;
    int64_t rbp18;
    int64_t rax19;
    int64_t rbp20;
    int64_t v21;
    int64_t rbp22;
    int32_t edi23;
    int64_t rbp24;
    int64_t rsi25;
    int64_t rbp26;
    int64_t rdx27;
    int64_t rbp28;
    int64_t rcx29;
    int64_t rbp30;
    int64_t r8_31;
    int64_t rbp32;
    int64_t r9_33;
    int64_t rbp34;
    int64_t r14_35;
    int64_t rbp36;
    int64_t rbx37;
    int64_t rbp38;
    int64_t r11_39;
    int64_t rbp40;
    int64_t r10_41;
    int64_t rbp42;
    int64_t rax43;
    int64_t rbp44;
    int64_t v45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rdi48;
    int64_t rbp49;
    int64_t rdi50;
    int64_t rbp51;
    int32_t eax52;
    int64_t rdi53;
    int64_t rbp54;
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
    int64_t v65;
    int32_t edi66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rbp69;

    *reinterpret_cast<int64_t*>(rbp3 - 0x78) = rax4;
    edi5 = *reinterpret_cast<int32_t*>(rbp6 - 44);
    esi7 = *reinterpret_cast<int32_t*>(rbp8 - 48);
    edx9 = *reinterpret_cast<int32_t*>(rbp10 - 52);
    ecx11 = *reinterpret_cast<int32_t*>(rbp12 - 56);
    r8d13 = *reinterpret_cast<int32_t*>(rbp14 - 60);
    r9_15 = *reinterpret_cast<int64_t*>(rbp16 - 80);
    r10_17 = *reinterpret_cast<int64_t*>(rbp18 - 0x68);
    rax19 = *reinterpret_cast<int64_t*>(rbp20 - 0x70);
    v21 = *reinterpret_cast<int64_t*>(rbp22 - 88);
    init_array(edi5, esi7, edx9, ecx11, r8d13, r9_15, v21, r10_17, rax19);
    edi23 = *reinterpret_cast<int32_t*>(rbp24 - 44);
    *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(rbp26 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx27) = *reinterpret_cast<int32_t*>(rbp28 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rcx29) = *reinterpret_cast<int32_t*>(rbp30 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&r8_31) = *reinterpret_cast<int32_t*>(rbp32 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_31) + 4) = reinterpret_cast<int32_t>(fprintf);
    r9_33 = *reinterpret_cast<int64_t*>(rbp34 - 72);
    r14_35 = *reinterpret_cast<int64_t*>(rbp36 - 88);
    rbx37 = *reinterpret_cast<int64_t*>(rbp38 - 96);
    r11_39 = *reinterpret_cast<int64_t*>(rbp40 - 0x68);
    r10_41 = *reinterpret_cast<int64_t*>(rbp42 - 0x70);
    rax43 = *reinterpret_cast<int64_t*>(rbp44 - 0x78);
    v45 = *reinterpret_cast<int64_t*>(rbp46 - 80);
    kernel_3mm(edi23, *reinterpret_cast<int32_t*>(&rsi25), *reinterpret_cast<int32_t*>(&rdx27), *reinterpret_cast<int32_t*>(&rcx29), *reinterpret_cast<int32_t*>(&r8_31), r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    if (*reinterpret_cast<int32_t*>(rbp47 - 28) <= 42) {
        addr_175_2:
        rdi48 = *reinterpret_cast<int64_t*>(rbp49 - 72);
        fun_17e(rdi48, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    } else {
        rdi50 = **reinterpret_cast<int64_t**>(rbp51 - 40);
        rsi25 = 0x158;
        eax52 = fun_15d(rdi50, 0x158, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
        if (!reinterpret_cast<int1_t>(eax52 == fprintf)) 
            goto addr_175_2; else 
            goto addr_166_5;
    }
    rdi53 = *reinterpret_cast<int64_t*>(rbp54 - 80);
    fun_187(rdi53, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    rdi55 = *reinterpret_cast<int64_t*>(rbp56 - 88);
    fun_190(rdi55, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    rdi57 = *reinterpret_cast<int64_t*>(rbp58 - 96);
    fun_199(rdi57, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    rdi59 = *reinterpret_cast<int64_t*>(rbp60 - 0x68);
    fun_1a2(rdi59, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 0x70);
    fun_1ab(rdi61, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 0x78);
    fun_1b4(rdi63, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    goto v65;
    addr_166_5:
    edi66 = *reinterpret_cast<int32_t*>(rbp67 - 44);
    *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(rbp68 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx27 = *reinterpret_cast<int64_t*>(rbp69 - 0x78);
    print_array(edi66, *reinterpret_cast<int32_t*>(&rsi25), rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    goto addr_175_2;
}

void fun_199(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t v19;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 0x68);
    fun_1a2(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x70);
    fun_1ab(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x78);
    fun_1b4(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v19;
}

void fun_815(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g81c;
    rdi6 = *rax5;
    fun_82d(rdi6, 0x826, rdx, rcx);
    goto v7;
}

void init_array(int32_t edi, int32_t esi, int32_t edx, int32_t ecx, int32_t r8d, int64_t r9, int64_t a7, int64_t a8, int64_t a9) {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t v21;
    int32_t v22;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v10 = *reinterpret_cast<int32_t*>(&rdi1);
    v11 = *reinterpret_cast<int32_t*>(&rsi2);
    v12 = edx;
    v13 = ecx;
    v14 = r8d;
    v15 = reinterpret_cast<int32_t>(fprintf);
    while (v15 < v10) {
        v16 = reinterpret_cast<int32_t>(fprintf);
        while (v16 < v12) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("divsd xmm0, xmm1");
            *rdi1 = *rsi2;
            ++rdi1;
            ++rsi2;
            ++v16;
        }
        ++v15;
    }
    v17 = reinterpret_cast<int32_t>(fprintf);
    while (v17 < v12) {
        v18 = reinterpret_cast<int32_t>(fprintf);
        while (v18 < v11) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("divsd xmm0, xmm1");
            *rdi1 = *rsi2;
            ++rdi1;
            ++rsi2;
            ++v18;
        }
        ++v17;
    }
    v19 = reinterpret_cast<int32_t>(fprintf);
    while (v19 < v11) {
        v20 = reinterpret_cast<int32_t>(fprintf);
        while (v20 < v14) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("divsd xmm0, xmm1");
            *rdi1 = *rsi2;
            ++rdi1;
            ++rsi2;
            ++v20;
        }
        ++v19;
    }
    v21 = reinterpret_cast<int32_t>(fprintf);
    while (v21 < v14) {
        v22 = reinterpret_cast<int32_t>(fprintf);
        while (v22 < v13) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("divsd xmm0, xmm1");
            *rdi1 = *rsi2;
            ++rdi1;
            ++rsi2;
            ++v22;
        }
        ++v21;
    }
    return;
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

void kernel_3mm(int32_t edi, int32_t esi, int32_t edx, int32_t ecx, int32_t r8d, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    struct s0* rdi1;
    struct s1* rsi2;
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    struct s2* rdi21;
    struct s3* rsi22;
    struct s4* rdi23;
    struct s5* rsi24;
    struct s6* rdi25;
    struct s7* rsi26;
    int32_t v27;
    int32_t v28;
    int32_t v29;
    struct s2* rdi30;
    struct s3* rsi31;
    struct s4* rdi32;
    struct s5* rsi33;
    struct s6* rdi34;
    struct s7* rsi35;
    int32_t v36;
    int32_t v37;
    int32_t v38;
    struct s2* rdi39;
    struct s3* rsi40;
    struct s4* rdi41;
    struct s5* rsi42;
    struct s6* rdi43;
    struct s7* rsi44;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v13 = *reinterpret_cast<int32_t*>(&rdi1);
    v14 = *reinterpret_cast<int32_t*>(&rsi2);
    v15 = edx;
    v16 = ecx;
    v17 = r8d;
    v18 = reinterpret_cast<int32_t>(fprintf);
    while (v18 < v13) {
        v19 = reinterpret_cast<int32_t>(fprintf);
        while (v19 < v14) {
            __asm__("xorps xmm0, xmm0");
            rdi1->f0 = rsi2->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi1->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi2->f4);
            v20 = reinterpret_cast<int32_t>(fprintf);
            while (v20 < v15) {
                rdi1->f0 = rsi2->f0;
                rdi21 = reinterpret_cast<struct s2*>(&rdi1->f4);
                rsi22 = reinterpret_cast<struct s3*>(&rsi2->f4);
                rdi21->f0 = rsi22->f0;
                rdi23 = reinterpret_cast<struct s4*>(&rdi21->f4);
                rsi24 = reinterpret_cast<struct s5*>(&rsi22->f4);
                rdi23->f0 = rsi24->f0;
                rdi25 = reinterpret_cast<struct s6*>(&rdi23->f4);
                rsi26 = reinterpret_cast<struct s7*>(&rsi24->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi25->f0 = rsi26->f0;
                rdi1 = reinterpret_cast<struct s0*>(&rdi25->f4);
                rsi2 = reinterpret_cast<struct s1*>(&rsi26->f4);
                ++v20;
            }
            ++v19;
        }
        ++v18;
    }
    v27 = reinterpret_cast<int32_t>(fprintf);
    while (v27 < v14) {
        v28 = reinterpret_cast<int32_t>(fprintf);
        while (v28 < v16) {
            __asm__("xorps xmm0, xmm0");
            rdi1->f0 = rsi2->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi1->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi2->f4);
            v29 = reinterpret_cast<int32_t>(fprintf);
            while (v29 < v17) {
                rdi1->f0 = rsi2->f0;
                rdi30 = reinterpret_cast<struct s2*>(&rdi1->f4);
                rsi31 = reinterpret_cast<struct s3*>(&rsi2->f4);
                rdi30->f0 = rsi31->f0;
                rdi32 = reinterpret_cast<struct s4*>(&rdi30->f4);
                rsi33 = reinterpret_cast<struct s5*>(&rsi31->f4);
                rdi32->f0 = rsi33->f0;
                rdi34 = reinterpret_cast<struct s6*>(&rdi32->f4);
                rsi35 = reinterpret_cast<struct s7*>(&rsi33->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi34->f0 = rsi35->f0;
                rdi1 = reinterpret_cast<struct s0*>(&rdi34->f4);
                rsi2 = reinterpret_cast<struct s1*>(&rsi35->f4);
                ++v29;
            }
            ++v28;
        }
        ++v27;
    }
    v36 = reinterpret_cast<int32_t>(fprintf);
    while (v36 < v13) {
        v37 = reinterpret_cast<int32_t>(fprintf);
        while (v37 < v16) {
            __asm__("xorps xmm0, xmm0");
            rdi1->f0 = rsi2->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi1->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi2->f4);
            v38 = reinterpret_cast<int32_t>(fprintf);
            while (v38 < v14) {
                rdi1->f0 = rsi2->f0;
                rdi39 = reinterpret_cast<struct s2*>(&rdi1->f4);
                rsi40 = reinterpret_cast<struct s3*>(&rsi2->f4);
                rdi39->f0 = rsi40->f0;
                rdi41 = reinterpret_cast<struct s4*>(&rdi39->f4);
                rsi42 = reinterpret_cast<struct s5*>(&rsi40->f4);
                rdi41->f0 = rsi42->f0;
                rdi43 = reinterpret_cast<struct s6*>(&rdi41->f4);
                rsi44 = reinterpret_cast<struct s7*>(&rsi42->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi43->f0 = rsi44->f0;
                rdi1 = reinterpret_cast<struct s0*>(&rdi43->f4);
                rsi2 = reinterpret_cast<struct s1*>(&rsi44->f4);
                ++v38;
            }
            ++v37;
        }
        ++v36;
    }
    return;
}

void fun_1a2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t v17;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 0x70);
    fun_1ab(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x78);
    fun_1b4(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v17;
}

void fun_82d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_1ab(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t v15;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 0x78);
    fun_1b4(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v15;
}

void fun_1b4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t v13;

    goto v13;
}

void fprintf() {
}

void fun_78() {
    fun_82();
}

