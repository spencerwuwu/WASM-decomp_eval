
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fprintf();

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

void kernel_ludcmp(int32_t edi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    struct s0* rdi1;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    struct s2* rdi9;
    struct s3* rsi10;
    struct s4* rdi11;
    struct s5* rsi12;
    int32_t v13;
    struct s6* rdi14;
    struct s7* rsi15;
    struct s0* rdi16;
    struct s1* rsi17;
    struct s2* rdi18;
    struct s3* rsi19;
    struct s6* rdi20;
    struct s7* rsi21;
    int32_t v22;
    struct s2* rdi23;
    struct s3* rsi24;
    struct s4* rdi25;
    struct s5* rsi26;
    int32_t v27;
    struct s6* rdi28;
    struct s7* rsi29;
    struct s0* rdi30;
    struct s1* rsi31;
    struct s2* rdi32;
    struct s3* rsi33;
    struct s6* rdi34;
    struct s7* rsi35;
    int32_t v36;
    struct s2* rdi37;
    struct s3* rsi38;
    struct s4* rdi39;
    struct s5* rsi40;
    int32_t v41;
    struct s6* rdi42;
    struct s7* rsi43;
    struct s0* rdi44;
    struct s1* rsi45;
    struct s2* rdi46;
    struct s3* rsi47;
    struct s6* rdi48;
    struct s7* rsi49;
    int32_t v50;
    struct s2* rdi51;
    struct s3* rsi52;
    struct s4* rdi53;
    struct s5* rsi54;
    int32_t v55;
    struct s6* rdi56;
    struct s7* rsi57;
    struct s0* rdi58;
    struct s1* rsi59;
    struct s2* rdi60;
    struct s3* rsi61;
    struct s6* rdi62;
    struct s7* rsi63;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v6 = *reinterpret_cast<int32_t*>(&rdi1);
    v7 = reinterpret_cast<int32_t>(fprintf);
    while (v7 < v6) {
        v8 = reinterpret_cast<int32_t>(fprintf);
        while (v8 < v7) {
            rdi1->f0 = rsi->f0;
            rdi9 = reinterpret_cast<struct s2*>(&rdi1->f4);
            rsi10 = reinterpret_cast<struct s3*>(&rsi->f4);
            rdi9->f0 = rsi10->f0;
            rdi11 = reinterpret_cast<struct s4*>(&rdi9->f4);
            rsi12 = reinterpret_cast<struct s5*>(&rsi10->f4);
            v13 = reinterpret_cast<int32_t>(fprintf);
            while (v13 < v8) {
                rdi11->f0 = rsi12->f0;
                rdi14 = reinterpret_cast<struct s6*>(&rdi11->f4);
                rsi15 = reinterpret_cast<struct s7*>(&rsi12->f4);
                rdi14->f0 = rsi15->f0;
                rdi16 = reinterpret_cast<struct s0*>(&rdi14->f4);
                rsi17 = reinterpret_cast<struct s1*>(&rsi15->f4);
                rdi16->f0 = rsi17->f0;
                rdi18 = reinterpret_cast<struct s2*>(&rdi16->f4);
                rsi19 = reinterpret_cast<struct s3*>(&rsi17->f4);
                __asm__("movd rax, xmm0");
                __asm__("movd xmm0, rax");
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi18->f0 = rsi19->f0;
                rdi11 = reinterpret_cast<struct s4*>(&rdi18->f4);
                rsi12 = reinterpret_cast<struct s5*>(&rsi19->f4);
                ++v13;
            }
            rdi11->f0 = rsi12->f0;
            rdi20 = reinterpret_cast<struct s6*>(&rdi11->f4);
            rsi21 = reinterpret_cast<struct s7*>(&rsi12->f4);
            __asm__("divsd xmm0, [rax+rcx*8]");
            rdi20->f0 = rsi21->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi20->f4);
            rsi = reinterpret_cast<struct s1*>(&rsi21->f4);
            ++v8;
        }
        v22 = v7;
        while (v22 < v6) {
            rdi1->f0 = rsi->f0;
            rdi23 = reinterpret_cast<struct s2*>(&rdi1->f4);
            rsi24 = reinterpret_cast<struct s3*>(&rsi->f4);
            rdi23->f0 = rsi24->f0;
            rdi25 = reinterpret_cast<struct s4*>(&rdi23->f4);
            rsi26 = reinterpret_cast<struct s5*>(&rsi24->f4);
            v27 = reinterpret_cast<int32_t>(fprintf);
            while (v27 < v7) {
                rdi25->f0 = rsi26->f0;
                rdi28 = reinterpret_cast<struct s6*>(&rdi25->f4);
                rsi29 = reinterpret_cast<struct s7*>(&rsi26->f4);
                rdi28->f0 = rsi29->f0;
                rdi30 = reinterpret_cast<struct s0*>(&rdi28->f4);
                rsi31 = reinterpret_cast<struct s1*>(&rsi29->f4);
                rdi30->f0 = rsi31->f0;
                rdi32 = reinterpret_cast<struct s2*>(&rdi30->f4);
                rsi33 = reinterpret_cast<struct s3*>(&rsi31->f4);
                __asm__("movd rax, xmm0");
                __asm__("movd xmm0, rax");
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi32->f0 = rsi33->f0;
                rdi25 = reinterpret_cast<struct s4*>(&rdi32->f4);
                rsi26 = reinterpret_cast<struct s5*>(&rsi33->f4);
                ++v27;
            }
            rdi25->f0 = rsi26->f0;
            rdi34 = reinterpret_cast<struct s6*>(&rdi25->f4);
            rsi35 = reinterpret_cast<struct s7*>(&rsi26->f4);
            rdi34->f0 = rsi35->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi34->f4);
            rsi = reinterpret_cast<struct s1*>(&rsi35->f4);
            ++v22;
        }
        ++v7;
    }
    v36 = reinterpret_cast<int32_t>(fprintf);
    while (v36 < v6) {
        rdi1->f0 = rsi->f0;
        rdi37 = reinterpret_cast<struct s2*>(&rdi1->f4);
        rsi38 = reinterpret_cast<struct s3*>(&rsi->f4);
        rdi37->f0 = rsi38->f0;
        rdi39 = reinterpret_cast<struct s4*>(&rdi37->f4);
        rsi40 = reinterpret_cast<struct s5*>(&rsi38->f4);
        v41 = reinterpret_cast<int32_t>(fprintf);
        while (v41 < v36) {
            rdi39->f0 = rsi40->f0;
            rdi42 = reinterpret_cast<struct s6*>(&rdi39->f4);
            rsi43 = reinterpret_cast<struct s7*>(&rsi40->f4);
            rdi42->f0 = rsi43->f0;
            rdi44 = reinterpret_cast<struct s0*>(&rdi42->f4);
            rsi45 = reinterpret_cast<struct s1*>(&rsi43->f4);
            rdi44->f0 = rsi45->f0;
            rdi46 = reinterpret_cast<struct s2*>(&rdi44->f4);
            rsi47 = reinterpret_cast<struct s3*>(&rsi45->f4);
            __asm__("movd rax, xmm0");
            __asm__("movd xmm0, rax");
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi46->f0 = rsi47->f0;
            rdi39 = reinterpret_cast<struct s4*>(&rdi46->f4);
            rsi40 = reinterpret_cast<struct s5*>(&rsi47->f4);
            ++v41;
        }
        rdi39->f0 = rsi40->f0;
        rdi48 = reinterpret_cast<struct s6*>(&rdi39->f4);
        rsi49 = reinterpret_cast<struct s7*>(&rsi40->f4);
        rdi48->f0 = rsi49->f0;
        rdi1 = reinterpret_cast<struct s0*>(&rdi48->f4);
        rsi = reinterpret_cast<struct s1*>(&rsi49->f4);
        ++v36;
    }
    v50 = v6 - 1;
    while (v50 >= reinterpret_cast<int32_t>(fprintf)) {
        rdi1->f0 = rsi->f0;
        rdi51 = reinterpret_cast<struct s2*>(&rdi1->f4);
        rsi52 = reinterpret_cast<struct s3*>(&rsi->f4);
        rdi51->f0 = rsi52->f0;
        rdi53 = reinterpret_cast<struct s4*>(&rdi51->f4);
        rsi54 = reinterpret_cast<struct s5*>(&rsi52->f4);
        v55 = v50 + 1;
        while (v55 < v6) {
            rdi53->f0 = rsi54->f0;
            rdi56 = reinterpret_cast<struct s6*>(&rdi53->f4);
            rsi57 = reinterpret_cast<struct s7*>(&rsi54->f4);
            rdi56->f0 = rsi57->f0;
            rdi58 = reinterpret_cast<struct s0*>(&rdi56->f4);
            rsi59 = reinterpret_cast<struct s1*>(&rsi57->f4);
            rdi58->f0 = rsi59->f0;
            rdi60 = reinterpret_cast<struct s2*>(&rdi58->f4);
            rsi61 = reinterpret_cast<struct s3*>(&rsi59->f4);
            __asm__("movd rax, xmm0");
            __asm__("movd xmm0, rax");
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi60->f0 = rsi61->f0;
            rdi53 = reinterpret_cast<struct s4*>(&rdi60->f4);
            rsi54 = reinterpret_cast<struct s5*>(&rsi61->f4);
            ++v55;
        }
        rdi53->f0 = rsi54->f0;
        rdi62 = reinterpret_cast<struct s6*>(&rdi53->f4);
        rsi63 = reinterpret_cast<struct s7*>(&rsi54->f4);
        __asm__("divsd xmm0, [rax+rcx*8]");
        rdi62->f0 = rsi63->f0;
        rdi1 = reinterpret_cast<struct s0*>(&rdi62->f4);
        rsi = reinterpret_cast<struct s1*>(&rsi63->f4);
        --v50;
    }
    return;
}

