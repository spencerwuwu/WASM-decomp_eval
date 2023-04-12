
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

int32_t** g2e4 = reinterpret_cast<int32_t**>(0x8244c8948088b48);

void fun_302(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_31e();

void fun_368();

void fun_339();

void fun_386(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_3a0();

void fun_3f8();

void fun_3c9();

void fun_417(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_430(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_2ac(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_2b4(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_2bc(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_2c4(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_2cc(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_226(struct s0* rdi) {
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
    int32_t eax21;
    int64_t rbp22;
    int32_t* rsi23;
    int32_t* rdi24;
    int32_t eax25;
    int64_t rbx26;
    int64_t r14_27;
    int64_t r15_28;
    int64_t r12_29;
    int64_t r13_30;
    int64_t v31;

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
        rax16 = g2e4;
        v17 = *rax16;
        fun_302(0x2f3, 22, 1);
        rsi18 = reinterpret_cast<int32_t*>(0x309);
        *reinterpret_cast<int32_t*>(&rbp19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp19) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi20 = v17;
        fun_31e();
        do {
            eax21 = *reinterpret_cast<int32_t*>(&rbp19) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax21)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi20) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi18 = v17;
                fun_368();
            }
            *rdi20 = *rsi18;
            rdi20 = v17;
            rsi18 = reinterpret_cast<int32_t*>(0x332);
            fun_339();
            ++rbp19;
        } while (rbp19 != 0x76c);
        *reinterpret_cast<int32_t*>(&rbp22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp22) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_386(v17, 0x371, 0x378);
        rsi23 = reinterpret_cast<int32_t*>(0x38d);
        rdi24 = v17;
        fun_3a0();
        do {
            eax25 = *reinterpret_cast<int32_t*>(&rbp22) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax25)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi24) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi23 = v17;
                fun_3f8();
            }
            *rdi24 = *rsi23;
            rdi24 = v17;
            rsi23 = reinterpret_cast<int32_t*>(0x3c2);
            fun_3c9();
            ++rbp22;
        } while (rbp22 != 0x834);
        fun_417(v17, 0x401, 0x408);
        *reinterpret_cast<int32_t*>(&rsi5) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx8 = v17;
        fun_430(0x41e, 22, 1, rcx8);
    }
    fun_2ac(rbx26, rsi5, 1, rcx8);
    fun_2b4(r14_27, rsi5, 1, rcx8);
    fun_2bc(r15_28, rsi5, 1, rcx8);
    fun_2c4(r12_29, rsi5, 1, rcx8);
    fun_2cc(r13_30, rsi5, 1, rcx8);
    goto v31;
}

void fun_2ac(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    fun_2b4(r14_5, rsi, rdx, rcx);
    fun_2bc(r15_6, rsi, rdx, rcx);
    fun_2c4(r12_7, rsi, rdx, rcx);
    fun_2cc(r13_8, rsi, rdx, rcx);
    goto v9;
}

void fun_339() {
    int64_t rbp1;
    int32_t eax2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* v5;
    int32_t* v6;
    int64_t rbp7;
    int32_t* v8;
    int32_t* rsi9;
    int32_t* rdi10;
    int32_t* v11;
    int32_t eax12;
    int32_t* v13;
    int32_t* v14;
    int32_t* v15;
    int64_t rbx16;
    int64_t r14_17;
    int64_t r15_18;
    int64_t r12_19;
    int64_t r13_20;
    int64_t v21;

    while (++rbp1, rbp1 != 0x76c) {
        eax2 = *reinterpret_cast<int32_t*>(&rbp1) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v5;
            fun_368();
        }
        *rdi3 = *rsi4;
        rdi3 = v6;
        rsi4 = reinterpret_cast<int32_t*>(0x332);
        fun_339();
    }
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_386(v8, 0x371, 0x378);
    rsi9 = reinterpret_cast<int32_t*>(0x38d);
    rdi10 = v11;
    fun_3a0();
    do {
        eax12 = *reinterpret_cast<int32_t*>(&rbp7) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax12)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi10) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi9 = v13;
            fun_3f8();
        }
        *rdi10 = *rsi9;
        rdi10 = v14;
        rsi9 = reinterpret_cast<int32_t*>(0x3c2);
        fun_3c9();
        ++rbp7;
    } while (rbp7 != 0x834);
    fun_417(v15, 0x401, 0x408);
    fun_430(0x41e, 22, 1, v15);
    fun_2ac(rbx16, 22, 1, v15);
    fun_2b4(r14_17, 22, 1, v15);
    fun_2bc(r15_18, 22, 1, v15);
    fun_2c4(r12_19, 22, 1, v15);
    fun_2cc(r13_20, 22, 1, v15);
    goto v21;
}

void fun_368() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t rbp4;
    int32_t eax5;
    int32_t* v6;
    int64_t rbp7;
    int32_t* v8;
    int32_t* rsi9;
    int32_t* rdi10;
    int32_t* v11;
    int32_t eax12;
    int32_t* v13;
    int32_t* v14;
    int32_t* v15;
    int64_t rbx16;
    int64_t r14_17;
    int64_t r15_18;
    int64_t r12_19;
    int64_t r13_20;
    int64_t v21;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = v3;
            rsi2 = reinterpret_cast<int32_t*>(0x332);
            fun_339();
            ++rbp4;
            if (rbp4 == 0x76c) 
                goto addr_36a_7;
            eax5 = *reinterpret_cast<int32_t*>(&rbp4) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v6;
        fun_368();
    }
    addr_36a_7:
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_386(v8, 0x371, 0x378);
    rsi9 = reinterpret_cast<int32_t*>(0x38d);
    rdi10 = v11;
    fun_3a0();
    do {
        eax12 = *reinterpret_cast<int32_t*>(&rbp7) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax12)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi10) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi9 = v13;
            fun_3f8();
        }
        *rdi10 = *rsi9;
        rdi10 = v14;
        rsi9 = reinterpret_cast<int32_t*>(0x3c2);
        fun_3c9();
        ++rbp7;
    } while (rbp7 != 0x834);
    fun_417(v15, 0x401, 0x408);
    fun_430(0x41e, 22, 1, v15);
    fun_2ac(rbx16, 22, 1, v15);
    fun_2b4(r14_17, 22, 1, v15);
    fun_2bc(r15_18, 22, 1, v15);
    fun_2c4(r12_19, 22, 1, v15);
    fun_2cc(r13_20, 22, 1, v15);
    goto v21;
}

void fun_3c9() {
    int64_t rbp1;
    int32_t eax2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* v5;
    int32_t* v6;
    int32_t* v7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    while (++rbp1, rbp1 != 0x834) {
        eax2 = *reinterpret_cast<int32_t*>(&rbp1) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v5;
            fun_3f8();
        }
        *rdi3 = *rsi4;
        rdi3 = v6;
        rsi4 = reinterpret_cast<int32_t*>(0x3c2);
        fun_3c9();
    }
    fun_417(v7, 0x401, 0x408);
    fun_430(0x41e, 22, 1, v7);
    fun_2ac(rbx8, 22, 1, v7);
    fun_2b4(r14_9, 22, 1, v7);
    fun_2bc(r15_10, 22, 1, v7);
    fun_2c4(r12_11, 22, 1, v7);
    fun_2cc(r13_12, 22, 1, v7);
    goto v13;
}

void fun_3f8() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t rbp4;
    int32_t eax5;
    int32_t* v6;
    int32_t* v7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = v3;
            rsi2 = reinterpret_cast<int32_t*>(0x3c2);
            fun_3c9();
            ++rbp4;
            if (rbp4 == 0x834) 
                goto addr_3fa_7;
            eax5 = *reinterpret_cast<int32_t*>(&rbp4) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v6;
        fun_3f8();
    }
    addr_3fa_7:
    fun_417(v7, 0x401, 0x408);
    fun_430(0x41e, 22, 1, v7);
    fun_2ac(rbx8, 22, 1, v7);
    fun_2b4(r14_9, 22, 1, v7);
    fun_2bc(r15_10, 22, 1, v7);
    fun_2c4(r12_11, 22, 1, v7);
    fun_2cc(r13_12, 22, 1, v7);
    goto v13;
}

