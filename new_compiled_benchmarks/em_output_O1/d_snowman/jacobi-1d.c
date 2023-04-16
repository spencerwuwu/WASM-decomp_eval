
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_1d3(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_1cb(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_1d3(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fputc(int32_t edi);

void fun_26d();

void fun_287(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_2a0(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_243() {
    int64_t r13_1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r15_4;
    int32_t* r15_5;
    int32_t* r12_6;
    int32_t* r15_7;
    int32_t* rcx8;
    int32_t* r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    while (++r13_1, r13_1 != 0x7d0) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r15_4;
            fun_26d();
        }
        *rdi2 = *rsi3;
        rdi2 = r15_5;
        rsi3 = r12_6;
        fun_243();
    }
    fun_287(r15_7, 0x276, 0x27d, rcx8);
    fun_2a0(0x28e, 22, 1, r15_9);
    fun_1cb(rbx10, 22, 1, r15_9);
    fun_1d3(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_26d() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int32_t* r12_4;
    int64_t r13_5;
    int32_t* r15_6;
    int32_t* r15_7;
    int32_t* rcx8;
    int32_t* r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = r15_3;
            rsi2 = r12_4;
            fun_243();
            ++r13_5;
            if (r13_5 == 0x7d0) 
                goto addr_26f_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_5) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_6;
        fun_26d();
    }
    addr_26f_7:
    fun_287(r15_7, 0x276, 0x27d, rcx8);
    fun_2a0(0x28e, 22, 1, r15_9);
    fun_1cb(rbx10, 22, 1, r15_9);
    fun_1d3(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_222();

void fun_207(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int32_t* r15_9;
    int32_t* r15_10;
    int32_t* r15_11;
    int32_t* r15_12;
    int64_t rbx13;
    int64_t r14_14;
    int64_t v15;

    rsi5 = reinterpret_cast<int32_t*>(0x20e);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_222();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_9;
            fun_26d();
        }
        *rdi7 = *rsi5;
        rdi7 = r15_10;
        rsi5 = reinterpret_cast<int32_t*>(0x229);
        fun_243();
        ++r13_6;
    } while (r13_6 != 0x7d0);
    fun_287(r15_11, 0x276, 0x27d, rcx);
    fun_2a0(0x28e, 22, 1, r15_12);
    fun_1cb(rbx13, 22, 1, r15_12);
    fun_1d3(r14_14, 22, 1, r15_12);
    goto v15;
}

void fun_1d3(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_e1(struct s1* rdi, struct s2* rsi);

int32_t g7d0;

/* .LCPI1_0 */
int32_t LCPI1_0 = 0x45ff468d;

int32_t g7d4;

int32_t gc = 0xff2c031;

int32_t g7d8;

/* .LCPI1_1 */
int32_t LCPI1_1 = 0x510;

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

int32_t** g1eb = reinterpret_cast<int32_t**>(0x3d8d48388b4c);

void fun_cf(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rax4;
    int64_t rax5;
    int64_t r14_6;
    int32_t eax7;
    struct s3* rdi8;
    struct s4* rsi9;
    int64_t rcx10;
    struct s5* rdi11;
    struct s0* rsi12;
    struct s5* rdi13;
    struct s0* rsi14;
    int32_t* rcx15;
    struct s0* rdx16;
    struct s3* rdi17;
    struct s3* rdi18;
    struct s4* rsi19;
    int32_t* rdx20;
    int32_t ebp21;
    signed char** r15_22;
    int32_t** rax23;
    int32_t* r15_24;
    int32_t* rcx25;
    int32_t* rsi26;
    int64_t r13_27;
    int32_t* rdi28;
    int64_t v29;

    rbx3 = rax4;
    rax5 = fun_e1(0x7d0, 8);
    r14_6 = rax5;
    eax7 = reinterpret_cast<int32_t>(fputc);
    g7d0 = LCPI1_0;
    g7d4 = gc;
    g7d8 = LCPI1_1;
    rdi8 = reinterpret_cast<struct s3*>(0x7dc);
    rsi9 = reinterpret_cast<struct s4*>(20);
    *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm3, xmm3");
        __asm__("cvtsi2sd xmm3, ecx");
        __asm__("movapd xmm4, xmm3");
        __asm__("addsd xmm4, xmm0");
        __asm__("divsd xmm4, xmm1");
        rdi8->f0 = rsi9->f0;
        rdi11 = reinterpret_cast<struct s5*>(&rdi8->f4);
        rsi12 = reinterpret_cast<struct s0*>(&rsi9->f4);
        __asm__("addsd xmm3, xmm2");
        __asm__("divsd xmm3, xmm1");
        rdi11->f0 = rsi12->f0;
        rdi8 = reinterpret_cast<struct s3*>(&rdi11->f4);
        rsi9 = reinterpret_cast<struct s4*>(&rsi12->f4);
        ++rcx10;
    } while (rcx10 != 0x7d0);
    rdi8->f0 = rsi9->f0;
    rdi13 = reinterpret_cast<struct s5*>(&rdi8->f4);
    rsi14 = reinterpret_cast<struct s0*>(&rsi9->f4);
    do {
        *reinterpret_cast<int32_t*>(&rcx15) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx16) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi13->f0 = rsi14->f0;
            rdi17 = reinterpret_cast<struct s3*>(&rdi13->f4);
            __asm__("addsd xmm1, [rbx+rdx*8]");
            __asm__("addsd xmm1, [rbx+rdx*8+0x8]");
            __asm__("mulsd xmm1, xmm0");
            rdi17->f0 = rsi14->f4;
            rdi13 = reinterpret_cast<struct s5*>(&rdi17->f4);
            rsi14 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rdx16) + 1);
            rdx16 = rsi14;
        } while (!reinterpret_cast<int1_t>(rsi14 == 0x7cf));
        do {
            rdi13->f0 = rsi14->f0;
            rdi18 = reinterpret_cast<struct s3*>(&rdi13->f4);
            rsi19 = reinterpret_cast<struct s4*>(&rsi14->f4);
            __asm__("addsd xmm1, [r14+rcx*8]");
            __asm__("addsd xmm1, [r14+rcx*8+0x8]");
            __asm__("mulsd xmm1, xmm0");
            rdi18->f0 = rsi19->f0;
            rdi13 = reinterpret_cast<struct s5*>(&rdi18->f4);
            rsi14 = reinterpret_cast<struct s0*>(&rsi19->f4);
            rdx20 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx15) + 1);
            rcx15 = rdx20;
        } while (!reinterpret_cast<int1_t>(rdx20 == 0x7cf));
        ++eax7;
    } while (eax7 != 0x1f4);
    if (ebp21 >= 43 && **r15_22 == fputc) {
        rax23 = g1eb;
        r15_24 = *rax23;
        rcx25 = r15_24;
        fun_207(0x1f5, 22, 1, rcx25);
        rsi26 = reinterpret_cast<int32_t*>(0x20e);
        *reinterpret_cast<int32_t*>(&r13_27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_27) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi28 = r15_24;
        fun_222();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_27) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi28) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi26 = r15_24;
                fun_26d();
            }
            *rdi28 = *rsi26;
            rdi28 = r15_24;
            rsi26 = reinterpret_cast<int32_t*>(0x229);
            fun_243();
            ++r13_27;
        } while (r13_27 != 0x7d0);
        fun_287(r15_24, 0x276, 0x27d, rcx25);
        *reinterpret_cast<int32_t*>(&rsi14) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx20) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx15 = r15_24;
        fun_2a0(0x28e, 22, 1, rcx15);
    }
    fun_1cb(rbx3, rsi14, rdx20, rcx15);
    fun_1d3(r14_6, rsi14, rdx20, rcx15);
    goto v29;
}

