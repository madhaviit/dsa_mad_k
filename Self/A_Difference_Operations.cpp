#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

void solve(){
    ull n;
    cin>>n;
    ull mad[n];
    bool madp=true;
    for (int i = 0; i < n; i++)
    {
        cin>>mad[i];        
    }
    for (int i = 1; i < n; i++)
    {
            if (mad[i]%mad[0]==0)
            {
                continue;
            }
            else
            {
                madp =0;
                break;
            }
    }
    if (madp)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    
    
}

int main(){
    ull p=1;
ull sum=1;
cout<<"{";
while (p<pow(10,10))
{
    cout<<sum<<",";
    p++;
    sum=p+sum;
    
}
cout<<"}";
    
    return 0;
}