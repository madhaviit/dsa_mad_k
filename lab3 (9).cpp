#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;

	node(int x)
	{
		data = x;
		next = NULL;
	}
};

struct node *create(int size)
{
	struct node *temp;
	struct node *head;
	int x;
	cin >> x;
	temp = new node(x);
	head = temp;
	for (int i = 0; i < size - 1; i++)
	{
		int ne;
		cin >> ne;
		temp->next = new node(ne);
		temp = temp->next;
	}
	return head;
}

void printList(struct node *node)
{
	while (node != NULL)
	{
		cout << node->data << endl;
		node = node->next;
	}
	printf("\n");
}

int main()
{
	struct node * madhav, *temp1, *temp2, *head,*temp3;
	int size;
	cin>>size;
	head=create(size);
	temp1=head;
	temp2=head;
	for (int i = 0; i < size; i++)
	{
		temp1=temp1->next;
		temp2=temp1;
		for (int j = i+1; j < size; j++)
		{
			temp3=temp2;
			temp2=temp2->next;
			
			if (temp2->data==temp1->data)
			{
				madhav=temp2;
				temp3->next= madhav->next;
				delete(temp2);
				size=size-1;				
			}
			
		}
		
	}
	printList(head);
	return 0;
}