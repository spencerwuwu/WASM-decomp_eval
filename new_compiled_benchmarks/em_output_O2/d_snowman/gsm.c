
void memcpy(int64_t rdi, int64_t rsi);

int32_t fun_dcf(int64_t rdi, int64_t rsi) {
    int16_t* rsp3;
    int64_t v4;
    int32_t ecx5;
    int32_t eax6;
    uint32_t r13d7;
    uint16_t* r15_8;
    uint64_t r12_9;
    uint32_t eax10;
    uint32_t esi11;
    int64_t rdx12;
    uint32_t ebp13;
    uint1_t zf14;
    int32_t esi15;
    int64_t r14_16;
    int64_t v17;
    int64_t rcx18;
    uint64_t rdx19;
    uint64_t rsi20;
    int64_t rdi21;
    uint32_t r10d22;
    int64_t r9_23;
    uint32_t ebp24;
    int64_t r8_25;
    uint32_t r11d26;
    int64_t rbx27;
    uint32_t ebp28;
    int1_t zf29;
    int32_t r10d30;
    uint32_t edi31;
    int32_t r10d32;
    uint32_t r8d33;
    int1_t cf34;
    uint32_t eax35;
    uint32_t ebp36;
    int64_t rdi37;
    int64_t rsi38;
    int64_t v39;

    while (1) {
        rsp3 = reinterpret_cast<int16_t*>(__zero_stack_offset());
        v4 = reinterpret_cast<int64_t>(__return_address());
        ecx5 = -eax6;
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int16_t*>(&r13d7) < reinterpret_cast<int16_t>(memcpy) == memcpy)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int16_t*>(&r13d7) == memcpy)) {
            ecx5 = eax6;
        }
        *r15_8 = *reinterpret_cast<uint16_t*>(&ecx5);
        if (r12_9 == 8) 
            break;
        eax10 = *reinterpret_cast<uint16_t*>(&ecx5);
        esi11 = *reinterpret_cast<int16_t*>(&ecx5) * *reinterpret_cast<int16_t*>(&r13d7) + 0x4000 >> 15;
        *reinterpret_cast<uint32_t*>(&rdx12) = esi11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(memcpy);
        if (eax10 == 0x8000) {
            *reinterpret_cast<uint32_t*>(&rdx12) = ebp13;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(memcpy);
        }
        if ((static_cast<unsigned char>(zf14) & 1) == memcpy) {
            *reinterpret_cast<uint32_t*>(&rdx12) = esi11;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(memcpy);
        }
        esi15 = static_cast<int32_t>(r14_16 + rdx12);
        *reinterpret_cast<int16_t*>(&r14_16) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r14_16) + *reinterpret_cast<int16_t*>(&rdx12));
        if (__intrinsic()) {
            *reinterpret_cast<uint32_t*>(&r14_16) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&esi15)) >> 15) ^ 0xffff8000;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = reinterpret_cast<int32_t>(memcpy);
        }
        v17 = r14_16;
        if (r12_9 <= reinterpret_cast<uint64_t>("5")) {
            rcx18 = *reinterpret_cast<int16_t*>(&ecx5);
            rdx19 = 8 - r12_9;
            *reinterpret_cast<int32_t*>(&rsi20) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(memcpy);
            do {
                *reinterpret_cast<int32_t*>(&rdi21) = (rsp3 + rsi20)[16];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(memcpy);
                r10d22 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rdi21) * *reinterpret_cast<int32_t*>(&rcx18) + 0x4000) >> 15;
                *reinterpret_cast<uint32_t*>(&r9_23) = r10d22;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_23) + 4) = reinterpret_cast<int32_t>(memcpy);
                if (*reinterpret_cast<int32_t*>(&rdi21) == 0xffff8000) {
                    *reinterpret_cast<uint32_t*>(&r9_23) = ebp24;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_23) + 4) = reinterpret_cast<int32_t>(memcpy);
                }
                *reinterpret_cast<int32_t*>(&r8_25) = (rsp3 + rsi20)[1];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_25) + 4) = reinterpret_cast<int32_t>(memcpy);
                r11d26 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r8_25) * *reinterpret_cast<int32_t*>(&rcx18) + 0x4000) >> 15;
                *reinterpret_cast<uint32_t*>(&rbx27) = r11d26;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx27) + 4) = reinterpret_cast<int32_t>(memcpy);
                if (*reinterpret_cast<int32_t*>(&r8_25) == 0xffff8000) {
                    *reinterpret_cast<uint32_t*>(&rbx27) = ebp28;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx27) + 4) = reinterpret_cast<int32_t>(memcpy);
                }
                zf29 = eax10 == 0x8000;
                if (!zf29) {
                    *reinterpret_cast<uint32_t*>(&r9_23) = r10d22;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_23) + 4) = reinterpret_cast<int32_t>(memcpy);
                }
                if (!zf29) {
                    *reinterpret_cast<uint32_t*>(&rbx27) = r11d26;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx27) + 4) = reinterpret_cast<int32_t>(memcpy);
                }
                r10d30 = static_cast<int32_t>(rdi21 + rbx27);
                *reinterpret_cast<int16_t*>(&edi31) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&rdi21) + *reinterpret_cast<int16_t*>(&rbx27));
                if (__intrinsic()) {
                    edi31 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r10d30)) >> 15) ^ 0xffff8000;
                }
                r10d32 = static_cast<int32_t>(r8_25 + r9_23);
                *reinterpret_cast<int16_t*>(&r8d33) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(&r8_25) + *reinterpret_cast<int16_t*>(&r9_23));
                if (__intrinsic()) {
                    r8d33 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&r10d32)) >> 15) ^ 0xffff8000;
                }
                rsp3[rsi20] = *reinterpret_cast<int16_t*>(&r8d33);
                (rsp3 + rsi20)[16] = *reinterpret_cast<int16_t*>(&edi31);
                cf34 = rsi20 < rdx19;
                ++rsi20;
            } while (cf34);
        }
        ++r12_9;
        ++r15_8;
        r13d7 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(&v4) + 2);
        eax35 = -r13d7;
        zf14 = reinterpret_cast<uint1_t>(r13d7 == 0x8000);
        if (zf14) {
            eax35 = ebp36;
        }
        if (*reinterpret_cast<int16_t*>(&r13d7) >= reinterpret_cast<int16_t>(memcpy)) {
            eax35 = r13d7;
        }
        r14_16 = v17;
        if (*reinterpret_cast<int16_t*>(&r14_16) < *reinterpret_cast<int16_t*>(&eax35)) 
            goto addr_efa_31;
        *reinterpret_cast<int32_t*>(&rdi37) = *reinterpret_cast<int16_t*>(&eax35);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(memcpy);
        *reinterpret_cast<int32_t*>(&rsi38) = *reinterpret_cast<int16_t*>(&r14_16);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi38) + 4) = reinterpret_cast<int32_t>(memcpy);
        eax6 = fun_dcf(rdi37, rsi38);
    }
    addr_f28_33:
    goto v39;
    addr_efa_31:
    if (static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r12_9) < 9)) != memcpy) {
        goto addr_f28_33;
    }
}

int64_t g1351 = 0x90249c8d48;

void fun_1366(void* rdi, int64_t rsi, int64_t rdx);

void fun_1376(void* rdi, void* rsi, int64_t rdx);

void fun_1386(void* rdi, void* rsi, int64_t rdx);

void fun_138e(void* rdi, void* rsi, int64_t rdx);

void fun_1396(void* rdi, void* rsi, int64_t rdx);

int64_t g13a3 = 0xd6f0f66c0760f66;

int32_t fun_1432();

int32_t fun_1446(int32_t* rdi, int32_t* rsi, int64_t rdx, int32_t ecx);

void fun_14e7(int64_t rdi, int64_t rsi);

