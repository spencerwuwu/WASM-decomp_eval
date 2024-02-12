typedef struct struct_1 {
    short a;
    short b;
    short c;
    short d;
    short e;
    short f;
    short g;
    short h;
} struct_1;
typedef struct struct_2 {
    short a;
    short b;
    short c;
    short d;
    short e;
    short f;
    short g;
    short h;
} struct_2;


extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t bitoff;
extern int64_t startTimer;
extern int64_t inData;
extern int64_t outData;
extern int64_t outLARc;
extern int64_t endTimer;
int64_t bitoff_1 = 0;
int64_t startTimer_1 = 960;
int64_t inData_1 = 256;
int64_t outData_1 = 576;
int64_t outLARc_1 = 896;
int64_t endTimer_1 = 968;












void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

int gsm_add(int a, int b) {
b = a + b;
b = select__if(b, 32767, b < 32767);
return select__if(b, -32768, b > -32768);
}

int gsm_mult(int a, int b) {
int64_t c;
retur;
//i32_extend16_s(
select__if(select__if(32767, c = b * a >> 15, b == -32768), c, a == -32768));
}

int gsm_mult_r(int a, int b) {
int64_t c;
if (a != -32768) goto B_b;
c = 32767;
if (b == -32768) goto B_a;
B_b:;
c = b * a + 16384 >> 15;
B_a:;
//return i32_extend16_s(c);
}

int gsm_abs(int a) {
//return i32_extend16_s(
select__if(select__if(32767, 0 - a, a == -32768), a, a < 0))
}

int gsm_norm(int a) {
int64_t b;
if (a <= -1) goto B_c;
a = a;
goto B_b;
B_c:;
b = 0;
if (a < -1073741823) goto B_a;
a = a ^ -1;
B_b:;
a = a;
if (a < 65536) goto B_e;
if (a < 16777216) goto B_f;
a = a >> 24;
b = 65535;
goto B_d;
B_f:;
a = a >> 16 & 255;
b = 7;
goto B_d;
B_e:;
if (eqz(a & 65280)) goto B_g;
a = a >> 8 & 255;
b = 15;
goto B_d;
B_g:;
a = a & 255;
b = 23;
B_d:;
b = b + (bitoff + (ubyte)a)[0];
B_a:;
//return i32_extend16_s(b);
}

int gsm_div(int a, int b) {
int64_t c;
if (a) goto B_b;
c = 0;
goto B_a;
B_b:;
int64_t d = 15;
int64_t e = 0;
a = a;
while (1) {
int64_t f = d + -1;
d = f;
int64_t g = e << 1 | (c = (a = a << 1) >= b);
e = g;
a = a - select__if(b, 0, c);
c = g;
if (f) //continue L_c;
}
B_a:;
//return i32_extend16_s(c);
}

