; File: 101-hello_holberton.asm
; Auth: Brennan D Baraban
; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.


section .data
    message db 'Hello, Holberton', 0xA, 0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp
    sub rsp, 16

    mov rdi, message
    mov rax, 0
    call printf

    add rsp, 16
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret

