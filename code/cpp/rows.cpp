#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int n,m,a,b,c;
    int ra,rb;
    cin>>n;
    string strg;
    vector<int> output(n,0);
    for(int i=0;i<n;i++){
        cin>>m>>a>>b>>c;
        ra=m;
        rb=m;
        if(ra>a){
            ra=ra-a;
            output[i]+=a;
        }else{
            output[i]+=ra;
            ra=0;
        }
        if(rb>b){
            rb=rb-b;
            output[i]+=b;
        }else{
            output[i]+=rb;
            rb=0;
        }
        if(ra+rb>c){
            output[i]+=c;
        }else{
            output[i]+=ra+rb;
        }
    }
    for(int i=0;i<n;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}