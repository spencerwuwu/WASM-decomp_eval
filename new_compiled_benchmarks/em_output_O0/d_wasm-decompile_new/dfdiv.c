
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <polybench.h>
//#include "wasm-decompile_base.h"
#define eqz(x) ((x) == 0)
#define ubyte uint8_t
#define byte int8_t
#define byte_ptr int8_t*
#define ubyte_ptr uint8_t*
int64_t f64_convert_i64_s(float);
int32_t f64_convert_i32_s(float);
uint64_t i64_extend_i32_u(int);
int64_t i64_extend_i32_s(int);
int32_t f32_convert_i32_s(float);
uint32_t f32_convert_i32_u(float);
int64_t f32_convert_i64_s(float);
uint64_t f32_convert_i64_u(float);
int i32_wrap_i64(int64_t);
int select__if(int,int,int);

    typedef struct struct_1 {
    long a;
    int b;
    int c;
    long d;
    long e;
    long f;
    long g;
} struct_1;
typedef struct struct_2 {
    long a;
    int b;
    int c;
} struct_2;
typedef struct struct_3 {
    int a;
    int b;
    int c;
    int d;
    long e;
    long f;
} struct_3;
int _printf(int a, int b);
int gettimeofday(int a, int b);
void setTempRet0(int a);
void wasm_call_ctors();
void wasm_apply_data_relocs();
void shift64RightJamming(long a, int b, int c);
void add128(long a, long b, long c, long d, int e, int f);
void sub128(long a, long b, long c, long d, int e, int f);
void mul64To128(long a, long b, int c, int d);
void float_raise(int a);
int float64_is_nan(long a);
int float64_is_signaling_nan(long a);
long extractFloat64Frac(long a);
int extractFloat64Exp(long a);
int extractFloat64Sign(long a);
void normalizeFloat64Subnormal(long a, int b, int c);
int countLeadingZeros64(long a);
int countLeadingZeros32(int a);
long packFloat64(int a, int b, long c);
long roundAndPackFloat64(int a, int b, long c);
long float64_div(long a, long b);
long propagateFloat64NaN(long a, long b);
long estimateDiv128To64(long a, long b, long c);
double ullong_to_double(long a);
double rtclock();
void legalstub_shift64RightJamming(int a, int b, int c, int d);
void legalstub_add128(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j);
void legalstub_sub128(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j);
void legalstub_mul64To128(int a, int b, int c, int d, int e, int f);
int legalstub_float64_is_nan(int a, int b);
int legalstub_float64_is_signaling_nan(int a, int b);
int legalstub_extractFloat64Frac(int a, int b);
int legalstub_extractFloat64Exp(int a, int b);
int legalstub_extractFloat64Sign(int a, int b);
void legalstub_normalizeFloat64Subnormal(int a, int b, int c, int d);
int legalstub_packFloat64(int a, int b, int c, int d);
int legalstub_roundAndPackFloat64(int a, int b, int c, int d);
int legalstub_float64_div(int a, int b, int c, int d);
double legalstub_ullong_to_double(int a, int b);


int64_t stack[100000];
int64_t *stack_pointer = stack + 100000;
int64_t *memory_base;
int64_t *table_base;
extern int64_t float_exception_flags;
extern int64_t float_rounding_mode;
extern int64_t startTimer;
extern int64_t a_input;
extern int64_t b_input;
extern int64_t z_output;
extern int64_t endTimer;
int64_t float_exception_flags_1 = 1604;
int64_t float_rounding_mode_1 = 1600;
int64_t startTimer_1 = 1608;
int64_t a_input_1 = 0;
int64_t b_input_1 = 176;
int64_t z_output_1 = 352;
int64_t endTimer_1 = 1616;


;

;

;

void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void shift64RightJamming(long a, int b, int c) {
int64_t* d = stack_pointer;
int64_t e = 32;
int64_t* f = d - e;
f[3] = a;
f[5] = b;
f[4] = c;
int64_t g = (int64_t)f[5];
if (g) goto B_b;
long h = (long)f[3];
f[1] = h;
goto B_a;
B_b:;
int64_t i = (int64_t)f[5];
int64_t j = 64;
int64_t k = i;
int64_t l = j;
int64_t m = k < l;
int64_t n = 1;
int64_t o = m & n;
if (eqz(o)) goto B_d;
long p = (long)f[3];
int64_t q = (int64_t)f[5];
int64_t r = q;
long s = i64_extend_i32_u(r);
long t = p >> s;
long u = (long)f[3];
int64_t v = (int64_t)f[5];
int64_t w = 0;
int64_t x = w - v;
int64_t y = 63;
int64_t z = x & y;
int64_t aa = z;
long ba = i64_extend_i32_u(aa);
long ca = u << ba;
long da = 0L;
long ea = ca;
long fa = da;
int64_t ga = ea != fa;
int64_t ha = 1;
int64_t ia = ga & ha;
int64_t ja = ia;
long ka = i64_extend_i32_s(ja);
long la = t | ka;
f[1] = la;
goto B_c;
B_d:;
long ma = (long)f[3];
long na = 0L;
long oa = ma;
long pa = na;
int64_t qa = oa != pa;
int64_t ra = 1;
int64_t sa = qa & ra;
int64_t ta = sa;
long ua = i64_extend_i32_s(ta);
f[1] = ua;
B_c:;
B_a:;
long va = (long)f[1];
int64_t * wa = (int64_t)f[4];
wa[0] = va;
}

