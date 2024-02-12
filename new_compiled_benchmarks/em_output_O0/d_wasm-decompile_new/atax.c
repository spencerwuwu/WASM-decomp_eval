

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"y\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";









void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void init_array(int a, int b, int c, int d) {
int64_t* e = stack_pointer;
int64_t f = 32;
{* g (double,)a (int,)b (int,)c (int,)d (int,)e (int,)f (int64_t)g } = e - f;
g.g = a;
g.f = b;
g.e = c;
g.d = d;
int64_t h = g.f;
double i = f64_convert_i32_s(h);
g.a = i;
int64_t j = 0;
g.c = j;
while (1) {
int64_t k = g.c;
int64_t l = g.f;
int64_t m = k;
int64_t n = l;
int64_t o = m < n;
int64_t p = 1;
int64_t q = o & p;
if (eqz(q)) goto B_a;
int64_t r = g.c;
double s = f64_convert_i32_s(r);
double t = g.a;
double u = s / t;
double v = 1.0;
double w = v + u;
int64_t x = g.d;
int64_t y = g.c;
int64_t z = 3;
int64_t aa = y << z;
int64_t * ba = x + aa;
ba[0] = w;
int64_t ca = g.c;
int64_t da = 1;
int64_t ea = ca + da;
g.c = ea;
//continue L_b;
}
//unreachable;
B_a:;
int64_t fa = 0;
g.c = fa;
while (1) {
int64_t ga = g.c;
int64_t ha = g.g;
int64_t ia = ga;
int64_t ja = ha;
int64_t ka = ia < ja;
int64_t la = 1;
int64_t ma = ka & la;
if (eqz(ma)) goto B_c;
int64_t na = 0;
g.b = na;
while (1) {
int64_t oa = g.b;
int64_t pa = g.f;
int64_t qa = oa;
int64_t ra = pa;
int64_t sa = qa < ra;
int64_t ta = 1;
int64_t ua = sa & ta;
if (eqz(ua)) goto B_e;
int64_t va = g.c;
int64_t wa = g.b;
int64_t xa = va + wa;
int64_t ya = g.f;
int64_t za = xa % ya;
double ab = f64_convert_i32_s(za);
int64_t bb = g.g;
int64_t cb = 5;
int64_t db = bb * cb;
double eb = f64_convert_i32_s(db);
double fb = ab / eb;
int64_t gb = g.e;
int64_t hb = g.c;
int64_t ib = 16800;
int64_t jb = hb * ib;
int64_t kb = gb + jb;
int64_t lb = g.b;
int64_t mb = 3;
int64_t nb = lb << mb;
int64_t * ob = kb + nb;
ob[0] = fb;
int64_t pb = g.b;
int64_t qb = 1;
int64_t rb = pb + qb;
g.b = rb;
//continue L_f;
}
//unreachable;
B_e:;
int64_t sb = g.c;
int64_t tb = 1;
int64_t ub = sb + tb;
g.c = ub;
//continue L_d;
}
//unreachable;
B_c:;
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

void kernel_atax(int a, int b, int c, int d, int e, int f) {
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
int64_t l = i.g;
int64_t m = k;
int64_t n = l;
int64_t o = m < n;
int64_t p = 1;
int64_t q = o & p;
if (eqz(q)) goto B_a;
int64_t r = i.d;
int64_t s = i.b;
int64_t t = 3;
int64_t* u = s << t;
int64_t * v = r + u;
int64_t w = 0;
double x = f64_convert_i32_s(w);
v[0] = x;
int64_t y = i.b;
int64_t z = 1;
int64_t aa = y + z;
i.b = aa;
//continue L_b;
}
//unreachable;
B_a:;
int64_t ba = 0;
i.b = ba;
while (1) {
int64_t ca = i.b;
int64_t da = i.h;
int64_t ea = ca;
int64_t fa = da;
int64_t ga = ea < fa;
int64_t ha = 1;
int64_t ia = ga & ha;
if (eqz(ia)) goto B_c;
int64_t ja = i.c;
int64_t ka = i.b;
int64_t la = 3;
int64_t ma = ka << la;
int64_t * na = ja + ma;
int64_t oa = 0;
double pa = f64_convert_i32_s(oa);
na[0] = pa;
int64_t qa = 0;
i.a = qa;
while (1) {
int64_t ra = i.a;
int64_t sa = i.g;
int64_t ta = ra;
int64_t ua = sa;
int64_t va = ta < ua;
int64_t wa = 1;
int64_t xa = va & wa;
if (eqz(xa)) goto B_e;
int64_t ya = i.c;
int64_t za = i.b;
int64_t ab = 3;
int64_t bb = za << ab;
int64_t * cb = ya + bb;
double db = cb[0];
int64_t eb = i.f;
int64_t fb = i.b;
int64_t gb = 16800;
int64_t* hb = fb * gb;
int64_t* ib = eb + hb;
int64_t jb = i.a;
int64_t kb = 3;
int64_t lb = jb << kb;
int64_t * mb = ib + lb;
double nb = mb[0];
int64_t ob = i.e;
int64_t pb = i.a;
int64_t qb = 3;
int64_t rb = pb << qb;
int64_t * sb = ob + rb;
double tb = sb[0];
double* ub = nb * tb;
double* vb = ub + db;
int64_t wb = i.c;
int64_t xb = i.b;
int64_t yb = 3;
int64_t zb = xb << yb;
int64_t * ac = wb + zb;
ac[0] = vb;
int64_t bc = i.a;
int64_t cc = 1;
int64_t dc = bc + cc;
i.a = dc;
//continue L_f;
}
//unreachable;
B_e:;
int64_t ec = 0;
i.a = ec;
while (1) {
int64_t fc = i.a;
int64_t gc = i.g;
int64_t hc = fc;
int64_t ic = gc;
int64_t jc = hc < ic;
int64_t kc = 1;
int64_t lc = jc & kc;
if (eqz(lc)) goto B_g;
int64_t mc = i.d;
int64_t nc = i.a;
int64_t oc = 3;
int64_t pc = nc << oc;
int64_t * qc = mc + pc;
double rc = qc[0];
int64_t sc = i.f;
int64_t tc = i.b;
int64_t uc = 16800;
int64_t vc = tc * uc;
int64_t wc = sc + vc;
int64_t xc = i.a;
int64_t yc = 3;
int64_t zc = xc << yc;
int64_t * ad = wc + zc;
double bd = ad[0];
int64_t cd = i.c;
int64_t dd = i.b;
int64_t ed = 3;
int64_t fd = dd << ed;
int64_t * gd = cd + fd;
double hd = gd[0];
double id = bd * hd;
double jd = id + rc;
int64_t kd = i.d;
int64_t ld = i.a;
int64_t md = 3;
int64_t nd = ld << md;
int64_t * od = kd + nd;
od[0] = jd;
int64_t pd = i.a;
int64_t qd = 1;
int64_t rd = pd + qd;
i.a = rd;
//continue L_h;
}
//unreachable;
B_g:;
int64_t sd = i.b;
int64_t td = 1;
int64_t ud = sd + td;
i.b = ud;
//continue L_d;
}
//unreachable;
B_c:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 32;
{ e (int,)a (int,)b (int,)c (int,)d (int,)e (int,)f (int,)g (int64_t)h } =
c - d;
stack_pointer = e;
e.h = a;
e.g = b;
int64_t f = 1900;
e.f = f;
int64_t g = 2100;
e.e = g;
long h = 3990000L;
int64_t i = 8;
int64_t j = legalfunc_polybench_alloc_data(h, i);
e.d = j;
long k = 2100L;
int64_t l = 8;
int64_t m = legalfunc_polybench_alloc_data(k, l);
e.c = m;
long n = 2100L;
int64_t o = 8;
int64_t p = legalfunc_polybench_alloc_data(n, o);
e.b = p;
long q = 1900L;
int64_t r = 8;
int64_t s = legalfunc_polybench_alloc_data(q, r);
e.a = s;
int64_t t = e.f;
int64_t u = e.e;
int64_t v = e.d;
int64_t w = e.c;
init_array(t, u, v, w);
int64_t x = e.f;
int64_t y = e.e;
int64_t z = e.d;
int64_t aa = e.c;
int64_t ba = e.b;
int64_t ca = e.a;
kernel_atax(x, y, z, aa, ba, ca);
int64_t da = e.h;
int64_t ea = 42;
int64_t fa = da;
int64_t ga = ea;
int64_t ha = fa > ga;
int64_t ia = 1;
int64_t ja = ha & ia;
if (eqz(ja)) goto B_a;
int64_t * ka = e.g;
int64_t la = ka[0];
int64_t ma = 87;
int64_t na = memory_base;
int64_t oa = na + ma;
int64_t pa = strcmp(la, oa);
if (pa) goto B_a;
int64_t qa = e.e;
int64_t ra = e.b;
print_array(qa, ra);
B_a:;
int64_t sa = e.d;
free(sa);
int64_t ta = e.c;
free(ta);
int64_t ua = e.b;
free(ua);
int64_t va = e.a;
free(va);
int64_t wa = 0;
int64_t xa = 32;
int64_t* ya = e + xa;
stack_pointer = ya;
return wa;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}