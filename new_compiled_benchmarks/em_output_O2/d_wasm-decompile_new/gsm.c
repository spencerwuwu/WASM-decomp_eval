typedef struct struct_1 {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
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
extern int64_t bitoff;
extern int64_t startTimer;
extern int64_t inData;
extern int64_t outData;
extern int64_t endTimer;
int64_t bitoff_1 = 0;
int64_t startTimer_1 = 960;
int64_t inData_1 = 256;
int64_t outData_1 = 576;
int64_t endTimer_1 = 968;
int64_t outLARc = 896;












void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

int gsm_add(int a, int b) {
return select__if(-32768,
b = select__if(32767, b = a + b, b >= 32767),
b <= -32768)
}

int gsm_mult(int a, int b) {
int64_t c;
retur;
//i32_extend16_s(
select__if(select__if(32767, c = a * b >> 15, b == -32768), c, a == -32768));
}

int gsm_mult_r(int a, int b) {
//return i32_extend16_s({
if (a == -32768) {
32767;
if (b == -32768) goto B_a;
}
a * b + 16384 >> 15;
B_a:;
})
}

int gsm_abs(int a) {
//return i32_extend16_s(
select__if(select__if(32767, 0 - a, a == -32768), a, a < 0))
}

int gsm_norm(int a) {
int64_t b;
b = {
a = {
if (a < 0) {
0;
if (a < -1073741823) goto B_a;
a = a ^ -1;
}
if (a >= 65536) {
if (a >= 16777216) {
b = 65535;
a >> 24;
goto B_b;
}
b = 7;
a >> 16;
goto B_b;
}
if (a & 65280) {
b = 15;
a >> 8;
goto B_b;
}
b = 23;
a & 255;
B_b:;
}
(a + (ubyte)bitoff)[0] + b;
B_a:;
}
//return i32_extend16_s(b);
}

int gsm_div(int a, int b) {
int64_t c;
if (eqz(a)) { return 0 }
a = a << 1;
retur;
//i32_extend16_s(
((((((((((((((a >= b) << 3 |
(c = (a = a - select__if(b, 0, a >= b) << 1) >= b) << 2) |
((a = a - select__if(b, 0, c) << 1) >= b) << 1) |
(c = (a = a - select__if(b, 0, a >= b) << 1) >= b)) <<
2 |
((a = a - select__if(b, 0, c) << 1) >= b) << 1) |
(c = (a = a - select__if(b, 0, a >= b) << 1) >= b)) <<
2 |
((a = a - select__if(b, 0, c) << 1) >= b) << 1) |
(c = (a = a - select__if(b, 0, a >= b) << 1) >= b)) <<
2 |
((a = a - select__if(b, 0, c) << 1) >= b) << 1) |
(c = (a = a - select__if(b, 0, a >= b) << 1) >= b)) <<
2 |
((a = a - select__if(b, 0, c) << 1) >= b) << 1) |
(c = (a = a - select__if(b, 0, a >= b) << 1) >= b)) <<
2 |
((a = a - select__if(b, 0, c) << 1) >= b) << 1) |
(c = (a = a - select__if(b, 0, a >= b) << 1) >= b)) <<
1 |
a - select__if(b, 0, c) << 1 >= b);
}

