#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)
class q
{
public:
    int front, rear, capacity;
    int *que;

    q(int c)
    {
        capacity = c;
        front = -1;
        rear = 0;
        que = new int;
    }

    void insert_front(int k)
    {
        if ((rear + 1) % capacity == front)
        {
            cout << "stack overflow" << endl;
            return;
        }
        if (front == -1)
        {
            que[++front] = k;
            return;
        }
        for (int i = rear; i >= front; i--)
        {
            que[i + 1] = que[i];
        }
        que[front] = k;
        rear = (rear + 1) % capacity;
        return;
    }

    void insert_rear(int k)
    {
        if ((rear + 1) % capacity == front)
        {
            cout << "stack overflow" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        que[rear] = k;
        return;
    }

    void delete_rear()
    {
        if (front > rear)
        {
            cout << "stack underflow";
        }
        rear--;
        return;
    }

    void delete_front()
    {
        if (front > rear)
        {
            cout << "stack underflow" << endl;
            return;
        }
        front = (front + 1) % capacity;
        return;
    }

    void printq()
    {
        if (front > rear)
        {
            cout << "queue is empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << que[i] << " ";
        }
        cout << endl;
        return;
    }
};
class node
{
public:
    node *parent;
    node *llf;
    node *rrf;
    int data;

    node(int data, node *x)
    {
        parent = x;
        node::data = data;
        llf = NULL;
        rrf = NULL;
    }
};
node *goleft(node *curr, int val)
{
    curr->llf = new node(val, curr);
    curr = curr->llf;
    return curr;
}
node *goright(node *curr, int val)
{
    curr->rrf = new node(val, curr);
    curr = curr->rrf;
    return curr;
}
node *trr(node *curr)
{
    if (curr->rrf == NULL)
    {
        cout << "right is empty" << endl;
    }
    else
    {
        curr = curr->rrf;
    }
    return curr;
}
node *tll(node *curr)
{
    if (curr->llf == NULL)
    {
        cout << "left is empty" << endl;
    }
    else
    {
        curr = curr->llf;
    }
    return curr;
}
node *pup(node *curr)
{
    if (curr->parent == NULL)
    {
        cout << "you are already at root node ";
    }
    else
    {
        curr = curr->parent;
    }
    return curr;
}
void pre(node *x)
{
    if (x->llf == NULL && x->rrf == NULL)
    {
        cout << x->data << " ";
        return;
    }
    cout << x->data << " ";
    pre(tll(x));
    pre(trr(x));
}
void post(node *x)
{
    if (x->llf == NULL && x->rrf == NULL)
    {
        cout << x->data << " ";
        return;
    }

    post(tll(x));
    post(trr(x));
    cout << x->data << " ";
}
void in(node *x)
{
    if (x->llf == NULL && x->rrf == NULL)
    {
        cout << x->data << " ";
        return;
    }

    in(tll(x));
    cout << x->data << " ";
    in(trr(x));
}
void preOrder(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->llf);
        preOrder(root->rrf);
    }
}
void ink(node *x)
{
    if (x->llf == NULL && x->rrf == NULL)
    {
        cout << x->data << " ";
        return;
    }
    else if (x->llf == NULL & x->rrf != NULL)
    {
        cout << x->data << " ";
        in(x->rrf);
    }
    else if (x->llf != NULL & x->rrf == NULL)
    {
        in(x->llf);
        cout << x->data << " ";
    }
    else
    {
        in(x->llf);
        cout << x->data << " ";
        in(x->rrf);
    }
}
void printLevelOrder(node *root, int * arr)
{
    // Base Case
    if (root == NULL)
        return;

    // Create an empty queue for level order traversal
    queue<node *> q;

    // Enqueue Root and initialize height
    q.push(root);
    int count= 0;
    while (q.empty() == false)
    {
        // Print front of queue and remove it from queue
        node *node = q.front();
        cout << node->data << " ";
        arr[count]=node->data;
        count++;
        q.pop();

        /* Enqueue left child */
        if (node->llf != NULL)
            q.push(node->llf);

        /*Enqueue right child */
        if (node->rrf != NULL)
            q.push(node->rrf);
    }
    return ;
};
bool isminHeap(int arr[], int n)
{

    for (int i=(n/2-1) ; i>=0 ; i--)
    {
        // Left child 2*i+1
        // Right child 2*i+2
        if (arr[i] > arr[2 * i ])
            return false;
 
        if (2*i + 1 < n)
        {
            // If parent is greater than right child
            if (arr[i] > arr[2 * i + 1])
                return false;
        }
    }
    return true;
}
void solve()
{
    node *root;
    bool cont = true;
    node *temp, *temp2;
    cout << "enter no of nodes in tree : ";
    int lap;
    cin >> lap;
    cout << " enter root data ";
    int x;
    cin >> x;
    char rep;
    root = new node(x, NULL);
    temp = root;
    temp2 = root;
    cout << "want to create leaf? :(y/n) ";
    cin >> rep;
    while (rep != 'n')
    {
        cout << "where to move now?" << endl;
        cout << "(parent(p)/left(l)/right(r)/create left(z)/create right(x)/stop(n) ";
        cin >> rep;
        if (rep == 'p')
        {
            temp = pup(temp);
        }
        else if (rep == 'l')
        {
            temp = tll(temp);
        }
        else if (rep == 'r')
        {
            temp = trr(temp);
        }
        else if (rep == 'z')
        {
            cout << "enter data " << endl;
            int a;
            cin >> a;
            temp = goleft(temp, a);
        }
        else if (rep == 'x')
        {
            cout << "enter data " << endl;
            int b;
            cin >> b;
            temp = goright(temp, b);
        }
        else if (rep == 'n')
        {
            break;
        }
    }
    cout << endl;
    cout << "inorder ";
    ink(temp2);
    cout << endl;
    cout << "preorder ";
    preOrder(temp2);
    cout << endl;
    cout << "level-order ";
    int mad[lap];
    printLevelOrder(temp2,mad);
    cout << endl;
    for (int i = 0; i < lap; i++)
    {
        cout<<mad[i]<<" ";
    }
    cout<<endl<<"truth value of given tree being minHeap "<<isminHeap(mad,lap)<<endl;
    // now code of actual this question goes here
    
}
int main()
{
    solve();
    return 0;
}