void fun_131f(int32_t* rdi, int32_t* rsi) {
    int64_t rsi3;
    void* rbx4;
    void* rsp5;
    void* r14_6;
    void* rsp7;
    void* rbx8;
    void* rsp9;
    int64_t rax10;
    int64_t rcx11;
    int32_t* rdi12;
    int32_t* rsi13;
    int32_t eax14;
    int64_t v15;

    __asm__("cvtsi2sd xmm0, qword [rsp+0x90]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x98]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi;
    rsi3 = g1351;
    rbx4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x90);
    fun_1366(rbx4, rsi3, 0x140);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    r14_6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) + 64);
    fun_1376(rbx4, r14_6, 0x140);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    rbx8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) + 48);
    fun_1386(r14_6, rbx8, 0x140);
    fun_138e(rbx8, rbx8, 0x140);
    fun_1396(rbx8, rbx8, 0x140);
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8 - 8 + 8 - 8 + 8);
    __asm__("pxor xmm5, xmm5");
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx11 = g13a3;
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pxor xmm6, xmm6");
    do {
        __asm__("movq xmm2, [rsp+rax*2+0x90]");
        __asm__("movq xmm3, [rsp+rax*2+0x98]");
        __asm__("movq xmm4, [rcx+rax*2]");
        __asm__("pcmpeqw xmm4, xmm2");
        __asm__("movq xmm2, [rcx+rax*2+0x8]");
        __asm__("pcmpeqw xmm2, xmm3");
        __asm__("pxor xmm4, xmm0");
        __asm__("punpcklwd xmm4, xmm4");
        __asm__("pand xmm4, xmm1");
        __asm__("paddd xmm5, xmm4");
        __asm__("pxor xmm2, xmm0");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pand xmm2, xmm1");
        __asm__("paddd xmm6, xmm2");
        rax10 = rax10 + 8;
    } while (rax10 != 0xa0);
    __asm__("movdqa [rsp+0x10], xmm6");
    __asm__("movdqa [rsp+0x20], xmm5");
    __asm__("movaps xmm0, [rsp+0x30]");
    __asm__("movaps [rsp], xmm0");
    rdi12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp9) + 64);
    *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax14 = fun_1432();
    if (eax14 != memcpy) {
        rdi12 = reinterpret_cast<int32_t*>(0x143d);
        *reinterpret_cast<int32_t*>(&rsi13) = eax14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_1446(0x143d, rsi13, 0x140, *reinterpret_cast<int32_t*>(&rcx11));
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("paddd xmm1, [rsp+0x20]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd eax, xmm1");
    __asm__("movdqa xmm1, [rsp]");
    __asm__("pcmpeqw xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("pxor xmm0, xmm1");
    __asm__("packsswb xmm0, xmm0");
    __asm__("pmovmskb ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x40]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x48]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi12 = *rsi13;
    __asm__("subsd xmm0, [r15]");
    fun_14e7(0x14e0, rsi13 + 1);
    goto v15;
}

void fun_1366(void* rdi, int64_t rsi, int64_t rdx) {
    void* r14_4;
    void* rbx5;
    void* rsp6;
    void* rbx7;
    void* rsp8;
    int64_t rax9;
    int64_t rcx10;
    int32_t* rdi11;
    int32_t* rsi12;
    int32_t eax13;
    int64_t v14;

    r14_4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64);
    fun_1376(rbx5, r14_4, rdx);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    rbx7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) + 48);
    fun_1386(r14_4, rbx7, rdx);
    fun_138e(rbx7, rbx7, rdx);
    fun_1396(rbx7, rbx7, rdx);
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8 - 8 + 8 - 8 + 8);
    __asm__("pxor xmm5, xmm5");
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx10 = g13a3;
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pxor xmm6, xmm6");
    do {
        __asm__("movq xmm2, [rsp+rax*2+0x90]");
        __asm__("movq xmm3, [rsp+rax*2+0x98]");
        __asm__("movq xmm4, [rcx+rax*2]");
        __asm__("pcmpeqw xmm4, xmm2");
        __asm__("movq xmm2, [rcx+rax*2+0x8]");
        __asm__("pcmpeqw xmm2, xmm3");
        __asm__("pxor xmm4, xmm0");
        __asm__("punpcklwd xmm4, xmm4");
        __asm__("pand xmm4, xmm1");
        __asm__("paddd xmm5, xmm4");
        __asm__("pxor xmm2, xmm0");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pand xmm2, xmm1");
        __asm__("paddd xmm6, xmm2");
        rax9 = rax9 + 8;
    } while (rax9 != 0xa0);
    __asm__("movdqa [rsp+0x10], xmm6");
    __asm__("movdqa [rsp+0x20], xmm5");
    __asm__("movaps xmm0, [rsp+0x30]");
    __asm__("movaps [rsp], xmm0");
    rdi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp8) + 64);
    *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax13 = fun_1432();
    if (eax13 != memcpy) {
        rdi11 = reinterpret_cast<int32_t*>(0x143d);
        *reinterpret_cast<int32_t*>(&rsi12) = eax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_1446(0x143d, rsi12, rdx, *reinterpret_cast<int32_t*>(&rcx10));
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("paddd xmm1, [rsp+0x20]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd eax, xmm1");
    __asm__("movdqa xmm1, [rsp]");
    __asm__("pcmpeqw xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("pxor xmm0, xmm1");
    __asm__("packsswb xmm0, xmm0");
    __asm__("pmovmskb ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x40]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x48]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi11 = *rsi12;
    __asm__("subsd xmm0, [r15]");
    fun_14e7(0x14e0, rsi12 + 1);
    goto v14;
}

int32_t g143d = 0xc031c689;

int32_t fun_1432() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t rdx4;
    int32_t ecx5;
    int64_t v6;

    if (eax1 != memcpy) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_1446(0x143d, rsi2, rdx4, ecx5);
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("paddd xmm1, [rsp+0x20]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd eax, xmm1");
    __asm__("movdqa xmm1, [rsp]");
    __asm__("pcmpeqw xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("pxor xmm0, xmm1");
    __asm__("packsswb xmm0, xmm0");
    __asm__("pmovmskb ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x40]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x48]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g143d = *rsi2;
    __asm__("subsd xmm0, [r15]");
    fun_14e7(0x14e0, rsi2 + 1);
    goto v6;
}

int32_t fun_1446(int32_t* rdi, int32_t* rsi, int64_t rdx, int32_t ecx) {
    int64_t v5;

    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("paddd xmm1, [rsp+0x20]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd eax, xmm1");
    __asm__("movdqa xmm1, [rsp]");
    __asm__("pcmpeqw xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("pxor xmm0, xmm1");
    __asm__("packsswb xmm0, xmm0");
    __asm__("pmovmskb ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x40]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x48]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r15]");
    fun_14e7(0x14e0, rsi + 1);
    goto v5;
}

void fun_14e7(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_1376(void* rdi, void* rsi, int64_t rdx) {
    void* rbx4;
    void* r14_5;
    void* rsp6;
    int64_t rax7;
    int64_t rcx8;
    int32_t* rdi9;
    int32_t* rsi10;
    int32_t eax11;
    int64_t v12;

    rbx4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 48);
    fun_1386(r14_5, rbx4, rdx);
    fun_138e(rbx4, rbx4, rdx);
    fun_1396(rbx4, rbx4, rdx);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 + 8 - 8 + 8);
    __asm__("pxor xmm5, xmm5");
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx8 = g13a3;
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pxor xmm6, xmm6");
    do {
        __asm__("movq xmm2, [rsp+rax*2+0x90]");
        __asm__("movq xmm3, [rsp+rax*2+0x98]");
        __asm__("movq xmm4, [rcx+rax*2]");
        __asm__("pcmpeqw xmm4, xmm2");
        __asm__("movq xmm2, [rcx+rax*2+0x8]");
        __asm__("pcmpeqw xmm2, xmm3");
        __asm__("pxor xmm4, xmm0");
        __asm__("punpcklwd xmm4, xmm4");
        __asm__("pand xmm4, xmm1");
        __asm__("paddd xmm5, xmm4");
        __asm__("pxor xmm2, xmm0");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pand xmm2, xmm1");
        __asm__("paddd xmm6, xmm2");
        rax7 = rax7 + 8;
    } while (rax7 != 0xa0);
    __asm__("movdqa [rsp+0x10], xmm6");
    __asm__("movdqa [rsp+0x20], xmm5");
    __asm__("movaps xmm0, [rsp+0x30]");
    __asm__("movaps [rsp], xmm0");
    rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + 64);
    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax11 = fun_1432();
    if (eax11 != memcpy) {
        rdi9 = reinterpret_cast<int32_t*>(0x143d);
        *reinterpret_cast<int32_t*>(&rsi10) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_1446(0x143d, rsi10, rdx, *reinterpret_cast<int32_t*>(&rcx8));
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("paddd xmm1, [rsp+0x20]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd eax, xmm1");
    __asm__("movdqa xmm1, [rsp]");
    __asm__("pcmpeqw xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("pxor xmm0, xmm1");
    __asm__("packsswb xmm0, xmm0");
    __asm__("pmovmskb ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x40]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x48]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi9 = *rsi10;
    __asm__("subsd xmm0, [r15]");
    fun_14e7(0x14e0, rsi10 + 1);
    goto v12;
}

void fun_12d0(int64_t rdi, int64_t rsi);

void fun_12d8(int64_t rdi, int64_t rsi);

int32_t fun_130b();

void fun_12c5() {
    int64_t r14_1;
    int64_t rbx2;
    int64_t rbx3;
    void* rsp4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t eax7;
    void* rsp8;
    int64_t rsi9;
    void* rbx10;
    void* rsp11;
    void* r14_12;
    void* rsp13;
    void* rbx14;
    void* rsp15;
    int64_t rax16;
    int64_t rcx17;
    int32_t* rdi18;
    int32_t* rsi19;
    int32_t eax20;
    int64_t v21;

    fun_12d0(r14_1, rbx2);
    fun_12d8(rbx3, rbx2);
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 + 8 + 72 + 8 + 8 - 8 - 8 - 8 - 0x1d0);
    rdi5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp4) + 0x90);
    *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax7 = fun_130b();
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    if (eax7 != memcpy) {
        rdi5 = reinterpret_cast<int32_t*>(0x1316);
        *reinterpret_cast<int32_t*>(&rsi6) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_131f(0x1316, rsi6);
        rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x90]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x98]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi5 = *rsi6;
    rsi9 = g1351;
    rbx10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) + 0x90);
    fun_1366(rbx10, rsi9, 0x140);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
    r14_12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) + 64);
    fun_1376(rbx10, r14_12, 0x140);
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
    rbx14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) + 48);
    fun_1386(r14_12, rbx14, 0x140);
    fun_138e(rbx14, rbx14, 0x140);
    fun_1396(rbx14, rbx14, 0x140);
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8 - 8 + 8 - 8 + 8);
    __asm__("pxor xmm5, xmm5");
    *reinterpret_cast<int32_t*>(&rax16) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx17 = g13a3;
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pxor xmm6, xmm6");
    do {
        __asm__("movq xmm2, [rsp+rax*2+0x90]");
        __asm__("movq xmm3, [rsp+rax*2+0x98]");
        __asm__("movq xmm4, [rcx+rax*2]");
        __asm__("pcmpeqw xmm4, xmm2");
        __asm__("movq xmm2, [rcx+rax*2+0x8]");
        __asm__("pcmpeqw xmm2, xmm3");
        __asm__("pxor xmm4, xmm0");
        __asm__("punpcklwd xmm4, xmm4");
        __asm__("pand xmm4, xmm1");
        __asm__("paddd xmm5, xmm4");
        __asm__("pxor xmm2, xmm0");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pand xmm2, xmm1");
        __asm__("paddd xmm6, xmm2");
        rax16 = rax16 + 8;
    } while (rax16 != 0xa0);
    __asm__("movdqa [rsp+0x10], xmm6");
    __asm__("movdqa [rsp+0x20], xmm5");
    __asm__("movaps xmm0, [rsp+0x30]");
    __asm__("movaps [rsp], xmm0");
    rdi18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp15) + 64);
    *reinterpret_cast<int32_t*>(&rsi19) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax20 = fun_1432();
    if (eax20 != memcpy) {
        rdi18 = reinterpret_cast<int32_t*>(0x143d);
        *reinterpret_cast<int32_t*>(&rsi19) = eax20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_1446(0x143d, rsi19, 0x140, *reinterpret_cast<int32_t*>(&rcx17));
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("paddd xmm1, [rsp+0x20]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd eax, xmm1");
    __asm__("movdqa xmm1, [rsp]");
    __asm__("pcmpeqw xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("pxor xmm0, xmm1");
    __asm__("packsswb xmm0, xmm0");
    __asm__("pmovmskb ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x40]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x48]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi18 = *rsi19;
    __asm__("subsd xmm0, [r15]");
    fun_14e7(0x14e0, rsi19 + 1);
    goto v21;
}

void fun_1386(void* rdi, void* rsi, int64_t rdx) {
    void* rbx4;
    void* rbx5;
    void* rsp6;
    int64_t rax7;
    int64_t rcx8;
    int32_t* rdi9;
    int32_t* rsi10;
    int32_t eax11;
    int64_t v12;

    fun_138e(rbx4, rsi, rdx);
    fun_1396(rbx5, rsi, rdx);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 8 + 8);
    __asm__("pxor xmm5, xmm5");
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx8 = g13a3;
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pxor xmm6, xmm6");
    do {
        __asm__("movq xmm2, [rsp+rax*2+0x90]");
        __asm__("movq xmm3, [rsp+rax*2+0x98]");
        __asm__("movq xmm4, [rcx+rax*2]");
        __asm__("pcmpeqw xmm4, xmm2");
        __asm__("movq xmm2, [rcx+rax*2+0x8]");
        __asm__("pcmpeqw xmm2, xmm3");
        __asm__("pxor xmm4, xmm0");
        __asm__("punpcklwd xmm4, xmm4");
        __asm__("pand xmm4, xmm1");
        __asm__("paddd xmm5, xmm4");
        __asm__("pxor xmm2, xmm0");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pand xmm2, xmm1");
        __asm__("paddd xmm6, xmm2");
        rax7 = rax7 + 8;
    } while (rax7 != 0xa0);
    __asm__("movdqa [rsp+0x10], xmm6");
    __asm__("movdqa [rsp+0x20], xmm5");
    __asm__("movaps xmm0, [rsp+0x30]");
    __asm__("movaps [rsp], xmm0");
    rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + 64);
    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax11 = fun_1432();
    if (eax11 != memcpy) {
        rdi9 = reinterpret_cast<int32_t*>(0x143d);
        *reinterpret_cast<int32_t*>(&rsi10) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_1446(0x143d, rsi10, rdx, *reinterpret_cast<int32_t*>(&rcx8));
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("paddd xmm1, [rsp+0x20]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd eax, xmm1");
    __asm__("movdqa xmm1, [rsp]");
    __asm__("pcmpeqw xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("pxor xmm0, xmm1");
    __asm__("packsswb xmm0, xmm0");
    __asm__("pmovmskb ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x40]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x48]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi9 = *rsi10;
    __asm__("subsd xmm0, [r15]");
    fun_14e7(0x14e0, rsi10 + 1);
    goto v12;
}

void fun_12d0(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    void* rsp4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t eax7;
    void* rsp8;
    int64_t rsi9;
    void* rbx10;
    void* rsp11;
    void* r14_12;
    void* rsp13;
    void* rbx14;
    void* rsp15;
    int64_t rax16;
    int64_t rcx17;
    int32_t* rdi18;
    int32_t* rsi19;
    int32_t eax20;
    int64_t v21;

    fun_12d8(rbx3, rsi);
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 72 + 8 + 8 - 8 - 8 - 8 - 0x1d0);
    rdi5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp4) + 0x90);
    *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax7 = fun_130b();
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    if (eax7 != memcpy) {
        rdi5 = reinterpret_cast<int32_t*>(0x1316);
        *reinterpret_cast<int32_t*>(&rsi6) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_131f(0x1316, rsi6);
        rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x90]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x98]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi5 = *rsi6;
    rsi9 = g1351;
    rbx10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) + 0x90);
    fun_1366(rbx10, rsi9, 0x140);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
    r14_12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) + 64);
    fun_1376(rbx10, r14_12, 0x140);
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
    rbx14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) + 48);
    fun_1386(r14_12, rbx14, 0x140);
    fun_138e(rbx14, rbx14, 0x140);
    fun_1396(rbx14, rbx14, 0x140);
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8 - 8 + 8 - 8 + 8);
    __asm__("pxor xmm5, xmm5");
    *reinterpret_cast<int32_t*>(&rax16) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx17 = g13a3;
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pxor xmm6, xmm6");
    do {
        __asm__("movq xmm2, [rsp+rax*2+0x90]");
        __asm__("movq xmm3, [rsp+rax*2+0x98]");
        __asm__("movq xmm4, [rcx+rax*2]");
        __asm__("pcmpeqw xmm4, xmm2");
        __asm__("movq xmm2, [rcx+rax*2+0x8]");
        __asm__("pcmpeqw xmm2, xmm3");
        __asm__("pxor xmm4, xmm0");
        __asm__("punpcklwd xmm4, xmm4");
        __asm__("pand xmm4, xmm1");
        __asm__("paddd xmm5, xmm4");
        __asm__("pxor xmm2, xmm0");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pand xmm2, xmm1");
        __asm__("paddd xmm6, xmm2");
        rax16 = rax16 + 8;
    } while (rax16 != 0xa0);
    __asm__("movdqa [rsp+0x10], xmm6");
    __asm__("movdqa [rsp+0x20], xmm5");
    __asm__("movaps xmm0, [rsp+0x30]");
    __asm__("movaps [rsp], xmm0");
    rdi18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp15) + 64);
    *reinterpret_cast<int32_t*>(&rsi19) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax20 = fun_1432();
    if (eax20 != memcpy) {
        rdi18 = reinterpret_cast<int32_t*>(0x143d);
        *reinterpret_cast<int32_t*>(&rsi19) = eax20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_1446(0x143d, rsi19, 0x140, *reinterpret_cast<int32_t*>(&rcx17));
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("paddd xmm1, [rsp+0x20]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd eax, xmm1");
    __asm__("movdqa xmm1, [rsp]");
    __asm__("pcmpeqw xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("pxor xmm0, xmm1");
    __asm__("packsswb xmm0, xmm0");
    __asm__("pmovmskb ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x40]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x48]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi18 = *rsi19;
    __asm__("subsd xmm0, [r15]");
    fun_14e7(0x14e0, rsi19 + 1);
    goto v21;
}

void fun_138e(void* rdi, void* rsi, int64_t rdx) {
    void* rbx4;
    void* rsp5;
    int64_t rax6;
    int64_t rcx7;
    int32_t* rdi8;
    int32_t* rsi9;
    int32_t eax10;
    int64_t v11;

    fun_1396(rbx4, rsi, rdx);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    __asm__("pxor xmm5, xmm5");
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx7 = g13a3;
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pxor xmm6, xmm6");
    do {
        __asm__("movq xmm2, [rsp+rax*2+0x90]");
        __asm__("movq xmm3, [rsp+rax*2+0x98]");
        __asm__("movq xmm4, [rcx+rax*2]");
        __asm__("pcmpeqw xmm4, xmm2");
        __asm__("movq xmm2, [rcx+rax*2+0x8]");
        __asm__("pcmpeqw xmm2, xmm3");
        __asm__("pxor xmm4, xmm0");
        __asm__("punpcklwd xmm4, xmm4");
        __asm__("pand xmm4, xmm1");
        __asm__("paddd xmm5, xmm4");
        __asm__("pxor xmm2, xmm0");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pand xmm2, xmm1");
        __asm__("paddd xmm6, xmm2");
        rax6 = rax6 + 8;
    } while (rax6 != 0xa0);
    __asm__("movdqa [rsp+0x10], xmm6");
    __asm__("movdqa [rsp+0x20], xmm5");
    __asm__("movaps xmm0, [rsp+0x30]");
    __asm__("movaps [rsp], xmm0");
    rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + 64);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax10 = fun_1432();
    if (eax10 != memcpy) {
        rdi8 = reinterpret_cast<int32_t*>(0x143d);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_1446(0x143d, rsi9, rdx, *reinterpret_cast<int32_t*>(&rcx7));
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("paddd xmm1, [rsp+0x20]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd eax, xmm1");
    __asm__("movdqa xmm1, [rsp]");
    __asm__("pcmpeqw xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("pxor xmm0, xmm1");
    __asm__("packsswb xmm0, xmm0");
    __asm__("pmovmskb ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x40]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x48]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r15]");
    fun_14e7(0x14e0, rsi9 + 1);
    goto v11;
}

void fun_12d8(int64_t rdi, int64_t rsi) {
    void* rsp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t eax6;
    void* rsp7;
    int64_t rsi8;
    void* rbx9;
    void* rsp10;
    void* r14_11;
    void* rsp12;
    void* rbx13;
    void* rsp14;
    int64_t rax15;
    int64_t rcx16;
    int32_t* rdi17;
    int32_t* rsi18;
    int32_t eax19;
    int64_t v20;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 72 + 8 + 8 - 8 - 8 - 8 - 0x1d0);
    rdi4 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp3) + 0x90);
    *reinterpret_cast<int32_t*>(&rsi5) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax6 = fun_130b();
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
    if (eax6 != memcpy) {
        rdi4 = reinterpret_cast<int32_t*>(0x1316);
        *reinterpret_cast<int32_t*>(&rsi5) = eax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_131f(0x1316, rsi5);
        rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x90]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x98]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi4 = *rsi5;
    rsi8 = g1351;
    rbx9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) + 0x90);
    fun_1366(rbx9, rsi8, 0x140);
    rsp10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8);
    r14_11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) + 64);
    fun_1376(rbx9, r14_11, 0x140);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp10) - 8 + 8);
    rbx13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) + 48);
    fun_1386(r14_11, rbx13, 0x140);
    fun_138e(rbx13, rbx13, 0x140);
    fun_1396(rbx13, rbx13, 0x140);
    rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8 - 8 + 8 - 8 + 8);
    __asm__("pxor xmm5, xmm5");
    *reinterpret_cast<int32_t*>(&rax15) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx16 = g13a3;
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pxor xmm6, xmm6");
    do {
        __asm__("movq xmm2, [rsp+rax*2+0x90]");
        __asm__("movq xmm3, [rsp+rax*2+0x98]");
        __asm__("movq xmm4, [rcx+rax*2]");
        __asm__("pcmpeqw xmm4, xmm2");
        __asm__("movq xmm2, [rcx+rax*2+0x8]");
        __asm__("pcmpeqw xmm2, xmm3");
        __asm__("pxor xmm4, xmm0");
        __asm__("punpcklwd xmm4, xmm4");
        __asm__("pand xmm4, xmm1");
        __asm__("paddd xmm5, xmm4");
        __asm__("pxor xmm2, xmm0");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pand xmm2, xmm1");
        __asm__("paddd xmm6, xmm2");
        rax15 = rax15 + 8;
    } while (rax15 != 0xa0);
    __asm__("movdqa [rsp+0x10], xmm6");
    __asm__("movdqa [rsp+0x20], xmm5");
    __asm__("movaps xmm0, [rsp+0x30]");
    __asm__("movaps [rsp], xmm0");
    rdi17 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp14) + 64);
    *reinterpret_cast<int32_t*>(&rsi18) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax19 = fun_1432();
    if (eax19 != memcpy) {
        rdi17 = reinterpret_cast<int32_t*>(0x143d);
        *reinterpret_cast<int32_t*>(&rsi18) = eax19;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_1446(0x143d, rsi18, 0x140, *reinterpret_cast<int32_t*>(&rcx16));
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("paddd xmm1, [rsp+0x20]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd eax, xmm1");
    __asm__("movdqa xmm1, [rsp]");
    __asm__("pcmpeqw xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("pxor xmm0, xmm1");
    __asm__("packsswb xmm0, xmm0");
    __asm__("pmovmskb ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x40]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x48]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi17 = *rsi18;
    __asm__("subsd xmm0, [r15]");
    fun_14e7(0x14e0, rsi18 + 1);
    goto v20;
}

void fun_1396(void* rdi, void* rsi, int64_t rdx) {
    void* rsp4;
    int64_t rax5;
    int64_t rcx6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t eax9;
    int64_t v10;

    rsp4 = __zero_stack_offset();
    __asm__("pxor xmm5, xmm5");
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx6 = g13a3;
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pxor xmm6, xmm6");
    do {
        __asm__("movq xmm2, [rsp+rax*2+0x90]");
        __asm__("movq xmm3, [rsp+rax*2+0x98]");
        __asm__("movq xmm4, [rcx+rax*2]");
        __asm__("pcmpeqw xmm4, xmm2");
        __asm__("movq xmm2, [rcx+rax*2+0x8]");
        __asm__("pcmpeqw xmm2, xmm3");
        __asm__("pxor xmm4, xmm0");
        __asm__("punpcklwd xmm4, xmm4");
        __asm__("pand xmm4, xmm1");
        __asm__("paddd xmm5, xmm4");
        __asm__("pxor xmm2, xmm0");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pand xmm2, xmm1");
        __asm__("paddd xmm6, xmm2");
        rax5 = rax5 + 8;
    } while (rax5 != 0xa0);
    __asm__("movdqa [rsp+0x10], xmm6");
    __asm__("movdqa [rsp+0x20], xmm5");
    __asm__("movaps xmm0, [rsp+0x30]");
    __asm__("movaps [rsp], xmm0");
    rdi7 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp4) + 64);
    *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax9 = fun_1432();
    if (eax9 != memcpy) {
        rdi7 = reinterpret_cast<int32_t*>(0x143d);
        *reinterpret_cast<int32_t*>(&rsi8) = eax9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_1446(0x143d, rsi8, rdx, *reinterpret_cast<int32_t*>(&rcx6));
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("paddd xmm1, [rsp+0x20]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd eax, xmm1");
    __asm__("movdqa xmm1, [rsp]");
    __asm__("pcmpeqw xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("pxor xmm0, xmm1");
    __asm__("packsswb xmm0, xmm0");
    __asm__("pmovmskb ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x40]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x48]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi7 = *rsi8;
    __asm__("subsd xmm0, [r15]");
    fun_14e7(0x14e0, rsi8 + 1);
    goto v10;
}

int32_t g1316 = 0xc031c689;

int32_t fun_130b() {
    void* rsp1;
    int32_t eax2;
    int32_t* rsi3;
    int32_t eax4;
    int64_t rsi5;
    void* rbx6;
    void* rsp7;
    void* r14_8;
    void* rsp9;
    void* rbx10;
    void* rsp11;
    int64_t rax12;
    int64_t rcx13;
    int32_t* rdi14;
    int32_t* rsi15;
    int32_t eax16;
    int64_t v17;

    rsp1 = __zero_stack_offset();
    if (eax2 != memcpy) {
        *reinterpret_cast<int32_t*>(&rsi3) = eax4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_131f(0x1316, rsi3);
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x90]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x98]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    g1316 = *rsi3;
    rsi5 = g1351;
    rbx6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) + 0x90);
    fun_1366(rbx6, rsi5, 0x140);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
    r14_8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) + 64);
    fun_1376(rbx6, r14_8, 0x140);
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8);
    rbx10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) + 48);
    fun_1386(r14_8, rbx10, 0x140);
    fun_138e(rbx10, rbx10, 0x140);
    fun_1396(rbx10, rbx10, 0x140);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8 - 8 + 8 - 8 + 8);
    __asm__("pxor xmm5, xmm5");
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx13 = g13a3;
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pxor xmm6, xmm6");
    do {
        __asm__("movq xmm2, [rsp+rax*2+0x90]");
        __asm__("movq xmm3, [rsp+rax*2+0x98]");
        __asm__("movq xmm4, [rcx+rax*2]");
        __asm__("pcmpeqw xmm4, xmm2");
        __asm__("movq xmm2, [rcx+rax*2+0x8]");
        __asm__("pcmpeqw xmm2, xmm3");
        __asm__("pxor xmm4, xmm0");
        __asm__("punpcklwd xmm4, xmm4");
        __asm__("pand xmm4, xmm1");
        __asm__("paddd xmm5, xmm4");
        __asm__("pxor xmm2, xmm0");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pand xmm2, xmm1");
        __asm__("paddd xmm6, xmm2");
        rax12 = rax12 + 8;
    } while (rax12 != 0xa0);
    __asm__("movdqa [rsp+0x10], xmm6");
    __asm__("movdqa [rsp+0x20], xmm5");
    __asm__("movaps xmm0, [rsp+0x30]");
    __asm__("movaps [rsp], xmm0");
    rdi14 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp11) + 64);
    *reinterpret_cast<int32_t*>(&rsi15) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(memcpy);
    eax16 = fun_1432();
    if (eax16 != memcpy) {
        rdi14 = reinterpret_cast<int32_t*>(0x143d);
        *reinterpret_cast<int32_t*>(&rsi15) = eax16;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(memcpy);
        fun_1446(0x143d, rsi15, 0x140, *reinterpret_cast<int32_t*>(&rcx13));
    }
    __asm__("movdqa xmm1, [rsp+0x10]");
    __asm__("paddd xmm1, [rsp+0x20]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd eax, xmm1");
    __asm__("movdqa xmm1, [rsp]");
    __asm__("pcmpeqw xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm0, xmm0");
    __asm__("pxor xmm0, xmm1");
    __asm__("packsswb xmm0, xmm0");
    __asm__("pmovmskb ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x40]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x48]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi14 = *rsi15;
    __asm__("subsd xmm0, [r15]");
    fun_14e7(0x14e0, rsi15 + 1);
    goto v17;
}

