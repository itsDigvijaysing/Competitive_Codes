#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rec(vector<vector<int>>&grid,int row,int col,vector<vector<int>>&dp)
    {
        if(dp[row][col]!=-1)
        {
            return dp[row][col];
        }
        int ans=0;
        for(int j=-1;j<=1;j++)
        {
            int new_row=row+j;
            int new_col=col+1;
            if(new_row>=0 && new_row<grid.size() && new_col<grid[0].size() && grid[row][col]<grid[new_row][new_col])
                ans=max(ans,rec(grid,new_row,new_col,dp)+1);
        }
        return dp[row][col]=ans;
    }
    int maxMoves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++)
        {
            ans=max(ans,rec(grid,i,0,dp));
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << s.maxMoves(grid) << endl;
    return 0;
}



// class Solution {
// public:
//     int rec(vector<vector<int>>&grid,int row,int col)
//     {
//         int ans=0;
//         for(int j=-1;j<=1;j++)
//         {
//             int new_row=row+j;
//             int new_col=col+1;
//             if(new_row>=0 && new_row<grid[0].size() && new_col<grid[0].size() && grid[row][col]<grid[new_row][new_col])
//                 ans=max(ans,rec(grid,new_row,new_col)+1);s
//         }
//         return ans;
//     }
//     int maxMoves(vector<vector<int>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         int ans=0;

//         for(int i=0;i<n;i++)
//         {
//             ans=max(ans,rec(grid,i,0));
//         }
//         return ans;
//     }
// };