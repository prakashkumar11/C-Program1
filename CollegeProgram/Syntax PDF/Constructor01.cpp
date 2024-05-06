//class with constructor, defined inside class

#include<iostream>

using namespace std;

class student
{
private:
    int id;
    int roll;
public:
    student() //constructor member function defined
    {
        id=10; //constructor value initialized
        roll=145; //constructor value initialized
        cout <<"Id : " <<id <<endl;
        cout <<"Roll : " <<roll <<endl;
    }
};

// class with constructor, defined outside class

class student1
{
private:
    string name;
    int roll;
public:
    student1(); //constructor member function
};

student1 :: student1() //constructor member function
{
    name="Chhotu";
    roll=47;

    cout <<"Name : " <<name <<endl;
    cout <<"Roll : " <<roll <<endl;
}

int main()
{
    student stu;
    student1 stu1;

    return 0;
}
