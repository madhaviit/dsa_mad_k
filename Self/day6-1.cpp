#include <iostream>
using namespace std;
int main(){
        double array[100];
        double sum =0;
        for (int i=0;i<100;++i){
            cin>>array[i];
            sum +=array[i];
        }
        cout<<"The sum of the given array is: "<<sum<<endl;    
return 0;
}