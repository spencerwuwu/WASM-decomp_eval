
void fun_17a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_217();

void fputc(int32_t edi, int64_t rsi);

void fun_247(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_260(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_1fb() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r14_3;
    int32_t* r15_4;
    int64_t rbp5;
    int64_t r12_6;
    int64_t r13_7;
    int32_t* r14_8;
    int64_t r14_9;
    int64_t r14_10;
    int64_t rbx11;
    int64_t v12;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r14_3;
        rsi2 = r15_4;
        fun_217();
        ++rbp5;
        if (rbp5 == 0x7d0) {
            ++r12_6;
            if (r12_6 == 0x7d0) 
                break;
            r13_7 = r12_6 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp5 + r13_7) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r14_8;
        fun_1fb();
    }
    fun_247(r14_9, 0x236, 0x23d);
    fun_260(0x24e, 22, 1, r14_10);
    fun_17a(rbx11, 22, 1, r14_10);
    goto v12;
}

void fun_217() {
    int64_t rbp1;
    int64_t r12_2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r14_6;
    int32_t* r14_7;
    int32_t* r15_8;
    int64_t r14_9;
    int64_t r14_10;
    int64_t rbx11;
    int64_t v12;

    while (1) {
        ++rbp1;
        if (rbp1 == 0x7d0) {
            ++r12_2;
            if (r12_2 == 0x7d0) 
                break;
            r13_3 = r12_2 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r14_6;
            fun_1fb();
        }
        *rdi4 = *rsi5;
        rdi4 = r14_7;
        rsi5 = r15_8;
        fun_217();
    }
    fun_247(r14_9, 0x236, 0x23d);
    fun_260(0x24e, 22, 1, r14_10);
    fun_17a(rbx11, 22, 1, r14_10);
    goto v12;
}

void fun_247(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r14_4;
    int64_t rbx5;
    int64_t v6;

    fun_260(0x24e, 22, 1, r14_4);
    fun_17a(rbx5, 22, 1, r14_4);
    goto v6;
}

void fun_1c9();

void fun_1ae(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t r12_6;
    int32_t* rdi7;
    int32_t* r14_8;
    int64_t r13_9;
    int64_t rbp10;
    int32_t* r14_11;
    int32_t* r14_12;
    int64_t r14_13;
    int64_t r14_14;
    int64_t rbx15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x1b5);
    *reinterpret_cast<int32_t*>(&r12_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r14_8;
    fun_1c9();
    do {
        r13_9 = r12_6 * 0x7d0;
        *reinterpret_cast<int32_t*>(&rbp10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp10 + r13_9) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r14_11;
                fun_1fb();
            }
            *rdi7 = *rsi5;
            rdi7 = r14_12;
            rsi5 = reinterpret_cast<int32_t*>(0x1d0);
            fun_217();
            ++rbp10;
        } while (rbp10 != 0x7d0);
        ++r12_6;
    } while (r12_6 != 0x7d0);
    fun_247(r14_13, 0x236, 0x23d);
    fun_260(0x24e, 22, 1, r14_14);
    fun_17a(rbx15, 22, 1, r14_14);
    goto v16;
}

void fun_260(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t v6;

    fun_17a(rbx5, rsi, rdx, rcx);
    goto v6;
}

void fun_1c9() {
    int64_t r13_1;
    int64_t r12_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r14_6;
    int32_t* r14_7;
    int64_t r14_8;
    int64_t r14_9;
    int64_t rbx10;
    int64_t v11;

    do {
        r13_1 = r12_2 * 0x7d0;
        *reinterpret_cast<int32_t*>(&rbp3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp3 + r13_1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r14_6;
                fun_1fb();
            }
            *rdi4 = *rsi5;
            rdi4 = r14_7;
            rsi5 = reinterpret_cast<int32_t*>(0x1d0);
            fun_217();
            ++rbp3;
        } while (rbp3 != 0x7d0);
        ++r12_2;
    } while (r12_2 != 0x7d0);
    fun_247(r14_8, 0x236, 0x23d);
    fun_260(0x24e, 22, 1, r14_9);
    fun_17a(rbx10, 22, 1, r14_9);
    goto v11;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_80() {
    __asm__("iretd ");
}

struct s0 {
    int32_t f0;
    int32_t f1;
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

int64_t* g192 = reinterpret_cast<int64_t*>(0x3d8d48308b4c);

void fun_9a() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    struct s0* rdx7;
    struct s1* rdi8;
    struct s2* rsi9;
    struct s3* rdi10;
    struct s0* rsi11;
    int64_t r8_12;
    struct s4* rdi13;
    struct s5* rsi14;
    int64_t r9_15;
    int32_t eax16;
    int32_t ebp17;
    signed char** r14_18;
    int64_t* rax19;
    int64_t rcx20;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    do {
        *reinterpret_cast<int32_t*>(&rdx7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi8 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rdx7) - 1);
            rsi9 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rdx7) + 1);
            rdi8->f0 = rsi9->f0;
            rdi10 = reinterpret_cast<struct s3*>(&rdi8->f4);
            rsi11 = reinterpret_cast<struct s0*>(&rsi9->f4);
            *reinterpret_cast<int32_t*>(&r8_12) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi10->f0 = rsi11->f0;
                rdi13 = reinterpret_cast<struct s4*>(&rdi10->f4);
                rsi14 = reinterpret_cast<struct s5*>(&rsi11->f1);
                __asm__("addsd xmm2, [r9+r8*8]");
                __asm__("addsd xmm2, [r9+r8*8+0x8]");
                __asm__("addsd xmm2, xmm1");
                __asm__("addsd xmm2, [r9+r8*8]");
                __asm__("addsd xmm2, [r9+r8*8+0x8]");
                __asm__("addsd xmm2, [r10+r8*8-0x8]");
                __asm__("addsd xmm2, [r10+r8*8]");
                __asm__("addsd xmm2, [r10+r8*8+0x8]");
                __asm__("divsd xmm2, xmm0");
                rdi13->f0 = rsi14->f0;
                rdi10 = reinterpret_cast<struct s3*>(&rdi13->f4);
                rsi11 = reinterpret_cast<struct s0*>(&rsi14->f4);
                r9_15 = r8_12 + 1;
                __asm__("movapd xmm1, xmm2");
                r8_12 = r9_15;
            } while (r9_15 != 0x7cf);
            rdx7 = rsi11;
        } while (!reinterpret_cast<int1_t>(rsi11 == 0x7cf));
        ++eax16;
    } while (eax16 != 0x1f4);
    if (ebp17 < 43) 
        goto 0x172;
    if (**r14_18 != fputc) 
        goto "???";
    rax19 = g192;
    rcx20 = *rax19;
    fun_1ae(0x19c, 22, 1, rcx20);
}

