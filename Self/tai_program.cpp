#include <bits/stdc++.h>
using namespace std;
string encrypt(string enc, int key){
    int len = enc.size();
    
    for (int i = 0; i < len; i++)
    {
        int olkey = int(enc[i]);
        int added = olkey+key;
        if (64<olkey&&olkey<91)
        {
            if (added>90)
            {
                enc[i]=char(added-26);
            }
            else
            {
                enc[i]=char(added);
            }
            
            
        }else if (96<olkey&&olkey<123)
        {
            if (added>122)
            {
                enc[i]=char(added-26);
            }
            else
            {
                enc[i]=char(added);
            }
        }
        else
        {
            continue;
        }        
    }
    cout<<enc<<endl;
    return enc;
    
}
string decrypt(string enc, int key){
    int len = enc.size();
    
    for (int i = 0; i < len; i++)
    {
        int olkey = int(enc[i]);
        int added = olkey-key;
        if (64<olkey&&olkey<91)
        {
            if (added<65)
            {
                enc[i]=char(added+26);
            }
            else
            {
                enc[i]=char(added);
            }
            
            
        }else if (96<olkey&&olkey<123)
        {
            if (added<97)
            {
                enc[i]=char(added+26);
            }
            else
            {
                enc[i]=char(added);
            }
        }
        else
        {
            continue;
        }        
    }
    cout<<enc<<endl;
    return enc;
    
}
void solve(){
    string name;
    getline(cin,name);
    int key;
    cin>>key;
    name=encrypt(name,key);
    name=decrypt(name,key);
}
int main() 
{
    solve();
    return 0;
}