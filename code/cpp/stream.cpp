#include<iostream>
#include<fstream>
using namespace std;
class Data
{
private:
	int roll_no;
	char name[20];
public:
	void accept()
	{
	cout<<"Enter your name"<<endl;
	cin>>name;
	cout<<"Enter your roll no"<<endl;
	cin>>roll_no;
	}	
	
	void display()
	{
	cout<<"\nName of student is "<<name<<endl;
	cout<<"Roll no is "<<roll_no<<endl;
	}
};

int main()
	{
		int n,i;
		Data a[10];
		fstream f;
	
		cout<<"How many records u want ";
		cin>>n;
	f.open("ABC.txt",ios::out);
	for(i=0;i<n;i++)
	{
		a[i].accept();
		f.write((char*)&a[i],sizeof(a[i]));
	}
	f.close();
	
	f.open("ABC.txt",ios::in);
	for(i=0;i<n;i++)
	{
		f.read((char*)&a[i],sizeof(a[i]));		
		a[i].display();
		
	}
	f.close();
	
return 0;
}
