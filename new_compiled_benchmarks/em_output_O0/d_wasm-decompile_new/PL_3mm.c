
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

    int _fprintf(int a, int b, int c);
int _strcmp(int a, int b);
void _free(int a);
int legalimport_polybench_alloc_data(int a, int b, int c);
void wasm_call_ctors();
void wasm_apply_data_relocs();
void kernel_3mm(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l);
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



void kernel_3mm(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l) {
int64_t* m = stack_pointer;
int64_t n = 64;
int64_t * o = m - n;
o[15] = a;
o[14] = b;
o[13] = c;
o[12] = d;
o[11] = e;
o[10] = f;
o[9] = g;
o[8] = h;
o[7] = i;
o[6] = j;
o[5] = k;
o[4] = l;
int64_t p = 0;
o[3] = p;
while (1) {
int64_t q = o[3];
int64_t r = o[15];
int64_t s = q;
int64_t t = r;
int64_t u = s < t;
int64_t v = 1;
int64_t w = u & v;
if (eqz(w)) goto B_a;
int64_t x = 0;
o[2] = x;
while (1) {
int64_t y = o[2];
int64_t z = o[14];
int64_t aa = y;
int64_t ba = z;
int64_t ca = aa < ba;
int64_t da = 1;
int64_t ea = ca & da;
if (eqz(ea)) goto B_c;
int64_t fa = o[10];
int64_t ga = o[3];
int64_t ha = 7200;
int64_t ia = ga * ha;
int64_t ja = fa + ia;
int64_t ka = o[2];
int64_t la = 3;
int64_t ma = ka << la;
int64_t * na = ja + ma;
int64_t oa = 0;
double pa = f64_convert_i32_s(oa);
na[0] = pa;
int64_t qa = 0;
o[1] = qa;
while (1) {
int64_t ra = o[1];
int64_t sa = o[13];
int64_t ta = ra;
int64_t ua = sa;
int64_t va = ta < ua;
int64_t wa = 1;
int64_t xa = va & wa;
if (eqz(xa)) goto B_e;
int64_t ya = o[9];
int64_t za = o[3];
int64_t ab = 8000;
int64_t bb = za * ab;
int64_t cb = ya + bb;
int64_t db = o[1];
int64_t eb = 3;
int64_t fb = db << eb;
int64_t * gb = cb + fb;
double hb = gb[0];
int64_t ib = o[8];
int64_t jb = o[1];
int64_t kb = 7200;
int64_t lb = jb * kb;
int64_t mb = ib + lb;
int64_t nb = o[2];
int64_t ob = 3;
int64_t pb = nb << ob;
int64_t * qb = mb + pb;
double rb = qb[0];
int64_t sb = o[10];
int64_t tb = o[3];
int64_t ub = 7200;
int64_t vb = tb * ub;
int64_t wb = sb + vb;
int64_t xb = o[2];
int64_t yb = 3;
int64_t zb = xb << yb;
int64_t * ac = wb + zb;
double bc = ac[0];
double cc = hb * rb;
double dc = cc + bc;
ac[0] = dc;
int64_t ec = o[1];
int64_t fc = 1;
int64_t gc = ec + fc;
o[1] = gc;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t hc = o[2];
int64_t ic = 1;
int64_t jc = hc + ic;
o[2] = jc;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t kc = o[3];
int64_t lc = 1;
int64_t mc = kc + lc;
o[3] = mc;
;//continue L_b;
}
//unreachable;
B_a:;
int64_t nc = 0;
o[3] = nc;
while (1) {
int64_t oc = o[3];
int64_t pc = o[14];
int64_t qc = oc;
int64_t rc = pc;
int64_t sc = qc < rc;
int64_t tc = 1;
int64_t uc = sc & tc;
if (eqz(uc)) goto B_g;
int64_t vc = 0;
o[2] = vc;
while (1) {
int64_t wc = o[2];
int64_t xc = o[12];
int64_t yc = wc;
int64_t zc = xc;
int64_t ad = yc < zc;
int64_t bd = 1;
int64_t cd = ad & bd;
if (eqz(cd)) goto B_i;
int64_t dd = o[7];
int64_t ed = o[3];
int64_t fd = 8800;
int64_t gd = ed * fd;
int64_t hd = dd + gd;
int64_t id = o[2];
int64_t jd = 3;
int64_t kd = id << jd;
int64_t * ld = hd + kd;
int64_t md = 0;
double nd = f64_convert_i32_s(md);
ld[0] = nd;
int64_t od = 0;
o[1] = od;
while (1) {
int64_t pd = o[1];
int64_t qd = o[11];
int64_t rd = pd;
int64_t sd = qd;
int64_t td = rd < sd;
int64_t ud = 1;
int64_t vd = td & ud;
if (eqz(vd)) goto B_k;
int64_t wd = o[6];
int64_t xd = o[3];
int64_t yd = 9600;
int64_t zd = xd * yd;
int64_t ae = wd + zd;
int64_t be = o[1];
int64_t ce = 3;
int64_t de = be << ce;
int64_t * ee = ae + de;
double fe = ee[0];
int64_t ge = o[5];
int64_t he = o[1];
int64_t ie = 8800;
int64_t je = he * ie;
int64_t ke = ge + je;
int64_t le = o[2];
int64_t me = 3;
int64_t ne = le << me;
int64_t * oe = ke + ne;
double pe = oe[0];
int64_t qe = o[7];
int64_t re = o[3];
int64_t se = 8800;
int64_t te = re * se;
int64_t ue = qe + te;
int64_t ve = o[2];
int64_t we = 3;
int64_t xe = ve << we;
int64_t * ye = ue + xe;
double ze = ye[0];
double af = fe * pe;
double bf = af + ze;
ye[0] = bf;
int64_t cf = o[1];
int64_t df = 1;
int64_t ef = cf + df;
o[1] = ef;
;//continue L_l;
}
//unreachable;
B_k:;
int64_t ff = o[2];
int64_t gf = 1;
int64_t hf = ff + gf;
o[2] = hf;
;//continue L_j;
}
//unreachable;
B_i:;
int64_t _if = o[3];
int64_t jf = 1;
int64_t kf = _if + jf;
o[3] = kf;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t lf = 0;
o[3] = lf;
while (1) {
int64_t mf = o[3];
int64_t nf = o[15];
int64_t of = mf;
int64_t pf = nf;
int64_t qf = of < pf;
int64_t rf = 1;
int64_t sf = qf & rf;
if (eqz(sf)) goto B_m;
int64_t tf = 0;
o[2] = tf;
while (1) {
int64_t uf = o[2];
int64_t vf = o[12];
int64_t wf = uf;
int64_t xf = vf;
int64_t yf = wf < xf;
int64_t zf = 1;
int64_t ag = yf & zf;
if (eqz(ag)) goto B_o;
int64_t bg = o[4];
int64_t cg = o[3];
int64_t dg = 8800;
int64_t eg = cg * dg;
int64_t fg = bg + eg;
int64_t gg = o[2];
int64_t hg = 3;
int64_t ig = gg << hg;
int64_t * jg = fg + ig;
int64_t kg = 0;
double lg = f64_convert_i32_s(kg);
jg[0] = lg;
int64_t mg = 0;
o[1] = mg;
while (1) {
int64_t ng = o[1];
int64_t og = o[14];
int64_t pg = ng;
int64_t qg = og;
int64_t rg = pg < qg;
int64_t sg = 1;
int64_t tg = rg & sg;
if (eqz(tg)) goto B_q;
int64_t ug = o[10];
int64_t vg = o[3];
int64_t wg = 7200;
int64_t xg = vg * wg;
int64_t yg = ug + xg;
int64_t zg = o[1];
int64_t ah = 3;
int64_t bh = zg << ah;
int64_t * ch = yg + bh;
double dh = ch[0];
int64_t eh = o[7];
int64_t fh = o[1];
int64_t gh = 8800;
int64_t hh = fh * gh;
int64_t ih = eh + hh;
int64_t jh = o[2];
int64_t kh = 3;
int64_t lh = jh << kh;
int64_t * mh = ih + lh;
double nh = mh[0];
int64_t oh = o[4];
int64_t ph = o[3];
int64_t qh = 8800;
int64_t rh = ph * qh;
int64_t sh = oh + rh;
int64_t th = o[2];
int64_t uh = 3;
int64_t vh = th << uh;
int64_t * wh = sh + vh;
double xh = wh[0];
double yh = dh * nh;
double zh = yh + xh;
wh[0] = zh;
int64_t ai = o[1];
int64_t bi = 1;
int64_t ci = ai + bi;
o[1] = ci;
;//continue L_r;
}
//unreachable;
B_q:;
int64_t di = o[2];
int64_t ei = 1;
int64_t fi = di + ei;
o[2] = fi;
;//continue L_p;
}
//unreachable;
B_o:;
int64_t gi = o[3];
int64_t hi = 1;
int64_t ii = gi + hi;
o[3] = ii;
;//continue L_n;
}
//unreachable;
B_m:;
}


int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b);
}
