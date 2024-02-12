

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"imgOut\00begin ()dump %s\00%0.2f \00\0aend ()dump %s\0a\00==BEGIN DUMP"
"_ARRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";

















void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_deriche(int a, int b, float c, float_ptr d, int e, int f, int g) {
float h;
float i;
float n;
int64_t * u;
int64_t v;
int64_t q;
int64_t r;
float t;
int64_t s;
float j = 1.0f - (i = expf(h = -(c)));
float k = j * j / ((j = c + c) * i + 1.0f - expf(j));
float l = -(k);
float m = c + 1.0f;
float o = (c + -1.0f) * (n = i * k);
float p = expf(c * -2.0f);
c = -(p);
i = exp2f(h);
q = a < 1;
if (q) goto B_a;
r = 0;
while (1) {
s = r;
r = 0;
h = 0.0f;
j = 0.0f;
t = 0.0f;
if (b <= 0) goto B_c;
while (1) {
(f + (u = s * 8640) + (v = (r = r) << (float)2))[0] =
(j = c * t + i * (t = j) + k * (u = d + u + v)[0] + o * h);
v = r + 1;
r = v;
h = u[0];
j = j;
t = t;
if (v != b) //continue L_d;
}
B_c:;
u = s + 1;
r = u;
if (u != a) //continue L_b;
}
B_a:;
p = p * l;
m = m * n;
if (q) goto B_e;
r = 0;
while (1) {
q = r;
r = b;
h = 0.0f;
j = 0.0f;
t = 0.0f;
l = 0.0f;
if (b <= 0) goto B_g;
while (1) {
(g + (u = q * 8640) + (s = (r = (v = r) + -1) << (float)2))[0] =
(n = c * l + i * (l = t) + m * (t = h) + p * j);
r = r;
h = (d + u + (float)s)[0];
j = t;
t = n;
l = l;
if (v > 1) //continue L_h;
}
B_g:;
u = q + 1;
r = u;
if (u != a) //continue L_f;
}
B_e:;
if (a < 1) goto B_i;
r = 0;
while (1) {
v = r;
d = 0;
if (b <= 0) goto B_k;
while (1) {
(e + (r = v * 8640) + (d = (u = d) << (float)2))[0] =
(f + r + (float)d)[0] + (g + r + (float)d)[0];
r = u + 1;
d = r;
if (r != b) //continue L_l;
}
B_k:;
d = v + 1;
r = d;
if (d != a) //continue L_j;
}
B_i:;
if (b < 1) goto B_m;
r = 0;
while (1) {
v = r;
r = 0;
h = 0.0f;
j = 0.0f;
t = 0.0f;
if (a <= 0) goto B_o;
while (1) {
(f + (d = (r = r) * 8640) + (u = v << (float)2))[0] =
(j = c * t + i * (t = j) + k * (d = e + d + u)[0] + o * h);
u = r + 1;
r = u;
h = d[0];
j = j;
t = t;
if (u != a) //continue L_p;
}
B_o:;
d = v + 1;
r = d;
if (d != b) //continue L_n;
}
B_m:;
if (b < 1) goto B_q;
r = 0;
while (1) {
s = r;
r = a;
h = 0.0f;
j = 0.0f;
t = 0.0f;
l = 0.0f;
if (a <= 0) goto B_s;
while (1) {
(g + (u = (r = (d = r) + -1) * 8640) + (v = s << (float)2))[0] =
(k = c * l + i * (l = t) + m * (t = h) + p * j);
r = r;
h = (e + u + (float)v)[0];
j = t;
t = k;
l = l;
if (d > 1) //continue L_t;
}
B_s:;
d = s + 1;
r = d;
if (d != b) //continue L_r;
}
B_q:;
if (a < 1) goto B_u;
s = b < 1;
r = 0;
while (1) {
v = r;
d = 0;
if (s) goto B_w;
while (1) {
(e + (r = v * 8640) + (d = (u = d) << (float)2))[0] =
(f + r + (float)d)[0] + (g + r + (float)d)[0];
r = u + 1;
d = r;
if (r != b) //continue L_x;
}
B_w:;
d = v + 1;
r = d;
if (d != a) //continue L_v;
}
B_u:;
}

int submain(int a, int_ptr b) {
int64_t k;
int64_t j;
int64_t i;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(8847360L, 4);
int64_t e = legalfunc_polybench_alloc_data(8847360L, 4);
int64_t f = legalfunc_polybench_alloc_data(8847360L, 4);
int64_t g = legalfunc_polybench_alloc_data(8847360L, 4);
int64_t h = 0;
while (1) {
i = h;
j = i * 313;
h = 0;
while (1) {
(d + i * 8640)[h = (float)h] =
f32_convert_i32_s(h * 991 + j & 65535) / 65535.0f;
k = h + 1;
h = k;
if (k != 2160) //continue L_b;
}
k = i + 1;
h = k;
if (k != 4096) //continue L_a;
}
kernel_deriche(4096, 2160, 0.25f, d, e, f, g);
if (a < 43) goto B_c;
if (ubyte))((b[0])[0] goto B_c;
h = memory_base;
fwrite(h + 46, 22, 1, j = (int))stderr[0];
c[8] = h + 0;
fiprintf(j, h + 7, c + 32);
h = 0;
while (1) {
i = h;
a = i * 2160;
h = 0;
while (1) {
h = h;
if ((h + a) % 20) goto B_f;
fputc(10, j);
B_f:;
c[2] = f64_promote_f32((e + i * (float))8640)[h];
small_fprintf(j, memory_base + 22, c + 16);
k = h + 1;
h = k;
if (k != 2160) //continue L_e;
}
k = i + 1;
h = k;
if (k != 4096) //continue L_d;
}
c[0] = (h = memory_base) + 0;
fiprintf(j, h + 29, c);
fwrite(h + 69, 22, 1, j);
B_c:;
free(d);
free(e);
free(f);
free(g);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}