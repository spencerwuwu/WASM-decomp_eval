

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"w\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";









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
//continue L_d;
}
//unreachable;
B_c:;
int64_t dc = (int64_t)o[4];
int64_t ec = 1;
int64_t fc = dc + ec;
o[4] = fc;
//continue L_b;
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
//continue L_h;
}
//unreachable;
B_g:;
int64_t ee = (int64_t)o[4];
int64_t fe = 1;
int64_t ge = ee + fe;
o[4] = ge;
//continue L_f;
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
//continue L_j;
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
//continue L_n;
}
//unreachable;
B_m:;
int64_t ih = (int64_t)o[4];
int64_t jh = 1;
int64_t kh = ih + jh;
o[4] = kh;
//continue L_l;
}
//unreachable;
B_k:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 80;
int64_t* e = c - d;
stack_pointer = e;
e[19] = a;
e[18] = b;
int64_t f = 2000;
e[17] = f;
long g = 4000000L;
int64_t h = 8;
int64_t i = legalfunc_polybench_alloc_data(g, h);
e[11] = i;
long j = 2000L;
int64_t k = 8;
int64_t l = legalfunc_polybench_alloc_data(j, k);
e[10] = l;
long m = 2000L;
int64_t n = 8;
int64_t o = legalfunc_polybench_alloc_data(m, n);
e[9] = o;
long p = 2000L;
int64_t q = 8;
int64_t r = legalfunc_polybench_alloc_data(p, q);
e[8] = r;
long s = 2000L;
int64_t t = 8;
int64_t u = legalfunc_polybench_alloc_data(s, t);
e[7] = u;
long v = 2000L;
int64_t w = 8;
int64_t x = legalfunc_polybench_alloc_data(v, w);
e[6] = x;
long y = 2000L;
int64_t z = 8;
int64_t aa = legalfunc_polybench_alloc_data(y, z);
e[5] = aa;
long ba = 2000L;
int64_t ca = 8;
int64_t da = legalfunc_polybench_alloc_data(ba, ca);
e[4] = da;
long ea = 2000L;
int64_t fa = 8;
int64_t ga = legalfunc_polybench_alloc_data(ea, fa);
e[3] = ga;
int64_t ha = (int64_t)e[17];
int64_t ia = (int64_t)e[11];
int64_t ja = (int64_t)e[10];
int64_t ka = (int64_t)e[9];
int64_t la = (int64_t)e[8];
int64_t ma = (int64_t)e[7];
int64_t na = (int64_t)e[6];
int64_t oa = (int64_t)e[5];
int64_t pa = (int64_t)e[4];
int64_t qa = (int64_t)e[3];
int64_t ra = 56;
int64_t* sa = e + ra;
int64_t* ta = sa;
int64_t ua = 48;
int64_t* va = e + ua;
int64_t* wa = va;
init_array(ha, ta, wa, ia, ja, ka, la, ma, na, oa, pa, qa);
int64_t xa = (int64_t)e[17];
double ya = (double)e[7];
double za = (double)e[6];
int64_t ab = (int64_t)e[11];
int64_t bb = (int64_t)e[10];
int64_t cb = (int64_t)e[9];
int64_t db = (int64_t)e[8];
int64_t eb = (int64_t)e[7];
int64_t fb = (int64_t)e[6];
int64_t gb = (int64_t)e[5];
int64_t hb = (int64_t)e[4];
int64_t ib = (int64_t)e[3];
kernel_gemver(xa, ya, za, ab, bb, cb, db, eb, fb, gb, hb, ib);
int64_t jb = (int64_t)e[19];
int64_t kb = 42;
int64_t lb = jb;
int64_t mb = kb;
int64_t nb = lb > mb;
int64_t ob = 1;
int64_t pb = nb & ob;
if (eqz(pb)) goto B_a;
int64_t * qb = (int64_t)e[18];
int64_t rb = qb[0];
int64_t sb = 87;
int64_t tb = memory_base;
int64_t ub = tb + sb;
int64_t vb = strcmp(rb, ub);
if (vb) goto B_a;
int64_t wb = (int64_t)e[17];
int64_t xb = (int64_t)e[6];
print_array(wb, xb);
B_a:;
int64_t yb = (int64_t)e[11];
free(yb);
int64_t zb = (int64_t)e[10];
free(zb);
int64_t ac = (int64_t)e[9];
free(ac);
int64_t bc = (int64_t)e[8];
free(bc);
int64_t cc = (int64_t)e[7];
free(cc);
int64_t dc = (int64_t)e[6];
free(dc);
int64_t ec = (int64_t)e[5];
free(ec);
int64_t fc = (int64_t)e[4];
free(fc);
int64_t gc = (int64_t)e[3];
free(gc);
int64_t hc = 0;
int64_t ic = 80;
int64_t* jc = e + ic;
stack_pointer = jc;
return hc;
}

