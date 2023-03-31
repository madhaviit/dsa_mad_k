#include <bits/stdc++.h>
using namespace std;


class Node {
public:
	int val;
	Node* left;
	Node* right;
};


Node* newNode(int data)
{
	Node* temp = new Node;
	temp->val = data;
	temp->left = nullptr;
	temp->right = nullptr;
	return temp;
}

vector<int> mergeTwoBST(Node* root1, Node* root2)
{
	vector<int> res;
	stack<Node*> s1, s2;
	while (root1 || root2 || !s1.empty() || !s2.empty()) {
		while (root1) {
			s1.push(root1);
			root1 = root1->left;
		}
		while (root2) {
			s2.push(root2);
			root2 = root2->left;
		}
		
		if (s2.empty()
			|| (!s1.empty()
				&& s1.top()->val <= s2.top()->val)) {
			root1 = s1.top();
			s1.pop();
			res.push_back(root1->val);
			root1 = root1->right;
		}
		
		else {
			root2 = s2.top();
			s2.pop();
			res.push_back(root2->val);
			root2 = root2->right;
		}
	}
	return res;
}


int main()
{
	Node *root1 = nullptr, *root2 = nullptr;


	root1 = newNode(3);
	root1->left = newNode(1);
	root1->right = newNode(5);


	root2 = newNode(4);
	root2->left = newNode(2);
	root2->right = newNode(6);

	
	vector<int> ans = mergeTwoBST(root1, root2);
	for (auto it : ans)
		cout << it << " ";
	return 0;
}






// //If s2 is empty then pop s1 and put the popped node value in the answer vector 
// Else if both s1 and s2 are not empty then compare their top nodes’ value if s1.top()->val <= s2.top()->val then in this case push the s1.top()->val in the result vector and push its right child in the stack s1.
// If s1 is empty then pop s2 and put the popped node value in the answer vector.
// Else if both s1 and s2 are not empty then compare their top nodes’ value if s2.top()->val >= s1.top()->val then in this case push the s2.top()->val in the result vector and push its right child in the stack s2 
// Loop while there are nodes not yet printed. The nodes may be in the stack(explored, but not printed) or maybe not yet explored