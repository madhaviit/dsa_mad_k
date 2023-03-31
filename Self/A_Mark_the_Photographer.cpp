#include             <bits/stdc++.h>
using namespace      std;
typedef long long    ll;

void solve()
{
    int n,x;
    cin>>n>>x;
    vector <int> mad;
    ll inp;
        for (int i = 0; i < (2*n) && cin>>inp; i++)
            {
                mad.push_back(inp);
            } 
            int m = sizeof(mad) / sizeof(mad);
    sort(mad.begin(),mad.end());
    bool lad = true;
    for (int i = 0; i < n; i++)
    {
        if ((mad[n+i]-mad[i])>=x)
        {
            continue;
        }
        else
        {
            lad=false;
        }
        
        
    }
    if (lad)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    
    
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