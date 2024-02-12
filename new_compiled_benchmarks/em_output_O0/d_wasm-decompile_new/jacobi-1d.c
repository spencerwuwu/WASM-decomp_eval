

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

void kernel_jacobi_1d(int a, int b, int c, int d) {
int64_t* e = stack_pointer;
int64_t f = 32;
int64_t * g = e - f;
g[7] = a;
g[6] = b;
g[5] = c;
g[4] = d;
int64_t h = 0;
g[3] = h;
while (1) {
int64_t i = g[3];
int64_t j = g[7];
int64_t k = i;
int64_t l = j;
int64_t m = k < l;
int64_t n = 1;
int64_t o = m & n;
if (eqz(o)) goto B_a;
int64_t p = 1;
g[2] = p;
while (1) {
int64_t q = g[2];
int64_t r = g[6];
int64_t s = 1;
int64_t t = r - s;
int64_t u = q;
int64_t v = t;
int64_t w = u < v;
int64_t x = 1;
int64_t y = w & x;
if (eqz(y)) goto B_c;
int64_t z = g[5];
int64_t aa = g[2];
int64_t ba = 1;
int64_t ca = aa - ba;
int64_t da = 3;
int64_t ea = ca << da;
int64_t * fa = z + ea;
double ga = fa[0];
int64_t ha = g[5];
int64_t ia = g[2];
int64_t ja = 3;
int64_t ka = ia << ja;
int64_t * la = ha + ka;
double ma = la[0];
double na = ga + ma;
int64_t oa = g[5];
int64_t pa = g[2];
int64_t qa = 1;
int64_t ra = pa + qa;
int64_t sa = 3;
int64_t ta = ra << sa;
int64_t * ua = oa + ta;
double va = ua[0];
double wa = na + va;
double xa = 0.33333;
double ya = xa * wa;
int64_t za = g[4];
int64_t ab = g[2];
int64_t bb = 3;
int64_t cb = ab << bb;
int64_t * db = za + cb;
db[0] = ya;
int64_t eb = g[2];
int64_t fb = 1;
int64_t gb = eb + fb;
g[2] = gb;
//continue L_d;
}
//unreachable;
B_c:;
int64_t hb = 1;
g[2] = hb;
while (1) {
int64_t ib = g[2];
int64_t jb = g[6];
int64_t kb = 1;
int64_t lb = jb - kb;
int64_t mb = ib;
int64_t nb = lb;
int64_t ob = mb < nb;
int64_t pb = 1;
int64_t qb = ob & pb;
if (eqz(qb)) goto B_e;
int64_t rb = g[4];
int64_t sb = g[2];
int64_t tb = 1;
int64_t ub = sb - tb;
int64_t vb = 3;
int64_t wb = ub << vb;
int64_t * xb = rb + wb;
double yb = xb[0];
int64_t zb = g[4];
int64_t ac = g[2];
int64_t bc = 3;
int64_t cc = ac << bc;
int64_t * dc = zb + cc;
double ec = dc[0];
double fc = yb + ec;
int64_t gc = g[4];
int64_t hc = g[2];
int64_t ic = 1;
int64_t jc = hc + ic;
int64_t kc = 3;
int64_t lc = jc << kc;
int64_t * mc = gc + lc;
double nc = mc[0];
double oc = fc + nc;
double pc = 0.33333;
double qc = pc * oc;
int64_t rc = g[5];
int64_t sc = g[2];
int64_t tc = 3;
int64_t uc = sc << tc;
int64_t * vc = rc + uc;
vc[0] = qc;
int64_t wc = g[2];
int64_t xc = 1;
int64_t yc = wc + xc;
g[2] = yc;
//continue L_f;
}
//unreachable;
B_e:;
int64_t zc = g[3];
int64_t ad = 1;
int64_t bd = zc + ad;
g[3] = bd;
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
long h = 2000L;
int64_t i = 8;
int64_t j = legalfunc_polybench_alloc_data(h, i);
e[3] = j;
long k = 2000L;
int64_t l = 8;
int64_t m = legalfunc_polybench_alloc_data(k, l);
e[2] = m;
int64_t n = e[5];
int64_t o = e[3];
int64_t p = e[2];
init_array(n, o, p);
int64_t q = e[4];
int64_t r = e[5];
int64_t s = e[3];
int64_t t = e[2];
kernel_jacobi_1d(q, r, s, t);
int64_t u = e[7];
int64_t v = 42;
int64_t w = u;
int64_t x = v;
int64_t y = w > x;
int64_t z = 1;
int64_t aa = y & z;
if (eqz(aa)) goto B_a;
int64_t * ba = e[6];
int64_t ca = ba[0];
int64_t da = 87;
int64_t ea = memory_base;
int64_t fa = ea + da;
int64_t ga = strcmp(ca, fa);
if (ga) goto B_a;
int64_t ha = e[5];
int64_t ia = e[3];
print_array(ha, ia);
B_a:;
int64_t ja = e[3];
free(ja);
int64_t ka = e[2];
free(ka);
int64_t la = 0;
int64_t ma = 32;
int64_t* na = e + ma;
stack_pointer = na;
return la;
}

void init_array(int a, int b, int c) {
int64_t* d = stack_pointer;
int64_t e = 16;
{* f (int,)a (int,)b (int,)c (int64_t)d } = d - e;
f.d = a;
f.c = b;
f.b = c;
int64_t g = 0;
f.a = g;
while (1) {
int64_t h = f.a;
int64_t i = f.d;
int64_t j = h;
int64_t k = i;
int64_t l = j < k;
int64_t m = 1;
int64_t n = l & m;
if (eqz(n)) goto B_a;
int64_t o = f.a;
double p = f64_convert_i32_s(o);
double q = 2.0;
double r = p + q;
int64_t s = f.d;
double t = f64_convert_i32_s(s);
double u = r / t;
int64_t v = f.c;
int64_t w = f.a;
int64_t x = 3;
int64_t y = w << x;
int64_t * z = v + y;
z[0] = u;
int64_t aa = f.a;
double ba = f64_convert_i32_s(aa);
double ca = 3.0;
double da = ba + ca;
int64_t ea = f.d;
double fa = f64_convert_i32_s(ea);
double ga = da / fa;
int64_t ha = f.b;
int64_t ia = f.a;
int64_t ja = 3;
int64_t ka = ia << ja;
int64_t * la = ha + ka;
la[0] = ga;
int64_t ma = f.a;
int64_t na = 1;
int64_t* oa = ma + na;
f.a = oa;
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
int64_t* pa = na << oa;
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
int64_t ab = 15;
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