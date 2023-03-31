#include<iostream>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int given[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>given[i][j];
                
            }
                 
        }
        int sum; int maxsum=0;
        for (int i = 0; i < n; i++)
        { 
            int sum=0;
            for (int j = 0; j < m; j++)
            {
                int p =i;int q=j;
                int sum = given[i][j];
                while (p<n && q<m)
                {
                    p++;q++;
                    sum=sum+given[p][q];
                } p=i;q=j;
                while (p<n && 0<=q)
                {
                    p++;q--;
                    sum=sum+given[p][q];
                } p=i;q=j;
                while (0<=p && q<m)
                {
                    p--;q++;
                    sum=sum+given[p][q];
                }p=i;q=j;
                while (0<=p && 0<=q)
                {
                    p--;q--;
                    sum=sum+given[p][q];
                }
                cout<<sum<<endl;
                if (sum>maxsum)
                {
                    maxsum=sum;
                }
            }
            
        }
        

        
    }
    
    return 0;
}