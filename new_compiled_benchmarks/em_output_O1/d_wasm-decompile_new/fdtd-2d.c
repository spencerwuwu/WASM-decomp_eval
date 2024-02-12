

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"hz\00ey\00ex\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEG"
"IN DUMP_ARRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_fdtd_2d(int a, int b, int c, int d, int e, int f, int g) {
int64_t * o;
int64_t * n;
int64_t p;
int64_t * r;
int64_t q;
if (a < 1) goto B_a;
int64_t h = b + -2;
int64_t i = c + -2;
int64_t j = c < 1;
int64_t k = c < 2;
int64_t l = 0;
while (1) {
int64_t m = l;
if (j) goto B_c;
n = g + (m << 3);
l = 0;
while (1) {
e[l = (double)l] = n[0];
o = l + 1;
l = o;
if (o != c) //continue L_d;
}
B_c:;
l = 1;
if (b <= 1) goto B_e;
while (1) {
p = l;
if (j) goto B_g;
q = p + -1;
l = 0;
while (1) {
r = e + (o = p * 9600) + (l = (n = l) << 3);
r[0] =
((f + o + (double)l)[0] - (f + q * 9600 + (double))l)[0] * -0.5 + r[0];
o = n + 1;
l = o;
if (o != c) //continue L_h;
}
B_g:;
o = p + 1;
l = o;
if (o != b) //continue L_f;
}
B_e:;
l = 0;
if (b <= 0) goto B_i;
while (1) {
p = l;
l = 1;
if (k) goto B_k;
while (1) {
r = d + (o = p * 9600) + (n = (l = l) << 3);
r[0] = ((o = f + o + n)[0] - (o + (double))-8)[0] * -0.5 + r[0];
o = l + 1;
l = o;
if (o != c) //continue L_l;
}
B_k:;
o = p + 1;
l = o;
if (o != b) //continue L_j;
}
B_i:;
l = 0;
if (b <= 1) goto B_m;
while (1) {
int64_t s = l;
if (k) goto B_o;
int64_t t = s + 1;
l = 0;
while (1) {
r = f + (o = s * 9600) + (l = (n = l) << 3);
r[0] =
((p = d + o)[q = n + (double)1] - (p + (double)l)[0] +
(e + t * 9600 + (double)l)[0] -
(e + o + (double))l)[0] *
-0.7 +
r[0];
l = q;
if (n != i) //continue L_p;
}
B_o:;
l = s + 1;
if (s != h) //continue L_n;
}
B_m:;
o = m + 1;
l = o;
if (o != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t l;
int64_t m;
int64_t i;
int64_t j;
int64_t* c = stack_pointer - 144;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t e = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t f = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t g = legalfunc_polybench_alloc_data(500L, 8);
int64_t h = 0;
while (1) {
g[h = (double)h] = f64_convert_i32_s(h);
i = h + 1;
h = i;
if (i != 500) //continue L_a;
}
h = 0;
while (1) {
j = h;
double k = f64_convert_i32_s(j);
h = 0;
while (1) {
(d + (i = j * 9600) + (l = (h = h) << (double)3))[0] =
k * f64_convert_i32_s(m = h + 1) / 1000.0;
(e + i + l)[0] = k * f64_convert_i32_s(h + 2) / 1200.0;
(f + i + l)[0] = k * f64_convert_i32_s(h + 3) / 1000.0;
h = m;
if (m != 1200) //continue L_c;
}
i = j + 1;
h = i;
if (i != 1000) //continue L_b;
}
kernel_fdtd_2d(500, 1000, 1200, d, e, f, g);
if (a < 43) goto B_d;
if (ubyte))((b[0])[0] goto B_d;
i = memory_base;
fwrite(i + 49, 22, 1, h = (int))stderr[0];
c[32] = i + 6;
fiprintf(h, i + 9, c + 128);
i = 0;
while (1) {
m = i;
j = m * 1000;
i = 0;
while (1) {
i = i;
if ((i + j) % 20) goto B_g;
fputc(10, h);
B_g:;
c[14] = (d + m * (double)9600)[i];
small_fprintf(h, memory_base + 24, c + 112);
l = i + 1;
i = l;
if (l != 1200) //continue L_f;
}
l = m + 1;
i = l;
if (l != 1000) //continue L_e;
}
c[24] = (i = memory_base) + 6;
fiprintf(h, i + 32, c + 96);
fwrite(i + 72, 22, 1, h);
c[20] = i + 3;
fiprintf(h, i + 9, c + 80);
i = 0;
while (1) {
m = i;
j = m * 1000;
i = 0;
while (1) {
i = i;
if ((i + j) % 20) goto B_j;
fputc(10, h);
B_j:;
c[8] = (e + m * (double)9600)[i];
small_fprintf(h, memory_base + 24, c + 64);
l = i + 1;
i = l;
if (l != 1200) //continue L_i;
}
l = m + 1;
i = l;
if (l != 1000) //continue L_h;
}
c[12] = (i = memory_base) + 3;
fiprintf(h, i + 32, c + 48);
c[8] = i + 0;
fiprintf(h, i + 9, c + 32);
i = 0;
while (1) {
m = i;
j = m * 1000;
i = 0;
while (1) {
i = i;
if ((i + j) % 20) goto B_m;
fputc(10, h);
B_m:;
c[2] = (f + m * (double)9600)[i];
small_fprintf(h, memory_base + 24, c + 16);
l = i + 1;
i = l;
if (l != 1200) //continue L_l;
}
l = m + 1;
i = l;
if (l != 1000) //continue L_k;
}
c[0] = (i = memory_base) + 0;
fiprintf(h, i + 32, c);
B_d:;
free(d);
free(e);
free(f);
free(g);
stack_pointer = c + 144;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}