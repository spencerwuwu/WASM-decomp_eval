

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00B\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";









void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_trmm(int a, int b, double c, int d, int e) {
int64_t* f = stack_pointer;
int64_t g = 48;
int64_t* h = f - g;
h[11] = a;
h[10] = b;
h[4] = c;
h[7] = d;
h[6] = e;
int64_t i = 0;
h[5] = i;
while (1) {
int64_t j = (int64_t)h[5];
int64_t k = (int64_t)h[11];
int64_t l = j;
int64_t m = k;
int64_t n = l < m;
int64_t o = 1;
int64_t p = n & o;
if (eqz(p)) goto B_a;
int64_t q = 0;
h[4] = q;
while (1) {
int64_t r = (int64_t)h[4];
int64_t s = (int64_t)h[10];
int64_t t = r;
int64_t u = s;
int64_t v = t < u;
int64_t w = 1;
int64_t x = v & w;
if (eqz(x)) goto B_c;
int64_t y = (int64_t)h[5];
int64_t z = 1;
int64_t aa = y + z;
h[3] = aa;
while (1) {
int64_t ba = (int64_t)h[3];
int64_t ca = (int64_t)h[11];
int64_t da = ba;
int64_t ea = ca;
int64_t fa = da < ea;
int64_t ga = 1;
int64_t ha = fa & ga;
if (eqz(ha)) goto B_e;
int64_t ia = (int64_t)h[7];
int64_t ja = (int64_t)h[3];
int64_t ka = 8000;
int64_t la = ja * ka;
int64_t ma = ia + la;
int64_t na = (int64_t)h[5];
int64_t oa = 3;
int64_t pa = na << oa;
int64_t * qa = ma + pa;
double ra = qa[0];
int64_t sa = (int64_t)h[6];
int64_t ta = (int64_t)h[3];
int64_t ua = 9600;
int64_t va = ta * ua;
int64_t wa = sa + va;
int64_t xa = (int64_t)h[4];
int64_t ya = 3;
int64_t za = xa << ya;
int64_t * ab = wa + za;
double bb = ab[0];
int64_t cb = (int64_t)h[6];
int64_t db = (int64_t)h[5];
int64_t eb = 9600;
int64_t fb = db * eb;
int64_t gb = cb + fb;
int64_t hb = (int64_t)h[4];
int64_t ib = 3;
int64_t jb = hb << ib;
int64_t * kb = gb + jb;
double lb = kb[0];
double mb = ra * bb;
double nb = mb + lb;
kb[0] = nb;
int64_t ob = (int64_t)h[3];
int64_t pb = 1;
int64_t qb = ob + pb;
h[3] = qb;
//continue L_f;
}
//unreachable;
B_e:;
double rb = (double)h[4];
int64_t sb = (int64_t)h[6];
int64_t tb = (int64_t)h[5];
int64_t ub = 9600;
int64_t vb = tb * ub;
int64_t wb = sb + vb;
int64_t xb = (int64_t)h[4];
int64_t yb = 3;
int64_t zb = xb << yb;
int64_t * ac = wb + zb;
double bc = ac[0];
double cc = rb * bc;
int64_t dc = (int64_t)h[6];
int64_t ec = (int64_t)h[5];
int64_t fc = 9600;
int64_t gc = ec * fc;
int64_t hc = dc + gc;
int64_t ic = (int64_t)h[4];
int64_t jc = 3;
int64_t kc = ic << jc;
int64_t * lc = hc + kc;
lc[0] = cc;
int64_t mc = (int64_t)h[4];
int64_t nc = 1;
int64_t oc = mc + nc;
h[4] = oc;
//continue L_d;
}
//unreachable;
B_c:;
int64_t pc = (int64_t)h[5];
int64_t qc = 1;
int64_t rc = pc + qc;
h[5] = rc;
//continue L_b;
}
//unreachable;
B_a:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 32;
{* e (int,)a (int,)b (double,)c (int,)d (int,)e (int,)f (int64_t)g } = c - d;
stack_pointer = e;
e.g = a;
e.f = b;
int64_t f = 1000;
e.e = f;
int64_t g = 1200;
e.d = g;
long h = 1000000L;
int64_t i = 8;
int64_t j = legalfunc_polybench_alloc_data(h, i);
e.b = j;
long k = 1200000L;
int64_t l = 8;
int64_t m = legalfunc_polybench_alloc_data(k, l);
e.a = m;
int64_t n = e.e;
int64_t o = e.d;
int64_t p = e.b;
int64_t q = e.a;
int64_t r = 8;
int64_t s = e + r;
int64_t t = s;
init_array(n, o, t, p, q);
int64_t u = e.e;
int64_t v = e.d;
double w = e.c;
int64_t x = e.b;
int64_t y = e.a;
kernel_trmm(u, v, w, x, y);
int64_t z = e.g;
int64_t aa = 42;
int64_t ba = z;
int64_t ca = aa;
int64_t da = ba > ca;
int64_t ea = 1;
int64_t fa = da & ea;
if (eqz(fa)) goto B_a;
int64_t * ga = e.f;
int64_t ha = ga[0];
int64_t ia = 87;
int64_t ja = memory_base;
int64_t ka = ja + ia;
int64_t la = strcmp(ha, ka);
if (la) goto B_a;
int64_t ma = e.e;
int64_t na = e.d;
int64_t oa = e.a;
print_array(ma, na, oa);
B_a:;
int64_t pa = e.b;
free(pa);
int64_t qa = e.a;
free(qa);
int64_t ra = 0;
int64_t sa = 32;
int64_t ta = e + sa;
stack_pointer = ta;
return ra;
}

