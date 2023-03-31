#include <bits/stdc++.h>
#include "AVL.h"
#include "vector.h"
using namespace std;



struct nodeLL
{
  int data;
  nodeLL *link;
};

class List
{
public:
  nodeLL *head=NULL;

  void insert_one(int a)
  {
    nodeLL *newnode=(nodeLL *)malloc(sizeof(nodeLL));
    newnode->data=a;
    newnode->link=head;
    head=newnode;
  }

  void show_lst()
  {
    if(head==NULL)
      return;
    nodeLL *temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->link;
    }
    cout<<endl;
  }

  void insert(AVL &a)
  {
    if(head==NULL)
      return;
    nodeLL *temp=head;
    while(temp!=NULL)
    {
      a.insert_one(temp->data);
      temp=temp->link;
    }
  }
};

void show_level(node *&a)
{
  if(a==NULL)
    return;
  vector_ <node *> v;
  v.push_back(a);
  node *t;
  while(v.size()>0)
  {
    t=v[0];
    if(v[0]->LC!=NULL)
      v.push_back(v[0]->LC);
    if(v[0]->RC!=NULL)
      v.push_back(v[0]->RC);
    v.erase(0);
  }
  v.push_back(a);
  while(true)
  {
    if(v[0]==NULL)
      cout<<"NULL ";
    else
    {
      cout<<v[0]->data<<" ";
      v.push_back(v[0]->LC);
      v.push_back(v[0]->RC);
      if(v[0]->data==t->data)
        break;
    }
    v.erase(0);
  }
}

int main()
{
  List L;
  L.insert_one(9);
  L.insert_one(5);
  L.insert_one(0);
  L.insert_one(-3);
  L.insert_one(-10);
  cout<<"The List is: ";
  L.show_lst();
  AVL a;
  L.insert(a);
  show_level(a.root);
  cout<<endl;
  for(int i=0;i<2;i++)
    a.delete_();
  show_level(a.root);
  return 0;
}
