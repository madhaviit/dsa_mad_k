#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m,n;
        m=grid.size();
        n=grid[0].size();
        int dp[m+1][n+1];
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++)
                dp[i][j]=0;
        }
        dp[0][0]=grid[0][0];
        for(int i = 1 ; i<m;i++){
            dp[i][0]=dp[i-1][0]+grid[i][0];
        }
        for(int i = 1 ; i<n;i++){
            dp[0][i]=dp[0][i-1]+grid[0][i];
        }
        if(m==1){return dp[0][n-1];}
        if(n==1){return dp[m-1][0];}
        
        for(int i=1; i<n; i++){
            for(int j=1 ; j<m;j++){
                if(j==m-1&&i==n-1){
                    return (grid[i][j]+min(dp[i-1][j],dp[i][j-1]));
                }
                dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
            }
        }
        return 0;
    }
};

void solve()
{
    int n,m;
    cin>>m>>n;
    vector<vector<int>> grid(m);
    forn(i,m){
        forn(j,n){
            int a;
            cin>>a;
            grid[i].push_back(a);
        }
    }
    Solution s;
    cout<<s.minPathSum(grid);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    solve();

    return 0;
}
