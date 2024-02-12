

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00x2\00x1\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DU"
"MP_ARRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";









void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_mvt(int a, int b, int c, int d, int e, int f) {
int64_t* g = stack_pointer;
int64_t h = 32;
{ i (int,)a (int,)b (int,)c (int,)d (int,)e (int,)f (int,)g (int64_t)h } =
g - h;
i.h = a;
i.g = b;
i.f = c;
i.e = d;
i.d = e;
i.c = f;
int64_t j = 0;
i.b = j;
while (1) {
int64_t k = i.b;
int64_t l = i.h;
int64_t m = k;
int64_t n = l;
int64_t o = m < n;
int64_t p = 1;
int64_t q = o & p;
if (eqz(q)) goto B_a;
int64_t r = 0;
i.a = r;
while (1) {
int64_t s = i.a;
int64_t t = i.h;
int64_t u = s;
int64_t v = t;
int64_t w = u < v;
int64_t x = 1;
int64_t y = w & x;
if (eqz(y)) goto B_c;
int64_t z = i.g;
int64_t aa = i.b;
int64_t ba = 3;
int64_t ca = aa << ba;
int64_t * da = z + ca;
double ea = da[0];
int64_t fa = i.c;
int64_t ga = i.b;
int64_t ha = 16000;
int64_t ia = ga * ha;
int64_t ja = fa + ia;
int64_t ka = i.a;
int64_t la = 3;
int64_t ma = ka << la;
int64_t * na = ja + ma;
double oa = na[0];
int64_t pa = i.e;
int64_t qa = i.a;
int64_t ra = 3;
int64_t sa = qa << ra;
int64_t * ta = pa + sa;
double ua = ta[0];
double va = oa * ua;
double wa = va + ea;
int64_t xa = i.g;
int64_t ya = i.b;
int64_t za = 3;
int64_t ab = ya << za;
int64_t * bb = xa + ab;
bb[0] = wa;
int64_t cb = i.a;
int64_t db = 1;
int64_t eb = cb + db;
i.a = eb;
//continue L_d;
}
//unreachable;
B_c:;
int64_t fb = i.b;
int64_t gb = 1;
int64_t hb = fb + gb;
i.b = hb;
//continue L_b;
}
//unreachable;
B_a:;
int64_t ib = 0;
i.b = ib;
while (1) {
int64_t jb = i.b;
int64_t kb = i.h;
int64_t lb = jb;
int64_t mb = kb;
int64_t nb = lb < mb;
int64_t ob = 1;
int64_t pb = nb & ob;
if (eqz(pb)) goto B_e;
int64_t qb = 0;
i.a = qb;
while (1) {
int64_t rb = i.a;
int64_t sb = i.h;
int64_t tb = rb;
int64_t ub = sb;
int64_t vb = tb < ub;
int64_t wb = 1;
int64_t xb = vb & wb;
if (eqz(xb)) goto B_g;
int64_t yb = i.f;
int64_t zb = i.b;
int64_t ac = 3;
int64_t bc = zb << ac;
int64_t * cc = yb + bc;
double dc = cc[0];
int64_t ec = i.c;
int64_t fc = i.a;
int64_t gc = 16000;
int64_t hc = fc * gc;
int64_t ic = ec + hc;
int64_t jc = i.b;
int64_t kc = 3;
int64_t lc = jc << kc;
int64_t * mc = ic + lc;
double nc = mc[0];
int64_t oc = i.d;
int64_t pc = i.a;
int64_t qc = 3;
int64_t rc = pc << qc;
int64_t * sc = oc + rc;
double tc = sc[0];
double uc = nc * tc;
double vc = uc + dc;
int64_t wc = i.f;
int64_t xc = i.b;
int64_t yc = 3;
int64_t zc = xc << yc;
int64_t * ad = wc + zc;
ad[0] = vc;
int64_t bd = i.a;
int64_t cd = 1;
int64_t dd = bd + cd;
i.a = dd;
//continue L_h;
}
//unreachable;
B_g:;
int64_t ed = i.b;
int64_t fd = 1;
int64_t gd = ed + fd;
i.b = gd;
//continue L_f;
}
//unreachable;
B_e:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 32;
{ e (int,)a (int,)b (int,)c (int,)d (int,)e (int,)f (int,)g (int64_t)h } =
c - d;
stack_pointer = e;
e.h = a;
e.g = b;
int64_t f = 2000;
e.f = f;
long g = 4000000L;
int64_t h = 8;
int64_t i = legalfunc_polybench_alloc_data(g, h);
e.e = i;
long j = 2000L;
int64_t k = 8;
int64_t l = legalfunc_polybench_alloc_data(j, k);
e.d = l;
long m = 2000L;
int64_t n = 8;
int64_t o = legalfunc_polybench_alloc_data(m, n);
e.c = o;
long p = 2000L;
int64_t q = 8;
int64_t r = legalfunc_polybench_alloc_data(p, q);
e.b = r;
long s = 2000L;
int64_t t = 8;
int64_t u = legalfunc_polybench_alloc_data(s, t);
e.a = u;
int64_t v = e.f;
int64_t w = e.d;
int64_t x = e.c;
int64_t y = e.b;
int64_t z = e.a;
int64_t aa = e.e;
init_array(v, w, x, y, z, aa);
int64_t ba = e.f;
int64_t ca = e.d;
int64_t da = e.c;
int64_t ea = e.b;
int64_t fa = e.a;
int64_t ga = e.e;
kernel_mvt(ba, ca, da, ea, fa, ga);
int64_t ha = e.h;
int64_t ia = 42;
int64_t ja = ha;
int64_t ka = ia;
int64_t la = ja > ka;
int64_t ma = 1;
int64_t na = la & ma;
if (eqz(na)) goto B_a;
int64_t * oa = e.g;
int64_t pa = oa[0];
int64_t qa = 91;
int64_t ra = memory_base;
int64_t sa = ra + qa;
int64_t ta = strcmp(pa, sa);
if (ta) goto B_a;
int64_t ua = e.f;
int64_t va = e.d;
int64_t wa = e.c;
print_array(ua, va, wa);
B_a:;
int64_t xa = e.e;
free(xa);
int64_t ya = e.d;
free(ya);
int64_t za = e.c;
free(za);
int64_t ab = e.b;
free(ab);
int64_t bb = e.a;
free(bb);
int64_t cb = 0;
int64_t db = 32;
int64_t eb = e + db;
stack_pointer = eb;
return cb;
}

