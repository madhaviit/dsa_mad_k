#include <iostream>
using namespace std;
int main() 
{
    int t,a,b ;
    cin>>t;
    while(t>0)
    {
        cin>>a>>b;
        if(t<1001 && 0<a,b<10001)
        {
            cout<<endl<<a%b;
        }
        --t;
    }
   
   return 0;
}