void add128(long a, long b, long c, long d, int e, int f) {
int64_t* g = stack_pointer;
int64_t h = 48;
struct_1 i;
i.g = a;
i.f = b;
i.e = c;
i.d = d;
i.c = e;
i.b = f;
long j = i.f;
long k = i.d;
long l = j + k;
i.a = l;
long m = i.a;
int64_t * n = i.b;
n[0] = m;
long o = i.g;
long p = i.e;
long q = o + p;
long r = i.a;
long s = i.f;
long t = r;
long u = s;
int64_t v = t < u;
int64_t w = 1;
int64_t x = v & w;
int64_t y = x;
long z = i64_extend_i32_s(y);
long aa = q + z;
int64_t * ba = i.c;
ba[0] = aa;
}

void sub128(long a, long b, long c, long d, int e, int f) {
int64_t* g = stack_pointer;
int64_t h = 48;
int64_t* i = g - h;
i[5] = a;
i[4] = b;
i[3] = c;
i[2] = d;
i[3] = e;
i[2] = f;
long j = (long)i[4];
long k = (long)i[2];
long l = j - k;
int64_t * m = (int64_t)i[2];
m[0] = l;
long n = (long)i[5];
long o = (long)i[3];
long p = n - o;
long q = (long)i[4];
long r = (long)i[2];
long s = q;
long t = r;
int64_t u = s < t;
int64_t v = 1;
int64_t w = u & v;
int64_t x = w;
long y = i64_extend_i32_s(x);
long z = p - y;
int64_t * aa = (int64_t)i[3];
aa[0] = z;
}

void mul64To128(long a, long b, int c, int d) {
int64_t* e = stack_pointer;
int64_t f = 80;
int64_t* g = e - f;
g[9] = a;
g[8] = b;
g[15] = c;
g[14] = d;
long h = (long)g[9];
int64_t i = i32_wrap_i64(h);
g[12] = i;
long j = (long)g[9];
long k = 32L;
long l = j >> k;
int64_t m = i32_wrap_i64(l);
g[13] = m;
long n = (long)g[8];
int64_t o = i32_wrap_i64(n);
g[10] = o;
long p = (long)g[8];
long q = 32L;
long r = p >> q;
int64_t s = i32_wrap_i64(r);
g[11] = s;
int64_t t = (int64_t)g[12];
int64_t u = t;
long v = i64_extend_i32_u(u);
int64_t w = (int64_t)g[10];
int64_t x = w;
long y = i64_extend_i32_u(x);
long z = v * y;
g[1] = z;
int64_t aa = (int64_t)g[12];
int64_t ba = aa;
long ca = i64_extend_i32_u(ba);
int64_t da = (int64_t)g[11];
int64_t ea = da;
long fa = i64_extend_i32_u(ea);
long ga = ca * fa;
g[3] = ga;
int64_t ha = (int64_t)g[13];
int64_t ia = ha;
long ja = i64_extend_i32_u(ia);
int64_t ka = (int64_t)g[10];
int64_t la = ka;
long ma = i64_extend_i32_u(la);
long na = ja * ma;
g[2] = na;
int64_t oa = (int64_t)g[13];
int64_t pa = oa;
long qa = i64_extend_i32_u(pa);
int64_t ra = (int64_t)g[11];
int64_t sa = ra;
long ta = i64_extend_i32_u(sa);
long ua = qa * ta;
g[4] = ua;
long va = (long)g[2];
long wa = (long)g[3];
long xa = wa + va;
g[3] = xa;
long ya = (long)g[3];
long za = (long)g[2];
long ab = ya;
long bb = za;
int64_t cb = ab < bb;
int64_t db = 1;
int64_t eb = cb & db;
int64_t fb = eb;
long gb = i64_extend_i32_s(fb);
long hb = 32L;
long ib = gb << hb;
long jb = (long)g[3];
long kb = 32L;
long lb = jb >> kb;
long mb = ib + lb;
long nb = (long)g[4];
long ob = nb + mb;
g[4] = ob;
long pb = (long)g[3];
long qb = 32L;
long rb = pb << qb;
g[3] = rb;
long sb = (long)g[3];
long tb = (long)g[1];
long ub = tb + sb;
g[1] = ub;
long vb = (long)g[1];
long wb = (long)g[3];
long xb = vb;
long yb = wb;
int64_t zb = xb < yb;
int64_t ac = 1;
int64_t bc = zb & ac;
int64_t cc = bc;
long dc = i64_extend_i32_s(cc);
long ec = (long)g[4];
long fc = ec + dc;
g[4] = fc;
long gc = (long)g[1];
int64_t * hc = (int64_t)g[14];
hc[0] = gc;
long ic = (long)g[4];
int64_t * jc = (int64_t)g[15];
jc[0] = ic;
}

