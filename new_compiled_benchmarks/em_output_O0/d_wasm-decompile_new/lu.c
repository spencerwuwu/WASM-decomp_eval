

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00A\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";









void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_lu(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 32;
int64_t * e = c - d;
e[7] = a;
e[6] = b;
int64_t f = 0;
e[5] = f;
while (1) {
int64_t g = e[5];
int64_t h = e[7];
int64_t i = g;
int64_t j = h;
int64_t k = i < j;
int64_t l = 1;
int64_t m = k & l;
if (eqz(m)) goto B_a;
int64_t n = 0;
e[4] = n;
while (1) {
int64_t o = e[4];
int64_t p = e[5];
int64_t q = o;
int64_t r = p;
int64_t s = q < r;
int64_t t = 1;
int64_t u = s & t;
if (eqz(u)) goto B_c;
int64_t v = 0;
e[3] = v;
while (1) {
int64_t w = e[3];
int64_t x = e[4];
int64_t y = w;
int64_t z = x;
int64_t aa = y < z;
int64_t ba = 1;
int64_t ca = aa & ba;
if (eqz(ca)) goto B_e;
int64_t da = e[6];
int64_t ea = e[5];
int64_t fa = 16000;
int64_t ga = ea * fa;
int64_t ha = da + ga;
int64_t ia = e[3];
int64_t ja = 3;
int64_t ka = ia << ja;
int64_t * la = ha + ka;
double ma = la[0];
int64_t na = e[6];
int64_t oa = e[3];
int64_t pa = 16000;
int64_t qa = oa * pa;
int64_t ra = na + qa;
int64_t sa = e[4];
int64_t ta = 3;
int64_t ua = sa << ta;
int64_t * va = ra + ua;
double wa = va[0];
int64_t xa = e[6];
int64_t ya = e[5];
int64_t za = 16000;
int64_t ab = ya * za;
int64_t bb = xa + ab;
int64_t cb = e[4];
int64_t db = 3;
int64_t eb = cb << db;
int64_t * fb = bb + eb;
double gb = fb[0];
double hb = -(ma);
double ib = hb * wa;
double jb = ib + gb;
fb[0] = jb;
int64_t kb = e[3];
int64_t lb = 1;
int64_t mb = kb + lb;
e[3] = mb;
//continue L_f;
}
//unreachable;
B_e:;
int64_t nb = e[6];
int64_t ob = e[4];
int64_t pb = 16000;
int64_t qb = ob * pb;
int64_t rb = nb + qb;
int64_t sb = e[4];
int64_t tb = 3;
int64_t ub = sb << tb;
int64_t * vb = rb + ub;
double wb = vb[0];
int64_t xb = e[6];
int64_t yb = e[5];
int64_t zb = 16000;
int64_t ac = yb * zb;
int64_t bc = xb + ac;
int64_t cc = e[4];
int64_t dc = 3;
int64_t ec = cc << dc;
int64_t * fc = bc + ec;
double gc = fc[0];
double hc = gc / wb;
fc[0] = hc;
int64_t ic = e[4];
int64_t jc = 1;
int64_t kc = ic + jc;
e[4] = kc;
//continue L_d;
}
//unreachable;
B_c:;
int64_t lc = e[5];
e[4] = lc;
while (1) {
int64_t mc = e[4];
int64_t nc = e[7];
int64_t oc = mc;
int64_t pc = nc;
int64_t qc = oc < pc;
int64_t rc = 1;
int64_t sc = qc & rc;
if (eqz(sc)) goto B_g;
int64_t tc = 0;
e[3] = tc;
while (1) {
int64_t uc = e[3];
int64_t vc = e[5];
int64_t wc = uc;
int64_t xc = vc;
int64_t yc = wc < xc;
int64_t zc = 1;
int64_t ad = yc & zc;
if (eqz(ad)) goto B_i;
int64_t bd = e[6];
int64_t cd = e[5];
int64_t dd = 16000;
int64_t ed = cd * dd;
int64_t fd = bd + ed;
int64_t gd = e[3];
int64_t hd = 3;
int64_t id = gd << hd;
int64_t * jd = fd + id;
double kd = jd[0];
int64_t ld = e[6];
int64_t md = e[3];
int64_t nd = 16000;
int64_t od = md * nd;
int64_t pd = ld + od;
int64_t qd = e[4];
int64_t rd = 3;
int64_t sd = qd << rd;
int64_t * td = pd + sd;
double ud = td[0];
int64_t vd = e[6];
int64_t wd = e[5];
int64_t xd = 16000;
int64_t yd = wd * xd;
int64_t zd = vd + yd;
int64_t ae = e[4];
int64_t be = 3;
int64_t ce = ae << be;
int64_t * de = zd + ce;
double ee = de[0];
double fe = -(kd);
double ge = fe * ud;
double he = ge + ee;
de[0] = he;
int64_t ie = e[3];
int64_t je = 1;
int64_t ke = ie + je;
e[3] = ke;
//continue L_j;
}
//unreachable;
B_i:;
int64_t le = e[4];
int64_t me = 1;
int64_t ne = le + me;
e[4] = ne;
//continue L_h;
}
//unreachable;
B_g:;
int64_t oe = e[5];
int64_t pe = 1;
int64_t qe = oe + pe;
e[5] = qe;
//continue L_b;
}
//unreachable;
B_a:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 16;
{* e (int,)a (int,)b (int,)c (int64_t)d } = c - d;
stack_pointer = e;
e.d = a;
e.c = b;
int64_t f = 2000;
e.b = f;
long g = 4000000L;
int64_t h = 8;
int64_t i = legalfunc_polybench_alloc_data(g, h);
e.a = i;
int64_t j = e.b;
int64_t k = e.a;
init_array(j, k);
int64_t l = e.b;
int64_t m = e.a;
kernel_lu(l, m);
int64_t n = e.d;
int64_t o = 42;
int64_t p = n;
int64_t q = o;
int64_t r = p > q;
int64_t s = 1;
int64_t t = r & s;
if (eqz(t)) goto B_a;
int64_t * u = e.c;
int64_t v = u[0];
int64_t w = 87;
int64_t x = memory_base;
int64_t y = x + w;
int64_t z = strcmp(v, y);
if (z) goto B_a;
int64_t aa = e.b;
int64_t ba = e.a;
print_array(aa, ba);
B_a:;
int64_t ca = e.a;
free(ca);
int64_t da = 0;
int64_t ea = 16;
int64_t* fa = e + ea;
stack_pointer = fa;
return da;
}

