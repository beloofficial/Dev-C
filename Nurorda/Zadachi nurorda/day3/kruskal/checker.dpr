{$apptype console}
{$o-}
uses testlib,SysUtils;


const
  maxm = 1000000;



var a:array [1..300,1..300] of integer;
    r:array [1..90000,1..2] of integer;
    col:array [1..300] of integer;
    n,m,i,j,reb,sum,t:integer;
    ja,ca:integer;
begin
  n:=inf.readlongint;
  m:=inf.readlongint;
  for i:=1 to n do col[i]:=i;
  for i:=1 to m do begin
    r[i][1]:=inf.readinteger;
    r[i][2]:=inf.readinteger;
    a[r[i][1],r[i][2]]:=inf.readinteger;
    a[r[i][2],r[i][1]]:=a[r[i][1],r[i][2]];
  end;
  ca := ouf.Readinteger;
  ja := ans.Readinteger;
  if ca<>ja then begin
    quit(_wa,'wrong len');
  end else begin
    if ja=-1 then begin
      quit(_ok,'');
    end;
    sum:=0;
    for i:=1 to n-1 do begin
      reb:=ouf.readinteger;
      If (reb <1) or (reb>m)
      	then  quit(_wa,'wrong edge');
      sum:=sum+a[r[reb][1],r[reb][2]];
      t:=col[r[reb][1]];
      for j:=1 to n do begin
        if col[j]=t then
          col[j]:=col[r[reb][2]];
      end;
    end;
    if sum<>ja then quit(_wa,'wrong len');
    for i:=1 to n-1 do begin
      if col[i]<>col[i+1] then quit(_wa,'wrong tree') ;
    end;
  end;
  quit(_ok,'');
end.
