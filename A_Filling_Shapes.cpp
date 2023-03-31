#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n;
    cin>>n;
    if (n%2==0)
    {
        int count=1;
        for (int i = 0; i < n/2; i++)
        {
            count*=2;
        }
        cout<<count;
    }else
    {
        cout<<0;
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