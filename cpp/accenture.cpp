#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Xis=0,Yis=0;
long long prime_finder(int N){
    int i,j,m,prime,x,y;
    i=N;
    m=i/2;
    for(j=2;j<=m;j++){
       if(i % j==0){
        // cout<<"Not prime\n";
        x=j;
        y=i/j;
        if(x>y){
            int temp=x;
            x=y;
            y=temp;
        }
        // cout<<x<<y;
        // if(x<1 || y<1){
        //     cout<<"X or Y is less than 1";
        // }
        Xis=x;
        Yis=y;
        prime=0;
       }
       else{
        // cout<<"Prime\n";
        prime=1;
       }
    }
    return prime;
}

long long extra_cal(int N) {
    int prime,x,y,i,count,fx,fy;
    i=N;
    count=0;
    x=0;
    y=0;

    prime=prime_finder(i);
    x=Xis;
    y=Yis;
    if(i==1){
       count=0;
    }
    if(i!=1 && prime==1){
       count=1;
    }
    if(i>=2 && i<=3){
        count=1;
    }
    else{
        fx=extra_cal(x);
        fy=extra_cal(y);
        count=x*fy+y*fx;
    }
    // cout<<Xis<<Yis;
    return count;
}

long long strange_sum (int L, int R) {
   // Write your code here
   int i,j,k;
   int count=0;

   for (i=L;i<=R;i++){
    //    cout<<i;

       for(k=1;k<=i;++k){
           if(i%k==0){
            //    cout<<k;
               count=count+extra_cal(k);
           }
       }

   }
   return count;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int L;
        cin >> L;
        int R;
        cin >> R;

        long long out_;
        out_ = strange_sum(L, R);
        cout << out_;
        cout << "\n";
    }
}