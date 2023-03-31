#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n;
    cin>>n;
    int ht[n];
    forn(i,n){
        cin>>ht[i];
    }
    int max = 0;
    int a=0,b=0;
    for (int i = 0; i < n; i++)
    {
        int n1 = (i-a)*min(ht[a],ht[i]);
        int n2 = (i-b)*min(ht[b],ht[i]);
        if(n1>=max && n1>=n2){
            b=i;
            max=n1;
        }else if(n2>max && n2>n1){
            a=b;
            b=i;
            max=n2;
        }
    }
    cout<<max<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    solve();

    return 0;
}