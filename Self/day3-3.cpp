#include <iostream>

using namespace std;

int main()
{
    int a, b, c = 0, d;
    cin >> d;
    a = d;
    while (d > 0)
    {
        b = d % 10;
        c = c * 10 + b;
        d = d / 10;
    }
    if (a == c)
    {
        cout << "Number is  palindrome" << endl;
    }
    else
    {
        cout << "Number is not a palindrome" << endl;
    }

    return 0;
}