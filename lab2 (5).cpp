#include <bits/stdc++.h>
using namespace std;

int main()
{
    string mad;
    cin>>mad;
    char *p = &mad[0];
    int i=0;
    while (*(p+i)!='\0')
    {
        i++;
    }
    cout<<i;
    
    return 0;
 
}