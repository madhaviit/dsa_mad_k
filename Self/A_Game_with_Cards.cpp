#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n;
         int alice[n];
         int ta,tb;
         ta=0; tb=0;
         for (int i = 0; i < n; i++)
         {
             cin>>alice[i];
             if (alice[i]>ta)
             {
                 ta=alice[i];
             }
             
         }
        cin>>m;
        int bob[m];
        for (int i = 0; i < m; i++)
        {
            cin>>bob[i];
             if (bob[i]>tb)
             {
                 tb=bob[i];
             }
        }
        if (ta==tb)
        {
            cout<<"Alice"<<endl;
            cout<<"Bob"<<endl;
        }else if (ta>tb)
        {
             cout<<"Alice"<<endl;
              cout<<"Alice"<<endl;
        }else if (ta<tb)
        {
            cout<<"Bob"<<endl;
            cout<<"Bob"<<endl;
        }         
    }   
    return 0;
}