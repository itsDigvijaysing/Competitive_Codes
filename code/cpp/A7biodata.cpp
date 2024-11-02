
/* Name:Rajput Digvijaysing
Roll No: 14
Div:2 A
Assignment 7:
Problem Statement:

Create employee bio-data using following classes :
i) 	Personal record
ii)	Professional record
iii) 	Academic record Assume appropriate data members and member function to accept required data & print bio-data. Create bio-data using multiple inheritance using C++

*/


#include<iostream>
using namespace std;
class personal
{
	protected:
		char name[50];
		char address[50];
		char birthdate[50];
		char gender;
	public:
		void get_personal()
		{
			cout<<"\nEnter name";
			cin>>name;
			cout<<"\nEnter Address";
			cin>>address;
			cout<<"\nEnter Birthdate(dd/mm/yyyy)";
			cin>>birthdate;
			cout<<"\nEnter gender(M/F)";
			cin>>gender;
		}
};
class professional
{
	protected:
		int expinnoofyear;
		char orgname[50];
		char projname[50];
		char projdetails[50];
	public:
		void get_professional()
		{
			cout<<"\nEnter number of years of exp";
			cin>>expinnoofyear;
			cout<<"\nEnter organization name";
			cin>>orgname;
			cout<<"\nEnter project name";
			cin>>projname;
			cout<<"\nEnter project Details";
			cin>>projdetails;
		}
};

class academic
{
	protected:
		int year;
		int marks;
		int percentage;
		char clas[50];
	public:
		void get_academic()
		{
			cout<<"\nEnter academic year";
			cin>>year;
			cout<<"\nEnter total marks";
			cin>>marks;
			cout<<"\nEnter percentage";
			cin>>percentage;
			cout<<"\nEnter class";
			cin>>clas;
		}
};
class biodata: public personal,public academic,public professional
{
	public:
		void display()
		{
			cout<<"\n--------------Employee Biodata------------"<<endl;
			cout<<"-------------------------------------------------------"<<endl;
			cout<<"Personal Details"<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Address:"<<address<<endl;
			cout<<"Birthdate:"<<birthdate<<endl;
			cout<<"Gender:"<<gender<<endl;
			cout<<"-------------------------------------------------------"<<endl;
			cout<<"----------------Academic Details--------------"<<endl;
			cout<<"Academic Year\t"<<"marks\t"<<"percentage\t"<<"class\t"<<endl;
			cout<<year<<"\t"<<marks<<"\t"<<percentage<<"\t"<<clas<<endl;
			cout<<"-------------------------------------------------------"<<endl;
			cout<<"-----------------Professional Details--------------------"<<endl;
			cout<<"Organization Name:"<<orgname<<endl;
			cout<<"Years of Experince:"<<expinnoofyear<<endl;
			cout<<"Project Done:"<<projname<<endl;
			cout<<"Project Details:"<<projdetails<<endl;
		}
};


int main()
{
	biodata b;
	b.get_personal();
	b.get_academic();
	b.get_professional();
	b.display();
        return 0;
}
/*student@student-OptiPlex-3010:~$ g++ groupa13.cpp
student@student-OptiPlex-3010:~$ ./a.out

Enter nameXYZ

Enter AddressPUNE

Enter Birthdate(dd/mm/yyyy)15/5/2016

Enter gender(M/F)F

Enter academic year2016

Enter total marks500

Enter percentage70

Enter classFirst

Enter number of years of exp5

Enter organization namePQR

Enter project namePPP

Enter project DetailsIII

--------------Employee Biodata------------
-------------------------------------------------------
Personal Details
Name:XYZ
Address:PUNE
Birthdate:15/5/2016
Gender:F
-------------------------------------------------------
----------------Academic Details--------------
Academic Year	marks	percentage	class
2016	500	70	First
-------------------------------------------------------
-----------------Professional Details--------------------
Organization Name:PQR
Years of Experince:5
Project Done:PPP
Project Details:III
student@student-OptiPlex-3010:~$
*/
