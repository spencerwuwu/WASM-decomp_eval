
void fun_430(int32_t* rdi, int32_t* rsi);

void fun_473(int64_t rdi, int64_t rsi);

void fun_41c(int32_t* rdi) {
    int32_t eax2;
    int32_t* rsi3;
    int32_t eax4;
    int64_t v5;

    if (eax2) {
        rdi = reinterpret_cast<int32_t*>(0x427);
        *reinterpret_cast<int32_t*>(&rsi3) = eax4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = 0;
        fun_430(0x427, rsi3);
    }
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x80]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x88]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi3;
    __asm__("subsd xmm0, [r14]");
    fun_473(0x46c, rsi3 + 1);
    goto v5;
}

void fun_430(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x80]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x88]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_473(0x46c, rsi + 1);
    goto v3;
}

void fun_473(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void imem() {
    int32_t* rdx1;
    int64_t r13_2;
    int64_t rdx3;

    goto rdx1[r13_2] + rdx3;
}

void fun_183() {
    int64_t r10_1;
    int32_t r12d2;
    int64_t rcx3;
    int32_t ebp4;
    unsigned char cl5;

    *reinterpret_cast<int32_t*>(&r10_1) = r12d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_1) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rcx3) = ebp4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx3 * 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r10_1 * 4) << cl5;
}

void fun_1be() {
    int64_t r10_1;
    int32_t r13d2;

    *reinterpret_cast<int32_t*>(&r10_1) = r13d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_1) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r10_1 * 4) >= 0) {
        goto 0x104;
    } else {
        goto 0x3d0;
    }
}

void fun_1cd() {
    int64_t r10_1;
    int32_t r13d2;
    int64_t r12_3;
    int32_t ebp4;

    *reinterpret_cast<int32_t*>(&r10_1) = r13d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_1) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r12_3) = ebp4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r10_1 * 4) == *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r12_3 * 4)) 
        goto 0x1f6;
    goto 0x3d0;
}

void fun_1e2() {
    int64_t r10_1;
    int32_t r13d2;
    int64_t r12_3;
    int32_t ebp4;

    *reinterpret_cast<int32_t*>(&r10_1) = r13d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_1) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r12_3) = ebp4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r10_1 * 4) == *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r12_3 * 4)) 
        goto 0x3d0; else 
        goto "???";
}

void fun_203() {
    goto 0x37d;
}

void fun_190() {
    int64_t r12_1;
    int32_t r12d2;
    int32_t* rsi3;
    int64_t rsi4;

    *reinterpret_cast<uint32_t*>(&r12_1) = reinterpret_cast<uint32_t>(r12d2 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&r12_1) > 42) 
        goto 0x104;
    goto rsi3[r12_1] + rsi4;
}

int32_t* g3ee = reinterpret_cast<int32_t*>(0x908cb48b9066);

void fun_3d8(int32_t edi) {
    void* rsp2;
    int32_t eax3;
    int32_t* rbx4;
    int64_t rcx5;
    int32_t* rdx6;
    int32_t edi7;
    int32_t* rbx8;

    rsp2 = __zero_stack_offset();
    eax3 = 0;
    *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<uint1_t>(edi != 0x263);
    *rbx4 = eax3;
    *reinterpret_cast<int32_t*>(&rcx5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    rdx6 = g3ee;
    do {
        edi7 = 0;
        *reinterpret_cast<unsigned char*>(&edi7) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp2) + rcx5 * 4 + 0x90) != rdx6[rcx5]);
        eax3 = eax3 + edi7;
        ++rcx5;
    } while (rcx5 != 8);
    *rbx8 = eax3;
    fun_41c(reinterpret_cast<int64_t>(rsp2) + 0x80);
}

void fun_213() {
    int64_t rcx1;
    int32_t r13d2;
    int32_t r11d3;
    int16_t r11w4;
    int64_t rcx5;
    int32_t ebp6;

    *reinterpret_cast<int32_t*>(&rcx1) = r13d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    r11d3 = 0;
    *reinterpret_cast<unsigned char*>(&r11d3) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx1 * 4) < static_cast<int32_t>(r11w4));
    *reinterpret_cast<int32_t*>(&rcx5) = ebp6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx5 * 4) = r11d3;
    goto 0x3d0;
}

void fun_2db() {
    goto 0x37d;
}

void fun_385() {
    goto 0x3af;
}

void fun_22a() {
}

void fun_2f1() {
    goto 0x104;
}

void fun_39b() {
}

void fun_3b7() {
}

void fun_23d() {
    int64_t rcx1;
    int32_t r13d2;
    int64_t r10_3;
    int32_t ebp4;
    uint32_t r11d5;

    *reinterpret_cast<int32_t*>(&rcx1) = r13d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r10_3) = ebp4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_3) + 4) = 0;
    *reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r10_3 * 4) = reinterpret_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx1 * 4)) & r11d5);
    goto 0x3d0;
}

void fun_2fd() {
    int64_t rcx1;
    int32_t ebp2;
    int32_t r8d3;

    *reinterpret_cast<int32_t*>(&rcx1) = ebp2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx1 * 4) = r8d3;
    goto 0x3d0;
}

void fun_24c() {
    goto 0x37d;
}

void fun_308() {
    int64_t rcx1;
    int32_t ebp2;
    int32_t r15d3;

    *reinterpret_cast<int32_t*>(&rcx1) = ebp2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx1 * 4) = r15d3;
    goto 0x3d0;
}

void fun_34f() {
    goto 0x37d;
}

void fun_25c() {
}

void fun_313() {
    goto 0x3c4;
}

void fun_35f() {
    goto 0x37d;
}

void fun_268() {
    int64_t rcx1;
    int32_t ebp2;
    int32_t r11d3;

    *reinterpret_cast<int32_t*>(&rcx1) = ebp2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx1 * 4) = r11d3 << 16;
    goto 0x3d0;
}

void fun_326() {
    goto 0x37d;
}

void fun_36f() {
}

void fun_277() {
    goto 0x343;
}

void fun_336() {
}

void fun_292() {
    int64_t rcx1;
    int32_t ebp2;
    int64_t r10_3;
    int32_t r13d4;
    int64_t r10_5;
    int32_t r11d6;

    *reinterpret_cast<int32_t*>(&rcx1) = ebp2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r10_3) = r13d4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_3) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r10_5) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r10_3 * 4) + r11d6) >> 2 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_5) + 4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r10_5 * 4 + 0x90) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx1 * 4);
    goto 0x3d0;
}

void fun_2b6() {
    goto 0x37d;
}

void fun_2c5() {
}

