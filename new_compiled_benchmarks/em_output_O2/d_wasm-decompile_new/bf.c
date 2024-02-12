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
typedef struct struct_2 {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
} struct_2;
typedef struct struct_3 {
    long a;
    long b;
    long c;
    long d;
    long e;
    long f;
    long g;
    long h;
    long i;
} struct_3;
typedef struct struct_4 {
    int a;
    int b;
} struct_4;


extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t bf_init_P;
extern int64_t key_P;
extern int64_t bf_init_S;
extern int64_t key_S;
extern int64_t in_key;
extern int64_t out_key;
extern int64_t startTimer;
extern int64_t endTimer;
int64_t bf_init_P_1 = 0;
int64_t key_P_1 = 14624;
int64_t bf_init_S_1 = 80;
int64_t key_S_1 = 14704;
int64_t in_key_1 = 4176;
int64_t out_key_1 = 9376;
int64_t startTimer_1 = 18800;
int64_t endTimer_1 = 18808;










void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void local_memcpy(struct_1 a, struct_2 b, int c) {
int64_t d;
int64_t e;
if (c <= 0) goto B_a;
int64_t f = c & 7;
if (eqz(f)) {
d = c;
goto B_b;
}
d = c;
while (1) {
a.a = b.a;
b = b + 4;
a = a + 4;
d = d - 1;
e = e + 1;
if (e != f) //continue L_d;
}
B_b:;
if (c < 8) goto B_a;
while (1) {
a.a = b.a;
a.b = b.b;
a.c = b.c;
a.d = b.d;
a.e = b.e;
a.f = b.f;
a.g = b.g;
a.h = b.h;
b = b + 32;
a = a + 32;
e = d - 9;
d = d - 8;
if (e < -2) //continue L_e;
}
B_a:;
}

void BF_set_key(int a, struct_3 b) {
int64_t d;
int64_t* c = stack_pointer - 16;
stack_pointer = c;
memcpy(key_P, d = bf_init_P, 72);
memcpy(key_S, d = bf_init_S, 4096);
a = b + select__if(72, a, a >= 72);
d = 0;
int64_t * e = b;
while (1) {
int64_t * f = e + 1;
f = select__if(f, b, a > f);
int64_t * g = f + 1;
g = select__if(g, b, a > g);
int64_t * h = g + 1;
h = select__if(h, b, a > h);
int64_t i = h[0];
int64_t * j = key_P + (d << 2);
j[0] =
j[0] ^ (i | ((g = g[0]) | ((f = f[0]) << 8 | (e = e[0]) << 16)) << 8);
e = h + 1;
e = select__if(e, b, a > e);
d = d + 1;
if (d != 18) //continue L_a;
}
c[2] = 0L;
BF_encrypt(c + 8, 1);
b = key_P;
b.a = (long@4)c[2];
BF_encrypt(c + 8, 1);
b.b = (long@4)c[2];
BF_encrypt(c + 8, 1);
b.c = (long@4)c[2];
BF_encrypt(c + 8, 1);
b.d = (long@4)c[2];
BF_encrypt(c + 8, 1);
b.e = (long@4)c[2];
BF_encrypt(c + 8, 1);
b.f = (long@4)c[2];
BF_encrypt(c + 8, 1);
b.g = (long@4)c[2];
BF_encrypt(c + 8, 1);
b.h = (long@4)c[2];
BF_encrypt(c + 8, 1);
b.i = (long@4)c[2];
b = 0;
while (1) {
BF_encrypt(c + 8, 1);
a = key_S;
(a + (d = b << (int64_t)2))[0] = (int64_t)c[2];
(a + (d | 4))[0] = (int64_t)c[3];
a = b < 1022;
b = b + 2;
if (a) //continue L_b;
}
stack_pointer = c + 16;
}

