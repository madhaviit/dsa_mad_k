// You //are given an integer array prices where prices[i] is the price of a given stock on the ith
// day. On each day, you may decide to buy and/or sell the stock. You can only hold at most
// one share of the stock at any time. However, you can buy it then immediately sell it on the
// same day. Find and return the maximum profit you can achieve.
// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 7
// Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
// Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
// Total profit is 4 + 3 = 7.
// Example 2:
// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: There is no way to make a positive profit, so we never buy the stock to
// achieve the maximum profit of 0.
// Constraints:
// ● 1 <= prices.length <= 3 * 104
// ● 0 <= prices[i] <= 104
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n;
    cin>>n;
    int mad[n];
    int sad[n-1];
    cin>>mad[0];
    int sum=0;
    for (int i = 1; i < n; i++)
    {
        cin>>mad[i];
        sad[i]=mad[i]-mad[i-1];
        if (sad[i]>0)
        {
            sum+=sad[i];
        }
        
        
    }
    cout<<sum;
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