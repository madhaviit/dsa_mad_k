#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)


void solve(){
    ull n;
    cin>>n;
    if (n==1)
    {
        cout<<2<<endl;
    }else if (n==2 || n==3)
    {
        cout<<1<<endl;
    }else
    {
        cout<<(n+2)/3<<endl;
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