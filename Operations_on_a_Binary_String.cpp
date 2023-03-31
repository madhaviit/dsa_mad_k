#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)


void solve(){
   ll n,x;
   cin>>n>>x;
   string mad;
   cin>>mad;
   vector<ll>noz;
   int totz=0;
   forn(i,n){
        int cal = 0 ;
        if (mad[i]=='0')
        {
            
            while (mad[i]=='0'&& i!=n)
            {
                i++;
                cal++;
                totz++;
            }
            noz.push_back(cal);

        }
        
   }
   sort(noz.begin(),noz.end());
   int change=0;
   int cost=0;
   for (int i = (noz.size()-1); i >=0; i--)
   {
         if(x>=3){
         if (x>=((2*noz[i])+1))
         {
             change=change+noz[i];
             x=x-(2*noz[i])-1;
         }else
         {
             int newcg = (x-1)/2;
             change = change+newcg;
             x = x-(2*newcg)-1;
         }
    
         }

        // if ((cost+(noz[i]*2)+1)<=x)
        // {
        //     change=change+noz[i];
        //     cost = cost + (noz[i]*2)+1; 
        // }else
        // {   if(x>=3){
        //     int newcg = ((x-cost)+((x-cost)%2)-2)/2;
        //     change = change+newcg;}
        // }
        
        
   }
   cout<<(n-totz+change)<<endl;
   
    
    
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

