{$O-,Q+,R+}
uses Math;

const MaxN=50000;
      TN=1000;
      MaxM=100000;

type tarr=array of integer;

procedure reql;
var ch:char;
begin
  {$IFDEF WINDOWS}
  read (ch); assert (ch=#13);
  {$ENDIF}
  read (ch); assert (ch=#10);
end;


var u, v:array [1..MaxN] of tarr;
    f:array [1..MaxN] of boolean;
    c:array [1..MaxN] of integer;
    z:array [1..MaxN] of integer;
    t, cc:integer;

procedure dfs (x:integer);
var i:integer;
begin
  f[x]:=true;
  for i:=0 to high (u[x]) do
    if not f[u[x, i]] then
      dfs (u[x, i]);
  inc (t);
  z[t]:=x;
end;


procedure sfd (x:integer);
var i:integer;
begin
  c[x]:=cc;
  for i:=0 to high (v[x]) do
    if c[v[x, i]]=0 then
      sfd (v[x, i]);
end;


var q1, q2, i, n, m, _, __:integer;
    c1, c2, d1, d2, e1, e2:array [1..MaxN] of integer;
    a, b:array [1..MaxM] of integer;

begin
  assign(input, 'republic.in'); reset(input);
  assign(output, 'republic.out'); rewrite(output);
  {reset (input, 'republic.in'); rewrite (output, 'republic.out');}
  _:=0; __:=0;
  repeat
    assert (not seekeoln); read (n);
    assert (not seekeoln); read (m);
    reql;
    if (n=0) and (m=0) then break;
    inc (_); inc (__, m);
    assert ((n>=1) and (n<=MaxM) and (m>=0) and (m<=MaxM) and (__<=MaxM) and (_<=TN));
    for i:=1 to n do begin d1[i]:=0; d2[i]:=0 end;
    for i:=1 to m do begin
      assert (not seekeoln); read (a[i]);
      assert (not seekeoln); read (b[i]);
      reql;
      assert ((a[i]>=1) and (a[i]<=n) and (b[i]>=1) and (b[i]<=n));
      inc (d1[a[i]]);
      inc (d2[b[i]]);
    end;
    for i:=1 to n do begin
      setlength (u[i], d1[i]);
      setlength (v[i], d2[i]);
      c1[i]:=0;
      c2[i]:=0;
    end;
    for i:=1 to m do begin
      u[a[i], c1[a[i]]]:=b[i];
      inc (c1[a[i]]);
      v[b[i], c2[b[i]]]:=a[i];
      inc (c2[b[i]]);
    end;
    for i:=1 to n do f[i]:=false;
    t:=0;
    for i:=1 to n do
      if not f[i] then dfs (i);
    cc:=0;
    for i:=1 to n do c[i]:=0;
    for i:=n downto 1 do
      if c[z[i]]=0 then  begin
        inc (cc);
        sfd (z[i]);
      end;
    for i:=1 to cc do begin
      e1[i]:=0; e2[i]:=0;
    end;
    for i:=1 to m do 
      if c[a[i]]<>c[b[i]] then
        begin
          inc (e1[c[a[i]]]);
          inc (e2[c[b[i]]]);
        end;
    q1:=0; q2:=0;
    for i:=1 to cc do begin
      if e1[i]=0 then inc (q1);
      if e2[i]=0 then inc (q2);
    end;
    write ('Case ', _, ': ');
    if cc=1 then writeln ('The system is already connected.')
            else writeln ('The minimal number of roads is ', max (q1, q2), '.');
  until false;
end.
