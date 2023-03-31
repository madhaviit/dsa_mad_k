#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int count=0;
    int i=0;
    int l1,l2,l3;
    while (i<s.size())
    {
        count++;
        l1=i;
        i++;
        mad:
        if (s[i]==s[l1])
        {
            i++;
            goto mad;
        }
        else
        {
           l2=i;
           i++; 
        }
        nbe:
        if (s[i]==s[l1]||s[i]==s[l2])
        {
            i++;
            goto nbe;
        }
        else
        {
            l3=i;
            i++;
        }
        ocf:
        if (s[i]==s[l1]||s[i]==s[l2]||s[i]==s[l3])
        {
            i++;
            goto ocf;
        }
    }
    cout<<count<<endl;   
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