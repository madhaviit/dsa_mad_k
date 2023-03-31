#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[2000];
    int y=0;
    for (int i = 0; i < 1001; i++)
    {for (int j = 0; j <= y; j++)
    {
        arr[i+j]=y;        
    } i=i+y;  y++;            
    }
    int n;
    cin>>n;
    cout<<arr[n]<<endl;
    int x=arr[n];
    x=n-((x*(x+1))/2);
    for (int i = 1; i < arr[n]-x+1; i++)
    {
        cout<<i<<" ";
    }
    for (int i = arr[n]-x+1; i <= arr[n]; i++)
    {
        cout<<i+1<<" ";
    }
    
    
    return 0;
}