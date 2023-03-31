#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int key;
	Node *left;
	Node *right;
	int height;
	int subsz;
	Node(){
		left = NULL;
		right = NULL;
		height = 1;
		subsz = 1;
	}
};

int height(Node *currnode)
{
	if (currnode == NULL)
		return 0;
	return currnode->height;
}

int subsize(Node *currnode)
{
	if (currnode == NULL)
		return 0;
	return currnode->subsz;
}

Node* newNode(int key)
{
	Node* node = new Node();
	node->key = key;
	return(node);
}

Node *rightRotate(Node *y)
{
	Node *x = y->left;
	Node *T2 = x->right;

	x->right = y;
	y->left = T2;

	y->height = max(height(y->left),height(y->right)) + 1;
	x->height = max(height(x->left),height(x->right)) + 1;

	y->subsz = subsize(y->left) + subsize(y->right) + 1;
	x->subsz = subsize(x->left) + subsize(x->right) + 1;

	return x;
}

Node *leftRotate(Node *x)
{
	Node *y = x->right;
	Node *T2 = y->left;

	y->left = x;
	x->right = T2;

	x->height = max(height(x->left),height(x->right)) + 1;
	y->height = max(height(y->left),height(y->right)) + 1;

	y->subsz = subsize(y->left) + subsize(y->right) + 1;
	x->subsz = subsize(x->left) + subsize(x->right) + 1;

	return y;
}

int getBalance(Node *N)
{
	if (N == NULL)
		return 0;
	return height(N->left) - height(N->right);
}

Node* insert(Node* node, int key)
{
	if (node == NULL)
		return(newNode(key));

	node->subsz++;

	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);
	else
		return node;

	node->height = 1 + max(height(node->left),height(node->right));

	int balance = getBalance(node);
	if(balance > 1 && key < node->left->key)
		return rightRotate(node);

	if (balance < -1 && key > node->right->key)
		return leftRotate(node);

	if (balance > 1 && key > node->left->key)
	{
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}

	if (balance < -1 && key < node->right->key)
	{
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}
	return node;
}
int ith_element(Node *currnode, int ind){
	if(subsize(currnode->left) == ind-1) return currnode->key;
	else if(subsize(currnode->left) >= ind) return ith_element(currnode->left,ind);
	else return ith_element(currnode->right,ind - subsize(currnode->left) - 1);
}
int main()
{
	Node *root = NULL;
	int n,x;
	cout << "Enter the number of elements you want to insert\n";
	cin >> n;
	for(int i = 1; i <= n; i++){
		cout << "Enter the element: ";
		cin >> x;
		root = insert(root,x);
		double med;
		if(i%2==1) med = ith_element(root,(i+1)/2);
		else med = (ith_element(root,i/2) + ith_element(root,(i/2)+1)) / 2;
		cout << "The median of the given set till now is " << med << "\n";
	}
	return 0;
}