void init_array(int a, int b, int c, int d, int e, int f) {
int64_t* g = stack_pointer;
int64_t h = 32;
{ i (int,)a (int,)b (int,)c (int,)d (int,)e (int,)f (int,)g (int64_t)h } =
g - h;
i.h = a;
i.g = b;
i.f = c;
i.e = d;
i.d = e;
i.c = f;
int64_t j = 0;
i.b = j;
while (1) {
int64_t k = i.b;
int64_t l = i.h;
int64_t m = k;
int64_t n = l;
int64_t o = m < n;
int64_t p = 1;
int64_t q = o & p;
if (eqz(q)) goto B_a;
int64_t r = i.b;
int64_t s = i.h;
int64_t t = r % s;
double u = f64_convert_i32_s(t);
int64_t v = i.h;
double w = f64_convert_i32_s(v);
double x = u / w;
int64_t y = i.g;
int64_t z = i.b;
int64_t aa = 3;
int64_t ba = z << aa;
int64_t * ca = y + ba;
ca[0] = x;
int64_t da = i.b;
int64_t ea = 1;
int64_t fa = da + ea;
int64_t ga = i.h;
int64_t ha = fa % ga;
double ia = f64_convert_i32_s(ha);
int64_t ja = i.h;
double ka = f64_convert_i32_s(ja);
double la = ia / ka;
int64_t ma = i.f;
int64_t na = i.b;
int64_t oa = 3;
int64_t pa = na << oa;
int64_t * qa = ma + pa;
qa[0] = la;
int64_t ra = i.b;
int64_t sa = 3;
int64_t ta = ra + sa;
int64_t ua = i.h;
int64_t va = ta % ua;
double wa = f64_convert_i32_s(va);
int64_t xa = i.h;
double ya = f64_convert_i32_s(xa);
double za = wa / ya;
int64_t ab = i.e;
int64_t bb = i.b;
int64_t cb = 3;
int64_t db = bb << cb;
int64_t * eb = ab + db;
eb[0] = za;
int64_t fb = i.b;
int64_t gb = 4;
int64_t hb = fb + gb;
int64_t ib = i.h;
int64_t jb = hb % ib;
double kb = f64_convert_i32_s(jb);
int64_t lb = i.h;
double mb = f64_convert_i32_s(lb);
double nb = kb / mb;
int64_t ob = i.d;
int64_t pb = i.b;
int64_t qb = 3;
int64_t rb = pb << qb;
int64_t * sb = ob + rb;
sb[0] = nb;
int64_t tb = 0;
i.a = tb;
while (1) {
int64_t ub = i.a;
int64_t vb = i.h;
int64_t wb = ub;
int64_t xb = vb;
int64_t yb = wb < xb;
int64_t zb = 1;
int64_t ac = yb & zb;
if (eqz(ac)) goto B_c;
int64_t bc = i.b;
int64_t cc = i.a;
int64_t dc = bc * cc;
int64_t ec = i.h;
int64_t fc = dc % ec;
double gc = f64_convert_i32_s(fc);
int64_t hc = i.h;
double ic = f64_convert_i32_s(hc);
double jc = gc / ic;
int64_t kc = i.c;
int64_t lc = i.b;
int64_t mc = 16000;
int64_t nc = lc * mc;
int64_t oc = kc + nc;
int64_t pc = i.a;
int64_t qc = 3;
int64_t rc = pc << qc;
int64_t * sc = oc + rc;
sc[0] = jc;
int64_t tc = i.a;
int64_t uc = 1;
int64_t vc = tc + uc;
i.a = vc;
//continue L_d;
}
//unreachable;
B_c:;
int64_t wc = i.b;
int64_t xc = 1;
int64_t yc = wc + xc;
i.b = yc;
//continue L_b;
}
//unreachable;
B_a:;
}

