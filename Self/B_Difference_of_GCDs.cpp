// #include<bits/stdc++.h>
// using namespace std;
// typedef unsigned long long int ull;

// void solve(){
//     ull n,r,l;
//     cin>>n>>l>>r;
//     ull arg = r-l+1;
//     ull ask = n+1;
//     if (arg>n-1)
//     {
//         cout<<"YES"<<endl;
//         vector<ull> mad;
//         for (ull i = 1; i < ask ; i++)
//         {
//             ull rem = l%i;
//             ull quo = l/i;
//             if (rem==0)
//             {
//                 mad.push_back(l);
//             }
//             else
//             {
//                 if (((quo+1)*i)<=r)
//                 {
//                      mad.push_back((quo+1)*i);
//                 }
                
               
//             }
            
//         }
//         for (int i = 0; i < mad.size(); i++)
//         {
//             if (i<mad.size()-1)
//             {
//                 cout<<mad[i]<<" ";
//             }else
//             {
//                 cout<<mad[i]<<endl;
//             }
            
            
            
//         }
        
        

//     }
//     else
//     {
//         cout<<"NO"<<endl;
//     }
    
    
// }

// int main(){
    
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h> 
using namespace std;
#define int long long int
 
int32_t main()
{
    
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,l,r;
        cin >> n >> l >> r;
        vector<int> v; 
        bool p = false;       
        for(int i=1; i<=n; i++){
           if((r/(i))*i>=l){
            v.push_back(((r/i))*i);
           }
        }

        if(v.size()!=n){
            cout << "NO" << endl;
        }
        else{

            cout << "YES" << endl;
            for(int i=0; i<v.size(); i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}