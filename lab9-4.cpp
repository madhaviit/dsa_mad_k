#include <bits/stdc++.h>
using namespace std;
const int size=10;
class pq
{
public:
    
    char node[size];
    int ewt[size];
    char prnt[size];
    pq(char a[]);
};

pq::pq(char a[])
{
    for (int i = 0; i < size; i++)
    {
        node[i]=a[i];
        ewt[i]=INT_FAST64_MAX;
        prnt[i]=NULL;
    }
    
    
}

int main(){
    int mad[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin>>mad[i][j];
        }
        
    };
    char sad[size]={'a','b','c','d','e','f','g','h','i','j'};
    pq(sad);
    
    
    
    return 0;
}




