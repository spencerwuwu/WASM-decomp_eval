typedef struct struct_1 {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
} struct_1;


extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t sha_info_data;
extern int64_t sha_info_digest;
extern int64_t sha_info_count_lo;
extern int64_t sha_info_count_hi;
extern int64_t indata;
extern int64_t startTimer;
extern int64_t endTimer;
int64_t sha_info_data_1 = 16464;
int64_t sha_info_digest_1 = 16528;
int64_t sha_info_count_lo_1 = 16548;
int64_t sha_info_count_hi_1 = 16552;
int64_t indata_1 = 0;
int64_t startTimer_1 = 16560;
int64_t endTimer_1 = 16568;
int64_t in_i = 16384;
int64_t outData = 16400;










void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void local_memset(int a, int b, int c, struct_1 d) {
int64_t e;
if (c < 4) goto B_a;
d = a + select__if(d << 2, 0, d > 0);
c = c / 4;
int64_t f = c - 1;
a = c & 7;
if (a) {
while (1) {
d.a = b;
d = d + 4;
c = c - 1;
e = e + 1;
if (e != a) //continue L_c;
}
}
if (f < 7) goto B_a;
while (1) {
d.h = b;
d.g = b;
d.f = b;
d.e = b;
d.d = b;
d.c = b;
d.b = b;
d.a = b;
d = d + 32;
e = c > 8;
c = c - 8;
if (e) //continue L_d;
}
B_a:;
}

void local_memcpy(int_ptr a, int_ptr@1 b, int c) {
if (c >= 4) {
c = c >> 2;
while (1) {
a[0] = b[0];
a = a + 4;
b = b + 4;
int64_t d = c > 1;
c = c - 1;
if (d) //continue L_b;
}
}
}

void sha_transform() {
int64_t a;
int64_t e;
int64_t i;
{ d (int,)a (int,)b (int,)c (int,)d (int64_t)e }
int64_t g;
int64_t j;
{ c (long,)a (long,)b (long,)c (long,)d (long,)e (long,)f (long,)g (long)h } =
stack_pointer - 320;
stack_pointer = c;
c.h = (a = (long)sha_info_data)[7];
c.g = (long)a[6];
c.f = (long)a[5];
c.e = (long)a[4];
c.d = (long)a[3];
{ b (int,)a (int,)b (int,)c (int,)d (int64_t)e } = 16;
c.c = (long)a[2];
c.a = (long)a[0];
c.b = (long)a[1];
while (1) {
a = c + (b << 2);
(int64_t)a[0] =
(a + (int64_t)-64)[0] ^
((a - (int64_t)56)[0] ^ ((a - (int64_t)32)[0] ^ (a - (int)))12)[0];
b = b + 1;
if (b != 80) //continue L_a;
}
b = sha_info_digest;
int64_t l = b.e;
int64_t h = l;
int64_t m = b.d;
int64_t k = m;
int64_t n = b.c;
a = n;
int64_t o = b.b;
int64_t f = o;
int64_t p = b.a;
b = p;
while (1) {
b =
c[e] + ((i = a) & f) + ((d = b) << 5) + ((g = k) & (f ^ -1)) + h +
1518500249;
a = f << 30;
j = 20;
h = g;
k = i;
f = d;
e = e + 1;
if (e != 20) //continue L_b;
}
while (1) {
b = (int64_t)c[j] + ((h = i) ^ ((e = a) ^ d)) + ((f = b) << 5) + g +
1859775393;
a = d << 30;
k = 40;
g = i;
i = e;
d = f;
j = j + 1;
if (j != 40) //continue L_c;
}
while (1) {
b =
c[k] + ((d = b) << 5) + h + ((((i = e) | (g = a)) & f) | (a & e)) -
1894007588;
a = f << 30;
j = 60;
h = e;
e = g;
f = d;
k = k + 1;
if (k != 60) //continue L_d;
}
while (1) {
b =
c[j] + ((h = g) ^ ((e = a) ^ d)) + ((f = b) << 5) + i - 899497514;
a = d << 30;
i = g;
g = e;
d = f;
j = j + 1;
if (j != 80) //continue L_e;
}
d = sha_info_digest;
d.e = h + l;
d.d = e + m;
d.c = a + n;
d.b = f + o;
d.a = b + p;
stack_pointer = c + 320;
}

