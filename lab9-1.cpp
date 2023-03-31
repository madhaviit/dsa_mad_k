#include <bits/stdc++.h>
using namespace std;
int score;
int out;
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
int LCA(node*root, int u, int v){
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

int largestAVL(node* root){
        cout<<"inside the functiomn";
    int lrt=0,rrt=0;

    if (root==NULL)
    {
        return 0;
    }
    if (root->parent==NULL)
    {
        return 0;
    }
    
    
    if (root->lc!=NULL)
    {
        cout<<root->data<<" ";
        lrt=largestAVL(root->lc);
        
    }
    if (root->rc!=NULL)
    {
        cout<<root->data<<" ";
        rrt=largestAVL(root->rc);
    }
    if ((root->parent->lc)==root)
    {
        if (lrt!=-1&&rrt!=-1)
        {
          if (mod(lrt-rrt)<2)
        {
            raja.push_back(make_pair(max(lrt,rrt),root));
            if ((root->data)<(root->parent->data))
            {
                return 1+max(lrt,rrt);
            }
            
        } 
        }
        return -1;
         
    }
     if ((root->parent->rc)==root)
    {
        if (lrt!=-1&&rrt!=-1)
        {
          if (mod(lrt-rrt)<2)
        {
            raja.push_back(make_pair(max(lrt,rrt),root));
            if ((root->data)>(root->parent->data))
            {
                return 1+max(lrt,rrt);
            }
            
        }
        }
        return -1;
         
    }
    return -1;
    
}



void solve(){
    int n;
    cin>>n;
    int test[n];
    for (int i = 0; i < n; i++)
    {
        cin>>test[i];
    }
    node *root = createTree(test,n,0,0);
    pre(root);
    cout<<" this is preorder traversal"<<endl;
    in(root);
    cout<<" this is inorder traversal"<<endl;
    cout<<largestAVL(root);
    cout<<"here";
    sort(raja.begin(),raja.end());
    cout<<raja[0].first<<" "<<raja[0].second->data<<endl;
}



int main(){
    solve();
    return 0;
}