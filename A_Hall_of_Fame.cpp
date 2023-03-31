#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long int

typedef pair<int, int>  pii;
typedef pair<ll, ll>    pl;
typedef vector<int>     vi;
typedef vector<ll>      vl;
long long int fac[1000 + 1];

 long long int power(unsigned long long x, 
                                 long long int y,long long int p)
{
    long long int res = 1; // Initialize result
  
    x = x % p; // Update x if it is more than or
    // equal to p
  
    while (y > 0) 
    {
      
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
  
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res%p;
}
  
// Returns n^(-1) mod p
 long long int modInverse(unsigned long long int n,  
                                           long long int p)
{
    return power(n, p - 2, p);
}
  
// Returns nCr % p using Fermat's little
// theorem.
 long long int nCrModPFermat(unsigned long long n,
                                 int r, int p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;
  
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
     
    fac[0] = 1;
    // for (int i = 1; i <= n; i++)
    //     fac[i] = (fac[i - 1] * i) % p;
  
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}
long long int gcd(long long int a,long long int b)
{
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    else if(b==a)
    {
        return a;
    }
    else if(a>b)
    {
        return gcd(a-b,b);
    }
    else 
    {
        return gcd(b-a,a);
    }
}
long long ndig(long long a)
{
    long long ans=0;
    while(a>0)
    {
        a=a/10;
        ans++;

    }
    return ans;
}
int v(char s)
{
    return s-'0';
}
// int c(string s)
// {
//     int ans= (v(s[0])*10+v(s[1]))*60+v(s[3])*10+v(s[4]);
//     return ans;

// }
int palindrom(int n)
{
    n=n%1440;
    int a=n/60;
    int b=n%60;
    if(((a%10)*10+a/10)==b)
        {return 1;}
    else
    {
        return 0;
    }
}

long long int lcm(long long int a,long long int b,long long int rem)
{
    long long int hcf=gcd(a,b);
    long long int ans= (((a*b)%rem)*(modInverse(hcf,rem)))%rem;
    return ans;
}

long long int subarrayXor(int  (&arr)[], int n, int m,int  (&xorArr)[],int  (&mp)[])
{
    long long int ans = 0; // Initialize answer to be returned
 
    // Create a prefix xor-sum array such that
    // xorArr[i] has value equal to XOR
    // of all elements in arr[0 ..... i]
 //   int* xorArr = new int[n];
 
    // Create map that stores number of prefix array
    // elements corresponding to a XOR value
   // map<int, int> mp;
   
  
 
    // Initialize first element of prefix array
    
 
    // Calculate the answer
    for (int i = 0; i < n; i++) {
       
        // Find XOR of current prefix with m.
        int tmp = m ^ xorArr[i];
 
        // If above XOR exists in map, then there
        // is another previous prefix with same
        // XOR, i.e., there is a subarray ending
        // at i with XOR equal to m.
        ans = ans + (mp[tmp]);
       // cout<<mp[tmp]<<" "<<tmp<<endl;
 
        // If this subarray has XOR equal to m itself.
        if (xorArr[i] == m)
            ans++;
 
        // Add the XOR of this subarray to the map
        mp[xorArr[i]]=mp[xorArr[i]]+1;
    }
 
    // Return total count of subarrays having XOR of
    // elements as given value m
    return ans;
}


void solve()
{
    int t;
    cin>>t;
    int k=0;
    
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int lc=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                lc++;
            }
        }
        if(lc==n || lc==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            int i=0;
            for( i=0;i<n-1;i++)
            {
                if(s[i]=='L' && s[i+1]=='R')
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
            if(i==n-1)
            {
                cout<<0<<endl;
            }
        }
        
    }
    
}
    




int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

// #ifndef ONLINE_JUDGE
//     freopen("lostcow.in", "r", stdin);
//     freopen("lostcow.out", "w", stdout);
// #endif

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    solve();
    return 0;
}

