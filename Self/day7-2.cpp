#include <iostream>
int hcf(int m, int n)
{
    while (m != n)
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }
    return m;
}
using namespace std;
class Fraction
{
private:
    int n, d;

public:
    void collectData()
    {
        cout << "enter the Fraction in the form of x/y" << endl;
        string sf;
        cin >> sf;
        n = 0;
        d = 0;
        int i;
        for (i = 0; i < sf.size(); i++)
        {
            if (sf[i] == '/')
            {
                i++;
                break;
            }
            n = n * 10 + (sf[i] - '0');
        }
        for (int j = i; j < sf.size(); j++)
        {
            d = d * 10 + (sf[i] - '0');
        }
    }
    void add(Fraction f2)
    {
        int n1 = n * f2.d + f2.n * d;
        int d1 = d * f2.d;
        int k = hcf(n1, d1);
        n1 /= k;
        d1 /= k;
        cout << "sum of the Fractions is " << n1 << "/" << d1 << endl;
    }
};
int main()
{
    char p;
    p = 'y';
    while (p == 'y')
    {
        Fraction f1, f2;
        f1.collectData();
        f2.collectData();
        f1.add(f2);
        cout << "To continue the process press y" << endl;
        cin >> p;
    }
    return 0;
}