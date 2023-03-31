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
	int nd, bf;
	cin>>nd>>bf;
	struct node* temp1,*madh,*temp2;
	temp1=head;
	madh=NULL;
	for (int i = 0; i < ((bf-nd)-1); i++)
	{
		madh=temp1;
		temp1=temp1->next;
	}
	temp2=madh;
	for (int i = 0; i < nd; i++)
	{
		madh->next=temp1->next;
		delete(temp1);
		temp1=madh->next;
	}
	printList(head);
	
	
	return 0;
}