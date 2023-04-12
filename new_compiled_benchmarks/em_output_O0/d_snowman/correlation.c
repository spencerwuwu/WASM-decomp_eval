
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

void fprintf();

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

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

void fun_355();

void fun_423();

int64_t kernel_correlation(struct s8* rdi, struct s9* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    uint32_t v9;
    struct s10* rdi10;
    struct s11* rsi11;
    int64_t v12;
    struct s12* rdi13;
    struct s13* rsi14;
    int32_t* rdi15;
    int32_t* rsi16;
    int32_t v17;
    int32_t* rdi18;
    int32_t* rsi19;
    uint32_t v20;
    int32_t* rdi21;
    int32_t* rsi22;
    int32_t* rdi23;
    int32_t* rsi24;
    int32_t* rdi25;
    int32_t* rsi26;
    int32_t v27;
    int32_t* rdi28;
    int32_t* rsi29;
    uint32_t v30;
    int32_t* rdi31;
    int32_t* rsi32;
    int32_t* rdi33;
    int32_t* rsi34;
    int32_t* rdi35;
    int32_t* rsi36;
    int32_t* rdi37;
    int32_t* rsi38;
    int32_t* rdi39;
    int32_t* rsi40;
    int32_t* rdi41;
    int32_t* rsi42;
    int32_t* rdi43;
    int32_t* rsi44;
    int32_t* rdi45;
    int32_t* rsi46;
    int32_t* rdi47;
    int32_t* rsi48;
    int32_t* rdi49;
    int32_t* rsi50;
    int32_t* rdi51;
    int32_t* rsi52;
    int32_t* rdi53;
    int32_t* rsi54;
    int32_t* rdi55;
    int32_t* rsi56;
    int32_t* rdi57;
    int32_t* rsi58;
    uint32_t v59;
    int32_t v60;
    int32_t* rdi61;
    int32_t* rsi62;
    int32_t* rdi63;
    int32_t* rsi64;
    int32_t* rdi65;
    int32_t* rsi66;
    int32_t* rdi67;
    int32_t* rsi68;
    int32_t* rdi69;
    int32_t* rsi70;
    int32_t v71;
    int32_t* rdi72;
    int32_t* rsi73;
    int32_t v74;
    int32_t* rdi75;
    int32_t* rsi76;
    uint32_t v77;
    int32_t* rdi78;
    int32_t* rsi79;
    int32_t* rdi80;
    int32_t* rsi81;
    int32_t* rdi82;
    int32_t* rsi83;
    int32_t* rdi84;
    int32_t* rsi85;

    v8 = *reinterpret_cast<int32_t*>(&rdi);
    v9 = *reinterpret_cast<uint32_t*>(&rsi);
    rdi->f0 = rsi->f0;
    rdi10 = reinterpret_cast<struct s10*>(&rdi->f4);
    rsi11 = reinterpret_cast<struct s11*>(&rsi->f4);
    v12 = rcx;
    rdi10->f0 = rsi11->f0;
    rdi13 = reinterpret_cast<struct s12*>(&rdi10->f4);
    rsi14 = reinterpret_cast<struct s13*>(&rsi11->f4);
    rdi13->f0 = rsi14->f0;
    rdi15 = &rdi13->f4;
    rsi16 = &rsi14->f4;
    v17 = reinterpret_cast<int32_t>(fprintf);
    while (v17 < v8) {
        __asm__("xorps xmm0, xmm0");
        *rdi15 = *rsi16;
        rdi18 = rdi15 + 1;
        rsi19 = rsi16 + 1;
        v20 = reinterpret_cast<uint32_t>(fprintf);
        while (reinterpret_cast<int32_t>(v20) < reinterpret_cast<int32_t>(v9)) {
            *rdi18 = *rsi19;
            rdi21 = rdi18 + 1;
            rsi22 = rsi19 + 1;
            __asm__("addsd xmm0, [rax+rcx*8]");
            *rdi21 = *rsi22;
            rdi18 = rdi21 + 1;
            rsi19 = rsi22 + 1;
            ++v20;
        }
        *rdi18 = *rsi19;
        rdi23 = rdi18 + 1;
        rsi24 = rsi19 + 1;
        *rdi23 = *rsi24;
        rdi25 = rdi23 + 1;
        rsi26 = rsi24 + 1;
        __asm__("divsd xmm0, xmm1");
        *rdi25 = *rsi26;
        rdi15 = rdi25 + 1;
        rsi16 = rsi26 + 1;
        ++v17;
    }
    v27 = reinterpret_cast<int32_t>(fprintf);
    while (v27 < v8) {
        __asm__("xorps xmm0, xmm0");
        *rdi15 = *rsi16;
        rdi28 = rdi15 + 1;
        rsi29 = rsi16 + 1;
        v30 = reinterpret_cast<uint32_t>(fprintf);
        while (reinterpret_cast<int32_t>(v30) < reinterpret_cast<int32_t>(v9)) {
            *rdi28 = *rsi29;
            rdi31 = rdi28 + 1;
            rsi32 = rsi29 + 1;
            __asm__("subsd xmm0, [rax+rcx*8]");
            *rdi31 = *rsi32;
            rdi33 = rdi31 + 1;
            rsi34 = rsi32 + 1;
            __asm__("subsd xmm2, [rax+rcx*8]");
            *rdi33 = *rsi34;
            rdi35 = rdi33 + 1;
            rsi36 = rsi34 + 1;
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            *rdi35 = *rsi36;
            rdi28 = rdi35 + 1;
            rsi29 = rsi36 + 1;
            ++v30;
        }
        *rdi28 = *rsi29;
        rdi37 = rdi28 + 1;
        rsi38 = rsi29 + 1;
        *rdi37 = *rsi38;
        rdi39 = rdi37 + 1;
        rsi40 = rsi38 + 1;
        __asm__("divsd xmm0, xmm1");
        *rdi39 = *rsi40;
        rdi41 = rdi39 + 1;
        rsi42 = rsi40 + 1;
        *rdi41 = *rsi42;
        rdi43 = rdi41 + 1;
        rsi44 = rsi42 + 1;
        fun_355();
        *rdi43 = *rsi44;
        rdi45 = rdi43 + 1;
        rsi46 = rsi44 + 1;
        *rdi45 = *rsi46;
        rdi47 = rdi45 + 1;
        rsi48 = rsi46 + 1;
        *rdi47 = *rsi48;
        rdi49 = rdi47 + 1;
        rsi50 = rsi48 + 1;
        __asm__("ucomisd xmm0, xmm1");
        if (v30 < v9) {
            *rdi49 = *rsi50;
            rdi51 = rdi49 + 1;
            rsi52 = rsi50 + 1;
            *rdi51 = *rsi52;
            rdi53 = rdi51 + 1;
            rsi54 = rsi52 + 1;
        } else {
            *rdi49 = *rsi50;
            rdi55 = rdi49 + 1;
            rsi56 = rsi50 + 1;
            *rdi55 = *rsi56;
            rdi53 = rdi55 + 1;
            rsi54 = rsi56 + 1;
        }
        *rdi53 = *rsi54;
        rdi57 = rdi53 + 1;
        rsi58 = rsi54 + 1;
        *rdi57 = *rsi58;
        rdi15 = rdi57 + 1;
        rsi16 = rsi58 + 1;
        ++v27;
    }
    v59 = reinterpret_cast<uint32_t>(fprintf);
    while (reinterpret_cast<int32_t>(v59) < reinterpret_cast<int32_t>(v9)) {
        v60 = reinterpret_cast<int32_t>(fprintf);
        while (v60 < v8) {
            *rdi15 = *rsi16;
            rdi61 = rdi15 + 1;
            rsi62 = rsi16 + 1;
            *rdi61 = *rsi62;
            rdi63 = rdi61 + 1;
            rsi64 = rsi62 + 1;
            __asm__("subsd xmm0, xmm1");
            *rdi63 = *rsi64;
            rdi65 = rdi63 + 1;
            rsi66 = rsi64 + 1;
            *rdi65 = *rsi66;
            rdi67 = rdi65 + 1;
            rsi68 = rsi66 + 1;
            fun_423();
            __asm__("movaps xmm1, xmm0");
            __asm__("mulsd xmm1, [rax+rcx*8]");
            *rdi67 = *rsi68;
            rdi69 = rdi67 + 1;
            rsi70 = rsi68 + 1;
            __asm__("divsd xmm0, xmm1");
            *rdi69 = *rsi70;
            rdi15 = rdi69 + 1;
            rsi16 = rsi70 + 1;
            ++v60;
        }
        ++v59;
    }
    v71 = reinterpret_cast<int32_t>(fprintf);
    while (v71 < v8 - 1) {
        *rdi15 = *rsi16;
        rdi72 = rdi15 + 1;
        rsi73 = rsi16 + 1;
        *rdi72 = *rsi73;
        rdi15 = rdi72 + 1;
        rsi16 = rsi73 + 1;
        v74 = v71 + 1;
        while (v74 < v8) {
            __asm__("xorps xmm0, xmm0");
            *rdi15 = *rsi16;
            rdi75 = rdi15 + 1;
            rsi76 = rsi16 + 1;
            v77 = reinterpret_cast<uint32_t>(fprintf);
            while (reinterpret_cast<int32_t>(v77) < reinterpret_cast<int32_t>(v9)) {
                *rdi75 = *rsi76;
                rdi78 = rdi75 + 1;
                rsi79 = rsi76 + 1;
                *rdi78 = *rsi79;
                rdi80 = rdi78 + 1;
                rsi81 = rsi79 + 1;
                *rdi80 = *rsi81;
                rdi82 = rdi80 + 1;
                rsi83 = rsi81 + 1;
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi82 = *rsi83;
                rdi75 = rdi82 + 1;
                rsi76 = rsi83 + 1;
                ++v77;
            }
            *rdi75 = *rsi76;
            rdi84 = rdi75 + 1;
            rsi85 = rsi76 + 1;
            *rdi84 = *rsi85;
            rdi15 = rdi84 + 1;
            rsi16 = rsi85 + 1;
            ++v74;
        }
        ++v71;
    }
    *rdi15 = *rsi16;
    rdi15[1] = rsi16[1];
    return v12 + (v8 - 1) * 0x2580;
}

