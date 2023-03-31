#include <iostream>

using namespace std;
int main(){
        int arr[100];
        int small;
        for(int i=0;i<100;++i){
            cout<<"Enter a digit: ";
            cin>>arr[i];
        }
        small=arr[0];
        for(int j=0;j<100;++j){
            if (small>=arr[j]){
                small=arr[j];
            }
        }
        cout<<"The smallest element in given array is: "<<small<<endl;
return 0;
}