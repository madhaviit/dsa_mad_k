#include<bits/stdc++.h>

using namespace std;
class Student;
class Teacher;
class Student
{
public:
    int studentage;
    float studentheight;
    friend bool operator==(Student s1,Teacher t1);
    
};
class Teacher
{
public:
    int teacherage;
    float teacherheight;
    friend bool operator==(Student s1,Teacher t1);
};
bool operator==(Student s1,Teacher t1)
{
    if (s1.studentage==t1.teacherage && s1.studentheight == t1.teacherheight)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    Student s1,s2,s3;
    s1.studentage=15; s1.studentheight=130;

    Teacher t1,t2,t3;
    t1.teacherage=25; t1.teacherheight = 190;
   
    if (s1==t1)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0; 
}