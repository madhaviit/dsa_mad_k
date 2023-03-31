#include<iostream>
using namespace std ;
unsigned long long int diva(int x, int y){
    int z = y/x;
    if (y%x==0)
    {
    return z;
    }
    else
    {return z+1 ;}
}
int main ()
{
    int n,m,a;
    unsigned long long int b,c ;
    cin>>n>>m>>a;
    b= diva(a,n);
    c= diva(a,m);
    unsigned long long int d ;
    d= b*c ;
    cout<<d<<endl;
    return 0;
}






