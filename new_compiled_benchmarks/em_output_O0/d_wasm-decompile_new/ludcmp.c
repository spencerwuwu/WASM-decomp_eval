

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"x\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";









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
//continue L_f;
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
//continue L_d;
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
//continue L_j;
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
//continue L_h;
}
//unreachable;
B_g:;
int64_t df = (int64_t)h[6];
int64_t ef = 1;
int64_t ff = df + ef;
h[6] = ff;
//continue L_b;
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
//continue L_n;
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
//continue L_l;
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
//continue L_r;
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
//continue L_p;
}
//unreachable;
B_o:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 32;
int64_t * e = c - d;
stack_pointer = e;
e[7] = a;
e[6] = b;
int64_t f = 2000;
e[5] = f;
long g = 4000000L;
int64_t h = 8;
int64_t i = legalfunc_polybench_alloc_data(g, h);
e[4] = i;
long j = 2000L;
int64_t k = 8;
int64_t l = legalfunc_polybench_alloc_data(j, k);
e[3] = l;
long m = 2000L;
int64_t n = 8;
int64_t o = legalfunc_polybench_alloc_data(m, n);
e[2] = o;
long p = 2000L;
int64_t q = 8;
int64_t r = legalfunc_polybench_alloc_data(p, q);
e[1] = r;
int64_t s = e[5];
int64_t t = e[4];
int64_t u = e[3];
int64_t v = e[2];
int64_t w = e[1];
init_array(s, t, u, v, w);
int64_t x = e[5];
int64_t y = e[4];
int64_t z = e[3];
int64_t aa = e[2];
int64_t ba = e[1];
kernel_ludcmp(x, y, z, aa, ba);
int64_t ca = e[7];
int64_t da = 42;
int64_t ea = ca;
int64_t fa = da;
int64_t ga = ea > fa;
int64_t ha = 1;
int64_t ia = ga & ha;
if (eqz(ia)) goto B_a;
int64_t * ja = e[6];
int64_t ka = ja[0];
int64_t la = 87;
int64_t ma = memory_base;
int64_t na = ma + la;
int64_t oa = strcmp(ka, na);
if (oa) goto B_a;
int64_t pa = e[5];
int64_t qa = e[2];
print_array(pa, qa);
B_a:;
int64_t ra = e[4];
free(ra);
int64_t sa = e[3];
free(sa);
int64_t ta = e[2];
free(ta);
int64_t ua = e[1];
free(ua);
int64_t va = 0;
int64_t wa = 32;
int64_t* xa = e + wa;
stack_pointer = xa;
return va;
}

