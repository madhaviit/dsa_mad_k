#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)


void solve(){
    int n;
    cin>>n;
    int mad[n];
    bool pos=false;
    forn(i,n){
        cin>>mad[i];
    }
    sort(mad,mad+n);
    forn(i,n-2){
        if ((mad[i]+mad[i+1])>mad[i+2])
        {
            pos=true;
        }
    }
    if (pos)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    
    
}
int main(){
    solve();
    return 0;
}