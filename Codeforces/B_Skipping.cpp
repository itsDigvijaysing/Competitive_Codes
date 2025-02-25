#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<pair<int,int>>pr(n);
    for(int i=0;i<n;i++)
    {
        cin>>pr[i].first;
    }
    for(int i=0;i<n;i++)
    {
        cin>>pr[i].second;
        pr[i].second--;
    }
    vector<int>dp(n,0);
    dp[0]=pr[0].first;
    for(int i=1;i<n;i++) dp[i]=pr[i].first+dp[i-1];
    int mx=pr[0].first;
    int curr=0;
    int m=pr[0].second;
    while(curr<=m)
    {
        int nm=pr[curr].first,nexti=curr;
        for(int i=curr;i<=m;i++)
        {
            if(nexti<=pr[i].second)
            {
                if(nexti==pr[i].second)
                {
                    nm=min(pr[i].first,nm);
                }
                else nm=pr[i].first;
                nexti=pr[i].second;
            }
        }
        m=nexti;
        sum+=

    }






}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}