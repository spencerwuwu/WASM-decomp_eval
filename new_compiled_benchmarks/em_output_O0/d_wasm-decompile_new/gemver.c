
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

    int _strcmp(int a, int b);
void _free(int a);
int _fprintf(int a, int b, int c);
int legalimport_polybench_alloc_data(int a, int b, int c);
void wasm_call_ctors();
void wasm_apply_data_relocs();
void kernel_gemver(int a, double b, double c, int d, int e, int f, int g, int h, int i, int j, int k, int l);
int legalfunc_polybench_alloc_data(long a, int b);


int64_t stack[100000];
int64_t *stack_pointer = stack + 100000;
int64_t *memory_base;
int64_t *table_base;
;


;

;

;

;

void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_gemver(int a, double b, double c, int d, int e, int f, int g, int h, int i, int j, int k, int l) {
int64_t* m = stack_pointer;
int64_t n = 80;
int64_t* o = m - n;
o[19] = a;
o[8] = b;
o[7] = c;
o[13] = d;
o[12] = e;
o[11] = f;
o[10] = g;
o[9] = h;
o[8] = i;
o[7] = j;
o[6] = k;
o[5] = l;
int64_t p = 0;
o[4] = p;
while (1) {
int64_t q = (int64_t)o[4];
int64_t r = (int64_t)o[19];
int64_t s = q;
int64_t t = r;
int64_t u = s < t;
int64_t v = 1;
int64_t w = u & v;
if (eqz(w)) goto B_a;
int64_t x = 0;
o[3] = x;
while (1) {
int64_t y = (int64_t)o[3];
int64_t z = (int64_t)o[19];
int64_t aa = y;
int64_t ba = z;
int64_t ca = aa < ba;
int64_t da = 1;
int64_t ea = ca & da;
if (eqz(ea)) goto B_c;
int64_t fa = (int64_t)o[13];
int64_t ga = (int64_t)o[4];
int64_t ha = 16000;
int64_t ia = ga * ha;
int64_t ja = fa + ia;
int64_t ka = (int64_t)o[3];
int64_t la = 3;
int64_t ma = ka << la;
int64_t * na = ja + ma;
double oa = na[0];
int64_t pa = (int64_t)o[12];
int64_t qa = (int64_t)o[4];
int64_t ra = 3;
int64_t sa = qa << ra;
int64_t * ta = pa + sa;
double ua = ta[0];
int64_t va = (int64_t)o[11];
int64_t wa = (int64_t)o[3];
int64_t xa = 3;
int64_t ya = wa << xa;
int64_t * za = va + ya;
double ab = za[0];
double bb = ua * ab;
double cb = bb + oa;
int64_t db = (int64_t)o[10];
int64_t eb = (int64_t)o[4];
int64_t fb = 3;
int64_t gb = eb << fb;
int64_t * hb = db + gb;
double ib = hb[0];
int64_t jb = (int64_t)o[9];
int64_t kb = (int64_t)o[3];
int64_t lb = 3;
int64_t mb = kb << lb;
int64_t * nb = jb + mb;
double ob = nb[0];
double pb = ib * ob;
double qb = pb + cb;
int64_t rb = (int64_t)o[13];
int64_t sb = (int64_t)o[4];
int64_t tb = 16000;
int64_t ub = sb * tb;
int64_t vb = rb + ub;
int64_t wb = (int64_t)o[3];
int64_t xb = 3;
int64_t yb = wb << xb;
int64_t * zb = vb + yb;
zb[0] = qb;
int64_t ac = (int64_t)o[3];
int64_t bc = 1;
int64_t cc = ac + bc;
o[3] = cc;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t dc = (int64_t)o[4];
int64_t ec = 1;
int64_t fc = dc + ec;
o[4] = fc;
;//continue L_b;
}
//unreachable;
B_a:;
int64_t gc = 0;
o[4] = gc;
while (1) {
int64_t hc = (int64_t)o[4];
int64_t ic = (int64_t)o[19];
int64_t jc = hc;
int64_t kc = ic;
int64_t lc = jc < kc;
int64_t mc = 1;
int64_t nc = lc & mc;
if (eqz(nc)) goto B_e;
int64_t oc = 0;
o[3] = oc;
while (1) {
int64_t pc = (int64_t)o[3];
int64_t qc = (int64_t)o[19];
int64_t rc = pc;
int64_t sc = qc;
int64_t tc = rc < sc;
int64_t uc = 1;
int64_t vc = tc & uc;
if (eqz(vc)) goto B_g;
int64_t wc = (int64_t)o[7];
int64_t xc = (int64_t)o[4];
int64_t yc = 3;
int64_t zc = xc << yc;
int64_t * ad = wc + zc;
double bd = ad[0];
double cd = (double)o[7];
int64_t dd = (int64_t)o[13];
int64_t ed = (int64_t)o[3];
int64_t fd = 16000;
int64_t gd = ed * fd;
int64_t hd = dd + gd;
int64_t id = (int64_t)o[4];
int64_t jd = 3;
int64_t kd = id << jd;
int64_t * ld = hd + kd;
double md = ld[0];
double nd = cd * md;
int64_t od = (int64_t)o[6];
int64_t pd = (int64_t)o[3];
int64_t qd = 3;
int64_t rd = pd << qd;
int64_t * sd = od + rd;
double td = sd[0];
double ud = nd * td;
double vd = ud + bd;
int64_t wd = (int64_t)o[7];
int64_t xd = (int64_t)o[4];
int64_t yd = 3;
int64_t zd = xd << yd;
int64_t * ae = wd + zd;
ae[0] = vd;
int64_t be = (int64_t)o[3];
int64_t ce = 1;
int64_t de = be + ce;
o[3] = de;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t ee = (int64_t)o[4];
int64_t fe = 1;
int64_t ge = ee + fe;
o[4] = ge;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t he = 0;
o[4] = he;
while (1) {
int64_t ie = (int64_t)o[4];
int64_t je = (int64_t)o[19];
int64_t ke = ie;
int64_t le = je;
int64_t me = ke < le;
int64_t ne = 1;
int64_t oe = me & ne;
if (eqz(oe)) goto B_i;
int64_t pe = (int64_t)o[7];
int64_t qe = (int64_t)o[4];
int64_t re = 3;
int64_t se = qe << re;
int64_t * te = pe + se;
double ue = te[0];
int64_t ve = (int64_t)o[5];
int64_t we = (int64_t)o[4];
int64_t xe = 3;
int64_t ye = we << xe;
int64_t * ze = ve + ye;
double af = ze[0];
double bf = ue + af;
int64_t cf = (int64_t)o[7];
int64_t df = (int64_t)o[4];
int64_t ef = 3;
int64_t ff = df << ef;
int64_t * gf = cf + ff;
gf[0] = bf;
int64_t hf = (int64_t)o[4];
int64_t _if = 1;
int64_t jf = hf + _if;
o[4] = jf;
;//continue L_j;
}
//unreachable;
B_i:;
int64_t kf = 0;
o[4] = kf;
while (1) {
int64_t lf = (int64_t)o[4];
int64_t mf = (int64_t)o[19];
int64_t nf = lf;
int64_t of = mf;
int64_t pf = nf < of;
int64_t qf = 1;
int64_t rf = pf & qf;
if (eqz(rf)) goto B_k;
int64_t sf = 0;
o[3] = sf;
while (1) {
int64_t tf = (int64_t)o[3];
int64_t uf = (int64_t)o[19];
int64_t vf = tf;
int64_t wf = uf;
int64_t xf = vf < wf;
int64_t yf = 1;
int64_t zf = xf & yf;
if (eqz(zf)) goto B_m;
int64_t ag = (int64_t)o[8];
int64_t bg = (int64_t)o[4];
int64_t cg = 3;
int64_t dg = bg << cg;
int64_t * eg = ag + dg;
double fg = eg[0];
double gg = (double)o[8];
int64_t hg = (int64_t)o[13];
int64_t ig = (int64_t)o[4];
int64_t jg = 16000;
int64_t kg = ig * jg;
int64_t lg = hg + kg;
int64_t mg = (int64_t)o[3];
int64_t ng = 3;
int64_t og = mg << ng;
int64_t * pg = lg + og;
double qg = pg[0];
double rg = gg * qg;
int64_t sg = (int64_t)o[7];
int64_t tg = (int64_t)o[3];
int64_t ug = 3;
int64_t vg = tg << ug;
int64_t * wg = sg + vg;
double xg = wg[0];
double yg = rg * xg;
double zg = yg + fg;
int64_t ah = (int64_t)o[8];
int64_t bh = (int64_t)o[4];
int64_t ch = 3;
int64_t dh = bh << ch;
int64_t * eh = ah + dh;
eh[0] = zg;
int64_t fh = (int64_t)o[3];
int64_t gh = 1;
int64_t hh = fh + gh;
o[3] = hh;
;//continue L_n;
}
//unreachable;
B_m:;
int64_t ih = (int64_t)o[4];
int64_t jh = 1;
int64_t kh = ih + jh;
o[4] = kh;
;//continue L_l;
}
//unreachable;
B_k:;
}




int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b);
}
