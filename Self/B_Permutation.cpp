#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    cout<<2<<endl;
    vector<pair<int,bool>>mad;
    vector<int>out;
    for (int i = 0; i < n; i++)
    {
        mad.push_back(make_pair(i,false));
    }
    for (int i = 1; i < n+1; i++)
    {
        if (!mad[i-1].second)
        {
            for (int j = i+1; j < n+1  ; j++)
            {
                out.push_back(j);
                mad[j-1].second=true;
                j = j*2;
            }
            
        }
        else
        {
            continue;
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<out[i]<<" ";
    }
    cout<<endl;  

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