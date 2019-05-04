uses
	sysutils, testlib;

var
	i, n: longint;
	ja, pa: string;

begin
	n := inf.readlongint;
	for i := 1 to n do begin
		ja := ans.readword(blanks, blanks);
		pa := ouf.readword(blanks, blanks);
		if (ja <> pa) then
			quit(_wa, format('number %d - expected: %s, found: %s', [i, ja, pa]));
	end;

	quit(_ok, format('%d vertices', [n]));
end.