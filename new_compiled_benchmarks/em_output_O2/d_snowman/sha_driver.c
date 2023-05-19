
struct s0 {
    int32_t f0;
    int32_t f4;
};

void printf();

struct s1 {
    int32_t f0;
    int32_t f4;
};

int32_t* g49b = reinterpret_cast<int32_t*>(0xff508d0000441f0f);

void fun_471() {
    struct s0* rbx1;
    uint32_t eax2;
    int64_t r14_3;
    int1_t less_or_equal4;
    int64_t rax5;
    struct s1* rcx6;
    struct s1* r15_7;
    struct s0* rdx8;
    int1_t zf9;
    int64_t rax10;
    int32_t* rcx11;
    int1_t below_or_equal12;
    int64_t v13;

    while (rbx1 = rbx1 + 8, eax2 = static_cast<uint32_t>(r14_3 - 64), less_or_equal4 = *reinterpret_cast<int32_t*>(&r14_3) <= reinterpret_cast<int32_t>(0x7f), *reinterpret_cast<uint32_t*>(&r14_3) = eax2, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = reinterpret_cast<int32_t>(printf), !less_or_equal4) {
        *reinterpret_cast<int32_t*>(&rax5) = 16;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
        rcx6 = r15_7;
        rdx8 = rbx1;
        do {
            rcx6->f0 = rdx8->f0;
            ++rdx8;
            rcx6->f4 = rdx8->f4;
            ++rcx6;
            zf9 = *reinterpret_cast<int32_t*>(&rax5) == 2;
            *reinterpret_cast<int32_t*>(&rax5) = static_cast<int32_t>(rax5 - 2);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
        } while (!zf9);
        fun_471();
    }
    if (reinterpret_cast<int32_t>(eax2) >= reinterpret_cast<int32_t>(4)) {
        *reinterpret_cast<uint32_t*>(&rax10) = eax2 >> 2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(printf);
        rcx11 = g49b;
        do {
            rbx1 = reinterpret_cast<struct s0*>(&rbx1->f4);
            *rcx11 = rbx1->f0;
            ++rcx11;
            below_or_equal12 = *reinterpret_cast<uint32_t*>(&rax10) <= 1;
            *reinterpret_cast<uint32_t*>(&rax10) = static_cast<uint32_t>(rax10 - 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(printf);
        } while (!below_or_equal12);
    }
    goto v13;
}

struct s2 {
    signed char[56] pad56;
    int32_t f38;
};

struct s3 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s4 {
    signed char[16] pad16;
    int32_t f10;
};

struct s4* g575 = reinterpret_cast<struct s4*>(0xe1f01040c700290f);

uint32_t* g586 = reinterpret_cast<uint32_t*>(0x4c0000000006c741);

int32_t* g594 = reinterpret_cast<int32_t*>(0x480000000007c741);

int64_t g5a2 = 0x2000bedf8948;

void fun_5af(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_5c3(int64_t rdi, int64_t rsi, int64_t rdx);

struct s5 {
    int32_t f0;
    signed char[44] pad48;
    int64_t f30;
    int32_t f38;
    uint32_t f3c;
};

struct s5* g5d8 = reinterpret_cast<struct s5*>(0x808604c741);

void fun_640();

void fun_5fd(int64_t rdi, int64_t rsi, int64_t rdx, uint32_t ecx);

int32_t fun_671();

void fun_685(int32_t* rdi, int32_t* rsi, int64_t rdx, uint32_t ecx);

void fun_6ae(int64_t rdi, int64_t rsi, int64_t rdx, uint32_t ecx);

int32_t fun_6ca();

void fun_6de(int32_t* rdi, int32_t* rsi, int64_t rdx, uint32_t ecx);

void fun_75e(int64_t rdi, int64_t rsi);

void fun_54d() {
    struct s2* r14_1;
    int32_t ebp2;
    struct s3* r14_3;
    int32_t ebx4;
    struct s4* rax5;
    uint32_t* r14_6;
    int32_t* r15_7;
    int64_t rbx8;
    int64_t rdx9;
    int64_t rdx10;
    void* rsp11;
    uint32_t ebx12;
    int32_t ebp13;
    int64_t rax14;
    struct s5* r14_15;
    int64_t rcx16;
    int64_t rdx17;
    int64_t rdx18;
    int32_t* rsp19;
    int32_t* rdi20;
    int32_t* rsi21;
    int32_t eax22;
    void* rsp23;
    int32_t* rdi24;
    int32_t* rsi25;
    int32_t eax26;
    int64_t v27;

    r14_1->f38 = ebp2;
    r14_3->f3c = ebx4;
    __asm__("movaps xmm0, [rip+0x0]");
    rax5 = g575;
    __asm__("movaps [rax], xmm0");
    rax5->f10 = 0xc3d2e1f0;
    r14_6 = g586;
    *r14_6 = reinterpret_cast<uint32_t>(printf);
    r15_7 = g594;
    *r15_7 = reinterpret_cast<int32_t>(printf);
    rbx8 = g5a2;
    fun_5af(rbx8, "thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen", rdx9);
    fun_5c3(rbx8 + reinterpret_cast<int64_t>("thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen"), "thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen", rdx10);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 + 8 - 8 + 8);
    ebx12 = *r14_6;
    ebp13 = *r15_7;
    *reinterpret_cast<uint32_t*>(&rax14) = ebx12 >> 3 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(printf);
    r14_15 = g5d8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_15) + rax14 * 4) = 0x80;
    if (*reinterpret_cast<uint32_t*>(&rax14) < 56) {
        if (*reinterpret_cast<uint32_t*>(&rax14) <= 51) {
            *reinterpret_cast<uint32_t*>(&rcx16) = (55 - *reinterpret_cast<uint32_t*>(&rax14) >> 2) - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(printf);
            rdx17 = rcx16 * 4 + 4;
            fun_640();
            rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rcx16) = *reinterpret_cast<uint32_t*>(&rax14) ^ 60;
        if (*reinterpret_cast<uint32_t*>(&rcx16) >= 4) {
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_15) + rax14 * 4 + 4) = reinterpret_cast<int32_t>(printf);
        }
        fun_5fd(rbx8 + reinterpret_cast<int64_t>("thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen"), "thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen", rdx18, *reinterpret_cast<uint32_t*>(&rcx16));
        rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8);
        __asm__("xorps xmm0, xmm0");
        __asm__("movaps [r14+0x20], xmm0");
        __asm__("movaps [r14+0x10], xmm0");
        __asm__("movaps [r14], xmm0");
        r14_15->f30 = reinterpret_cast<int64_t>(printf);
    }
    r14_15->f38 = ebp13;
    r14_15->f3c = ebx12;
    rsp19 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp11) + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 40);
    rdi20 = rsp19;
    *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(printf);
    eax22 = fun_671();
    rsp23 = reinterpret_cast<void*>(rsp19 - 2 + 2);
    if (eax22 != printf) {
        rdi20 = reinterpret_cast<int32_t*>(0x67c);
        *reinterpret_cast<int32_t*>(&rsi21) = eax22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(printf);
        fun_685(0x67c, rsi21, rdx17, *reinterpret_cast<uint32_t*>(&rcx16));
        rsp23 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp23) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi20 = *rsi21;
    fun_6ae(rdi20 + 1, rsi21 + 1, rdx17, *reinterpret_cast<uint32_t*>(&rcx16));
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps [rsp+0x10], xmm0");
    rdi24 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp23) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi25) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(printf);
    eax26 = fun_6ca();
    if (eax26 != printf) {
        rdi24 = reinterpret_cast<int32_t*>(0x6d5);
        *reinterpret_cast<int32_t*>(&rsi25) = eax26;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(printf);
        fun_6de(0x6d5, rsi25, rdx17, *reinterpret_cast<uint32_t*>(&rcx16));
    }
    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi24 = *rsi25;
    __asm__("subsd xmm0, [r14]");
    fun_75e(0x757, rsi25 + 1);
    goto v27;
}