void print_array(int32_t edi, int64_t rsi);

void fun_cd(int64_t rdi, int64_t rsi);

void fun_d6(int64_t rdi, int64_t rsi);

void fun_df(int64_t rdi, int64_t rsi);

void fun_e8(int64_t rdi, int64_t rsi);

void fun_af(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t eax6;
    int32_t edi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t v18;

    if (reinterpret_cast<int1_t>(eax6 == fprintf)) {
        edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp9 - 48);
        print_array(edi7, rsi);
    }
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 32);
    fun_cd(rdi10, rsi);
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 40);
    fun_d6(rdi12, rsi);
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
    fun_df(rdi14, rsi);
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 56);
    fun_e8(rdi16, rsi);
    goto v18;
}

int64_t* g806 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_817(int64_t rdi, int64_t rsi);

int64_t* g81e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_836(int64_t rdi);

int64_t* g864 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_875(int64_t rdi);

int32_t** g87c = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_89a(int64_t rdi);

int64_t* g8af = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_8c7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g8ce = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_8df(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi) {
    int32_t v3;
    int64_t* rax4;
    int64_t rdi5;
    int64_t* rax6;
    int64_t rdi7;
    int32_t* rsi8;
    int32_t v9;
    int64_t* rax10;
    int64_t rdi11;
    int32_t** rax12;
    int32_t* rdi13;
    int64_t rcx14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t* rax17;
    int64_t rdi18;

    v3 = edi;
    rax4 = g806;
    rdi5 = *rax4;
    fun_817(rdi5, 0x810);
    rax6 = g81e;
    rdi7 = *rax6;
    rsi8 = reinterpret_cast<int32_t*>(0x828);
    fun_836(rdi7);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v9 % 20 == fprintf)) {
            rax10 = g864;
            rdi11 = *rax10;
            rsi8 = reinterpret_cast<int32_t*>(0x86e);
            fun_875(rdi11);
        }
        rax12 = g87c;
        rdi13 = *rax12;
        rcx14 = v9;
        *rdi13 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x893);
        fun_89a(rdi13 + 1);
        ++v9;
    }
    rax15 = g8af;
    rdi16 = *rax15;
    fun_8c7(rdi16, 0x8b9, 0x8c0, rcx14);
    rax17 = g8ce;
    rdi18 = *rax17;
    fun_8df(rdi18, 0x8d8, 0x8c0, rcx14);
    return;
}

