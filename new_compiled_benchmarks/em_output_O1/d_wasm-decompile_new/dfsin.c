

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t float_exception_flags;
extern int64_t float_rounding_mode;
extern int64_t startTimer;
extern int64_t test_out;
extern int64_t test_in;
extern int64_t endTimer;
int64_t float_exception_flags_1 = 1652;
int64_t float_rounding_mode_1 = 1648;
int64_t startTimer_1 = 1656;
int64_t test_out_1 = 288;
int64_t test_in_1 = 0;
int64_t endTimer_1 = 1664;










void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void shift64RightJamming(long a, int b, long_ptr c) {
if (b) goto B_b;
a = a;
goto B_a;
B_b:;
if (b > 63) goto B_c;
a = a >> i64_extend_i32_u(b) |
i64_extend_i32_u(a << i64_extend_i32_u(0 - b & 63) != 0L);
goto B_a;
B_c:;
a = i64_extend_i32_u(a != 0L);
B_a:;
c[0] = a;
}

void shift64ExtraRightJamming(long a, long b, int c, long_ptr d, long_ptr e) {
if (c) goto B_b;
b = b;
a = a;
goto B_a;
B_b:;
if (c > 63) goto B_c;
b = a << i64_extend_i32_u(0 - c & 63) | i64_extend_i32_u(b != 0L);
a = a >> i64_extend_i32_u(c);
goto B_a;
B_c:;
if (c != 64) goto B_d;
b = i64_extend_i32_u(b != 0L) | a;
a = 0L;
goto B_a;
B_d:;
b = i64_extend_i32_u((b | a) != 0L);
a = 0L;
B_a:;
e[0] = b;
d[0] = a;
}

void add128(long a, long b, long c, long d, long_ptr e, long_ptr f) {
f[0] = (b = d + b);
e[0] = c + a + i64_extend_i32_u(b < d);
}

void sub128(long a, long b, long c, long d, long_ptr e, long_ptr f) {
f[0] = b - d;
e[0] = a - c - i64_extend_i32_u(b < d);
}

void mul64To128(long a, long b, long_ptr c, long_ptr d) {
long e;
long f;
long g;
d[0] = (e = b * a);
c[0] =
((a = (g = (f = b >> 32L) * (a & 4294967295L)) +
(b & 4294967295L) * (b = a >> 32L)) >>
32L) +
f * b +
(i64_extend_i32_u(a < g) << 32L) +
i64_extend_i32_u(e < a << 32L);
}

void float_raise(int a) {
int64_t * b = float_exception_flags;
b[0] = b[0] | a;
}

int float64_is_nan(long a) {
return a << 1L > -9007199254740992;
}