struct s6 {
    signed char[56] pad56;
    int32_t f38;
};

struct s7 {
    signed char[60] pad60;
    int32_t f3c;
};

void fun_640() {
    struct s6* r14_1;
    int32_t ebp2;
    struct s7* r14_3;
    int32_t ebx4;
    int32_t* rsp5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t eax8;
    void* rsp9;
    int64_t rdx10;
    uint32_t ecx11;
    int64_t rdx12;
    uint32_t ecx13;
    int32_t* rdi14;
    int32_t* rsi15;
    int32_t eax16;
    int64_t rdx17;
    uint32_t ecx18;
    int64_t v19;

    r14_1->f38 = ebp2;
    r14_3->f3c = ebx4;
    rsp5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 40);
    rdi6 = rsp5;
    *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
    eax8 = fun_671();
    rsp9 = reinterpret_cast<void*>(rsp5 - 2 + 2);
    if (eax8 != printf) {
        rdi6 = reinterpret_cast<int32_t*>(0x67c);
        *reinterpret_cast<int32_t*>(&rsi7) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
        fun_685(0x67c, rsi7, rdx10, ecx11);
        rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi6 = *rsi7;
    fun_6ae(rdi6 + 1, rsi7 + 1, rdx12, ecx13);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps [rsp+0x10], xmm0");
    rdi14 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi15) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(printf);
    eax16 = fun_6ca();
    if (eax16 != printf) {
        rdi14 = reinterpret_cast<int32_t*>(0x6d5);
        *reinterpret_cast<int32_t*>(&rsi15) = eax16;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(printf);
        fun_6de(0x6d5, rsi15, rdx17, ecx18);
    }
    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi14 = *rsi15;
    __asm__("subsd xmm0, [r14]");
    fun_75e(0x757, rsi15 + 1);
    goto v19;
}

