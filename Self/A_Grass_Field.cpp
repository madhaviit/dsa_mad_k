#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int cas = 0;
    if (a==0 && b==0 && c==0 && d==0)
    {
       cout<<0;
    }else if (a==1 && b==1 && c==1 && d==1)
    {
        cout<<2;
    }else
    {
        cout<<1;
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}