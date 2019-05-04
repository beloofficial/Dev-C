{$O-,Q+,R+}
uses testlibk;
type integer=longint;

const MaxT=1000;

var _:integer;

function answer (var f:instream):integer;
begin
  f.reqstr ('Case '+i2s (_)+': The ');
  if f.curchar='s' then begin
    f.reqstr ('system is already connected.');
    Result:=0;
  end else begin
    f.reqstr ('minimal number of roads is ');
    Result:=f.roi;
    if Result=0 then f.quit (_PE, 'Case '+i2s (_)+': 0 is not allowed here');
    f.reqstr ('.');
  end;
  f.seekeoln;
  f.reql (Accept);
end;

var jury, cont:array [1..MaxT] of integer;
    i:integer;

begin
  _:=0;
  while not ans.seekeof do begin
    inc (_);
    jury[_]:=answer (ans);
    cont[_]:=answer (ouf);
  end;
  if not ouf.seekeof then quit (_PE, 'End of file expected');
  for i:=1 to _ do
    if jury[i]<>cont[i] then quit (_WA, 'Case '+i2s (i)+': '+i2s (jury[i])+'<>'+i2s (cont[i]));
  quit (_OK, i2s (_)+' test case(s)');
end.
