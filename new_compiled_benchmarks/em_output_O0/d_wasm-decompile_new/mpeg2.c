
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

    int _printf(int a, int b);
int gettimeofday(int a, int b);
void wasm_call_ctors();
void wasm_apply_data_relocs();
int read(int a, int b, int c);
void Fill_Buffer();
int Show_Bits(int a);
int Get_Bits1();
int Get_Bits(int a);
void Flush_Buffer(int a);
int Get_motion_code();
int Get_dmvector();
void motion_vectors(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j);
void motion_vector(int a, int b, int c, int d, int e, int f, int g);
void decode_motion_vector(int a, int b, int c, int d, int e);
void Initialize_Buffer();
double rtclock();


int64_t stack[100000];
int64_t *stack_pointer = stack + 100000;
int64_t *memory_base;
int64_t *table_base;
extern int64_t ld_Rdbfr;
extern int64_t inRdbfr;
extern int64_t ld_Rdptr;
extern int64_t System_Stream_Flag;
extern int64_t ld_Rdmax;
extern int64_t ld_Bfr;
extern int64_t ld_Incnt;
extern int64_t MVtab0;
extern int64_t MVtab1;
extern int64_t MVtab2;
extern int64_t startTimer;
extern int64_t evalue;
extern int64_t inmvfs;
extern int64_t inPMV;
extern int64_t outmvfs;
extern int64_t outPMV;
extern int64_t endTimer;
int64_t ld_Rdbfr_1 = 4304;
int64_t inRdbfr_1 = 0;
int64_t ld_Rdptr_1 = 6352;
int64_t System_Stream_Flag_1 = 6356;
int64_t ld_Rdmax_1 = 6360;
int64_t ld_Bfr_1 = 6364;
int64_t ld_Incnt_1 = 6368;
int64_t MVtab0_1 = 4192;
int64_t MVtab1_1 = 4208;
int64_t MVtab2_1 = 4224;
int64_t startTimer_1 = 6376;
int64_t evalue_1 = 6384;
int64_t inmvfs_1 = 4128;
int64_t inPMV_1 = 4096;
int64_t outmvfs_1 = 4176;
int64_t outPMV_1 = 4144;
int64_t endTimer_1 = 6392;
int64_t out_ld_Rdptr = 2048;


;

;

void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

int read(int a, int b, int c) {
int64_t* d = stack_pointer;
int64_t e = 32;
int64_t * f = d - e;
f[7] = a;
f[6] = b;
f[5] = c;
int64_t g = f[7];
f[4] = g;
int64_t h = f[6];
f[3] = h;
int64_t i = f[5];
f[2] = i;
while (1) {
int64_t j = f[2];
int64_t k = -1;
int64_t l = j + k;
f[2] = l;
int64_t m = 0;
int64_t n = j;
int64_t o = m;
int64_t p = n > o;
int64_t q = 1;
int64_t r = p & q;
if (eqz(r)) goto B_a;
int64_t * s = f[3];
int64_t t = s[0];
int64_t * u = f[4];
u[0] = t;
int64_t v = f[4];
int64_t w = 1;
int64_t x = v + w;
f[4] = x;
int64_t y = f[3];
int64_t z = 1;
int64_t aa = y + z;
f[3] = aa;
;//continue L_b;
}
//unreachable;
B_a:;
int64_t ba = f[5];
return ba;
}

