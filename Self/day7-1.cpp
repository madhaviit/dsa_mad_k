// Create a class called Time that maintains the time in 11:59:59 format. Include appropriate data
// members, constructors, and appropriate member functions in the class to set the time, update
// the time, etc...
#include <iostream>
using namespace std;

class Time
{
private:
    int hrs;
    int min;
    int sec;

public:
    Time()
    {
        hrs = 0;
        min = 0;
        sec = 0;
    }
    Time(int h, int m, int s)
    {
        hrs = h;
        min = m;
        sec = s;
        setTime();
    }
    void setTime()
    {
        if (sec >= 60)
        {
            min += (sec / 60);
            sec %= 60;
        }
        if (min >= 60)
        {
            hrs += (min / 60);
            min %= 60;
        }
        if (hrs >= 24)
        {
            hrs %= 24;
        }
    }
    void updateTime(Time obj)
    {
        hrs += obj.hrs;
        min += obj.min;
        sec += obj.sec;
        setTime();
    }
    void display()
    {
        cout << "The time is: ";
        if (hrs < 10)
        {
            cout << "0" << hrs << ":";
        }
        else
        {
            cout << hrs << ":";
        }
        if (min < 10)
        {
            cout << "0" << min << ":";
        }
        else
        {
            cout << min << ":";
        }
        if (sec < 10)
        {
            cout << "0" << sec << endl;
        }
        else
        {
            cout << sec << endl;
        }
    }
};

int main()
{
    Time T1(10, 74, 61);
    cout << "For T1: " << endl;
    T1.display();
    Time T2(17, 47, 85);
    cout << "For T2: " << endl;
    T2.display();
    T1.updateTime(T2);
    cout << "After updating time is : " << endl;
    T1.display();
    return 0;
}
