

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

void kernel_trisolv(int a, int b, int c, int d) {
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
int64_t p = g[4];
int64_t q = g[3];
int64_t r = 3;
int64_t s = q << r;
int64_t * t = p + s;
double u = t[0];
int64_t v = g[5];
int64_t w = g[3];
int64_t x = 3;
int64_t y = w << x;
int64_t * z = v + y;
z[0] = u;
int64_t aa = 0;
g[2] = aa;
while (1) {
int64_t ba = g[2];
int64_t ca = g[3];
int64_t da = ba;
int64_t ea = ca;
int64_t fa = da < ea;
int64_t ga = 1;
int64_t ha = fa & ga;
if (eqz(ha)) goto B_c;
int64_t ia = g[6];
int64_t ja = g[3];
int64_t ka = 16000;
int64_t la = ja * ka;
int64_t ma = ia + la;
int64_t na = g[2];
int64_t oa = 3;
int64_t pa = na << oa;
int64_t * qa = ma + pa;
double ra = qa[0];
int64_t sa = g[5];
int64_t ta = g[2];
int64_t ua = 3;
int64_t va = ta << ua;
int64_t * wa = sa + va;
double xa = wa[0];
int64_t ya = g[5];
int64_t za = g[3];
int64_t ab = 3;
int64_t bb = za << ab;
int64_t * cb = ya + bb;
double db = cb[0];
double eb = -(ra);
double fb = eb * xa;
double gb = fb + db;
cb[0] = gb;
int64_t hb = g[2];
int64_t ib = 1;
int64_t jb = hb + ib;
g[2] = jb;
//continue L_d;
}
//unreachable;
B_c:;
int64_t kb = g[5];
int64_t lb = g[3];
int64_t mb = 3;
int64_t nb = lb << mb;
int64_t * ob = kb + nb;
double pb = ob[0];
int64_t qb = g[6];
int64_t rb = g[3];
int64_t sb = 16000;
int64_t tb = rb * sb;
int64_t ub = qb + tb;
int64_t vb = g[3];
int64_t wb = 3;
int64_t xb = vb << wb;
int64_t * yb = ub + xb;
double zb = yb[0];
double ac = pb / zb;
int64_t bc = g[5];
int64_t cc = g[3];
int64_t dc = 3;
int64_t ec = cc << dc;
int64_t * fc = bc + ec;
fc[0] = ac;
int64_t gc = g[3];
int64_t hc = 1;
int64_t ic = gc + hc;
g[3] = ic;
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
int64_t p = e[5];
int64_t q = e[4];
int64_t r = e[3];
int64_t s = e[2];
init_array(p, q, r, s);
int64_t t = e[5];
int64_t u = e[4];
int64_t v = e[3];
int64_t w = e[2];
kernel_trisolv(t, u, v, w);
int64_t x = e[7];
int64_t y = 42;
int64_t z = x;
int64_t aa = y;
int64_t ba = z > aa;
int64_t ca = 1;
int64_t da = ba & ca;
if (eqz(da)) goto B_a;
int64_t * ea = e[6];
int64_t fa = ea[0];
int64_t ga = 87;
int64_t ha = memory_base;
int64_t ia = ha + ga;
int64_t ja = strcmp(fa, ia);
if (ja) goto B_a;
int64_t ka = e[5];
int64_t la = e[3];
print_array(ka, la);
B_a:;
int64_t ma = e[4];
free(ma);
int64_t na = e[3];
free(na);
int64_t oa = e[2];
free(oa);
int64_t pa = 0;
int64_t qa = 32;
int64_t* ra = e + qa;
stack_pointer = ra;
return pa;
}

void init_array(int a, int b, int c, int d) {
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
int64_t p = g[5];
int64_t q = g[3];
int64_t r = 3;
int64_t s = q << r;
int64_t * t = p + s;
double u = -999.0;
t[0] = u;
int64_t v = g[3];
double w = f64_convert_i32_s(v);
int64_t x = g[4];
int64_t y = g[3];
int64_t z = 3;
int64_t aa = y << z;
int64_t * ba = x + aa;
ba[0] = w;
int64_t ca = 0;
g[2] = ca;
while (1) {
int64_t da = g[2];
int64_t ea = g[3];
int64_t fa = da;
int64_t ga = ea;
int64_t ha = fa <= ga;
int64_t ia = 1;
int64_t ja = ha & ia;
if (eqz(ja)) goto B_c;
int64_t ka = g[3];
int64_t la = g[7];
int64_t ma = ka + la;
int64_t na = g[2];
int64_t oa = ma - na;
int64_t pa = 1;
int64_t qa = oa + pa;
double ra = f64_convert_i32_s(qa);
double sa = 2.0;
double* ta = ra * sa;
int64_t ua = g[7];
double va = f64_convert_i32_s(ua);
double* wa = ta / va;
int64_t xa = g[6];
int64_t ya = g[3];
int64_t za = 16000;
int64_t ab = ya * za;
int64_t bb = xa + ab;
int64_t cb = g[2];
int64_t db = 3;
int64_t eb = cb << db;
int64_t * fb = bb + eb;
fb[0] = wa;
int64_t gb = g[2];
int64_t hb = 1;
int64_t ib = gb + hb;
g[2] = ib;
//continue L_d;
}
//unreachable;
B_c:;
int64_t jb = g[3];
int64_t kb = 1;
int64_t lb = jb + kb;
g[3] = lb;
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
int64_t * ba = stderr;
int64_t ca = ba[0];
int64_t da = (int64_t)e[10];
int64_t ea = (int64_t)e[9];
int64_t fa = 3;
int64_t ga = ea << fa;
int64_t * ha = da + ga;
double ia = ha[0];
e[0] = ia;
int64_t ja = 17;
int64_t ka = memory_base;
int64_t la = ka + ja;
fprintf(ca, la, e);
int64_t ma = (int64_t)e[9];
int64_t na = 20;
int64_t oa = ma % na;
if (oa) goto B_c;
int64_t * pa = stderr;
int64_t qa = pa[0];
int64_t ra = 86;
int64_t sa = memory_base;
int64_t* ta = sa + ra;
int64_t ua = 0;
fprintf(qa, ta, ua);
B_c:;
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