#include <iostream>

using namespace std;
int main(){
        int a,i=0;
        int c;
        cout<<"Enter the size of array you want to construct: ";
        cin>>a;
        int _array[a];
        for (;;){
            cout<<"Enter the element: ";
            cin>>c;
            if (c>=-100 && c<=100){{
                c = _array[i];
                ++i;
            }
                if(i==a){
                break;
                }
            }else 
                cout<<"You have crossed the range. Please enter a number from -100 to 100."<<endl;
        }
return 0;
}