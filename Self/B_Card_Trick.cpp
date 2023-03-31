#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        unsigned long long int n,m;
        cin>>n;
        int card[n];
        for (int i = 0; i < n; i++)
        {
            cin>>card[i];
        }
        cin>>m;
        unsigned long long int sum=0;
        for (int i = 0; i < m; i++)
        {
            int j;
            cin>>j;
            sum=sum+j;
        }
        unsigned long long int ind;
        ind=sum%n;
        cout<<card[ind]<<endl;
        }   
    return 0;
}