void fun_302(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* rsi4;
    int64_t rbp5;
    int32_t* rdi6;
    int32_t* v7;
    int32_t eax8;
    int32_t* v9;
    int32_t* v10;
    int64_t rbp11;
    int32_t* v12;
    int32_t* rsi13;
    int32_t* rdi14;
    int32_t* v15;
    int32_t eax16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int64_t rbx20;
    int64_t r14_21;
    int64_t r15_22;
    int64_t r12_23;
    int64_t r13_24;
    int64_t v25;

    rsi4 = reinterpret_cast<int32_t*>(0x309);
    *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi6 = v7;
    fun_31e();
    do {
        eax8 = *reinterpret_cast<int32_t*>(&rbp5) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax8)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v9;
            fun_368();
        }
        *rdi6 = *rsi4;
        rdi6 = v10;
        rsi4 = reinterpret_cast<int32_t*>(0x332);
        fun_339();
        ++rbp5;
    } while (rbp5 != 0x76c);
    *reinterpret_cast<int32_t*>(&rbp11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp11) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_386(v12, 0x371, 0x378);
    rsi13 = reinterpret_cast<int32_t*>(0x38d);
    rdi14 = v15;
    fun_3a0();
    do {
        eax16 = *reinterpret_cast<int32_t*>(&rbp11) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax16)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi14) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi13 = v17;
            fun_3f8();
        }
        *rdi14 = *rsi13;
        rdi14 = v18;
        rsi13 = reinterpret_cast<int32_t*>(0x3c2);
        fun_3c9();
        ++rbp11;
    } while (rbp11 != 0x834);
    fun_417(v19, 0x401, 0x408);
    fun_430(0x41e, 22, 1, v19);
    fun_2ac(rbx20, 22, 1, v19);
    fun_2b4(r14_21, 22, 1, v19);
    fun_2bc(r15_22, 22, 1, v19);
    fun_2c4(r12_23, 22, 1, v19);
    fun_2cc(r13_24, 22, 1, v19);
    goto v25;
}

void fun_2b4(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t v8;

    fun_2bc(r15_5, rsi, rdx, rcx);
    fun_2c4(r12_6, rsi, rdx, rcx);
    fun_2cc(r13_7, rsi, rdx, rcx);
    goto v8;
}

void fun_31e() {
    int32_t eax1;
    int64_t rbp2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* v5;
    int32_t* v6;
    int64_t rbp7;
    int32_t* v8;
    int32_t* rsi9;
    int32_t* rdi10;
    int32_t* v11;
    int32_t eax12;
    int32_t* v13;
    int32_t* v14;
    int32_t* v15;
    int64_t rbx16;
    int64_t r14_17;
    int64_t r15_18;
    int64_t r12_19;
    int64_t r13_20;
    int64_t v21;

    do {
        eax1 = *reinterpret_cast<int32_t*>(&rbp2) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax1)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v5;
            fun_368();
        }
        *rdi3 = *rsi4;
        rdi3 = v6;
        rsi4 = reinterpret_cast<int32_t*>(0x332);
        fun_339();
        ++rbp2;
    } while (rbp2 != 0x76c);
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_386(v8, 0x371, 0x378);
    rsi9 = reinterpret_cast<int32_t*>(0x38d);
    rdi10 = v11;
    fun_3a0();
    do {
        eax12 = *reinterpret_cast<int32_t*>(&rbp7) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax12)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi10) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi9 = v13;
            fun_3f8();
        }
        *rdi10 = *rsi9;
        rdi10 = v14;
        rsi9 = reinterpret_cast<int32_t*>(0x3c2);
        fun_3c9();
        ++rbp7;
    } while (rbp7 != 0x834);
    fun_417(v15, 0x401, 0x408);
    fun_430(0x41e, 22, 1, v15);
    fun_2ac(rbx16, 22, 1, v15);
    fun_2b4(r14_17, 22, 1, v15);
    fun_2bc(r15_18, 22, 1, v15);
    fun_2c4(r12_19, 22, 1, v15);
    fun_2cc(r13_20, 22, 1, v15);
    goto v21;
}

void fun_2bc(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t v7;

    fun_2c4(r12_5, rsi, rdx, rcx);
    fun_2cc(r13_6, rsi, rdx, rcx);
    goto v7;
}

