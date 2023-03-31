#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve()
{
    int n;
    cin>>n;
    int mad[n][n];
    int x=n*n;

    bool fill=0;
    for (int j = 0; j < n; j++)
    {
        int k=j;
        
        if (j%2==0)
        {
            for (int i = 0; i < n; i++)
            {
                mad[i][k%n]=1+(j/2)*n+i;
                k++;
            }
            
            

        }else
        {
            
            for (int i = 0; i < n; i++)
            {
                mad[i][k%n]=x-((j-1)/2)*n-i;
                k++;
            }
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<mad[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    
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
}