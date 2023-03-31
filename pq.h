#include <bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  node *RC;
  node *LC;
  node *parent;
};

struct nodeLL
{
  node* data;
  nodeLL* link;
  nodeLL *prev;
};

class List
{
public:
  nodeLL *head=NULL;
  nodeLL *last=NULL;
  void push(node *&n)
  {
    nodeLL *newnode;
    newnode=(nodeLL*)malloc(sizeof(nodeLL));
    newnode->data=n;
    newnode->link=NULL;
    newnode->prev=last;
    if(head==NULL)
      head=newnode;
    else
      last->link=newnode;
    last=newnode;
  }
  void pop()
  {
    if(length()==1)
    {
      nodeLL *temp=head;
      head=NULL;
      last=NULL;
      free(temp);
      return;
    }
    if(length()==0)
      return;
    nodeLL *temp=last;
    last=last->prev;
    last->link=NULL;
    free(temp);
  }
  int length()
  {
    nodeLL *temp=head;
    int i=1;
    if(head==NULL)
      return 0;
    while(temp->link!=NULL)
    {
      i++;
      temp=temp->link;
    }
    return i;
  }
};

class Queue
{
public:
  node *root=NULL;
  List l;
  nodeLL *temp=NULL;

  void enqueue()
  {
    int a;
    cout<<"Enter Element"<<endl;
    cin>>a;
    insert_one_heap(a);
  }

  void insert_one_heap(int a)
  {
    node *newnode;
    newnode=(node *)malloc(sizeof(node));
    newnode->data=a;
    newnode->RC=NULL;
    newnode->LC=NULL;
    l.push(newnode);
    if(temp==NULL)
    {
      newnode->parent=NULL;
      temp=l.head;
    }
    else
    {
      newnode->parent=temp->data;
      if(temp->data->LC==NULL)
        temp->data->LC=newnode;
      else
      {
        temp->data->RC=newnode;
        temp=temp->link;
      }
    }
    if(root==NULL)
      root=newnode;
    check_min_heap(newnode);
  }

  void check_min_heap(node *&a)
  {
    if(a->parent==NULL)
      return;
    if(a->data<a->parent->data)
    {
      int temp=a->data;
      a->data=a->parent->data;
      a->parent->data=temp;
      check_min_heap(a->parent);
    }
  }

  void parent(node *&a)
  {
    if(l.length()==0)
    {
      cout<<"The Queue is Empty"<<endl;
      return;
    }
    if(a==NULL)
      return;
    if(a->parent==NULL)
      cout<<"Root "<<a->data<<endl;
    else
      cout<<"The Parent of "<<a->data<<" is "<<a->parent->data<<endl;
    parent(a->LC);
    parent(a->RC);
  }

  int dequeue()
  {
    if(l.length()==0)
    {
      cout<<"The Queue is Empty"<<endl;
      return -1;
    }
    int t=root->data;
    if(l.length()==1)
    {
      root=NULL;
      l.pop();
      return t;
    }
    if(temp->data->LC==NULL)
      temp=temp->prev;
    if(temp->data->RC==NULL)
      temp->data->LC=NULL;
    else
      temp->data->RC=NULL;
    node *temp1=l.last->data;
    root->data=temp1->data;
    l.pop();
    check_min_heap_del(root);
    return t;
  }

  void check_min_heap_del(node *&a)
  {
    if(a==NULL)
      return;
    if(a->LC==NULL)
      return;
    int b=a->data;
    int c=a->LC->data;
    if(a->RC==NULL)
    {
      if(c<b)
      {
        a->data=c;
        a->LC->data=b;
        check_min_heap_del(a->LC);
      }
      return;
    }
    int d=a->RC->data;
    if(c<b && c<d)
    {
      a->data=c;
      a->LC->data=b;
      check_min_heap_del(a->LC);
      return;
    }
    if(d<b && d<c)
    {
      a->data=d;
      a->RC->data=b;
      check_min_heap_del(a->RC);
      return;
    }
  }
};
