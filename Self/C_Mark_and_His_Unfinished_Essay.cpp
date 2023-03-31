#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void solve(){
    int n, c, q; cin >> n >> c >> q;
    string s; cin >> s;
    vector<ll> left(c+1), right(c+1), diff(c+1);
    left[0] = 0;
    right[0] = n;
    for(int i=1; i<=c; ++i){
    	ll l, r; cin >> l >> r;
    	l--; r--;
    	left[i] = right[i-1];
    	right[i] = left[i] + (r-l+1);
    	diff[i] = left[i] - l;
    }
    while(q--){
    	ll k; cin >> k;
    	k--;
    	for(int i=c; i>=1; --i){
    		if(k < left[i]) continue;
    		else k -= diff[i];
    	}
    	cout << s[k] << "\n";
    }}

// void solve(){
//     int len,nop,noq;
//     cin>>len>>nop>>noq;
//     string mad;
//     cin>>mad;
//     forn(i,nop){
//         ull a,b;
//         cin>>a>>b;
//         mad.append(mad,a-1,b-a+1);
//     }
//     forn(i,noq){
//         ull kth;
//         cin>>kth;
//         cout<<mad[kth-1]<<endl;
//     }
// }
// void solve(){
//     int len,nop,noq;
//     cin>>len>>nop>>noq;
//     string mad;
//     cin>>mad;
//     vector <ll> left(nop+1), right(nop+1), diff(nop+1), madl(nop+1),madr(nop+1);
//     left[0]=0;right[0]=len-1;diff[0]=len,madl[0]=1,madr[0]=len;
//     for (int i = 1; i <= nop; i++)
//     {
//         ull lef,righ;
//         cin>>lef>>righ;
//         left[i]=right[i-1]+1;
//         right[i]=left[i]+righ-lef;
//         diff[i]=righ-lef+1;
//     }
//     for (int i = 0; i < noq; i++)
//     {
//         ull k;
//         cin>>k;
//         k--;
//         for (int j = 0; j < nop; j++)
//         {
//             if (k>=left[j]&&k<=right[j])
//             {
//                 /* code */
//             }
         
//         }
     
//     }
 
 
// }
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}


 

// int main(){
//     int tt; cin >> tt;
//     while(tt--) solve();
// }