int float64_is_signaling_nan(long a) {
return (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0;
}

long extractFloat64Frac(long a) {
return a & 4503599627370495;
}

int extractFloat64Exp(long a) {
return i32_wrap_i64(a >> 52L) & 204;
}

int extractFloat64Sign(long a) {
return i32_wrap_i64(a >> 63L)
}

void normalizeFloat64Subnormal(long a, int_ptr b, long_ptr c) {
int64_t d;
int64_t e;
int64_t f;
int64_t g;
c[0] =
a <<
i64_extend_i32_u(
(e =
(memory_base + 624 +
(select__if(
(e =
select__if(
(e = i32_wrap_i64(select__if(a, a >> 32L, d = a < 4294967296L))) << 16,
e,
f = e < 65536)) <<
8,
e,
g = e < 16777216) >>
22 &
(int64_t)1020))[0] +
(select__if((e = f << 4) | 8, e, g) | d << 5)) +
-11);
b[0] = 12 - e;
}

long packFloat64(int a, int b, long c) {
retur;
(i64_extend_i32_u(a) << 63L) + c + (i64_extend_i32_u(b) << 52L)
}

long roundAndPackFloat64(int a, int_ptr b, long c) {
int64_t d;
int64_t g;
long f;
long e;
d = (int64_t)float_rounding_mode[0];
if (d) goto B_b;
e = 0L;
f = 512L;
goto B_a;
B_b:;
if (d != 1) goto B_c;
e = -1L;
f = 0L;
goto B_a;
B_c:;
if (eqz(a)) goto B_d;
e = select__if(-1L, 0L, g = d == 2);
f = select__if(0L, 1023L, g);
goto B_a;
B_d:;
e = select__if(-1L, 0L, g = d == 3);
f = select__if(0L, 1023L, g);
B_a:;
f = f;
e = e;
g = i32_wrap_i64(c) & 1023;
if ((b & 65535) < 2045) goto B_f;
if (b > 2045) goto B_h;
if (b != 2045) goto B_g;
if (f + c > -1L) goto B_g;
B_h:;
b = float_exception_flags;
b[0] = b[0] | 9;
return e + (i64_extend_i32_u(a) << 63L) + 9218868437227405312L;
B_g:;
if (b > -1) goto B_f;
if (b < -63) goto B_j;
c = c >> i64_extend_i32_u(0 - b) |
i64_extend_i32_u(c << i64_extend_i32_u(b & 63) != 0L);
goto B_i;
B_j:;
c = i64_extend_i32_u(c != 0L);
B_i:;
c = c;
g = i32_wrap_i64(c) & 1023;
if (g) goto B_k;
c = c;
b = 0;
g = 0;
goto B_e;
B_k:;
b = float_exception_flags;
b[0] = b[0] | 4;
c = c;
b = 0;
g = g;
goto B_e;
B_f:;
c = c;
b = b;
g = g;
B_e:;
b = b;
c = c;
g = g;
if (eqz(g)) goto B_l;
int64_t * h = float_exception_flags;
h[0] = h[0] | 1;
B_l:;
c = c + f >> 10L & (i64_extend_i32_u(eqz(d) & g == 512) ^ -1L);
return (c | i64_extend_i32_u(a) << 63L) +
select__if(0L, i64_extend_i32_u(b) << 52L, eqz(c));
}

long normalizeRoundAndPackFloat64(int a, int b, long c) {
int64_t d;
int64_t e;
int64_t f;
retur;
roundAndPackFloat64(
a,
b -
(d =
select__if(31, -1, d = c < 4294967296L) +
select__if(
(f = (e = (d = i32_wrap_i64(select__if(c, c >> 32L, d))) < 65536) << 4) |
8,
f,
e = (d = select__if(d << 16, d, e)) < 16777216) +
(memory_base + 624 + (select__if(d << 8, d, e) >> 22 & (int),)1020))[0]
c << i64_extend_i32_u(d));
}

long int32_to_float64(int a) {
int64_t b;
int64_t c;
int64_t d;
if (a) goto B_a;
return 0L;
B_a:;
b = (a ^ (b = a >> 31)) - b;
retur;
(i64_extend_i32_u(b) <<
i64_extend_i32_u(
(b = (memory_base + 624 +
(select__if((b = select__if(b << 16, b, c = b < 65536)) << 8,
b,
d = b < 16777216) >>
22 &
(int64_t)1020))[0] +
select__if((b = c << 4) | 8, b, d)) +
21)) +
(i64_extend_i32_u(a >> 31) << 63L) +
(i64_extend_i32_u(1053 - b) << 52L);
}

long addFloat64Sigs(long a, long b, int c) {
int64_t g;
int64_t * h;
int64_t f;
long d = b << 9L & 2305843009213693440L;
long e = a << 9L & 2305843009213693440L;
f = i32_wrap_i64(a >> 52L) & 2047;
h = f - (g = i32_wrap_i64(b >> 52L) & 2047);
if (h < 1) goto B_f;
if (f != 2047) goto B_g;
if (eqz(eqz(e))) goto B_h;
return a;
B_h:;
f = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L;
g = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (g) goto B_j;
if (eqz(f)) goto B_i;
B_j:;
h = float_exception_flags;
h[0] = h[0] | 16;
B_i:;
d = b | 2251799813685248L;
retur;
select__if(d,
select__if(a = a | 2251799813685248L,
select__if(a, d, b << 1L < -9007199254740991L),
g),
f);
B_g:;
a = select__if(d | 2305843009213693952L, d, g);
g = h - eqz(g);
if (g) goto B_k;
b = e;
a = a;
goto B_d;
B_k:;
if (g > 63) goto B_e;
b = e;
a = a >> i64_extend_i32_u(g) |
i64_extend_i32_u(a << i64_extend_i32_u(0 - g & 63) != 0L);
goto B_d;
B_f:;
if (h > -1) goto B_l;
if (g != 2047) goto B_m;
if (eqz(d)) goto B_n;
f = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L;
g = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (g) goto B_p;
if (eqz(f)) goto B_o;
B_p:;
h = float_exception_flags;
h[0] = h[0] | 16;
B_o:;
d = b | 2251799813685248L;
retur;
select__if(d,
select__if(a = a | 2251799813685248L,
select__if(a, d, b << 1L < -9007199254740991L),
g),
f);
B_n:;
return i64_extend_i32_u(c) << 63L | 9218868437227405312L;
B_m:;
b = select__if(e | 2305843009213693952L, e, f);
f = h + eqz(f);
if (f) goto B_q;
b = b;
goto B_c;
B_q:;
if (f < -63) goto B_r;
b = b >> i64_extend_i32_u(0 - f) |
i64_extend_i32_u(b << i64_extend_i32_u(f & 63) != 0L);
goto B_c;
B_r:;
b = i64_extend_i32_u(b != 0L);
goto B_c;
B_l:;
if (eqz(f)) goto B_t;
if (f != 2047) goto B_s;
if (eqz(eqz(d | e))) goto B_u;
return a;
B_u:;
f = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L;
g = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (g) goto B_w;
if (eqz(f)) goto B_v;
B_w:;
h = float_exception_flags;
h[0] = h[0] | 16;
B_v:;
d = b | 2251799813685248L;
retur;
select__if(d,
select__if(a = a | 2251799813685248L,
select__if(a, d, b << 1L < -9007199254740991L),
g),
f);
B_t:;
return d + e >> 9L | i64_extend_i32_u(c) << 63L;
B_s:;
f = f;
b = d + e | 4611686018427387904L;
goto B_a;
B_e:;
b = e;
a = i64_extend_i32_u(a != 0L);
B_d:;
f = f;
goto B_b;
B_c:;
a = d;
f = g;
B_b:;
f = f - (g = (a = (b = (b | 2305843009213693952L) + a) << 1L) > -1L);
b = select__if(a, b, g);
B_a:;
return roundAndPackFloat64(c, f, b);
}

long subFloat64Sigs(long a, long b, int c) {
int64_t g;
int64_t * f;
int64_t * h;
long d = b << 10L & 4611686018427386880L;
long e = a << 10L & 4611686018427386880L;
f = i32_wrap_i64(a >> 52L) & 2047;
h = f - (g = i32_wrap_i64(b >> 52L) & 2047);
if (h > 0) goto B_c;
if (h < 0) goto B_e;
if (eqz(f)) goto B_g;
h = f;
g = g;
if (f != 2047) goto B_f;
if (eqz(d | e)) goto B_h;
f = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L;
g = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (g) goto B_j;
if (eqz(f)) goto B_i;
B_j:;
h = float_exception_flags;
h[0] = h[0] | 16;
B_i:;
d = b | 2251799813685248L;
retur;
select__if(d,
select__if(a = a | 2251799813685248L,
select__if(a, d, b << 1L < -9007199254740991L),
g),
f);
B_h:;
f = float_exception_flags;
f[0] = f[0] | 16;
return 9223372036854775807L;
B_g:;
h = 1;
g = 1;
B_f:;
f = g;
g = h;
if (d >= e) goto B_k;
b = e;
a = d;
g = g;
goto B_b;
B_k:;
b = e;
a = d;
g = f;
if (e < d) goto B_d;
return (int64_t)i64_extend_i32_u(float_rounding_mode[0] == 3) << 63L;
B_e:;
if (g != 2047) goto B_l;
if (eqz(d)) goto B_m;
f = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L;
g = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (g) goto B_o;
if (eqz(f)) goto B_n;
B_o:;
h = float_exception_flags;
h[0] = h[0] | 16;
B_n:;
d = b | 2251799813685248L;
retur;
select__if(d,
select__if(a = a | 2251799813685248L,
select__if(a, d, b << 1L < -9007199254740991L),
g),
f);
B_m:;
return i64_extend_i32_u(c ^ -1) << 63L | 9218868437227405312L;
B_l:;
b = select__if(e | 4611686018427387904L, e, f);
f = h + eqz(f);
if (f) goto B_q;
b = b;
goto B_p;
B_q:;
if (f < -63) goto B_r;
b = b >> i64_extend_i32_u(0 - f) |
i64_extend_i32_u(b << i64_extend_i32_u(f & 63) != 0L);
goto B_p;
B_r:;
b = i64_extend_i32_u(b != 0L);
B_p:;
b = b;
a = d | 4611686018427387904L;
g = g;
B_d:;
f = c ^ 1;
g = g;
b = a - b;
goto B_a;
B_c:;
if (f != 2047) goto B_s;
if (eqz(eqz(e))) goto B_t;
return a;
B_t:;
f = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L;
g = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (g) goto B_v;
if (eqz(f)) goto B_u;
B_v:;
h = float_exception_flags;
h[0] = h[0] | 16;
B_u:;
d = b | 2251799813685248L;
retur;
select__if(d,
select__if(a = a | 2251799813685248L,
select__if(a, d, b << 1L < -9007199254740991L),
g),
f);
B_s:;
b = select__if(d | 4611686018427387904L, d, g);
g = h - eqz(g);
if (g) goto B_x;
a = b;
goto B_w;
B_x:;
if (g > 63) goto B_y;
a = b >> i64_extend_i32_u(g) |
i64_extend_i32_u(b << i64_extend_i32_u(0 - g & 63) != 0L);
goto B_w;
B_y:;
a = i64_extend_i32_u(b != 0L);
B_w:;
b = e | 4611686018427387904L;
a = a;
g = f;
B_b:;
f = c;
g = g;
b = b - a;
B_a:;
retur;
roundAndPackFloat64(
f,
g +
((f =
select__if(31, -1, f = (b = b) < 4294967296L) +
(memory_base + 624 +
(select__if(
(f = select__if((f = i32_wrap_i64(select__if(b, b >> 32L, f))) << 16,
f,
g = f < 65536)) <<
8,
f,
h = f < 16777216) >>
22 &
(int64_t)1020))[0] +
select__if((f = g << 4) | 8, f, h)) ^
-1),
b << i64_extend_i32_u(f));
}

long float64_add(long a, long b) {
int64_t c;
c = i32_wrap_i64(a >> 63L);
if (c != i32_wrap_i64(b >> 63L)) goto B_a;
return addFloat64Sigs(a, b, c);
B_a:;
return subFloat64Sigs(a, b, c);
}

long float64_mul(long a, long b) {
int64_t i;
int64_t * j;
long h;
int64_t k;
int64_t l;
long c = b & 4503599627370495L;
long d = a & 4503599627370495L;
long e = b >> 52L;
int64_t * f = i32_wrap_i64(e) & 2047;
long g = b ^ a;
h = a >> 52L;
i = i32_wrap_i64(h) & 2047;
if (i != 2047) goto B_a;
if (d != 0L) goto B_c;
if (eqz(c)) goto B_b;
if (f != 2047) goto B_b;
B_c:;
f = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L;
i = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (i) goto B_e;
if (eqz(f)) goto B_d;
B_e:;
j = float_exception_flags;
j[0] = j[0] | 16;
B_d:;
d = b | 2251799813685248L;
retur;
select__if(d,
select__if(a = a | 2251799813685248L,
select__if(a, d, b << 1L < -9007199254740991L),
i),
f);
B_b:;
if (((e & 2047L) | c) != 0L) goto B_f;
f = float_exception_flags;
f[0] = f[0] | 16;
return 9223372036854775807L;
B_f:;
return (g & -9223372036854775808L) | 9218868437227405312L;
B_a:;
if (f != 2047) goto B_g;
if (eqz(c)) goto B_h;
f = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L;
i = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (i) goto B_j;
if (eqz(f)) goto B_i;
B_j:;
j = float_exception_flags;
j[0] = j[0] | 16;
B_i:;
d = b | 2251799813685248L;
retur;
select__if(d,
select__if(a = a | 2251799813685248L,
select__if(a, d, b << 1L < -9007199254740991L),
i),
f);
B_h:;
if (((h & 2047L) | d) != 0L) goto B_k;
f = float_exception_flags;
f[0] = f[0] | 16;
return 9223372036854775807L;
B_k:;
return (g & -9223372036854775808L) | 9218868437227405312L;
B_g:;
if (eqz(i)) goto B_m;
a = d;
i = i;
goto B_l;
B_m:;
if (d != 0L) goto B_n;
return g & -9223372036854775808L;
B_n:;
a =
d <<
i64_extend_i32_u(
(i =
(memory_base + 624 +
(select__if(
(i =
select__if(
(i = i32_wrap_i64(select__if(a, d >> 32L, j = d < 4294967296L))) << 16,
i,
k = i < 65536)) <<
8,
i,
l = i < 16777216) >>
22 &
(int64_t)1020))[0] +
(select__if((i = k << 4) | 8, i, l) | j << 5)) +
-11);
i = 12 - i;
B_l:;
i = i;
a = a;
if (eqz(f)) goto B_p;
f = f;
b = c;
goto B_o;
B_p:;
if (c != 0L) goto B_q;
return g & -9223372036854775808L;
B_q:;
f =
12 -
(j =
(memory_base + 624 +
(select__if(
(f =
select__if(
(f = i32_wrap_i64(select__if(b, c >> 32L, j = c < 4294967296L))) << 16,
f,
k = f < 65536)) <<
8,
f,
l = f < 16777216) >>
22 &
(int64_t)1020))[0] +
(select__if((f = k << 4) | 8, f, l) | j << 5));
b = c << i64_extend_i32_u(j + -11);
B_o:;
retur;
roundAndPackFloat64(
i32_wrap_i64(g >> 63L),
f + i +
select__if(
-1024,
-1023,
f =
(a =
(b =
((b = (g = (c = (d = (b = b << 11L) | -9223372036854775808L) >> 32L) *
((a = a << 10L) & 4294966272L)) +
(b & 4294965248L) * (e = (a = a | 4611686018427387904L) >> 32L)) >>
32L) +
c * e +
(i64_extend_i32_u(b < g) << 32L) +
i64_extend_i32_u((a = d * a) < b << 32L) |
i64_extend_i32_u(a != 0L)) <<
1L) >
-1L),
select__if(a, b, f));
}

long float64_div(long a, long b) {
int64_t * i;
int64_t h;
long g;
int64_t j;
int64_t k;
long m;
long n;
long o;
long q;
long r;
long c = b & 4503599627370495L;
long d = a & 4503599627370495L;
int64_t * e = i32_wrap_i64(b >> 52L) & 2047;
long f = b ^ a;
g = a >> 52L;
h = i32_wrap_i64(g) & 2047;
if (h != 2047) goto B_a;
if (eqz(d)) goto B_b;
e = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L;
h = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (h) goto B_d;
if (eqz(e)) goto B_c;
B_d:;
i = float_exception_flags;
i[0] = i[0] | 16;
B_c:;
d = b | 2251799813685248L;
retur;
select__if(d,
select__if(a = a | 2251799813685248L,
select__if(a, d, b << 1L < -9007199254740991L),
h),
e);
B_b:;
if (e != 2047) goto B_e;
if (eqz(c)) goto B_f;
e = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L;
h = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (h) goto B_h;
if (eqz(e)) goto B_g;
B_h:;
i = float_exception_flags;
i[0] = i[0] | 16;
B_g:;
d = b | 2251799813685248L;
retur;
select__if(d,
select__if(a = a | 2251799813685248L,
select__if(a, d, b << 1L < -9007199254740991L),
h),
e);
B_f:;
e = float_exception_flags;
e[0] = e[0] | 16;
return 9223372036854775807L;
B_e:;
return (f & -9223372036854775808L) | 9218868437227405312L;
B_a:;
if (eqz(e)) goto B_j;
if (e == 2047) goto B_k;
b = c;
e = e;
goto B_i;
B_k:;
if (eqz(c)) goto B_l;
e = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L;
h = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (h) goto B_n;
if (eqz(e)) goto B_m;
B_n:;
i = float_exception_flags;
i[0] = i[0] | 16;
B_m:;
d = b | 2251799813685248L;
retur;
select__if(d,
select__if(a = a | 2251799813685248L,
select__if(a, d, b << 1L < -9007199254740991L),
h),
e);
B_l:;
return f & -9223372036854775808L;
B_j:;
if (c != 0L) goto B_o;
e = (int64_t)float_exception_flags[0];
if (((g & 2047L) | d) != 0L) goto B_p;
float_exception_flags[0] = e | 16;
return 9223372036854775807L;
B_p:;
float_exception_flags[0] = e | 2;
return (f & -9223372036854775808L) | 9218868437227405312L;
B_o:;
b =
c <<
i64_extend_i32_u(
(e =
(memory_base + 624 +
(select__if(
(e =
select__if(
(e = i32_wrap_i64(select__if(b, c >> 32L, i = c < 4294967296L))) << 16,
e,
j = e < 65536)) <<
8,
e,
k = e < 16777216) >>
22 &
(int64_t)1020))[0] +
(select__if((e = j << 4) | 8, e, k) | i << 5)) +
-11);
e = 12 - e;
B_i:;
e = e;
c = b;
if (eqz(h)) goto B_r;
b = d;
j = h;
goto B_q;
B_r:;
if (d != 0L) goto B_s;
return f & -9223372036854775808L;
B_s:;
b =
d <<
i64_extend_i32_u(
(h =
(memory_base + 624 +
(select__if(
(h =
select__if(
(h = i32_wrap_i64(select__if(a, d >> 32L, i = d < 4294967296L))) << 16,
h,
j = h < 65536)) <<
8,
h,
k = h < 16777216) >>
22 &
(int64_t)1020))[0] +
(select__if((h = j << 4) | 8, h, k) | i << 5)) +
-11);
j = 12 - h;
B_q:;
long l = f >> 63L;
i = select__if(1022,
1021,
h = (n = (m = c << 11L) | -9223372036854775808L) <=
(a = b << 10L | 4611686018427387904L) << 1L);
e = j - e;
b = -1L;
if (n <= (o = a >> i64_extend_i32_u(h))) goto B_t;
long p = n >> 32L;
b = -4294967296L;
q = n & -4294967296L;
if (q <= o) goto B_u;
b = o / p << 32L;
B_u:;
f = 0L - (b = (a = b) * n);
g = o - (d = a >> 32L) * p + ((d = d * (m & 4294965248L)) >> 32L) -
i64_extend_i32_u(b != 0L) -
i64_extend_i32_u(b < d << 32L);
if (g <= -1L) goto B_w;
b = f;
r = g;
g = a;
goto B_v;
B_w:;
long s = c << 43L;
d = a;
c = g;
f = f;
while (1) {
g = d + -4294967296L;
d = g;
a = c + p + i64_extend_i32_u((b = (a = f) + s) < a);
c = a;
f = b;
b = b;
r = a;
g = g;
if (a < 0L) //continue L_x;
}
B_v:;
d = g;
a = 4294967295L;
if (q <= (b = r << 32L | b >> 32L)) goto B_y;
a = b / p;
B_y:;
b = a | d;
B_t:;
h = i32_wrap_i64(l);
e = e + i;
a = b;
if ((a & 511L) <= 2L) goto B_aa;
b = a;
goto B_z;
B_aa:;
g = 0L - (b = a * n);
b =
o - i64_extend_i32_u(b != 0L) -
(d = a >> 32L) * (c = n >> 32L) +
((d = (f = d * (m & 4294965248L)) + (a & 4294967295L) * c) >> 32L) +
select__if(-4294967296L, 0L, d < f) -
i64_extend_i32_u(b < d << 32L);
if (b <= -1L) goto B_ca;
b = g;
f = a;
goto B_ba;
B_ca:;
a = a;
d = g;
c = b;
while (1) {
f = a + -1L;
a = f;
g = d;
b = g + n;
d = b;
g = c + i64_extend_i32_u(b < g);
c = g;
b = b;
f = f;
if (g < 0L) //continue L_da;
}
B_ba:;
b = f | i64_extend_i32_u(b != 0L);
B_z:;
return roundAndPackFloat64(h, e, b);
}

int float64_le(long a, long b) {
int64_t * c;
if ((a & 9218868437227405312L) != 9218868437227405312L) goto B_c;
if ((a & 4503599627370495L) != 0L) goto B_b;
B_c:;
if ((b & 9218868437227405312L) != 9218868437227405312L) goto B_a;
if (eqz(b & 4503599627370495L)) goto B_a;
B_b:;
c = float_exception_flags;
c[0] = c[0] | 16;
return 0;
B_a:;
c = i32_wrap_i64(a >> 63L);
if (c == i32_wrap_i64(b >> 63L)) goto B_d;
return a < 0L | eqz((b | a) & 9223372036854775807L);
B_d:;
return a == b | c != (a < b);
}

int float64_ge(long a, long b) {
int64_t * c;
if ((b & 9218868437227405312L) != 9218868437227405312L) goto B_c;
if ((b & 4503599627370495L) != 0L) goto B_b;
B_c:;
if ((a & 9218868437227405312L) != 9218868437227405312L) goto B_a;
if (eqz(a & 4503599627370495L)) goto B_a;
B_b:;
c = float_exception_flags;
c[0] = c[0] | 16;
return 0;
B_a:;
c = i32_wrap_i64(b >> 63L);
if (c == i32_wrap_i64(a >> 63L)) goto B_d;
return b < 0L | eqz((b | a) & 9223372036854775807L);
B_d:;
return b == a | c != (b < a);
}

long float64_neg(long a) {
return a ^ -9223372036854775808;
}

long float64_abs(long a) {
return a & 9223372036854775807;
}

long local_sin(long a) {
long f;
int64_t * g;
int64_t h;
int64_t i;
int64_t j;
long k;
long b = float64_mul(a, a) ^ -9223372036854775808L;
long c = 1L;
long d = a;
long e = a;
while (1) {
g =
(memory_base + 624 +
(select__if(
(g = select__if(
(g = i32_wrap_i64(a = ((a = (f = c) << 1L) | 1L) * a)) << 16,
g,
h = eqz(a & 4294901760L))) <<
8,
g,
i = g < 16777216) >>
22 &
(int64_t)1020))[0];
c = e;
j = i32_wrap_i64(c >> 63L);
if (
j !=
i32_wrap_i64(
(a =
float64_div(
float64_mul(d, b),
((a & 4294967294L) <<
i64_extend_i32_u((g = g + select__if((h = h << 4) | 8, h, i)) + 21)) +
(i64_extend_i32_u(1053 - g) << 52L))) >>
63L)) goto B_c;
c = addFloat64Sigs(c, a, j);
goto B_b;
B_c:;
c = subFloat64Sigs(c, a, j);
B_b:;
k = c;
if ((a & 9218868437227405312L) != 9218868437227405312L) goto B_d;
if (eqz(a & 4503599627370495L)) goto B_d;
g = float_exception_flags;
g[0] = g[0] | 16;
return k;
B_d:;
c = f + 1L;
d = a;
e = k;
if ((a & 9223372036854775807L) > 4532020583610935536L) //continue L_a;
}
return k;
}

double ullong_to_double(long a) {
double b;
return b;
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
iprintf(memory_base + 576, a + 32);
B_a:;
b = (int64_t)a[14];
long c = (long)a[6];
(double)startTimer[0] =
f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c);
b = 0;
int64_t d = 0;
while (1) {
e = b +
((test_out + (b = (d = d) << (long)3))[0] !=
local_sin((test_in + (long)))b)[0];
b = e;
int64_t f = d + 1;
d = f;
if (f != 36) //continue L_b;
}
b = gettimeofday(a + 48, 0);
if (eqz(b)) goto B_c;
a[4] = b;
iprintf(memory_base + 576, a + 16);
B_c:;
b = (int64_t)a[14];
c = (long)a[6];
(double)endTimer[0] =
(g = f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c));
a[0] = g - (double)startTimer[0];
small_printf(memory_base + 611, a);
stack_pointer = a + 64;
return e;
}

