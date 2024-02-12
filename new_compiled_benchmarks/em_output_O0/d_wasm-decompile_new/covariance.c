

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"cov\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_A"
"RRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";









void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_covariance(int a, int b, double c, int d, int e, int f) {
int64_t* g = stack_pointer;
int64_t h = 48;
int64_t* i = g - h;
i[11] = a;
i[10] = b;
i[4] = c;
i[7] = d;
i[6] = e;
i[5] = f;
int64_t j = 0;
i[3] = j;
while (1) {
int64_t k = (int64_t)i[3];
int64_t l = (int64_t)i[11];
int64_t m = k;
int64_t n = l;
int64_t o = m < n;
int64_t p = 1;
int64_t q = o & p;
if (eqz(q)) goto B_a;
int64_t r = (int64_t)i[5];
int64_t s = (int64_t)i[3];
int64_t t = 3;
int64_t u = s << t;
int64_t * v = r + u;
int64_t w = 0;
double x = f64_convert_i32_s(w);
v[0] = x;
int64_t y = 0;
i[4] = y;
while (1) {
int64_t z = (int64_t)i[4];
int64_t aa = (int64_t)i[10];
int64_t ba = z;
int64_t ca = aa;
int64_t da = ba < ca;
int64_t ea = 1;
int64_t fa = da & ea;
if (eqz(fa)) goto B_c;
int64_t ga = (int64_t)i[7];
int64_t ha = (int64_t)i[4];
int64_t ia = 9600;
int64_t ja = ha * ia;
int64_t ka = ga + ja;
int64_t la = (int64_t)i[3];
int64_t ma = 3;
int64_t na = la << ma;
int64_t * oa = ka + na;
double pa = oa[0];
int64_t qa = (int64_t)i[5];
int64_t ra = (int64_t)i[3];
int64_t sa = 3;
int64_t ta = ra << sa;
int64_t * ua = qa + ta;
double va = ua[0];
double wa = va + pa;
ua[0] = wa;
int64_t xa = (int64_t)i[4];
int64_t ya = 1;
int64_t za = xa + ya;
i[4] = za;
//continue L_d;
}
//unreachable;
B_c:;
double ab = (double)i[4];
int64_t bb = (int64_t)i[5];
int64_t cb = (int64_t)i[3];
int64_t db = 3;
int64_t eb = cb << db;
int64_t * fb = bb + eb;
double gb = fb[0];
double hb = gb / ab;
fb[0] = hb;
int64_t ib = (int64_t)i[3];
int64_t jb = 1;
int64_t kb = ib + jb;
i[3] = kb;
//continue L_b;
}
//unreachable;
B_a:;
int64_t lb = 0;
i[4] = lb;
while (1) {
int64_t mb = (int64_t)i[4];
int64_t nb = (int64_t)i[10];
int64_t ob = mb;
int64_t pb = nb;
int64_t qb = ob < pb;
int64_t rb = 1;
int64_t sb = qb & rb;
if (eqz(sb)) goto B_e;
int64_t tb = 0;
i[3] = tb;
while (1) {
int64_t ub = (int64_t)i[3];
int64_t vb = (int64_t)i[11];
int64_t wb = ub;
int64_t xb = vb;
int64_t yb = wb < xb;
int64_t zb = 1;
int64_t ac = yb & zb;
if (eqz(ac)) goto B_g;
int64_t bc = (int64_t)i[5];
int64_t cc = (int64_t)i[3];
int64_t dc = 3;
int64_t ec = cc << dc;
int64_t * fc = bc + ec;
double gc = fc[0];
int64_t hc = (int64_t)i[7];
int64_t ic = (int64_t)i[4];
int64_t jc = 9600;
int64_t kc = ic * jc;
int64_t lc = hc + kc;
int64_t mc = (int64_t)i[3];
int64_t nc = 3;
int64_t oc = mc << nc;
int64_t * pc = lc + oc;
double qc = pc[0];
double rc = qc - gc;
pc[0] = rc;
int64_t sc = (int64_t)i[3];
int64_t tc = 1;
int64_t uc = sc + tc;
i[3] = uc;
//continue L_h;
}
//unreachable;
B_g:;
int64_t vc = (int64_t)i[4];
int64_t wc = 1;
int64_t xc = vc + wc;
i[4] = xc;
//continue L_f;
}
//unreachable;
B_e:;
int64_t yc = 0;
i[4] = yc;
while (1) {
int64_t zc = (int64_t)i[4];
int64_t ad = (int64_t)i[11];
int64_t bd = zc;
int64_t cd = ad;
int64_t dd = bd < cd;
int64_t ed = 1;
int64_t fd = dd & ed;
if (eqz(fd)) goto B_i;
int64_t gd = (int64_t)i[4];
i[3] = gd;
while (1) {
int64_t hd = (int64_t)i[3];
int64_t id = (int64_t)i[11];
int64_t jd = hd;
int64_t kd = id;
int64_t ld = jd < kd;
int64_t md = 1;
int64_t nd = ld & md;
if (eqz(nd)) goto B_k;
int64_t od = (int64_t)i[6];
int64_t pd = (int64_t)i[4];
int64_t qd = 9600;
int64_t rd = pd * qd;
int64_t sd = od + rd;
int64_t td = (int64_t)i[3];
int64_t ud = 3;
int64_t vd = td << ud;
int64_t * wd = sd + vd;
int64_t xd = 0;
double yd = f64_convert_i32_s(xd);
wd[0] = yd;
int64_t zd = 0;
i[2] = zd;
while (1) {
int64_t ae = (int64_t)i[2];
int64_t be = (int64_t)i[10];
int64_t ce = ae;
int64_t de = be;
int64_t ee = ce < de;
int64_t fe = 1;
int64_t ge = ee & fe;
if (eqz(ge)) goto B_m;
int64_t he = (int64_t)i[7];
int64_t ie = (int64_t)i[2];
int64_t je = 9600;
int64_t ke = ie * je;
int64_t le = he + ke;
int64_t me = (int64_t)i[4];
int64_t ne = 3;
int64_t oe = me << ne;
int64_t * pe = le + oe;
double qe = pe[0];
int64_t re = (int64_t)i[7];
int64_t se = (int64_t)i[2];
int64_t te = 9600;
int64_t ue = se * te;
int64_t ve = re + ue;
int64_t we = (int64_t)i[3];
int64_t xe = 3;
int64_t ye = we << xe;
int64_t * ze = ve + ye;
double af = ze[0];
int64_t bf = (int64_t)i[6];
int64_t cf = (int64_t)i[4];
int64_t df = 9600;
int64_t ef = cf * df;
int64_t ff = bf + ef;
int64_t gf = (int64_t)i[3];
int64_t hf = 3;
int64_t _if = gf << hf;
int64_t * jf = ff + _if;
double kf = jf[0];
double lf = qe * af;
double mf = lf + kf;
jf[0] = mf;
int64_t nf = (int64_t)i[2];
int64_t of = 1;
int64_t pf = nf + of;
i[2] = pf;
//continue L_n;
}
//unreachable;
B_m:;
double qf = (double)i[4];
double rf = 1.0;
double sf = qf - rf;
int64_t tf = (int64_t)i[6];
int64_t uf = (int64_t)i[4];
int64_t vf = 9600;
int64_t wf = uf * vf;
int64_t xf = tf + wf;
int64_t yf = (int64_t)i[3];
int64_t zf = 3;
int64_t ag = yf << zf;
int64_t * bg = xf + ag;
double cg = bg[0];
double dg = cg / sf;
bg[0] = dg;
int64_t eg = (int64_t)i[6];
int64_t fg = (int64_t)i[4];
int64_t gg = 9600;
int64_t hg = fg * gg;
int64_t ig = eg + hg;
int64_t jg = (int64_t)i[3];
int64_t kg = 3;
int64_t lg = jg << kg;
int64_t * mg = ig + lg;
double ng = mg[0];
int64_t og = (int64_t)i[6];
int64_t pg = (int64_t)i[3];
int64_t qg = 9600;
int64_t rg = pg * qg;
int64_t sg = og + rg;
int64_t tg = (int64_t)i[4];
int64_t ug = 3;
int64_t vg = tg << ug;
int64_t * wg = sg + vg;
wg[0] = ng;
int64_t xg = (int64_t)i[3];
int64_t yg = 1;
int64_t zg = xg + yg;
i[3] = zg;
//continue L_l;
}
//unreachable;
B_k:;
int64_t ah = (int64_t)i[4];
int64_t bh = 1;
int64_t ch = ah + bh;
i[4] = ch;
//continue L_j;
}
//unreachable;
B_i:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 48;
int64_t* e = c - d;
stack_pointer = e;
e[11] = a;
e[10] = b;
int64_t f = 1400;
e[9] = f;
int64_t g = 1200;
e[8] = g;
long h = 1680000L;
int64_t i = 8;
int64_t j = legalfunc_polybench_alloc_data(h, i);
e[5] = j;
long k = 1440000L;
int64_t l = 8;
int64_t m = legalfunc_polybench_alloc_data(k, l);
e[4] = m;
long n = 1200L;
int64_t o = 8;
int64_t p = legalfunc_polybench_alloc_data(n, o);
e[3] = p;
int64_t q = (int64_t)e[8];
int64_t r = (int64_t)e[9];
int64_t s = (int64_t)e[5];
int64_t t = 24;
int64_t* u = e + t;
int64_t* v = u;
init_array(q, r, v, s);
int64_t w = (int64_t)e[8];
int64_t x = (int64_t)e[9];
double y = (double)e[3];
int64_t z = (int64_t)e[5];
int64_t aa = (int64_t)e[4];
int64_t ba = (int64_t)e[3];
kernel_covariance(w, x, y, z, aa, ba);
int64_t ca = (int64_t)e[11];
int64_t da = 42;
int64_t ea = ca;
int64_t fa = da;
int64_t ga = ea > fa;
int64_t ha = 1;
int64_t ia = ga & ha;
if (eqz(ia)) goto B_a;
int64_t * ja = (int64_t)e[10];
int64_t ka = ja[0];
int64_t la = 89;
int64_t ma = memory_base;
int64_t na = ma + la;
int64_t oa = strcmp(ka, na);
if (oa) goto B_a;
int64_t pa = (int64_t)e[8];
int64_t qa = (int64_t)e[4];
print_array(pa, qa);
B_a:;
int64_t ra = (int64_t)e[5];
free(ra);
int64_t sa = (int64_t)e[4];
free(sa);
int64_t ta = (int64_t)e[3];
free(ta);
int64_t ua = 0;
int64_t va = 48;
int64_t* wa = e + va;
stack_pointer = wa;
return ua;
}

