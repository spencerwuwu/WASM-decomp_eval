
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_3b3(struct s0** rdi, int32_t* rsi, struct s0** rdx, struct s0** rcx, int64_t r8);

void fun_3bb(int32_t* rdi, int32_t* rsi, struct s0** rdx, struct s0** rcx, int64_t r8);

void fun_3ab(int64_t rdi, int32_t* rsi, struct s0** rdx, struct s0** rcx, int64_t r8) {
    struct s0** r14_6;
    int32_t* r15_7;
    int64_t v8;

    fun_3b3(r14_6, rsi, rdx, rcx, r8);
    fun_3bb(r15_7, rsi, rdx, rcx, r8);
    goto v8;
}

void fun_45e();

void fputc();

void fun_492(struct s0** rdi, int64_t rsi, int64_t rdx, struct s0** rcx, int64_t r8);

void fun_4ab(int64_t rdi, int32_t* rsi, struct s0** rdx, struct s0** rcx, int64_t r8);

void fun_43c() {
    struct s0** rdi1;
    struct s0** rsi2;
    int64_t r12_3;
    int64_t rbp4;
    int64_t r13_5;
    struct s0** rcx6;
    int64_t r8_7;
    int64_t r8_8;
    int64_t rbx9;
    int64_t r8_10;
    struct s0** r14_11;
    int64_t r8_12;
    int32_t* r15_13;
    int64_t r8_14;
    int64_t v15;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = reinterpret_cast<struct s0**>(__return_address());
        rsi2 = reinterpret_cast<struct s0**>(0x457);
        fun_45e();
        ++r12_3;
        if (r12_3 == 0x4b0) {
            ++rbp4;
            if (rbp4 == 0x3e8) 
                break;
            r13_5 = rbp4 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + r13_5) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = reinterpret_cast<struct s0**>(__return_address());
        fun_43c();
    }
    fun_492(__return_address(), 0x47d, 0x484, rcx6, r8_7);
    fun_4ab(0x499, 22, 1, __return_address(), r8_8);
    fun_3ab(rbx9, 22, 1, __return_address(), r8_10);
    fun_3b3(r14_11, 22, 1, __return_address(), r8_12);
    fun_3bb(r15_13, 22, 1, __return_address(), r8_14);
    goto v15;
}

void fun_45e() {
    int64_t r12_1;
    int64_t rbp2;
    int64_t r13_3;
    struct s0** rdi4;
    struct s0** rsi5;
    struct s0** rcx6;
    int64_t r8_7;
    int64_t r8_8;
    int64_t rbx9;
    int64_t r8_10;
    struct s0** r14_11;
    int64_t r8_12;
    int32_t* r15_13;
    int64_t r8_14;
    int64_t v15;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x4b0) {
            ++rbp2;
            if (rbp2 == 0x3e8) 
                break;
            r13_3 = rbp2 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = reinterpret_cast<struct s0**>(__return_address());
            fun_43c();
        }
        *rdi4 = *rsi5;
        rdi4 = reinterpret_cast<struct s0**>(__return_address());
        rsi5 = reinterpret_cast<struct s0**>(0x457);
        fun_45e();
    }
    fun_492(__return_address(), 0x47d, 0x484, rcx6, r8_7);
    fun_4ab(0x499, 22, 1, __return_address(), r8_8);
    fun_3ab(rbx9, 22, 1, __return_address(), r8_10);
    fun_3b3(r14_11, 22, 1, __return_address(), r8_12);
    fun_3bb(r15_13, 22, 1, __return_address(), r8_14);
    goto v15;
}

void fun_492(struct s0** rdi, int64_t rsi, int64_t rdx, struct s0** rcx, int64_t r8) {
    struct s0** r12_6;
    int64_t rbx7;
    struct s0** r14_8;
    int32_t* r15_9;
    int64_t v10;

    fun_4ab(0x499, 22, 1, r12_6, r8);
    fun_3ab(rbx7, 22, 1, r12_6, r8);
    fun_3b3(r14_8, 22, 1, r12_6, r8);
    fun_3bb(r15_9, 22, 1, r12_6, r8);
    goto v10;
}

void fun_40d();

