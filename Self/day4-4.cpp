#include <iostream>
using namespace std;
int main()
{
    int a,hr,min,sec;
    cin>>a;
    hr = (a/3600);
    min = a/60 - (60*hr);
    sec =  a-(60*min) - (3600*hr);
    cout<<a<<" is equivalent to "<<hr<<" hours "<<min<<" minutes "<<sec<<" seconds";
    return 0;
}