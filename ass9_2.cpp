#include<bits/stdc++.h>
using namespace std;

const int logn = 20;

void dfs(int node, vector<int> *adj, bool *visited, int parents[][logn], int *depth){
	visited[node] = true;
	for(int child : adj[node]){
		if(! visited[child]){
			parents[child][0] = node;
			depth[child] = depth[node]+1;
			dfs(child,adj,visited,parents,depth);
		}
	}
}

int lift_up(int node,int k, int parents[][logn]){
	for(int i = 0; i < logn; i++){
		if(k&1) node = parents[node][i];
		k >>= 1;
	}
	return node;
}

int lca(int a,int b,int parents[][logn], int *depth){
	if(depth[a] > depth[b]) a = lift_up(a,depth[a]-depth[b],parents);
	else b = lift_up(b,depth[b]-depth[a],parents);
	if(a==b) return a;
	for(int i = logn-1; i >= 0; i--){
		if(parents[a][i]!=parents[b][i]){
			a = parents[a][i];
			b = parents[b][i];
		}
	}
	return parents[a][0];
}

int main(){
	int n,a,b;
	cout << "Enter the number of nodes in the tree\n";
	cin >> n;
	vector<int> adj[n+1];
	int parents[n+1][logn];
	int depth[n+1];
	bool visited[n+1];
	depth[1]=0;
	for(int i = 1; i <= n; i++) visited[i]=false;
	cout << "Enter the edges\n";
	for(int i = 1; i < n; i++){
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	dfs(1,adj,visited,parents,depth);
	parents[1][0] = 1;
	for(int i = 1; i < logn; i++){
		for(int j = 1; j <= n; j++){
			parents[j][i] = parents[parents[j][i-1]][i-1];
		}
	}
	while(true){
		cout << "Enter two nodes or enter -1 to stop\n";
		cin >> a;
		if(a==-1) break;
		cin >> b;
		cout << "The LCA of " << a << " and " << b << " is " << lca(a,b,parents,depth) << "\n";
	}
	return 0;
}
