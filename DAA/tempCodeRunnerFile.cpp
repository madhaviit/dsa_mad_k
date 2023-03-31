#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 1; i < int(n); i++)

void solve()
{
    string num;
    cin>>num;
    int k;
    cin>>k;
    int len = num.length();
    
    forn(i,len){
        if (k>0)
        {
            if (int(num[i])>int(num[i-1]))
            {
                num.erase(i-1);
                i=i-1;
                k--;
            }
            
        }
        }
        cout<<num;
}

int main()
{
       
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    solve();

    return 0;
}