void fun_386(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rsi4;
    int32_t* rdi5;
    int32_t* v6;
    int32_t eax7;
    int64_t rbp8;
    int32_t* v9;
    int32_t* v10;
    int32_t* v11;
    int64_t rbx12;
    int64_t r14_13;
    int64_t r15_14;
    int64_t r12_15;
    int64_t r13_16;
    int64_t v17;

    rsi4 = reinterpret_cast<int32_t*>(0x38d);
    rdi5 = v6;
    fun_3a0();
    do {
        eax7 = *reinterpret_cast<int32_t*>(&rbp8) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax7)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v9;
            fun_3f8();
        }
        *rdi5 = *rsi4;
        rdi5 = v10;
        rsi4 = reinterpret_cast<int32_t*>(0x3c2);
        fun_3c9();
        ++rbp8;
    } while (rbp8 != 0x834);
    fun_417(v11, 0x401, 0x408);
    fun_430(0x41e, 22, 1, v11);
    fun_2ac(rbx12, 22, 1, v11);
    fun_2b4(r14_13, 22, 1, v11);
    fun_2bc(r15_14, 22, 1, v11);
    fun_2c4(r12_15, 22, 1, v11);
    fun_2cc(r13_16, 22, 1, v11);
    goto v17;
}

void fun_417(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rbp4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_430(0x41e, 22, 1, rbp4);
    fun_2ac(rbx5, 22, 1, rbp4);
    fun_2b4(r14_6, 22, 1, rbp4);
    fun_2bc(r15_7, 22, 1, rbp4);
    fun_2c4(r12_8, 22, 1, rbp4);
    fun_2cc(r13_9, 22, 1, rbp4);
    goto v10;
}

void fun_2c4(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int64_t v6;

    fun_2cc(r13_5, rsi, rdx, rcx);
    goto v6;
}

void fun_3a0() {
    int32_t eax1;
    int64_t rbp2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* v5;
    int32_t* v6;
    int32_t* v7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    do {
        eax1 = *reinterpret_cast<int32_t*>(&rbp2) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax1)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v5;
            fun_3f8();
        }
        *rdi3 = *rsi4;
        rdi3 = v6;
        rsi4 = reinterpret_cast<int32_t*>(0x3c2);
        fun_3c9();
        ++rbp2;
    } while (rbp2 != 0x834);
    fun_417(v7, 0x401, 0x408);
    fun_430(0x41e, 22, 1, v7);
    fun_2ac(rbx8, 22, 1, v7);
    fun_2b4(r14_9, 22, 1, v7);
    fun_2bc(r15_10, 22, 1, v7);
    fun_2c4(r12_11, 22, 1, v7);
    fun_2cc(r13_12, 22, 1, v7);
    goto v13;
}

void fun_430(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_2ac(rbx5, rsi, rdx, rcx);
    fun_2b4(r14_6, rsi, rdx, rcx);
    fun_2bc(r15_7, rsi, rdx, rcx);
    fun_2c4(r12_8, rsi, rdx, rcx);
    fun_2cc(r13_9, rsi, rdx, rcx);
    goto v10;
}

void fun_2cc(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_7c() {
    __asm__("movaps xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
}

void fun_e0() {
}

void fun_f5() {
    int32_t* rdi1;
    int32_t* rsi2;
    int64_t rcx3;
    int64_t rax4;
    struct s0* r14_5;

    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("xorps xmm7, xmm7");
        __asm__("cvtsi2sd xmm7, eax");
        __asm__("divsd xmm7, xmm0");
        *rdi1 = *rsi2;
        ++rdi1;
        ++rsi2;
        __asm__("movd xmm7, rax");
        __asm__("pshufd xmm7, xmm7, 0x44");
        *reinterpret_cast<int32_t*>(&rcx3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("movdqa xmm9, xmm8");
            __asm__("psubq xmm9, xmm2");
            __asm__("movdqa xmm10, xmm7");
            __asm__("psrlq xmm10, 0x20");
            __asm__("movdqa xmm11, xmm9");
            __asm__("psrlq xmm11, 0x20");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pmuludq xmm11, xmm7");
            __asm__("paddq xmm11, xmm10");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("psllq xmm11, 0x20");
            __asm__("paddq xmm9, xmm11");
            __asm__("pshufd xmm10, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm9, 0xee");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("psrld xmm9, 0xb");
            __asm__("pshufd xmm11, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("psubd xmm10, xmm9");
            __asm__("cvtdq2pd xmm9, xmm10");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rdx+rcx*8], xmm9");
            rcx3 = rcx3 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rcx3 != 0x76c);
        ++rax4;
    } while (rax4 != 0x834);
    fun_226(r14_5);
}

