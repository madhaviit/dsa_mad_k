#include <iostream>
using namespace std;
int gcd(int x,int y)
{
   for (int i = min(x,y); i > 0; i--)
   {
       if (y%i==0 && x%i==0)
       {
           return i;
       }
       
   }
   
}


int main ()
{
    int x,y,z;
    cin>>x>>y;
    z = gcd(x,y);
    cout<<z;
    return 0;
}