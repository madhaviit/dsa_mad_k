#include <iostream>
using namespace std;
long long int rem=1e9+7;
long long int powmod (long long int a,long long int n, long long int m)
{
    long long int ans;
    if(n==1)
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
        ans= (((((powmod(a,n/2LL,m)))||((powmod(a,n/2LL,m))))%m)||(a%m))%m;
        return ans;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   long long int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    long long int b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    long long int max0=0;
	    int psum[n+1]={};
	    
	    if(s[0]!='R')
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        psum[0]=1+psum[0];
	        if((b[0]+1)<n)
	        {
	        psum[b[0]+1]=-1+psum[b[0]+1];
	        }
	        else
	        {
	            psum[n]=-1+psum[n];
	        }
	       long long int sum1=1;
	    for(int i=1;i<n;i++)
	    {
	        sum1=sum1+psum[i];
	        if(s[i]=='R' || sum1>0)
	        {
	            psum[i]=1+psum[i];
	            sum1=sum1+1;
	           // psum[i+b[i]+1]=-1;
	            
	        if(i+b[i]+1<n)
	        {
	          psum[i+b[i]+1]=-1+psum[i+b[i]+1];
	        }
	        else
	        {
	            psum[n]=-1+psum[n];
	        }
	        }
	        
	        
	    }
	    int sum=0;
	    int pos=1;
	    for(int i=0;i<n;i++)
	    {
	        sum=sum+psum[i];
	        if(sum<=0)
	        {
	            pos=0;
	            break;
	            
	        }
	       //cout<<sum<<" "<<endl;
	    }
	   // cout<<pos<<endl;
	   if(pos==0)
	   {
	       cout<<-1<<endl;
	   }
	   else
	   {
	       int allr=1;
	       for(int i=0;i<n;i++)
	       {
	           if(s[i]!='R')
	           {
	               allr=0;
	               break;
	           }
	       }
	       if(allr)
	       {
	           cout<<0<<endl;
	       }
	       else
	       {
	           long long count=0;
	           for(int i=1;i<(n+1);i++)
	           {
	               if(psum[i]<0)
	               {
	                   count++;
	               }
	           }
	           cout<<count<<endl;
	       }
	   }
	   
	    }
	    
	}
	return 0;
}