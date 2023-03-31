#include <bits/stdc++.h>
#include <math.h>
using namespace std ;
int main()
{
    int ao,bo,co;
    string inp1,inp2;
    cin>>inp1>>inp2;
    ao = inp1.size();
    bo = inp2.size();
    if (ao>bo)
    {
        co = bo ;
    }
    else
    {
        co = ao ;
    }
    
    
    for (int i = 0; i < co ; i++)
    {
        int a = inp1[i];
        int b = inp2[i];
        if (a==b)
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
        
    }
    
}