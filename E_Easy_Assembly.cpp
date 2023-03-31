#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef pair<ull,vector<ull>> mad;
#define forn(i, n) for (ull i = 0; i < ull(n); i++)

void solve()
{
    ull n;
    cin>>n;
    ull split=0;
    mad arr[n];
    for (ull i = 0; i < n; i++)
    {
        ull a;
        cin>>arr[i].first;
        for (ull j = 0; j < arr[i].first; j++)
        {
            cin>>a;
            arr[i].second.push_back(a);
        }
        
    }
    for (ull i = 0; i < n; i++)
    {
        
        for (ull j = 1; j < arr[i].first; j++)
        {
           if(((arr[i].second)[j])<((arr[i].second)[j-1])){
                split++;
            
           }
        }
        
    }
    cout<<split<<" "<<split+n-1;
    
}

int main()
{
    
    
    solve();

    return 0;
}