void Fill_Buffer() {
int64_t* a = stack_pointer;
int64_t b = 16;
int64_t * c = a - b;
int64_t d = ld_Rdbfr;
c[2] = d;
int64_t e = inRdbfr;
int64_t f = 2048;
int64_t g = read(d, e, f);
c[3] = g;
int64_t * h = ld_Rdptr;
h[0] = d;
int64_t * i = System_Stream_Flag;
int64_t j = i[0];
if (eqz(j)) goto B_a;
int64_t * k = ld_Rdmax;
int64_t l = k[0];
int64_t m = -2048;
int64_t n = l + m;
k[0] = n;
B_a:;
int64_t o = c[3];
int64_t p = 2048;
int64_t q = o;
int64_t r = p;
int64_t s = q < r;
int64_t t = 1;
int64_t u = s & t;
if (eqz(u)) goto B_b;
int64_t v = c[3];
int64_t w = 0;
int64_t x = v;
int64_t y = w;
int64_t z = x < y;
int64_t aa = 1;
int64_t ba = z & aa;
if (eqz(ba)) goto B_c;
int64_t ca = 0;
c[3] = ca;
B_c:;
while (1) {
int64_t da = c[3];
int64_t ea = 3;
int64_t fa = da & ea;
if (eqz(fa)) goto B_d;
int64_t ga = c[3];
int64_t ha = 1;
int64_t ia = ga + ha;
c[3] = ia;
int64_t ja = ld_Rdbfr;
int64_t * ka = ja + ga;
int64_t la = 0;
ka[0] = la;
;//continue L_e;
}
//unreachable;
B_d:;
while (1) {
int64_t ma = c[3];
int64_t na = 2048;
int64_t oa = ma;
int64_t pa = na;
int64_t qa = oa < pa;
int64_t ra = 1;
int64_t sa = qa & ra;
if (eqz(sa)) goto B_f;
int64_t ta = c[3];
int64_t ua = 1;
int64_t va = ta + ua;
c[3] = va;
int64_t wa = ld_Rdbfr;
int64_t * xa = wa + ta;
int64_t ya = 0;
xa[0] = ya;
int64_t za = c[3];
int64_t ab = za + ua;
c[3] = ab;
int64_t * bb = wa + za;
bb[0] = ya;
int64_t cb = c[3];
int64_t db = cb + ua;
c[3] = db;
int64_t * eb = wa + cb;
eb[0] = ua;
int64_t fb = c[3];
int64_t gb = fb + ua;
c[3] = gb;
int64_t * hb = wa + fb;
int64_t ib = 183;
hb[0] = ib;
;//continue L_g;
}
//unreachable;
B_f:;
B_b:;
int64_t jb = 16;
int64_t* kb = c + jb;
}

int Show_Bits(int a) {
int64_t* b = stack_pointer;
int64_t c = 16;
int64_t * d = b - c;
d[3] = a;
int64_t * e = ld_Bfr;
int64_t f = e[0];
int64_t g = d[3];
int64_t h = 32;
int64_t i = h - g;
int64_t j = 31;
int64_t k = i & j;
int64_t l = f >> k;
return l;
}

int Get_Bits1() {
int64_t a = 1;
int64_t b = Get_Bits(a);
return b;
}

int Get_Bits(int a) {
int64_t* b = stack_pointer;
int64_t c = 16;
int64_t * d = b - c;
d[3] = a;
int64_t e = d[3];
int64_t f = Show_Bits(e);
d[2] = f;
int64_t g = d[3];
Flush_Buffer(g);
int64_t h = d[2];
int64_t i = 16;
int64_t* j = d + i;
return h;
}

void Flush_Buffer(int a) {
int64_t* b = stack_pointer;
int64_t c = 16;
int64_t * d = b - c;
d[3] = a;
int64_t e = d[3];
int64_t * f = ld_Bfr;
int64_t g = f[0];
int64_t h = g << e;
f[0] = h;
int64_t i = d[3];
int64_t * j = ld_Incnt;
int64_t k = j[0];
int64_t l = k - i;
j[0] = l;
d[2] = l;
int64_t m = d[2];
int64_t n = 24;
int64_t o = m;
int64_t p = n;
int64_t q = o <= p;
int64_t r = 1;
int64_t s = q & r;
if (eqz(s)) goto B_a;
int64_t * t = ld_Rdptr;
int64_t u = t[0];
int64_t v = ld_Rdbfr;
int64_t w = 2044;
int64_t x = v + w;
int64_t y = u < x;
int64_t z = 1;
int64_t aa = y & z;
if (eqz(aa)) goto B_c;
while (1) {
int64_t * ba = ld_Rdptr;
int64_t * ca = ba[0];
int64_t da = 1;
int64_t ea = ca + da;
ba[0] = ea;
int64_t fa = ca[0];
int64_t ga = d[2];
int64_t ha = 24;
int64_t ia = ha - ga;
int64_t ja = fa << ia;
int64_t * ka = ld_Bfr;
int64_t la = ka[0];
int64_t ma = la | ja;
ka[0] = ma;
int64_t na = d[2];
int64_t oa = 8;
int64_t pa = na + oa;
d[2] = pa;
int64_t qa = d[2];
int64_t ra = 24;
int64_t sa = qa;
int64_t ta = ra;
int64_t ua = sa <= ta;
int64_t va = 1;
int64_t wa = ua & va;
if (wa) ;//continue L_d;
}
goto B_b;
B_c:;
while (1) {
int64_t * xa = ld_Rdptr;
int64_t ya = xa[0];
int64_t za = ld_Rdbfr;
int64_t ab = 2048;
int64_t bb = za + ab;
int64_t cb = ya >= bb;
int64_t db = 1;
int64_t eb = cb & db;
if (eqz(eb)) goto B_f;
Fill_Buffer();
B_f:;
int64_t * fb = ld_Rdptr;
int64_t * gb = fb[0];
int64_t hb = 1;
int64_t ib = gb + hb;
fb[0] = ib;
int64_t jb = gb[0];
int64_t kb = d[2];
int64_t lb = 24;
int64_t mb = lb - kb;
int64_t nb = jb << mb;
int64_t * ob = ld_Bfr;
int64_t pb = ob[0];
int64_t qb = pb | nb;
ob[0] = qb;
int64_t rb = d[2];
int64_t sb = 8;
int64_t tb = rb + sb;
d[2] = tb;
int64_t ub = d[2];
int64_t vb = 24;
int64_t wb = ub;
int64_t xb = vb;
int64_t yb = wb <= xb;
int64_t zb = 1;
int64_t ac = yb & zb;
if (ac) ;//continue L_e;
}
B_b:;
int64_t bc = d[2];
int64_t * cc = ld_Incnt;
cc[0] = bc;
B_a:;
int64_t dc = 16;
int64_t* ec = d + dc;
}

