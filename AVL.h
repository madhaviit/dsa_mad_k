#include <bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  node *LC;
  node *RC;
  int height;
  node *parent;
};

class AVL
{
public:
  node *root=NULL;
  void insert()
  {
    while(true)
    {
      int a;
      cout<<"Enter Element"<<endl;
      cin>>a;
      insert_one(a);
      cout<<"Enter 0 to stop Inserting Elements into the AVL"<<endl;
      cin>>a;
      if(a==0)    return;
    }
  }

  void insert_one(int a)
  {
    node *b=insert_one_BST(a);
    calc_hp(b);
    balance(b);
  }

  node *insert_one_BST(int a)
  {
    node *newnode;
    newnode=(node *)malloc(sizeof(node));
    newnode->data=a;
    newnode->height=0;
    newnode->LC=NULL;
    newnode->RC=NULL;
    newnode->height=0;
    if(root==NULL)
    {
      newnode->parent=NULL;
      root=newnode;
      return root;
    }
    node *p=find_pos_BST(a);
    newnode->parent=p;
    if(newnode->data>p->data)
      p->RC=newnode;
    else
      p->LC=newnode;
    return newnode;
  }

  node *find_pos_BST(int a)
  {
    if(root==NULL)
      return NULL;
    node *temp=root;
    while(true)
    {
      if(temp->data>=a)
      {
        if(temp->LC==NULL)
          return temp;
        temp=temp->LC;
      }
      else
      {
        if(temp->RC==NULL)
          return temp;
        temp=temp->RC;
      }
    }
  }

  void in_order(node *&a)
  {
    if(a==NULL)
      return;
    in_order(a->LC);
    cout<<a->data<<" ";
    in_order(a->RC);
  }

  void pre_order(node *&a)
  {
    if(a==NULL)
      return;
    cout<<a->data<<" ";
    pre_order(a->LC);
    pre_order(a->RC);
  }

  void post_order(node *&a)
  {
    if(a==NULL)
      return;
    post_order(a->LC);
    post_order(a->RC);
    cout<<a->data<<" ";
  }

  void level_order()
  {
    if(root==NULL)
      return;
    queue <node*> Q;
    Q.push(root);
    while(Q.size()>0)
    {
      cout<<Q.front()->data<<" ";
      if(Q.front()->LC!=NULL)
        Q.push(Q.front()->LC);
      if(Q.front()->RC!=NULL)
        Q.push(Q.front()->RC);
      Q.pop();
    }
    cout<<endl;
  }

  void parent(node *&a)
  {
    if(a==NULL)
      return;
    if(a->parent==NULL)
    {
      cout<<"Root: "<<a->data<<endl;
    }
    else
    {
      cout<<"The Parent of "<<a->data<<" is "<<a->parent->data<<endl;
    }
    parent(a->LC);
    parent(a->RC);
  }

  void calc_hp(node *&a)
  {
    if(a==NULL)
      return;
    if(a->LC==NULL && a->RC==NULL)
      a->height=0;
    else
    {
      int lh,rh;
      if(a->LC==NULL)
        lh=0;
      else
        lh=a->LC->height;
      if(a->RC==NULL)
        rh=0;
      else
        rh=a->RC->height;
      a->height=max(lh,rh)+1;
    }
    if(a->parent!=NULL)
      calc_hp(a->parent);
  }

  void show_heights(node *&a)
  {
    if(a==NULL)
      return;
    cout<<a->data<<" "<<a->height<<endl;
    show_heights(a->LC);
    show_heights(a->RC);
  }

  void balance(node *&b)
  {
    if(b==NULL)
      return;
    int lh,rh;
    if(b->LC==NULL)
      lh=-1;
    else
      lh=b->LC->height;
    if(b->RC==NULL)
      rh=-1;
    else
      rh=b->RC->height;
    if(abs(lh-rh)>1)
    {
      balance_AVL(b,lh,rh);
      return;
    }
    balance(b->parent);
  }

