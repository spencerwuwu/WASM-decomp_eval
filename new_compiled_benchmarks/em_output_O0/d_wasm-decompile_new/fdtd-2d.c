

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"hz\00ey\00ex\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEG"
"IN DUMP_ARRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";









void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_fdtd_2d(int a, int b, int c, int d, int e, int f, int g) {
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
int64_t k = 0;
j[4] = k;
while (1) {
int64_t l = j[4];
int64_t m = j[11];
int64_t n = l;
int64_t o = m;
int64_t p = n < o;
int64_t q = 1;
int64_t r = p & q;
if (eqz(r)) goto B_a;
int64_t s = 0;
j[2] = s;
while (1) {
int64_t t = j[2];
int64_t u = j[9];
int64_t v = t;
int64_t w = u;
int64_t x = v < w;
int64_t y = 1;
int64_t z = x & y;
if (eqz(z)) goto B_c;
int64_t aa = j[5];
int64_t ba = j[4];
int64_t ca = 3;
int64_t da = ba << ca;
int64_t * ea = aa + da;
double fa = ea[0];
int64_t ga = j[7];
int64_t ha = j[2];
int64_t ia = 3;
int64_t ja = ha << ia;
int64_t * ka = ga + ja;
ka[0] = fa;
int64_t la = j[2];
int64_t ma = 1;
int64_t na = la + ma;
j[2] = na;
//continue L_d;
}
//unreachable;
B_c:;
int64_t oa = 1;
j[3] = oa;
while (1) {
int64_t pa = j[3];
int64_t qa = j[10];
int64_t ra = pa;
int64_t sa = qa;
int64_t ta = ra < sa;
int64_t ua = 1;
int64_t va = ta & ua;
if (eqz(va)) goto B_e;
int64_t wa = 0;
j[2] = wa;
while (1) {
int64_t xa = j[2];
int64_t ya = j[9];
int64_t za = xa;
int64_t ab = ya;
int64_t bb = za < ab;
int64_t cb = 1;
int64_t db = bb & cb;
if (eqz(db)) goto B_g;
int64_t eb = j[7];
int64_t fb = j[3];
int64_t gb = 9600;
int64_t hb = fb * gb;
int64_t ib = eb + hb;
int64_t jb = j[2];
int64_t kb = 3;
int64_t lb = jb << kb;
int64_t * mb = ib + lb;
double nb = mb[0];
int64_t ob = j[6];
int64_t pb = j[3];
int64_t qb = 9600;
int64_t rb = pb * qb;
int64_t sb = ob + rb;
int64_t tb = j[2];
int64_t ub = 3;
int64_t vb = tb << ub;
int64_t * wb = sb + vb;
double xb = wb[0];
int64_t yb = j[6];
int64_t zb = j[3];
int64_t ac = 1;
int64_t bc = zb - ac;
int64_t cc = 9600;
int64_t dc = bc * cc;
int64_t ec = yb + dc;
int64_t fc = j[2];
int64_t gc = 3;
int64_t hc = fc << gc;
int64_t * ic = ec + hc;
double jc = ic[0];
double kc = xb - jc;
double lc = -0.5;
double mc = kc * lc;
double nc = mc + nb;
int64_t oc = j[7];
int64_t pc = j[3];
int64_t qc = 9600;
int64_t rc = pc * qc;
int64_t sc = oc + rc;
int64_t tc = j[2];
int64_t uc = 3;
int64_t vc = tc << uc;
int64_t * wc = sc + vc;
wc[0] = nc;
int64_t xc = j[2];
int64_t yc = 1;
int64_t zc = xc + yc;
j[2] = zc;
//continue L_h;
}
//unreachable;
B_g:;
int64_t ad = j[3];
int64_t bd = 1;
int64_t cd = ad + bd;
j[3] = cd;
//continue L_f;
}
//unreachable;
B_e:;
int64_t dd = 0;
j[3] = dd;
while (1) {
int64_t ed = j[3];
int64_t fd = j[10];
int64_t gd = ed;
int64_t hd = fd;
int64_t id = gd < hd;
int64_t jd = 1;
int64_t kd = id & jd;
if (eqz(kd)) goto B_i;
int64_t ld = 1;
j[2] = ld;
while (1) {
int64_t md = j[2];
int64_t nd = j[9];
int64_t od = md;
int64_t pd = nd;
int64_t qd = od < pd;
int64_t rd = 1;
int64_t sd = qd & rd;
if (eqz(sd)) goto B_k;
int64_t td = j[8];
int64_t ud = j[3];
int64_t vd = 9600;
int64_t wd = ud * vd;
int64_t xd = td + wd;
int64_t yd = j[2];
int64_t zd = 3;
int64_t ae = yd << zd;
int64_t * be = xd + ae;
double ce = be[0];
int64_t de = j[6];
int64_t ee = j[3];
int64_t fe = 9600;
int64_t ge = ee * fe;
int64_t he = de + ge;
int64_t ie = j[2];
int64_t je = 3;
int64_t ke = ie << je;
int64_t * le = he + ke;
double me = le[0];
int64_t ne = j[6];
int64_t oe = j[3];
int64_t pe = 9600;
int64_t qe = oe * pe;
int64_t re = ne + qe;
int64_t se = j[2];
int64_t te = 1;
int64_t ue = se - te;
int64_t ve = 3;
int64_t we = ue << ve;
int64_t * xe = re + we;
double ye = xe[0];
double ze = me - ye;
double af = -0.5;
double bf = ze * af;
double cf = bf + ce;
int64_t df = j[8];
int64_t ef = j[3];
int64_t ff = 9600;
int64_t gf = ef * ff;
int64_t hf = df + gf;
int64_t _if = j[2];
int64_t jf = 3;
int64_t kf = _if << jf;
int64_t * lf = hf + kf;
lf[0] = cf;
int64_t mf = j[2];
int64_t nf = 1;
int64_t of = mf + nf;
j[2] = of;
//continue L_l;
}
//unreachable;
B_k:;
int64_t pf = j[3];
int64_t qf = 1;
int64_t rf = pf + qf;
j[3] = rf;
//continue L_j;
}
//unreachable;
B_i:;
int64_t sf = 0;
j[3] = sf;
while (1) {
int64_t tf = j[3];
int64_t uf = j[10];
int64_t vf = 1;
int64_t wf = uf - vf;
int64_t xf = tf;
int64_t yf = wf;
int64_t zf = xf < yf;
int64_t ag = 1;
int64_t bg = zf & ag;
if (eqz(bg)) goto B_m;
int64_t cg = 0;
j[2] = cg;
while (1) {
int64_t dg = j[2];
int64_t eg = j[9];
int64_t fg = 1;
int64_t gg = eg - fg;
int64_t hg = dg;
int64_t ig = gg;
int64_t jg = hg < ig;
int64_t kg = 1;
int64_t lg = jg & kg;
if (eqz(lg)) goto B_o;
int64_t mg = j[6];
int64_t ng = j[3];
int64_t og = 9600;
int64_t pg = ng * og;
int64_t qg = mg + pg;
int64_t rg = j[2];
int64_t sg = 3;
int64_t tg = rg << sg;
int64_t * ug = qg + tg;
double vg = ug[0];
int64_t wg = j[8];
int64_t xg = j[3];
int64_t yg = 9600;
int64_t zg = xg * yg;
int64_t ah = wg + zg;
int64_t bh = j[2];
int64_t ch = 1;
int64_t dh = bh + ch;
int64_t eh = 3;
int64_t fh = dh << eh;
int64_t * gh = ah + fh;
double hh = gh[0];
int64_t ih = j[8];
int64_t jh = j[3];
int64_t kh = 9600;
int64_t lh = jh * kh;
int64_t mh = ih + lh;
int64_t nh = j[2];
int64_t oh = 3;
int64_t ph = nh << oh;
int64_t * qh = mh + ph;
double rh = qh[0];
double sh = hh - rh;
int64_t th = j[7];
int64_t uh = j[3];
int64_t vh = 1;
int64_t wh = uh + vh;
int64_t xh = 9600;
int64_t yh = wh * xh;
int64_t zh = th + yh;
int64_t ai = j[2];
int64_t bi = 3;
int64_t ci = ai << bi;
int64_t * di = zh + ci;
double ei = di[0];
double fi = sh + ei;
int64_t gi = j[7];
int64_t hi = j[3];
int64_t ii = 9600;
int64_t ji = hi * ii;
int64_t ki = gi + ji;
int64_t li = j[2];
int64_t mi = 3;
int64_t ni = li << mi;
int64_t * oi = ki + ni;
double pi = oi[0];
double qi = fi - pi;
double ri = -0.7;
double si = qi * ri;
double ti = si + vg;
int64_t ui = j[6];
int64_t vi = j[3];
int64_t wi = 9600;
int64_t xi = vi * wi;
int64_t yi = ui + xi;
int64_t zi = j[2];
int64_t aj = 3;
int64_t bj = zi << aj;
int64_t * cj = yi + bj;
cj[0] = ti;
int64_t dj = j[2];
int64_t ej = 1;
int64_t fj = dj + ej;
j[2] = fj;
//continue L_p;
}
//unreachable;
B_o:;
int64_t gj = j[3];
int64_t hj = 1;
int64_t ij = gj + hj;
j[3] = ij;
//continue L_n;
}
//unreachable;
B_m:;
int64_t jj = j[4];
int64_t kj = 1;
int64_t lj = jj + kj;
j[4] = lj;
//continue L_b;
}
//unreachable;
B_a:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 48;
int64_t * e = c - d;
stack_pointer = e;
e[11] = a;
e[10] = b;
int64_t f = 500;
e[9] = f;
int64_t g = 1000;
e[8] = g;
int64_t h = 1200;
e[7] = h;
long i = 1200000L;
int64_t j = 8;
int64_t k = legalfunc_polybench_alloc_data(i, j);
e[6] = k;
long l = 1200000L;
int64_t m = 8;
int64_t n = legalfunc_polybench_alloc_data(l, m);
e[5] = n;
long o = 1200000L;
int64_t p = 8;
int64_t q = legalfunc_polybench_alloc_data(o, p);
e[4] = q;
long r = 500L;
int64_t s = 8;
int64_t t = legalfunc_polybench_alloc_data(r, s);
e[3] = t;
int64_t u = e[9];
int64_t v = e[8];
int64_t w = e[7];
int64_t x = e[6];
int64_t y = e[5];
int64_t z = e[4];
int64_t aa = e[3];
init_array(u, v, w, x, y, z, aa);
int64_t ba = e[9];
int64_t ca = e[8];
int64_t da = e[7];
int64_t ea = e[6];
int64_t fa = e[5];
int64_t ga = e[4];
int64_t ha = e[3];
kernel_fdtd_2d(ba, ca, da, ea, fa, ga, ha);
int64_t ia = e[11];
int64_t ja = 42;
int64_t ka = ia;
int64_t la = ja;
int64_t ma = ka > la;
int64_t na = 1;
int64_t oa = ma & na;
if (eqz(oa)) goto B_a;
int64_t * pa = e[10];
int64_t qa = pa[0];
int64_t ra = 94;
int64_t sa = memory_base;
int64_t ta = sa + ra;
int64_t ua = strcmp(qa, ta);
if (ua) goto B_a;
int64_t va = e[8];
int64_t wa = e[7];
int64_t xa = e[6];
int64_t ya = e[5];
int64_t za = e[4];
print_array(va, wa, xa, ya, za);
B_a:;
int64_t ab = e[6];
free(ab);
int64_t bb = e[5];
free(bb);
int64_t cb = e[4];
free(cb);
int64_t db = e[3];
free(db);
int64_t eb = 0;
int64_t fb = 48;
int64_t* gb = e + fb;
stack_pointer = gb;
return eb;
}

