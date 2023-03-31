#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int *j,*k;
    j = &a;
    k = &b;
    cout<<*j+*k;
    return 0;

}
