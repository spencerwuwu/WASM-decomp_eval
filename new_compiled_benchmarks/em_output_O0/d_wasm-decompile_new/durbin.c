

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

void kernel_durbin(int a, int b, int c) {
int64_t* d = stack_pointer;
int64_t e = 16048;
int64_t* f = d - e;
stack_pointer = f;
f[4011] = a;
f[4010] = b;
f[4009] = c;
int64_t * g = (int64_t)f[4010];
double h = g[0];
double i = -(h);
int64_t * j = (int64_t)f[4009];
j[0] = i;
double k = 1.0;
f[2] = k;
int64_t * l = (int64_t)f[4010];
double m = l[0];
double n = -(m);
f[3] = n;
int64_t o = 1;
f[0] = o;
while (1) {
int64_t p = (int64_t)f[0];
int64_t q = (int64_t)f[4011];
int64_t r = p;
int64_t s = q;
int64_t t = r < s;
int64_t u = 1;
int64_t v = t & u;
if (eqz(v)) goto B_a;
double w = (double)f[3];
double x = (double)f[3];
double y = -(w);
double z = y * x;
double aa = 1.0;
double ba = z + aa;
double ca = (double)f[2];
double da = ba * ca;
f[2] = da;
int64_t ea = 0;
double fa = f64_convert_i32_s(ea);
f[1] = fa;
int64_t ga = 0;
f[1] = ga;
while (1) {
int64_t ha = (int64_t)f[1];
int64_t ia = (int64_t)f[0];
int64_t ja = ha;
int64_t ka = ia;
int64_t la = ja < ka;
int64_t ma = 1;
int64_t na = la & ma;
if (eqz(na)) goto B_c;
int64_t oa = (int64_t)f[4010];
int64_t pa = (int64_t)f[0];
int64_t qa = (int64_t)f[1];
int64_t ra = pa - qa;
int64_t sa = 1;
int64_t ta = ra - sa;
int64_t ua = 3;
int64_t va = ta << ua;
int64_t * wa = oa + va;
double xa = wa[0];
int64_t ya = (int64_t)f[4009];
int64_t za = (int64_t)f[1];
int64_t ab = 3;
int64_t bb = za << ab;
int64_t * cb = ya + bb;
double db = cb[0];
double eb = (double)f[1];
double fb = xa * db;
double gb = fb + eb;
f[1] = gb;
int64_t hb = (int64_t)f[1];
int64_t ib = 1;
int64_t jb = hb + ib;
f[1] = jb;
//continue L_d;
}
//unreachable;
B_c:;
int64_t kb = (int64_t)f[4010];
int64_t lb = (int64_t)f[0];
int64_t mb = 3;
int64_t nb = lb << mb;
int64_t * ob = kb + nb;
double pb = ob[0];
double qb = (double)f[1];
double rb = pb + qb;
double sb = -(rb);
double tb = (double)f[2];
double ub = sb / tb;
f[3] = ub;
int64_t vb = 0;
f[1] = vb;
while (1) {
int64_t wb = (int64_t)f[1];
int64_t xb = (int64_t)f[0];
int64_t yb = wb;
int64_t zb = xb;
int64_t ac = yb < zb;
int64_t bc = 1;
int64_t cc = ac & bc;
if (eqz(cc)) goto B_e;
int64_t dc = (int64_t)f[4009];
int64_t ec = (int64_t)f[1];
int64_t fc = 3;
int64_t gc = ec << fc;
int64_t * hc = dc + gc;
double ic = hc[0];
double jc = (double)f[3];
int64_t kc = (int64_t)f[4009];
int64_t lc = (int64_t)f[0];
int64_t mc = (int64_t)f[1];
int64_t nc = lc - mc;
int64_t oc = 1;
int64_t pc = nc - oc;
int64_t qc = 3;
int64_t rc = pc << qc;
int64_t * sc = kc + rc;
double tc = sc[0];
double uc = jc * tc;
double vc = uc + ic;
int64_t wc = (int64_t)f[1];
int64_t xc = 32;
int64_t* yc = f + xc;
int64_t* zc = yc;
int64_t ad = 3;
int64_t bd = wc << ad;
int64_t * cd = zc + bd;
cd[0] = vc;
int64_t dd = (int64_t)f[1];
int64_t ed = 1;
int64_t fd = dd + ed;
f[1] = fd;
//continue L_f;
}
//unreachable;
B_e:;
int64_t gd = 0;
f[1] = gd;
while (1) {
int64_t hd = (int64_t)f[1];
int64_t id = (int64_t)f[0];
int64_t jd = hd;
int64_t kd = id;
int64_t ld = jd < kd;
int64_t md = 1;
int64_t nd = ld & md;
if (eqz(nd)) goto B_g;
int64_t od = (int64_t)f[1];
int64_t pd = 32;
int64_t* qd = f + pd;
int64_t* rd = qd;
int64_t sd = 3;
int64_t td = od << sd;
int64_t * ud = rd + td;
double vd = ud[0];
int64_t wd = (int64_t)f[4009];
int64_t xd = (int64_t)f[1];
int64_t yd = 3;
int64_t zd = xd << yd;
int64_t * ae = wd + zd;
ae[0] = vd;
int64_t be = (int64_t)f[1];
int64_t ce = 1;
int64_t de = be + ce;
f[1] = de;
//continue L_h;
}
//unreachable;
B_g:;
double ee = (double)f[3];
int64_t fe = (int64_t)f[4009];
int64_t ge = (int64_t)f[0];
int64_t he = 3;
int64_t ie = ge << he;
int64_t * je = fe + ie;
je[0] = ee;
int64_t ke = (int64_t)f[0];
int64_t le = 1;
int64_t me = ke + le;
f[0] = me;
//continue L_b;
}
//unreachable;
B_a:;
int64_t ne = 16048;
int64_t* oe = f + ne;
stack_pointer = oe;
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
long g = 2000L;
int64_t h = 8;
int64_t i = legalfunc_polybench_alloc_data(g, h);
e[4] = i;
long j = 2000L;
int64_t k = 8;
int64_t l = legalfunc_polybench_alloc_data(j, k);
e[3] = l;
int64_t m = e[5];
int64_t n = e[4];
init_array(m, n);
int64_t o = e[5];
int64_t p = e[4];
int64_t q = e[3];
kernel_durbin(o, p, q);
int64_t r = e[7];
int64_t s = 42;
int64_t t = r;
int64_t u = s;
int64_t v = t > u;
int64_t w = 1;
int64_t x = v & w;
if (eqz(x)) goto B_a;
int64_t * y = e[6];
int64_t z = y[0];
int64_t aa = 87;
int64_t ba = memory_base;
int64_t ca = ba + aa;
int64_t da = strcmp(z, ca);
if (da) goto B_a;
int64_t ea = e[5];
int64_t fa = e[3];
print_array(ea, fa);
B_a:;
int64_t ga = e[4];
free(ga);
int64_t ha = e[3];
free(ha);
int64_t ia = 0;
int64_t ja = 32;
int64_t* ka = e + ja;
stack_pointer = ka;
return ia;
}

void init_array(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 16;
int64_t * e = c - d;
e[3] = a;
e[2] = b;
int64_t f = 0;
e[1] = f;
while (1) {
int64_t g = e[1];
int64_t h = e[3];
int64_t i = g;
int64_t j = h;
int64_t k = i < j;
int64_t l = 1;
int64_t m = k & l;
if (eqz(m)) goto B_a;
int64_t n = e[3];
int64_t o = 1;
int64_t p = n + o;
int64_t q = e[1];
int64_t r = p - q;
double s = f64_convert_i32_s(r);
int64_t t = e[2];
int64_t u = e[1];
int64_t v = 3;
int64_t w = u << v;
int64_t * x = t + w;
x[0] = s;
int64_t y = e[1];
int64_t z = 1;
int64_t aa = y + z;
e[1] = aa;
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

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}