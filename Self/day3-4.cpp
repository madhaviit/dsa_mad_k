#include<bits/stdc++.h>
using namespace std;
int main()
{
    int decimal;
    cin>>decimal;
    vector<int> bin;
    int remainder = 0;
    while (decimal>0)
    {
        remainder = decimal%2;
        bin.push_back(remainder);
        if (decimal%2==0)
        {
            decimal=decimal/2;
        }else
        {
            decimal = (decimal-1)/2;
        }
        
        
    }
    for (int i = 0; i < bin.size(); i++)
    {
        cout<<bin[bin.size()-i-1];
    }
    
    return 0;
}