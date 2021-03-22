#include <stdio.h>

void my_recursive(int n)
{
     if(n == 0)
        return;
    //  printf("%d ",n);
     my_recursive(n-1);
     printf("%d ",n);
}
int main()
{
    //  printf("Hello World");
     my_recursive(5);
     return 0;
}