#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
void solve(){
    ull n,m;
    cin>>n>>m;
    cout<<(((m*(m+1))/2)+(m*((n*(n+1))/2)))-m<<endl;
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





