#include<iostream>
using namespace std;

class solution{
	private:
		struct node{
			node* prev;
			int item;
			node* next;
		};
		
		node * head;
	
	public:
		solution(){head=NULL;}   
		
		void istart(int);
		void print();
		void print2();
		void normalin(int,int);
		void lasin(int);
		int height_of_list();
		
		
		void rotate(int );
		void reverse();
		void dltlast();
		void dltfrst();
		void normaldlt(int);
		bool find(int);
		~solution();
};

void solution::istart(int data){
	node *n = new node;
	
	n->item=data;
	n->prev=NULL;
	
	n->next=head;
	if(head==NULL)
	  head=n;
	else
	{
		head->prev=n;
	    head=n;
	}
	
}

void solution::print(){
	node *t;
	t=head;
	
	if(t==NULL)
	{
		cout<<"List is empty"<<endl;
	}
	else{
		while(t)
		{
			cout<<t->item<<" ";
			t=t->next;
		}
		cout<<endl;
	}
}

void solution::print2(){
	node *t;
	t=head;
	
	if(t==NULL)
	{
		cout<<"List is empty"<<endl;
	}
	else{
		do		
		{
			cout<<t->item<<" ";
			t=t->next;
		}while(t!=head);
		cout<<endl;
	}
}

void solution::lasin(int data){

	node *n=new node;
	n->item=data;
	n->next=NULL;
	
	if(head==NULL){
		n->prev=NULL;
		head=n;
	}
	else{
		node *t=head;
		
		while(t->next)
		{
			t=t->next;
		}
		
		n->prev=t;
		t->next=n;
	}
	
}

int solution::height_of_list(){
	int count=0;
	node*n=head;
	while(n)
	{
		count++;
		n=n->next;
	}
	return count;
}

void solution::dltlast(){
	node*n=head;
	if(n==NULL)
	{
		cout<<"Deletion not possible"<<endl;
	}
	else if(n->next==NULL)
	{
		delete n;
		head=NULL;
	}
	else{
		while(n->next!=NULL)
		{
			n=n->next;
		}
		
		n->prev->next=NULL;
		delete n;
	}
}

void solution::dltfrst(){
	if(head==NULL)
	{
		cout<<"List is empty"<<endl;
	}
	else if(head->next==NULL)
	{
		node*n=head->next;
		delete n;
		head=NULL;
	}
	else{
		node*n=head;
		head=n->next;
		head->prev=NULL;
		delete n;
	}
}

bool solution::find(int data){
	bool bo=false;
	node*n=head;
	if(n==NULL) return bo;
	while(n->next)
	{
		if(n->item==data) return true;
		n=n->next;
	}
	return bo;
}

void solution::normaldlt(int node_number){
	int count=height_of_list();
	if(node_number==0){
		dltfrst();
	}
	else if(count-1==node_number){
		dltlast();
	}
	else if(node_number>0 and node_number<count){
		node*t=head;
		for(int i=1;i<node_number;i++){
			t=t->next;
		}
		
		node*temp=t->next;
		
		t->next=temp->next;
		temp->next->prev=t;
		delete temp;
		
		
	}
	
	else {
		cout<<"Invalid Index Entry"<<endl;
	}
}

void solution::normalin(int node_number,int data){
	
	 int count=height_of_list();
	if(node_number==0){
		istart(data);
	}
	else if(node_number==count){
		lasin(data);
	}
	else if(node_number>0 and node_number<count){
		node*n=new node;
		n->item=data;
		
		node*t=head;
		for(int i=1;i<=node_number;i++){
			t=t->next;
		}
		
		t->prev->next=n;
		n->next=t;
		n->prev=t->prev;
		t->prev=n;
	}
	else{
		cout<<"Invalid Index entry"<<endl;
	}
}

void solution::reverse(){
	
	node*t1=NULL;
	node*t2=head;
	node*t3;
	
	if(t2==NULL) {
		cout<<"List is empty hence we cannot reverse it"<<endl;
		return;
	}
	if(head->next==NULL){
	    return;
	}
	while( t2->next!=NULL){
		
		t3=t2->next;
		t2->next=t1;
		t1=t2;
		t2->prev=t3;
		t2=t3;
	}
	t2->prev=NULL;
	t2->next=t1;
	head=t2;
}

void solution::rotate(int node_number){
	struct node* temp;
	temp=head;
	while (temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=head;
	head->prev=temp;
	
	
	node*t=head;
	for(int i=0;i<node_number;i++){
		t=t->next;
	}
	head=t;
}

solution::~solution(){
	while(head){
		dltfrst();
	}
}





int main()
{
	solution list;
	list.reverse();
	list.istart(10);
	list.istart(13);
	list.istart(11);
	list.print();
	list.reverse();
	list.print();
	return 0;
	list.istart(11);
	list.print();
	list.reverse();
	list.print();
	list.istart(12);
	list.print();
	list.reverse();
	list.print();
	list.istart(13);
	list.normalin(2,5);
	list.print();
	list.reverse();
	list.print();
    list.rotate(2);
    list.print2();

	
}