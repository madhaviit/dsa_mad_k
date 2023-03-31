
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Adddj;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

void printADJL(vector<int> adj[], int V)
{

    for (int i = 0; i < V; i++)
    {
        cout << "adj list of element " << i << " is " << i << " -- ";
        for (int j = 0; j < adj[i].size(); ++j)
        {

            if (j == adj[i].size() - 1)
            {
                cout << adj[i][j] << endl;
            }
            else
            {
                cout << adj[i][j] << " -- ";
            }
        }
    }

    printf("\n");
}

void edgeADD(int x, int y)
{
    Adddj[x][y] = 1;
}

void bfs(int start)
{

    vector<bool> visited(Adddj.size(), false);
    vector<int> q;
    q.push_back(start);

    visited[start] = true;

    int vis;
    while (!q.empty())
    {
        vis = q[0];

        cout << vis << " ";
        q.erase(q.begin());

        for (int i = 0; i < Adddj[vis].size(); i++)
        {
            if (Adddj[vis][i] == 1 && (!visited[i]))
            {

                q.push_back(i);

                visited[i] = true;
            }
        }
    }
}

int main()
{

    int V = 5;
    cin >> V;
    int v = V;
    bool mad[V][V];
    Adddj = vector<vector<int>>(v, vector<int>(v, 0));
    vector<int> adj[V];
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cin >> mad[i][j];
        }
    }
    cout << "graph{\n";
    for (int i = 0; i < V; i++)
    {
        for (int j = i + 1; j < V; j++)
        {
            if (mad[i][j])
            {
                cout << i << " -- " << j << endl;
            }
        }
    }
    cout << "}" << endl;

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (mad[i][j])
            {
                addEdge(adj, i, j);
                edgeADD(i, j);
            }
        }
    }

    bfs(0);

    cout << endl;
    printADJL(adj, V);
    return 0;
}
