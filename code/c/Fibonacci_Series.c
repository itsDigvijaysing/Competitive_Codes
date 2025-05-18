#include <stdio.h>
int main()
{
    int i,a,b,c,d,s;
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
        printf("%d ",b);
        
    }
    if (a==2)
    {
        printf("%d %d ",b,c);
        
    }
    if (a>=3)
    {
        printf("%d %d ",b,c);
        a=a-2;
        d=b+c;
        c=0;
        for(i=0;i<a;i++)
        {
            s=d+c;
            printf("%d ",s);
            c=d;
            d=s;
        }
    }
    return 0;
}