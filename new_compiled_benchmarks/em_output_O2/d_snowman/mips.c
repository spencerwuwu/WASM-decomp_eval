
void fun_4c8(int64_t rdi, int64_t rsi);

void fun_489(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("cvtsi2sd xmm1, qword [rsp+0x80]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x88]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [rbx]");
    fun_4c8(0x4c1, rsi + 1);
    goto v3;
}

void fun_4c8(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_475(int32_t* rdi) {
    int32_t eax2;
    int32_t* rsi3;
    int32_t eax4;
    int64_t v5;

    if (eax2) {
        rdi = reinterpret_cast<int32_t*>(0x480);
        *reinterpret_cast<int32_t*>(&rsi3) = eax4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = 0;
        fun_489(0x480, rsi3);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x80]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x88]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi3;
    __asm__("subsd xmm0, [rbx]");
    fun_4c8(0x4c1, rsi3 + 1);
    goto v5;
}

void imem() {
    int32_t* rsi1;
    int64_t r15_2;
    int64_t rsi3;

    __asm__("in eax, 0x1f");
    goto rsi1[r15_2] + rsi3;
}

void fun_174() {
    int64_t r10_1;
    int32_t ebp2;
    int64_t rcx3;
    int32_t r11d4;
    unsigned char cl5;

    *reinterpret_cast<int32_t*>(&r10_1) = ebp2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_1) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rcx3) = r11d4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx3 * 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r10_1 * 4) << cl5;
}

void fun_1bb() {
    int64_t r11_1;
    int32_t ebp2;

    *reinterpret_cast<int32_t*>(&r11_1) = ebp2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_1) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r11_1 * 4) >= 0) {
        goto 0xf4;
    } else {
        goto 0xf4;
    }
}

void fun_1ca() {
    int64_t r15_1;
    int32_t ebp2;
    int64_t r11_3;
    int32_t r11d4;

    *reinterpret_cast<int32_t*>(&r15_1) = ebp2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_1) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r11_3) = r11d4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_3) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r15_1 * 4) != *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r11_3 * 4)) 
        goto 0xf4;
    goto 0x1f4;
}

void fun_1e0() {
    int64_t r15_1;
    int32_t ebp2;
    int64_t r11_3;
    int32_t r11d4;

    *reinterpret_cast<int32_t*>(&r15_1) = ebp2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_1) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r11_3) = r11d4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_3) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r15_1 * 4) == *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r11_3 * 4)) 
        goto 0xf4; else 
        goto "???";
}

void fun_201() {
    goto 0x382;
}

uint32_t* g463 = reinterpret_cast<uint32_t*>(0x8024bc8d48168941);

void fun_190(int32_t* rdi) {
    int64_t r15_2;
    int32_t r15d3;
    int32_t ecx4;
    int32_t eax5;
    int32_t eax6;
    int32_t v7;
    int32_t edx8;
    int32_t v9;
    uint32_t edi10;
    int32_t v11;
    int32_t esi12;
    int32_t v13;
    uint32_t edi14;
    uint32_t r8d15;
    uint32_t r8d16;
    uint32_t* r14_17;

    *reinterpret_cast<uint32_t*>(&r15_2) = reinterpret_cast<uint32_t>(r15d3 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_2) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&r15_2) > 42) {
        ecx4 = 0;
        *reinterpret_cast<unsigned char*>(&ecx4) = reinterpret_cast<uint1_t>(eax5 + 1 != 0x263);
        eax6 = 0;
        *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(v7 != -17);
        __asm__("movdqu xmm0, [rsp+0x94]");
        edx8 = 0;
        *reinterpret_cast<unsigned char*>(&edx8) = reinterpret_cast<uint1_t>(v9 != 11);
        edi10 = 0;
        *reinterpret_cast<unsigned char*>(&edi10) = reinterpret_cast<uint1_t>(v11 != 22);
        esi12 = 0;
        *reinterpret_cast<unsigned char*>(&esi12) = reinterpret_cast<uint1_t>(v13 != 38);
        __asm__("pcmpeqd xmm0, [rip+0x0]");
        __asm__("movmskps edi, xmm0");
        edi14 = edi10 ^ 15;
        *reinterpret_cast<unsigned char*>(&edi14) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edi14) - 5);
        r8d15 = edi14;
        *reinterpret_cast<unsigned char*>(&edi14) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edi14) >> 2) & 51) + reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8d15) & 51));
        r8d16 = edi14;
        r14_17 = g463;
        *r14_17 = edx8 + ecx4 + eax6 + (esi12 + edi10) + reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r8d16) >> 4) + *reinterpret_cast<unsigned char*>(&edi14)) & 15);
        fun_475(reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x80);
    } else {
        goto rdi[r15_2] + reinterpret_cast<int64_t>(rdi);
    }
}

