#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n;
    cin>>n;
    ull mad[n];
    ull max = 0;
    ull min = INT64_MAX;
    ull mind;
    ull maxd;
    bool out = true;
    forn(i,n){
        cin>>mad[i];
        if (mad[i]>max)
        {
            max=mad[i];
            maxd=i;
        }
        if (mad[i]<min)
        {
            min=mad[i];
            mind=i;
        }      
    }
    
    if (n==2)
    {
        cout<<"YES"<<endl;
        return ;
    }
    if(maxd!=0){
    for (int i = 1; i <= maxd; i++)
    {
        if (mad[i]<mad[i-1])
        {
            out=0;goto madhav;
        }
    }}
    if(maxd!=n){
    for (int i = maxd+1; i < n; i++)
    {
        if (mad[i]>mad[i-1])
        {
            out=0;goto madhav;
        }       
        
    }}
    madhav:
    
    if (out)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
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