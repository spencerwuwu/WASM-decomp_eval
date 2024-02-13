
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
void kernel_ludcmp(int a, int b, int c, int d, int e);
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

void kernel_ludcmp(int a, int b, int c, int d, int e) {
int64_t* f = stack_pointer;
int64_t g = 48;
int64_t* h = f - g;
h[11] = a;
h[10] = b;
h[9] = c;
h[8] = d;
h[7] = e;
int64_t i = 0;
h[6] = i;
while (1) {
int64_t j = (int64_t)h[6];
int64_t k = (int64_t)h[11];
int64_t l = j;
int64_t m = k;
int64_t n = l < m;
int64_t o = 1;
int64_t p = n & o;
if (eqz(p)) goto B_a;
int64_t q = 0;
h[5] = q;
while (1) {
int64_t r = (int64_t)h[5];
int64_t s = (int64_t)h[6];
int64_t t = r;
int64_t u = s;
int64_t v = t < u;
int64_t w = 1;
int64_t x = v & w;
if (eqz(x)) goto B_c;
int64_t y = (int64_t)h[10];
int64_t z = (int64_t)h[6];
int64_t aa = 16000;
int64_t ba = z * aa;
int64_t ca = y + ba;
int64_t da = (int64_t)h[5];
int64_t ea = 3;
int64_t fa = da << ea;
int64_t * ga = ca + fa;
double ha = ga[0];
h[1] = ha;
int64_t ia = 0;
h[4] = ia;
while (1) {
int64_t ja = (int64_t)h[4];
int64_t ka = (int64_t)h[5];
int64_t la = ja;
int64_t ma = ka;
int64_t na = la < ma;
int64_t oa = 1;
int64_t pa = na & oa;
if (eqz(pa)) goto B_e;
int64_t qa = (int64_t)h[10];
int64_t ra = (int64_t)h[6];
int64_t sa = 16000;
int64_t ta = ra * sa;
int64_t ua = qa + ta;
int64_t va = (int64_t)h[4];
int64_t wa = 3;
int64_t xa = va << wa;
int64_t * ya = ua + xa;
double za = ya[0];
int64_t ab = (int64_t)h[10];
int64_t bb = (int64_t)h[4];
int64_t cb = 16000;
int64_t db = bb * cb;
int64_t eb = ab + db;
int64_t fb = (int64_t)h[5];
int64_t gb = 3;
int64_t hb = fb << gb;
int64_t * ib = eb + hb;
double jb = ib[0];
double kb = (double)h[1];
double lb = -(za);
double mb = lb * jb;
double nb = mb + kb;
h[1] = nb;
int64_t ob = (int64_t)h[4];
int64_t pb = 1;
int64_t qb = ob + pb;
h[4] = qb;
;//continue L_f;
}
//unreachable;
B_e:;
double rb = (double)h[1];
int64_t sb = (int64_t)h[10];
int64_t tb = (int64_t)h[5];
int64_t ub = 16000;
int64_t vb = tb * ub;
int64_t wb = sb + vb;
int64_t xb = (int64_t)h[5];
int64_t yb = 3;
int64_t zb = xb << yb;
int64_t * ac = wb + zb;
double bc = ac[0];
double cc = rb / bc;
int64_t dc = (int64_t)h[10];
int64_t ec = (int64_t)h[6];
int64_t fc = 16000;
int64_t gc = ec * fc;
int64_t hc = dc + gc;
int64_t ic = (int64_t)h[5];
int64_t jc = 3;
int64_t kc = ic << jc;
int64_t * lc = hc + kc;
lc[0] = cc;
int64_t mc = (int64_t)h[5];
int64_t nc = 1;
int64_t oc = mc + nc;
h[5] = oc;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t pc = (int64_t)h[6];
h[5] = pc;
while (1) {
int64_t qc = (int64_t)h[5];
int64_t rc = (int64_t)h[11];
int64_t sc = qc;
int64_t tc = rc;
int64_t uc = sc < tc;
int64_t vc = 1;
int64_t wc = uc & vc;
if (eqz(wc)) goto B_g;
int64_t xc = (int64_t)h[10];
int64_t yc = (int64_t)h[6];
int64_t zc = 16000;
int64_t ad = yc * zc;
int64_t bd = xc + ad;
int64_t cd = (int64_t)h[5];
int64_t dd = 3;
int64_t ed = cd << dd;
int64_t * fd = bd + ed;
double gd = fd[0];
h[1] = gd;
int64_t hd = 0;
h[4] = hd;
while (1) {
int64_t id = (int64_t)h[4];
int64_t jd = (int64_t)h[6];
int64_t kd = id;
int64_t ld = jd;
int64_t md = kd < ld;
int64_t nd = 1;
int64_t od = md & nd;
if (eqz(od)) goto B_i;
int64_t pd = (int64_t)h[10];
int64_t qd = (int64_t)h[6];
int64_t rd = 16000;
int64_t sd = qd * rd;
int64_t td = pd + sd;
int64_t ud = (int64_t)h[4];
int64_t vd = 3;
int64_t wd = ud << vd;
int64_t * xd = td + wd;
double yd = xd[0];
int64_t zd = (int64_t)h[10];
int64_t ae = (int64_t)h[4];
int64_t be = 16000;
int64_t ce = ae * be;
int64_t de = zd + ce;
int64_t ee = (int64_t)h[5];
int64_t fe = 3;
int64_t ge = ee << fe;
int64_t * he = de + ge;
double ie = he[0];
double je = (double)h[1];
double ke = -(yd);
double le = ke * ie;
double me = le + je;
h[1] = me;
int64_t ne = (int64_t)h[4];
int64_t oe = 1;
int64_t pe = ne + oe;
h[4] = pe;
;//continue L_j;
}
//unreachable;
B_i:;
double qe = (double)h[1];
int64_t re = (int64_t)h[10];
int64_t se = (int64_t)h[6];
int64_t te = 16000;
int64_t ue = se * te;
int64_t ve = re + ue;
int64_t we = (int64_t)h[5];
int64_t xe = 3;
int64_t ye = we << xe;
int64_t * ze = ve + ye;
ze[0] = qe;
int64_t af = (int64_t)h[5];
int64_t bf = 1;
int64_t cf = af + bf;
h[5] = cf;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t df = (int64_t)h[6];
int64_t ef = 1;
int64_t ff = df + ef;
h[6] = ff;
;//continue L_b;
}
//unreachable;
B_a:;
int64_t gf = 0;
h[6] = gf;
while (1) {
int64_t hf = (int64_t)h[6];
int64_t _if = (int64_t)h[11];
int64_t jf = hf;
int64_t kf = _if;
int64_t lf = jf < kf;
int64_t mf = 1;
int64_t nf = lf & mf;
if (eqz(nf)) goto B_k;
int64_t of = (int64_t)h[9];
int64_t pf = (int64_t)h[6];
int64_t qf = 3;
int64_t rf = pf << qf;
int64_t * sf = of + rf;
double tf = sf[0];
h[1] = tf;
int64_t uf = 0;
h[5] = uf;
while (1) {
int64_t vf = (int64_t)h[5];
int64_t wf = (int64_t)h[6];
int64_t xf = vf;
int64_t yf = wf;
int64_t zf = xf < yf;
int64_t ag = 1;
int64_t bg = zf & ag;
if (eqz(bg)) goto B_m;
int64_t cg = (int64_t)h[10];
int64_t dg = (int64_t)h[6];
int64_t eg = 16000;
int64_t fg = dg * eg;
int64_t gg = cg + fg;
int64_t hg = (int64_t)h[5];
int64_t ig = 3;
int64_t jg = hg << ig;
int64_t * kg = gg + jg;
double lg = kg[0];
int64_t mg = (int64_t)h[7];
int64_t ng = (int64_t)h[5];
int64_t og = 3;
int64_t pg = ng << og;
int64_t * qg = mg + pg;
double rg = qg[0];
double sg = (double)h[1];
double tg = -(lg);
double ug = tg * rg;
double vg = ug + sg;
h[1] = vg;
int64_t wg = (int64_t)h[5];
int64_t xg = 1;
int64_t yg = wg + xg;
h[5] = yg;
;//continue L_n;
}
//unreachable;
B_m:;
double zg = (double)h[1];
int64_t ah = (int64_t)h[7];
int64_t bh = (int64_t)h[6];
int64_t ch = 3;
int64_t dh = bh << ch;
int64_t * eh = ah + dh;
eh[0] = zg;
int64_t fh = (int64_t)h[6];
int64_t gh = 1;
int64_t hh = fh + gh;
h[6] = hh;
;//continue L_l;
}
//unreachable;
B_k:;
int64_t ih = (int64_t)h[11];
int64_t jh = 1;
int64_t kh = ih - jh;
h[6] = kh;
while (1) {
int64_t lh = (int64_t)h[6];
int64_t mh = 0;
int64_t nh = lh;
int64_t oh = mh;
int64_t ph = nh >= oh;
int64_t qh = 1;
int64_t rh = ph & qh;
if (eqz(rh)) goto B_o;
int64_t sh = (int64_t)h[7];
int64_t th = (int64_t)h[6];
int64_t uh = 3;
int64_t vh = th << uh;
int64_t * wh = sh + vh;
double xh = wh[0];
h[1] = xh;
int64_t yh = (int64_t)h[6];
int64_t zh = 1;
int64_t ai = yh + zh;
h[5] = ai;
while (1) {
int64_t bi = (int64_t)h[5];
int64_t ci = (int64_t)h[11];
int64_t di = bi;
int64_t ei = ci;
int64_t fi = di < ei;
int64_t gi = 1;
int64_t hi = fi & gi;
if (eqz(hi)) goto B_q;
int64_t ii = (int64_t)h[10];
int64_t ji = (int64_t)h[6];
int64_t ki = 16000;
int64_t li = ji * ki;
int64_t mi = ii + li;
int64_t ni = (int64_t)h[5];
int64_t oi = 3;
int64_t pi = ni << oi;
int64_t * qi = mi + pi;
double ri = qi[0];
int64_t si = (int64_t)h[8];
int64_t ti = (int64_t)h[5];
int64_t ui = 3;
int64_t vi = ti << ui;
int64_t * wi = si + vi;
double xi = wi[0];
double yi = (double)h[1];
double zi = -(ri);
double aj = zi * xi;
double bj = aj + yi;
h[1] = bj;
int64_t cj = (int64_t)h[5];
int64_t dj = 1;
int64_t ej = cj + dj;
h[5] = ej;
;//continue L_r;
}
//unreachable;
B_q:;
double fj = (double)h[1];
int64_t gj = (int64_t)h[10];
int64_t hj = (int64_t)h[6];
int64_t ij = 16000;
int64_t jj = hj * ij;
int64_t kj = gj + jj;
int64_t lj = (int64_t)h[6];
int64_t mj = 3;
int64_t nj = lj << mj;
int64_t * oj = kj + nj;
double pj = oj[0];
double qj = fj / pj;
int64_t rj = (int64_t)h[8];
int64_t sj = (int64_t)h[6];
int64_t tj = 3;
int64_t uj = sj << tj;
int64_t * vj = rj + uj;
vj[0] = qj;
int64_t wj = (int64_t)h[6];
int64_t xj = -1;
int64_t yj = wj + xj;
h[6] = yj;
;//continue L_p;
}
//unreachable;
B_o:;
}




int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b);
}
