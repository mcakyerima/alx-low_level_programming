; File: 101-hello_holberton.asm
; Auth: Brennan D Baraban
; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.


section .data
    message db 'Hello, Holberton', 0xA

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp
    sub rsp, 16

    mov rsi, message
    mov edi, fmt
    xor eax, eax
    call printf

    add rsp, 16
    mov rsp, rbp
    pop rbp

    xor eax, eax
    ret

fmt:
    db '%s', 0xA, 0
