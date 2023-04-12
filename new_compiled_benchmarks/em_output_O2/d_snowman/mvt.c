
void fun_300(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_308(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_310(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_318(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_2f8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    fun_300(r14_5, rsi, rdx, rcx);
    fun_308(r15_6, rsi, rdx, rcx);
    fun_310(r12_7, rsi, rdx, rcx);
    fun_318(r13_8, rsi, rdx, rcx);
    goto v9;
}

void fputc(int32_t edi, int64_t rsi);

void fun_3b6();

void fun_3d3(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_3ec();

void fun_436();

void fun_408();

void fun_454(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_46d(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_388() {
    int32_t* v1;
    int64_t rbp2;
    int32_t eax3;
    int32_t* rdi4;
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* rsi7;
    int32_t* rdi8;
    int32_t eax9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t r12_13;
    int64_t r13_14;
    int64_t v15;

    while (v1 = reinterpret_cast<int32_t*>(__return_address()), ++rbp2, rbp2 != 0x7d0) {
        eax3 = *reinterpret_cast<int32_t*>(&rbp2) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax3)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v1;
            fun_3b6();
        }
        *rdi4 = *rsi5;
        rdi4 = v1;
        rsi5 = reinterpret_cast<int32_t*>(0x381);
        fun_388();
    }
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_3d3(v1, 0x3bf, 0x3c6);
    rsi7 = reinterpret_cast<int32_t*>(0x3da);
    rdi8 = v1;
    fun_3ec();
    do {
        eax9 = *reinterpret_cast<int32_t*>(&rbp6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax9)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi8) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi7 = v1;
            fun_436();
        }
        *rdi8 = *rsi7;
        rdi8 = v1;
        rsi7 = reinterpret_cast<int32_t*>(0x401);
        fun_408();
        ++rbp6;
    } while (rbp6 != 0x7d0);
    fun_454(v1, 0x43f, 0x446);
    fun_46d(0x45b, 22, 1, v1);
    fun_2f8(rbx10, 22, 1, v1);
    fun_300(r14_11, 22, 1, v1);
    fun_308(r15_12, 22, 1, v1);
    fun_310(r12_13, 22, 1, v1);
    fun_318(r13_14, 22, 1, v1);
    goto v15;
}

void fun_3b6() {
    int32_t* v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int64_t rbp4;
    int32_t eax5;
    int64_t rbp6;
    int32_t* rsi7;
    int32_t* rdi8;
    int32_t eax9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t r12_13;
    int64_t r13_14;
    int64_t v15;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<int32_t*>(0x381);
            fun_388();
            ++rbp4;
            if (rbp4 == 0x7d0) 
                goto addr_3b8_7;
            eax5 = *reinterpret_cast<int32_t*>(&rbp4) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_3b6();
    }
    addr_3b8_7:
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_3d3(v1, 0x3bf, 0x3c6);
    rsi7 = reinterpret_cast<int32_t*>(0x3da);
    rdi8 = v1;
    fun_3ec();
    do {
        eax9 = *reinterpret_cast<int32_t*>(&rbp6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax9)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi8) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi7 = v1;
            fun_436();
        }
        *rdi8 = *rsi7;
        rdi8 = v1;
        rsi7 = reinterpret_cast<int32_t*>(0x401);
        fun_408();
        ++rbp6;
    } while (rbp6 != 0x7d0);
    fun_454(v1, 0x43f, 0x446);
    fun_46d(0x45b, 22, 1, v1);
    fun_2f8(rbx10, 22, 1, v1);
    fun_300(r14_11, 22, 1, v1);
    fun_308(r15_12, 22, 1, v1);
    fun_310(r12_13, 22, 1, v1);
    fun_318(r13_14, 22, 1, v1);
    goto v15;
}

void fun_408() {
    int64_t rbp1;
    int32_t eax2;
    int32_t* rdi3;
    int32_t* rsi4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    while (++rbp1, rbp1 != 0x7d0) {
        eax2 = *reinterpret_cast<int32_t*>(&rbp1) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = reinterpret_cast<int32_t*>(__return_address());
            fun_436();
        }
        *rdi3 = *rsi4;
        rdi3 = reinterpret_cast<int32_t*>(__return_address());
        rsi4 = reinterpret_cast<int32_t*>(0x401);
        fun_408();
    }
    fun_454(__return_address(), 0x43f, 0x446);
    fun_46d(0x45b, 22, 1, __return_address());
    fun_2f8(rbx5, 22, 1, __return_address());
    fun_300(r14_6, 22, 1, __return_address());
    fun_308(r15_7, 22, 1, __return_address());
    fun_310(r12_8, 22, 1, __return_address());
    fun_318(r13_9, 22, 1, __return_address());
    goto v10;
}

