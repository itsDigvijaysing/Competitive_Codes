#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        int a[n];
        int vol=k;
        bool checker=true;
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        for(int m=0;m<n+1;m++){
            if(vol==k){
                vol=a[m];
            }else if (m==n)
            {
                if(vol<(2*(k-a[m-1]))){
                    vol=(2*(k-a[m-1]));
                }
            }
            else if (vol<(a[m] - a[m-1]))
            {
             vol= a[m] - a[m-1];
            }
        }
        cout<<vol<<endl;
    }

    return 0; 
}