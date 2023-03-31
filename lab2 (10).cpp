#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mad[3][3];
    int ash[3][3];
    int aak[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>mad[i][j];
            cin>>ash[i][j];
        }
        
    }
    int element = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                element = element+ (mad[i][k]*ash[k][j]);
            }
            aak[i][j]=element;
            element=0;
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           cout<<aak[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    return 0;
 
}