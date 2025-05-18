
//String operations....
#include<iostream>
using namespace std;

class String
{
 public:
 char str1[20],str2[20],str3[20];
  int i;
   

 
 void accept()
 {
 cout<<"Enter the string 1\n";
 cin>>str1;
 cout<<"Enter the string 2\n";
 cin>>str2;
 
 }
 
 void display()
 {
  cout<<"String 1 ="<<str1<<"\n";
  cout<<"String 2 ="<<str2<<"\n";
 }
 
 void copy()
 {
  
   cout<<"Enter the string\n";
   cin>>str1;
   for(i=0;str1[i]!='\0';i++)
   {
    str3[i]=str1[i];
    
   }
   cout<<"Copied string:"<<str3;
 }
 
 void length()
 {
 int ln=0;
   cout<<"\nenter the string\n";
   cin>>str1;
   for(i=0;str1[i]!='\0';i++)
   {
    ln++;
   }
   cout<<"\nLength of string: "<<ln<<endl;
 }
 
 void concatenate()
 {
  cout<<"Enter the string 1\n";
 cin>>str1;
 cout<<"Enter the string 2\n";
 cin>>str2;
 for(i=0;str1[i]!='\0';i++)
 {
  str3[i]=str1[i];
 }
 for(int j=0;str2[j]!='\0';j++)
 {
  str3[i+j]=str2[j];
 }
  cout<<"\n"<<str3;
 }
 
 void reverse()
 {
  int ln=0,j;
   cout<<"\n\nEnter the string which you want to reverse:\n";
   cin>>str1;
   for(i=0;str1[i]!='\0';i++)
   {
    ln++;
   }
   cout<<"\nReversed string:";
   for(int j=ln-1; j>=0;j--)
   {
    str2[ln-j-1]=str1[j];
   
   }
    cout<<str2<<endl;
     
 }
 
 void substring()
 {
    int ln=0,ln1=0,j;
   cout<<"\n\nEnter the string :\n";
   cin>>str1;
   for(i=0;str1[i]!='\0';i++)
   {
    ln++;
   }
   cout<<"\nEnter the substring:\n";
   cin>>str2;
 for(j=0;str2[j]!='\0';j++)
   {
    ln1++;
   }
   for( j=0;j<=ln1;j++)
{
 for(i=0;i<=ln;i++)
{
 if(str2[j]==str1[i])
{
 cout<<str2[j];
}

}
}   
cout<<"  is part of string";
 }
   
 
 
 
 
 };
 
 int main()
 {
  String s;
  s.accept();
  s.display();
  s.copy();
  s.length();
  s.concatenate();
  s.reverse();
  s.substring();
 }
  
