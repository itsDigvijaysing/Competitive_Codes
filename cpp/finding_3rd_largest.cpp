#include<iostream>
using namespace std;

int main() {
    int a[5],b[5],i,j,k;
    cout<<"Enter 5 No-> "<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    //Code to find 3rd biggest no.
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(a[i]>a[j]){
                k=a[i];
                a[i]=a[j];
                a[j]=k;
                // break;
            }
        }
        // b[i]=a[i];
        // a[i]=1000;

    }
    cout<<"Sorted list No-> "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
    // cout<<"Sorted No-> "<<b[0]<<" "<<b[1]<<" "<<b[2]<<" "<<b[3]<<" "<<b[4]<<endl;
    return 0;
}