void memcpy(int64_t rdi, int64_t rsi) {
}

void fun_124(int64_t rdi) {
    __asm__("cli ");
}

void fun_160() {
}

void fun_170(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8) {
    int1_t less6;
    int64_t rax7;
    int64_t rcx8;

    if (less6) {
        *reinterpret_cast<int32_t*>(&rax7) = *reinterpret_cast<int32_t*>(&rdx);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    rcx8 = rcx - r8;
    if (rcx8 + rcx8 < rax7) {
    }
}

int64_t fun_198() {
    int1_t less1;
    int64_t rcx2;
    int64_t rax3;
    uint32_t edi4;
    int64_t r8_5;
    int64_t rax6;
    int64_t rdx7;
    int64_t rcx8;
    int64_t rcx9;
    int64_t rdi10;
    uint32_t esi11;
    int64_t rcx12;
    int32_t esi13;
    int1_t less14;
    int64_t rax15;
    int64_t r8_16;
    int64_t rax17;
    int64_t rdx18;
    int64_t rcx19;
    int64_t rsi20;
    int64_t rcx21;
    uint32_t edi22;
    int1_t less23;
    int64_t rax24;
    int64_t r8_25;
    int64_t rax26;
    int64_t rdx27;
    int64_t rcx28;
    int64_t rdi29;
    int64_t rcx30;
    int32_t esi31;
    int1_t less32;
    int64_t rax33;
    int64_t r8_34;
    int64_t rax35;
    int64_t rdx36;
    int64_t rcx37;
    int64_t rsi38;
    int64_t rcx39;
    uint32_t edi40;
    int1_t less41;
    int64_t rax42;
    int64_t r8_43;
    int64_t rax44;
    int64_t rdx45;
    int64_t rcx46;
    int64_t rdi47;
    int64_t rcx48;
    int32_t esi49;
    int1_t less50;
    int64_t rax51;
    int64_t r8_52;
    int64_t rax53;
    int64_t rdx54;
    int64_t rcx55;
    int64_t rsi56;
    int64_t rcx57;
    uint32_t edi58;
    int1_t less59;
    int64_t rax60;
    int64_t r8_61;
    int64_t rax62;
    int64_t rdx63;
    int64_t rcx64;
    int64_t rdi65;
    int64_t rcx66;
    int32_t esi67;
    int1_t less68;
    int64_t rax69;
    int64_t r8_70;
    int64_t rax71;
    int64_t rdx72;
    int64_t rcx73;
    int64_t rsi74;
    int64_t rcx75;
    uint32_t edi76;
    int1_t less77;
    int64_t rax78;
    int64_t rdx79;
    int64_t rax80;
    int64_t rcx81;
    int64_t rdi82;
    int64_t rdx83;
    int64_t rax84;
    int64_t rax85;

    less1 = rcx2 < rax3;
    *reinterpret_cast<unsigned char*>(&edi4) = reinterpret_cast<uint1_t>(!less1);
    r8_5 = rax6;
    if (less1) {
        r8_5 = rdx7;
    }
    rcx8 = rcx9 - r8_5;
    *reinterpret_cast<uint32_t*>(&rdi10) = edi4 | esi11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx12 = rcx8 + rcx8;
    esi13 = reinterpret_cast<int32_t>(memcpy);
    less14 = rcx12 < rax15;
    *reinterpret_cast<unsigned char*>(&esi13) = reinterpret_cast<uint1_t>(!less14);
    r8_16 = rax17;
    if (less14) {
        r8_16 = rdx18;
    }
    rcx19 = rcx12 - r8_16;
    *reinterpret_cast<int32_t*>(&rsi20) = esi13 + esi13;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx21 = rcx19 + rcx19;
    edi22 = reinterpret_cast<uint32_t>(memcpy);
    less23 = rcx21 < rax24;
    r8_25 = rax26;
    if (less23) {
        r8_25 = rdx27;
    }
    *reinterpret_cast<unsigned char*>(&edi22) = reinterpret_cast<uint1_t>(!less23);
    rcx28 = rcx21 - r8_25;
    *reinterpret_cast<uint32_t*>(&rdi29) = edi22 | static_cast<uint32_t>(rsi20 + rdi10 * 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx30 = rcx28 + rcx28;
    esi31 = reinterpret_cast<int32_t>(memcpy);
    less32 = rcx30 < rax33;
    *reinterpret_cast<unsigned char*>(&esi31) = reinterpret_cast<uint1_t>(!less32);
    r8_34 = rax35;
    if (less32) {
        r8_34 = rdx36;
    }
    rcx37 = rcx30 - r8_34;
    *reinterpret_cast<int32_t*>(&rsi38) = esi31 + esi31;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi38) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx39 = rcx37 + rcx37;
    edi40 = reinterpret_cast<uint32_t>(memcpy);
    less41 = rcx39 < rax42;
    *reinterpret_cast<unsigned char*>(&edi40) = reinterpret_cast<uint1_t>(!less41);
    r8_43 = rax44;
    if (less41) {
        r8_43 = rdx45;
    }
    rcx46 = rcx39 - r8_43;
    *reinterpret_cast<uint32_t*>(&rdi47) = edi40 | static_cast<uint32_t>(rsi38 + rdi29 * 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx48 = rcx46 + rcx46;
    esi49 = reinterpret_cast<int32_t>(memcpy);
    less50 = rcx48 < rax51;
    r8_52 = rax53;
    if (less50) {
        r8_52 = rdx54;
    }
    *reinterpret_cast<unsigned char*>(&esi49) = reinterpret_cast<uint1_t>(!less50);
    rcx55 = rcx48 - r8_52;
    *reinterpret_cast<int32_t*>(&rsi56) = esi49 + esi49;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi56) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx57 = rcx55 + rcx55;
    edi58 = reinterpret_cast<uint32_t>(memcpy);
    less59 = rcx57 < rax60;
    *reinterpret_cast<unsigned char*>(&edi58) = reinterpret_cast<uint1_t>(!less59);
    r8_61 = rax62;
    if (less59) {
        r8_61 = rdx63;
    }
    rcx64 = rcx57 - r8_61;
    *reinterpret_cast<uint32_t*>(&rdi65) = edi58 | static_cast<uint32_t>(rsi56 + rdi47 * 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi65) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx66 = rcx64 + rcx64;
    esi67 = reinterpret_cast<int32_t>(memcpy);
    less68 = rcx66 < rax69;
    *reinterpret_cast<unsigned char*>(&esi67) = reinterpret_cast<uint1_t>(!less68);
    r8_70 = rax71;
    if (less68) {
        r8_70 = rdx72;
    }
    rcx73 = rcx66 - r8_70;
    *reinterpret_cast<int32_t*>(&rsi74) = esi67 + esi67;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi74) + 4) = reinterpret_cast<int32_t>(memcpy);
    rcx75 = rcx73 + rcx73;
    edi76 = reinterpret_cast<uint32_t>(memcpy);
    less77 = rcx75 < rax78;
    if (!less77) {
        rdx79 = rax80;
    }
    *reinterpret_cast<unsigned char*>(&edi76) = reinterpret_cast<uint1_t>(!less77);
    rcx81 = rcx75 - rdx79;
    *reinterpret_cast<uint32_t*>(&rdi82) = edi76 | static_cast<uint32_t>(rsi74 + rdi65 * 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi82) + 4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(&rdx83) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx83) + 4) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<unsigned char*>(&rdx83) = reinterpret_cast<uint1_t>(rcx81 + rcx81 >= rax84);
    *reinterpret_cast<int32_t*>(&rax85) = static_cast<int32_t>(rdx83 + rdi82 * 2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax85) + 4) = reinterpret_cast<int32_t>(memcpy);
    return rax85;
}

