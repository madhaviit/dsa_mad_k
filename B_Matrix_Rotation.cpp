#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int mad[2][2];
    cin>>mad[0][0]>>mad[0][1]>>mad[1][0]>>mad[1][1];
    for (int i = 0; i < 4; i++)
    {
        if (mad[0][0]<mad[0][1]&&mad[0][0]<mad[1][0]&&mad[1][1]>mad[1][0]&&mad[1][1]>mad[0][1])
        {
            cout<<"YES"<<endl;return;
        }else
        {
            int a =mad[0][0];
            mad[0][0]=mad[1][0];
            mad[1][0]=mad[1][1];
            mad[1][1]=mad[0][1];
            mad[0][1]=a;
        }
        
        
    }
    cout<<"NO"<<endl;
   
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
     int t;
     cin >> t;
     while (t--)
     {
         solve();
     }
return 0;
    solve();

    
}