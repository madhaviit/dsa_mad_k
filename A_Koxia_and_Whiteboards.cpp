#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n,m;
    cin>>n>>m;
    int mad[n];
    forn(i,n){cin>>mad[i];}
    sort(mad,mad+n);
    int a;
    forn(i,m){cin>>a; 
    
        mad[0]=a;
        sort(mad,mad+n);
    
    }
    ull sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=mad[i];
    }
    cout<<sum<<endl;
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