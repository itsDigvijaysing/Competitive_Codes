/*Name:Rajput Digvijaysing
Roll No: 14
Div:2 A
Assignment 12:
Write C++ program using STL to add binary numbers (assume one bit as one  number); use STL stack*/
#include<iostream>
#include<stack>

using namespace std;

	stack <int> read();
	void display(stack<int> &s);
	stack <int>add(stack<int> &s1,stack<int> &s2);

	int main()
	{
		stack<int> s1,s2,s3;
		int ch;

		do
		{
			cout<<"\n 1.Addition of two binary numbers \n 2.Quit";
			cout<<"\n Enter your choice:";
			cin>>ch;

			switch(ch)
			{
				case 1:
					s1=read();
					s2=read();
					s3=add(s1,s2);
					display(s3);
					break;

			}
		}while(ch!=2);
return 0;
}

stack<int> read()
{
	char a[40];
	stack<int> s;
	cout<<"\n Enter a binary number: ";
	cin>>a;

	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]=='1')
			s.push(1);

		else
		if(a[i]=='0')
			s.push(0);

	}

	return s;

}

stack<int> add(stack<int> &s1,stack<int> &s2)
{
	stack<int> s;
	int sum,carry=0,bit1,bit2;
	while(!s1.empty() || !s2.empty())
	{
		bit1=bit2=0;
		if(!s1.empty())
			{
				bit1=s1.top();
				s1.pop();
			}
		if(!s2.empty())
			{
				bit2=s2.top();
				s2.pop();
			}
		sum=(bit1+bit2+carry)%2;
		carry=(bit1+bit2+carry)/2;

		s.push(sum);
	}

	if(carry==1)
	s.push(1);
	return s;
}

void display(stack<int> &s)
{
	cout<<"\n Sum= ";

	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
}

/*sudent@sudent-OptiPlex-3010:~$ g++ binary.cpp
sudent@sudent-OptiPlex-3010:~$ ./a.out

 1.Addition of two binary numbers
 2.Quit
 Enter your choice:1

 Enter a binary number: 1101

 Enter a binary number: 1100

 Sum= 11001
 1.Addition of two binary numbers
 2.Quit
 Enter your choice:2
sudent@sudent-OptiPlex-3010:~$
*/

