// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int a,b=0,c=0,i;
//     int d[20];
//     cout<<"Enter the base from 1 to 10: ";
//     cin>>a;
//     cout<<"Enter the number: ";
//     madhav:
//     cin>>d[0];
//     if(d[0]<a){
//         for(i=1 ; d[i-1]<a;i++){
//             cin>>d[i];
//             b= b*10 + d[i-1];
//         }
//     }
//     else{
//         goto madhav;
//     }
//     i--;
//     for(int j=0 ; j<i ; j++){
//         c = c + (pow(a,j) * d[j]) ;
//     }
//     cout<<"Converted Input is: "<<c<<endl;
//     return 0;
// }


#include <iostream>

using namespace std;

int main()
{
    int b;
    int n;
    cin >> b >> n;
    int ans = 0;
    int x = 1;

    while (n > 0)
    {
        if ((n % 10) >= b)
        {
            n = (n / 10);
        }
        else
        {
            ans = ans + ((n % 10) * x);
            x = x * b;
            n = (n / 10);
        }
    }
    cout << ans;

    return 0;
}