void fun_685(int32_t* rdi, int32_t* rsi, int64_t rdx, uint32_t ecx) {
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t eax7;
    int64_t v8;

    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi;
    fun_6ae(rdi + 1, rsi + 1, rdx, ecx);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps [rsp+0x10], xmm0");
    rdi5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
    eax7 = fun_6ca();
    if (eax7 != printf) {
        rdi5 = reinterpret_cast<int32_t*>(0x6d5);
        *reinterpret_cast<int32_t*>(&rsi6) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
        fun_6de(0x6d5, rsi6, rdx, ecx);
    }
    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi5 = *rsi6;
    __asm__("subsd xmm0, [r14]");
    fun_75e(0x757, rsi6 + 1);
    goto v8;
}

void fun_6ae(int64_t rdi, int64_t rsi, int64_t rdx, uint32_t ecx) {
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t eax7;
    int64_t v8;

    __asm__("movaps xmm0, [rax]");
    __asm__("movaps [rsp+0x10], xmm0");
    rdi5 = reinterpret_cast<int32_t*>(__zero_stack_offset());
    *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
    eax7 = fun_6ca();
    if (eax7 != printf) {
        rdi5 = reinterpret_cast<int32_t*>(0x6d5);
        *reinterpret_cast<int32_t*>(&rsi6) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
        fun_6de(0x6d5, rsi6, rdx, ecx);
    }
    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi5 = *rsi6;
    __asm__("subsd xmm0, [r14]");
    fun_75e(0x757, rsi6 + 1);
    goto v8;
}

void fun_6de(int32_t* rdi, int32_t* rsi, int64_t rdx, uint32_t ecx) {
    int64_t v5;

    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_75e(0x757, rsi + 1);
    goto v5;
}

