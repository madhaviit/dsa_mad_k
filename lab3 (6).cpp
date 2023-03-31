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


int main(){
	int size;
	cin>>size;
	struct node* head1 = 	create(size); printList(head1); 
	struct node* head2 =    create(size); printList(head2); 
	struct node* head;
	struct node* temp;
	struct node* temp2;
	temp=new node(head1->data);
	temp2= new node(head2->data);
	temp->next=temp2;
	head=temp;
	head1=head1->next;
	head2=head2->next;
	for (int i = 0; i < (size-1); i++)
	{
		int x = head1->data;
		int y = head2->data;
		temp2->next=new node(x);		
		temp=temp2->next;
		temp->next=new node(y);
		temp2=temp->next;
		head1=head1->next;
		head2=head2->next;
	}
	printList(head);
	

	return 0;
}