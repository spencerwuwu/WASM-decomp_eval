
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

void kernel_syrk(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx) {
    int32_t v5;
    int32_t v6;
    struct s2* rdi7;
    struct s3* rsi8;
    struct s4* rdi9;
    struct s5* rsi10;
    int32_t v11;
    int32_t v12;
    struct s6* rdi13;
    struct s7* rsi14;
    int32_t v15;
    int32_t v16;
    struct s6* rdi17;
    struct s7* rsi18;
    struct s4* rdi19;
    struct s5* rsi20;
    struct s6* rdi21;
    struct s7* rsi22;

    v5 = *reinterpret_cast<int32_t*>(&rdi);
    v6 = *reinterpret_cast<int32_t*>(&rsi);
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s3*>(&rsi->f4);
    rdi7->f0 = rsi8->f0;
    rdi9 = reinterpret_cast<struct s4*>(&rdi7->f4);
    rsi10 = reinterpret_cast<struct s5*>(&rsi8->f4);
    v11 = reinterpret_cast<int32_t>(fprintf);
    while (v11 < v5) {
        v12 = reinterpret_cast<int32_t>(fprintf);
        while (v12 <= v11) {
            rdi9->f0 = rsi10->f0;
            rdi13 = reinterpret_cast<struct s6*>(&rdi9->f4);
            rsi14 = reinterpret_cast<struct s7*>(&rsi10->f4);
            __asm__("mulsd xmm0, [rax+rcx*8]");
            rdi13->f0 = rsi14->f0;
            rdi9 = reinterpret_cast<struct s4*>(&rdi13->f4);
            rsi10 = reinterpret_cast<struct s5*>(&rsi14->f4);
            ++v12;
        }
        v15 = reinterpret_cast<int32_t>(fprintf);
        while (v15 < v6) {
            v16 = reinterpret_cast<int32_t>(fprintf);
            while (v16 <= v11) {
                rdi9->f0 = rsi10->f0;
                rdi17 = reinterpret_cast<struct s6*>(&rdi9->f4);
                rsi18 = reinterpret_cast<struct s7*>(&rsi10->f4);
                __asm__("mulsd xmm0, [rax+rcx*8]");
                rdi17->f0 = rsi18->f0;
                rdi19 = reinterpret_cast<struct s4*>(&rdi17->f4);
                rsi20 = reinterpret_cast<struct s5*>(&rsi18->f4);
                rdi19->f0 = rsi20->f0;
                rdi21 = reinterpret_cast<struct s6*>(&rdi19->f4);
                rsi22 = reinterpret_cast<struct s7*>(&rsi20->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi21->f0 = rsi22->f0;
                rdi9 = reinterpret_cast<struct s4*>(&rdi21->f4);
                rsi10 = reinterpret_cast<struct s5*>(&rsi22->f4);
                ++v16;
            }
            ++v15;
        }
        ++v11;
    }
    return;
}

void print_array(int32_t edi, int64_t rsi);

void fun_b6(int64_t rdi, int64_t rsi);

void fun_bf(int64_t rdi, int64_t rsi);

void fun_98(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t eax5;
    int32_t edi6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t v13;

    if (reinterpret_cast<int1_t>(eax5 == fprintf)) {
        edi6 = *reinterpret_cast<int32_t*>(rbp7 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp8 - 48);
        print_array(edi6, rsi);
    }
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 48);
    fun_b6(rdi9, rsi);
    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 56);
    fun_bf(rdi11, rsi);
    goto v13;
}

int64_t* g366 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_377(int64_t rdi, int64_t rsi);

int64_t* g37e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_396(int64_t rdi);

int64_t* g3de = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3ef(int64_t rdi);

int32_t** g3f6 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_422(int64_t rdi);

int64_t* g44a = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_462(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g469 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_47a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

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
    rax4 = g366;
    rdi5 = *rax4;
    fun_377(rdi5, 0x370);
    rax6 = g37e;
    rdi7 = *rax6;
    rsi8 = reinterpret_cast<int32_t*>(0x388);
    fun_396(rdi7);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 < v3) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v9 * v3 + v10) % 20 == fprintf)) {
                rax11 = g3de;
                rdi12 = *rax11;
                rsi8 = reinterpret_cast<int32_t*>(0x3e8);
                fun_3ef(rdi12);
            }
            rax13 = g3f6;
            rdi14 = *rax13;
            rcx15 = v10;
            *rdi14 = *rsi8;
            rsi8 = reinterpret_cast<int32_t*>(0x41b);
            fun_422(rdi14 + 1);
            ++v10;
        }
        ++v9;
    }
    rax16 = g44a;
    rdi17 = *rax16;
    fun_462(rdi17, 0x454, 0x45b, rcx15);
    rax18 = g469;
    rdi19 = *rax18;
    fun_47a(rdi19, 0x473, 0x45b, rcx15);
    return;
}

