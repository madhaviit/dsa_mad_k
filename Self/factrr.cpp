#include <iostream>
using namespace std;
int main()
{
    int a;
    unsigned long long int factr = 1;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        factr = factr * i;
    }
    cout << factr;

    return 0;
}