int64_t fun_283() {
    return memcpy;
}

int64_t Quantization_and_coding() {
    int64_t rax1;
    int32_t eax2;

    __asm__("movdqu xmm0, [rdi]");
    __asm__("movdqa xmm1, xmm0");
    __asm__("punpcklwd xmm0, xmm0");
    __asm__("pmaddwd xmm0, [rip+0x0]");
    __asm__("punpckhwd xmm1, xmm1");
    __asm__("pmaddwd xmm1, [rip+0x0]");
    __asm__("pslld xmm1, 0x1");
    __asm__("psrad xmm1, 0x10");
    __asm__("pslld xmm0, 0x1");
    __asm__("psrad xmm0, 0x10");
    __asm__("packssdw xmm0, xmm1");
    __asm__("paddsw xmm0, [rip+0x0]");
    __asm__("pextrw eax, xmm0, 0x3");
    *reinterpret_cast<int32_t*>(&rax1) = eax2 + 0x100;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(memcpy);
    __asm__("pextrw ecx, xmm0, 0x5");
    __asm__("pextrw edx, xmm0, 0x6");
    __asm__("pextrw esi, xmm0, 0x7");
    __asm__("movdqa xmm1, xmm0");
    __asm__("pcmpgtw xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, xmm0");
    __asm__("pinsrw xmm2, ax, 0x3");
    __asm__("pinsrw xmm2, cx, 0x5");
    __asm__("pinsrw xmm2, dx, 0x6");
    __asm__("pinsrw xmm2, si, 0x7");
    __asm__("psraw xmm2, 0x9");
    __asm__("paddw xmm2, [rip+0x0]");
    __asm__("pcmpgtw xmm0, [rip+0x0]");
    __asm__("pand xmm0, xmm2");
    __asm__("movdqa xmm2, xmm1");
    __asm__("pandn xmm2, xmm0");
    __asm__("pand xmm1, [rip+0x0]");
    __asm__("por xmm1, xmm2");
    __asm__("movdqu [rdi], xmm1");
    return rax1;
}

