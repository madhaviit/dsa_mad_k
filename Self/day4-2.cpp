#include <iostream>
using namespace std;
int d, m, y, D, M, Y;
void my_func()
{
    if ((1 <= D <= 31 && (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12)) || (1 <= D <= 30 && (M == 4 || M == 6 || M == 9 || M == 11)) || (D <= 29 && M == 2))
    {
        if (1 <= D <= 30 && (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12))
        {
            d = d + 1;
        }
        if (D == 31 && (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10))
        {
            d = 1;
            m += 1;
        }
        if (D == 31 && M == 12)
        {
            d = 1;
            m = 1;
            y += 1;
        }
        if (1 <= D <= 29 && (M == 4 || M == 6 || M == 9 || M == 11))
            d += 1;
        if (D == 30 && (M == 4 || M == 6 || M == 9 || M == 11))
        {
            d = 1;
            m += 1;
        }
        if (1 <= D <= 27 && M == 2)
        {
            d += 1;
        }
        if (D == 28 && M == 2)
        {
            if (Y % 4 == 0)
            {
                if (Y % 100 == 0)
                {
                    if (Y % 400 == 0)
                        d = 29;
                    else
                    {
                        d = 1;
                        m = 3;
                    }
                }
                else
                    d = 29;
            }
            else
            {
                d = 1;
                m = 3;
            }
        }
        if (D == 29 && M == 2)
        {
            d = 1;
            m = 3;
        }
        cout << "The following day of " << D << "/" << M << "/" << Y << " is ";
        if (d < 10)
            cout << "0" << d << " / ";
        else
            cout << d << " / ";
        if (m < 10)
            cout << "0" << m << " / ";
        else
            cout << m << " / ";
        cout << y << endl;
    }
    else
        cout << "Invalid input" << endl;
    return;
}
int main()
{

    cout << "Enter the date in the format of DD MM YYYY: ";
    cin >> D >> M >> Y;
    d = D;
    m = M;
    y = Y;
    if (D == 29 && M == 2)
    {
        if (Y % 4 == 0)
        {
            if (Y % 100 == 0)
            {
                if (Y % 400 == 0)
                    my_func();
                else
                    cout << "invalid Input" << endl;
            }
            else
                my_func();
        }
        else
            cout << "Invalid Input" << endl;
    }
    else
        my_func();
    return 0;
}