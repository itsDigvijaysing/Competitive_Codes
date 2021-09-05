/*Name:Rajput Digvijaysing
Roll No: 14
Div:2 A
Assignment 10:
Write a menu driven program that will create a data file containing the list of telephone num,bers in the following form
John 23456
Ahmed 9876
Use a class object to store each set of data, access the file created and implemented the following task
I. Determine the telephone number of specified person.
II.Determine the name if telephone number is known.
III.Update the telephone number ,whenever there is a change*/

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class telephone
{
 char name[20];
 int number;
 public:
 	void accept()
 	{
 		cout<<"Enter the name and Telephone number";
 		cin>>name>>number;
 	}
 	void display()
 	{
 		cout<<"\n"<<name<<"\t"<<number;
 	}
 	int searchnumber(int num)
 	{
 	 if(number==num)
 	 {
 	  cout<<"Record found";
 	  cout<<"\n"<<name<<"\t"<<number;
 	  return 1;
 	  }
 	  else
 	  	return 0;
 	 }
 	 int searchname(char nm[])
 	{
 	 if(!strcmp(name,nm))
 	 {
 	  cout<<"Record found";

 	  cout<<"\n"<<name<<"\t"<<number;
 	  return 1;
 	  }
 	  else
 	  	return 0;
 	 }
 };
 int main()
 {
   telephone t;
   fstream file;
   int ch,n,flag=0,number;
   char y,name[20];
   cout<<"Enter how many number you want to enter";
   cin>>n;
   do
   {
    cout<<"\n1.Enter the data";
    cout<<"\n2.Display Information";
    cout<<"\n3.Search using number";
    cout<<"\n4.Search using name";
    cout<<"\n5.Update record";
    cout<<"\nEnter your choice";
    cin>>ch;

    switch(ch)
    {
     case 1:
     	x: file.open("abc.txt",ios::out);

     	for(int i=0;i<n;i++)
     	{
     	 t.accept();
     	 file.write((char*)&t,sizeof(t));
     	}
     	file.close();
     	break;
     case 2:
     	file.open("abc.txt",ios::in);
     	cout<<"\n Telephone information is";
     for(int i=0;i<n;i++)
     	{
     	 file.read((char*)&t,sizeof(t));
     	 t.display();
     	}
     	file.close();
     	break;
     case 3:
     	file.open("abc.txt",ios::in);
     	cout<<"\n Enter number which you want to search";
     	cin>>number;

     	 flag=0;
     	while(file)
     	{
     	  file.read((char*)&t,sizeof(t));
     	  if(t.searchnumber(number))
     	  {
     	    flag=1;
     	    break;
     	  }
     	}
     	if(flag==0)
     	{
     	cout<<"Record not found";
     	}
     	file.close();
     	break;

       case 4:
       file.open("abc.txt",ios::in);
     	cout<<"\n Enter name which you want to search";
     	cin>>name;
     	 flag=0;
     	while(file)
     	{
     	  file.read((char*)&t,sizeof(t));
     	  if(t.searchname(name))
     	  {
     	    flag=1;
     	    break;
     	  }
     	}
     	if(flag==0)
     	{
     	cout<<"Record not found";
     	}
     	file.close();
     	break;

      case 5:
       file.open("abc.txt",ios::out);
       cout<<"\n Enter name which you want to search";
       cin>>name;
       flag=0;
       long pos;
	   int count=0;
	   string line;
	        while (!file.eof() && line!=name)
            {

	            getline(file,line);
	            count++;
	        }
	   pos=count;
       file.seekp(pos);
	   t.accept();
       file.write((char*)&t,sizeof(t));
       t.display();
       file.close();
       break;
      }
     cout<<"\nDo you want to continue";
     cin>>y;
     }while(y=='y'||y=='Y');

 }
 /*sudent@sudent-OptiPlex-3010:~$ g++ fileop.cpp
sudent@sudent-OptiPlex-3010:~$ ./a.out
Enter how many number you want to enter2

1.Enter the data
2.Display Information
3.Search using number
4.Search using name
5.Update record
Enter your choice1
Enter the name and Telephone numberJohn 23456
Enter the name and Telephone numberAhmed 9876

Do you want to continuey

1.Enter the data
2.Display Information
3.Search using number
4.Search using name
5.Update record
Enter your choice2

 Telephone information is
John	23456
Ahmed	9876
Do you want to continuey

1.Enter the data
2.Display Information
3.Search using number
4.Search using name
5.Update record
Enter your choice3

 Enter number which you want to search23456
Record found
John	23456
Do you want to continuey

1.Enter the data
2.Display Information
3.Search using number
4.Search using name
5.Update record
Enter your choice4

 Enter name which you want to searchAhmed
Record found
Ahmed	9876
Do you want to continuey

1.Enter the data
2.Display Information
3.Search using number
4.Search using name
5.Update record
Enter your choice5

 Enter name which you want to searchJohn
Enter the name and Telephone numberAbc 4444

Abc	4444
Do you want to continuey

1.Enter the data
2.Display Information
3.Search using number
4.Search using name
5.Update record
Enter your choice2

 Telephone information is
Abc	4444
Ahmed	9876
Do you want to continue
*/