struct s0 {
    int16_t f0;
    int16_t f2;
    int16_t f4;
    int16_t f6;
    int16_t f8;
    int16_t fa;
    int16_t fc;
    int16_t fe;
    int64_t f10;
    int64_t f18;
    int64_t f20;
    int64_t f28;
    int64_t f30;
    int64_t f38;
    int64_t f40;
};

int64_t g3a1 = 0x418dc1290204b60f;

struct s1 {
    int16_t f0;
    int16_t f2;
};

struct s0* Autocorrelation(struct s0* rdi, struct s0* rsi) {
    int64_t rax3;
    int32_t v4;
    uint64_t rax5;
    uint64_t rdx6;
    int32_t ecx7;
    int1_t cf8;
    int64_t rax9;
    int64_t rdx10;
    int64_t rcx11;
    int32_t eax12;
    uint32_t ecx13;
    uint32_t eax14;
    int64_t rcx15;
    uint32_t r8d16;
    void* rdx17;
    uint32_t r8d18;
    int64_t r8_19;
    struct s0* v20;
    int64_t rdx21;
    int64_t r9_22;
    int64_t r11_23;
    int64_t r15_24;
    int64_t r12_25;
    int64_t rsi26;
    int64_t rbx27;
    int64_t v28;
    int64_t v29;
    int64_t v30;
    int64_t r15_31;
    int64_t rax32;
    int64_t r8_33;
    struct s0* v34;
    struct s1* r12_35;
    int64_t rcx36;
    int64_t r14_37;
    int64_t rsi38;
    int64_t rdi39;
    int32_t ebp40;
    int64_t rdx41;
    int64_t rax42;
    int64_t rsi43;
    int64_t rcx44;
    int64_t rdi45;
    int64_t r8_46;
    int64_t r9_47;
    int64_t r10_48;
    int64_t r11_49;
    int64_t r13_50;
    struct s0* rax51;