void fun_436() {
    int32_t* v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int64_t rbp4;
    int32_t eax5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t r12_9;
    int64_t r13_10;
    int64_t v11;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<int32_t*>(0x401);
            fun_408();
            ++rbp4;
            if (rbp4 == 0x7d0) 
                goto addr_438_7;
            eax5 = *reinterpret_cast<int32_t*>(&rbp4) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_436();
    }
    addr_438_7:
    fun_454(v1, 0x43f, 0x446);
    fun_46d(0x45b, 22, 1, v1);
    fun_2f8(rbx6, 22, 1, v1);
    fun_300(r14_7, 22, 1, v1);
    fun_308(r15_8, 22, 1, v1);
    fun_310(r12_9, 22, 1, v1);
    fun_318(r13_10, 22, 1, v1);
    goto v11;
}

void fun_368();

void fun_34d(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* v4;
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* rdi7;
    int32_t eax8;
    int64_t rbp9;
    int32_t* rsi10;
    int32_t* rdi11;
    int32_t eax12;
    int64_t rbx13;
    int64_t r14_14;
    int64_t r15_15;
    int64_t r12_16;
    int64_t r13_17;
    int64_t v18;

    v4 = reinterpret_cast<int32_t*>(__return_address());
    rsi5 = reinterpret_cast<int32_t*>(0x354);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = v4;
    fun_368();
    do {
        eax8 = *reinterpret_cast<int32_t*>(&rbp6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax8)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_3b6();
        }
        *rdi7 = *rsi5;
        rdi7 = v4;
        rsi5 = reinterpret_cast<int32_t*>(0x381);
        fun_388();
        ++rbp6;
    } while (rbp6 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_3d3(v4, 0x3bf, 0x3c6);
    rsi10 = reinterpret_cast<int32_t*>(0x3da);
    rdi11 = v4;
    fun_3ec();
    do {
        eax12 = *reinterpret_cast<int32_t*>(&rbp9) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax12)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi11) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi10 = v4;
            fun_436();
        }
        *rdi11 = *rsi10;
        rdi11 = v4;
        rsi10 = reinterpret_cast<int32_t*>(0x401);
        fun_408();
        ++rbp9;
    } while (rbp9 != 0x7d0);
    fun_454(v4, 0x43f, 0x446);
    fun_46d(0x45b, 22, 1, v4);
    fun_2f8(rbx13, 22, 1, v4);
    fun_300(r14_14, 22, 1, v4);
    fun_308(r15_15, 22, 1, v4);
    fun_310(r12_16, 22, 1, v4);
    fun_318(r13_17, 22, 1, v4);
    goto v18;
}

void fun_300(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t v8;

    fun_308(r15_5, rsi, rdx, rcx);
    fun_310(r12_6, rsi, rdx, rcx);
    fun_318(r13_7, rsi, rdx, rcx);
    goto v8;
}

void fun_368() {
    int32_t* v1;
    int32_t eax2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* rsi7;
    int32_t* rdi8;
    int32_t eax9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t r12_13;
    int64_t r13_14;
    int64_t v15;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    do {
        eax2 = *reinterpret_cast<int32_t*>(&rbp3) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v1;
            fun_3b6();
        }
        *rdi4 = *rsi5;
        rdi4 = v1;
        rsi5 = reinterpret_cast<int32_t*>(0x381);
        fun_388();
        ++rbp3;
    } while (rbp3 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_3d3(v1, 0x3bf, 0x3c6);
    rsi7 = reinterpret_cast<int32_t*>(0x3da);
    rdi8 = v1;
    fun_3ec();
    do {
        eax9 = *reinterpret_cast<int32_t*>(&rbp6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax9)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi8) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi7 = v1;
            fun_436();
        }
        *rdi8 = *rsi7;
        rdi8 = v1;
        rsi7 = reinterpret_cast<int32_t*>(0x401);
        fun_408();
        ++rbp6;
    } while (rbp6 != 0x7d0);
    fun_454(v1, 0x43f, 0x446);
    fun_46d(0x45b, 22, 1, v1);
    fun_2f8(rbx10, 22, 1, v1);
    fun_300(r14_11, 22, 1, v1);
    fun_308(r15_12, 22, 1, v1);
    fun_310(r12_13, 22, 1, v1);
    fun_318(r13_14, 22, 1, v1);
    goto v15;
}

void fun_308(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t v7;

    fun_310(r12_5, rsi, rdx, rcx);
    fun_318(r13_6, rsi, rdx, rcx);
    goto v7;
}

