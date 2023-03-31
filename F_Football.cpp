 #include <bits/stdc++.h>
 using namespace std;
 typedef unsigned long long int ull;
 #define forn(i, n) for (int i = 0; i < int(n); i++)
 void solve(int n, int a, int b)
{
    
    cout<<n<<a<<b;
    vector<long> u(n, 0), v(n, 0);
    for (long p = 0; p < n; p++)
    {
        if (p % 2 == 0)
        {
            if (a > 0)
            {
                u[p] = 1;
                --a;
            }
            else if (b > 0)
            {
                v[p] = 1;
                --b;
            }
        }
        else if (p % 2 == 1)
        {
            if (b > 0)
            {
                v[p] = 1;
                --b;
            }
            else if (a > 0)
            {
                u[p] = 1;
                --a;
            }
        }
    }

    for (long p = 0; a && p < n; p++)
    {
        if (u[p])
        {
            u[p] += a;
            a = 0;
        }
    }
    if (a > 0)
    {
        u[0] += a;
        a = 0;
    }
    for (long p = 0; b && p < n; p++)
    {
        if (v[p])
        {
            v[p] += b;
            b = 0;
        }
    }
    if (b > 0)
    {
        v[0] += b;
        b = 0;
    }
    long res(0);
    for (long p = 0; p < n; p++)
    {
        res += (u[p] == v[p]);
    }

    cout << res ;
    

    return ;
}
 void folve(int n, int a, int b)
 {
     cout<<n<<a<<b;
     int arr[n],brr[n];
     if (n==1)
     {
         if (a==b)
         {
             cout<<1;
         }else
         {
             cout<<0;
         }
         
         return;
     }else
     {
         if (a+b>=n && n!=1+b-a&&n!=1+a-b)
         {
             cout<<0;
             forn(i,n-1){
                 if (a>=b)
                 {
                     arr[i]=1;
                     brr[i]=0;
                     a--;
                 }else if (a==b && a==0)
                 {
                     arr[i]=0;
                     brr[i]=0;
                 }
                 else
                 {
                     brr[i]=1;
                     arr[i]=0;
                     b--;
                 }
             }
             arr[n-1]=a;
             brr[n-1]=b;
         }else if (a+b>=n && (n==1+b-a||n==1+a-b))
         {
             cout<<0;
             forn(i,n-1){
                 if (i==0)
                 {
                    if (a>=b)
                 {
                     arr[i]=2;
                     brr[i]=0;
                     a=a-2;
                 }else if (a==b && a==0)
                 {
                     arr[i]=0;
                     brr[i]=0;
                 }else
                 {
                     brr[i]=2;
                     arr[i]=0;
                     b=b-2;
                 }
                 }else{
                 if (a>=b)
                 {
                     arr[i]=1;
                     brr[i]=0;
                     a--;
                 }else if (a==b && a==0)
                 {
                     arr[i]=0;
                     brr[i]=0;
                 }else
                 {
                     brr[i]=1;
                     arr[i]=0;
                     b--;
                 }
             }}
             arr[n-1]=a;
             brr[n-1]=b;
         }
         else
         {
             cout<<n-a-b;
             forn(i,n-1){
                 if (a>=b &&a!=0)
                 {
                     arr[i]=1;
                     brr[i]=0;
                     a--;
                 }else if (a==b && a==0)
                 {
                     arr[i]=0;
                     brr[i]=0;
                 }else if(b>a)
                 {
                     brr[i]=1;
                     arr[i]=0;
                     b--;
                 }
         }
         arr[n-1]=a;
         brr[n-1]=b;
     }
     
 }
 }
 int main()
 {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     // int t;
     // cin >> t;
     // while (t--)
     // {
     //     solve();
     // }
     int n;
     int a,b;
     for (int n = 1; n < 10; n++)
     {
        for (int a = 1; a < 100; a++)
        {
            for (int b = 1; b < 100; b++)
            {
                solve(n,a,b);
            }
            
        }
        
     }
     
     
     return 0;
 }
//  #include <cstdio>
//  #include <vector>
//  int main(){
//      long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
//      vector<long> u(n, 0), v(n, 0);
//      for(long p = 0; p < n; p++){
//          if(p % 2 == 0){
//              if(a > 0){u[p] = 1; --a;}
//              else if (b > 0){v[p] = 1; --b;}
//          }
//          else if(p % 2 == 1){
//              if(b > 0){v[p] = 1; --b;}
//              else if(a > 0){u[p] = 1; --a;}
//          }
//      }
//      for(long p = 0; a && p < n; p++){if(u[p]){u[p] += a; a = 0;}}
//      if(a > 0){u[0] += a; a = 0;}
//      for(long p = 0; b && p < n; p++){if(v[p]){v[p] += b; b = 0;}}
//      if(b > 0){v[0] += b; b = 0;}
//      long res(0); for(long p = 0; p < n; p++){res += (u[p] == v[p]);}
//      printf("%ld\n", res);
//      for(long p = 0; p < n; p++){printf("%ld:%ld\n", u[p], v[p]);}
//      return 0;
//  }