  void balance_AVL(node *&a,int lh,int rh)
  {
    int clh,crh;
    string s;
    if(lh>rh)
    {
      if(a->LC->LC==NULL)
        clh=-1;
      else
        clh=a->LC->LC->height;
      if(a->LC->RC==NULL)
        crh=-1;
      else
        crh=a->LC->RC->height;
      if(clh>=crh)
        s="LL";
      else
        s="LR";
    }
    else
    {
      if(a->RC->RC==NULL)
        crh=-1;
      else
        crh=a->RC->RC->height;
      if(a->RC->LC==NULL)
        clh=-1;
      else
        clh=a->RC->LC->height;
      if(crh>=clh)
        s="RR";
      else
        s="RL";
    }
    if(s=="LL")
    {
      node *t=rightrot(a);
      root->parent=NULL;
      calc_heights(t->RC);
      calc_heights(t);
      calc_hp(t->parent);
    }
    else if(s=="RR")
    {
      node *t=leftrot(a);
      root->parent=NULL;
      calc_heights(t->LC);
      calc_heights(t);
      calc_hp(t->parent);
    }
    else if(s=="LR")
    {
      node *t2=a;

      node *t=leftrot(a->LC);
      calc_heights(t->LC);
      calc_heights(t);
      calc_hp(t->parent);

      node *t1=rightrot(t2);
      root->parent=NULL;
      calc_heights(t1->RC);
      calc_heights(t1);

      calc_hp(t1->parent);
    }
    else if(s=="RL")
    {
      node *t2=a;

      node *t=rightrot(a->RC);
      calc_heights(t->RC);
      calc_heights(t);
      calc_hp(t->parent);

      node *t1=leftrot(t2);
      root->parent=NULL;
      calc_heights(t1->LC);
      calc_heights(t1);

      calc_hp(t1->parent);
    }
  }

  node *rightrot(node *&a)
  {
    node *t=a->LC;
    a->LC=t->RC;

    if(a->LC!=NULL)
      a->LC->parent=a;

    t->RC=a;
    if(a->parent!=NULL)
    {
      node *t1=a->parent;
      a->parent=t;
      if(t1->LC!=NULL && t1->LC->data==a->data)
        t1->LC=t;
      else
        t1->RC=t;
      t->parent=t1;
    }
    else
    {
      root=t;
      a->parent=root;
    }
    return t;
  }

  node *leftrot(node *&a)
  {
    node *t=a->RC;
    a->RC=t->LC;

    if(a->RC!=NULL)
      a->RC->parent=a;

    t->LC=a;
    if(a->parent!=NULL)
    {
      node *t1=a->parent;
      a->parent=t;
      if(t1->LC!=NULL && t1->LC->data==a->data)
        t1->LC=t;
      else
        t1->RC=t;
      t->parent=t1;
    }
    else
    {
      root=t;
      a->parent=root;
    }
    return t;
  }

  void calc_heights(node *&a)
  {
    int lh,rh;
    if(a->LC!=NULL)
      lh=a->LC->height;
    else
      lh=-1;
    if(a->RC!=NULL)
      rh=a->RC->height;
    else
      rh=-1;
    a->height=max(lh,rh)+1;
  }


  void delete_()
  {
    int a;
    cout<<"Enter Element to be Deleted"<<endl;
    cin>>a;
    del_AVL(a);
  }

  void del_AVL(int a)
  {
    node *f=search(a);
    if(f==NULL)
    {
      cout<<"The Element not Present"<<endl;
      return;
    }
    node *t=del_BST(f);
    if(t==NULL)
      return;
    balance(t);
  }

  node *search(int a)
  {
    if(root==NULL)
      return NULL;
    node *temp=root;
    while(true)
    {
      if(temp==NULL)
        return NULL;
      if(temp->data<a)
        temp=temp->RC;
      else if(temp->data>a)
        temp=temp->LC;
      else
        return temp;
    }
  }

  node *del_BST(node *&a)
  {
    if(root->LC==NULL && root->RC==NULL)
    {
      free(root);
      root=NULL;
      return NULL;
    }
    if(a->LC==NULL && a->RC==NULL)
    {
      node *t=a->parent;
      if(t->LC!=NULL && t->LC->data==a->data)
        t->LC=NULL;
      else
        t->RC=NULL;
      free(a);
      calc_heights(t);
      calc_hp(t);
      return t;
    }
    if(a->LC==NULL || a->RC==NULL)
    {
      node *t1;
      if(a->LC!=NULL)
        t1=a->LC;
      else
        t1=a->RC;
      node *t=a->parent;
      if(t!=NULL)
      {
        if(t->LC->data==a->data)
          t->LC=t1;
        else
          t->RC=t1;
        t1->parent=t;
        calc_heights(t);
        calc_hp(t);
      }
      else
      {
        root=t1;
        t1->parent=NULL;
      }
      free(a);
      return t1;
    }
    node *t=a->LC;
    while(t->RC!=NULL)
      t=t->RC;
    a->data=t->data;
    node *t1=del_BST(t);
    return t1;
  }
};