    __asm__("pxor xmm0, xmm0");
    *reinterpret_cast<int32_t*>(&rax3) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = reinterpret_cast<int32_t>(memcpy);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pxor xmm2, xmm2");
    do {
        __asm__("movdqu xmm5, [rdi+rax*2]");
        __asm__("movdqu xmm4, [rdi+rax*2+0x10]");
        __asm__("pxor xmm6, xmm6");
        __asm__("pcmpgtw xmm6, xmm5");
        __asm__("pxor xmm3, xmm3");
        __asm__("pcmpgtw xmm3, xmm4");
        __asm__("movdqa xmm7, xmm5");
        __asm__("pcmpeqw xmm7, xmm1");
        __asm__("movdqa xmm8, xmm4");
        __asm__("pcmpeqw xmm8, xmm1");
        __asm__("pxor xmm9, xmm9");
        __asm__("psubw xmm9, xmm5");
        __asm__("pxor xmm10, xmm10");
        __asm__("psubw xmm10, xmm4");
        __asm__("movdqa xmm11, xmm7");
        __asm__("pandn xmm11, xmm9");
        __asm__("psrlw xmm7, 0x1");
        __asm__("por xmm7, xmm11");
        __asm__("movdqa xmm9, xmm8");
        __asm__("pandn xmm9, xmm10");
        __asm__("psrlw xmm8, 0x1");
        __asm__("por xmm8, xmm9");
        __asm__("pand xmm7, xmm6");
        __asm__("pandn xmm6, xmm5");
        __asm__("por xmm6, xmm7");
        __asm__("pmaxsw xmm0, xmm6");
        __asm__("pand xmm8, xmm3");
        __asm__("pandn xmm3, xmm4");
        __asm__("por xmm3, xmm8");
        __asm__("pmaxsw xmm2, xmm3");
        rax3 = rax3 + 16;
    } while (rax3 != 0xa0);
    __asm__("pmaxsw xmm0, xmm2");
    __asm__("pshufd xmm1, xmm0, 0xee");
    __asm__("pmaxsw xmm1, xmm0");
    __asm__("pshufd xmm0, xmm1, 0x55");
    __asm__("pmaxsw xmm0, xmm1");
    __asm__("movdqa xmm1, xmm0");
    __asm__("psrld xmm1, 0x10");
    __asm__("pmaxsw xmm1, xmm0");
    __asm__("movd eax, xmm1");
    if (*reinterpret_cast<uint16_t*>(&rax3) == memcpy) {
        v4 = reinterpret_cast<int32_t>(memcpy);
    } else {
        *reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<uint16_t*>(&rax3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(memcpy);
        rdx6 = rax5 >> 8;
        ecx7 = reinterpret_cast<int32_t>(memcpy);
        cf8 = *reinterpret_cast<uint32_t*>(&rax5) < 0x100;
        *reinterpret_cast<unsigned char*>(&ecx7) = reinterpret_cast<uint1_t>(!cf8);
        if (cf8) {
            rdx6 = rax5;
        }
        *reinterpret_cast<uint32_t*>(&rax9) = *reinterpret_cast<unsigned char*>(&rdx6);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(memcpy);
        rdx10 = g3a1;
        *reinterpret_cast<uint32_t*>(&rcx11) = (ecx7 << 3) - *reinterpret_cast<unsigned char*>(rdx10 + rax9);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(memcpy);
        eax12 = static_cast<int32_t>(rcx11 - 3);
        *reinterpret_cast<unsigned char*>(&eax12) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(eax12 < reinterpret_cast<int32_t>(memcpy) == memcpy)) | reinterpret_cast<uint1_t>(eax12 == memcpy)));
        v4 = eax12;
        ecx13 = *reinterpret_cast<uint32_t*>(&rcx11) - 4;
        if (ecx13 <= 3) {
            eax14 = 0x4000 >> *reinterpret_cast<signed char*>(&ecx13);
            *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(memcpy);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(memcpy);
            do {
                r8d16 = *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi) + rcx15 * 2) * eax14 + 0x4000 >> 15;
                *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi) + rcx15 * 2) = *reinterpret_cast<int16_t*>(&r8d16);
                rdx17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx15 + rcx15) | 2);
                r8d18 = *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<uint64_t>(rdx17)) * eax14 + 0x4000 >> 15;
                *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<uint64_t>(rdx17)) = *reinterpret_cast<int16_t*>(&r8d18);
                rcx15 = rcx15 + 2;
            } while (rcx15 != 0xa0);
        }
    }
    r8_19 = rdi->f0;
    __asm__("pxor xmm0, xmm0");
    v20 = rsi;
    __asm__("movdqu [rsi+0x30], xmm0");
    __asm__("movdqu [rsi+0x20], xmm0");
    __asm__("movdqu [rsi+0x10], xmm0");
    __asm__("movdqu [rsi], xmm0");
    rsi->f40 = reinterpret_cast<int64_t>(memcpy);
    rdx21 = rdi->f4;
    r9_22 = rdi->f6;
    r11_23 = rdi->f8;
    r15_24 = rdi->fa;
    r12_25 = rdi->fc;
    rsi26 = rdi->f2;
    rbx27 = rdi->fe;
    v28 = rbx27 * rbx27 + (r12_25 * r12_25 + (r15_24 * r15_24 + r11_23 * r11_23) + (r9_22 * r9_22 + rdx21 * rdx21 + (rsi26 * rsi26 + r8_19 * r8_19)));
    v29 = r12_25 * rbx27 + (r12_25 * r15_24 + r15_24 * r11_23) + (r11_23 * r9_22 + r9_22 * rdx21 + (rdx21 + r8_19) * rsi26);
    v30 = r15_24 * rbx27 + r12_25 * r11_23 + (r15_24 * r9_22 + r11_23 * rdx21 + (r9_22 * rsi26 + rdx21 * r8_19));
    r15_31 = r11_23 * rbx27 + (r12_25 * r9_22 + r15_24 * rdx21 + (r11_23 * rsi26 + r9_22 * r8_19));
    rax32 = r12_25 * r8_19 + v20->f30;
    r8_33 = r9_22 * rbx27 + r12_25 * rdx21 + (r15_24 * rsi26 + r11_23 * r8_19);
    v34 = rdi;
    r12_35 = reinterpret_cast<struct s1*>(&rdi->fe);
    rcx36 = rdx21 * rbx27 + (r12_25 * rsi26 + r15_24 * r8_19);
    r14_37 = rbx27;
    rsi38 = rsi26 * rbx27 + rax32;
    rdi39 = rbx27 * r8_19 + *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(v20) + reinterpret_cast<int64_t>(""));
    ebp40 = 8;
    *reinterpret_cast<int32_t*>(&rdx41) = reinterpret_cast<int32_t>(memcpy);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx41) + 4) = reinterpret_cast<int32_t>(memcpy);
    do {
        rax42 = r12_35->f2;
        rsi43 = *reinterpret_cast<int16_t*>(&r14_37) * rax42;
        rcx44 = *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(r12_35) - 2) * rax42;
        rdi45 = (r12_35 - 1)->f0 * rax42;
        r8_46 = *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(r12_35) - 6) * rax42;
        r9_47 = (r12_35 - 2)->f0 * rax42;
        r10_48 = *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(r12_35) - 10) * rax42;
        r11_49 = (r12_35 - 3)->f0 * rax42;
        r13_50 = *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(r12_35) - 14) * rax42;
        *reinterpret_cast<int32_t*>(&r14_37) = *reinterpret_cast<int32_t*>(&rax42);
        v28 = v28 + rax42 * rax42;
        v29 = v29 + rsi43;
        v30 = v30 + rcx44;
        r15_31 = r15_31 + rdi45;
        r8_33 = r8_33 + r8_46;
        rcx36 = rcx36 + r9_47;
        r12_35 = reinterpret_cast<struct s1*>(&r12_35->f2);
        rsi38 = rsi38 + r10_48;
        rdi39 = rdi39 + r11_49;
        rdx41 = rdx41 + r13_50;
        ++ebp40;
    } while (ebp40 != 0xa0);
    rax51 = v20;
    rax51->f40 = rdx41 + rdx41;
    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rax51) + reinterpret_cast<int64_t>("")) = rdi39 + rdi39;
    rax51->f30 = rsi38 + rsi38;
    rax51->f28 = rcx36 + rcx36;
    rax51->f20 = r8_33 + r8_33;
    rax51->f18 = r15_31 + r15_31;
    rax51->f10 = v30 + v30;
    rax51->f8 = reinterpret_cast<int16_t>(v29 + v29);
    rax51->f0 = reinterpret_cast<int16_t>(v28 + v28);
    if (*reinterpret_cast<signed char*>(&v4) != memcpy) {
        rax51 = v34;
        __asm__("movdqu xmm4, [rax]");
        __asm__("movdqu xmm3, [rax+0x10]");
        __asm__("movdqu xmm2, [rax+0x20]");
        __asm__("movdqu xmm1, [rax+0x30]");
        __asm__("movdqa xmm5, xmm4");
        __asm__("punpckhwd xmm5, xmm5");
        __asm__("punpcklwd xmm4, xmm4");
        __asm__("movdqa xmm6, xmm3");
        __asm__("punpckhwd xmm6, xmm6");
        __asm__("punpcklwd xmm3, xmm3");
        __asm__("movd xmm0, dword [rsp-0x58]");
        __asm__("pslld xmm4, xmm0");
        __asm__("pslld xmm5, xmm0");
        __asm__("pslld xmm3, xmm0");
        __asm__("pslld xmm6, xmm0");
        __asm__("pslld xmm5, 0x10");
        __asm__("psrad xmm5, 0x10");
        __asm__("pslld xmm4, 0x10");
        __asm__("psrad xmm4, 0x10");
        __asm__("packssdw xmm4, xmm5");
        __asm__("pslld xmm6, 0x10");
        __asm__("psrad xmm6, 0x10");
        __asm__("pslld xmm3, 0x10");
        __asm__("psrad xmm3, 0x10");
        __asm__("packssdw xmm3, xmm6");
        __asm__("movdqu [rax], xmm4");
        __asm__("movdqu [rax+0x10], xmm3");
        __asm__("movdqa xmm3, xmm2");
        __asm__("punpckhwd xmm3, xmm3");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("movdqa xmm4, xmm1");
        __asm__("punpckhwd xmm4, xmm4");
        __asm__("punpcklwd xmm1, xmm1");
        __asm__("pslld xmm2, xmm0");
        __asm__("pslld xmm3, xmm0");
        __asm__("pslld xmm1, xmm0");
        __asm__("pslld xmm4, xmm0");
        __asm__("pslld xmm3, 0x10");
        __asm__("psrad xmm3, 0x10");
        __asm__("pslld xmm2, 0x10");
        __asm__("psrad xmm2, 0x10");
        __asm__("packssdw xmm2, xmm3");
        __asm__("pslld xmm4, 0x10");
        __asm__("psrad xmm4, 0x10");
        __asm__("pslld xmm1, 0x10");
        __asm__("psrad xmm1, 0x10");
        __asm__("packssdw xmm1, xmm4");
        __asm__("movdqu [rax+0x20], xmm2");
        __asm__("movdqu [rax+0x30], xmm1");
        __asm__("movdqu xmm1, [rax+0x40]");
        __asm__("movdqu xmm2, [rax+0x50]");
        __asm__("movdqa xmm3, xmm1");
        __asm__("punpckhwd xmm3, xmm3");
        __asm__("punpcklwd xmm1, xmm1");
        __asm__("movdqa xmm4, xmm2");
        __asm__("punpckhwd xmm4, xmm4");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pslld xmm1, xmm0");
        __asm__("pslld xmm3, xmm0");
        __asm__("pslld xmm2, xmm0");
        __asm__("pslld xmm4, xmm0");
        __asm__("pslld xmm3, 0x10");
        __asm__("psrad xmm3, 0x10");
        __asm__("pslld xmm1, 0x10");
        __asm__("psrad xmm1, 0x10");
        __asm__("packssdw xmm1, xmm3");
        __asm__("pslld xmm4, 0x10");
        __asm__("psrad xmm4, 0x10");
        __asm__("pslld xmm2, 0x10");
        __asm__("psrad xmm2, 0x10");
        __asm__("packssdw xmm2, xmm4");
        __asm__("movdqu [rax+0x40], xmm1");
        __asm__("movdqu [rax+0x50], xmm2");
        __asm__("movdqu xmm1, [rax+0x60]");
        __asm__("movdqu xmm2, [rax+0x70]");
        __asm__("movdqa xmm3, xmm1");
        __asm__("punpckhwd xmm3, xmm3");
        __asm__("punpcklwd xmm1, xmm1");
        __asm__("movdqa xmm4, xmm2");
        __asm__("punpckhwd xmm4, xmm4");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pslld xmm1, xmm0");
        __asm__("pslld xmm3, xmm0");
        __asm__("pslld xmm2, xmm0");
        __asm__("pslld xmm4, xmm0");
        __asm__("pslld xmm3, 0x10");
        __asm__("psrad xmm3, 0x10");
        __asm__("pslld xmm1, 0x10");
        __asm__("psrad xmm1, 0x10");
        __asm__("packssdw xmm1, xmm3");
        __asm__("pslld xmm4, 0x10");
        __asm__("psrad xmm4, 0x10");
        __asm__("pslld xmm2, 0x10");
        __asm__("psrad xmm2, 0x10");
        __asm__("packssdw xmm2, xmm4");
        __asm__("movdqu [rax+0x60], xmm1");
        __asm__("movdqu [rax+0x70], xmm2");
        __asm__("movdqu xmm1, [rax+0x80]");
        __asm__("movdqu xmm2, [rax+0x90]");
        __asm__("movdqa xmm3, xmm1");
        __asm__("punpckhwd xmm3, xmm3");
        __asm__("punpcklwd xmm1, xmm1");
        __asm__("movdqa xmm4, xmm2");
        __asm__("punpckhwd xmm4, xmm4");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pslld xmm1, xmm0");
        __asm__("pslld xmm3, xmm0");
        __asm__("pslld xmm2, xmm0");
        __asm__("pslld xmm4, xmm0");
        __asm__("pslld xmm3, 0x10");
        __asm__("psrad xmm3, 0x10");
        __asm__("pslld xmm1, 0x10");
        __asm__("psrad xmm1, 0x10");
        __asm__("packssdw xmm1, xmm3");
        __asm__("pslld xmm4, 0x10");
        __asm__("psrad xmm4, 0x10");
        __asm__("pslld xmm2, 0x10");
        __asm__("psrad xmm2, 0x10");
        __asm__("packssdw xmm2, xmm4");
        __asm__("movdqu [rax+0x80], xmm1");
        __asm__("movdqu [rax+0x90], xmm2");
        __asm__("movdqu xmm1, [rax+0xa0]");
        __asm__("movdqu xmm2, [rax+0xb0]");
        __asm__("movdqa xmm3, xmm1");
        __asm__("punpckhwd xmm3, xmm3");
        __asm__("punpcklwd xmm1, xmm1");
        __asm__("movdqa xmm4, xmm2");
        __asm__("punpckhwd xmm4, xmm4");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pslld xmm1, xmm0");
        __asm__("pslld xmm3, xmm0");
        __asm__("pslld xmm2, xmm0");
        __asm__("pslld xmm4, xmm0");
        __asm__("pslld xmm3, 0x10");
        __asm__("psrad xmm3, 0x10");
        __asm__("pslld xmm1, 0x10");
        __asm__("psrad xmm1, 0x10");
        __asm__("packssdw xmm1, xmm3");
        __asm__("pslld xmm4, 0x10");
        __asm__("psrad xmm4, 0x10");
        __asm__("pslld xmm2, 0x10");
        __asm__("psrad xmm2, 0x10");
        __asm__("packssdw xmm2, xmm4");
        __asm__("movdqu [rax+0xa0], xmm1");
        __asm__("movdqu [rax+0xb0], xmm2");
        __asm__("movdqu xmm1, [rax+0xc0]");
        __asm__("movdqu xmm2, [rax+0xd0]");
        __asm__("movdqa xmm3, xmm1");
        __asm__("punpckhwd xmm3, xmm3");
        __asm__("punpcklwd xmm1, xmm1");
        __asm__("movdqa xmm4, xmm2");
        __asm__("punpckhwd xmm4, xmm4");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pslld xmm1, xmm0");
        __asm__("pslld xmm3, xmm0");
        __asm__("pslld xmm2, xmm0");
        __asm__("pslld xmm4, xmm0");
        __asm__("pslld xmm3, 0x10");
        __asm__("psrad xmm3, 0x10");
        __asm__("pslld xmm1, 0x10");
        __asm__("psrad xmm1, 0x10");
        __asm__("packssdw xmm1, xmm3");
        __asm__("pslld xmm4, 0x10");
        __asm__("psrad xmm4, 0x10");
        __asm__("pslld xmm2, 0x10");
        __asm__("psrad xmm2, 0x10");
        __asm__("packssdw xmm2, xmm4");
        __asm__("movdqu [rax+0xc0], xmm1");
        __asm__("movdqu [rax+0xd0], xmm2");
        __asm__("movdqu xmm1, [rax+0xe0]");
        __asm__("movdqu xmm2, [rax+0xf0]");
        __asm__("movdqa xmm3, xmm1");
        __asm__("punpckhwd xmm3, xmm3");
        __asm__("punpcklwd xmm1, xmm1");
        __asm__("movdqa xmm4, xmm2");
        __asm__("punpckhwd xmm4, xmm4");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pslld xmm1, xmm0");
        __asm__("pslld xmm3, xmm0");
        __asm__("pslld xmm2, xmm0");
        __asm__("pslld xmm4, xmm0");
        __asm__("pslld xmm3, 0x10");
        __asm__("psrad xmm3, 0x10");
        __asm__("pslld xmm1, 0x10");
        __asm__("psrad xmm1, 0x10");
        __asm__("packssdw xmm1, xmm3");
        __asm__("pslld xmm4, 0x10");
        __asm__("psrad xmm4, 0x10");
        __asm__("pslld xmm2, 0x10");
        __asm__("psrad xmm2, 0x10");
        __asm__("packssdw xmm2, xmm4");
        __asm__("movdqu [rax+0xe0], xmm1");
        __asm__("movdqu [rax+0xf0], xmm2");
        __asm__("movdqu xmm1, [rax+0x100]");
        __asm__("movdqu xmm2, [rax+0x110]");
        __asm__("movdqa xmm3, xmm1");
        __asm__("punpckhwd xmm3, xmm3");
        __asm__("punpcklwd xmm1, xmm1");
        __asm__("movdqa xmm4, xmm2");
        __asm__("punpckhwd xmm4, xmm4");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pslld xmm1, xmm0");
        __asm__("pslld xmm3, xmm0");
        __asm__("pslld xmm2, xmm0");
        __asm__("pslld xmm4, xmm0");
        __asm__("pslld xmm3, 0x10");
        __asm__("psrad xmm3, 0x10");
        __asm__("pslld xmm1, 0x10");
        __asm__("psrad xmm1, 0x10");
        __asm__("packssdw xmm1, xmm3");
        __asm__("pslld xmm4, 0x10");
        __asm__("psrad xmm4, 0x10");
        __asm__("pslld xmm2, 0x10");
        __asm__("psrad xmm2, 0x10");
        __asm__("packssdw xmm2, xmm4");
        __asm__("movdqu [rax+0x100], xmm1");
        __asm__("movdqu [rax+0x110], xmm2");
        __asm__("movdqu xmm1, [rax+0x120]");
        __asm__("movdqu xmm2, [rax+0x130]");
        __asm__("movdqa xmm3, xmm1");
        __asm__("punpckhwd xmm3, xmm3");
        __asm__("punpcklwd xmm1, xmm1");
        __asm__("movdqa xmm4, xmm2");
        __asm__("punpckhwd xmm4, xmm4");
        __asm__("punpcklwd xmm2, xmm2");
        __asm__("pslld xmm1, xmm0");
        __asm__("pslld xmm3, xmm0");
        __asm__("pslld xmm2, xmm0");
        __asm__("pslld xmm4, xmm0");
        __asm__("pslld xmm3, 0x10");
        __asm__("psrad xmm3, 0x10");
        __asm__("pslld xmm1, 0x10");
        __asm__("psrad xmm1, 0x10");
        __asm__("packssdw xmm1, xmm3");
        __asm__("pslld xmm4, 0x10");
        __asm__("psrad xmm4, 0x10");
        __asm__("pslld xmm2, 0x10");
        __asm__("psrad xmm2, 0x10");
        __asm__("packssdw xmm2, xmm4");
        __asm__("movdqu [rax+0x120], xmm1");
        __asm__("movdqu [rax+0x130], xmm2");
    }
    return rax51;
}

