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

/* Prototypes for utility functions */
int search(char arr[], int strt, int end, char value);
struct node* newNode(char data);
struct node* buildTree(char in[], char pre[], int inStrt, int inEnd);
void printInorder(struct node* node);
void writeNodeInGVFile(struct node* node);
void createGVFile(struct node* node);





/* UTILITY FUNCTIONS */
/* Function to find index of value in arr[start...end]. The function
assumes that value is present in in[] */
int search(char arr[], int strt, int end, char value){
int i;
for (i = strt; i <= end; i++) {
if (arr[i] == value)
return i;
}
}

/* This funtcion is here just to test buildTree() */
void printInorder(struct node* node) {
if (node == NULL)
return;
/* first recur on llf child */
printInorder(node->llf);
/* then print the data of node */
std::cout << node->data;
/* now recur on rrf child */
printInorder(node->rrf);
}






/* Helper function that allocates a new node with the
given data and NULL llf and rrf pointers. */
struct node* newNode(char data) {
struct node* node = (struct
node*)malloc(sizeof(struct node));
node->data = data;
node->llf = NULL;
node->rrf = NULL;
return (node);
}







/* This funtcion is here just to node in GV file */
void writeNodeInGVFile(struct node* node) {
if (node == NULL)
return;
/* then print the data of node */
if(node->llf != NULL)
std::cout   << node->data << " -- " << node->llf->data << "\n";
if(node->rrf != NULL)
std::cout  <<  node->data << " -- " <<  node->rrf->data << "\n";
/* first recur on llf child */
writeNodeInGVFile(node->llf);
/* now recur on rrf child */
writeNodeInGVFile(node->rrf);
}




/* This funtcion is here just to create GV file*/
void createGVFile(struct node* node) {
std::cout << "\ngraph {\n" ;
writeNodeInGVFile(node);
std::cout << "}\n" ;
}

/* Recursive function to construct binary of size len from Inorder traversal in[] and Preorder traversal pre[]. Initial values of
inStrt and inEnd should be 0 and len -1. The function doesn’t do any error checking for cases where inorder and preorder do
not form a tree */


struct node* buildTree(char in[], char pre[], int inStrt, int inEnd) {
static int preIndex = 0;
if (inStrt > inEnd) return NULL;
/* Pick current node from Preorder traversal using preIndex and increment preIndex */
struct node* tNode = newNode(pre[preIndex++]);
/* If this node has no children then return */
if (inStrt == inEnd) return tNode;
/* Else find the index of this node in Inorder traversal */
int inIndex = search(in, inStrt, inEnd, tNode->data);
/* Using index in Inorder traversal, construct llf and rrf subtress */
tNode->llf = buildTree(in, pre, inStrt, inIndex - 1);
tNode->rrf = buildTree(in, pre, inIndex + 1, inEnd);
return tNode;
}

node * goleft(node * curr, int val){
    curr->llf = new node(val,curr);
    curr = curr->llf;
    return curr;
} 
node * goright(node * curr, int val){
    curr->rrf = new node(val,curr);
    curr= curr->rrf;
    return curr;
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
void pre(node * x){
    if (x->llf==NULL && x->rrf==NULL)
    {
        cout<<x->data<<" ";
        return ; 
    }
    cout<<x->data<<" ";
    pre(tll(x));
    pre(trr(x));
    
}
void post(node * x){
    if (x->llf==NULL && x->rrf==NULL)
    {
        cout<<x->data<<" ";
        return ; 
    }
    
    post(tll(x));
    post(trr(x));
    cout<<x->data<<" ";
    
}
void in(node * x){
    if (x->llf==NULL && x->rrf==NULL)
    {
        cout<<x->data<<" ";
        return ; 
    }
    
    in(tll(x));
    cout<<x->data<<" ";
    in(trr(x));
    
    
}
void preOrder(node *root)
{
	if(root != NULL)
	{
		cout << root->data << " ";
		preOrder(root->llf);
		preOrder(root->rrf);
	}
}

void ink(node * x){
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





void solve(){
    node *root;
    bool cont=true;
    node *temp, *temp2;
    cout<<" enter root data ";
    int x;
    cin>>x;
    char rep;
    root = new node(x,NULL);
    temp =root;
    temp2=root;
    cout<<"want to create leaf? :(y/n) ";
    cin>>rep;
    while (rep!='n')
    {
        cout<<"where to move now?"<<endl;
        cout<<"(parent(p)/left(l)/right(r)/create left(z)/create right(x)/stop(n) ";
        cin>>rep;
        if (rep=='p')
        {
            temp=pup(temp);
        }else if (rep=='l')
        {
            temp=tll(temp);
        }else if (rep=='r')
        {
            temp=trr(temp);
        }else if (rep=='z')
        {
            cout<<"enter data "<<endl;
            int a;
            cin>>a;
            temp = goleft(temp,a);

        }else if (rep=='x')
        {
            cout<<"enter data "<<endl;
            int b;
            cin>>b;
            temp = goright(temp,b);

        }else if (rep=='n')
        {
            break;
        }
        
        
        
        
        
    }
    createGVFile(temp2);

}

    











int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}