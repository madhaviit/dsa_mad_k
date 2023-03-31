# include <bits/stdc++.h>

using namespace std;

int t, a, b;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> t;
	while (t --){
		cin >> a >> b;
		for (int i = 0; i < min(a, b); ++ i)
			cout << "01";
		for (int i = 0; i < abs(a - b); ++ i)
			cout << (a < b ? 1 : 0);
		cout << '\n';
	}

	return 0;
}