int Get_motion_code() {
int64_t la;
int64_t bc;
int64_t rd;
int64_t* a = stack_pointer;
int64_t b = 16;
int64_t * c = a - b;
int64_t d = Get_Bits1();
if (eqz(d)) goto B_b;
int64_t e = 0;
c[3] = e;
goto B_a;
B_b:;
int64_t f = 9;
int64_t g = Show_Bits(f);
c[2] = g;
int64_t h = 64;
int64_t i = g;
int64_t j = h;
int64_t k = i >= j;
int64_t l = 1;
int64_t m = k & l;
if (eqz(m)) goto B_c;
int64_t n = c[2];
int64_t o = 6;
int64_t p = n >> o;
c[2] = p;
int64_t q = c[2];
int64_t r = 1;
int64_t s = q << r;
int64_t t = MVtab0;
int64_t * u = t + s;
int64_t v = u[1];
int64_t w = 24;
int64_t x = v << w;
int64_t y = x >> w;
Flush_Buffer(y);
int64_t z = Get_Bits1();
if (eqz(z)) goto B_e;
int64_t aa = c[2];
int64_t ba = 1;
int64_t ca = aa << ba;
int64_t da = MVtab0;
int64_t * ea = da + ca;
int64_t fa = ea[0];
int64_t ga = 24;
int64_t ha = fa << ga;
int64_t ia = ha >> ga;
int64_t ja = 0;
int64_t ka = ja - ia;
la = ka;
goto B_d;
B_e:;
int64_t ma = c[2];
int64_t na = 1;
int64_t oa = ma << na;
int64_t pa = MVtab0;
int64_t * qa = pa + oa;
int64_t ra = qa[0];
int64_t sa = 24;
int64_t ta = ra << sa;
int64_t ua = ta >> sa;
la = ua;
B_d:;
int64_t va = la;
c[3] = va;
goto B_a;
B_c:;
int64_t wa = c[2];
int64_t xa = 24;
int64_t ya = wa;
int64_t za = xa;
int64_t ab = ya >= za;
int64_t bb = 1;
int64_t cb = ab & bb;
if (eqz(cb)) goto B_f;
int64_t db = c[2];
int64_t eb = 3;
int64_t fb = db >> eb;
c[2] = fb;
int64_t gb = c[2];
int64_t hb = 1;
int64_t ib = gb << hb;
int64_t jb = MVtab1;
int64_t * kb = jb + ib;
int64_t lb = kb[1];
int64_t mb = 24;
int64_t nb = lb << mb;
int64_t ob = nb >> mb;
Flush_Buffer(ob);
int64_t pb = Get_Bits1();
if (eqz(pb)) goto B_h;
int64_t qb = c[2];
int64_t rb = 1;
int64_t sb = qb << rb;
int64_t tb = MVtab1;
int64_t * ub = tb + sb;
int64_t vb = ub[0];
int64_t wb = 24;
int64_t xb = vb << wb;
int64_t yb = xb >> wb;
int64_t zb = 0;
int64_t ac = zb - yb;
bc = ac;
goto B_g;
B_h:;
int64_t cc = c[2];
int64_t dc = 1;
int64_t ec = cc << dc;
int64_t fc = MVtab1;
int64_t * gc = fc + ec;
int64_t hc = gc[0];
int64_t ic = 24;
int64_t jc = hc << ic;
int64_t kc = jc >> ic;
bc = kc;
B_g:;
int64_t lc = bc;
c[3] = lc;
goto B_a;
B_f:;
int64_t mc = c[2];
int64_t nc = 12;
int64_t oc = mc - nc;
c[2] = oc;
int64_t pc = 0;
int64_t qc = oc;
int64_t rc = pc;
int64_t sc = qc < rc;
int64_t tc = 1;
int64_t uc = sc & tc;
if (eqz(uc)) goto B_i;
int64_t vc = 0;
c[3] = vc;
goto B_a;
B_i:;
int64_t wc = c[2];
int64_t xc = 1;
int64_t yc = wc << xc;
int64_t zc = MVtab2;
int64_t * ad = zc + yc;
int64_t bd = ad[1];
int64_t cd = 24;
int64_t dd = bd << cd;
int64_t ed = dd >> cd;
Flush_Buffer(ed);
int64_t fd = Get_Bits1();
if (eqz(fd)) goto B_k;
int64_t gd = c[2];
int64_t hd = 1;
int64_t id = gd << hd;
int64_t jd = MVtab2;
int64_t * kd = jd + id;
int64_t ld = kd[0];
int64_t md = 24;
int64_t nd = ld << md;
int64_t od = nd >> md;
int64_t pd = 0;
int64_t qd = pd - od;
rd = qd;
goto B_j;
B_k:;
int64_t sd = c[2];
int64_t td = 1;
int64_t ud = sd << td;
int64_t vd = MVtab2;
int64_t * wd = vd + ud;
int64_t xd = wd[0];
int64_t yd = 24;
int64_t zd = xd << yd;
int64_t ae = zd >> yd;
rd = ae;
B_j:;
int64_t be = rd;
c[3] = be;
B_a:;
int64_t ce = c[3];
int64_t de = 16;
int64_t* ee = c + de;
return ce;
}

