#include <bits/stdc++.h>
using namespace std;
struct pr_queue{
	int *arr = new int[1];
	int sz=1,n=0;
	void push(int val){
		n++;
		if(n > sz){
			sz *= 2;
			int *nw = new int[sz];
			for(int i = 0; i < sz; i++) nw[i] = arr[i];
			delete [] arr;
			arr = nw;
		}
		arr[n-1] = val;
		int node = n-1;
		while(node > 0){
			if(arr[node] >= arr[(node-1)/2]) swap(arr[node],arr[(node-1)/2]);
			else break;
		}
	}
	int size(){
		return n;
	}
	int top(){
		if(n > 0) return arr[0];
		else return -1;
	}
	void pop(){
		if(n > 0){
			swap(arr[n-1],arr[0]);
			int node = 0;
			n--;
			while(node < n){
				if(2*node+2 < n){
					if(arr[node] >= max(arr[2*node+1],arr[2*node+2])) break;
					if(arr[2*node+1] > arr[2*node+2]){
						swap(arr[node],arr[2*node+1]);
						node = 2*node+1;
					}
					else{
						swap(arr[node],arr[2*node+2]);
						node = 2*node+2;
					}
				}
				else if(2*node+1 < n){
					if(arr[node] < arr[2*node+1]){
						swap(arr[node],arr[2*node+1]);
						node = 2*node+1;
					}
					else break;
				}
				else break;
				cout << node << " ";
			}
		}
	}
	void print(){
		for(int i = 0; i < n; i++) cout << arr[i] << " ";
	}
};
int main(){
	pr_queue pq;
	char c;
	do{
		cout << "\nWhich operation do you want to perform in the priority queue\n";
		cout << "1. insert a new element\n2. Print the size\n3. Print the maximum element\n4. Remove the maximum element\n";
		int n;
		cin >> n;
		if(n==1){
			cout << "Enter the element\n";
			cin >> n;
			pq.push(n);
		}
		else if(n==2) cout << pq.size() << "\n";
		else if(n==3) cout << pq.top() << "\n";
		else pq.pop();
		cout << "The elements right now in the queue are\n";
		pq.print();
		cout << "\nDo you want to continue? (y/n)\n";
		cin >> c;
	}while(c=='y');
	return 0;
}
