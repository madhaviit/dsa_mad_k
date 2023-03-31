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
	struct node * madhav,*head,*temp,*temp1;
	head = create(size);
	temp =head;
	madhav = temp->next->next->next;
	int count=0;
	while (temp->next!=NULL)
	{
		temp=temp->next;
		count++;
	}
	temp->next=madhav;
	temp=head;
	temp1=head;
	for (int i = 0; i < count; i++)
	{
		temp1=temp->next;
		for (int j = 0; j < count; j++)
		{
			if (temp->next==temp1)
			{
				cout<<"YEs"<<endl;
				break;
			}
			temp=temp->next;
		}
		
	}
	
	
	


	return 0;
}