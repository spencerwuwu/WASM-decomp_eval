

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00C\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";









void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_gemm(int a, int b, int c, double d, double e, int f, int g, int h) {
int64_t* i = stack_pointer;
int64_t j = 64;
int64_t* k = i - j;
k[15] = a;
k[14] = b;
k[13] = c;
k[5] = d;
k[4] = e;
k[7] = f;
k[6] = g;
k[5] = h;
int64_t l = 0;
k[4] = l;
while (1) {
int64_t m = (int64_t)k[4];
int64_t n = (int64_t)k[15];
int64_t o = m;
int64_t p = n;
int64_t q = o < p;
int64_t r = 1;
int64_t s = q & r;
if (eqz(s)) goto B_a;
int64_t t = 0;
k[3] = t;
while (1) {
int64_t u = (int64_t)k[3];
int64_t v = (int64_t)k[14];
int64_t w = u;
int64_t x = v;
int64_t y = w < x;
int64_t z = 1;
int64_t aa = y & z;
if (eqz(aa)) goto B_c;
double ba = (double)k[4];
int64_t ca = (int64_t)k[7];
int64_t da = (int64_t)k[4];
int64_t ea = 8800;
int64_t fa = da * ea;
int64_t ga = ca + fa;
int64_t ha = (int64_t)k[3];
int64_t ia = 3;
int64_t ja = ha << ia;
int64_t * ka = ga + ja;
double la = ka[0];
double ma = la * ba;
ka[0] = ma;
int64_t na = (int64_t)k[3];
int64_t oa = 1;
int64_t pa = na + oa;
k[3] = pa;
//continue L_d;
}
//unreachable;
B_c:;
int64_t qa = 0;
k[2] = qa;
while (1) {
int64_t ra = (int64_t)k[2];
int64_t sa = (int64_t)k[13];
int64_t ta = ra;
int64_t ua = sa;
int64_t va = ta < ua;
int64_t wa = 1;
int64_t xa = va & wa;
if (eqz(xa)) goto B_e;
int64_t ya = 0;
k[3] = ya;
while (1) {
int64_t za = (int64_t)k[3];
int64_t ab = (int64_t)k[14];
int64_t bb = za;
int64_t cb = ab;
int64_t db = bb < cb;
int64_t eb = 1;
int64_t fb = db & eb;
if (eqz(fb)) goto B_g;
double gb = (double)k[5];
int64_t hb = (int64_t)k[6];
int64_t ib = (int64_t)k[4];
int64_t jb = 9600;
int64_t kb = ib * jb;
int64_t lb = hb + kb;
int64_t mb = (int64_t)k[2];
int64_t nb = 3;
int64_t ob = mb << nb;
int64_t * pb = lb + ob;
double qb = pb[0];
double rb = gb * qb;
int64_t sb = (int64_t)k[5];
int64_t tb = (int64_t)k[2];
int64_t ub = 8800;
int64_t vb = tb * ub;
int64_t wb = sb + vb;
int64_t xb = (int64_t)k[3];
int64_t yb = 3;
int64_t zb = xb << yb;
int64_t * ac = wb + zb;
double bc = ac[0];
int64_t cc = (int64_t)k[7];
int64_t dc = (int64_t)k[4];
int64_t ec = 8800;
int64_t fc = dc * ec;
int64_t gc = cc + fc;
int64_t hc = (int64_t)k[3];
int64_t ic = 3;
int64_t jc = hc << ic;
int64_t * kc = gc + jc;
double lc = kc[0];
double mc = rb * bc;
double nc = mc + lc;
kc[0] = nc;
int64_t oc = (int64_t)k[3];
int64_t pc = 1;
int64_t qc = oc + pc;
k[3] = qc;
//continue L_h;
}
//unreachable;
B_g:;
int64_t rc = (int64_t)k[2];
int64_t sc = 1;
int64_t tc = rc + sc;
k[2] = tc;
//continue L_f;
}
//unreachable;
B_e:;
int64_t uc = (int64_t)k[4];
int64_t vc = 1;
int64_t wc = uc + vc;
k[4] = wc;
//continue L_b;
}
//unreachable;
B_a:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 64;
int64_t* e = c - d;
stack_pointer = e;
e[15] = a;
e[14] = b;
int64_t f = 1000;
e[13] = f;
int64_t g = 1100;
e[12] = g;
int64_t h = 1200;
e[11] = h;
long i = 1100000L;
int64_t j = 8;
int64_t k = legalfunc_polybench_alloc_data(i, j);
e[5] = k;
long l = 1200000L;
int64_t m = 8;
int64_t n = legalfunc_polybench_alloc_data(l, m);
e[4] = n;
long o = 1320000L;
int64_t p = 8;
int64_t q = legalfunc_polybench_alloc_data(o, p);
e[3] = q;
int64_t r = (int64_t)e[13];
int64_t s = (int64_t)e[12];
int64_t t = (int64_t)e[11];
int64_t u = (int64_t)e[5];
int64_t v = (int64_t)e[4];
int64_t w = (int64_t)e[3];
int64_t x = 32;
int64_t* y = e + x;
int64_t* z = y;
int64_t aa = 24;
int64_t* ba = e + aa;
int64_t* ca = ba;
init_array(r, s, t, z, ca, u, v, w);
int64_t da = (int64_t)e[13];
int64_t ea = (int64_t)e[12];
int64_t fa = (int64_t)e[11];
double ga = (double)e[4];
double ha = (double)e[3];
int64_t ia = (int64_t)e[5];
int64_t ja = (int64_t)e[4];
int64_t ka = (int64_t)e[3];
kernel_gemm(da, ea, fa, ga, ha, ia, ja, ka);
int64_t la = (int64_t)e[15];
int64_t ma = 42;
int64_t na = la;
int64_t oa = ma;
int64_t pa = na > oa;
int64_t qa = 1;
int64_t ra = pa & qa;
if (eqz(ra)) goto B_a;
int64_t * sa = (int64_t)e[14];
int64_t ta = sa[0];
int64_t ua = 87;
int64_t va = memory_base;
int64_t wa = va + ua;
int64_t xa = strcmp(ta, wa);
if (xa) goto B_a;
int64_t ya = (int64_t)e[13];
int64_t za = (int64_t)e[12];
int64_t ab = (int64_t)e[5];
print_array(ya, za, ab);
B_a:;
int64_t bb = (int64_t)e[5];
free(bb);
int64_t cb = (int64_t)e[4];
free(cb);
int64_t db = (int64_t)e[3];
free(db);
int64_t eb = 0;
int64_t fb = 64;
int64_t* gb = e + fb;
stack_pointer = gb;
return eb;
}

