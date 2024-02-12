

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00path\00%d \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARRA"
"YS==\0a\00==END DUMP_ARRAYS==\0a\00";











void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_floyd_warshall(int a, int b) {
int64_t e;
int64_t h;
if (a < 1) goto B_a;
int64_t c = 0;
while (1) {
int64_t d = c;
c = 0;
while (1) {
int64_t f = b + (e = c) * 11200;
int64_t * g = f + (d << 2);
c = 0;
while (1) {
int64_t * i = f + (h = (c = c) << 2);
i[0] =
select__if(i = i[0], h = (b + d * 11200 + (int64_t)h)[0] + g[0], i < h);
h = c + 1;
c = h;
if (h != a) //continue L_d;
}
h = e + 1;
c = h;
if (h != a) //continue L_c;
}
h = d + 1;
c = h;
if (h != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t * g;
int64_t i;
int64_t f;
int64_t h;
int64_t j;
int64_t * c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(7840000L, 4);
int64_t e = 0;
while (1) {
f = e;
e = 0;
while (1) {
(d + f * 11200)[e = (int64_t)e] =
select__if(
select__if(select__if(e * f % 7 + 1, 999, (g = e + f) % 11), 999, g % 7),
999,
g % 13);
g = e + 1;
e = g;
if (g != 2800) //continue L_b;
}
f = f + 1;
e = f;
if (f != 2800) //continue L_a;
}
e = 0;
while (1) {
h = e;
e = 0;
while (1) {
j = d + (i = e) * 11200;
int64_t * k = j + (h << 2);
e = 0;
while (1) {
g = j + (f = (e = e) << 2);
g[0] =
select__if(g = g[0], f = (d + h * 11200 + (int64_t)f)[0] + k[0], g < f);
f = e + 1;
e = f;
if (f != 2800) //continue L_e;
}
f = i + 1;
e = f;
if (f != 2800) //continue L_d;
}
f = h + 1;
e = f;
if (f != 2800) //continue L_c;
}
if (a < 43) goto B_f;
if (ubyte))((b[0])[0] goto B_f;
e = memory_base;
fwrite(e + 41, 22, 1, h = (int))stderr[0];
c[8] = e + 15;
fiprintf(h, e + 0, c + 32);
e = 0;
while (1) {
g = e;
j = g * 2800;
e = 0;
while (1) {
e = e;
if ((e + j) % 20) goto B_i;
fputc(10, h);
B_i:;
c[4] = (d + g * (int64_t)11200)[e];
fiprintf(h, memory_base + 20, c + 16);
f = e + 1;
e = f;
if (f != 2800) //continue L_h;
}
f = g + 1;
e = f;
if (f != 2800) //continue L_g;
}
c[0] = (e = memory_base) + 15;
fiprintf(h, e + 24, c);
fwrite(e + 64, 22, 1, h);
B_f:;
free(d);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}