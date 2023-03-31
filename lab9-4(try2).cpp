#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<pair<int,pair<char,char>>> mad;
    int size;
    int addj[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> addj[i][j];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (addj[i][j] > 0)
            {
                mad.push_back(make_pair(addj[i][j], make_pair(i, j)));
            }
        }
    }
    sort(mad.begin(), mad.end());
    
}



int main(){
    solve();
    return 0;
}