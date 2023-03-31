#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

struct node* newNode(int data)
{
    struct node* node = new struct node;
    node->data = data;
    node->next = NULL;
    return node;
}


int isEmpty(struct node *top)
{
    return (top!=NULL);
}


struct node * push(struct node* top, int data)
{
    struct node* node = newNode(data);
    
    node->next = top;
    top = node;
    
    cout<<data<<" pushed to stack"<<endl;
	return top;
}


struct node * pop(struct node* top)
{
        
    struct node* temp = top;
    top = (top)->next;
    
    int popped = temp->data;
    free(temp);

    cout<<popped<<"is popped"<<endl;
	return top;
}


int peek(struct node* top)
{
    if (isEmpty(top))
        return INT_MIN;
        
    return top->data;
}

int main()
{
    struct node* top = NULL;

    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);
	top = push(top, 4);
    top = push(top, 5);
    top = push(top, 6);
	cout<<"boolean value of stack being empty" <<isEmpty(top);
	top = pop(top);
	top = pop(top);top = pop(top);top = pop(top);top = pop(top);top = pop(top);
	cout<<"boolean value of stack being empty" <<isEmpty(top);


    return 0;
}