void Autocorrelation(struct_1 a, int b) {
int64_t e;
int64_t f;
int64_t l;
int64_t m;
int64_t n;
int64_t o;
int64_t p;
int64_t q;
int64_t r;
int64_t s;
int64_t t;
int64_t u;
int64_t v;
int64_t y;
int64_t x;
int64_t w;
int64_t g;
int64_t c = 0;
int64_t d = 0;
while (1) {
d =
//i32_extend16_s(
select__if(select__if(32767, 0 - (d = a[e = (ushort),)d] d == 32768),
d,
//i32_extend16_s(d) < 0));
f = select__if(d, c = c), d > c;
c = f;
e = e + 1;
d = e;
if (e != 160) //continue L_a;
}
if (f) goto B_c;
d = 0;
goto B_b;
B_c:;
d = 262144 -
(select__if(7, -1, d = f < 256) +
(bitoff + select__if(f & 255, (f & 65280) >> 8, (ubyte)d))[0] <<
16) >>
16;
B_b:;
g = d;
d = g + -1;
if (d > 3) goto B_d;
e = 16384 >> d;
d = 0;
while (1) {
c = a + ((d = d) << 1);
c[0] = e * (short)c[0] + 16384 >> 15;
c = d + 1;
d = c;
if (c != 160) //continue L_e;
}
B_d:;
d = a.a;
b[0] = 0L;
int64_t * h = b + 32;
h[0] = 0;
int64_t i = b + 24;
i[0] = 0L;
int64_t j = b + 16;
j[0] = 0L;
int64_t k = b + 8;
k[0] = 0L;
b[0] = (e = d * d);
b[0] = (f = (c = a.b) * c + e);
b[1] = (l = (int64_t)b[1] + c * d);
k[0] = (m = d * (e = a.c));
b[1] = (l = e * c + l);
b[0] = (n = e * e + f);
k[0] = (m = c * (f = a.d) + m);
b[1] = (o = f * e + l);
b[0] = (n = f * f + n);
b[3] = (p = (int64_t)b[3] + f * d);
b[3] = (p = c * (l = a.e) + p);
k[0] = (q = l * e + m);
b[1] = (o = l * f + o);
b[0] = (n = l * l + n);
j[0] = (r = (int64_t)j[0] + l * d);
j[0] = (r = c * (m = a.f) + r);
b[3] = (p = m * e + p);
k[0] = (q = m * f + q);
b[1] = (o = m * l + o);
b[0] = (s = m * m + n);
b[5] = (t = (int64_t)b[5] + m * d);
b[5] = (t = c * (n = a.g) + t);
j[0] = (r = n * e + r);
b[3] = (p = n * f + p);
k[0] = (q = n * l + q);
b[1] = (u = n * m + o);
b[0] = (s = n * n + s);
i[0] = (v = (int64_t)i[0] + n * d);
i[0] = (c = c * (o = a.h) + v);
b[5] = (i = o * e + t);
j[0] = (r = o * f + r);
b[3] = (j = o * l + p);
k[0] = (p = o * m + q);
b[1] = (m = o * n + u);
b[0] = (l = o * o + s);
b[7] = (d = (int64_t)b[7] + o * d);
e = a + 14;
f = 8;
l = l;
m = m;
n = p;
o = j;
k = r;
j = i;
i = c;
p = d;
h = h[0];
while (1) {
d = e;
e = d + 2;
q = f + 1;
f = q;
c = (short)d[1];
r = c * c + l;
l = r;
s = (short)d[0] * c + m;
m = s;
t = (d + (short)-2)[0] * c + n;
n = t;
u = (d + (short)-4)[0] * c + o;
o = u;
v = (d + (short)-6)[0] * c + k;
k = v;
w = (d + (short)-8)[0] * c + j;
j = w;
x = (d + (short)-10)[0] * c + i;
i = x;
y = (d + (short)-12)[0] * c + p;
p = y;
d = (d + (short)-14)[0] * c + h;
h = d;
if (q != 160) //continue L_f;
}
b[8] = d;
b[7] = y;
b[6] = x;
b[5] = w;
b[4] = v;
b[3] = u;
b[2] = t;
b[1] = s;
b[0] = r;
c = 8;
while (1) {
c = b + ((d = c) << 2);
c[0] = (int64_t)c[0] << 1;
c = d + -1;
if (d) //continue L_g;
}
if (g < 1) goto B_h;
d = a;
c = 159;
while (1) {
d = d;
d[0] = (ushort)d[0] << g;
d = d + 2;
b = c;
c = b + -1;
if (b) //continue L_i;
}
B_h:;
}

void Reflection_coefficients(int_ptr a, int b) {
int64_t d;
int64_t e;
long g;
long h;
int64_t i;
int64_t m;
int64_t o;
int64_t p;
int64_t* c = stack_pointer - 96;
stack_pointer = c;
d = a[0];
if (d) goto B_b;
b[0] = 0L;
(b + 8)[0] = 0L;
goto B_a;
B_b:;
if (d <= -1) goto B_e;
d = d;
goto B_d;
B_e:;
e = 0;
if (d < -1073741823) goto B_c;
d = d ^ -1;
B_d:;
d = d;
if (d < 65536) goto B_g;
if (d < 16777216) goto B_h;
d = d >> 24;
e = 65535;
goto B_f;
B_h:;
d = d >> 16 & 255;
e = 7;
goto B_f;
B_g:;
if (eqz(d & 65280)) goto B_i;
d = d >> 8 & 255;
e = 15;
goto B_f;
B_i:;
d = d & 255;
e = 23;
B_f:;
e = e + (bitoff + (ubyte)d)[0] & 65535;
B_c:;
int64_t f = e;
d = 0;
while (1) {
(c + 64)[d = (short)d] = (int64_t)(a[d] << f) >> 16;
e = d + 1;
d = e;
if (e != 9) //continue L_j;
}
(c + 32 + 16)[0] = (c + 64 + (ushort)16)[0];
c[4] = (g = (long))c[8];
c[4] = (h = (long))c[9];
c[1] = (long@2)c[33];
c[5] = h;
e = 1;
i = i32_wrap_i64(g);
if (
i >=
(d =
//i32_extend16_s(
select__if(select__if(32767, 0 - (d = (ushort),)c[17] a = d == 32768),
d,
(f = d)) < 0))) goto B_l;
d = 16;
e = e;
a = b;
goto B_k;
B_l:;
e = d;
a = a;
f = f;
int64_t j = 7;
i = i;
b = b;
int64_t k = 1;
d = 7;
int64_t l = 0;
while (1) {
m = l;
int64_t n = d;
o = k;
p = b;
l = j;
k = f;
int64_t q = a;
d = i;
i = 0;
f = e;
if (eqz(f & 65535)) goto B_n;
e = 15;
a = 0;
f = f;
while (1) {
j = e + -1;
e = j;
b = a << 1 | (i = (f = f << 1) >= d);
a = b;
f = f - select__if(d, 0, i);
i = b;
if (j) //continue L_o;
}
B_n:;
p[0] = select__if(0 - (e = i), e, (a = k)) > 0;
if (o == 8) goto B_a;
(short)c[16] =
(q =
select__if(
d =
select__if(
d =
d +
//i32_extend16_s(
select__if(
select__if(32767,
a = (f = e = (ushort))p[0] * a + 16384 >> 15,
j = e == 32768),
a,
q & 1)),
32767,
d < 32767),
-32768,
d > -32768));
if (o > 7) goto B_p;
e = 1;
while (1) {
(c + 32 + (a = (d = e) << (short)1))[0] =
select__if(
k =
select__if(
k =
(e = (c + 32)[i = d + (short))1] +
//i32_extend16_s(
select__if(select__if(32767,
k = (a = (b = c + (short))a)[0] * f + 16384 >> 15,
(a & 65535) == 32768),
k,
j)),
32767,
k < 32767),
-32768,
k > -32768);
(short)b[0] =
select__if(
e =
select__if(
e =
a +
//i32_extend16_s(
select__if(
select__if(32767, k = e * f + 16384 >> 15, (e & 65535) == 32768),
k,
j)),
32767,
e < 32767),
-32768,
e > -32768);
e = i;
if (d != l) //continue L_q;
}
B_p:;
int64_t r =
//i32_extend16_s(
select__if(select__if(32767, 0 - (d = (ushort),)c[17] a = d == 32768),
d,
(f = d)) < 0);
e = r;
a = a;
f = f;
d = n + -1;
j = select__if(d, 1, d > 1);
i = q;
p = p + 2;
b = p;
k = o + 1;
d = d;
m = m + 1;
l = m;
//if (i32_extend16_s(q) >= r) //continue L_m;
}
d = 16 - (m << 1);
e = o < 8;
a = p;
B_k:;
a = a;
d = d;
if (eqz(e)) goto B_a;
memset(a, 0, d);
B_a:;
stack_pointer = c + 96;
}

