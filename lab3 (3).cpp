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
	struct node* head = 	create(size);
	int delInd;
	cin>>delInd;
	if (delInd==1)
	{
		struct node* temp;
		temp=head;
		head=head->next;
		delete(temp);
		
	}else if (delInd==size)
	{
		
		struct node* temp;
		temp=head;
		while (temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		delete(temp->next);
			temp->next=NULL;
		
	}else
	{
		struct node* temp,*madh;
		temp=head;
		madh=NULL;
		for (int i = 0; i < delInd-1; i++)
		{
			madh=temp;
			temp=temp->next;
		}
		madh->next=temp->next;
		delete(temp);
	}
	
	
	printList(head);
	

	return 0;
}