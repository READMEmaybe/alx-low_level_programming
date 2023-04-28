section .data
    msg db "Hello, Holberton", 10, 0

section .text
    global main

main:
    mov rdi, msg
    xor eax, eax
    extern printf
    call printf
    xor eax, eax
    ret

