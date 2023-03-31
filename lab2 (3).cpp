#include <iostream>
using namespace std;

int main()
{
    int mad[7]={1,2,3,4,5,6,7};
    int *p;
    p = mad;
    for (int i = 0; i < 7; i++)
    {
        cout<<*(p+i)<<endl;
    }
    
    
    return 0;
}