#include<bits/stdc++.h>
using namespace std;

int main(){
    int lp;
    int n;
    int a;
    int b;
    int a_sqr;
    int b_sqr;
    cin>>lp;
    for(int i=0;i<lp;i++){
        cin>>n;
        n=n*n*n;
        a=0;
        b=0;
        while(true){
            a_sqr=a*a;
            b_sqr=(a_sqr-n);
            if(b_sqr<0) {
                a++;
                continue;
                }
            b=sqrt(b_sqr);
            if((b*b) == b_sqr){
                // cout<<"inside loop";
                if(b>a) cout<<b<<" "<<a<<endl;
                else cout<<a<<" "<<b<<endl;
                break;
            }
            // cout<<n<<" a "<<a<<" "<<a_sqr<<" "<<b<<" "<<b_sqr<<endl;
            a=a+1;
        }
    }
    return 0;
}