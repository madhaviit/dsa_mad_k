#include <bits/stdc++.h>
using namespace std;


void solve()
{
    /// madhav
    int n, i, qwerty;
    cin >> n;
    vector<pair<int, int>> a(n);
    set<int> p, q;
    vector<int> give1(n), give2(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
        p.insert(i + 1);
        q.insert(i + 1);
    }
    //sort here
    sort(a.begin(), a.end());
    for (i = 0; i < n; i++)
    {
        qwerty = a[i].second;



        if (p.count(a[i].first))
        {
            auto it = q.lower_bound(a[i].first);
            
            if (it != q.begin())
            {
                it--;
                give1[qwerty] = a[i].first;
                give2[qwerty] = *it;
                q.erase(it);
                p.erase(a[i].first);
                continue;
            }
            else if (*it == a[i].first)
            {
                give1[qwerty] = a[i].first;
                give2[qwerty] = *it;
                q.erase(it);
                p.erase(a[i].first);
                continue;
            }
        }



        //see if array matches
        if (q.count(a[i].first))

        {
            auto it = p.lower_bound(a[i].first);
            if (it != p.begin())
            {
                it--;
                give2[qwerty] = a[i].first;
                give1[qwerty] = *it;
                p.erase(it);
                q.erase(a[i].first);
                continue;
            }
            else if (*it == a[i].first)
            {
                give2[qwerty] = a[i].first;
                give1[qwerty] = *it;
                p.erase(it);
                q.erase(a[i].first);
                continue;
            }
        }
        //just a comment
        cout << "No" << endl;
        return;
    }
    cout <<"Yes"<< endl;
    for (i = 0; i < n; i++)
    {
        cout << give1[i] << " ";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        cout << give2[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}