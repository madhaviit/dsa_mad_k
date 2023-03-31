#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int *p = &a;
    int fact=1;
    for (int i = 0; i < *p; i++)
    {
        fact=fact*(i+1);
    }
    cout<<fact;
    
 
}