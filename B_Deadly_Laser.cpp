#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)


void solve(){
    ull n,m,sx,sy,d;
    cin>>n>>m>>sx>>sy>>d;
    if (d==0)
    {
        cout<<(n+m-2)<<endl;
        return;
    }else if ((sx+d)>=n && (sy+d)>=m)
    {
        cout<<-1<<endl;
        return ;
    }else if ((n-sx)+(m-sy)<=d)
    {
        cout<<-1<<endl;
        return;
    }else if (sx<=d&&sy<=d)
    {
        cout<<-1<<endl;
    }
     else
    {
        cout<<(n+m-2)<<endl;
        return;
    }
    
    
    
    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}

