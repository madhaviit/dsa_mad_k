#include<iostream>
using namespace std;

unsigned long long int small(unsigned long long int arr[], unsigned long long int n){
   unsigned long long int temp = arr[0];
   for(unsigned long long int i=0; i<n; i++) {
      if(temp>arr[i]) {
         temp=arr[i];
      }
   }
   return temp;
}

int main(){
    unsigned long long int t;
    cin>>t;
    for (unsigned long long int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        unsigned long long int cand[n];
        unsigned long long int tot=0;
        for (int j = 0; j < n; j++)
        {
            cin>>cand[j];
            tot=tot+cand[j];
        }
        unsigned long long int mina = small(cand,n);
        cout<<tot-n*mina<<endl;  

        
    
    
    }   
    return 0;
}