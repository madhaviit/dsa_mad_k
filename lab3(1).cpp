#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

struct node* create(int size){
	struct node *temp;
	struct node *head;
	int x;
		cin>>x;
		temp=new node(x);
		head=temp;
	for (int i = 0; i < size-1; i++)
	{
		int ne; cin>>ne;
		temp->next=new node(ne);		
		temp=temp->next;
	}
	return head;
}

void printList(struct node *node)
{
    while (node != NULL)
    {
        cout<<node->data<<endl;
        node = node->next;
    }
    printf("\n");
}


int main(){
	int size;
	cin>>size;
	printList(create(size));

	return 0;
}