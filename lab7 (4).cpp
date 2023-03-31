#include <bits/stdc++.h>
using namespace std;
#include "vector.h"
#include "pq.h"

template <class T1,class T2> struct pair_
{
  T1 first;
  T2 second;
};

string sort(string s)
{
  int l=s.length();
  char a[l];
  for(int i=0;i<l;i++)
    a[i]=s[i];
  sort(a,a+l);
  for(int i=0;i<l;i++)
    s[i]=a[i];
  return s;
}

int main()
{
  string s;
  cout<<"Enter the String"<<endl;
  cin>>s;
  int k;
  cout<<"Enter k"<<endl;
  cin>>k;
  s=sort(s);

  vector_ <pair_<char,int>> v;
  int temp=0;
  pair_<char,int> p;
  p.first=s[0];
  p.second=1;
  v.push_back(p);
  for(int i=1;i<s.length();i++)
  {
    char c=s[i];
    if(v[temp].first==c)
      v[temp].second++;
    else
    {
      p.first=c;
      p.second=1;
      v.push_back(p);
      temp++;
    }
  }

  sort(v.begin(),v.end(),[](pair_<char,int> a,pair_<char,int> b)
  {
    return a.second<b.second;
  });


  vector_ <char> v1;
  for(int i=0;i<s.length();i++)
    v1.push_back('0');

  priority_queue <int> q;
  if(k>s.length())
  {
    cout<<"Not Possible"<<endl;
    return 0;
  }
  for(int i=0;i<k;i++)
    q.push((-1)*i);
  int flag=0;

  for(int i=v.size()-1;i>=0;i--)
  {
    char chr=v[i].first;
    int f=v[i].second;

    int pos=q.top()*(-1);
    q.pop();
    if(pos==-1)
    {
      flag=1;
      break;
    }
    int c=0;
    while(c<f)
    {
      if(pos>=s.length())
      {
        flag=1;
        break;
      }
      v1[pos]=chr;
      pos=pos+k;
      c++;
    }
    if(pos<s.length())
      q.push((-1)*pos);
  }
  if(flag==1)
  {
    cout<<"Not Possible"<<endl;
    return 0;
  }
  for(int i=0;i<s.length();i++)
    s[i]=v1[i];
  cout<<s<<endl;
  return 0;
}
