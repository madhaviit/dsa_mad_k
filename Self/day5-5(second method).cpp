#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    vector<int> mad;
    cout << "enter the base : ";
    cin >> a;
    cout << "enter the number : ";
    cin >> b;

    int key = 0;
    string nmbr = to_string(b);
    for (int i = 0; i < nmbr.size(); i++)
    {
        while (key == 0)
        {
            if (nmbr[i] < a)
            {
                mad.push_back(nmbr[i]);
                key = 1;
            }
            i++;
        }
        while (key == 1)
        {
            if (nmbr[i] > a - 1)
            {
                break;
            }
            mad.push_back(nmbr[i]);
        }
    }
    for (int j = 0; j < mad.size(); j++)
    {
        c = c + (pow(a, j) * (mad[mad.size() - j - 1] - 48));
    }
    cout << "Converted Input is: " << c << endl;

    return 0;
}