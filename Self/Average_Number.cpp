#include<iostream>
using namespace std;

int main (){
    int T;
    cin>>T;
    while (T--)
    {
        int N,K,V;
        cin>>N>>K>>V;
        int sum=0;
        for (int i = 0; i < N; i++)
        {
            int hold;cin>>hold; sum = sum+hold;
        }
        float neu = V*(N+K)-sum;
        float B = neu/K;
        int ans = B;
        if (B>0 && ans-B==0 )
        {
            cout<<B<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
        }
    return 0;
}
