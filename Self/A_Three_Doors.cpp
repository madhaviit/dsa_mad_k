#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)


void solve(){
    int hk;
    cin>>hk;
    int key[3];
    bool ks=true;
    forn(i,3){
        cin>>key[i];
        if ((i+1)==key[i])
        {
            ks=0;
        }
        
    }
    if (key[hk-1]==0)
    {
        ks=0;
    }
    if (ks)
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