void fun_75e(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

struct s8 {
    signed char[48] pad48;
    int64_t f30;
};

struct s9 {
    signed char[56] pad56;
    int32_t f38;
};

struct s10 {
    signed char[60] pad60;
    int32_t f3c;
};

void fun_50a() {
    struct s8* r14_1;
    struct s9* r14_2;
    int32_t ebp3;
    struct s10* r14_4;
    int32_t ebx5;
    struct s4* rax6;
    uint32_t* r14_7;
    int32_t* r15_8;
    int64_t rbx9;
    int64_t rdx10;
    int64_t rdx11;
    void* rsp12;
    uint32_t ebx13;
    int32_t ebp14;
    int64_t rax15;
    struct s5* r14_16;
    int64_t rcx17;
    int64_t rdx18;
    int64_t rdx19;
    int32_t* rsp20;
    int32_t* rdi21;
    int32_t* rsi22;
    int32_t eax23;
    void* rsp24;
    int32_t* rdi25;
    int32_t* rsi26;
    int32_t eax27;
    int64_t v28;

    __asm__("xorps xmm0, xmm0");
    __asm__("movaps [r14+0x20], xmm0");
    __asm__("movaps [r14+0x10], xmm0");
    __asm__("movaps [r14], xmm0");
    r14_1->f30 = reinterpret_cast<int64_t>(printf);
    r14_2->f38 = ebp3;
    r14_4->f3c = ebx5;
    __asm__("movaps xmm0, [rip+0x0]");
    rax6 = g575;
    __asm__("movaps [rax], xmm0");
    rax6->f10 = 0xc3d2e1f0;
    r14_7 = g586;
    *r14_7 = reinterpret_cast<uint32_t>(printf);
    r15_8 = g594;
    *r15_8 = reinterpret_cast<int32_t>(printf);
    rbx9 = g5a2;
    fun_5af(rbx9, "thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen", rdx10);
    fun_5c3(rbx9 + reinterpret_cast<int64_t>("thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen"), "thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen", rdx11);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 + 8 - 8 + 8);
    ebx13 = *r14_7;
    ebp14 = *r15_8;
    *reinterpret_cast<uint32_t*>(&rax15) = ebx13 >> 3 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(printf);
    r14_16 = g5d8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_16) + rax15 * 4) = 0x80;
    if (*reinterpret_cast<uint32_t*>(&rax15) < 56) {
        if (*reinterpret_cast<uint32_t*>(&rax15) <= 51) {
            *reinterpret_cast<uint32_t*>(&rcx17) = (55 - *reinterpret_cast<uint32_t*>(&rax15) >> 2) - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(printf);
            rdx18 = rcx17 * 4 + 4;
            fun_640();
            rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rcx17) = *reinterpret_cast<uint32_t*>(&rax15) ^ 60;
        if (*reinterpret_cast<uint32_t*>(&rcx17) >= 4) {
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_16) + rax15 * 4 + 4) = reinterpret_cast<int32_t>(printf);
        }
        fun_5fd(rbx9 + reinterpret_cast<int64_t>("thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen"), "thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen", rdx19, *reinterpret_cast<uint32_t*>(&rcx17));
        rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
        __asm__("xorps xmm0, xmm0");
        __asm__("movaps [r14+0x20], xmm0");
        __asm__("movaps [r14+0x10], xmm0");
        __asm__("movaps [r14], xmm0");
        r14_16->f30 = reinterpret_cast<int64_t>(printf);
    }
    r14_16->f38 = ebp14;
    r14_16->f3c = ebx13;
    rsp20 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp12) + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 40);
    rdi21 = rsp20;
    *reinterpret_cast<int32_t*>(&rsi22) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(printf);
    eax23 = fun_671();
    rsp24 = reinterpret_cast<void*>(rsp20 - 2 + 2);
    if (eax23 != printf) {
        rdi21 = reinterpret_cast<int32_t*>(0x67c);
        *reinterpret_cast<int32_t*>(&rsi22) = eax23;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(printf);
        fun_685(0x67c, rsi22, rdx18, *reinterpret_cast<uint32_t*>(&rcx17));
        rsp24 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp24) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi21 = *rsi22;
    fun_6ae(rdi21 + 1, rsi22 + 1, rdx18, *reinterpret_cast<uint32_t*>(&rcx17));
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps [rsp+0x10], xmm0");
    rdi25 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp24) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi26) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi26) + 4) = reinterpret_cast<int32_t>(printf);
    eax27 = fun_6ca();
    if (eax27 != printf) {
        rdi25 = reinterpret_cast<int32_t*>(0x6d5);
        *reinterpret_cast<int32_t*>(&rsi26) = eax27;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi26) + 4) = reinterpret_cast<int32_t>(printf);
        fun_6de(0x6d5, rsi26, rdx18, *reinterpret_cast<uint32_t*>(&rcx17));
    }
    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi25 = *rsi26;
    __asm__("subsd xmm0, [r14]");
    fun_75e(0x757, rsi26 + 1);
    goto v28;
}

struct s11 {
    signed char[48] pad48;
    int64_t f30;
};

struct s12 {
    signed char[56] pad56;
    int32_t f38;
};

struct s13 {
    signed char[60] pad60;
    int32_t f3c;
};

void fun_5fd(int64_t rdi, int64_t rsi, int64_t rdx, uint32_t ecx) {
    struct s11* r14_5;
    struct s12* r14_6;
    int32_t ebp7;
    struct s13* r14_8;
    int32_t ebx9;
    int32_t* rsp10;
    int32_t* rdi11;
    int32_t* rsi12;
    int32_t eax13;
    void* rsp14;
    int32_t* rdi15;
    int32_t* rsi16;
    int32_t eax17;
    int64_t v18;

    __asm__("xorps xmm0, xmm0");
    __asm__("movaps [r14+0x20], xmm0");
    __asm__("movaps [r14+0x10], xmm0");
    __asm__("movaps [r14], xmm0");
    r14_5->f30 = reinterpret_cast<int64_t>(printf);
    r14_6->f38 = ebp7;
    r14_8->f3c = ebx9;
    rsp10 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 40);
    rdi11 = rsp10;
    *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(printf);
    eax13 = fun_671();
    rsp14 = reinterpret_cast<void*>(rsp10 - 2 + 2);
    if (eax13 != printf) {
        rdi11 = reinterpret_cast<int32_t*>(0x67c);
        *reinterpret_cast<int32_t*>(&rsi12) = eax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(printf);
        fun_685(0x67c, rsi12, rdx, ecx);
        rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi11 = *rsi12;
    fun_6ae(rdi11 + 1, rsi12 + 1, rdx, ecx);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps [rsp+0x10], xmm0");
    rdi15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi16) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(printf);
    eax17 = fun_6ca();
    if (eax17 != printf) {
        rdi15 = reinterpret_cast<int32_t*>(0x6d5);
        *reinterpret_cast<int32_t*>(&rsi16) = eax17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(printf);
        fun_6de(0x6d5, rsi16, rdx, ecx);
    }
    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi15 = *rsi16;
    __asm__("subsd xmm0, [r14]");
    fun_75e(0x757, rsi16 + 1);
    goto v18;
}

