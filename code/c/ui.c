#include<stdio.h>

int main()
{
        int a[3]={1,2,3},b[5]={1,2,3,4,5},U[10],i;
        for(i=0;i<3;i++)
        {
        if(a[i]!=-1)
        {
        U[i]=a[i];
        printf("Union :%d\n",U[i]);
        }
        if(a[i]!=b[i] && b[i]!=-1)
        {
        U[i]=b[i];
        printf("Union :%d\n",U[i]);
        }
        }
        
        for(i=0;i<5;i++)
        {
        if(a[i]!=-1 && a[i]==b[i])
        {
        U[i]=a[i];
        printf("Intersection :%d\n",U[i]);
        }
        }
return 0;
}

