#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
	int pow;
    
    node(int x,int y){
        data = x;
        next = NULL;
		pow=y;
    }
    
};

struct node* create(int size){
	struct node *temp;
	struct node *head;
	int x; int y;
		cin>>x;
		cin>>y;
		temp=new node(x,y);
		head=temp;
	for (int i = 0; i < size-1; i++)
	{
		int ne,py; cin>>ne>>py;
		temp->next=new node(ne,py);		
		temp=temp->next;
	}
	return head;
}

void printList(struct node *node)
{
    while (node != NULL)
    {
        cout<<node->data<<"x^"<<node->pow<<" ";
        node = node->next;
    }
	cout<<endl;
}




int main(){
	int size;
	cin>>size;
	struct node* head1 = create(size); printList(head1); 
	struct node* head2 = create(size); printList(head2);
	struct node *t1=head1,*t2=head2;
	struct node* output,*head3;
	int count = 0;
	while (t1->next!=NULL)
	{
		t2=head2;
		while (t2->next!=NULL)
		{
			if (t1->pow==t2->pow)
			{
				
				if(count==1){

					output->next = new node(t1->data+t2->data,t1->pow);
					head3=output;
					output=output->next;
					count++;
				}else if (count==0)
				{
					output = new node(t1->data+t2->data,t1->pow);
					count++;
				}else
				{
					output->next = new node(t1->data+t2->data,t1->pow);
					output=output->next;
				}
				
				
				
			}
			t2=t2->next;
			
		}
		t1=t1->next;
	}
	printList(head3);
	return 0;
}

