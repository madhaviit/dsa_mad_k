#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    int squares = row*col;
    if (squares%2==0)
    {
        cout<<squares/2;
    }
    else{
        cout<<(squares-1)/2;
    }
    
    return 0;
}