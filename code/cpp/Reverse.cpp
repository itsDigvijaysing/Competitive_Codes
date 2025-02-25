#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string strg;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>strg;
        for(int j=strg.size()-1;j>=0;j--){
            if(strg[j]=='p'){
                str[i].push_back('q');
            }else if(strg[j]=='q'){
                str[i].push_back('p');
            }else{
                str[i].push_back(strg[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<str[i]<<endl;
    }
    return 0;
}