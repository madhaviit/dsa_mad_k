#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int x,y;
    cin>>x>>y;
    
    if ((x+y)%2==1)
    {
        cout<<-1<<" "<<-1<<endl;
    }else
    {
        int mad=(x+y)/2;
        if (x>y)
        {
            cout<<mad-y<<" "<<y<<endl;
        }else
        {
            cout<<x<<" "<<mad-x<<endl;
        }
        
        
        
        
    }
    
    

}
    

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}