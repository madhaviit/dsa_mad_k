#include<iostream>
using namespace std;
int main()
{
    int t, n, j ;
    cin>>t;
    while (t>0)
    {
        if(t<101)
            {cin>>n ;
                if(n<101)
                    {j=n;
                        while(1<n)
                        {
                             j = j * (n-1) ;
                            n--;
                        }
                        cout<<j<<endl;
                    }
                t--;
            }
    }
    return 0;
}