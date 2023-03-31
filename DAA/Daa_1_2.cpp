#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)
//other simple apprach is to just merge two arrays and get the median
int median(int a[],int x, int n){
    int sa= n-x;
    if (sa%2)
    {
        return (a[((sa/2)+1)+x]);
    }else
    {
        return ((a[(sa/2)+x]+a[(sa/2)+1+x])/2);
    }    
}

int med(int a[], int b[], int x, int y, int n, int m, int &mi){
    int med1= median(a,x,n);
    int med2= median(b,y,m);
    if (mi==0)
    {
        return 0;
    }
    
    if (med1<med2)
    {
        mi=mi-(n-x)/2;
        med(a,b,(n-x)/2,y,n,m,mi);
    }
    if (med1>med2)
    {
        mi=mi-(n-y)/2;
        med(a,b,x,(n-y)/2,n,m,mi);
    }  
    
}

void solve()
{
    int n,m;
    int mi=0;
    mi=((n+m)/2)+1;
    
    
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    med(a,b,0,0,n,m,mi);
    
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