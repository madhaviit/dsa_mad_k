#include<bits/stdc++.h>
using namespace std;

long long int fh(long long int l,long long int h,long long int ky)
{
    long long int mid=(l+h)/2;
    long long int p=(mid*(mid+1))/2;
    long long int q=(mid*(mid-1))/2;
    if(ky<=p && ky>q )
    {
        return mid;
    }
    else if(ky<=q)
    {
        return fh(l,mid-1,ky);
    }
    else
    {
        return fh(mid+1,h,ky);
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int k,x;
        cin>>k>>x;
        if(x>=k*k)
        {
            cout<<2*k-1<<endl;
        }
        else if(x<=(k*(k+1))/2)
        {
          cout<< fh(1,k,x)<<endl; 
        }
        else
        {
            x=k*k-x+1;
            cout<<2*k-fh(1,k-1,x)<<endl;
            
        }
    }
      

}