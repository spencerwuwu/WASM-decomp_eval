
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
    int a;
    int b;
    int c;
    int d;
    long e;
    long f;
} struct_2;
typedef struct struct_3 {
    int a;
    int b;
    long c;
    long d;
    long e;
} struct_3;
int _printf(int a, int b);
int gettimeofday(int a, int b);
void setTempRet0(int a);
void wasm_call_ctors();
void wasm_apply_data_relocs();
void shift64RightJamming(long a, int b, int c);
void float_raise(int a);
int float64_is_nan(long a);
int float64_is_signaling_nan(long a);
long extractFloat64Frac(long a);
int extractFloat64Exp(long a);
int extractFloat64Sign(long a);
long packFloat64(int a, int b, long c);
long roundAndPackFloat64(int a, int b, long c);
long normalizeRoundAndPackFloat64(int a, int b, long c);
int countLeadingZeros64(long a);
int countLeadingZeros32(int a);
long addFloat64Sigs(long a, long b, int c);
long propagateFloat64NaN(long a, long b);
long subFloat64Sigs(long a, long b, int c);
long float64_add(long a, long b);
double ullong_to_double(long a);
double rtclock();
void legalstub_shift64RightJamming(int a, int b, int c, int d);
int legalstub_float64_is_nan(int a, int b);
int legalstub_float64_is_signaling_nan(int a, int b);
int legalstub_extractFloat64Frac(int a, int b);
int legalstub_extractFloat64Exp(int a, int b);
int legalstub_extractFloat64Sign(int a, int b);
int legalstub_packFloat64(int a, int b, int c, int d);
int legalstub_roundAndPackFloat64(int a, int b, int c, int d);
int legalstub_normalizeRoundAndPackFloat64(int a, int b, int c, int d);
int legalstub_addFloat64Sigs(int a, int b, int c, int d, int e);
int legalstub_subFloat64Sigs(int a, int b, int c, int d, int e);
int legalstub_float64_add(int a, int b, int c, int d);
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
int64_t float_exception_flags_1 = 2180;
int64_t float_rounding_mode_1 = 2176;
int64_t startTimer_1 = 2184;
int64_t a_input_1 = 0;
int64_t b_input_1 = 368;
int64_t z_output_1 = 736;
int64_t endTimer_1 = 2192;


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

