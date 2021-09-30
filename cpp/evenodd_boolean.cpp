//Creating A code without using mod.
#include<iostream>
using namespace std;

int main(){
 
    bool flag = false;

    int n=9;

    flag = ((n/2)*2==n);

    if(flag!=false)
    {
        cout<<"Even";
    }else{
        cout<<"Odd";
    }



    return 0;
}