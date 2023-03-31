#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

void countingSort(int mad[], int n){
    int freq[10]={0};
    forn(i,n){
        freq[mad[i]]+=1;
    }
    forn(i,n){
        if (i==0)
        {
            i++;
        }
        freq[i]+=freq[i-1];
    }
    int b[n];
    for (int i = n-1; i >= 0; i--)
    {
        b[freq[mad[i]]-1]=mad[i];
        freq[mad[i]]=freq[mad[i]]-1;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    return;
    
}

string* optimizedCountingSort(string mad[], int n, int ith){
    int freq[10]={0};
    vector<pair<int,string>> sad;
    for (int i = 0; i < n; i++)
    {
        sad.push_back(make_pair(int(mad[i][ith])-48,mad[i]));
    }
    

    forn(i,n){
        freq[int(mad[i][ith])-48]+=1;
    }
    forn(i,10){
        if (i==0)
        {
            i++;
        }
        freq[i]+=freq[i-1];
    }
    pair<int,string> b[n];
    for (int i = n-1; i >= 0; i--)
    {
        b[freq[int(mad[i][ith])-48]-1]=sad[i];
        freq[int(mad[i][ith])-48]=freq[int(mad[i][ith])-48]-1;
    }
    for (int i = 0; i < n; i++)
    {
        mad[i]=b[i].second;
    }
    
    return mad;
    
}
void solve(){
    int n;
    cin>>n;

    int nums [n];
    string mad[n];
    for(int i =0 ;i< n;i++){
        cin>>nums[i];
        mad[i]=to_string(nums[i]);
    } 

    if(n<2) {
       cout<<0;
       return ;
    }
    for (int lop = mad[0].size()-1; lop >=0 ; lop--)
    {
        optimizedCountingSort(mad,n,lop);
    }
    for(int i =0 ;i< n;i++){
        
        nums[i]=stoi(mad[i]);
    } 

    int ans = INT_MIN;
    for(int i =0;i<n-1;i++){

        if(nums[i+1]-nums[i]>ans){
            ans = nums[i];
        }
    }
    cout<<ans;
}


int main(){
    solve();
    return 0;
}