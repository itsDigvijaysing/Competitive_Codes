section .data
	welmsg db 10,'Welcome to count +ve and -ve numbers in array',10
	welmsg_len equ $-welmsg
	
	pmsg db 10,'count of +ve numbers:'
	pmsg_len equ $-pmsg
	
	nmsg db 10,'count of -ve numbers:'
	nmsg_len equ $-nmsg
	nwline db 10
	
	array dw 8505h,90fh,87h,80h,0d9fh,0adh,02h
	arrcnt equ 7
	
	pcnt db 0
	ncnt db 0
	
section .bss
	dispbuff resb 2
	
%macro print 2
	MOV eax, 4
	MOV ebx, 1
	MOV ecx, %1
	MOV edx, %2
	int 80h
%endmacro

section .text
	global _start
_start:
	print welmsg,welmsg_len
	
	mov esi,array
	mov ecx,arrcnt
	
up1:
	bt word [esi],15
	jnc pnxt
	inc byte[ncnt]
	jmp pskip
pnxt:   inc byte[pcnt]

pskip:  inc esi
        inc esi
        loop up1
        
        print pmsg,pmsg_len
        mov bl,[pcnt]
        call disp8num
        
        print nmsg,nmsg_len
        mov bl,[ncnt]
        call disp8num
        
        print nwline,1
exit:
	mov eax,01
	mov ebx,0
	int 80h
	
disp8num:
	mov ecx,2
	mov edi,dispbuff
dup1:
	rol bl,4
	mov al,bl
	and al,0fh
	cmp al,09h
	jbe dskip
	add al,07h
dskip:  add al,30h
	mov [edi],al
	inc edi
	loop dup1
	print dispbuff,2
	ret		

