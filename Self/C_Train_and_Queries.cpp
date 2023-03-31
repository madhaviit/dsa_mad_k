#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ull dex,que;
        cin>>dex>>que;
        ull mad[dex];
        for (ull i = 0; i < dex; i++)
        {
            cin>>mad[i];
        }
        for (ull i = 0; i < que; i++)
        {
            ull a,b;
            cin>>a>>b;
            for (ull k = 0; k < dex; k++)
            {
                if (mad[k]==a)
                {
                    for (int j = k+1; j < dex; j++)
                    {
                        if (mad[j]==b)
                        {
                            cout<<"YES"<<endl;
                            goto ldpe;
                        }
                        
                    }
                    
                }else
                {
                    continue;
                }
                
                
                
            }
            cout<<"NO"<<endl;
            ldpe:
            continue;            
        }
        
        
        

    }
    return 0;
}