void float_raise(int a) {
int64_t* b = stack_pointer;
int64_t c = 16;
int64_t * d = b - c;
d[3] = a;
int64_t e = d[3];
int64_t * f = float_exception_flags;
int64_t g = f[0];
int64_t h = g | e;
f[0] = h;
}

int float64_is_nan(long a) {
int64_t* b = stack_pointer;
int64_t c = 16;
int64_t * d = b - c;
d[1] = a;
long e = d[1];
long f = 1L;
long g = e << f;
long h = -9007199254740992L;
long i = h;
long j = g;
int64_t k = i < j;
int64_t l = 1;
int64_t m = k & l;
return m;
}

int float64_is_signaling_nan(long a) {
int64_t* b = stack_pointer;
int64_t c = 16;
int64_t * d = b - c;
d[1] = a;
long e = d[1];
long f = 51L;
long g = e >> f;
long h = 4095L;
long i = g & h;
long j = 4094L;
long k = i;
long l = j;
int64_t m = k == l;
int64_t n = 0;
int64_t o = 1;
int64_t p = m & o;
int64_t q = n;
if (eqz(p)) goto B_a;
long r = d[1];
long s = 2251799813685247L;
long t = r & s;
long u = 0L;
long v = t;
long w = u;
int64_t x = v != w;
q = x;
B_a:;
int64_t y = q;
int64_t z = 1;
int64_t aa = y & z;
return aa;
}

long extractFloat64Frac(long a) {
int64_t* b = stack_pointer;
int64_t c = 16;
int64_t * d = b - c;
d[1] = a;
long e = d[1];
long f = 4503599627370495L;
long g = e & f;
return g;
}

int extractFloat64Exp(long a) {
int64_t* b = stack_pointer;
int64_t c = 16;
int64_t * d = b - c;
d[1] = a;
long e = d[1];
long f = 52L;
long g = e >> f;
long h = 2047L;
long i = g & h;
int64_t j = i32_wrap_i64(i);
return j;
}

int extractFloat64Sign(long a) {
int64_t* b = stack_pointer;
int64_t c = 16;
int64_t * d = b - c;
d[1] = a;
long e = d[1];
long f = 63L;
long g = e >> f;
int64_t h = i32_wrap_i64(g);
return h;
}

void normalizeFloat64Subnormal(long a, int b, int c) {
int64_t* d = stack_pointer;
int64_t e = 32;
int64_t* f = d - e;
f[3] = a;
f[5] = b;
f[4] = c;
long g = (long)f[3];
int64_t h = countLeadingZeros64(g);
int64_t i = 11;
int64_t j = h - i;
f[3] = j;
long k = (long)f[3];
int64_t l = (int64_t)f[3];
int64_t m = l;
long n = i64_extend_i32_u(m);
long o = k << n;
int64_t * p = (int64_t)f[4];
p[0] = o;
int64_t q = (int64_t)f[3];
int64_t r = 1;
int64_t s = r - q;
int64_t * t = (int64_t)f[5];
t[0] = s;
int64_t u = 32;
int64_t* v = f + u;
}

int countLeadingZeros64(long a) {
int64_t* b = stack_pointer;
int64_t c = 16;
int64_t* d = b - c;
d[1] = a;
int64_t e = 0;
d[1] = e;
long f = (long)d[1];
long g = 4294967296L;
long h = f;
long i = g;
int64_t j = h < i;
int64_t k = 1;
int64_t l = j & k;
if (eqz(l)) goto B_b;
int64_t m = (int64_t)d[1];
int64_t n = 32;
int64_t o = m + n;
d[1] = o;
goto B_a;
B_b:;
long p = (long)d[1];
long q = 32L;
long r = p >> q;
d[1] = r;
B_a:;
long s = (long)d[1];
int64_t t = i32_wrap_i64(s);
int64_t u = countLeadingZeros32(t);
int64_t v = (int64_t)d[1];
int64_t w = v + u;
d[1] = w;
int64_t x = (int64_t)d[1];
int64_t y = 16;
int64_t* z = d + y;
return x;
}