void fun_20c() {
    int64_t rcx1;
    int32_t ebp2;
    int32_t ebp3;
    int16_t r10w4;
    int64_t rcx5;
    int32_t r11d6;

    *reinterpret_cast<int32_t*>(&rcx1) = ebp2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    ebp3 = 0;
    *reinterpret_cast<unsigned char*>(&ebp3) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx1 * 4) < static_cast<int32_t>(r10w4));
    *reinterpret_cast<int32_t*>(&rcx5) = r11d6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx5 * 4) = ebp3;
    goto 0xf4;
}

void fun_38e() {
}

void fun_33b() {
    int64_t rcx1;
    int32_t r10d2;
    int64_t r10_3;
    int32_t ebp4;
    int64_t r10_5;
    int32_t r11d6;

    *reinterpret_cast<int32_t*>(&rcx1) = r10d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r10_3) = ebp4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_3) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r10_5) = r11d6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_5) + 4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r10_5 * 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx1 * 4) - *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r10_3 * 4);
    goto 0xf4;
}

void fun_21d() {
}

void fun_354() {
    goto 0x382;
}

void fun_3a3() {
}

void fun_22e() {
    goto 0x348;
}

void fun_364() {
    goto 0x382;
}

void fun_23c() {
    goto 0x382;
}

void fun_374() {
}

void fun_24b() {
    goto 0x37e;
}

void fun_256() {
    int64_t rcx1;
    int32_t r11d2;
    int32_t r10d3;

    *reinterpret_cast<int32_t*>(&rcx1) = r11d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx1 * 4) = r10d3 << 16;
    goto 0xf4;
}

void fun_266() {
    goto 0x348;
}

void fun_280() {
    int64_t rcx1;
    int32_t r11d2;
    int64_t r11_3;
    int32_t ebp4;
    int64_t r11_5;
    int32_t r10d6;

    *reinterpret_cast<int32_t*>(&rcx1) = r11d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r11_3) = ebp4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_3) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&r11_5) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r11_3 * 4) + r10d6) >> 2 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_5) + 4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + r11_5 * 4 + 0x90) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx1 * 4);
    goto 0xf4;
}

void fun_2a5() {
    goto 0x382;
}

void fun_2b4() {
    goto 0x3b6;
}

void fun_2c7() {
    goto 0x3b6;
}

void fun_2da() {
    goto 0xf4;
}

void fun_2e6() {
    int64_t rcx1;
    int32_t r11d2;
    int32_t r8d3;

    *reinterpret_cast<int32_t*>(&rcx1) = r11d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx1 * 4) = r8d3;
    goto 0xf4;
}

void fun_2f2() {
    int64_t rcx1;
    int32_t r11d2;
    int32_t r14d3;

    *reinterpret_cast<int32_t*>(&rcx1) = r11d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx1 * 4) = r14d3;
    goto 0xf4;
}

void fun_2fe() {
    goto 0xf4;
}

void fun_30e() {
}

void fun_32b() {
}

