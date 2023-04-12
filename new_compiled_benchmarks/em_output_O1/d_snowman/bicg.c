
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fputc(int32_t edi, int64_t rsi);

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

int32_t** g1e4 = reinterpret_cast<int32_t**>(0x8244c8948088b48);

void fun_202(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_21e();

void fun_264();

void fun_239();

void fun_282(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_29c();

void fun_2e4();

void fun_2b9();

void fun_303(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_31c(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_1ac(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_1b4(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_1bc(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_1c4(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_1cc(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_130(struct s0* rdi) {
    int64_t* r15_2;
    int64_t rbp3;
    int64_t rax4;
    struct s1* rsi5;
    struct s2* rdi6;
    struct s3* rsi7;
    int32_t* rcx8;
    int32_t* rbx9;
    struct s4* rdi10;
    struct s5* rsi11;
    struct s6* rdi12;
    struct s7* rsi13;
    int32_t v14;
    signed char** v15;
    int32_t** rax16;
    int32_t* v17;
    int32_t* rsi18;
    int64_t rbp19;
    int32_t* rdi20;
    int64_t rbp21;
    int32_t* rsi22;
    int32_t* rdi23;
    int64_t rbx24;
    int64_t r14_25;
    int64_t r15_26;
    int64_t r12_27;
    int64_t r13_28;
    int64_t v29;

    do {
        r15_2[rbp3] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rax4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi->f0 = rsi5->f0;
            rdi6 = reinterpret_cast<struct s2*>(&rdi->f4);
            rsi7 = reinterpret_cast<struct s3*>(&rsi5->f4);
            rcx8 = rbx9 + rbp3 * 0xed8;
            __asm__("mulsd xmm0, [rcx+rax*8]");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi6->f0 = rsi7->f0;
            rdi10 = reinterpret_cast<struct s4*>(&rdi6->f4);
            rsi11 = reinterpret_cast<struct s5*>(&rsi7->f4);
            rdi10->f0 = rsi11->f0;
            rdi12 = reinterpret_cast<struct s6*>(&rdi10->f4);
            rsi13 = reinterpret_cast<struct s7*>(&rsi11->f4);
            __asm__("mulsd xmm0, [r12+rax*8]");
            __asm__("addsd xmm0, [r15+rbp*8]");
            rdi12->f0 = rsi13->f0;
            rdi = reinterpret_cast<struct s0*>(&rdi12->f4);
            rsi5 = reinterpret_cast<struct s1*>(&rsi13->f4);
            ++rax4;
        } while (rax4 != 0x76c);
        ++rbp3;
    } while (rbp3 != 0x834);
    if (v14 >= 43 && **v15 == fputc) {
        rax16 = g1e4;
        v17 = *rax16;
        fun_202(0x1f3, 22, 1);
        rsi18 = reinterpret_cast<int32_t*>(0x209);
        *reinterpret_cast<int32_t*>(&rbp19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp19) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi20 = v17;
        fun_21e();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp19) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi20) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi18 = v17;
                fun_264();
            }
            *rdi20 = *rsi18;
            rdi20 = v17;
            rsi18 = reinterpret_cast<int32_t*>(0x232);
            fun_239();
            ++rbp19;
        } while (rbp19 != 0x76c);
        *reinterpret_cast<int32_t*>(&rbp21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp21) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_282(v17, 0x26d, 0x274);
        rsi22 = reinterpret_cast<int32_t*>(0x289);
        rdi23 = v17;
        fun_29c();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp21) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi23) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi22 = v17;
                fun_2e4();
            }
            *rdi23 = *rsi22;
            rdi23 = v17;
            rsi22 = reinterpret_cast<int32_t*>(0x2b2);
            fun_2b9();
            ++rbp21;
        } while (rbp21 != 0x834);
        fun_303(v17, 0x2ed, 0x2f4);
        *reinterpret_cast<int32_t*>(&rsi5) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx8 = v17;
        fun_31c(0x30a, 22, 1, rcx8);
    }
    fun_1ac(rbx24, rsi5, 1, rcx8);
    fun_1b4(r14_25, rsi5, 1, rcx8);
    fun_1bc(r15_26, rsi5, 1, rcx8);
    fun_1c4(r12_27, rsi5, 1, rcx8);
    fun_1cc(r13_28, rsi5, 1, rcx8);
    goto v29;
}

