#include <bits/stdc++.h>
using namespace std;
#include <AVL.h>

void input(AVL &a)
{
  while(true)
  {
    int c;
    cout<<"Enter an Element"<<endl;
    cin>>c;
    a.insert_one(c);
    cout<<"Enter 0 to stop Inserting Elements"<<endl;
    cin>>c;
    if(c==0)    return;
  }
}

void in_order(node *&a,vector <int>&v)
{
  if(a==NULL)
    return;
  in_order(a->LC,v);
  v.push_back(a->data);
  in_order(a->RC,v);
}

void show(vector <int> &v)
{
  for(auto i:v)
    cout<<i<<' ';
  cout<<endl;
}

void merge(vector <int> &v,vector <int> &v1,vector <int> &v2)
{
  int i=0;
  int j=0;
  while(i<v1.size() && j<v2.size())
  {
    if(v1[i]<v2[j])
    {
      v.push_back(v1[i]);
      i++;
    }
    else
    {
      v.push_back(v2[j]);
      j++;
    }
  }
  while(i<v1.size())
  {
    v.push_back(v1[i]);
    i++;
  }
  while(j<v2.size())
  {
    v.push_back(v2[j]);
    j++;
  }
}

void sort_array_to_AVL(AVL &a,vector <int> &v)
{
  for(auto i:v)
    a.insert_one(i);
}

int main()
{
  AVL a,b;
  input(a);
  input(b);

  vector <int> v1;
  vector <int> v2;
  in_order(a.root,v1);
  in_order(b.root,v2);

  vector <int> v;
  merge(v,v1,v2);

  AVL c;
  sort_array_to_AVL(c,v);

  c.in_order(c.root);
  cout<<endl;
  c.parent(c.root);
}
