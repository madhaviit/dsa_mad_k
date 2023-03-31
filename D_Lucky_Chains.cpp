#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, x, y, x1, i, j, p[10000001], diff;
    
    for(i=1; i<=10000000; i++)
    {
        p[i]=i;
    }
    
    for(i=2; i<=10000000; i++)
    {
        if(p[i]==i){
            for(j=i*i; j<=10000000; j+=i)
            {
                if(p[j]==j){
                    p[j]=i;
                }
            }
        }
    }
    
    cin>>t;
    
    while(t--)
    {
        cin>>x>>y;
        
        x1=1000000000;
        
        diff=y-x;
        
        if(diff==0){
            if(x==1){
                cout<<"1\n";
            }else{
                cout<<"0\n";
            }
            continue;
        }else if(diff==1){
            cout<<"-1\n";
            continue;
        }
        
        while(diff>1){
            j=p[diff];
            
            if((x%j)==0){
                x1=x;
            }else{
                x1=min(x1, (x/j+1)*j);
            }
            
            while((diff%j)==0){
                diff/=j;
            }
        }
        
        cout<<x1-x<<"\n";
    }
}


















// <bits/stdc++.h>
// using namespace std;
// typedef unsigned long long ull;
// #define forn(i, n) for (ull i = 0; i < ull(n); i++)
// ull XO = 100000+1;

// ull gcd(ull x,ull y)
// {
//    for (ull i = min(x,y); i > 0; i--)
//    {
//        if (y%i==0 && x%i==0)
//        {
//            return i;
//        }
       
//    }
   
// }

// //noob approach of me
// // void solve()
// // {
// //     ull x,y;
// //     cin>>x>>y;
// //     ull count=0;
// //     bool mad=1;
// //     ull lab;
// //     if (x-y==1||y-x==1)
// //     {
// //         cout<<-1<<endl;
// //     }else
// //     {
// //         while (mad)
// //         {
// //             lab=gcd(x,y);
// //             if (gcd(x,y)==1)
// //             {
// //                 count++;
// //                 x+=1;
// //                 y+=1;
// //             }else
// //             {
// //                 mad=0;
// //             }
            
            
// //         }
    
// //     cout<<count<<endl;    
// //     }
    
    

// //}


// //properm approach

// void solve(){


// }
// int main()
// {
//     ull t;
//     ull mad[XO];
//     for (ull i = 0; i < XO; i++)
//     {
//         mad[i]=i;
//     }
//     for (ull i = 2; i < XO; i++)
//     {
//         if (mad[i]==i)
//         {
//             for (ull j = i*i; j < XO; j=j+i)//because before i*i they have samller factors
//             {
//                 mad[j]=i;
//             }
            
//         }else
//         {
//             continue;
//         }
        
        
        
//     }
//     for (ull i = 0; i < XO; i++)
//     {
//         cout<<mad[i]<<" ";
//     }
    
    
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }