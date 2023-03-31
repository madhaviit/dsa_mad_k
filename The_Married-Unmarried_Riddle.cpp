#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length();
	    string ans="No";
	    for(int i=1;i<n;i++)
	    {
	        if(s[i]=='U' && s[i-1]=='M')
	        {
	            ans="Yes";
	            break;
	        }
	        else if(s[i]=='?' && s[i-1]=='M' )
	        {
	            while(i<n && s[i]=='?' )
				{
					i++;
				}
				if(s[i]=='U')
				{
					ans="Yes";
	                break;
				}
	        }
			if(ans=="Yes")
			{
				break;
			}
	    }
	    cout<<ans<<endl;
	}


	return 0;
}