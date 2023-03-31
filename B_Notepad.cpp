#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool out = 0;
    char a,b;
    if (s.size()<4)
    {
        out=0;
    }
    else{
    for (int i = 0; i < s.size()-1; i++)
    {
        a=s[i];
        b=s[i+1];
        for (int j = i+2; j < s.size()-1; j++)
        {
            if (s[j]==a&&s[j+1]==b)
            {
               out = 1;
               break;
            }
            
        }
        
        
        
    }
    }
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