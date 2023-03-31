#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)


void solve(){
    ull n;
    cin>>n;
    int mad1[n];
    int mad2[n];
    int mad3[n];
    for (ull i = 0; i < n; i++)
    {
        cin>>mad1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>mad2[i];
        mad3[i]=(mad2[i]-mad1[i]);
    }
    bool sh = 1;
    for (int i = 0; i < n-1; i++)
    {
        if (mad3[i]<0)
        {
           sh=0;
           goto madhav;
        }
        if (i<(n-1))
        {
           if (mad3[i]>=mad3[i+1])
        {
           continue;
        }else
        {
            sh=0;goto madhav;
        } 
        }
        if (i=(n-1))
        {
            /* code */
        }
        
        
        
        
        
    }
    madhav:
    if (sh)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    
    
    
    
    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}

