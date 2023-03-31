// #include <bits/stdc++.h>
// using namespace std;
// typedef unsigned long long ull;
// #define forn(i, n) for (int i = 0; i < int(n); i++)

// void solve()
// {
//     int n;
//     cin >> n;
//     int mad[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             cin >> mad[i][j];
//         }
//     }
//     bool fl = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             fl = 0;
//             if (mad[i][j] == 2)
//             {
//                 fl = 1;
//             }
//             else
//             {
//                 if (fl == 1)
//                 {
//                     if (mad[i][j] == 1)
//                     {
//                         cout << 0;
//                         return;
//                     }
//                 }
//             }
//         }
//     }
//     int dp[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         if (mad[i][i] == 2)
//         {
//             cout << 0;
//             return;
//         }

//         dp[i][i] = 2;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (i == j)
//             {
//                 dp[i][j] = 2;
//             }
//             else
//             {
//                 if (mad[i][j] == 1)
//                 {
//                     dp[i][j] = dp[i][j - 1] % 998244353;
//                 }
//                 else if (mad[i][j] == 2)
//                 {
//                     dp[i][j] = (dp[i + 1][j - 1] + dp[i][j - 1]) % 998244353;
//                 }
//                 else
//                 {
//                     dp[i][j] = dp[i][j - 1] + dp[i + 1][j] % 998244353;
//                 }
//             }
//         }
//     }
//     cout << dp[0][n - 1];
// }

// void solve(){
//     int n;
//     cin>>n;
//     int mad[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             cin>>mad[i][j];
//         }
        
        
//     }    
//     int dp[n];
// }

// int main()
// {
    
//     solve();

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

void Saraff(){
    int n;
    cin >> n;
    
    vector <int> dp(n + 1); // dp[i] = number of valid binary strings of length i
    vector <vector <int>> rule(n + 1, vector <int>(n + 1));
    
    // rule[i][j] == 0, no condition
    // rule[i][j] == 1, all same
    // rule [i][j] == 2, atleast 2 different
    
    int ok = 1;
    
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cin >> rule[i][j];
            
            if(rule[i][i] == 2){
                ok = 0;
            }
        }
    }
    
    if(ok == 0){
        cout << "0\n";
        return;
    }
    
    dp[0] = 2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            // check [j, i] has all the elements equal
            int ok = 1;
            for(int x=j; x<=i && ok == 1; x++){
                for(int y=x; y<=i && ok == 1; y++){
                    if(rule[x][y] == 2){
                        ok = 0;
                    }
                }
            }
            
            for(int x=1; x<j && ok == 1; x++){
                for(int y=j; y<=i && ok == 1; y++){
                    if(rule[x][y] == 1){
                        ok = 0;
                    }
                }
            }
            
            if(ok == 1){
                dp[i] += dp[j - 1];
                dp[i] %= mod;
            }
        }
    }
    
    cout << dp[n] << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int test = 1;
    //cin>>test;
 
    while(test--){
        Saraff();
    }
}