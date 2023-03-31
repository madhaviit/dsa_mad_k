#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n,k;
    cin>>n>>k;
    int mad[n]={0};
    int count = 0;
    int in=1;
    for (int i = 0; i < n; i++)
    {
        cin>>mad[i];   
    }
    int maxin=1;
    int po[n];for (int i = 0; i < n; i++)
    {
        if (i>=k)
        {
            po[i]=po[i-1]+mad[i]-mad[i-k];
        }else if(i!=0)
        {
            po[i]=po[i-1]+mad[i];
        }else
        {
            po[i]=mad[i];
        }       
    }
    for (int i = k; i < n; i++)
    {
        if (po[i]<po[maxin+k-2])
        {
            maxin=i-k+2;
        }
        
    }
    cout<<maxin;
    
    
    
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