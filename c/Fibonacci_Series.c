#include <stdio.h>
int main()
{
    int i,a,b,c,d;
    printf("\nWelcome to Fibonacci Series Generator\n");
    printf("Mention Fibonacci Series Length: ");
    scanf("%d", &a);
    b=0;
    c=1;
    printf("\nYour Series:\n");
    if (a<0)
    {
        printf("Enter Valid No.");
        
    }
    if (a==1)
    {
        printf("%d",b);
        
    }
    if (a==2)
    {
        printf("%d%d",b,c);
        
    }
    if (a>=3)
    {
        printf("%d%d",b,c);
        a=a-2;
        d=b+c;
        for(i=0;i<a;i++)
        {
            printf("%d",d);
            c=d;
            d=d+c;
            
        }
    }
    return 0;
}