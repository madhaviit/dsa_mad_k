#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout << "Enter number of nodes the binary tree\n";
	cin >> n;
	int a[n];
	cout << "Enter elements of the binary tree in level order\n";
	for(int i = 0; i < n; i++) cin >> a[i];
	bool ans = true;
	for(int i = 1; i < n; i++){
		if(a[i]==-1) continue
		if(a[i] < a[(i-1)/2]) ans = false;
	}
	if(ans) cout << "It satisfies min-heap property\n";
	else cout << "It does not satisfy min-heap property\n";
	return 0;
}
