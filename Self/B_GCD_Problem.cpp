#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
using ld = long double;
 
#define rep(i, a, b) for (auto i = (a); i < (b); ++i)
#define per(i, a, b) for (auto i = (b); i-- > (a); )
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) int((x).size())
 
template<class T> bool uin(T& a, const T& b) { return a > b ? a = b, true : false; }
template<class T> bool uax(T& a, const T& b) { return a < b ? a = b, true : false; }
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int gcd(int x,int y)
{
   for (int i = min(x,y); i > 0; i--)
   {
       if (y%i==0 && x%i==0)
       {
           return i;
       }
       
   }
   
}
 
void solve() {
	int n; cin >> n;
	for (int a = 2, b = n - 3; b > 1; ++a, --b)
		if (gcd(a, b) == 1) {
			cout << a << ' ' << b << ' ' << 1 << '\n';
			return;
		}
	assert(0);
}
 
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int t; cin >> t;
	while (t--) solve();
}