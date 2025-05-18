#include<bits/stdc++.h>
using namespace std;
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
    queue<pair<int,int>>q;
    q.push({3,-1});
    while(!q.empty())
    {
        pair<int,int>x=q.front();
        q.pop();
        cout<<x.first<<'\n';
        for(int i:v[x.first])
        {
            if(i!=x.second)
            q.push({i,x.first});
        }
    }
}

// cycle in directed graph using dfs
// cycle in undireted graph using dfs
// cycle in directed graph using bfs
// cycle in undireted graph using bfs
// bipartite -> graph -> directed
// Dijkstra's algorithm -> queue, priority queue, set
// Topological sort

// ###############GFG link#########################
// UFDS Union find disjoint set
// Connected COmponetns in Undirected Graph
// Fine the number of islands (Watch)
// Course Schedule
// Distance of nearest cell having 1
// Possible paths between 2 vertices
// Rotten Organes
