#include <iostream>
#include <cmath>
using namespace std;
int digitsum(string x)
{
    int sum = 0;
    for (int i = 0; i < x.length(); i++) {
        sum = sum + x[i] - 48;
    }
    return sum;
}
int main() 
{
    int t;
    while (t--)
    {
        string x;
        int s;
        cin>>x>>s;
        unsigned long long int p = stoi(x);
        int adhik = digitsum(x);
        int diff = adhik-s;
        if (diff<=0)
        {
           cout<<0;
        }
        else {
            int len = x.length();
            for (int i = 1; i < len; i++)
            {
                int resu = 0;
                for (int q = 0; q < i; q++)
                {
                    resu = resu + x[len-1-q];
                }
                if (resu<diff)
                {
                    continue;
                }
                else if (resu == diff && x[len-i-1]!=0)
                {
                    unsigned long long int aim = pow(10,(len-i+1));
                    cout<<aim-p;
                }
                else if (resu == diff && x[len-i-1]==0)
                {
                    unsigned long long int aim = pow(10,(len-i+2));
                    cout<<aim-p;
                }
                else if (resu == diff+1)
                {
                    unsigned long long int aim = pow(10,(len))
                }
                
                
                
                
            }
            
            
            
        }
        
        
        
        
        
        



    }
    
}