void fun_1ac(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    fun_1b4(r14_5, rsi, rdx, rcx);
    fun_1bc(r15_6, rsi, rdx, rcx);
    fun_1c4(r12_7, rsi, rdx, rcx);
    fun_1cc(r13_8, rsi, rdx, rcx);
    goto v9;
}

void fun_239() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* v4;
    int32_t* v5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* rsi8;
    int32_t* rdi9;
    int32_t* v10;
    int32_t* v11;
    int32_t* v12;
    int32_t* v13;
    int64_t rbx14;
    int64_t r14_15;
    int64_t r15_16;
    int64_t r12_17;
    int64_t r13_18;
    int64_t v19;

    while (++rbp1, rbp1 != 0x76c) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = v4;
            fun_264();
        }
        *rdi2 = *rsi3;
        rdi2 = v5;
        rsi3 = reinterpret_cast<int32_t*>(0x232);
        fun_239();
    }
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_282(v7, 0x26d, 0x274);
    rsi8 = reinterpret_cast<int32_t*>(0x289);
    rdi9 = v10;
    fun_29c();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi9) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi8 = v11;
            fun_2e4();
        }
        *rdi9 = *rsi8;
        rdi9 = v12;
        rsi8 = reinterpret_cast<int32_t*>(0x2b2);
        fun_2b9();
        ++rbp6;
    } while (rbp6 != 0x834);
    fun_303(v13, 0x2ed, 0x2f4);
    fun_31c(0x30a, 22, 1, v13);
    fun_1ac(rbx14, 22, 1, v13);
    fun_1b4(r14_15, 22, 1, v13);
    fun_1bc(r15_16, 22, 1, v13);
    fun_1c4(r12_17, 22, 1, v13);
    fun_1cc(r13_18, 22, 1, v13);
    goto v19;
}

void fun_264() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t rbp4;
    int32_t* v5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* rsi8;
    int32_t* rdi9;
    int32_t* v10;
    int32_t* v11;
    int32_t* v12;
    int32_t* v13;
    int64_t rbx14;
    int64_t r14_15;
    int64_t r15_16;
    int64_t r12_17;
    int64_t r13_18;
    int64_t v19;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = v3;
            rsi2 = reinterpret_cast<int32_t*>(0x232);
            fun_239();
            ++rbp4;
            if (rbp4 == 0x76c) 
                goto addr_266_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp4) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v5;
        fun_264();
    }
    addr_266_7:
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_282(v7, 0x26d, 0x274);
    rsi8 = reinterpret_cast<int32_t*>(0x289);
    rdi9 = v10;
    fun_29c();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi9) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi8 = v11;
            fun_2e4();
        }
        *rdi9 = *rsi8;
        rdi9 = v12;
        rsi8 = reinterpret_cast<int32_t*>(0x2b2);
        fun_2b9();
        ++rbp6;
    } while (rbp6 != 0x834);
    fun_303(v13, 0x2ed, 0x2f4);
    fun_31c(0x30a, 22, 1, v13);
    fun_1ac(rbx14, 22, 1, v13);
    fun_1b4(r14_15, 22, 1, v13);
    fun_1bc(r15_16, 22, 1, v13);
    fun_1c4(r12_17, 22, 1, v13);
    fun_1cc(r13_18, 22, 1, v13);
    goto v19;
}

void fun_2b9() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* v4;
    int32_t* v5;
    int32_t* v6;
    int64_t rbx7;
    int64_t r14_8;
    int64_t r15_9;
    int64_t r12_10;
    int64_t r13_11;
    int64_t v12;

    while (++rbp1, rbp1 != 0x834) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = v4;
            fun_2e4();
        }
        *rdi2 = *rsi3;
        rdi2 = v5;
        rsi3 = reinterpret_cast<int32_t*>(0x2b2);
        fun_2b9();
    }
    fun_303(v6, 0x2ed, 0x2f4);
    fun_31c(0x30a, 22, 1, v6);
    fun_1ac(rbx7, 22, 1, v6);
    fun_1b4(r14_8, 22, 1, v6);
    fun_1bc(r15_9, 22, 1, v6);
    fun_1c4(r12_10, 22, 1, v6);
    fun_1cc(r13_11, 22, 1, v6);
    goto v12;
}

