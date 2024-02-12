

extern int64_t stack_pointer;
extern int64_t memory_base;
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
no;
}

void wasm_apply_data_relocs() {
no;
}

void shift64RightJamming(long a, int b, long_ptr c) {
if (b) {
if (b <= 63) {
c[0] =
i64_extend_i32_u(a << i64_extend_i32_u(0 - b & 63) != 0L) |
a >> i64_extend_i32_u(b);
return;
}
a = i64_extend_i32_u(a != 0L);
}
c[0] = a;
}

void shift64ExtraRightJamming(long a, long b, int c, long_ptr d, long_ptr e) {
long f =
{
a;
if (eqz(c)) goto B_a;
if (c <= 63) {
b = i64_extend_i32_u(b != 0L) | a << i64_extend_i32_u(0 - c & 63);
a >> i64_extend_i32_u(c);
goto B_a;
}
if (c == 64) {
b = i64_extend_i32_u(b != 0L) | a;
0L;
goto B_a;
}
b = i64_extend_i32_u((a | b) != 0L);
0L;
B_a:;
}
e[0] = b;
d[0] = f;
}

void add128(long a, long b, long c, long d, long_ptr e, long_ptr f) {
f[0] = (b = b + d);
e[0] = i64_extend_i32_u(b < d) + a + c;
}

void sub128(long a, long b, long c, long d, long_ptr e, long_ptr f) {
f[0] = b - d;
e[0] = a - c - i64_extend_i32_u(b < d);
}

void mul64To128(long a, long b, long_ptr c, long_ptr d) {
long e;
long f;
long g;
d[0] = (e = a * b);
c[0] =
((a = (g = (f = b >> 32L) * (a & 4294967295L)) +
(b & 4294967295L) * (b = a >> 32L)) >>
32L) +
b * f +
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
int64_t e;
int64_t d;
int64_t f;
int64_t g;
c[0] =
a <<
i64_extend_i32_u(
(d =
(memory_base + 624 +
(select__if(
(d =
select__if(
(d = i32_wrap_i64(select__if(a, a >> 32L, e = a < 4294967296L))) << 16,
d,
f = d < 65536)) <<
8,
d,
g = d < 16777216) >>
22 &
(int64_t)1020))[0] +
(e << 5 | select__if((d = f << 4) | 8, d, g))) -
11);
b[0] = 12 - d;
}

long packFloat64(int a, int b, long c) {
retur;
(i64_extend_i32_u(a) << 63L) + c + (i64_extend_i32_u(b) << 52L)
}

