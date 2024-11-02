// Print String as (1 by 1) Char in pointer
#include <stdio.h>
int main()
{
    char str[100];
    char *ptr;
     
    printf("Enter a string: ");
    gets(str);
     
    //assign address of str to ptr
    ptr=str;
     
    printf("Entered string is: ");
    while(*ptr!='\0')
        printf("%c",*ptr++);
         
    return 0;
}