void init_array(int a, int b, int c, int d, int e, int f, int g) {
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
int64_t k = 0;
j[4] = k;
while (1) {
int64_t l = j[4];
int64_t m = j[11];
int64_t n = l;
int64_t o = m;
int64_t p = n < o;
int64_t q = 1;
int64_t r = p & q;
if (eqz(r)) goto B_a;
int64_t s = j[4];
double t = f64_convert_i32_s(s);
int64_t u = j[5];
int64_t v = j[4];
int64_t w = 3;
int64_t x = v << w;
int64_t * y = u + x;
y[0] = t;
int64_t z = j[4];
int64_t aa = 1;
int64_t ba = z + aa;
j[4] = ba;
//continue L_b;
}
//unreachable;
B_a:;
int64_t ca = 0;
j[4] = ca;
while (1) {
int64_t da = j[4];
int64_t ea = j[10];
int64_t fa = da;
int64_t ga = ea;
int64_t ha = fa < ga;
int64_t ia = 1;
int64_t ja = ha & ia;
if (eqz(ja)) goto B_c;
int64_t ka = 0;
j[3] = ka;
while (1) {
int64_t la = j[3];
int64_t ma = j[9];
int64_t na = la;
int64_t oa = ma;
int64_t pa = na < oa;
int64_t qa = 1;
int64_t ra = pa & qa;
if (eqz(ra)) goto B_e;
int64_t sa = j[4];
double ta = f64_convert_i32_s(sa);
int64_t ua = j[3];
int64_t va = 1;
int64_t wa = ua + va;
double xa = f64_convert_i32_s(wa);
double ya = ta * xa;
int64_t za = j[10];
double ab = f64_convert_i32_s(za);
double bb = ya / ab;
int64_t cb = j[8];
int64_t db = j[4];
int64_t eb = 9600;
int64_t fb = db * eb;
int64_t gb = cb + fb;
int64_t hb = j[3];
int64_t ib = 3;
int64_t jb = hb << ib;
int64_t * kb = gb + jb;
kb[0] = bb;
int64_t lb = j[4];
double mb = f64_convert_i32_s(lb);
int64_t nb = j[3];
int64_t ob = 2;
int64_t pb = nb + ob;
double qb = f64_convert_i32_s(pb);
double rb = mb * qb;
int64_t sb = j[9];
double tb = f64_convert_i32_s(sb);
double ub = rb / tb;
int64_t vb = j[7];
int64_t wb = j[4];
int64_t xb = 9600;
int64_t yb = wb * xb;
int64_t zb = vb + yb;
int64_t ac = j[3];
int64_t bc = 3;
int64_t cc = ac << bc;
int64_t * dc = zb + cc;
dc[0] = ub;
int64_t ec = j[4];
double fc = f64_convert_i32_s(ec);
int64_t gc = j[3];
int64_t hc = 3;
int64_t ic = gc + hc;
double jc = f64_convert_i32_s(ic);
double kc = fc * jc;
int64_t lc = j[10];
double mc = f64_convert_i32_s(lc);
double nc = kc / mc;
int64_t oc = j[6];
int64_t pc = j[4];
int64_t qc = 9600;
int64_t rc = pc * qc;
int64_t sc = oc + rc;
int64_t tc = j[3];
int64_t uc = 3;
int64_t vc = tc << uc;
int64_t * wc = sc + vc;
wc[0] = nc;
int64_t xc = j[3];
int64_t yc = 1;
int64_t zc = xc + yc;
j[3] = zc;
//continue L_f;
}
//unreachable;
B_e:;
int64_t ad = j[4];
int64_t bd = 1;
int64_t cd = ad + bd;
j[4] = cd;
//continue L_d;
}
//unreachable;
B_c:;
}