long roundAndPackFloat64(int a, int_ptr b, long c) {
int64_t d;
long e;
int64_t f;
long g = {
f = (int64_t)float_rounding_mode[0];
if (eqz(f)) {
e = 512L;
0L;
goto B_a;
}
if (f == 1) {
-1L;
goto B_a;
}
if (a) {
e = select__if(0L, 1023L, d = f == 2);
select__if(-1L, 0L, d);
goto B_a;
}
e = select__if(0L, 1023L, d = f == 3);
select__if(-1L, 0L, d);
B_a:;
}
(int64_t)float_exception_flags[0] =
{
if ((b & 65535) < 2045) goto B_g;
if (b <= 2045) {
if (b != 2045) goto B_h;
if (c + e >= 0L) goto B_h;
}
(b = float_exception_flags)[0] = b[0] | 9;
return g + (i64_extend_i32_u(a) << 63L) + 9218868437227405312L;
B_h:;
if (b >= 0) goto B_g;
if (eqz(
d = i32_wrap_i64(
c = {
if ((d = 0 - b) <= 63) {
i64_extend_i32_u(c << i64_extend_i32_u(b & 63) != 0L) |
c >> i64_extend_i32_u(d);
goto B_j;
}
i64_extend_i32_u(c != 0L);
B_j:;
}) &
1023)) {
d = 0;
b = 0;
goto B_e;
}
b = 0;
(int64_t)float_exception_flags[0] | 4;
goto B_f;
B_g:;
if (eqz(d = i32_wrap_i64(c) & 1023)) {
d = 0;
goto B_e;
}
(int64_t)float_exception_flags[0];
B_f:;
} |
;
B_e:;
c = (i64_extend_i32_u(eqz(f) & d == 512) ^ -1L) & c + e >> 10L;
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
if (eqz(a)) { return 0L }
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

long addFloat64Sigs(long a, long b, int_ptr c) {
int64_t h;
int64_t d;
int64_t f;
long e = b << 9L & 2305843009213693440L;
long g = a << 9L & 2305843009213693440L;
d = i32_wrap_i64(a >> 52L) & 2047;
f = d - (h = i32_wrap_i64(b >> 52L) & 2047);
if (f > 0) {
if (d == 2047) {
if (eqz(g)) goto B_a;
f = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (f |
(d = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L)) {
c = float_exception_flags;
c[0] = c[0] | 16;
}
e = b | 2251799813685248L;
retur;
select__if(e,
select__if(a = a | 2251799813685248L,
select__if(a, e, b << 1L < -9007199254740991L),
f),
d);
}
if (h) {
e = e | 2305843009213693952L;
goto B_h;
}
f = f - 1;
if (eqz(f)) goto B_c;
B_h:;
if (f > 63) goto B_d;
e = i64_extend_i32_u(e << i64_extend_i32_u(0 - f & 63) != 0L) |
e >> i64_extend_i32_u(f);
goto B_c;
}
if (f < 0) {
if (h == 2047) {
if (e != 0L) {
f = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (f |
(d = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L)) {
c = float_exception_flags;
c[0] = c[0] | 16;
}
e = b | 2251799813685248L;
retur;
select__if(e,
select__if(a = a | 2251799813685248L,
select__if(a, e, b << 1L < -9007199254740991L),
f),
d);
}
return i64_extend_i32_u(c) << 63L | 9218868437227405312L;
}
g = select__if(g | 2305843009213693952L, g, d);
d = f + eqz(d);
if (eqz(d)) {
d = h;
goto B_c;
}
f = 0 - d;
if (f <= 63) {
g = i64_extend_i32_u(g << i64_extend_i32_u(d & 63) != 0L) |
g >> i64_extend_i32_u(f);
d = h;
goto B_c;
}
g = i64_extend_i32_u(g != 0L);
d = h;
goto B_c;
}
if (d) {
if (d != 2047) goto B_p;
if (eqz(e | g)) goto B_a;
f = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (f |
(d = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L)) {
c = float_exception_flags;
c[0] = c[0] | 16;
}
e = b | 2251799813685248L;
retur;
select__if(e,
select__if(a = a | 2251799813685248L,
select__if(a, e, b << 1L < -9007199254740991L),
f),
d);
}
return i64_extend_i32_u(c) << 63L | e + g >> 9L;
B_p:;
a = e + g | 4611686018427387904L;
goto B_b;
B_d:;
e = i64_extend_i32_u(e != 0L);
B_c:;
a = (g | 2305843009213693952L) + e;
b = a << 1L;
a = select__if(b, a, f = b >= 0L);
d = d - f;
B_b:;
a = roundAndPackFloat64(c, d, a);
B_a:;
return a;
}

long subFloat64Sigs(long a, long b, int c) {
int64_t h;
int64_t * d;
int64_t i;
int64_t * f;
long e = b << 10L & 4611686018427386880L;
long g = a << 10L & 4611686018427386880L;
a =
{
d = i32_wrap_i64(a >> 52L) & 2047;
f = d - (h = i32_wrap_i64(b >> 52L) & 2047);
if (f <= 0) {
if (f >= 0) {
if (d) {
if (d != 2047) goto B_g;
if ((e | g) != 0L) {
h = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (h |
(d = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L)) {
f = float_exception_flags;
f[0] = f[0] | 16;
}
e = b | 2251799813685248L;
retur;
select__if(e,
select__if(a = a | 2251799813685248L,
select__if(a, e, b << 1L < -9007199254740991L),
h),
d);
}
d = float_exception_flags;
d[0] = d[0] | 16;
return 9223372036854775807L;
}
d = 1;
h = 1;
B_g:;
if (e < g) goto B_c;
if (e > g) goto B_e;
return (int64_t)i64_extend_i32_u(float_rounding_mode[0] == 3) << 63L;
}
if (h == 2047) {
if (e != 0L) {
h = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (h |
(d = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L)) {
f = float_exception_flags;
f[0] = f[0] | 16;
}
e = b | 2251799813685248L;
retur;
select__if(e,
select__if(a = a | 2251799813685248L,
select__if(a, e, b << 1L < -9007199254740991L),
h),
d);
}
return i64_extend_i32_u(c ^ -1) << 63L | 9218868437227405312L;
}
g = select__if(g | 4611686018427387904L, g, d);
d = f + eqz(d);
if (eqz(d)) goto B_n;
f = 0 - d;
if (f <= 63) {
g = i64_extend_i32_u(g << i64_extend_i32_u(d & 63) != 0L) |
g >> i64_extend_i32_u(f);
goto B_n;
}
g = i64_extend_i32_u(g != 0L);
B_n:;
e = e | 4611686018427387904L;
B_e:;
c = c ^ 1;
e - g;
goto B_b;
}
if (d == 2047) {
if (eqz(g)) goto B_a;
h = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (h |
(d = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L)) {
f = float_exception_flags;
f[0] = f[0] | 16;
}
e = b | 2251799813685248L;
retur;
select__if(e,
select__if(a = a | 2251799813685248L,
select__if(a, e, b << 1L < -9007199254740991L),
h),
d);
}
if (h) {
e = e | 4611686018427387904L;
goto B_s;
}
f = f - 1;
if (eqz(f)) goto B_r;
B_s:;
if (f <= 63) {
e = i64_extend_i32_u(e << i64_extend_i32_u(0 - f & 63) != 0L) |
e >> i64_extend_i32_u(f);
goto B_r;
}
e = i64_extend_i32_u(e != 0L);
B_r:;
g = g | 4611686018427387904L;
B_c:;
h = d;
g - e;
B_b:;
}
a =
roundAndPackFloat64(
c,
h +
((d =
select__if(31, -1, d = a < 4294967296L) +
(memory_base + 624 +
(select__if(
(d = select__if((d = i32_wrap_i64(select__if(a, a >> 32L, d))) << 16,
d,
f = d < 65536)) <<
8,
d,
i = d < 16777216) >>
22 &
(int64_t)1020))[0] +
select__if((d = f << 4) | 8, d, i)) ^
-1),
a << i64_extend_i32_u(d));
B_a:;
return a;
}

long float64_add(long a, long b) {
int64_t c = i32_wrap_i64(a >> 63L);
if (c == i32_wrap_i64(b >> 63L)) { return addFloat64Sigs(a, b, c) }
return subFloat64Sigs(a, b, c);
}

long float64_mul(long a, long b) {
int64_t * g;
int64_t j;
int64_t k;
long f = b & 4503599627370495L;
long d = a & 4503599627370495L;
long i = b >> 52L;
int64_t * c = i32_wrap_i64(i) & 2047;
long h = a ^ b;
long l = a >> 52L;
int64_t e = i32_wrap_i64(l) & 2047;
if (e == 2047) {
if (eqz(d)) {
if (eqz(f)) goto B_b;
if (c != 2047) goto B_b;
}
e = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (e |
(c = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L)) {
g = float_exception_flags;
g[0] = g[0] | 16;
}
d = b | 2251799813685248L;
retur;
select__if(d,
select__if(a = a | 2251799813685248L,
select__if(a, d, b << 1L < -9007199254740991L),
e),
c);
B_b:;
if (eqz((i & 2047L) | f)) {
c = float_exception_flags;
c[0] = c[0] | 16;
return 9223372036854775807L;
}
return (h & -9223372036854775808L) | 9218868437227405312L;
}
if (c == 2047) {
if (f != 0L) {
e = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (e |
(c = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L)) {
g = float_exception_flags;
g[0] = g[0] | 16;
}
d = b | 2251799813685248L;
retur;
select__if(d,
select__if(a = a | 2251799813685248L,
select__if(a, d, b << 1L < -9007199254740991L),
e),
c);
}
if (eqz((l & 2047L) | d)) {
c = float_exception_flags;
c[0] = c[0] | 16;
return 9223372036854775807L;
}
return (h & -9223372036854775808L) | 9218868437227405312L;
}
if (eqz(e)) {
if (eqz(d)) { return h & -9223372036854775808L }
e =
12 -
(g =
(memory_base + 624 +
(select__if(
(e =
select__if(
(e = i32_wrap_i64(select__if(a, d >> 32L, g = d < 4294967296L))) << 16,
e,
j = e < 65536)) <<
8,
e,
k = e < 16777216) >>
22 &
(int64_t)1020))[0] +
(g << 5 | select__if((e = j << 4) | 8, e, k)));
d = d << i64_extend_i32_u(g - 11);
}
if (eqz(c)) {
if (eqz(f)) { return h & -9223372036854775808L }
c =
12 -
(g =
(memory_base + 624 +
(select__if(
(c =
select__if(
(c = i32_wrap_i64(select__if(b, f >> 32L, g = f < 4294967296L))) << 16,
c,
j = c < 65536)) <<
8,
c,
k = c < 16777216) >>
22 &
(int64_t)1020))[0] +
(g << 5 | select__if((c = j << 4) | 8, c, k)));
f = f << i64_extend_i32_u(g - 11);
}
retur;
roundAndPackFloat64(
i32_wrap_i64(h >> 63L),
c + e +
select__if(
-1024,
-1023,
c =
(a =
(b =
((b = (h = (f = (a = (b = f << 11L) | -9223372036854775808L) >> 32L) *
((d = d << 10L) & 4294966272L)) +
(i = (d = d | 4611686018427387904L) >> 32L) * (b & 4294965248L)) >>
32L) +
f * i +
(i64_extend_i32_u(b < h) << 32L) +
i64_extend_i32_u((a = a * d) < b << 32L) |
i64_extend_i32_u(a != 0L)) <<
1L) >=
0L),
select__if(a, b, c));
}

long float64_div(long a, long b) {
int64_t * g;
int64_t l;
int64_t m;
long j;
long k;
long n;
long o;
long p;
long e = b & 4503599627370495L;
long c = a & 4503599627370495L;
int64_t * d = i32_wrap_i64(b >> 52L) & 2047;
long h = a ^ b;
long i = a >> 52L;
int64_t f = i32_wrap_i64(i) & 2047;
if (f == 2047) {
if (c != 0L) {
f = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (f |
(d = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L)) {
g = float_exception_flags;
g[0] = g[0] | 16;
}
c = b | 2251799813685248L;
retur;
select__if(c,
select__if(a = a | 2251799813685248L,
select__if(a, c, b << 1L < -9007199254740991L),
f),
d);
}
if (d == 2047) {
if (e != 0L) {
f = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (f |
(d = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L)) {
g = float_exception_flags;
g[0] = g[0] | 16;
}
c = b | 2251799813685248L;
retur;
select__if(c,
select__if(a = a | 2251799813685248L,
select__if(a, c, b << 1L < -9007199254740991L),
f),
d);
}
d = float_exception_flags;
d[0] = d[0] | 16;
return 9223372036854775807L;
}
return (h & -9223372036854775808L) | 9218868437227405312L;
}
if (d) {
if (d != 2047) goto B_g;
if (e != 0L) {
f = (a & 9221120237041090560L) == 9218868437227405312L &
(a & 2251799813685247L) != 0L;
if (f |
(d = (b & 9221120237041090560L) == 9218868437227405312L &
(b & 2251799813685247L) != 0L)) {
g = float_exception_flags;
g[0] = g[0] | 16;
}
c = b | 2251799813685248L;
retur;
select__if(c,
select__if(a = a | 2251799813685248L,
select__if(a, c, b << 1L < -9007199254740991L),
f),
d);
}
return h & -9223372036854775808L;
}
if (eqz(e)) {
d = (int64_t)float_exception_flags[0];
if (eqz((i & 2047L) | c)) {
float_exception_flags[0] = d | 16;
return 9223372036854775807L;
}
float_exception_flags[0] = d | 2;
return (h & -9223372036854775808L) | 9218868437227405312L;
}
d =
12 -
(g =
(memory_base + 624 +
(select__if(
(d =
select__if(
(d = i32_wrap_i64(select__if(b, e >> 32L, g = e < 4294967296L))) << 16,
d,
l = d < 65536)) <<
8,
d,
m = d < 16777216) >>
22 &
(int64_t)1020))[0] +
(g << 5 | select__if((d = l << 4) | 8, d, m)));
e = e << i64_extend_i32_u(g - 11);
B_g:;
if (eqz(f)) {
if (eqz(c)) { return h & -9223372036854775808L }
f =
12 -
(g =
(memory_base + 624 +
(select__if(
(f =
select__if(
(f = i32_wrap_i64(select__if(a, c >> 32L, g = c < 4294967296L))) << 16,
f,
l = f < 65536)) <<
8,
f,
m = f < 16777216) >>
22 &
(int64_t)1020))[0] +
(g << 5 | select__if((f = l << 4) | 8, f, m)));
c = c << i64_extend_i32_u(g - 11);
}
g = i32_wrap_i64(h >> 63L);
f = f - d +
select__if(1022,
1021,
d = (i = (j = e << 11L) | -9223372036854775808L) <=
(a = c << 10L | 4611686018427387904L) << 1L);
b = -1L;
if (i <= (k = a >> i64_extend_i32_u(d))) goto B_o;
h = i >> 32L;
a = -4294967296L;
if (k < (n = i & -4294967296L)) { a = k / h << 32L }
b = 0L - (c = a * i);
c =
k - (o = a >> 32L) * h + ((j = o * (p = j & 4294965248L)) >> 32L) -
i64_extend_i32_u(c != 0L) -
i64_extend_i32_u(c < j << 32L);
if (c >= 0L) {
e = b;
goto B_q;
}
j = e << 43L;
while (1) {
e = b + j;
d = e < b;
a = a - 4294967296L;
b = e;
c = i64_extend_i32_u(d) + c + h;
if (c < 0L) //continue L_s;
}
B_q:;
b = 4294967295L;
c = c << 32L | e >> 32L;
if (c < n) { b = c / h }
b = a | b;
if ((b & 511L) > 2L) goto B_o;
a = 0L - (c = b * i);
e = k - i64_extend_i32_u(c != 0L) -
(e = b >> 32L) * h +
((e = (j = e * p) + (b & 4294967295L) * h) >> 32L) +
select__if(-4294967296L, 0L, e < j) -
i64_extend_i32_u(c < e << 32L);
if (e >= 0L) {
c = a;
goto B_u;
}
while (1) {
b = b - 1L;
c = a + i;
d = c < a;
a = c;
e = e + i64_extend_i32_u(d);
if (e < 0L) //continue L_w;
}
B_u:;
b = b | i64_extend_i32_u(c != 0L);
B_o:;
return roundAndPackFloat64(g, f, b);
}

int float64_le(long a, long b) {
int64_t * c;
if (eqz((a & 9218868437227405312L) == 9218868437227405312L &
(a & 4503599627370495L) != 0L)) {
if ((b & 9218868437227405312L) != 9218868437227405312L) goto B_a;
if (eqz(b & 4503599627370495L)) goto B_a;
}
c = float_exception_flags;
c[0] = c[0] | 16;
return 0;
B_a:;
c = i32_wrap_i64(a >> 63L);
if (c != i32_wrap_i64(b >> 63L)) {
return eqz((a | b) & 9223372036854775807L) | a < 0;
}
return c != (a < b) | a == b;
}

int float64_ge(long a, long b) {
int64_t * c;
if (eqz((b & 9218868437227405312L) == 9218868437227405312L &
(b & 4503599627370495L) != 0L)) {
if ((a & 9218868437227405312L) != 9218868437227405312L) goto B_a;
if (eqz(a & 4503599627370495L)) goto B_a;
}
c = float_exception_flags;
c[0] = c[0] | 16;
return 0;
B_a:;
c = i32_wrap_i64(b >> 63L);
if (c != i32_wrap_i64(a >> 63L)) {
return eqz((a | b) & 9223372036854775807L) | b < 0;
}
return c != (a > b) | a == b;
}

long float64_neg(long a) {
return a ^ -9223372036854775808;
}

long float64_abs(long a) {
return a & 9223372036854775807;
}

long local_sin(long a) {
long e;
int64_t * b;
int64_t f;
int64_t i;
long h = float64_mul(a, a) ^ -9223372036854775808L;
long d = 1L;
long c = a;
while (1) {
b =
(memory_base + 624 +
(select__if(
(b = select__if((b = i32_wrap_i64(e = ((e = d << 1L) | 1L) * e)) << 16,
b,
f = b < 65536)) <<
8,
b,
i = b < 16777216) >>
22 &
(int64_t)1020))[0];
c =
{
int64_t g = i32_wrap_i64(c >> 63L);
if (g ==
i32_wrap_i64(
(a =
float64_div(
float64_mul(a, h),
((e & 4294967294L) <<
i64_extend_i32_u((b = b + select__if((f = f << 4) | 8, f, i)) + 21)) +
(i64_extend_i32_u(1053 - b) << 52L))) >>
63L)) {
addFloat64Sigs(c, a, g);
goto B_b;
}
subFloat64Sigs(c, a, g);
B_b:;
}
if ((a & 9218868437227405312L) != 9218868437227405312L) goto B_d;
if (eqz(a & 4503599627370495L)) goto B_d;
b = float_exception_flags;
b[0] = b[0] | 16;
return c;
B_d:;
d = d + 1L;
if ((a & 9223372036854775807L) > 4532020583610935536L) //continue L_a;
}
return c;
}

double ullong_to_double(long a) {
double b;
return b;
}

int submain() {
int64_t c;
int64_t d;
double e;
int64_t* a = stack_pointer + -64;
stack_pointer = a;
int64_t b = gettimeofday(a + 48, 0);
if (b) {
a[8] = b;
iprintf(memory_base + 576, a + 32);
}
(double)startTimer[0] =
f64_convert_i32_s(b = (int))a[14] * 0.000001 +
(long))f64_convert_i64_s(a[6];
b = 0;
while (1) {
c =
c +
(((d = b << 3) + (long)test_out)[0] != local_sin((test_in + (long)))d)[0];
b = b + 1;
if (b != 36) //continue L_b;
}
b = gettimeofday(a + 48, 0);
if (b) {
a[4] = b;
iprintf(memory_base + 576, a + 16);
}
(double)endTimer[0] =
(e = f64_convert_i32_s(b = (int))a[14] * 0.000001 +
(long)))f64_convert_i64_s(a[6];
a[0] = e - (double)startTimer[0];
small_printf(memory_base + 611, a);
stack_pointer = a - -64;
return c;
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