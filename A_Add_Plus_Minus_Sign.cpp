#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n;
    cin>>n;
    string mad;
    cin>>mad;
    string out;
    int count1=0;
    if (mad[0]=='1')
    {
        count1=1;
    }
    
    for (int i = 1; i < n; i++)
    {
        if (mad[i]=='1')
        {
            count1++;
            if (count1%2==1)
            {
                out.append("+");
            }else
            {
                out.append("-");
            }
            
            
        }else
        {
            out.append("+");
        }
        
        
    }
    cout<<out<<endl;
    
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