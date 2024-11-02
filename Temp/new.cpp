#include<bits/stdc++.h>
using namespace std;

void sum(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]+=1;
        cout<<a[i]<<endl;
    }
}

int main(){
    int n=2;
    int a[n];
    cin>>a[0]>>a[1];
    sum(a,n);
    cout<<a<<endl;
    return 0;
}