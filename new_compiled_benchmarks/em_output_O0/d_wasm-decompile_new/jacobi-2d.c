

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

void kernel_jacobi_2d(int a, int b, int c, int d) {
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
int64_t z = 1;
g[1] = z;
while (1) {
int64_t aa = g[1];
int64_t ba = g[6];
int64_t ca = 1;
int64_t da = ba - ca;
int64_t ea = aa;
int64_t fa = da;
int64_t ga = ea < fa;
int64_t ha = 1;
int64_t ia = ga & ha;
if (eqz(ia)) goto B_e;
int64_t ja = g[5];
int64_t ka = g[2];
int64_t la = 10400;
int64_t ma = ka * la;
int64_t na = ja + ma;
int64_t oa = g[1];
int64_t pa = 3;
int64_t qa = oa << pa;
int64_t * ra = na + qa;
double sa = ra[0];
int64_t ta = g[5];
int64_t ua = g[2];
int64_t va = 10400;
int64_t wa = ua * va;
int64_t xa = ta + wa;
int64_t ya = g[1];
int64_t za = 1;
int64_t ab = ya - za;
int64_t bb = 3;
int64_t cb = ab << bb;
int64_t * db = xa + cb;
double eb = db[0];
double fb = sa + eb;
int64_t gb = g[5];
int64_t hb = g[2];
int64_t ib = 10400;
int64_t jb = hb * ib;
int64_t kb = gb + jb;
int64_t lb = g[1];
int64_t mb = 1;
int64_t nb = lb + mb;
int64_t ob = 3;
int64_t pb = nb << ob;
int64_t * qb = kb + pb;
double rb = qb[0];
double sb = fb + rb;
int64_t tb = g[5];
int64_t ub = g[2];
int64_t vb = 1;
int64_t wb = ub + vb;
int64_t xb = 10400;
int64_t yb = wb * xb;
int64_t zb = tb + yb;
int64_t ac = g[1];
int64_t bc = 3;
int64_t cc = ac << bc;
int64_t * dc = zb + cc;
double ec = dc[0];
double fc = sb + ec;
int64_t gc = g[5];
int64_t hc = g[2];
int64_t ic = 1;
int64_t jc = hc - ic;
int64_t kc = 10400;
int64_t lc = jc * kc;
int64_t mc = gc + lc;
int64_t nc = g[1];
int64_t oc = 3;
int64_t pc = nc << oc;
int64_t * qc = mc + pc;
double rc = qc[0];
double sc = fc + rc;
double tc = 0.2;
double uc = tc * sc;
int64_t vc = g[4];
int64_t wc = g[2];
int64_t xc = 10400;
int64_t yc = wc * xc;
int64_t zc = vc + yc;
int64_t ad = g[1];
int64_t bd = 3;
int64_t cd = ad << bd;
int64_t * dd = zc + cd;
dd[0] = uc;
int64_t ed = g[1];
int64_t fd = 1;
int64_t gd = ed + fd;
g[1] = gd;
//continue L_f;
}
//unreachable;
B_e:;
int64_t hd = g[2];
int64_t id = 1;
int64_t jd = hd + id;
g[2] = jd;
//continue L_d;
}
//unreachable;
B_c:;
int64_t kd = 1;
g[2] = kd;
while (1) {
int64_t ld = g[2];
int64_t md = g[6];
int64_t nd = 1;
int64_t od = md - nd;
int64_t pd = ld;
int64_t qd = od;
int64_t rd = pd < qd;
int64_t sd = 1;
int64_t td = rd & sd;
if (eqz(td)) goto B_g;
int64_t ud = 1;
g[1] = ud;
while (1) {
int64_t vd = g[1];
int64_t wd = g[6];
int64_t xd = 1;
int64_t yd = wd - xd;
int64_t zd = vd;
int64_t ae = yd;
int64_t be = zd < ae;
int64_t ce = 1;
int64_t de = be & ce;
if (eqz(de)) goto B_i;
int64_t ee = g[4];
int64_t fe = g[2];
int64_t ge = 10400;
int64_t he = fe * ge;
int64_t ie = ee + he;
int64_t je = g[1];
int64_t ke = 3;
int64_t le = je << ke;
int64_t * me = ie + le;
double ne = me[0];
int64_t oe = g[4];
int64_t pe = g[2];
int64_t qe = 10400;
int64_t re = pe * qe;
int64_t se = oe + re;
int64_t te = g[1];
int64_t ue = 1;
int64_t ve = te - ue;
int64_t we = 3;
int64_t xe = ve << we;
int64_t * ye = se + xe;
double ze = ye[0];
double af = ne + ze;
int64_t bf = g[4];
int64_t cf = g[2];
int64_t df = 10400;
int64_t ef = cf * df;
int64_t ff = bf + ef;
int64_t gf = g[1];
int64_t hf = 1;
int64_t _if = gf + hf;
int64_t jf = 3;
int64_t kf = _if << jf;
int64_t * lf = ff + kf;
double mf = lf[0];
double nf = af + mf;
int64_t of = g[4];
int64_t pf = g[2];
int64_t qf = 1;
int64_t rf = pf + qf;
int64_t sf = 10400;
int64_t tf = rf * sf;
int64_t uf = of + tf;
int64_t vf = g[1];
int64_t wf = 3;
int64_t xf = vf << wf;
int64_t * yf = uf + xf;
double zf = yf[0];
double ag = nf + zf;
int64_t bg = g[4];
int64_t cg = g[2];
int64_t dg = 1;
int64_t eg = cg - dg;
int64_t fg = 10400;
int64_t gg = eg * fg;
int64_t hg = bg + gg;
int64_t ig = g[1];
int64_t jg = 3;
int64_t kg = ig << jg;
int64_t * lg = hg + kg;
double mg = lg[0];
double ng = ag + mg;
double og = 0.2;
double pg = og * ng;
int64_t qg = g[5];
int64_t rg = g[2];
int64_t sg = 10400;
int64_t tg = rg * sg;
int64_t ug = qg + tg;
int64_t vg = g[1];
int64_t wg = 3;
int64_t xg = vg << wg;
int64_t * yg = ug + xg;
yg[0] = pg;
int64_t zg = g[1];
int64_t ah = 1;
int64_t bh = zg + ah;
g[1] = bh;
//continue L_j;
}
//unreachable;
B_i:;
int64_t ch = g[2];
int64_t dh = 1;
int64_t eh = ch + dh;
g[2] = eh;
//continue L_h;
}
//unreachable;
B_g:;
int64_t fh = g[3];
int64_t gh = 1;
int64_t hh = fh + gh;
g[3] = hh;
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
int64_t f = 1300;
e[5] = f;
int64_t g = 500;
e[4] = g;
long h = 1690000L;
int64_t i = 8;
int64_t j = legalfunc_polybench_alloc_data(h, i);
e[3] = j;
long k = 1690000L;
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
kernel_jacobi_2d(q, r, s, t);
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
int64_t j = h;
int64_t k = i;
int64_t l = j < k;
int64_t m = 1;
int64_t n = l & m;
if (eqz(n)) goto B_a;
int64_t o = 0;
f[3] = o;
while (1) {
int64_t p = f[3];
int64_t q = f[7];
int64_t r = p;
int64_t s = q;
int64_t t = r < s;
int64_t u = 1;
int64_t v = t & u;
if (eqz(v)) goto B_c;
int64_t w = f[4];
double x = f64_convert_i32_s(w);
int64_t y = f[3];
int64_t z = 2;
int64_t aa = y + z;
double ba = f64_convert_i32_s(aa);
double ca = x * ba;
double da = 2.0;
double ea = ca + da;
int64_t fa = f[7];
double ga = f64_convert_i32_s(fa);
double ha = ea / ga;
int64_t ia = f[6];
int64_t ja = f[4];
int64_t ka = 10400;
int64_t la = ja * ka;
int64_t ma = ia + la;
int64_t na = f[3];
int64_t oa = 3;
int64_t* pa = na << oa;
int64_t * qa = ma + pa;
qa[0] = ha;
int64_t ra = f[4];
double sa = f64_convert_i32_s(ra);
int64_t ta = f[3];
int64_t ua = 3;
int64_t va = ta + ua;
double wa = f64_convert_i32_s(va);
double xa = sa * wa;
double ya = 3.0;
double za = xa + ya;
int64_t ab = f[7];
double bb = f64_convert_i32_s(ab);
double cb = za / bb;
int64_t db = f[5];
int64_t eb = f[4];
int64_t fb = 10400;
int64_t gb = eb * fb;
int64_t hb = db + gb;
int64_t ib = f[3];
int64_t jb = 3;
int64_t kb = ib << jb;
int64_t * lb = hb + kb;
lb[0] = cb;
int64_t mb = f[3];
int64_t nb = 1;
int64_t ob = mb + nb;
f[3] = ob;
//continue L_d;
}
//unreachable;
B_c:;
int64_t pb = f[4];
int64_t qb = 1;
int64_t rb = pb + qb;
f[4] = rb;
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
int64_t ia = ga & ha;
if (eqz(ia)) goto B_c;
int64_t ja = (int64_t)e[13];
int64_t ka = (int64_t)e[15];
int64_t la = ja * ka;
int64_t ma = (int64_t)e[12];
int64_t na = la + ma;
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
int64_t ab = 10400;
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