#include <bits/stdc++.h>
using namespace std;
#include "vector.h"

struct data
{
  int ai;
  int aj;
  double frac;
};

int int_(string s)
{
  int n=0;
  int l=s.length();
  for(int i=0;i<l;i++)
  {
    char ch=s[i];
    int b=(int)ch-(int)'0';
    n=n*10+b;
  }
  return n;
}

void check_min_heap_del(vector_ <data*> &v,int a)
{
  int lc=2*a+1;
  int rc=2*a+2;
  if(lc>=v.size())
  {
    return;
  }
  float b=v[a]->frac;
  float c=v[lc]->frac;
  if(rc>=v.size())
  {
    if(c<b)
    {
      int t1=v[a]->ai;
      int t2=v[a]->aj;
      v[a]->ai=v[lc]->ai;
      v[a]->aj=v[lc]->aj;
      v[lc]->ai=t1;
      v[lc]->aj=t2;
      v[a]->frac=c;
      v[lc]->frac=b;
      check_min_heap_del(v,lc);
    }
    return;
  }
  float d=v[rc]->frac;
  if(d<b && d<=c)
  {
    int t1=v[a]->ai;
    int t2=v[a]->aj;
    v[a]->ai=v[rc]->ai;
    v[a]->aj=v[rc]->aj;
    v[rc]->ai=t1;
    v[rc]->aj=t2;
    v[a]->frac=d;
    v[rc]->frac=b;
    check_min_heap_del(v,rc);
  }
  else if(c<b && c<d)
  {
    int t1=v[a]->ai;
    int t2=v[a]->aj;
    v[a]->ai=v[lc]->ai;
    v[a]->aj=v[lc]->aj;
    v[lc]->ai=t1;
    v[lc]->aj=t2;
    v[a]->frac=c;
    v[lc]->frac=b;
    check_min_heap_del(v,lc);
  }
}

void heapify(vector_ <data*> &v)
{
  for(int i=v.size()-1;i>=0;i--)
    check_min_heap_del(v,i);
}

void pop(vector_ <data*> &v1)
{
  v1[0]->ai=v1[v1.size()-1]->ai;
  v1[0]->aj=v1[v1.size()-1]->aj;
  v1[0]->frac=v1[v1.size()-1]->frac;
  v1.pop_back();
  check_min_heap_del(v1,0);
}

int main()
{
  string s,s1="";
  getline(cin,s);
  int l=s.length();
  vector_ <int> v;
  for(int i=0;i<l;i++)
  {
    char ch=s[i];
    if(ch!=' ')
      s1=s1+s[i];
    else
    {
      v.push_back(int_(s1));
      s1="";
    }
  }
  v.push_back(int_(s1));

  vector_ <data*> v1;
  for(int i=0;i<v.size();i++)
  {
    for(int j=i+1;j<v.size();j++)
    {
      data *d;
      d=(data *)malloc(sizeof(data));
      d->ai=v[i];
      d->aj=v[j];
      d->frac=(double)d->ai/(double)d->aj;
      v1.push_back(d);
    }
  }

  heapify(v1);
  for(int i=0;i<v1.size();i++)
    cout<<v1[i]->ai<<" "<<v1[i]->aj<<" "<<v1[i]->frac<<endl;
  int k;
  cout<<"Enter k: "<<endl;
  cin>>k;
  if(k>v1.size())
  {
    cout<<"The k Entered is larger than the no of Fractions"<<endl;
    return 0;
  }
  for(int i=1;i<k;i++)
  {
    pop(v1);
  }
  cout<<v1[0]->ai<<" "<<v1[0]->aj<<endl;
  return 0;
}
