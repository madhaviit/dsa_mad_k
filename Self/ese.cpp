#include<iostream>
using namespace std;
class person
{
    protected:
    int age;
    string name;
    public:
    person();
    person(int a, string n)
    {age=a; name=n;}
    void displayage ()
    {
        cout<<age;
    }
    void displayaname ()
    {
        cout<<name;
    }
};

class Teacher:public person
{
    int experience;
    public:
    Teacher(int a, string n, int ex)
    {
        experience=ex;
    }
    void displayexperience () 
    {
        cout<<experience;
    }
};
class Student:public person
{
    int marks;
    public:
    Student(int a, string n, int ms)
    {
        marks=ms;
    }
    void displaymarks () 
    {
        cout<<marks;
    }
};


int main()
{
    person a (10,madhav);
    Teacher b (46,mukund,18);
    Student c (19,kadam,89);
    return 0;
}
