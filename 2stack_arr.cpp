#include <bits/stdc++.h>
using namespace std;

int h1=-2;
int h2=-2;
int n=0;
void push1(int arr[],int n)
{
  if(h1==-2)
    h1=(n);
  if((h2==(h1-1)) || (h1==0))
  {
    cout<<"Stack Overflow"<<endl;
    return;
  }
  cout<<"Enter Element"<<endl;
  h1--;
  cin>>arr[h1];
}
void push2(int arr[],int n)
{
  if(h2==-2)
    h2=-1;
  if((h2==(h1-1)) || (h2==(n-1)))
  {
    cout<<"Stack Overflow"<<endl;
    return;
  }
  cout<<"Enter Element"<<endl;
  h2++;
  cin>>arr[h2];
}
int length1()
{
  if((h1==-2))
    return 0;
  return (n-h1);
}
int length2()
{
  if(h2==-2)
    return 0;
  return (h2+1);
}
void pop1(int arr[])
{
  if(length1()==0)
  {
    cout<<"Stack Underflow"<<endl;
    return;
  }
  h1++;
}
void pop2(int arr[])
{
  if(length2()==0)
  {
    cout<<"Stack Underflow"<<endl;
    return;
  }
  h2--;
}
void show1(int arr[])
{
  if(length1()==0)
  {
    cout<<"Stack is Empty"<<endl;
    return;
  }
  for(int i=h1;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
void show2(int arr[])
{
  if(length2()==0)
  {
    cout<<"Stack is Empty"<<endl;
    return;
  }
  for(int i=h2;i>=0;i--)
    cout<<arr[i]<<" ";
  cout<<endl;
}
int main()
{
  cout<<"Enter the combined length of the two stacks"<<endl;
  cin>>n;
  int arr[n];
  while(true)
  {
    int a;
    cout<<"Enter 1 for stack 1 and 2 for stack 2"<<endl;
    cin>>a;
    if(a==1)
    {
      cout<<"1:Push into Stack"<<endl;
      cout<<"2:Pop from Stack"<<endl;
      cout<<"3:Show the Stack"<<endl;
      cout<<"4:Display the length of the Stack"<<endl;
      cin>>a;
      if(a==1)
        push1(arr,n);
      else if(a==2)
        pop1(arr);
      else if(a==3)
        show1(arr);
      else if(a==4)
      {
        int l1;
        l1=length1();
        cout<<l1<<endl;
      }
      else
        cout<<"Enter Valid Value"<<endl;
    }
    else if(a==2)
    {
      cout<<"1:Push into Stack"<<endl;
      cout<<"2:Pop from Stack"<<endl;
      cout<<"3:Show the Stack"<<endl;
      cout<<"4:Display the length of the Stack"<<endl;
      cin>>a;
      if(a==1)
        push2(arr,n);
      else if(a==2)
        pop2(arr);
      else if(a==3)
        show2(arr);
      else if(a==4)
      {
        int l2;
        l2=length2();
        cout<<l2<<endl;
      }
      else
        cout<<"Enter valid value"<<endl;
    }
    else
      cout<<"Enter valid value"<<endl;
    int b;
    cout<<"Enter 0 to stop"<<endl;
    cin>>b;
    if(b==0)
      break;
  }
  return 0;
}
