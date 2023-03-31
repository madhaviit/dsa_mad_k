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
    int l=1;
    for (int i = 0; i < len-l; i++)
    {
        mad:
        if (k>0)
        {
            
            if (int(num[i])>int(num[i+1]))
            {
                //for debugging
                //cout<<"YES "<<i<<" ";
                num.erase(num.begin()+i);
                k--;
                l++;
                if(i>0){
                    i--;
                }
                goto mad;
            }
            
        }

        
    }
    while(k>0){
        num.pop_back();
        k--;       
        
    }
    cout<<stoi(num)<<endl;
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