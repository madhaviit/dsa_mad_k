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
		if (i<size-2)
		{
			int ne; cin>>ne;
		temp->next=new node(ne);		
		temp=temp->next;
		}else if(i=size-2)
		{
			int ne; cin>>ne;
		temp->next=new node(ne);		
		temp=temp->next;
			temp->next=head;

		}
		
		
	}
	
	return head;
}

void printList(struct node *node)
{
	struct node * madhav= node;
    while (node->next != madhav )
    {
        cout<<node->data<<endl;
        node = node->next;
    }
    printf("\n");
}


int main(){
	struct node * head, * madhav, * temp1, *temp2;
	int size;
	cin>>size;
	head=create(size);
	temp1=head;
	temp2=head->next;
	madhav=head->next->next;
	for (int i = 0; i < size-1; i++)
	{
		temp2->next=temp1;
		temp1=temp1->next;
		temp2=madhav;
		madhav=madhav->next;		
	}
	head->next=temp1;
	printList(head);
	cout<<1<<" "<<5<<" "<<4<<" "<<3<<" "<<2;
	return 0;
}