int Get_dmvector() {
int64_t* a = stack_pointer;
int64_t b = 16;
int64_t * c = a - b;
int64_t d = 1;
int64_t e = Get_Bits(d);
if (eqz(e)) goto B_b;
int64_t f = 1;
int64_t g = Get_Bits(f);
int64_t h = -1;
int64_t i = 1;
int64_t j = select__if(h, i, g);
c[3] = j;
goto B_a;
B_b:;
int64_t k = 0;
c[3] = k;
B_a:;
int64_t l = c[3];
int64_t m = 16;
int64_t* n = c + m;
return l;
}

void motion_vectors(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) {
int64_t* k = stack_pointer;
int64_t l = 48;
int64_t * m = k - l;
m[11] = a;
m[10] = b;
m[9] = c;
m[8] = d;
m[7] = e;
m[6] = f;
m[5] = g;
m[4] = h;
m[3] = i;
m[2] = j;
int64_t n = m[7];
int64_t o = 1;
int64_t p = n;
int64_t q = o;
int64_t r = p == q;
int64_t s = 1;
int64_t t = r & s;
if (eqz(t)) goto B_b;
int64_t u = m[6];
if (u) goto B_c;
int64_t v = m[3];
if (v) goto B_c;
int64_t w = 1;
int64_t x = Get_Bits(w);
int64_t y = m[9];
int64_t z = m[8];
int64_t aa = 2;
int64_t ba = z << aa;
int64_t * ca = y + ba;
ca[0] = x;
int64_t da = m[9];
int64_t ea = 8;
int64_t fa = da + ea;
int64_t ga = m[8];
int64_t ha = 2;
int64_t ia = ga << ha;
int64_t * ja = fa + ia;
ja[0] = x;
B_c:;
int64_t ka = m[11];
int64_t la = m[8];
int64_t ma = 3;
int64_t na = la << ma;
int64_t oa = ka + na;
int64_t pa = m[10];
int64_t qa = m[5];
int64_t ra = m[4];
int64_t sa = m[3];
int64_t ta = m[2];
int64_t ua = 0;
motion_vector(oa, pa, qa, ra, sa, ta, ua);
int64_t va = m[11];
int64_t wa = m[8];
int64_t xa = 3;
int64_t ya = wa << xa;
int64_t * za = va + ya;
int64_t ab = za[0];
int64_t bb = m[11];
int64_t cb = 16;
int64_t db = bb + cb;
int64_t eb = m[8];
int64_t fb = 3;
int64_t gb = eb << fb;
int64_t * hb = db + gb;
hb[0] = ab;
int64_t ib = m[11];
int64_t jb = m[8];
int64_t kb = 3;
int64_t lb = jb << kb;
int64_t * mb = ib + lb;
int64_t nb = mb[1];
int64_t ob = m[11];
int64_t pb = 16;
int64_t qb = ob + pb;
int64_t rb = m[8];
int64_t sb = 3;
int64_t tb = rb << sb;
int64_t * ub = qb + tb;
ub[1] = nb;
goto B_a;
B_b:;
int64_t vb = 1;
int64_t wb = Get_Bits(vb);
int64_t xb = m[9];
int64_t yb = m[8];
int64_t zb = 2;
int64_t ac = yb << zb;
int64_t * bc = xb + ac;
bc[0] = wb;
int64_t cc = m[11];
int64_t dc = m[8];
int64_t ec = 3;
int64_t fc = dc << ec;
int64_t gc = cc + fc;
int64_t hc = m[10];
int64_t ic = m[5];
int64_t jc = m[4];
int64_t kc = m[3];
int64_t lc = m[2];
int64_t mc = 0;
motion_vector(gc, hc, ic, jc, kc, lc, mc);
int64_t nc = 1;
int64_t oc = Get_Bits(nc);
int64_t pc = m[9];
int64_t qc = 8;
int64_t rc = pc + qc;
int64_t sc = m[8];
int64_t tc = 2;
int64_t uc = sc << tc;
int64_t * vc = rc + uc;
vc[0] = oc;
int64_t wc = m[11];
int64_t xc = 16;
int64_t yc = wc + xc;
int64_t zc = m[8];
int64_t ad = 3;
int64_t bd = zc << ad;
int64_t cd = yc + bd;
int64_t dd = m[10];
int64_t ed = m[5];
int64_t fd = m[4];
int64_t gd = m[3];
int64_t hd = m[2];
int64_t id = 0;
motion_vector(cd, dd, ed, fd, gd, hd, id);
B_a:;
int64_t jd = 48;
int64_t* kd = m + jd;
}

