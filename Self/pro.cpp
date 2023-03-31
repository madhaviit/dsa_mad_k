#include <iostream>
using namespace std ;
int main ()
{
    int x ;
    int q ;
    int z ;
    cout<<"enter upper limit" ;
    cin>> q;
    cout<< "enter lower limit" ;
    cin>> x;
    int y = 2 ;
    while(x<q-1)
    {
        while (y < x)
        {
            if (x % y == 0)
            {
            x= ++x;
            y=2 ;
            }
             else 
        {
            y= ++y;    
        }
        }
            while(x==y)
        {
           
            cout <<  x <<endl ;
            x = ++ x ;
             y=2;
        }
        }
      cout<< "now enter any integer to quit program window" ;
      cin>> z;
      return 0 ;
}