

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t sha_info_data;
extern int64_t sha_info_digest;
extern int64_t sha_info_count_lo;
extern int64_t sha_info_count_hi;
extern int64_t indata;
extern int64_t in_i;
extern int64_t startTimer;
extern int64_t outData;
extern int64_t endTimer;
int64_t sha_info_data_1 = 16464;
int64_t sha_info_digest_1 = 16528;
int64_t sha_info_count_lo_1 = 16548;
int64_t sha_info_count_hi_1 = 16552;
int64_t indata_1 = 0;
int64_t in_i_1 = 16384;
int64_t startTimer_1 = 16560;
int64_t outData_1 = 16400;
int64_t endTimer_1 = 16568;










void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void local_memset(int a, int b, int c, int_ptr d) {
if (c < 4) goto B_a;
c = c / 4;
d = a + select__if(d << 2, 0, d > 0);
while (1) {
d = d;
d[0] = b;
a = c;
c = a + -1;
d = d + 4;
if (a > 1) //continue L_b;
}
B_a:;
}

void local_memcpy(int_ptr a, int_ptr@1 b, int c) {
if (c < 4) goto B_a;
c = c / 4;
a = a;
b = b;
while (1) {
a = a;
a[0] = (b = b)[0];
int64_t d = c;
c = d + -1;
a = a + 4;
b = b + 4;
if (d > 1) //continue L_b;
}
B_a:;
}

void sha_transform() {
int64_t b;
int64_t c;
int64_t o;
int64_t p;
int64_t q;
int64_t r;
int64_t n;
{* a (long,)a (long)b } = stack_pointer - 320;
stack_pointer = a;
(a + 56)[0] = ((b = sha_info_data) + (long)56)[0];
(a + 48)[0] = (b + (long)48)[0];
(a + 40)[0] = (b + (long)40)[0];
(a + 32)[0] = (b + (long)32)[0];
(a + 24)[0] = (b + (long)24)[0];
(a + 16)[0] = (b + (long)16)[0];
a.a = (long)b[0];
a.b = (b + (long)8)[0];
b = 16;
while (1) {
b = a + ((c = b) << 2);
(int64_t)b[0] =
(((b + (int64_t)-32)[0] ^ (b + (int))-12)[0] ^ (b + (int))-56)[0] ^
(b + (int64_t)-64)[0];
c = c + 1;
b = c;
if (c != 80) //continue L_a;
}
b = sha_info_digest;
int64_t d = (int64_t)b[4];
c = d;
int64_t e = (int64_t)b[3];
int64_t f = e;
int64_t g = (int64_t)b[2];
int64_t h = g;
int64_t i = (int64_t)b[1];
int64_t j = i;
int64_t k = (int64_t)b[0];
int64_t l = k;
int64_t m = 0;
while (1) {
n = c;
o = f;
c = o;
p = h;
f = p;
b = j;
q = b << 30;
h = q;
r = l;
j = r;
n =
n + (r << 5) + (p & b) + (o & (b ^ -1)) + a[b = (int64_t)m] + 1518500249;
l = n;
b = b + 1;
m = b;
if (b != 20) //continue L_b;
}
b = o;
c = p;
f = q;
h = r;
j = n;
l = 20;
while (1) {
r = b;
m = c;
b = m;
o = f;
c = o;
n = h;
q = n << 30;
f = q;
p = j;
h = p;
n = r + (p << 5) + (m ^ (o ^ n)) + a[l = (int64_t)l] + 1859775393;
j = n;
r = l + 1;
l = r;
if (r != 40) //continue L_c;
}
f = m;
h = o;
j = q;
l = p;
m = n;
o = 40;
while (1) {
r = f;
b = h;
f = b;
c = j;
h = c;
n = l;
q = n << 30;
j = q;
p = m;
l = p;
n =
r + (p << 5) + ((n & (b | c)) | (b & c)) + a[o = (int64_t)o] + -1894007588;
m = n;
r = o + 1;
o = r;
if (r != 60) //continue L_d;
}
b = b;
c = c;
f = q;
h = p;
j = n;
l = 60;
while (1) {
r = b;
m = c;
b = m;
o = f;
c = o;
n = h;
q = n << 30;
f = q;
p = j;
h = p;
n = r + (p << 5) + (m ^ (o ^ n)) + a[l = (int64_t)l] + -899497514;
j = n;
r = l + 1;
l = r;
if (r != 80) //continue L_e;
}
b = sha_info_digest;
b[4] = m + d;
b[3] = o + e;
b[2] = q + g;
b[1] = p + i;
b[0] = n + k;
stack_pointer = a + 320;
}

void sha_init() {
{ a (long,)a (long,)b (int64_t)c } = sha_info_digest;
a.c = -1009589776;
a.b = 1167088121787636990L;
a.a = -1167088121787636991L;
sha_info_count_lo[0] = 0;
sha_info_count_hi[0] = 0;
}

