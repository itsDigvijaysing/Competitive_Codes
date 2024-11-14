
//In Second year Computer Engineering class of M students, set A of students play cricket
//and set B of students play badminton. Write C/C++ program to find and display:
//1) Set of students who play either cricket or badminton or both
//2) Set of students who play both cricket and badminton
//3) Set of students who play only cricket
//4) Set of students who play only badminton
//5) Number of students who play neither cricket nor badminton

#include<stdio.h>
int main()
{

int n,rn[20],i,j=0,k=0,a[20],b[20],ch[20],un[20],count=0;
printf("enter the number of students\n");
scanf("%d",&n);

printf("enter the roll number of students\n");
for(i=0;i<n;i++)
{

scanf("%d",&rn[i]);
}
printf("enter choice of student 1.cricket,2.badminton,3.both\n");
for(i=0;i<n;i++)
{


printf("\nchoice of Roll Number %d=",rn[i]);
scanf("%d",&ch[i]);
a[i]=-1;
if(ch[i]==1||ch[i]==3)
        {
        a[i]=rn[i];
        }

}
printf("\n\nNumber of Students playing cricket are");
for(i=0;i<n;i++)
{
if(a[i]!=-1)
printf("%d,",a[i]);
}

for(i=0;i<n;i++)
{
b[i]=-1;
if(ch[i]==2||ch[i]==3)
        {
        b[i]=rn[i];
        }
}
printf("\nNumber of Students playing Badminton are=\n");

for(i=0;i<n;i++)
{
if(b[i]!=-1)
printf("%d,",b[i]);
}

printf("\nNumber of Students playing cricket,badminton,both are=\n");
for(i=0;i<n;i++)
{
        if(a[i]!=-1)
        {
        un[i]=a[i];
        printf("%d",un[i]);
        }

   if(un[i]!=b[i]&&b[i]!=-1)
   {
   un[i]=b[i];
   printf("%d",un[i]);
                 }
                 }

    printf("\n Intersection of set =\n");
      for(i=0;i<n;i++)
        {
      if(a[i]==b[i]&&b[i]!=-1)
   printf("%d",a[i]);
  }

for(i=0;i<n;i++)
{
 if(un[i]!=b[i]&&un[i]!=0)
    {

       printf("\nonly cricket=%d\n",un[i]);
    }
}
for(i=0;i<n;i++)
{
 if(un[i]!=a[i]&&un[i]!=0)
     {

        printf("\nonly badminton=%d\n",un[i]);
     }

}
for(i=0;i<n;i++)
{
 if(rn[i]!=un[i])
      {
      count++;

      }
        }
      printf("Number of students who play nothing..%d",count);





return 0;
}

/* Output-:
enter the number of students
5
enter the roll number of students
1
2
3
4
5
enter choice of student 1.cricket,2.badminton,3.both

choice of Roll Number 1=1

choice of Roll Number 2=1

choice of Roll Number 3=2

choice of Roll Number 4=3

choice of Roll Number 5=2


Number of Students playing cricket are1,2,4,
Number of Students playing Badminton are=
3,4,5,
Number of Students playing cricket,badminton,both are=
12345
 Intersection of set =
4
only cricket=1

only cricket=2

only badminton=3

only badminton=5
Number of students who play nothing..0
*/

