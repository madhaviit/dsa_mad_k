#include<bits/stdc++.h>
using namespace std;

struct node{
	int key,depth,sz;
	node *left = NULL,*right = NULL;
	bool is_AVL;
	node(int key){
		left = NULL;
		right = NULL;
		this->key = key;
		depth = 1;
		sz = 1;
		is_AVL = true;
	}
};

int depth(node *nd){
	if(nd == NULL) return 0;
	else return nd->depth;
}

int size(node *nd){
	if(nd == NULL) return 0;
	else return nd->sz;
}

bool is_AVL(node *nd){
	if(nd == NULL) return true;
	else return nd->is_AVL;
}

struct BST{
	node *root = NULL;
	int largest_avl,avl_sz=0;
	void insert(int key){
		if(root == NULL){
			root = new node(key);
			return;
		}
		node *curr = root;
		while(true){
			if(curr->key == key) break;
			if(curr->key < key){
				if(curr->right == NULL) curr->right = new node(key);
				else curr = curr->right;
			}
			else{
				if(curr->left == NULL) curr->left = new node(key);
				else curr = curr->left;
			}
		}
	}
	void dfs(node *nd){
		if(nd->left != NULL) dfs(nd->left);
		if(nd->right != NULL) dfs(nd->right);
		nd->depth = 1+max(depth(nd->left),depth(nd->right));
		nd->sz = 1+size(nd->left)+size(nd->right);
		nd->is_AVL = is_AVL(nd->left) & is_AVL(nd->right);
		if(abs(depth(nd->left) - depth(nd->right)) > 1) nd->is_AVL = false;
		if(nd->is_AVL && avl_sz < nd->sz){
			avl_sz = nd->sz;
			largest_avl = nd->key;
		}
	}
};
int main(){
	int n,x;
	cout << "Enter the number of elements to BE INSERTED IN BST\n";
	cin >> n;
	cout << "Enter the elements : ";
	BST my_BST;
	for(int i = 1; i <= n; i++){
		cin >> x;
		my_BST.insert(x);
	}
	my_BST.dfs(my_BST.root);
	cout << "The largest AVL tree is the subtree of node with key " << my_BST.largest_avl << "\n";
	return 0;
}
