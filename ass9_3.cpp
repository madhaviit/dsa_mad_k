#include<bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> *adj, bool *visited, int *parent, int dist, int &mx_dist, int &mx_dist_node){
	visited[node] = true;
	if(dist > mx_dist){
		mx_dist_node = node;
		mx_dist = dist;
	}
	for(int child : adj[node]){
		if(! visited[child]){
			parent[child] = node;
			dfs(child,adj,visited,parent,dist+1,mx_dist,mx_dist_node);
		}
	}
}

int main(){
	int n,a,b;
	cout << "Enter the number of nodes in the tree\n";
	cin >> n;
	vector<int> adj[n+1];
	int parent[n+1];
	int depth[n+1];
	bool visited[n+1];
	depth[1]=0;
	fill(visited+1,visited+n+1,false);
	cout << "Enter the edges\n";
	for(int i = 1; i < n; i++){
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	int node1,node2,mx_dist = 0;
	dfs(1,adj,visited,parent,1,mx_dist,node1);
	mx_dist = 0;
	fill(visited+1,visited+n+1,false);
	dfs(node1,adj,visited,parent,1,mx_dist,node2);
	cout << "The diameter of the tree is \n";
	while(node2 != node1){
		cout << node2 << "-";
		node2 = parent[node2];
	}
	cout << node1 << "\n";
	return 0;
}
