#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n;
    cin>>n;
    int given[n];
    int dp[101]={0};
    forn(i,n){cin>>given[i];dp[given[i]]+=1;}
    sort(given,given+n,greater<int>());
    if (given[0]==given[n-1])
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES\n";

   
        if (dp[given[0]]>1)
        {
            cout<<given[0]<<" "<<given[n-1]<<" ";
            for (int i = 1; i < n-1; i++)
            {
                cout<<given[i]<<" ";
            }
            
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout<<given[i]<<" ";
            }
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