void fun_875(int64_t rdi) {
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
        rax2 = g87c;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 20);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x893);
        fun_89a(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 20) = *reinterpret_cast<int32_t*>(rbp8 - 20) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 20) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 20) % 20 == fprintf)) 
            continue;
        rax12 = g864;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x86e);
        fun_875(rdi13);
    }
    rax14 = g8af;
    rdi15 = *rax14;
    fun_8c7(rdi15, 0x8b9, 0x8c0, rcx4);
    rax16 = g8ce;
    rdi17 = *rax16;
    fun_8df(rdi17, 0x8d8, 0x8c0, rcx4);
    goto v18;
}

void fun_89a(int64_t rdi) {
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
            rax7 = g864;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x86e);
            fun_875(rdi8);
        }
        rax10 = g87c;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 20);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x893);
        fun_89a(rdi11 + 1);
    }
    rax14 = g8af;
    rdi15 = *rax14;
    fun_8c7(rdi15, 0x8b9, 0x8c0, rcx12);
    rax16 = g8ce;
    rdi17 = *rax16;
    fun_8df(rdi17, 0x8d8, 0x8c0, rcx12);
    goto v18;
}

void fun_cd(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t v9;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 40);
    fun_d6(rdi3, rsi);
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 48);
    fun_df(rdi5, rsi);
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 56);
    fun_e8(rdi7, rsi);
    goto v9;
}

