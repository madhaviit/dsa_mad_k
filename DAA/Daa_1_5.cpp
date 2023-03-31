
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    char data;
    node *left;
    node *right;
};

int search(char arr[], int strt, int end, char value);
node *newNode(char data);

node *buildTree(char in[], char pre[], int inStrt, int inEnd)
{
    static int preIndex = 0;

    if (inStrt > inEnd)
        return NULL;

    node *tNode = newNode(pre[preIndex++]);

    if (inStrt == inEnd)
        return tNode;

    int inIndex = search(in, inStrt, inEnd, tNode->data);

    tNode->left = buildTree(in, pre, inStrt, inIndex - 1);
    tNode->right = buildTree(in, pre, inIndex + 1, inEnd);

    return tNode;
}

int search(char arr[], int strt, int end, char value)
{
    int i;
    for (i = strt; i <= end; i++)
    {
        if (arr[i] == value)
            return i;
    }
}

node *newNode(char data)
{
    node *Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

void printInorder(node *node)
{
    if (node == NULL)
        return;

    printInorder(node->left);

    cout << node->data << " ";

    printInorder(node->right);
}

void writeNodeInGVFile(struct node *node)
{
    if (node == NULL)
        return;

    if (node->left != NULL)
        std::cout << node->data << " -- " << node->left->data << "\n";
    if (node->right != NULL)
        std::cout << node->data << " -- " << node->right->data << "\n";

    writeNodeInGVFile(node->left);

    writeNodeInGVFile(node->right);
}

void createGVFile(struct node *node)
{
    std::cout << "\ngraph {\n";
    writeNodeInGVFile(node);
    std::cout << "}\n";
}

int main()
{
    int n;
    cin >> n;
    char in[n], pre[n];
    for (int i = 0; i < n; i++)
    {
        cin >> in[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> pre[i];
    }

    node *root = buildTree(in, pre, 0, n - 1);

    cout << "Inorder traversal of the constructed tree is \n";
    printInorder(root);
    createGVFile(root);
}