void init_array(int a, int b, int c, int d) {
int64_t* e = stack_pointer;
int64_t f = 32;
int64_t * g = e - f;
g[7] = a;
g[6] = b;
g[5] = c;
g[4] = d;
int64_t h = g[6];
double i = f64_convert_i32_s(h);
int64_t * j = g[5];
j[0] = i;
int64_t k = 0;
g[3] = k;
while (1) {
int64_t l = g[3];
int64_t m = 1400;
int64_t n = l;
int64_t o = m;
int64_t p = n < o;
int64_t q = 1;
int64_t r = p & q;
if (eqz(r)) goto B_a;
int64_t s = 0;
g[2] = s;
while (1) {
int64_t t = g[2];
int64_t u = 1200;
int64_t v = t;
int64_t* w = u;
int64_t* x = v < w;
int64_t y = 1;
int64_t* z = x & y;
if (eqz(z)) goto B_c;
int64_t aa = g[3];
double ba = f64_convert_i32_s(aa);
int64_t ca = g[2];
double da = f64_convert_i32_s(ca);
double ea = ba * da;
double fa = 1200.0;
double ga = ea / fa;
int64_t ha = g[4];
int64_t ia = g[3];
int64_t ja = 9600;
int64_t ka = ia * ja;
int64_t la = ha + ka;
int64_t ma = g[2];
int64_t na = 3;
int64_t oa = ma << na;
int64_t * pa = la + oa;
pa[0] = ga;
int64_t qa = g[2];
int64_t ra = 1;
int64_t sa = qa + ra;
g[2] = sa;
//continue L_d;
}
//unreachable;
B_c:;
int64_t ta = g[3];
int64_t ua = 1;
int64_t va = ta + ua;
g[3] = va;
//continue L_b;
}
//unreachable;
B_a:;
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
int64_t h = 44;
int64_t i = memory_base;
int64_t* j = i + h;
int64_t k = 0;
fprintf(g, j, k);
int64_t l = f[0];
int64_t m = 0;
int64_t n = memory_base;
int64_t o = n + m;
e[8] = o;
int64_t p = 4;
int64_t q = n + p;
int64_t r = 32;
int64_t* s = e + r;
fprintf(l, q, s);
int64_t t = 0;
e[13] = t;
while (1) {
int64_t u = (int64_t)e[13];
int64_t v = (int64_t)e[15];
int64_t* w = u;
int64_t* x = v;
int64_t* y = w < x;
int64_t z = 1;
int64_t* aa = y & z;
if (eqz(aa)) goto B_a;
int64_t ba = 0;
e[12] = ba;
while (1) {
int64_t ca = (int64_t)e[12];
int64_t da = (int64_t)e[15];
int64_t ea = ca;
int64_t fa = da;
int64_t ga = ea < fa;
int64_t ha = 1;
int64_t ia = ga & ha;
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
int64_t sa = 88;
int64_t ta = memory_base;
int64_t ua = ta + sa;
int64_t va = 0;
fprintf(ra, ua, va);
B_e:;
int64_t * wa = stderr;
int64_t xa = wa[0];
int64_t ya = (int64_t)e[14];
int64_t za = (int64_t)e[13];
int64_t ab = 9600;
int64_t bb = za * ab;
int64_t cb = ya + bb;
int64_t db = (int64_t)e[12];
int64_t eb = 3;
int64_t fb = db << eb;
int64_t * gb = cb + fb;
double hb = gb[0];
e[0] = hb;
int64_t ib = 19;
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
int64_t tb = 0;
int64_t ub = memory_base;
int64_t vb = ub + tb;
e[4] = vb;
int64_t wb = 27;
int64_t xb = ub + wb;
int64_t yb = 16;
int64_t* zb = e + yb;
fprintf(sb, xb, zb);
int64_t ac = rb[0];
int64_t bc = 67;
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