void init_array(int a, int b, int c, int d, int e) {
int64_t* f = stack_pointer;
int64_t g = 64;
int64_t* h = f - g;
stack_pointer = h;
h[15] = a;
h[14] = b;
h[13] = c;
h[12] = d;
h[11] = e;
int64_t i = (int64_t)h[15];
double j = f64_convert_i32_s(i);
h[3] = j;
int64_t k = 0;
h[10] = k;
while (1) {
int64_t l = (int64_t)h[10];
int64_t m = (int64_t)h[15];
int64_t n = l;
int64_t o = m;
int64_t p = n < o;
int64_t q = 1;
int64_t r = p & q;
if (eqz(r)) goto B_a;
int64_t s = (int64_t)h[12];
int64_t t = (int64_t)h[10];
int64_t u = 3;
int64_t v = t << u;
int64_t * w = s + v;
int64_t x = 0;
double y = f64_convert_i32_s(x);
w[0] = y;
int64_t z = (int64_t)h[11];
int64_t aa = (int64_t)h[10];
int64_t ba = 3;
int64_t ca = aa << ba;
int64_t * da = z + ca;
int64_t ea = 0;
double fa = f64_convert_i32_s(ea);
da[0] = fa;
int64_t ga = (int64_t)h[10];
int64_t ha = 1;
int64_t ia = ga + ha;
double ja = f64_convert_i32_s(ia);
double ka = (double)h[3];
double la = ja / ka;
double ma = 2.0;
double na = la / ma;
double oa = 4.0;
double pa = na + oa;
int64_t qa = (int64_t)h[13];
int64_t ra = (int64_t)h[10];
int64_t sa = 3;
int64_t ta = ra << sa;
int64_t * ua = qa + ta;
ua[0] = pa;
int64_t va = (int64_t)h[10];
int64_t wa = 1;
int64_t xa = va + wa;
h[10] = xa;
//continue L_b;
}
//unreachable;
B_a:;
int64_t ya = 0;
h[10] = ya;
while (1) {
int64_t za = (int64_t)h[10];
int64_t ab = (int64_t)h[15];
int64_t bb = za;
int64_t cb = ab;
int64_t db = bb < cb;
int64_t eb = 1;
int64_t fb = db & eb;
if (eqz(fb)) goto B_c;
int64_t gb = 0;
h[9] = gb;
while (1) {
int64_t hb = (int64_t)h[9];
int64_t ib = (int64_t)h[10];
int64_t jb = hb;
int64_t kb = ib;
int64_t lb = jb <= kb;
int64_t mb = 1;
int64_t nb = lb & mb;
if (eqz(nb)) goto B_e;
int64_t ob = (int64_t)h[9];
int64_t pb = 0;
int64_t qb = pb - ob;
int64_t rb = (int64_t)h[15];
int64_t sb = qb % rb;
double tb = f64_convert_i32_s(sb);
int64_t ub = (int64_t)h[15];
double vb = f64_convert_i32_s(ub);
double wb = tb / vb;
double xb = 1.0;
double yb = wb + xb;
int64_t zb = (int64_t)h[14];
int64_t ac = (int64_t)h[10];
int64_t bc = 16000;
int64_t cc = ac * bc;
int64_t dc = zb + cc;
int64_t ec = (int64_t)h[9];
int64_t fc = 3;
int64_t gc = ec << fc;
int64_t * hc = dc + gc;
hc[0] = yb;
int64_t ic = (int64_t)h[9];
int64_t jc = 1;
int64_t kc = ic + jc;
h[9] = kc;
//continue L_f;
}
//unreachable;
B_e:;
int64_t lc = (int64_t)h[10];
int64_t mc = 1;
int64_t nc = lc + mc;
h[9] = nc;
while (1) {
int64_t oc = (int64_t)h[9];
int64_t pc = (int64_t)h[15];
int64_t qc = oc;
int64_t rc = pc;
int64_t sc = qc < rc;
int64_t tc = 1;
int64_t uc = sc & tc;
if (eqz(uc)) goto B_g;
int64_t vc = (int64_t)h[14];
int64_t wc = (int64_t)h[10];
int64_t xc = 16000;
int64_t yc = wc * xc;
int64_t zc = vc + yc;
int64_t ad = (int64_t)h[9];
int64_t bd = 3;
int64_t cd = ad << bd;
int64_t * dd = zc + cd;
int64_t ed = 0;
double fd = f64_convert_i32_s(ed);
dd[0] = fd;
int64_t gd = (int64_t)h[9];
int64_t hd = 1;
int64_t id = gd + hd;
h[9] = id;
//continue L_h;
}
//unreachable;
B_g:;
int64_t jd = (int64_t)h[14];
int64_t kd = (int64_t)h[10];
int64_t ld = 16000;
int64_t md = kd * ld;
int64_t nd = jd + md;
int64_t od = (int64_t)h[10];
int64_t pd = 3;
int64_t qd = od << pd;
int64_t * rd = nd + qd;
double sd = 1.0;
rd[0] = sd;
int64_t td = (int64_t)h[10];
int64_t ud = 1;
int64_t vd = td + ud;
h[10] = vd;
//continue L_d;
}
//unreachable;
B_c:;
long wd = 4000000L;
int64_t xd = 8;
int64_t yd = legalfunc_polybench_alloc_data(wd, xd);
h[2] = yd;
int64_t zd = 0;
h[5] = zd;
while (1) {
int64_t ae = (int64_t)h[5];
int64_t be = (int64_t)h[15];
int64_t ce = ae;
int64_t de = be;
int64_t ee = ce < de;
int64_t fe = 1;
int64_t ge = ee & fe;
if (eqz(ge)) goto B_i;
int64_t he = 0;
h[4] = he;
while (1) {
int64_t ie = (int64_t)h[4];
int64_t je = (int64_t)h[15];
int64_t ke = ie;
int64_t le = je;
int64_t me = ke < le;
int64_t ne = 1;
int64_t oe = me & ne;
if (eqz(oe)) goto B_k;
int64_t pe = (int64_t)h[2];
int64_t qe = (int64_t)h[5];
int64_t re = 16000;
int64_t se = qe * re;
int64_t te = pe + se;
int64_t ue = (int64_t)h[4];
int64_t ve = 3;
int64_t we = ue << ve;
int64_t * xe = te + we;
int64_t ye = 0;
double ze = f64_convert_i32_s(ye);
xe[0] = ze;
int64_t af = (int64_t)h[4];
int64_t bf = 1;
int64_t cf = af + bf;
h[4] = cf;
//continue L_l;
}
//unreachable;
B_k:;
int64_t df = (int64_t)h[5];
int64_t ef = 1;
int64_t ff = df + ef;
h[5] = ff;
//continue L_j;
}
//unreachable;
B_i:;
int64_t gf = 0;
h[3] = gf;
while (1) {
int64_t hf = (int64_t)h[3];
int64_t _if = (int64_t)h[15];
int64_t jf = hf;
int64_t kf = _if;
int64_t lf = jf < kf;
int64_t mf = 1;
int64_t nf = lf & mf;
if (eqz(nf)) goto B_m;
int64_t of = 0;
h[5] = of;
while (1) {
int64_t pf = (int64_t)h[5];
int64_t qf = (int64_t)h[15];
int64_t rf = pf;
int64_t sf = qf;
int64_t tf = rf < sf;
int64_t uf = 1;
int64_t vf = tf & uf;
if (eqz(vf)) goto B_o;
int64_t wf = 0;
h[4] = wf;
while (1) {
int64_t xf = (int64_t)h[4];
int64_t yf = (int64_t)h[15];
int64_t zf = xf;
int64_t ag = yf;
int64_t bg = zf < ag;
int64_t cg = 1;
int64_t dg = bg & cg;
if (eqz(dg)) goto B_q;
int64_t eg = (int64_t)h[14];
int64_t fg = (int64_t)h[5];
int64_t gg = 16000;
int64_t hg = fg * gg;
int64_t ig = eg + hg;
int64_t jg = (int64_t)h[3];
int64_t kg = 3;
int64_t lg = jg << kg;
int64_t * mg = ig + lg;
double ng = mg[0];
int64_t og = (int64_t)h[14];
int64_t pg = (int64_t)h[4];
int64_t qg = 16000;
int64_t rg = pg * qg;
int64_t sg = og + rg;
int64_t tg = (int64_t)h[3];
int64_t ug = 3;
int64_t vg = tg << ug;
int64_t * wg = sg + vg;
double xg = wg[0];
int64_t yg = (int64_t)h[2];
int64_t zg = (int64_t)h[5];
int64_t ah = 16000;
int64_t bh = zg * ah;
int64_t ch = yg + bh;
int64_t dh = (int64_t)h[4];
int64_t eh = 3;
int64_t fh = dh << eh;
int64_t * gh = ch + fh;
double hh = gh[0];
double ih = ng * xg;
double jh = ih + hh;
gh[0] = jh;
int64_t kh = (int64_t)h[4];
int64_t lh = 1;
int64_t mh = kh + lh;
h[4] = mh;
//continue L_r;
}
//unreachable;
B_q:;
int64_t nh = (int64_t)h[5];
int64_t oh = 1;
int64_t ph = nh + oh;
h[5] = ph;
//continue L_p;
}
//unreachable;
B_o:;
int64_t qh = (int64_t)h[3];
int64_t rh = 1;
int64_t sh = qh + rh;
h[3] = sh;
//continue L_n;
}
//unreachable;
B_m:;
int64_t th = 0;
h[5] = th;
while (1) {
int64_t uh = (int64_t)h[5];
int64_t vh = (int64_t)h[15];
int64_t wh = uh;
int64_t xh = vh;
int64_t yh = wh < xh;
int64_t zh = 1;
int64_t ai = yh & zh;
if (eqz(ai)) goto B_s;
int64_t bi = 0;
h[4] = bi;
while (1) {
int64_t ci = (int64_t)h[4];
int64_t di = (int64_t)h[15];
int64_t ei = ci;
int64_t fi = di;
int64_t gi = ei < fi;
int64_t hi = 1;
int64_t ii = gi & hi;
if (eqz(ii)) goto B_u;
int64_t ji = (int64_t)h[2];
int64_t ki = (int64_t)h[5];
int64_t li = 16000;
int64_t mi = ki * li;
int64_t ni = ji + mi;
int64_t oi = (int64_t)h[4];
int64_t pi = 3;
int64_t qi = oi << pi;
int64_t * ri = ni + qi;
double si = ri[0];
int64_t ti = (int64_t)h[14];
int64_t ui = (int64_t)h[5];
int64_t vi = 16000;
int64_t wi = ui * vi;
int64_t xi = ti + wi;
int64_t yi = (int64_t)h[4];
int64_t zi = 3;
int64_t aj = yi << zi;
int64_t * bj = xi + aj;
bj[0] = si;
int64_t cj = (int64_t)h[4];
int64_t dj = 1;
int64_t ej = cj + dj;
h[4] = ej;
//continue L_v;
}
//unreachable;
B_u:;
int64_t fj = (int64_t)h[5];
int64_t gj = 1;
int64_t hj = fj + gj;
h[5] = hj;
//continue L_t;
}
//unreachable;
B_s:;
int64_t ij = (int64_t)h[2];
free(ij);
int64_t jj = 64;
int64_t* kj = h + jj;
stack_pointer = kj;
}