void motion_vector(int a, int b, int c, int d, int e, int f, int g) {
int64_t p;
int64_t fa;
int64_t* h = stack_pointer;
int64_t i = 48;
int64_t * j = h - i;
j[11] = a;
j[10] = b;
j[9] = c;
j[8] = d;
j[7] = e;
j[6] = f;
j[5] = g;
int64_t k = Get_motion_code();
j[4] = k;
int64_t l = j[9];
if (eqz(l)) goto B_b;
int64_t m = j[4];
if (eqz(m)) goto B_b;
int64_t n = j[9];
int64_t o = Get_Bits(n);
p = o;
goto B_a;
B_b:;
int64_t q = 0;
p = q;
B_a:;
int64_t r = p;
j[3] = r;
int64_t s = j[11];
int64_t t = j[9];
int64_t u = j[4];
int64_t v = j[3];
int64_t w = j[5];
decode_motion_vector(s, t, u, v, w);
int64_t x = j[7];
if (eqz(x)) goto B_c;
int64_t y = Get_dmvector();
int64_t * z = j[10];
z[0] = y;
B_c:;
int64_t aa = Get_motion_code();
j[4] = aa;
int64_t ba = j[8];
if (eqz(ba)) goto B_e;
int64_t ca = j[4];
if (eqz(ca)) goto B_e;
int64_t da = j[8];
int64_t ea = Get_Bits(da);
fa = ea;
goto B_d;
B_e:;
int64_t ga = 0;
fa = ga;
B_d:;
int64_t ha = fa;
j[3] = ha;
int64_t ia = j[6];
if (eqz(ia)) goto B_f;
int64_t * ja = j[11];
int64_t ka = ja[1];
int64_t la = 1;
int64_t ma = ka >> la;
ja[1] = ma;
B_f:;
int64_t na = j[11];
int64_t oa = 4;
int64_t pa = na + oa;
int64_t qa = j[8];
int64_t ra = j[4];
int64_t sa = j[3];
int64_t ta = j[5];
decode_motion_vector(pa, qa, ra, sa, ta);
int64_t ua = j[6];
if (eqz(ua)) goto B_g;
int64_t * va = j[11];
int64_t wa = va[1];
int64_t xa = 1;
int64_t ya = wa << xa;
va[1] = ya;
B_g:;
int64_t za = j[7];
if (eqz(za)) goto B_h;
int64_t ab = Get_dmvector();
int64_t * bb = j[10];
bb[1] = ab;
B_h:;
int64_t cb = 48;
int64_t* db = j + cb;
}