void print_array(int32_t edi, int64_t rsi);

void fun_d7(int64_t rdi, int64_t rsi);

void fun_e0(int64_t rdi, int64_t rsi);

void fun_e9(int64_t rdi, int64_t rsi);

void fun_f2(int64_t rdi, int64_t rsi);

void fun_b9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
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
        print_array(edi9, rsi);
    }
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 40);
    fun_d7(rdi12, rsi);
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
    fun_e0(rdi14, rsi);
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 56);
    fun_e9(rdi16, rsi);
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 64);
    fun_f2(rdi18, rsi);
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

void print_array(int32_t edi, int64_t rsi) {
    int32_t v3;
    int64_t* rax4;
    int64_t rdi5;
    int64_t* rax6;
    int64_t rdi7;
    int32_t* rsi8;
    int32_t v9;
    int32_t v10;
    int64_t* rax11;
    int64_t rdi12;
    int32_t** rax13;
    int32_t* rdi14;
    int64_t rcx15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t* rax18;
    int64_t rdi19;

    v3 = edi;
    rax4 = g606;
    rdi5 = *rax4;
    fun_617(rdi5, 0x610);
    rax6 = g61e;
    rdi7 = *rax6;
    rsi8 = reinterpret_cast<int32_t*>(0x628);
    fun_636(rdi7);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 < v3) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v9 * v3 + v10) % 20 == fprintf)) {
                rax11 = g67e;
                rdi12 = *rax11;
                rsi8 = reinterpret_cast<int32_t*>(0x688);
                fun_68f(rdi12);
            }
            rax13 = g696;
            rdi14 = *rax13;
            rcx15 = v10;
            *rdi14 = *rsi8;
            rsi8 = reinterpret_cast<int32_t*>(0x6bb);
            fun_6c2(rdi14 + 1);
            ++v10;
        }
        ++v9;
    }
    rax16 = g6ea;
    rdi17 = *rax16;
    fun_702(rdi17, 0x6f4, 0x6fb, rcx15);
    rax18 = g709;
    rdi19 = *rax18;
    fun_71a(rdi19, 0x713, 0x6fb, rcx15);
    return;
}

