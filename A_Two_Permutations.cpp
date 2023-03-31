#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<pair<int, int>> vpi;
typedef vector<pair<ll, ll>> vpl;
#define pb(a) push_back(a)
#define pbr(a,b) pb(make_pair(a,b))
#define fr(i, a, b) for(int i = a; i <= b; i++)
#define all(c) (c).begin(), (c).end()
#define F first
#define S second

ll M = 1e9 + 7;
const int N = 100001;

ll binpow(ll a, ll b){    ll ans = 1;    while(b > 0){        if(b&1)     ans = (ans * a) % M;        a = (a*a) % M;        b >>= 1;    }    return ans;     }
bool sS(pi p1, pi p2){    return (p1.S < p2.S);     }
bool sF(pi p1, pi p2){    return (p1.F < p2.F);     }


void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if(a == n && b == n){
        cout << "Yes\n";
        return;
    }
    if(a+b >= n-1){
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    // freopen(".in", "r", stdin);
    // freopen(".out", "w", stdout);
    
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}