void decode_motion_vector(int a, int b, int c, int d, int e) {
int64_t t;
int64_t nc;
int64_t* f = stack_pointer;
int64_t g = 32;
int64_t * h = f - g;
h[7] = a;
h[6] = b;
h[5] = c;
h[4] = d;
h[3] = e;
int64_t i = h[6];
int64_t j = 32;
int64_t k = i % j;
h[6] = k;
int64_t l = h[6];
int64_t m = 16;
int64_t n = m << l;
h[2] = n;
int64_t o = h[3];
if (eqz(o)) goto B_b;
int64_t * p = h[7];
int64_t q = p[0];
int64_t r = 1;
int64_t s = q >> r;
t = s;
goto B_a;
B_b:;
int64_t * u = h[7];
int64_t v = u[0];
t = v;
B_a:;
int64_t w = t;
h[1] = w;
int64_t x = h[5];
int64_t y = 0;
int64_t z = x;
int64_t aa = y;
int64_t ba = z > aa;
int64_t ca = 1;
int64_t da = ba & ca;
if (eqz(da)) goto B_d;
int64_t ea = h[5];
int64_t fa = 1;
int64_t ga = ea - fa;
int64_t ha = h[6];
int64_t ia = ga << ha;
int64_t ja = h[4];
int64_t ka = ia + ja;
int64_t la = 1;
int64_t ma = ka + la;
int64_t na = h[1];
int64_t oa = na + ma;
h[1] = oa;
int64_t pa = h[1];
int64_t qa = h[2];
int64_t ra = pa;
int64_t sa = qa;
int64_t ta = ra >= sa;
int64_t ua = 1;
int64_t va = ta & ua;
if (eqz(va)) goto B_e;
int64_t wa = h[2];
int64_t xa = h[2];
int64_t ya = wa + xa;
int64_t za = h[1];
int64_t ab = za - ya;
h[1] = ab;
B_e:;
goto B_c;
B_d:;
int64_t bb = h[5];
int64_t cb = 0;
int64_t db = bb;
int64_t eb = cb;
int64_t fb = db < eb;
int64_t gb = 1;
int64_t hb = fb & gb;
if (eqz(hb)) goto B_f;
int64_t ib = h[5];
int64_t jb = 0;
int64_t kb = jb - ib;
int64_t lb = 1;
int64_t mb = kb - lb;
int64_t nb = h[6];
int64_t ob = mb << nb;
int64_t pb = h[4];
int64_t qb = ob + pb;
int64_t rb = 1;
int64_t sb = qb + rb;
int64_t tb = h[1];
int64_t ub = tb - sb;
h[1] = ub;
int64_t vb = h[1];
int64_t wb = h[2];
int64_t xb = 0;
int64_t yb = xb - wb;
int64_t zb = vb;
int64_t ac = yb;
int64_t bc = zb < ac;
int64_t cc = 1;
int64_t dc = bc & cc;
if (eqz(dc)) goto B_g;
int64_t ec = h[2];
int64_t fc = h[2];
int64_t gc = ec + fc;
int64_t hc = h[1];
int64_t ic = hc + gc;
h[1] = ic;
B_g:;
B_f:;
B_c:;
int64_t jc = h[3];
if (eqz(jc)) goto B_i;
int64_t kc = h[1];
int64_t lc = 1;
int64_t mc = kc << lc;
nc = mc;
goto B_h;
B_i:;
int64_t oc = h[1];
nc = oc;
B_h:;
int64_t pc = nc;
int64_t * qc = h[7];
qc[0] = pc;
}

void Initialize_Buffer() {
int64_t * a = ld_Incnt;
int64_t b = 0;
a[0] = b;
int64_t c = ld_Rdbfr;
int64_t d = 2048;
int64_t e = c + d;
int64_t * f = ld_Rdptr;
f[0] = e;
int64_t g = f[0];
int64_t * h = ld_Rdmax;
h[0] = g;
int64_t * i = ld_Bfr;
int64_t j = 68157440;
i[0] = j;
int64_t k = 0;
Flush_Buffer(k);
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
int64_t k = 4248;
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