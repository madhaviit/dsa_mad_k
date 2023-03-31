#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    node * parent;
    node * llf;
    node * rrf;
    int data;

    node(int data, node *x ){
        parent = x;
        node::data = data;
        llf=NULL;
        rrf=NULL;
    }

};
void wleft(node * curr, int val){
    curr->llf = new node(val,curr);
    
} 
void wright(node * curr, int val){
    curr->rrf = new node(val,curr);
}

node * trr(node * curr){
    if (curr->rrf==NULL)
    {
        cout<<"right is empty"<<endl;
    }else
    {
        curr=curr->rrf;
    }
    return curr;
    
}
node * tll(node * curr){
    if (curr->llf==NULL)
    {
        cout<<"left is empty"<<endl;
    }else
    {
        curr=curr->llf;
    }
    return curr;
    
}
node * pup(node*curr){
    if (curr->parent==NULL)
    {
        cout<<"you are already at root node ";
    }else
    {
        curr= curr->parent;
    }
    return curr;   
}
bool LisEmpty(node*x){
    if (x->llf==NULL)
    {

        return true;
    }
    else
    {

        return false;
    }
    
}
bool RisEmpty(node*x){
    if (x->rrf==NULL)
    {
   
        return true;
    }
    else
    {
        return false;
    }
}
void bst(int x,node * p){
   if (x>(p->data))
   {
        if (RisEmpty(p))
        {
            wright(p,x);
            return;
        }
        else
        {
            bst(x,p->rrf);
            return;
        }
        
   }else
   {
        if (LisEmpty(p))
        {
            wleft(p,x);
            return;
        }
        else
        {
            bst(x,p->llf);
            return;
        }
   }
   
   
   
}

void in(node * x){
    if (x->llf==NULL && x->rrf==NULL)
    {
        cout<<x->data<<" ";
        return ; 
    }
    else if (x->llf==NULL&x->rrf!=NULL)
    {
        cout<<x->data<<" ";
        in(x->rrf);
    }else if (x->llf!=NULL&x->rrf==NULL)
    {
        in(x->llf);
        cout<<x->data<<" ";
    }else
    {
        in(x->llf);
         cout<<x->data<<" ";
         in(x->rrf);
    }
    
    
    
    
    
}

int main(){
   int n;
   cin>>n;
   int oot;
   cin>>oot;
   node* root ; 
   root=new node(oot,NULL);
   for (int i = 1; i < n; i++)
   {
        int k;
        cin>>k;
        bst(k,root);
   }
   in(root);
}