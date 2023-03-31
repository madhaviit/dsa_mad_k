#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    bool a[n];
    bool b[n];
    int count1=0,count2=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if (a[i]==1)
        {
            count1++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        if (b[i]==1)
        {
            count2++;
        }
    }
    if (count1>count2)
    {
        for (int i = 0; i < n; i++)
        {
            if (b[i]==1 && a[i]==0)
            {
                cout<<(count1-count2+1)<<endl;
                return;
            }
            
        }
        cout<<(count1-count2)<<endl;
        return;
    }
    if (count1<count2)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i]==1 && b[i]==0)
            {
                cout<<(count2-count1+1)<<endl;
                return;
            }
            
        }
        cout<<(count2-count1)<<endl;
        return;
    }
    if (count1==count2)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i]!=b[i])
            {
                cout<< 1 <<endl;
                return;
            }
            
        }
        cout<<0<<endl;
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