void init_array(int a, int b, int c, int d, int e, int f, int g, int h) {
int64_t* i = stack_pointer;
int64_t j = 48;
int64_t * k = i - j;
k[11] = a;
k[10] = b;
k[9] = c;
k[8] = d;
k[7] = e;
k[6] = f;
k[5] = g;
k[4] = h;
int64_t * l = k[8];
double m = 1.5;
l[0] = m;
int64_t * n = k[7];
double o = 1.2;
n[0] = o;
int64_t p = 0;
k[3] = p;
while (1) {
int64_t q = k[3];
int64_t r = k[11];
int64_t s = q;
int64_t t = r;
int64_t u = s < t;
int64_t v = 1;
int64_t w = u & v;
if (eqz(w)) goto B_a;
int64_t x = 0;
k[2] = x;
while (1) {
int64_t y = k[2];
int64_t z = k[10];
int64_t* aa = y;
int64_t* ba = z;
int64_t* ca = aa < ba;
int64_t da = 1;
int64_t* ea = ca & da;
if (eqz(ea)) goto B_c;
int64_t fa = k[3];
int64_t ga = k[2];
int64_t ha = fa * ga;
int64_t ia = 1;
int64_t ja = ha + ia;
int64_t ka = k[11];
int64_t la = ja % ka;
double ma = f64_convert_i32_s(la);
int64_t na = k[11];
double oa = f64_convert_i32_s(na);
double pa = ma / oa;
int64_t qa = k[6];
int64_t ra = k[3];
int64_t sa = 8800;
int64_t ta = ra * sa;
int64_t ua = qa + ta;
int64_t va = k[2];
int64_t wa = 3;
int64_t xa = va << wa;
int64_t * ya = ua + xa;
ya[0] = pa;
int64_t za = k[2];
int64_t ab = 1;
int64_t bb = za + ab;
k[2] = bb;
//continue L_d;
}
//unreachable;
B_c:;
int64_t cb = k[3];
int64_t db = 1;
int64_t eb = cb + db;
k[3] = eb;
//continue L_b;
}
//unreachable;
B_a:;
int64_t fb = 0;
k[3] = fb;
while (1) {
int64_t gb = k[3];
int64_t hb = k[11];
int64_t* ib = gb;
int64_t jb = hb;
int64_t* kb = ib < jb;
int64_t lb = 1;
int64_t* mb = kb & lb;
if (eqz(mb)) goto B_e;
int64_t nb = 0;
k[2] = nb;
while (1) {
int64_t ob = k[2];
int64_t pb = k[9];
int64_t qb = ob;
int64_t rb = pb;
int64_t sb = qb < rb;
int64_t tb = 1;
int64_t ub = sb & tb;
if (eqz(ub)) goto B_g;
int64_t vb = k[3];
int64_t wb = k[2];
int64_t xb = 1;
int64_t yb = wb + xb;
int64_t zb = vb * yb;
int64_t ac = k[9];
int64_t bc = zb % ac;
double cc = f64_convert_i32_s(bc);
int64_t dc = k[9];
double ec = f64_convert_i32_s(dc);
double fc = cc / ec;
int64_t gc = k[5];
int64_t hc = k[3];
int64_t ic = 9600;
int64_t jc = hc * ic;
int64_t kc = gc + jc;
int64_t lc = k[2];
int64_t mc = 3;
int64_t nc = lc << mc;
int64_t * oc = kc + nc;
oc[0] = fc;
int64_t pc = k[2];
int64_t qc = 1;
int64_t rc = pc + qc;
k[2] = rc;
//continue L_h;
}
//unreachable;
B_g:;
int64_t sc = k[3];
int64_t tc = 1;
int64_t uc = sc + tc;
k[3] = uc;
//continue L_f;
}
//unreachable;
B_e:;
int64_t vc = 0;
k[3] = vc;
while (1) {
int64_t wc = k[3];
int64_t xc = k[9];
int64_t yc = wc;
int64_t zc = xc;
int64_t ad = yc < zc;
int64_t bd = 1;
int64_t cd = ad & bd;
if (eqz(cd)) goto B_i;
int64_t dd = 0;
k[2] = dd;
while (1) {
int64_t ed = k[2];
int64_t fd = k[10];
int64_t gd = ed;
int64_t hd = fd;
int64_t id = gd < hd;
int64_t jd = 1;
int64_t kd = id & jd;
if (eqz(kd)) goto B_k;
int64_t ld = k[3];
int64_t md = k[2];
int64_t nd = 2;
int64_t od = md + nd;
int64_t pd = ld * od;
int64_t qd = k[10];
int64_t rd = pd % qd;
double sd = f64_convert_i32_s(rd);
int64_t td = k[10];
double ud = f64_convert_i32_s(td);
double vd = sd / ud;
int64_t wd = k[4];
int64_t xd = k[3];
int64_t yd = 8800;
int64_t zd = xd * yd;
int64_t ae = wd + zd;
int64_t be = k[2];
int64_t ce = 3;
int64_t de = be << ce;
int64_t * ee = ae + de;
ee[0] = vd;
int64_t fe = k[2];
int64_t ge = 1;
int64_t he = fe + ge;
k[2] = he;
//continue L_l;
}
//unreachable;
B_k:;
int64_t ie = k[3];
int64_t je = 1;
int64_t ke = ie + je;
k[3] = ke;
//continue L_j;
}
//unreachable;
B_i:;
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
int64_t* z = x < y;
int64_t aa = 1;
int64_t* ba = z & aa;
if (eqz(ba)) goto B_a;
int64_t ca = 0;
f[11] = ca;
while (1) {
int64_t da = (int64_t)f[11];
int64_t ea = (int64_t)f[14];
int64_t fa = da;
int64_t* ga = ea;
int64_t* ha = fa < ga;
int64_t ia = 1;
int64_t* ja = ha & ia;
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
int64_t* lb = kb + jb;
fprintf(ya, lb, f);
int64_t mb = (int64_t)f[11];
int64_t nb = 1;
int64_t* ob = mb + nb;
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

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}