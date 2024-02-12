

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00G\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";









void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void init_array(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
int64_t* j = stack_pointer;
int64_t k = 48;
int64_t * l = j - k;
l[11] = a;
l[10] = b;
l[9] = c;
l[8] = d;
l[7] = e;
l[6] = f;
l[5] = g;
l[4] = h;
l[3] = i;
int64_t m = 0;
l[2] = m;
while (1) {
int64_t n = l[2];
int64_t o = l[11];
int64_t p = n;
int64_t q = o;
int64_t r = p < q;
int64_t s = 1;
int64_t t = r & s;
if (eqz(t)) goto B_a;
int64_t u = 0;
l[1] = u;
while (1) {
int64_t v = l[1];
int64_t w = l[9];
int64_t x = v;
int64_t y = w;
int64_t z = x < y;
int64_t aa = 1;
int64_t ba = z & aa;
if (eqz(ba)) goto B_c;
int64_t ca = l[2];
int64_t da = l[1];
int64_t ea = ca * da;
int64_t fa = 1;
int64_t ga = ea + fa;
int64_t ha = l[11];
int64_t ia = ga % ha;
double ja = f64_convert_i32_s(ia);
int64_t ka = l[11];
int64_t la = 5;
int64_t ma = ka * la;
double na = f64_convert_i32_s(ma);
double oa = ja / na;
int64_t pa = l[6];
int64_t qa = l[2];
int64_t ra = 8000;
int64_t sa = qa * ra;
int64_t ta = pa + sa;
int64_t ua = l[1];
int64_t va = 3;
int64_t wa = ua << va;
int64_t * xa = ta + wa;
xa[0] = oa;
int64_t ya = l[1];
int64_t za = 1;
int64_t ab = ya + za;
l[1] = ab;
//continue L_d;
}
//unreachable;
B_c:;
int64_t bb = l[2];
int64_t cb = 1;
int64_t db = bb + cb;
l[2] = db;
//continue L_b;
}
//unreachable;
B_a:;
int64_t eb = 0;
l[2] = eb;
while (1) {
int64_t fb = l[2];
int64_t gb = l[9];
int64_t hb = fb;
int64_t ib = gb;
int64_t jb = hb < ib;
int64_t kb = 1;
int64_t lb = jb & kb;
if (eqz(lb)) goto B_e;
int64_t mb = 0;
l[1] = mb;
while (1) {
int64_t nb = l[1];
int64_t ob = l[10];
int64_t pb = nb;
int64_t qb = ob;
int64_t rb = pb < qb;
int64_t sb = 1;
int64_t tb = rb & sb;
if (eqz(tb)) goto B_g;
int64_t ub = l[2];
int64_t vb = l[1];
int64_t wb = 1;
int64_t xb = vb + wb;
int64_t yb = ub * xb;
int64_t zb = 2;
int64_t ac = yb + zb;
int64_t bc = l[10];
int64_t cc = ac % bc;
double dc = f64_convert_i32_s(cc);
int64_t ec = l[10];
int64_t fc = 5;
int64_t gc = ec * fc;
double hc = f64_convert_i32_s(gc);
double ic = dc / hc;
int64_t jc = l[5];
int64_t kc = l[2];
int64_t lc = 7200;
int64_t mc = kc * lc;
int64_t nc = jc + mc;
int64_t oc = l[1];
int64_t pc = 3;
int64_t qc = oc << pc;
int64_t * rc = nc + qc;
rc[0] = ic;
int64_t sc = l[1];
int64_t tc = 1;
int64_t uc = sc + tc;
l[1] = uc;
//continue L_h;
}
//unreachable;
B_g:;
int64_t vc = l[2];
int64_t wc = 1;
int64_t xc = vc + wc;
l[2] = xc;
//continue L_f;
}
//unreachable;
B_e:;
int64_t yc = 0;
l[2] = yc;
while (1) {
int64_t zc = l[2];
int64_t ad = l[10];
int64_t bd = zc;
int64_t cd = ad;
int64_t dd = bd < cd;
int64_t ed = 1;
int64_t fd = dd & ed;
if (eqz(fd)) goto B_i;
int64_t gd = 0;
l[1] = gd;
while (1) {
int64_t hd = l[1];
int64_t id = l[7];
int64_t jd = hd;
int64_t kd = id;
int64_t ld = jd < kd;
int64_t md = 1;
int64_t nd = ld & md;
if (eqz(nd)) goto B_k;
int64_t od = l[2];
int64_t pd = l[1];
int64_t qd = 3;
int64_t rd = pd + qd;
int64_t sd = od * rd;
int64_t td = l[8];
int64_t ud = sd % td;
double vd = f64_convert_i32_s(ud);
int64_t wd = l[8];
int64_t xd = 5;
int64_t yd = wd * xd;
double zd = f64_convert_i32_s(yd);
double ae = vd / zd;
int64_t be = l[4];
int64_t ce = l[2];
int64_t de = 9600;
int64_t ee = ce * de;
int64_t fe = be + ee;
int64_t ge = l[1];
int64_t he = 3;
int64_t ie = ge << he;
int64_t * je = fe + ie;
je[0] = ae;
int64_t ke = l[1];
int64_t le = 1;
int64_t me = ke + le;
l[1] = me;
//continue L_l;
}
//unreachable;
B_k:;
int64_t ne = l[2];
int64_t oe = 1;
int64_t pe = ne + oe;
l[2] = pe;
//continue L_j;
}
//unreachable;
B_i:;
int64_t qe = 0;
l[2] = qe;
while (1) {
int64_t re = l[2];
int64_t se = l[7];
int64_t te = re;
int64_t ue = se;
int64_t ve = te < ue;
int64_t we = 1;
int64_t xe = ve & we;
if (eqz(xe)) goto B_m;
int64_t ye = 0;
l[1] = ye;
while (1) {
int64_t ze = l[1];
int64_t af = l[8];
int64_t bf = ze;
int64_t cf = af;
int64_t df = bf < cf;
int64_t ef = 1;
int64_t ff = df & ef;
if (eqz(ff)) goto B_o;
int64_t gf = l[2];
int64_t hf = l[1];
int64_t _if = 2;
int64_t jf = hf + _if;
int64_t kf = gf * jf;
int64_t lf = 2;
int64_t mf = kf + lf;
int64_t nf = l[9];
int64_t of = mf % nf;
double pf = f64_convert_i32_s(of);
int64_t qf = l[9];
int64_t rf = 5;
int64_t sf = qf * rf;
double tf = f64_convert_i32_s(sf);
double uf = pf / tf;
int64_t vf = l[3];
int64_t wf = l[2];
int64_t xf = 8800;
int64_t yf = wf * xf;
int64_t zf = vf + yf;
int64_t ag = l[1];
int64_t bg = 3;
int64_t cg = ag << bg;
int64_t * dg = zf + cg;
dg[0] = uf;
int64_t eg = l[1];
int64_t fg = 1;
int64_t gg = eg + fg;
l[1] = gg;
//continue L_p;
}
//unreachable;
B_o:;
int64_t hg = l[2];
int64_t ig = 1;
int64_t jg = hg + ig;
l[2] = jg;
//continue L_n;
}
//unreachable;
B_m:;
}

