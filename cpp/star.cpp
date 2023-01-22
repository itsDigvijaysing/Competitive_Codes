#include<iostream>
using namespace std;

int main(){
    int i,S;
    char A;
    A='*';
    cout<<"How many rows of star do you want- ";
    cin>>S;
    for(i=1;i<S+1;i++){
        cout<<string(i,A)<<endl;
    }
    return 0;
}