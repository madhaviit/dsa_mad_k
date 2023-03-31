#include<iostream>
using namespace std;

int main (){
    int size;
    cout<<"enter the size of array you wanna add :"<<endl;
    cin>>size;
    int arr1[size],arr2[size],arr3[size];
    cout<<"enter elements of array 1";
    for(int i = 0; i<size; i++){
        cin>>arr1[i];
    }
    cout<<"enter elements of array 2";
    for(int i = 0; i<size; i++){
        cin>>arr2[i];
    }
    for(int i=0;i<size ; i++){
        arr3[i]=arr1[i]+arr2[i];
    }
    cout<<"added elements of third array are :"<<endl;
    for(int i = 0; i<size; i++){
        cout>>arr3[i]<<" ";
    }
}