void init_array(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l) {
int64_t* m = stack_pointer;
int64_t n = 64;
{ o (double,)a (int,)b (int,)c (int,)d (int,)e (int,)f (int,)g (int,)h (int,)i (int,)j (int,)k (int,)l (int,)m (int,)n (int64_t)o } =
m - n;
o.o = a;
o.n = b;
o.m = c;
o.l = d;
o.k = e;
o.j = f;
o.i = g;
o.h = h;
o.g = i;
o.f = j;
o.e = k;
o.d = l;
int64_t * p = o.n;
double q = 1.5;
p[0] = q;
int64_t * r = o.m;
double s = 1.2;
r[0] = s;
int64_t t = o.o;
double u = f64_convert_i32_s(t);
o.a = u;
int64_t v = 0;
o.c = v;
while (1) {
int64_t w = o.c;
int64_t x = o.o;
int64_t y = w;
int64_t z = x;
int64_t aa = y < z;
int64_t ba = 1;
int64_t ca = aa & ba;
if (eqz(ca)) goto B_a;
int64_t da = o.c;
double ea = f64_convert_i32_s(da);
int64_t fa = o.k;
int64_t ga = o.c;
int64_t ha = 3;
int64_t ia = ga << ha;
int64_t * ja = fa + ia;
ja[0] = ea;
int64_t ka = o.c;
int64_t la = 1;
int64_t ma = ka + la;
double na = f64_convert_i32_s(ma);
double oa = o.a;
double pa = na / oa;
double qa = 2.0;
double ra = pa / qa;
int64_t sa = o.i;
int64_t ta = o.c;
int64_t ua = 3;
int64_t* va = ta << ua;
int64_t * wa = sa + va;
wa[0] = ra;
int64_t xa = o.c;
int64_t ya = 1;
int64_t za = xa + ya;
double ab = f64_convert_i32_s(za);
double bb = o.a;
double cb = ab / bb;
double db = 4.0;
double eb = cb / db;
int64_t fb = o.j;
int64_t gb = o.c;
int64_t hb = 3;
int64_t ib = gb << hb;
int64_t * jb = fb + ib;
jb[0] = eb;
int64_t kb = o.c;
int64_t lb = 1;
int64_t mb = kb + lb;
double nb = f64_convert_i32_s(mb);
double ob = o.a;
double pb = nb / ob;
double qb = 6.0;
double rb = pb / qb;
int64_t sb = o.h;
int64_t tb = o.c;
int64_t ub = 3;
int64_t vb = tb << ub;
int64_t * wb = sb + vb;
wb[0] = rb;
int64_t xb = o.c;
int64_t yb = 1;
int64_t zb = xb + yb;
double ac = f64_convert_i32_s(zb);
double bc = o.a;
double cc = ac / bc;
double dc = 8.0;
double ec = cc / dc;
int64_t fc = o.e;
int64_t gc = o.c;
int64_t hc = 3;
int64_t ic = gc << hc;
int64_t * jc = fc + ic;
jc[0] = ec;
int64_t kc = o.c;
int64_t lc = 1;
int64_t mc = kc + lc;
double nc = f64_convert_i32_s(mc);
double oc = o.a;
double pc = nc / oc;
double qc = 9.0;
double rc = pc / qc;
int64_t sc = o.d;
int64_t tc = o.c;
int64_t uc = 3;
int64_t vc = tc << uc;
int64_t * wc = sc + vc;
wc[0] = rc;
int64_t xc = o.f;
int64_t yc = o.c;
int64_t zc = 3;
int64_t ad = yc << zc;
int64_t * bd = xc + ad;
int64_t cd = 0;
double dd = f64_convert_i32_s(cd);
bd[0] = dd;
int64_t ed = o.g;
int64_t fd = o.c;
int64_t gd = 3;
int64_t hd = fd << gd;
int64_t * id = ed + hd;
int64_t jd = 0;
double kd = f64_convert_i32_s(jd);
id[0] = kd;
int64_t ld = 0;
o.b = ld;
while (1) {
int64_t md = o.b;
int64_t nd = o.o;
int64_t od = md;
int64_t pd = nd;
int64_t qd = od < pd;
int64_t rd = 1;
int64_t sd = qd & rd;
if (eqz(sd)) goto B_c;
int64_t td = o.c;
int64_t ud = o.b;
int64_t vd = td * ud;
int64_t wd = o.o;
int64_t xd = vd % wd;
double yd = f64_convert_i32_s(xd);
int64_t zd = o.o;
double ae = f64_convert_i32_s(zd);
double be = yd / ae;
int64_t ce = o.l;
int64_t de = o.c;
int64_t ee = 16000;
int64_t fe = de * ee;
int64_t ge = ce + fe;
int64_t he = o.b;
int64_t ie = 3;
int64_t je = he << ie;
int64_t * ke = ge + je;
ke[0] = be;
int64_t le = o.b;
int64_t me = 1;
int64_t ne = le + me;
o.b = ne;
//continue L_d;
}
//unreachable;
B_c:;
int64_t oe = o.c;
int64_t pe = 1;
int64_t qe = oe + pe;
o.c = qe;
//continue L_b;
}
//unreachable;
B_a:;
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
int64_t j = i + h;
int64_t k = 0;
fprintf(g, j, k);
int64_t l = f[0];
int64_t m = 0;
int64_t n = memory_base;
int64_t* o = n + m;
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
int64_t* ua = ta + sa;
fprintf(la, ua, e);
int64_t va = (int64_t)e[9];
int64_t wa = 1;
int64_t* xa = va + wa;
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