long normalizeRoundAndPackFloat64(int a, int b, long c) {
int64_t* d = stack_pointer;
int64_t e = 32;
int64_t* f = d - e;
f[7] = a;
f[6] = b;
f[2] = c;
long g = (long)f[2];
int64_t h = countLeadingZeros64(g);
int64_t i = 1;
int64_t j = h - i;
f[3] = j;
int64_t k = (int64_t)f[7];
int64_t l = (int64_t)f[6];
int64_t m = (int64_t)f[3];
int64_t n = l - m;
long o = (long)f[2];
int64_t p = (int64_t)f[3];
int64_t q = p;
long r = i64_extend_i32_u(q);
long s = o << r;
long t = roundAndPackFloat64(k, n, s);
int64_t u = 32;
int64_t* v = f + u;
return t;
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
int64_t ga = 1152;
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

long addFloat64Sigs(long a, long b, int c) {
int64_t* d = stack_pointer;
int64_t e = 80;
int64_t* f = d - e;
f[8] = a;
f[7] = b;
f[13] = c;
long g = (long)f[8];
long h = extractFloat64Frac(g);
f[4] = h;
long i = (long)f[8];
int64_t j = extractFloat64Exp(i);
f[12] = j;
long k = (long)f[7];
long l = extractFloat64Frac(k);
f[3] = l;
long m = (long)f[7];
int64_t n = extractFloat64Exp(m);
f[11] = n;
int64_t o = (int64_t)f[12];
int64_t p = (int64_t)f[11];
int64_t q = o - p;
f[3] = q;
long r = (long)f[4];
long s = 9L;
long t = r << s;
f[4] = t;
long u = (long)f[3];
long v = 9L;
long w = u << v;
f[3] = w;
int64_t x = (int64_t)f[3];
int64_t y = 0;
int64_t z = y;
int64_t aa = x;
int64_t ba = z < aa;
int64_t ca = 1;
int64_t da = ba & ca;
if (eqz(da)) goto B_d;
int64_t ea = (int64_t)f[12];
int64_t fa = 2047;
int64_t ga = ea;
int64_t ha = fa;
int64_t ia = ga == ha;
int64_t ja = 1;
int64_t ka = ia & ja;
if (eqz(ka)) goto B_e;
long la = (long)f[4];
long ma = 0L;
long na = la;
long oa = ma;
int64_t pa = na != oa;
int64_t qa = 1;
int64_t ra = pa & qa;
if (eqz(ra)) goto B_f;
long sa = (long)f[8];
long ta = (long)f[7];
long ua = propagateFloat64NaN(sa, ta);
f[9] = ua;
goto B_a;
B_f:;
long va = (long)f[8];
f[9] = va;
goto B_a;
B_e:;
int64_t wa = (int64_t)f[11];
if (wa) goto B_h;
int64_t xa = (int64_t)f[3];
int64_t ya = -1;
int64_t za = xa + ya;
f[3] = za;
goto B_g;
B_h:;
long ab = (long)f[3];
long bb = 2305843009213693952L;
long cb = ab | bb;
f[3] = cb;
B_g:;
long db = (long)f[3];
int64_t eb = (int64_t)f[3];
int64_t fb = 24;
int64_t* gb = f + fb;
int64_t* hb = gb;
shift64RightJamming(db, eb, hb);
int64_t ib = (int64_t)f[12];
f[10] = ib;
goto B_c;
B_d:;
int64_t jb = (int64_t)f[3];
int64_t kb = 0;
int64_t lb = jb;
int64_t mb = kb;
int64_t nb = lb < mb;
int64_t ob = 1;
int64_t pb = nb & ob;
if (eqz(pb)) goto B_j;
int64_t qb = (int64_t)f[11];
int64_t rb = 2047;
int64_t sb = qb;
int64_t tb = rb;
int64_t ub = sb == tb;
int64_t vb = 1;
int64_t wb = ub & vb;
if (eqz(wb)) goto B_k;
long xb = (long)f[3];
long yb = 0L;
long zb = xb;
long ac = yb;
int64_t bc = zb != ac;
int64_t cc = 1;
int64_t dc = bc & cc;
if (eqz(dc)) goto B_l;
long ec = (long)f[8];
long fc = (long)f[7];
long gc = propagateFloat64NaN(ec, fc);
f[9] = gc;
goto B_a;
B_l:;
int64_t hc = (int64_t)f[13];
int64_t ic = 2047;
long jc = 0L;
long kc = packFloat64(hc, ic, jc);
f[9] = kc;
goto B_a;
B_k:;
int64_t lc = (int64_t)f[12];
if (lc) goto B_n;
int64_t mc = (int64_t)f[3];
int64_t nc = 1;
int64_t oc = mc + nc;
f[3] = oc;
goto B_m;
B_n:;
long pc = (long)f[4];
long qc = 2305843009213693952L;
long rc = pc | qc;
f[4] = rc;
B_m:;
long sc = (long)f[4];
int64_t tc = (int64_t)f[3];
int64_t uc = 0;
int64_t vc = uc - tc;
int64_t wc = 32;
int64_t* xc = f + wc;
int64_t* yc = xc;
shift64RightJamming(sc, vc, yc);
int64_t zc = (int64_t)f[11];
f[10] = zc;
goto B_i;
B_j:;
int64_t ad = (int64_t)f[12];
int64_t bd = 2047;
int64_t cd = ad;
int64_t dd = bd;
int64_t ed = cd == dd;
int64_t fd = 1;
int64_t gd = ed & fd;
if (eqz(gd)) goto B_o;
long hd = (long)f[4];
long id = (long)f[3];
long jd = hd | id;
long kd = 0L;
long ld = jd;
long md = kd;
int64_t nd = ld != md;
int64_t od = 1;
int64_t pd = nd & od;
if (eqz(pd)) goto B_p;
long qd = (long)f[8];
long rd = (long)f[7];
long sd = propagateFloat64NaN(qd, rd);
f[9] = sd;
goto B_a;
B_p:;
long td = (long)f[8];
f[9] = td;
goto B_a;
B_o:;
int64_t ud = (int64_t)f[12];
if (ud) goto B_q;
int64_t vd = (int64_t)f[13];
long wd = (long)f[4];
long xd = (long)f[3];
long yd = wd + xd;
long zd = 9L;
long ae = yd >> zd;
int64_t be = 0;
long ce = packFloat64(vd, be, ae);
f[9] = ce;
goto B_a;
B_q:;
long de = (long)f[4];
long ee = 4611686018427387904L;
long fe = de + ee;
long ge = (long)f[3];
long he = fe + ge;
f[2] = he;
int64_t ie = (int64_t)f[12];
f[10] = ie;
goto B_b;
B_i:;
B_c:;
long je = (long)f[4];
long ke = 2305843009213693952L;
long le = je | ke;
f[4] = le;
long me = (long)f[4];
long ne = (long)f[3];
long oe = me + ne;
long pe = 1L;
long qe = oe << pe;
f[2] = qe;
int64_t re = (int64_t)f[10];
int64_t se = -1;
int64_t te = re + se;
f[10] = te;
long ue = (long)f[2];
long ve = 0L;
long we = ue;
long xe = ve;
int64_t ye = we < xe;
int64_t ze = 1;
int64_t af = ye & ze;
if (eqz(af)) goto B_r;
long bf = (long)f[4];
long cf = (long)f[3];
long df = bf + cf;
f[2] = df;
int64_t ef = (int64_t)f[10];
int64_t ff = 1;
int64_t gf = ef + ff;
f[10] = gf;
B_r:;
B_b:;
int64_t hf = (int64_t)f[13];
int64_t _if = (int64_t)f[10];
long jf = (long)f[2];
long kf = roundAndPackFloat64(hf, _if, jf);
f[9] = kf;
B_a:;
long lf = (long)f[9];
int64_t mf = 80;
int64_t* nf = f + mf;
return lf;
}

long propagateFloat64NaN(long a, long b) {
long fa;
long ca;
long z;
int64_t* c = stack_pointer;
int64_t d = 32;
struct_2 e;
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

long subFloat64Sigs(long a, long b, int c) {
int64_t* d = stack_pointer;
int64_t e = 80;
int64_t* f = d - e;
f[8] = a;
f[7] = b;
f[13] = c;
long g = (long)f[8];
long h = extractFloat64Frac(g);
f[4] = h;
long i = (long)f[8];
int64_t j = extractFloat64Exp(i);
f[12] = j;
long k = (long)f[7];
long l = extractFloat64Frac(k);
f[3] = l;
long m = (long)f[7];
int64_t n = extractFloat64Exp(m);
f[11] = n;
int64_t o = (int64_t)f[12];
int64_t p = (int64_t)f[11];
int64_t q = o - p;
f[3] = q;
long r = (long)f[4];
long s = 10L;
long t = r << s;
f[4] = t;
long u = (long)f[3];
long v = 10L;
long w = u << v;
f[3] = w;
int64_t x = (int64_t)f[3];
int64_t y = 0;
int64_t z = y;
int64_t aa = x;
int64_t ba = z < aa;
int64_t ca = 1;
int64_t da = ba & ca;
if (eqz(da)) goto B_e;
goto B_d;
B_e:;
int64_t ea = (int64_t)f[3];
int64_t fa = 0;
int64_t ga = ea;
int64_t ha = fa;
int64_t ia = ga < ha;
int64_t ja = 1;
int64_t ka = ia & ja;
if (eqz(ka)) goto B_h;
goto B_g;
B_h:;
int64_t la = (int64_t)f[12];
int64_t ma = 2047;
int64_t na = la;
int64_t oa = ma;
int64_t pa = na == oa;
int64_t qa = 1;
int64_t ra = pa & qa;
if (eqz(ra)) goto B_i;
long sa = (long)f[4];
long ta = (long)f[3];
long ua = sa | ta;
long va = 0L;
long wa = ua;
long xa = va;
int64_t ya = wa != xa;
int64_t za = 1;
int64_t ab = ya & za;
if (eqz(ab)) goto B_j;
long bb = (long)f[8];
long cb = (long)f[7];
long db = propagateFloat64NaN(bb, cb);
f[9] = db;
goto B_a;
B_j:;
int64_t eb = 16;
float_raise(eb);
long fb = 9223372036854775807L;
f[9] = fb;
goto B_a;
B_i:;
int64_t gb = (int64_t)f[12];
if (gb) goto B_k;
int64_t hb = 1;
f[12] = hb;
int64_t ib = 1;
f[11] = ib;
B_k:;
long jb = (long)f[3];
long kb = (long)f[4];
long lb = jb;
long mb = kb;
int64_t nb = lb < mb;
int64_t ob = 1;
int64_t pb = nb & ob;
if (eqz(pb)) goto B_l;
goto B_c;
B_l:;
long qb = (long)f[4];
long rb = (long)f[3];
long sb = qb;
long tb = rb;
int64_t ub = sb < tb;
int64_t vb = 1;
int64_t wb = ub & vb;
if (eqz(wb)) goto B_m;
goto B_f;
B_m:;
int64_t * xb = float_rounding_mode;
int64_t yb = xb[0];
int64_t zb = 3;
int64_t ac = yb;
int64_t bc = zb;
int64_t cc = ac == bc;
int64_t dc = 1;
int64_t ec = cc & dc;
int64_t fc = 0;
long gc = 0L;
long hc = packFloat64(ec, fc, gc);
f[9] = hc;
goto B_a;
B_g:;
int64_t ic = (int64_t)f[11];
int64_t jc = 2047;
int64_t kc = ic;
int64_t lc = jc;
int64_t mc = kc == lc;
int64_t nc = 1;
int64_t oc = mc & nc;
if (eqz(oc)) goto B_n;
long pc = (long)f[3];
long qc = 0L;
long rc = pc;
long sc = qc;
int64_t tc = rc != sc;
int64_t uc = 1;
int64_t vc = tc & uc;
if (eqz(vc)) goto B_o;
long wc = (long)f[8];
long xc = (long)f[7];
long yc = propagateFloat64NaN(wc, xc);
f[9] = yc;
goto B_a;
B_o:;
int64_t zc = (int64_t)f[13];
int64_t ad = 1;
int64_t bd = zc ^ ad;
int64_t cd = 2047;
long dd = 0L;
long ed = packFloat64(bd, cd, dd);
f[9] = ed;
goto B_a;
B_n:;
int64_t fd = (int64_t)f[12];
if (fd) goto B_q;
int64_t gd = (int64_t)f[3];
int64_t hd = 1;
int64_t id = gd + hd;
f[3] = id;
goto B_p;
B_q:;
long jd = (long)f[4];
long kd = 4611686018427387904L;
long ld = jd | kd;
f[4] = ld;
B_p:;
long md = (long)f[4];
int64_t nd = (int64_t)f[3];
int64_t od = 0;
int64_t pd = od - nd;
int64_t qd = 32;
int64_t* rd = f + qd;
int64_t* sd = rd;
shift64RightJamming(md, pd, sd);
long td = (long)f[3];
long ud = 4611686018427387904L;
long vd = td | ud;
f[3] = vd;
B_f:;
long wd = (long)f[3];
long xd = (long)f[4];
long yd = wd - xd;
f[2] = yd;
int64_t zd = (int64_t)f[11];
f[10] = zd;
int64_t ae = (int64_t)f[13];
int64_t be = 1;
int64_t ce = ae ^ be;
f[13] = ce;
goto B_b;
B_d:;
int64_t de = (int64_t)f[12];
int64_t ee = 2047;
int64_t fe = de;
int64_t ge = ee;
int64_t he = fe == ge;
int64_t ie = 1;
int64_t je = he & ie;
if (eqz(je)) goto B_r;
long ke = (long)f[4];
long le = 0L;
long me = ke;
long ne = le;
int64_t oe = me != ne;
int64_t pe = 1;
int64_t qe = oe & pe;
if (eqz(qe)) goto B_s;
long re = (long)f[8];
long se = (long)f[7];
long te = propagateFloat64NaN(re, se);
f[9] = te;
goto B_a;
B_s:;
long ue = (long)f[8];
f[9] = ue;
goto B_a;
B_r:;
int64_t ve = (int64_t)f[11];
if (ve) goto B_u;
int64_t we = (int64_t)f[3];
int64_t xe = -1;
int64_t ye = we + xe;
f[3] = ye;
goto B_t;
B_u:;
long ze = (long)f[3];
long af = 4611686018427387904L;
long bf = ze | af;
f[3] = bf;
B_t:;
long cf = (long)f[3];
int64_t df = (int64_t)f[3];
int64_t ef = 24;
int64_t* ff = f + ef;
int64_t* gf = ff;
shift64RightJamming(cf, df, gf);
long hf = (long)f[4];
long _if = 4611686018427387904L;
long jf = hf | _if;
f[4] = jf;
B_c:;
long kf = (long)f[4];
long lf = (long)f[3];
long mf = kf - lf;
f[2] = mf;
int64_t nf = (int64_t)f[12];
f[10] = nf;
B_b:;
int64_t of = (int64_t)f[10];
int64_t pf = -1;
int64_t qf = of + pf;
f[10] = qf;
int64_t rf = (int64_t)f[13];
int64_t sf = (int64_t)f[10];
long tf = (long)f[2];
long uf = normalizeRoundAndPackFloat64(rf, sf, tf);
f[9] = uf;
B_a:;
long vf = (long)f[9];
int64_t wf = 80;
int64_t* xf = f + wf;
return vf;
}

long float64_add(long a, long b) {
int64_t* c = stack_pointer;
int64_t d = 32;
struct_3 e;
e.d = a;
e.c = b;
long f = e.d;
int64_t g = extractFloat64Sign(f);
e.b = g;
long h = e.c;
int64_t i = extractFloat64Sign(h);
e.a = i;
int64_t j = e.b;
int64_t k = e.a;
int64_t l = j;
int64_t m = k;
int64_t n = l == m;
int64_t o = 1;
int64_t p = n & o;
if (eqz(p)) goto B_b;
long q = e.d;
long r = e.c;
int64_t s = e.b;
long t = addFloat64Sigs(q, r, s);
e.e = t;
goto B_a;
B_b:;
long u = e.d;
long v = e.c;
int64_t w = e.b;
long x = subFloat64Sigs(u, v, w);
e.e = x;
B_a:;
long y = e.e;
int64_t z = 32;
int64_t* aa = &e + z;
return y;
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
int64_t k = 1104;
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
return ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
}
