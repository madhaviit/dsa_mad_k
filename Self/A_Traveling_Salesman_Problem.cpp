#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    ull n;
    cin>>n;
    int xpos=0;
    int xneg=0;
    int ypos=0;
    int yneg=0;
    forn(i,n){
        int a,b;
        cin>>a;
        cin>>b;
        if (a>0&&b==0)
        {
            if (a>xpos)
            {
                xpos=a;
            }
            
        }else if (a==0 && b>0)
        {
            if (b>ypos)
            {
                ypos=b;
            }
        }else if (a==0&&b<0)
        {
            if (b<yneg)
            {
                yneg=b;
            }
        }else if (a<0 && b==0)
        {
            if (a<xneg)
            {
                xneg=a;
            }
        }
                
}
cout<<2*xpos+2*ypos-2*xneg-2*yneg<<endl;
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