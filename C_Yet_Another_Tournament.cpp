#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}

void solve()
{
    // int n,m;
    // cin>>n>>m;
    // vector<pair<int,int>> tim;
    // int temp=0;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>temp;
    //     tim.push_back(make_pair(temp,i+1));
    // }
    // sort(tim.begin(), tim.end(), sortbyCond);
    // int rank=n+1;
    // int time=0;
    // int scope=m;
    // for (int i = 0; i < n; i++)
    // {
    //     time += tim[i].first;
    //     scope= scope-tim[i].first;
    //     if (time>m)
    //     {            
    //         goto madhav;
    //     }else
    //     {
    //         rank--;            
    //     }
        
        
    // }
    // madhav:
    // if (rank != 0 && rank != n && scope + tim[rank-1].first>= tim[rank].first) rank--;
    // cout<<rank<<endl;
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    auto b = a;
    sort(b.begin(), b.end());
    int ans = 0;
    for (int i = 0; i < n && b[i] <= m; ++i) {
      m -= b[i];
      ++ans;
    }
    if (ans != 0 && ans != n && m + b[ans - 1] >= a[ans]) ++ans;
    cout << n + 1 - ans << '\n';
    
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