int countLeadingZeros32(int a) {
int64_t* b = stack_pointer;
int64_t c = 16;
int64_t * d = b - c;
d[3] = a;
int64_t e = 0;
d[2] = e;
int64_t f = d[3];
int64_t g = 65536;
int64_t h = f;
int64_t i = g;
int64_t j = h < i;
int64_t k = 1;
int64_t l = j & k;
if (eqz(l)) goto B_a;
int64_t m = d[2];
int64_t n = 16;
int64_t o = m + n;
d[2] = o;
int64_t p = d[3];
int64_t q = 16;
int64_t r = p << q;
d[3] = r;
B_a:;
int64_t s = d[3];
int64_t t = 16777216;
int64_t u = s;
int64_t v = t;
int64_t w = u < v;
int64_t x = 1;
int64_t y = w & x;
if (eqz(y)) goto B_b;
int64_t z = d[2];
int64_t aa = 8;
int64_t ba = z + aa;
d[2] = ba;
int64_t ca = d[3];
int64_t da = 8;
int64_t ea = ca << da;
d[3] = ea;
B_b:;
int64_t fa = d[3];
int64_t ga = 576;
int64_t* ha = memory_base;
int64_t* ia = ha + ga;
int64_t ja = 22;
int64_t ka = fa >> ja;
int64_t la = 1020;
int64_t ma = ka & la;
int64_t * na = ia + ma;
int64_t oa = na[0];
int64_t pa = d[2];
int64_t qa = pa + oa;
d[2] = qa;
int64_t ra = d[2];
return ra;
}

long packFloat64(int a, int b, long c) {
int64_t* d = stack_pointer;
int64_t e = 16;
struct_2 f;
f.c = a;
f.b = b;
f.a = c;
int64_t g = f.c;
int64_t h = g;
long i = i64_extend_i32_s(h);
long j = 63L;
long k = i << j;
int64_t l = f.b;
int64_t m = l;
long n = i64_extend_i32_s(m);
long o = 52L;
long p = n << o;
long q = k + p;
long r = f.a;
long s = q + r;
return s;
}

long roundAndPackFloat64(int a, int b, long c) {
int64_t* d = stack_pointer;
int64_t e = 48;
int64_t* f = d - e;
f[9] = a;
f[8] = b;
f[3] = c;
int64_t * g = float_rounding_mode;
int64_t h = g[0];
f[5] = h;
int64_t i = (int64_t)f[5];
int64_t j = 0;
int64_t k = i;
int64_t l = j;
int64_t m = k == l;
int64_t n = 1;
int64_t o = m & n;
f[4] = o;
int64_t p = 512;
f[2] = p;
int64_t q = (int64_t)f[4];
if (q) goto B_a;
int64_t r = (int64_t)f[5];
int64_t s = 1;
int64_t t = r;
int64_t u = s;
int64_t v = t == u;
int64_t w = 1;
int64_t x = v & w;
if (eqz(x)) goto B_c;
int64_t y = 0;
f[2] = y;
goto B_b;
B_c:;
int64_t z = 1023;
f[2] = z;
int64_t aa = (int64_t)f[9];
if (eqz(aa)) goto B_e;
int64_t ba = (int64_t)f[5];
int64_t ca = 2;
int64_t da = ba;
int64_t ea = ca;
int64_t fa = da == ea;
int64_t ga = 1;
int64_t ha = fa & ga;
if (eqz(ha)) goto B_f;
int64_t ia = 0;
f[2] = ia;
B_f:;
goto B_d;
B_e:;
int64_t ja = (int64_t)f[5];
int64_t ka = 3;
int64_t la = ja;
int64_t ma = ka;
int64_t na = la == ma;
int64_t oa = 1;
int64_t pa = na & oa;
if (eqz(pa)) goto B_g;
int64_t qa = 0;
f[2] = qa;
B_g:;
B_d:;
B_b:;
B_a:;
long ra = (long)f[3];
long sa = 1023L;
long ta = ra & sa;
int64_t ua = i32_wrap_i64(ta);
f[1] = ua;
int64_t va = (int64_t)f[8];
int64_t wa = 65535;
int64_t xa = va & wa;
int64_t ya = 2045;
int64_t za = ya;
int64_t ab = xa;
int64_t bb = za <= ab;
int64_t cb = 1;
int64_t db = bb & cb;
if (eqz(db)) goto B_i;
int64_t eb = (int64_t)f[8];
int64_t fb = 2045;
int64_t gb = fb;
int64_t hb = eb;
int64_t ib = gb < hb;
int64_t jb = 1;
int64_t kb = ib & jb;
if (kb) goto B_k;
int64_t lb = (int64_t)f[8];
int64_t mb = 2045;
int64_t nb = lb;
int64_t ob = mb;
int64_t pb = nb == ob;
int64_t qb = 1;
int64_t rb = pb & qb;
if (eqz(rb)) goto B_j;
long sb = (long)f[3];
int64_t tb = (int64_t)f[2];
int64_t ub = tb;
long vb = i64_extend_i32_s(ub);
long wb = sb + vb;
long xb = 0L;
long yb = wb;
long zb = xb;
int64_t ac = yb < zb;
int64_t bc = 1;
int64_t cc = ac & bc;
if (eqz(cc)) goto B_j;
B_k:;
int64_t dc = 9;
float_raise(dc);
int64_t ec = (int64_t)f[9];
int64_t fc = 2047;
long gc = 0L;
long hc = packFloat64(ec, fc, gc);
int64_t ic = (int64_t)f[2];
int64_t jc = 0;
int64_t kc = ic;
int64_t lc = jc;
int64_t mc = kc == lc;
int64_t nc = 1;
int64_t oc = mc & nc;
int64_t pc = oc;
long qc = i64_extend_i32_s(pc);
long rc = hc - qc;
f[5] = rc;
goto B_h;
B_j:;
int64_t sc = (int64_t)f[8];
int64_t tc = 0;
int64_t uc = sc;
int64_t vc = tc;
int64_t wc = uc < vc;
int64_t xc = 1;
int64_t yc = wc & xc;
if (eqz(yc)) goto B_l;
int64_t zc = 1;
f[3] = zc;
long ad = (long)f[3];
int64_t bd = (int64_t)f[8];
int64_t cd = 0;
int64_t dd = cd - bd;
int64_t ed = 24;
int64_t* fd = f + ed;
int64_t* gd = fd;
shift64RightJamming(ad, dd, gd);
int64_t hd = 0;
f[8] = hd;
long id = (long)f[3];
long jd = 1023L;
long kd = id & jd;
int64_t ld = i32_wrap_i64(kd);
f[1] = ld;
int64_t md = (int64_t)f[3];
if (eqz(md)) goto B_m;
int64_t nd = (int64_t)f[1];
if (eqz(nd)) goto B_m;
int64_t od = 4;
float_raise(od);
B_m:;
B_l:;
B_i:;
int64_t pd = (int64_t)f[1];
if (eqz(pd)) goto B_n;
int64_t * qd = float_exception_flags;
int64_t rd = qd[0];
int64_t sd = 1;
int64_t td = rd | sd;
qd[0] = td;
B_n:;
long ud = (long)f[3];
int64_t vd = (int64_t)f[2];
int64_t wd = vd;
long xd = i64_extend_i32_s(wd);
long yd = ud + xd;
long zd = 10L;
long ae = yd >> zd;
f[3] = ae;
int64_t be = (int64_t)f[1];
int64_t ce = 512;
int64_t de = be ^ ce;
int64_t ee = 0;
int64_t fe = de;
int64_t ge = ee;
int64_t he = fe == ge;
int64_t ie = 1;
int64_t je = he & ie;
int64_t ke = (int64_t)f[4];
int64_t le = je & ke;
int64_t me = -1;
int64_t ne = le ^ me;
int64_t oe = ne;
long pe = i64_extend_i32_s(oe);
long qe = (long)f[3];
long re = qe & pe;
f[3] = re;
long se = (long)f[3];
long te = 0L;
long ue = se;
long ve = te;
int64_t we = ue == ve;
int64_t xe = 1;
int64_t ye = we & xe;
if (eqz(ye)) goto B_o;
int64_t ze = 0;
f[8] = ze;
B_o:;
int64_t af = (int64_t)f[9];
int64_t bf = (int64_t)f[8];
long cf = (long)f[3];
long df = packFloat64(af, bf, cf);
f[5] = df;
B_h:;
long ef = (long)f[5];
int64_t ff = 48;
int64_t* gf = f + ff;
return ef;
}