void fun_3ef(int64_t rdi, int64_t rsi, int64_t rdx, struct s0** rcx, int64_t r8) {
    struct s0** rsi6;
    int64_t rbp7;
    struct s0** v8;
    struct s0** r12_9;
    struct s0** rdi10;
    struct s0** r12_11;
    int64_t r13_12;
    int64_t r12_13;
    int64_t rbx14;
    struct s0** r14_15;
    int32_t* r15_16;
    int64_t v17;

    rsi6 = reinterpret_cast<struct s0**>(0x3f6);
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    v8 = r12_9;
    rdi10 = r12_11;
    fun_40d();
    do {
        r13_12 = rbp7 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_13 + r13_12) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi10) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v8;
                fun_43c();
            }
            *rdi10 = *rsi6;
            rdi10 = v8;
            rsi6 = reinterpret_cast<struct s0**>(0x457);
            fun_45e();
            ++r12_13;
        } while (r12_13 != 0x4b0);
        ++rbp7;
    } while (rbp7 != 0x3e8);
    fun_492(v8, 0x47d, 0x484, rcx, r8);
    fun_4ab(0x499, 22, 1, v8, r8);
    fun_3ab(rbx14, 22, 1, v8, r8);
    fun_3b3(r14_15, 22, 1, v8, r8);
    fun_3bb(r15_16, 22, 1, v8, r8);
    goto v17;
}

void fun_3b3(struct s0** rdi, int32_t* rsi, struct s0** rdx, struct s0** rcx, int64_t r8) {
    int32_t* r15_6;
    int64_t v7;

    fun_3bb(r15_6, rsi, rdx, rcx, r8);
    goto v7;
}

void fun_4ab(int64_t rdi, int32_t* rsi, struct s0** rdx, struct s0** rcx, int64_t r8) {
    int64_t rbx6;
    struct s0** r14_7;
    int32_t* r15_8;
    int64_t v9;

    fun_3ab(rbx6, rsi, rdx, rcx, r8);
    fun_3b3(r14_7, rsi, rdx, rcx, r8);
    fun_3bb(r15_8, rsi, rdx, rcx, r8);
    goto v9;
}

struct s0** fun_141(int64_t rdi, int64_t rsi);

int32_t* fun_153(int32_t* rdi, int32_t* rsi);

struct s1 {
    int32_t f0;
    int32_t f4;
};

int32_t g124f80;

/* .LCPI1_1 */
int32_t LCPI1_1 = 0xfff8553;

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

struct s0*** g3d3 = reinterpret_cast<struct s0***>(0x3d8d48208b4c);