int32_t g6d5 = 0xc031c689;

int32_t fun_6ca() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t rdx4;
    uint32_t ecx5;
    int64_t v6;

    if (eax1 != printf) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(printf);
        fun_6de(0x6d5, rsi2, rdx4, ecx5);
    }
    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g6d5 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_75e(0x757, rsi2 + 1);
    goto v6;
}

void fun_5af(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbx4;
    void* rsp5;
    uint32_t ebx6;
    uint32_t* r14_7;
    int32_t ebp8;
    int32_t* r15_9;
    int64_t rax10;
    struct s5* r14_11;
    int64_t rcx12;
    int32_t* rsp13;
    int32_t* rdi14;
    int32_t* rsi15;
    int32_t eax16;
    void* rsp17;
    int32_t* rdi18;
    int32_t* rsi19;
    int32_t eax20;
    int64_t v21;

    fun_5c3(rbx4 + reinterpret_cast<int64_t>("thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen"), "thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen", rdx);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    ebx6 = *r14_7;
    ebp8 = *r15_9;
    *reinterpret_cast<uint32_t*>(&rax10) = ebx6 >> 3 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(printf);
    r14_11 = g5d8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_11) + rax10 * 4) = 0x80;
    if (*reinterpret_cast<uint32_t*>(&rax10) < 56) {
        if (*reinterpret_cast<uint32_t*>(&rax10) <= 51) {
            *reinterpret_cast<uint32_t*>(&rcx12) = (55 - *reinterpret_cast<uint32_t*>(&rax10) >> 2) - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(printf);
            rdx = rcx12 * 4 + 4;
            fun_640();
            rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rcx12) = *reinterpret_cast<uint32_t*>(&rax10) ^ 60;
        if (*reinterpret_cast<uint32_t*>(&rcx12) >= 4) {
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_11) + rax10 * 4 + 4) = reinterpret_cast<int32_t>(printf);
        }
        fun_5fd(rbx4 + reinterpret_cast<int64_t>("thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen"), "thuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen", rdx, *reinterpret_cast<uint32_t*>(&rcx12));
        rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
        __asm__("xorps xmm0, xmm0");
        __asm__("movaps [r14+0x20], xmm0");
        __asm__("movaps [r14+0x10], xmm0");
        __asm__("movaps [r14], xmm0");
        r14_11->f30 = reinterpret_cast<int64_t>(printf);
    }
    r14_11->f38 = ebp8;
    r14_11->f3c = ebx6;
    rsp13 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 40);
    rdi14 = rsp13;
    *reinterpret_cast<int32_t*>(&rsi15) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(printf);
    eax16 = fun_671();
    rsp17 = reinterpret_cast<void*>(rsp13 - 2 + 2);
    if (eax16 != printf) {
        rdi14 = reinterpret_cast<int32_t*>(0x67c);
        *reinterpret_cast<int32_t*>(&rsi15) = eax16;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(printf);
        fun_685(0x67c, rsi15, rdx, *reinterpret_cast<uint32_t*>(&rcx12));
        rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi14 = *rsi15;
    fun_6ae(rdi14 + 1, rsi15 + 1, rdx, *reinterpret_cast<uint32_t*>(&rcx12));
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps [rsp+0x10], xmm0");
    rdi18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi19) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(printf);
    eax20 = fun_6ca();
    if (eax20 != printf) {
        rdi18 = reinterpret_cast<int32_t*>(0x6d5);
        *reinterpret_cast<int32_t*>(&rsi19) = eax20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(printf);
        fun_6de(0x6d5, rsi19, rdx, *reinterpret_cast<uint32_t*>(&rcx12));
    }
    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi18 = *rsi19;
    __asm__("subsd xmm0, [r14]");
    fun_75e(0x757, rsi19 + 1);
    goto v21;
}

int32_t g67c = 0xc031c689;