long float64_div(long a, long b) {
int64_t* c = stack_pointer;
int64_t d = 112;
int64_t* e = c - d;
e[12] = a;
e[11] = b;
long f = (long)e[12];
long g = extractFloat64Frac(f);
e[7] = g;
long h = (long)e[12];
int64_t i = extractFloat64Exp(h);
e[18] = i;
long j = (long)e[12];
int64_t k = extractFloat64Sign(j);
e[21] = k;
long l = (long)e[11];
long m = extractFloat64Frac(l);
e[6] = m;
long n = (long)e[11];
int64_t o = extractFloat64Exp(n);
e[17] = o;
long p = (long)e[11];
int64_t q = extractFloat64Sign(p);
e[20] = q;
int64_t r = (int64_t)e[21];
int64_t s = (int64_t)e[20];
int64_t t = r ^ s;
e[19] = t;
int64_t u = (int64_t)e[18];
int64_t v = 2047;
int64_t w = u;
int64_t x = v;
int64_t y = w == x;
int64_t z = 1;
int64_t aa = y & z;
if (eqz(aa)) goto B_b;
long ba = (long)e[7];
long ca = 0L;
long da = ba;
long ea = ca;
int64_t fa = da != ea;
int64_t ga = 1;
int64_t ha = fa & ga;
if (eqz(ha)) goto B_c;
long ia = (long)e[12];
long ja = (long)e[11];
long ka = propagateFloat64NaN(ia, ja);
e[13] = ka;
goto B_a;
B_c:;
int64_t la = (int64_t)e[17];
int64_t ma = 2047;
int64_t na = la;
int64_t oa = ma;
int64_t pa = na == oa;
int64_t qa = 1;
int64_t ra = pa & qa;
if (eqz(ra)) goto B_d;
long sa = (long)e[6];
long ta = 0L;
long ua = sa;
long va = ta;
int64_t wa = ua != va;
int64_t xa = 1;
int64_t ya = wa & xa;
if (eqz(ya)) goto B_e;
long za = (long)e[12];
long ab = (long)e[11];
long bb = propagateFloat64NaN(za, ab);
e[13] = bb;
goto B_a;
B_e:;
int64_t cb = 16;
float_raise(cb);
long db = 9223372036854775807L;
e[13] = db;
goto B_a;
B_d:;
int64_t eb = (int64_t)e[19];
int64_t fb = 2047;
long gb = 0L;
long hb = packFloat64(eb, fb, gb);
e[13] = hb;
goto B_a;
B_b:;
int64_t ib = (int64_t)e[17];
int64_t jb = 2047;
int64_t kb = ib;
int64_t lb = jb;
int64_t mb = kb == lb;
int64_t nb = 1;
int64_t ob = mb & nb;
if (eqz(ob)) goto B_f;
long pb = (long)e[6];
long qb = 0L;
long rb = pb;
long sb = qb;
int64_t tb = rb != sb;
int64_t ub = 1;
int64_t vb = tb & ub;
if (eqz(vb)) goto B_g;
long wb = (long)e[12];
long xb = (long)e[11];
long yb = propagateFloat64NaN(wb, xb);
e[13] = yb;
goto B_a;
B_g:;
int64_t zb = (int64_t)e[19];
int64_t ac = 0;
long bc = 0L;
long cc = packFloat64(zb, ac, bc);
e[13] = cc;
goto B_a;
B_f:;
int64_t dc = (int64_t)e[17];
if (dc) goto B_h;
long ec = (long)e[6];
long fc = 0L;
long gc = ec;
long hc = fc;
int64_t ic = gc == hc;
int64_t jc = 1;
int64_t kc = ic & jc;
if (eqz(kc)) goto B_i;
int64_t lc = (int64_t)e[18];
int64_t mc = lc;
long nc = i64_extend_i32_s(mc);
long oc = (long)e[7];
long pc = nc | oc;
long qc = 0L;
long rc = pc;
long sc = qc;
int64_t tc = rc == sc;
int64_t uc = 1;
int64_t vc = tc & uc;
if (eqz(vc)) goto B_j;
int64_t wc = 16;
float_raise(wc);
long xc = 9223372036854775807L;
e[13] = xc;
goto B_a;
B_j:;
int64_t yc = 2;
float_raise(yc);
int64_t zc = (int64_t)e[19];
int64_t ad = 2047;
long bd = 0L;
long cd = packFloat64(zc, ad, bd);
e[13] = cd;
goto B_a;
B_i:;
long dd = (long)e[6];
int64_t ed = 68;
int64_t* fd = e + ed;
int64_t* gd = fd;
int64_t hd = 48;
int64_t* id = e + hd;
int64_t* jd = id;
normalizeFloat64Subnormal(dd, gd, jd);
B_h:;
int64_t kd = (int64_t)e[18];
if (kd) goto B_k;
long ld = (long)e[7];
long md = 0L;
long nd = ld;
long od = md;
int64_t pd = nd == od;
int64_t qd = 1;
int64_t rd = pd & qd;
if (eqz(rd)) goto B_l;
int64_t sd = (int64_t)e[19];
int64_t td = 0;
long ud = 0L;
long vd = packFloat64(sd, td, ud);
e[13] = vd;
goto B_a;
B_l:;
long wd = (long)e[7];
int64_t xd = 72;
int64_t* yd = e + xd;
int64_t* zd = yd;
int64_t ae = 56;
int64_t* be = e + ae;
int64_t* ce = be;
normalizeFloat64Subnormal(wd, zd, ce);
B_k:;
int64_t de = (int64_t)e[18];
int64_t ee = (int64_t)e[17];
int64_t fe = de - ee;
int64_t ge = 1021;
int64_t he = fe + ge;
e[16] = he;
long ie = (long)e[7];
long je = 4503599627370496L;
long ke = ie | je;
long le = 10L;
long me = ke << le;
e[7] = me;
long ne = (long)e[6];
long oe = 4503599627370496L;
long pe = ne | oe;
long qe = 11L;
long re = pe << qe;
e[6] = re;
long se = (long)e[6];
long te = (long)e[7];
long ue = (long)e[7];
long ve = te + ue;
long we = se;
long xe = ve;
int64_t ye = we <= xe;
int64_t ze = 1;
int64_t af = ye & ze;
if (eqz(af)) goto B_m;
long bf = (long)e[7];
long cf = 1L;
long df = bf >> cf;
e[7] = df;
int64_t ef = (int64_t)e[16];
int64_t ff = 1;
int64_t gf = ef + ff;
e[16] = gf;
B_m:;
long hf = (long)e[7];
long _if = (long)e[6];
long jf = 0L;
long kf = estimateDiv128To64(hf, jf, _if);
e[5] = kf;
long lf = (long)e[5];
long mf = 511L;
long nf = lf & mf;
long of = 2L;
long pf = nf;
long qf = of;
int64_t rf = pf <= qf;
int64_t sf = 1;
int64_t tf = rf & sf;
if (eqz(tf)) goto B_n;
long uf = (long)e[6];
long vf = (long)e[5];
int64_t wf = 16;
int64_t* xf = e + wf;
int64_t* yf = xf;
int64_t zf = 8;
int64_t* ag = e + zf;
int64_t* bg = ag;
mul64To128(uf, vf, yf, bg);
long cg = (long)e[7];
long dg = (long)e[2];
long eg = (long)e[1];
long fg = 0L;
int64_t gg = 32;
int64_t* hg = e + gg;
int64_t* ig = hg;
int64_t jg = 24;
int64_t* kg = e + jg;
int64_t* lg = kg;
sub128(cg, fg, dg, eg, ig, lg);
while (1) {
long mg = (long)e[4];
long ng = 0L;
long og = mg;
long pg = ng;
int64_t qg = og < pg;
int64_t rg = 1;
int64_t sg = qg & rg;
if (eqz(sg)) goto B_o;
long tg = (long)e[5];
long ug = -1L;
long vg = tg + ug;
e[5] = vg;
long wg = (long)e[4];
long xg = (long)e[3];
long yg = (long)e[6];
long zg = 0L;
int64_t ah = 32;
int64_t* bh = e + ah;
int64_t* ch = bh;
int64_t dh = 24;
int64_t* eh = e + dh;
int64_t* fh = eh;
add128(wg, xg, zg, yg, ch, fh);
;//continue L_p;
}
//unreachable;
B_o:;
long gh = (long)e[3];
long hh = 0L;
long ih = gh;
long jh = hh;
int64_t kh = ih != jh;
int64_t lh = 1;
int64_t mh = kh & lh;
int64_t nh = mh;
long oh = i64_extend_i32_s(nh);
long ph = (long)e[5];
long qh = ph | oh;
e[5] = qh;
B_n:;
int64_t rh = (int64_t)e[19];
int64_t sh = (int64_t)e[16];
long th = (long)e[5];
long uh = roundAndPackFloat64(rh, sh, th);
e[13] = uh;
B_a:;
long vh = (long)e[13];
int64_t wh = 112;
int64_t* xh = e + wh;
return vh;
}

