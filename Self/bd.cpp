#include <iostream>
using namespace std;
int main() 
{
   int q,a,b,c,d,t,n ;
   int z,x,v,u,r;
   cin >> t ;
   if (t>1000)
   {
      t=0;
   }
   
   while (t>0)
   {
      cin>> n ; // 987654 
      if (0<n<=999999)
      {
         q = n % 100000 ; // 87654 
         a = n % 10000 ; // 7654 
         b = n % 1000 ;// 654
         c = n % 100 ;// 54
         d = n % 10 ;// 4
         z = n/100000;x=q/10000; v = a/1000; u=b/100; r = c/ 10;
         cout<< z+x+v+u+r+d<<endl ;
      }
      if (n==1000000)
      {
      cout<<1<<endl;
      }
      --t;
   }
   return 0;
}