
int64_t fun_9f(int64_t rdi, int64_t rsi);

int64_t fun_b2(int64_t rdi, int64_t rsi);

int64_t fun_c5(int64_t rdi, int64_t rsi);

struct s0 {
    int32_t f0;
    int32_t f4;
};

void fprintf();

struct s1 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

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

void kernel_gemver(struct s5* rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_1a7(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

int32_t fun_189(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_1b0(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_1b9(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_1c2(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_1cb(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_1d4(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_1dd(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_1e6(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_1f2(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void print_array(int32_t edi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_8c(int64_t rdi, int64_t rsi) {
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
    struct s2* rdi34;
    int64_t rbp35;
    struct s3* rdi36;
    struct s4* rsi37;
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
    rax5 = fun_9f(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 0x78) = rax5;
    rax7 = fun_b2(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 0x80) = rax7;
    rax9 = fun_c5(0x7d0, 8);
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
    rdi36 = reinterpret_cast<struct s3*>(&rdi34->f4);
    rdi36->f0 = rsi29->f4;
    rsi37 = *reinterpret_cast<struct s4**>(rbp38 - 72);
    rdx39 = *reinterpret_cast<int64_t*>(rbp40 - 80);
    rcx41 = *reinterpret_cast<int64_t*>(rbp42 - 88);
    r8_43 = *reinterpret_cast<int64_t*>(rbp44 - 96);
    r9_45 = *reinterpret_cast<int64_t*>(rbp46 - 0x68);
    r11_47 = *reinterpret_cast<int64_t*>(rbp48 - 0x78);
    r10_49 = *reinterpret_cast<int64_t*>(rbp50 - 0x80);
    rax51 = *reinterpret_cast<int64_t*>(rbp52 - 0x88);
    v53 = *reinterpret_cast<int64_t*>(rbp54 - 0x70);
    kernel_gemver(&rdi36->f4, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    if (*reinterpret_cast<int32_t*>(rbp55 - 28) <= 42) {
        addr_19e_11:
        rdi56 = *reinterpret_cast<int64_t*>(rbp57 - 72);
        fun_1a7(rdi56, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    } else {
        rdi58 = **reinterpret_cast<int64_t**>(rbp59 - 40);
        rsi37 = reinterpret_cast<struct s4*>(0x184);
        eax60 = fun_189(rdi58, 0x184, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
        if (!reinterpret_cast<int1_t>(eax60 == fprintf)) 
            goto addr_19e_11; else 
            goto addr_192_14;
    }
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 80);
    fun_1b0(rdi61, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 88);
    fun_1b9(rdi63, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 96);
    fun_1c2(rdi65, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 0x68);
    fun_1cb(rdi67, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 0x70);
    fun_1d4(rdi69, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    rdi71 = *reinterpret_cast<int64_t*>(rbp72 - 0x78);
    fun_1dd(rdi71, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    rdi73 = *reinterpret_cast<int64_t*>(rbp74 - 0x80);
    fun_1e6(rdi73, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    rdi75 = *reinterpret_cast<int64_t*>(rbp76 - 0x88);
    fun_1f2(rdi75, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    goto v77;
    addr_192_14:
    edi78 = *reinterpret_cast<int32_t*>(rbp79 - 44);
    rsi37 = *reinterpret_cast<struct s4**>(rbp80 - 0x70);
    print_array(edi78, rsi37, rdx39, rcx41, r8_43, r9_45, v53, r11_47, r10_49, rax51, r10_25, rax27);
    goto addr_19e_11;
}

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    int32_t f4;
};

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    int32_t f0;
    int32_t f4;
};

void kernel_gemver(struct s5* rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int32_t v13;
    struct s6* rdi14;
    struct s7* rsi15;
    struct s8* rdi16;
    struct s9* rsi17;
    int32_t v18;
    int32_t v19;
    struct s10* rdi20;
    struct s11* rsi21;
    struct s8* rdi22;
    struct s9* rsi23;
    struct s10* rdi24;
    struct s11* rsi25;
    struct s8* rdi26;
    struct s9* rsi27;
    struct s10* rdi28;
    struct s11* rsi29;
    int32_t v30;
    int32_t v31;
    struct s10* rdi32;
    struct s11* rsi33;
    struct s8* rdi34;
    struct s9* rsi35;
    struct s10* rdi36;
    struct s11* rsi37;
    int32_t v38;
    struct s10* rdi39;
    struct s11* rsi40;
    int32_t v41;
    int32_t v42;
    struct s10* rdi43;
    struct s11* rsi44;
    struct s8* rdi45;
    struct s9* rsi46;
    struct s10* rdi47;
    struct s11* rsi48;

    v13 = *reinterpret_cast<int32_t*>(&rdi);
    rdi->f0 = rsi->f0;
    rdi14 = reinterpret_cast<struct s6*>(&rdi->f4);
    rsi15 = reinterpret_cast<struct s7*>(&rsi->f4);
    rdi14->f0 = rsi15->f0;
    rdi16 = reinterpret_cast<struct s8*>(&rdi14->f4);
    rsi17 = reinterpret_cast<struct s9*>(&rsi15->f4);
    v18 = reinterpret_cast<int32_t>(fprintf);
    while (v18 < v13) {
        v19 = reinterpret_cast<int32_t>(fprintf);
        while (v19 < v13) {
            rdi16->f0 = rsi17->f0;
            rdi20 = reinterpret_cast<struct s10*>(&rdi16->f4);
            rsi21 = reinterpret_cast<struct s11*>(&rsi17->f4);
            rdi20->f0 = rsi21->f0;
            rdi22 = reinterpret_cast<struct s8*>(&rdi20->f4);
            rsi23 = reinterpret_cast<struct s9*>(&rsi21->f4);
            rdi22->f0 = rsi23->f0;
            rdi24 = reinterpret_cast<struct s10*>(&rdi22->f4);
            rsi25 = reinterpret_cast<struct s11*>(&rsi23->f4);
            __asm__("mulsd xmm1, xmm2");
            __asm__("addsd xmm1, xmm0");
            rdi24->f0 = rsi25->f0;
            rdi26 = reinterpret_cast<struct s8*>(&rdi24->f4);
            rsi27 = reinterpret_cast<struct s9*>(&rsi25->f4);
            rdi26->f0 = rsi27->f0;
            rdi28 = reinterpret_cast<struct s10*>(&rdi26->f4);
            rsi29 = reinterpret_cast<struct s11*>(&rsi27->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi28->f0 = rsi29->f0;
            rdi16 = reinterpret_cast<struct s8*>(&rdi28->f4);
            rsi17 = reinterpret_cast<struct s9*>(&rsi29->f4);
            ++v19;
        }
        ++v18;
    }
    v30 = reinterpret_cast<int32_t>(fprintf);
    while (v30 < v13) {
        v31 = reinterpret_cast<int32_t>(fprintf);
        while (v31 < v13) {
            rdi16->f0 = rsi17->f0;
            rdi32 = reinterpret_cast<struct s10*>(&rdi16->f4);
            rsi33 = reinterpret_cast<struct s11*>(&rsi17->f4);
            rdi32->f0 = rsi33->f0;
            rdi34 = reinterpret_cast<struct s8*>(&rdi32->f4);
            rsi35 = reinterpret_cast<struct s9*>(&rsi33->f4);
            __asm__("mulsd xmm0, [rax+rcx*8]");
            rdi34->f0 = rsi35->f0;
            rdi36 = reinterpret_cast<struct s10*>(&rdi34->f4);
            rsi37 = reinterpret_cast<struct s11*>(&rsi35->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi36->f0 = rsi37->f0;
            rdi16 = reinterpret_cast<struct s8*>(&rdi36->f4);
            rsi17 = reinterpret_cast<struct s9*>(&rsi37->f4);
            ++v31;
        }
        ++v30;
    }
    v38 = reinterpret_cast<int32_t>(fprintf);
    while (v38 < v13) {
        rdi16->f0 = rsi17->f0;
        rdi39 = reinterpret_cast<struct s10*>(&rdi16->f4);
        rsi40 = reinterpret_cast<struct s11*>(&rsi17->f4);
        __asm__("addsd xmm0, [rax+rcx*8]");
        rdi39->f0 = rsi40->f0;
        rdi16 = reinterpret_cast<struct s8*>(&rdi39->f4);
        rsi17 = reinterpret_cast<struct s9*>(&rsi40->f4);
        ++v38;
    }
    v41 = reinterpret_cast<int32_t>(fprintf);
    while (v41 < v13) {
        v42 = reinterpret_cast<int32_t>(fprintf);
        while (v42 < v13) {
            rdi16->f0 = rsi17->f0;
            rdi43 = reinterpret_cast<struct s10*>(&rdi16->f4);
            rsi44 = reinterpret_cast<struct s11*>(&rsi17->f4);
            rdi43->f0 = rsi44->f0;
            rdi45 = reinterpret_cast<struct s8*>(&rdi43->f4);
            rsi46 = reinterpret_cast<struct s9*>(&rsi44->f4);
            __asm__("mulsd xmm0, [rax+rcx*8]");
            rdi45->f0 = rsi46->f0;
            rdi47 = reinterpret_cast<struct s10*>(&rdi45->f4);
            rsi48 = reinterpret_cast<struct s11*>(&rsi46->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi47->f0 = rsi48->f0;
            rdi16 = reinterpret_cast<struct s8*>(&rdi47->f4);
            rsi17 = reinterpret_cast<struct s9*>(&rsi48->f4);
            ++v42;
        }
        ++v41;
    }
    return;
}

int32_t fun_189(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
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
        rsi = *reinterpret_cast<struct s4**>(rbp16 - 0x70);
        print_array(edi14, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    }
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 72);
    fun_1a7(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 80);
    fun_1b0(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 88);
    fun_1b9(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 96);
    fun_1c2(rdi23, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 0x68);
    fun_1cb(rdi25, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 0x70);
    fun_1d4(rdi27, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi29 = *reinterpret_cast<int64_t*>(rbp30 - 0x78);
    fun_1dd(rdi29, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi31 = *reinterpret_cast<int64_t*>(rbp32 - 0x80);
    fun_1e6(rdi31, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 0x88);
    fun_1f2(rdi33, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
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

void print_array(int32_t edi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
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

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_9f(int64_t rdi, int64_t rsi) {
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
    struct s12* rdi32;
    int64_t rbp33;
    struct s13* rdi34;
    struct s4* rsi35;
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
    rax5 = fun_b2(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 0x80) = rax5;
    rax7 = fun_c5(0x7d0, 8);
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
    rdi34 = reinterpret_cast<struct s13*>(&rdi32->f4);
    rdi34->f0 = rsi27->f4;
    rsi35 = *reinterpret_cast<struct s4**>(rbp36 - 72);
    rdx37 = *reinterpret_cast<int64_t*>(rbp38 - 80);
    rcx39 = *reinterpret_cast<int64_t*>(rbp40 - 88);
    r8_41 = *reinterpret_cast<int64_t*>(rbp42 - 96);
    r9_43 = *reinterpret_cast<int64_t*>(rbp44 - 0x68);
    r11_45 = *reinterpret_cast<int64_t*>(rbp46 - 0x78);
    r10_47 = *reinterpret_cast<int64_t*>(rbp48 - 0x80);
    rax49 = *reinterpret_cast<int64_t*>(rbp50 - 0x88);
    v51 = *reinterpret_cast<int64_t*>(rbp52 - 0x70);
    kernel_gemver(&rdi34->f4, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    if (*reinterpret_cast<int32_t*>(rbp53 - 28) <= 42) {
        addr_19e_10:
        rdi54 = *reinterpret_cast<int64_t*>(rbp55 - 72);
        fun_1a7(rdi54, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    } else {
        rdi56 = **reinterpret_cast<int64_t**>(rbp57 - 40);
        rsi35 = reinterpret_cast<struct s4*>(0x184);
        eax58 = fun_189(rdi56, 0x184, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
        if (!reinterpret_cast<int1_t>(eax58 == fprintf)) 
            goto addr_19e_10; else 
            goto addr_192_13;
    }
    rdi59 = *reinterpret_cast<int64_t*>(rbp60 - 80);
    fun_1b0(rdi59, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 88);
    fun_1b9(rdi61, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 96);
    fun_1c2(rdi63, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 0x68);
    fun_1cb(rdi65, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 0x70);
    fun_1d4(rdi67, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 0x78);
    fun_1dd(rdi69, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    rdi71 = *reinterpret_cast<int64_t*>(rbp72 - 0x80);
    fun_1e6(rdi71, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    rdi73 = *reinterpret_cast<int64_t*>(rbp74 - 0x88);
    fun_1f2(rdi73, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    goto v75;
    addr_192_13:
    edi76 = *reinterpret_cast<int32_t*>(rbp77 - 44);
    rsi35 = *reinterpret_cast<struct s4**>(rbp78 - 0x70);
    print_array(edi76, rsi35, rdx37, rcx39, r8_41, r9_43, v51, r11_45, r10_47, rax49, r10_23, rax25);
    goto addr_19e_10;
}

void fun_1a7(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
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
    fun_1b0(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 88);
    fun_1b9(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 96);
    fun_1c2(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x68);
    fun_1cb(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0x70);
    fun_1d4(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 0x78);
    fun_1dd(rdi23, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 0x80);
    fun_1e6(rdi25, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 0x88);
    fun_1f2(rdi27, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v29;
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

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_b2(int64_t rdi, int64_t rsi) {
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
    struct s14* rdi30;
    int64_t rbp31;
    struct s15* rdi32;
    struct s4* rsi33;
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
    rax5 = fun_c5(0x7d0, 8);
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
    rdi32 = reinterpret_cast<struct s15*>(&rdi30->f4);
    rdi32->f0 = rsi25->f4;
    rsi33 = *reinterpret_cast<struct s4**>(rbp34 - 72);
    rdx35 = *reinterpret_cast<int64_t*>(rbp36 - 80);
    rcx37 = *reinterpret_cast<int64_t*>(rbp38 - 88);
    r8_39 = *reinterpret_cast<int64_t*>(rbp40 - 96);
    r9_41 = *reinterpret_cast<int64_t*>(rbp42 - 0x68);
    r11_43 = *reinterpret_cast<int64_t*>(rbp44 - 0x78);
    r10_45 = *reinterpret_cast<int64_t*>(rbp46 - 0x80);
    rax47 = *reinterpret_cast<int64_t*>(rbp48 - 0x88);
    v49 = *reinterpret_cast<int64_t*>(rbp50 - 0x70);
    kernel_gemver(&rdi32->f4, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    if (*reinterpret_cast<int32_t*>(rbp51 - 28) <= 42) {
        addr_19e_9:
        rdi52 = *reinterpret_cast<int64_t*>(rbp53 - 72);
        fun_1a7(rdi52, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    } else {
        rdi54 = **reinterpret_cast<int64_t**>(rbp55 - 40);
        rsi33 = reinterpret_cast<struct s4*>(0x184);
        eax56 = fun_189(rdi54, 0x184, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
        if (!reinterpret_cast<int1_t>(eax56 == fprintf)) 
            goto addr_19e_9; else 
            goto addr_192_12;
    }
    rdi57 = *reinterpret_cast<int64_t*>(rbp58 - 80);
    fun_1b0(rdi57, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    rdi59 = *reinterpret_cast<int64_t*>(rbp60 - 88);
    fun_1b9(rdi59, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 96);
    fun_1c2(rdi61, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 0x68);
    fun_1cb(rdi63, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 0x70);
    fun_1d4(rdi65, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 0x78);
    fun_1dd(rdi67, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 0x80);
    fun_1e6(rdi69, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    rdi71 = *reinterpret_cast<int64_t*>(rbp72 - 0x88);
    fun_1f2(rdi71, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    goto v73;
    addr_192_12:
    edi74 = *reinterpret_cast<int32_t*>(rbp75 - 44);
    rsi33 = *reinterpret_cast<struct s4**>(rbp76 - 0x70);
    print_array(edi74, rsi33, rdx35, rcx37, r8_39, r9_41, v49, r11_43, r10_45, rax47, r10_21, rax23);
    goto addr_19e_9;
}

void fun_1b0(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
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
    fun_1b9(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 96);
    fun_1c2(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x68);
    fun_1cb(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x70);
    fun_1d4(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0x78);
    fun_1dd(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 0x80);
    fun_1e6(rdi23, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 0x88);
    fun_1f2(rdi25, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
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

void fun_737(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g73e;
    rdi6 = *rax5;
    fun_74f(rdi6, 0x748, rdx, rcx);
    goto v7;
}

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_c5(int64_t rdi, int64_t rsi) {
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
    struct s16* rdi28;
    int64_t rbp29;
    struct s17* rdi30;
    struct s4* rsi31;
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
    rdi30 = reinterpret_cast<struct s17*>(&rdi28->f4);
    rdi30->f0 = rsi23->f4;
    rsi31 = *reinterpret_cast<struct s4**>(rbp32 - 72);
    rdx33 = *reinterpret_cast<int64_t*>(rbp34 - 80);
    rcx35 = *reinterpret_cast<int64_t*>(rbp36 - 88);
    r8_37 = *reinterpret_cast<int64_t*>(rbp38 - 96);
    r9_39 = *reinterpret_cast<int64_t*>(rbp40 - 0x68);
    r11_41 = *reinterpret_cast<int64_t*>(rbp42 - 0x78);
    r10_43 = *reinterpret_cast<int64_t*>(rbp44 - 0x80);
    rax45 = *reinterpret_cast<int64_t*>(rbp46 - 0x88);
    v47 = *reinterpret_cast<int64_t*>(rbp48 - 0x70);
    kernel_gemver(&rdi30->f4, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    if (*reinterpret_cast<int32_t*>(rbp49 - 28) <= 42) {
        addr_19e_8:
        rdi50 = *reinterpret_cast<int64_t*>(rbp51 - 72);
        fun_1a7(rdi50, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    } else {
        rdi52 = **reinterpret_cast<int64_t**>(rbp53 - 40);
        rsi31 = reinterpret_cast<struct s4*>(0x184);
        eax54 = fun_189(rdi52, 0x184, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
        if (!reinterpret_cast<int1_t>(eax54 == fprintf)) 
            goto addr_19e_8; else 
            goto addr_192_11;
    }
    rdi55 = *reinterpret_cast<int64_t*>(rbp56 - 80);
    fun_1b0(rdi55, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    rdi57 = *reinterpret_cast<int64_t*>(rbp58 - 88);
    fun_1b9(rdi57, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    rdi59 = *reinterpret_cast<int64_t*>(rbp60 - 96);
    fun_1c2(rdi59, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 0x68);
    fun_1cb(rdi61, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 0x70);
    fun_1d4(rdi63, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 0x78);
    fun_1dd(rdi65, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 0x80);
    fun_1e6(rdi67, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 0x88);
    fun_1f2(rdi69, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    goto v71;
    addr_192_11:
    edi72 = *reinterpret_cast<int32_t*>(rbp73 - 44);
    rsi31 = *reinterpret_cast<struct s4**>(rbp74 - 0x70);
    print_array(edi72, rsi31, rdx33, rcx35, r8_37, r9_39, v47, r11_41, r10_43, rax45, r10_19, rax21);
    goto addr_19e_8;
}

void fun_1b9(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
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
    fun_1c2(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x68);
    fun_1cb(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x70);
    fun_1d4(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x78);
    fun_1dd(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0x80);
    fun_1e6(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 0x88);
    fun_1f2(rdi23, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v25;
}

void fun_74f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

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

struct s49 {
    int32_t f0;
    int32_t f4;
};

struct s50 {
    int32_t f0;
    int32_t f4;
};

struct s51 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int32_t v13;
    struct s18* rdi14;
    struct s19* rsi15;
    struct s20* rdi16;
    struct s21* rsi17;
    struct s22* rdi18;
    struct s23* rsi19;
    struct s24* rdi20;
    struct s25* rsi21;
    struct s26* rdi22;
    struct s27* rsi23;
    int32_t v24;
    struct s28* rdi25;
    struct s29* rsi26;
    struct s30* rdi27;
    struct s31* rsi28;
    struct s32* rdi29;
    struct s33* rsi30;
    struct s34* rdi31;
    struct s35* rsi32;
    struct s36* rdi33;
    struct s37* rsi34;
    struct s38* rdi35;
    struct s39* rsi36;
    struct s40* rdi37;
    struct s41* rsi38;
    struct s42* rdi39;
    struct s43* rsi40;
    struct s44* rdi41;
    struct s45* rsi42;
    struct s46* rdi43;
    struct s47* rsi44;
    struct s48* rdi45;
    struct s49* rsi46;
    struct s50* rdi47;
    struct s51* rsi48;
    int32_t v49;

    v13 = *reinterpret_cast<int32_t*>(&rdi);
    rdi->f0 = rsi->f0;
    rdi14 = reinterpret_cast<struct s18*>(&rdi->f4);
    rsi15 = reinterpret_cast<struct s19*>(&rsi->f4);
    rdi14->f0 = rsi15->f0;
    rdi16 = reinterpret_cast<struct s20*>(&rdi14->f4);
    rsi17 = reinterpret_cast<struct s21*>(&rsi15->f4);
    rdi16->f0 = rsi17->f0;
    rdi18 = reinterpret_cast<struct s22*>(&rdi16->f4);
    rsi19 = reinterpret_cast<struct s23*>(&rsi17->f4);
    rdi18->f0 = rsi19->f0;
    rdi20 = reinterpret_cast<struct s24*>(&rdi18->f4);
    rsi21 = reinterpret_cast<struct s25*>(&rsi19->f4);
    __asm__("cvtsi2sd xmm0, dword [rbp-0x4]");
    rdi20->f0 = rsi21->f0;
    rdi22 = reinterpret_cast<struct s26*>(&rdi20->f4);
    rsi23 = reinterpret_cast<struct s27*>(&rsi21->f4);
    v24 = reinterpret_cast<int32_t>(fprintf);
    while (v24 < v13) {
        __asm__("cvtsi2sd xmm0, dword [rbp-0x34]");
        rdi22->f0 = rsi23->f0;
        rdi25 = reinterpret_cast<struct s28*>(&rdi22->f4);
        rsi26 = reinterpret_cast<struct s29*>(&rsi23->f4);
        __asm__("cvtsi2sd xmm0, eax");
        __asm__("divsd xmm0, [rbp-0x40]");
        rdi25->f0 = rsi26->f0;
        rdi27 = reinterpret_cast<struct s30*>(&rdi25->f4);
        rsi28 = reinterpret_cast<struct s31*>(&rsi26->f4);
        __asm__("divsd xmm0, xmm1");
        rdi27->f0 = rsi28->f0;
        rdi29 = reinterpret_cast<struct s32*>(&rdi27->f4);
        rsi30 = reinterpret_cast<struct s33*>(&rsi28->f4);
        __asm__("cvtsi2sd xmm0, eax");
        __asm__("divsd xmm0, [rbp-0x40]");
        rdi29->f0 = rsi30->f0;
        rdi31 = reinterpret_cast<struct s34*>(&rdi29->f4);
        rsi32 = reinterpret_cast<struct s35*>(&rsi30->f4);
        __asm__("divsd xmm0, xmm1");
        rdi31->f0 = rsi32->f0;
        rdi33 = reinterpret_cast<struct s36*>(&rdi31->f4);
        rsi34 = reinterpret_cast<struct s37*>(&rsi32->f4);
        __asm__("cvtsi2sd xmm0, eax");
        __asm__("divsd xmm0, [rbp-0x40]");
        rdi33->f0 = rsi34->f0;
        rdi35 = reinterpret_cast<struct s38*>(&rdi33->f4);
        rsi36 = reinterpret_cast<struct s39*>(&rsi34->f4);
        __asm__("divsd xmm0, xmm1");
        rdi35->f0 = rsi36->f0;
        rdi37 = reinterpret_cast<struct s40*>(&rdi35->f4);
        rsi38 = reinterpret_cast<struct s41*>(&rsi36->f4);
        __asm__("cvtsi2sd xmm0, eax");
        __asm__("divsd xmm0, [rbp-0x40]");
        rdi37->f0 = rsi38->f0;
        rdi39 = reinterpret_cast<struct s42*>(&rdi37->f4);
        rsi40 = reinterpret_cast<struct s43*>(&rsi38->f4);
        __asm__("divsd xmm0, xmm1");
        rdi39->f0 = rsi40->f0;
        rdi41 = reinterpret_cast<struct s44*>(&rdi39->f4);
        rsi42 = reinterpret_cast<struct s45*>(&rsi40->f4);
        __asm__("cvtsi2sd xmm0, eax");
        __asm__("divsd xmm0, [rbp-0x40]");
        rdi41->f0 = rsi42->f0;
        rdi43 = reinterpret_cast<struct s46*>(&rdi41->f4);
        rsi44 = reinterpret_cast<struct s47*>(&rsi42->f4);
        __asm__("divsd xmm0, xmm1");
        rdi43->f0 = rsi44->f0;
        rdi45 = reinterpret_cast<struct s48*>(&rdi43->f4);
        rsi46 = reinterpret_cast<struct s49*>(&rsi44->f4);
        __asm__("xorps xmm0, xmm0");
        rdi45->f0 = rsi46->f0;
        rdi47 = reinterpret_cast<struct s50*>(&rdi45->f4);
        rsi48 = reinterpret_cast<struct s51*>(&rsi46->f4);
        __asm__("xorps xmm0, xmm0");
        rdi47->f0 = rsi48->f0;
        rdi22 = reinterpret_cast<struct s26*>(&rdi47->f4);
        rsi23 = reinterpret_cast<struct s27*>(&rsi48->f4);
        v49 = reinterpret_cast<int32_t>(fprintf);
        while (v49 < v13) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi22->f0 = rsi23->f0;
            rdi22 = reinterpret_cast<struct s26*>(&rdi22->f4);
            rsi23 = reinterpret_cast<struct s27*>(&rsi23->f4);
            ++v49;
        }
        ++v24;
    }
    return;
}

void fun_1c2(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
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
    fun_1cb(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x70);
    fun_1d4(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x78);
    fun_1dd(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x80);
    fun_1e6(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0x88);
    fun_1f2(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v23;
}

void fun_1cb(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
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
    fun_1d4(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x78);
    fun_1dd(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x80);
    fun_1e6(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x88);
    fun_1f2(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v21;
}

void fun_1d4(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t v19;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 0x78);
    fun_1dd(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x80);
    fun_1e6(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x88);
    fun_1f2(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v19;
}

void fun_1dd(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t v17;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 0x80);
    fun_1e6(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x88);
    fun_1f2(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v17;
}

void fun_1e6(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t v15;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 0x88);
    fun_1f2(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v15;
}

void fun_1f2(int64_t rdi, struct s4* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t v13;

    goto v13;
}

void fprintf() {
}

void fun_78() {
    int64_t rax1;
    int64_t rax2;
    signed char cl3;

    *reinterpret_cast<signed char*>(rax1 - 0x77) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax2 - 0x77) + cl3);
    fun_8c(0x7d0, 8);
}

