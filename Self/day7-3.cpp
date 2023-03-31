#include <iostream>
using namespace std;
class tollBooth
{
    int a, b;

public:
    tollBooth()
    {
        a = 0;
        b = 0;
    }
    tollBooth(int a, int b)
    {
        a = a;
        b = b;
    }
    void payCar()
    {
        a++;
        b = b + 50;
    }
    void nopayCar()
    {
        a++;
    }
    void display()
    {
        cout << " Total number of cars = " << a << endl;
        cout << "Total amount of money = " << b << endl;
    }
};
int main()
{
    tollBooth obj;
    while (true)
    {
        cout << "Press 1 to add nonpay car" << endl;
        cout << "Press 2 to add pay car" << endl;
        cout << "Press 0 to display and exit" << endl;
        int input;
        cin >> input;
        if (input == 0)
        {
            obj.display();
            break;
        }
        if (input == 1)
        {
            obj.nopayCar();
        }
        if (input == 2)
        {
            obj.payCar();
        }
    }
    return 0;
}