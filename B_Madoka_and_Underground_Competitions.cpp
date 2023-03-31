#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)


void solve(){
    ull n,k,r,c;
    cin>>n>>k>>r>>c;
    char mad[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mad[i][j]='z';
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mad[i][j]=='z')
            {
                mad[i][j]='X';
                for (int l = 1; l < k; l++)
                {
                    if (j+l>=n)
                    {
                       continue;
                    }else
                    {
                        mad[i][j+l]='.';
                    }
                    
                    
                }
                for (int m = 1; m < k; m++)
                {
                    if (i+m>=n)
                    {
                       continue;
                    }else
                    {
                        mad[i+m][j]='.';
                    }
                    
                    
                }
            }
            
        }
        
    }
    int start;
    for (int i = 0; i < n; i++)
    {
        if ((i+r-1)<n)
        {
            if (mad[i+r-1][c-1]=='X')
        {
            start = i;
        }   
        }
        else
        {
            if (mad[i+r-1-n][c-1]=='X')
        {
            start = i;
        }
        }
        
        
             
        
    }
    for (int i = start; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<mad[i][j];
        }
        cout<<endl;
    }
    for (int i = 0; i <start; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<mad[i][j];
        }
        cout<<endl;
    }
    
    
    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}

