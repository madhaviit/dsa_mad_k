#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f

typedef pair<int, int> pairol;

class gph
{
    int V;

    vector<pair<int, int>> *adj;

public:
    gph(int V);

    void edgeAdd(int u, int v, int w);

    void pDjikstra(int s);
};

gph::gph(int V)
{
    this->V = V;
    adj = new vector<pairol>[V];
}

void gph::edgeAdd(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}

void gph::pDjikstra(int src)
{

    priority_queue<pairol, vector<pairol>, greater<pairol>>
        pq;

    vector<int> dist(V, INF);

    pq.push(make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty())
    {

        int u = pq.top().second;
        pq.pop();

        vector<pair<int, int>>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {

            int v = (*i).first;
            int weight = (*i).second;

            if (dist[v] >= dist[u] + weight)
            {

                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    cout<<"minimum distance from source is\n";
    for (int i = 0; i < V; ++i)
        cout<<i<<" "<<dist[i]<<endl;
}



int main()
{

    int V;
    cin >> V;
    gph g(V);
    int mad[V][V];
    cout<<"here";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cin >> mad[i][j];
            if (mad[i][j] != 0)
            {
                g.edgeAdd(i, j, mad[i][j]);
                cout<<"addded the edge"<<endl;
            }
        }
    }

    g.pDjikstra(0);

    return 0;
}
