#include <bits/stdc++.h>
using namespace std;
#include "AVL.h"
#include "vector.h"

vector_ <int> v;

void avl_to_vect(node *&a)
{
  if(a==NULL)
    return;
  avl_to_vect(a->LC);
  v.push_back(a->data);
  avl_to_vect(a->RC);
}

void show_median(AVL &a)
{
  v.clear();
  avl_to_vect(a.root);
  int l=v.size();
  float med;
  if(l%2!=0)
    med=(float)v[l/2];
  else
    med=(float)(v[l/2]+v[l/2-1])/(float)2;
  cout<<"Median is "<<med<<endl;
}

void insert(AVL &a)
{
  int b;
  cout<<"Enter Element"<<endl;
  cin>>b;
  a.insert_one(b);
}

int main()
{
  AVL a;
  while(true)
  {
    int b;
    cout<<"Options:"<<endl;
    cout<<"1:Insert Elements"<<endl;
    cout<<"2:Show the Median"<<endl;
    cin>>b;
    if(b==1)
      insert(a);
    else if(b==2)
      show_median(a);
    else
      cout<<"Enter Proper Value"<<endl;
    cout<<"Enter 0 to stop"<<endl;
    cin>>b;
    if(b==0)  return 0;
  }
}
