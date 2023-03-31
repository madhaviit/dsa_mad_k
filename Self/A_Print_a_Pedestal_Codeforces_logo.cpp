#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)


void solve(){
    int n;
    cin>>n;
    int a,b,c;
    if ((n%3)==0)
    {
        a=(n/3)+1;
        int temp = n-a;
        if (temp%2==0)
        {
            b=(temp/2)-1;
            c=(temp/2)+1;
        }else
        {
            b=(temp/2);
            c=(temp/2)+1;
        }
        
        
    }else{
        a=(n/3)+2;
        int temp = n-a;
        if (temp%2==0)
        {
            b=(temp/2)-1;
            c=(temp/2)+1;
        }else
        {
            b=(temp/2);
            c=(temp/2)+1;
        }
    }
    
    cout<<c<<" "<<a<<" "<<b<<endl;
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