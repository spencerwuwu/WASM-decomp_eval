

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00q\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";









void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_bicg(int a, int b, int c, int d, int e, int f, int g) {
int64_t* h = stack_pointer;
int64_t i = 48;
int64_t * j = h - i;
j[11] = a;
j[10] = b;
j[9] = c;
j[8] = d;
j[7] = e;
j[6] = f;
j[5] = g;
int64_t k = 0;
j[4] = k;
while (1) {
int64_t l = j[4];
int64_t m = j[11];
int64_t n = l;
int64_t o = m;
int64_t p = n < o;
int64_t q = 1;
int64_t r = p & q;
if (eqz(r)) goto B_a;
int64_t s = j[8];
int64_t t = j[4];
int64_t u = 3;
int64_t v = t << u;
int64_t * w = s + v;
int64_t x = 0;
double y = f64_convert_i32_s(x);
w[0] = y;
int64_t z = j[4];
int64_t aa = 1;
int64_t ba = z + aa;
j[4] = ba;
//continue L_b;
}
//unreachable;
B_a:;
int64_t ca = 0;
j[4] = ca;
while (1) {
int64_t da = j[4];
int64_t ea = j[10];
int64_t fa = da;
int64_t ga = ea;
int64_t ha = fa < ga;
int64_t ia = 1;
int64_t ja = ha & ia;
if (eqz(ja)) goto B_c;
int64_t ka = j[7];
int64_t la = j[4];
int64_t ma = 3;
int64_t na = la << ma;
int64_t * oa = ka + na;
int64_t pa = 0;
double qa = f64_convert_i32_s(pa);
oa[0] = qa;
int64_t ra = 0;
j[3] = ra;
while (1) {
int64_t sa = j[3];
int64_t ta = j[11];
int64_t ua = sa;
int64_t va = ta;
int64_t wa = ua < va;
int64_t xa = 1;
int64_t ya = wa & xa;
if (eqz(ya)) goto B_e;
int64_t za = j[8];
int64_t ab = j[3];
int64_t bb = 3;
int64_t cb = ab << bb;
int64_t * db = za + cb;
double eb = db[0];
int64_t fb = j[5];
int64_t gb = j[4];
int64_t hb = 3;
int64_t ib = gb << hb;
int64_t * jb = fb + ib;
double kb = jb[0];
int64_t lb = j[9];
int64_t mb = j[4];
int64_t nb = 15200;
int64_t ob = mb * nb;
int64_t pb = lb + ob;
int64_t qb = j[3];
int64_t rb = 3;
int64_t sb = qb << rb;
int64_t * tb = pb + sb;
double ub = tb[0];
double vb = kb * ub;
double wb = vb + eb;
int64_t xb = j[8];
int64_t yb = j[3];
int64_t zb = 3;
int64_t ac = yb << zb;
int64_t * bc = xb + ac;
bc[0] = wb;
int64_t cc = j[7];
int64_t dc = j[4];
int64_t ec = 3;
int64_t fc = dc << ec;
int64_t * gc = cc + fc;
double hc = gc[0];
int64_t ic = j[9];
int64_t jc = j[4];
int64_t kc = 15200;
int64_t lc = jc * kc;
int64_t mc = ic + lc;
int64_t nc = j[3];
int64_t oc = 3;
int64_t pc = nc << oc;
int64_t * qc = mc + pc;
double rc = qc[0];
int64_t sc = j[6];
int64_t tc = j[3];
int64_t uc = 3;
int64_t vc = tc << uc;
int64_t * wc = sc + vc;
double xc = wc[0];
double yc = rc * xc;
double zc = yc + hc;
int64_t ad = j[7];
int64_t bd = j[4];
int64_t cd = 3;
int64_t dd = bd << cd;
int64_t * ed = ad + dd;
ed[0] = zc;
int64_t fd = j[3];
int64_t gd = 1;
int64_t hd = fd + gd;
j[3] = hd;
//continue L_f;
}
//unreachable;
B_e:;
int64_t id = j[4];
int64_t jd = 1;
int64_t kd = id + jd;
j[4] = kd;
//continue L_d;
}
//unreachable;
B_c:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 48;
int64_t * e = c - d;
stack_pointer = e;
e[11] = a;
e[10] = b;
int64_t f = 2100;
e[9] = f;
int64_t g = 1900;
e[8] = g;
long h = 3990000L;
int64_t i = 8;
int64_t j = legalfunc_polybench_alloc_data(h, i);
e[7] = j;
long k = 1900L;
int64_t l = 8;
int64_t m = legalfunc_polybench_alloc_data(k, l);
e[6] = m;
long n = 2100L;
int64_t o = 8;
int64_t p = legalfunc_polybench_alloc_data(n, o);
e[5] = p;
long q = 1900L;
int64_t r = 8;
int64_t s = legalfunc_polybench_alloc_data(q, r);
e[4] = s;
long t = 2100L;
int64_t u = 8;
int64_t v = legalfunc_polybench_alloc_data(t, u);
e[3] = v;
int64_t w = e[8];
int64_t x = e[9];
int64_t y = e[7];
int64_t z = e[3];
int64_t aa = e[4];
init_array(w, x, y, z, aa);
int64_t ba = e[8];
int64_t ca = e[9];
int64_t da = e[7];
int64_t ea = e[6];
int64_t fa = e[5];
int64_t ga = e[4];
int64_t ha = e[3];
kernel_bicg(ba, ca, da, ea, fa, ga, ha);
int64_t ia = e[11];
int64_t ja = 42;
int64_t ka = ia;
int64_t la = ja;
int64_t ma = ka > la;
int64_t na = 1;
int64_t oa = ma & na;
if (eqz(oa)) goto B_a;
int64_t * pa = e[10];
int64_t qa = pa[0];
int64_t ra = 87;
int64_t sa = memory_base;
int64_t ta = sa + ra;
int64_t ua = strcmp(qa, ta);
if (ua) goto B_a;
int64_t va = e[8];
int64_t wa = e[9];
int64_t xa = e[6];
int64_t ya = e[5];
print_array(va, wa, xa, ya);
B_a:;
int64_t za = e[7];
free(za);
int64_t ab = e[6];
free(ab);
int64_t bb = e[5];
free(bb);
int64_t cb = e[4];
free(cb);
int64_t db = e[3];
free(db);
int64_t eb = 0;
int64_t fb = 48;
int64_t* gb = e + fb;
stack_pointer = gb;
return eb;
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
int64_t i = 0;
h[2] = i;
while (1) {
int64_t j = h[2];
int64_t k = h[7];
int64_t* l = j;
int64_t m = k;
int64_t* n = l < m;
int64_t o = 1;
int64_t* p = n & o;
if (eqz(p)) goto B_a;
int64_t q = h[2];
int64_t r = h[7];
int64_t s = q % r;
double t = f64_convert_i32_s(s);
int64_t u = h[7];
double v = f64_convert_i32_s(u);
double w = t / v;
int64_t x = h[3];
int64_t y = h[2];
int64_t z = 3;
int64_t aa = y << z;
int64_t * ba = x + aa;
ba[0] = w;
int64_t ca = h[2];
int64_t da = 1;
int64_t ea = ca + da;
h[2] = ea;
//continue L_b;
}
//unreachable;
B_a:;
int64_t fa = 0;
h[2] = fa;
while (1) {
int64_t ga = h[2];
int64_t ha = h[6];
int64_t ia = ga;
int64_t ja = ha;
int64_t ka = ia < ja;
int64_t la = 1;
int64_t ma = ka & la;
if (eqz(ma)) goto B_c;
int64_t na = h[2];
int64_t oa = h[6];
int64_t pa = na % oa;
double qa = f64_convert_i32_s(pa);
int64_t ra = h[6];
double sa = f64_convert_i32_s(ra);
double ta = qa / sa;
int64_t ua = h[4];
int64_t va = h[2];
int64_t wa = 3;
int64_t xa = va << wa;
int64_t * ya = ua + xa;
ya[0] = ta;
int64_t za = 0;
h[1] = za;
while (1) {
int64_t ab = h[1];
int64_t bb = h[7];
int64_t cb = ab;
int64_t db = bb;
int64_t eb = cb < db;
int64_t fb = 1;
int64_t gb = eb & fb;
if (eqz(gb)) goto B_e;
int64_t hb = h[2];
int64_t ib = h[1];
int64_t jb = 1;
int64_t kb = ib + jb;
int64_t lb = hb * kb;
int64_t mb = h[6];
int64_t nb = lb % mb;
double ob = f64_convert_i32_s(nb);
int64_t pb = h[6];
double qb = f64_convert_i32_s(pb);
double rb = ob / qb;
int64_t sb = h[5];
int64_t tb = h[2];
int64_t ub = 15200;
int64_t vb = tb * ub;
int64_t wb = sb + vb;
int64_t xb = h[1];
int64_t yb = 3;
int64_t zb = xb << yb;
int64_t * ac = wb + zb;
ac[0] = rb;
int64_t bc = h[1];
int64_t cc = 1;
int64_t dc = bc + cc;
h[1] = dc;
//continue L_f;
}
//unreachable;
B_e:;
int64_t ec = h[2];
int64_t fc = 1;
int64_t gc = ec + fc;
h[2] = gc;
//continue L_d;
}
//unreachable;
B_c:;
}

