#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)


void solve(){
    int size;
    int max=INT_MIN,min=INT_MAX;
    cin>>size;
    int mad[size];
    forn(i,size){
        cin>>mad[i];
        if (mad[i]>=max )
        {
            max=mad[i];
            
        }
        if (mad[i]<=min)
        {
            min=mad[i];
        }
        
        
        
    }
    cout<<"max element is "<<max<<" and min element is "<<min<<endl;
    
    
}

int main(){
    solve();
    return 0;
}





