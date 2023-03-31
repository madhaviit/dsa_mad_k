#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n,m;
    cin>>n>>m;
    int mad[n];
    int dp[51]={0};
    forn(i,n){cin>>mad[i];if(dp[mad[i]]==0)
    {
        dp[mad[i]]=i+1;
    }
    }
    int l;
    forn(i,m){
        cin>>l;
        cout<<dp[l]<<" ";
        for (int i = 1; i < 51; i++)
        {if (dp[i]!=0 && dp[i]<dp[l])
        {
            dp[i]+=1;
        }
                    
        }
        dp[l]=1;       
    }
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