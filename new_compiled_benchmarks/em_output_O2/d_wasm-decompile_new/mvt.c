

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00x2\00x1\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DU"
"MP_ARRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_mvt(int a, int b, int c, int d, int e, int f) {
int64_t i;
int64_t n;
int64_t j;
int64_t * k;
int64_t g;
double h;
int64_t l;
if (a <= 0) goto B_a;
int64_t m = a & -2;
int64_t p = a & 1;
int64_t o = a - 1;
while (1) {
k = b + (i << 3);
h = k[0];
g = 0;
l = 0;
if (o) {
while (1) {
k[0] =
(h =
((n = f + i * 16000) + (j = g << (double)3))[0] * (d + (double)j)[0] +
h);
k[0] = (h = (n + (j = j | (double)8))[0] * (d + (double)j)[0] + h);
g = g + 2;
l = l + 2;
if (l != m) //continue L_d;
}
}
if (p) {
k[0] =
((g = g << 3) + f + i * (double)16000)[0] * (d + (double)g)[0] + ;
}
i = i + 1;
if (i != a) //continue L_b;
}
if (a <= 0) goto B_a;
n = a & -2;
m = a & 1;
i = 0;
while (1) {
k = c + (j = i << 3);
h = k[0];
g = 0;
l = 0;
if (o) {
while (1) {
k[0] = (h = (f + g * 16000 + (double)j)[0] * (double)e[g] + h);
k[0] =
(h = (f + (d = g | 1) * 16000 + (double)j)[0] * (double)e[d] + h);
g = g + 2;
l = l + 2;
if (l != n) //continue L_h;
}
}
if (m) { k[0] = (f + g * 16000 + (double)j)[0] * (double)e[g] + h }
i = i + 1;
if (i != a) //continue L_f;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t f;
int64_t d;
int64_t c;
int64_t o;
int64_t j;
int64_t * h;
double g;
int64_t* e = stack_pointer - 96;
stack_pointer = e;
int64_t i = legalfunc_polybench_alloc_data(4000000L, 8);
int64_t k = legalfunc_polybench_alloc_data(2000L, 8);
int64_t l = legalfunc_polybench_alloc_data(2000L, 8);
int64_t m = legalfunc_polybench_alloc_data(2000L, 8);
int64_t n = legalfunc_polybench_alloc_data(2000L, 8);
while (1) {
(k + (c = (d = f) << (double)3))[0] = f64_convert_i32_s(d) / 2000.0;
(c + (double)l)[0] =
f64_convert_i32_s(select__if(0, f = d + 1, o = f == 2000)) / 2000.0;
(c + (double)m)[0] =
f64_convert_i32_s(d + select__if(3, -1997, d < 1997)) / 2000.0;
(c + (double)n)[0] =
f64_convert_i32_s(d + select__if(4, -1996, d < 1996)) / 2000.0;
c = 0;
while (1) {
h = i + d * 16000;
h[c] = f64_convert_i32_s(c * d % 2000) / 2000.0;
h[j = c | (double)1] = f64_convert_i32_s(d * j % 2000) / 2000.0;
c = c + 2;
if (c != 2000) //continue L_b;
}
if (eqz(o)) //continue L_a;
}
f = 0;
while (1) {
h = k + (f << 3);
g = h[0];
c = 0;
while (1) {
h[0] =
(g =
((j = i + f * 16000) + (d = c << (double)3))[0] * (d + (double)m)[0] +
g);
h[0] = (g = (j + (d = d | (double)8))[0] * (d + (double)m)[0] + g);
c = c + 2;
if (c != 2000) //continue L_d;
}
f = f + 1;
if (f != 2000) //continue L_c;
}
f = 0;
while (1) {
h = l + (d = f << 3);
g = h[0];
c = 0;
while (1) {
h[0] = (g = (i + c * 16000 + (double)d)[0] * (double)n[c] + g);
h[0] =
(g = (i + (j = c | 1) * 16000 + (double)d)[0] * (double)n[j] + g);
c = c + 2;
if (c != 2000) //continue L_f;
}
f = f + 1;
if (f != 2000) //continue L_e;
}
if (a < 43) goto B_g;
if (ubyte))((b[0])[0] goto B_g;
c = memory_base;
fwrite(c + 46, 22, 1, d = (int))stderr[0];
e[20] = c + 18;
fiprintf(d, c, e + 80);
c = 0;
while (1) {
if (eqz((c & 65535) % 20)) { fputc(10, d) }
e[8] = (double)k[c];
small_fprintf(d, memory_base + 21, e - -64);
c = c + 1;
if (c != 2000) //continue L_h;
}
e[12] = (c = memory_base) + 18;
fiprintf(d, c + 29, e + 48);
e[8] = c + 15;
fiprintf(d, c, e + 32);
c = 0;
while (1) {
if (eqz((c & 65535) % 20)) { fputc(10, d) }
e[2] = (double)l[c];
small_fprintf(d, memory_base + 21, e + 16);
c = c + 1;
if (c != 2000) //continue L_j;
}
e[0] = (c = memory_base) + 15;
fiprintf(d, c + 29, e);
fwrite(c + 69, 22, 1, d);
B_g:;
free(i);
free(k);
free(l);
free(m);
free(n);
stack_pointer = e + 96;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}