void fun_817(int64_t rdi, int64_t rsi) {
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

    rax3 = g81e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x828);
    fun_836(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 20) % 20 == fprintf)) {
            rax10 = g864;
            rdi11 = *rax10;
            rsi5 = reinterpret_cast<int32_t*>(0x86e);
            fun_875(rdi11);
        }
        rax12 = g87c;
        rdi13 = *rax12;
        rcx14 = *reinterpret_cast<int32_t*>(rbp15 - 20);
        *rdi13 = *rsi5;
        rsi5 = reinterpret_cast<int32_t*>(0x893);
        fun_89a(rdi13 + 1);
        *reinterpret_cast<int32_t*>(rbp16 - 20) = *reinterpret_cast<int32_t*>(rbp17 - 20) + 1;
    }
    rax18 = g8af;
    rdi19 = *rax18;
    fun_8c7(rdi19, 0x8b9, 0x8c0, rcx14);
    rax20 = g8ce;
    rdi21 = *rax20;
    fun_8df(rdi21, 0x8d8, 0x8c0, rcx14);
    goto v22;
}

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

void fun_436(int64_t rdi);

void fun_27c(struct s8* rdi, struct s9* rsi, int64_t rdx, int64_t rcx) {
    int64_t rbp5;
    int64_t rax6;
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
    struct s10* rdi26;
    struct s11* rsi27;
    struct s8* rdi28;
    struct s9* rsi29;
    struct s10* rdi30;
    struct s11* rsi31;
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
    struct s10* rdi44;
    struct s11* rsi45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rdi50;
    int64_t rbp51;
    int64_t v52;

    *reinterpret_cast<int64_t*>(rbp5 - 80) = rax6;
    *reinterpret_cast<int32_t*>(rbp7 - 60) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp8 - 60) < *reinterpret_cast<int32_t*>(rbp9 - 4)) {
        *reinterpret_cast<int32_t*>(rbp10 - 64) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp11 - 64) < *reinterpret_cast<int32_t*>(rbp12 - 4)) {
            __asm__("xorps xmm0, xmm0");
            rdi->f0 = rsi->f0;
            rdi = reinterpret_cast<struct s8*>(&rdi->f4);
            rsi = reinterpret_cast<struct s9*>(&rsi->f4);
            *reinterpret_cast<int32_t*>(rbp13 - 64) = *reinterpret_cast<int32_t*>(rbp14 - 64) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp15 - 60) = *reinterpret_cast<int32_t*>(rbp16 - 60) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp17 - 68) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp18 - 68) < *reinterpret_cast<int32_t*>(rbp19 - 4)) {
        *reinterpret_cast<int32_t*>(rbp20 - 60) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp21 - 60) < *reinterpret_cast<int32_t*>(rbp22 - 4)) {
            *reinterpret_cast<int32_t*>(rbp23 - 64) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp24 - 64) < *reinterpret_cast<int32_t*>(rbp25 - 4)) {
                rdi->f0 = rsi->f0;
                rdi26 = reinterpret_cast<struct s10*>(&rdi->f4);
                rsi27 = reinterpret_cast<struct s11*>(&rsi->f4);
                rdi26->f0 = rsi27->f0;
                rdi28 = reinterpret_cast<struct s8*>(&rdi26->f4);
                rsi29 = reinterpret_cast<struct s9*>(&rsi27->f4);
                rdi28->f0 = rsi29->f0;
                rdi30 = reinterpret_cast<struct s10*>(&rdi28->f4);
                rsi31 = reinterpret_cast<struct s11*>(&rsi29->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi30->f0 = rsi31->f0;
                rdi = reinterpret_cast<struct s8*>(&rdi30->f4);
                rsi = reinterpret_cast<struct s9*>(&rsi31->f4);
                *reinterpret_cast<int32_t*>(rbp32 - 64) = *reinterpret_cast<int32_t*>(rbp33 - 64) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp34 - 60) = *reinterpret_cast<int32_t*>(rbp35 - 60) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp36 - 68) = *reinterpret_cast<int32_t*>(rbp37 - 68) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp38 - 60) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp39 - 60) < *reinterpret_cast<int32_t*>(rbp40 - 4)) {
        *reinterpret_cast<int32_t*>(rbp41 - 64) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp42 - 64) < *reinterpret_cast<int32_t*>(rbp43 - 4)) {
            rdi->f0 = rsi->f0;
            rdi44 = reinterpret_cast<struct s10*>(&rdi->f4);
            rsi45 = reinterpret_cast<struct s11*>(&rsi->f4);
            rdi44->f0 = rsi45->f0;
            rdi = reinterpret_cast<struct s8*>(&rdi44->f4);
            rsi = reinterpret_cast<struct s9*>(&rsi45->f4);
            *reinterpret_cast<int32_t*>(rbp46 - 64) = *reinterpret_cast<int32_t*>(rbp47 - 64) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp48 - 60) = *reinterpret_cast<int32_t*>(rbp49 - 60) + 1;
    }
    rdi50 = *reinterpret_cast<int64_t*>(rbp51 - 80);
    fun_436(rdi50);
    goto v52;
}

