#include <bits/stdc++.h>
using namespace std;
int score;
int out;
int asdf[20];
int p=0;
int mod(int x){
    if (x<0)
    {
        return -1*x;
    }else
    {
        return x;
    }
    
    
}
class node
{    
public:
    int data;
    node *parent, *lc, *rc;
    node(int data, node* parent, node* lc, node* rc);
};
vector <pair<int,node*>> raja;

node::node(int data, node* parent, node* lc, node* rc)
{
    node::data = data;
    node::lc=lc;
    node::rc=rc;
    node::parent = parent;
}

// now creating a tree when array of level order traversal is given
node* createTree(int arr[],int n, int i, node* trot){
    if (arr[i]==0)
    {
        return NULL;
    }    
    if (i<n)
    {
        node *root = new node(arr[i],trot,createTree(arr,n,2*i+1,root),createTree(arr,n,2*i+2,root));
        return root;
    }else
    {
        return NULL;
    }   
}

void bst(int x,node * p){
   if (x>(p->data))
   {
    if (p->rc==NULL)
    {
        p->rc=new node(x,p,NULL,NULL);
        return;
    }else
    {
        bst(x,p->rc);
    }    
   }else if (x<(p->data))
   {
    if (p->lc==NULL)
    {
        p->lc=new node(x,p,NULL,NULL);
        return;
    }else
    {
        bst(x,p->lc);
    } 
   }
   
     
   
}

//function for preorder traversal
void pre(node*root){
    if (root==NULL)
    {
        return;
    }else{    
    cout<<root->data<<" ";
    pre(root->lc);
    pre(root->rc);
    return;
    }
}

//inorder
void in(node*root){
    if (root==NULL)
    {
        return;
    }else{    
    
    in(root->lc);
    cout<<root->data<<" ";
    asdf[p++]=root->data;
    in(root->rc);
    return;
    }
}


void merge(node* root1, node*root2){
    if (root2==NULL)
    {
        return;
    }
    merge(root1, root2->lc);
    int x = root2->data;
    bst(x,root1);
    
    merge(root1,root2->rc);
}


void solve(){
    int n;
    cin>>n;
    int test[n];
    for (int i = 0; i < n; i++)
    {
        cin>>test[i];
    }
    node *root1 = createTree(test,n,0,NULL);
    int m;
    cin>>m;
    int test2[m];
    for (int i = 0; i < m; i++)
    {
        cin>>test2[i];
    }
    node *root2 = createTree(test2,m,0,NULL);
    pre(root1);
    cout<<" this is preorder traversal"<<endl;
    in(root1);
    cout<<" this is inorder traversal"<<endl;
        pre(root2);
    cout<<" this is preorder traversal"<<endl;
    in(root2);
    cout<<" this is inorder traversal"<<endl;
    merge(root1,root2);
    pre(root1);
    cout<<endl;
    in(root1);
    cout<<endl;
}
int main(){
    solve();
    return 0;
}