void Autocorrelation(int a, int b) {
{ d (short,)a (short)b }
int64_t o;
int64_t c;
int64_t e;
int64_t g;
int64_t n;
int64_t i;
int64_t j;
int64_t k;
int64_t l;
int64_t m;
int64_t * h;
int64_t u;
while (1) {
g =
//i32_extend16_s(
select__if(select__if(32767,
0 - (c = (a + ((o = d << 1) | (ushort),)2))[0]
c == 32768),
c,
//i32_extend16_s(c) < 0));
e =
select__if(
g,
c =
select__if(
c =
//i32_extend16_s(
select__if(select__if(32767, 0 - (c = (a + (ushort),)o)[0] c == 32768),
c,
//i32_extend16_s(c) < 0)),
e = e,
c > e),
c < g);
d = d + 2;
if (d != 160) //continue L_a;
}
o = 0;
if (eqz(e)) {
e = 0;
goto B_b;
}
g = 0;
e = select__if(-3, 5, c = e < 256) -
(bitoff + select__if(d = e & 65535, d >> 8, (ubyte)c))[0];
u = e > 0;
c = e - 1;
if (c > 3) goto B_b;
c = 16384 >> c;
while (1) {
h = a + (d = g << 1);
h[0] = c * h[0] + 16384 >> 15;
h = a + (d | 2);
h[0] = c * h[0] + 16384 >> 15;
h = a + (d | 4);
h[0] = c * h[0] + 16384 >> 15;
d = a + (d | 6);
d.a = c * d.a + 16384 >> 15;
g = g + 4;
if (g != 160) //continue L_d;
}
B_b:;
int64_t f = (short)a[0];
b[8] = 0;
b[6] = 0L;
b[4] = 0L;
int64_t v = 8;
b[2] = 0L;
b[0] = 0L;
c = (short)a[7];
g = c * (n = (short))a[1] + f * (i = (short))a[6];
h = i * n + f * (j = (short))a[5] + c * (k = (short))a[2];
int64_t p =
j * n + f * (l = (short))a[4] + i * k + c * (m = (short))a[3];
int64_t q = l * n + f * m + j * k + i * m + c * l;
int64_t r = m * n + f * k + k * l + j * m + i * l + c * j;
int64_t s = k * m + (f + k) * n + l * m + j * l + i * j + c * i;
d = a + 14;
int64_t t = (int64_t)b[7] + c * f;
f = n * n + f * f + k * k + m * m + l * l + j * j + i * i + c * c;
while (1) {
s = c) * (c = d.b + s;
f = c * c + f;
o = (d - (short)14)[0] * c + o;
t = (d - (short)12)[0] * c + t;
g = (d - (short)10)[0] * c + g;
h = (d - (short)8)[0] * c + h;
p = (d - (short)6)[0] * c + p;
q = (d - (short)4)[0] * c + q;
r = (d - (short)2)[0] * c + r;
d = d + 2;
v = v + 1;
if (v != 160) //continue L_e;
}
b[7] = t << 1;
b[8] = o << 1;
b[6] = g << 1;
b[5] = h << 1;
b[4] = p << 1;
b[3] = q << 1;
b[2] = r << 1;
b[1] = s << 1;
b[0] = f << 1;
if (u) {
c = 159;
while (1) {
a[0] = (ushort)a[0] << e;
a[1] = (ushort)a[1] << e;
a[2] = (ushort)a[2] << e;
a[3] = (ushort)a[3] << e;
a[4] = (ushort)a[4] << e;
a = a + 10;
d = c != 4;
c = c - 5;
if (d) //continue L_g;
}
}
}

void Reflection_coefficients(struct_1 a, int b) {
int64_t c;
int64_t e;
int64_t m;
int64_t n;
int64_t o;
int64_t* d = stack_pointer + -64;
stack_pointer = d;
int64_t h = a.a;
if (eqz(h)) {
b[0] = 0L;
b[4] = 0L;
goto B_a;
}
int64_t f = {
c = {
c = h;
if (c < 0) {
0;
if (h < -1073741823) goto B_c;
c = h ^ -1;
}
if (c >= 65536) {
if (c >= 16777216) {
e = 65535;
c >> 24;
goto B_d;
}
e = 7;
c >> 16;
goto B_d;
}
if (c & 65280) {
e = 15;
c >> 8;
goto B_d;
}
e = 23;
c & 255;
B_d:;
}
(c + (ubyte)bitoff)[0] + e & 65535;
B_c:;
}
int64_t p = 16;
c = a.i;
e = a.b;
int64_t i = a.c;
int64_t * j = a.d;
int64_t g = a.e;
int64_t l = a.f;
int64_t k = a.g;
d[7] = (m = (a.h << f) >> 16);
d[6] = (k = (k << f) >> 16);
d[5] = (l = (l << f) >> 16);
d[4] = (g = (g << f) >> 16);
d[3] = (j = (j << f) >> 16);
d[2] = (i = (i << f) >> 16);
d[1] = (a = (n = e << f) >> 16);
d[24] = (c << f) >> 16;
d[23] = m;
d[22] = k;
d[21] = l;
d[20] = g;
d[19] = j;
d[18] = i;
d[17] = a;
e = 1;
a =
//i32_extend16_s(
select__if(select__if(32767, 0 - a, i = a == 32768), a, (c = n >> 16) < 0));
if (a <= (k = (h << f) >> 16)) {
l = 7;
m = 7;
while (1) {
(short)b[0] =
(c =
select__if(0 - (a = gsm_div(a), j = i32_extend16_s(k)),
a,
(h = c)) > 0);
n = e;
if (n == 8) goto B_a;
a = 1;
(short)d[16] =
(k =
select__if(
-32768,
c =
select__if(
32767,
c =
j +
//i32_extend16_s(
select__if(select__if(32767,
e = (f = c) * h + 16384 >> 15,
h = (c & 65535) == 32768),
e,
i & 1)),
c >= 32767),
c <= -32768));
if (n <= 7) {
while (1) {
e = a << 1;
(e + d + (short)32)[0] =
select__if(
-32768,
g =
select__if(
32767,
g = (c = (d + 32)[i = a + (short))1] +
//i32_extend16_s(
select__if(select__if(32767,
g = (e = (j = d + e)[0]) * f + 16384 >> 15,
(e & 65535) == 32768),
g,
h)),
g >= 32767),
g <= -32768);
j[0] =
select__if(
-32768,
c =
select__if(
32767,
c =
e +
//i32_extend16_s(
select__if(
select__if(32767, g = c * f + 16384 >> 15, (c & 65535) == 32768),
g,
h)),
c >= 32767),
c <= -32768);
c = a != l;
a = i;
if (c) //continue L_l;
}
}
l = select__if(1, m = m - 1, m <= 1);
o = o + 1;
b = b + 2;
e = n + 1;
a =
//i32_extend16_s(
select__if(select__if(32767, 0 - (a = (ushort),)d[17] i = a == 32768),
a,
(c = a)) < 0);
//if (a <= i32_extend16_s(k)) //continue L_j;
}
p = 16 - (o << 1);
e = n < 8;
}
if (eqz(e)) goto B_a;
memset(b, 0, p);
B_a:;
stack_pointer = d - -64;
}

