
/*Name:Rajput Digvijaysing
Roll No: 14
Div:2 A
Assignment 9:
Write a c++ program that create output file , writes the information on it , close the file and open it again as an input file and read the information from the file*/
#include<iostream>
#include<fstream>
using namespace std;
class file1
{
	char name[20];
	int roll;
	public:
	void accept()
	 {
	  cin>>roll;
	  cin>>name;
	 }
	 void display()
	 {
	   cout<<"\n name="<<name<<"\n Roll="<<roll;
	 }
};
int main()
{
  file1 o[5];
  fstream f;
  int i,n;
   f.open("stu.txt",ios::out);
   cout<<"how many record you want";
   cin>>n;
   for(i=0;i<n;i++)
   {
     o[i].accept();
     f.write((char*)&o[i],sizeof(o[i]));

   }
   f.close();
   f.open("stu.txt",ios::in);
   for(i=0;i<n;i++)
   {
    f.read((char*)&o[i],sizeof(o[i]));
     o[i].display();
   }
   f.close();
   return 0;
}
/*Output:
sudent@sudent-OptiPlex-3010:~$ g++ file3.cpp
sudent@sudent-OptiPlex-3010:~$ ./a.out
how many record you want3
1 abc
2 pqr
3 xyz

 name=abc
 Roll=1
 name=pqr
 Roll=2
 name=xyz
 Roll=3sudent@sudent-OptiPlex-3010:~$
*/

