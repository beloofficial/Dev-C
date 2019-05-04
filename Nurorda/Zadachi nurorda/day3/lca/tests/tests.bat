del res.txt
echo off
for %%i in (??) do (
Copy %%i input.txt
run -t 2s -m 64M a
fcmp input.txt output.txt %%i.a >> res.txt
)
