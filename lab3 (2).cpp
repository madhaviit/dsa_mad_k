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
    
}

void deleteList(struct node * &node){
	struct node* temp;
	temp=node;
	if (temp->next==NULL)
	{
		return;
	}else
	{
		delete(node);
		deleteList(temp->next);
	}
	
	
	
	
	
	
	
	

}


int main(){
	int size;
	cin>>size;
	struct node *mad = create(size);
	printList(mad);
	deleteList(mad);
	printList(mad);

	return 0;
}