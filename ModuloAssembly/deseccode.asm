global _main

section .text
_main
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    MOV EAX 41424344h ;ABCD em Hex
    MOV BX, 4141h
    MOV CH, 41h
    MOV DL, 41h
    XOR EAX, EAX
    XOR EBX, EBX
    XOR ECX, ECX
    XOR EDX, EDX    