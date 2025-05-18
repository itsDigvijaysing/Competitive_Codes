#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        int a[n];
        int val=0;
        bool checker=true;
        for(int j=0;j<n;j++){
            cin>>a[j];
            if(val<=a[j]) val=a[j];
            else checker=false;
        }
        if(checker) cout<<"YES"<<endl;
        else if(k==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0; 
}