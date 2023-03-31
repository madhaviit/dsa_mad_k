#include <bits/stdc++.h>
using namespace std;
int GCD (long int A,long int B)
{
    int a[100], b[100];
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
    int n,t,r;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        if (n%2==0)
        {
            cout<<n-3<<" "<<2<<" "<<1<<endl;
        }
        else if (n%2==1)
        {
            if ((n-1)%10==0)
            {

                 for (int q =n-3; q >0; q--)
                     {
                        for (int w = n-2; w>0; w--)
                        {
                                    r = GCD(q,w);
                                        if (r+q+w==n && r!=q && q!=w && w!=r)
                                    {
                                                cout<<w<<" "<<q<<" "<<r<<endl;  
                                                goto MAD;          
                                    }
               
                        }
            
                     }
            }
            else
            {
                cout<<n-6<<" "<<5<<" "<<1<<endl;
            }
            
            
        }
        
        
       
        
    MAD :;}
    return 0;
}