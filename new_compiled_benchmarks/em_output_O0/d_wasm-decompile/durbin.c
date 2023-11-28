import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "y\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_durbin(a:int, b:int, c:int) {
  var d:int = stack_pointer;
  var e:int = 16048;
  var f:int = d - e;
  stack_pointer = f;
  f[4011]:int = a;
  f[4010]:int = b;
  f[4009]:int = c;
  var g:double_ptr = f[4010]:int;
  var h:double = g[0];
  var i:double = -(h);
  var j:double_ptr = f[4009]:int;
  j[0] = i;
  var k:double = 1.0;
  f[2]:double = k;
  var l:double_ptr = f[4010]:int;
  var m:double = l[0];
  var n:double = -(m);
  f[3]:double = n;
  var o:int = 1;
  f[0]:int = o;
  loop L_b {
    var p:int = f[0]:int;
    var q:int = f[4011]:int;
    var r:int = p;
    var s:int = q;
    var t:int = r < s;
    var u:int = 1;
    var v:int = t & u;
    if (eqz(v)) goto B_a;
    var w:double = f[3]:double;
    var x:double = f[3]:double;
    var y:double = -(w);
    var z:double = y * x;
    var aa:double = 1.0;
    var ba:double = z + aa;
    var ca:double = f[2]:double;
    var da:double = ba * ca;
    f[2]:double = da;
    var ea:int = 0;
    var fa:double = f64_convert_i32_s(ea);
    f[1]:double = fa;
    var ga:int = 0;
    f[1]:int = ga;
    loop L_d {
      var ha:int = f[1]:int;
      var ia:int = f[0]:int;
      var ja:int = ha;
      var ka:int = ia;
      var la:int = ja < ka;
      var ma:int = 1;
      var na:int = la & ma;
      if (eqz(na)) goto B_c;
      var oa:int = f[4010]:int;
      var pa:int = f[0]:int;
      var qa:int = f[1]:int;
      var ra:int = pa - qa;
      var sa:int = 1;
      var ta:int = ra - sa;
      var ua:int = 3;
      var va:int = ta << ua;
      var wa:double_ptr = oa + va;
      var xa:double = wa[0];
      var ya:int = f[4009]:int;
      var za:int = f[1]:int;
      var ab:int = 3;
      var bb:int = za << ab;
      var cb:double_ptr = ya + bb;
      var db:double = cb[0];
      var eb:double = f[1]:double;
      var fb:double = xa * db;
      var gb:double = fb + eb;
      f[1]:double = gb;
      var hb:int = f[1]:int;
      var ib:int = 1;
      var jb:int = hb + ib;
      f[1]:int = jb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var kb:int = f[4010]:int;
    var lb:int = f[0]:int;
    var mb:int = 3;
    var nb:int = lb << mb;
    var ob:double_ptr = kb + nb;
    var pb:double = ob[0];
    var qb:double = f[1]:double;
    var rb:double = pb + qb;
    var sb:double = -(rb);
    var tb:double = f[2]:double;
    var ub:double = sb / tb;
    f[3]:double = ub;
    var vb:int = 0;
    f[1]:int = vb;
    loop L_f {
      var wb:int = f[1]:int;
      var xb:int = f[0]:int;
      var yb:int = wb;
      var zb:int = xb;
      var ac:int = yb < zb;
      var bc:int = 1;
      var cc:int = ac & bc;
      if (eqz(cc)) goto B_e;
      var dc:int = f[4009]:int;
      var ec:int = f[1]:int;
      var fc:int = 3;
      var gc:int = ec << fc;
      var hc:double_ptr = dc + gc;
      var ic:double = hc[0];
      var jc:double = f[3]:double;
      var kc:int = f[4009]:int;
      var lc:int = f[0]:int;
      var mc:int = f[1]:int;
      var nc:int = lc - mc;
      var oc:int = 1;
      var pc:int = nc - oc;
      var qc:int = 3;
      var rc:int = pc << qc;
      var sc:double_ptr = kc + rc;
      var tc:double = sc[0];
      var uc:double = jc * tc;
      var vc:double = uc + ic;
      var wc:int = f[1]:int;
      var xc:int = 32;
      var yc:int = f + xc;
      var zc:int = yc;
      var ad:int = 3;
      var bd:int = wc << ad;
      var cd:double_ptr = zc + bd;
      cd[0] = vc;
      var dd:int = f[1]:int;
      var ed:int = 1;
      var fd:int = dd + ed;
      f[1]:int = fd;
      continue L_f;
    }
    unreachable;
    label B_e:
    var gd:int = 0;
    f[1]:int = gd;
    loop L_h {
      var hd:int = f[1]:int;
      var id:int = f[0]:int;
      var jd:int = hd;
      var kd:int = id;
      var ld:int = jd < kd;
      var md:int = 1;
      var nd:int = ld & md;
      if (eqz(nd)) goto B_g;
      var od:int = f[1]:int;
      var pd:int = 32;
      var qd:int = f + pd;
      var rd:int = qd;
      var sd:int = 3;
      var td:int = od << sd;
      var ud:double_ptr = rd + td;
      var vd:double = ud[0];
      var wd:int = f[4009]:int;
      var xd:int = f[1]:int;
      var yd:int = 3;
      var zd:int = xd << yd;
      var ae:double_ptr = wd + zd;
      ae[0] = vd;
      var be:int = f[1]:int;
      var ce:int = 1;
      var de:int = be + ce;
      f[1]:int = de;
      continue L_h;
    }
    unreachable;
    label B_g:
    var ee:double = f[3]:double;
    var fe:int = f[4009]:int;
    var ge:int = f[0]:int;
    var he:int = 3;
    var ie:int = ge << he;
    var je:double_ptr = fe + ie;
    je[0] = ee;
    var ke:int = f[0]:int;
    var le:int = 1;
    var me:int = ke + le;
    f[0]:int = me;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ne:int = 16048;
  var oe:int = f + ne;
  stack_pointer = oe;
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 32;
  var e:int_ptr = c - d;
  stack_pointer = e;
  e[7] = a;
  e[6] = b;
  var f:int = 2000;
  e[5] = f;
  var g:long = 2000L;
  var h:int = 8;
  var i:int = legalfunc_polybench_alloc_data(g, h);
  e[4] = i;
  var j:long = 2000L;
  var k:int = 8;
  var l:int = legalfunc_polybench_alloc_data(j, k);
  e[3] = l;
  var m:int = e[5];
  var n:int = e[4];
  init_array(m, n);
  var o:int = e[5];
  var p:int = e[4];
  var q:int = e[3];
  kernel_durbin(o, p, q);
  var r:int = e[7];
  var s:int = 42;
  var t:int = r;
  var u:int = s;
  var v:int = t > u;
  var w:int = 1;
  var x:int = v & w;
  if (eqz(x)) goto B_a;
  var y:int_ptr = e[6];
  var z:int = y[0];
  var aa:int = 87;
  var ba:int = memory_base;
  var ca:int = ba + aa;
  var da:int = strcmp(z, ca);
  if (da) goto B_a;
  var ea:int = e[5];
  var fa:int = e[3];
  print_array(ea, fa);
  label B_a:
  var ga:int = e[4];
  free(ga);
  var ha:int = e[3];
  free(ha);
  var ia:int = 0;
  var ja:int = 32;
  var ka:int = e + ja;
  stack_pointer = ka;
  return ia;
}

function init_array(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 16;
  var e:int_ptr = c - d;
  e[3] = a;
  e[2] = b;
  var f:int = 0;
  e[1] = f;
  loop L_b {
    var g:int = e[1];
    var h:int = e[3];
    var i:int = g;
    var j:int = h;
    var k:int = i < j;
    var l:int = 1;
    var m:int = k & l;
    if (eqz(m)) goto B_a;
    var n:int = e[3];
    var o:int = 1;
    var p:int = n + o;
    var q:int = e[1];
    var r:int = p - q;
    var s:double = f64_convert_i32_s(r);
    var t:int = e[2];
    var u:int = e[1];
    var v:int = 3;
    var w:int = u << v;
    var x:double_ptr = t + w;
    x[0] = s;
    var y:int = e[1];
    var z:int = 1;
    var aa:int = y + z;
    e[1] = aa;
    continue L_b;
  }
  unreachable;
  label B_a:
}

function print_array(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 48;
  var e:int = c - d;
  stack_pointer = e;
  e[11]:int = a;
  e[10]:int = b;
  var f:int_ptr = stderr;
  var g:int = f[0];
  var h:int = 42;
  var i:int = memory_base;
  var j:int = i + h;
  var k:int = 0;
  fprintf(g, j, k);
  var l:int = f[0];
  var m:int = 0;
  var n:int = memory_base;
  var o:int = n + m;
  e[8]:int = o;
  var p:int = 2;
  var q:int = n + p;
  var r:int = 32;
  var s:int = e + r;
  fprintf(l, q, s);
  var t:int = 0;
  e[9]:int = t;
  loop L_b {
    var u:int = e[9]:int;
    var v:int = e[11]:int;
    var w:int = u;
    var x:int = v;
    var y:int = w < x;
    var z:int = 1;
    var aa:int = y & z;
    if (eqz(aa)) goto B_a;
    var ba:int = e[9]:int;
    var ca:int = 20;
    var da:int = ba % ca;
    if (da) goto B_c;
    var ea:int_ptr = stderr;
    var fa:int = ea[0];
    var ga:int = 86;
    var ha:int = memory_base;
    var ia:int = ha + ga;
    var ja:int = 0;
    fprintf(fa, ia, ja);
    label B_c:
    var ka:int_ptr = stderr;
    var la:int = ka[0];
    var ma:int = e[10]:int;
    var na:int = e[9]:int;
    var oa:int = 3;
    var pa:int = na << oa;
    var qa:double_ptr = ma + pa;
    var ra:double = qa[0];
    e[0]:double = ra;
    var sa:int = 17;
    var ta:int = memory_base;
    var ua:int = ta + sa;
    fprintf(la, ua, e);
    var va:int = e[9]:int;
    var wa:int = 1;
    var xa:int = va + wa;
    e[9]:int = xa;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ya:int_ptr = stderr;
  var za:int = ya[0];
  var ab:int = 0;
  var bb:int = memory_base;
  var cb:int = bb + ab;
  e[4]:int = cb;
  var db:int = 25;
  var eb:int = bb + db;
  var fb:int = 16;
  var gb:int = e + fb;
  fprintf(za, eb, gb);
  var hb:int = ya[0];
  var ib:int = 65;
  var jb:int = memory_base;
  var kb:int = jb + ib;
  var lb:int = 0;
  fprintf(hb, kb, lb);
  var mb:int = 48;
  var nb:int = e + mb;
  stack_pointer = nb;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

