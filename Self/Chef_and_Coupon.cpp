#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c,d;
        cin>>d>>c;     // d=price of coupon , c=delivery charge
        long long int s1=0,s2=0;
        int a[3],b[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
            s1=s1+a[i];
        }

        for(int i=0;i<3;i++)
        {
            cin>>b[i];
            s2=s2+b[i];
        }

        if(s1>=150 && s2>=150)
        {
            if(c<2*d)  cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
        else if(s1<150 && s2<150)
        {
            cout<<"NO"<<endl;
        }

        else 
        {
            if(c>=d)  cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }

    }
}