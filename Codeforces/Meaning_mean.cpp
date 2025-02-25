#include<iostream>
#include<fstream>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    // cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        int arry[a];
        for(int j=0; j<a; j++){
            int b;
            cin>>b;
            arry[j] = b;
        }
        int s_arry = sizeof(arry) / sizeof(arry[0]);
        sort(arry, arry + s_arry);
        int ab, bc;
        int ou;
        int z=0;
        while((z+1)<a){ 
            ab = arry[z];
            bc = arry[z+1];
            ou = (ab+bc)/ 2;
            // cout<<ab<<" "<<bc<<" "<<ou<<endl;
            // for (int z = 1; z < s_arry; z++) {
            //     arry[z - 1] = arry[z];
            // }
            arry[z+1] = ou;
            z++;
            // a--;
        }
        cout<<arry[z]<<endl;
    }
    return 0;
}