void print_array(int a, int b, int c, int d, int e) {
int64_t* f = stack_pointer;
int64_t g = 160;
int64_t* h = f - g;
stack_pointer = h;
h[39] = a;
h[38] = b;
h[37] = c;
h[36] = d;
h[35] = e;
int64_t * i = stderr;
int64_t j = i[0];
int64_t k = 49;
int64_t l = memory_base;
int64_t m = l + k;
int64_t n = 0;
fprintf(j, m, n);
int64_t o = i[0];
int64_t p = 6;
int64_t q = memory_base;
int64_t r = q + p;
h[32] = r;
int64_t s = 9;
int64_t t = q + s;
int64_t u = 128;
int64_t* v = h + u;
fprintf(o, t, v);
int64_t w = 0;
h[34] = w;
while (1) {
int64_t x = (int64_t)h[34];
int64_t y = (int64_t)h[39];
int64_t z = x;
int64_t aa = y;
int64_t ba = z < aa;
int64_t ca = 1;
int64_t da = ba & ca;
if (eqz(da)) goto B_a;
int64_t ea = 0;
h[33] = ea;
while (1) {
int64_t fa = (int64_t)h[33];
int64_t ga = (int64_t)h[38];
int64_t ha = fa;
int64_t ia = ga;
int64_t ja = ha < ia;
int64_t ka = 1;
int64_t la = ja & ka;
if (eqz(la)) goto B_c;
int64_t ma = (int64_t)h[34];
int64_t na = (int64_t)h[39];
int64_t oa = ma * na;
int64_t pa = (int64_t)h[33];
int64_t qa = oa + pa;
int64_t ra = 20;
int64_t sa = qa % ra;
if (sa) goto B_e;
int64_t * ta = stderr;
int64_t ua = ta[0];
int64_t va = 93;
int64_t wa = memory_base;
int64_t xa = wa + va;
int64_t ya = 0;
fprintf(ua, xa, ya);
B_e:;
int64_t * za = stderr;
int64_t ab = za[0];
int64_t bb = (int64_t)h[37];
int64_t cb = (int64_t)h[34];
int64_t db = 9600;
int64_t eb = cb * db;
int64_t fb = bb + eb;
int64_t gb = (int64_t)h[33];
int64_t hb = 3;
int64_t* ib = gb << hb;
int64_t * jb = fb + ib;
double kb = jb[0];
h[0] = kb;
int64_t lb = 24;
int64_t mb = memory_base;
int64_t nb = mb + lb;
fprintf(ab, nb, h);
int64_t ob = (int64_t)h[33];
int64_t pb = 1;
int64_t qb = ob + pb;
h[33] = qb;
//continue L_d;
}
//unreachable;
B_c:;
int64_t rb = (int64_t)h[34];
int64_t sb = 1;
int64_t tb = rb + sb;
h[34] = tb;
//continue L_b;
}
//unreachable;
B_a:;
int64_t * ub = stderr;
int64_t vb = ub[0];
int64_t wb = 6;
int64_t xb = memory_base;
int64_t yb = xb + wb;
h[24] = yb;
int64_t zb = 32;
int64_t ac = xb + zb;
int64_t bc = 96;
int64_t* cc = h + bc;
fprintf(vb, ac, cc);
int64_t dc = ub[0];
int64_t ec = 72;
int64_t fc = xb + ec;
int64_t gc = 0;
fprintf(dc, fc, gc);
int64_t hc = ub[0];
int64_t ic = 3;
int64_t jc = memory_base;
int64_t kc = jc + ic;
h[28] = kc;
int64_t lc = 9;
int64_t mc = jc + lc;
int64_t nc = 112;
int64_t* oc = h + nc;
fprintf(hc, mc, oc);
int64_t pc = 0;
h[34] = pc;
while (1) {
int64_t qc = (int64_t)h[34];
int64_t rc = (int64_t)h[39];
int64_t sc = qc;
int64_t tc = rc;
int64_t uc = sc < tc;
int64_t vc = 1;
int64_t wc = uc & vc;
if (eqz(wc)) goto B_f;
int64_t xc = 0;
h[33] = xc;
while (1) {
int64_t yc = (int64_t)h[33];
int64_t zc = (int64_t)h[38];
int64_t ad = yc;
int64_t bd = zc;
int64_t cd = ad < bd;
int64_t dd = 1;
int64_t ed = cd & dd;
if (eqz(ed)) goto B_h;
int64_t fd = (int64_t)h[34];
int64_t gd = (int64_t)h[39];
int64_t hd = fd * gd;
int64_t id = (int64_t)h[33];
int64_t jd = hd + id;
int64_t kd = 20;
int64_t ld = jd % kd;
if (ld) goto B_j;
int64_t * md = stderr;
int64_t nd = md[0];
int64_t od = 93;
int64_t pd = memory_base;
int64_t qd = pd + od;
int64_t rd = 0;
fprintf(nd, qd, rd);
B_j:;
int64_t * sd = stderr;
int64_t td = sd[0];
int64_t ud = (int64_t)h[36];
int64_t vd = (int64_t)h[34];
int64_t wd = 9600;
int64_t xd = vd * wd;
int64_t yd = ud + xd;
int64_t zd = (int64_t)h[33];
int64_t ae = 3;
int64_t be = zd << ae;
int64_t * ce = yd + be;
double de = ce[0];
h[2] = de;
int64_t ee = 24;
int64_t fe = memory_base;
int64_t ge = fe + ee;
int64_t he = 16;
int64_t* ie = h + he;
fprintf(td, ge, ie);
int64_t je = (int64_t)h[33];
int64_t ke = 1;
int64_t le = je + ke;
h[33] = le;
//continue L_i;
}
//unreachable;
B_h:;
int64_t me = (int64_t)h[34];
int64_t ne = 1;
int64_t oe = me + ne;
h[34] = oe;
//continue L_g;
}
//unreachable;
B_f:;
int64_t * pe = stderr;
int64_t qe = pe[0];
int64_t re = 3;
int64_t se = memory_base;
int64_t te = se + re;
h[16] = te;
int64_t ue = 32;
int64_t ve = se + ue;
int64_t we = 64;
int64_t* xe = h + we;
fprintf(qe, ve, xe);
int64_t ye = pe[0];
int64_t ze = 0;
int64_t af = memory_base;
int64_t bf = af + ze;
h[20] = bf;
int64_t cf = 9;
int64_t df = af + cf;
int64_t ef = 80;
int64_t* ff = h + ef;
fprintf(ye, df, ff);
int64_t gf = 0;
h[34] = gf;
while (1) {
int64_t hf = (int64_t)h[34];
int64_t _if = (int64_t)h[39];
int64_t jf = hf;
int64_t kf = _if;
int64_t lf = jf < kf;
int64_t mf = 1;
int64_t nf = lf & mf;
if (eqz(nf)) goto B_k;
int64_t of = 0;
h[33] = of;
while (1) {
int64_t pf = (int64_t)h[33];
int64_t qf = (int64_t)h[38];
int64_t rf = pf;
int64_t sf = qf;
int64_t tf = rf < sf;
int64_t uf = 1;
int64_t vf = tf & uf;
if (eqz(vf)) goto B_m;
int64_t wf = (int64_t)h[34];
int64_t xf = (int64_t)h[39];
int64_t yf = wf * xf;
int64_t zf = (int64_t)h[33];
int64_t ag = yf + zf;
int64_t bg = 20;
int64_t cg = ag % bg;
if (cg) goto B_o;
int64_t * dg = stderr;
int64_t eg = dg[0];
int64_t fg = 93;
int64_t gg = memory_base;
int64_t hg = gg + fg;
int64_t ig = 0;
fprintf(eg, hg, ig);
B_o:;
int64_t * jg = stderr;
int64_t kg = jg[0];
int64_t lg = (int64_t)h[35];
int64_t mg = (int64_t)h[34];
int64_t ng = 9600;
int64_t og = mg * ng;
int64_t pg = lg + og;
int64_t qg = (int64_t)h[33];
int64_t rg = 3;
int64_t sg = qg << rg;
int64_t * tg = pg + sg;
double ug = tg[0];
h[4] = ug;
int64_t vg = 24;
int64_t wg = memory_base;
int64_t xg = wg + vg;
int64_t yg = 32;
int64_t* zg = h + yg;
fprintf(kg, xg, zg);
int64_t ah = (int64_t)h[33];
int64_t bh = 1;
int64_t ch = ah + bh;
h[33] = ch;
//continue L_n;
}
//unreachable;
B_m:;
int64_t dh = (int64_t)h[34];
int64_t eh = 1;
int64_t fh = dh + eh;
h[34] = fh;
//continue L_l;
}
//unreachable;
B_k:;
int64_t * gh = stderr;
int64_t hh = gh[0];
int64_t ih = 0;
int64_t jh = memory_base;
int64_t kh = jh + ih;
h[12] = kh;
int64_t lh = 32;
int64_t mh = jh + lh;
int64_t nh = 48;
int64_t* oh = h + nh;
fprintf(hh, mh, oh);
int64_t ph = 160;
int64_t* qh = h + ph;
stack_pointer = qh;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}