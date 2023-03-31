#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 int getVAL(TreeNode* root,int i, int j,vector<int> &mad){
    if (j-i)
    {
        return mad[(j-i/2)]; 
    }else
    {
        return 0;
    }
    
    
}

void BuildLNode(TreeNode* root,int i, int j,vector<int> &mad){
    int val = getVAL(root,i, j,mad);
    if (val)
    {
        root->left=new TreeNode(val);
    }else
    {
        return;
    }
    
}
void BuildRNode(TreeNode* root,int i, int j,vector<int> &mad){
    int val = getVAL(root,i, j,mad);
    if (val)
    {
        root->right=new TreeNode(val);
    }else
    {
        return;
    }
       
}
 
class Solution {
public:
    TreeNode* balanceBST(TreeNode* root,vector<int> &Inorder,int i, int j) {
        
        if (i==j)
        {
            return (new TreeNode(Inorder[i]));
        }else{
        int ind = i+((j-i)/2);  
        TreeNode* cd= new TreeNode(Inorder[ind]);  
        BuildLNode(root,i, ind-1,Inorder);
        BuildRNode(root,ind+1,j,Inorder);   
        return (new TreeNode(Inorder[ind],balanceBST(root,Inorder,i, ind-1),balanceBST(root,Inorder,ind+1, j)));}
	}
};

void displayInOrder(TreeNode* root){
    if (!root){
        return;
    }
    
    displayInOrder(root->left);
    cout<<root->val<<" ";
    displayInOrder(root->right);
}
void InOrderinVec(TreeNode* root,vector<int> &mad){
    if (!root){
        return;
    }
    
    InOrderinVec(root->left,mad);
    mad.push_back(root->val);
    InOrderinVec(root->right,mad);
}
int main(){
    
    //Test Case 1
    TreeNode* d = new TreeNode(5);
    TreeNode* e = new TreeNode(1);
    TreeNode* c = new TreeNode(4,NULL,d);
    TreeNode* f = new TreeNode(3,NULL,c);
    TreeNode* b = new TreeNode(2,e,f);


    //display(a);
    //cout<<endl;
    Solution sol;
    vector<int> Inorder;
    InOrderinVec(b,Inorder);
    for (int i = 0; i < Inorder.size(); i++)
    {
        cout<<Inorder[i]<<" ";
    }
    
    TreeNode* sad = sol.balanceBST(b,Inorder,0,Inorder.size()-1);
    cout<<"\nMy new Root Value is "<<sad->val;
    displayInOrder(sad);
    
}