void init_array(int a, int b, int c, int d, int e) {
int64_t* f = stack_pointer;
int64_t g = 32;
int64_t * h = f - g;
h[7] = a;
h[6] = b;
h[5] = c;
h[4] = d;
h[3] = e;
int64_t * i = h[5];
double j = 1.5;
i[0] = j;
int64_t k = 0;
h[2] = k;
while (1) {
int64_t l = h[2];
int64_t m = h[7];
int64_t n = l;
int64_t o = m;
int64_t p = n < o;
int64_t q = 1;
int64_t r = p & q;
if (eqz(r)) goto B_a;
int64_t s = 0;
h[1] = s;
while (1) {
int64_t t = h[1];
int64_t u = h[2];
int64_t v = t;
int64_t w = u;
int64_t x = v < w;
int64_t y = 1;
int64_t z = x & y;
if (eqz(z)) goto B_c;
int64_t aa = h[2];
int64_t ba = h[1];
int64_t ca = aa + ba;
int64_t da = h[7];
int64_t ea = ca % da;
double fa = f64_convert_i32_s(ea);
int64_t ga = h[7];
double ha = f64_convert_i32_s(ga);
double ia = fa / ha;
int64_t ja = h[4];
int64_t ka = h[2];
int64_t la = 8000;
int64_t ma = ka * la;
int64_t na = ja + ma;
int64_t oa = h[1];
int64_t pa = 3;
int64_t qa = oa << pa;
int64_t * ra = na + qa;
ra[0] = ia;
int64_t sa = h[1];
int64_t ta = 1;
int64_t ua = sa + ta;
h[1] = ua;
//continue L_d;
}
//unreachable;
B_c:;
int64_t va = h[4];
int64_t wa = h[2];
int64_t xa = 8000;
int64_t ya = wa * xa;
int64_t za = va + ya;
int64_t ab = h[2];
int64_t bb = 3;
int64_t cb = ab << bb;
int64_t * db = za + cb;
double eb = 1.0;
db[0] = eb;
int64_t fb = 0;
h[1] = fb;
while (1) {
int64_t gb = h[1];
int64_t hb = h[6];
int64_t ib = gb;
int64_t jb = hb;
int64_t kb = ib < jb;
int64_t lb = 1;
int64_t mb = kb & lb;
if (eqz(mb)) goto B_e;
int64_t nb = h[6];
int64_t ob = h[2];
int64_t pb = h[1];
int64_t qb = ob - pb;
int64_t rb = nb + qb;
int64_t sb = h[6];
int64_t tb = rb % sb;
double ub = f64_convert_i32_s(tb);
int64_t vb = h[6];
double wb = f64_convert_i32_s(vb);
double xb = ub / wb;
int64_t yb = h[3];
int64_t zb = h[2];
int64_t ac = 9600;
int64_t bc = zb * ac;
int64_t cc = yb + bc;
int64_t dc = h[1];
int64_t ec = 3;
int64_t fc = dc << ec;
int64_t * gc = cc + fc;
gc[0] = xb;
int64_t hc = h[1];
int64_t ic = 1;
int64_t jc = hc + ic;
h[1] = jc;
//continue L_f;
}
//unreachable;
B_e:;
int64_t kc = h[2];
int64_t lc = 1;
int64_t mc = kc + lc;
h[2] = mc;
//continue L_b;
}
//unreachable;
B_a:;
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
int64_t k = j + i;
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
int64_t bb = 9600;
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

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}