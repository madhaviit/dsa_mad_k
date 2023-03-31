#include<bits/stdc++.h>
using namespace std;
void printVec(vector <int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    
}
int main ()
{
    vector <int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i);
        printVec(v);
        
    }
    
    return 0;
}