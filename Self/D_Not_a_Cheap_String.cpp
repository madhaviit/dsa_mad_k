#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string w;
        long long int hope,dex=0;
        cin>>w; cin>>hope;
        vector<pair<int,int>>mad;
            //calculate sum of indexes of w
            for (int i = 0; i < w.size(); i++)
            {
                dex=dex+w[i]-96;
                mad.push_back(make_pair(i,w[i]-96));
            }
            int bad = dex-hope;
        if (bad<=0)
        {
            cout<<w<<endl;
        }else
        {
            sort(mad.begin(), mad.end(), [] (const auto &x, const auto &y) { return x.second < y.second; });
            int rbad=0;
            while (rbad<bad)
            {
                int siz = mad[mad.size()-1].second;
                rbad=rbad+siz;
                mad.pop_back();
            }
            sort(mad.begin(), mad.end());
            for (int i = 0; i < mad.size(); i++)
            {
                cout<<char(mad[i].second+96);
            }
            cout<<endl;
            
            
        }
        
        
    }

    return 0;
}
