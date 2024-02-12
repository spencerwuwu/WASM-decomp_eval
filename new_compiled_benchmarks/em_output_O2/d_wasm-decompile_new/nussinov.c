

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00table\00%d \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_nussinov(int a, int b, int c) {
int64_t i;
int64_t d;
int64_t h;
{ n (int,)a (int64_t)b }
int64_t r;
if (a > 0) {
int64_t k = a;
while (1) {
int64_t f = k;
k = f - 1;
if (a > f) {
int64_t m = c + k * 10000;
int64_t * p = m + (f << 2);
int64_t o = f + 1;
int64_t * q = b + k;
int64_t l = 0;
int64_t g = f;
while (1) {
int64_t * j = m + (i = g << 2);
int64_t e = j[0];
j[0] =
(d =
{
if (g > 0) {
j[0] =
(e = select__if(e = select__if(e, h = (m + (d = i - (int,)4))[0] e > h),
n = ((h = c + f * 10000) + (int,)i)[0]
e > n));
d = (d + (int64_t)h)[0];
if (f < g) {
select__if(e, d = d + ((b + (byte)g)[0] + q[0] == 3), d < e);
goto B_e;
}
select__if(e, d, d < e);
goto B_e;
}
select__if(e, d = (c + f * 10000 + (int,)i)[0] d < e);
B_e:;
});
if (f >= g) goto B_h;
e =
if (l & 1) {
j[0] =
(d = select__if(d, e = (c + o * 10000 + (int64_t)i)[0] + p[0], d > e));
o;
} else {
;
}
if (l == 1) goto B_h;
while (1) {
j[0] =
(d =
select__if(
d,
r = ((h = e * 10000 + c + i) + (int64_t)10000)[0] + (n = m + (e << 2)).a,
d > r));
j[0] = (d = select__if(d, h = (h + (int64_t)20000)[0] + n.b, d > h));
e = e + 2;
if (e != g) //continue L_j;
}
B_h:;
l = l + 1;
g = g + 1;
if (g != a) //continue L_d;
}
}
if (f >= 2) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t c;
int64_t d;
int64_t e;
{ g (int,)a (int64_t)b }
int64_t j;
int64_t f;
int64_t h;
int64_t * k = stack_pointer - 48;
stack_pointer = k;
int64_t l = legalfunc_polybench_alloc_data(2500L, 1);
int64_t m = legalfunc_polybench_alloc_data(6250000L, 4);
while (1) {
f = c + l;
f[4] = (d = c + 5) & 3;
(l + (e = c + (byte)3))[0] = c & 3;
(l + (g = c + (byte)2))[0] = e & 3;
(l + (c = c + (byte)1))[0] = g & 3;
f[0] = c & 3;
c = d;
if (c != 2500) //continue L_a;
}
int64_t n = memset(m, 0, 25000000);
int64_t o = 2500;
while (1) {
int64_t i = o;
o = i - 1;
if (i <= 2499) {
int64_t q = n + o * 10000;
int64_t * s = q + (i << 2);
int64_t r = i + 1;
int64_t * t = l + o;
int64_t p = 0;
h = i;
while (1) {
f = q + (j = h << 2);
(int64_t)f[0] =
(d =
select__if(
c = select__if(c = (int,)f[0] d = (q + (e = j - (int,)4))[0] c > d),
d = ((g = n + i * 10000) + (int,)j)[0]
c > d));
c = (e + (int64_t)g)[0];
e = h <= i;
if (eqz(e)) { c = c + ((h + (byte)l)[0] + t[0] == 3) }
f[0] = (d = select__if(d, c, c < d));
if (e) goto B_f;
c =
if (p & 1) {
(int64_t)f[0] =
(d = select__if(d, c = (n + r * 10000 + (int64_t)j)[0] + s[0], c < d));
r;
} else {
;
}
if (p == 1) goto B_f;
while (1) {
(int64_t)f[0] =
(d =
select__if(
d,
m = ((e = c * 10000 + n + j) + (int64_t)10000)[0] + (g = q + (c << 2)).a,
d > m));
f[0] = (d = select__if(d, e = (e + (int64_t)20000)[0] + g.b, d > e));
c = c + 2;
if (c != h) //continue L_h;
}
B_f:;
p = p + 1;
h = h + 1;
if (h != 2500) //continue L_d;
}
}
if (i >= 2) //continue L_b;
}
if (a < 43) goto B_i;
if (ubyte))((b[0])[0] goto B_i;
c = memory_base;
fwrite(c + 42, 22, 1, g = (int))stderr[0];
k[8] = c + 15;
fiprintf(g, c, k + 32);
m = 0;
h = 2499;
e = 2500;
j = 2500;
f = 0;
while (1) {
c = m;
d = f;
while (1) {
if (eqz(c % 20)) { fputc(10, g) }
k[4] = (n + f * (int64_t)10000)[d];
fiprintf(g, memory_base + 21, k + 16);
d = d + 1;
c = c + 1;
if (c != e) //continue L_k;
}
e = e + h;
h = h - 1;
m = j + m;
j = j - 1;
f = f + 1;
if (f != 2500) //continue L_j;
}
k[0] = (c = memory_base) + 15;
fiprintf(g, c + 25, k);
fwrite(c + 65, 22, 1, g);
B_i:;
free(l);
free(n);
stack_pointer = k + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}