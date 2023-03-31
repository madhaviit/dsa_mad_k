#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n;
    cin>>n;
    
    
    string mad;
    cin>>mad;
    // int mult2[40];
    // mult2[0]=1;
    // for (int i = 1; i < 40; i++)
    // {
    //     mult2[i]=2*mult2[i-1];
    // }
   
    // int cnt1=0,cnt0=0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (mad[i]=='0')
    //     {
    //         cnt0++;
    //     }
    //     else if (mad[i]=='1')
    //     {
    //         cnt1++;            
    //     }
        
    // }
    // cnt1=mult2[cnt1]-1;
    // cnt0=mult2[cnt0]-1;
    // for (int i = cnt1; i < mult2[n]-cnt0; i++)
    // {
    //     cout<<i+1<<" ";
    // }
    n--;
    int arr[n];
    int c=1;
    int count0=0,count1=0;
    for (int i = 0; i < n; i++)
    {
        if (mad[i]==mad[i-1])
        {
            c++;
        }else
        {
            c=1;
        }
        cout<<i+2-c<<" ";
        
        
        
    }
    
    cout<<endl;
    
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