int32_t fun_671() {
    void* rsp1;
    int32_t eax2;
    int32_t* rsi3;
    int32_t eax4;
    int64_t rdx5;
    uint32_t ecx6;
    int64_t rdx7;
    uint32_t ecx8;
    int32_t* rdi9;
    int32_t* rsi10;
    int32_t eax11;
    int64_t rdx12;
    uint32_t ecx13;
    int64_t v14;

    rsp1 = __zero_stack_offset();
    if (eax2 != printf) {
        *reinterpret_cast<int32_t*>(&rsi3) = eax4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = reinterpret_cast<int32_t>(printf);
        fun_685(0x67c, rsi3, rdx5, ecx6);
        rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    g67c = *rsi3;
    fun_6ae(0x680, rsi3 + 1, rdx7, ecx8);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps [rsp+0x10], xmm0");
    rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(printf);
    eax11 = fun_6ca();
    if (eax11 != printf) {
        rdi9 = reinterpret_cast<int32_t*>(0x6d5);
        *reinterpret_cast<int32_t*>(&rsi10) = eax11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(printf);
        fun_6de(0x6d5, rsi10, rdx12, ecx13);
    }
    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi9 = *rsi10;
    __asm__("subsd xmm0, [r14]");
    fun_75e(0x757, rsi10 + 1);
    goto v14;
}

void fun_5c3(int64_t rdi, int64_t rsi, int64_t rdx) {
    void* rsp4;
    uint32_t ebx5;
    uint32_t* r14_6;
    int32_t ebp7;
    int32_t* r15_8;
    int64_t rax9;
    struct s5* r14_10;
    int64_t rcx11;
    int32_t* rsp12;
    int32_t* rdi13;
    int32_t* rsi14;
    int32_t eax15;
    void* rsp16;
    int32_t* rdi17;
    int32_t* rsi18;
    int32_t eax19;
    int64_t v20;

    rsp4 = __zero_stack_offset();
    ebx5 = *r14_6;
    ebp7 = *r15_8;
    *reinterpret_cast<uint32_t*>(&rax9) = ebx5 >> 3 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(printf);
    r14_10 = g5d8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_10) + rax9 * 4) = 0x80;
    if (*reinterpret_cast<uint32_t*>(&rax9) < 56) {
        if (*reinterpret_cast<uint32_t*>(&rax9) <= 51) {
            *reinterpret_cast<uint32_t*>(&rcx11) = (55 - *reinterpret_cast<uint32_t*>(&rax9) >> 2) - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(printf);
            rdx = rcx11 * 4 + 4;
            fun_640();
            rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rcx11) = *reinterpret_cast<uint32_t*>(&rax9) ^ 60;
        if (*reinterpret_cast<uint32_t*>(&rcx11) >= 4) {
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_10) + rax9 * 4 + 4) = reinterpret_cast<int32_t>(printf);
        }
        fun_5fd(rdi, rsi, rdx, *reinterpret_cast<uint32_t*>(&rcx11));
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
        __asm__("xorps xmm0, xmm0");
        __asm__("movaps [r14+0x20], xmm0");
        __asm__("movaps [r14+0x10], xmm0");
        __asm__("movaps [r14], xmm0");
        r14_10->f30 = reinterpret_cast<int64_t>(printf);
    }
    r14_10->f38 = ebp7;
    r14_10->f3c = ebx5;
    rsp12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp4) + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 40);
    rdi13 = rsp12;
    *reinterpret_cast<int32_t*>(&rsi14) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(printf);
    eax15 = fun_671();
    rsp16 = reinterpret_cast<void*>(rsp12 - 2 + 2);
    if (eax15 != printf) {
        rdi13 = reinterpret_cast<int32_t*>(0x67c);
        *reinterpret_cast<int32_t*>(&rsi14) = eax15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(printf);
        fun_685(0x67c, rsi14, rdx, *reinterpret_cast<uint32_t*>(&rcx11));
        rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x8]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi13 = *rsi14;
    fun_6ae(rdi13 + 1, rsi14 + 1, rdx, *reinterpret_cast<uint32_t*>(&rcx11));
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps [rsp+0x10], xmm0");
    rdi17 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rsi18) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(printf);
    eax19 = fun_6ca();
    if (eax19 != printf) {
        rdi17 = reinterpret_cast<int32_t*>(0x6d5);
        *reinterpret_cast<int32_t*>(&rsi18) = eax19;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(printf);
        fun_6de(0x6d5, rsi18, rdx, *reinterpret_cast<uint32_t*>(&rcx11));
    }
    __asm__("movdqa xmm0, [rsp+0x10]");
    __asm__("pcmpeqd xmm0, [rip+0x0]");
    __asm__("movmskps ecx, xmm0");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x8]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi17 = *rsi18;
    __asm__("subsd xmm0, [r14]");
    fun_75e(0x757, rsi18 + 1);
    goto v20;
}

void printf() {
    int32_t edx1;

    if (edx1 >= reinterpret_cast<int32_t>(printf)) {
    }
}

struct s14 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s15 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s16 {
    signed char[12] pad12;
    uint32_t fc;
};

struct s17 {
    signed char[16] pad16;
    uint32_t f10;
};

struct s18 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s19 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s20 {
    signed char[12] pad12;
    uint32_t fc;
};

struct s21 {
    signed char[16] pad16;
    uint32_t f10;
};

