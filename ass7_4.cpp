#include<bits/stdc++.h>
using namespace std;

string reorder(string s,int k){
	priority_queue<pair<int,char>> pq;
	int n = s.size();
	int occ[26];
	for(int i = 0; i < 26; i++) occ[i] = 0;
	for(int i = 0; i < n; i++){
		occ[s[i]-'a']++;
	}
	for(int i = 0; i < 26; i++){
		pq.push({occ[i],i+'a'});
	}
	string ans;
	pair<int,char> arr[k];
	for(int i = 0; i < n; i+=k){
		for(int j = i; j < min(i+k,n); j++){
			if(pq.empty()) return "Not possible!";
			pair<int,char> tp = pq.top();
			if(tp.first==0) return "Not possible!";
			ans.push_back(tp.second);
			pq.pop();
			// cout << tp.first << " " << tp.second << "\n";
			tp.first--;
			arr[j-i] = tp;
		}
		for(int j = i; j < min(i+k,n); j++){
			pq.push(arr[j-i]);
			// cout << i << " " << j << " " << arr[j-i].first << " " << arr[j-i].second << "\n";
		}
	}
	return ans;
}

int main()
{
	int k;
	string s;
	cin >> s >> k;
	cout << reorder(s,k);
	return 0;
}
