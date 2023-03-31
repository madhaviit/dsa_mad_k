# include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
int ans(int l,int r,int k)
{
    
    int p=a[l];
    if(l==k)
    {
        return p;
    }
    
    int li=l+1;
    int ri=r;
    int cur;
    while(ri>-1 && a[ri]>p )
        {
            
            ri--;
            cur=ri;
        }
        while(li<n && a[li]<=p)
        {
            li++;
        }
       
    while(ri-li>=1)
    {
        int t=a[ri];
        a[ri]=a[li];
        a[li]=t;
        cur=li;
        li++;
        ri--;
        while(ri>-1 && a[ri]>p )
        {
            
            ri--;
        }
        while(li<n && a[li]<=p)
        {
            li++;
        }
        
    }
    a[l]=a[cur];
    a[cur]=p;
   cout<<endl;
    if(cur==k)
    {
        return a[cur];
    }
    else if(cur<k)
    {
        return ans(cur+1,r,k);
    }
    else
    {
        return ans(l,cur-1,k);
    }
}
int main()
{
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        a.push_back(t);
    }
    int k;
    cin>>k;
    k=n-k;
    int o=ans(0,n-1,k);
    cout<<o<<endl;





}