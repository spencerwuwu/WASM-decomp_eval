
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
} struct_1;
typedef struct struct_2 {
    long a;
    long b;
    long c;
    long d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    long k;
    long l;
    long m;
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
long float64_mul(long a, long b);
long propagateFloat64NaN(long a, long b);
double ullong_to_double(long a);
double rtclock();
void legalstub_shift64RightJamming(int a, int b, int c, int d);
void legalstub_mul64To128(int a, int b, int c, int d, int e, int f);
int legalstub_float64_is_nan(int a, int b);
int legalstub_float64_is_signaling_nan(int a, int b);
int legalstub_extractFloat64Frac(int a, int b);
int legalstub_extractFloat64Exp(int a, int b);
int legalstub_extractFloat64Sign(int a, int b);
void legalstub_normalizeFloat64Subnormal(int a, int b, int c, int d);
int legalstub_packFloat64(int a, int b, int c, int d);
int legalstub_roundAndPackFloat64(int a, int b, int c, int d);
int legalstub_float64_mul(int a, int b, int c, int d);
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
int64_t float_exception_flags_1 = 1556;
int64_t float_rounding_mode_1 = 1552;
int64_t startTimer_1 = 1560;
int64_t a_input_1 = 0;
int64_t b_input_1 = 160;
int64_t z_output_1 = 320;
int64_t endTimer_1 = 1568;


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
int64_t ga = 528;
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
struct_1 f;
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

long float64_mul(long a, long b) {
int64_t* c = stack_pointer;
int64_t d = 80;
struct_2 e;
e.l = a;
e.k = b;
long f = e.l;
long g = extractFloat64Frac(f);
e.d = g;
long h = e.l;
int64_t i = extractFloat64Exp(h);
e.g = i;
long j = e.l;
int64_t k = extractFloat64Sign(j);
e.j = k;
long l = e.k;
long m = extractFloat64Frac(l);
e.c = m;
long n = e.k;
int64_t o = extractFloat64Exp(n);
e.f = o;
long p = e.k;
int64_t q = extractFloat64Sign(p);
e.i = q;
int64_t r = e.j;
int64_t s = e.i;
int64_t t = r ^ s;
e.h = t;
int64_t u = e.g;
int64_t v = 2047;
int64_t w = u;
int64_t x = v;
int64_t y = w == x;
int64_t z = 1;
int64_t aa = y & z;
if (eqz(aa)) goto B_b;
long ba = e.d;
long ca = 0L;
long da = ba;
long ea = ca;
int64_t fa = da != ea;
int64_t ga = 1;
int64_t ha = fa & ga;
if (ha) goto B_d;
int64_t ia = e.f;
int64_t ja = 2047;
int64_t ka = ia;
int64_t la = ja;
int64_t ma = ka == la;
int64_t na = 1;
int64_t oa = ma & na;
if (eqz(oa)) goto B_c;
long pa = e.c;
long qa = 0L;
long ra = pa;
long sa = qa;
int64_t ta = ra != sa;
int64_t ua = 1;
int64_t va = ta & ua;
if (eqz(va)) goto B_c;
B_d:;
long wa = e.l;
long xa = e.k;
long ya = propagateFloat64NaN(wa, xa);
e.m = ya;
goto B_a;
B_c:;
int64_t za = e.f;
int64_t ab = za;
long bb = i64_extend_i32_s(ab);
long cb = e.c;
long db = bb | cb;
long eb = 0L;
long fb = db;
long gb = eb;
int64_t hb = fb == gb;
int64_t ib = 1;
int64_t jb = hb & ib;
if (eqz(jb)) goto B_e;
int64_t kb = 16;
float_raise(kb);
long lb = 9223372036854775807L;
e.m = lb;
goto B_a;
B_e:;
int64_t mb = e.h;
int64_t nb = 2047;
long ob = 0L;
long pb = packFloat64(mb, nb, ob);
e.m = pb;
goto B_a;
B_b:;
int64_t qb = e.f;
int64_t rb = 2047;
int64_t sb = qb;
int64_t tb = rb;
int64_t ub = sb == tb;
int64_t vb = 1;
int64_t wb = ub & vb;
if (eqz(wb)) goto B_f;
long xb = e.c;
long yb = 0L;
long zb = xb;
long ac = yb;
int64_t bc = zb != ac;
int64_t cc = 1;
int64_t dc = bc & cc;
if (eqz(dc)) goto B_g;
long ec = e.l;
long fc = e.k;
long gc = propagateFloat64NaN(ec, fc);
e.m = gc;
goto B_a;
B_g:;
int64_t hc = e.g;
int64_t ic = hc;
long jc = i64_extend_i32_s(ic);
long kc = e.d;
long lc = jc | kc;
long mc = 0L;
long nc = lc;
long oc = mc;
int64_t pc = nc == oc;
int64_t qc = 1;
int64_t rc = pc & qc;
if (eqz(rc)) goto B_h;
int64_t sc = 16;
float_raise(sc);
long tc = 9223372036854775807L;
e.m = tc;
goto B_a;
B_h:;
int64_t uc = e.h;
int64_t vc = 2047;
long wc = 0L;
long xc = packFloat64(uc, vc, wc);
e.m = xc;
goto B_a;
B_f:;
int64_t yc = e.g;
if (yc) goto B_i;
long zc = e.d;
long ad = 0L;
long bd = zc;
long cd = ad;
int64_t dd = bd == cd;
int64_t ed = 1;
int64_t fd = dd & ed;
if (eqz(fd)) goto B_j;
int64_t gd = e.h;
int64_t hd = 0;
long id = 0L;
long jd = packFloat64(gd, hd, id);
e.m = jd;
goto B_a;
B_j:;
long kd = e.d;
int64_t ld = 40;
int64_t* md = &e + ld;
int64_t* nd = md;
int64_t od = 24;
int64_t* pd = &e + od;
int64_t* qd = pd;
normalizeFloat64Subnormal(kd, nd, qd);
B_i:;
int64_t rd = e.f;
if (rd) goto B_k;
long sd = e.c;
long td = 0L;
long ud = sd;
long vd = td;
int64_t wd = ud == vd;
int64_t xd = 1;
int64_t yd = wd & xd;
if (eqz(yd)) goto B_l;
int64_t zd = e.h;
int64_t ae = 0;
long be = 0L;
long ce = packFloat64(zd, ae, be);
e.m = ce;
goto B_a;
B_l:;
long de = e.c;
int64_t ee = 36;
int64_t* fe = &e + ee;
int64_t* ge = fe;
int64_t he = 16;
int64_t* ie = &e + he;
int64_t* je = ie;
normalizeFloat64Subnormal(de, ge, je);
B_k:;
int64_t ke = e.g;
int64_t le = e.f;
int64_t me = ke + le;
int64_t ne = 1023;
int64_t oe = me - ne;
e.e = oe;
long pe = e.d;
long qe = 4503599627370496L;
long re = pe | qe;
long se = 10L;
long te = re << se;
e.d = te;
long ue = e.c;
long ve = 4503599627370496L;
long we = ue | ve;
long xe = 11L;
long ye = we << xe;
e.c = ye;
long ze = e.d;
long af = e.c;
int64_t bf = 8;
int64_t* cf = &e + bf;
int64_t* df = cf;
int64_t* ef = &e;
mul64To128(ze, af, df, ef);
long ff = e.a;
long gf = 0L;
long hf = ff;
long _if = gf;
int64_t jf = hf != _if;
int64_t kf = 1;
int64_t lf = jf & kf;
int64_t mf = lf;
long nf = i64_extend_i32_s(mf);
long of = e.b;
long pf = of | nf;
e.b = pf;
long qf = e.b;
long rf = 1L;
long sf = qf << rf;
long tf = 0L;
long uf = tf;
long vf = sf;
int64_t wf = uf <= vf;
int64_t xf = 1;
int64_t yf = wf & xf;
if (eqz(yf)) goto B_m;
long zf = e.b;
long ag = 1L;
long bg = zf << ag;
e.b = bg;
int64_t cg = e.e;
int64_t dg = -1;
int64_t eg = cg + dg;
e.e = eg;
B_m:;
int64_t fg = e.h;
int64_t gg = e.e;
long hg = e.b;
long ig = roundAndPackFloat64(fg, gg, hg);
e.m = ig;
B_a:;
long jg = e.m;
int64_t kg = 80;
int64_t* lg = &e + kg;
return jg;
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
int64_t k = 480;
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

int legalstub_float64_mul(int a, int b, int c, int d) {
long e =
float64_mul(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
setTempRet0(i32_wrap_i64(e >> 32L));
return i32_wrap_i64(e);
}

double legalstub_ullong_to_double(int a, int b) {
return ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
}
