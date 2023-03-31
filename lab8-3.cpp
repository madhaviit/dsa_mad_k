// Kruskal algo Madhav kadam
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Adddj;
vector<vector<int>> a;

bool chkCyc(vector<vector<int>> a, vector<pair<int, pair<int, int>>> sad, int index)
{
    int p = sad[index].second.first;
    int q = sad[index].second.second;
    int sza = a.size();
    int found1 = -1, found2 = -1;
    for (int i = 0; i < sza; i++)
    {
        auto ind = find(a[i].begin(), a[i].end(), p);
        if (ind == a[i].end())
        {
            continue;
        }
        else
        {
            found1 = i;
        }
    }
    for (int i = 0; i < sza; i++)
    {
        auto ind = find(a[i].begin(), a[i].end(), q);
        if (ind == a[i].end())
        {
            continue;
        }
        else
        {
            found2 = i;
        }
    }
    if (found1 == -1 && found2 == -1)
    {
        vector<int> apd = {p, q};
        a.push_back(apd);
    }
    else if (found1 == -1 && found2 != -1)
    {
        a[found2].push_back(p);
    }
    else if (found1 != -1 && found2 == 0)
    {
        a[found1].push_back(q);
    }
    else if (found1 == found2 && found1 != -1)
    {
        return true;
    }
    else if (found1 != found2 && found1 != -1 && found2 != -1)
    {
        for (int i = 0; i < a[found2].size(); i++)
        {
            a[found1].push_back(a[found2][i]);
        }
        a.erase(a.begin() + found2);
    }
    return false;
};
int main()
{
    int V;
    cin >> V;
    int v = V;
    bool mad[V][V];
    vector<pair<int, pair<int, int>>> sad;
    vector<pair<int, int>> span;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cin >> mad[i][j];
        }
    }
    for (int i = 0; i < V; i++)
    {
        for (int j = i + 1; j < V; j++)
        {
            if (mad[i][j] > 0)
            {
                sad.push_back(make_pair(mad[i][j], make_pair(i, j)));
            }
        }
    }
    sort(sad.begin(), sad.end());
    for (int i = 0; i < V - 1; i++)
    {
        if (!chkCyc(a, sad, i))
        {
            span.push_back(sad[i].second);
        }
        else
        {
            i--;
        }
    }

    for (int i = 0; i < span.size(); i++)
    {
        cout << span[i].first << " " << span[i].second << endl;
    }
    cout << endl;

    return 0;
}
