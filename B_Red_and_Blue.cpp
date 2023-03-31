#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n,m;
    cin>>n;
    int a[n];
    int tot=0;
    forn(i,n){cin>>a[i];tot+=a[i];}
    cin>>m;
    int b[m];
    forn(i,m){cin>>b[i];tot+=b[i];}
    int cap=0,can=0;
    for (int i = n-1; i >= 0; i--)
    {
        if (a[i]>=0)
        {
            cap+=a[i];
        }else if ((a[i]<0) && cap==0)
        {
            can=0; tot=tot-a[i];   
        }
        else
        {
            can+=a[i];
        }
        if (-1*can>cap)
        {
            tot=tot-can-cap;
            can=0;
            cap=0;
        }
        mad1:
        i=i;
    }
    
    cap=0;can=0;
    for (int i = m-1; i >= 0; i--)
    {
        if (b[i]>=0)
        {
            cap+=b[i];
        }else if ((b[i]<0) && cap==0)
        {
            can=0; tot=tot-b[i];   
        }
        else
        {
            can+=b[i];
        }
        if (-1*can>cap)
        {
            tot=tot-can-cap;
            can=0;
            cap=0;
        }
        mad2:
        i=i;
    }
    cout<<tot<<endl;
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

    
}