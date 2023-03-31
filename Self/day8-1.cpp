// Imagine a publishing company that markets both book and audiocassette versions of its works.
// Create a class publication that stores the title (a string) and price (type float) of a publication.
// From this class derive two classes: book, which adds a page count (type int), and tape, which
// adds a playing time in minutes (type float). Each of these three classes should have a getdata()
// function to get its data from the user at the keyboard, and a putdata() function to display its
// data. Write a main() program to test the book and tape classes by creating instances of them,
// asking the user to fill in data with getdata(), and then displaying the data with putdata().

#include <iostream>
using namespace std;

class publication
{
private:
    string title;
    float price;

public:
    void getdata()
    {
        string s;
        float p;
        cout << "Title: ";
        cin >> s;
        cout << "Price: ";
        cin >> p;
        title = s;
        price = p;
    }
    void putdata()
    {
        cout << "Title = " << title << endl;
        cout << "Price = " << price << endl;
    }
};
class book : public publication
{
private:
    int pages;

public:
    void getdata()
    {
        int n;
        cout << "number of pages:";
        cin >> n;
        pages = n;
    }
    void putdata()
    {
        cout << "The no. of pages in the book are :" << pages << endl;
    }
};
class tape : public publication
{
private:
    float minutes;

public:
    void getdata()
    {
        float min;
        cout << "Enter the playing time of the audio casettes in mins: ";
        cin >> min;
        minutes = min;
    }
    void putdata()
    {
        cout << "The playing time of audio casettes is: " << minutes << " ";
    }
};
int main()
{
    

    book obj1;
    tape obj2;
    
    obj1.publication::getdata();
    obj1.getdata();
    obj2.publication::getdata();
    obj2.getdata();
    cout << endl;
    cout << "Details of Book : ";
    obj1.publication::putdata();
    obj1.putdata();
    cout << endl;
    cout << "Details of Tape : ";
    obj2.publication::putdata();
    obj2.putdata();
    cout << endl;
    return 0;
}
