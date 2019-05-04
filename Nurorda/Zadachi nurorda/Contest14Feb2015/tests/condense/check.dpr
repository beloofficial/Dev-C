uses 
	testlib, sysutils;

const
	maxn = 20000;

var
	ja, pa: longint;
	i, m, n: longint;
	jv, pv: array [1..maxn] of longint;
	a, b: longint;

begin
	ja := ans.readlongint;
	pa := ouf.readlongint;

	if ja <> pa then
		quit(_wa, 'wrong number of components');

	n := inf.readlongint;
	for i := 1 to n do
		jv[i] := ans.readlongint;

	for i := 1 to n do
	begin
		pv[i] := ouf.readlongint;
		if (pv[i] < 1) or (pv[i] > pa) then
			quit(_wa, 'invalid number of component');
	end;

	m := inf.readlongint;
	for i := 1 to m do
	begin
		a := inf.readlongint;
		b := inf.readlongint;

		if (jv[a] = jv[b]) <> (pv[a] = pv[b]) then
			quit(_wa, 'wrong components');

		{if (pv[a] > pv[b]) then
			quit(_wa, 'not sorted');}
	end;

	quit(_ok, '');
end.
