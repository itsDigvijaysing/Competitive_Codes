/*
Name: Rajput Digvijaysing
Roll No: 14
Div:2 A
Assignment 4:
Write a C++ program create a calculator for an arithmetic operator (+, -, *, /). The program should take two operands from user and performs the operation on those two operands depending upon the operator entered by user. Use a switch statement to select the operation. Finally, display the result. Some sample interaction with the program might look like this:
Enter first number, operator, second number: 10 / 3
Answer = 3.333333
Do another (y/n)? y
Enter first number, operator, second number: 12 + 100
Answer = 112
Do another (y/n)? n
*/
#include<iostream>
using namespace std;
class Calculator
{
   private:
	   float num1,num2,result;
	   char op;
   public:
	   void get();
	   void calculate();
};
void Calculator::get()
{
   cout<<"\nEnter first number, operator, second number:\n";
   cin>>num1;
   cin>>op;
   cin>>num2;
}
void Calculator::calculate()
{

   switch(op)
   {
      case '+':
       		result=num1+num2;
                  cout<<" Answer = "<<result;

      		break;
      case '-':
		     result=num1-num2;
                  cout<<" Answer = "<<result;

		break;
      case '*':
      		 result=num1*num2;
                  cout<<" Answer = "<<result;

     		 break;
      case '/':
      		if(num2==0)
      		cout<<"\n Error. Not valid.";
      		 result=num1/num2;
                  cout<<" Answer = "<<result;

      break;
   }

}
int main()
{
   char again;
   Calculator obj;
   jump:obj.get();
   obj.calculate();
   cout<<"\n Do another (y/n)? ";
   cin>>again;
   if(again=='y'||again=='Y')
   goto jump;
   cout<<"******* EXITING *******";
   return 0;
}

/*OUTPUT:
student@student-OptiPlex-3010:~$ g++ groupa5.cpp
student@student-OptiPlex-3010:~$ ./a.out

Enter first number, operator, second number:
10/3
 Answer = 3.33333
 Do another (y/n)? y

Enter first number, operator, second number:
12+100
 Answer = 112
 Do another (y/n)? n*/

