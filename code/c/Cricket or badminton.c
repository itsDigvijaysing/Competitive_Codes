#include<stdio.h>           //Digvijaysing
int main()
{
int n,rn[20],i,j=0,k=0,a[20],b[20],ch[5],un[20];
printf("Enter the number of students\n");
scanf("%d",&n);

printf("enter the roll number of student\n");
for(i=0;i<n;i++)
{
scanf("%d",&rn[i]);
}
printf("enter choice of student: \n1.cricket\n2.badminton\n3.both\n");
for(i=0;i<n;i++)
{
printf("\nchoice of RN %d :",rn[i]);
scanf("%d",&ch[i]);
}
for(i=0;i<n;i++)
{
if(ch[i]==1 || ch[i]==3)
{
j=j+1;
}
else
{
k=k+1;
}
}
printf("\nNo of Students who play cricket:%d",j);
printf("\nNo of student who play badminton:%d\n",k);
return 0;
}