void print_array(int a, int b, int c) {
int64_t* d = stack_pointer;
int64_t e = 112;
int64_t* f = d - e;
stack_pointer = f;
f[27] = a;
f[26] = b;
f[25] = c;
int64_t * g = stderr;
int64_t h = g[0];
int64_t i = 46;
int64_t j = memory_base;
int64_t k = j + i;
int64_t l = 0;
fprintf(h, k, l);
int64_t m = g[0];
int64_t n = 18;
int64_t o = memory_base;
int64_t p = o + n;
f[20] = p;
int64_t q = 0;
int64_t r = o + q;
int64_t s = 80;
int64_t* t = f + s;
fprintf(m, r, t);
int64_t u = 0;
f[24] = u;
while (1) {
int64_t v = (int64_t)f[24];
int64_t w = (int64_t)f[27];
int64_t x = v;
int64_t y = w;
int64_t z = x < y;
int64_t aa = 1;
int64_t ba = z & aa;
if (eqz(ba)) goto B_a;
int64_t ca = (int64_t)f[24];
int64_t da = 20;
int64_t ea = ca % da;
if (ea) goto B_c;
int64_t * fa = stderr;
int64_t ga = fa[0];
int64_t ha = 90;
int64_t ia = memory_base;
int64_t ja = ia + ha;
int64_t ka = 0;
fprintf(ga, ja, ka);
B_c:;
int64_t * la = stderr;
int64_t ma = la[0];
int64_t na = (int64_t)f[26];
int64_t oa = (int64_t)f[24];
int64_t pa = 3;
int64_t qa = oa << pa;
int64_t * ra = na + qa;
double sa = ra[0];
f[0] = sa;
int64_t ta = 21;
int64_t ua = memory_base;
int64_t va = ua + ta;
fprintf(ma, va, f);
int64_t wa = (int64_t)f[24];
int64_t xa = 1;
int64_t ya = wa + xa;
f[24] = ya;
//continue L_b;
}
//unreachable;
B_a:;
int64_t * za = stderr;
int64_t ab = za[0];
int64_t bb = 18;
int64_t cb = memory_base;
int64_t db = cb + bb;
f[12] = db;
int64_t eb = 29;
int64_t fb = cb + eb;
int64_t gb = 48;
int64_t* hb = f + gb;
fprintf(ab, fb, hb);
int64_t ib = za[0];
int64_t jb = 15;
int64_t kb = memory_base;
int64_t lb = kb + jb;
f[16] = lb;
int64_t mb = 0;
int64_t nb = kb + mb;
int64_t ob = 64;
int64_t* pb = f + ob;
fprintf(ib, nb, pb);
int64_t qb = 0;
f[24] = qb;
while (1) {
int64_t rb = (int64_t)f[24];
int64_t sb = (int64_t)f[27];
int64_t tb = rb;
int64_t ub = sb;
int64_t vb = tb < ub;
int64_t wb = 1;
int64_t xb = vb & wb;
if (eqz(xb)) goto B_d;
int64_t yb = (int64_t)f[24];
int64_t zb = 20;
int64_t ac = yb % zb;
if (ac) goto B_f;
int64_t * bc = stderr;
int64_t cc = bc[0];
int64_t dc = 90;
int64_t ec = memory_base;
int64_t fc = ec + dc;
int64_t gc = 0;
fprintf(cc, fc, gc);
B_f:;
int64_t * hc = stderr;
int64_t ic = hc[0];
int64_t jc = (int64_t)f[25];
int64_t kc = (int64_t)f[24];
int64_t lc = 3;
int64_t mc = kc << lc;
int64_t * nc = jc + mc;
double oc = nc[0];
f[2] = oc;
int64_t pc = 21;
int64_t qc = memory_base;
int64_t rc = qc + pc;
int64_t sc = 16;
int64_t* tc = f + sc;
fprintf(ic, rc, tc);
int64_t uc = (int64_t)f[24];
int64_t vc = 1;
int64_t wc = uc + vc;
f[24] = wc;
//continue L_e;
}
//unreachable;
B_d:;
int64_t * xc = stderr;
int64_t yc = xc[0];
int64_t zc = 15;
int64_t ad = memory_base;
int64_t bd = ad + zc;
f[8] = bd;
int64_t cd = 29;
int64_t dd = ad + cd;
int64_t ed = 32;
int64_t* fd = f + ed;
fprintf(yc, dd, fd);
int64_t gd = xc[0];
int64_t hd = 69;
int64_t id = memory_base;
int64_t jd = id + hd;
int64_t kd = 0;
fprintf(gd, jd, kd);
int64_t ld = 112;
int64_t* md = f + ld;
stack_pointer = md;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}