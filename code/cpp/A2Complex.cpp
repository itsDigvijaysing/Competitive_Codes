/*
Name:Rajput Digvijaysing
Roll No: 14
Div:2 A
Assignment 2:
Implement a class complex which represents the complex Number data tjpe. Implement
the following operations:
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiplj two complex numbers.
4. Overloaded << and >> to print and read complex Numbers.*/

#include<iostream>
using namespace std;
class complex
{
	float i;
	float j;
public:
        complex()
	{
		i=0;
		j=0;
	}

	complex operator+(complex);
	complex operator*(complex);
	friend istream &operator >>(istream &input,complex &t)
	{
		cout<<"Enter the real part";
		input>>t.i;
		cout<<"Enter the imaginary part";
		input>>t.j;
	}
	friend ostream &operator <<(ostream &output,complex &t)
	{
			output<<t.i<<"+"<<t.j<<"i\n";
	}

};

complex complex::operator+(complex c)
{
	complex temp;
	temp.i=i+c.i;
	temp.j=j+c.j;
	return(temp);
}


complex complex::operator*(complex c)
{
	complex temp2;
	temp2.i=(i*c.i)-(j*c.j);
	temp2.j=(j*c.i)+(i*c.j);
	return (temp2);
}


int main()
{
	complex c1,c2,c3,c4;
        cout<<"Default constructor value=\n";
        cout<<c1;
	cout<<"\nEnter the 1st number\n";
	cin>>c1;
	cout<<"\nEnter the 2nd number\n";
	cin>>c2;
	c3=c1+c2;
	c4=c1*c2;
	cout<<"\nThe first number is ";
	cout<<c1;
	cout<<"\nThe second number is ";
	cout<<c2;
	cout<<"\nThe addition is ";
	cout<<c3;
	cout<<"\nThe multiplication is ";
	cout<<c4;
	return 0;
}
/*
student@student-OptiPlex-3010:~$ ./a.out
Default constructor value=
0+0i

Enter the 1st number
Enter the real part2
Enter the imaginary part4

Enter the 2nd number
Enter the real part4
Enter the imaginary part8

The first number is 2+4i

The second number is 4+8i

The addition is 6+12i

The multiplication is -24+32i
student@student-OptiPlei-3010:~$
*/
