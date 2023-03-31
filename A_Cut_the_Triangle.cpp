#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if ((y1==y2 && x2==x3)||(y1==y3 && x3==x2)||(y2==y3&&x2==x1)||(y1==y3&&x2==x1)||(y2==y1&&x1==x3)||(y2==y3&&x3==x1))
    {
        cout<<"NO"<<endl;
    }else
    {
        cout<<"YES"<<endl;
    }
    
    
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