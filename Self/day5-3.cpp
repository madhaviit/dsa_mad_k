#include <iostream>

using namespace std;
int main(){
        unsigned long long int a;
        unsigned long long int b=0;
        cout<<"Enter any positive integer: ";
        cin>>a;
        if (9999999999999999>=a>=1){
            while(a!=1)
                if (a%2==0){
                    a=a/2;
                    b+=1;
                    cout<<"Next value is : "<<a<<endl;
            }
                else{
                    a = a*3+1;
                    b+=1;
                    cout<<"Next value is : "<<a<<endl;
            }
            cout<<"Total nuber of operatipons : "<<b<<endl;
        } else
              cout<<"Error"<<endl; 
        
return 0;
}