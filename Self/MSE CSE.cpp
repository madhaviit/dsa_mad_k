#include <iostream>
using namespace std;

int main ()
{
    for (int p = 0; p < 100; p++)
    {
        int j = p%5 ;
        if (j==0)
        {
           break; 
        }
        cout<<p;       
    }
    
    
    return 0;
}