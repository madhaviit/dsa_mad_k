#include <iostream>
using namespace std;
long long int rem=1e9+7;
long long int powmod (long long int a,long long int n, long long int m)
{
    long long int ans;
    if(n==1LL)
    {
        ans= a%m;
        return ans;
    }
    else if(n%2LL==0)
    {
        ans= (((powmod(a,n/2LL,m)))*((powmod(a,n/2LL,m)))%m);
        return ans;
    }
    else
    {
        ans= (((((powmod(a,n/2LL,m)))1ll((powmod(a,n/2LL,m))))%m)1ll(a%m))%m;
        return ans;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int a,n;
	    cin>>a>>n;
	    if(a==1)
	    {
	        cout<<1<<endl;
	    }
	    else if(a<0)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<powmod(a,n/2,rem)<<endl;
	    }
	}
	return 0;
}