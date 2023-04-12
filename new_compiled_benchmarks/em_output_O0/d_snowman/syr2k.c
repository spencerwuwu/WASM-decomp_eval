
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

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

void fprintf();

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    int32_t v9;
    struct s2* rdi10;
    struct s3* rsi11;
    struct s4* rdi12;
    struct s5* rsi13;
    struct s6* rdi14;
    struct s7* rsi15;
    struct s8* rdi16;
    struct s9* rsi17;
    int32_t v18;
    int32_t v19;
    struct s10* rdi20;
    struct s11* rsi21;
    int32_t v22;
    int32_t v23;

    v8 = *reinterpret_cast<int32_t*>(&rdi);
    v9 = *reinterpret_cast<int32_t*>(&rsi);
    rdi->f0 = rsi->f0;
    rdi10 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi11 = reinterpret_cast<struct s3*>(&rsi->f4);
    rdi10->f0 = rsi11->f0;
    rdi12 = reinterpret_cast<struct s4*>(&rdi10->f4);
    rsi13 = reinterpret_cast<struct s5*>(&rsi11->f4);
    rdi12->f0 = rsi13->f0;
    rdi14 = reinterpret_cast<struct s6*>(&rdi12->f4);
    rsi15 = reinterpret_cast<struct s7*>(&rsi13->f4);
    rdi14->f0 = rsi15->f0;
    rdi16 = reinterpret_cast<struct s8*>(&rdi14->f4);
    rsi17 = reinterpret_cast<struct s9*>(&rsi15->f4);
    v18 = reinterpret_cast<int32_t>(fprintf);
    while (v18 < v8) {
        v19 = reinterpret_cast<int32_t>(fprintf);
        while (v19 < v9) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi16->f0 = rsi17->f0;
            rdi20 = reinterpret_cast<struct s10*>(&rdi16->f4);
            rsi21 = reinterpret_cast<struct s11*>(&rsi17->f4);
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            rdi20->f0 = rsi21->f0;
            rdi16 = reinterpret_cast<struct s8*>(&rdi20->f4);
            rsi17 = reinterpret_cast<struct s9*>(&rsi21->f4);
            ++v19;
        }
        ++v18;
    }
    v22 = reinterpret_cast<int32_t>(fprintf);
    while (v22 < v8) {
        v23 = reinterpret_cast<int32_t>(fprintf);
        while (v23 < v8) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            rdi16->f0 = rsi17->f0;
            rdi16 = reinterpret_cast<struct s8*>(&rdi16->f4);
            rsi17 = reinterpret_cast<struct s9*>(&rsi17->f4);
            ++v23;
        }
        ++v22;
    }
    return;
}

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

