#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        unsigned long long int a,b,c;
        cin>>a>>b>>c;
        cout<<c+b+a<<" "<<c+b<<" "<<c<<endl;
    }   
    return 0;
}