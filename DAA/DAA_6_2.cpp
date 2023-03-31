#include<bits/stdc++.h>
using namespace std;






int main(){

    int k= 3, sum =0  ;

    vector<int> nums = {1,3,6} ;

    // cin>>k ;

    for(int i =0 ; i<nums.size() ; ++i ){
        sum += nums[i] ;
        cout<<nums[i]<<" ";
    }
    

    int avg = sum /( nums.size()) ;
    cout<<avg<<endl;
    // int avg = round(sum / nums.size()) ;

    for(int i =0 ; i<nums.size() ; ++i ){
        if(nums[i] > avg  ){
            nums[i] -= k ;
        }   
        else{
            nums[i] += k ;
        }
        
    }
    int min=INFINITY;
    int max=-1;
    for(int i =0 ; i<nums.size() ; ++i ){
        cout<<nums[i]<<" ";
        if (nums[i]>max)
        {
            max=nums[i];
        }
        if (nums[i]<min)
        {
            min=nums[i];
        }
        
        
    }
    cout<<endl<<max-min<<endl;



}
