#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int sub(int n){
    if(n<0) return -n;
    return n;
}


int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int t; 
    cin>>t; 
     
     while(t--){

           int n,k; 
    cin>>n>>k; 

    int given_array[n];
    int internalarray[k];

    for(int i=0;i<n;i++){ 
        cin>>given_array[i];
    } 

    int corr=0;
    int wro=1;

    for(int i=0;i<n;i++){ 

        if(given_array[i]==1){ 
            corr++;
            wro=2;
        }
        else if(corr>0){ 
            if(given_array[i]==wro){ 
                corr++; 
                wro++; 
            } 
        } 
    }

    int ans= n-corr; 
    if(ans%k>0){ 
        cout<<(ans/k)+1<<endl; 
    }
    else{ 
        cout<<ans/k<<endl; 
    }

}
}