void Transformation_to_Log_Area_Ratios(int a) {
int64_t b;
int64_t c;
int64_t d;
(short)a[0] =
select__if(
0 -
(b =
{
if ((d =
//i32_extend16_s(
b = select__if(select__if(32767, 0 - (b = (ushort),)a[0] b == 32768),
b,
(c = b)) < 0)) <=
22117) {
d >> 1;
goto B_a;
}
b - 11059;
if ((b & 65535) <= 31129) goto B_a;
(b << 2) + 26624;
B_a:;
}),
b,
c < 0);
(short)a[1] =
select__if(
0 -
(c =
{
if ((d =
//i32_extend16_s(
c = select__if(
select__if(32767, 0 - (b = (short),)a[1] (b & 65535) == 32768),
b,
b < 0))) >=
22118) {
(c << 2) + 26624;
if ((c & 65535) >= 31130) goto B_c;
c - 11059;
goto B_c;
}
d >> 1;
B_c:;
}),
c,
b < 0);
(short)a[2] =
select__if(
0 -
(c =
{
if ((d =
//i32_extend16_s(
c = select__if(
select__if(32767, 0 - (b = (short),)a[2] (b & 65535) == 32768),
b,
b < 0))) >=
22118) {
(c << 2) + 26624;
if ((c & 65535) >= 31130) goto B_e;
c - 11059;
goto B_e;
}
d >> 1;
B_e:;
}),
c,
b < 0);
(short)a[3] =
select__if(
0 -
(c =
{
if ((d =
//i32_extend16_s(
c = select__if(
select__if(32767, 0 - (b = (short),)a[3] (b & 65535) == 32768),
b,
b < 0))) >=
22118) {
(c << 2) + 26624;
if ((c & 65535) >= 31130) goto B_g;
c - 11059;
goto B_g;
}
d >> 1;
B_g:;
}),
c,
b < 0);
(short)a[4] =
select__if(
0 -
(c =
{
if ((d =
//i32_extend16_s(
c = select__if(
select__if(32767, 0 - (b = (short),)a[4] (b & 65535) == 32768),
b,
b < 0))) >=
22118) {
(c << 2) + 26624;
if ((c & 65535) >= 31130) goto B_i;
c - 11059;
goto B_i;
}
d >> 1;
B_i:;
}),
c,
b < 0);
(short)a[5] =
select__if(
0 -
(c =
{
if ((d =
//i32_extend16_s(
c = select__if(
select__if(32767, 0 - (b = (short),)a[5] (b & 65535) == 32768),
b,
b < 0))) >=
22118) {
(c << 2) + 26624;
if ((c & 65535) >= 31130) goto B_k;
c - 11059;
goto B_k;
}
d >> 1;
B_k:;
}),
c,
b < 0);
(short)a[6] =
select__if(
0 -
(c =
{
if ((d =
//i32_extend16_s(
c = select__if(
select__if(32767, 0 - (b = (short),)a[6] (b & 65535) == 32768),
b,
b < 0))) >=
22118) {
(c << 2) + 26624;
if ((c & 65535) >= 31130) goto B_m;
c - 11059;
goto B_m;
}
d >> 1;
B_m:;
}),
c,
b < 0);
(short)a[7] =
select__if(
0 -
(c =
{
if ((d =
//i32_extend16_s(
c = select__if(
select__if(32767, 0 - (b = (short),)a[7] (b & 65535) == 32768),
b,
b < 0))) >=
22118) {
(c << 2) + 26624;
if ((c & 65535) >= 31130) goto B_o;
c - 11059;
goto B_o;
}
d >> 1;
B_o:;
}),
c,
b < 0);
}

