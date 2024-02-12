

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t float_exception_flags;
extern int64_t float_rounding_mode;
extern int64_t startTimer;
extern int64_t z_output;
extern int64_t b_input;
extern int64_t a_input;
extern int64_t endTimer;
int64_t float_exception_flags_1 = 1604;
int64_t float_rounding_mode_1 = 1600;
int64_t startTimer_1 = 1608;
int64_t z_output_1 = 352;
int64_t b_input_1 = 176;
int64_t a_input_1 = 0;
int64_t endTimer_1 = 1616;










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
(memory_base + 576 +
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
(memory_base + 576 +
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
(memory_base + 576 +
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

double ullong_to_double(long a) {
double b;
return b;
}

int submain() {
long d;
int64_t c;
double f;
int64_t* a = stack_pointer + -64;
stack_pointer = a;
int64_t b = gettimeofday(a + 48, 0);
if (b) {
a[8] = b;
iprintf(memory_base + 528, a + 32);
}
(double)startTimer[0] =
f64_convert_i32_s(b = (int))a[14] * 0.000001 +
f64_convert_i64_s(d = (long))a[6];
b = 0;
while (1) {
int64_t e = b << 3;
d = (e + (long)z_output)[0];
c =
c + (float64_div((a_input + (long,)e)[0] (b_input + (long))e)[0] != d);
b = b + 1;
if (b != 22) //continue L_b;
}
b = gettimeofday(a + 48, 0);
if (b) {
a[4] = b;
iprintf(memory_base + 528, a + 16);
}
(double)endTimer[0] =
(f = f64_convert_i32_s(b = (int))a[14] * 0.000001 +
f64_convert_i64_s(d = (long)))a[6];
a[0] = f - (double)startTimer[0];
small_printf(memory_base + 563, a);
stack_pointer = a - -64;
return c;
}

void legalstub_shift64RightJamming(int a, int b, int c, int d) {
shift64RightJamming(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
c,
d)
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

int legalstub_float64_div(int a, int b, int c, int d) {
long e =
float64_div(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
setTempRet0(i32_wrap_i64(e >> 32L));
return i32_wrap_i64(e);
}

double legalstub_ullong_to_double(int a, int b) {
retur;
ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}