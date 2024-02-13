
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
void kernel_gramschmidt(int a, int b, int c, int d, int e);
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

void kernel_gramschmidt(int a, int b, int c, int d, int e) {
int64_t* f = stack_pointer;
int64_t g = 48;
int64_t* h = f - g;
h[11] = a;
h[10] = b;
h[9] = c;
h[8] = d;
h[7] = e;
int64_t i = 0;
h[4] = i;
while (1) {
int64_t j = (int64_t)h[4];
int64_t k = (int64_t)h[10];
int64_t l = j;
int64_t m = k;
int64_t n = l < m;
int64_t o = 1;
int64_t p = n & o;
if (eqz(p)) goto B_a;
int64_t q = 0;
double r = f64_convert_i32_s(q);
h[1] = r;
int64_t s = 0;
h[6] = s;
while (1) {
int64_t t = (int64_t)h[6];
int64_t u = (int64_t)h[11];
int64_t v = t;
int64_t w = u;
int64_t x = v < w;
int64_t y = 1;
int64_t z = x & y;
if (eqz(z)) goto B_c;
int64_t aa = (int64_t)h[9];
int64_t ba = (int64_t)h[6];
int64_t ca = 9600;
int64_t da = ba * ca;
int64_t ea = aa + da;
int64_t fa = (int64_t)h[4];
int64_t ga = 3;
int64_t ha = fa << ga;
int64_t * ia = ea + ha;
double ja = ia[0];
int64_t ka = (int64_t)h[9];
int64_t la = (int64_t)h[6];
int64_t ma = 9600;
int64_t na = la * ma;
int64_t oa = ka + na;
int64_t pa = (int64_t)h[4];
int64_t qa = 3;
int64_t ra = pa << qa;
int64_t * sa = oa + ra;
double ta = sa[0];
double ua = (double)h[1];
double va = ja * ta;
double wa = va + ua;
h[1] = wa;
int64_t xa = (int64_t)h[6];
int64_t ya = 1;
int64_t za = xa + ya;
h[6] = za;
;//continue L_d;
}
//unreachable;
B_c:;
double ab = (double)h[1];
double bb = sqrt(ab);
int64_t cb = (int64_t)h[8];
int64_t db = (int64_t)h[4];
int64_t eb = 9600;
int64_t fb = db * eb;
int64_t gb = cb + fb;
int64_t hb = (int64_t)h[4];
int64_t ib = 3;
int64_t jb = hb << ib;
int64_t * kb = gb + jb;
kb[0] = bb;
int64_t lb = 0;
h[6] = lb;
while (1) {
int64_t mb = (int64_t)h[6];
int64_t nb = (int64_t)h[11];
int64_t ob = mb;
int64_t pb = nb;
int64_t qb = ob < pb;
int64_t rb = 1;
int64_t sb = qb & rb;
if (eqz(sb)) goto B_e;
int64_t tb = (int64_t)h[9];
int64_t ub = (int64_t)h[6];
int64_t vb = 9600;
int64_t wb = ub * vb;
int64_t xb = tb + wb;
int64_t yb = (int64_t)h[4];
int64_t zb = 3;
int64_t ac = yb << zb;
int64_t * bc = xb + ac;
double cc = bc[0];
int64_t dc = (int64_t)h[8];
int64_t ec = (int64_t)h[4];
int64_t fc = 9600;
int64_t gc = ec * fc;
int64_t hc = dc + gc;
int64_t ic = (int64_t)h[4];
int64_t jc = 3;
int64_t kc = ic << jc;
int64_t * lc = hc + kc;
double mc = lc[0];
double nc = cc / mc;
int64_t oc = (int64_t)h[7];
int64_t pc = (int64_t)h[6];
int64_t qc = 9600;
int64_t rc = pc * qc;
int64_t sc = oc + rc;
int64_t tc = (int64_t)h[4];
int64_t uc = 3;
int64_t vc = tc << uc;
int64_t * wc = sc + vc;
wc[0] = nc;
int64_t xc = (int64_t)h[6];
int64_t yc = 1;
int64_t zc = xc + yc;
h[6] = zc;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t ad = (int64_t)h[4];
int64_t bd = 1;
int64_t cd = ad + bd;
h[5] = cd;
while (1) {
int64_t dd = (int64_t)h[5];
int64_t ed = (int64_t)h[10];
int64_t fd = dd;
int64_t gd = ed;
int64_t hd = fd < gd;
int64_t id = 1;
int64_t jd = hd & id;
if (eqz(jd)) goto B_g;
int64_t kd = (int64_t)h[8];
int64_t ld = (int64_t)h[4];
int64_t md = 9600;
int64_t nd = ld * md;
int64_t od = kd + nd;
int64_t pd = (int64_t)h[5];
int64_t qd = 3;
int64_t rd = pd << qd;
int64_t * sd = od + rd;
int64_t td = 0;
double ud = f64_convert_i32_s(td);
sd[0] = ud;
int64_t vd = 0;
h[6] = vd;
while (1) {
int64_t wd = (int64_t)h[6];
int64_t xd = (int64_t)h[11];
int64_t yd = wd;
int64_t zd = xd;
int64_t ae = yd < zd;
int64_t be = 1;
int64_t ce = ae & be;
if (eqz(ce)) goto B_i;
int64_t de = (int64_t)h[7];
int64_t ee = (int64_t)h[6];
int64_t fe = 9600;
int64_t ge = ee * fe;
int64_t he = de + ge;
int64_t ie = (int64_t)h[4];
int64_t je = 3;
int64_t ke = ie << je;
int64_t * le = he + ke;
double me = le[0];
int64_t ne = (int64_t)h[9];
int64_t oe = (int64_t)h[6];
int64_t pe = 9600;
int64_t qe = oe * pe;
int64_t re = ne + qe;
int64_t se = (int64_t)h[5];
int64_t te = 3;
int64_t ue = se << te;
int64_t * ve = re + ue;
double we = ve[0];
int64_t xe = (int64_t)h[8];
int64_t ye = (int64_t)h[4];
int64_t ze = 9600;
int64_t af = ye * ze;
int64_t bf = xe + af;
int64_t cf = (int64_t)h[5];
int64_t df = 3;
int64_t ef = cf << df;
int64_t * ff = bf + ef;
double gf = ff[0];
double hf = me * we;
double _if = hf + gf;
ff[0] = _if;
int64_t jf = (int64_t)h[6];
int64_t kf = 1;
int64_t lf = jf + kf;
h[6] = lf;
;//continue L_j;
}
//unreachable;
B_i:;
int64_t mf = 0;
h[6] = mf;
while (1) {
int64_t nf = (int64_t)h[6];
int64_t of = (int64_t)h[11];
int64_t pf = nf;
int64_t qf = of;
int64_t rf = pf < qf;
int64_t sf = 1;
int64_t tf = rf & sf;
if (eqz(tf)) goto B_k;
int64_t uf = (int64_t)h[9];
int64_t vf = (int64_t)h[6];
int64_t wf = 9600;
int64_t xf = vf * wf;
int64_t yf = uf + xf;
int64_t zf = (int64_t)h[5];
int64_t ag = 3;
int64_t bg = zf << ag;
int64_t * cg = yf + bg;
double dg = cg[0];
int64_t eg = (int64_t)h[7];
int64_t fg = (int64_t)h[6];
int64_t gg = 9600;
int64_t hg = fg * gg;
int64_t ig = eg + hg;
int64_t jg = (int64_t)h[4];
int64_t kg = 3;
int64_t lg = jg << kg;
int64_t * mg = ig + lg;
double ng = mg[0];
int64_t og = (int64_t)h[8];
int64_t pg = (int64_t)h[4];
int64_t qg = 9600;
int64_t rg = pg * qg;
int64_t sg = og + rg;
int64_t tg = (int64_t)h[5];
int64_t ug = 3;
int64_t vg = tg << ug;
int64_t * wg = sg + vg;
double xg = wg[0];
double yg = -(ng);
double zg = yg * xg;
double ah = zg + dg;
int64_t bh = (int64_t)h[9];
int64_t ch = (int64_t)h[6];
int64_t dh = 9600;
int64_t eh = ch * dh;
int64_t fh = bh + eh;
int64_t gh = (int64_t)h[5];
int64_t hh = 3;
int64_t ih = gh << hh;
int64_t * jh = fh + ih;
jh[0] = ah;
int64_t kh = (int64_t)h[6];
int64_t lh = 1;
int64_t mh = kh + lh;
h[6] = mh;
;//continue L_l;
}
//unreachable;
B_k:;
int64_t nh = (int64_t)h[5];
int64_t oh = 1;
int64_t ph = nh + oh;
h[5] = ph;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t qh = (int64_t)h[4];
int64_t rh = 1;
int64_t sh = qh + rh;
h[4] = sh;
;//continue L_b;
}
//unreachable;
B_a:;
}




int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b);
}
