#include<iostream>
using namespace std;

int main()
{
        int a,i,n;
        int num[10]={10,20,30,40,50,60,70,80,90};
        for(i=0;i<10;i++)
        {
                cout<<i<<" :"<<num[i]<<endl;
        }
                cout<<"choose which no. you want to change :";
                cin>>n;
                cout<<"Put the value :";
                cin>>a;
                num[n]=a;
                cout<<"your answer\n";
        for(i=0;i<10;i++)
                {
                cout<<i<<":"<<num[i]<<endl;
                }        
        
return 0;
}
