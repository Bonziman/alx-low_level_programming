section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0  ; "%s" format for a string, 10 for newline, and null terminator

section .text
    global main

    extern printf

main:
    push rdi              ; Preserve registers that need to be preserved
    push rsi

    mov rdi, format       ; Load the format string address
    mov rsi, hello        ; Load the address of the string to be printed
    call printf          ; Call the printf function

    pop rsi               ; Restore preserved registers
    pop rdi

    ; Exit the program
    mov rax, 60           ; syscall: exit
    xor rdi, rdi          ; status: 0
    syscall

