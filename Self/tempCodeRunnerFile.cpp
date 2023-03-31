#include <iostream>
using namespace std;
int increment(int x)
{
    x = x+1;
    return x;
}
int main ()
{
    int a ;
    cin>>a;
    a = increment(a);
    cout<<a;
}
