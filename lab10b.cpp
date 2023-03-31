#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int src, dest, weight;
};

struct Graph
{

    int V, E;
    struct Edge *edge;
};

struct Graph *createGraph(int V, int E)
{
    struct Graph *graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge = new Edge[E];
    return graph;
}

void finalDistance(int dist[], int n)
{
    cout<<"minimum distance from source is\n";
    for (int i = 0; i < n; ++i)
        cout<<i<<" "<<dist[i]<<endl;
}

void bf(struct Graph *graph, int src)
{
    int V = graph->V;
    int E = graph->E;
    int dist[V];

    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    dist[src] = 0;

    for (int i = 1; i <= V - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int u = graph->edge[j].src;
            int v = graph->edge[j].dest;
            int weight = graph->edge[j].weight;
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
    }

    for (int i = 0; i < E; i++)
    {
        int u = graph->edge[i].src;
        int v = graph->edge[i].dest;
        int weight = graph->edge[i].weight;
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
        {
            printf("Graph contains negative weight cycle");
            return;
        }
    }

    finalDistance(dist, V);

    return;
}

int main()
{

    int V;
    int E;
    cin >> V;
    cin >> E;
    struct Graph *graph = createGraph(V, E);
    int count = 0;
    int mad[V][V];
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cin >> mad[i][j];
            if (mad[i][j] != 0)
            {
                if (count < E)
                {
                    graph->edge[count].src = i;
                    graph->edge[count].dest = j;
                    graph->edge[count].weight = mad[i][j];
                    cout << "added the edge " << count << endl;
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
    }

    bf(graph, 0);

    return 0;
}
