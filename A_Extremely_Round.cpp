#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    string n;
    cin>>n;
    int sum=0;
    for (int i = 0; i < n.size(); i++)
    {
        if (i==0)
        {
            sum+=int(n[i]-48);
        }else
        {
            sum+=9;
        }
        
        
    }
    cout<<sum<<endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}