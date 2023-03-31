#include<iostream>
using namespace std;
int mod(char a, char b){
    int asdi = a - b;
    int realdi;
    if (asdi>0)
    {
        realdi=asdi;    
    }else{
        realdi = (-1)*asdi;
    }
    return realdi;    
}
int diff(string a,string b,int len){
    int di=0;
    for (int i = 0; i < len; i++)
    {
        di = di+ mod(a[i],b[i]);
    }
    return di;    
}

int main(){
   int t;
   cin>>t;
   for(int i=0; i<t;i++){
       int n,m;
       cin>>n>>m;
       string wor[n];
       int mindiff = INT32_MAX;
       for (int i = 0; i < n; i++)
       {
           cin>>wor[i];
       }
       for (int p = 0; p < n; p++)
       {
           for (int q = 0; q < p; q++)
           {
               int newdiff = diff(wor[p],wor[q],m);
               if (newdiff<mindiff)
               {
                   mindiff=newdiff;
               }                          
               
           }
           
       }
       cout<<mindiff<<endl;       
  }  
}