void fun_12f(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rax4;
    struct s0** rax5;
    struct s0** r14_6;
    int32_t* rax7;
    int32_t* r15_8;
    struct s1* rcx9;
    int64_t rax10;
    struct s2* rsi11;
    int32_t* rdi12;
    int32_t* rsi13;
    int64_t rdx14;
    int64_t rax15;
    struct s0* rsi16;
    struct s1* rdi17;
    int64_t rcx18;
    struct s0** r8_19;
    int64_t r9_20;
    struct s0** rcx21;
    struct s0** rdx22;
    int32_t* rsi23;
    struct s3* rdi24;
    int64_t r8_25;
    struct s4* rdi26;
    struct s5* rsi27;
    struct s6* rdi28;
    struct s7* rsi29;
    void* rdi30;
    int64_t r8_31;
    struct s8* rdi32;
    struct s9* rdi33;
    struct s5* rsi34;
    struct s7* rsi35;
    int32_t ebp36;
    signed char** r12_37;
    struct s0*** rax38;
    struct s0** r12_39;
    struct s0** rcx40;
    struct s0** rsi41;
    int64_t rbp42;
    struct s0** v43;
    struct s0** rdi44;
    int64_t r13_45;
    int64_t r12_46;
    int64_t v47;

    rbx3 = rax4;
    rax5 = fun_141(0xf4240, 8);
    r14_6 = rax5;
    rax7 = fun_153(0x124f80, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
    g124f80 = LCPI1_1;
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi12 = reinterpret_cast<int32_t*>(rax10 * 0x2580);
            *rdi12 = rsi11->f0;
            rsi13 = &rsi11->f4;
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi12 + 1) + reinterpret_cast<int64_t>(r15_8)) = *rsi13;
            rsi11 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rsi13 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rsi11 == 0x4b0));
        ++rax10;
    } while (rax10 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rdx14) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rax15) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(fputc);
    rsi16 = reinterpret_cast<struct s0*>(0xc08f380000000000);
    do {
        rdi17 = rcx9;
        *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            r8_19 = r14_6 + reinterpret_cast<uint64_t>(rdi17) * 0x7d0;
            rdi17->f0 = *reinterpret_cast<int32_t*>(&rsi16->f0);
            rdi17 = reinterpret_cast<struct s1*>(&rdi17->f4);
            rsi16 = reinterpret_cast<struct s0*>(&rsi16->f4);
            ++rcx18;
        } while (rcx18 != rdx14);
        rcx9 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rdi17) + 1);
        r9_20 = rdx14;
        if (reinterpret_cast<uint64_t>(rdi17) <= 0x3e6) {
            do {
                r8_19[r9_20 * 2] = rsi16;
                ++r9_20;
            } while (r9_20 != 0x3e8);
        }
        ++rdx14;
    } while (rcx9 != 0x3e8);
    rdi17->f0 = *reinterpret_cast<int32_t*>(&rsi16->f0);
    rdi17->f4 = rsi16->f4;
    do {
        rcx21 = r14_6 + rax15 * 0x7d0;
        rdx22 = rcx21 + rax15 * 2;
        *reinterpret_cast<int32_t*>(&rsi23) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (rax15 == fputc) {
                __asm__("xorpd xmm2, xmm2");
            } else {
                rdi24 = reinterpret_cast<struct s3*>(r15_8 + rax15 * 0x960 + reinterpret_cast<int64_t>(rsi23) * 2);
                __asm__("xorpd xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&r8_25) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_25) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi24->f0 = *rsi23;
                    rdi26 = reinterpret_cast<struct s4*>(&rdi24->f4);
                    rsi27 = reinterpret_cast<struct s5*>(rsi23 + 1);
                    __asm__("mulsd xmm3, xmm0");
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm3, [r10+rsi*8]");
                    rdi26->f0 = rsi27->f0;
                    rdi28 = reinterpret_cast<struct s6*>(&rdi26->f4);
                    rsi29 = reinterpret_cast<struct s7*>(&rsi27->f4);
                    rdi28->f0 = rsi29->f0;
                    rdi24 = reinterpret_cast<struct s3*>(&rdi28->f4);
                    rsi23 = &rsi29->f4;
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm2, xmm3");
                    ++r8_25;
                } while (r8_25 != rax15);
            }
            rdi30 = reinterpret_cast<void*>(rax15 * 0x2580);
            r8_31 = rbx3 + reinterpret_cast<int64_t>(rdi30);
            rdi32 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(rdi30) + reinterpret_cast<int64_t>(r15_8));
            rdi32->f0 = *rsi23;
            rdi33 = reinterpret_cast<struct s9*>(&rdi32->f4);
            rsi34 = reinterpret_cast<struct s5*>(rsi23 + 1);
            __asm__("mulsd xmm3, xmm0");
            __asm__("mulsd xmm3, [rdx]");
            rdi33->f0 = rsi34->f0;
            rsi35 = reinterpret_cast<struct s7*>(&rsi34->f4);
            __asm__("mulsd xmm4, xmm1");
            __asm__("addsd xmm4, xmm3");
            __asm__("mulsd xmm2, xmm0");
            __asm__("addsd xmm2, xmm4");
            rdi33->f4 = rsi35->f0;
            rsi23 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi35->f4) + 1);
        } while (rsi23 != 0x4b0);
        ++rax15;
    } while (rax15 != 0x3e8);
    if (ebp36 >= 43 && **r12_37 == fputc) {
        rax38 = g3d3;
        r12_39 = *rax38;
        rcx40 = r12_39;
        fun_3ef(0x3dd, 22, 1, rcx40, r8_31);
        rsi41 = reinterpret_cast<struct s0**>(0x3f6);
        *reinterpret_cast<int32_t*>(&rbp42) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp42) + 4) = reinterpret_cast<int32_t>(fputc);
        v43 = r12_39;
        rdi44 = r12_39;
        fun_40d();
        do {
            r13_45 = rbp42 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_46) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_46) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_46 + r13_45) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi44) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi41 = v43;
                    fun_43c();
                }
                *rdi44 = *rsi41;
                rdi44 = v43;
                rsi41 = reinterpret_cast<struct s0**>(0x457);
                fun_45e();
                ++r12_46;
            } while (r12_46 != 0x4b0);
            ++rbp42;
        } while (rbp42 != 0x3e8);
        fun_492(v43, 0x47d, 0x484, rcx40, r8_31);
        *reinterpret_cast<int32_t*>(&rsi23) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx22) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx21 = v43;
        fun_4ab(0x499, 22, 1, rcx21, r8_31);
    }
    fun_3ab(rbx3, rsi23, rdx22, rcx21, r8_31);
    fun_3b3(r14_6, rsi23, rdx22, rcx21, r8_31);
    fun_3bb(r15_8, rsi23, rdx22, rcx21, r8_31);
    goto v47;
}

