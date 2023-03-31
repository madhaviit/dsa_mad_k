#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int result=0;
	    vector<int> st_len;
	    for(long long int i=0;i<n;i++)
	    {
	        long long int s;
	        cin>>s;
	       // cout<<s<<" ";
	        long long int a[s];
	        long long int cost=0;
	        for(long long int i=0;i<s;i++)
	        {
	            cin>>a[i];
	            
	        }
	       // for(long long int i=0;i<s;i++)
	       // {
	       //     cout<<a[i]<<" ";
	            
	       // }
	        
	       
	        long long int start=0;
	        for(long long int i=1;i<s;i++)
	        {
	            if(a[i]<a[i-1])
	            {
	                cost=cost+min(i-start,s-i);
	               // cout<<min(i-start,s-i)<<" ";
	               // cout<<"test";
	               // cout<<cost<<"|";
	                long long int len=i-start;
	                st_len.push_back(len);
	                start=i;
	                
	            }
	            if(i==s-1)
	            {
	                long long int len=i-start+1;
	                st_len.push_back(len);
	            }
	            
	        }
            long long int cost1 =cost;
	        result=result+cost;
	        if(s==1)
	        {
	             st_len.push_back(1);
	        }
	       // long long int vlen=st_len.size();
	       // sort(st_len.begin(),st_len.end());
	       // for(long long int i=0;i<vlen;i++)
	       // {
	       //     if(i==0 || i==1)
	       //     {
	       //         cost=cost+(vlen-1)*st_len[i].second;
	       //     }
	       //     else
	       //     {
	       //          cost=cost+(vlen-i)*st_len[i].second;
	       //     }
	        }
	       // cout<<result;
	        long long int vlen=st_len.size();
	        sort(st_len.begin(),st_len.end());
	       //  for(long long int i=0;i<vlen;i++)
	       //  {
	       //      cout<<st_len[i]<<" ";
	       //  }
	        
	        for(long long int i=0;i<vlen;i++)
	        {
	            if(i==0 || i==1)
	            {
	                result=result+(vlen-1)*st_len[i];
	            }
	            else
	            {
	                 result=result+(vlen-i)*st_len[i];
	            }
	        }
	        cout<<result<<endl;
	        
	    }
	   // cout<<result<<endl;
	
	


	return 0;
}