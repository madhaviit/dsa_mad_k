#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

//  void solve()
//  {
//      int n,m,k;
//      cin>>n>>m>>k;
//      if (k>m)
//      {
//          cout<<"NO"<<endl;
//          return;
//      }
//      int a[m];
//      bool f[m];
//      for (int i = 0; i < m; i++)
//      {
//          cin>>a[i];
//          f[i]=1;
//      }
//      sort(a,a+m,greater<>());
//      int col[n];
  
//      for (int i = 0; i < k; i++)
//      {
//          if (a[i]>0)
//          {
//              col[i]=i;
//              a[i]=a[i]-1;
//              f[i]=0;
//          }else
//          {
//              cout<<"NO"<<endl;
//              return;
//          }        
//      }
//      int temp;
//      bool find=0;
  
  
//      for (int i = k; i < n; i++)
//      {   
//          temp=col[i-k];
//          f[temp]=1;
//          find=0;
//          for (int j = 0; j < m; j++)
//          {
//              if (f[j]==1)
//              {
//                  if (a[j]>0)
//                  {
//                      col[i]=j;
//                      a[j]=a[j]-1;
//                      f[j]=0;
//                      find=1;
//                      goto madhav;
//                  }
              
//              }
          
//          }
//          madhav:
//          if (!find)
//          {
//              cout<<"NO"<<endl;
//              return;
//          }
      
         
//      }
//      cout<<"YES"<<endl;
  
  
//  }

// void solve(){
//     int n, m, k;
//     cin>>n>>m>>k;
//     int max_yet=0;
//     for (int i = 0; i < m; i++)
//     {
//         int s;cin>>s;
//         max_yet= max(max_yet,s);
//     }
//     if (max_yet>(n+k-1)/k){
//         cout<<"NO"<<endl;
//     }else
//     {
//         cout<<"YES"<<endl;
//     }
    
    
// }

void solve(){
     int n, m, k;
        cin>>n>>m>>k;
        int u_bound= n/k+1;
        int rem_space= n%k;
        int arr[m];
        for(int i=0; i<m; i++){
            cin>>arr[i];
        }
        bool flag=true;
        sort(arr, arr+m);
        for(int i=m-1; i>=0; i--){
            if(rem_space==0){u_bound--;}
            rem_space--;
            if(arr[i]>u_bound){
                flag= false; break;
            }
        }
        if(!flag){cout<<"NO"<<'\n';}else{cout<<"YES"<<'\n';
        return;
}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}