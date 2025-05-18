#include<iostream>
using namespace std;

int add(int a,int b)
{
        cout<<"First"<<endl;
return(a+b);
}
double add(double a,double b)
{
        cout<<"Second"<<endl;
return(a+b);
}
int main()
{
cout<<add(2,3)<<endl;
cout<<add(2.5,1.2)<<endl;

return 0;
}
