#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

//madhav

void solve(){
    //cpde goes here
    int p,q;
    cin>>p>>q;
    bool mad1 = 0;
    if (p>q)
    {
        mad1=1;
    }
    bool mad2 = (p%2==0 && q%2);
    if (mad1 || mad2)
    {
        cout<<"NO"<<endl;
    }else
    {
        cout<<"YES"<<endl;
        forn(i,p-(2-(p%2))){
            cout<<1<<" ";q--;
        }
        if (p%2)
        {
            cout<<q<<endl;
        }
        else
        {
            cout<<q/2<<" "<<q/2<<endl;
        }
        
        
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

