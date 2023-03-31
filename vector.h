#include <bits/stdc++.h>
using namespace std;

template <class T> class vector_
{
public:
  int b=0;
  T *a=(T *)malloc(pow(2,b)*sizeof(T));
  int i=0;

  void push_back(T c)
  {
    *(a+i)=c;
    i++;
    if(i==pow(2,b))
    {
      b++;
      T *a1=(T *)malloc(pow(2,b)*sizeof(T));
      for(int k=0;k<i;k++)
        *(a1+k)=*(a+k);
      free(a);
      a=a1;
    }
  }

  void show()
  {
    if(size()==0)
    {
      cout<<"The Vector is Empty"<<endl;
      return;
    }
    for(int k=0;k<i;k++)
      cout<<*(a+k)<<" ";
    cout<<endl;
  }

  int size()
  {
    return i;
  }

  int capacity()
  {
    return pow(2,b);
  }

  T* begin()
  {
    return a;
  }

  T* end()
  {
    return (a+i);
  }

  auto &operator[](int b)
  {
    return a[b];
  }

  void pop_back()
  {
    if(size()==0)
      return;
    i--;
    if(i<pow(2,b-1))
    {
      b--;
      T *a1=(T *)malloc(pow(2,b)*sizeof(T));
      for(int k=0;k<i;k++)
        *(a1+k)=*(a+k);
      free(a);
      a=a1;
    }
  }

  void erase(int pos)
  {
    if(pos>i)   return;
    if(i==pow(2,b-1))
      b--;
    T *a1=(T *)malloc(pow(2,b)*sizeof(T));
    int temp=0;
    for(int k=0;k<i;k++)
    {
      if(k!=pos)
      {
        *(a1+temp)=*(a+k);
        temp++;
      }
    }
    free(a);
    a=a1;
    i--;
  }

  void clear()
  {
    i=0;
    b=0;
    T *a1=(T *)malloc(pow(2,b)*sizeof(T));
    free(a);
    a=a1;
  }

  bool empty()
  {
    if(size()==0)
      return true;
    return false;
  }

  void shrink_to_fit(int n)
  {
    if(i<n)
      return;
    while(n<pow(2,b))
      b--;
    b++;
    T *a1=(T *)malloc(pow(2,b)*sizeof(T));
    for(int k=0;k<n;k++)
      *(a1+k)=*(a+k);
    free(a);
    a=a1;
    i=n;
  }

  void sort()
  {
    std::sort(a,a+i);
  }

  void reverse()
  {
    T *a1=(T *)malloc(pow(2,b)*sizeof(T));
    for(int k=0;k<i;k++)
      *(a1+i-1-k)=*(a+k);
    free(a);
    a=a1;
  }
};

// int main()
// {
//   vector_ <double> v;
//   while(true)
//   {
//     int a;
//     cout<<"1:Push Back"<<endl;
//     cout<<"2:Pop Back"<<endl;
//     cout<<"3:Show"<<endl;
//     cout<<"4:Size"<<endl;
//     cout<<"5:Capacity"<<endl;
//     cout<<"6:Erase Element at a paticular position"<<endl;
//     cout<<"7:Clear the Vector"<<endl;
//     cout<<"8:Vector Empty?(Returns 1 if vector is empty and 0 if it isnt)"<<endl;
//     cout<<"9:Shrink the Vector to a given size"<<endl;
//     cout<<"10:Print the nth Element"<<endl;
//     cout<<"11:Sort the Vector"<<endl;
//     cout<<"12:Reverse the Vector"<<endl;
//     cin>>a;
//     if(a==1)
//     {
//       double b;
//       cout<<"Enter Element"<<endl;
//       cin>>b;
//       v.push_back(b);
//     }
//     else if(a==2)
//       v.pop_back();
//     else if(a==3)
//       v.show();
//     else if(a==4)
//       cout<<v.size()<<endl;
//     else if(a==5)
//       cout<<v.capacity()<<endl;
//     else if(a==6)
//     {
//       int pos;
//       cout<<"Enter Position"<<endl;
//       cin>>pos;
//       v.erase(pos);
//     }
//     else if(a==7)
//       v.clear();
//     else if(a==8)
//       cout<<v.empty()<<endl;
//     else if(a==9)
//     {
//       int n;
//       cout<<"Enter the Size"<<endl;
//       cin>>n;
//       v.shrink_to_fit(n);
//     }
//     else if(a==10)
//     {
//       int n;
//       cout<<"Enter n"<<endl;
//       cin>>n;
//       cout<<v[n-1]<<endl;
//     }
//     else if(a==11)
//       v.sort();
//     else if(a==12)
//       v.reverse();
//     else
//       cout<<"Enter Proper Value"<<endl;
//     cout<<"Enter 0 to stop"<<endl;
//     cin>>a;
//     if(a==0)    return 0;
//   }
// }
