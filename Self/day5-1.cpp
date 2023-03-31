#include <iostream>
using namespace std;

int main(){
        int a;
        int s =0;
        
        while(a!=-999){
            cout<<"Integer : ";
            cin>>a;
            s+=a;
        }
        s=s+999;
            cout<<"Sum of entered integers excluding -999 is: "<<s<<endl;
return 0;
}