void Transformation_to_Log_Area_Ratios(int a) {
int64_t d;
int64_t b = 1;
a = a;
while (1) {
int64_t c = b;
b =
//i32_extend16_s(
select__if(select__if(32767, 0 - (b = (a = (ushort),)a)[0] b == 32768),
b,
d = b) < 0);
if (b > 22117) goto B_c;
b = b >> 1;
goto B_b;
B_c:;
if (b > 31129) goto B_d;
b = b + -11059;
goto B_b;
B_d:;
b = (b << 2) + 26624;
B_b:;
a[0] = select__if(0 - (b = b), b, d);
c = c + 1;
b = c;
a = a + 2;
if (c != 9) //continue L_a;
}
}

void Quantization_and_coding(struct_2 a) {
int64_t b;
a.e =
select__if(
15,
select__if(
0,
((b = select__if(
b = select__if(b = (a.e * 13964 >> 15) + 350, 32767, b < 32767),
-32768,
b > -32768)) >>
9) +
8,
b < -4096),
b > 4095);
a.a =
select__if(
63,
select__if(
0,
((b =
select__if(
b =
select__if(b = a.a * 20480 >> 15) + 256, 32767, b < 32767,
-32768,
b > -32768)) >>
9) +
32,
b < -16384),
b > 16383);
a.b =
select__if(
63,
select__if(
0,
((b =
select__if(
b =
select__if(b = a.b * 20480 >> 15) + 256, 32767, b < 32767,
-32768,
b > -32768)) >>
9) +
32,
b < -16384),
b > 16383);
a.c =
select__if(
31,
select__if(
0,
((b =
select__if(
b =
select__if(b = a.c * 20480 >> 15) + 2304, 32767, b < 32767,
-32768,
b > -32768)) >>
9) +
16,
b < -8192),
b > 8191);
a.f =
select__if(
15,
select__if(
0,
//(i32_extend16_s(
(b =
select__if(
b = select__if(b = (a.f * 15360 >> 15) + -1792, 32767, b < 32767),
-32768,
b > -32768)) +
256) >>
9) +
8,
b < -4352),
b > 3839);
a.g =
select__if(
7,
select__if(
0,
//(i32_extend16_s(
(b = select__if(
b = select__if(b = (a.g * 8534 >> 15) + -341, 32767, b < 32767),
-32768,
b > -32768)) +
256) >>
9) +
4,
b < -2304),
b > 1791);
a.h =
select__if(
7,
select__if(
0,
//(i32_extend16_s(
(b =
select__if(
b = select__if(b = (a.h * 9036 >> 15) + -1144, 32767, b < 32767),
-32768,
b > -32768)) +
256) >>
9) +
4,
b < -2304),
b > 1791);
a.d =
select__if(
31,
select__if(
0,
//(i32_extend16_s(
(b = select__if(
b = select__if(b = a.d * 20480 >> 15 + -2560,
32767,
b < 32767),
-32768,
b > -32768)) +
256) >>
9) +
16,
b < -8448),
b > 7935);
}

