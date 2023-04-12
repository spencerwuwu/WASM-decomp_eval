
void fun_228(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_230(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_238(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_240(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_220(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    fun_228(r14_5, rsi, rdx, rcx);
    fun_230(r15_6, rsi, rdx, rcx);
    fun_238(r12_7, rsi, rdx, rcx);
    fun_240(r13_8, rsi, rdx, rcx);
    goto v9;
}

void fputc(int32_t edi, int64_t rsi);

void fun_2e2();

void fun_2ff(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_318();

void fun_362();

void fun_338();

void fun_380(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_399(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_2b8() {
    int32_t* v1;
    int64_t rbp2;
    int32_t* rdi3;
    int32_t* rsi4;
    int64_t rbp5;
    int32_t* rsi6;
    int32_t* rdi7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    while (v1 = reinterpret_cast<int32_t*>(__return_address()), ++rbp2, rbp2 != 0x7d0) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp2) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v1;
            fun_2e2();
        }
        *rdi3 = *rsi4;
        rdi3 = v1;
        rsi4 = reinterpret_cast<int32_t*>(0x2b1);
        fun_2b8();
    }
    *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_2ff(v1, 0x2eb, 0x2f2);
    rsi6 = reinterpret_cast<int32_t*>(0x306);
    rdi7 = v1;
    fun_318();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp5) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v1;
            fun_362();
        }
        *rdi7 = *rsi6;
        rdi7 = v1;
        rsi6 = reinterpret_cast<int32_t*>(0x331);
        fun_338();
        ++rbp5;
    } while (rbp5 != 0x7d0);
    fun_380(v1, 0x36b, 0x372);
    fun_399(0x387, 22, 1, v1);
    fun_220(rbx8, 22, 1, v1);
    fun_228(r14_9, 22, 1, v1);
    fun_230(r15_10, 22, 1, v1);
    fun_238(r12_11, 22, 1, v1);
    fun_240(r13_12, 22, 1, v1);
    goto v13;
}

void fun_2e2() {
    int32_t* v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int64_t rbp4;
    int64_t rbp5;
    int32_t* rsi6;
    int32_t* rdi7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<int32_t*>(0x2b1);
            fun_2b8();
            ++rbp4;
            if (rbp4 == 0x7d0) 
                goto addr_2e4_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp4) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_2e2();
    }
    addr_2e4_7:
    *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_2ff(v1, 0x2eb, 0x2f2);
    rsi6 = reinterpret_cast<int32_t*>(0x306);
    rdi7 = v1;
    fun_318();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp5) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v1;
            fun_362();
        }
        *rdi7 = *rsi6;
        rdi7 = v1;
        rsi6 = reinterpret_cast<int32_t*>(0x331);
        fun_338();
        ++rbp5;
    } while (rbp5 != 0x7d0);
    fun_380(v1, 0x36b, 0x372);
    fun_399(0x387, 22, 1, v1);
    fun_220(rbx8, 22, 1, v1);
    fun_228(r14_9, 22, 1, v1);
    fun_230(r15_10, 22, 1, v1);
    fun_238(r12_11, 22, 1, v1);
    fun_240(r13_12, 22, 1, v1);
    goto v13;
}

void fun_338() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int64_t rbx4;
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    while (++rbp1, rbp1 != 0x7d0) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = reinterpret_cast<int32_t*>(__return_address());
            fun_362();
        }
        *rdi2 = *rsi3;
        rdi2 = reinterpret_cast<int32_t*>(__return_address());
        rsi3 = reinterpret_cast<int32_t*>(0x331);
        fun_338();
    }
    fun_380(__return_address(), 0x36b, 0x372);
    fun_399(0x387, 22, 1, __return_address());
    fun_220(rbx4, 22, 1, __return_address());
    fun_228(r14_5, 22, 1, __return_address());
    fun_230(r15_6, 22, 1, __return_address());
    fun_238(r12_7, 22, 1, __return_address());
    fun_240(r13_8, 22, 1, __return_address());
    goto v9;
}

void fun_362() {
    int32_t* v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int64_t rbp4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<int32_t*>(0x331);
            fun_338();
            ++rbp4;
            if (rbp4 == 0x7d0) 
                goto addr_364_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp4) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_362();
    }
    addr_364_7:
    fun_380(v1, 0x36b, 0x372);
    fun_399(0x387, 22, 1, v1);
    fun_220(rbx5, 22, 1, v1);
    fun_228(r14_6, 22, 1, v1);
    fun_230(r15_7, 22, 1, v1);
    fun_238(r12_8, 22, 1, v1);
    fun_240(r13_9, 22, 1, v1);
    goto v10;
}

void fun_290();

