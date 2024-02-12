import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00q\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_bicg(a:int, b:int, c:int, d:int, e:int, f:int, g:int) {
  var h:int = stack_pointer;
  var i:int = 48;
  var j:int_ptr = h - i;
  j[11] = a;
  j[10] = b;
  j[9] = c;
  j[8] = d;
  j[7] = e;
  j[6] = f;
  j[5] = g;
  var k:int = 0;
  j[4] = k;
  loop L_b {
    var l:int = j[4];
    var m:int = j[11];
    var n:int = l;
    var o:int = m;
    var p:int = n < o;
    var q:int = 1;
    var r:int = p & q;
    if (eqz(r)) goto B_a;
    var s:int = j[8];
    var t:int = j[4];
    var u:int = 3;
    var v:int = t << u;
    var w:double_ptr = s + v;
    var x:int = 0;
    var y:double = f64_convert_i32_s(x);
    w[0] = y;
    var z:int = j[4];
    var aa:int = 1;
    var ba:int = z + aa;
    j[4] = ba;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ca:int = 0;
  j[4] = ca;
  loop L_d {
    var da:int = j[4];
    var ea:int = j[10];
    var fa:int = da;
    var ga:int = ea;
    var ha:int = fa < ga;
    var ia:int = 1;
    var ja:int = ha & ia;
    if (eqz(ja)) goto B_c;
    var ka:int = j[7];
    var la:int = j[4];
    var ma:int = 3;
    var na:int = la << ma;
    var oa:double_ptr = ka + na;
    var pa:int = 0;
    var qa:double = f64_convert_i32_s(pa);
    oa[0] = qa;
    var ra:int = 0;
    j[3] = ra;
    loop L_f {
      var sa:int = j[3];
      var ta:int = j[11];
      var ua:int = sa;
      var va:int = ta;
      var wa:int = ua < va;
      var xa:int = 1;
      var ya:int = wa & xa;
      if (eqz(ya)) goto B_e;
      var za:int = j[8];
      var ab:int = j[3];
      var bb:int = 3;
      var cb:int = ab << bb;
      var db:double_ptr = za + cb;
      var eb:double = db[0];
      var fb:int = j[5];
      var gb:int = j[4];
      var hb:int = 3;
      var ib:int = gb << hb;
      var jb:double_ptr = fb + ib;
      var kb:double = jb[0];
      var lb:int = j[9];
      var mb:int = j[4];
      var nb:int = 15200;
      var ob:int = mb * nb;
      var pb:int = lb + ob;
      var qb:int = j[3];
      var rb:int = 3;
      var sb:int = qb << rb;
      var tb:double_ptr = pb + sb;
      var ub:double = tb[0];
      var vb:double = kb * ub;
      var wb:double = vb + eb;
      var xb:int = j[8];
      var yb:int = j[3];
      var zb:int = 3;
      var ac:int = yb << zb;
      var bc:double_ptr = xb + ac;
      bc[0] = wb;
      var cc:int = j[7];
      var dc:int = j[4];
      var ec:int = 3;
      var fc:int = dc << ec;
      var gc:double_ptr = cc + fc;
      var hc:double = gc[0];
      var ic:int = j[9];
      var jc:int = j[4];
      var kc:int = 15200;
      var lc:int = jc * kc;
      var mc:int = ic + lc;
      var nc:int = j[3];
      var oc:int = 3;
      var pc:int = nc << oc;
      var qc:double_ptr = mc + pc;
      var rc:double = qc[0];
      var sc:int = j[6];
      var tc:int = j[3];
      var uc:int = 3;
      var vc:int = tc << uc;
      var wc:double_ptr = sc + vc;
      var xc:double = wc[0];
      var yc:double = rc * xc;
      var zc:double = yc + hc;
      var ad:int = j[7];
      var bd:int = j[4];
      var cd:int = 3;
      var dd:int = bd << cd;
      var ed:double_ptr = ad + dd;
      ed[0] = zc;
      var fd:int = j[3];
      var gd:int = 1;
      var hd:int = fd + gd;
      j[3] = hd;
      continue L_f;
    }
    unreachable;
    label B_e:
    var id:int = j[4];
    var jd:int = 1;
    var kd:int = id + jd;
    j[4] = kd;
    continue L_d;
  }
  unreachable;
  label B_c:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 48;
  var e:int_ptr = c - d;
  stack_pointer = e;
  e[11] = a;
  e[10] = b;
  var f:int = 2100;
  e[9] = f;
  var g:int = 1900;
  e[8] = g;
  var h:long = 3990000L;
  var i:int = 8;
  var j:int = legalfunc_polybench_alloc_data(h, i);
  e[7] = j;
  var k:long = 1900L;
  var l:int = 8;
  var m:int = legalfunc_polybench_alloc_data(k, l);
  e[6] = m;
  var n:long = 2100L;
  var o:int = 8;
  var p:int = legalfunc_polybench_alloc_data(n, o);
  e[5] = p;
  var q:long = 1900L;
  var r:int = 8;
  var s:int = legalfunc_polybench_alloc_data(q, r);
  e[4] = s;
  var t:long = 2100L;
  var u:int = 8;
  var v:int = legalfunc_polybench_alloc_data(t, u);
  e[3] = v;
  var w:int = e[8];
  var x:int = e[9];
  var y:int = e[7];
  var z:int = e[3];
  var aa:int = e[4];
  init_array(w, x, y, z, aa);
  var ba:int = e[8];
  var ca:int = e[9];
  var da:int = e[7];
  var ea:int = e[6];
  var fa:int = e[5];
  var ga:int = e[4];
  var ha:int = e[3];
  kernel_bicg(ba, ca, da, ea, fa, ga, ha);
  var ia:int = e[11];
  var ja:int = 42;
  var ka:int = ia;
  var la:int = ja;
  var ma:int = ka > la;
  var na:int = 1;
  var oa:int = ma & na;
  if (eqz(oa)) goto B_a;
  var pa:int_ptr = e[10];
  var qa:int = pa[0];
  var ra:int = 87;
  var sa:int = memory_base;
  var ta:int = sa + ra;
  var ua:int = strcmp(qa, ta);
  if (ua) goto B_a;
  var va:int = e[8];
  var wa:int = e[9];
  var xa:int = e[6];
  var ya:int = e[5];
  print_array(va, wa, xa, ya);
  label B_a:
  var za:int = e[7];
  free(za);
  var ab:int = e[6];
  free(ab);
  var bb:int = e[5];
  free(bb);
  var cb:int = e[4];
  free(cb);
  var db:int = e[3];
  free(db);
  var eb:int = 0;
  var fb:int = 48;
  var gb:int = e + fb;
  stack_pointer = gb;
  return eb;
}

function init_array(a:int, b:int, c:int, d:int, e:int) {
  var f:int = stack_pointer;
  var g:int = 32;
  var h:int_ptr = f - g;
  h[7] = a;
  h[6] = b;
  h[5] = c;
  h[4] = d;
  h[3] = e;
  var i:int = 0;
  h[2] = i;
  loop L_b {
    var j:int = h[2];
    var k:int = h[7];
    var l:int = j;
    var m:int = k;
    var n:int = l < m;
    var o:int = 1;
    var p:int = n & o;
    if (eqz(p)) goto B_a;
    var q:int = h[2];
    var r:int = h[7];
    var s:int = q % r;
    var t:double = f64_convert_i32_s(s);
    var u:int = h[7];
    var v:double = f64_convert_i32_s(u);
    var w:double = t / v;
    var x:int = h[3];
    var y:int = h[2];
    var z:int = 3;
    var aa:int = y << z;
    var ba:double_ptr = x + aa;
    ba[0] = w;
    var ca:int = h[2];
    var da:int = 1;
    var ea:int = ca + da;
    h[2] = ea;
    continue L_b;
  }
  unreachable;
  label B_a:
  var fa:int = 0;
  h[2] = fa;
  loop L_d {
    var ga:int = h[2];
    var ha:int = h[6];
    var ia:int = ga;
    var ja:int = ha;
    var ka:int = ia < ja;
    var la:int = 1;
    var ma:int = ka & la;
    if (eqz(ma)) goto B_c;
    var na:int = h[2];
    var oa:int = h[6];
    var pa:int = na % oa;
    var qa:double = f64_convert_i32_s(pa);
    var ra:int = h[6];
    var sa:double = f64_convert_i32_s(ra);
    var ta:double = qa / sa;
    var ua:int = h[4];
    var va:int = h[2];
    var wa:int = 3;
    var xa:int = va << wa;
    var ya:double_ptr = ua + xa;
    ya[0] = ta;
    var za:int = 0;
    h[1] = za;
    loop L_f {
      var ab:int = h[1];
      var bb:int = h[7];
      var cb:int = ab;
      var db:int = bb;
      var eb:int = cb < db;
      var fb:int = 1;
      var gb:int = eb & fb;
      if (eqz(gb)) goto B_e;
      var hb:int = h[2];
      var ib:int = h[1];
      var jb:int = 1;
      var kb:int = ib + jb;
      var lb:int = hb * kb;
      var mb:int = h[6];
      var nb:int = lb % mb;
      var ob:double = f64_convert_i32_s(nb);
      var pb:int = h[6];
      var qb:double = f64_convert_i32_s(pb);
      var rb:double = ob / qb;
      var sb:int = h[5];
      var tb:int = h[2];
      var ub:int = 15200;
      var vb:int = tb * ub;
      var wb:int = sb + vb;
      var xb:int = h[1];
      var yb:int = 3;
      var zb:int = xb << yb;
      var ac:double_ptr = wb + zb;
      ac[0] = rb;
      var bc:int = h[1];
      var cc:int = 1;
      var dc:int = bc + cc;
      h[1] = dc;
      continue L_f;
    }
    unreachable;
    label B_e:
    var ec:int = h[2];
    var fc:int = 1;
    var gc:int = ec + fc;
    h[2] = gc;
    continue L_d;
  }
  unreachable;
  label B_c:
}

function print_array(a:int, b:int, c:int, d:int) {
  var e:int = stack_pointer;
  var f:int = 112;
  var g:int = e - f;
  stack_pointer = g;
  g[27]:int = a;
  g[26]:int = b;
  g[25]:int = c;
  g[24]:int = d;
  var h:int_ptr = stderr;
  var i:int = h[0];
  var j:int = 42;
  var k:int = memory_base;
  var l:int = k + j;
  var m:int = 0;
  fprintf(i, l, m);
  var n:int = h[0];
  var o:int = 13;
  var p:int = memory_base;
  var q:int = p + o;
  g[20]:int = q;
  var r:int = 0;
  var s:int = p + r;
  var t:int = 80;
  var u:int = g + t;
  fprintf(n, s, u);
  var v:int = 0;
  g[23]:int = v;
  loop L_b {
    var w:int = g[23]:int;
    var x:int = g[27]:int;
    var y:int = w;
    var z:int = x;
    var aa:int = y < z;
    var ba:int = 1;
    var ca:int = aa & ba;
    if (eqz(ca)) goto B_a;
    var da:int = g[23]:int;
    var ea:int = 20;
    var fa:int = da % ea;
    if (fa) goto B_c;
    var ga:int_ptr = stderr;
    var ha:int = ga[0];
    var ia:int = 86;
    var ja:int = memory_base;
    var ka:int = ja + ia;
    var la:int = 0;
    fprintf(ha, ka, la);
    label B_c:
    var ma:int_ptr = stderr;
    var na:int = ma[0];
    var oa:int = g[25]:int;
    var pa:int = g[23]:int;
    var qa:int = 3;
    var ra:int = pa << qa;
    var sa:double_ptr = oa + ra;
    var ta:double = sa[0];
    g[0]:double = ta;
    var ua:int = 17;
    var va:int = memory_base;
    var wa:int = va + ua;
    fprintf(na, wa, g);
    var xa:int = g[23]:int;
    var ya:int = 1;
    var za:int = xa + ya;
    g[23]:int = za;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ab:int_ptr = stderr;
  var bb:int = ab[0];
  var cb:int = 13;
  var db:int = memory_base;
  var eb:int = db + cb;
  g[12]:int = eb;
  var fb:int = 25;
  var gb:int = db + fb;
  var hb:int = 48;
  var ib:int = g + hb;
  fprintf(bb, gb, ib);
  var jb:int = ab[0];
  var kb:int = 15;
  var lb:int = memory_base;
  var mb:int = lb + kb;
  g[16]:int = mb;
  var nb:int = 0;
  var ob:int = lb + nb;
  var pb:int = 64;
  var qb:int = g + pb;
  fprintf(jb, ob, qb);
  var rb:int = 0;
  g[23]:int = rb;
  loop L_e {
    var sb:int = g[23]:int;
    var tb:int = g[26]:int;
    var ub:int = sb;
    var vb:int = tb;
    var wb:int = ub < vb;
    var xb:int = 1;
    var yb:int = wb & xb;
    if (eqz(yb)) goto B_d;
    var zb:int = g[23]:int;
    var ac:int = 20;
    var bc:int = zb % ac;
    if (bc) goto B_f;
    var cc:int_ptr = stderr;
    var dc:int = cc[0];
    var ec:int = 86;
    var fc:int = memory_base;
    var gc:int = fc + ec;
    var hc:int = 0;
    fprintf(dc, gc, hc);
    label B_f:
    var ic:int_ptr = stderr;
    var jc:int = ic[0];
    var kc:int = g[24]:int;
    var lc:int = g[23]:int;
    var mc:int = 3;
    var nc:int = lc << mc;
    var oc:double_ptr = kc + nc;
    var pc:double = oc[0];
    g[2]:double = pc;
    var qc:int = 17;
    var rc:int = memory_base;
    var sc:int = rc + qc;
    var tc:int = 16;
    var uc:int = g + tc;
    fprintf(jc, sc, uc);
    var vc:int = g[23]:int;
    var wc:int = 1;
    var xc:int = vc + wc;
    g[23]:int = xc;
    continue L_e;
  }
  unreachable;
  label B_d:
  var yc:int_ptr = stderr;
  var zc:int = yc[0];
  var ad:int = 15;
  var bd:int = memory_base;
  var cd:int = bd + ad;
  g[8]:int = cd;
  var dd:int = 25;
  var ed:int = bd + dd;
  var fd:int = 32;
  var gd:int = g + fd;
  fprintf(zc, ed, gd);
  var hd:int = yc[0];
  var id:int = 65;
  var jd:int = memory_base;
  var kd:int = jd + id;
  var ld:int = 0;
  fprintf(hd, kd, ld);
  var md:int = 112;
  var nd:int = g + md;
  stack_pointer = nd;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

