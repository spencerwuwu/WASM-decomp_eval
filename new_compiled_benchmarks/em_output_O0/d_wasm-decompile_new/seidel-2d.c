

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

void kernel_seidel_2d(int a, int b, int c) {
int64_t* d = stack_pointer;
int64_t e = 32;
int64_t * f = d - e;
f[7] = a;
f[6] = b;
f[5] = c;
int64_t g = 0;
f[4] = g;
while (1) {
int64_t h = f[4];
int64_t i = f[7];
int64_t j = 1;
int64_t k = i - j;
int64_t l = h;
int64_t m = k;
int64_t n = l <= m;
int64_t o = 1;
int64_t p = n & o;
if (eqz(p)) goto B_a;
int64_t q = 1;
f[3] = q;
while (1) {
int64_t r = f[3];
int64_t s = f[6];
int64_t t = 2;
int64_t u = s - t;
int64_t v = r;
int64_t w = u;
int64_t x = v <= w;
int64_t y = 1;
int64_t z = x & y;
if (eqz(z)) goto B_c;
int64_t aa = 1;
f[2] = aa;
while (1) {
int64_t ba = f[2];
int64_t ca = f[6];
int64_t da = 2;
int64_t ea = ca - da;
int64_t fa = ba;
int64_t ga = ea;
int64_t ha = fa <= ga;
int64_t ia = 1;
int64_t ja = ha & ia;
if (eqz(ja)) goto B_e;
int64_t ka = f[5];
int64_t la = f[3];
int64_t ma = 1;
int64_t na = la - ma;
int64_t oa = 16000;
int64_t pa = na * oa;
int64_t qa = ka + pa;
int64_t ra = f[2];
int64_t sa = 1;
int64_t ta = ra - sa;
int64_t ua = 3;
int64_t va = ta << ua;
int64_t * wa = qa + va;
double xa = wa[0];
int64_t ya = f[5];
int64_t za = f[3];
int64_t ab = 1;
int64_t bb = za - ab;
int64_t cb = 16000;
int64_t db = bb * cb;
int64_t eb = ya + db;
int64_t fb = f[2];
int64_t gb = 3;
int64_t hb = fb << gb;
int64_t * ib = eb + hb;
double jb = ib[0];
double kb = xa + jb;
int64_t lb = f[5];
int64_t mb = f[3];
int64_t nb = 1;
int64_t ob = mb - nb;
int64_t pb = 16000;
int64_t qb = ob * pb;
int64_t rb = lb + qb;
int64_t sb = f[2];
int64_t tb = 1;
int64_t ub = sb + tb;
int64_t vb = 3;
int64_t wb = ub << vb;
int64_t * xb = rb + wb;
double yb = xb[0];
double zb = kb + yb;
int64_t ac = f[5];
int64_t bc = f[3];
int64_t cc = 16000;
int64_t dc = bc * cc;
int64_t ec = ac + dc;
int64_t fc = f[2];
int64_t gc = 1;
int64_t hc = fc - gc;
int64_t ic = 3;
int64_t jc = hc << ic;
int64_t * kc = ec + jc;
double lc = kc[0];
double mc = zb + lc;
int64_t nc = f[5];
int64_t oc = f[3];
int64_t pc = 16000;
int64_t qc = oc * pc;
int64_t rc = nc + qc;
int64_t sc = f[2];
int64_t tc = 3;
int64_t uc = sc << tc;
int64_t * vc = rc + uc;
double wc = vc[0];
double xc = mc + wc;
int64_t yc = f[5];
int64_t zc = f[3];
int64_t ad = 16000;
int64_t bd = zc * ad;
int64_t cd = yc + bd;
int64_t dd = f[2];
int64_t ed = 1;
int64_t fd = dd + ed;
int64_t gd = 3;
int64_t hd = fd << gd;
int64_t * id = cd + hd;
double jd = id[0];
double kd = xc + jd;
int64_t ld = f[5];
int64_t md = f[3];
int64_t nd = 1;
int64_t od = md + nd;
int64_t pd = 16000;
int64_t qd = od * pd;
int64_t rd = ld + qd;
int64_t sd = f[2];
int64_t td = 1;
int64_t ud = sd - td;
int64_t vd = 3;
int64_t wd = ud << vd;
int64_t * xd = rd + wd;
double yd = xd[0];
double zd = kd + yd;
int64_t ae = f[5];
int64_t be = f[3];
int64_t ce = 1;
int64_t de = be + ce;
int64_t ee = 16000;
int64_t fe = de * ee;
int64_t ge = ae + fe;
int64_t he = f[2];
int64_t ie = 3;
int64_t je = he << ie;
int64_t * ke = ge + je;
double le = ke[0];
double me = zd + le;
int64_t ne = f[5];
int64_t oe = f[3];
int64_t pe = 1;
int64_t qe = oe + pe;
int64_t re = 16000;
int64_t se = qe * re;
int64_t te = ne + se;
int64_t ue = f[2];
int64_t ve = 1;
int64_t we = ue + ve;
int64_t xe = 3;
int64_t ye = we << xe;
int64_t * ze = te + ye;
double af = ze[0];
double bf = me + af;
double cf = 9.0;
double df = bf / cf;
int64_t ef = f[5];
int64_t ff = f[3];
int64_t gf = 16000;
int64_t hf = ff * gf;
int64_t _if = ef + hf;
int64_t jf = f[2];
int64_t kf = 3;
int64_t lf = jf << kf;
int64_t * mf = _if + lf;
mf[0] = df;
int64_t nf = f[2];
int64_t of = 1;
int64_t pf = nf + of;
f[2] = pf;
//continue L_f;
}
//unreachable;
B_e:;
int64_t qf = f[3];
int64_t rf = 1;
int64_t sf = qf + rf;
f[3] = sf;
//continue L_d;
}
//unreachable;
B_c:;
int64_t tf = f[4];
int64_t uf = 1;
int64_t vf = tf + uf;
f[4] = vf;
//continue L_b;
}
//unreachable;
B_a:;
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
int64_t g = 500;
e[4] = g;
long h = 4000000L;
int64_t i = 8;
int64_t j = legalfunc_polybench_alloc_data(h, i);
e[3] = j;
int64_t k = e[5];
int64_t l = e[3];
init_array(k, l);
int64_t m = e[4];
int64_t n = e[5];
int64_t o = e[3];
kernel_seidel_2d(m, n, o);
int64_t p = e[7];
int64_t q = 42;
int64_t r = p;
int64_t s = q;
int64_t t = r > s;
int64_t u = 1;
int64_t v = t & u;
if (eqz(v)) goto B_a;
int64_t * w = e[6];
int64_t x = w[0];
int64_t y = 87;
int64_t z = memory_base;
int64_t aa = z + y;
int64_t ba = strcmp(x, aa);
if (ba) goto B_a;
int64_t ca = e[5];
int64_t da = e[3];
print_array(ca, da);
B_a:;
int64_t ea = e[3];
free(ea);
int64_t fa = 0;
int64_t ga = 32;
int64_t* ha = e + ga;
stack_pointer = ha;
return fa;
}