void fun_2e4() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t rbp4;
    int32_t* v5;
    int32_t* v6;
    int64_t rbx7;
    int64_t r14_8;
    int64_t r15_9;
    int64_t r12_10;
    int64_t r13_11;
    int64_t v12;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = v3;
            rsi2 = reinterpret_cast<int32_t*>(0x2b2);
            fun_2b9();
            ++rbp4;
            if (rbp4 == 0x834) 
                goto addr_2e6_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp4) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v5;
        fun_2e4();
    }
    addr_2e6_7:
    fun_303(v6, 0x2ed, 0x2f4);
    fun_31c(0x30a, 22, 1, v6);
    fun_1ac(rbx7, 22, 1, v6);
    fun_1b4(r14_8, 22, 1, v6);
    fun_1bc(r15_9, 22, 1, v6);
    fun_1c4(r12_10, 22, 1, v6);
    fun_1cc(r13_11, 22, 1, v6);
    goto v12;
}

void fun_202(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* rsi4;
    int64_t rbp5;
    int32_t* rdi6;
    int32_t* v7;
    int32_t* v8;
    int32_t* v9;
    int64_t rbp10;
    int32_t* v11;
    int32_t* rsi12;
    int32_t* rdi13;
    int32_t* v14;
    int32_t* v15;
    int32_t* v16;
    int32_t* v17;
    int64_t rbx18;
    int64_t r14_19;
    int64_t r15_20;
    int64_t r12_21;
    int64_t r13_22;
    int64_t v23;

    rsi4 = reinterpret_cast<int32_t*>(0x209);
    *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi6 = v7;
    fun_21e();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp5) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v8;
            fun_264();
        }
        *rdi6 = *rsi4;
        rdi6 = v9;
        rsi4 = reinterpret_cast<int32_t*>(0x232);
        fun_239();
        ++rbp5;
    } while (rbp5 != 0x76c);
    *reinterpret_cast<int32_t*>(&rbp10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp10) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_282(v11, 0x26d, 0x274);
    rsi12 = reinterpret_cast<int32_t*>(0x289);
    rdi13 = v14;
    fun_29c();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp10) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi13) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi12 = v15;
            fun_2e4();
        }
        *rdi13 = *rsi12;
        rdi13 = v16;
        rsi12 = reinterpret_cast<int32_t*>(0x2b2);
        fun_2b9();
        ++rbp10;
    } while (rbp10 != 0x834);
    fun_303(v17, 0x2ed, 0x2f4);
    fun_31c(0x30a, 22, 1, v17);
    fun_1ac(rbx18, 22, 1, v17);
    fun_1b4(r14_19, 22, 1, v17);
    fun_1bc(r15_20, 22, 1, v17);
    fun_1c4(r12_21, 22, 1, v17);
    fun_1cc(r13_22, 22, 1, v17);
    goto v23;
}

void fun_1b4(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t v8;

    fun_1bc(r15_5, rsi, rdx, rcx);
    fun_1c4(r12_6, rsi, rdx, rcx);
    fun_1cc(r13_7, rsi, rdx, rcx);
    goto v8;
}

void fun_21e() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* v4;
    int32_t* v5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* rsi8;
    int32_t* rdi9;
    int32_t* v10;
    int32_t* v11;
    int32_t* v12;
    int32_t* v13;
    int64_t rbx14;
    int64_t r14_15;
    int64_t r15_16;
    int64_t r12_17;
    int64_t r13_18;
    int64_t v19;

    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = v4;
            fun_264();
        }
        *rdi2 = *rsi3;
        rdi2 = v5;
        rsi3 = reinterpret_cast<int32_t*>(0x232);
        fun_239();
        ++rbp1;
    } while (rbp1 != 0x76c);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_282(v7, 0x26d, 0x274);
    rsi8 = reinterpret_cast<int32_t*>(0x289);
    rdi9 = v10;
    fun_29c();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi9) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi8 = v11;
            fun_2e4();
        }
        *rdi9 = *rsi8;
        rdi9 = v12;
        rsi8 = reinterpret_cast<int32_t*>(0x2b2);
        fun_2b9();
        ++rbp6;
    } while (rbp6 != 0x834);
    fun_303(v13, 0x2ed, 0x2f4);
    fun_31c(0x30a, 22, 1, v13);
    fun_1ac(rbx14, 22, 1, v13);
    fun_1b4(r14_15, 22, 1, v13);
    fun_1bc(r15_16, 22, 1, v13);
    fun_1c4(r12_17, 22, 1, v13);
    fun_1cc(r13_18, 22, 1, v13);
    goto v19;
}