void init_array(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 32;
{ e (int,)a (int,)b (int,)c (int,)d (int,)e (int,)f (int,)g (int64_t)h } =
c - d;
stack_pointer = e;
e.h = a;
e.g = b;
int64_t f = 0;
e.f = f;
while (1) {
int64_t g = e.f;
int64_t h = e.h;
int64_t i = g;
int64_t j = h;
int64_t k = i < j;
int64_t l = 1;
int64_t m = k & l;
if (eqz(m)) goto B_a;
int64_t n = 0;
e.e = n;
while (1) {
int64_t o = e.e;
int64_t p = e.f;
int64_t q = o;
int64_t r = p;
int64_t s = q <= r;
int64_t t = 1;
int64_t u = s & t;
if (eqz(u)) goto B_c;
int64_t v = e.e;
int64_t w = 0;
int64_t x = w - v;
int64_t y = e.h;
int64_t z = x % y;
double aa = f64_convert_i32_s(z);
int64_t ba = e.h;
double ca = f64_convert_i32_s(ba);
double da = aa / ca;
double ea = 1.0;
double fa = da + ea;
int64_t ga = e.g;
int64_t ha = e.f;
int64_t ia = 16000;
int64_t ja = ha * ia;
int64_t ka = ga + ja;
int64_t la = e.e;
int64_t ma = 3;
int64_t na = la << ma;
int64_t * oa = ka + na;
oa[0] = fa;
int64_t pa = e.e;
int64_t qa = 1;
int64_t ra = pa + qa;
e.e = ra;
//continue L_d;
}
//unreachable;
B_c:;
int64_t sa = e.f;
int64_t ta = 1;
int64_t ua = sa + ta;
e.e = ua;
while (1) {
int64_t va = e.e;
int64_t wa = e.h;
int64_t xa = va;
int64_t ya = wa;
int64_t za = xa < ya;
int64_t ab = 1;
int64_t bb = za & ab;
if (eqz(bb)) goto B_e;
int64_t cb = e.g;
int64_t db = e.f;
int64_t eb = 16000;
int64_t fb = db * eb;
int64_t gb = cb + fb;
int64_t hb = e.e;
int64_t ib = 3;
int64_t jb = hb << ib;
int64_t * kb = gb + jb;
int64_t lb = 0;
double mb = f64_convert_i32_s(lb);
kb[0] = mb;
int64_t nb = e.e;
int64_t ob = 1;
int64_t pb = nb + ob;
e.e = pb;
//continue L_f;
}
//unreachable;
B_e:;
int64_t qb = e.g;
int64_t rb = e.f;
int64_t sb = 16000;
int64_t tb = rb * sb;
int64_t ub = qb + tb;
int64_t vb = e.f;
int64_t wb = 3;
int64_t xb = vb << wb;
int64_t * yb = ub + xb;
double zb = 1.0;
yb[0] = zb;
int64_t ac = e.f;
int64_t bc = 1;
int64_t cc = ac + bc;
e.f = cc;
//continue L_b;
}
//unreachable;
B_a:;
long dc = 4000000L;
int64_t ec = 8;
int64_t fc = legalfunc_polybench_alloc_data(dc, ec);
e.a = fc;
int64_t gc = 0;
e.d = gc;
while (1) {
int64_t hc = e.d;
int64_t ic = e.h;
int64_t jc = hc;
int64_t kc = ic;
int64_t lc = jc < kc;
int64_t mc = 1;
int64_t nc = lc & mc;
if (eqz(nc)) goto B_g;
int64_t oc = 0;
e.c = oc;
while (1) {
int64_t pc = e.c;
int64_t qc = e.h;
int64_t rc = pc;
int64_t sc = qc;
int64_t tc = rc < sc;
int64_t uc = 1;
int64_t vc = tc & uc;
if (eqz(vc)) goto B_i;
int64_t wc = e.a;
int64_t xc = e.d;
int64_t yc = 16000;
int64_t zc = xc * yc;
int64_t ad = wc + zc;
int64_t bd = e.c;
int64_t cd = 3;
int64_t dd = bd << cd;
int64_t * ed = ad + dd;
int64_t fd = 0;
double gd = f64_convert_i32_s(fd);
ed[0] = gd;
int64_t hd = e.c;
int64_t id = 1;
int64_t jd = hd + id;
e.c = jd;
//continue L_j;
}
//unreachable;
B_i:;
int64_t kd = e.d;
int64_t ld = 1;
int64_t md = kd + ld;
e.d = md;
//continue L_h;
}
//unreachable;
B_g:;
int64_t nd = 0;
e.b = nd;
while (1) {
int64_t od = e.b;
int64_t pd = e.h;
int64_t qd = od;
int64_t rd = pd;
int64_t sd = qd < rd;
int64_t td = 1;
int64_t ud = sd & td;
if (eqz(ud)) goto B_k;
int64_t vd = 0;
e.d = vd;
while (1) {
int64_t wd = e.d;
int64_t xd = e.h;
int64_t yd = wd;
int64_t zd = xd;
int64_t ae = yd < zd;
int64_t be = 1;
int64_t ce = ae & be;
if (eqz(ce)) goto B_m;
int64_t de = 0;
e.c = de;
while (1) {
int64_t ee = e.c;
int64_t fe = e.h;
int64_t ge = ee;
int64_t he = fe;
int64_t ie = ge < he;
int64_t je = 1;
int64_t ke = ie & je;
if (eqz(ke)) goto B_o;
int64_t le = e.g;
int64_t me = e.d;
int64_t ne = 16000;
int64_t oe = me * ne;
int64_t pe = le + oe;
int64_t qe = e.b;
int64_t re = 3;
int64_t se = qe << re;
int64_t * te = pe + se;
double ue = te[0];
int64_t ve = e.g;
int64_t we = e.c;
int64_t xe = 16000;
int64_t ye = we * xe;
int64_t ze = ve + ye;
int64_t af = e.b;
int64_t bf = 3;
int64_t cf = af << bf;
int64_t * df = ze + cf;
double ef = df[0];
int64_t ff = e.a;
int64_t gf = e.d;
int64_t hf = 16000;
int64_t _if = gf * hf;
int64_t jf = ff + _if;
int64_t kf = e.c;
int64_t lf = 3;
int64_t mf = kf << lf;
int64_t * nf = jf + mf;
double of = nf[0];
double pf = ue * ef;
double qf = pf + of;
nf[0] = qf;
int64_t rf = e.c;
int64_t sf = 1;
int64_t tf = rf + sf;
e.c = tf;
//continue L_p;
}
//unreachable;
B_o:;
int64_t uf = e.d;
int64_t vf = 1;
int64_t wf = uf + vf;
e.d = wf;
//continue L_n;
}
//unreachable;
B_m:;
int64_t xf = e.b;
int64_t yf = 1;
int64_t zf = xf + yf;
e.b = zf;
//continue L_l;
}
//unreachable;
B_k:;
int64_t ag = 0;
e.d = ag;
while (1) {
int64_t bg = e.d;
int64_t cg = e.h;
int64_t dg = bg;
int64_t eg = cg;
int64_t fg = dg < eg;
int64_t gg = 1;
int64_t hg = fg & gg;
if (eqz(hg)) goto B_q;
int64_t ig = 0;
e.c = ig;
while (1) {
int64_t jg = e.c;
int64_t kg = e.h;
int64_t lg = jg;
int64_t mg = kg;
int64_t ng = lg < mg;
int64_t og = 1;
int64_t pg = ng & og;
if (eqz(pg)) goto B_s;
int64_t qg = e.a;
int64_t rg = e.d;
int64_t sg = 16000;
int64_t tg = rg * sg;
int64_t ug = qg + tg;
int64_t vg = e.c;
int64_t wg = 3;
int64_t xg = vg << wg;
int64_t * yg = ug + xg;
double zg = yg[0];
int64_t ah = e.g;
int64_t bh = e.d;
int64_t ch = 16000;
int64_t dh = bh * ch;
int64_t eh = ah + dh;
int64_t fh = e.c;
int64_t gh = 3;
int64_t hh = fh << gh;
int64_t * ih = eh + hh;
ih[0] = zg;
int64_t jh = e.c;
int64_t kh = 1;
int64_t lh = jh + kh;
e.c = lh;
//continue L_t;
}
//unreachable;
B_s:;
int64_t mh = e.d;
int64_t nh = 1;
int64_t oh = mh + nh;
e.d = oh;
//continue L_r;
}
//unreachable;
B_q:;
int64_t ph = e.a;
free(ph);
int64_t qh = 32;
int64_t* rh = e + qh;
stack_pointer = rh;
}