void kernel_syr2k(struct s12* rdi, struct s13* rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t v6;
    int32_t v7;
    struct s14* rdi8;
    struct s15* rsi9;
    struct s16* rdi10;
    struct s17* rsi11;
    int32_t v12;
    int32_t v13;
    struct s18* rdi14;
    struct s19* rsi15;
    int32_t v16;
    int32_t v17;
    struct s18* rdi18;
    struct s19* rsi19;
    struct s16* rdi20;
    struct s17* rsi21;
    struct s18* rdi22;
    struct s19* rsi23;

    v6 = *reinterpret_cast<int32_t*>(&rdi);
    v7 = *reinterpret_cast<int32_t*>(&rsi);
    rdi->f0 = rsi->f0;
    rdi8 = reinterpret_cast<struct s14*>(&rdi->f4);
    rsi9 = reinterpret_cast<struct s15*>(&rsi->f4);
    rdi8->f0 = rsi9->f0;
    rdi10 = reinterpret_cast<struct s16*>(&rdi8->f4);
    rsi11 = reinterpret_cast<struct s17*>(&rsi9->f4);
    v12 = reinterpret_cast<int32_t>(fprintf);
    while (v12 < v6) {
        v13 = reinterpret_cast<int32_t>(fprintf);
        while (v13 <= v12) {
            rdi10->f0 = rsi11->f0;
            rdi14 = reinterpret_cast<struct s18*>(&rdi10->f4);
            rsi15 = reinterpret_cast<struct s19*>(&rsi11->f4);
            __asm__("mulsd xmm0, [rax+rcx*8]");
            rdi14->f0 = rsi15->f0;
            rdi10 = reinterpret_cast<struct s16*>(&rdi14->f4);
            rsi11 = reinterpret_cast<struct s17*>(&rsi15->f4);
            ++v13;
        }
        v16 = reinterpret_cast<int32_t>(fprintf);
        while (v16 < v7) {
            v17 = reinterpret_cast<int32_t>(fprintf);
            while (v17 <= v12) {
                rdi10->f0 = rsi11->f0;
                rdi18 = reinterpret_cast<struct s18*>(&rdi10->f4);
                rsi19 = reinterpret_cast<struct s19*>(&rsi11->f4);
                __asm__("mulsd xmm0, [rbp-0x10]");
                rdi18->f0 = rsi19->f0;
                rdi20 = reinterpret_cast<struct s16*>(&rdi18->f4);
                rsi21 = reinterpret_cast<struct s17*>(&rsi19->f4);
                rdi20->f0 = rsi21->f0;
                rdi22 = reinterpret_cast<struct s18*>(&rdi20->f4);
                rsi23 = reinterpret_cast<struct s19*>(&rsi21->f4);
                __asm__("mulsd xmm1, [rbp-0x10]");
                __asm__("mulsd xmm1, [rax+rcx*8]");
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                __asm__("addsd xmm0, [rax+rcx*8]");
                rdi22->f0 = rsi23->f0;
                rdi10 = reinterpret_cast<struct s16*>(&rdi22->f4);
                rsi11 = reinterpret_cast<struct s17*>(&rsi23->f4);
                ++v17;
            }
            ++v16;
        }
        ++v12;
    }
    return;
}

void print_array(int32_t edi, int64_t rsi);

void fun_d5(int64_t rdi, int64_t rsi);

void fun_de(int64_t rdi, int64_t rsi);

void fun_e7(int64_t rdi, int64_t rsi);

void fun_b7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
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
    int64_t v16;

    if (reinterpret_cast<int1_t>(eax6 == fprintf)) {
        edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp9 - 48);
        print_array(edi7, rsi);
    }
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 48);
    fun_d5(rdi10, rsi);
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 56);
    fun_de(rdi12, rsi);
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 64);
    fun_e7(rdi14, rsi);
    goto v16;
}

int64_t* g3f6 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_407(int64_t rdi, int64_t rsi);

int64_t* g40e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_426(int64_t rdi);

int64_t* g46e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_47f(int64_t rdi);

int32_t** g486 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_4b2(int64_t rdi);

int64_t* g4da = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_4f2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g4f9 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_50a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

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
    rax4 = g3f6;
    rdi5 = *rax4;
    fun_407(rdi5, 0x400);
    rax6 = g40e;
    rdi7 = *rax6;
    rsi8 = reinterpret_cast<int32_t*>(0x418);
    fun_426(rdi7);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 < v3) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v9 * v3 + v10) % 20 == fprintf)) {
                rax11 = g46e;
                rdi12 = *rax11;
                rsi8 = reinterpret_cast<int32_t*>(0x478);
                fun_47f(rdi12);
            }
            rax13 = g486;
            rdi14 = *rax13;
            rcx15 = v10;
            *rdi14 = *rsi8;
            rsi8 = reinterpret_cast<int32_t*>(0x4ab);
            fun_4b2(rdi14 + 1);
            ++v10;
        }
        ++v9;
    }
    rax16 = g4da;
    rdi17 = *rax16;
    fun_4f2(rdi17, 0x4e4, 0x4eb, rcx15);
    rax18 = g4f9;
    rdi19 = *rax18;
    fun_50a(rdi19, 0x503, 0x4eb, rcx15);
    return;
}

