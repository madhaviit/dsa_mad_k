#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
// #define endl "\n"

typedef pair<int, int>  pii;
typedef pair<ll, ll>    pl;
typedef vector<int>     vi;
typedef vector<ll>      vl;
 
//  long long power(unsigned long long x, 
//                                   int y, int p)
// {
//     long long res = 1; // Initialize result
  
//     x = x % p; // Update x if it is more than or
//     // equal to p
  
//     while (y > 0) 
//     {
      
//         // If y is odd, multiply x with result
//         if (y & 1)
//             res = (res * x) % p;
  
//         // y must be even now
//         y = y >> 1; // y = y/2
//         x = (x * x) % p;
//     }
//     return res;
// }
  
// // Returns n^(-1) mod p
//  long long modInverse(unsigned long long n,  
//                                             int p)
// {
//     return power(n, p - 2, p);
// }
  
// // Returns nCr % p using Fermat's little
// // theorem.
//  long long nCrModPFermat(unsigned long long n,
//                                  int r, int p)
// {
//     // If n<r, then nCr should return 0
//     if (n < r)
//         return 0;
//     // Base case
//     if (r == 0)
//         return 1;
  
//     // Fill factorial array so that we
//     // can find all factorial of r, n
//     // and n-r
//      long long fac[n + 1];
//     fac[0] = 1;
//     for (int i = 1; i <= n; i++)
//         fac[i] = (fac[i - 1] * i) % p;
  
//     return (fac[n] * modInverse(fac[r], p) % p
//             * modInverse(fac[n - r], p) % p)
//            % p;
// }
// int gcd(int a, int b)
// {
//     if(a==0)
//     {
//         return b;
//     }
//     else if(b==0)
//     {
//         return a;
//     }
//     else if(b==a)
//     {
//         return a;
//     }
//     else if(a>b)
//     {
//         return gcd(a-b,b);
//     }
//     else 
//     {
//         return gcd(b-a,a);
//     }
// }
// long long ndig(long long a)
// {
//     long long ans=0;
//     while(a>0)
//     {
//         a=a/10;
//         ans++;

//     }
//     return ans;
// }
// int v(char s)
// {
//     return s-'0';
// }
// int c(string s)
// {
//     int ans= (v(s[0])*10+v(s[1]))*60+v(s[3])*10+v(s[4]);
//     return ans;

// }
// int palindrom(int n)
// {
//     n=n%1440;
//     int a=n/60;
//     int b=n%60;
//     if(((a%10)*10+a/10)==b)
//         {return 1;}
//     else
//     {
//         return 0;
//     }
// }

// //DSU
// ll parent[N],si[N];
// void make(ll n)
// {
//     parent[n] = n;
//     si[n] = 1;
// }
 
// ll find(ll n)
// {
//     if (n==parent[n]) return n;
//     return parent[n] = find(parent[n]);
// }
 
// void Union(ll a, ll b)
// {
//     a = find(a);
//     b = find(b);
//     if (a==b) return;
//     if (si[a]>si[b])
//         swap(a,b);
//     parent[a] = b;
//     si[b]+=si[a];
// }


// double c_set(int n)
// {
//     double ans=0;
//     while(n)
//     {
//         ans+=(1&n);
//         n=n>>1;
//     }
//     return ans;
// }
void solve()
{
  int n;
  cin>>n;
  int g[n][n];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        cin>>g[i][j];
    }
  }
  multiset<pair<int,pair<int,int>>> s;
  s.insert({g[0][0],{0,0}});
  vector<pair<int,int>> d{{0,1},{1,0},{-1,0},{0,-1}};
  vector<vector<int>> v(n,vector<int>(n,0));
  int ans=0;
  int p[n][n];
  while(!s.empty())
  {
    auto it=s.begin();
    s.erase(it);
    int r=(*it).second.first;
    int c=(*it).second.second;
    if(v[r][c])
    {
        continue;
    }
    int cost=(*it).first;
    p[r][c]=cost;
    if(r==n-1 && c==n-1)
    {
        ans=cost;
    }
    
    v[r][c]=1;
    for(auto i:d)
    {
        int rn,cn;
        rn=r+i.first;
        cn=c+i.second;
        if(rn<n && rn>-1 && cn<n && cn>-1)
        {
        s.insert({cost+g[rn][cn],{rn,cn}});
        }

    }
    

  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        cout<<p[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<ans<<endl;
}




int main() {


// #ifndef ONLINE_JUDGE
//     freopen("lostcow.in", "r", stdin);
//     freopen("lostcow.out", "w", stdout);
// #endif

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    solve();
    return 0;
}