long propagateFloat64NaN(long a, long b) {
long fa;
long ca;
long z;
int64_t* c = stack_pointer;
int64_t d = 32;
struct_3 e;
e.f = a;
e.e = b;
long f = e.f;
int64_t g = float64_is_nan(f);
e.d = g;
long h = e.f;
int64_t i = float64_is_signaling_nan(h);
e.c = i;
long j = e.e;
int64_t k = float64_is_nan(j);
e.b = k;
long l = e.e;
int64_t m = float64_is_signaling_nan(l);
e.a = m;
long n = e.f;
long o = 2251799813685248L;
long p = n | o;
e.f = p;
long q = e.e;
long r = 2251799813685248L;
long s = q | r;
e.e = s;
int64_t t = e.c;
int64_t u = e.a;
int64_t v = t | u;
if (eqz(v)) goto B_a;
int64_t w = 16;
float_raise(w);
B_a:;
int64_t x = e.a;
if (eqz(x)) goto B_c;
long y = e.e;
z = y;
goto B_b;
B_c:;
int64_t aa = e.c;
if (eqz(aa)) goto B_e;
long ba = e.f;
ca = ba;
goto B_d;
B_e:;
int64_t da = e.b;
if (eqz(da)) goto B_g;
long ea = e.e;
fa = ea;
goto B_f;
B_g:;
long ga = e.f;
fa = ga;
B_f:;
long ha = fa;
ca = ha;
B_d:;
long ia = ca;
z = ia;
B_b:;
long ja = z;
int64_t ka = 32;
int64_t* la = &e + ka;
return ja;
}

