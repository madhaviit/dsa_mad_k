// Suppose you have a main() with three local arrays, all the same size and type (say float). The
// first two are already initialized to values. Write a function called addarrays() that accepts the
// addresses of the three arrays as arguments; adds the contents of the first two arrays together,
// element by element; and places the results in the third array before returning. A fourth
// argument to this function can carry the size of the arrays. Use pointer notation throughout; the
// only place you need brackets is in defining the arrays.

#include <iostream>
using namespace std;

float *addarrays(float *arr1,float *arr2,float*arr3,int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr3+i) = *(arr1+i)+*(arr2+i);
    }
    return arr3;
}



int main()
{
    float arr1[5]={1.2, 2.4, 3.6, 4.8, 6.0};
    float arr2[5]={0.9, 0.6, 0.4, 0.2, 0.0};
    float arr3[5];
    int a= 5;
    float *output = addarrays(arr1,arr2,arr3,a);
    cout<<"third array will be : "<<endl;
    for (int i = 0; i < a; i++)
    {
        cout<< *(output+i)<< " ";
    }
    cout<<endl;
    

    return 0;
}