#include<iostream>
#include<vector>
using namespace std;
void dfs(int x,vector<vector<int>>&v,vector<int>&vis)
{
    vis[x]=1;
    cout<<x<<'\n';
    for(int i:v[x])
    {
        if(!vis[i])
        dfs(i,v,vis);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>edges;
    for(int i=1;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        edges.push_back({x,y});
    }
    vector<vector<int>>v(n);
    for(auto i:edges)
    {
        v[i.first].push_back(i.second);
        v[i.second].push_back(i.first);
    }
    vector<int>vis(n);
    dfs(0,v,vis);
}

//  cycle in directed graph using dfs
// cycle in undireted graph using dfs
// cycle in directed graph using bfs
// cycle in undireted graph using bfs
// bipartite -> graph -> directed
// Topological sort