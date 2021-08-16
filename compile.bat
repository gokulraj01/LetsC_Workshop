@echo off
if not exist bin (
    mkdir bin
)
gcc %1 -o bin\%~n1.exe
bin\%~n1.exe