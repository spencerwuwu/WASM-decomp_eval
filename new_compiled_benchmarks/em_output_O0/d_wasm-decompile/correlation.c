import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00corr\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_"
  "ARRAYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_correlation(a:int, b:int, c:double, d:int, e:int, f:int, g:int) {
  var if:double;
  var h:int = stack_pointer;
  var i:int = 64;
  var j:int = h - i;
  j[15]:int = a;
  j[14]:int = b;
  j[6]:double = c;
  j[11]:int = d;
  j[10]:int = e;
  j[9]:int = f;
  j[8]:int = g;
  var k:double = 0.1;
  j[1]:double = k;
  var l:int = 0;
  j[6]:int = l;
  loop L_b {
    var m:int = j[6]:int;
    var n:int = j[15]:int;
    var o:int = m;
    var p:int = n;
    var q:int = o < p;
    var r:int = 1;
    var s:int = q & r;
    if (eqz(s)) goto B_a;
    var t:int = j[9]:int;
    var u:int = j[6]:int;
    var v:int = 3;
    var w:int = u << v;
    var x:double_ptr = t + w;
    var y:int = 0;
    var z:double = f64_convert_i32_s(y);
    x[0] = z;
    var aa:int = 0;
    j[7]:int = aa;
    loop L_d {
      var ba:int = j[7]:int;
      var ca:int = j[14]:int;
      var da:int = ba;
      var ea:int = ca;
      var fa:int = da < ea;
      var ga:int = 1;
      var ha:int = fa & ga;
      if (eqz(ha)) goto B_c;
      var ia:int = j[11]:int;
      var ja:int = j[7]:int;
      var ka:int = 9600;
      var la:int = ja * ka;
      var ma:int = ia + la;
      var na:int = j[6]:int;
      var oa:int = 3;
      var pa:int = na << oa;
      var qa:double_ptr = ma + pa;
      var ra:double = qa[0];
      var sa:int = j[9]:int;
      var ta:int = j[6]:int;
      var ua:int = 3;
      var va:int = ta << ua;
      var wa:double_ptr = sa + va;
      var xa:double = wa[0];
      var ya:double = xa + ra;
      wa[0] = ya;
      var za:int = j[7]:int;
      var ab:int = 1;
      var bb:int = za + ab;
      j[7]:int = bb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var cb:double = j[6]:double;
    var db:int = j[9]:int;
    var eb:int = j[6]:int;
    var fb:int = 3;
    var gb:int = eb << fb;
    var hb:double_ptr = db + gb;
    var ib:double = hb[0];
    var jb:double = ib / cb;
    hb[0] = jb;
    var kb:int = j[6]:int;
    var lb:int = 1;
    var mb:int = kb + lb;
    j[6]:int = mb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var nb:int = 0;
  j[6]:int = nb;
  loop L_f {
    var ob:int = j[6]:int;
    var pb:int = j[15]:int;
    var qb:int = ob;
    var rb:int = pb;
    var sb:int = qb < rb;
    var tb:int = 1;
    var ub:int = sb & tb;
    if (eqz(ub)) goto B_e;
    var vb:int = j[8]:int;
    var wb:int = j[6]:int;
    var xb:int = 3;
    var yb:int = wb << xb;
    var zb:double_ptr = vb + yb;
    var ac:int = 0;
    var bc:double = f64_convert_i32_s(ac);
    zb[0] = bc;
    var cc:int = 0;
    j[7]:int = cc;
    loop L_h {
      var dc:int = j[7]:int;
      var ec:int = j[14]:int;
      var fc:int = dc;
      var gc:int = ec;
      var hc:int = fc < gc;
      var ic:int = 1;
      var jc:int = hc & ic;
      if (eqz(jc)) goto B_g;
      var kc:int = j[11]:int;
      var lc:int = j[7]:int;
      var mc:int = 9600;
      var nc:int = lc * mc;
      var oc:int = kc + nc;
      var pc:int = j[6]:int;
      var qc:int = 3;
      var rc:int = pc << qc;
      var sc:double_ptr = oc + rc;
      var tc:double = sc[0];
      var uc:int = j[9]:int;
      var vc:int = j[6]:int;
      var wc:int = 3;
      var xc:int = vc << wc;
      var yc:double_ptr = uc + xc;
      var zc:double = yc[0];
      var ad:double = tc - zc;
      var bd:int = j[11]:int;
      var cd:int = j[7]:int;
      var dd:int = 9600;
      var ed:int = cd * dd;
      var fd:int = bd + ed;
      var gd:int = j[6]:int;
      var hd:int = 3;
      var id:int = gd << hd;
      var jd:double_ptr = fd + id;
      var kd:double = jd[0];
      var ld:int = j[9]:int;
      var md:int = j[6]:int;
      var nd:int = 3;
      var od:int = md << nd;
      var pd:double_ptr = ld + od;
      var qd:double = pd[0];
      var rd:double = kd - qd;
      var sd:int = j[8]:int;
      var td:int = j[6]:int;
      var ud:int = 3;
      var vd:int = td << ud;
      var wd:double_ptr = sd + vd;
      var xd:double = wd[0];
      var yd:double = ad * rd;
      var zd:double = yd + xd;
      wd[0] = zd;
      var ae:int = j[7]:int;
      var be:int = 1;
      var ce:int = ae + be;
      j[7]:int = ce;
      continue L_h;
    }
    unreachable;
    label B_g:
    var de:double = j[6]:double;
    var ee:int = j[8]:int;
    var fe:int = j[6]:int;
    var ge:int = 3;
    var he:int = fe << ge;
    var ie:double_ptr = ee + he;
    var je:double = ie[0];
    var ke:double = je / de;
    ie[0] = ke;
    var le:int = j[8]:int;
    var me:int = j[6]:int;
    var ne:int = 3;
    var oe:int = me << ne;
    var pe:double_ptr = le + oe;
    var qe:double = pe[0];
    var re:double = sqrt(qe);
    var se:int = j[8]:int;
    var te:int = j[6]:int;
    var ue:int = 3;
    var ve:int = te << ue;
    var we:double_ptr = se + ve;
    we[0] = re;
    var xe:int = j[8]:int;
    var ye:int = j[6]:int;
    var ze:int = 3;
    var af:int = ye << ze;
    var bf:double_ptr = xe + af;
    var cf:double = bf[0];
    var df:double = j[1]:double;
    var ef:int = cf <= df;
    var ff:int = 1;
    var gf:int = ef & ff;
    if (eqz(gf)) goto B_j;
    var hf:double = 1.0;
    if = hf;
    goto B_i;
    label B_j:
    var jf:int = j[8]:int;
    var kf:int = j[6]:int;
    var lf:int = 3;
    var mf:int = kf << lf;
    var nf:double_ptr = jf + mf;
    var of:double = nf[0];
    if = of;
    label B_i:
    var pf:double = if;
    var qf:int = j[8]:int;
    var rf:int = j[6]:int;
    var sf:int = 3;
    var tf:int = rf << sf;
    var uf:double_ptr = qf + tf;
    uf[0] = pf;
    var vf:int = j[6]:int;
    var wf:int = 1;
    var xf:int = vf + wf;
    j[6]:int = xf;
    continue L_f;
  }
  unreachable;
  label B_e:
  var yf:int = 0;
  j[7]:int = yf;
  loop L_l {
    var zf:int = j[7]:int;
    var ag:int = j[14]:int;
    var bg:int = zf;
    var cg:int = ag;
    var dg:int = bg < cg;
    var eg:int = 1;
    var fg:int = dg & eg;
    if (eqz(fg)) goto B_k;
    var gg:int = 0;
    j[6]:int = gg;
    loop L_n {
      var hg:int = j[6]:int;
      var ig:int = j[15]:int;
      var jg:int = hg;
      var kg:int = ig;
      var lg:int = jg < kg;
      var mg:int = 1;
      var ng:int = lg & mg;
      if (eqz(ng)) goto B_m;
      var og:int = j[9]:int;
      var pg:int = j[6]:int;
      var qg:int = 3;
      var rg:int = pg << qg;
      var sg:double_ptr = og + rg;
      var tg:double = sg[0];
      var ug:int = j[11]:int;
      var vg:int = j[7]:int;
      var wg:int = 9600;
      var xg:int = vg * wg;
      var yg:int = ug + xg;
      var zg:int = j[6]:int;
      var ah:int = 3;
      var bh:int = zg << ah;
      var ch:double_ptr = yg + bh;
      var dh:double = ch[0];
      var eh:double = dh - tg;
      ch[0] = eh;
      var fh:double = j[6]:double;
      var gh:double = sqrt(fh);
      var hh:int = j[8]:int;
      var ih:int = j[6]:int;
      var jh:int = 3;
      var kh:int = ih << jh;
      var lh:double_ptr = hh + kh;
      var mh:double = lh[0];
      var nh:double = gh * mh;
      var oh:int = j[11]:int;
      var ph:int = j[7]:int;
      var qh:int = 9600;
      var rh:int = ph * qh;
      var sh:int = oh + rh;
      var th:int = j[6]:int;
      var uh:int = 3;
      var vh:int = th << uh;
      var wh:double_ptr = sh + vh;
      var xh:double = wh[0];
      var yh:double = xh / nh;
      wh[0] = yh;
      var zh:int = j[6]:int;
      var ai:int = 1;
      var bi:int = zh + ai;
      j[6]:int = bi;
      continue L_n;
    }
    unreachable;
    label B_m:
    var ci:int = j[7]:int;
    var di:int = 1;
    var ei:int = ci + di;
    j[7]:int = ei;
    continue L_l;
  }
  unreachable;
  label B_k:
  var fi:int = 0;
  j[7]:int = fi;
  loop L_p {
    var gi:int = j[7]:int;
    var hi:int = j[15]:int;
    var ii:int = 1;
    var ji:int = hi - ii;
    var ki:int = gi;
    var li:int = ji;
    var mi:int = ki < li;
    var ni:int = 1;
    var oi:int = mi & ni;
    if (eqz(oi)) goto B_o;
    var pi:int = j[10]:int;
    var qi:int = j[7]:int;
    var ri:int = 9600;
    var si:int = qi * ri;
    var ti:int = pi + si;
    var ui:int = j[7]:int;
    var vi:int = 3;
    var wi:int = ui << vi;
    var xi:double_ptr = ti + wi;
    var yi:double = 1.0;
    xi[0] = yi;
    var zi:int = j[7]:int;
    var aj:int = 1;
    var bj:int = zi + aj;
    j[6]:int = bj;
    loop L_r {
      var cj:int = j[6]:int;
      var dj:int = j[15]:int;
      var ej:int = cj;
      var fj:int = dj;
      var gj:int = ej < fj;
      var hj:int = 1;
      var ij:int = gj & hj;
      if (eqz(ij)) goto B_q;
      var jj:int = j[10]:int;
      var kj:int = j[7]:int;
      var lj:int = 9600;
      var mj:int = kj * lj;
      var nj:int = jj + mj;
      var oj:int = j[6]:int;
      var pj:int = 3;
      var qj:int = oj << pj;
      var rj:double_ptr = nj + qj;
      var sj:int = 0;
      var tj:double = f64_convert_i32_s(sj);
      rj[0] = tj;
      var uj:int = 0;
      j[5]:int = uj;
      loop L_t {
        var vj:int = j[5]:int;
        var wj:int = j[14]:int;
        var xj:int = vj;
        var yj:int = wj;
        var zj:int = xj < yj;
        var ak:int = 1;
        var bk:int = zj & ak;
        if (eqz(bk)) goto B_s;
        var ck:int = j[11]:int;
        var dk:int = j[5]:int;
        var ek:int = 9600;
        var fk:int = dk * ek;
        var gk:int = ck + fk;
        var hk:int = j[7]:int;
        var ik:int = 3;
        var jk:int = hk << ik;
        var kk:double_ptr = gk + jk;
        var lk:double = kk[0];
        var mk:int = j[11]:int;
        var nk:int = j[5]:int;
        var ok:int = 9600;
        var pk:int = nk * ok;
        var qk:int = mk + pk;
        var rk:int = j[6]:int;
        var sk:int = 3;
        var tk:int = rk << sk;
        var uk:double_ptr = qk + tk;
        var vk:double = uk[0];
        var wk:int = j[10]:int;
        var xk:int = j[7]:int;
        var yk:int = 9600;
        var zk:int = xk * yk;
        var al:int = wk + zk;
        var bl:int = j[6]:int;
        var cl:int = 3;
        var dl:int = bl << cl;
        var el:double_ptr = al + dl;
        var fl:double = el[0];
        var gl:double = lk * vk;
        var hl:double = gl + fl;
        el[0] = hl;
        var il:int = j[5]:int;
        var jl:int = 1;
        var kl:int = il + jl;
        j[5]:int = kl;
        continue L_t;
      }
      unreachable;
      label B_s:
      var ll:int = j[10]:int;
      var ml:int = j[7]:int;
      var nl:int = 9600;
      var ol:int = ml * nl;
      var pl:int = ll + ol;
      var ql:int = j[6]:int;
      var rl:int = 3;
      var sl:int = ql << rl;
      var tl:double_ptr = pl + sl;
      var ul:double = tl[0];
      var vl:int = j[10]:int;
      var wl:int = j[6]:int;
      var xl:int = 9600;
      var yl:int = wl * xl;
      var zl:int = vl + yl;
      var am:int = j[7]:int;
      var bm:int = 3;
      var cm:int = am << bm;
      var dm:double_ptr = zl + cm;
      dm[0] = ul;
      var em:int = j[6]:int;
      var fm:int = 1;
      var gm:int = em + fm;
      j[6]:int = gm;
      continue L_r;
    }
    unreachable;
    label B_q:
    var hm:int = j[7]:int;
    var im:int = 1;
    var jm:int = hm + im;
    j[7]:int = jm;
    continue L_p;
  }
  unreachable;
  label B_o:
  var km:int = j[10]:int;
  var lm:int = j[15]:int;
  var mm:int = 1;
  var nm:int = lm - mm;
  var om:int = 9600;
  var pm:int = nm * om;
  var qm:int = km + pm;
  var rm:int = j[15]:int;
  var sm:int = 1;
  var tm:int = rm - sm;
  var um:int = 3;
  var vm:int = tm << um;
  var wm:double_ptr = qm + vm;
  var xm:double = 1.0;
  wm[0] = xm;
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 48;
  var e:int = c - d;
  stack_pointer = e;
  e[11]:int = a;
  e[10]:int = b;
  var f:int = 1400;
  e[9]:int = f;
  var g:int = 1200;
  e[8]:int = g;
  var h:long = 1680000L;
  var i:int = 8;
  var j:int = legalfunc_polybench_alloc_data(h, i);
  e[5]:int = j;
  var k:long = 1440000L;
  var l:int = 8;
  var m:int = legalfunc_polybench_alloc_data(k, l);
  e[4]:int = m;
  var n:long = 1200L;
  var o:int = 8;
  var p:int = legalfunc_polybench_alloc_data(n, o);
  e[3]:int = p;
  var q:long = 1200L;
  var r:int = 8;
  var s:int = legalfunc_polybench_alloc_data(q, r);
  e[2]:int = s;
  var t:int = e[8]:int;
  var u:int = e[9]:int;
  var v:int = e[5]:int;
  var w:int = 24;
  var x:int = e + w;
  var y:int = x;
  init_array(t, u, y, v);
  var z:int = e[8]:int;
  var aa:int = e[9]:int;
  var ba:double = e[3]:double;
  var ca:int = e[5]:int;
  var da:int = e[4]:int;
  var ea:int = e[3]:int;
  var fa:int = e[2]:int;
  kernel_correlation(z, aa, ba, ca, da, ea, fa);
  var ga:int = e[11]:int;
  var ha:int = 42;
  var ia:int = ga;
  var ja:int = ha;
  var ka:int = ia > ja;
  var la:int = 1;
  var ma:int = ka & la;
  if (eqz(ma)) goto B_a;
  var na:int_ptr = e[10]:int;
  var oa:int = na[0];
  var pa:int = 90;
  var qa:int = memory_base;
  var ra:int = qa + pa;
  var sa:int = strcmp(oa, ra);
  if (sa) goto B_a;
  var ta:int = e[8]:int;
  var ua:int = e[4]:int;
  print_array(ta, ua);
  label B_a:
  var va:int = e[5]:int;
  free(va);
  var wa:int = e[4]:int;
  free(wa);
  var xa:int = e[3]:int;
  free(xa);
  var ya:int = e[2]:int;
  free(ya);
  var za:int = 0;
  var ab:int = 48;
  var bb:int = e + ab;
  stack_pointer = bb;
  return za;
}

function init_array(a:int, b:int, c:int, d:int) {
  var e:int = stack_pointer;
  var f:int = 32;
  var g:int_ptr = e - f;
  g[7] = a;
  g[6] = b;
  g[5] = c;
  g[4] = d;
  var h:double_ptr = g[5];
  var i:double = 1400.0;
  h[0] = i;
  var j:int = 0;
  g[3] = j;
  loop L_b {
    var k:int = g[3];
    var l:int = 1400;
    var m:int = k;
    var n:int = l;
    var o:int = m < n;
    var p:int = 1;
    var q:int = o & p;
    if (eqz(q)) goto B_a;
    var r:int = 0;
    g[2] = r;
    loop L_d {
      var s:int = g[2];
      var t:int = 1200;
      var u:int = s;
      var v:int = t;
      var w:int = u < v;
      var x:int = 1;
      var y:int = w & x;
      if (eqz(y)) goto B_c;
      var z:int = g[3];
      var aa:int = g[2];
      var ba:int = z * aa;
      var ca:double = f64_convert_i32_s(ba);
      var da:double = 1200.0;
      var ea:double = ca / da;
      var fa:int = g[3];
      var ga:double = f64_convert_i32_s(fa);
      var ha:double = ea + ga;
      var ia:int = g[4];
      var ja:int = g[3];
      var ka:int = 9600;
      var la:int = ja * ka;
      var ma:int = ia + la;
      var na:int = g[2];
      var oa:int = 3;
      var pa:int = na << oa;
      var qa:double_ptr = ma + pa;
      qa[0] = ha;
      var ra:int = g[2];
      var sa:int = 1;
      var ta:int = ra + sa;
      g[2] = ta;
      continue L_d;
    }
    unreachable;
    label B_c:
    var ua:int = g[3];
    var va:int = 1;
    var wa:int = ua + va;
    g[3] = wa;
    continue L_b;
  }
  unreachable;
  label B_a:
}

function print_array(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 64;
  var e:int = c - d;
  stack_pointer = e;
  e[15]:int = a;
  e[14]:int = b;
  var f:int_ptr = stderr;
  var g:int = f[0];
  var h:int = 45;
  var i:int = memory_base;
  var j:int = i + h;
  var k:int = 0;
  fprintf(g, j, k);
  var l:int = f[0];
  var m:int = 15;
  var n:int = memory_base;
  var o:int = n + m;
  e[8]:int = o;
  var p:int = 0;
  var q:int = n + p;
  var r:int = 32;
  var s:int = e + r;
  fprintf(l, q, s);
  var t:int = 0;
  e[13]:int = t;
  loop L_b {
    var u:int = e[13]:int;
    var v:int = e[15]:int;
    var w:int = u;
    var x:int = v;
    var y:int = w < x;
    var z:int = 1;
    var aa:int = y & z;
    if (eqz(aa)) goto B_a;
    var ba:int = 0;
    e[12]:int = ba;
    loop L_d {
      var ca:int = e[12]:int;
      var da:int = e[15]:int;
      var ea:int = ca;
      var fa:int = da;
      var ga:int = ea < fa;
      var ha:int = 1;
      var ia:int = ga & ha;
      if (eqz(ia)) goto B_c;
      var ja:int = e[13]:int;
      var ka:int = e[15]:int;
      var la:int = ja * ka;
      var ma:int = e[12]:int;
      var na:int = la + ma;
      var oa:int = 20;
      var pa:int = na % oa;
      if (pa) goto B_e;
      var qa:int_ptr = stderr;
      var ra:int = qa[0];
      var sa:int = 89;
      var ta:int = memory_base;
      var ua:int = ta + sa;
      var va:int = 0;
      fprintf(ra, ua, va);
      label B_e:
      var wa:int_ptr = stderr;
      var xa:int = wa[0];
      var ya:int = e[14]:int;
      var za:int = e[13]:int;
      var ab:int = 9600;
      var bb:int = za * ab;
      var cb:int = ya + bb;
      var db:int = e[12]:int;
      var eb:int = 3;
      var fb:int = db << eb;
      var gb:double_ptr = cb + fb;
      var hb:double = gb[0];
      e[0]:double = hb;
      var ib:int = 20;
      var jb:int = memory_base;
      var kb:int = jb + ib;
      fprintf(xa, kb, e);
      var lb:int = e[12]:int;
      var mb:int = 1;
      var nb:int = lb + mb;
      e[12]:int = nb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var ob:int = e[13]:int;
    var pb:int = 1;
    var qb:int = ob + pb;
    e[13]:int = qb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var rb:int_ptr = stderr;
  var sb:int = rb[0];
  var tb:int = 15;
  var ub:int = memory_base;
  var vb:int = ub + tb;
  e[4]:int = vb;
  var wb:int = 28;
  var xb:int = ub + wb;
  var yb:int = 16;
  var zb:int = e + yb;
  fprintf(sb, xb, zb);
  var ac:int = rb[0];
  var bc:int = 68;
  var cc:int = memory_base;
  var dc:int = cc + bc;
  var ec:int = 0;
  fprintf(ac, dc, ec);
  var fc:int = 64;
  var gc:int = e + fc;
  stack_pointer = gc;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

