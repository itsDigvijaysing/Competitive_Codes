#include<bits/stdc++.h>
using namespace std;

int main(){
    int lp;
    int n;
    int a;
    int b;
    int a_sqr;
    int b_sqr;
    pair<int,int> temp;
    vector<int> output;
    cin>>lp;
    for(int m=0;m<lp;m++){
        cin>>n;
        output.clear();
        queue<pair<int,int>> que;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            // cout<<a<<b<<"ab"<<endl;
            que.push({a,b});
        }
        a=1;
        // cout<<"queue "<<que.size();
        while(que.size() != 0){
            // cout<<"in queue "<<que.size();
            temp=que.front();
            que.pop();
            // cout<<temp.first<<" "<<temp.second<<endl;
            if((temp.first+temp.second)>a){
                output.push_back(a);
                a++;
            }else{
                output.push_back(0);
            }
        }
        // cout<<"here "<<output.size();
        for(auto it:output){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}