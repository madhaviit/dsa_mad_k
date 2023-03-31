#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    if ((n==1||m==1)||(n>3&&m>1)||(m>3&&n>1))
    {
        cout<<1<<" "<<1<<endl;
    }else
    {
        cout<<2<<" "<<2<<endl;
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