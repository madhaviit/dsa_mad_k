/* createTree.c */
/* program to construct tree using inorder and preorder
traversals */
#include<iostream>
#define MAX_NO_NODES_TREE 100
/* A binary tree node has data, pointer to llf child and a
pointer to rrf child */
struct node {
char data;
struct node* llf;
struct node* rrf;
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


/* Driver program to test above functions */
int main(){
//char inOrder[MAX_NO_NODES_TREE];
//char preOrder[MAX_NO_NODES_TREE];
char in[] = { 'D', 'B', 'E', 'A', 'F', 'C','G' };
char pre[] = { 'A', 'B', 'D', 'E', 'C', 'F','G' };
int len = sizeof(in) / sizeof(in[0]);
struct node* root = buildTree(in, pre, 0, len - 1);  //to build the tree from inorder and preorder traversals
/* Let us test the built tree by printing Insorder traversal */
std::cout << "Inorder traversal of the constructed tree is \n";
printInorder(root);
/* Let us Create GV file for the tree */
createGVFile(root);
}



