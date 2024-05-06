// Copy Constructor


#include<iostream>
#include<conio.h>

using namespace std;

class student
{
private:
    int roll;
    int mark;
public :
    student (int m, int n)
    {
        roll = m;
        mark = n;
    }
    student(student &t); //copy constructor
    void show_data()
    {
        cout <<"Roll : " << roll << endl;
        cout <<"Mark : " << mark << endl;
    }
};

student :: student(student &t) //copy constructor defined
{
    roll =t.roll;
    mark =t.mark;
}

int main()
{
    cout <<"\nParameterized constructor output r\n";
    student r(60,130); //Parameterized Constructor
    r.show_data(); //Parameterized constructor output

    cout <<"\n\nCopy Constructor output stu(r)\n";
    student stu(r); //copy constructor
    stu.show_data(); //copy constructor output

    return 0;


}