void sha_init() {
{ a (long,)a (long,)b (int64_t)c } = sha_info_digest;
a.c = -1009589776;
a.b = 1167088121787636990L;
a.a = -1167088121787636991L;
sha_info_count_lo[0] = 0;
sha_info_count_hi[0] = 0;
}

void sha_update(int_ptr@1 a, int b) {
int64_t d;
{ c (int,)a (int64_t)b } = sha_info_count_lo;
c.a = (c = c.a) + (d = b << 3);
int64_t * e = sha_info_count_hi;
e[0] = e[0] + (d > (c ^ -1)) + (b >> 29);
if (b < 64) {
d = b;
goto B_a;
}
while (1) {
c = sha_info_data;
e = 16;
d = a;
while (1) {
c.a = (int@1)d[0];
c.b = (int@1)d[4];
c = c + 8;
d = d + 8;
int64_t f = e != 2;
e = e - 2;
if (f) //continue L_d;
}
a = a - -64;
c = b > 127;
sha_transform();
d = b + -64;
b = d;
if (c) //continue L_c;
}
B_a:;
if (d >= 4) {
c = d >> 2;
d = sha_info_data;
while (1) {
d[0] = a[0];
d = d + 4;
a = a + 4;
e = c > 1;
c = c - 1;
if (e) //continue L_f;
}
}
}

void sha_final() {
int64_t c;
{ a (long,)a (long,)b (long,)c (long,)d (long,)e (long,)f (long,)g (int,)h (int64_t)i }
sha_info_data[a = (c = (int))sha_info_count_lo[0] >> 3 & (int64_t)63] = 128;
int64_t b = a + 1;
int64_t d = (int64_t)sha_info_count_hi[0];
if (a >= 56) {
if ((a ^ 60) >= 4) { sha_info_data[b] = 0 }
sha_transform();
a = sha_info_data;
a.a = 0L;
a.g = 0L;
a.f = 0L;
a.e = 0L;
a.d = 0L;
a.c = 0L;
a.b = 0L;
goto B_a;
}
if (a > 51) goto B_a;
memset(sha_info_data + (b << 2), 0, 55 - a & -4);
B_a:;
a = sha_info_data;
a.i = c;
a.h = d;
sha_transform();
}

void sha_stream() {
int64_t a = sha_info_digest;
a[4] = -1009589776;
a[1] = 1167088121787636990L;
a[0] = -1167088121787636991L;
a = sha_info_count_lo;
a[0] = 0;
int64_t * b = sha_info_count_hi;
b[0] = 0;
int64_t c = indata;
sha_update(c, 8192);
sha_update(c - -8192, 8192);
sha_info_data[a = (c = (int))a[0] >> 3 & (int64_t)63] = 128;
int64_t d = a + 1;
b = b[0];
if (a >= 56) {
if ((a ^ 60) >= 4) { sha_info_data[d] = 0 }
sha_transform();
a = sha_info_data;
a[0] = 0L;
a[6] = 0L;
a[5] = 0L;
a[4] = 0L;
a[3] = 0L;
a[2] = 0L;
a[1] = 0L;
goto B_a;
}
if (a > 51) goto B_a;
memset(sha_info_data + (d << 2), 0, 55 - a & -4);
B_a:;
a = sha_info_data;
a[15] = c;
a[14] = b;
sha_transform();
}

int submain() {
double h;
int64_t* a = stack_pointer + -64;
stack_pointer = a;
{ b (int,)a (int,)b (int,)c (int,)d (int64_t)e } = gettimeofday(a + 48, 0);
if (b) {
a[8] = b;
iprintf(memory_base + 16420, a + 32);
}
(double)startTimer[0] =
f64_convert_i32_s(b = (int))a[14] * 0.000001 +
(long))f64_convert_i64_s(a[6];
sha_stream();
b = sha_info_digest;
int64_t d = b.e;
int64_t e = b.d;
int64_t f = b.c;
int64_t g = b.b;
b = b.a;
int64_t c = gettimeofday(a + 48, 0);
if (c) {
a[4] = c;
iprintf(memory_base + 16420, a + 16);
}
(double)endTimer[0] =
(h = f64_convert_i32_s(c = (int))a[14] * 0.000001 +
(long)))f64_convert_i64_s(a[6];
a[0] = h - (double)startTimer[0];
small_printf(memory_base + 16455, a);
stack_pointer = a - -64;
return (b != 6969911) + (g != -1814260603) + (f != 742465810) +
(e != 1677179459) +
(d != -1384908510);
}