void fun_275(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* v4;
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* rdi7;
    int64_t rbp8;
    int32_t* rsi9;
    int32_t* rdi10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r12_14;
    int64_t r13_15;
    int64_t v16;

    v4 = reinterpret_cast<int32_t*>(__return_address());
    rsi5 = reinterpret_cast<int32_t*>(0x27c);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = v4;
    fun_290();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_2e2();
        }
        *rdi7 = *rsi5;
        rdi7 = v4;
        rsi5 = reinterpret_cast<int32_t*>(0x2b1);
        fun_2b8();
        ++rbp6;
    } while (rbp6 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_2ff(v4, 0x2eb, 0x2f2);
    rsi9 = reinterpret_cast<int32_t*>(0x306);
    rdi10 = v4;
    fun_318();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp8) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi10) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi9 = v4;
            fun_362();
        }
        *rdi10 = *rsi9;
        rdi10 = v4;
        rsi9 = reinterpret_cast<int32_t*>(0x331);
        fun_338();
        ++rbp8;
    } while (rbp8 != 0x7d0);
    fun_380(v4, 0x36b, 0x372);
    fun_399(0x387, 22, 1, v4);
    fun_220(rbx11, 22, 1, v4);
    fun_228(r14_12, 22, 1, v4);
    fun_230(r15_13, 22, 1, v4);
    fun_238(r12_14, 22, 1, v4);
    fun_240(r13_15, 22, 1, v4);
    goto v16;
}

void fun_228(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t v8;

    fun_230(r15_5, rsi, rdx, rcx);
    fun_238(r12_6, rsi, rdx, rcx);
    fun_240(r13_7, rsi, rdx, rcx);
    goto v8;
}

void fun_290() {
    int32_t* v1;
    int64_t rbp2;
    int32_t* rdi3;
    int32_t* rsi4;
    int64_t rbp5;
    int32_t* rsi6;
    int32_t* rdi7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp2) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v1;
            fun_2e2();
        }
        *rdi3 = *rsi4;
        rdi3 = v1;
        rsi4 = reinterpret_cast<int32_t*>(0x2b1);
        fun_2b8();
        ++rbp2;
    } while (rbp2 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_2ff(v1, 0x2eb, 0x2f2);
    rsi6 = reinterpret_cast<int32_t*>(0x306);
    rdi7 = v1;
    fun_318();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp5) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v1;
            fun_362();
        }
        *rdi7 = *rsi6;
        rdi7 = v1;
        rsi6 = reinterpret_cast<int32_t*>(0x331);
        fun_338();
        ++rbp5;
    } while (rbp5 != 0x7d0);
    fun_380(v1, 0x36b, 0x372);
    fun_399(0x387, 22, 1, v1);
    fun_220(rbx8, 22, 1, v1);
    fun_228(r14_9, 22, 1, v1);
    fun_230(r15_10, 22, 1, v1);
    fun_238(r12_11, 22, 1, v1);
    fun_240(r13_12, 22, 1, v1);
    goto v13;
}

void fun_230(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t v7;

    fun_238(r12_5, rsi, rdx, rcx);
    fun_240(r13_6, rsi, rdx, rcx);
    goto v7;
}

void fun_2ff(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* v4;
    int32_t* rsi5;
    int32_t* rdi6;
    int64_t rbp7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    v4 = reinterpret_cast<int32_t*>(__return_address());
    rsi5 = reinterpret_cast<int32_t*>(0x306);
    rdi6 = v4;
    fun_318();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp7) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_362();
        }
        *rdi6 = *rsi5;
        rdi6 = v4;
        rsi5 = reinterpret_cast<int32_t*>(0x331);
        fun_338();
        ++rbp7;
    } while (rbp7 != 0x7d0);
    fun_380(v4, 0x36b, 0x372);
    fun_399(0x387, 22, 1, v4);
    fun_220(rbx8, 22, 1, v4);
    fun_228(r14_9, 22, 1, v4);
    fun_230(r15_10, 22, 1, v4);
    fun_238(r12_11, 22, 1, v4);
    fun_240(r13_12, 22, 1, v4);
    goto v13;
}

void fun_380(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rbp4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_399(0x387, 22, 1, rbp4);
    fun_220(rbx5, 22, 1, rbp4);
    fun_228(r14_6, 22, 1, rbp4);
    fun_230(r15_7, 22, 1, rbp4);
    fun_238(r12_8, 22, 1, rbp4);
    fun_240(r13_9, 22, 1, rbp4);
    goto v10;
}

void fun_238(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int64_t v6;

    fun_240(r13_5, rsi, rdx, rcx);
    goto v6;
}

