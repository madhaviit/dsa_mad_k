#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[1000]={1};
        int carry=0;
        int m=0;
        
        for(int i=1;i<=n;i++)
        {
            
            for(int j=0;j<=m;j++)
            {
                a[j]=a[j]*i + carry;
                carry=a[j]/10;
                a[j]=a[j]%10;
            }
            while(carry>0)
            {
                m++;                
                a[m]=carry%10;
                carry/=10;
            }
        }
        for(int i=m;i>=0;i--)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    
    return 0;
}