void fun_3d3(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* v4;
    int32_t* rsi5;
    int32_t* rdi6;
    int32_t eax7;
    int64_t rbp8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t r12_12;
    int64_t r13_13;
    int64_t v14;

    v4 = reinterpret_cast<int32_t*>(__return_address());
    rsi5 = reinterpret_cast<int32_t*>(0x3da);
    rdi6 = v4;
    fun_3ec();
    do {
        eax7 = *reinterpret_cast<int32_t*>(&rbp8) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax7)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_436();
        }
        *rdi6 = *rsi5;
        rdi6 = v4;
        rsi5 = reinterpret_cast<int32_t*>(0x401);
        fun_408();
        ++rbp8;
    } while (rbp8 != 0x7d0);
    fun_454(v4, 0x43f, 0x446);
    fun_46d(0x45b, 22, 1, v4);
    fun_2f8(rbx9, 22, 1, v4);
    fun_300(r14_10, 22, 1, v4);
    fun_308(r15_11, 22, 1, v4);
    fun_310(r12_12, 22, 1, v4);
    fun_318(r13_13, 22, 1, v4);
    goto v14;
}

void fun_454(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rbp4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_46d(0x45b, 22, 1, rbp4);
    fun_2f8(rbx5, 22, 1, rbp4);
    fun_300(r14_6, 22, 1, rbp4);
    fun_308(r15_7, 22, 1, rbp4);
    fun_310(r12_8, 22, 1, rbp4);
    fun_318(r13_9, 22, 1, rbp4);
    goto v10;
}

void fun_310(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int64_t v6;

    fun_318(r13_5, rsi, rdx, rcx);
    goto v6;
}

void fun_3ec() {
    int32_t* v1;
    int32_t eax2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t r12_9;
    int64_t r13_10;
    int64_t v11;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    do {
        eax2 = *reinterpret_cast<int32_t*>(&rbp3) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v1;
            fun_436();
        }
        *rdi4 = *rsi5;
        rdi4 = v1;
        rsi5 = reinterpret_cast<int32_t*>(0x401);
        fun_408();
        ++rbp3;
    } while (rbp3 != 0x7d0);
    fun_454(v1, 0x43f, 0x446);
    fun_46d(0x45b, 22, 1, v1);
    fun_2f8(rbx6, 22, 1, v1);
    fun_300(r14_7, 22, 1, v1);
    fun_308(r15_8, 22, 1, v1);
    fun_310(r12_9, 22, 1, v1);
    fun_318(r13_10, 22, 1, v1);
    goto v11;
}

void fun_46d(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_2f8(rbx5, rsi, rdx, rcx);
    fun_300(r14_6, rsi, rdx, rcx);
    fun_308(r15_7, rsi, rdx, rcx);
    fun_310(r12_8, rsi, rdx, rcx);
    fun_318(r13_9, rsi, rdx, rcx);
    goto v10;
}

