#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main() {
    int n; cin >> n;
    vector<long long int> dp(n+1);
    dp[0] = 1;
    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < 7; j++) {
            if (i-j >= 0) dp[i] += dp[i-j];
            dp[i] %= mod;
        }
    }

    cout << dp[n] << endl;
}
// #include <bits/stdc++.h>
// using namespace std;
// typedef unsigned long long int ull;
// #define forn(i, n) for (ull i = 0; i < ull(n); i++)

// void solve()
// {
//     ull n;
//     cin>>n;
//     ull dp[6];
//     dp[0]=1;
//     dp[1]=2;
//     dp[2]=4;
//     dp[3]=dp[0]+dp[1]+dp[2]+1;
//     dp[4]=dp[0]+dp[2]+dp[3]+dp[1]+1;
//     dp[5]=dp[0]+dp[1]+dp[2]+dp[3]+dp[4]+1; 
//     ull sum=0;
//     if (n<7){cout<<dp[n-1]; return;}
//     else {
//         for (ull i = 6; i < n; i++)
//         {
//             sum = ((dp[0]%1000000007)+(dp[1]%1000000007)+(dp[2]%1000000007)+(dp[3]%1000000007)+(dp[4]%1000000007)+(dp[5]%1000000007))%1000000007;
//             dp[i%6]=sum%1000000007;;
//         }
        
//     }
//     cout<<dp[n%6-1]%1000000007;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     // ull t;
//     // cin >> t;
//     // while (t--)
//     // {
//     //     solve();
//     // }

//     solve();
//     return 0;
// }