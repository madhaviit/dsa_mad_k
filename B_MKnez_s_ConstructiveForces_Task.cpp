#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n;
    cin>>n;
    int a=0,b=0;
    if (n==3)
    {
        cout<<"NO\n";
    }else
    {
        cout<<"YES\n";
        b=n/2;
        a=b-1;
        if (n%2==1)
        {
            for (int i = 0; i < n; i++)
            {
                if (i%2==0)
                {
                    cout<<a<<" ";
                }else{               
                cout<<-1*b<<" ";
                }
            }
            cout<<endl;
        }else
        {
            for (int i = 0; i < n; i++)
            {
                if (i%2)
                {
                    cout<<1<<" ";
                }else{               
                cout<<-1<<" ";
                }
            }
            cout<<endl;
        }
        
        
    }
    
        
    
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