void sha_update(int_ptr a, int b) {
int64_t d;
int64_t c;
int64_t * e;
c = b << 3;
if (c <= ((d = (int))sha_info_count_lo[0] ^ -1)) goto B_a;
e = sha_info_count_hi;
e[0] = e[0] + 1;
B_a:;
sha_info_count_lo[0] = d + c;
c = sha_info_count_hi;
c[0] = (int64_t)c[0] + (b >> 29);
if (b >= 64) goto B_c;
d = a;
a = b;
goto B_b;
B_c:;
b = b;
c = a;
while (1) {
e = b;
b = 16;
a = sha_info_data;
int64_t f = c;
c = f;
while (1) {
a = a;
a[0] = (c = (int@1)c)[0];
d = b;
b = d + -1;
a = a + 4;
c = c + 4;
if (d > 1) //continue L_e;
}
sha_transform();
a = e + -64;
b = a;
d = f + 64;
c = d;
d = d;
a = a;
if (e > 127) //continue L_d;
}
B_b:;
c = d;
b = a;
if (b < 4) goto B_f;
b = b / 4;
a = sha_info_data;
c = c;
while (1) {
a = a;
a[0] = (c = (int@1)c)[0];
d = b;
b = d + -1;
a = a + 4;
c = c + 4;
if (d > 1) //continue L_g;
}
B_f:;
}

void sha_final() {
int64_t b;
int64_t a = (int64_t)sha_info_count_lo[0];
sha_info_data[b = a >> 3 & (int64_t)63] = 128;
int64_t c = b + 1;
int64_t d = (int64_t)sha_info_count_hi[0];
if (b < 56) goto B_b;
b = b ^ 63;
if (b < 4) goto B_c;
memset(sha_info_data + (c << 2), 0, select__if(b = b >> 2, 1, b > 1) << 2);
B_c:;
sha_transform();
b = sha_info_data;
b[0] = 0L;
(b + 48)[0] = 0L;
(b + 40)[0] = 0L;
(b + 32)[0] = 0L;
(b + 24)[0] = 0L;
(b + 16)[0] = 0L;
(b + 8)[0] = 0L;
goto B_a;
B_b:;
if (b > 51) goto B_a;
memset(sha_info_data + (c << 2),
0,
select__if(b = (55 - b) / 4, 1, b > 1) << 2);
B_a:;
b = sha_info_data;
b[15] = a;
b[14] = d;
sha_transform();
}

void sha_stream() {
int64_t a = sha_info_digest;
a[4] = -1009589776;
a[1] = 1167088121787636990L;
a[0] = -1167088121787636991L;
sha_info_count_lo[0] = 0;
sha_info_count_hi[0] = 0;
int64_t b = 0;
while (1) {
sha_update(indata + ((a = b) << 13), (int))in_i[a];
b = a + 1;
if (eqz(a)) //continue L_a;
}
b = (int64_t)sha_info_count_lo[0];
sha_info_data[a = b >> 3 & (int64_t)63] = 128;
int64_t c = a + 1;
int64_t d = (int64_t)sha_info_count_hi[0];
if (a < 56) goto B_c;
a = a ^ 63;
if (a < 4) goto B_d;
memset(sha_info_data + (c << 2), 0, select__if(a = a >> 2, 1, a > 1) << 2);
B_d:;
sha_transform();
a = sha_info_data;
a[0] = 0L;
(a + 48)[0] = 0L;
(a + 40)[0] = 0L;
(a + 32)[0] = 0L;
(a + 24)[0] = 0L;
(a + 16)[0] = 0L;
(a + 8)[0] = 0L;
goto B_b;
B_c:;
if (a > 51) goto B_b;
memset(sha_info_data + (c << 2),
0,
select__if(a = (55 - a) / 4, 1, a > 1) << 2);
B_b:;
a = sha_info_data;
a[15] = b;
a[14] = d;
sha_transform();
}

int submain() {
int64_t b;
double g;
int64_t e;
int64_t* a = stack_pointer - 64;
stack_pointer = a;
b = gettimeofday(a + 48, 0);
if (eqz(b)) goto B_a;
a[8] = b;
iprintf(memory_base + 16420, a + 32);
B_a:;
b = (int64_t)a[14];
long c = (long)a[6];
(double)startTimer[0] =
f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c);
sha_stream();
b = 0;
int64_t d = 0;
while (1) {
e =
b +
((outData + (b = (d = d) << (int64_t)2))[0] != (sha_info_digest + (int))b)[0];
b = e;
int64_t f = d + 1;
d = f;
if (f != 5) //continue L_b;
}
b = gettimeofday(a + 48, 0);
if (eqz(b)) goto B_c;
a[4] = b;
iprintf(memory_base + 16420, a + 16);
B_c:;
b = (int64_t)a[14];
c = (long)a[6];
(double)endTimer[0] =
(g = f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c));
a[0] = g - (double)startTimer[0];
small_printf(memory_base + 16455, a);
stack_pointer = a + 64;
return e;
}