#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
   
   float a,b,c;
   cin>>a>>b>>c;
   float det =  sqrt((b*b)-(4*a*c));
   float roott1,roott2;
   roott1 = (det - b)/2*a;
   roott2 = (0-det-b)/2*a;
   cout<<roott1<<" "<<roott2<<endl;
   
   return 0;
}