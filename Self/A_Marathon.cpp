#include             <bits/stdc++.h>
using namespace      std;
typedef long long    ll;

void solve()
{
    int tim;
    cin>>tim;
    int cnt=0;
    int mad[3];
    for (int i = 0; i < 3; i++)
    {
       cin>>mad[i];
       if (mad[i]>tim)
       {
        cnt++;
       }
       
    }
    cout<<cnt<<endl;
       
    
    
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}