#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int key;
	Node *left;
	Node *right;
	int height;
};

int max(int a, int b);

int height(Node *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}

int max(int a, int b)
{
	return (a > b)? a : b;
}

Node* newNode(int key)
{
	Node* node = new Node();
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 1; 
	return(node);
}

Node *rrr(Node *y)
{
	Node *x = y->left;
	Node *T2 = x->right;

    x->right = y;
	y->left = T2;

	y->height = max(height(y->left),height(y->right)) + 1;
	x->height = max(height(x->left),height(x->right)) + 1;
    
	return x;
}


Node *llr(Node *x)
{
	Node *y = x->right;
	Node *T2 = y->left;

	y->left = x;
	x->right = T2;

	x->height = max(height(x->left),height(x->right)) + 1;
	y->height = max(height(y->left),height(y->right)) + 1;
    
	return y;
}

int BF(Node *N)
{
	if (N == NULL)
		return 0;
	return height(N->left) - height(N->right);
}

Node* insert(Node* node, int key)
{
	if (node == NULL)
		return(newNode(key));

	if (key < node->key)
		node->left = insert(node->left, key);
		
	else if (key > node->key)
		node->right = insert(node->right, key);
		
	else 
		return node;


	node->height = 1 + max(height(node->left),height(node->right));
    
	int lrdiff = BF(node);

	if (lrdiff > 1 && key < node->left->key)
		return rrr(node);

	if (lrdiff < -1 && key > node->right->key)
		return llr(node);

	if (lrdiff > 1 && key > node->left->key)
	{
		node->left = llr(node->left);
		return rrr(node);
	}

	if (lrdiff < -1 && key < node->right->key)
	{
		node->right = rrr(node->right);
		return llr(node);
	}

	return node;
}

void inorder(Node *root){
	if(root==NULL) return;
	
	inorder(root->left);
	cout<<root->key<<" ";
	inorder(root->right);
}

void preOrder(Node *root)
{
	if(root != NULL)
	{
		cout << root->key << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

void postOrder(Node *root){
	if(root==NULL) return ;
	
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->key<<" ";
}

int main()
{
	Node *root = NULL;
    bool mad=1;
	root = insert(root, 1);
	root = insert(root, 2);
	root = insert(root, 3);
	root = insert(root, 4);
	root = insert(root, 5);
	root = insert(root, 9);
    root = insert(root,7);
	
	cout << "Preorder traversal of the constructed AVL tree is "<<endl;
	preOrder(root);
	cout<<endl;
	
	return 0;
}            