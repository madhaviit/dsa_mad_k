#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    if(a>b)
	    {
	        if(b==n/2 && a==b+1)
	        {
	            for(int i=0;i<n/2;i++)
	            {
	                cout<<b+1+i<<" ";
	            }
	             for(int i=0;i<n/2;i++)
	            {
	                cout<<1+i<<" ";
	            }
	            cout<<endl;
	            
	        }
	        else
	        {
	            cout<<-1<<endl;
	        }
	    }
	    else
	    {
	        	    
	    int h1=a-1;
	    int both=b-a-1;
	    int h2=n-b;

	    
	    if(min(h1,h2)+both <(n/2)-1)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	       	 int arr1h[n/2],arr2h[n/2];
	       	 if(h1<h2)
	       	 {
	       	     int temp=b;
	       	     for(int i=0;i<n-b;i++)
	       	     {
	       	         arr1h[i]=b+1+i;
	       	     }
	       	     for(int i=n-b;i<(n/2);i++)
	       	     {
	       	         
	       	         arr1h[i]=a+i;
	       	         temp=a+i+1;
	       	     }
	       	      for(int i=0;i<a-1;i++)
	       	     {
	       	         arr2h[i]=1+i;
	       	     }
	       	     int k=0;
	       	     for(int i=temp;i<=b;i++)
	       	     {
	       	         arr2h[a-1+k]=i;
	       	         k++;
	       	     }
	       	     for(int i=0;i<n/2;i++)
	       	     {
	       	         cout<<arr1h[i]<<" ";
	       	     }
	       	       for(int i=0;i<n/2;i++)
	       	     {
	       	         cout<<arr2h[i]<<" ";
	       	     }
	       	     cout<<endl;
	       	 
	       	 }
	       	 else
	       	 {
	       	     int temp=a;
	       	     for(int i=0;i<a-1;i++)
	       	     {
	       	         arr2h[i]=1+i;
	       	     }
	       	     
	       	     for(int i=a-1;i<n/2;i++)
	       	     {
	       	         arr2h[i]=b-(i-a+1);
	       	         temp=b-(i-a+1);
	       	     }
	       	      for(int i=0;i<n-b;i++)
	       	     {
	       	         arr1h[i]=b+1+i;
	       	     }
	       	     int k=0;
	       	     
	       	     for(int i=temp-1;i>=a;i--)
	       	     {
	       	        arr1h[n-b+k]=i; 
	       	        k++;
	       	     }
	       	     for(int i=0;i<n/2;i++)
	       	     {
	       	         cout<<arr1h[i]<<" ";
	       	     }
	       	       for(int i=0;i<n/2;i++)
	       	     {
	       	         cout<<arr2h[i]<<" ";
	       	     }
	       	     cout<<endl;
	       	     
	       	     
	       	     
	       	     
	       	 }
	    }
	    }
	        
	    

	}
	

	
	   
	
	
	return 0;
}