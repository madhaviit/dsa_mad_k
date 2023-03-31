#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n; 
        unsigned long int m=(n*(n-1))/2;
        unsigned int arr[n];int mina;int minb;
        for (int  i = 0; i < n; i++)
        {
            cin>>arr[i];            
        }
        unsigned long int mad[m];int k = 0;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = n; j > i; j--)
            {
                mad[k]=arr[j]-arr[i];
                k++;
            }
            
        }
         int n = sizeof(mad) / sizeof(mad[0]); 
    sort(arr, arr + n);

    for (int i = 0; i <m; i++)
    {
        if (mad[i]>0)
        {
            mina=mad[i];
            minb=mad[i+1];
            goto madhav;
        }
        
    } madhav:
    cout<<mad[m-1]+mad[m-2]-mina-minb;}
           
    
    return 0;
    }