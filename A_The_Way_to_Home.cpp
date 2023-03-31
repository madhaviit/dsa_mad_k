#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n,d;
    string s;
    cin>>n>>d>>s;
    int cnt=0;
    bool a;
    for (int i = 0; i < n-1-d; i++)
    {
        bool a=0;
        for (int j = i+d; j > i; j--)
        {
            if (s[j]=='1')
            {
                cnt++;
                
                i=j-1;
                a=1;
            }
            
        }
        if (!a)
        {
            cout<<-1;
            return;
        }
        
    }
    cout<<cnt+1;
      
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

    
        solve();
    

    return 0;
}