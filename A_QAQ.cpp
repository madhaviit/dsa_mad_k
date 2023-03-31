#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    string mad;
    cin>>mad;
    int n = mad.length();
    int dp1[n]={0},dp2[n]={0};
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (mad[i]=='Q')
        {
            count++;            
        }if (mad[i]=='A')
        {
            dp1[i]=count;
        }
        
        
    }
    count=0;
    for (int i = n-1; i >= 0; i--)
    { 
        if (mad[i]=='Q')
        {
            count++;            
        }if (mad[i]=='A')
        {
            dp2[i]=count;
        }  
        
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if (dp1[i]!=0&&dp2[i]!=0)
        {
            ans=dp1[i]*dp2[i]+ans;
        }
        
    }
    
    cout<<ans<<endl;
    
    
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