void Gsm_LPC_Analysis(int a, int b) {
int64_t f;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
Autocorrelation(a, c);
Reflection_coefficients(c, b);
a = 1;
int64_t d = b;
while (1) {
int64_t e = a;
a =
//i32_extend16_s(
select__if(select__if(32767, 0 - (a = (d = (ushort),)d)[0] a == 32768),
a,
f = a) < 0);
if (a > 22117) goto B_c;
a = a >> 1;
goto B_b;
B_c:;
if (a > 31129) goto B_d;
a = a + -11059;
goto B_b;
B_d:;
a = (a << 2) + 26624;
B_b:;
d[0] = select__if(0 - (a = a), a, f);
e = e + 1;
a = e;
d = d + 2;
if (e != 9) //continue L_a;
}
Quantization_and_coding(b);
stack_pointer = c + 48;
}

int submain() {
int64_t b;
int64_t f;
int64_t e;
double g;
int64_t* a = stack_pointer - 432;
stack_pointer = a;
b = gettimeofday(a + 64, 0);
if (eqz(b)) goto B_a;
a[8] = b;
iprintf(memory_base + 912, a + 32);
B_a:;
b = (int64_t)a[18];
long c = (long)a[8];
(double)startTimer[0] =
f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c);
memcpy(a + 64, inData, 320);
Autocorrelation(a + 64, a + 384);
Reflection_coefficients(a + 384, a + 48);
b = 1;
int64_t* d = a + 48;
while (1) {
e = b;
b =
//i32_extend16_s(
select__if(select__if(32767, 0 - (b = (d = (ushort),)d)[0] b == 32768),
b,
f = b) < 0);
if (b > 22117) goto B_d;
b = b >> 1;
goto B_c;
B_d:;
if (b > 31129) goto B_e;
b = b + -11059;
goto B_c;
B_e:;
b = (b << 2) + 26624;
B_c:;
d[0] = select__if(0 - (b = b), b, f);
e = e + 1;
b = e;
d = d + 2;
if (e != 9) //continue L_b;
}
Quantization_and_coding(a + 48);
b = 0;
d = 0;
while (1) {
e = outData;
f =
b + ((a + 64 + (b = (d = d) << (ushort)1))[0] != (e + (ushort))b)[0];
b = f;
e = d + 1;
d = e;
if (e != 160) //continue L_f;
}
b = f;
d = 0;
while (1) {
e = outLARc;
f =
b + ((a + 48 + (b = (d = d) << (ushort)1))[0] != (e + (ushort))b)[0];
b = f;
e = d + 1;
d = e;
if (e != 8) //continue L_g;
}
b = gettimeofday(a + 384, 0);
if (eqz(b)) goto B_h;
a[4] = b;
iprintf(memory_base + 912, a + 16);
B_h:;
b = (int64_t)a[98];
c = (long)a[48];
(double)endTimer[0] =
(g = f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c));
a[0] = g - (double)startTimer[0];
small_printf(memory_base + 947, a);
stack_pointer = a + 432;
return f;
}