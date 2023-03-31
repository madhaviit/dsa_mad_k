#include <iostream>
using namespace std;
int main(){
        int a,b;
        cout<<"Enter two integers seperated by a space: ";
        cin>>a>>b;
        if (cin.fail()== true)
            cout<<"error"<<endl;
        else if (a>b)
            cout<<"down"<<endl;
        else if (a == b)
            cout<<"equal"<<endl;
        
        else if (a<b)
            cout<<"up"<<endl;
      
return 0;
}