long estimateDiv128To64(long a, long b, long c) {
long ba;
long oc;
int64_t* d = stack_pointer;
int64_t e = 96;
int64_t * f = d - e;
f[10] = a;
f[9] = b;
f[8] = c;
long g = f[8];
long h = f[10];
long i = g;
long j = h;
int64_t k = i <= j;
int64_t l = 1;
int64_t m = k & l;
if (eqz(m)) goto B_b;
long n = -1L;
f[11] = n;
goto B_a;
B_b:;
long o = f[8];
long p = 32L;
long q = o >> p;
f[7] = q;
long r = f[7];
long s = 32L;
long t = r << s;
long u = f[10];
long v = t;
long w = u;
int64_t x = v <= w;
int64_t y = 1;
int64_t z = x & y;
if (eqz(z)) goto B_d;
long aa = -4294967296L;
ba = aa;
goto B_c;
B_d:;
long ca = f[10];
long da = f[7];
long ea = ca / da;
long fa = 32L;
long ga = ea << fa;
ba = ga;
B_c:;
long ha = ba;
f[1] = ha;
long ia = f[8];
long ja = f[1];
int64_t ka = 24;
int64_t* la = f + ka;
int64_t* ma = la;
int64_t na = 16;
int64_t* oa = f + na;
int64_t* pa = oa;
mul64To128(ia, ja, ma, pa);
long qa = f[10];
long ra = f[9];
long sa = f[3];
long ta = f[2];
int64_t ua = 40;
int64_t* va = f + ua;
int64_t* wa = va;
int64_t xa = 32;
int64_t* ya = f + xa;
int64_t* za = ya;
sub128(qa, ra, sa, ta, wa, za);
while (1) {
long ab = f[5];
long bb = 0L;
long cb = ab;
long db = bb;
int64_t eb = cb < db;
int64_t fb = 1;
int64_t gb = eb & fb;
if (eqz(gb)) goto B_e;
long hb = f[1];
long ib = 4294967296L;
long jb = hb - ib;
f[1] = jb;
long kb = f[8];
long lb = 32L;
long mb = kb << lb;
f[6] = mb;
long nb = f[5];
long ob = f[4];
long pb = f[7];
long qb = f[6];
int64_t rb = 40;
int64_t* sb = f + rb;
int64_t* tb = sb;
int64_t ub = 32;
int64_t* vb = f + ub;
int64_t* wb = vb;
add128(nb, ob, pb, qb, tb, wb);
;//continue L_f;
}
//unreachable;
B_e:;
long xb = f[5];
long yb = 32L;
long zb = xb << yb;
long ac = f[4];
long bc = 32L;
long cc = ac >> bc;
long dc = zb | cc;
f[5] = dc;
long ec = f[7];
long fc = 32L;
long gc = ec << fc;
long hc = f[5];
long ic = gc;
long jc = hc;
int64_t kc = ic <= jc;
int64_t lc = 1;
int64_t mc = kc & lc;
if (eqz(mc)) goto B_h;
long nc = 4294967295L;
oc = nc;
goto B_g;
B_h:;
long pc = f[5];
long qc = f[7];
long rc = pc / qc;
oc = rc;
B_g:;
long sc = oc;
long tc = f[1];
long uc = tc | sc;
f[1] = uc;
long vc = f[1];
f[11] = vc;
B_a:;
long wc = f[11];
int64_t xc = 96;
int64_t* yc = f + xc;
return wc;
}