void fun_222() {
    int64_t r13_1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r15_4;
    int32_t* r15_5;
    int32_t* r15_6;
    int32_t* rcx7;
    int32_t* r15_8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t v11;

    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r15_4;
            fun_26d();
        }
        *rdi2 = *rsi3;
        rdi2 = r15_5;
        rsi3 = reinterpret_cast<int32_t*>(0x229);
        fun_243();
        ++r13_1;
    } while (r13_1 != 0x7d0);
    fun_287(r15_6, 0x276, 0x27d, rcx7);
    fun_2a0(0x28e, 22, 1, r15_8);
    fun_1cb(rbx9, 22, 1, r15_8);
    fun_1d3(r14_10, 22, 1, r15_8);
    goto v11;
}

void fun_287(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r15_5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t v8;

    fun_2a0(0x28e, 22, 1, r15_5);
    fun_1cb(rbx6, 22, 1, r15_5);
    fun_1d3(r14_7, 22, 1, r15_5);
    goto v8;
}

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

int64_t fun_e1(struct s1* rdi, struct s2* rsi) {
    int64_t r14_3;
    int64_t rax4;
    int32_t eax5;
    struct s6* rdi6;
    struct s7* rsi7;
    struct s8* rdi8;
    struct s9* rsi9;
    struct s10* rdi10;
    struct s4* rsi11;
    int64_t rcx12;
    struct s11* rdi13;
    struct s0* rsi14;
    struct s11* rdi15;
    struct s0* rsi16;
    int32_t* rcx17;
    struct s0* rdx18;
    struct s10* rdi19;
    struct s10* rdi20;
    struct s4* rsi21;
    int32_t* rdx22;
    int32_t ebp23;
    signed char** r15_24;
    int32_t** rax25;
    int32_t* r15_26;
    int32_t* rcx27;
    int32_t* rsi28;
    int64_t r13_29;
    int32_t* rdi30;
    int64_t rbx31;
    int64_t v32;

    r14_3 = rax4;
    eax5 = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi6 = reinterpret_cast<struct s6*>(&rdi->f4);
    rsi7 = reinterpret_cast<struct s7*>(&rsi->f4);
    rdi6->f0 = rsi7->f0;
    rdi8 = reinterpret_cast<struct s8*>(&rdi6->f4);
    rsi9 = reinterpret_cast<struct s9*>(&rsi7->f4);
    rdi8->f0 = rsi9->f0;
    rdi10 = reinterpret_cast<struct s10*>(&rdi8->f4);
    rsi11 = reinterpret_cast<struct s4*>(&rsi9->f4);
    *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm3, xmm3");
        __asm__("cvtsi2sd xmm3, ecx");
        __asm__("movapd xmm4, xmm3");
        __asm__("addsd xmm4, xmm0");
        __asm__("divsd xmm4, xmm1");
        rdi10->f0 = rsi11->f0;
        rdi13 = reinterpret_cast<struct s11*>(&rdi10->f4);
        rsi14 = reinterpret_cast<struct s0*>(&rsi11->f4);
        __asm__("addsd xmm3, xmm2");
        __asm__("divsd xmm3, xmm1");
        rdi13->f0 = rsi14->f0;
        rdi10 = reinterpret_cast<struct s10*>(&rdi13->f4);
        rsi11 = reinterpret_cast<struct s4*>(&rsi14->f4);
        ++rcx12;
    } while (rcx12 != 0x7d0);
    rdi10->f0 = rsi11->f0;
    rdi15 = reinterpret_cast<struct s11*>(&rdi10->f4);
    rsi16 = reinterpret_cast<struct s0*>(&rsi11->f4);
    do {
        *reinterpret_cast<int32_t*>(&rcx17) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx18) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi15->f0 = rsi16->f0;
            rdi19 = reinterpret_cast<struct s10*>(&rdi15->f4);
            __asm__("addsd xmm1, [rbx+rdx*8]");
            __asm__("addsd xmm1, [rbx+rdx*8+0x8]");
            __asm__("mulsd xmm1, xmm0");
            rdi19->f0 = rsi16->f4;
            rdi15 = reinterpret_cast<struct s11*>(&rdi19->f4);
            rsi16 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rdx18) + 1);
            rdx18 = rsi16;
        } while (!reinterpret_cast<int1_t>(rsi16 == 0x7cf));
        do {
            rdi15->f0 = rsi16->f0;
            rdi20 = reinterpret_cast<struct s10*>(&rdi15->f4);
            rsi21 = reinterpret_cast<struct s4*>(&rsi16->f4);
            __asm__("addsd xmm1, [r14+rcx*8]");
            __asm__("addsd xmm1, [r14+rcx*8+0x8]");
            __asm__("mulsd xmm1, xmm0");
            rdi20->f0 = rsi21->f0;
            rdi15 = reinterpret_cast<struct s11*>(&rdi20->f4);
            rsi16 = reinterpret_cast<struct s0*>(&rsi21->f4);
            rdx22 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx17) + 1);
            rcx17 = rdx22;
        } while (!reinterpret_cast<int1_t>(rdx22 == 0x7cf));
        ++eax5;
    } while (eax5 != 0x1f4);
    if (ebp23 >= 43 && **r15_24 == fputc) {
        rax25 = g1eb;
        r15_26 = *rax25;
        rcx27 = r15_26;
        fun_207(0x1f5, 22, 1, rcx27);
        rsi28 = reinterpret_cast<int32_t*>(0x20e);
        *reinterpret_cast<int32_t*>(&r13_29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_29) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi30 = r15_26;
        fun_222();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_29) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi30) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi30) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi28 = r15_26;
                fun_26d();
            }
            *rdi30 = *rsi28;
            rdi30 = r15_26;
            rsi28 = reinterpret_cast<int32_t*>(0x229);
            fun_243();
            ++r13_29;
        } while (r13_29 != 0x7d0);
        fun_287(r15_26, 0x276, 0x27d, rcx27);
        *reinterpret_cast<int32_t*>(&rsi16) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx22) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx17 = r15_26;
        fun_2a0(0x28e, 22, 1, rcx17);
    }
    fun_1cb(rbx31, rsi16, rdx22, rcx17);
    fun_1d3(r14_3, rsi16, rdx22, rcx17);
    goto v32;
}

void fun_2a0(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_1cb(rbx5, rsi, rdx, rcx);
    fun_1d3(r14_6, rsi, rdx, rcx);
    goto v7;
}

void fputc(int32_t edi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) {
        return;
    }
}

void fun_98(int32_t* rdi, int32_t* rsi) {
    int64_t r9_3;
    int64_t rax4;

    *rdi = *rsi;
    if (r9_3 + 1 != rax4) {
    }
}

void submain(int32_t edi, int64_t rsi) {
    fun_cf(0x7d0, 8);
}

