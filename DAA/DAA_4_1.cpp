#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)
//but madhav be cautious we are getiing number of permutations
void solve()
{
    int n;
    cin>>n;
    vector <int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin>>coins[i];
    }
    
    int amt;
    cin>>amt;
    int dp[amt+1]={0};
    for (int j = 0; j < amt+1; j++)
    {
        dp[j]=-1;
    }
    
    int mincoin=1000;
    for (int k = 0; k < n; k++)
    {
        if (coins[k]<=amt)
        {
            dp[coins[k]]=1;
        }
        if (mincoin>coins[k])
        {
            mincoin=coins[k];
        }
        
    }
    int minadd=0;
    for (int l = 1; l < amt+1; l++)
    {
        minadd=0;
        for (int m = 0; m < n; m++)
        {
            if (l-coins[m]>0)
            {
                if (dp[l-coins[m]]>0 )
                {
                    minadd+=dp[l-coins[m]];
                }
            }
            
            
            
        }
        if (minadd!=0)
        {
            if (dp[l]==-1)
            {
                dp[l]=minadd;
            }else
            {
                dp[l]=dp[l]+minadd;
            }
            
            
        }
        
        
    }
    if (dp[amt]==1001)
    {
        cout<<-1<<endl;
    }else{cout<<dp[amt]<<endl;}
    
    
    
    
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    solve();

    return 0;
}




//GFG CODE if required
// #include<bits/stdc++.h>
// using namespace std;
// void func(int arr[],int arr1[],int b[],int digit,int n){
//     for(int i=0;i<=9;i++){
//         b[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         b[int(arr[i]/pow(10,digit-1))%10]++;
//     }
//     for(int i=1;i<=9;i++){
//         b[i]=b[i-1]+b[i];
//     }
//     for(int i=n-1;i>=0;i--){
//         arr1[b[int((arr[i]/pow(10,digit-1)))%10]-1]=arr[i];
//         b[int(arr[i]/pow(10,digit-1))%10]--;
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=arr1[i];
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int nums[n];
//     // long long b[n];
//     int b[10];
//     int x[n];
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     for(int i=1;i<=5;i++){
//         func(nums,x,b,i,n);
//     }
//     int diff=0;
//     for(int i=1;i<n;i++){
//         diff=max(diff,nums[i]-nums[i-1]);
//     }
//     cout<<diff<<endl;
// return 0;
// }