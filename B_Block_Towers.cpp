#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    ull n;
    cin>>n;
    ull block1;
    cin>>block1;
    ull mad[n-1];
    for (ull i = 0; i < n-1; i++)
    {
           cin>>mad[i];
    }
    sort(mad,mad+n-1);
    for (ull i = 0; i < n-1; i++)
    {
        
        if (block1<mad[i])
        {
            block1= block1+ ((mad[i]-block1+1)/2);
        }
        
    }
    cout<<block1<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}