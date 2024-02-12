

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00path\00%d \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARRA"
"YS==\0a\00==END DUMP_ARRAYS==\0a\00";











void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_floyd_warshall(int a, int b) {
int64_t f;
int64_t * c;
int64_t m;
int64_t n;
if (a > 0) {
int64_t k = a & -2;
int64_t l = a & 1;
while (1) {
int64_t g = 0;
while (1) {
int64_t h = b + g * 11200;
int64_t * i = h + (f << 2);
int64_t d = 0;
int64_t j = 0;
if (a != 1) {
while (1) {
int64_t * e = h + (c = d << 2);
e[0] =
select__if(e = e[0], n = ((m = b + f * 11200) + (int64_t)c)[0] + i[0], e < n);
e = h + (c = c | 4);
e[0] = select__if(e = e[0], c = (c + (int64_t)m)[0] + i[0], c > e);
d = d + 2;
j = j + 2;
if (j != k) //continue L_e;
}
}
if (l) {
c = h + (d = d << 2);
c[0] =
select__if(c = c[0], d = (b + f * 11200 + (int64_t)d)[0] + i[0], c < d);
}
g = g + 1;
if (g != a) //continue L_c;
}
f = f + 1;
if (f != a) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t d;
int64_t e;
int64_t i;
int64_t c;
int64_t l;
int64_t m;
int64_t * j;
int64_t * f = stack_pointer - 48;
stack_pointer = f;
int64_t h = legalfunc_polybench_alloc_data(7840000L, 4);
while (1) {
c = 0;
while (1) {
(h + d * (int64_t)11200)[c] =
select__if(
select__if(select__if(c * d % 7 + 1, 999, (e = c + d) % 11), 999, e % 7),
999,
e % 13);
c = c + 1;
if (c != 2800) //continue L_b;
}
d = d + 1;
if (d != 2800) //continue L_a;
}
while (1) {
int64_t k = 0;
while (1) {
e = h + k * 11200;
j = e + (i << 2);
c = 0;
while (1) {
int64_t * g = e + (d = c << 2);
g[0] =
select__if(g = g[0], m = ((l = h + i * 11200) + (int64_t)d)[0] + j[0], g < m);
g = e + (d = d | 4);
g[0] = select__if(g = g[0], d = (d + (int64_t)l)[0] + j[0], d > g);
c = c + 2;
if (c != 2800) //continue L_e;
}
k = k + 1;
if (k != 2800) //continue L_d;
}
i = i + 1;
if (i != 2800) //continue L_c;
}
if (a < 43) goto B_f;
if (ubyte))((b[0])[0] goto B_f;
c = memory_base;
fwrite(c + 41, 22, 1, e = (int))stderr[0];
f[8] = c + 15;
fiprintf(e, c, f + 32);
d = 0;
while (1) {
j = d * 2800;
c = 0;
while (1) {
if (eqz((c + j) % 20)) { fputc(10, e) }
f[4] = (h + d * (int64_t)11200)[c];
fiprintf(e, memory_base + 20, f + 16);
c = c + 1;
if (c != 2800) //continue L_h;
}
d = d + 1;
if (d != 2800) //continue L_g;
}
f[0] = (c = memory_base) + 15;
fiprintf(e, c + 24, f);
fwrite(c - -64, 22, 1, e);
B_f:;
free(h);
stack_pointer = f + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}