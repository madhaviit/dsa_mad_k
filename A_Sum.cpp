#include <bits/stdc++.h>
typedef unsigned long long int llt;
typedef long long ll;
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    
    cin>>t;
    
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int p=0;

        if(a==(b+c)||b==(a+c)||c==(a+b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
	return 0;
}