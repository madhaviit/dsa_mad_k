#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];

    map<int,int> m;

    for(int i=0; i<n; i++){
        cin>>a[i];
        m[a[i]]=i+1;
    }

    for(auto it=m.begin(); it!=m.end(); it++){
        cout<<(it->second)<<" ";
    }
    // for(int i=1; i<=n; i++){
    //     cout<<m[i]<<" ";
    // }
    
    return 0;
}