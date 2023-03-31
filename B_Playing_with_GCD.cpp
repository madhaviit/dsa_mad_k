#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int gcd(int a , int b){
    if (b==0)
    {
        return a;
    }
    
    return gcd(b,a%b);
}
void solve(){
    int n;
    cin>>n;
    int mad[n];
    for (int i = 0; i < n; i++)
    {
        cin>>mad[i];
    }
    int sad[n+1];
    sad[0]=mad[0];
    sad[n]=mad[n-1];
    for (int i = 1; i < n; i++)
    {
        sad[i]=(mad[i]*mad[i-1])/gcd(mad[i],mad[i-1]);
    }
    for (int i = 0; i < n; i++)
    {
        int temp=gcd(sad[i],sad[i+1]);
        if (temp==mad[i])
        {
            continue;
        }else
        {
            cout<<"NO"<<endl;
            return;
        }
        
        
    }
    cout<<"YES"<<endl;
    return;
    
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}







  
// Driver code
int main()
{
  // number of vertices
  int v = 5;
 
 
  // Adddjacency matrix

}