void fun_140() {
    void* rsp1;
    uint32_t edi2;
    struct s14* rax3;
    uint32_t esi4;
    struct s15* rax5;
    uint32_t r9d6;
    struct s16* rax7;
    uint32_t r14d8;
    struct s17* rax9;
    int64_t r11_10;
    uint32_t v11;
    uint32_t v12;
    uint32_t ebx13;
    uint32_t ebp14;
    uint32_t r12d15;
    uint32_t r8d16;
    uint32_t r10d17;
    uint32_t r15d18;
    int64_t r12_19;
    int64_t r14_20;
    int64_t rdx21;
    int64_t rcx22;
    int64_t r14_23;
    uint32_t r15d24;
    uint32_t r11d25;
    int64_t rdx26;
    int64_t r12_27;
    int64_t r10_28;
    int64_t rcx29;
    int64_t r14_30;
    uint32_t r10d31;
    uint32_t r15d32;
    uint32_t ecx33;
    int64_t r11_34;
    int64_t rdx35;
    int64_t r14_36;
    uint32_t r15d37;
    uint32_t r11d38;
    int64_t rdx39;
    int64_t r12_40;
    int64_t r10_41;
    int64_t rcx42;
    uint32_t* rax43;
    int32_t r8d44;
    struct s18* rax45;
    struct s19* rax46;
    struct s20* rax47;
    struct s21* rax48;
    int64_t v49;

    rsp1 = __zero_stack_offset();
    edi2 = rax3->f4;
    esi4 = rax5->f8;
    r9d6 = rax7->fc;
    r14d8 = rax9->f10;
    *reinterpret_cast<int32_t*>(&r11_10) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_10) + 4) = reinterpret_cast<int32_t>(printf);
    v11 = r14d8;
    v12 = r9d6;
    ebx13 = esi4;
    ebp14 = edi2;
    r12d15 = r8d16;
    do {
        r10d17 = ebx13;
        r15d18 = r9d6;
        r9d6 = ebp14;
        __asm__("rol r9d, 0x1e");
        __asm__("rol r12d, 0x5");
        ebx13 = r12d15;
        *reinterpret_cast<uint32_t*>(&r12_19) = (~ebp14 & r15d18) + r14d8 + ((r10d17 & ebp14) + r12d15);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_19) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r14_20) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + r11_10 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_20) + 4) = reinterpret_cast<int32_t>(printf);
        ebp14 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_20 + r12_19) + 0x5a827999);
        __asm__("rol r14d, 0x5");
        *reinterpret_cast<int32_t*>(&rdx21) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + (reinterpret_cast<uint64_t>(r11_10 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx22) = (~r12d15 & r10d17) + (r9d6 & r12d15) + r15d18 + ebp14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d15 = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdx21 + rcx22) + 0x5a827999);
        r11_10 = r11_10 + 2;
        r14d8 = r10d17;
    } while (r11_10 != 20);
    *reinterpret_cast<int32_t*>(&r14_23) = 20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_23) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r15d24 = r9d6;
        r9d6 = ebp14;
        r11d25 = ebx13;
        ebx13 = r12d15;
        __asm__("rol r12d, 0x5");
        *reinterpret_cast<uint32_t*>(&rdx26) = (r11d25 ^ ebp14 ^ r15d24) + r12d15 + r10d17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r12_27) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + r14_23 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_27) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol r9d, 0x1e");
        ebp14 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_27 + rdx26) + 0x6ed9eba1);
        __asm__("rol edx, 0x5");
        *reinterpret_cast<int32_t*>(&r10_28) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + (reinterpret_cast<uint64_t>(r14_23 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_28) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx29) = (r12d15 ^ r11d25 ^ r9d6) + r15d24 + ebp14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d15 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r10_28 + rcx29) + 0x6ed9eba1);
        r14_23 = r14_23 + 2;
        r10d17 = r11d25;
    } while (r14_23 != 40);
    *reinterpret_cast<int32_t*>(&r14_30) = 40;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_30) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r10d31 = ebx13;
        r15d32 = r9d6;
        r9d6 = ebp14;
        __asm__("rol r9d, 0x1e");
        ecx33 = (ebx13 | r9d6) & r12d15;
        __asm__("rol edx, 0x5");
        ebx13 = r12d15;
        *reinterpret_cast<uint32_t*>(&r11_34) = (r15d32 & r10d31 | (r15d32 | r10d31) & ebp14) + (r12d15 + r11d25);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_34) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rdx35) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + r14_30 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(printf);
        ebp14 = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdx35 + r11_34) - 0x70e44324);
        __asm__("rol edx, 0x5");
        __asm__("rol ebx, 0x1e");
        r12d15 = (r10d31 & r9d6 | ecx33) + r15d32 + ebp14 + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + (reinterpret_cast<uint64_t>(r14_30 * 4) | 4) - 0x70) - 0x70e44324;
        r14_30 = r14_30 + 2;
        r11d25 = r10d31;
    } while (r14_30 != 60);
    *reinterpret_cast<int32_t*>(&r14_36) = 60;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_36) + 4) = reinterpret_cast<int32_t>(printf);
    do {
        r15d37 = r9d6;
        r9d6 = ebp14;
        r11d38 = ebx13;
        ebx13 = r12d15;
        __asm__("rol r12d, 0x5");
        *reinterpret_cast<uint32_t*>(&rdx39) = (r11d38 ^ ebp14 ^ r15d37) + r12d15 + r10d31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r12_40) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + r14_36 * 4 - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_40) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol r9d, 0x1e");
        ebp14 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_40 + rdx39) - 0x359d3e2a);
        __asm__("rol edx, 0x5");
        *reinterpret_cast<int32_t*>(&r10_41) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp1) + (reinterpret_cast<uint64_t>(r14_36 * 4) | 4) - 0x70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_41) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<uint32_t*>(&rcx42) = (r12d15 ^ r11d38 ^ r9d6) + r15d37 + ebp14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx42) + 4) = reinterpret_cast<int32_t>(printf);
        __asm__("rol ebx, 0x1e");
        r12d15 = reinterpret_cast<uint32_t>(static_cast<int32_t>(r10_41 + rcx42) - 0x359d3e2a);
        r14_36 = r14_36 + 2;
        r10d31 = r11d38;
    } while (r14_36 != 80);
    *rax43 = r12d15 + r8d44;
    rax45->f4 = ebp14 + edi2;
    rax46->f8 = ebx13 + esi4;
    rax47->fc = r9d6 + v12;
    rax48->f10 = r11d38 + v11;
    goto v49;
}

