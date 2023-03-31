#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)
int XO = 10000000+1;

int gcd(int x,int y)
{
   for (int i = min(x,y); i > 0; i--)
   {
       if (y%i==0 && x%i==0)
       {
           return i;
       }
       
   }
   
}

//noob approach of me
// void solve()
// {
//     ull x,y;
//     cin>>x>>y;
//     int count=0;
//     bool mad=1;
//     int lab;
//     if (x-y==1||y-x==1)
//     {
//         cout<<-1<<endl;
//     }else
//     {
//         while (mad)
//         {
//             lab=gcd(x,y);
//             if (gcd(x,y)==1)
//             {
//                 count++;
//                 x+=1;
//                 y+=1;
//             }else
//             {
//                 mad=0;
//             }
            
            
//         }
    
//     cout<<count<<endl;    
//     }
    
    

//}


//properm approach

void solve(){


}
int main()
{
    int t;
    int mad[XO];
    for (int i = 0; i < XO; i++)
    {
        mad[i]=i;
    }
    for (int i = 1; i < XO; i++)
    {
        if (mad[i]==i)
        {
            for (int j = i*i; j < XO; j=j+i)//because before i*i they have samller factors
            {
                mad[j]=i;
            }
            
        }else
        {
            continue;
        }
        
        
        
    }
    for (int i = 0; i < XO; i++)
    {
        cout<<mad[i]<<" ";
    }
    
    
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}