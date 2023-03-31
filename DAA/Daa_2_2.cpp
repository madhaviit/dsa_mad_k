#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

string getNice(string a){
    if (a.size()==1)
    {
        return "";
    }
    
    for (int i = 0; i < a.size(); i++)
    {
        char c = a[i];
        int find;
        if (int(c)<95)
        {
            find = int(c)+32;
        }else
        {
            find = int(c)-32;
        }
        for (int j = 0; j < a.size(); j++)
        {
            if (int(a[j])==find)
            {
                goto madhav;
            }
            
        }
        if (i==0)
        {
            return getNice(a.substr(1,a.size()-1));
        }else if (i==(a.size()-1))
        {
            return getNice(a.substr(0,a.size()-1));
        }else
        {
            string ma1=getNice(a.substr(0,i));
            string ma2=getNice(a.substr(i+1,a.size()-i-1));
            if (ma1.size()>ma2.size()) 
            {
                return ma1;
            }else
            {
                return ma2;
            }
            
            
        }
        
        
        
        madhav:
        continue;      
        
    }
    return a; 
}


void solve()
{
    string mad;
    cin>>mad;
    cout<<getNice(mad);
    


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