void Quantization_and_coding(struct_2 a) {
int64_t b;
a.e =
select__if(
15,
select__if(
((b =
select__if(
-32768,
b = select__if(32767, b = (a.e * 13964 >> 15) + 350, b >= 32767),
b <= -32768)) >>
9) +
8,
0,
b >= -4096),
b > 4095);
a.a =
select__if(
63,
select__if(
((b =
select__if(
-32768,
b =
select__if(32767, b = a.a * 20480 >> 15) + 256, b >= 32767,
b <= -32768)) >>
9) +
32,
0,
b >= -16384),
b > 16383);
a.b =
select__if(
63,
select__if(
((b =
select__if(
-32768,
b =
select__if(32767, b = a.b * 20480 >> 15) + 256, b >= 32767,
b <= -32768)) >>
9) +
32,
0,
b >= -16384),
b > 16383);
a.c =
select__if(
31,
select__if(
((b =
select__if(-32768,
b = select__if(32767,
b = a.c * 20480 >> 15 + 2304,
b >= 32767),
b <= -32768)) >>
9) +
16,
0,
b >= -8192),
b > 8191);
a.f =
select__if(
15,
select__if(
//(i32_extend16_s(
(b =
select__if(
-32768,
b = select__if(32767, b = (a.f * 15360 >> 15) - 1792, b >= 32767),
b <= -32768)) +
256) >>
9) +
8,
0,
b >= -4352),
b > 3839);
a.g =
select__if(
7,
select__if(
//(i32_extend16_s(
(b = select__if(
-32768,
b = select__if(32767, b = (a.g * 8534 >> 15) - 341, b >= 32767),
b <= -32768)) +
256) >>
9) +
4,
0,
b >= -2304),
b > 1791);
a.h =
select__if(
7,
select__if(
//(i32_extend16_s(
(b =
select__if(
-32768,
b = select__if(32767, b = (a.h * 9036 >> 15) - 1144, b >= 32767),
b <= -32768)) +
256) >>
9) +
4,
0,
b >= -2304),
b > 1791);
a.d =
select__if(
31,
select__if(
//(i32_extend16_s(
(b =
select__if(-32768,
b = select__if(32767,
b = a.d * 20480 >> 15 - 2560,
b >= 32767),
b <= -32768)) +
256) >>
9) +
16,
0,
b >= -8448),
b > 7935);
}

void Gsm_LPC_Analysis(int a, int b) {
int64_t* c = stack_pointer - 48;
stack_pointer = c;
Autocorrelation(a, c);
Reflection_coefficients(c, b);
Transformation_to_Log_Area_Ratios(b);
Quantization_and_coding(b);
stack_pointer = c + 48;
}

int submain() {
int64_t d;
int64_t c;
int64_t e;
double l;
int64_t* a = stack_pointer - 432;
stack_pointer = a;
int64_t b = gettimeofday(a - -64, 0);
if (b) {
a[8] = b;
iprintf(memory_base + 912, a + 32);
}
(double)startTimer[0] =
f64_convert_i32_s(b = (int))a[18] * 0.000001 +
(long))f64_convert_i64_s(a[8];
memcpy(a - -64, inData, 320);
Autocorrelation(a - -64, a + 384);
Reflection_coefficients(a + 384, a + 48);
Transformation_to_Log_Area_Ratios(a + 48);
Quantization_and_coding(a + 48);
b = 0;
while (1) {
d =
d +
(((c = b << 1) + a - (ushort)-64)[0] != (c + (e = (ushort))outData))[0] +
(((c = c | 2) + a - (ushort)-64)[0] != (c + (ushort))e)[0];
b = b + 2;
if (b != 160) //continue L_b;
}
b = (ushort)a[31];
e = (ushort)a[30];
c = (ushort)a[29];
int64_t g = (ushort)a[28];
int64_t h = (ushort)a[27];
int64_t i = (ushort)a[26];
int64_t j = (ushort)a[25];
int64_t k = (ushort)a[24];
int64_t f = gettimeofday(a + 384, 0);
if (f) {
a[4] = f;
iprintf(memory_base + 912, a + 16);
}
(double)endTimer[0] =
(l = f64_convert_i32_s(f = (int))a[98] * 0.000001 +
(long)))f64_convert_i64_s(a[48];
a[0] = l - (double)startTimer[0];
small_printf(memory_base + 947, a);
stack_pointer = a + 432;
return d + (k != 32) + (j != 33) + (i != 22) + (h != 13) + (g != 7) +
((c & 65535) != 5) +
((e & 65535) != 3) +
((b & 65535) != 2);
}