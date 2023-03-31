#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,ans=0;
    cin>>n>>m;
    unsigned int a[m];

    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    ans=a[0]-1;
    for(int i=1; i<m; i++){
        if(a[i]>=a[i-1]){
            ans+=a[i]-a[i-1];
        }
        else{
            ans+=a[i]+n-a[i-1];
        }
    }

    cout<<ans;
    
    return 0;
}