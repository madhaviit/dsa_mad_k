#include <iostream>
using namespace std;
int main(){
        int a;
        string months[] = {"January","February","March","April","May","June","July","august","September","October","November","December"};
        cout<<"Enter a integer: ";
        cin>>a;
        if (a>=1 && a<=12)
            cout<<"Name of the month corresponding to the input: "<<months[a-1]<<endl;
        else
            cout<<"Enter a integer between 1 and 12"<<endl;
return 0;
}