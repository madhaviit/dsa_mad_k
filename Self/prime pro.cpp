#include <iostream>
using namespace std ;
int main ()
{
    int x ;
    cin>> x;
    int y = 2 ;
    while (x>y )
    if (x % y == 0)
    {
        cout<< x++ << " is being increased " << endl;
        y=2 ;
        
    }
    else 
    {
     y= ++y;    
   
    }
    while (x==y)
   { x = ++x ;
    cout<< --x << " is a prime number nearest to and greater than or equal to input. " << endl;
    x = ++x ;}
   
    int z ;
    cout<< "thanks to madhav you found your answer, now enter any integer to quit program window" ;
    cin>> z ;
    return 0 ;
}