struct s2 {
    uint64_t f0;
    uint64_t f8;
};

int64_t gc7b = 0xd349c1010204b60f;

void Reflection_coefficients(struct s2* rdi, int64_t rsi) {
    uint64_t rax3;
    uint64_t rdx4;
    int64_t rdx5;
    uint1_t zf6;
    int64_t rcx7;
    uint32_t ecx8;
    int64_t rax9;
    int64_t rdx10;
    uint64_t r14_11;
    uint64_t r13_12;
    int32_t eax13;

    if (rdi->f0 == memcpy) {
        __asm__("xorps xmm0, xmm0");
        __asm__("movups [r15], xmm0");
        goto 0xf28;
    }
    rax3 = rdi->f0;
    if (reinterpret_cast<int64_t>(rdi->f0) >= reinterpret_cast<int64_t>(memcpy)) {
        addr_c2d_4:
        rdx4 = rax3 >> 16;
        if (*reinterpret_cast<int16_t*>(&rdx4) == memcpy) {
            *reinterpret_cast<int32_t*>(&rdx5) = reinterpret_cast<int32_t>(memcpy);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(memcpy);
            zf6 = reinterpret_cast<uint1_t>((*reinterpret_cast<uint32_t*>(&rax3) & 0xff00) == memcpy);
            *reinterpret_cast<unsigned char*>(&rdx5) = zf6;
            if (!zf6) {
                rax3 = rax3 >> 8;
            }
            rcx7 = rdx5 * 8 + 15;
        } else {
            rax3 = rax3 >> 24;
            if (*reinterpret_cast<unsigned char*>(&rax3) == memcpy) {
                *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>("5");
                rax3 = rdx4;
            } else {
                rcx7 = -1;
            }
        }
    } else {
        if (rdi->f0 >= 0xffffffffc0000001) {
            rax3 = ~rdi->f0;
            goto addr_c2d_4;
        } else {
            ecx8 = reinterpret_cast<uint32_t>(memcpy);
            goto addr_c81_14;
        }
    }
    *reinterpret_cast<uint32_t*>(&rax9) = *reinterpret_cast<unsigned char*>(&rax3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(memcpy);
    rdx10 = gc7b;
    ecx8 = *reinterpret_cast<int32_t*>(&rcx7) + *reinterpret_cast<unsigned char*>(rdx10 + rax9);
    addr_c81_14:
    r14_11 = rdi->f0 << *reinterpret_cast<unsigned char*>(&ecx8) >> 16;
    r13_12 = rdi->f8 << *reinterpret_cast<unsigned char*>(&ecx8) >> 16;
    eax13 = -*reinterpret_cast<int32_t*>(&r13_12);
    if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r13_12)) == 0x8000) {
        eax13 = 0x7fff;
    }
    if (*reinterpret_cast<int16_t*>(&r13_12) >= reinterpret_cast<int16_t>(memcpy)) {
        eax13 = *reinterpret_cast<int32_t*>(&r13_12);
    }
    if (*reinterpret_cast<int16_t*>(&eax13) <= *reinterpret_cast<int16_t*>(&r14_11)) {
        goto 0xdbe;
    } else {
        if (1) 
            goto 0xf10;
        goto 0xf28;
    }
}

struct s3 {
    uint16_t f0;
    uint16_t f2;
    uint16_t f4;
    uint16_t f6;
    uint16_t f8;
    uint16_t fa;
    uint16_t fc;
    uint16_t fe;
};

