extern printf
global main

section .text
main:
	mov rdi, msg
	jmp printf WRT ..plt
msg:	db `Hello, Holberton\n`,0
