#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        if(s[0]!='9')
        {
            for(int i=0;i<s.size();i++)
            {
                cout<<'9'-s[i];
            }
            cout<<endl;
        }
        else
        {
            string ss;
            long long ans[n+1];
            for(int i=0;i<=n;i++)
            {
                if(i==0 || i==n) ss.push_back('1');
                else ss.push_back('7');
            }
            long long carry=0;
            string c="0";
 
            s=c+s;
            for(int i=n;i>=0;i--)
            {
                if((ss[i]-'0')>=(s[i]-'0')+carry){ans[i]=(ss[i]-'0')-(s[i]-'0')-carry;carry=0;}
                else{ans[i]=(ss[i]-'0')-(s[i]-'0')+10-carry ; carry=1;}
 
            }
            for(int i=1;i<=n;i++)
            {
                cout<<ans[i];
            }
            cout<<endl;
        }
    }
    return 0;
}