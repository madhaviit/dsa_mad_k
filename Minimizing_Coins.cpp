// #include <bits/stdc++.h>
// using namespace std;
// typedef unsigned long long int ull;
// #define forn(i, n) for (int i = 0; i < int(n); i++)

// void solve()
// {
//     int n;
//     int x;
//     cin>>n>>x;
//     int coin[n];
//     forn(i,n){cin>>coin[i];}
//     sort(coin,coin+n);
    
    
//     int dp[10000]={0};
//     for (int i = n-1; i >= 0; i)
//     {
//         for (int j = coin[i]; j <= x; j=j+coin[i])
//         {
//             if (dp[j]==0)
//             {
//                 dp[j]=j/coin[i];
//             }else{            
//                 dp[j]=min(dp[j],dp[j-coin[i]]+1);
//             }
//         }
        
//     }
//     if (dp[x]!=0)
//     {
//         cout<<dp[x];
//     }else{cout<<-1;}
//     return;
    
    
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     // int t;
//     // cin >> t;
//     // while (t--)
//     // {
//     //     solve();
//     // }

//     solve();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, target;
  cin >> n >> target;
  vector<int> c(n);
  for (int&v : c) cin >> v;

  vector<int> dp(target+1,1e9);
  dp[0] = 0;
  for (int i = 1; i <= target; i++) {
    for (int j = 0; j < n; j++) {
      if (i-c[j] >= 0) {
	dp[i] = min(dp[i], dp[i-c[j]]+1);
      }
    }
  }
  cout << (dp[target] == 1e9 ? -1 : dp[target]) << endl;
}