double ullong_to_double(long a) {
int64_t* b = stack_pointer;
int64_t c = 32;
int64_t* d = b - c;
d[3] = a;
long e = (long)d[3];
d[2] = e;
double f = (double)d[1];
return f;
}


double rtclock() {
int64_t* a = stack_pointer;
int64_t b = 32;
int64_t* c = a - b;
int64_t d = 16;
int64_t* e = c + d;
int64_t* f = e;
int64_t g = 0;
int64_t h = gettimeofday(f, g);
c[3] = h;
int64_t i = (int64_t)c[3];
if (eqz(i)) goto B_a;
int64_t j = (int64_t)c[3];
c[0] = j;
int64_t k = 528;
int64_t* l = memory_base;
int64_t* m = l + k; _printf(m, c);
B_a:;
long n = (long)c[2];
double o = f64_convert_i64_s(n);
int64_t p = (int64_t)c[6];
double q = f64_convert_i32_s(p);
double r = 0.000001;
double s = q * r;
double t = s + o;
int64_t u = 32;
int64_t* v = c + u;
return t;
}

void legalstub_shift64RightJamming(int a, int b, int c, int d) {
shift64RightJamming(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
c,
d);
}

void legalstub_add128(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) {
add128(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
i64_extend_i32_u(e) | i64_extend_i32_u(f) << 32L,
i64_extend_i32_u(g) | i64_extend_i32_u(h) << 32L,
i,
j);
}

void legalstub_sub128(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) {
sub128(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
i64_extend_i32_u(e) | i64_extend_i32_u(f) << 32L,
i64_extend_i32_u(g) | i64_extend_i32_u(h) << 32L,
i,
j);
}

void legalstub_mul64To128(int a, int b, int c, int d, int e, int f) {
mul64To128(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
e,
f);
}

int legalstub_float64_is_nan(int a, int b) {
return float64_is_nan(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
}

int legalstub_float64_is_signaling_nan(int a, int b) {
return float64_is_signaling_nan(
i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
}

int legalstub_extractFloat64Frac(int a, int b) {
long c =
extractFloat64Frac(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
setTempRet0(i32_wrap_i64(c >> 32L));
return i32_wrap_i64(c);
}

int legalstub_extractFloat64Exp(int a, int b) {
return extractFloat64Exp(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
}

int legalstub_extractFloat64Sign(int a, int b) {
return extractFloat64Sign(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
}

void legalstub_normalizeFloat64Subnormal(int a, int b, int c, int d) {
normalizeFloat64Subnormal(
i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
c,
d);
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
return ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
}
