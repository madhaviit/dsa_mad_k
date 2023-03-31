#include<bits/stdc++.h>
using namespace std;


void dblSort(int a[], int n, int b[]) {
   int i, j, min, temp;
    vector<int> v;
   for (i = 0; i < n - 1; i++) {
      min = i;
      
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
        v.push_back(i);
        v.push_back(min);
   }
   for(int i=0; i<v.size(); i++){
       cout << v[i] << " ";
   }
   cout  << endl;
}



int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        dblSort(a,n,b);
        
    }   
    return 0;
}