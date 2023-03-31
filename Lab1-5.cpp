#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)
void solve(){  
    int size;
    cin>>size;
    int temp;
    int mad[size];
    for (int i = 0; i < size; i++)
    {
        cin>>mad[i];
    }
    for (int i = 0; i < size/2; i++)
    {
        temp = mad[i];
        mad[i]= mad[size-i-1];
        mad[size-i-1]=temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<mad[i]<<" ";
    }
    
    
    
}

int main(){
    solve();
    return 0;
}





