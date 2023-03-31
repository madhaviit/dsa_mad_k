#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    
    string mad;
    cin>>mad;
    if(n%3==2){
        cout<<"NO"<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (i%3==1 && (char(mad[i])!=char(mad[1+i])) )
        {
           
            
               cout<<"NO"<<endl;
               return;
            
            
        }
        
        
    }
    cout<<"YES"<<endl;
    return;
    

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