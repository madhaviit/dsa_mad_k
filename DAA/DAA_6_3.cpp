#include<bits/stdc++.h>
using namespace std;






int main(){


    // vector<int> num = {1,7,4,9,2,5};
    // vector<int> num = {1,17,5,10,13,15,10,5,16,8};
    vector<int> num = {1,2,3,4,5,6,7,8,9};
    vector<int> sign_array;

    // cout<<signbit(5); //returns 1 for -ve number
    // cout<<signbit(-5);

    
    for(int i = 0 ; i< num.size()-1 ; ++i ){
        sign_array.push_back( signbit(num[i+1]-num[i]) );
    }

    for(int i =0 ; i< sign_array.size()-1 ; ++i ){
        if(sign_array[i+1] == sign_array[i]){
            sign_array.erase(sign_array.begin() + i+1) ;
            i--;
        }
    }

    cout<<sign_array.size()+1<<endl;

}
