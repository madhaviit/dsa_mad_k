#include <bits/stdc++.h>
using namespace std;

int main()
{
    string mad;
    cin>>mad;
    char *p = &mad[0];
    int i=0;
    while (*p!='\0')
    {
        *p++;
    }
    *p--;
    while (*p!='\0')
    {
        cout<<*p;
        *p--;
    }
    
    
    return 0;
 
}