#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)


void solve(){
    ull n,m,k;
    cin>>n>>m>>k;
    ull jl[k];
    ull sum1=0;
    ull sum2=0;
    bool out=false;
    bool thr1=false;
    bool thr2=false;
    forn(i,k){
        cin>>jl[i];
        if (jl[i]>=(2*m))
        {
            sum1 = sum1+ (jl[i]/m);
            if (thr1==0)
            {
                if ((jl[i]/m)>=3)
                {
                thr1=1;
                }
            }            
            
        }
        
    }
    
    forn(i,k){
        if (jl[i]>=(2*n))
        {
            sum2 = sum2+ (jl[i]/n);
            if (thr2==0)
            {
                if ((jl[i]/n)>=3)
                {
                thr2=1;
                }
            }            
            
        }
}


    if (sum1>=n &&(thr1||n%2==0))
    {
        out=1;
    }
    else if (sum2>=m &&(thr2||m%2==0))
    {
        out=1;
    }
    
    
    
    if (out)
    {
        cout<<"Yes"<<endl;
    }else
    {
        cout<<"No"<<endl;
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

