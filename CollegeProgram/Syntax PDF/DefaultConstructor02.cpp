//Default Constructor, defined inside class
#include<iostream>
#include<conio.h>

using namespace std;

class student
{
    int id;
    int roll;
public:
    student()
    {
        id = 10;
        roll = 11;
        cout <<"Id : " <<id <<endl;
        cout <<"Roll : " <<roll <<endl;
    }
};

// Default constructor, defined outside class

class student1
{
    string name;
    string add;
public :
    student1();
};

student1 :: student1()
{
    name="Chhotu";
    add="Motihari";

    cout <<"Name : " << name << endl;
    cout <<"Address : " << add << endl;
}

int main()
{
    student stu;
    student1 stu1;

    return 0;
}
