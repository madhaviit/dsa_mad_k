#include<iostream>
using namespace std;

int main(){
    int n;
    int q;
    cin>>n>>q;
    unsigned long long int arr[n];
    unsigned long long int sum=0;
    for (unsigned long long int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    int mad=0;
    for (unsigned long long int j = 0; j < q; j++)
    {
        int t;
        cin>>t;
        unsigned long long temp;
        if (t==1)
        {
            int p,s;
            cin>>p>>s;
            if (mad==0)
            {
                sum=sum-arr[p-1]+s;
                arr[p-1]=s;
            }
            if (mad==1)
            {
                sum=sum-temp+s;
                arr[p-1]=s;  
                mad=0;              
            }
            
            
            
        }else if (t==2)
        {
            unsigned long long int r;
            cin>>r;
            temp=r;
            
            sum=n*r;
            if (mad==1)
            {
                for (unsigned long long int i = 0; i < n; i++)
                {
                    arr[i]=r;
                }
                mad=0;
            }else
            {
                mad=1;
            }
            
            
                
                            
        }       
        cout<<sum<<endl;
    }
    return 0;
}