void Transformation_to_Log_Area_Ratios(struct s3* rdi) {
    uint32_t eax2;
    int64_t rcx3;
    uint32_t edx4;
    uint32_t edx5;
    uint32_t ecx6;
    uint32_t eax7;
    int64_t rcx8;
    uint32_t edx9;
    uint32_t ecx10;
    uint32_t edx11;
    uint32_t eax12;
    int64_t rcx13;
    uint32_t edx14;
    uint32_t ecx15;
    uint32_t edx16;
    uint32_t eax17;
    int64_t rcx18;
    uint32_t edx19;
    uint32_t ecx20;
    uint32_t edx21;
    uint32_t eax22;
    int64_t rcx23;
    uint32_t edx24;
    uint32_t ecx25;
    uint32_t edx26;
    uint32_t eax27;
    int64_t rcx28;
    uint32_t edx29;
    uint32_t ecx30;
    uint32_t edx31;
    uint32_t eax32;
    int64_t rcx33;
    uint32_t edx34;
    uint32_t ecx35;
    uint32_t edx36;
    uint32_t eax37;
    int64_t rcx38;
    uint32_t edx39;
    uint32_t ecx40;
    uint32_t edx41;

    eax2 = rdi->f0;
    *reinterpret_cast<uint32_t*>(&rcx3) = 0x7fff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(memcpy);
    if (eax2 != 0x8000) {
        *reinterpret_cast<uint32_t*>(&rcx3) = -eax2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    if (*reinterpret_cast<int16_t*>(&eax2) >= reinterpret_cast<int16_t>(memcpy)) {
        *reinterpret_cast<uint32_t*>(&rcx3) = eax2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    edx4 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rcx3)));
    if (reinterpret_cast<int32_t>(edx4) > reinterpret_cast<int32_t>(0x5665)) {
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rcx3)) > 0x7999) {
            edx5 = static_cast<uint32_t>(rcx3 * 4 + 0x6800);
        } else {
            edx5 = *reinterpret_cast<uint32_t*>(&rcx3) + 0xffffd4cd;
        }
    } else {
        edx5 = edx4 >> 1;
    }
    ecx6 = -edx5;
    if (*reinterpret_cast<int16_t*>(&eax2) >= reinterpret_cast<int16_t>(memcpy)) {
        ecx6 = edx5;
    }
    rdi->f0 = *reinterpret_cast<uint16_t*>(&ecx6);
    eax7 = rdi->f2;
    *reinterpret_cast<uint32_t*>(&rcx8) = 0x7fff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(memcpy);
    if (eax7 != 0x8000) {
        *reinterpret_cast<uint32_t*>(&rcx8) = -eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    if (*reinterpret_cast<int16_t*>(&eax7) >= reinterpret_cast<int16_t>(memcpy)) {
        *reinterpret_cast<uint32_t*>(&rcx8) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    edx9 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rcx8)));
    if (reinterpret_cast<int32_t>(edx9) >= reinterpret_cast<int32_t>(0x5666)) {
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rcx8)) >= 0x799a) {
            ecx10 = static_cast<uint32_t>(rcx8 * 4 + 0x6800);
        } else {
            ecx10 = *reinterpret_cast<uint32_t*>(&rcx8) + 0xffffd4cd;
        }
    } else {
        ecx10 = edx9 >> 1;
    }
    edx11 = -ecx10;
    if (*reinterpret_cast<int16_t*>(&eax7) >= reinterpret_cast<int16_t>(memcpy)) {
        edx11 = ecx10;
    }
    rdi->f2 = *reinterpret_cast<uint16_t*>(&edx11);
    eax12 = rdi->f4;
    *reinterpret_cast<uint32_t*>(&rcx13) = 0x7fff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(memcpy);
    if (eax12 != 0x8000) {
        *reinterpret_cast<uint32_t*>(&rcx13) = -eax12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    if (*reinterpret_cast<int16_t*>(&eax12) >= reinterpret_cast<int16_t>(memcpy)) {
        *reinterpret_cast<uint32_t*>(&rcx13) = eax12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    edx14 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rcx13)));
    if (reinterpret_cast<int32_t>(edx14) >= reinterpret_cast<int32_t>(0x5666)) {
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rcx13)) >= 0x799a) {
            ecx15 = static_cast<uint32_t>(rcx13 * 4 + 0x6800);
        } else {
            ecx15 = *reinterpret_cast<uint32_t*>(&rcx13) + 0xffffd4cd;
        }
    } else {
        ecx15 = edx14 >> 1;
    }
    edx16 = -ecx15;
    if (*reinterpret_cast<int16_t*>(&eax12) >= reinterpret_cast<int16_t>(memcpy)) {
        edx16 = ecx15;
    }
    rdi->f4 = *reinterpret_cast<uint16_t*>(&edx16);
    eax17 = rdi->f6;
    *reinterpret_cast<uint32_t*>(&rcx18) = 0x7fff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(memcpy);
    if (eax17 != 0x8000) {
        *reinterpret_cast<uint32_t*>(&rcx18) = -eax17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    if (*reinterpret_cast<int16_t*>(&eax17) >= reinterpret_cast<int16_t>(memcpy)) {
        *reinterpret_cast<uint32_t*>(&rcx18) = eax17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    edx19 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rcx18)));
    if (reinterpret_cast<int32_t>(edx19) >= reinterpret_cast<int32_t>(0x5666)) {
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rcx18)) >= 0x799a) {
            ecx20 = static_cast<uint32_t>(rcx18 * 4 + 0x6800);
        } else {
            ecx20 = *reinterpret_cast<uint32_t*>(&rcx18) + 0xffffd4cd;
        }
    } else {
        ecx20 = edx19 >> 1;
    }
    edx21 = -ecx20;
    if (*reinterpret_cast<int16_t*>(&eax17) >= reinterpret_cast<int16_t>(memcpy)) {
        edx21 = ecx20;
    }
    rdi->f6 = *reinterpret_cast<uint16_t*>(&edx21);
    eax22 = rdi->f8;
    *reinterpret_cast<uint32_t*>(&rcx23) = 0x7fff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(memcpy);
    if (eax22 != 0x8000) {
        *reinterpret_cast<uint32_t*>(&rcx23) = -eax22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    if (*reinterpret_cast<int16_t*>(&eax22) >= reinterpret_cast<int16_t>(memcpy)) {
        *reinterpret_cast<uint32_t*>(&rcx23) = eax22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    edx24 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rcx23)));
    if (reinterpret_cast<int32_t>(edx24) >= reinterpret_cast<int32_t>(0x5666)) {
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rcx23)) >= 0x799a) {
            ecx25 = static_cast<uint32_t>(rcx23 * 4 + 0x6800);
        } else {
            ecx25 = *reinterpret_cast<uint32_t*>(&rcx23) + 0xffffd4cd;
        }
    } else {
        ecx25 = edx24 >> 1;
    }
    edx26 = -ecx25;
    if (*reinterpret_cast<int16_t*>(&eax22) >= reinterpret_cast<int16_t>(memcpy)) {
        edx26 = ecx25;
    }
    rdi->f8 = *reinterpret_cast<uint16_t*>(&edx26);
    eax27 = rdi->fa;
    *reinterpret_cast<uint32_t*>(&rcx28) = 0x7fff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = reinterpret_cast<int32_t>(memcpy);
    if (eax27 != 0x8000) {
        *reinterpret_cast<uint32_t*>(&rcx28) = -eax27;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    if (*reinterpret_cast<int16_t*>(&eax27) >= reinterpret_cast<int16_t>(memcpy)) {
        *reinterpret_cast<uint32_t*>(&rcx28) = eax27;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    edx29 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rcx28)));
    if (reinterpret_cast<int32_t>(edx29) >= reinterpret_cast<int32_t>(0x5666)) {
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rcx28)) >= 0x799a) {
            ecx30 = static_cast<uint32_t>(rcx28 * 4 + 0x6800);
        } else {
            ecx30 = *reinterpret_cast<uint32_t*>(&rcx28) + 0xffffd4cd;
        }
    } else {
        ecx30 = edx29 >> 1;
    }
    edx31 = -ecx30;
    if (*reinterpret_cast<int16_t*>(&eax27) >= reinterpret_cast<int16_t>(memcpy)) {
        edx31 = ecx30;
    }
    rdi->fa = *reinterpret_cast<uint16_t*>(&edx31);
    eax32 = rdi->fc;
    *reinterpret_cast<uint32_t*>(&rcx33) = 0x7fff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(memcpy);
    if (eax32 != 0x8000) {
        *reinterpret_cast<uint32_t*>(&rcx33) = -eax32;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    if (*reinterpret_cast<int16_t*>(&eax32) >= reinterpret_cast<int16_t>(memcpy)) {
        *reinterpret_cast<uint32_t*>(&rcx33) = eax32;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    edx34 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rcx33)));
    if (reinterpret_cast<int32_t>(edx34) >= reinterpret_cast<int32_t>(0x5666)) {
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rcx33)) >= 0x799a) {
            ecx35 = static_cast<uint32_t>(rcx33 * 4 + 0x6800);
        } else {
            ecx35 = *reinterpret_cast<uint32_t*>(&rcx33) + 0xffffd4cd;
        }
    } else {
        ecx35 = edx34 >> 1;
    }
    edx36 = -ecx35;
    if (*reinterpret_cast<int16_t*>(&eax32) >= reinterpret_cast<int16_t>(memcpy)) {
        edx36 = ecx35;
    }
    rdi->fc = *reinterpret_cast<uint16_t*>(&edx36);
    eax37 = rdi->fe;
    *reinterpret_cast<uint32_t*>(&rcx38) = 0x7fff;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx38) + 4) = reinterpret_cast<int32_t>(memcpy);
    if (eax37 != 0x8000) {
        *reinterpret_cast<uint32_t*>(&rcx38) = -eax37;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx38) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    if (*reinterpret_cast<int16_t*>(&eax37) >= reinterpret_cast<int16_t>(memcpy)) {
        *reinterpret_cast<uint32_t*>(&rcx38) = eax37;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx38) + 4) = reinterpret_cast<int32_t>(memcpy);
    }
    edx39 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rcx38)));
    if (reinterpret_cast<int32_t>(edx39) >= reinterpret_cast<int32_t>(0x5666)) {
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&rcx38)) >= 0x799a) {
            ecx40 = static_cast<uint32_t>(rcx38 * 4 + 0x6800);
        } else {
            ecx40 = *reinterpret_cast<uint32_t*>(&rcx38) + 0xffffd4cd;
        }
    } else {
        ecx40 = edx39 >> 1;
    }
    edx41 = -ecx40;
    if (*reinterpret_cast<int16_t*>(&eax37) >= reinterpret_cast<int16_t>(memcpy)) {
        edx41 = ecx40;
    }
    rdi->fe = *reinterpret_cast<uint16_t*>(&edx41);
    return;
}

void Gsm_LPC_Analysis() {
    fun_12c5();
}