void fun_40d() {
    struct s0** v1;
    int64_t r13_2;
    int64_t rbp3;
    int64_t r12_4;
    struct s0** rdi5;
    struct s0** rsi6;
    struct s0** rcx7;
    int64_t r8_8;
    int64_t r8_9;
    int64_t rbx10;
    int64_t r8_11;
    struct s0** r14_12;
    int64_t r8_13;
    int32_t* r15_14;
    int64_t r8_15;
    int64_t v16;

    v1 = reinterpret_cast<struct s0**>(__return_address());
    do {
        r13_2 = rbp3 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + r13_2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v1;
                fun_43c();
            }
            *rdi5 = *rsi6;
            rdi5 = v1;
            rsi6 = reinterpret_cast<struct s0**>(0x457);
            fun_45e();
            ++r12_4;
        } while (r12_4 != 0x4b0);
        ++rbp3;
    } while (rbp3 != 0x3e8);
    fun_492(v1, 0x47d, 0x484, rcx7, r8_8);
    fun_4ab(0x499, 22, 1, v1, r8_9);
    fun_3ab(rbx10, 22, 1, v1, r8_11);
    fun_3b3(r14_12, 22, 1, v1, r8_13);
    fun_3bb(r15_14, 22, 1, v1, r8_15);
    goto v16;
}

