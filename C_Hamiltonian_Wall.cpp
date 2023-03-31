#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

bool path(string &ra, string &rb, int col,int n){
    if (col==n-1)
    {
       return 1;
    }
    
    if (ra[col]=='B'&&ra[col+1]=='W'&&rb[col]=='W'&&rb[col+1]=='B')
    {
        return 0;
    }else
    if (ra[col]=='W'&&ra[col+1]=='B'&&rb[col]=='B'&&rb[col+1]=='W')
    {
        return 0;
    }else
    if (rb[col]=='W'&&ra[col+1]=='B'&&rb[col+1]=='B'&&rb[col+2]=='W')
    {
        return 0;
    }else
    if (ra[col]=='W'&&rb[col+1]=='B'&&ra[col+1]=='B'&&ra[col+2]=='W')
    {
        return 0;
    }else if(ra[col]=='B'&&rb[col]=='B'&&ra[col+1]=='B'&&rb[col+1]=='B'){
        ra.erase(col,2);
        rb.erase(col,2);
        return path(rb,ra,col-1,n-2);
    }    
    else{
        return path(ra,rb,col+1,n);
    }
    
}

void solve()
{
    int m;
    cin>>m;
    string ra,rb;
    cin>>ra;
    cin>>rb;
    bool out;
    out=path(ra,rb,0,m);
    if (out)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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