void BF_encrypt(struct_4 a, int b) {
{ e (int,)a (int,)b (int,)c (int,)d (int,)e (int,)f (int,)g (int,)h (int,)i (int,)j (int,)k (int,)l (int,)m (int,)n (int,)o (int,)p (int,)q (int64_t)r }
int64_t f;
int64_t c = a.b;
int64_t d = a.a;
a.a =
(e =
{
if (b) {
f = (e = key_P).a;
b =
(e.q ^
((((c =
(e.p ^
((((d =
(e.o ^
((((c =
(e.n ^
((((d =
(e.m ^
((((c =
(e.l ^
((((d =
(e.k ^
((((c =
(e.j ^
((((d =
(e.i ^
((((c =
(e.h ^
((((d =
(e.g ^
((((c =
(e.f ^
((((d =
(e.e ^
((((c =
(e.d ^
((((d =
(e.c ^
((((c = (e.b ^
(((b = key_S) + ((d = d ^ f) >> 14 & 1020) + (int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d;
e.r ^ c;
goto B_a;
}
f = (e = key_P).r;
b =
(e.b ^
((((c =
(e.c ^
((((d =
(e.d ^
((((c =
(e.e ^
((((d =
(e.f ^
((((c =
(e.g ^
((((d =
(e.h ^
((((c =
(e.i ^
((((d =
(e.j ^
((((c =
(e.k ^
((((d =
(e.l ^
((((c =
(e.m ^
((((d =
(e.n ^
((((c =
(e.o ^
((((d =
(e.p ^
((((c = (e.q ^
(((b = key_S) + ((d = d ^ f) >> 14 & 1020) + (int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
b +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d;
e.a ^ c;
B_a:;
});
a.b = b;
}

void BF_cfb64_encrypt(ubyte_ptr a, byte_ptr b, int c, int_ptr@1 d, int_ptr e, int f) {
int64_t i;
int64_t j;
int64_t * g = stack_pointer - 16;
stack_pointer = g;
int64_t h = e[0];
if (f) {
if (eqz(c)) goto B_a;
while (1) {
c = c - 1;
if (eqz(h)) {
g[2] =
((f = d[0]) << 24 | (f & 65280) << 8) | ((f >> 8 & 65280) | f >> 24);
g[3] =
((f = d[4]) << 24 | (f & 65280) << 8) | ((f >> 8 & 65280) | f >> 24);
BF_encrypt(g + 8, 1);
d[0] =
((f = g[2]) << 24 | (f & 65280) << 8) | ((f >> 8 & 65280) | f >> 24);
d[4] =
((f = g[3]) << 24 | (f & 65280) << 8) | ((f >> 8 & 65280) | f >> 24);
}
b[0] = (i = (f = d + (ubyte)h)[0] ^ a[0]);
f[0] = i;
b = b + 1;
a = a + 1;
h = h + 1 & 7;
if (c) //continue L_c;
}
goto B_a;
}
if (eqz(c)) goto B_a;
while (1) {
c = c - 1;
if (eqz(h)) {
g[2] =
((f = d[0]) << 24 | (f & 65280) << 8) | ((f >> 8 & 65280) | f >> 24);
g[3] =
((f = d[4]) << 24 | (f & 65280) << 8) | ((f >> 8 & 65280) | f >> 24);
BF_encrypt(g + 8, 1);
d[0] =
((f = g[2]) << 24 | (f & 65280) << 8) | ((f >> 8 & 65280) | f >> 24);
d[4] =
((f = g[3]) << 24 | (f & 65280) << 8) | ((f >> 8 & 65280) | f >> 24);
}
f = d + h;
i = (ubyte)f[0];
f[0] = (j = a[0]);
b[0] = i ^ j;
b = b + 1;
a = a + 1;
h = h + 1 & 7;
if (c) //continue L_e;
}
B_a:;
e[0] = h;
stack_pointer = g + 16;
}

int blowfish_main() {
int64_t d;
int64_t b;
int64_t i;
int64_t g;
int64_t c;
{ h (ubyte,)a (ubyte)b }
int64_t e;
int64_t f;
int64_t* a = stack_pointer - 112;
stack_pointer = a;
a[13] = 0L;
a[1] = 0L;
a[1] = 0;
BF_set_key(8, a + 104);
while (1) {
memcpy(
a - -64,
in_key + d,
b =
(i = select__if(39, b = select__if(5199, d, d <= 5199) - d, b >= 39)) +
1);
BF_cfb64_encrypt(a - -64, a + 16, b, a + 8, a + 4, 1);
int64_t k = b & 1;
if (eqz(i)) {
e = g;
b = 0;
goto B_b;
}
int64_t j = b & -2;
b = 0;
e = g;
f = 0;
while (1) {
c = c + ((a + 16 + (ubyte)b)[0] != (h = (h = out_key) + e).a) +
((a + 16 + (b | (ubyte)1))[0] != h.b);
b = b + 2;
e = e + 2;
f = f + 2;
if (f != j) //continue L_d;
}
B_b:;
f = d + i;
h = g + 1;
if (k) { c = c + ((a + 16 + (ubyte)b)[0] != ((j = out_key) + (ubyte))e)[0] }
d = f + 1;
g = h + i;
if (f <= 5198) //continue L_a;
}
stack_pointer = a + 112;
return c;
}

int submain() {
double d;
int64_t* a = stack_pointer + -64;
stack_pointer = a;
int64_t b = gettimeofday(a + 48, 0);
if (b) {
a[8] = b;
iprintf(memory_base + 14576, a + 32);
}
(double)startTimer[0] =
f64_convert_i32_s(b = (int))a[14] * 0.000001 +
(long))f64_convert_i64_s(a[6];
b = blowfish_main();
int64_t c = gettimeofday(a + 48, 0);
if (c) {
a[4] = c;
iprintf(memory_base + 14576, a + 16);
}
(double)endTimer[0] =
(d = f64_convert_i32_s(c = (int))a[14] * 0.000001 +
(long)))f64_convert_i64_s(a[6];
a[0] = d - (double)startTimer[0];
small_printf(memory_base + 14611, a);
stack_pointer = a - -64;
return b;
}