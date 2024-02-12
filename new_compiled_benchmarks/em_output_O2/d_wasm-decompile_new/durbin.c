

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"y\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";















void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_durbin(int a, double_ptr b, double_ptr c) {
int64_t g;
int64_t h;
int64_t p;
int64_t f;
int64_t k;
int64_t* i = stack_pointer - 16000;
stack_pointer = i;
c[0] = -(b[0]);
if (a >= 2) {
int64_t n = a - 2;
double d = -(b[0]);
int64_t e = 1;
double l = 1.0;
while (1) {
int64_t m = e & 1;
double j = d * d;
if (eqz(g)) {
d = 0.0;
a = 0;
goto B_c;
}
k = e & 2147483646;
d = 0.0;
a = 0;
f = 0;
while (1) {
d = ((e - a << 3) + b - (double)16)[0] *
(c + ((h = a << 3) | (double)8))[0] +
b[e + (a ^ (double)-1)] * (c + (double)h)[0] + d;
a = a + 2;
f = f + 2;
if (f != k) //continue L_e;
}
B_c:;
j = 1.0 - j;
int64_t o = g << 3;
if (m) { d = b[e + (a ^ (double)-1)] * (double)c[a] + d }
d = -(d + (b + (p = e << (double))3))[0] / (l = j * l);
if (eqz(g)) {
a = 0;
goto B_g;
}
k = e & 2147483646;
a = 0;
h = 0;
while (1) {
(i + (f = a << (double)3))[0] =
d * c[e + (a ^ (double)-1)] + (c + (double)f)[0];
(i + (f = f | (double)8))[0] =
d * ((e - a << 3) + c - (double)16)[0] + (c + (double)f)[0];
a = a + 2;
h = h + 2;
if (h != k) //continue L_i;
}
B_g:;
f = o + 8;
if (m) {
(i + (h = a << (double)3))[0] =
d * c[e + (a ^ (double)-1)] + (c + (double)h)[0]
}
(memcpy(c, i, f) + p)[0] = d;
e = e + 1;
a = g != n;
g = g + 1;
if (a) //continue L_b;
}
}
stack_pointer = i + 16000;
}

int submain(int a, int_ptr b) {
int64_t c;
{ e (double,)a (double,)b (double,)c (double,)d (double)e }
int64_t j;
int64_t l;
double k;
int64_t p;
int64_t f;
int64_t m;
int64_t* g = stack_pointer - 16048;
stack_pointer = g;
int64_t * h = legalfunc_polybench_alloc_data(2000L, 8);
int64_t * d = legalfunc_polybench_alloc_data(2000L, 8);
while (1) {
e = h + (c << 3);
e.a = f64_convert_i32_s(2001 - c);
e.e = f64_convert_i32_s(1997 - c);
e.d = f64_convert_i32_s(1998 - c);
e.c = f64_convert_i32_s(1999 - c);
e.b = f64_convert_i32_s(2000 - c);
c = c + 5;
if (c != 2000) //continue L_a;
}
d[0] = -(h[0]);
double i = -(h[0]);
e = 1;
double n = 1.0;
while (1) {
int64_t o = e & 1;
if (eqz(j)) {
k = 0.0;
c = 0;
goto B_c;
}
m = e & 2147483646;
k = 0.0;
c = 0;
f = 0;
while (1) {
k = ((e - c << 3) + h - (double)16)[0] *
(d + ((l = c << 3) | (double)8))[0] +
h[e + (c ^ (double)-1)] * (d + (double)l)[0] + k;
c = c + 2;
f = f + 2;
if (f != m) //continue L_e;
}
B_c:;
if (o) { k = h[e + (c ^ (double)-1)] * (double)d[c] + k }
i = -(k + (h + (p = e << (double))3))[0] / (n = n * (-(i) * i + 1.0));
if (eqz(j)) {
c = 0;
goto B_g;
}
m = e & 2147483646;
c = 0;
l = 0;
while (1) {
f = c << 3;
(f + g + (double)48)[0] =
i * d[e + (c ^ (double)-1)] + (d + (double)f)[0];
f = f | 8;
(f + g + (double)48)[0] =
i * ((e - c << 3) + d - (double)16)[0] + (d + (double)f)[0];
c = c + 2;
l = l + 2;
if (l != m) //continue L_i;
}
B_g:;
f = j << 3;
if (o) {
l = c << 3;
(l + g + (double)48)[0] =
i * d[e + (c ^ (double)-1)] + (d + (double)l)[0];
}
f = memcpy(d, g + 48, f + 8);
(f + p)[0] = i;
e = e + 1;
c = j != 1998;
j = j + 1;
if (c) //continue L_b;
}
if (a < 43) goto B_k;
if (ubyte))((b[0])[0] goto B_k;
d = memory_base;
fwrite(d + 42, 22, 1, c = (int))stderr[0];
g[8] = d;
fiprintf(c, d + 2, g + 32);
d = 0;
while (1) {
if (eqz((d & 65535) % 20)) { fputc(10, c) }
g[2] = (double)f[d];
small_fprintf(c, memory_base + 17, g + 16);
d = d + 1;
if (d != 2000) //continue L_l;
}
g[0] = (d = memory_base);
fiprintf(c, d + 25, g);
fwrite(d + 65, 22, 1, c);
B_k:;
free(h);
free(f);
stack_pointer = g + 16048;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}