void fun_3ef(int64_t rdi) {
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
        rax2 = g3f6;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x41b);
        fun_422(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_443_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g3de;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x3e8);
        fun_3ef(rdi20);
    }
    addr_443_10:
    rax21 = g44a;
    rdi22 = *rax21;
    fun_462(rdi22, 0x454, 0x45b, rcx4);
    rax23 = g469;
    rdi24 = *rax23;
    fun_47a(rdi24, 0x473, 0x45b, rcx4);
    goto v25;
}

void fun_422(int64_t rdi) {
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
                goto addr_443_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g3de;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x3e8);
            fun_3ef(rdi15);
        }
        rax17 = g3f6;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x41b);
        fun_422(rdi18 + 1);
    }
    addr_443_6:
    rax21 = g44a;
    rdi22 = *rax21;
    fun_462(rdi22, 0x454, 0x45b, rcx19);
    rax23 = g469;
    rdi24 = *rax23;
    fun_47a(rdi24, 0x473, 0x45b, rcx19);
    goto v25;
}

void fun_b6(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t v5;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 56);
    fun_bf(rdi3, rsi);
    goto v5;
}

void fun_377(int64_t rdi, int64_t rsi) {
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

    rax3 = g37e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x388);
    fun_396(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g3de;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x3e8);
                fun_3ef(rdi16);
            }
            rax17 = g3f6;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x41b);
            fun_422(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g44a;
    rdi26 = *rax25;
    fun_462(rdi26, 0x454, 0x45b, rcx19);
    rax27 = g469;
    rdi28 = *rax27;
    fun_47a(rdi28, 0x473, 0x45b, rcx19);
    goto v29;
}

void fun_bf(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_396(int64_t rdi) {
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
                rax11 = g3de;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x3e8);
                fun_3ef(rdi12);
            }
            rax14 = g3f6;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x41b);
            fun_422(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g44a;
    rdi23 = *rax22;
    fun_462(rdi23, 0x454, 0x45b, rcx16);
    rax24 = g469;
    rdi25 = *rax24;
    fun_47a(rdi25, 0x473, 0x45b, rcx16);
    goto v26;
}

void fun_462(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g469;
    rdi6 = *rax5;
    fun_47a(rdi6, 0x473, rdx, rcx);
    goto v7;
}

void fun_47a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fprintf() {
}

void fun_68(struct s0* rdi, struct s1* rsi) {
    int64_t rcx3;
    int1_t zf4;
    int64_t rdx5;
    int64_t rbp6;
    int64_t rcx7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;

    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rcx3 - 1 == fprintf)) & reinterpret_cast<uint1_t>(!zf4))) {
        __asm__("movups xmm1, [rbp-0x28]");
        rdx5 = *reinterpret_cast<int64_t*>(rbp6 - 48);
        rcx7 = *reinterpret_cast<int64_t*>(rbp8 - 56);
        kernel_syrk(rdi, rsi, rdx5, rcx7);
        if (*reinterpret_cast<int32_t*>(rbp9 - 4) <= 42) 
            goto 0xad;
        rdi10 = **reinterpret_cast<int64_t**>(rbp11 - 16);
        fun_98(rdi10, 0x93, rdx5, rcx7);
    }
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

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s8* rdi, struct s9* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int32_t v7;
    int32_t v8;
    struct s10* rdi9;
    struct s11* rsi10;
    struct s12* rdi11;
    struct s13* rsi12;
    struct s14* rdi13;
    struct s15* rsi14;
    int32_t* rdi15;
    int32_t* rsi16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    int32_t v20;

    v7 = *reinterpret_cast<int32_t*>(&rdi);
    v8 = *reinterpret_cast<int32_t*>(&rsi);
    rdi->f0 = rsi->f0;
    rdi9 = reinterpret_cast<struct s10*>(&rdi->f4);
    rsi10 = reinterpret_cast<struct s11*>(&rsi->f4);
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s12*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s13*>(&rsi10->f4);
    rdi11->f0 = rsi12->f0;
    rdi13 = reinterpret_cast<struct s14*>(&rdi11->f4);
    rsi14 = reinterpret_cast<struct s15*>(&rsi12->f4);
    rdi13->f0 = rsi14->f0;
    rdi15 = &rdi13->f4;
    rsi16 = &rsi14->f4;
    v17 = reinterpret_cast<int32_t>(fprintf);
    while (v17 < v7) {
        v18 = reinterpret_cast<int32_t>(fprintf);
        while (v18 < v8) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            *rdi15 = *rsi16;
            ++rdi15;
            ++rsi16;
            ++v18;
        }
        ++v17;
    }
    v19 = reinterpret_cast<int32_t>(fprintf);
    while (v19 < v7) {
        v20 = reinterpret_cast<int32_t>(fprintf);
        while (v20 < v7) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            *rdi15 = *rsi16;
            ++rdi15;
            ++rsi16;
            ++v20;
        }
        ++v19;
    }
    return;
}