void fun_3bb(int32_t* rdi, int32_t* rsi, struct s0** rdx, struct s0** rcx, int64_t r8) {
    int64_t v6;

    goto v6;
}

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

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s0** fun_141(int64_t rdi, int64_t rsi) {
    struct s0** r14_3;
    struct s0** rax4;
    int32_t* rax5;
    int32_t* r15_6;
    struct s10* rcx7;
    int64_t rax8;
    struct s11* rsi9;
    int32_t* rdi10;
    int32_t* rsi11;
    int64_t rdx12;
    int64_t rax13;
    struct s0* rsi14;
    struct s10* rdi15;
    int64_t rcx16;
    struct s0** r8_17;
    int64_t r9_18;
    struct s0** rcx19;
    struct s0** rdx20;
    int32_t* rsi21;
    struct s12* rdi22;
    int64_t r8_23;
    struct s13* rdi24;
    struct s5* rsi25;
    struct s14* rdi26;
    struct s7* rsi27;
    void* rdi28;
    int64_t r8_29;
    int64_t rbx30;
    struct s15* rdi31;
    struct s16* rdi32;
    struct s5* rsi33;
    struct s7* rsi34;
    int32_t ebp35;
    signed char** r12_36;
    struct s0*** rax37;
    struct s0** r12_38;
    struct s0** rcx39;
    struct s0** rsi40;
    int64_t rbp41;
    struct s0** v42;
    struct s0** rdi43;
    int64_t r13_44;
    int64_t r12_45;
    int64_t rbx46;
    int64_t v47;

    r14_3 = rax4;
    rax5 = fun_153(0x124f80, 8);
    r15_6 = rax5;
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    g124f80 = LCPI1_1;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi10 = reinterpret_cast<int32_t*>(rax8 * 0x2580);
            *rdi10 = rsi9->f0;
            rsi11 = &rsi9->f4;
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi10 + 1) + reinterpret_cast<int64_t>(r15_6)) = *rsi11;
            rsi9 = reinterpret_cast<struct s11*>(reinterpret_cast<int64_t>(rsi11 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rsi9 == 0x4b0));
        ++rax8;
    } while (rax8 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rdx12) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rax13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(fputc);
    rsi14 = reinterpret_cast<struct s0*>(0xc08f380000000000);
    do {
        rdi15 = rcx7;
        *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            r8_17 = r14_3 + reinterpret_cast<uint64_t>(rdi15) * 0x7d0;
            rdi15->f0 = *reinterpret_cast<int32_t*>(&rsi14->f0);
            rdi15 = reinterpret_cast<struct s10*>(&rdi15->f4);
            rsi14 = reinterpret_cast<struct s0*>(&rsi14->f4);
            ++rcx16;
        } while (rcx16 != rdx12);
        rcx7 = reinterpret_cast<struct s10*>(reinterpret_cast<uint64_t>(rdi15) + 1);
        r9_18 = rdx12;
        if (reinterpret_cast<uint64_t>(rdi15) <= 0x3e6) {
            do {
                r8_17[r9_18 * 2] = rsi14;
                ++r9_18;
            } while (r9_18 != 0x3e8);
        }
        ++rdx12;
    } while (rcx7 != 0x3e8);
    rdi15->f0 = *reinterpret_cast<int32_t*>(&rsi14->f0);
    rdi15->f4 = rsi14->f4;
    do {
        rcx19 = r14_3 + rax13 * 0x7d0;
        rdx20 = rcx19 + rax13 * 2;
        *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (rax13 == fputc) {
                __asm__("xorpd xmm2, xmm2");
            } else {
                rdi22 = reinterpret_cast<struct s12*>(r15_6 + rax13 * 0x960 + reinterpret_cast<int64_t>(rsi21) * 2);
                __asm__("xorpd xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&r8_23) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_23) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi22->f0 = *rsi21;
                    rdi24 = reinterpret_cast<struct s13*>(&rdi22->f4);
                    rsi25 = reinterpret_cast<struct s5*>(rsi21 + 1);
                    __asm__("mulsd xmm3, xmm0");
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm3, [r10+rsi*8]");
                    rdi24->f0 = rsi25->f0;
                    rdi26 = reinterpret_cast<struct s14*>(&rdi24->f4);
                    rsi27 = reinterpret_cast<struct s7*>(&rsi25->f4);
                    rdi26->f0 = rsi27->f0;
                    rdi22 = reinterpret_cast<struct s12*>(&rdi26->f4);
                    rsi21 = &rsi27->f4;
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm2, xmm3");
                    ++r8_23;
                } while (r8_23 != rax13);
            }
            rdi28 = reinterpret_cast<void*>(rax13 * 0x2580);
            r8_29 = rbx30 + reinterpret_cast<int64_t>(rdi28);
            rdi31 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(rdi28) + reinterpret_cast<int64_t>(r15_6));
            rdi31->f0 = *rsi21;
            rdi32 = reinterpret_cast<struct s16*>(&rdi31->f4);
            rsi33 = reinterpret_cast<struct s5*>(rsi21 + 1);
            __asm__("mulsd xmm3, xmm0");
            __asm__("mulsd xmm3, [rdx]");
            rdi32->f0 = rsi33->f0;
            rsi34 = reinterpret_cast<struct s7*>(&rsi33->f4);
            __asm__("mulsd xmm4, xmm1");
            __asm__("addsd xmm4, xmm3");
            __asm__("mulsd xmm2, xmm0");
            __asm__("addsd xmm2, xmm4");
            rdi32->f4 = rsi34->f0;
            rsi21 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34->f4) + 1);
        } while (rsi21 != 0x4b0);
        ++rax13;
    } while (rax13 != 0x3e8);
    if (ebp35 >= 43 && **r12_36 == fputc) {
        rax37 = g3d3;
        r12_38 = *rax37;
        rcx39 = r12_38;
        fun_3ef(0x3dd, 22, 1, rcx39, r8_29);
        rsi40 = reinterpret_cast<struct s0**>(0x3f6);
        *reinterpret_cast<int32_t*>(&rbp41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp41) + 4) = reinterpret_cast<int32_t>(fputc);
        v42 = r12_38;
        rdi43 = r12_38;
        fun_40d();
        do {
            r13_44 = rbp41 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_45) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_45) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_45 + r13_44) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi43) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi40 = v42;
                    fun_43c();
                }
                *rdi43 = *rsi40;
                rdi43 = v42;
                rsi40 = reinterpret_cast<struct s0**>(0x457);
                fun_45e();
                ++r12_45;
            } while (r12_45 != 0x4b0);
            ++rbp41;
        } while (rbp41 != 0x3e8);
        fun_492(v42, 0x47d, 0x484, rcx39, r8_29);
        *reinterpret_cast<int32_t*>(&rsi21) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx20) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx19 = v42;
        fun_4ab(0x499, 22, 1, rcx19, r8_29);
    }
    fun_3ab(rbx46, rsi21, rdx20, rcx19, r8_29);
    fun_3b3(r14_3, rsi21, rdx20, rcx19, r8_29);
    fun_3bb(r15_6, rsi21, rdx20, rcx19, r8_29);
    goto v47;
}

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

