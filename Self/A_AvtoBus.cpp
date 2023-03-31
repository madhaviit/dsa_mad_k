#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
       unsigned long long int n;
       cin>>n;
       if (n%2==1)
       {
           cout<<-1<<endl;
       }else
       {
           unsigned long long int cha = n%4;
           unsigned long long int sha = n%6;
           unsigned long long int x;
           unsigned long long int y;
           if (cha==0)
           {
               y=n/4;
               if (sha==0)
               {
                    x=n/6;
               }else if (sha==2)
               {
                    x=(n-8)/6+2;
               }
               else{
                   x=(n-4)/6+1;
               }              
           }
           else
           {
               if (sha==0)
               {
                   x=n/6;
                   y=(n-6)/4+1; 
               }else if (sha==2)
               {
                    x=(n-8)/6+2;
                    y=(n-6)/4+1;
               }
               else{
                   x=(n-4)/6+1;
                   y=(n-6)/4+1;
               }
           }
           if (n>x && n>y)
           {
               cout<<x<<" "<<y<<endl;
           }
           else
           {
               cout<<-1<<endl;
           }
           
           
           
           
           
       }
       
       

   }


   return 0;
}