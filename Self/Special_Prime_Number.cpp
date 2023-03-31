#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int j = 2; j < n; j++)
    {
        if (n%j==0)
        {
            cout<<"No";
            break;
        }
        
    }
    
    
    return 0;
}