#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)
void solve(){
    int size;
    int max1=INT_MIN,max2=INT_MIN;
    cin>>size;
    int mad[size];
    forn(i,size){
        cin>>mad[i];
        if (mad[i]>=max1 )
        {
            max2=max1;
            max1=mad[i];
            
        }
        else if (mad[i]>=max2 && mad[i]<=max1)
        {
            max2=mad[i];
        }
        
        
    }
    cout<<"second largest element is "<<max2<<endl;
    
    
}

int main(){
    solve();
    return 0;
}