void print_array(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 48;
int64_t* e = c - d;
stack_pointer = e;
e[11] = a;
e[10] = b;
int64_t * f = stderr;
int64_t g = f[0];
int64_t h = 42;
int64_t i = memory_base;
int64_t* j = i + h;
int64_t k = 0;
fprintf(g, j, k);
int64_t l = f[0];
int64_t m = 0;
int64_t n = memory_base;
int64_t o = n + m;
e[8] = o;
int64_t p = 2;
int64_t q = n + p;
int64_t r = 32;
int64_t* s = e + r;
fprintf(l, q, s);
int64_t t = 0;
e[9] = t;
while (1) {
int64_t u = (int64_t)e[9];
int64_t v = (int64_t)e[11];
int64_t w = u;
int64_t x = v;
int64_t y = w < x;
int64_t z = 1;
int64_t aa = y & z;
if (eqz(aa)) goto B_a;
int64_t ba = (int64_t)e[9];
int64_t ca = 20;
int64_t da = ba % ca;
if (da) goto B_c;
int64_t * ea = stderr;
int64_t fa = ea[0];
int64_t ga = 86;
int64_t ha = memory_base;
int64_t ia = ha + ga;
int64_t ja = 0;
fprintf(fa, ia, ja);
B_c:;
int64_t * ka = stderr;
int64_t la = ka[0];
int64_t ma = (int64_t)e[10];
int64_t na = (int64_t)e[9];
int64_t oa = 3;
int64_t pa = na << oa;
int64_t * qa = ma + pa;
double ra = qa[0];
e[0] = ra;
int64_t sa = 17;
int64_t ta = memory_base;
int64_t ua = ta + sa;
fprintf(la, ua, e);
int64_t va = (int64_t)e[9];
int64_t wa = 1;
int64_t xa = va + wa;
e[9] = xa;
//continue L_b;
}
//unreachable;
B_a:;
int64_t * ya = stderr;
int64_t za = ya[0];
int64_t ab = 0;
int64_t bb = memory_base;
int64_t cb = bb + ab;
e[4] = cb;
int64_t db = 25;
int64_t eb = bb + db;
int64_t fb = 16;
int64_t* gb = e + fb;
fprintf(za, eb, gb);
int64_t hb = ya[0];
int64_t ib = 65;
int64_t jb = memory_base;
int64_t kb = jb + ib;
int64_t lb = 0;
fprintf(hb, kb, lb);
int64_t mb = 48;
int64_t* nb = e + mb;
stack_pointer = nb;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}