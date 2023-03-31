#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

class Solution {
public:
    int change(int amount, vector<int>& coins) { 
        int dp[5001] = { 1 };
        for (auto c : coins)
            for (auto j = c; j <= amount; ++j) dp[j] += dp[j - c];
        return dp[amount];
        }
};

class Solution2 {
public:
    int change(int amount, vector<int>& coins) { 
        int dp[5001] = { 1 };
        for (auto c : coins)
            for (auto j = c; j <= amount; ++j) dp[j] += dp[j - c];
        return dp[amount];
        }
};

void solve()
{
    int n;
    cin>>n;
    vector<int> mad(n);
    forn(i,n){cin>>mad[i];}
    int amt;
    cin>>amt;
    Solution s;
    cout<<s.change(amt,mad);
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    solve();

    return 0;
}