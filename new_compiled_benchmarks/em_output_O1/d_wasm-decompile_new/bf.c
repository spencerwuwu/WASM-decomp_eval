typedef struct struct_1 {
    int a;
    int b;
} struct_1;


extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
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
}

void wasm_apply_data_relocs() {
}

void local_memcpy(int_ptr a, int_ptr b, int c) {
if (c < 1) goto B_a;
b = b;
a = a;
c = c;
while (1) {
a = a;
a[0] = (b = b)[0];
b = b + 4;
a = a + 4;
int64_t d = c;
c = d + -1;
if (d > 1) //continue L_b;
}
B_a:;
}

void BF_set_key(int a, int b) {
int64_t* c = stack_pointer - 16;
stack_pointer = c;
int64_t d = bf_init_P;
memcpy(key_P, d, 72);
d = bf_init_S;
memcpy(key_S, d, 4096);
a = b + select__if(a, 72, a < 72);
d = 0;
int64_t * e = b;
while (1) {
e = e;
int64_t * f = e + 1;
f = select__if(f, b, f < a);
int64_t * g = f + 1;
g = select__if(g, b, g < a);
int64_t * h = g + 1;
h = select__if(h, b, h < a);
int64_t i = h[0];
g = g[0];
f = f[0];
e = e[0];
int64_t * j = key_P + ((d = d) << 2);
j[0] = (i | (g | (f << 8 | e << 16)) << 8) ^ j[0];
f = d + 1;
d = f;
e = h + 1;
e = select__if(e, b, e < a);
if (f != 18) //continue L_a;
}
c[2] = 0L;
a = 0;
while (1) {
BF_encrypt(c + 8, 1);
d = key_P;
(d + (a = (b = a) << (int64_t)2))[0] = (int64_t)c[2];
(d + (a | 4))[0] = (int64_t)c[3];
a = b + 2;
if (b < 16) //continue L_b;
}
a = 0;
while (1) {
BF_encrypt(c + 8, 1);
d = key_S;
(d + (a = (b = a) << (int64_t)2))[0] = (int64_t)c[2];
(d + (a | 4))[0] = (int64_t)c[3];
a = b + 2;
if (b < 1022) //continue L_c;
}
stack_pointer = c + 16;
}

