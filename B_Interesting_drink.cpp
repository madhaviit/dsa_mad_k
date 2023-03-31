#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (ull i = 0; i < ull(n); i++)

void solve()
{
    ull n;
    cin >> n;
    ull stores[n];
    ull dp[100000] = {0};
    ull pref[100000]={0};
    forn(i, n)
    {
        cin >> stores[i];
        // for (ull j = stores[i]; j < 100000; j++)
        // {
        //     dp[j] = dp[j] + 1;
        // }
        dp[stores[i]]+=1;
    }
    
    for (int i = 1; i < 100000; i++)
    {   
        pref[i]=dp[i]+pref[i-1];
    }
    
    ull q;
    cin >> q;
    ull a;
    int count;
    for (ull i = 0; i < q; i++)
    {
        cin >> a;
        // ull count;
        // if (a > 100000)
        // {
        //     cout << n << endl;
        // }
        // else
        // {
        //     cout << dp[a] << endl;
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     if (stores[i]<=a)
        //     {
        //         count++;
        //     }else
        //     {
        //         goto madhav;
        //     }
            
            
        // }
        // madhav:
        // cout<<count<<endl;
        if (a<100000)cout<<pref[a]<<endl;
        else cout<<n<<endl;
        
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

    solve();

    return 0;
}