void fun_1bc(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t v7;

    fun_1c4(r12_5, rsi, rdx, rcx);
    fun_1cc(r13_6, rsi, rdx, rcx);
    goto v7;
}

void fun_282(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rsi4;
    int32_t* rdi5;
    int32_t* v6;
    int64_t rbp7;
    int32_t* v8;
    int32_t* v9;
    int32_t* v10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r12_14;
    int64_t r13_15;
    int64_t v16;

    rsi4 = reinterpret_cast<int32_t*>(0x289);
    rdi5 = v6;
    fun_29c();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp7) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v8;
            fun_2e4();
        }
        *rdi5 = *rsi4;
        rdi5 = v9;
        rsi4 = reinterpret_cast<int32_t*>(0x2b2);
        fun_2b9();
        ++rbp7;
    } while (rbp7 != 0x834);
    fun_303(v10, 0x2ed, 0x2f4);
    fun_31c(0x30a, 22, 1, v10);
    fun_1ac(rbx11, 22, 1, v10);
    fun_1b4(r14_12, 22, 1, v10);
    fun_1bc(r15_13, 22, 1, v10);
    fun_1c4(r12_14, 22, 1, v10);
    fun_1cc(r13_15, 22, 1, v10);
    goto v16;
}

void fun_303(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rbp4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_31c(0x30a, 22, 1, rbp4);
    fun_1ac(rbx5, 22, 1, rbp4);
    fun_1b4(r14_6, 22, 1, rbp4);
    fun_1bc(r15_7, 22, 1, rbp4);
    fun_1c4(r12_8, 22, 1, rbp4);
    fun_1cc(r13_9, 22, 1, rbp4);
    goto v10;
}

void fun_1c4(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int64_t v6;

    fun_1cc(r13_5, rsi, rdx, rcx);
    goto v6;
}

void fun_29c() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* v4;
    int32_t* v5;
    int32_t* v6;
    int64_t rbx7;
    int64_t r14_8;
    int64_t r15_9;
    int64_t r12_10;
    int64_t r13_11;
    int64_t v12;

    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = v4;
            fun_2e4();
        }
        *rdi2 = *rsi3;
        rdi2 = v5;
        rsi3 = reinterpret_cast<int32_t*>(0x2b2);
        fun_2b9();
        ++rbp1;
    } while (rbp1 != 0x834);
    fun_303(v6, 0x2ed, 0x2f4);
    fun_31c(0x30a, 22, 1, v6);
    fun_1ac(rbx7, 22, 1, v6);
    fun_1b4(r14_8, 22, 1, v6);
    fun_1bc(r15_9, 22, 1, v6);
    fun_1c4(r12_10, 22, 1, v6);
    fun_1cc(r13_11, 22, 1, v6);
    goto v12;
}

void fun_31c(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_1ac(rbx5, rsi, rdx, rcx);
    fun_1b4(r14_6, rsi, rdx, rcx);
    fun_1bc(r15_7, rsi, rdx, rcx);
    fun_1c4(r12_8, rsi, rdx, rcx);
    fun_1cc(r13_9, rsi, rdx, rcx);
    goto v10;
}

void fun_1cc(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_7c() {
}

void fun_e0(int32_t edi, int32_t* rsi) {
    int64_t rax3;
    int32_t* rbx4;
    int64_t rax5;
    struct s0* r14_6;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, edi");
    __asm__("divsd xmm1, xmm0");
    rbx4[rax3 * 0xed8] = *rsi;
    if (reinterpret_cast<int1_t>(rsi + 1 == 0x76c)) {
        if (rax5 + 1 == 0x834) {
            fun_130(r14_6);
        }
    }
}

