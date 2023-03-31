#include <bits/stdc++.h>
using namespace std;
int score;
//I am defining the class node here
class node
{    
public:
    char data;
    node *parent, *lc, *rc;
    node(char data, node* parent, node* lc, node* rc);
};

node::node(char data, node* parent, node* lc, node* rc)
{
    node::data = data;
    node::lc=lc;
    node::rc=rc;
    node::parent = parent;
}

// now creating a tree when array of level order traversal is given
node* createTree(char arr[],int n, int i, node* trot){
    if (arr[i]=='N')
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
    in(root->rc);
    return;
    }
}


//creating function to find lowest commomn ancestor
int LCA(node*root, char u, char v){
    //base case for stopping
    if (root==NULL)
    {
        return 0;
    }
    //scoring process
    if (root->data==u||root->data==v)
    {
        score = 1+LCA(root->lc,u,v)+LCA(root->rc,u,v);
    }else
    {
        score = LCA(root->lc,u,v)+LCA(root->rc,u,v);
    }
    //returning process
    if (score==2)
    {
        cout<<root->data<<" is LCA"<<endl;
        return 0;
    }else
    {
        return score;
    }       
}




void solve(){
    int n;
    cin>>n;
    char test[n];
    for (int i = 0; i < n; i++)
    {
        cin>>test[i];
    }
    node *root = createTree(test,n,0,0);
    pre(root);
    cout<<" this is preorder traversal"<<endl;
    in(root);
    cout<<" this is inorder traversal"<<endl;
    char x,y;
    cout<<"enter the first character ";
    cin>>x;
    cout<<"enter the secind character ";
    cin>>y;
    cout<<endl;
    LCA(root,x,y);
}












int main(){
    solve();
    return 0;
}