struct s22 {
    signed char[16] pad16;
    int32_t f10;
};

struct s22* g3ce = reinterpret_cast<struct s22*>(0xe1f01040c700290f);

int32_t* g3df = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g3ec = reinterpret_cast<int32_t*>(0x66c30000000000c7);

void sha_init() {
    struct s22* rax1;
    int32_t* rax2;
    int32_t* rax3;

    __asm__("movaps xmm0, [rip+0x0]");
    rax1 = g3ce;
    __asm__("movaps [rax], xmm0");
    rax1->f10 = 0xc3d2e1f0;
    rax2 = g3df;
    *rax2 = reinterpret_cast<int32_t>(printf);
    rax3 = g3ec;
    *rax3 = reinterpret_cast<int32_t>(printf);
    return;
}

uint32_t* g4cb = reinterpret_cast<uint32_t*>(0x58b48188b);

int32_t* g4e5 = reinterpret_cast<int32_t*>(0x808604c741);

void sha_final() {
    uint32_t* rax1;
    int64_t rax2;
    int32_t* r14_3;

    rax1 = g4cb;
    *reinterpret_cast<uint32_t*>(&rax2) = *rax1 >> 3 & 63;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(printf);
    r14_3 = g4e5;
    r14_3[rax2] = 0x80;
    if (*reinterpret_cast<uint32_t*>(&rax2) < 56) {
        if (*reinterpret_cast<uint32_t*>(&rax2) > 51) 
            goto fun_54d;
        fun_54d();
    } else {
        if ((*reinterpret_cast<uint32_t*>(&rax2) ^ 60) >= 4) {
            (r14_3 + rax2)[1] = reinterpret_cast<int32_t>(printf);
        }
        fun_50a();
    }
}

uint32_t* g40f = reinterpret_cast<uint32_t*>(0xf50c8d42);

uint32_t* g41e = reinterpret_cast<uint32_t*>(0x48321108011deec1);

void sha_update(int64_t rdi, uint32_t esi) {
    int64_t r14_3;
    uint32_t* rax4;
    uint32_t* rdx5;
    uint32_t tmp32_6;
    uint1_t cf7;

    *reinterpret_cast<uint32_t*>(&r14_3) = esi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_3) + 4) = reinterpret_cast<int32_t>(printf);
    rax4 = g40f;
    rdx5 = g41e;
    tmp32_6 = *rax4 + static_cast<int32_t>(r14_3 * 8);
    cf7 = reinterpret_cast<uint1_t>(tmp32_6 < *rax4);
    *rax4 = tmp32_6;
    *rdx5 = *rdx5 + (esi >> 29) + cf7;
    if (*reinterpret_cast<int32_t*>(&r14_3) < reinterpret_cast<int32_t>(64)) {
        if (*reinterpret_cast<int32_t*>(&r14_3) < reinterpret_cast<int32_t>(4)) 
            goto 0x4b6; else 
            goto "???";
    }
}