void init_array(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 16;
{* e (int,)a (int,)b (int,)c (int64_t)d } = c - d;
e.d = a;
e.c = b;
int64_t f = 0;
e.b = f;
while (1) {
int64_t g = e.b;
int64_t h = e.d;
int64_t i = g;
int64_t j = h;
int64_t k = i < j;
int64_t l = 1;
int64_t m = k & l;
if (eqz(m)) goto B_a;
int64_t n = 0;
e.a = n;
while (1) {
int64_t o = e.a;
int64_t p = e.d;
int64_t q = o;
int64_t r = p;
int64_t s = q < r;
int64_t t = 1;
int64_t u = s & t;
if (eqz(u)) goto B_c;
int64_t v = e.b;
double w = f64_convert_i32_s(v);
int64_t x = e.a;
int64_t y = 2;
int64_t z = x + y;
double aa = f64_convert_i32_s(z);
double ba = w * aa;
double ca = 2.0;
double da = ba + ca;
int64_t ea = e.d;
double fa = f64_convert_i32_s(ea);
double ga = da / fa;
int64_t ha = e.c;
int64_t ia = e.b;
int64_t ja = 16000;
int64_t ka = ia * ja;
int64_t* la = ha + ka;
int64_t ma = e.a;
int64_t na = 3;
int64_t oa = ma << na;
int64_t * pa = la + oa;
pa[0] = ga;
int64_t qa = e.a;
int64_t ra = 1;
int64_t sa = qa + ra;
e.a = sa;
//continue L_d;
}
//unreachable;
B_c:;
int64_t ta = e.b;
int64_t ua = 1;
int64_t va = ta + ua;
e.b = va;
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
int64_t ga = ea < fa;
int64_t ha = 1;
int64_t* ia = ga & ha;
if (eqz(ia)) goto B_c;
int64_t ja = (int64_t)e[13];
int64_t ka = (int64_t)e[15];
int64_t la = ja * ka;
int64_t ma = (int64_t)e[12];
int64_t* na = la + ma;
int64_t oa = 20;
int64_t* pa = na % oa;
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