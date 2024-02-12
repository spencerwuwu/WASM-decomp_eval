

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t float_exception_flags;
extern int64_t float_rounding_mode;
extern int64_t startTimer;
extern int64_t z_output;
extern int64_t b_input;
extern int64_t a_input;
extern int64_t endTimer;
int64_t float_exception_flags_1 = 1556;
int64_t float_rounding_mode_1 = 1552;
int64_t startTimer_1 = 1560;
int64_t z_output_1 = 320;
int64_t b_input_1 = 160;
int64_t a_input_1 = 0;
int64_t endTimer_1 = 1568;










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
(memory_base + 528 +
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
(memory_base + 528 +
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
(memory_base + 528 +
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
iprintf(memory_base + 480, a + 32);
}
(double)startTimer[0] =
f64_convert_i32_s(b = (int))a[14] * 0.000001 +
f64_convert_i64_s(d = (long))a[6];
b = 0;
while (1) {
int64_t e = b << 3;
d = (e + (long)z_output)[0];
c =
c + (float64_mul((a_input + (long,)e)[0] (b_input + (long))e)[0] != d);
b = b + 1;
if (b != 20) //continue L_b;
}
b = gettimeofday(a + 48, 0);
if (b) {
a[4] = b;
iprintf(memory_base + 480, a + 16);
}
(double)endTimer[0] =
(f = f64_convert_i32_s(b = (int))a[14] * 0.000001 +
f64_convert_i64_s(d = (long)))a[6];
a[0] = f - (double)startTimer[0];
small_printf(memory_base + 515, a);
stack_pointer = a - -64;
return c;
}

void legalstub_shift64RightJamming(int a, int b, int c, int d) {
shift64RightJamming(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
c,
d)
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

int legalstub_float64_mul(int a, int b, int c, int d) {
long e =
float64_mul(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
setTempRet0(i32_wrap_i64(e >> 32L));
return i32_wrap_i64(e);
}

double legalstub_ullong_to_double(int a, int b) {
retur;
ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}