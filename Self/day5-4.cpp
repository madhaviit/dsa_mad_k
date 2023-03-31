#include <iostream>

using namespace std;
int main(){
        int a,b,d,c=0;
        cout<<"Enter a number: ";
        cin>>a;
        d = a;
        while (a!=0){
            b = a%10;         
            a = a/10;          
            c = (c*10) +b;    
        }
        cout<<"The reverse number is :"<<c<<endl;
        if (c == d)
            cout<<"Entered number is a palindrome"<<endl;
            else 
                cout<<"Entered number is not a palindrome"<<endl;
return 0;
}