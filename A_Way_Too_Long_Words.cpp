#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    string mad;
    cin>>mad;
    if (mad.size()>10)
    {
        cout<<mad[0]<<mad.size()-2<<mad[mad.size()-1]<<endl;
    }else
    {
        cout<<mad<<endl;
    }
    
    
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
    solve();

    return 0;
}