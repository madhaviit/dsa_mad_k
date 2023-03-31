#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

class node
{
public:
    int data;
    node* lc;
    node* rc;
    node* prnt;
    node(int x, node* crnt);
    
};

node::node(int x, node* crnt)
{
    data=x;
    lc=NULL;
    rc=NULL;
    prnt=crnt;
}

int height(node* x){
    if (x==NULL)
    {
        return 0;
    }else
    {
        return 1+max(height(x->lc),height(x->rc));
    }
    
    
}

int balFac(node* x){
    return (height(x->lc)-height(x->rc));
}

node* insert(node* root, int inp){
    if (inp>(root->data))
    {
        if (root->rc==NULL)
        {
            root->rc= new node(inp, root);
            return (root->rc);
        }else
        {
            return(insert(root->rc,inp));
        }
        
        
    }
    else if (inp<(root->data))
    {
        if (root->lc==NULL)
        {
            root->lc= new node(inp, root);
            return (root->lc);
        }else
        {
            return(insert(root->lc,inp));
        }
        
        
    }
    else{
        cout<<"wrong input program will end now. Thanks for using..";

    }
}

void chkcon(node* root, int key){
    if (root==NULL)
    {
       cout<<"balanced now"<<endl;
       return;
    }
    
    if (balFac(root)>1)
    {
        if (key>(root->lc->data))
        {
            cout<<"//lr rotatn"<<endl;
            node * temp = root->lc->rc;
            root->lc->rc=temp->lc;
            temp->lc = root->lc;
            root->lc=temp->rc;
            temp->rc=root;
            if(root->prnt->lc==root){
                root->prnt->lc=temp;
            }else if (root->prnt->rc==root)
            {
                    root->prnt->rc=temp;
            }
            
            
            
            
        }else
        {
            cout<<"//ll therofore right roation"<<endl;
            node* temp = root->lc;
            root->lc = temp->rc;
            temp->rc=root;
            if(root->prnt->lc==root){
                root->prnt->lc=temp;
            }else if (root->prnt->rc==root)
            {
                    root->prnt->rc=temp;
            }
        }
        
        
    }else if (balFac(root)<(-1))
    {
        if (key<(root->rc->data))
        {
            cout<<"//rl rotation"<<endl;
            node * temp = root->rc->lc;
            root->rc->lc=temp->rc;
            temp->rc = root->rc;
            root->rc=temp->lc;
            temp->lc=root;
            if(root->prnt->rc==root){
                root->prnt->rc=temp;
            }else if (root->prnt->lc==root)
            {
                    root->prnt->lc=temp;
            }
        }else
        {
            //rr therefore left roatation
            cout<<"//rr therofore right roation"<<endl;
            node* temp = root->rc;
            root->rc = temp->lc;
            temp->lc=root;
            if(root->prnt->rc==root){
                root->prnt->rc=temp;
            }else if (root->prnt->lc==root)
            {
                    root->prnt->lc=temp;
            }
        }
        
        
    }else
    {
        chkcon(root->prnt,key);
    }
    
    

    
}

void inorder (node *root){
	if(root==NULL) return;
	
	inorder(root->lc);
	cout<<root->data<<" ";
	inorder(root->rc);
}


void solve(){
    cout<<"how many nodes you want in AVL tree?"<<endl;
    int n;
    cin>>n;
    int k;
    cout<<"enter the root data :";
    cin>>k;
    node *root = new node(k,NULL);
    node *tmep;
    for (int i = 0; i < n-1; i++)
    {
        int m;
        cin>>m;
        tmep=insert(root,m);
        chkcon(tmep,m);
    }
    inorder(root);
    cout<<"new root data is "<<root->data<<endl;
    

}

int main(){
    solve();
    return 0;
}





