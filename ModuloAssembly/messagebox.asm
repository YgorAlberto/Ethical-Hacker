extern _MessageBoxA
global _main

section .data
    texto db "www.desecsecurity.com",0
    titulo db "keep Learning",0

section .text
_main:
    push 0
    push titulo
    push texto
    push 0
    call _MessageBoxA