#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

ull oddp(ull a){if (a>=2)
{
    ull mad = 2 ;
    while (mad<=a/4)
    {
        mad = mad*4;
    }
    return mad;
}
else
{
    return 0;
}

    
}

int solute(ull n, ull x){
    ull remainder = n;
    if (x>=remainder)
    {
        return 1 ;
    }
    else{
        ull madh = oddp(remainder);
        if (madh==0)
        {
            return INT32_MAX;
        }else
        {   
             remainder = remainder-madh;
             if (remainder==0)
        {
            return 1;
        }else
        {
            return (1 + solute(remainder,x));
        }    
        }
        
        
       
        
        
        
    }
    
}

void solve(){
    ull n,x;
    cin>>n>>x;
    ull count =0;
    count = solute(n,x);
    if (count<INT32_MAX)
    {
        cout<<count<<endl;
    }else
    {
        cout<<-1<<endl;
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

