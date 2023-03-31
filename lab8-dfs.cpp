

#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    map<int, bool> visited;
    map<int, list<int>> adj;

    void addEdge(int v, int w);

    void DFS(int v);
};

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFS(int v)
{

    visited[v] = true;
    cout << v << " ";

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}

int main()
{

    Graph g;
    int V = 5;
    cin >> V;
    int v = V;
    bool mad[V][V];
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cin >> mad[i][j];
            g.addEdge(i, j);
        }
    }
    int k;
    cout << "enter node you want to start your treaversal from " << endl;
    cin >> k;
    cout << "DFS traversal of given graph is ";

    g.DFS(k);

    return 0;
}