void fun_d6(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t v7;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 48);
    fun_df(rdi3, rsi);
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 56);
    fun_e8(rdi5, rsi);
    goto v7;
}

void fun_836(int64_t rdi) {
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
            rax6 = g864;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x86e);
            fun_875(rdi7);
        }
        rax9 = g87c;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 20);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x893);
        fun_89a(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 20) = *reinterpret_cast<int32_t*>(rbp14 - 20) + 1;
    }
    rax15 = g8af;
    rdi16 = *rax15;
    fun_8c7(rdi16, 0x8b9, 0x8c0, rcx11);
    rax17 = g8ce;
    rdi18 = *rax17;
    fun_8df(rdi18, 0x8d8, 0x8c0, rcx11);
    goto v19;
}

void fun_8c7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g8ce;
    rdi6 = *rax5;
    fun_8df(rdi6, 0x8d8, rdx, rcx);
    goto v7;
}

void fun_df(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t v5;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 56);
    fun_e8(rdi3, rsi);
    goto v5;
}

void fun_436(int64_t rdi) {
    int64_t v2;

    goto v2;
}

void fun_8df(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_e8(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fprintf() {
}

void fun_78() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    int32_t edi4;
    int64_t rbp5;
    struct s1* rsi6;
    int64_t rbp7;
    int64_t rdx8;
    int64_t rbp9;
    int64_t rcx10;
    int64_t rbp11;
    int64_t r8_12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    edi4 = *reinterpret_cast<int32_t*>(rbp5 - 20);
    rsi6 = *reinterpret_cast<struct s1**>(rbp7 - 32);
    rdx8 = *reinterpret_cast<int64_t*>(rbp9 - 40);
    rcx10 = *reinterpret_cast<int64_t*>(rbp11 - 48);
    r8_12 = *reinterpret_cast<int64_t*>(rbp13 - 56);
    kernel_ludcmp(edi4, rsi6, rdx8, rcx10, r8_12);
    if (*reinterpret_cast<int32_t*>(rbp14 - 4) <= 42) 
        goto 0xc4;
    rdi15 = **reinterpret_cast<int64_t**>(rbp16 - 16);
    fun_af(rdi15, 0xaa, rdx8, rcx10, r8_12);
}

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s12* rdi, struct s13* rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t v6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t v9;
    int32_t* rdi10;
    int32_t* rsi11;
    int32_t* rdi12;
    int32_t* rsi13;
    int32_t* rdi14;
    int32_t* rsi15;
    int32_t* rdi16;
    int32_t* rsi17;
    int32_t v18;
    int32_t v19;
    int32_t* rdi20;
    int32_t* rsi21;
    int32_t v22;
    int32_t* rdi23;
    int32_t* rsi24;

    v6 = *reinterpret_cast<int32_t*>(&rdi);
    __asm__("cvtsi2sd xmm0, dword [rbp-0x4]");
    rdi->f0 = rsi->f0;
    rdi7 = &rdi->f4;
    rsi8 = &rsi->f4;
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v6) {
        __asm__("xorps xmm0, xmm0");
        *rdi7 = *rsi8;
        rdi10 = rdi7 + 1;
        rsi11 = rsi8 + 1;
        __asm__("xorps xmm0, xmm0");
        *rdi10 = *rsi11;
        rdi12 = rdi10 + 1;
        rsi13 = rsi11 + 1;
        __asm__("cvtsi2sd xmm0, eax");
        __asm__("divsd xmm0, [rbp-0x38]");
        *rdi12 = *rsi13;
        rdi14 = rdi12 + 1;
        rsi15 = rsi13 + 1;
        __asm__("divsd xmm0, xmm1");
        *rdi14 = *rsi15;
        rdi16 = rdi14 + 1;
        rsi17 = rsi15 + 1;
        __asm__("addsd xmm0, xmm1");
        rcx = v9;
        *rdi16 = *rsi17;
        rdi7 = rdi16 + 1;
        rsi8 = rsi17 + 1;
        ++v9;
    }
    v18 = reinterpret_cast<int32_t>(fprintf);
    while (v18 < v6) {
        v19 = reinterpret_cast<int32_t>(fprintf);
        while (v19 <= v18) {
            __asm__("cdq ");
            *reinterpret_cast<int32_t*>(&rdx) = (reinterpret_cast<int32_t>(fprintf) - v19) % v6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fprintf);
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            *rdi7 = *rsi8;
            rdi20 = rdi7 + 1;
            rsi21 = rsi8 + 1;
            __asm__("addsd xmm0, xmm1");
            *rdi20 = *rsi21;
            rdi7 = rdi20 + 1;
            rsi8 = rsi21 + 1;
            ++v19;
        }
        v22 = v18 + 1;
        while (v22 < v6) {
            __asm__("xorps xmm0, xmm0");
            *rdi7 = *rsi8;
            ++rdi7;
            ++rsi8;
            ++v22;
        }
        rcx = v18;
        *rdi7 = *rsi8;
        rdi23 = rdi7 + 1;
        rsi24 = rsi8 + 1;
        *rdi23 = *rsi24;
        rdi7 = rdi23 + 1;
        rsi8 = rsi24 + 1;
        ++v18;
    }
    fun_27c(0x3d0900, 8, rdx, rcx);
}

