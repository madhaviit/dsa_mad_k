#include <iostream>
using namespace std;
int main() 
{
    float x = 0 ; 
    float y = 1 ;
    float q ;
    int z ;
    cout<< "enter upper limit" ;
    cin>>  q;
    while (x<q)
    {
        if (x <= y)
        {
             x = x+y ;
            cout<<y<< endl;
          
        }
        else
        {
            cout << x << endl;
            y= x +y ;
        }
        
    }
    cout << "thanks for using fibonacci programm, enter any integer to quit program" ; 
    cin>>z ;
   return 0;
}