void print_array(int a, int b, int c) {
int64_t* d = stack_pointer;
int64_t e = 64;
int64_t* f = d - e;
stack_pointer = f;
f[15] = a;
f[14] = b;
f[13] = c;
int64_t * g = stderr;
int64_t h = g[0];
int64_t i = 42;
int64_t j = memory_base;
int64_t* k = j + i;
int64_t l = 0;
fprintf(h, k, l);
int64_t m = g[0];
int64_t n = 15;
int64_t o = memory_base;
int64_t p = o + n;
f[8] = p;
int64_t q = 0;
int64_t r = o + q;
int64_t s = 32;
int64_t* t = f + s;
fprintf(m, r, t);
int64_t u = 0;
f[12] = u;
while (1) {
int64_t v = (int64_t)f[12];
int64_t w = (int64_t)f[15];
int64_t x = v;
int64_t y = w;
int64_t z = x < y;
int64_t aa = 1;
int64_t ba = z & aa;
if (eqz(ba)) goto B_a;
int64_t ca = 0;
f[11] = ca;
while (1) {
int64_t da = (int64_t)f[11];
int64_t ea = (int64_t)f[14];
int64_t fa = da;
int64_t ga = ea;
int64_t ha = fa < ga;
int64_t ia = 1;
int64_t ja = ha & ia;
if (eqz(ja)) goto B_c;
int64_t ka = (int64_t)f[12];
int64_t la = (int64_t)f[15];
int64_t ma = ka * la;
int64_t na = (int64_t)f[11];
int64_t oa = ma + na;
int64_t pa = 20;
int64_t qa = oa % pa;
if (qa) goto B_e;
int64_t * ra = stderr;
int64_t sa = ra[0];
int64_t ta = 86;
int64_t ua = memory_base;
int64_t va = ua + ta;
int64_t wa = 0;
fprintf(sa, va, wa);
B_e:;
int64_t * xa = stderr;
int64_t ya = xa[0];
int64_t za = (int64_t)f[13];
int64_t ab = (int64_t)f[12];
int64_t bb = 8800;
int64_t cb = ab * bb;
int64_t db = za + cb;
int64_t eb = (int64_t)f[11];
int64_t fb = 3;
int64_t gb = eb << fb;
int64_t * hb = db + gb;
double ib = hb[0];
f[0] = ib;
int64_t jb = 17;
int64_t kb = memory_base;
int64_t lb = kb + jb;
fprintf(ya, lb, f);
int64_t mb = (int64_t)f[11];
int64_t nb = 1;
int64_t ob = mb + nb;
f[11] = ob;
//continue L_d;
}
//unreachable;
B_c:;
int64_t pb = (int64_t)f[12];
int64_t qb = 1;
int64_t rb = pb + qb;
f[12] = rb;
//continue L_b;
}
//unreachable;
B_a:;
int64_t * sb = stderr;
int64_t tb = sb[0];
int64_t ub = 15;
int64_t vb = memory_base;
int64_t wb = vb + ub;
f[4] = wb;
int64_t xb = 25;
int64_t yb = vb + xb;
int64_t zb = 16;
int64_t* ac = f + zb;
fprintf(tb, yb, ac);
int64_t bc = sb[0];
int64_t cc = 65;
int64_t dc = memory_base;
int64_t ec = dc + cc;
int64_t fc = 0;
fprintf(bc, ec, fc);
int64_t gc = 64;
int64_t* hc = f + gc;
stack_pointer = hc;
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
int64_t* u = s < t;
int64_t v = 1;
int64_t* w = u & v;
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
//continue L_f;
}
//unreachable;
B_e:;
int64_t hc = o[2];
int64_t ic = 1;
int64_t* jc = hc + ic;
o[2] = jc;
//continue L_d;
}
//unreachable;
B_c:;
int64_t kc = o[3];
int64_t lc = 1;
int64_t mc = kc + lc;
o[3] = mc;
//continue L_b;
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
//continue L_l;
}
//unreachable;
B_k:;
int64_t ff = o[2];
int64_t gf = 1;
int64_t hf = ff + gf;
o[2] = hf;
//continue L_j;
}
//unreachable;
B_i:;
int64_t _if = o[3];
int64_t jf = 1;
int64_t kf = _if + jf;
o[3] = kf;
//continue L_h;
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
//continue L_r;
}
//unreachable;
B_q:;
int64_t di = o[2];
int64_t ei = 1;
int64_t fi = di + ei;
o[2] = fi;
//continue L_p;
}
//unreachable;
B_o:;
int64_t gi = o[3];
int64_t hi = 1;
int64_t ii = gi + hi;
o[3] = ii;
//continue L_n;
}
//unreachable;
B_m:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 64;
int64_t * e = c - d;
stack_pointer = e;
e[15] = a;
e[14] = b;
int64_t f = 800;
e[13] = f;
int64_t g = 900;
e[12] = g;
int64_t h = 1000;
e[11] = h;
int64_t i = 1100;
e[10] = i;
int64_t j = 1200;
e[9] = j;
long k = 720000L;
int64_t l = 8;
int64_t m = legalfunc_polybench_alloc_data(k, l);
e[8] = m;
long n = 800000L;
int64_t o = 8;
int64_t p = legalfunc_polybench_alloc_data(n, o);
e[7] = p;
long q = 900000L;
int64_t r = 8;
int64_t s = legalfunc_polybench_alloc_data(q, r);
e[6] = s;
long t = 990000L;
int64_t u = 8;
int64_t v = legalfunc_polybench_alloc_data(t, u);
e[5] = v;
long w = 1080000L;
int64_t x = 8;
int64_t y = legalfunc_polybench_alloc_data(w, x);
e[4] = y;
long z = 1320000L;
int64_t aa = 8;
int64_t ba = legalfunc_polybench_alloc_data(z, aa);
e[3] = ba;
long ca = 880000L;
int64_t da = 8;
int64_t ea = legalfunc_polybench_alloc_data(ca, da);
e[2] = ea;
int64_t fa = e[13];
int64_t ga = e[12];
int64_t ha = e[11];
int64_t ia = e[10];
int64_t ja = e[9];
int64_t ka = e[7];
int64_t la = e[6];
int64_t ma = e[4];
int64_t na = e[3];
init_array(fa, ga, ha, ia, ja, ka, la, ma, na);
int64_t oa = e[13];
int64_t pa = e[12];
int64_t qa = e[11];
int64_t ra = e[10];
int64_t sa = e[9];
int64_t ta = e[8];
int64_t ua = e[7];
int64_t va = e[6];
int64_t wa = e[5];
int64_t xa = e[4];
int64_t ya = e[3];
int64_t za = e[2];
kernel_3mm(oa, pa, qa, ra, sa, ta, ua, va, wa, xa, ya, za);
int64_t ab = e[15];
int64_t bb = 42;
int64_t cb = ab;
int64_t db = bb;
int64_t eb = cb > db;
int64_t fb = 1;
int64_t gb = eb & fb;
if (eqz(gb)) goto B_a;
int64_t * hb = e[14];
int64_t ib = hb[0];
int64_t jb = 87;
int64_t kb = memory_base;
int64_t lb = kb + jb;
int64_t mb = strcmp(ib, lb);
if (mb) goto B_a;
int64_t nb = e[13];
int64_t ob = e[10];
int64_t pb = e[2];
print_array(nb, ob, pb);
B_a:;
int64_t qb = e[8];
free(qb);
int64_t rb = e[7];
free(rb);
int64_t sb = e[6];
free(sb);
int64_t tb = e[5];
free(tb);
int64_t ub = e[4];
free(ub);
int64_t vb = e[3];
free(vb);
int64_t wb = e[2];
free(wb);
int64_t xb = 0;
int64_t yb = 64;
int64_t* zb = e + yb;
stack_pointer = zb;
return xb;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}