void print_array(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 64;
int64_t* e = c - d;
stack_pointer = e;
e[15] = a;
e[14] = b;
int64_t * f = stderr;
int64_t g = f[0];
int64_t h = 42;
int64_t i = memory_base;
int64_t j = i + h;
int64_t k = 0;
fprintf(g, j, k);
int64_t l = f[0];
int64_t m = 15;
int64_t n = memory_base;
int64_t o = n + m;
e[8] = o;
int64_t p = 0;
int64_t q = n + p;
int64_t r = 32;
int64_t* s = e + r;
fprintf(l, q, s);
int64_t t = 0;
e[13] = t;
while (1) {
int64_t u = (int64_t)e[13];
int64_t v = (int64_t)e[15];
int64_t w = u;
int64_t x = v;
int64_t y = w < x;
int64_t z = 1;
int64_t aa = y & z;
if (eqz(aa)) goto B_a;
int64_t ba = 0;
e[12] = ba;
while (1) {
int64_t ca = (int64_t)e[12];
int64_t da = (int64_t)e[15];
int64_t ea = ca;
int64_t fa = da;
int64_t* ga = ea < fa;
int64_t ha = 1;
int64_t* ia = ga & ha;
if (eqz(ia)) goto B_c;
int64_t ja = (int64_t)e[13];
int64_t ka = (int64_t)e[15];
int64_t la = ja * ka;
int64_t ma = (int64_t)e[12];
int64_t na = la + ma;
int64_t oa = 20;
int64_t pa = na % oa;
if (pa) goto B_e;
int64_t * qa = stderr;
int64_t ra = qa[0];
int64_t sa = 86;
int64_t ta = memory_base;
int64_t ua = ta + sa;
int64_t va = 0;
fprintf(ra, ua, va);
B_e:;
int64_t * wa = stderr;
int64_t xa = wa[0];
int64_t ya = (int64_t)e[14];
int64_t za = (int64_t)e[13];
int64_t ab = 16000;
int64_t bb = za * ab;
int64_t cb = ya + bb;
int64_t db = (int64_t)e[12];
int64_t eb = 3;
int64_t fb = db << eb;
int64_t * gb = cb + fb;
double hb = gb[0];
e[0] = hb;
int64_t ib = 17;
int64_t jb = memory_base;
int64_t kb = jb + ib;
fprintf(xa, kb, e);
int64_t lb = (int64_t)e[12];
int64_t mb = 1;
int64_t nb = lb + mb;
e[12] = nb;
//continue L_d;
}
//unreachable;
B_c:;
int64_t ob = (int64_t)e[13];
int64_t pb = 1;
int64_t qb = ob + pb;
e[13] = qb;
//continue L_b;
}
//unreachable;
B_a:;
int64_t * rb = stderr;
int64_t sb = rb[0];
int64_t tb = 15;
int64_t ub = memory_base;
int64_t vb = ub + tb;
e[4] = vb;
int64_t wb = 25;
int64_t xb = ub + wb;
int64_t yb = 16;
int64_t* zb = e + yb;
fprintf(sb, xb, zb);
int64_t ac = rb[0];
int64_t bc = 65;
int64_t cc = memory_base;
int64_t dc = cc + bc;
int64_t ec = 0;
fprintf(ac, dc, ec);
int64_t fc = 64;
int64_t* gc = e + fc;
stack_pointer = gc;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}