#include <iostream>
using namespace std;
int main ()
{
    int a[1000], b[1000], c[1000];
    int A,B,C;
    int u,v,w,z,gcd;
    u=1;
    v=1;
    cin>>A>>B;
        for (int x = 2; x <= A; x++)
        {
            if (A%x==0)
            {
              a[u]=x ;
              cout<<a[u]<<endl;
              u++;
            } 
        }

        for (int y = 2; y <= B; y++)
        {
            if (B%y==0)
            {
              b[v]=y ;
              cout<<b[v]<<endl;
              v++;
            }    
        }

        for (int z = 1; z <=u; z++)
        {
            for (int p = 1; p <= v; p++)
            {
               if (a[z]==b[p])
               {
                  cout<<a[z]<<endl;
                  gcd=a[z];

               }
               
            }
            
        }
       cout<<"gcd is "<<gcd<<endl;
        
        

    
    return 0;
}