void legalstub_shift64RightJamming(int a, int b, int c, int d) {
shift64RightJamming(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
c,
d)
}

void legalstub_shift64ExtraRightJamming(int a, int b, int c, int d, int e, int f, int g) {
shift64ExtraRightJamming(
i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
e,
f,
g)
}

void legalstub_add128(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) {
add128(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
i64_extend_i32_u(e) | i64_extend_i32_u(f) << 32L,
i64_extend_i32_u(g) | i64_extend_i32_u(h) << 32L,
i,
j)
}

void legalstub_sub128(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) {
sub128(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
i64_extend_i32_u(e) | i64_extend_i32_u(f) << 32L,
i64_extend_i32_u(g) | i64_extend_i32_u(h) << 32L,
i,
j)
}

void legalstub_mul64To128(int a, int b, int c, int d, int e, int f) {
mul64To128(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
e,
f)
}

int legalstub_float64_is_nan(int a, int b) {
retur;
float64_is_nan(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

int legalstub_float64_is_signaling_nan(int a, int b) {
return float64_is_signaling_nan(
i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

int legalstub_extractFloat64Frac(int a, int b) {
long c =
extractFloat64Frac(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
setTempRet0(i32_wrap_i64(c >> 32L));
return i32_wrap_i64(c);
}

int legalstub_extractFloat64Exp(int a, int b) {
retur;
extractFloat64Exp(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

int legalstub_extractFloat64Sign(int a, int b) {
retur;
extractFloat64Sign(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

void legalstub_normalizeFloat64Subnormal(int a, int b, int c, int d) {
normalizeFloat64Subnormal(
i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
c,
d)
}

int legalstub_packFloat64(int a, int b, int c, int d) {
long e =
packFloat64(a, b, i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
setTempRet0(i32_wrap_i64(e >> 32L));
return i32_wrap_i64(e);
}

int legalstub_roundAndPackFloat64(int a, int b, int c, int d) {
long e =
roundAndPackFloat64(a,
b,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
setTempRet0(i32_wrap_i64(e >> 32L));
return i32_wrap_i64(e);
}

int legalstub_normalizeRoundAndPackFloat64(int a, int b, int c, int d) {
long e = normalizeRoundAndPackFloat64(
a,
b,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
setTempRet0(i32_wrap_i64(e >> 32L));
return i32_wrap_i64(e);
}

int legalstub_int32_to_float64(int a) {
long b = int32_to_float64(a);
setTempRet0(i32_wrap_i64(b >> 32L));
return i32_wrap_i64(b);
}

int legalstub_addFloat64Sigs(int a, int b, int c, int d, int e) {
long f =
addFloat64Sigs(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
e);
setTempRet0(i32_wrap_i64(f >> 32L));
return i32_wrap_i64(f);
}

int legalstub_subFloat64Sigs(int a, int b, int c, int d, int e) {
long f =
subFloat64Sigs(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
e);
setTempRet0(i32_wrap_i64(f >> 32L));
return i32_wrap_i64(f);
}

int legalstub_float64_add(int a, int b, int c, int d) {
long e =
float64_add(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
setTempRet0(i32_wrap_i64(e >> 32L));
return i32_wrap_i64(e);
}

int legalstub_float64_mul(int a, int b, int c, int d) {
long e =
float64_mul(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
setTempRet0(i32_wrap_i64(e >> 32L));
return i32_wrap_i64(e);
}

int legalstub_float64_div(int a, int b, int c, int d) {
long e =
float64_div(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
setTempRet0(i32_wrap_i64(e >> 32L));
return i32_wrap_i64(e);
}

int legalstub_float64_le(int a, int b, int c, int d) {
return float64_le(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L)
}

int legalstub_float64_ge(int a, int b, int c, int d) {
return float64_ge(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L)
}

int legalstub_float64_neg(int a, int b) {
long c =
float64_neg(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
setTempRet0(i32_wrap_i64(c >> 32L));
return i32_wrap_i64(c);
}

int legalstub_float64_abs(int a, int b) {
long c =
float64_abs(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
setTempRet0(i32_wrap_i64(c >> 32L));
return i32_wrap_i64(c);
}

int legalstub_local_sin(int a, int b) {
long c =
local_sin(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
setTempRet0(i32_wrap_i64(c >> 32L));
return i32_wrap_i64(c);
}

double legalstub_ullong_to_double(int a, int b) {
retur;
ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}