void fun_318() {
    int32_t* v1;
    int64_t rbp2;
    int32_t* rdi3;
    int32_t* rsi4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp2) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v1;
            fun_362();
        }
        *rdi3 = *rsi4;
        rdi3 = v1;
        rsi4 = reinterpret_cast<int32_t*>(0x331);
        fun_338();
        ++rbp2;
    } while (rbp2 != 0x7d0);
    fun_380(v1, 0x36b, 0x372);
    fun_399(0x387, 22, 1, v1);
    fun_220(rbx5, 22, 1, v1);
    fun_228(r14_6, 22, 1, v1);
    fun_230(r15_7, 22, 1, v1);
    fun_238(r12_8, 22, 1, v1);
    fun_240(r13_9, 22, 1, v1);
    goto v10;
}

void fun_399(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_220(rbx5, rsi, rdx, rcx);
    fun_228(r14_6, rsi, rdx, rcx);
    fun_230(r15_7, rsi, rdx, rcx);
    fun_238(r12_8, rsi, rdx, rcx);
    fun_240(r13_9, rsi, rdx, rcx);
    goto v10;
}

void fun_240(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_20();

void fun_19() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    fun_20();
}

void fun_e2() {
    int64_t rax1;
    int64_t rax2;
    signed char cl3;
    uint1_t cf4;

    *reinterpret_cast<unsigned char*>(rax1 - 63) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax2 - 63) + cl3) + cf4);
    __asm__("out dx, al");
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

struct s8 {
    int32_t f0;
    int32_t f1;
    int32_t f4;
};

void fun_e7(struct s0* rdi, int32_t esi, int64_t rdx, int64_t rcx) {
    signed char** v5;
    struct s1* rsi6;
    struct s2* rsi7;
    struct s3* rdi8;
    int32_t* rbx9;
    struct s4* rdi10;
    int64_t rcx11;
    int64_t rdx12;
    struct s5* rsi13;
    int64_t rax14;
    int32_t* rbx15;
    struct s6* rdi16;
    struct s7* rsi17;
    int64_t rax18;
    struct s6* rdi19;
    struct s8* rsi20;
    int32_t ebp21;

    v5 = reinterpret_cast<signed char**>(__return_address());
    *reinterpret_cast<int32_t*>(&rsi6) = -(esi * 0x7d0) + *reinterpret_cast<int32_t*>(&rcx) + 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorps xmm2, xmm2");
    __asm__("cvtsi2sd xmm2, esi");
    rdi->f0 = rsi6->f0;
    __asm__("divsd xmm2, xmm0");
    rdi->f4 = rsi6->f4;
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, edi");
        __asm__("divsd xmm1, xmm0");
        rdi8 = reinterpret_cast<struct s3*>(rbx9 + rcx * 0xfa0);
        rdi8->f0 = rsi7->f0;
        rdi10 = reinterpret_cast<struct s4*>(&rdi8->f4);
        rsi7 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(&rsi7->f4) + 1);
    } while (!reinterpret_cast<int1_t>(rsi7 == 0x7d0));
    if (rdx == 0x7d0) {
        *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi10->f0 = rsi7->f0;
            rdi10 = reinterpret_cast<struct s4*>(&rdi10->f4);
            *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rsi13 = reinterpret_cast<struct s5*>(rbx15 + rax14 * 0xfa0);
                rdi10->f0 = rsi13->f0;
                rdi16 = reinterpret_cast<struct s6*>(&rdi10->f4);
                rsi17 = reinterpret_cast<struct s7*>(&rsi13->f4);
                __asm__("mulsd xmm1, [r12+rdx*8]");
                __asm__("addsd xmm0, xmm1");
                rdi16->f0 = rsi17->f0;
                rdi10 = reinterpret_cast<struct s4*>(&rdi16->f4);
                rsi7 = reinterpret_cast<struct s2*>(&rsi17->f4);
                ++rdx12;
            } while (rdx12 != 0x7d0);
            ++rax14;
        } while (rax14 != 0x7d0);
        do {
            rdi10->f0 = rsi7->f0;
            rdi10 = reinterpret_cast<struct s4*>(&rdi10->f4);
            rsi7 = reinterpret_cast<struct s2*>(&rsi7->f4);
            *reinterpret_cast<int32_t*>(&rax18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi10->f0 = rsi7->f0;
                rdi19 = reinterpret_cast<struct s6*>(&rdi10->f4);
                rsi20 = reinterpret_cast<struct s8*>(&rsi7->f4);
                __asm__("mulsd xmm1, [r13+rax*8+0x0]");
                __asm__("addsd xmm0, xmm1");
                rdi19->f0 = rsi20->f0;
                rdi10 = reinterpret_cast<struct s4*>(&rdi19->f4);
                rsi7 = reinterpret_cast<struct s2*>(&rsi20->f1);
                ++rax18;
            } while (rax18 != 0x7d0);
            ++rcx11;
        } while (rcx11 != 0x7d0);
        if (ebp21 < 43) 
            goto 0x218;
        if (**v5 != fputc) 
            goto "???";
        fun_275(0x266, 22, 1);
    }
}