int32_t* fun_153(int32_t* rdi, int32_t* rsi) {
    int32_t* r15_3;
    int32_t* rax4;
    struct s17* rcx5;
    int64_t rax6;
    struct s18* rsi7;
    int32_t* rdi8;
    int32_t* rsi9;
    int64_t rdx10;
    int64_t rax11;
    struct s19* rsi12;
    struct s17* rdi13;
    int64_t rcx14;
    struct s19** r8_15;
    struct s19** r14_16;
    int64_t r9_17;
    struct s0** rcx18;
    struct s0** r14_19;
    struct s0** rdx20;
    int32_t* rsi21;
    struct s20* rdi22;
    int64_t r8_23;
    struct s21* rdi24;
    struct s5* rsi25;
    struct s22* rdi26;
    struct s7* rsi27;
    void* rdi28;
    int64_t r8_29;
    int64_t rbx30;
    struct s23* rdi31;
    struct s24* rdi32;
    struct s5* rsi33;
    struct s7* rsi34;
    int32_t ebp35;
    signed char** r12_36;
    struct s0*** rax37;
    struct s0** r12_38;
    struct s0** rcx39;
    struct s0** rsi40;
    int64_t rbp41;
    struct s0** v42;
    struct s0** rdi43;
    int64_t r13_44;
    int64_t r12_45;
    int64_t rbx46;
    struct s0** r14_47;
    int64_t v48;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&rcx5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi = *rsi;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi8 = reinterpret_cast<int32_t*>(rax6 * 0x2580);
            *rdi8 = rsi7->f0;
            rsi9 = &rsi7->f4;
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi8 + 1) + reinterpret_cast<int64_t>(r15_3)) = *rsi9;
            rsi7 = reinterpret_cast<struct s18*>(reinterpret_cast<int64_t>(rsi9 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rsi7 == 0x4b0));
        ++rax6;
    } while (rax6 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rdx10) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
    rsi12 = reinterpret_cast<struct s19*>(0xc08f380000000000);
    do {
        rdi13 = rcx5;
        *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r8d");
            __asm__("divsd xmm1, xmm0");
            r8_15 = r14_16 + reinterpret_cast<uint64_t>(rdi13) * 0x3e8;
            rdi13->f0 = rsi12->f0;
            rdi13 = reinterpret_cast<struct s17*>(&rdi13->f4);
            rsi12 = reinterpret_cast<struct s19*>(&rsi12->f4);
            ++rcx14;
        } while (rcx14 != rdx10);
        rcx5 = reinterpret_cast<struct s17*>(reinterpret_cast<uint64_t>(rdi13) + 1);
        r9_17 = rdx10;
        if (reinterpret_cast<uint64_t>(rdi13) <= 0x3e6) {
            do {
                r8_15[r9_17] = rsi12;
                ++r9_17;
            } while (r9_17 != 0x3e8);
        }
        ++rdx10;
    } while (rcx5 != 0x3e8);
    rdi13->f0 = rsi12->f0;
    rdi13->f4 = rsi12->f4;
    do {
        rcx18 = r14_19 + rax11 * 0x7d0;
        rdx20 = rcx18 + rax11 * 2;
        *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (rax11 == fputc) {
                __asm__("xorpd xmm2, xmm2");
            } else {
                rdi22 = reinterpret_cast<struct s20*>(r15_3 + rax11 * 0x960 + reinterpret_cast<int64_t>(rsi21) * 2);
                __asm__("xorpd xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&r8_23) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_23) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi22->f0 = *rsi21;
                    rdi24 = reinterpret_cast<struct s21*>(&rdi22->f4);
                    rsi25 = reinterpret_cast<struct s5*>(rsi21 + 1);
                    __asm__("mulsd xmm3, xmm0");
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm3, [r10+rsi*8]");
                    rdi24->f0 = rsi25->f0;
                    rdi26 = reinterpret_cast<struct s22*>(&rdi24->f4);
                    rsi27 = reinterpret_cast<struct s7*>(&rsi25->f4);
                    rdi26->f0 = rsi27->f0;
                    rdi22 = reinterpret_cast<struct s20*>(&rdi26->f4);
                    rsi21 = &rsi27->f4;
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm2, xmm3");
                    ++r8_23;
                } while (r8_23 != rax11);
            }
            rdi28 = reinterpret_cast<void*>(rax11 * 0x2580);
            r8_29 = rbx30 + reinterpret_cast<int64_t>(rdi28);
            rdi31 = reinterpret_cast<struct s23*>(reinterpret_cast<int64_t>(rdi28) + reinterpret_cast<int64_t>(r15_3));
            rdi31->f0 = *rsi21;
            rdi32 = reinterpret_cast<struct s24*>(&rdi31->f4);
            rsi33 = reinterpret_cast<struct s5*>(rsi21 + 1);
            __asm__("mulsd xmm3, xmm0");
            __asm__("mulsd xmm3, [rdx]");
            rdi32->f0 = rsi33->f0;
            rsi34 = reinterpret_cast<struct s7*>(&rsi33->f4);
            __asm__("mulsd xmm4, xmm1");
            __asm__("addsd xmm4, xmm3");
            __asm__("mulsd xmm2, xmm0");
            __asm__("addsd xmm2, xmm4");
            rdi32->f4 = rsi34->f0;
            rsi21 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34->f4) + 1);
        } while (rsi21 != 0x4b0);
        ++rax11;
    } while (rax11 != 0x3e8);
    if (ebp35 >= 43 && **r12_36 == fputc) {
        rax37 = g3d3;
        r12_38 = *rax37;
        rcx39 = r12_38;
        fun_3ef(0x3dd, 22, 1, rcx39, r8_29);
        rsi40 = reinterpret_cast<struct s0**>(0x3f6);
        *reinterpret_cast<int32_t*>(&rbp41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp41) + 4) = reinterpret_cast<int32_t>(fputc);
        v42 = r12_38;
        rdi43 = r12_38;
        fun_40d();
        do {
            r13_44 = rbp41 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_45) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_45) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_45 + r13_44) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi43) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi40 = v42;
                    fun_43c();
                }
                *rdi43 = *rsi40;
                rdi43 = v42;
                rsi40 = reinterpret_cast<struct s0**>(0x457);
                fun_45e();
                ++r12_45;
            } while (r12_45 != 0x4b0);
            ++rbp41;
        } while (rbp41 != 0x3e8);
        fun_492(v42, 0x47d, 0x484, rcx39, r8_29);
        *reinterpret_cast<int32_t*>(&rsi21) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx20) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx18 = v42;
        fun_4ab(0x499, 22, 1, rcx18, r8_29);
    }
    fun_3ab(rbx46, rsi21, rdx20, rcx18, r8_29);
    fun_3b3(r14_47, rsi21, rdx20, rcx18, r8_29);
    fun_3bb(r15_3, rsi21, rdx20, rcx18, r8_29);
    goto v48;
}

