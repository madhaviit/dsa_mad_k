#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)
void solve(){
    int size;
    cin>>size;
    int mad[size];
    forn(i,size){
        cin>>mad[i];
    }//123456789
    
    int key; bool find=false;
    
    cin>>key;//7 ans==6
    int index;
    int up=size-1;
    int lb=0;
    index=up/2;
    
    
    while (key!=mad[index])
    {
        if (key>mad[index])
        {
            up=index+((up-lb)/2);
            lb=index;   
        }else if (key<mad[index])
        {
            
            lb=index-((up-lb)/2);
            up=index;
        }
        index=(up+lb)/2;
    }
    cout<<index<<endl;
    
}

int main(){
    int t;
    while (t--)
    {
       solve(); 
    }
    
    
    return 0;
}