void fun_318(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

/* .LCPI0_3 */
void LCPI0_3();

void fun_19() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    LCPI0_3();
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

void fun_e0(struct s0* rdi, struct s1* rsi, int64_t rdx, uint64_t rcx) {
    signed char** v5;
    int32_t* rsi6;
    int32_t* rdi7;
    struct s2* rsi8;
    struct s3* rdi9;
    int32_t* rbx10;
    int64_t rcx11;
    int64_t rdx12;
    struct s4* rsi13;
    int64_t rax14;
    int32_t* rbx15;
    struct s5* rdi16;
    int32_t* rdi17;
    struct s6* rsi18;
    struct s7* rsi19;
    struct s8* rdi20;
    struct s9* rdi21;
    struct s10* rsi22;
    uint64_t rax23;
    struct s11* rdi24;
    struct s12* rdi25;
    struct s13* rsi26;
    int32_t* rbx27;
    struct s14* rdi28;
    struct s15* rsi29;
    int32_t ebp30;

    v5 = reinterpret_cast<signed char**>(__return_address());
    __asm__("xorps xmm7, xmm7");
    __asm__("cvtsi2sd xmm7, edi");
    rdi->f0 = rsi->f0;
    __asm__("divsd xmm7, xmm0");
    rdi->f4 = rsi->f4;
    *reinterpret_cast<int32_t*>(&rsi6) = static_cast<int32_t>(rcx - 0x7cc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdi7) = static_cast<int32_t>(rcx + 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
    if (rcx >= 0x7cc) {
        *reinterpret_cast<int32_t*>(&rdi7) = *reinterpret_cast<int32_t*>(&rsi6);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
    }
    __asm__("xorps xmm6, xmm6");
    __asm__("cvtsi2sd xmm6, edi");
    __asm__("divsd xmm6, xmm0");
    *rdi7 = *rsi6;
    __asm__("movd xmm6, rcx");
    __asm__("pshufd xmm6, xmm6, 0x44");
    *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm7, xmm1");
    do {
        __asm__("movdqa xmm8, xmm7");
        __asm__("psrlq xmm8, 0x20");
        __asm__("pmuludq xmm8, xmm6");
        __asm__("movdqa xmm9, xmm6");
        __asm__("psrlq xmm9, 0x20");
        __asm__("pmuludq xmm9, xmm7");
        __asm__("paddq xmm9, xmm8");
        __asm__("movdqa xmm8, xmm7");
        __asm__("pmuludq xmm8, xmm6");
        __asm__("psllq xmm9, 0x20");
        __asm__("paddq xmm8, xmm9");
        __asm__("pshufd xmm9, xmm8, 0xe8");
        __asm__("pshufd xmm10, xmm8, 0xee");
        __asm__("pmuludq xmm8, xmm2");
        __asm__("pshufd xmm8, xmm8, 0xed");
        __asm__("pmuludq xmm10, xmm2");
        __asm__("pshufd xmm10, xmm10, 0xed");
        __asm__("punpckldq xmm8, xmm10");
        __asm__("psrld xmm8, 0x7");
        __asm__("pshufd xmm10, xmm8, 0xf5");
        __asm__("pmuludq xmm8, xmm3");
        __asm__("pmuludq xmm10, xmm3");
        __asm__("punpckldq xmm8, xmm10");
        __asm__("psubd xmm9, xmm8");
        __asm__("cvtdq2pd xmm8, xmm9");
        __asm__("divpd xmm8, xmm4");
        rdi9 = reinterpret_cast<struct s3*>(rbx10 + rcx * 0xfa0);
        __asm__("movupd [rdi+rsi*8], xmm8");
        rsi8 = reinterpret_cast<struct s2*>(reinterpret_cast<uint64_t>(rsi8) + 2);
        __asm__("paddq xmm7, xmm5");
    } while (!reinterpret_cast<int1_t>(rsi8 == 0x7d0));
    if (rdx == 0x7d0) {
        *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi9->f0 = rsi8->f0;
            *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rsi13 = reinterpret_cast<struct s4*>(rbx15 + rax14 * 0xfa0);
                rdi16 = reinterpret_cast<struct s5*>(rdx12 * 8);
                rdi16->f0 = rsi13->f0;
                rdi17 = &rdi16->f4;
                rsi18 = reinterpret_cast<struct s6*>(&rsi13->f4);
                __asm__("mulsd xmm1, [r12+rdx*8]");
                __asm__("addsd xmm1, xmm0");
                *rdi17 = rsi18->f0;
                rsi19 = reinterpret_cast<struct s7*>(&rsi18->f4);
                rdi20 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rdi17 + 1) | 8);
                rdi20->f0 = rsi19->f0;
                rdi21 = reinterpret_cast<struct s9*>(&rdi20->f4);
                rsi22 = reinterpret_cast<struct s10*>(&rsi19->f4);
                __asm__("mulsd xmm0, [r12+rdi]");
                __asm__("addsd xmm0, xmm1");
                rdi21->f0 = rsi22->f0;
                rdi9 = reinterpret_cast<struct s3*>(&rdi21->f4);
                rsi8 = reinterpret_cast<struct s2*>(&rsi22->f4);
                rdx12 = rdx12 + 2;
            } while (rdx12 != 0x7d0);
            ++rax14;
        } while (rax14 != 0x7d0);
        do {
            rdi9->f0 = rsi8->f0;
            rdi9 = reinterpret_cast<struct s3*>(&rdi9->f4);
            rsi8 = reinterpret_cast<struct s2*>(&rsi8->f4);
            *reinterpret_cast<int32_t*>(&rax23) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi9->f0 = rsi8->f0;
                rdi24 = reinterpret_cast<struct s11*>(&rdi9->f4);
                __asm__("mulsd xmm1, [r13+rax*8+0x0]");
                __asm__("addsd xmm1, xmm0");
                rdi24->f0 = rsi8->f4;
                rdi25 = reinterpret_cast<struct s12*>(&rdi24->f4);
                rsi26 = reinterpret_cast<struct s13*>(rbx27 + (rax23 | 1) * 0xfa0);
                rdi25->f0 = rsi26->f0;
                rdi28 = reinterpret_cast<struct s14*>(&rdi25->f4);
                rsi29 = reinterpret_cast<struct s15*>(&rsi26->f4);
                __asm__("mulsd xmm0, [r13+rdx*8+0x0]");
                __asm__("addsd xmm0, xmm1");
                rdi28->f0 = rsi29->f0;
                rdi9 = reinterpret_cast<struct s3*>(&rdi28->f4);
                rsi8 = reinterpret_cast<struct s2*>(&rsi29->f4);
                rax23 = rax23 + 2;
            } while (rax23 != 0x7d0);
            ++rcx11;
        } while (rcx11 != 0x7d0);
        if (ebp30 < 43) 
            goto 0x2f0;
        if (**v5 != fputc) 
            goto "???";
        fun_34d(0x33e, 22, 1);
    }
}

