/*
Name:Rajput Digvijaysing
Roll No. 14
Div:2 A
Assignment 3:
Implement a class Cpp_Array which is identical to a one-dimensional C++ array (i.e.,
the index set is a set of consecutive integers starting at 0) except for the following :
1. It performs range checking.
2. It allows one to be assigned to another array through the use of the
assignment operator (e.g. cp1= cp2)
3. It supports a function that returns the size of the array.
4. It allows the reading or printing of array through the use of cout and cin.
*/
#include<iostream>
using namespace std;
class Cpp_Array
{
   private:
   int a[10],i,j,n,b[10],temp;
   public:
   void get();
   void print();
   void sort();
   void range();
   void exchange();
   int size();
};
void Cpp_Array::get()
{
   cout<<"\n Enter the limit of array ";
   cin>>n;
   cout<<"\n Enter the array elements ";
   for(i=0;i<n;i++)
   {
       cout<<"\n a["<<i<<"]=";
       cin>>a[i];
   }
}
void Cpp_Array::print()
{
   cout<<"\n The entered array is ";
   for(i=0;i<n;i++)
   {
       cout<<"\n a["<<i<<"]="<<a[i];
   }
}
void Cpp_Array::sort()
{
   for(j=0;j<n;j++)
   {
      for(i=0;i<n-1;i++)
      {
         if(a[i]>a[i+1])
         {
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
         }
      }
   }
   cout<<"\n The bubble sorted array is ";
   for(i=0;i<n;i++)
   {
       cout<<"\n a["<<i<<"]="<<a[i];
   }
}
void Cpp_Array::range()
{
   cout<<"\n The range of array is from "<<a[0]<<" to "<<a[n-1];
}
void Cpp_Array::exchange()
{
   for(i=0;i<n;i++)
   {
       b[i]=a[i];
   }
   cout<<"\n The exchanged array is ";
   for(i=0;i<n;i++)
   {
       cout<<"\n b["<<i<<"]="<<b[i];
   }
}
int Cpp_Array::size()
{
   return n;
}
int main()
{
   int a;
   Cpp_Array obj;
   obj.get();
   obj.print();
   obj.range();
   obj.exchange();
   obj.sort();
   a=obj.size();
   cout<<"\n The size of array is "<<a;
   return 0;
}

/*
 Output:
 Enter the limit of array 5

 Enter the array elements
 a[0]=15

 a[1]=12

 a[2]=12

 a[3]=23

 a[4]=78

 The entered array is
 a[0]=15
 a[1]=12
 a[2]=12
 a[3]=23
 a[4]=78
 The range of array is from 15 to 78
 The exchanged array is
 b[0]=15
 b[1]=12
 b[2]=12
 b[3]=23
 b[4]=78
 The sorted array is
 a[0]=12
 a[1]=12
 a[2]=15
 a[3]=23
 a[4]=78
 The size of array is 5    */
