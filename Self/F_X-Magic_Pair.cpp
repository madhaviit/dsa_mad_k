// #include <bits/stdc++.h>
// using namespace std;
// typedef unsigned long long ull;
// #define forn(i, n) for (int i = 0; i < int(n); i++)
// ull mod(ull a, ull b){
//     if (a>b)
//     {
//         return a-b;
//     }
//     else
//     {
//         return b-a;
//     }
    
// }
// bool solver(ull a,ull b,ull x){
//     ull modu = mod (a,b);//23 8
//     if (modu==x)
//     {
//         return true;
//     }
//     else if (a==x || b==x)
//     {
//         return true;
//     }
//     else if (a==0 || b==0)
//     {
//         return false;
//     }
//     else if(a==b) {return false;}       
//     else
//     {
//         if (a<b)
//         {
//             return solver(a,b%a,x);
//         }
//         else{
//         return solver(a%b,b,x); }//23,38  15,23  8 15     
//     }
// }
// void solve()
// {
//     ull a,b,x;
//     cin>>a>>b>>x;
//     bool madh = solver(a,b,x);
//     if (madh)
//     {
//         cout<<"YES"<<endl;
//     }else
//     {
//         cout<<"NO"<<endl;
//     }
    
    
// }
    

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

bool answer(long long int t1, long long int t2,long long int t3)
    {
        if (t3 > max(t1, t2))
            return false;
        if (t1 == 0)
            return false;
        if ((t2 - t3) %  t1== 0)
            return true;
        return answer(t2 % t1, t1, t3);
    }

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int a,b,x;
	    cin>>a>>b>>x;
	   
	   // bool bo=false;
	   // if(x==a || x==b ) 
	   // {cout<<"YES"<<endl;
	   //  bo=true;
	   // }
	   // else
	   // {
	   // for(int i=0;a>x || b>x ;i++)
	   // {
	   //     if(a>b)
	   //     {
	   //         a=a-b;
	   //         if(x==a || x==b) 
	   //         {cout<<"YES"<<endl;
	   //             bo=true;
	   //             break;
	   //         }
	   //     }
	        
	   //     else 
    //       {
	   //         b=b-a;
	   //         if(x==a || x==b) {cout<<"YES"<<endl; 
	   //             bo=true;
	   //             break;
	   //         }
	   //     }
	   // }
	   // if(bo==false) cout<<"NO"<<endl;
	        
	   // }
	   if(a>b)
	    {
	        long long int in=b;
	        b=a;
	        a=in;
	        
	    }
	    
	    bool bo =answer(a,b,x);
	    if(bo) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	   
	}
	return 0;
}