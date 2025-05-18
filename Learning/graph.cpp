#include<iostream>
#include<cmath>
#include<algorithm>
#include<queue>
#include<vector>
// #include<bits/stdc++.h>
using namespace std;



int main(){

    int V,x;
    cin>>V;
    vector<vector<int>> array(V+1);
    for(int i=1;i<=V;i++){
        int u,v;
        cin>>u>>v;
        array[u].push_back(v);
        array[v].push_back(u);
    }

    // for(int i=0;i<=V;i++){
    //     while(cin.peek() != '\n' && cin>>x){
    //         array[i].push_back(x);
    //     }
    //     cin.ignore();
    // }

    int starting=1;
    vector<int> visited(6,0);
    queue<int> bfs;
    bfs.push(1);
    visited[1]=1;
    while(!bfs.empty()){
        int val=bfs.front();
        cout<<val<<" ";
        bfs.pop();
        for(int i:array[val]){
            if(visited[i] == 0){
                bfs.push(i);
                visited[i]=1;
            }
        }
    }

    return 0;
}