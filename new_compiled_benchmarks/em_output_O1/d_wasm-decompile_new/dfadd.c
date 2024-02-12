

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
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
(memory_base + 1152 + (select__if(d << 8, d, e) >> 22 & (int),)1020))[0]
c << i64_extend_i32_u(d));
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
(memory_base + 1152 +
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

double ullong_to_double(long a) {
double b;
return b;
}

int submain() {
int64_t b;
long f;
int64_t g;
double h;
int64_t* a = stack_pointer - 64;
stack_pointer = a;
b = gettimeofday(a + 48, 0);
if (eqz(b)) goto B_a;
a[8] = b;
iprintf(memory_base + 1104, a + 32);
B_a:;
b = (int64_t)a[14];
long c = (long)a[6];
(double)startTimer[0] =
f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c);
b = 0;
int64_t d = 0;
while (1) {
int64_t e = b;
c = (b_input + (b = (d = d) << (long)3))[0];
f = (a_input + (long)b)[0];
g = i32_wrap_i64(f >> 63L);
if (g != i32_wrap_i64(c >> 63L)) goto B_d;
c = addFloat64Sigs(f, c, g);
goto B_c;
B_d:;
c = subFloat64Sigs(f, c, g);
B_c:;
g = e + (c != (z_output + (long))b)[0];
b = g;
e = d + 1;
d = e;
if (e != 46) //continue L_b;
}
b = gettimeofday(a + 48, 0);
if (eqz(b)) goto B_e;
a[4] = b;
iprintf(memory_base + 1104, a + 16);
B_e:;
b = (int64_t)a[14];
c = (long)a[6];
(double)endTimer[0] =
(h = f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c));
a[0] = h - (double)startTimer[0];
small_printf(memory_base + 1139, a);
stack_pointer = a + 64;
return g;
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