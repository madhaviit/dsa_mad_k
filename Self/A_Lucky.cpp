#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;
   for(int i=0; i<t;i++)
   {
       string tic;
       cin>>tic;
       int sum1 = tic[1]+tic[2]+tic[0];
       int sum2 = tic[3]+tic[4]+tic[5];
       if(sum1==sum2){
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
       
   }
   
}