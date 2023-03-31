#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n;
    cin>>n;
    int mad[n];
    for (int i = 0; i < n; i++)
    {
        cin>>mad[i];
    }
    int count=0;
    int elem=0;
    for (int i = 0; i < n; i++)
    {
        if (count==0)
        {
            elem=mad[i];
            count=1;
        }else if (elem==mad[i])
        {
            count++;
        }else
        {
            count--;
        }
        
        
        
    }
    cout<<elem;
    
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