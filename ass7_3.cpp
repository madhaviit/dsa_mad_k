#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	pair<int,int> x;
	int arr[n];
	for(int j=0;j<n;j++) cin>>arr[j];
	int k;
	cin>>k;
	priority_queue<pair<double, pair<int, int>>> pq;
	//int n=arr.size();
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			pq.push({arr[j]/arr[i],{arr[j],arr[i]}});
			if(pq.size()>k) pq.pop();
		}
	}
	cout<<pq.top().second.first<<" / "<<pq.top().second.second<<endl;
//	cout<<frac(arr,k).first()<<" "<<frac(arr,k).second()<<endl;
	return 0;
}
