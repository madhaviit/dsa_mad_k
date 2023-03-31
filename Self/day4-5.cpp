#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float c,f;
    cout<<"Enter the value of temperature in degree Celsius: ";
    cin>>c;
    f = (c*1.8) +32;
    cout<<c<<fixed<<setprecision(1)<<" degrees celsius coverts to "<<f<<fixed<<setprecision(1)<<" degrees Fahrenheit "<<endl;
return 0;
}