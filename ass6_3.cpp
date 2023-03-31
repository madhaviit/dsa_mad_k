// #include <stdio.h>
// #include <iostream>
//
// using namespace std;
// struct Node
// {
// struct Node *lchild;
// int data;
// int height;
// struct Node *rchild;
// }*root=NULL;
//
// int NodeHeight(struct Node *p)
// {
// int hl,hr;
// hl=p && p->lchild?p->lchild->height:0;
// hr=p && p->rchild?p->rchild->height:0;
// return hl>hr?hl+1:hr+1;
// }
// int BalanceFactor(struct Node *p)
// {
// int hl,hr;
// hl=p && p->lchild?p->lchild->height:0;
// hr=p && p->rchild?p->rchild->height:0;
// return hl-hr;
// }
// struct Node * LLRotation(struct Node *p)
// {
// struct Node *pl=p->lchild;
// struct Node *plr=pl->rchild;
// pl->rchild=p;
// p->lchild=plr;
//
// p->height=NodeHeight(p);
// pl->height=NodeHeight(pl);
// if(root==p)
// root=pl;
// return pl;
// }
// struct Node * LRRotation(struct Node *p)
// {
// struct Node *pl=p->lchild;
// struct Node *plr=pl->rchild;
// pl->rchild=plr->lchild;
// p->lchild=plr->rchild;
// plr->lchild=pl;
// plr->rchild=p;
// pl->height=NodeHeight(pl);
// p->height=NodeHeight(p);
// plr->height=NodeHeight(plr);
// if(root==p)
// root=plr;
// return plr;
// }
// struct Node * RRRotation(struct Node *p)
// {
// return NULL;
// }
// struct Node * RLRotation(struct Node *p)
// {
// return NULL;
// }
// struct Node *RInsert(struct Node *p,int key)
//
// {
// struct Node *t=NULL;
// if(p==NULL)
// {
// t= (struct Node*)malloc(sizeof (struct Node));
// t->data=key;
// t->height=1;
// t->lchild=t->rchild=NULL;
// return t;
// }
// if(key < p->data)
// p->lchild=RInsert(p->lchild,key);
// else if(key > p->data)
// p->rchild=RInsert(p->rchild,key);
// p->height=NodeHeight(p);
// if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1)
// return LLRotation(p);
// else if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==-1)
// return LRRotation(p);
// else if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==-1)
// return RRRotation(p);
// else if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==1)
// return RLRotation(p);
// return p;
// }
//
// int main()
// {
// root=RInsert(root,50);
// RInsert(root,10);
//
// RInsert(root,20);
// cout<<root->data<<endl;
// cout<<root->lchild->data<<endl;
// cout<<root->rchild->data<<endl;
//
// return 0;
// }





#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    int height;
    Node(){
        left = NULL;
        right = NULL;
        height = 1;
    }
};

int height(Node *currnode)
{
    if (currnode == NULL)
        return 0;
    return currnode->height;
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
void preOrder(Node *root)
{
    if(root != NULL)
    {
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main()
{
    Node *root = NULL;
    int n,x;
    cout << "Enter the number of elements you want to insert in AVL tree\n";
    cin >> n;
    cout << "Enter the elements : ";
    for(int i = 0; i < n; i++){
        cin >> x;
        root = insert(root, x);
    }
    cout << "Preorder traversal of the constructed AVL tree is \n";
    preOrder(root);
    return 0;
}
