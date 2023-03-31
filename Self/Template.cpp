#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)


/*
-> Generic Function for BFS traversal of a Graph
 (valid for directed as well as undirected graphs
 which can have multiple disconnected components)
-- Inputs --
-> V - represents number of vertices in the Graph
-> adj[] - represents adjacency list for the Graph
-- Output --
-> bfs_traversal - a vector containing bfs traversal
for entire graph
*/
//returns complete bfs traversal of graph
vector<int> bfstravel(int V, vector<int> adj[])
{
    vector<int> bfs_traversal;
    vector<bool> vis(V, false);
    for (int i = 0; i < V; ++i) {
 
        // To check if already visited
        if (!vis[i]) {
            queue<int> q;
            vis[i] = true;
            q.push(i);
 
            // BFS starting from ith node
            while (!q.empty()) {
                int g_node = q.front();
                q.pop();
                bfs_traversal.push_back(g_node);
                for (auto it : adj[g_node]) {
                    if (!vis[it]) {
                        vis[it] = true;
                        q.push(it);
                    }
                }
            }
        }
    }
    return bfs_traversal;
}
//returns vector of number of nodes in each disconnected component of graph
vector<int> bfsComp(int V, vector<int> adj[])
{
    vector<int> bfs_traversal;
    vector<bool> vis(V, false);
    int count= 0;
    for (int i = 0; i < V; ++i) {
        // To check if already visited
        if (!vis[i]) {
            count=0;
            queue<int> q;
            vis[i] = true;
            q.push(i);
            count++;
            // BFS starting from ith node
            while (!q.empty()) {
                int g_node = q.front();
                q.pop();
                // 
                for (auto it : adj[g_node]) {
                    if (!vis[it]) {
                        vis[it] = true;
                        q.push(it);
                        count++;
                    }
                }
            }
            bfs_traversal.push_back(count);
        }
    }
    return bfs_traversal;
}
//returns vector nodes in each disconnected component of graph
vector<vector<int>> bfsComp_ret_nodes(int V, vector<int> adj[])
{
    vector<vector<int>> bfs_traversal;
    vector<bool> vis(V, false);
    for (int i = 0; i < V; ++i) {
        vector<int> mad;
        // To check if already visited
        if (!vis[i]) {
            queue<int> q;
            vis[i] = true;
            q.push(i);
            mad.push_back(i);
            // BFS starting from ith node
            while (!q.empty()) {
                int g_node = q.front();
                q.pop();
                // 
                for (auto it : adj[g_node]) {
                    if (!vis[it]) {
                        vis[it] = true;
                        q.push(it);
                        mad.push_back(i);
                    }
                }
            }
            bfs_traversal.push_back(mad);
        }
    }
    return bfs_traversal;
}
//convert decimal to binary
string decimalToBinary(int n)
{
    //finding the binary form of the number and
    //converting it to string.
    string s = bitset<64> (n).to_string();
     
    //Finding the first occurrence of "1"
    //to strip off the leading zeroes.
    const auto loc1 = s.find('1');
     
    if(loc1 != string::npos)
        return s.substr(loc1);
     
    return "0";
}




void solve()
{

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //speedup for leetcode
    /* static const auto speedup = []() {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr); return 0;
    }(); */
    
    /* int t;
    cin >> t;
    while (t--)
    {
        solve();
    } */

    solve();
    return 0;
}
