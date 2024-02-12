

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t float_exception_flags;
extern int64_t float_rounding_mode;
extern int64_t startTimer;
extern int64_t b_input;
extern int64_t a_input;
extern int64_t z_output;
extern int64_t endTimer;
int64_t float_exception_flags_1 = 2180;
int64_t float_rounding_mode_1 = 2176;
int64_t startTimer_1 = 2184;
int64_t b_input_1 = 368;
int64_t a_input_1 = 0;
int64_t z_output_1 = 736;
int64_t endTimer_1 = 2192;










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
(memory_base + 1152 + (select__if(d << 8, d, e) >> 22 & (int),)1020))[0]
c << i64_extend_i32_u(d));
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
(memory_base + 1152 +
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

double ullong_to_double(long a) {
double b;
return b;
}

int submain() {
long c;
int64_t d;
double h;
int64_t* a = stack_pointer + -64;
stack_pointer = a;
int64_t b = gettimeofday(a + 48, 0);
if (b) {
a[8] = b;
iprintf(memory_base + 1104, a + 32);
}
(double)startTimer[0] =
f64_convert_i32_s(b = (int))a[14] * 0.000001 +
f64_convert_i64_s(c = (long))a[6];
b = 0;
while (1) {
int64_t e = b << 3;
c = (e + (long)b_input)[0];
c = {
long f = (a_input + (long)e)[0];
int64_t g = i32_wrap_i64(f >> 63L);
if (g == i32_wrap_i64(c >> 63L)) {
addFloat64Sigs(f, c, g);
goto B_c;
}
subFloat64Sigs(f, c, g);
B_c:;
}
d = d + (c != (z_output + (long))e)[0];
b = b + 1;
if (b != 46) //continue L_b;
}
b = gettimeofday(a + 48, 0);
if (b) {
a[4] = b;
iprintf(memory_base + 1104, a + 16);
}
(double)endTimer[0] =
(h = f64_convert_i32_s(b = (int))a[14] * 0.000001 +
f64_convert_i64_s(c = (long)))a[6];
a[0] = h - (double)startTimer[0];
small_printf(memory_base + 1139, a);
stack_pointer = a - -64;
return d;
}

void legalstub_shift64RightJamming(int a, int b, int c, int d) {
shift64RightJamming(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
c,
d)
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

double legalstub_ullong_to_double(int a, int b) {
retur;
ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}