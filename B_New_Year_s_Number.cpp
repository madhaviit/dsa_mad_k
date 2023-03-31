#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)
void mark(int n, bool arr[]){
    if (n>1000001)
    {
        return;
    }
    
    if (arr[n]==1)
    {
        return;
    }else
    {
        arr[n]=1;
        mark(n+2020, arr);
        mark(n+2021,arr);
        
    }
    
    
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n=1000001;
    bool arr[n]={0};
    mark(2020,arr);
    mark(2021,arr);
    
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin>>a;
        if (arr[a])
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO\n";
        }
        
        
    }
    
    return 0;
}