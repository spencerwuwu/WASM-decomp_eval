

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
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
(memory_base + 528 +
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
(memory_base + 528 +
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
(memory_base + 528 +
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

double ullong_to_double(long a) {
double b;
return b;
}

int submain() {
int64_t b;
int64_t e;
double h;
int64_t g;
int64_t* a = stack_pointer - 64;
stack_pointer = a;
b = gettimeofday(a + 48, 0);
if (eqz(b)) goto B_a;
a[8] = b;
iprintf(memory_base + 480, a + 32);
B_a:;
b = (int64_t)a[14];
long c = (long)a[6];
(double)startTimer[0] =
f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c);
int64_t d = 0;
b = 0;
while (1) {
c = (z_output + (b = (e = b) << (long)3))[0];
long f = (b_input + (long)b)[0];
g = d + (c != float64_mul((a_input + (long,)b)[0] f));
d = g;
e = e + 1;
b = e;
if (e != 20) //continue L_b;
}
b = gettimeofday(a + 48, 0);
if (eqz(b)) goto B_c;
a[4] = b;
iprintf(memory_base + 480, a + 16);
B_c:;
b = (int64_t)a[14];
c = (long)a[6];
(double)endTimer[0] =
(h = f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c));
a[0] = h - (double)startTimer[0];
small_printf(memory_base + 515, a);
stack_pointer = a + 64;
return g;
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