#include<bits/stdc++.h>
using namespace std;







void solve(){
    string n;
        cin>>n;
        int len = n.length();
        if (len==2)
        {
            cout<<n[1]<<endl;
        }else
        {
        int min=100;
        for (int i = 0; i < len; i++)
        {
            if (n[i]<min)
            {
                min=n[i];
            }
            
        }
        cout<<min-48<<endl;
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