section .data
msg db 10, 'Nilofar Nadaf' ,10
msg_len equ $-msg
section .text
global _start
_start:
mov eax,4
mov ebx,1
mov ecx, msg
mov edx, msg_len
int 80h
exit:
mov eax,01
mov ebx,0
int 80h
