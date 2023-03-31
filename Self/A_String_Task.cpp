#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string inp;
    char a,e,i,o,u,y;
    int j=4*inp.size();
    char op[j];
    cin>>inp;
    transform(inp.begin(), inp.end(), inp.begin(), ::tolower);
    cout<<inp;
    for (int i = 0; i <= j; i++)
    {
        op[i]=inp[i];
    }
    for (int p = 0; p <= 2*j; p++)
    {
        if (op[p]==a ||op[p]==e ||op[p]==i ||op[p]==o ||op[p]==u ||op[p]==y)
        {
            break;
        }
        else
        {
            cout<<'.'<<op[p];
        }
        
    }
    
    return 0 ;
}