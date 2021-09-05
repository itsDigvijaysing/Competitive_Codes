section .data 
      kmsg db 10,'Welcome To The My Program:',10
      kmsg_len equ $-kmsg
     
     gmsg db 10,'****Welcome To The Count of Positive nd Negative In Array****:',10
     gmsg_len equ $-gmsg
     
     welmsg db 10, 'Welcome to count +ve and -ve count in an array',10
     welmsg_len equ $-welmsg
     
     pmsg db 10,'count of +ve Numbers ::'
     pmsg_len equ $-pmsg
     
     nmsg db 10,'count of -ve Numbers ::'
     nmsg_len equ $-nmsg
     
     nwline db 10
     
     array dw 8505h,90ffh,827h,88h,8a9fh,0adh,02h
     arrcnt equ 7
     
     pcnt db 0
     ncnt db 0
     
   section .bss        ;unutilized variable
    dispbuff resb 2    ;resb 2 means buffer declares 2 byte of unutilized space
    
       %macro print 2
       mov eax, 4
       mov ebx, 1
       mov ecx, %1
       mov edx, %2
       int 80h  
    %endmacro
    
section .text
global _start 
_start:

   mov esi,array 
   mov ecx,arrcnt
   
up1:
   bt word[esi],15    ;bit tranfer instruction transfer 15bit of ax to cf
     jnc pnxt
     inc byte[ncnt]
     jmp pskip
     
  pnxt:inc byte[pcnt]
  
  pskip: inc esi
    inc esi
    loop up1
    
     print kmsg,kmsg_len
     print gmsg,gmsg_len
    
    print pmsg,pmsg_len
    mov bl, [pcnt]
    call disp8num
    
    print nmsg,nmsg_len
    mov bl, [ncnt]
    call disp8num
    
    print nwline,2    ;New line char 
    
 exit:
      
      mov eax,01
      mov ebx,0
      int 80h
      
   disp8num:
     mov ecx,2     ;Number digits to display
     mov edi,dispbuff    ;Temp buffer
     
  dup1:
     rol bl,4           ;Rotate no from b1 to get ms digit to ls digit
     mov al,bl          ;Move  rotated number to AL 
     and al,0fh         ;Mark upper digit
     cmp al,09          ;compare with 9
     jbe dskip          ;If number below or equal to 9 go to add only 30h
     add al,07h         ;Else first add 07h
     dskip: add al,30h  ;Add 30h 
     mov [edi],al       ;Store ASCII code in temp buff
     inc edi            ;Increment pointer to next location in temp buff
     loop dup1          ;repeat till exc becomes zero
     print dispbuff,2   ;dispay the value from temp buff
     ret                ;return to calling program      
       
    
    
    
    
    
    
    
    
    
    
    
    h