void fun_355() {
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
        fun_355();
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
            fun_423();
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

void fun_423() {
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
                goto addr_478_12;
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
        fun_423();
    }
    addr_478_12:
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

void fun_d7(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t v9;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 48);
    fun_e0(rdi3, rsi);
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 56);
    fun_e9(rdi5, rsi);
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 64);
    fun_f2(rdi7, rsi);
    goto v9;
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

void fun_e0(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t v7;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 56);
    fun_e9(rdi3, rsi);
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 64);
    fun_f2(rdi5, rsi);
    goto v7;
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

void fun_e9(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t v5;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 64);
    fun_f2(rdi3, rsi);
    goto v5;
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

void fun_f2(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_71a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fprintf() {
}

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

void fun_68(struct s0* rdi, struct s1* rsi) {
    int64_t rcx3;
    int64_t rbp4;
    int64_t rbp5;
    struct s14* rdi6;
    int64_t rbp7;
    struct s15* rsi8;
    int64_t rbp9;
    int64_t rdx10;
    int64_t rbp11;
    int64_t rcx12;
    int64_t rbp13;
    int64_t r8_14;
    int64_t rbp15;
    int64_t r9_16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;

    __asm__("ror byte [rbx+0x758be87d], 0xec");
    rcx3 = *reinterpret_cast<int64_t*>(rbp4 - 40);
    init_array(rdi, rsi, rbp5 - 32, rcx3);
    *reinterpret_cast<int32_t*>(&rdi6) = *reinterpret_cast<int32_t*>(rbp7 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi8) = *reinterpret_cast<int32_t*>(rbp9 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi6->f0 = rsi8->f0;
    rdx10 = *reinterpret_cast<int64_t*>(rbp11 - 40);
    rcx12 = *reinterpret_cast<int64_t*>(rbp13 - 48);
    r8_14 = *reinterpret_cast<int64_t*>(rbp15 - 56);
    r9_16 = *reinterpret_cast<int64_t*>(rbp17 - 64);
    kernel_correlation(&rdi6->f4, &rsi8->f4, rdx10, rcx12, r8_14, r9_16, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp18 - 4) <= 42) 
        goto 0xce;
    rdi19 = **reinterpret_cast<int64_t**>(rbp20 - 16);
    fun_b9(rdi19, 0xb4, rdx10, rcx12, r8_14, r9_16, __return_address());
}

