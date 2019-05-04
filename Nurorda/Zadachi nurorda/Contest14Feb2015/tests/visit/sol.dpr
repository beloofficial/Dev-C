const
  maxN = 20000;
  maxM = 200000;

type
  TEdge = record
    target : integer;
    next : integer;
  end;

var
  n, m : integer;
  ff, fb: array[1..maxN] of integer;
  ef, eb: array[1..maxM] of TEdge;
  nc : integer;
  c : array[1..maxN] of integer;

procedure read_data;
var
  i : integer;
  x, y : integer;

begin
  assign (input, 'visit.in');
  reset (input);

  fillchar (ff, sizeof (ff), 0);
  fillchar (fb, sizeof (fb), 0);

  read (n, m);
  for i := 1 to m do begin
    read (x, y);

    ef[i].next := ff[x];
    ef[i].target := y;
    ff[x] := i;

    eb[i].next := fb[y];
    eb[i].target := x;
    fb[y] := i;
  end;

  close (input);
end;

procedure solve;
var
  time : integer;
  visited : array[1..maxN] of boolean;
  q : array[1..maxN] of integer;
  i : integer;

  procedure dfs1 (i : integer);
  var
    j : integer;

  begin
    if visited[i] then
      exit;
    visited[i] := true;
    j := ff[i];
    while j <> 0 do begin
      dfs1 (ef[j].target);
      j := ef[j].next;
    end;
    q[time] := i;
    inc (time);
  end;

  procedure dfs2 (i, col : integer);
  var
    j : integer;

  begin
    if visited[i] then
      exit;
    visited[i] := true;
    c[i] := col;
    j := fb[i];
    while j <> 0 do begin
      dfs2 (eb[j].target, col);
      j := eb[j].next;
    end;
  end;

begin
  fillchar (visited, sizeof (visited), false);
  time := 1;
  for i := 1 to n do
    if not visited[i] then
      dfs1 (i);

  fillchar (visited, sizeof (visited), false);
  nc := 0;
  for i := n downto 1 do
    if not visited[q[i]] then begin
      inc (nc);
      dfs2 (q[i], nc);
    end;

end;

procedure write_data;
var
  i : integer;

begin
  assign (output, 'visit.out');
  rewrite (output);
  writeln (nc);
  for i := 1 to n do
     write (nc-c[i]+1, ' ');
  writeln;
  close (output);
end;

begin
  read_data;
  solve;
  write_data;
end.