void fun_47f(int64_t rdi) {
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
        rax2 = g486;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x4ab);
        fun_4b2(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_4d3_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g46e;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x478);
        fun_47f(rdi20);
    }
    addr_4d3_10:
    rax21 = g4da;
    rdi22 = *rax21;
    fun_4f2(rdi22, 0x4e4, 0x4eb, rcx4);
    rax23 = g4f9;
    rdi24 = *rax23;
    fun_50a(rdi24, 0x503, 0x4eb, rcx4);
    goto v25;
}

void fun_4b2(int64_t rdi) {
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
                goto addr_4d3_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g46e;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x478);
            fun_47f(rdi15);
        }
        rax17 = g486;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x4ab);
        fun_4b2(rdi18 + 1);
    }
    addr_4d3_6:
    rax21 = g4da;
    rdi22 = *rax21;
    fun_4f2(rdi22, 0x4e4, 0x4eb, rcx19);
    rax23 = g4f9;
    rdi24 = *rax23;
    fun_50a(rdi24, 0x503, 0x4eb, rcx19);
    goto v25;
}

void fun_d5(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t v7;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 56);
    fun_de(rdi3, rsi);
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 64);
    fun_e7(rdi5, rsi);
    goto v7;
}

void fun_407(int64_t rdi, int64_t rsi) {
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

    rax3 = g40e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x418);
    fun_426(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g46e;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x478);
                fun_47f(rdi16);
            }
            rax17 = g486;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x4ab);
            fun_4b2(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g4da;
    rdi26 = *rax25;
    fun_4f2(rdi26, 0x4e4, 0x4eb, rcx19);
    rax27 = g4f9;
    rdi28 = *rax27;
    fun_50a(rdi28, 0x503, 0x4eb, rcx19);
    goto v29;
}

void fun_de(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t v5;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 64);
    fun_e7(rdi3, rsi);
    goto v5;
}

void fun_426(int64_t rdi) {
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
                rax11 = g46e;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x478);
                fun_47f(rdi12);
            }
            rax14 = g486;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x4ab);
            fun_4b2(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g4da;
    rdi23 = *rax22;
    fun_4f2(rdi23, 0x4e4, 0x4eb, rcx16);
    rax24 = g4f9;
    rdi25 = *rax24;
    fun_50a(rdi25, 0x503, 0x4eb, rcx16);
    goto v26;
}

void fun_e7(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_4f2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g4f9;
    rdi6 = *rax5;
    fun_50a(rdi6, 0x503, rdx, rcx);
    goto v7;
}

void fun_50a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fprintf() {
}

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

void fun_68(struct s0* rdi, struct s1* rsi) {
    int64_t rbp3;
    int64_t rbp4;
    int64_t r8_5;
    int64_t r9_6;
    int64_t rax7;
    struct s20* rdi8;
    int64_t rbp9;
    struct s21* rsi10;
    int64_t rbp11;
    struct s22* rdi12;
    struct s23* rsi13;
    int64_t rdx14;
    int64_t rbp15;
    int64_t rcx16;
    int64_t rbp17;
    int64_t r8_18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;

    init_array(rdi, rsi, rbp3 - 32, rbp4 - 40, r8_5, r9_6, rax7);
    *reinterpret_cast<int32_t*>(&rdi8) = *reinterpret_cast<int32_t*>(rbp9 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi10) = *reinterpret_cast<int32_t*>(rbp11 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi8->f0 = rsi10->f0;
    rdi12 = reinterpret_cast<struct s22*>(&rdi8->f4);
    rsi13 = reinterpret_cast<struct s23*>(&rsi10->f4);
    rdi12->f0 = rsi13->f0;
    rdx14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
    rcx16 = *reinterpret_cast<int64_t*>(rbp17 - 56);
    r8_18 = *reinterpret_cast<int64_t*>(rbp19 - 64);
    kernel_syr2k(&rdi12->f4, &rsi13->f4, rdx14, rcx16, r8_18);
    if (*reinterpret_cast<int32_t*>(rbp20 - 4) <= 42) 
        goto 0xcc;
    rdi21 = **reinterpret_cast<int64_t**>(rbp22 - 16);
    fun_b7(rdi21, 0xb2, rdx14, rcx16, r8_18);
}

