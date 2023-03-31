#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)


void solve(){
    int n;
    cin>>n;
    int mad[n];
    int max=0,min=1000,maxin=0,minin=0;
    forn(i,n){
        cin>>mad[i];
        if (mad[i]>=max)
        {
            max=mad[i];
            maxin=i;
        }
        if (mad[i]<=min)
        {
            min=mad[i];
            minin=i;
        }
        
        
    }
    vector <int> dad;
    dad.push_back(mad[n-1]-mad[0]);
    for (int i = 0; i < (n-1); i++)
    {
        dad.push_back(mad[i]-mad[i+1]);
    }
    dad.push_back(mad[n-1]-min);
        dad.push_back(max-mad[0]);
    
    sort(dad.begin(),dad.end());
    cout<<dad[dad.size()-1]<<endl;
    
    
    
    
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