void print_array(int a, int b, int c, int d) {
int64_t* e = stack_pointer;
int64_t f = 112;
int64_t* g = e - f;
stack_pointer = g;
g[27] = a;
g[26] = b;
g[25] = c;
g[24] = d;
int64_t * h = stderr;
int64_t i = h[0];
int64_t j = 42;
int64_t k = memory_base;
int64_t* l = k + j;
int64_t m = 0;
fprintf(i, l, m);
int64_t n = h[0];
int64_t o = 13;
int64_t p = memory_base;
int64_t* q = p + o;
g[20] = q;
int64_t r = 0;
int64_t* s = p + r;
int64_t t = 80;
int64_t* u = g + t;
fprintf(n, s, u);
int64_t v = 0;
g[23] = v;
while (1) {
int64_t w = (int64_t)g[23];
int64_t x = (int64_t)g[27];
int64_t y = w;
int64_t z = x;
int64_t aa = y < z;
int64_t ba = 1;
int64_t ca = aa & ba;
if (eqz(ca)) goto B_a;
int64_t da = (int64_t)g[23];
int64_t ea = 20;
int64_t fa = da % ea;
if (fa) goto B_c;
int64_t * ga = stderr;
int64_t ha = ga[0];
int64_t ia = 86;
int64_t ja = memory_base;
int64_t ka = ja + ia;
int64_t la = 0;
fprintf(ha, ka, la);
B_c:;
int64_t * ma = stderr;
int64_t na = ma[0];
int64_t oa = (int64_t)g[25];
int64_t pa = (int64_t)g[23];
int64_t qa = 3;
int64_t ra = pa << qa;
int64_t * sa = oa + ra;
double ta = sa[0];
g[0] = ta;
int64_t ua = 17;
int64_t va = memory_base;
int64_t wa = va + ua;
fprintf(na, wa, g);
int64_t xa = (int64_t)g[23];
int64_t ya = 1;
int64_t za = xa + ya;
g[23] = za;
//continue L_b;
}
//unreachable;
B_a:;
int64_t * ab = stderr;
int64_t bb = ab[0];
int64_t cb = 13;
int64_t db = memory_base;
int64_t eb = db + cb;
g[12] = eb;
int64_t fb = 25;
int64_t gb = db + fb;
int64_t hb = 48;
int64_t* ib = g + hb;
fprintf(bb, gb, ib);
int64_t jb = ab[0];
int64_t kb = 15;
int64_t lb = memory_base;
int64_t mb = lb + kb;
g[16] = mb;
int64_t nb = 0;
int64_t ob = lb + nb;
int64_t pb = 64;
int64_t* qb = g + pb;
fprintf(jb, ob, qb);
int64_t rb = 0;
g[23] = rb;
while (1) {
int64_t sb = (int64_t)g[23];
int64_t tb = (int64_t)g[26];
int64_t ub = sb;
int64_t vb = tb;
int64_t wb = ub < vb;
int64_t xb = 1;
int64_t yb = wb & xb;
if (eqz(yb)) goto B_d;
int64_t zb = (int64_t)g[23];
int64_t ac = 20;
int64_t bc = zb % ac;
if (bc) goto B_f;
int64_t * cc = stderr;
int64_t dc = cc[0];
int64_t ec = 86;
int64_t fc = memory_base;
int64_t gc = fc + ec;
int64_t hc = 0;
fprintf(dc, gc, hc);
B_f:;
int64_t * ic = stderr;
int64_t jc = ic[0];
int64_t kc = (int64_t)g[24];
int64_t lc = (int64_t)g[23];
int64_t mc = 3;
int64_t nc = lc << mc;
int64_t * oc = kc + nc;
double pc = oc[0];
g[2] = pc;
int64_t qc = 17;
int64_t rc = memory_base;
int64_t sc = rc + qc;
int64_t tc = 16;
int64_t* uc = g + tc;
fprintf(jc, sc, uc);
int64_t vc = (int64_t)g[23];
int64_t wc = 1;
int64_t xc = vc + wc;
g[23] = xc;
//continue L_e;
}
//unreachable;
B_d:;
int64_t * yc = stderr;
int64_t zc = yc[0];
int64_t ad = 15;
int64_t bd = memory_base;
int64_t cd = bd + ad;
g[8] = cd;
int64_t dd = 25;
int64_t ed = bd + dd;
int64_t fd = 32;
int64_t* gd = g + fd;
fprintf(zc, ed, gd);
int64_t hd = yc[0];
int64_t id = 65;
int64_t jd = memory_base;
int64_t kd = jd + id;
int64_t ld = 0;
fprintf(hd, kd, ld);
int64_t md = 112;
int64_t* nd = g + md;
stack_pointer = nd;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}