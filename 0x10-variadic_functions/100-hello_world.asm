	section .text
	global main

main:
	mov rax, 1		; write(
	mov rdi, 1		; STDOUT_FILENO,
	mov rsi, msg		; "Hello, World",
	mov rdx, msglen		; sizeof("Hello, World\n)
	syscall			; );
	mov rax, 60 		; exit(
	xor rdi, rdi		; EXIT_SUCCESS
	syscall 		; );

	section .data
msg: db "Hello, World", 10
msglen:	 equ $ -msg
