#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)


void solve(){
    int n;
    cin>>n;
    int mad[n];
    int maxin=0;
    int max=-1;
    for (int i = 0; i < n; i++)
    {
        cin>>mad[i];
        if (mad[i]>=max)
        {
            max=mad[i];
            maxin=i;
        }
        
    }
    cout<<(maxin+1)<<endl;
        
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

