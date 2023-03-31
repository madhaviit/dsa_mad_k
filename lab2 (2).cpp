#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int *j,*k;
    j = &a;
    k = &b;
    if (*j>=*k)
    {
        cout<<*j;
    }else
    {
        cout<<*k;
    }
    
    
    return 0;
}