#include <iostream>
using namespace std;
int GCD (int A, int B)
{
    int a[1000], b[1000];
    int u,v,x,y,z,p,gcd; u=0; v=0;
        for (x = 1; x <= A; x++)
        {
            if (A%x==0)
            {
              a[u]=x ;
              u++;
            } 
        }

        for (y = 1; y <= B; y++)
        {
            if (B%y==0)
            {
              b[v]=y ;
              v++;
            }    
        }

        for (z = 0; z <u; z++)
        {
            for (p = 0; p < v; p++)
            {
               if (a[z]==b[p])
               {
                   gcd=a[z];
                }
                if (gcd==(-1))
                {
                    gcd=1;
                }
                
               
            }
            
        }
       
    return gcd;}


int main ()
{
    int A,B,gcd,k;
    cin>>A>>B;
    gcd=GCD(A,B);
    cout<<gcd;
    return 0;
}