void fputc() {
}

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

void fun_a8() {
    int64_t r15_1;
    struct s25* rdi2;
    struct s26* rsi3;
    struct s27* rdi4;
    struct s28* rsi5;
    struct s29* rdi6;
    struct s30* rsi7;
    int64_t r9_8;

    __asm__("xorpd xmm2, xmm2");
    *reinterpret_cast<int32_t*>(&r15_1) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_1) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi2->f0 = rsi3->f0;
        rdi4 = reinterpret_cast<struct s27*>(&rdi2->f4);
        rsi5 = reinterpret_cast<struct s28*>(&rsi3->f4);
        __asm__("mulsd xmm3, xmm0");
        __asm__("mulsd xmm3, [r10+r15*8]");
        __asm__("addsd xmm3, [r13+rbx*8+0x0]");
        rdi4->f0 = rsi5->f0;
        rdi6 = reinterpret_cast<struct s29*>(&rdi4->f4);
        rsi7 = reinterpret_cast<struct s30*>(&rsi5->f4);
        rdi6->f0 = rsi7->f0;
        rdi2 = reinterpret_cast<struct s25*>(&rdi6->f4);
        rsi3 = reinterpret_cast<struct s26*>(&rsi7->f4);
        __asm__("mulsd xmm3, [r10+r15*8]");
        __asm__("addsd xmm2, xmm3");
        ++r15_1;
    } while (r15_1 != r9_8);
}

void fun_f8() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_12f(0x124f80, 8);
}

