#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string m;
        cin>>m;
        unsigned long long int p = stoi(m);
        int len=m.length();
        unsigned long long int round =1 ;
        for (int i = 0; i < (len-1); i++)
        {
            round = round*10;
        }
        
        cout<<p-round<<endl;
    }
    
    return 0;
}