void BF_encrypt(struct_1 a, int b) {
{ e (int,)a (int,)b (int,)c (int,)d (int,)e (int,)f (int,)g (int,)h (int,)i (int,)j (int,)k (int,)l (int,)m (int,)n (int,)o (int,)p (int,)q (int64_t)r }
int64_t f;
int64_t c = a.b;
int64_t d = a.a;
if (eqz(b)) goto B_b;
e = key_P;
f = e.a;
b = key_S;
f =
e.r ^
(c =
(e.p ^
((b +
((d =
(e.o ^
((b +
((c =
(e.n ^
((b +
((d =
(e.m ^
((b +
((c =
(e.l ^
((b +
((d =
(e.k ^
((b +
((c =
(e.j ^
((b +
((d =
(e.i ^
((b +
((c =
(e.h ^
((b +
((d =
(e.g ^
((b +
((c =
(e.f ^
((b +
((d =
(e.e ^
((b +
((c =
(e.d ^
((b +
((d = (e.c ^
((b +
((c = (e.b ^
((b + ((d = f ^ d) >> 14 & 1020) + (int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c);
b =
(e.q ^
((b + (c >> 14 & 1020) + (int64_t)1024)[0] + (b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d;
goto B_a;
B_b:;
e = key_P;
f = e.r;
b = key_S;
f =
e.a ^
(c =
(e.c ^
((b +
((d =
(e.d ^
((b +
((c =
(e.e ^
((b +
((d =
(e.f ^
((b +
((c =
(e.g ^
((b +
((d =
(e.h ^
((b +
((c =
(e.i ^
((b +
((d =
(e.j ^
((b +
((c =
(e.k ^
((b +
((d =
(e.l ^
((b +
((c =
(e.m ^
((b +
((d =
(e.n ^
((b +
((c =
(e.o ^
((b +
((d = (e.p ^
((b +
((c = (e.q ^
((b + ((d = f ^ d) >> 14 & 1020) + (int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d) >>
14 &
1020) +
(int64_t)1024)[0] +
(b + (d >> 22 & (int64_t)1020))[0] ^
(b + (d >> 6 & 1020) + (int))2048)[0] +
(b + ((d & 255) << 2) + (int))3072)[0] ^
c);
b =
(e.b ^
((b + (c >> 14 & 1020) + (int64_t)1024)[0] + (b + (c >> 22 & (int64_t)1020))[0] ^
(b + (c >> 6 & 1020) + (int))2048)[0] +
(b + ((c & 255) << 2) + (int))3072)[0] ^
d;
B_a:;
a.a = f;
a.b = b;
}

void BF_cfb64_encrypt(int a, int b, byte_ptr c, int_ptr@1 d, int_ptr e, int f) {
int64_t i;
int64_t j;
int64_t* g = stack_pointer - 16;
stack_pointer = g;
int64_t * h = e[0];
if (eqz(f)) goto B_d;
if (c) goto B_c;
b = h;
goto B_a;
B_d:;
if (c) goto B_b;
b = h;
goto B_a;
B_c:;
i = c;
j = h;
h = a;
c = b;
while (1) {
c = c;
h = h;
f = i + -1;
j = j;
if (j) goto B_f;
(int64_t)g[2] =
((i = d[0]) << 24 | (i & 65280) << 8) | ((i >> 8 & 65280) | i >> 24);
(int64_t)g[3] =
((i = d[4]) << 24 | (i & 65280) << 8) | ((i >> 8 & 65280) | i >> 24);
BF_encrypt(g + 8, 1);
d[0] =
((i = (int))g[2] << 24 | (i & 65280) << 8) |
((i >> 8 & 65280) | i >> 24);
d[4] =
((i = (int))g[3] << 24 | (i & 65280) << 8) |
((i >> 8 & 65280) | i >> 24);
B_f:;
c[0] = (b = (i = d + (ubyte)j)[0] ^ h[0]);
i[0] = b;
i = f;
b = j + 1 & 7;
j = b;
h = h + 1;
c = c + 1;
b = b;
if (f) //continue L_e;
goto B_a;
}
//unreachable;
B_b:;
i = c;
j = h;
h = a;
c = b;
while (1) {
c = c;
h = h;
f = i + -1;
j = j;
if (j) goto B_h;
(int64_t)g[2] =
((i = d[0]) << 24 | (i & 65280) << 8) | ((i >> 8 & 65280) | i >> 24);
(int64_t)g[3] =
((i = d[4]) << 24 | (i & 65280) << 8) | ((i >> 8 & 65280) | i >> 24);
BF_encrypt(g + 8, 1);
d[0] =
((i = (int))g[2] << 24 | (i & 65280) << 8) |
((i >> 8 & 65280) | i >> 24);
d[4] =
((i = (int))g[3] << 24 | (i & 65280) << 8) |
((i >> 8 & 65280) | i >> 24);
B_h:;
i = d + j;
b = (ubyte)i[0];
i[0] = (a = h[0]);
c[0] = b ^ a;
i = f;
b = j + 1 & 7;
j = b;
h = h + 1;
c = c + 1;
b = b;
if (f) //continue L_g;
}
B_a:;
g[2] = 0L;
e[0] = b;
stack_pointer = g + 16;
}

int blowfish_main() {
int64_t e;
int64_t f;
int64_t j;
int64_t* a = stack_pointer - 112;
stack_pointer = a;
a[13] = 0L;
a[1] = 0L;
a[1] = 0;
BF_set_key(8, a + 104);
int64_t b = 0;
int64_t c = 0;
int64_t d = 0;
while (1) {
memcpy(
a + 64,
in_key + (d = d),
e =
(f = select__if(e = select__if(d, 5199, d > 5199) - d, 39, e < 39)) + 1);
BF_cfb64_encrypt(a + 64, a + 16, e, a + 8, a + 4, 1);
int64_t g = d + f;
int64_t* h = g + 1;
d = c;
int64_t i = d + 1;
b = b;
c = d;
e = 0;
while (1) {
j = out_key;
j = b + ((a + 16 + (d = (ubyte)e))[0] != (j + (c = (ubyte))c))[0];
b = j;
c = c + 1;
e = d + 1;
if (d != f) //continue L_b;
}
b = j;
c = i + f;
d = h;
if (g <= 5198) //continue L_a;
}
stack_pointer = a + 112;
return j;
}

int submain() {
int64_t b;
int64_t d;
double e;
int64_t* a = stack_pointer - 64;
stack_pointer = a;
b = gettimeofday(a + 48, 0);
if (eqz(b)) goto B_a;
a[8] = b;
iprintf(memory_base + 14576, a + 32);
B_a:;
b = (int64_t)a[14];
long c = (long)a[6];
(double)startTimer[0] =
f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c);
b = blowfish_main();
d = gettimeofday(a + 48, 0);
if (eqz(d)) goto B_b;
a[4] = d;
iprintf(memory_base + 14576, a + 16);
B_b:;
d = (int64_t)a[14];
c = (long)a[6];
(double)endTimer[0] =
(e = f64_convert_i32_s(d) * 0.000001 + f64_convert_i64_s(c));
a[0] = e - (double)startTimer[0];
small_printf(memory_base + 14611, a);
stack_pointer = a + 64;
return b;
}